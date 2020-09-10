/* Non Linear Systems */
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESST4B_model.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESST4B_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* inner equations */

/*
equation index: 880
type: SIMPLE_ASSIGN
eSST4B.lV_Gate.n1 = smooth(0, if eSST4B.add2.y > eSST4B.limiter1.uMax then eSST4B.limiter1.uMax else if eSST4B.add2.y < eSST4B.limiter1.uMin then eSST4B.limiter1.uMin else eSST4B.add2.y)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_880(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,880};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  tmp0 = Greater(data->localData[0]->realVars[73] /* eSST4B.add2.y variable */,data->simulationInfo->realParameter[154] /* eSST4B.limiter1.uMax PARAM */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->simulationInfo->realParameter[154] /* eSST4B.limiter1.uMax PARAM */;
  }
  else
  {
    tmp1 = Less(data->localData[0]->realVars[73] /* eSST4B.add2.y variable */,data->simulationInfo->realParameter[155] /* eSST4B.limiter1.uMin PARAM */);
    tmp3 = (tmp1?data->simulationInfo->realParameter[155] /* eSST4B.limiter1.uMin PARAM */:data->localData[0]->realVars[73] /* eSST4B.add2.y variable */);
  }
  data->localData[0]->realVars[74] /* eSST4B.lV_Gate.n1 variable */ = tmp3;
  TRACE_POP
}
/*
equation index: 881
type: SIMPLE_ASSIGN
eSST4B.lV_Gate.p = if eSST4B.lV_Gate.n1 > const1.k then const1.k else eSST4B.lV_Gate.n1
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_881(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,881};
  modelica_boolean tmp0;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[74] /* eSST4B.lV_Gate.n1 variable */, data->simulationInfo->realParameter[36] /* const1.k PARAM */, 25, Greater);
  data->localData[0]->realVars[75] /* eSST4B.lV_Gate.p variable */ = (tmp0?data->simulationInfo->realParameter[36] /* const1.k PARAM */:data->localData[0]->realVars[74] /* eSST4B.lV_Gate.n1 variable */);
  TRACE_POP
}
/*
equation index: 882
type: SIMPLE_ASSIGN
eSST4B.EFD = eSST4B.lV_Gate.p * eSST4B.maxLimiter.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_882(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,882};
  data->localData[0]->realVars[57] /* eSST4B.EFD variable */ = (data->localData[0]->realVars[75] /* eSST4B.lV_Gate.p variable */) * (data->localData[0]->realVars[77] /* eSST4B.maxLimiter.y variable */);
  TRACE_POP
}
/*
equation index: 883
type: SIMPLE_ASSIGN
eSST4B.add1.u1 = eSST4B.gain.k * eSST4B.EFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_883(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,883};
  data->localData[0]->realVars[72] /* eSST4B.add1.u1 variable */ = (data->simulationInfo->realParameter[150] /* eSST4B.gain.k PARAM */) * (data->localData[0]->realVars[57] /* eSST4B.EFD variable */);
  TRACE_POP
}
/*
equation index: 884
type: SIMPLE_ASSIGN
eSST4B.Gain2.u = eSST4B.add1.k1 * eSST4B.add1.u1 + eSST4B.add1.k2 * eSST4B.VA.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_884(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,884};
  data->localData[0]->realVars[61] /* eSST4B.Gain2.u variable */ = (data->simulationInfo->realParameter[141] /* eSST4B.add1.k1 PARAM */) * (data->localData[0]->realVars[72] /* eSST4B.add1.u1 variable */) + (data->simulationInfo->realParameter[142] /* eSST4B.add1.k2 PARAM */) * (data->localData[0]->realVars[66] /* eSST4B.VA.y variable */);
  TRACE_POP
}
/*
equation index: 885
type: SIMPLE_ASSIGN
eSST4B.Gain2.y = eSST4B.Gain2.k * eSST4B.Gain2.u
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_885(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,885};
  data->localData[0]->realVars[62] /* eSST4B.Gain2.y variable */ = (data->simulationInfo->realParameter[88] /* eSST4B.Gain2.k PARAM */) * (data->localData[0]->realVars[61] /* eSST4B.Gain2.u variable */);
  TRACE_POP
}

void residualFunc894(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,894};
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
  data->localData[0]->realVars[73] /* eSST4B.add2.y variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_880(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_881(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_882(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_883(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_884(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_885(data, threadData);
  /* body */
  res[0] = (data->simulationInfo->realParameter[144] /* eSST4B.add2.k2 PARAM */) * (data->localData[0]->realVars[2] /* eSST4B.VM1.y STATE(1) */) + (data->simulationInfo->realParameter[143] /* eSST4B.add2.k1 PARAM */) * (data->localData[0]->realVars[62] /* eSST4B.Gain2.y variable */) - data->localData[0]->realVars[73] /* eSST4B.add2.y variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS894(NONLINEAR_SYSTEM_DATA* inSysData)
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
void initializeStaticDataNLS894(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for eSST4B.add2.y */
  sysData->nominal[i] = data->modelData->realVarsData[73].attribute /* eSST4B.add2.y */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[73].attribute /* eSST4B.add2.y */.min;
  sysData->max[i++]   = data->modelData->realVarsData[73].attribute /* eSST4B.add2.y */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS894(sysData);
}

void getIterationVarsNLS894(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[73] /* eSST4B.add2.y variable */;
}


/* inner equations */

/*
equation index: 752
type: SIMPLE_ASSIGN
constantLoad.v = sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_752(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,752};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[132] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[131] /* pwLine1.vs.im variable */;
  data->localData[0]->realVars[53] /* constantLoad.v variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 753
type: SIMPLE_ASSIGN
constantLoad.kP = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a0 + constantLoad.a1 * cos(constantLoad.v * constantLoad.wp) + constantLoad.b1 * sin(constantLoad.v * constantLoad.wp) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_753(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,753};
  modelica_boolean tmp0;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[53] /* constantLoad.v variable */, data->simulationInfo->realParameter[41] /* constantLoad.PQBRAK PARAM */, 13, Less);
  data->localData[0]->realVars[50] /* constantLoad.kP variable */ = (tmp0?data->simulationInfo->realParameter[60] /* constantLoad.a0 PARAM */ + (data->simulationInfo->realParameter[61] /* constantLoad.a1 PARAM */) * (cos((data->localData[0]->realVars[53] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[67] /* constantLoad.b1 PARAM */) * (sin((data->localData[0]->realVars[53] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))):1.0);
  TRACE_POP
}
/*
equation index: 754
type: SIMPLE_ASSIGN
constantLoad.kI = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (-1.0 + constantLoad.b2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_754(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,754};
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
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[53] /* constantLoad.v variable */, 0.5, 2, Less);
  tmp15 = (modelica_boolean)tmp0;
  if(tmp15)
  {
    tmp1 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
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
    }tmp8 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
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
  data->localData[0]->realVars[49] /* constantLoad.kI variable */ = tmp16;
  TRACE_POP
}
/*
equation index: 755
type: SIMPLE_ASSIGN
constantLoad.Q = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_755(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,755};
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
    tmp2 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[49] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[44] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[48] /* constantLoad.S_Y.im PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[50] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[46] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[70] /* constantLoad.d_Q PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[49] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[44] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[48] /* constantLoad.S_Y.im PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[50] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[46] /* constantLoad.S_P.im PARAM */);
  }
  data->localData[0]->realVars[47] /* constantLoad.Q variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 756
type: SIMPLE_ASSIGN
constantLoad.P = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_756(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,756};
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
    tmp2 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[49] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[45] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[49] /* constantLoad.S_Y.re PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[50] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[47] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[69] /* constantLoad.d_P PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[49] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[45] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[49] /* constantLoad.S_Y.re PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[50] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[47] /* constantLoad.S_P.re PARAM */);
  }
  data->localData[0]->realVars[46] /* constantLoad.P variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 757
type: SIMPLE_ASSIGN
gENROU.PSIq = (-gENROU.PSIppq) - gENROU.Xppq * gENROU.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_757(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,757};
  data->localData[0]->realVars[99] /* gENROU.PSIq variable */ = (-data->localData[0]->realVars[98] /* gENROU.PSIppq variable */) - ((data->simulationInfo->realParameter[241] /* gENROU.Xppq PARAM */) * (data->localData[0]->realVars[106] /* gENROU.iq variable */));
  TRACE_POP
}
/*
equation index: 758
type: SIMPLE_ASSIGN
pwLine.is.im = ($cse6 * gENROU.iq - $cse7 * gENROU.id) * gENROU.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_758(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,758};
  data->localData[0]->realVars[117] /* pwLine.is.im variable */ = ((data->localData[0]->realVars[28] /* $cse6 variable */) * (data->localData[0]->realVars[106] /* gENROU.iq variable */) - ((data->localData[0]->realVars[29] /* $cse7 variable */) * (data->localData[0]->realVars[105] /* gENROU.id variable */))) * (data->simulationInfo->realParameter[186] /* gENROU.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 759
type: SIMPLE_ASSIGN
pwLine.is.re = ($cse7 * gENROU.iq - (-$cse6) * gENROU.id) * gENROU.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_759(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,759};
  data->localData[0]->realVars[118] /* pwLine.is.re variable */ = ((data->localData[0]->realVars[29] /* $cse7 variable */) * (data->localData[0]->realVars[106] /* gENROU.iq variable */) - (((-data->localData[0]->realVars[28] /* $cse6 variable */)) * (data->localData[0]->realVars[105] /* gENROU.id variable */))) * (data->simulationInfo->realParameter[186] /* gENROU.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 760
type: SIMPLE_ASSIGN
gENROU.ud = (-gENROU.PSIq) - gENROU.R_a * gENROU.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_760(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,760};
  data->localData[0]->realVars[107] /* gENROU.ud variable */ = (-data->localData[0]->realVars[99] /* gENROU.PSIq variable */) - ((data->simulationInfo->realParameter[223] /* gENROU.R_a PARAM */) * (data->localData[0]->realVars[105] /* gENROU.id variable */));
  TRACE_POP
}
/*
equation index: 761
type: SIMPLE_ASSIGN
gENROU.PSId = gENROU.PSIppd - gENROU.Xppd * gENROU.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_761(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,761};
  data->localData[0]->realVars[95] /* gENROU.PSId variable */ = data->localData[0]->realVars[97] /* gENROU.PSIppd variable */ - ((data->simulationInfo->realParameter[240] /* gENROU.Xppd PARAM */) * (data->localData[0]->realVars[105] /* gENROU.id variable */));
  TRACE_POP
}
/*
equation index: 762
type: SIMPLE_ASSIGN
gENROU.uq = gENROU.PSId - gENROU.R_a * gENROU.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_762(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,762};
  data->localData[0]->realVars[108] /* gENROU.uq variable */ = data->localData[0]->realVars[95] /* gENROU.PSId variable */ - ((data->simulationInfo->realParameter[223] /* gENROU.R_a PARAM */) * (data->localData[0]->realVars[106] /* gENROU.iq variable */));
  TRACE_POP
}
/*
equation index: 763
type: SIMPLE_ASSIGN
pwLine.vs.re = $cse6 * gENROU.ud + $cse7 * gENROU.uq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_763(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,763};
  data->localData[0]->realVars[120] /* pwLine.vs.re variable */ = (data->localData[0]->realVars[28] /* $cse6 variable */) * (data->localData[0]->realVars[107] /* gENROU.ud variable */) + (data->localData[0]->realVars[29] /* $cse7 variable */) * (data->localData[0]->realVars[108] /* gENROU.uq variable */);
  TRACE_POP
}
/*
equation index: 764
type: SIMPLE_ASSIGN
pwLine.vs.im = $cse6 * gENROU.uq - $cse7 * gENROU.ud
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_764(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,764};
  data->localData[0]->realVars[119] /* pwLine.vs.im variable */ = (data->localData[0]->realVars[28] /* $cse6 variable */) * (data->localData[0]->realVars[108] /* gENROU.uq variable */) - ((data->localData[0]->realVars[29] /* $cse7 variable */) * (data->localData[0]->realVars[107] /* gENROU.ud variable */));
  TRACE_POP
}
/*
equation index: 765
type: SIMPLE_ASSIGN
gENCLS.p.ir = ((-$cse1) * gENCLS.id - $cse2 * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_765(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,765};
  data->localData[0]->realVars[89] /* gENCLS.p.ir variable */ = (((-data->localData[0]->realVars[24] /* $cse1 variable */)) * (data->localData[0]->realVars[85] /* gENCLS.id variable */) - ((data->localData[0]->realVars[25] /* $cse2 variable */) * (data->localData[0]->realVars[86] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[160] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 766
type: SIMPLE_ASSIGN
gENCLS.p.ii = ($cse2 * gENCLS.id - $cse1 * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_766(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,766};
  data->localData[0]->realVars[88] /* gENCLS.p.ii variable */ = ((data->localData[0]->realVars[25] /* $cse2 variable */) * (data->localData[0]->realVars[85] /* gENCLS.id variable */) - ((data->localData[0]->realVars[24] /* $cse1 variable */) * (data->localData[0]->realVars[86] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[160] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 767
type: SIMPLE_ASSIGN
gENCLS.vq = gENCLS.eq + (-gENCLS.R_a) * gENCLS.iq - gENCLS.X_d * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_767(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,767};
  data->localData[0]->realVars[91] /* gENCLS.vq variable */ = data->localData[0]->realVars[5] /* gENCLS.eq STATE(1) */ + ((-data->simulationInfo->realParameter[166] /* gENCLS.R_a PARAM */)) * (data->localData[0]->realVars[86] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[169] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[85] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 768
type: SIMPLE_ASSIGN
gENCLS.vd = gENCLS.X_d * gENCLS.iq - gENCLS.R_a * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_768(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,768};
  data->localData[0]->realVars[90] /* gENCLS.vd variable */ = (data->simulationInfo->realParameter[169] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[86] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[166] /* gENCLS.R_a PARAM */) * (data->localData[0]->realVars[85] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 769
type: SIMPLE_ASSIGN
pwLine4.ir.im = (-pwLine1.ir.im) - gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_769(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,769};
  data->localData[0]->realVars[147] /* pwLine4.ir.im variable */ = (-data->localData[0]->realVars[125] /* pwLine1.ir.im variable */) - data->localData[0]->realVars[88] /* gENCLS.p.ii variable */;
  TRACE_POP
}
/*
equation index: 770
type: SIMPLE_ASSIGN
pwLine1.ir.re = (-pwLine4.ir.re) - gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_770(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,770};
  data->localData[0]->realVars[126] /* pwLine1.ir.re variable */ = (-data->localData[0]->realVars[148] /* pwLine4.ir.re variable */) - data->localData[0]->realVars[89] /* gENCLS.p.ir variable */;
  TRACE_POP
}
/*
equation index: 771
type: SIMPLE_ASSIGN
pwFault.p.ii = (-pwLine3.ir.im) - pwLine4.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_771(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,771};
  data->localData[0]->realVars[109] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[137] /* pwLine3.ir.im variable */) - data->localData[0]->realVars[149] /* pwLine4.is.im variable */;
  TRACE_POP
}
/*
equation index: 772
type: SIMPLE_ASSIGN
pwFault.p.ir = (-pwLine3.ir.re) - pwLine4.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_772(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,772};
  data->localData[0]->realVars[110] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[138] /* pwLine3.ir.re variable */) - data->localData[0]->realVars[150] /* pwLine4.is.re variable */;
  TRACE_POP
}
/*
equation index: 773
type: SIMPLE_ASSIGN
constantLoad.p.ii = (-pwLine.ir.im) - pwLine1.is.im - pwLine3.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_773(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,773};
  data->localData[0]->realVars[51] /* constantLoad.p.ii variable */ = (-data->localData[0]->realVars[115] /* pwLine.ir.im variable */) - data->localData[0]->realVars[127] /* pwLine1.is.im variable */ - data->localData[0]->realVars[139] /* pwLine3.is.im variable */;
  TRACE_POP
}
/*
equation index: 774
type: SIMPLE_ASSIGN
pwLine.ir.re = (-pwLine1.is.re) - pwLine3.is.re - constantLoad.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_774(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,774};
  data->localData[0]->realVars[116] /* pwLine.ir.re variable */ = (-data->localData[0]->realVars[128] /* pwLine1.is.re variable */) - data->localData[0]->realVars[140] /* pwLine3.is.re variable */ - data->localData[0]->realVars[52] /* constantLoad.p.ir variable */;
  TRACE_POP
}

void residualFunc842(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,842};
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
  /* iteration variables */
  for (i=0; i<22; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<22; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[128] /* pwLine1.is.re variable */ = xloc[0];
  data->localData[0]->realVars[52] /* constantLoad.p.ir variable */ = xloc[1];
  data->localData[0]->realVars[115] /* pwLine.ir.im variable */ = xloc[2];
  data->localData[0]->realVars[127] /* pwLine1.is.im variable */ = xloc[3];
  data->localData[0]->realVars[138] /* pwLine3.ir.re variable */ = xloc[4];
  data->localData[0]->realVars[150] /* pwLine4.is.re variable */ = xloc[5];
  data->localData[0]->realVars[149] /* pwLine4.is.im variable */ = xloc[6];
  data->localData[0]->realVars[137] /* pwLine3.ir.im variable */ = xloc[7];
  data->localData[0]->realVars[139] /* pwLine3.is.im variable */ = xloc[8];
  data->localData[0]->realVars[140] /* pwLine3.is.re variable */ = xloc[9];
  data->localData[0]->realVars[148] /* pwLine4.ir.re variable */ = xloc[10];
  data->localData[0]->realVars[125] /* pwLine1.ir.im variable */ = xloc[11];
  data->localData[0]->realVars[85] /* gENCLS.id variable */ = xloc[12];
  data->localData[0]->realVars[86] /* gENCLS.iq variable */ = xloc[13];
  data->localData[0]->realVars[130] /* pwLine1.vr.re variable */ = xloc[14];
  data->localData[0]->realVars[129] /* pwLine1.vr.im variable */ = xloc[15];
  data->localData[0]->realVars[105] /* gENROU.id variable */ = xloc[16];
  data->localData[0]->realVars[106] /* gENROU.iq variable */ = xloc[17];
  data->localData[0]->realVars[131] /* pwLine1.vs.im variable */ = xloc[18];
  data->localData[0]->realVars[132] /* pwLine1.vs.re variable */ = xloc[19];
  data->localData[0]->realVars[141] /* pwLine3.vr.im variable */ = xloc[20];
  data->localData[0]->realVars[142] /* pwLine3.vr.re variable */ = xloc[21];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_752(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_753(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_754(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_755(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_756(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_757(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_758(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_759(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_760(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_761(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_762(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_763(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_764(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_765(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_766(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_767(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_768(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_769(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_770(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_771(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_772(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_773(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_774(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[24] /* $cse1 variable */) * (data->localData[0]->realVars[91] /* gENCLS.vq variable */) + ((-data->localData[0]->realVars[25] /* $cse2 variable */)) * (data->localData[0]->realVars[90] /* gENCLS.vd variable */) - data->localData[0]->realVars[129] /* pwLine1.vr.im variable */;

  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, data->simulationInfo->realParameter[306] /* pwLine3.t1 PARAM */, 5, GreaterEq);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->timeValue, data->simulationInfo->realParameter[307] /* pwLine3.t2 PARAM */, 6, Less);
  res[1] = ((tmp0 && tmp1)?data->localData[0]->realVars[139] /* pwLine3.is.im variable */:data->localData[0]->realVars[131] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[141] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[305] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[139] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[132] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[302] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[131] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[303] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[304] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[140] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[131] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[302] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[132] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[303] /* pwLine3.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp2, data->localData[0]->timeValue, data->simulationInfo->realParameter[306] /* pwLine3.t1 PARAM */, 5, GreaterEq);
  RELATIONHYSTERESIS(tmp3, data->localData[0]->timeValue, data->simulationInfo->realParameter[307] /* pwLine3.t2 PARAM */, 6, Less);
  res[2] = ((tmp2 && tmp3)?data->localData[0]->realVars[140] /* pwLine3.is.re variable */:data->localData[0]->realVars[132] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[142] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[305] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[140] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[131] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[302] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[132] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[303] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[304] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[139] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[132] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[302] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[131] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[303] /* pwLine3.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp4, data->localData[0]->timeValue, data->simulationInfo->realParameter[306] /* pwLine3.t1 PARAM */, 5, GreaterEq);
  RELATIONHYSTERESIS(tmp5, data->localData[0]->timeValue, data->simulationInfo->realParameter[307] /* pwLine3.t2 PARAM */, 6, Less);
  res[3] = ((tmp4 && tmp5)?data->localData[0]->realVars[137] /* pwLine3.ir.im variable */:data->localData[0]->realVars[141] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[131] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[305] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[137] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[142] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[302] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[141] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[303] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[304] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[138] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[141] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[302] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[142] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[303] /* pwLine3.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp6, data->localData[0]->timeValue, data->simulationInfo->realParameter[317] /* pwLine4.t1 PARAM */, 7, GreaterEq);
  RELATIONHYSTERESIS(tmp7, data->localData[0]->timeValue, data->simulationInfo->realParameter[318] /* pwLine4.t2 PARAM */, 8, Less);
  res[4] = ((tmp6 && tmp7)?data->localData[0]->realVars[150] /* pwLine4.is.re variable */:data->localData[0]->realVars[142] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[130] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[316] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[150] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[141] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[313] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[142] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[314] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[315] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[149] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[142] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[313] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[141] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[314] /* pwLine4.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp8, data->localData[0]->timeValue, data->simulationInfo->realParameter[273] /* pwFault.t1 PARAM */, 9, Less);
  tmp17 = (modelica_boolean)tmp8;
  if(tmp17)
  {
    tmp18 = data->localData[0]->realVars[109] /* pwFault.p.ii variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp9, data->localData[0]->timeValue, data->simulationInfo->realParameter[274] /* pwFault.t2 PARAM */, 10, Less);
    tmp15 = (modelica_boolean)(tmp9 && data->simulationInfo->booleanParameter[77] /* pwFault.ground PARAM */);
    if(tmp15)
    {
      tmp16 = data->localData[0]->realVars[142] /* pwLine3.vr.re variable */ - 1e-10;
    }
    else
    {
      RELATIONHYSTERESIS(tmp10, data->localData[0]->timeValue, data->simulationInfo->realParameter[274] /* pwFault.t2 PARAM */, 10, Less);
      tmp13 = (modelica_boolean)tmp10;
      if(tmp13)
      {
        tmp11 = data->simulationInfo->realParameter[272] /* pwFault.X PARAM */;
        tmp12 = data->simulationInfo->realParameter[271] /* pwFault.R PARAM */;
        tmp14 = data->localData[0]->realVars[109] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[271] /* pwFault.R PARAM */) * (data->localData[0]->realVars[141] /* pwLine3.vr.im variable */) - ((data->simulationInfo->realParameter[272] /* pwFault.X PARAM */) * (data->localData[0]->realVars[142] /* pwLine3.vr.re variable */)),(tmp11 * tmp11) + (tmp12 * tmp12),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
      }
      else
      {
        tmp14 = data->localData[0]->realVars[109] /* pwFault.p.ii variable */;
      }
      tmp16 = tmp14;
    }
    tmp18 = tmp16;
  }
  res[5] = tmp18;

  RELATIONHYSTERESIS(tmp19, data->localData[0]->timeValue, data->simulationInfo->realParameter[317] /* pwLine4.t1 PARAM */, 7, GreaterEq);
  RELATIONHYSTERESIS(tmp20, data->localData[0]->timeValue, data->simulationInfo->realParameter[318] /* pwLine4.t2 PARAM */, 8, Less);
  res[6] = ((tmp19 && tmp20)?data->localData[0]->realVars[149] /* pwLine4.is.im variable */:data->localData[0]->realVars[141] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[129] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[316] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[149] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[142] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[313] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[141] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[314] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[315] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[150] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[141] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[313] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[142] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[314] /* pwLine4.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp21, data->localData[0]->timeValue, data->simulationInfo->realParameter[273] /* pwFault.t1 PARAM */, 9, Less);
  tmp30 = (modelica_boolean)tmp21;
  if(tmp30)
  {
    tmp31 = data->localData[0]->realVars[110] /* pwFault.p.ir variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp22, data->localData[0]->timeValue, data->simulationInfo->realParameter[274] /* pwFault.t2 PARAM */, 10, Less);
    tmp28 = (modelica_boolean)(tmp22 && data->simulationInfo->booleanParameter[77] /* pwFault.ground PARAM */);
    if(tmp28)
    {
      tmp29 = data->localData[0]->realVars[141] /* pwLine3.vr.im variable */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp23, data->localData[0]->timeValue, data->simulationInfo->realParameter[274] /* pwFault.t2 PARAM */, 10, Less);
      tmp26 = (modelica_boolean)tmp23;
      if(tmp26)
      {
        tmp24 = data->simulationInfo->realParameter[271] /* pwFault.R PARAM */;
        tmp25 = data->simulationInfo->realParameter[272] /* pwFault.X PARAM */;
        tmp27 = data->localData[0]->realVars[110] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[271] /* pwFault.R PARAM */) * (data->localData[0]->realVars[142] /* pwLine3.vr.re variable */) + (data->simulationInfo->realParameter[272] /* pwFault.X PARAM */) * (data->localData[0]->realVars[141] /* pwLine3.vr.im variable */),(tmp24 * tmp24) + (tmp25 * tmp25),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp27 = data->localData[0]->realVars[110] /* pwFault.p.ir variable */;
      }
      tmp29 = tmp27;
    }
    tmp31 = tmp29;
  }
  res[7] = tmp31;

  RELATIONHYSTERESIS(tmp32, data->localData[0]->timeValue, data->simulationInfo->realParameter[306] /* pwLine3.t1 PARAM */, 5, GreaterEq);
  RELATIONHYSTERESIS(tmp33, data->localData[0]->timeValue, data->simulationInfo->realParameter[307] /* pwLine3.t2 PARAM */, 6, Less);
  res[8] = ((tmp32 && tmp33)?data->localData[0]->realVars[138] /* pwLine3.ir.re variable */:data->localData[0]->realVars[142] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[132] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[305] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[138] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[141] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[302] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[142] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[303] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[304] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[137] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[142] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[302] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[141] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[303] /* pwLine3.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp34, data->localData[0]->timeValue, data->simulationInfo->realParameter[295] /* pwLine1.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp35, data->localData[0]->timeValue, data->simulationInfo->realParameter[296] /* pwLine1.t2 PARAM */, 12, Less);
  res[9] = ((tmp34 && tmp35)?data->localData[0]->realVars[126] /* pwLine1.ir.re variable */:data->localData[0]->realVars[130] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[132] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[294] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[126] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[129] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[291] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[130] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[292] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[293] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[125] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[130] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[291] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[129] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[292] /* pwLine1.Y.re PARAM */))))));

  res[10] = (data->localData[0]->realVars[131] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[51] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[132] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[52] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[46] /* constantLoad.P variable */;

  res[11] = (data->localData[0]->realVars[131] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[52] /* constantLoad.p.ir variable */) + ((-data->localData[0]->realVars[132] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[51] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[47] /* constantLoad.Q variable */;

  RELATIONHYSTERESIS(tmp36, data->localData[0]->timeValue, data->simulationInfo->realParameter[284] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp37, data->localData[0]->timeValue, data->simulationInfo->realParameter[285] /* pwLine.t2 PARAM */, 1, Less);
  res[12] = ((tmp36 && tmp37)?data->localData[0]->realVars[116] /* pwLine.ir.re variable */:data->localData[0]->realVars[132] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[120] /* pwLine.vs.re variable */ - ((data->simulationInfo->realParameter[283] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[116] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[131] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[280] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[132] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[281] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[282] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[115] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[132] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[280] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[131] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[281] /* pwLine.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp38, data->localData[0]->timeValue, data->simulationInfo->realParameter[284] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp39, data->localData[0]->timeValue, data->simulationInfo->realParameter[285] /* pwLine.t2 PARAM */, 1, Less);
  res[13] = ((tmp38 && tmp39)?data->localData[0]->realVars[115] /* pwLine.ir.im variable */:data->localData[0]->realVars[131] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[119] /* pwLine.vs.im variable */ - ((data->simulationInfo->realParameter[283] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[115] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[132] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[280] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[131] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[281] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[282] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[116] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[131] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[280] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[132] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[281] /* pwLine.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp40, data->localData[0]->timeValue, data->simulationInfo->realParameter[284] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp41, data->localData[0]->timeValue, data->simulationInfo->realParameter[285] /* pwLine.t2 PARAM */, 1, Less);
  res[14] = ((tmp40 && tmp41)?data->localData[0]->realVars[118] /* pwLine.is.re variable */:data->localData[0]->realVars[120] /* pwLine.vs.re variable */ - data->localData[0]->realVars[132] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[283] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[118] /* pwLine.is.re variable */ + (data->localData[0]->realVars[119] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[280] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[120] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[281] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[282] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[117] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[120] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[280] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[119] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[281] /* pwLine.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp42, data->localData[0]->timeValue, data->simulationInfo->realParameter[284] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp43, data->localData[0]->timeValue, data->simulationInfo->realParameter[285] /* pwLine.t2 PARAM */, 1, Less);
  res[15] = ((tmp42 && tmp43)?data->localData[0]->realVars[117] /* pwLine.is.im variable */:data->localData[0]->realVars[119] /* pwLine.vs.im variable */ - data->localData[0]->realVars[131] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[283] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[117] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[120] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[280] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[119] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[281] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[282] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[118] /* pwLine.is.re variable */ + (data->localData[0]->realVars[119] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[280] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[120] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[281] /* pwLine.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp44, data->localData[0]->timeValue, data->simulationInfo->realParameter[295] /* pwLine1.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp45, data->localData[0]->timeValue, data->simulationInfo->realParameter[296] /* pwLine1.t2 PARAM */, 12, Less);
  res[16] = ((tmp44 && tmp45)?data->localData[0]->realVars[128] /* pwLine1.is.re variable */:data->localData[0]->realVars[132] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[130] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[294] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[128] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[131] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[291] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[132] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[292] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[293] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[127] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[132] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[291] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[131] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[292] /* pwLine1.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp46, data->localData[0]->timeValue, data->simulationInfo->realParameter[295] /* pwLine1.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp47, data->localData[0]->timeValue, data->simulationInfo->realParameter[296] /* pwLine1.t2 PARAM */, 12, Less);
  res[17] = ((tmp46 && tmp47)?data->localData[0]->realVars[127] /* pwLine1.is.im variable */:data->localData[0]->realVars[131] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[129] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[294] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[127] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[132] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[291] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[131] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[292] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[293] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[128] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[131] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[291] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[132] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[292] /* pwLine1.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp48, data->localData[0]->timeValue, data->simulationInfo->realParameter[317] /* pwLine4.t1 PARAM */, 7, GreaterEq);
  RELATIONHYSTERESIS(tmp49, data->localData[0]->timeValue, data->simulationInfo->realParameter[318] /* pwLine4.t2 PARAM */, 8, Less);
  res[18] = ((tmp48 && tmp49)?data->localData[0]->realVars[148] /* pwLine4.ir.re variable */:data->localData[0]->realVars[130] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[142] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[316] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[148] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[129] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[313] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[130] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[314] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[315] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[147] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[130] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[313] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[129] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[314] /* pwLine4.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp50, data->localData[0]->timeValue, data->simulationInfo->realParameter[317] /* pwLine4.t1 PARAM */, 7, GreaterEq);
  RELATIONHYSTERESIS(tmp51, data->localData[0]->timeValue, data->simulationInfo->realParameter[318] /* pwLine4.t2 PARAM */, 8, Less);
  res[19] = ((tmp50 && tmp51)?data->localData[0]->realVars[147] /* pwLine4.ir.im variable */:data->localData[0]->realVars[129] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[141] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[316] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[147] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[130] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[313] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[129] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[314] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[315] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[148] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[129] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[313] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[130] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[314] /* pwLine4.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp52, data->localData[0]->timeValue, data->simulationInfo->realParameter[295] /* pwLine1.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp53, data->localData[0]->timeValue, data->simulationInfo->realParameter[296] /* pwLine1.t2 PARAM */, 12, Less);
  res[20] = ((tmp52 && tmp53)?data->localData[0]->realVars[125] /* pwLine1.ir.im variable */:data->localData[0]->realVars[129] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[131] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[294] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[125] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[130] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[291] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[129] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[292] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[293] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[126] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[129] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[291] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[130] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[292] /* pwLine1.Y.re PARAM */)))));

  res[21] = (data->localData[0]->realVars[25] /* $cse2 variable */) * (data->localData[0]->realVars[91] /* gENCLS.vq variable */) + (data->localData[0]->realVars[24] /* $cse1 variable */) * (data->localData[0]->realVars[90] /* gENCLS.vd variable */) - data->localData[0]->realVars[130] /* pwLine1.vr.re variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS842(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+22] = {0,4,4,4,4,3,3,3,3,4,4,4,4,6,6,7,7,4,4,11,11,8,8};
  const int rowIndex[116] = {12,13,16,17,10,11,12,13,10,11,12,13,10,11,16,17,3,7,8,4,6,7,4,5,6,3,5,8,1,2,10,11,1,2,12,13,9,18,19,20,9,18,19,20,0,9,18,19,20,21,0,9,18,19,20,21,4,9,16,18,19,20,21,0,6,9,17,18,19,20,12,13,14,15,12,13,14,15,1,2,3,10,11,12,13,15,16,17,20,1,2,8,9,10,11,12,13,14,16,17,1,3,4,5,6,7,8,19,2,3,4,5,6,7,8,18};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((22+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(116*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 116;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(22*sizeof(int));
  inSysData->sparsePattern->maxColors = 10;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (22+1)*sizeof(int));
  
  for(i=2;i<22+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 116*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[21] = 1;
  inSysData->sparsePattern->colorCols[20] = 2;
  inSysData->sparsePattern->colorCols[19] = 3;
  inSysData->sparsePattern->colorCols[18] = 4;
  inSysData->sparsePattern->colorCols[15] = 5;
  inSysData->sparsePattern->colorCols[17] = 5;
  inSysData->sparsePattern->colorCols[14] = 6;
  inSysData->sparsePattern->colorCols[16] = 6;
  inSysData->sparsePattern->colorCols[3] = 7;
  inSysData->sparsePattern->colorCols[9] = 7;
  inSysData->sparsePattern->colorCols[13] = 7;
  inSysData->sparsePattern->colorCols[2] = 8;
  inSysData->sparsePattern->colorCols[12] = 8;
  inSysData->sparsePattern->colorCols[1] = 9;
  inSysData->sparsePattern->colorCols[5] = 9;
  inSysData->sparsePattern->colorCols[7] = 9;
  inSysData->sparsePattern->colorCols[11] = 9;
  inSysData->sparsePattern->colorCols[0] = 10;
  inSysData->sparsePattern->colorCols[4] = 10;
  inSysData->sparsePattern->colorCols[6] = 10;
  inSysData->sparsePattern->colorCols[8] = 10;
  inSysData->sparsePattern->colorCols[10] = 10;
}
void initializeStaticDataNLS842(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for pwLine1.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[128].attribute /* pwLine1.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[128].attribute /* pwLine1.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[128].attribute /* pwLine1.is.re */.max;
  /* static nls data for constantLoad.p.ir */
  sysData->nominal[i] = data->modelData->realVarsData[52].attribute /* constantLoad.p.ir */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[52].attribute /* constantLoad.p.ir */.min;
  sysData->max[i++]   = data->modelData->realVarsData[52].attribute /* constantLoad.p.ir */.max;
  /* static nls data for pwLine.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[115].attribute /* pwLine.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[115].attribute /* pwLine.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[115].attribute /* pwLine.ir.im */.max;
  /* static nls data for pwLine1.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[127].attribute /* pwLine1.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[127].attribute /* pwLine1.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[127].attribute /* pwLine1.is.im */.max;
  /* static nls data for pwLine3.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[138].attribute /* pwLine3.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[138].attribute /* pwLine3.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[138].attribute /* pwLine3.ir.re */.max;
  /* static nls data for pwLine4.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[150].attribute /* pwLine4.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[150].attribute /* pwLine4.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[150].attribute /* pwLine4.is.re */.max;
  /* static nls data for pwLine4.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[149].attribute /* pwLine4.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[149].attribute /* pwLine4.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[149].attribute /* pwLine4.is.im */.max;
  /* static nls data for pwLine3.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[137].attribute /* pwLine3.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[137].attribute /* pwLine3.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[137].attribute /* pwLine3.ir.im */.max;
  /* static nls data for pwLine3.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[139].attribute /* pwLine3.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[139].attribute /* pwLine3.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[139].attribute /* pwLine3.is.im */.max;
  /* static nls data for pwLine3.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[140].attribute /* pwLine3.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[140].attribute /* pwLine3.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[140].attribute /* pwLine3.is.re */.max;
  /* static nls data for pwLine4.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[148].attribute /* pwLine4.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[148].attribute /* pwLine4.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[148].attribute /* pwLine4.ir.re */.max;
  /* static nls data for pwLine1.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[125].attribute /* pwLine1.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[125].attribute /* pwLine1.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[125].attribute /* pwLine1.ir.im */.max;
  /* static nls data for gENCLS.id */
  sysData->nominal[i] = data->modelData->realVarsData[85].attribute /* gENCLS.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[85].attribute /* gENCLS.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[85].attribute /* gENCLS.id */.max;
  /* static nls data for gENCLS.iq */
  sysData->nominal[i] = data->modelData->realVarsData[86].attribute /* gENCLS.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[86].attribute /* gENCLS.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[86].attribute /* gENCLS.iq */.max;
  /* static nls data for pwLine1.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[130].attribute /* pwLine1.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[130].attribute /* pwLine1.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[130].attribute /* pwLine1.vr.re */.max;
  /* static nls data for pwLine1.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[129].attribute /* pwLine1.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[129].attribute /* pwLine1.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[129].attribute /* pwLine1.vr.im */.max;
  /* static nls data for gENROU.id */
  sysData->nominal[i] = data->modelData->realVarsData[105].attribute /* gENROU.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[105].attribute /* gENROU.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[105].attribute /* gENROU.id */.max;
  /* static nls data for gENROU.iq */
  sysData->nominal[i] = data->modelData->realVarsData[106].attribute /* gENROU.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[106].attribute /* gENROU.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[106].attribute /* gENROU.iq */.max;
  /* static nls data for pwLine1.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[131].attribute /* pwLine1.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[131].attribute /* pwLine1.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[131].attribute /* pwLine1.vs.im */.max;
  /* static nls data for pwLine1.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[132].attribute /* pwLine1.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[132].attribute /* pwLine1.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[132].attribute /* pwLine1.vs.re */.max;
  /* static nls data for pwLine3.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[141].attribute /* pwLine3.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[141].attribute /* pwLine3.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[141].attribute /* pwLine3.vr.im */.max;
  /* static nls data for pwLine3.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[142].attribute /* pwLine3.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[142].attribute /* pwLine3.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[142].attribute /* pwLine3.vr.re */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS842(sysData);
}

void getIterationVarsNLS842(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[128] /* pwLine1.is.re variable */;
  array[1] = data->localData[0]->realVars[52] /* constantLoad.p.ir variable */;
  array[2] = data->localData[0]->realVars[115] /* pwLine.ir.im variable */;
  array[3] = data->localData[0]->realVars[127] /* pwLine1.is.im variable */;
  array[4] = data->localData[0]->realVars[138] /* pwLine3.ir.re variable */;
  array[5] = data->localData[0]->realVars[150] /* pwLine4.is.re variable */;
  array[6] = data->localData[0]->realVars[149] /* pwLine4.is.im variable */;
  array[7] = data->localData[0]->realVars[137] /* pwLine3.ir.im variable */;
  array[8] = data->localData[0]->realVars[139] /* pwLine3.is.im variable */;
  array[9] = data->localData[0]->realVars[140] /* pwLine3.is.re variable */;
  array[10] = data->localData[0]->realVars[148] /* pwLine4.ir.re variable */;
  array[11] = data->localData[0]->realVars[125] /* pwLine1.ir.im variable */;
  array[12] = data->localData[0]->realVars[85] /* gENCLS.id variable */;
  array[13] = data->localData[0]->realVars[86] /* gENCLS.iq variable */;
  array[14] = data->localData[0]->realVars[130] /* pwLine1.vr.re variable */;
  array[15] = data->localData[0]->realVars[129] /* pwLine1.vr.im variable */;
  array[16] = data->localData[0]->realVars[105] /* gENROU.id variable */;
  array[17] = data->localData[0]->realVars[106] /* gENROU.iq variable */;
  array[18] = data->localData[0]->realVars[131] /* pwLine1.vs.im variable */;
  array[19] = data->localData[0]->realVars[132] /* pwLine1.vs.re variable */;
  array[20] = data->localData[0]->realVars[141] /* pwLine3.vr.im variable */;
  array[21] = data->localData[0]->realVars[142] /* pwLine3.vr.re variable */;
}


/* inner equations */

/*
equation index: 602
type: SIMPLE_ASSIGN
constantLoad.v = sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_602(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,602};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[132] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[131] /* pwLine1.vs.im variable */;
  data->localData[0]->realVars[53] /* constantLoad.v variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 603
type: SIMPLE_ASSIGN
constantLoad.kP = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a0 + constantLoad.a1 * cos(constantLoad.v * constantLoad.wp) + constantLoad.b1 * sin(constantLoad.v * constantLoad.wp) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_603(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,603};
  modelica_boolean tmp0;
  tmp0 = Less(data->localData[0]->realVars[53] /* constantLoad.v variable */,data->simulationInfo->realParameter[41] /* constantLoad.PQBRAK PARAM */);
  data->localData[0]->realVars[50] /* constantLoad.kP variable */ = (tmp0?data->simulationInfo->realParameter[60] /* constantLoad.a0 PARAM */ + (data->simulationInfo->realParameter[61] /* constantLoad.a1 PARAM */) * (cos((data->localData[0]->realVars[53] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[67] /* constantLoad.b1 PARAM */) * (sin((data->localData[0]->realVars[53] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))):1.0);
  TRACE_POP
}
/*
equation index: 604
type: SIMPLE_ASSIGN
constantLoad.kI = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (-1.0 + constantLoad.b2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_604(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,604};
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
  tmp0 = Less(data->localData[0]->realVars[53] /* constantLoad.v variable */,0.5);
  tmp15 = (modelica_boolean)tmp0;
  if(tmp15)
  {
    tmp1 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
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
    }tmp8 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
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
  data->localData[0]->realVars[49] /* constantLoad.kI variable */ = tmp16;
  TRACE_POP
}
/*
equation index: 605
type: SIMPLE_ASSIGN
constantLoad.Q = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_605(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,605};
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
    tmp2 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[49] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[44] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[48] /* constantLoad.S_Y.im PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[50] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[46] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[70] /* constantLoad.d_Q PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[49] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[44] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[48] /* constantLoad.S_Y.im PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[50] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[46] /* constantLoad.S_P.im PARAM */);
  }
  data->localData[0]->realVars[47] /* constantLoad.Q variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 606
type: SIMPLE_ASSIGN
constantLoad.P = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_606(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,606};
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
    tmp2 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[49] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[45] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[49] /* constantLoad.S_Y.re PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[50] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[47] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[69] /* constantLoad.d_P PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[49] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[45] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[49] /* constantLoad.S_Y.re PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[50] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[47] /* constantLoad.S_P.re PARAM */);
  }
  data->localData[0]->realVars[46] /* constantLoad.P variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 607
type: SIMPLE_ASSIGN
eSST4B.I_T.re = 2.0 * pwLine.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_607(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,607};
  data->localData[0]->realVars[64] /* eSST4B.I_T.re variable */ = (2.0) * (data->localData[0]->realVars[118] /* pwLine.is.re variable */);
  TRACE_POP
}
/*
equation index: 608
type: SIMPLE_ASSIGN
eSST4B.I_T.im = 2.0 * pwLine.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_608(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,608};
  data->localData[0]->realVars[63] /* eSST4B.I_T.im variable */ = (2.0) * (data->localData[0]->realVars[117] /* pwLine.is.im variable */);
  TRACE_POP
}
/*
equation index: 609
type: SIMPLE_ASSIGN
eSST4B.rectifierCommutationVoltageDrop.division.u1 = eSST4B.rectifierCommutationVoltageDrop.gain2.k * eSST4B.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_609(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,609};
  data->localData[0]->realVars[78] /* eSST4B.rectifierCommutationVoltageDrop.division.u1 variable */ = (data->simulationInfo->realParameter[159] /* eSST4B.rectifierCommutationVoltageDrop.gain2.k PARAM */) * (data->localData[0]->realVars[70] /* eSST4B.XADIFD variable */);
  TRACE_POP
}
/*
equation index: 610
type: SIMPLE_ASSIGN
eSST4B.EFD = eSST4B.XADIFD + $DER.gENROU.Epq * gENROU.Tpd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_610(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,610};
  data->localData[0]->realVars[57] /* eSST4B.EFD variable */ = data->localData[0]->realVars[70] /* eSST4B.XADIFD variable */ + (data->localData[0]->realVars[19] /* der(gENROU.Epq) STATE_DER */) * (data->simulationInfo->realParameter[229] /* gENROU.Tpd0 PARAM */);
  TRACE_POP
}
/*
equation index: 611
type: SIMPLE_ASSIGN
eSST4B.add1.u1 = eSST4B.gain.k * eSST4B.EFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_611(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,611};
  data->localData[0]->realVars[72] /* eSST4B.add1.u1 variable */ = (data->simulationInfo->realParameter[150] /* eSST4B.gain.k PARAM */) * (data->localData[0]->realVars[57] /* eSST4B.EFD variable */);
  TRACE_POP
}
/*
equation index: 612
type: SIMPLE_ASSIGN
eSST4B.Ifd0 = eSST4B.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_612(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,612};
  data->simulationInfo->realParameter[90] /* eSST4B.Ifd0 PARAM */ = data->localData[0]->realVars[70] /* eSST4B.XADIFD variable */;
  TRACE_POP
}
/*
equation index: 613
type: SIMPLE_ASSIGN
eSST4B.ECOMP0 = eSST4B.ECOMP
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_613(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,613};
  data->simulationInfo->realParameter[85] /* eSST4B.ECOMP0 PARAM */ = data->localData[0]->realVars[56] /* eSST4B.ECOMP variable */;
  TRACE_POP
}
/*
equation index: 614
type: SIMPLE_ASSIGN
eSST4B.TransducerDelay.y_start = eSST4B.ECOMP0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_614(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,614};
  data->simulationInfo->realParameter[109] /* eSST4B.TransducerDelay.y_start PARAM */ = data->simulationInfo->realParameter[85] /* eSST4B.ECOMP0 PARAM */;
  TRACE_POP
}
/*
equation index: 615
type: SIMPLE_ASSIGN
$START.eSST4B.DiffV.u2 = eSST4B.TransducerDelay.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_615(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,615};
  data->modelData->realVarsData[54].attribute /* eSST4B.DiffV.u2 variable */.start = data->simulationInfo->realParameter[109] /* eSST4B.TransducerDelay.y_start PARAM */;
    data->localData[0]->realVars[54] /* eSST4B.DiffV.u2 variable */ = data->modelData->realVarsData[54].attribute /* eSST4B.DiffV.u2 variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[54].info /* eSST4B.DiffV.u2 */.name, (modelica_real) data->localData[0]->realVars[54] /* eSST4B.DiffV.u2 variable */);
  TRACE_POP
}
/*
equation index: 616
type: SIMPLE_ASSIGN
$START.eSST4B.TransducerDelay.state = eSST4B.TransducerDelay.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_616(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,616};
  data->modelData->realVarsData[0].attribute /* eSST4B.TransducerDelay.state STATE(1) */.start = data->simulationInfo->realParameter[109] /* eSST4B.TransducerDelay.y_start PARAM */;
    data->localData[0]->realVars[0] /* eSST4B.TransducerDelay.state STATE(1) */ = data->modelData->realVarsData[0].attribute /* eSST4B.TransducerDelay.state STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[0].info /* eSST4B.TransducerDelay.state */.name, (modelica_real) data->localData[0]->realVars[0] /* eSST4B.TransducerDelay.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 617
type: SIMPLE_ASSIGN
eSST4B.TransducerDelay.state = eSST4B.TransducerDelay.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_617(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,617};
  data->localData[0]->realVars[0] /* eSST4B.TransducerDelay.state STATE(1) */ = data->simulationInfo->realParameter[109] /* eSST4B.TransducerDelay.y_start PARAM */;
  TRACE_POP
}
/*
equation index: 618
type: SIMPLE_ASSIGN
eSST4B.DiffV.u2 = if abs(eSST4B.TransducerDelay.T) <= 1e-15 then eSST4B.ECOMP * eSST4B.TransducerDelay.K else eSST4B.TransducerDelay.state
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_618(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,618};
  modelica_boolean tmp0;
  tmp0 = LessEq(fabs(data->simulationInfo->realParameter[106] /* eSST4B.TransducerDelay.T PARAM */),1e-15);
  data->localData[0]->realVars[54] /* eSST4B.DiffV.u2 variable */ = (tmp0?(data->localData[0]->realVars[56] /* eSST4B.ECOMP variable */) * (data->simulationInfo->realParameter[105] /* eSST4B.TransducerDelay.K PARAM */):data->localData[0]->realVars[0] /* eSST4B.TransducerDelay.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 619
type: SIMPLE_ASSIGN
eSST4B.V_REF = eSST4B.ECOMP
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_619(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,619};
  data->simulationInfo->realParameter[133] /* eSST4B.V_REF PARAM */ = data->localData[0]->realVars[56] /* eSST4B.ECOMP variable */;
  TRACE_POP
}
/*
equation index: 620
type: SIMPLE_ASSIGN
eSST4B.VoltageReference.k = eSST4B.V_REF
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_620(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,620};
  data->simulationInfo->realParameter[136] /* eSST4B.VoltageReference.k PARAM */ = data->simulationInfo->realParameter[133] /* eSST4B.V_REF PARAM */;
  TRACE_POP
}
/*
equation index: 621
type: SIMPLE_ASSIGN
eSST4B.DiffV.y = eSST4B.DiffV.k1 * eSST4B.VoltageReference.k + eSST4B.DiffV.k2 * eSST4B.DiffV.u2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_621(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,621};
  data->localData[0]->realVars[55] /* eSST4B.DiffV.y variable */ = (data->simulationInfo->realParameter[82] /* eSST4B.DiffV.k1 PARAM */) * (data->simulationInfo->realParameter[136] /* eSST4B.VoltageReference.k PARAM */) + (data->simulationInfo->realParameter[83] /* eSST4B.DiffV.k2 PARAM */) * (data->localData[0]->realVars[54] /* eSST4B.DiffV.u2 variable */);
  TRACE_POP
}
/*
equation index: 622
type: SIMPLE_ASSIGN
eSST4B.Gain1.u = eSST4B.add3_1.k1 * const.k + eSST4B.add3_1.k2 * eSST4B.DiffV.y + eSST4B.add3_1.k3 * const5.k
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_622(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,622};
  data->localData[0]->realVars[59] /* eSST4B.Gain1.u variable */ = (data->simulationInfo->realParameter[145] /* eSST4B.add3_1.k1 PARAM */) * (data->simulationInfo->realParameter[34] /* const.k PARAM */) + (data->simulationInfo->realParameter[146] /* eSST4B.add3_1.k2 PARAM */) * (data->localData[0]->realVars[55] /* eSST4B.DiffV.y variable */) + (data->simulationInfo->realParameter[147] /* eSST4B.add3_1.k3 PARAM */) * (data->simulationInfo->realParameter[38] /* const5.k PARAM */);
  TRACE_POP
}
/*
equation index: 623
type: SIMPLE_ASSIGN
eSST4B.Gain1.y = eSST4B.Gain1.k * eSST4B.Gain1.u
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_623(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,623};
  data->localData[0]->realVars[60] /* eSST4B.Gain1.y variable */ = (data->simulationInfo->realParameter[87] /* eSST4B.Gain1.k PARAM */) * (data->localData[0]->realVars[59] /* eSST4B.Gain1.u variable */);
  TRACE_POP
}
/*
equation index: 624
type: SIMPLE_ASSIGN
eSST4B.add.y = eSST4B.add.k1 * eSST4B.Gain1.y + eSST4B.add.k2 * eSST4B.VR1.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_624(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,624};
  data->localData[0]->realVars[71] /* eSST4B.add.y variable */ = (data->simulationInfo->realParameter[139] /* eSST4B.add.k1 PARAM */) * (data->localData[0]->realVars[60] /* eSST4B.Gain1.y variable */) + (data->simulationInfo->realParameter[140] /* eSST4B.add.k2 PARAM */) * (data->localData[0]->realVars[3] /* eSST4B.VR1.y STATE(1) */);
  TRACE_POP
}
/*
equation index: 625
type: SIMPLE_ASSIGN
eSST4B.VA.u = eSST4B.add.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_625(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,625};
  data->localData[0]->realVars[65] /* eSST4B.VA.u variable */ = data->localData[0]->realVars[71] /* eSST4B.add.y variable */;
  TRACE_POP
}
/*
equation index: 626
type: SIMPLE_ASSIGN
eSST4B.VA.y = if abs(eSST4B.VA.T) <= 1e-15 then eSST4B.VA.u * eSST4B.VA.K else eSST4B.VA.state
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_626(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,626};
  modelica_boolean tmp0;
  tmp0 = LessEq(fabs(data->simulationInfo->realParameter[111] /* eSST4B.VA.T PARAM */),1e-15);
  data->localData[0]->realVars[66] /* eSST4B.VA.y variable */ = (tmp0?(data->localData[0]->realVars[65] /* eSST4B.VA.u variable */) * (data->simulationInfo->realParameter[110] /* eSST4B.VA.K PARAM */):data->localData[0]->realVars[1] /* eSST4B.VA.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 627
type: SIMPLE_ASSIGN
eSST4B.Gain2.u = eSST4B.add1.k1 * eSST4B.add1.u1 + eSST4B.add1.k2 * eSST4B.VA.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_627(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,627};
  data->localData[0]->realVars[61] /* eSST4B.Gain2.u variable */ = (data->simulationInfo->realParameter[141] /* eSST4B.add1.k1 PARAM */) * (data->localData[0]->realVars[72] /* eSST4B.add1.u1 variable */) + (data->simulationInfo->realParameter[142] /* eSST4B.add1.k2 PARAM */) * (data->localData[0]->realVars[66] /* eSST4B.VA.y variable */);
  TRACE_POP
}
/*
equation index: 628
type: SIMPLE_ASSIGN
eSST4B.Gain2.y = eSST4B.Gain2.k * eSST4B.Gain2.u
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_628(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,628};
  data->localData[0]->realVars[62] /* eSST4B.Gain2.y variable */ = (data->simulationInfo->realParameter[88] /* eSST4B.Gain2.k PARAM */) * (data->localData[0]->realVars[61] /* eSST4B.Gain2.u variable */);
  TRACE_POP
}
/*
equation index: 629
type: SIMPLE_ASSIGN
eSST4B.rectifierCommutationVoltageDrop.division.y = eSST4B.rectifierCommutationVoltageDrop.division.u1 / eSST4B.VE
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_629(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,629};
  data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */ = DIVISION_SIM(data->localData[0]->realVars[78] /* eSST4B.rectifierCommutationVoltageDrop.division.u1 variable */,data->localData[0]->realVars[67] /* eSST4B.VE variable */,"eSST4B.VE",equationIndexes);
  TRACE_POP
}
/*
equation index: 630
type: SIMPLE_ASSIGN
eSST4B.rectifierCommutationVoltageDrop.fEX.y = if eSST4B.rectifierCommutationVoltageDrop.division.y <= 0.0 then 1.0 else if eSST4B.rectifierCommutationVoltageDrop.division.y > 0.0 and eSST4B.rectifierCommutationVoltageDrop.division.y <= 0.433 then 1.0 + (-0.577) * eSST4B.rectifierCommutationVoltageDrop.division.y else if eSST4B.rectifierCommutationVoltageDrop.division.y > 0.433 and eSST4B.rectifierCommutationVoltageDrop.division.y < 0.75 then sqrt(0.75 - eSST4B.rectifierCommutationVoltageDrop.division.y ^ 2.0) else if eSST4B.rectifierCommutationVoltageDrop.division.y >= 0.75 and eSST4B.rectifierCommutationVoltageDrop.division.y <= 1.0 then 1.732 * (1.0 - eSST4B.rectifierCommutationVoltageDrop.division.y) else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_630(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,630};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_boolean tmp7;
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  modelica_boolean tmp11;
  modelica_real tmp12;
  modelica_boolean tmp13;
  modelica_real tmp14;
  tmp0 = LessEq(data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */,0.0);
  tmp13 = (modelica_boolean)tmp0;
  if(tmp13)
  {
    tmp14 = 1.0;
  }
  else
  {
    tmp1 = Greater(data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */,0.0);
    tmp2 = LessEq(data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */,0.433);
    tmp11 = (modelica_boolean)(tmp1 && tmp2);
    if(tmp11)
    {
      tmp12 = 1.0 + (-0.577) * (data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */);
    }
    else
    {
      tmp3 = Greater(data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */,0.433);
      tmp4 = Less(data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */,0.75);
      tmp9 = (modelica_boolean)(tmp3 && tmp4);
      if(tmp9)
      {
        tmp5 = data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */;
        tmp6 = 0.75 - ((tmp5 * tmp5));
        if(!(tmp6 >= 0.0))
        {
          FILE_INFO info = {"",0,0,0,0,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(0.75 - eSST4B.rectifierCommutationVoltageDrop.division.y ^ 2.0) was %g should be >= 0", tmp6);
        }
        tmp10 = sqrt(tmp6);
      }
      else
      {
        tmp7 = GreaterEq(data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */,0.75);
        tmp8 = LessEq(data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */,1.0);
        tmp10 = ((tmp7 && tmp8)?(1.732) * (1.0 - data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */):0.0);
      }
      tmp12 = tmp10;
    }
    tmp14 = tmp12;
  }
  data->localData[0]->realVars[80] /* eSST4B.rectifierCommutationVoltageDrop.fEX.y variable */ = tmp14;
  TRACE_POP
}
/*
equation index: 631
type: SIMPLE_ASSIGN
eSST4B.maxLimiter.u = eSST4B.VE * eSST4B.rectifierCommutationVoltageDrop.fEX.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_631(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,631};
  data->localData[0]->realVars[76] /* eSST4B.maxLimiter.u variable */ = (data->localData[0]->realVars[67] /* eSST4B.VE variable */) * (data->localData[0]->realVars[80] /* eSST4B.rectifierCommutationVoltageDrop.fEX.y variable */);
  TRACE_POP
}
/*
equation index: 632
type: SIMPLE_ASSIGN
eSST4B.maxLimiter.y = eSST4B.maxLimiter.u
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_632(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,632};
  data->localData[0]->realVars[77] /* eSST4B.maxLimiter.y variable */ = data->localData[0]->realVars[76] /* eSST4B.maxLimiter.u variable */;
  TRACE_POP
}
/*
equation index: 633
type: SIMPLE_ASSIGN
eSST4B.VE0 = eSST4B.VE
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_633(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,633};
  data->simulationInfo->realParameter[117] /* eSST4B.VE0 PARAM */ = data->localData[0]->realVars[67] /* eSST4B.VE variable */;
  TRACE_POP
}
/*
equation index: 634
type: SIMPLE_ASSIGN
eSST4B.IN0 = eSST4B.K_C * eSST4B.Ifd0 / eSST4B.VE0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_634(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,634};
  data->simulationInfo->realParameter[89] /* eSST4B.IN0 PARAM */ = (data->simulationInfo->realParameter[91] /* eSST4B.K_C PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[90] /* eSST4B.Ifd0 PARAM */,data->simulationInfo->realParameter[117] /* eSST4B.VE0 PARAM */,"eSST4B.VE0",equationIndexes));
  TRACE_POP
}
/*
equation index: 635
type: SIMPLE_ASSIGN
eSST4B.VB0 = if eSST4B.IN0 <= 0.0 then eSST4B.VE0 else if eSST4B.IN0 > 0.0 and eSST4B.IN0 <= 0.433 then eSST4B.VE0 * (1.0 + (-0.577) * eSST4B.IN0) else if eSST4B.IN0 > 0.433 and eSST4B.IN0 < 0.75 then eSST4B.VE0 * sqrt(0.75 - eSST4B.IN0 ^ 2.0) else if eSST4B.IN0 >= 0.75 and eSST4B.IN0 <= 1.0 then 1.732 * eSST4B.VE0 * (1.0 - eSST4B.IN0) else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_635(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,635};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_boolean tmp7;
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  modelica_boolean tmp11;
  modelica_real tmp12;
  modelica_boolean tmp13;
  modelica_real tmp14;
  tmp0 = LessEq(data->simulationInfo->realParameter[89] /* eSST4B.IN0 PARAM */,0.0);
  tmp13 = (modelica_boolean)tmp0;
  if(tmp13)
  {
    tmp14 = data->simulationInfo->realParameter[117] /* eSST4B.VE0 PARAM */;
  }
  else
  {
    tmp1 = Greater(data->simulationInfo->realParameter[89] /* eSST4B.IN0 PARAM */,0.0);
    tmp2 = LessEq(data->simulationInfo->realParameter[89] /* eSST4B.IN0 PARAM */,0.433);
    tmp11 = (modelica_boolean)(tmp1 && tmp2);
    if(tmp11)
    {
      tmp12 = (data->simulationInfo->realParameter[117] /* eSST4B.VE0 PARAM */) * (1.0 + (-0.577) * (data->simulationInfo->realParameter[89] /* eSST4B.IN0 PARAM */));
    }
    else
    {
      tmp3 = Greater(data->simulationInfo->realParameter[89] /* eSST4B.IN0 PARAM */,0.433);
      tmp4 = Less(data->simulationInfo->realParameter[89] /* eSST4B.IN0 PARAM */,0.75);
      tmp9 = (modelica_boolean)(tmp3 && tmp4);
      if(tmp9)
      {
        tmp5 = data->simulationInfo->realParameter[89] /* eSST4B.IN0 PARAM */;
        tmp6 = 0.75 - ((tmp5 * tmp5));
        if(!(tmp6 >= 0.0))
        {
          FILE_INFO info = {"",0,0,0,0,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(0.75 - eSST4B.IN0 ^ 2.0) was %g should be >= 0", tmp6);
        }
        tmp10 = (data->simulationInfo->realParameter[117] /* eSST4B.VE0 PARAM */) * (sqrt(tmp6));
      }
      else
      {
        tmp7 = GreaterEq(data->simulationInfo->realParameter[89] /* eSST4B.IN0 PARAM */,0.75);
        tmp8 = LessEq(data->simulationInfo->realParameter[89] /* eSST4B.IN0 PARAM */,1.0);
        tmp10 = ((tmp7 && tmp8)?(1.732) * ((data->simulationInfo->realParameter[117] /* eSST4B.VE0 PARAM */) * (1.0 - data->simulationInfo->realParameter[89] /* eSST4B.IN0 PARAM */)):0.0);
      }
      tmp12 = tmp10;
    }
    tmp14 = tmp12;
  }
  data->simulationInfo->realParameter[116] /* eSST4B.VB0 PARAM */ = tmp14;
  TRACE_POP
}
/*
equation index: 636
type: SIMPLE_ASSIGN
eSST4B.VA0 = eSST4B.Efd0 / eSST4B.VB0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_636(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,636};
  data->simulationInfo->realParameter[115] /* eSST4B.VA0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[86] /* eSST4B.Efd0 PARAM */,data->simulationInfo->realParameter[116] /* eSST4B.VB0 PARAM */,"eSST4B.VB0",equationIndexes);
  TRACE_POP
}
/*
equation index: 637
type: SIMPLE_ASSIGN
eSST4B.VM1.y_start = eSST4B.VA0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_637(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,637};
  data->simulationInfo->realParameter[121] /* eSST4B.VM1.y_start PARAM */ = data->simulationInfo->realParameter[115] /* eSST4B.VA0 PARAM */;
  TRACE_POP
}
/*
equation index: 638
type: SIMPLE_ASSIGN
$START.eSST4B.VM1.y = eSST4B.VM1.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_638(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,638};
  data->modelData->realVarsData[2].attribute /* eSST4B.VM1.y STATE(1) */.start = data->simulationInfo->realParameter[121] /* eSST4B.VM1.y_start PARAM */;
    data->localData[0]->realVars[2] /* eSST4B.VM1.y STATE(1) */ = data->modelData->realVarsData[2].attribute /* eSST4B.VM1.y STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[2].info /* eSST4B.VM1.y */.name, (modelica_real) data->localData[0]->realVars[2] /* eSST4B.VM1.y STATE(1) */);
  TRACE_POP
}
/*
equation index: 639
type: SIMPLE_ASSIGN
eSST4B.VM1.y = eSST4B.VM1.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_639(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,639};
  data->localData[0]->realVars[2] /* eSST4B.VM1.y STATE(1) */ = data->simulationInfo->realParameter[121] /* eSST4B.VM1.y_start PARAM */;
  TRACE_POP
}
/*
equation index: 640
type: SIMPLE_ASSIGN
eSST4B.add2.y = eSST4B.add2.k1 * eSST4B.Gain2.y + eSST4B.add2.k2 * eSST4B.VM1.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_640(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,640};
  data->localData[0]->realVars[73] /* eSST4B.add2.y variable */ = (data->simulationInfo->realParameter[143] /* eSST4B.add2.k1 PARAM */) * (data->localData[0]->realVars[62] /* eSST4B.Gain2.y variable */) + (data->simulationInfo->realParameter[144] /* eSST4B.add2.k2 PARAM */) * (data->localData[0]->realVars[2] /* eSST4B.VM1.y STATE(1) */);
  TRACE_POP
}
/*
equation index: 641
type: SIMPLE_ASSIGN
eSST4B.lV_Gate.n1 = eSST4B.add2.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_641(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,641};
  data->localData[0]->realVars[74] /* eSST4B.lV_Gate.n1 variable */ = data->localData[0]->realVars[73] /* eSST4B.add2.y variable */;
  TRACE_POP
}
/*
equation index: 642
type: SIMPLE_ASSIGN
eSST4B.lV_Gate.p = if eSST4B.lV_Gate.n1 > const1.k then const1.k else eSST4B.lV_Gate.n1
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_642(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,642};
  modelica_boolean tmp0;
  tmp0 = Greater(data->localData[0]->realVars[74] /* eSST4B.lV_Gate.n1 variable */,data->simulationInfo->realParameter[36] /* const1.k PARAM */);
  data->localData[0]->realVars[75] /* eSST4B.lV_Gate.p variable */ = (tmp0?data->simulationInfo->realParameter[36] /* const1.k PARAM */:data->localData[0]->realVars[74] /* eSST4B.lV_Gate.n1 variable */);
  TRACE_POP
}
/*
equation index: 643
type: SIMPLE_ASSIGN
gENROU.PSId = gENROU.PSIppd - gENROU.Xppd * gENROU.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_643(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,643};
  data->localData[0]->realVars[95] /* gENROU.PSId variable */ = data->localData[0]->realVars[97] /* gENROU.PSIppd variable */ - ((data->simulationInfo->realParameter[240] /* gENROU.Xppd PARAM */) * (data->localData[0]->realVars[105] /* gENROU.id variable */));
  TRACE_POP
}
/*
equation index: 644
type: SIMPLE_ASSIGN
gENROU.uq = gENROU.PSId - gENROU.R_a * gENROU.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_644(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,644};
  data->localData[0]->realVars[108] /* gENROU.uq variable */ = data->localData[0]->realVars[95] /* gENROU.PSId variable */ - ((data->simulationInfo->realParameter[223] /* gENROU.R_a PARAM */) * (data->localData[0]->realVars[106] /* gENROU.iq variable */));
  TRACE_POP
}
/*
equation index: 645
type: SIMPLE_ASSIGN
gENROU.PSIpp = sqrt(gENROU.PSIppd ^ 2.0 + gENROU.PSIppq ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_645(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,645};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[97] /* gENROU.PSIppd variable */;
  tmp1 = data->localData[0]->realVars[98] /* gENROU.PSIppq variable */;
  data->localData[0]->realVars[96] /* gENROU.PSIpp variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 646
type: SIMPLE_ASSIGN
gENROU.PSIq = (-gENROU.PSIppq) - gENROU.Xppq * gENROU.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_646(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,646};
  data->localData[0]->realVars[99] /* gENROU.PSIq variable */ = (-data->localData[0]->realVars[98] /* gENROU.PSIppq variable */) - ((data->simulationInfo->realParameter[241] /* gENROU.Xppq PARAM */) * (data->localData[0]->realVars[106] /* gENROU.iq variable */));
  TRACE_POP
}
/*
equation index: 647
type: SIMPLE_ASSIGN
gENROU.ud = (-gENROU.PSIq) - gENROU.R_a * gENROU.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_647(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,647};
  data->localData[0]->realVars[107] /* gENROU.ud variable */ = (-data->localData[0]->realVars[99] /* gENROU.PSIq variable */) - ((data->simulationInfo->realParameter[223] /* gENROU.R_a PARAM */) * (data->localData[0]->realVars[105] /* gENROU.id variable */));
  TRACE_POP
}
/*
equation index: 648
type: SIMPLE_ASSIGN
gENROU.PSIkq = ((gENROU.Epd + (gENROU.Xpq - gENROU.Xl) * gENROU.iq) * gENROU.K1q + gENROU.Epd + gENROU.iq * (gENROU.Xpq - gENROU.Xq) + OpenIPSL.NonElectrical.Functions.SE(gENROU.PSIpp, gENROU.S10, gENROU.S12, 1.0, 1.2) * gENROU.PSIppq * (gENROU.Xq - gENROU.Xl) / (gENROU.Xd - gENROU.Xl) - gENROU.XaqIlq) / gENROU.K1q
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_648(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,648};
  data->localData[0]->realVars[9] /* gENROU.PSIkq STATE(1) */ = DIVISION_SIM((data->localData[0]->realVars[6] /* gENROU.Epd STATE(1) */ + (data->simulationInfo->realParameter[242] /* gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[237] /* gENROU.Xl PARAM */) * (data->localData[0]->realVars[106] /* gENROU.iq variable */)) * (data->simulationInfo->realParameter[201] /* gENROU.K1q PARAM */) + data->localData[0]->realVars[6] /* gENROU.Epd STATE(1) */ + (data->localData[0]->realVars[106] /* gENROU.iq variable */) * (data->simulationInfo->realParameter[242] /* gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[243] /* gENROU.Xq PARAM */) + (omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->localData[0]->realVars[96] /* gENROU.PSIpp variable */, data->simulationInfo->realParameter[226] /* gENROU.S10 PARAM */, data->simulationInfo->realParameter[227] /* gENROU.S12 PARAM */, 1.0, 1.2)) * ((data->localData[0]->realVars[98] /* gENROU.PSIppq variable */) * (DIVISION_SIM(data->simulationInfo->realParameter[243] /* gENROU.Xq PARAM */ - data->simulationInfo->realParameter[237] /* gENROU.Xl PARAM */,data->simulationInfo->realParameter[236] /* gENROU.Xd PARAM */ - data->simulationInfo->realParameter[237] /* gENROU.Xl PARAM */,"gENROU.Xd - gENROU.Xl",equationIndexes))) - data->localData[0]->realVars[102] /* gENROU.XaqIlq variable */,data->simulationInfo->realParameter[201] /* gENROU.K1q PARAM */,"gENROU.K1q",equationIndexes);
  TRACE_POP
}
/*
equation index: 649
type: SIMPLE_ASSIGN
gENROU.Epq = (eSST4B.XADIFD - (((gENROU.Xl - gENROU.Xpd) * gENROU.id - gENROU.PSIkd) * gENROU.K1d + gENROU.id * (gENROU.Xd - gENROU.Xpd) + OpenIPSL.NonElectrical.Functions.SE(gENROU.PSIpp, gENROU.S10, gENROU.S12, 1.0, 1.2) * gENROU.PSIppd)) / (1.0 + gENROU.K1d)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_649(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,649};
  data->localData[0]->realVars[7] /* gENROU.Epq STATE(1) */ = DIVISION_SIM(data->localData[0]->realVars[70] /* eSST4B.XADIFD variable */ - (((data->simulationInfo->realParameter[237] /* gENROU.Xl PARAM */ - data->simulationInfo->realParameter[238] /* gENROU.Xpd PARAM */) * (data->localData[0]->realVars[105] /* gENROU.id variable */) - data->localData[0]->realVars[8] /* gENROU.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[200] /* gENROU.K1d PARAM */) + (data->localData[0]->realVars[105] /* gENROU.id variable */) * (data->simulationInfo->realParameter[236] /* gENROU.Xd PARAM */ - data->simulationInfo->realParameter[238] /* gENROU.Xpd PARAM */) + (omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->localData[0]->realVars[96] /* gENROU.PSIpp variable */, data->simulationInfo->realParameter[226] /* gENROU.S10 PARAM */, data->simulationInfo->realParameter[227] /* gENROU.S12 PARAM */, 1.0, 1.2)) * (data->localData[0]->realVars[97] /* gENROU.PSIppd variable */)),1.0 + data->simulationInfo->realParameter[200] /* gENROU.K1d PARAM */,"1.0 + gENROU.K1d",equationIndexes);
  TRACE_POP
}
/*
equation index: 650
type: SIMPLE_ASSIGN
gENCLS.p.ii = (cos(gENCLS.delta) * gENCLS.id - sin(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_650(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,650};
  data->localData[0]->realVars[88] /* gENCLS.p.ii variable */ = ((cos(data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[85] /* gENCLS.id variable */) - ((sin(data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[86] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[160] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 651
type: SIMPLE_ASSIGN
gENCLS.p.ir = ((-sin(gENCLS.delta)) * gENCLS.id - cos(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_651(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,651};
  data->localData[0]->realVars[89] /* gENCLS.p.ir variable */ = (((-sin(data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[85] /* gENCLS.id variable */) - ((cos(data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[86] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[160] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 652
type: SIMPLE_ASSIGN
gENCLS.vq = gENCLS.eq + (-gENCLS.R_a) * gENCLS.iq - gENCLS.X_d * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_652(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,652};
  data->localData[0]->realVars[91] /* gENCLS.vq variable */ = data->localData[0]->realVars[5] /* gENCLS.eq STATE(1) */ + ((-data->simulationInfo->realParameter[166] /* gENCLS.R_a PARAM */)) * (data->localData[0]->realVars[86] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[169] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[85] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 653
type: SIMPLE_ASSIGN
gENCLS.vd = gENCLS.X_d * gENCLS.iq - gENCLS.R_a * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_653(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,653};
  data->localData[0]->realVars[90] /* gENCLS.vd variable */ = (data->simulationInfo->realParameter[169] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[86] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[166] /* gENCLS.R_a PARAM */) * (data->localData[0]->realVars[85] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 654
type: SIMPLE_ASSIGN
pwLine4.ir.im = (-pwLine1.ir.im) - gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_654(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,654};
  data->localData[0]->realVars[147] /* pwLine4.ir.im variable */ = (-data->localData[0]->realVars[125] /* pwLine1.ir.im variable */) - data->localData[0]->realVars[88] /* gENCLS.p.ii variable */;
  TRACE_POP
}
/*
equation index: 655
type: SIMPLE_ASSIGN
pwLine4.ir.re = (-pwLine1.ir.re) - gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_655(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,655};
  data->localData[0]->realVars[148] /* pwLine4.ir.re variable */ = (-data->localData[0]->realVars[126] /* pwLine1.ir.re variable */) - data->localData[0]->realVars[89] /* gENCLS.p.ir variable */;
  TRACE_POP
}
/*
equation index: 656
type: SIMPLE_ASSIGN
pwFault.p.ii = (-pwLine3.ir.im) - pwLine4.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_656(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,656};
  data->localData[0]->realVars[109] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[137] /* pwLine3.ir.im variable */) - data->localData[0]->realVars[149] /* pwLine4.is.im variable */;
  TRACE_POP
}
/*
equation index: 657
type: SIMPLE_ASSIGN
pwFault.p.ir = (-pwLine3.ir.re) - pwLine4.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_657(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,657};
  data->localData[0]->realVars[110] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[138] /* pwLine3.ir.re variable */) - data->localData[0]->realVars[150] /* pwLine4.is.re variable */;
  TRACE_POP
}
/*
equation index: 658
type: SIMPLE_ASSIGN
constantLoad.p.ii = (-pwLine.ir.im) - pwLine1.is.im - pwLine3.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_658(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,658};
  data->localData[0]->realVars[51] /* constantLoad.p.ii variable */ = (-data->localData[0]->realVars[115] /* pwLine.ir.im variable */) - data->localData[0]->realVars[127] /* pwLine1.is.im variable */ - data->localData[0]->realVars[139] /* pwLine3.is.im variable */;
  TRACE_POP
}
/*
equation index: 659
type: SIMPLE_ASSIGN
constantLoad.p.ir = (-pwLine.ir.re) - pwLine1.is.re - pwLine3.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_659(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,659};
  data->localData[0]->realVars[52] /* constantLoad.p.ir variable */ = (-data->localData[0]->realVars[116] /* pwLine.ir.re variable */) - data->localData[0]->realVars[128] /* pwLine1.is.re variable */ - data->localData[0]->realVars[140] /* pwLine3.is.re variable */;
  TRACE_POP
}

void residualFunc693(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,693};
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
  modelica_real tmp46;
  modelica_real tmp47;
  modelica_real tmp48;
  modelica_real tmp49;
  modelica_real tmp50;
  modelica_boolean tmp51;
  modelica_boolean tmp52;
  modelica_boolean tmp53;
  modelica_boolean tmp54;
  modelica_boolean tmp55;
  modelica_boolean tmp56;
  modelica_boolean tmp57;
  modelica_boolean tmp58;
  /* iteration variables */
  for (i=0; i<33; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<33; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[116] /* pwLine.ir.re variable */ = xloc[0];
  data->localData[0]->realVars[128] /* pwLine1.is.re variable */ = xloc[1];
  data->localData[0]->realVars[140] /* pwLine3.is.re variable */ = xloc[2];
  data->localData[0]->realVars[115] /* pwLine.ir.im variable */ = xloc[3];
  data->localData[0]->realVars[139] /* pwLine3.is.im variable */ = xloc[4];
  data->localData[0]->realVars[127] /* pwLine1.is.im variable */ = xloc[5];
  data->localData[0]->realVars[138] /* pwLine3.ir.re variable */ = xloc[6];
  data->localData[0]->realVars[150] /* pwLine4.is.re variable */ = xloc[7];
  data->localData[0]->realVars[149] /* pwLine4.is.im variable */ = xloc[8];
  data->localData[0]->realVars[137] /* pwLine3.ir.im variable */ = xloc[9];
  data->localData[0]->realVars[126] /* pwLine1.ir.re variable */ = xloc[10];
  data->localData[0]->realVars[125] /* pwLine1.ir.im variable */ = xloc[11];
  data->localData[0]->realVars[85] /* gENCLS.id variable */ = xloc[12];
  data->localData[0]->realVars[86] /* gENCLS.iq variable */ = xloc[13];
  data->localData[0]->realVars[8] /* gENROU.PSIkd STATE(1) */ = xloc[14];
  data->localData[0]->realVars[6] /* gENROU.Epd STATE(1) */ = xloc[15];
  data->localData[0]->realVars[98] /* gENROU.PSIppq variable */ = xloc[16];
  data->localData[0]->realVars[106] /* gENROU.iq variable */ = xloc[17];
  data->localData[0]->realVars[97] /* gENROU.PSIppd variable */ = xloc[18];
  data->localData[0]->realVars[105] /* gENROU.id variable */ = xloc[19];
  data->localData[0]->realVars[120] /* pwLine.vs.re variable */ = xloc[20];
  data->localData[0]->realVars[119] /* pwLine.vs.im variable */ = xloc[21];
  data->localData[0]->realVars[129] /* pwLine1.vr.im variable */ = xloc[22];
  data->localData[0]->realVars[130] /* pwLine1.vr.re variable */ = xloc[23];
  data->localData[0]->realVars[67] /* eSST4B.VE variable */ = xloc[24];
  data->localData[0]->realVars[56] /* eSST4B.ECOMP variable */ = xloc[25];
  data->localData[0]->realVars[70] /* eSST4B.XADIFD variable */ = xloc[26];
  data->localData[0]->realVars[117] /* pwLine.is.im variable */ = xloc[27];
  data->localData[0]->realVars[118] /* pwLine.is.re variable */ = xloc[28];
  data->localData[0]->realVars[132] /* pwLine1.vs.re variable */ = xloc[29];
  data->localData[0]->realVars[131] /* pwLine1.vs.im variable */ = xloc[30];
  data->localData[0]->realVars[142] /* pwLine3.vr.re variable */ = xloc[31];
  data->localData[0]->realVars[141] /* pwLine3.vr.im variable */ = xloc[32];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_602(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_603(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_604(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_605(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_606(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_607(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_608(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_609(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_610(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_611(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_612(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_613(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_614(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_615(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_616(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_617(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_618(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_619(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_620(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_621(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_622(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_623(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_624(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_625(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_626(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_627(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_628(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_629(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_630(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_631(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_632(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_633(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_634(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_635(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_636(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_637(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_638(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_639(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_640(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_641(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_642(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_643(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_644(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_645(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_646(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_647(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_648(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_649(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_650(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_651(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_652(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_653(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_654(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_655(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_656(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_657(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_658(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_659(data, threadData);
  /* body */
  res[0] = (sin(data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[91] /* gENCLS.vq variable */) + ((-cos(data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[90] /* gENCLS.vd variable */) - data->localData[0]->realVars[129] /* pwLine1.vr.im variable */;

  tmp0 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[273] /* pwFault.t1 PARAM */);
  tmp9 = (modelica_boolean)tmp0;
  if(tmp9)
  {
    tmp10 = data->localData[0]->realVars[109] /* pwFault.p.ii variable */;
  }
  else
  {
    tmp1 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[274] /* pwFault.t2 PARAM */);
    tmp7 = (modelica_boolean)(tmp1 && data->simulationInfo->booleanParameter[77] /* pwFault.ground PARAM */);
    if(tmp7)
    {
      tmp8 = data->localData[0]->realVars[142] /* pwLine3.vr.re variable */ - 1e-10;
    }
    else
    {
      tmp2 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[274] /* pwFault.t2 PARAM */);
      tmp5 = (modelica_boolean)tmp2;
      if(tmp5)
      {
        tmp3 = data->simulationInfo->realParameter[272] /* pwFault.X PARAM */;
        tmp4 = data->simulationInfo->realParameter[271] /* pwFault.R PARAM */;
        tmp6 = data->localData[0]->realVars[109] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[271] /* pwFault.R PARAM */) * (data->localData[0]->realVars[141] /* pwLine3.vr.im variable */) - ((data->simulationInfo->realParameter[272] /* pwFault.X PARAM */) * (data->localData[0]->realVars[142] /* pwLine3.vr.re variable */)),(tmp3 * tmp3) + (tmp4 * tmp4),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
      }
      else
      {
        tmp6 = data->localData[0]->realVars[109] /* pwFault.p.ii variable */;
      }
      tmp8 = tmp6;
    }
    tmp10 = tmp8;
  }
  res[1] = tmp10;

  tmp11 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[273] /* pwFault.t1 PARAM */);
  tmp20 = (modelica_boolean)tmp11;
  if(tmp20)
  {
    tmp21 = data->localData[0]->realVars[110] /* pwFault.p.ir variable */;
  }
  else
  {
    tmp12 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[274] /* pwFault.t2 PARAM */);
    tmp18 = (modelica_boolean)(tmp12 && data->simulationInfo->booleanParameter[77] /* pwFault.ground PARAM */);
    if(tmp18)
    {
      tmp19 = data->localData[0]->realVars[141] /* pwLine3.vr.im variable */;
    }
    else
    {
      tmp13 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[274] /* pwFault.t2 PARAM */);
      tmp16 = (modelica_boolean)tmp13;
      if(tmp16)
      {
        tmp14 = data->simulationInfo->realParameter[271] /* pwFault.R PARAM */;
        tmp15 = data->simulationInfo->realParameter[272] /* pwFault.X PARAM */;
        tmp17 = data->localData[0]->realVars[110] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[271] /* pwFault.R PARAM */) * (data->localData[0]->realVars[142] /* pwLine3.vr.re variable */) + (data->simulationInfo->realParameter[272] /* pwFault.X PARAM */) * (data->localData[0]->realVars[141] /* pwLine3.vr.im variable */),(tmp14 * tmp14) + (tmp15 * tmp15),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp17 = data->localData[0]->realVars[110] /* pwFault.p.ir variable */;
      }
      tmp19 = tmp17;
    }
    tmp21 = tmp19;
  }
  res[2] = tmp21;

  tmp22 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[317] /* pwLine4.t1 PARAM */);
  tmp23 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[318] /* pwLine4.t2 PARAM */);
  res[3] = ((tmp22 && tmp23)?data->localData[0]->realVars[149] /* pwLine4.is.im variable */:data->localData[0]->realVars[141] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[129] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[316] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[149] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[142] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[313] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[141] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[314] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[315] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[150] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[141] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[313] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[142] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[314] /* pwLine4.Y.re PARAM */)))));

  tmp24 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[317] /* pwLine4.t1 PARAM */);
  tmp25 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[318] /* pwLine4.t2 PARAM */);
  res[4] = ((tmp24 && tmp25)?data->localData[0]->realVars[150] /* pwLine4.is.re variable */:data->localData[0]->realVars[142] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[130] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[316] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[150] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[141] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[313] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[142] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[314] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[315] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[149] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[142] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[313] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[141] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[314] /* pwLine4.Y.re PARAM */))))));

  res[5] = (cos(data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[91] /* gENCLS.vq variable */) + (sin(data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[90] /* gENCLS.vd variable */) - data->localData[0]->realVars[130] /* pwLine1.vr.re variable */;

  tmp26 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[317] /* pwLine4.t1 PARAM */);
  tmp27 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[318] /* pwLine4.t2 PARAM */);
  res[6] = ((tmp26 && tmp27)?data->localData[0]->realVars[148] /* pwLine4.ir.re variable */:data->localData[0]->realVars[130] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[142] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[316] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[148] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[129] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[313] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[130] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[314] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[315] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[147] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[130] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[313] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[129] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[314] /* pwLine4.Y.re PARAM */))))));

  tmp28 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[306] /* pwLine3.t1 PARAM */);
  tmp29 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[307] /* pwLine3.t2 PARAM */);
  res[7] = ((tmp28 && tmp29)?data->localData[0]->realVars[139] /* pwLine3.is.im variable */:data->localData[0]->realVars[131] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[141] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[305] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[139] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[132] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[302] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[131] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[303] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[304] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[140] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[131] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[302] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[132] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[303] /* pwLine3.Y.re PARAM */)))));

  tmp30 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[306] /* pwLine3.t1 PARAM */);
  tmp31 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[307] /* pwLine3.t2 PARAM */);
  res[8] = ((tmp30 && tmp31)?data->localData[0]->realVars[140] /* pwLine3.is.re variable */:data->localData[0]->realVars[132] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[142] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[305] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[140] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[131] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[302] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[132] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[303] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[304] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[139] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[132] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[302] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[131] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[303] /* pwLine3.Y.re PARAM */))))));

  tmp32 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[306] /* pwLine3.t1 PARAM */);
  tmp33 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[307] /* pwLine3.t2 PARAM */);
  res[9] = ((tmp32 && tmp33)?data->localData[0]->realVars[138] /* pwLine3.ir.re variable */:data->localData[0]->realVars[142] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[132] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[305] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[138] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[141] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[302] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[142] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[303] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[304] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[137] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[142] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[302] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[141] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[303] /* pwLine3.Y.re PARAM */))))));

  tmp34 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[306] /* pwLine3.t1 PARAM */);
  tmp35 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[307] /* pwLine3.t2 PARAM */);
  res[10] = ((tmp34 && tmp35)?data->localData[0]->realVars[137] /* pwLine3.ir.im variable */:data->localData[0]->realVars[141] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[131] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[305] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[137] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[142] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[302] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[141] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[303] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[304] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[138] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[141] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[302] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[142] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[303] /* pwLine3.Y.re PARAM */)))));

  tmp36 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[295] /* pwLine1.t1 PARAM */);
  tmp37 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[296] /* pwLine1.t2 PARAM */);
  res[11] = ((tmp36 && tmp37)?data->localData[0]->realVars[128] /* pwLine1.is.re variable */:data->localData[0]->realVars[132] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[130] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[294] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[128] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[131] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[291] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[132] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[292] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[293] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[127] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[132] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[291] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[131] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[292] /* pwLine1.Y.re PARAM */))))));

  tmp38 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[295] /* pwLine1.t1 PARAM */);
  tmp39 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[296] /* pwLine1.t2 PARAM */);
  res[12] = ((tmp38 && tmp39)?data->localData[0]->realVars[127] /* pwLine1.is.im variable */:data->localData[0]->realVars[131] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[129] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[294] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[127] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[132] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[291] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[131] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[292] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[293] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[128] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[131] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[291] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[132] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[292] /* pwLine1.Y.re PARAM */)))));

  tmp40 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[317] /* pwLine4.t1 PARAM */);
  tmp41 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[318] /* pwLine4.t2 PARAM */);
  res[13] = ((tmp40 && tmp41)?data->localData[0]->realVars[147] /* pwLine4.ir.im variable */:data->localData[0]->realVars[129] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[141] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[316] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[147] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[130] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[313] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[129] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[314] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[315] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[148] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[129] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[313] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[130] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[314] /* pwLine4.Y.re PARAM */)))));

  tmp42 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[295] /* pwLine1.t1 PARAM */);
  tmp43 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[296] /* pwLine1.t2 PARAM */);
  res[14] = ((tmp42 && tmp43)?data->localData[0]->realVars[125] /* pwLine1.ir.im variable */:data->localData[0]->realVars[129] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[131] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[294] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[125] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[130] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[291] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[129] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[292] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[293] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[126] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[129] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[291] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[130] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[292] /* pwLine1.Y.re PARAM */)))));

  tmp44 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[295] /* pwLine1.t1 PARAM */);
  tmp45 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[296] /* pwLine1.t2 PARAM */);
  res[15] = ((tmp44 && tmp45)?data->localData[0]->realVars[126] /* pwLine1.ir.re variable */:data->localData[0]->realVars[130] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[132] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[294] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[126] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[129] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[291] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[130] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[292] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[293] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[125] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[130] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[291] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[129] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[292] /* pwLine1.Y.re PARAM */))))));

  tmp46 = data->localData[0]->realVars[120] /* pwLine.vs.re variable */;
  tmp47 = data->localData[0]->realVars[119] /* pwLine.vs.im variable */;
  res[16] = sqrt((tmp46 * tmp46) + (tmp47 * tmp47)) - data->localData[0]->realVars[56] /* eSST4B.ECOMP variable */;

  res[17] = (sin(data->localData[0]->realVars[10] /* gENROU.delta STATE(1) */)) * (data->localData[0]->realVars[108] /* gENROU.uq variable */) + ((-cos(data->localData[0]->realVars[10] /* gENROU.delta STATE(1) */))) * (data->localData[0]->realVars[107] /* gENROU.ud variable */) - data->localData[0]->realVars[119] /* pwLine.vs.im variable */;

  res[18] = (data->localData[0]->realVars[75] /* eSST4B.lV_Gate.p variable */) * (data->localData[0]->realVars[77] /* eSST4B.maxLimiter.y variable */) - data->localData[0]->realVars[57] /* eSST4B.EFD variable */;

  tmp48 = (data->simulationInfo->realParameter[100] /* eSST4B.K_P_comp.re PARAM */) * (data->localData[0]->realVars[120] /* pwLine.vs.re variable */) + ((-data->simulationInfo->realParameter[93] /* eSST4B.K_I PARAM */) - ((data->simulationInfo->realParameter[100] /* eSST4B.K_P_comp.re PARAM */) * (data->simulationInfo->realParameter[138] /* eSST4B.X_L PARAM */))) * (data->localData[0]->realVars[63] /* eSST4B.I_T.im variable */) - ((data->simulationInfo->realParameter[99] /* eSST4B.K_P_comp.im PARAM */) * ((data->simulationInfo->realParameter[138] /* eSST4B.X_L PARAM */) * (data->localData[0]->realVars[64] /* eSST4B.I_T.re variable */) + data->localData[0]->realVars[119] /* pwLine.vs.im variable */));
  tmp49 = (data->simulationInfo->realParameter[100] /* eSST4B.K_P_comp.re PARAM */) * (data->localData[0]->realVars[119] /* pwLine.vs.im variable */) + (data->simulationInfo->realParameter[99] /* eSST4B.K_P_comp.im PARAM */) * (data->localData[0]->realVars[120] /* pwLine.vs.re variable */) + (data->simulationInfo->realParameter[93] /* eSST4B.K_I PARAM */ + (data->simulationInfo->realParameter[100] /* eSST4B.K_P_comp.re PARAM */) * (data->simulationInfo->realParameter[138] /* eSST4B.X_L PARAM */)) * (data->localData[0]->realVars[64] /* eSST4B.I_T.re variable */) - ((data->simulationInfo->realParameter[99] /* eSST4B.K_P_comp.im PARAM */) * ((data->simulationInfo->realParameter[138] /* eSST4B.X_L PARAM */) * (data->localData[0]->realVars[63] /* eSST4B.I_T.im variable */)));
  tmp50 = (tmp48 * tmp48) + (tmp49 * tmp49);
  if(!(tmp50 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt((eSST4B.K_P_comp.re * pwLine.vs.re + ((-eSST4B.K_I) - eSST4B.K_P_comp.re * eSST4B.X_L) * eSST4B.I_T.im - eSST4B.K_P_comp.im * (eSST4B.X_L * eSST4B.I_T.re + pwLine.vs.im)) ^ 2.0 + (eSST4B.K_P_comp.re * pwLine.vs.im + eSST4B.K_P_comp.im * pwLine.vs.re + (eSST4B.K_I + eSST4B.K_P_comp.re * eSST4B.X_L) * eSST4B.I_T.re - eSST4B.K_P_comp.im * eSST4B.X_L * eSST4B.I_T.im) ^ 2.0) was %g should be >= 0", tmp50);
  }res[19] = sqrt(tmp50) - data->localData[0]->realVars[67] /* eSST4B.VE variable */;

  res[20] = ((cos(data->localData[0]->realVars[10] /* gENROU.delta STATE(1) */)) * (data->localData[0]->realVars[105] /* gENROU.id variable */) - ((sin(data->localData[0]->realVars[10] /* gENROU.delta STATE(1) */)) * (data->localData[0]->realVars[106] /* gENROU.iq variable */))) * (data->simulationInfo->realParameter[186] /* gENROU.CoB PARAM */) + data->localData[0]->realVars[117] /* pwLine.is.im variable */;

  res[21] = (data->localData[0]->realVars[8] /* gENROU.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[206] /* gENROU.K4d PARAM */) + (data->localData[0]->realVars[7] /* gENROU.Epq STATE(1) */) * (data->simulationInfo->realParameter[204] /* gENROU.K3d PARAM */) - data->localData[0]->realVars[97] /* gENROU.PSIppd variable */;

  res[22] = data->localData[0]->realVars[7] /* gENROU.Epq STATE(1) */ + (data->simulationInfo->realParameter[237] /* gENROU.Xl PARAM */ - data->simulationInfo->realParameter[238] /* gENROU.Xpd PARAM */) * (data->localData[0]->realVars[105] /* gENROU.id variable */) + (-data->localData[0]->realVars[8] /* gENROU.PSIkd STATE(1) */) - ((data->localData[0]->realVars[20] /* der(gENROU.PSIkd) STATE_DER */) * (data->simulationInfo->realParameter[230] /* gENROU.Tppd0 PARAM */));

  res[23] = (((-sin(data->localData[0]->realVars[10] /* gENROU.delta STATE(1) */))) * (data->localData[0]->realVars[105] /* gENROU.id variable */) - ((cos(data->localData[0]->realVars[10] /* gENROU.delta STATE(1) */)) * (data->localData[0]->realVars[106] /* gENROU.iq variable */))) * (data->simulationInfo->realParameter[186] /* gENROU.CoB PARAM */) + data->localData[0]->realVars[118] /* pwLine.is.re variable */;

  tmp51 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[284] /* pwLine.t1 PARAM */);
  tmp52 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[285] /* pwLine.t2 PARAM */);
  res[24] = ((tmp51 && tmp52)?data->localData[0]->realVars[117] /* pwLine.is.im variable */:data->localData[0]->realVars[119] /* pwLine.vs.im variable */ - data->localData[0]->realVars[131] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[283] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[117] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[120] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[280] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[119] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[281] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[282] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[118] /* pwLine.is.re variable */ + (data->localData[0]->realVars[119] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[280] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[120] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[281] /* pwLine.Y.re PARAM */)))));

  tmp53 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[284] /* pwLine.t1 PARAM */);
  tmp54 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[285] /* pwLine.t2 PARAM */);
  res[25] = ((tmp53 && tmp54)?data->localData[0]->realVars[118] /* pwLine.is.re variable */:data->localData[0]->realVars[120] /* pwLine.vs.re variable */ - data->localData[0]->realVars[132] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[283] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[118] /* pwLine.is.re variable */ + (data->localData[0]->realVars[119] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[280] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[120] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[281] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[282] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[117] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[120] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[280] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[119] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[281] /* pwLine.Y.re PARAM */))))));

  res[26] = (data->localData[0]->realVars[131] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[52] /* constantLoad.p.ir variable */) + ((-data->localData[0]->realVars[132] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[51] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[47] /* constantLoad.Q variable */;

  res[27] = (data->localData[0]->realVars[131] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[51] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[132] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[52] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[46] /* constantLoad.P variable */;

  tmp55 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[284] /* pwLine.t1 PARAM */);
  tmp56 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[285] /* pwLine.t2 PARAM */);
  res[28] = ((tmp55 && tmp56)?data->localData[0]->realVars[115] /* pwLine.ir.im variable */:data->localData[0]->realVars[131] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[119] /* pwLine.vs.im variable */ - ((data->simulationInfo->realParameter[283] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[115] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[132] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[280] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[131] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[281] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[282] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[116] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[131] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[280] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[132] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[281] /* pwLine.Y.re PARAM */)))));

  tmp57 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[284] /* pwLine.t1 PARAM */);
  tmp58 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[285] /* pwLine.t2 PARAM */);
  res[29] = ((tmp57 && tmp58)?data->localData[0]->realVars[116] /* pwLine.ir.re variable */:data->localData[0]->realVars[132] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[120] /* pwLine.vs.re variable */ - ((data->simulationInfo->realParameter[283] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[116] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[131] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[280] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[132] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[281] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[282] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[115] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[132] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[280] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[131] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[281] /* pwLine.Y.re PARAM */))))));

  res[30] = (cos(data->localData[0]->realVars[10] /* gENROU.delta STATE(1) */)) * (data->localData[0]->realVars[108] /* gENROU.uq variable */) + (sin(data->localData[0]->realVars[10] /* gENROU.delta STATE(1) */)) * (data->localData[0]->realVars[107] /* gENROU.ud variable */) - data->localData[0]->realVars[120] /* pwLine.vs.re variable */;

  res[31] = data->localData[0]->realVars[98] /* gENROU.PSIppq variable */ - ((data->localData[0]->realVars[6] /* gENROU.Epd STATE(1) */) * (data->simulationInfo->realParameter[205] /* gENROU.K3q PARAM */)) - ((data->localData[0]->realVars[9] /* gENROU.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[207] /* gENROU.K4q PARAM */));

  res[32] = data->localData[0]->realVars[6] /* gENROU.Epd STATE(1) */ + (data->simulationInfo->realParameter[242] /* gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[237] /* gENROU.Xl PARAM */) * (data->localData[0]->realVars[106] /* gENROU.iq variable */) + (-data->localData[0]->realVars[9] /* gENROU.PSIkq STATE(1) */) - ((data->localData[0]->realVars[21] /* der(gENROU.PSIkq) STATE_DER */) * (data->simulationInfo->realParameter[231] /* gENROU.Tppq0 PARAM */));
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS693(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+33] = {0,4,4,4,4,4,4,3,3,3,3,4,4,4,4,2,2,6,6,6,6,6,6,7,7,2,2,3,4,4,11,11,8,8};
  const int rowIndex[159] = {26,27,28,29,11,12,26,27,7,8,26,27,26,27,28,29,7,8,26,27,11,12,26,27,2,9,10,2,3,4,1,3,4,1,9,10,6,13,14,15,6,13,14,15,0,5,6,13,0,5,6,13,21,22,31,32,17,21,22,30,31,32,17,20,23,30,31,32,17,21,22,30,31,32,17,20,21,22,23,30,16,19,24,25,29,30,16,17,19,24,25,28,0,3,6,12,13,14,15,4,5,6,11,13,14,15,18,19,16,18,18,21,22,19,20,24,25,19,23,24,25,7,8,9,11,12,15,25,26,27,28,29,7,8,10,11,12,14,24,26,27,28,29,1,2,3,4,6,8,9,10,1,2,3,4,7,9,10,13};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((33+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(159*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 159;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(33*sizeof(int));
  inSysData->sparsePattern->maxColors = 10;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (33+1)*sizeof(int));
  
  for(i=2;i<33+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 159*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[32] = 1;
  inSysData->sparsePattern->colorCols[30] = 2;
  inSysData->sparsePattern->colorCols[29] = 3;
  inSysData->sparsePattern->colorCols[21] = 4;
  inSysData->sparsePattern->colorCols[23] = 4;
  inSysData->sparsePattern->colorCols[5] = 5;
  inSysData->sparsePattern->colorCols[20] = 5;
  inSysData->sparsePattern->colorCols[31] = 5;
  inSysData->sparsePattern->colorCols[4] = 6;
  inSysData->sparsePattern->colorCols[19] = 6;
  inSysData->sparsePattern->colorCols[22] = 6;
  inSysData->sparsePattern->colorCols[3] = 7;
  inSysData->sparsePattern->colorCols[13] = 7;
  inSysData->sparsePattern->colorCols[18] = 7;
  inSysData->sparsePattern->colorCols[28] = 7;
  inSysData->sparsePattern->colorCols[2] = 8;
  inSysData->sparsePattern->colorCols[12] = 8;
  inSysData->sparsePattern->colorCols[17] = 8;
  inSysData->sparsePattern->colorCols[26] = 8;
  inSysData->sparsePattern->colorCols[1] = 9;
  inSysData->sparsePattern->colorCols[7] = 9;
  inSysData->sparsePattern->colorCols[9] = 9;
  inSysData->sparsePattern->colorCols[11] = 9;
  inSysData->sparsePattern->colorCols[16] = 9;
  inSysData->sparsePattern->colorCols[25] = 9;
  inSysData->sparsePattern->colorCols[27] = 9;
  inSysData->sparsePattern->colorCols[0] = 10;
  inSysData->sparsePattern->colorCols[6] = 10;
  inSysData->sparsePattern->colorCols[8] = 10;
  inSysData->sparsePattern->colorCols[10] = 10;
  inSysData->sparsePattern->colorCols[14] = 10;
  inSysData->sparsePattern->colorCols[15] = 10;
  inSysData->sparsePattern->colorCols[24] = 10;
}
void initializeStaticDataNLS693(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for pwLine.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[116].attribute /* pwLine.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[116].attribute /* pwLine.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[116].attribute /* pwLine.ir.re */.max;
  /* static nls data for pwLine1.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[128].attribute /* pwLine1.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[128].attribute /* pwLine1.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[128].attribute /* pwLine1.is.re */.max;
  /* static nls data for pwLine3.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[140].attribute /* pwLine3.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[140].attribute /* pwLine3.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[140].attribute /* pwLine3.is.re */.max;
  /* static nls data for pwLine.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[115].attribute /* pwLine.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[115].attribute /* pwLine.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[115].attribute /* pwLine.ir.im */.max;
  /* static nls data for pwLine3.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[139].attribute /* pwLine3.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[139].attribute /* pwLine3.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[139].attribute /* pwLine3.is.im */.max;
  /* static nls data for pwLine1.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[127].attribute /* pwLine1.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[127].attribute /* pwLine1.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[127].attribute /* pwLine1.is.im */.max;
  /* static nls data for pwLine3.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[138].attribute /* pwLine3.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[138].attribute /* pwLine3.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[138].attribute /* pwLine3.ir.re */.max;
  /* static nls data for pwLine4.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[150].attribute /* pwLine4.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[150].attribute /* pwLine4.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[150].attribute /* pwLine4.is.re */.max;
  /* static nls data for pwLine4.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[149].attribute /* pwLine4.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[149].attribute /* pwLine4.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[149].attribute /* pwLine4.is.im */.max;
  /* static nls data for pwLine3.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[137].attribute /* pwLine3.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[137].attribute /* pwLine3.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[137].attribute /* pwLine3.ir.im */.max;
  /* static nls data for pwLine1.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[126].attribute /* pwLine1.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[126].attribute /* pwLine1.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[126].attribute /* pwLine1.ir.re */.max;
  /* static nls data for pwLine1.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[125].attribute /* pwLine1.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[125].attribute /* pwLine1.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[125].attribute /* pwLine1.ir.im */.max;
  /* static nls data for gENCLS.id */
  sysData->nominal[i] = data->modelData->realVarsData[85].attribute /* gENCLS.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[85].attribute /* gENCLS.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[85].attribute /* gENCLS.id */.max;
  /* static nls data for gENCLS.iq */
  sysData->nominal[i] = data->modelData->realVarsData[86].attribute /* gENCLS.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[86].attribute /* gENCLS.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[86].attribute /* gENCLS.iq */.max;
  /* static nls data for gENROU.PSIkd */
  sysData->nominal[i] = data->modelData->realVarsData[8].attribute /* gENROU.PSIkd */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[8].attribute /* gENROU.PSIkd */.min;
  sysData->max[i++]   = data->modelData->realVarsData[8].attribute /* gENROU.PSIkd */.max;
  /* static nls data for gENROU.Epd */
  sysData->nominal[i] = data->modelData->realVarsData[6].attribute /* gENROU.Epd */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[6].attribute /* gENROU.Epd */.min;
  sysData->max[i++]   = data->modelData->realVarsData[6].attribute /* gENROU.Epd */.max;
  /* static nls data for gENROU.PSIppq */
  sysData->nominal[i] = data->modelData->realVarsData[98].attribute /* gENROU.PSIppq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[98].attribute /* gENROU.PSIppq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[98].attribute /* gENROU.PSIppq */.max;
  /* static nls data for gENROU.iq */
  sysData->nominal[i] = data->modelData->realVarsData[106].attribute /* gENROU.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[106].attribute /* gENROU.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[106].attribute /* gENROU.iq */.max;
  /* static nls data for gENROU.PSIppd */
  sysData->nominal[i] = data->modelData->realVarsData[97].attribute /* gENROU.PSIppd */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[97].attribute /* gENROU.PSIppd */.min;
  sysData->max[i++]   = data->modelData->realVarsData[97].attribute /* gENROU.PSIppd */.max;
  /* static nls data for gENROU.id */
  sysData->nominal[i] = data->modelData->realVarsData[105].attribute /* gENROU.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[105].attribute /* gENROU.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[105].attribute /* gENROU.id */.max;
  /* static nls data for pwLine.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[120].attribute /* pwLine.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[120].attribute /* pwLine.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[120].attribute /* pwLine.vs.re */.max;
  /* static nls data for pwLine.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[119].attribute /* pwLine.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[119].attribute /* pwLine.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[119].attribute /* pwLine.vs.im */.max;
  /* static nls data for pwLine1.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[129].attribute /* pwLine1.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[129].attribute /* pwLine1.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[129].attribute /* pwLine1.vr.im */.max;
  /* static nls data for pwLine1.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[130].attribute /* pwLine1.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[130].attribute /* pwLine1.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[130].attribute /* pwLine1.vr.re */.max;
  /* static nls data for eSST4B.VE */
  sysData->nominal[i] = data->modelData->realVarsData[67].attribute /* eSST4B.VE */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[67].attribute /* eSST4B.VE */.min;
  sysData->max[i++]   = data->modelData->realVarsData[67].attribute /* eSST4B.VE */.max;
  /* static nls data for eSST4B.ECOMP */
  sysData->nominal[i] = data->modelData->realVarsData[56].attribute /* eSST4B.ECOMP */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[56].attribute /* eSST4B.ECOMP */.min;
  sysData->max[i++]   = data->modelData->realVarsData[56].attribute /* eSST4B.ECOMP */.max;
  /* static nls data for eSST4B.XADIFD */
  sysData->nominal[i] = data->modelData->realVarsData[70].attribute /* eSST4B.XADIFD */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[70].attribute /* eSST4B.XADIFD */.min;
  sysData->max[i++]   = data->modelData->realVarsData[70].attribute /* eSST4B.XADIFD */.max;
  /* static nls data for pwLine.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[117].attribute /* pwLine.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[117].attribute /* pwLine.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[117].attribute /* pwLine.is.im */.max;
  /* static nls data for pwLine.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[118].attribute /* pwLine.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[118].attribute /* pwLine.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[118].attribute /* pwLine.is.re */.max;
  /* static nls data for pwLine1.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[132].attribute /* pwLine1.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[132].attribute /* pwLine1.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[132].attribute /* pwLine1.vs.re */.max;
  /* static nls data for pwLine1.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[131].attribute /* pwLine1.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[131].attribute /* pwLine1.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[131].attribute /* pwLine1.vs.im */.max;
  /* static nls data for pwLine3.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[142].attribute /* pwLine3.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[142].attribute /* pwLine3.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[142].attribute /* pwLine3.vr.re */.max;
  /* static nls data for pwLine3.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[141].attribute /* pwLine3.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[141].attribute /* pwLine3.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[141].attribute /* pwLine3.vr.im */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS693(sysData);
}

void getIterationVarsNLS693(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[116] /* pwLine.ir.re variable */;
  array[1] = data->localData[0]->realVars[128] /* pwLine1.is.re variable */;
  array[2] = data->localData[0]->realVars[140] /* pwLine3.is.re variable */;
  array[3] = data->localData[0]->realVars[115] /* pwLine.ir.im variable */;
  array[4] = data->localData[0]->realVars[139] /* pwLine3.is.im variable */;
  array[5] = data->localData[0]->realVars[127] /* pwLine1.is.im variable */;
  array[6] = data->localData[0]->realVars[138] /* pwLine3.ir.re variable */;
  array[7] = data->localData[0]->realVars[150] /* pwLine4.is.re variable */;
  array[8] = data->localData[0]->realVars[149] /* pwLine4.is.im variable */;
  array[9] = data->localData[0]->realVars[137] /* pwLine3.ir.im variable */;
  array[10] = data->localData[0]->realVars[126] /* pwLine1.ir.re variable */;
  array[11] = data->localData[0]->realVars[125] /* pwLine1.ir.im variable */;
  array[12] = data->localData[0]->realVars[85] /* gENCLS.id variable */;
  array[13] = data->localData[0]->realVars[86] /* gENCLS.iq variable */;
  array[14] = data->localData[0]->realVars[8] /* gENROU.PSIkd STATE(1) */;
  array[15] = data->localData[0]->realVars[6] /* gENROU.Epd STATE(1) */;
  array[16] = data->localData[0]->realVars[98] /* gENROU.PSIppq variable */;
  array[17] = data->localData[0]->realVars[106] /* gENROU.iq variable */;
  array[18] = data->localData[0]->realVars[97] /* gENROU.PSIppd variable */;
  array[19] = data->localData[0]->realVars[105] /* gENROU.id variable */;
  array[20] = data->localData[0]->realVars[120] /* pwLine.vs.re variable */;
  array[21] = data->localData[0]->realVars[119] /* pwLine.vs.im variable */;
  array[22] = data->localData[0]->realVars[129] /* pwLine1.vr.im variable */;
  array[23] = data->localData[0]->realVars[130] /* pwLine1.vr.re variable */;
  array[24] = data->localData[0]->realVars[67] /* eSST4B.VE variable */;
  array[25] = data->localData[0]->realVars[56] /* eSST4B.ECOMP variable */;
  array[26] = data->localData[0]->realVars[70] /* eSST4B.XADIFD variable */;
  array[27] = data->localData[0]->realVars[117] /* pwLine.is.im variable */;
  array[28] = data->localData[0]->realVars[118] /* pwLine.is.re variable */;
  array[29] = data->localData[0]->realVars[132] /* pwLine1.vs.re variable */;
  array[30] = data->localData[0]->realVars[131] /* pwLine1.vs.im variable */;
  array[31] = data->localData[0]->realVars[142] /* pwLine3.vr.re variable */;
  array[32] = data->localData[0]->realVars[141] /* pwLine3.vr.im variable */;
}


/* inner equations */

/*
equation index: 34
type: SIMPLE_ASSIGN
constantLoad.v = sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_34(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,34};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[132] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[131] /* pwLine1.vs.im variable */;
  data->localData[0]->realVars[53] /* constantLoad.v variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 35
type: SIMPLE_ASSIGN
constantLoad.kP = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a0 + constantLoad.a1 * cos(constantLoad.v * constantLoad.wp) + constantLoad.b1 * sin(constantLoad.v * constantLoad.wp) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_35(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,35};
  modelica_boolean tmp0;
  tmp0 = Less(data->localData[0]->realVars[53] /* constantLoad.v variable */,data->simulationInfo->realParameter[41] /* constantLoad.PQBRAK PARAM */);
  data->localData[0]->realVars[50] /* constantLoad.kP variable */ = (tmp0?data->simulationInfo->realParameter[60] /* constantLoad.a0 PARAM */ + (data->simulationInfo->realParameter[61] /* constantLoad.a1 PARAM */) * (cos((data->localData[0]->realVars[53] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[67] /* constantLoad.b1 PARAM */) * (sin((data->localData[0]->realVars[53] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))):1.0);
  TRACE_POP
}
/*
equation index: 36
type: SIMPLE_ASSIGN
constantLoad.kI = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (-1.0 + constantLoad.b2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_36(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,36};
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
  tmp0 = Less(data->localData[0]->realVars[53] /* constantLoad.v variable */,0.5);
  tmp15 = (modelica_boolean)tmp0;
  if(tmp15)
  {
    tmp1 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
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
    }tmp8 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
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
  data->localData[0]->realVars[49] /* constantLoad.kI variable */ = tmp16;
  TRACE_POP
}
/*
equation index: 37
type: SIMPLE_ASSIGN
constantLoad.Q = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_37(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,37};
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
    tmp2 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[49] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[44] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[48] /* constantLoad.S_Y.im PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[50] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[46] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[70] /* constantLoad.d_Q PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[49] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[44] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[48] /* constantLoad.S_Y.im PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[50] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[46] /* constantLoad.S_P.im PARAM */);
  }
  data->localData[0]->realVars[47] /* constantLoad.Q variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 38
type: SIMPLE_ASSIGN
constantLoad.P = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_38(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,38};
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
    tmp2 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[49] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[45] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[49] /* constantLoad.S_Y.re PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[50] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[47] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[69] /* constantLoad.d_P PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[49] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[45] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[49] /* constantLoad.S_Y.re PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[50] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[47] /* constantLoad.S_P.re PARAM */);
  }
  data->localData[0]->realVars[46] /* constantLoad.P variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 39
type: SIMPLE_ASSIGN
eSST4B.I_T.re = 2.0 * pwLine.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_39(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,39};
  data->localData[0]->realVars[64] /* eSST4B.I_T.re variable */ = (2.0) * (data->localData[0]->realVars[118] /* pwLine.is.re variable */);
  TRACE_POP
}
/*
equation index: 40
type: SIMPLE_ASSIGN
eSST4B.I_T.im = 2.0 * pwLine.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_40(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,40};
  data->localData[0]->realVars[63] /* eSST4B.I_T.im variable */ = (2.0) * (data->localData[0]->realVars[117] /* pwLine.is.im variable */);
  TRACE_POP
}
/*
equation index: 41
type: SIMPLE_ASSIGN
eSST4B.rectifierCommutationVoltageDrop.division.u1 = eSST4B.rectifierCommutationVoltageDrop.gain2.k * eSST4B.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_41(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,41};
  data->localData[0]->realVars[78] /* eSST4B.rectifierCommutationVoltageDrop.division.u1 variable */ = (data->simulationInfo->realParameter[159] /* eSST4B.rectifierCommutationVoltageDrop.gain2.k PARAM */) * (data->localData[0]->realVars[70] /* eSST4B.XADIFD variable */);
  TRACE_POP
}
/*
equation index: 42
type: SIMPLE_ASSIGN
eSST4B.EFD = eSST4B.XADIFD + $DER.gENROU.Epq * gENROU.Tpd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_42(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,42};
  data->localData[0]->realVars[57] /* eSST4B.EFD variable */ = data->localData[0]->realVars[70] /* eSST4B.XADIFD variable */ + (data->localData[0]->realVars[19] /* der(gENROU.Epq) STATE_DER */) * (data->simulationInfo->realParameter[229] /* gENROU.Tpd0 PARAM */);
  TRACE_POP
}
/*
equation index: 43
type: SIMPLE_ASSIGN
eSST4B.add1.u1 = eSST4B.gain.k * eSST4B.EFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_43(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,43};
  data->localData[0]->realVars[72] /* eSST4B.add1.u1 variable */ = (data->simulationInfo->realParameter[150] /* eSST4B.gain.k PARAM */) * (data->localData[0]->realVars[57] /* eSST4B.EFD variable */);
  TRACE_POP
}
/*
equation index: 44
type: SIMPLE_ASSIGN
eSST4B.Ifd0 = eSST4B.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_44(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,44};
  data->simulationInfo->realParameter[90] /* eSST4B.Ifd0 PARAM */ = data->localData[0]->realVars[70] /* eSST4B.XADIFD variable */;
  TRACE_POP
}
/*
equation index: 45
type: SIMPLE_ASSIGN
eSST4B.ECOMP0 = eSST4B.ECOMP
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_45(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,45};
  data->simulationInfo->realParameter[85] /* eSST4B.ECOMP0 PARAM */ = data->localData[0]->realVars[56] /* eSST4B.ECOMP variable */;
  TRACE_POP
}
/*
equation index: 46
type: SIMPLE_ASSIGN
eSST4B.TransducerDelay.y_start = eSST4B.ECOMP0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_46(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,46};
  data->simulationInfo->realParameter[109] /* eSST4B.TransducerDelay.y_start PARAM */ = data->simulationInfo->realParameter[85] /* eSST4B.ECOMP0 PARAM */;
  TRACE_POP
}
/*
equation index: 47
type: SIMPLE_ASSIGN
$START.eSST4B.DiffV.u2 = eSST4B.TransducerDelay.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_47(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,47};
  data->modelData->realVarsData[54].attribute /* eSST4B.DiffV.u2 variable */.start = data->simulationInfo->realParameter[109] /* eSST4B.TransducerDelay.y_start PARAM */;
    data->localData[0]->realVars[54] /* eSST4B.DiffV.u2 variable */ = data->modelData->realVarsData[54].attribute /* eSST4B.DiffV.u2 variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[54].info /* eSST4B.DiffV.u2 */.name, (modelica_real) data->localData[0]->realVars[54] /* eSST4B.DiffV.u2 variable */);
  TRACE_POP
}
/*
equation index: 48
type: SIMPLE_ASSIGN
$START.eSST4B.TransducerDelay.state = eSST4B.TransducerDelay.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_48(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,48};
  data->modelData->realVarsData[0].attribute /* eSST4B.TransducerDelay.state STATE(1) */.start = data->simulationInfo->realParameter[109] /* eSST4B.TransducerDelay.y_start PARAM */;
    data->localData[0]->realVars[0] /* eSST4B.TransducerDelay.state STATE(1) */ = data->modelData->realVarsData[0].attribute /* eSST4B.TransducerDelay.state STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[0].info /* eSST4B.TransducerDelay.state */.name, (modelica_real) data->localData[0]->realVars[0] /* eSST4B.TransducerDelay.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 49
type: SIMPLE_ASSIGN
eSST4B.TransducerDelay.state = eSST4B.TransducerDelay.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_49(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,49};
  data->localData[0]->realVars[0] /* eSST4B.TransducerDelay.state STATE(1) */ = data->simulationInfo->realParameter[109] /* eSST4B.TransducerDelay.y_start PARAM */;
  TRACE_POP
}
/*
equation index: 50
type: SIMPLE_ASSIGN
eSST4B.DiffV.u2 = if abs(eSST4B.TransducerDelay.T) <= 1e-15 then eSST4B.ECOMP * eSST4B.TransducerDelay.K else eSST4B.TransducerDelay.state
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_50(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,50};
  modelica_boolean tmp0;
  tmp0 = LessEq(fabs(data->simulationInfo->realParameter[106] /* eSST4B.TransducerDelay.T PARAM */),1e-15);
  data->localData[0]->realVars[54] /* eSST4B.DiffV.u2 variable */ = (tmp0?(data->localData[0]->realVars[56] /* eSST4B.ECOMP variable */) * (data->simulationInfo->realParameter[105] /* eSST4B.TransducerDelay.K PARAM */):data->localData[0]->realVars[0] /* eSST4B.TransducerDelay.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 51
type: SIMPLE_ASSIGN
eSST4B.V_REF = eSST4B.ECOMP
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_51(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,51};
  data->simulationInfo->realParameter[133] /* eSST4B.V_REF PARAM */ = data->localData[0]->realVars[56] /* eSST4B.ECOMP variable */;
  TRACE_POP
}
/*
equation index: 52
type: SIMPLE_ASSIGN
eSST4B.VoltageReference.k = eSST4B.V_REF
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_52(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,52};
  data->simulationInfo->realParameter[136] /* eSST4B.VoltageReference.k PARAM */ = data->simulationInfo->realParameter[133] /* eSST4B.V_REF PARAM */;
  TRACE_POP
}
/*
equation index: 53
type: SIMPLE_ASSIGN
eSST4B.DiffV.y = eSST4B.DiffV.k1 * eSST4B.VoltageReference.k + eSST4B.DiffV.k2 * eSST4B.DiffV.u2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_53(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,53};
  data->localData[0]->realVars[55] /* eSST4B.DiffV.y variable */ = (data->simulationInfo->realParameter[82] /* eSST4B.DiffV.k1 PARAM */) * (data->simulationInfo->realParameter[136] /* eSST4B.VoltageReference.k PARAM */) + (data->simulationInfo->realParameter[83] /* eSST4B.DiffV.k2 PARAM */) * (data->localData[0]->realVars[54] /* eSST4B.DiffV.u2 variable */);
  TRACE_POP
}
/*
equation index: 54
type: SIMPLE_ASSIGN
eSST4B.Gain1.u = eSST4B.add3_1.k1 * const.k + eSST4B.add3_1.k2 * eSST4B.DiffV.y + eSST4B.add3_1.k3 * const5.k
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_54(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,54};
  data->localData[0]->realVars[59] /* eSST4B.Gain1.u variable */ = (data->simulationInfo->realParameter[145] /* eSST4B.add3_1.k1 PARAM */) * (data->simulationInfo->realParameter[34] /* const.k PARAM */) + (data->simulationInfo->realParameter[146] /* eSST4B.add3_1.k2 PARAM */) * (data->localData[0]->realVars[55] /* eSST4B.DiffV.y variable */) + (data->simulationInfo->realParameter[147] /* eSST4B.add3_1.k3 PARAM */) * (data->simulationInfo->realParameter[38] /* const5.k PARAM */);
  TRACE_POP
}
/*
equation index: 55
type: SIMPLE_ASSIGN
eSST4B.Gain1.y = eSST4B.Gain1.k * eSST4B.Gain1.u
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_55(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,55};
  data->localData[0]->realVars[60] /* eSST4B.Gain1.y variable */ = (data->simulationInfo->realParameter[87] /* eSST4B.Gain1.k PARAM */) * (data->localData[0]->realVars[59] /* eSST4B.Gain1.u variable */);
  TRACE_POP
}
/*
equation index: 56
type: SIMPLE_ASSIGN
eSST4B.add.y = eSST4B.add.k1 * eSST4B.Gain1.y + eSST4B.add.k2 * eSST4B.VR1.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_56(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,56};
  data->localData[0]->realVars[71] /* eSST4B.add.y variable */ = (data->simulationInfo->realParameter[139] /* eSST4B.add.k1 PARAM */) * (data->localData[0]->realVars[60] /* eSST4B.Gain1.y variable */) + (data->simulationInfo->realParameter[140] /* eSST4B.add.k2 PARAM */) * (data->localData[0]->realVars[3] /* eSST4B.VR1.y STATE(1) */);
  TRACE_POP
}
/*
equation index: 57
type: SIMPLE_ASSIGN
eSST4B.VA.u = homotopy(smooth(0, if eSST4B.add.y > eSST4B.limiter.uMax then eSST4B.limiter.uMax else if eSST4B.add.y < eSST4B.limiter.uMin then eSST4B.limiter.uMin else eSST4B.add.y), eSST4B.add.y)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_57(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,57};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  tmp0 = Greater(data->localData[0]->realVars[71] /* eSST4B.add.y variable */,data->simulationInfo->realParameter[152] /* eSST4B.limiter.uMax PARAM */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->simulationInfo->realParameter[152] /* eSST4B.limiter.uMax PARAM */;
  }
  else
  {
    tmp1 = Less(data->localData[0]->realVars[71] /* eSST4B.add.y variable */,data->simulationInfo->realParameter[153] /* eSST4B.limiter.uMin PARAM */);
    tmp3 = (tmp1?data->simulationInfo->realParameter[153] /* eSST4B.limiter.uMin PARAM */:data->localData[0]->realVars[71] /* eSST4B.add.y variable */);
  }
  data->localData[0]->realVars[65] /* eSST4B.VA.u variable */ = homotopy(tmp3, data->localData[0]->realVars[71] /* eSST4B.add.y variable */);
  TRACE_POP
}
/*
equation index: 58
type: SIMPLE_ASSIGN
eSST4B.VA.y = if abs(eSST4B.VA.T) <= 1e-15 then eSST4B.VA.u * eSST4B.VA.K else eSST4B.VA.state
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_58(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,58};
  modelica_boolean tmp0;
  tmp0 = LessEq(fabs(data->simulationInfo->realParameter[111] /* eSST4B.VA.T PARAM */),1e-15);
  data->localData[0]->realVars[66] /* eSST4B.VA.y variable */ = (tmp0?(data->localData[0]->realVars[65] /* eSST4B.VA.u variable */) * (data->simulationInfo->realParameter[110] /* eSST4B.VA.K PARAM */):data->localData[0]->realVars[1] /* eSST4B.VA.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 59
type: SIMPLE_ASSIGN
eSST4B.Gain2.u = eSST4B.add1.k1 * eSST4B.add1.u1 + eSST4B.add1.k2 * eSST4B.VA.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_59(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,59};
  data->localData[0]->realVars[61] /* eSST4B.Gain2.u variable */ = (data->simulationInfo->realParameter[141] /* eSST4B.add1.k1 PARAM */) * (data->localData[0]->realVars[72] /* eSST4B.add1.u1 variable */) + (data->simulationInfo->realParameter[142] /* eSST4B.add1.k2 PARAM */) * (data->localData[0]->realVars[66] /* eSST4B.VA.y variable */);
  TRACE_POP
}
/*
equation index: 60
type: SIMPLE_ASSIGN
eSST4B.Gain2.y = eSST4B.Gain2.k * eSST4B.Gain2.u
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_60(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,60};
  data->localData[0]->realVars[62] /* eSST4B.Gain2.y variable */ = (data->simulationInfo->realParameter[88] /* eSST4B.Gain2.k PARAM */) * (data->localData[0]->realVars[61] /* eSST4B.Gain2.u variable */);
  TRACE_POP
}
/*
equation index: 61
type: SIMPLE_ASSIGN
eSST4B.rectifierCommutationVoltageDrop.division.y = eSST4B.rectifierCommutationVoltageDrop.division.u1 / eSST4B.VE
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_61(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,61};
  data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */ = DIVISION_SIM(data->localData[0]->realVars[78] /* eSST4B.rectifierCommutationVoltageDrop.division.u1 variable */,data->localData[0]->realVars[67] /* eSST4B.VE variable */,"eSST4B.VE",equationIndexes);
  TRACE_POP
}
/*
equation index: 62
type: SIMPLE_ASSIGN
eSST4B.rectifierCommutationVoltageDrop.fEX.y = if eSST4B.rectifierCommutationVoltageDrop.division.y <= 0.0 then 1.0 else if eSST4B.rectifierCommutationVoltageDrop.division.y > 0.0 and eSST4B.rectifierCommutationVoltageDrop.division.y <= 0.433 then 1.0 + (-0.577) * eSST4B.rectifierCommutationVoltageDrop.division.y else if eSST4B.rectifierCommutationVoltageDrop.division.y > 0.433 and eSST4B.rectifierCommutationVoltageDrop.division.y < 0.75 then sqrt(0.75 - eSST4B.rectifierCommutationVoltageDrop.division.y ^ 2.0) else if eSST4B.rectifierCommutationVoltageDrop.division.y >= 0.75 and eSST4B.rectifierCommutationVoltageDrop.division.y <= 1.0 then 1.732 * (1.0 - eSST4B.rectifierCommutationVoltageDrop.division.y) else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_62(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,62};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_boolean tmp7;
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  modelica_boolean tmp11;
  modelica_real tmp12;
  modelica_boolean tmp13;
  modelica_real tmp14;
  tmp0 = LessEq(data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */,0.0);
  tmp13 = (modelica_boolean)tmp0;
  if(tmp13)
  {
    tmp14 = 1.0;
  }
  else
  {
    tmp1 = Greater(data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */,0.0);
    tmp2 = LessEq(data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */,0.433);
    tmp11 = (modelica_boolean)(tmp1 && tmp2);
    if(tmp11)
    {
      tmp12 = 1.0 + (-0.577) * (data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */);
    }
    else
    {
      tmp3 = Greater(data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */,0.433);
      tmp4 = Less(data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */,0.75);
      tmp9 = (modelica_boolean)(tmp3 && tmp4);
      if(tmp9)
      {
        tmp5 = data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */;
        tmp6 = 0.75 - ((tmp5 * tmp5));
        if(!(tmp6 >= 0.0))
        {
          FILE_INFO info = {"",0,0,0,0,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(0.75 - eSST4B.rectifierCommutationVoltageDrop.division.y ^ 2.0) was %g should be >= 0", tmp6);
        }
        tmp10 = sqrt(tmp6);
      }
      else
      {
        tmp7 = GreaterEq(data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */,0.75);
        tmp8 = LessEq(data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */,1.0);
        tmp10 = ((tmp7 && tmp8)?(1.732) * (1.0 - data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */):0.0);
      }
      tmp12 = tmp10;
    }
    tmp14 = tmp12;
  }
  data->localData[0]->realVars[80] /* eSST4B.rectifierCommutationVoltageDrop.fEX.y variable */ = tmp14;
  TRACE_POP
}
/*
equation index: 63
type: SIMPLE_ASSIGN
eSST4B.maxLimiter.u = eSST4B.VE * eSST4B.rectifierCommutationVoltageDrop.fEX.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_63(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,63};
  data->localData[0]->realVars[76] /* eSST4B.maxLimiter.u variable */ = (data->localData[0]->realVars[67] /* eSST4B.VE variable */) * (data->localData[0]->realVars[80] /* eSST4B.rectifierCommutationVoltageDrop.fEX.y variable */);
  TRACE_POP
}
/*
equation index: 64
type: SIMPLE_ASSIGN
eSST4B.maxLimiter.y = homotopy(smooth(0, if eSST4B.maxLimiter.u > eSST4B.maxLimiter.uMax then eSST4B.maxLimiter.uMax else if eSST4B.maxLimiter.u < eSST4B.maxLimiter.uMin then eSST4B.maxLimiter.uMin else eSST4B.maxLimiter.u), eSST4B.maxLimiter.u)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_64(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,64};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  tmp0 = Greater(data->localData[0]->realVars[76] /* eSST4B.maxLimiter.u variable */,data->simulationInfo->realParameter[156] /* eSST4B.maxLimiter.uMax PARAM */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->simulationInfo->realParameter[156] /* eSST4B.maxLimiter.uMax PARAM */;
  }
  else
  {
    tmp1 = Less(data->localData[0]->realVars[76] /* eSST4B.maxLimiter.u variable */,data->simulationInfo->realParameter[157] /* eSST4B.maxLimiter.uMin PARAM */);
    tmp3 = (tmp1?data->simulationInfo->realParameter[157] /* eSST4B.maxLimiter.uMin PARAM */:data->localData[0]->realVars[76] /* eSST4B.maxLimiter.u variable */);
  }
  data->localData[0]->realVars[77] /* eSST4B.maxLimiter.y variable */ = homotopy(tmp3, data->localData[0]->realVars[76] /* eSST4B.maxLimiter.u variable */);
  TRACE_POP
}
/*
equation index: 65
type: SIMPLE_ASSIGN
eSST4B.VE0 = eSST4B.VE
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_65(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,65};
  data->simulationInfo->realParameter[117] /* eSST4B.VE0 PARAM */ = data->localData[0]->realVars[67] /* eSST4B.VE variable */;
  TRACE_POP
}
/*
equation index: 66
type: SIMPLE_ASSIGN
eSST4B.IN0 = eSST4B.K_C * eSST4B.Ifd0 / eSST4B.VE0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_66(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,66};
  data->simulationInfo->realParameter[89] /* eSST4B.IN0 PARAM */ = (data->simulationInfo->realParameter[91] /* eSST4B.K_C PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[90] /* eSST4B.Ifd0 PARAM */,data->simulationInfo->realParameter[117] /* eSST4B.VE0 PARAM */,"eSST4B.VE0",equationIndexes));
  TRACE_POP
}
/*
equation index: 67
type: SIMPLE_ASSIGN
eSST4B.VB0 = if eSST4B.IN0 <= 0.0 then eSST4B.VE0 else if eSST4B.IN0 > 0.0 and eSST4B.IN0 <= 0.433 then eSST4B.VE0 * (1.0 + (-0.577) * eSST4B.IN0) else if eSST4B.IN0 > 0.433 and eSST4B.IN0 < 0.75 then eSST4B.VE0 * sqrt(0.75 - eSST4B.IN0 ^ 2.0) else if eSST4B.IN0 >= 0.75 and eSST4B.IN0 <= 1.0 then 1.732 * eSST4B.VE0 * (1.0 - eSST4B.IN0) else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_67(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,67};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_boolean tmp7;
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  modelica_boolean tmp11;
  modelica_real tmp12;
  modelica_boolean tmp13;
  modelica_real tmp14;
  tmp0 = LessEq(data->simulationInfo->realParameter[89] /* eSST4B.IN0 PARAM */,0.0);
  tmp13 = (modelica_boolean)tmp0;
  if(tmp13)
  {
    tmp14 = data->simulationInfo->realParameter[117] /* eSST4B.VE0 PARAM */;
  }
  else
  {
    tmp1 = Greater(data->simulationInfo->realParameter[89] /* eSST4B.IN0 PARAM */,0.0);
    tmp2 = LessEq(data->simulationInfo->realParameter[89] /* eSST4B.IN0 PARAM */,0.433);
    tmp11 = (modelica_boolean)(tmp1 && tmp2);
    if(tmp11)
    {
      tmp12 = (data->simulationInfo->realParameter[117] /* eSST4B.VE0 PARAM */) * (1.0 + (-0.577) * (data->simulationInfo->realParameter[89] /* eSST4B.IN0 PARAM */));
    }
    else
    {
      tmp3 = Greater(data->simulationInfo->realParameter[89] /* eSST4B.IN0 PARAM */,0.433);
      tmp4 = Less(data->simulationInfo->realParameter[89] /* eSST4B.IN0 PARAM */,0.75);
      tmp9 = (modelica_boolean)(tmp3 && tmp4);
      if(tmp9)
      {
        tmp5 = data->simulationInfo->realParameter[89] /* eSST4B.IN0 PARAM */;
        tmp6 = 0.75 - ((tmp5 * tmp5));
        if(!(tmp6 >= 0.0))
        {
          FILE_INFO info = {"",0,0,0,0,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(0.75 - eSST4B.IN0 ^ 2.0) was %g should be >= 0", tmp6);
        }
        tmp10 = (data->simulationInfo->realParameter[117] /* eSST4B.VE0 PARAM */) * (sqrt(tmp6));
      }
      else
      {
        tmp7 = GreaterEq(data->simulationInfo->realParameter[89] /* eSST4B.IN0 PARAM */,0.75);
        tmp8 = LessEq(data->simulationInfo->realParameter[89] /* eSST4B.IN0 PARAM */,1.0);
        tmp10 = ((tmp7 && tmp8)?(1.732) * ((data->simulationInfo->realParameter[117] /* eSST4B.VE0 PARAM */) * (1.0 - data->simulationInfo->realParameter[89] /* eSST4B.IN0 PARAM */)):0.0);
      }
      tmp12 = tmp10;
    }
    tmp14 = tmp12;
  }
  data->simulationInfo->realParameter[116] /* eSST4B.VB0 PARAM */ = tmp14;
  TRACE_POP
}
/*
equation index: 68
type: SIMPLE_ASSIGN
eSST4B.VA0 = eSST4B.Efd0 / eSST4B.VB0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_68(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,68};
  data->simulationInfo->realParameter[115] /* eSST4B.VA0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[86] /* eSST4B.Efd0 PARAM */,data->simulationInfo->realParameter[116] /* eSST4B.VB0 PARAM */,"eSST4B.VB0",equationIndexes);
  TRACE_POP
}
/*
equation index: 69
type: SIMPLE_ASSIGN
eSST4B.VM1.y_start = eSST4B.VA0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_69(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,69};
  data->simulationInfo->realParameter[121] /* eSST4B.VM1.y_start PARAM */ = data->simulationInfo->realParameter[115] /* eSST4B.VA0 PARAM */;
  TRACE_POP
}
/*
equation index: 70
type: SIMPLE_ASSIGN
$START.eSST4B.VM1.y = eSST4B.VM1.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_70(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,70};
  data->modelData->realVarsData[2].attribute /* eSST4B.VM1.y STATE(1) */.start = data->simulationInfo->realParameter[121] /* eSST4B.VM1.y_start PARAM */;
    data->localData[0]->realVars[2] /* eSST4B.VM1.y STATE(1) */ = data->modelData->realVarsData[2].attribute /* eSST4B.VM1.y STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[2].info /* eSST4B.VM1.y */.name, (modelica_real) data->localData[0]->realVars[2] /* eSST4B.VM1.y STATE(1) */);
  TRACE_POP
}
/*
equation index: 71
type: SIMPLE_ASSIGN
eSST4B.VM1.y = eSST4B.VM1.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_71(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,71};
  data->localData[0]->realVars[2] /* eSST4B.VM1.y STATE(1) */ = data->simulationInfo->realParameter[121] /* eSST4B.VM1.y_start PARAM */;
  TRACE_POP
}
/*
equation index: 72
type: SIMPLE_ASSIGN
eSST4B.add2.y = eSST4B.add2.k1 * eSST4B.Gain2.y + eSST4B.add2.k2 * eSST4B.VM1.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_72(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,72};
  data->localData[0]->realVars[73] /* eSST4B.add2.y variable */ = (data->simulationInfo->realParameter[143] /* eSST4B.add2.k1 PARAM */) * (data->localData[0]->realVars[62] /* eSST4B.Gain2.y variable */) + (data->simulationInfo->realParameter[144] /* eSST4B.add2.k2 PARAM */) * (data->localData[0]->realVars[2] /* eSST4B.VM1.y STATE(1) */);
  TRACE_POP
}
/*
equation index: 73
type: SIMPLE_ASSIGN
eSST4B.lV_Gate.n1 = homotopy(smooth(0, if eSST4B.add2.y > eSST4B.limiter1.uMax then eSST4B.limiter1.uMax else if eSST4B.add2.y < eSST4B.limiter1.uMin then eSST4B.limiter1.uMin else eSST4B.add2.y), eSST4B.add2.y)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_73(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,73};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  tmp0 = Greater(data->localData[0]->realVars[73] /* eSST4B.add2.y variable */,data->simulationInfo->realParameter[154] /* eSST4B.limiter1.uMax PARAM */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->simulationInfo->realParameter[154] /* eSST4B.limiter1.uMax PARAM */;
  }
  else
  {
    tmp1 = Less(data->localData[0]->realVars[73] /* eSST4B.add2.y variable */,data->simulationInfo->realParameter[155] /* eSST4B.limiter1.uMin PARAM */);
    tmp3 = (tmp1?data->simulationInfo->realParameter[155] /* eSST4B.limiter1.uMin PARAM */:data->localData[0]->realVars[73] /* eSST4B.add2.y variable */);
  }
  data->localData[0]->realVars[74] /* eSST4B.lV_Gate.n1 variable */ = homotopy(tmp3, data->localData[0]->realVars[73] /* eSST4B.add2.y variable */);
  TRACE_POP
}
/*
equation index: 74
type: SIMPLE_ASSIGN
eSST4B.lV_Gate.p = if eSST4B.lV_Gate.n1 > const1.k then const1.k else eSST4B.lV_Gate.n1
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_74(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,74};
  modelica_boolean tmp0;
  tmp0 = Greater(data->localData[0]->realVars[74] /* eSST4B.lV_Gate.n1 variable */,data->simulationInfo->realParameter[36] /* const1.k PARAM */);
  data->localData[0]->realVars[75] /* eSST4B.lV_Gate.p variable */ = (tmp0?data->simulationInfo->realParameter[36] /* const1.k PARAM */:data->localData[0]->realVars[74] /* eSST4B.lV_Gate.n1 variable */);
  TRACE_POP
}
/*
equation index: 75
type: SIMPLE_ASSIGN
gENROU.PSId = gENROU.PSIppd - gENROU.Xppd * gENROU.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_75(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,75};
  data->localData[0]->realVars[95] /* gENROU.PSId variable */ = data->localData[0]->realVars[97] /* gENROU.PSIppd variable */ - ((data->simulationInfo->realParameter[240] /* gENROU.Xppd PARAM */) * (data->localData[0]->realVars[105] /* gENROU.id variable */));
  TRACE_POP
}
/*
equation index: 76
type: SIMPLE_ASSIGN
gENROU.uq = gENROU.PSId - gENROU.R_a * gENROU.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_76(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,76};
  data->localData[0]->realVars[108] /* gENROU.uq variable */ = data->localData[0]->realVars[95] /* gENROU.PSId variable */ - ((data->simulationInfo->realParameter[223] /* gENROU.R_a PARAM */) * (data->localData[0]->realVars[106] /* gENROU.iq variable */));
  TRACE_POP
}
/*
equation index: 77
type: SIMPLE_ASSIGN
gENROU.PSIpp = sqrt(gENROU.PSIppd ^ 2.0 + gENROU.PSIppq ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_77(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,77};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[97] /* gENROU.PSIppd variable */;
  tmp1 = data->localData[0]->realVars[98] /* gENROU.PSIppq variable */;
  data->localData[0]->realVars[96] /* gENROU.PSIpp variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 78
type: SIMPLE_ASSIGN
gENROU.PSIq = (-gENROU.PSIppq) - gENROU.Xppq * gENROU.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_78(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,78};
  data->localData[0]->realVars[99] /* gENROU.PSIq variable */ = (-data->localData[0]->realVars[98] /* gENROU.PSIppq variable */) - ((data->simulationInfo->realParameter[241] /* gENROU.Xppq PARAM */) * (data->localData[0]->realVars[106] /* gENROU.iq variable */));
  TRACE_POP
}
/*
equation index: 79
type: SIMPLE_ASSIGN
gENROU.ud = (-gENROU.PSIq) - gENROU.R_a * gENROU.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_79(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,79};
  data->localData[0]->realVars[107] /* gENROU.ud variable */ = (-data->localData[0]->realVars[99] /* gENROU.PSIq variable */) - ((data->simulationInfo->realParameter[223] /* gENROU.R_a PARAM */) * (data->localData[0]->realVars[105] /* gENROU.id variable */));
  TRACE_POP
}
/*
equation index: 80
type: SIMPLE_ASSIGN
gENROU.PSIkq = ((gENROU.Epd + (gENROU.Xpq - gENROU.Xl) * gENROU.iq) * gENROU.K1q + gENROU.Epd + gENROU.iq * (gENROU.Xpq - gENROU.Xq) + OpenIPSL.NonElectrical.Functions.SE(gENROU.PSIpp, gENROU.S10, gENROU.S12, 1.0, 1.2) * gENROU.PSIppq * (gENROU.Xq - gENROU.Xl) / (gENROU.Xd - gENROU.Xl) - gENROU.XaqIlq) / gENROU.K1q
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_80(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,80};
  data->localData[0]->realVars[9] /* gENROU.PSIkq STATE(1) */ = DIVISION_SIM((data->localData[0]->realVars[6] /* gENROU.Epd STATE(1) */ + (data->simulationInfo->realParameter[242] /* gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[237] /* gENROU.Xl PARAM */) * (data->localData[0]->realVars[106] /* gENROU.iq variable */)) * (data->simulationInfo->realParameter[201] /* gENROU.K1q PARAM */) + data->localData[0]->realVars[6] /* gENROU.Epd STATE(1) */ + (data->localData[0]->realVars[106] /* gENROU.iq variable */) * (data->simulationInfo->realParameter[242] /* gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[243] /* gENROU.Xq PARAM */) + (omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->localData[0]->realVars[96] /* gENROU.PSIpp variable */, data->simulationInfo->realParameter[226] /* gENROU.S10 PARAM */, data->simulationInfo->realParameter[227] /* gENROU.S12 PARAM */, 1.0, 1.2)) * ((data->localData[0]->realVars[98] /* gENROU.PSIppq variable */) * (DIVISION_SIM(data->simulationInfo->realParameter[243] /* gENROU.Xq PARAM */ - data->simulationInfo->realParameter[237] /* gENROU.Xl PARAM */,data->simulationInfo->realParameter[236] /* gENROU.Xd PARAM */ - data->simulationInfo->realParameter[237] /* gENROU.Xl PARAM */,"gENROU.Xd - gENROU.Xl",equationIndexes))) - data->localData[0]->realVars[102] /* gENROU.XaqIlq variable */,data->simulationInfo->realParameter[201] /* gENROU.K1q PARAM */,"gENROU.K1q",equationIndexes);
  TRACE_POP
}
/*
equation index: 81
type: SIMPLE_ASSIGN
gENROU.Epq = (eSST4B.XADIFD - (((gENROU.Xl - gENROU.Xpd) * gENROU.id - gENROU.PSIkd) * gENROU.K1d + gENROU.id * (gENROU.Xd - gENROU.Xpd) + OpenIPSL.NonElectrical.Functions.SE(gENROU.PSIpp, gENROU.S10, gENROU.S12, 1.0, 1.2) * gENROU.PSIppd)) / (1.0 + gENROU.K1d)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_81(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,81};
  data->localData[0]->realVars[7] /* gENROU.Epq STATE(1) */ = DIVISION_SIM(data->localData[0]->realVars[70] /* eSST4B.XADIFD variable */ - (((data->simulationInfo->realParameter[237] /* gENROU.Xl PARAM */ - data->simulationInfo->realParameter[238] /* gENROU.Xpd PARAM */) * (data->localData[0]->realVars[105] /* gENROU.id variable */) - data->localData[0]->realVars[8] /* gENROU.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[200] /* gENROU.K1d PARAM */) + (data->localData[0]->realVars[105] /* gENROU.id variable */) * (data->simulationInfo->realParameter[236] /* gENROU.Xd PARAM */ - data->simulationInfo->realParameter[238] /* gENROU.Xpd PARAM */) + (omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->localData[0]->realVars[96] /* gENROU.PSIpp variable */, data->simulationInfo->realParameter[226] /* gENROU.S10 PARAM */, data->simulationInfo->realParameter[227] /* gENROU.S12 PARAM */, 1.0, 1.2)) * (data->localData[0]->realVars[97] /* gENROU.PSIppd variable */)),1.0 + data->simulationInfo->realParameter[200] /* gENROU.K1d PARAM */,"1.0 + gENROU.K1d",equationIndexes);
  TRACE_POP
}
/*
equation index: 82
type: SIMPLE_ASSIGN
gENCLS.p.ii = (cos(gENCLS.delta) * gENCLS.id - sin(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_82(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,82};
  data->localData[0]->realVars[88] /* gENCLS.p.ii variable */ = ((cos(data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[85] /* gENCLS.id variable */) - ((sin(data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[86] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[160] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 83
type: SIMPLE_ASSIGN
gENCLS.p.ir = ((-sin(gENCLS.delta)) * gENCLS.id - cos(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_83(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,83};
  data->localData[0]->realVars[89] /* gENCLS.p.ir variable */ = (((-sin(data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[85] /* gENCLS.id variable */) - ((cos(data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[86] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[160] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 84
type: SIMPLE_ASSIGN
gENCLS.vq = gENCLS.eq + (-gENCLS.R_a) * gENCLS.iq - gENCLS.X_d * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_84(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,84};
  data->localData[0]->realVars[91] /* gENCLS.vq variable */ = data->localData[0]->realVars[5] /* gENCLS.eq STATE(1) */ + ((-data->simulationInfo->realParameter[166] /* gENCLS.R_a PARAM */)) * (data->localData[0]->realVars[86] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[169] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[85] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 85
type: SIMPLE_ASSIGN
gENCLS.vd = gENCLS.X_d * gENCLS.iq - gENCLS.R_a * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_85(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,85};
  data->localData[0]->realVars[90] /* gENCLS.vd variable */ = (data->simulationInfo->realParameter[169] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[86] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[166] /* gENCLS.R_a PARAM */) * (data->localData[0]->realVars[85] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 86
type: SIMPLE_ASSIGN
pwLine4.ir.im = (-pwLine1.ir.im) - gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_86(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,86};
  data->localData[0]->realVars[147] /* pwLine4.ir.im variable */ = (-data->localData[0]->realVars[125] /* pwLine1.ir.im variable */) - data->localData[0]->realVars[88] /* gENCLS.p.ii variable */;
  TRACE_POP
}
/*
equation index: 87
type: SIMPLE_ASSIGN
pwLine4.ir.re = (-pwLine1.ir.re) - gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_87(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,87};
  data->localData[0]->realVars[148] /* pwLine4.ir.re variable */ = (-data->localData[0]->realVars[126] /* pwLine1.ir.re variable */) - data->localData[0]->realVars[89] /* gENCLS.p.ir variable */;
  TRACE_POP
}
/*
equation index: 88
type: SIMPLE_ASSIGN
pwFault.p.ii = (-pwLine3.ir.im) - pwLine4.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_88(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,88};
  data->localData[0]->realVars[109] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[137] /* pwLine3.ir.im variable */) - data->localData[0]->realVars[149] /* pwLine4.is.im variable */;
  TRACE_POP
}
/*
equation index: 89
type: SIMPLE_ASSIGN
pwFault.p.ir = (-pwLine3.ir.re) - pwLine4.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_89(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,89};
  data->localData[0]->realVars[110] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[138] /* pwLine3.ir.re variable */) - data->localData[0]->realVars[150] /* pwLine4.is.re variable */;
  TRACE_POP
}
/*
equation index: 90
type: SIMPLE_ASSIGN
constantLoad.p.ii = (-pwLine.ir.im) - pwLine1.is.im - pwLine3.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_90(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,90};
  data->localData[0]->realVars[51] /* constantLoad.p.ii variable */ = (-data->localData[0]->realVars[115] /* pwLine.ir.im variable */) - data->localData[0]->realVars[127] /* pwLine1.is.im variable */ - data->localData[0]->realVars[139] /* pwLine3.is.im variable */;
  TRACE_POP
}
/*
equation index: 91
type: SIMPLE_ASSIGN
constantLoad.p.ir = (-pwLine.ir.re) - pwLine1.is.re - pwLine3.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_91(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,91};
  data->localData[0]->realVars[52] /* constantLoad.p.ir variable */ = (-data->localData[0]->realVars[116] /* pwLine.ir.re variable */) - data->localData[0]->realVars[128] /* pwLine1.is.re variable */ - data->localData[0]->realVars[140] /* pwLine3.is.re variable */;
  TRACE_POP
}

void residualFunc125(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,125};
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
  modelica_real tmp46;
  modelica_real tmp47;
  modelica_real tmp48;
  modelica_real tmp49;
  modelica_real tmp50;
  modelica_boolean tmp51;
  modelica_boolean tmp52;
  modelica_boolean tmp53;
  modelica_boolean tmp54;
  modelica_boolean tmp55;
  modelica_boolean tmp56;
  modelica_boolean tmp57;
  modelica_boolean tmp58;
  /* iteration variables */
  for (i=0; i<33; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<33; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[116] /* pwLine.ir.re variable */ = xloc[0];
  data->localData[0]->realVars[128] /* pwLine1.is.re variable */ = xloc[1];
  data->localData[0]->realVars[140] /* pwLine3.is.re variable */ = xloc[2];
  data->localData[0]->realVars[115] /* pwLine.ir.im variable */ = xloc[3];
  data->localData[0]->realVars[139] /* pwLine3.is.im variable */ = xloc[4];
  data->localData[0]->realVars[127] /* pwLine1.is.im variable */ = xloc[5];
  data->localData[0]->realVars[138] /* pwLine3.ir.re variable */ = xloc[6];
  data->localData[0]->realVars[150] /* pwLine4.is.re variable */ = xloc[7];
  data->localData[0]->realVars[149] /* pwLine4.is.im variable */ = xloc[8];
  data->localData[0]->realVars[137] /* pwLine3.ir.im variable */ = xloc[9];
  data->localData[0]->realVars[126] /* pwLine1.ir.re variable */ = xloc[10];
  data->localData[0]->realVars[125] /* pwLine1.ir.im variable */ = xloc[11];
  data->localData[0]->realVars[85] /* gENCLS.id variable */ = xloc[12];
  data->localData[0]->realVars[86] /* gENCLS.iq variable */ = xloc[13];
  data->localData[0]->realVars[8] /* gENROU.PSIkd STATE(1) */ = xloc[14];
  data->localData[0]->realVars[6] /* gENROU.Epd STATE(1) */ = xloc[15];
  data->localData[0]->realVars[98] /* gENROU.PSIppq variable */ = xloc[16];
  data->localData[0]->realVars[106] /* gENROU.iq variable */ = xloc[17];
  data->localData[0]->realVars[97] /* gENROU.PSIppd variable */ = xloc[18];
  data->localData[0]->realVars[105] /* gENROU.id variable */ = xloc[19];
  data->localData[0]->realVars[120] /* pwLine.vs.re variable */ = xloc[20];
  data->localData[0]->realVars[119] /* pwLine.vs.im variable */ = xloc[21];
  data->localData[0]->realVars[129] /* pwLine1.vr.im variable */ = xloc[22];
  data->localData[0]->realVars[130] /* pwLine1.vr.re variable */ = xloc[23];
  data->localData[0]->realVars[67] /* eSST4B.VE variable */ = xloc[24];
  data->localData[0]->realVars[56] /* eSST4B.ECOMP variable */ = xloc[25];
  data->localData[0]->realVars[70] /* eSST4B.XADIFD variable */ = xloc[26];
  data->localData[0]->realVars[117] /* pwLine.is.im variable */ = xloc[27];
  data->localData[0]->realVars[118] /* pwLine.is.re variable */ = xloc[28];
  data->localData[0]->realVars[132] /* pwLine1.vs.re variable */ = xloc[29];
  data->localData[0]->realVars[131] /* pwLine1.vs.im variable */ = xloc[30];
  data->localData[0]->realVars[142] /* pwLine3.vr.re variable */ = xloc[31];
  data->localData[0]->realVars[141] /* pwLine3.vr.im variable */ = xloc[32];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_34(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_35(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_36(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_37(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_38(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_39(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_40(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_41(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_42(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_43(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_44(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_45(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_46(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_47(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_48(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_49(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_50(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_51(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_52(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_53(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_54(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_55(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_56(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_57(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_58(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_59(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_60(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_61(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_62(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_63(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_64(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_65(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_66(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_67(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_68(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_69(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_70(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_71(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_72(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_73(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_74(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_75(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_76(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_77(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_78(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_79(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_80(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_81(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_82(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_83(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_84(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_85(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_86(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_87(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_88(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_89(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_90(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_91(data, threadData);
  /* body */
  res[0] = (sin(data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[91] /* gENCLS.vq variable */) + ((-cos(data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[90] /* gENCLS.vd variable */) - data->localData[0]->realVars[129] /* pwLine1.vr.im variable */;

  tmp0 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[273] /* pwFault.t1 PARAM */);
  tmp9 = (modelica_boolean)tmp0;
  if(tmp9)
  {
    tmp10 = data->localData[0]->realVars[109] /* pwFault.p.ii variable */;
  }
  else
  {
    tmp1 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[274] /* pwFault.t2 PARAM */);
    tmp7 = (modelica_boolean)(tmp1 && data->simulationInfo->booleanParameter[77] /* pwFault.ground PARAM */);
    if(tmp7)
    {
      tmp8 = data->localData[0]->realVars[142] /* pwLine3.vr.re variable */ - 1e-10;
    }
    else
    {
      tmp2 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[274] /* pwFault.t2 PARAM */);
      tmp5 = (modelica_boolean)tmp2;
      if(tmp5)
      {
        tmp3 = data->simulationInfo->realParameter[272] /* pwFault.X PARAM */;
        tmp4 = data->simulationInfo->realParameter[271] /* pwFault.R PARAM */;
        tmp6 = data->localData[0]->realVars[109] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[271] /* pwFault.R PARAM */) * (data->localData[0]->realVars[141] /* pwLine3.vr.im variable */) - ((data->simulationInfo->realParameter[272] /* pwFault.X PARAM */) * (data->localData[0]->realVars[142] /* pwLine3.vr.re variable */)),(tmp3 * tmp3) + (tmp4 * tmp4),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
      }
      else
      {
        tmp6 = data->localData[0]->realVars[109] /* pwFault.p.ii variable */;
      }
      tmp8 = tmp6;
    }
    tmp10 = tmp8;
  }
  res[1] = tmp10;

  tmp11 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[273] /* pwFault.t1 PARAM */);
  tmp20 = (modelica_boolean)tmp11;
  if(tmp20)
  {
    tmp21 = data->localData[0]->realVars[110] /* pwFault.p.ir variable */;
  }
  else
  {
    tmp12 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[274] /* pwFault.t2 PARAM */);
    tmp18 = (modelica_boolean)(tmp12 && data->simulationInfo->booleanParameter[77] /* pwFault.ground PARAM */);
    if(tmp18)
    {
      tmp19 = data->localData[0]->realVars[141] /* pwLine3.vr.im variable */;
    }
    else
    {
      tmp13 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[274] /* pwFault.t2 PARAM */);
      tmp16 = (modelica_boolean)tmp13;
      if(tmp16)
      {
        tmp14 = data->simulationInfo->realParameter[271] /* pwFault.R PARAM */;
        tmp15 = data->simulationInfo->realParameter[272] /* pwFault.X PARAM */;
        tmp17 = data->localData[0]->realVars[110] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[271] /* pwFault.R PARAM */) * (data->localData[0]->realVars[142] /* pwLine3.vr.re variable */) + (data->simulationInfo->realParameter[272] /* pwFault.X PARAM */) * (data->localData[0]->realVars[141] /* pwLine3.vr.im variable */),(tmp14 * tmp14) + (tmp15 * tmp15),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp17 = data->localData[0]->realVars[110] /* pwFault.p.ir variable */;
      }
      tmp19 = tmp17;
    }
    tmp21 = tmp19;
  }
  res[2] = tmp21;

  tmp22 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[317] /* pwLine4.t1 PARAM */);
  tmp23 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[318] /* pwLine4.t2 PARAM */);
  res[3] = ((tmp22 && tmp23)?data->localData[0]->realVars[149] /* pwLine4.is.im variable */:data->localData[0]->realVars[141] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[129] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[316] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[149] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[142] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[313] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[141] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[314] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[315] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[150] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[141] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[313] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[142] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[314] /* pwLine4.Y.re PARAM */)))));

  tmp24 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[317] /* pwLine4.t1 PARAM */);
  tmp25 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[318] /* pwLine4.t2 PARAM */);
  res[4] = ((tmp24 && tmp25)?data->localData[0]->realVars[150] /* pwLine4.is.re variable */:data->localData[0]->realVars[142] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[130] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[316] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[150] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[141] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[313] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[142] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[314] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[315] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[149] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[142] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[313] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[141] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[314] /* pwLine4.Y.re PARAM */))))));

  res[5] = (cos(data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[91] /* gENCLS.vq variable */) + (sin(data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[90] /* gENCLS.vd variable */) - data->localData[0]->realVars[130] /* pwLine1.vr.re variable */;

  tmp26 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[317] /* pwLine4.t1 PARAM */);
  tmp27 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[318] /* pwLine4.t2 PARAM */);
  res[6] = ((tmp26 && tmp27)?data->localData[0]->realVars[148] /* pwLine4.ir.re variable */:data->localData[0]->realVars[130] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[142] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[316] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[148] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[129] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[313] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[130] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[314] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[315] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[147] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[130] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[313] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[129] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[314] /* pwLine4.Y.re PARAM */))))));

  tmp28 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[306] /* pwLine3.t1 PARAM */);
  tmp29 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[307] /* pwLine3.t2 PARAM */);
  res[7] = ((tmp28 && tmp29)?data->localData[0]->realVars[139] /* pwLine3.is.im variable */:data->localData[0]->realVars[131] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[141] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[305] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[139] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[132] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[302] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[131] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[303] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[304] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[140] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[131] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[302] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[132] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[303] /* pwLine3.Y.re PARAM */)))));

  tmp30 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[306] /* pwLine3.t1 PARAM */);
  tmp31 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[307] /* pwLine3.t2 PARAM */);
  res[8] = ((tmp30 && tmp31)?data->localData[0]->realVars[140] /* pwLine3.is.re variable */:data->localData[0]->realVars[132] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[142] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[305] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[140] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[131] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[302] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[132] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[303] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[304] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[139] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[132] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[302] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[131] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[303] /* pwLine3.Y.re PARAM */))))));

  tmp32 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[306] /* pwLine3.t1 PARAM */);
  tmp33 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[307] /* pwLine3.t2 PARAM */);
  res[9] = ((tmp32 && tmp33)?data->localData[0]->realVars[138] /* pwLine3.ir.re variable */:data->localData[0]->realVars[142] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[132] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[305] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[138] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[141] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[302] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[142] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[303] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[304] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[137] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[142] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[302] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[141] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[303] /* pwLine3.Y.re PARAM */))))));

  tmp34 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[306] /* pwLine3.t1 PARAM */);
  tmp35 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[307] /* pwLine3.t2 PARAM */);
  res[10] = ((tmp34 && tmp35)?data->localData[0]->realVars[137] /* pwLine3.ir.im variable */:data->localData[0]->realVars[141] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[131] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[305] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[137] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[142] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[302] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[141] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[303] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[304] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[138] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[141] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[302] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[142] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[303] /* pwLine3.Y.re PARAM */)))));

  tmp36 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[295] /* pwLine1.t1 PARAM */);
  tmp37 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[296] /* pwLine1.t2 PARAM */);
  res[11] = ((tmp36 && tmp37)?data->localData[0]->realVars[128] /* pwLine1.is.re variable */:data->localData[0]->realVars[132] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[130] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[294] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[128] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[131] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[291] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[132] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[292] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[293] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[127] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[132] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[291] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[131] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[292] /* pwLine1.Y.re PARAM */))))));

  tmp38 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[295] /* pwLine1.t1 PARAM */);
  tmp39 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[296] /* pwLine1.t2 PARAM */);
  res[12] = ((tmp38 && tmp39)?data->localData[0]->realVars[127] /* pwLine1.is.im variable */:data->localData[0]->realVars[131] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[129] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[294] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[127] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[132] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[291] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[131] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[292] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[293] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[128] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[131] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[291] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[132] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[292] /* pwLine1.Y.re PARAM */)))));

  tmp40 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[317] /* pwLine4.t1 PARAM */);
  tmp41 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[318] /* pwLine4.t2 PARAM */);
  res[13] = ((tmp40 && tmp41)?data->localData[0]->realVars[147] /* pwLine4.ir.im variable */:data->localData[0]->realVars[129] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[141] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[316] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[147] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[130] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[313] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[129] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[314] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[315] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[148] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[129] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[313] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[130] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[314] /* pwLine4.Y.re PARAM */)))));

  tmp42 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[295] /* pwLine1.t1 PARAM */);
  tmp43 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[296] /* pwLine1.t2 PARAM */);
  res[14] = ((tmp42 && tmp43)?data->localData[0]->realVars[125] /* pwLine1.ir.im variable */:data->localData[0]->realVars[129] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[131] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[294] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[125] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[130] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[291] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[129] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[292] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[293] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[126] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[129] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[291] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[130] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[292] /* pwLine1.Y.re PARAM */)))));

  tmp44 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[295] /* pwLine1.t1 PARAM */);
  tmp45 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[296] /* pwLine1.t2 PARAM */);
  res[15] = ((tmp44 && tmp45)?data->localData[0]->realVars[126] /* pwLine1.ir.re variable */:data->localData[0]->realVars[130] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[132] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[294] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[126] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[129] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[291] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[130] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[292] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[293] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[125] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[130] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[291] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[129] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[292] /* pwLine1.Y.re PARAM */))))));

  tmp46 = data->localData[0]->realVars[120] /* pwLine.vs.re variable */;
  tmp47 = data->localData[0]->realVars[119] /* pwLine.vs.im variable */;
  res[16] = sqrt((tmp46 * tmp46) + (tmp47 * tmp47)) - data->localData[0]->realVars[56] /* eSST4B.ECOMP variable */;

  res[17] = (sin(data->localData[0]->realVars[10] /* gENROU.delta STATE(1) */)) * (data->localData[0]->realVars[108] /* gENROU.uq variable */) + ((-cos(data->localData[0]->realVars[10] /* gENROU.delta STATE(1) */))) * (data->localData[0]->realVars[107] /* gENROU.ud variable */) - data->localData[0]->realVars[119] /* pwLine.vs.im variable */;

  res[18] = (data->localData[0]->realVars[75] /* eSST4B.lV_Gate.p variable */) * (data->localData[0]->realVars[77] /* eSST4B.maxLimiter.y variable */) - data->localData[0]->realVars[57] /* eSST4B.EFD variable */;

  tmp48 = (data->simulationInfo->realParameter[100] /* eSST4B.K_P_comp.re PARAM */) * (data->localData[0]->realVars[120] /* pwLine.vs.re variable */) + ((-data->simulationInfo->realParameter[93] /* eSST4B.K_I PARAM */) - ((data->simulationInfo->realParameter[100] /* eSST4B.K_P_comp.re PARAM */) * (data->simulationInfo->realParameter[138] /* eSST4B.X_L PARAM */))) * (data->localData[0]->realVars[63] /* eSST4B.I_T.im variable */) - ((data->simulationInfo->realParameter[99] /* eSST4B.K_P_comp.im PARAM */) * ((data->simulationInfo->realParameter[138] /* eSST4B.X_L PARAM */) * (data->localData[0]->realVars[64] /* eSST4B.I_T.re variable */) + data->localData[0]->realVars[119] /* pwLine.vs.im variable */));
  tmp49 = (data->simulationInfo->realParameter[100] /* eSST4B.K_P_comp.re PARAM */) * (data->localData[0]->realVars[119] /* pwLine.vs.im variable */) + (data->simulationInfo->realParameter[99] /* eSST4B.K_P_comp.im PARAM */) * (data->localData[0]->realVars[120] /* pwLine.vs.re variable */) + (data->simulationInfo->realParameter[93] /* eSST4B.K_I PARAM */ + (data->simulationInfo->realParameter[100] /* eSST4B.K_P_comp.re PARAM */) * (data->simulationInfo->realParameter[138] /* eSST4B.X_L PARAM */)) * (data->localData[0]->realVars[64] /* eSST4B.I_T.re variable */) - ((data->simulationInfo->realParameter[99] /* eSST4B.K_P_comp.im PARAM */) * ((data->simulationInfo->realParameter[138] /* eSST4B.X_L PARAM */) * (data->localData[0]->realVars[63] /* eSST4B.I_T.im variable */)));
  tmp50 = (tmp48 * tmp48) + (tmp49 * tmp49);
  if(!(tmp50 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt((eSST4B.K_P_comp.re * pwLine.vs.re + ((-eSST4B.K_I) - eSST4B.K_P_comp.re * eSST4B.X_L) * eSST4B.I_T.im - eSST4B.K_P_comp.im * (eSST4B.X_L * eSST4B.I_T.re + pwLine.vs.im)) ^ 2.0 + (eSST4B.K_P_comp.re * pwLine.vs.im + eSST4B.K_P_comp.im * pwLine.vs.re + (eSST4B.K_I + eSST4B.K_P_comp.re * eSST4B.X_L) * eSST4B.I_T.re - eSST4B.K_P_comp.im * eSST4B.X_L * eSST4B.I_T.im) ^ 2.0) was %g should be >= 0", tmp50);
  }res[19] = sqrt(tmp50) - data->localData[0]->realVars[67] /* eSST4B.VE variable */;

  res[20] = ((cos(data->localData[0]->realVars[10] /* gENROU.delta STATE(1) */)) * (data->localData[0]->realVars[105] /* gENROU.id variable */) - ((sin(data->localData[0]->realVars[10] /* gENROU.delta STATE(1) */)) * (data->localData[0]->realVars[106] /* gENROU.iq variable */))) * (data->simulationInfo->realParameter[186] /* gENROU.CoB PARAM */) + data->localData[0]->realVars[117] /* pwLine.is.im variable */;

  res[21] = (data->localData[0]->realVars[8] /* gENROU.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[206] /* gENROU.K4d PARAM */) + (data->localData[0]->realVars[7] /* gENROU.Epq STATE(1) */) * (data->simulationInfo->realParameter[204] /* gENROU.K3d PARAM */) - data->localData[0]->realVars[97] /* gENROU.PSIppd variable */;

  res[22] = data->localData[0]->realVars[7] /* gENROU.Epq STATE(1) */ + (data->simulationInfo->realParameter[237] /* gENROU.Xl PARAM */ - data->simulationInfo->realParameter[238] /* gENROU.Xpd PARAM */) * (data->localData[0]->realVars[105] /* gENROU.id variable */) + (-data->localData[0]->realVars[8] /* gENROU.PSIkd STATE(1) */) - ((data->localData[0]->realVars[20] /* der(gENROU.PSIkd) STATE_DER */) * (data->simulationInfo->realParameter[230] /* gENROU.Tppd0 PARAM */));

  res[23] = (((-sin(data->localData[0]->realVars[10] /* gENROU.delta STATE(1) */))) * (data->localData[0]->realVars[105] /* gENROU.id variable */) - ((cos(data->localData[0]->realVars[10] /* gENROU.delta STATE(1) */)) * (data->localData[0]->realVars[106] /* gENROU.iq variable */))) * (data->simulationInfo->realParameter[186] /* gENROU.CoB PARAM */) + data->localData[0]->realVars[118] /* pwLine.is.re variable */;

  tmp51 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[284] /* pwLine.t1 PARAM */);
  tmp52 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[285] /* pwLine.t2 PARAM */);
  res[24] = ((tmp51 && tmp52)?data->localData[0]->realVars[117] /* pwLine.is.im variable */:data->localData[0]->realVars[119] /* pwLine.vs.im variable */ - data->localData[0]->realVars[131] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[283] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[117] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[120] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[280] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[119] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[281] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[282] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[118] /* pwLine.is.re variable */ + (data->localData[0]->realVars[119] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[280] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[120] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[281] /* pwLine.Y.re PARAM */)))));

  tmp53 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[284] /* pwLine.t1 PARAM */);
  tmp54 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[285] /* pwLine.t2 PARAM */);
  res[25] = ((tmp53 && tmp54)?data->localData[0]->realVars[118] /* pwLine.is.re variable */:data->localData[0]->realVars[120] /* pwLine.vs.re variable */ - data->localData[0]->realVars[132] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[283] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[118] /* pwLine.is.re variable */ + (data->localData[0]->realVars[119] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[280] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[120] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[281] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[282] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[117] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[120] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[280] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[119] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[281] /* pwLine.Y.re PARAM */))))));

  res[26] = (data->localData[0]->realVars[131] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[52] /* constantLoad.p.ir variable */) + ((-data->localData[0]->realVars[132] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[51] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[47] /* constantLoad.Q variable */;

  res[27] = (data->localData[0]->realVars[131] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[51] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[132] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[52] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[46] /* constantLoad.P variable */;

  tmp55 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[284] /* pwLine.t1 PARAM */);
  tmp56 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[285] /* pwLine.t2 PARAM */);
  res[28] = ((tmp55 && tmp56)?data->localData[0]->realVars[115] /* pwLine.ir.im variable */:data->localData[0]->realVars[131] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[119] /* pwLine.vs.im variable */ - ((data->simulationInfo->realParameter[283] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[115] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[132] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[280] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[131] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[281] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[282] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[116] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[131] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[280] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[132] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[281] /* pwLine.Y.re PARAM */)))));

  tmp57 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[284] /* pwLine.t1 PARAM */);
  tmp58 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[285] /* pwLine.t2 PARAM */);
  res[29] = ((tmp57 && tmp58)?data->localData[0]->realVars[116] /* pwLine.ir.re variable */:data->localData[0]->realVars[132] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[120] /* pwLine.vs.re variable */ - ((data->simulationInfo->realParameter[283] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[116] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[131] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[280] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[132] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[281] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[282] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[115] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[132] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[280] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[131] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[281] /* pwLine.Y.re PARAM */))))));

  res[30] = (cos(data->localData[0]->realVars[10] /* gENROU.delta STATE(1) */)) * (data->localData[0]->realVars[108] /* gENROU.uq variable */) + (sin(data->localData[0]->realVars[10] /* gENROU.delta STATE(1) */)) * (data->localData[0]->realVars[107] /* gENROU.ud variable */) - data->localData[0]->realVars[120] /* pwLine.vs.re variable */;

  res[31] = data->localData[0]->realVars[98] /* gENROU.PSIppq variable */ - ((data->localData[0]->realVars[6] /* gENROU.Epd STATE(1) */) * (data->simulationInfo->realParameter[205] /* gENROU.K3q PARAM */)) - ((data->localData[0]->realVars[9] /* gENROU.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[207] /* gENROU.K4q PARAM */));

  res[32] = data->localData[0]->realVars[6] /* gENROU.Epd STATE(1) */ + (data->simulationInfo->realParameter[242] /* gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[237] /* gENROU.Xl PARAM */) * (data->localData[0]->realVars[106] /* gENROU.iq variable */) + (-data->localData[0]->realVars[9] /* gENROU.PSIkq STATE(1) */) - ((data->localData[0]->realVars[21] /* der(gENROU.PSIkq) STATE_DER */) * (data->simulationInfo->realParameter[231] /* gENROU.Tppq0 PARAM */));
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS125(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+33] = {0,4,4,4,4,4,4,3,3,3,3,4,4,4,4,2,2,6,6,6,6,6,6,7,7,2,2,3,4,4,11,11,8,8};
  const int rowIndex[159] = {26,27,28,29,11,12,26,27,7,8,26,27,26,27,28,29,7,8,26,27,11,12,26,27,2,9,10,2,3,4,1,3,4,1,9,10,6,13,14,15,6,13,14,15,0,5,6,13,0,5,6,13,21,22,31,32,17,21,22,30,31,32,17,20,23,30,31,32,17,21,22,30,31,32,17,20,21,22,23,30,16,19,24,25,29,30,16,17,19,24,25,28,0,3,6,12,13,14,15,4,5,6,11,13,14,15,18,19,16,18,18,21,22,19,20,24,25,19,23,24,25,7,8,9,11,12,15,25,26,27,28,29,7,8,10,11,12,14,24,26,27,28,29,1,2,3,4,6,8,9,10,1,2,3,4,7,9,10,13};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((33+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(159*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 159;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(33*sizeof(int));
  inSysData->sparsePattern->maxColors = 10;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (33+1)*sizeof(int));
  
  for(i=2;i<33+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 159*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[32] = 1;
  inSysData->sparsePattern->colorCols[30] = 2;
  inSysData->sparsePattern->colorCols[29] = 3;
  inSysData->sparsePattern->colorCols[21] = 4;
  inSysData->sparsePattern->colorCols[23] = 4;
  inSysData->sparsePattern->colorCols[5] = 5;
  inSysData->sparsePattern->colorCols[20] = 5;
  inSysData->sparsePattern->colorCols[31] = 5;
  inSysData->sparsePattern->colorCols[4] = 6;
  inSysData->sparsePattern->colorCols[19] = 6;
  inSysData->sparsePattern->colorCols[22] = 6;
  inSysData->sparsePattern->colorCols[3] = 7;
  inSysData->sparsePattern->colorCols[13] = 7;
  inSysData->sparsePattern->colorCols[18] = 7;
  inSysData->sparsePattern->colorCols[28] = 7;
  inSysData->sparsePattern->colorCols[2] = 8;
  inSysData->sparsePattern->colorCols[12] = 8;
  inSysData->sparsePattern->colorCols[17] = 8;
  inSysData->sparsePattern->colorCols[26] = 8;
  inSysData->sparsePattern->colorCols[1] = 9;
  inSysData->sparsePattern->colorCols[7] = 9;
  inSysData->sparsePattern->colorCols[9] = 9;
  inSysData->sparsePattern->colorCols[11] = 9;
  inSysData->sparsePattern->colorCols[16] = 9;
  inSysData->sparsePattern->colorCols[25] = 9;
  inSysData->sparsePattern->colorCols[27] = 9;
  inSysData->sparsePattern->colorCols[0] = 10;
  inSysData->sparsePattern->colorCols[6] = 10;
  inSysData->sparsePattern->colorCols[8] = 10;
  inSysData->sparsePattern->colorCols[10] = 10;
  inSysData->sparsePattern->colorCols[14] = 10;
  inSysData->sparsePattern->colorCols[15] = 10;
  inSysData->sparsePattern->colorCols[24] = 10;
}
void initializeStaticDataNLS125(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for pwLine.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[116].attribute /* pwLine.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[116].attribute /* pwLine.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[116].attribute /* pwLine.ir.re */.max;
  /* static nls data for pwLine1.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[128].attribute /* pwLine1.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[128].attribute /* pwLine1.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[128].attribute /* pwLine1.is.re */.max;
  /* static nls data for pwLine3.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[140].attribute /* pwLine3.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[140].attribute /* pwLine3.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[140].attribute /* pwLine3.is.re */.max;
  /* static nls data for pwLine.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[115].attribute /* pwLine.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[115].attribute /* pwLine.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[115].attribute /* pwLine.ir.im */.max;
  /* static nls data for pwLine3.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[139].attribute /* pwLine3.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[139].attribute /* pwLine3.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[139].attribute /* pwLine3.is.im */.max;
  /* static nls data for pwLine1.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[127].attribute /* pwLine1.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[127].attribute /* pwLine1.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[127].attribute /* pwLine1.is.im */.max;
  /* static nls data for pwLine3.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[138].attribute /* pwLine3.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[138].attribute /* pwLine3.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[138].attribute /* pwLine3.ir.re */.max;
  /* static nls data for pwLine4.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[150].attribute /* pwLine4.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[150].attribute /* pwLine4.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[150].attribute /* pwLine4.is.re */.max;
  /* static nls data for pwLine4.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[149].attribute /* pwLine4.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[149].attribute /* pwLine4.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[149].attribute /* pwLine4.is.im */.max;
  /* static nls data for pwLine3.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[137].attribute /* pwLine3.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[137].attribute /* pwLine3.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[137].attribute /* pwLine3.ir.im */.max;
  /* static nls data for pwLine1.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[126].attribute /* pwLine1.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[126].attribute /* pwLine1.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[126].attribute /* pwLine1.ir.re */.max;
  /* static nls data for pwLine1.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[125].attribute /* pwLine1.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[125].attribute /* pwLine1.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[125].attribute /* pwLine1.ir.im */.max;
  /* static nls data for gENCLS.id */
  sysData->nominal[i] = data->modelData->realVarsData[85].attribute /* gENCLS.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[85].attribute /* gENCLS.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[85].attribute /* gENCLS.id */.max;
  /* static nls data for gENCLS.iq */
  sysData->nominal[i] = data->modelData->realVarsData[86].attribute /* gENCLS.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[86].attribute /* gENCLS.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[86].attribute /* gENCLS.iq */.max;
  /* static nls data for gENROU.PSIkd */
  sysData->nominal[i] = data->modelData->realVarsData[8].attribute /* gENROU.PSIkd */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[8].attribute /* gENROU.PSIkd */.min;
  sysData->max[i++]   = data->modelData->realVarsData[8].attribute /* gENROU.PSIkd */.max;
  /* static nls data for gENROU.Epd */
  sysData->nominal[i] = data->modelData->realVarsData[6].attribute /* gENROU.Epd */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[6].attribute /* gENROU.Epd */.min;
  sysData->max[i++]   = data->modelData->realVarsData[6].attribute /* gENROU.Epd */.max;
  /* static nls data for gENROU.PSIppq */
  sysData->nominal[i] = data->modelData->realVarsData[98].attribute /* gENROU.PSIppq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[98].attribute /* gENROU.PSIppq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[98].attribute /* gENROU.PSIppq */.max;
  /* static nls data for gENROU.iq */
  sysData->nominal[i] = data->modelData->realVarsData[106].attribute /* gENROU.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[106].attribute /* gENROU.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[106].attribute /* gENROU.iq */.max;
  /* static nls data for gENROU.PSIppd */
  sysData->nominal[i] = data->modelData->realVarsData[97].attribute /* gENROU.PSIppd */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[97].attribute /* gENROU.PSIppd */.min;
  sysData->max[i++]   = data->modelData->realVarsData[97].attribute /* gENROU.PSIppd */.max;
  /* static nls data for gENROU.id */
  sysData->nominal[i] = data->modelData->realVarsData[105].attribute /* gENROU.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[105].attribute /* gENROU.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[105].attribute /* gENROU.id */.max;
  /* static nls data for pwLine.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[120].attribute /* pwLine.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[120].attribute /* pwLine.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[120].attribute /* pwLine.vs.re */.max;
  /* static nls data for pwLine.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[119].attribute /* pwLine.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[119].attribute /* pwLine.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[119].attribute /* pwLine.vs.im */.max;
  /* static nls data for pwLine1.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[129].attribute /* pwLine1.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[129].attribute /* pwLine1.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[129].attribute /* pwLine1.vr.im */.max;
  /* static nls data for pwLine1.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[130].attribute /* pwLine1.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[130].attribute /* pwLine1.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[130].attribute /* pwLine1.vr.re */.max;
  /* static nls data for eSST4B.VE */
  sysData->nominal[i] = data->modelData->realVarsData[67].attribute /* eSST4B.VE */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[67].attribute /* eSST4B.VE */.min;
  sysData->max[i++]   = data->modelData->realVarsData[67].attribute /* eSST4B.VE */.max;
  /* static nls data for eSST4B.ECOMP */
  sysData->nominal[i] = data->modelData->realVarsData[56].attribute /* eSST4B.ECOMP */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[56].attribute /* eSST4B.ECOMP */.min;
  sysData->max[i++]   = data->modelData->realVarsData[56].attribute /* eSST4B.ECOMP */.max;
  /* static nls data for eSST4B.XADIFD */
  sysData->nominal[i] = data->modelData->realVarsData[70].attribute /* eSST4B.XADIFD */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[70].attribute /* eSST4B.XADIFD */.min;
  sysData->max[i++]   = data->modelData->realVarsData[70].attribute /* eSST4B.XADIFD */.max;
  /* static nls data for pwLine.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[117].attribute /* pwLine.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[117].attribute /* pwLine.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[117].attribute /* pwLine.is.im */.max;
  /* static nls data for pwLine.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[118].attribute /* pwLine.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[118].attribute /* pwLine.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[118].attribute /* pwLine.is.re */.max;
  /* static nls data for pwLine1.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[132].attribute /* pwLine1.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[132].attribute /* pwLine1.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[132].attribute /* pwLine1.vs.re */.max;
  /* static nls data for pwLine1.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[131].attribute /* pwLine1.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[131].attribute /* pwLine1.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[131].attribute /* pwLine1.vs.im */.max;
  /* static nls data for pwLine3.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[142].attribute /* pwLine3.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[142].attribute /* pwLine3.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[142].attribute /* pwLine3.vr.re */.max;
  /* static nls data for pwLine3.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[141].attribute /* pwLine3.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[141].attribute /* pwLine3.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[141].attribute /* pwLine3.vr.im */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS125(sysData);
}

void getIterationVarsNLS125(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[116] /* pwLine.ir.re variable */;
  array[1] = data->localData[0]->realVars[128] /* pwLine1.is.re variable */;
  array[2] = data->localData[0]->realVars[140] /* pwLine3.is.re variable */;
  array[3] = data->localData[0]->realVars[115] /* pwLine.ir.im variable */;
  array[4] = data->localData[0]->realVars[139] /* pwLine3.is.im variable */;
  array[5] = data->localData[0]->realVars[127] /* pwLine1.is.im variable */;
  array[6] = data->localData[0]->realVars[138] /* pwLine3.ir.re variable */;
  array[7] = data->localData[0]->realVars[150] /* pwLine4.is.re variable */;
  array[8] = data->localData[0]->realVars[149] /* pwLine4.is.im variable */;
  array[9] = data->localData[0]->realVars[137] /* pwLine3.ir.im variable */;
  array[10] = data->localData[0]->realVars[126] /* pwLine1.ir.re variable */;
  array[11] = data->localData[0]->realVars[125] /* pwLine1.ir.im variable */;
  array[12] = data->localData[0]->realVars[85] /* gENCLS.id variable */;
  array[13] = data->localData[0]->realVars[86] /* gENCLS.iq variable */;
  array[14] = data->localData[0]->realVars[8] /* gENROU.PSIkd STATE(1) */;
  array[15] = data->localData[0]->realVars[6] /* gENROU.Epd STATE(1) */;
  array[16] = data->localData[0]->realVars[98] /* gENROU.PSIppq variable */;
  array[17] = data->localData[0]->realVars[106] /* gENROU.iq variable */;
  array[18] = data->localData[0]->realVars[97] /* gENROU.PSIppd variable */;
  array[19] = data->localData[0]->realVars[105] /* gENROU.id variable */;
  array[20] = data->localData[0]->realVars[120] /* pwLine.vs.re variable */;
  array[21] = data->localData[0]->realVars[119] /* pwLine.vs.im variable */;
  array[22] = data->localData[0]->realVars[129] /* pwLine1.vr.im variable */;
  array[23] = data->localData[0]->realVars[130] /* pwLine1.vr.re variable */;
  array[24] = data->localData[0]->realVars[67] /* eSST4B.VE variable */;
  array[25] = data->localData[0]->realVars[56] /* eSST4B.ECOMP variable */;
  array[26] = data->localData[0]->realVars[70] /* eSST4B.XADIFD variable */;
  array[27] = data->localData[0]->realVars[117] /* pwLine.is.im variable */;
  array[28] = data->localData[0]->realVars[118] /* pwLine.is.re variable */;
  array[29] = data->localData[0]->realVars[132] /* pwLine1.vs.re variable */;
  array[30] = data->localData[0]->realVars[131] /* pwLine1.vs.im variable */;
  array[31] = data->localData[0]->realVars[142] /* pwLine3.vr.re variable */;
  array[32] = data->localData[0]->realVars[141] /* pwLine3.vr.im variable */;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize non-linear systems */
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA* nonLinearSystemData)
{
  
  nonLinearSystemData[3].equationIndex = 894;
  nonLinearSystemData[3].size = 1;
  nonLinearSystemData[3].homotopySupport = 0;
  nonLinearSystemData[3].mixedSystem = 1;
  nonLinearSystemData[3].residualFunc = residualFunc894;
  nonLinearSystemData[3].strictTearingFunctionCall = NULL;
  nonLinearSystemData[3].analyticalJacobianColumn = OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_functionJacNLSJac18_column;
  nonLinearSystemData[3].initialAnalyticalJacobian = OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_initialAnalyticJacobianNLSJac18;
  nonLinearSystemData[3].jacobianIndex = 1 /*jacInx*/;
  nonLinearSystemData[3].initializeStaticNLSData = initializeStaticDataNLS894;
  nonLinearSystemData[3].getIterationVars = getIterationVarsNLS894;
  nonLinearSystemData[3].checkConstraints = NULL;
  
  
  nonLinearSystemData[2].equationIndex = 842;
  nonLinearSystemData[2].size = 22;
  nonLinearSystemData[2].homotopySupport = 0;
  nonLinearSystemData[2].mixedSystem = 1;
  nonLinearSystemData[2].residualFunc = residualFunc842;
  nonLinearSystemData[2].strictTearingFunctionCall = NULL;
  nonLinearSystemData[2].analyticalJacobianColumn = OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_functionJacNLSJac17_column;
  nonLinearSystemData[2].initialAnalyticalJacobian = OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_initialAnalyticJacobianNLSJac17;
  nonLinearSystemData[2].jacobianIndex = 0 /*jacInx*/;
  nonLinearSystemData[2].initializeStaticNLSData = initializeStaticDataNLS842;
  nonLinearSystemData[2].getIterationVars = getIterationVarsNLS842;
  nonLinearSystemData[2].checkConstraints = NULL;
  
  
  nonLinearSystemData[1].equationIndex = 693;
  nonLinearSystemData[1].size = 33;
  nonLinearSystemData[1].homotopySupport = 0;
  nonLinearSystemData[1].mixedSystem = 1;
  nonLinearSystemData[1].residualFunc = residualFunc693;
  nonLinearSystemData[1].strictTearingFunctionCall = NULL;
  nonLinearSystemData[1].analyticalJacobianColumn = NULL;
  nonLinearSystemData[1].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[1].jacobianIndex = -1;
  nonLinearSystemData[1].initializeStaticNLSData = initializeStaticDataNLS693;
  nonLinearSystemData[1].getIterationVars = getIterationVarsNLS693;
  nonLinearSystemData[1].checkConstraints = NULL;
  
  
  nonLinearSystemData[0].equationIndex = 125;
  nonLinearSystemData[0].size = 33;
  nonLinearSystemData[0].homotopySupport = 1;
  nonLinearSystemData[0].mixedSystem = 1;
  nonLinearSystemData[0].residualFunc = residualFunc125;
  nonLinearSystemData[0].strictTearingFunctionCall = NULL;
  nonLinearSystemData[0].analyticalJacobianColumn = NULL;
  nonLinearSystemData[0].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[0].jacobianIndex = -1;
  nonLinearSystemData[0].initializeStaticNLSData = initializeStaticDataNLS125;
  nonLinearSystemData[0].getIterationVars = getIterationVarsNLS125;
  nonLinearSystemData[0].checkConstraints = NULL;
}

#if defined(__cplusplus)
}
#endif

