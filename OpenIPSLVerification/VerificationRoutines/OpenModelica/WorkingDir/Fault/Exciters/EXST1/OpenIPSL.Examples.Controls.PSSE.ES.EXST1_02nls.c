/* Non Linear Systems */
#include "OpenIPSL.Examples.Controls.PSSE.ES.EXST1_model.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.EXST1_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* inner equations */

void residualFunc808(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,808};
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
  data->localData[0]->realVars[57] /* eXST1_1.EFD variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[57] /* eXST1_1.EFD variable */, (data->localData[0]->realVars[56] /* eXST1_1.ECOMP variable */) * (data->simulationInfo->realParameter[99]) - ((data->simulationInfo->realParameter[82]) * (data->localData[0]->realVars[63] /* eXST1_1.XADIFD variable */)), 14, Greater);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = (data->localData[0]->realVars[56] /* eXST1_1.ECOMP variable */) * (data->simulationInfo->realParameter[99]) - ((data->simulationInfo->realParameter[82]) * (data->localData[0]->realVars[63] /* eXST1_1.XADIFD variable */));
  }
  else
  {
    RELATIONHYSTERESIS(tmp1, data->localData[0]->realVars[57] /* eXST1_1.EFD variable */, (data->localData[0]->realVars[56] /* eXST1_1.ECOMP variable */) * (data->simulationInfo->realParameter[100]) - ((data->simulationInfo->realParameter[82]) * (data->localData[0]->realVars[63] /* eXST1_1.XADIFD variable */)), 15, Less);
    tmp3 = (tmp1?(data->localData[0]->realVars[56] /* eXST1_1.ECOMP variable */) * (data->simulationInfo->realParameter[100]) - ((data->simulationInfo->realParameter[82]) * (data->localData[0]->realVars[63] /* eXST1_1.XADIFD variable */)):data->localData[0]->realVars[62] /* eXST1_1.Vm1.y variable */);
  }
  res[0] = data->localData[0]->realVars[57] /* eXST1_1.EFD variable */ - (tmp3);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS808(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS808(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for eXST1_1.EFD */
  sysData->nominal[i] = data->modelData->realVarsData[57].attribute /* eXST1_1.EFD */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[57].attribute /* eXST1_1.EFD */.min;
  sysData->max[i++]   = data->modelData->realVarsData[57].attribute /* eXST1_1.EFD */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS808(sysData);
}

void getIterationVarsNLS808(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[57] /* eXST1_1.EFD variable */;
}


/* inner equations */

/*
equation index: 789
type: SIMPLE_ASSIGN
eXST1_1._imLeadLag._u = smooth(0, if eXST1_1.feedback.y > eXST1_1.limiter.uMax then eXST1_1.limiter.uMax else if eXST1_1.feedback.y < eXST1_1.limiter.uMin then eXST1_1.limiter.uMin else eXST1_1.feedback.y)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_789(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,789};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  tmp0 = Greater(data->localData[0]->realVars[65] /* eXST1_1.feedback.y variable */,data->simulationInfo->realParameter[129]);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->simulationInfo->realParameter[129];
  }
  else
  {
    tmp1 = Less(data->localData[0]->realVars[65] /* eXST1_1.feedback.y variable */,data->simulationInfo->realParameter[130]);
    tmp3 = (tmp1?data->simulationInfo->realParameter[130]:data->localData[0]->realVars[65] /* eXST1_1.feedback.y variable */);
  }
  data->localData[0]->realVars[69] /* eXST1_1.imLeadLag.u variable */ = tmp3;
  TRACE_POP
}
/*
equation index: 790
type: SIMPLE_ASSIGN
eXST1_1._imLeadLag._TF._y = (eXST1_1.imLeadLag.TF.bb[2] - eXST1_1.imLeadLag.TF.a[2] * eXST1_1.imLeadLag.TF.d) * eXST1_1.imLeadLag.TF.x[1] + eXST1_1.imLeadLag.TF.d * eXST1_1.imLeadLag.u
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_790(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,790};
  data->localData[0]->realVars[68] /* eXST1_1.imLeadLag.TF.y variable */ = (data->simulationInfo->realParameter[123] - ((data->simulationInfo->realParameter[118]) * (data->simulationInfo->realParameter[124]))) * (data->localData[0]->realVars[67] /* eXST1_1.imLeadLag.TF.x[1] variable */) + (data->simulationInfo->realParameter[124]) * (data->localData[0]->realVars[69] /* eXST1_1.imLeadLag.u variable */);
  TRACE_POP
}
/*
equation index: 791
type: SIMPLE_ASSIGN
eXST1_1._K_a._u = if abs(eXST1_1.imLeadLag.T1 - eXST1_1.imLeadLag.T2) < 1e-15 then eXST1_1.imLeadLag.K * eXST1_1.imLeadLag.u else eXST1_1.imLeadLag.TF.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_791(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,791};
  modelica_boolean tmp0;
  tmp0 = Less(fabs(data->simulationInfo->realParameter[114] - data->simulationInfo->realParameter[115]),1e-15);
  data->localData[0]->realVars[59] /* eXST1_1.K_a.u variable */ = (tmp0?(data->simulationInfo->realParameter[113]) * (data->localData[0]->realVars[69] /* eXST1_1.imLeadLag.u variable */):data->localData[0]->realVars[68] /* eXST1_1.imLeadLag.TF.y variable */);
  TRACE_POP
}
/*
equation index: 792
type: SIMPLE_ASSIGN
eXST1_1._K_a._y = eXST1_1.K_a.k * eXST1_1.K_a.u
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_792(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,792};
  data->localData[0]->realVars[60] /* eXST1_1.K_a.y variable */ = (data->simulationInfo->realParameter[84]) * (data->localData[0]->realVars[59] /* eXST1_1.K_a.u variable */);
  TRACE_POP
}
/*
equation index: 793
type: SIMPLE_ASSIGN
eXST1_1._Vm1._y = if abs(eXST1_1.Vm1.T) <= 1e-15 then eXST1_1.K_a.y * eXST1_1.Vm1.K else eXST1_1.Vm1.state
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_793(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,793};
  modelica_boolean tmp0;
  tmp0 = LessEq(fabs(data->simulationInfo->realParameter[102]),1e-15);
  data->localData[0]->realVars[62] /* eXST1_1.Vm1.y variable */ = (tmp0?(data->localData[0]->realVars[60] /* eXST1_1.K_a.y variable */) * (data->simulationInfo->realParameter[101]):data->localData[0]->realVars[1] /* eXST1_1.Vm1.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 794
type: SIMPLE_ASSIGN
eXST1_1._imDerivativeLag._y = 0.1 * (eXST1_1.Vm1.y - eXST1_1.imDerivativeLag.x) / eXST1_1.imDerivativeLag.T
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_794(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,794};
  data->localData[0]->realVars[66] /* eXST1_1.imDerivativeLag.y variable */ = (0.1) * (DIVISION_SIM(data->localData[0]->realVars[62] /* eXST1_1.Vm1.y variable */ - data->localData[0]->realVars[2] /* eXST1_1.imDerivativeLag.x STATE(1) */,data->simulationInfo->realParameter[109],"eXST1_1.imDerivativeLag.T",equationIndexes));
  TRACE_POP
}

void residualFunc803(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,803};
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
  data->localData[0]->realVars[65] /* eXST1_1.feedback.y variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_789(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_790(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_791(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_792(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_793(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_794(data, threadData);
  /* body */
  res[0] = data->localData[0]->realVars[64] /* eXST1_1.add3_2.y variable */ + (-data->localData[0]->realVars[66] /* eXST1_1.imDerivativeLag.y variable */) - data->localData[0]->realVars[65] /* eXST1_1.feedback.y variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS803(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern.leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern.index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern.numberOfNoneZeros = 1;
  inSysData->sparsePattern.colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern.maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern.leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern.leadindex[i] += inSysData->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern.index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern.colorCols[0] = 1;
}
void initializeStaticDataNLS803(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for eXST1_1.feedback.y */
  sysData->nominal[i] = data->modelData->realVarsData[65].attribute /* eXST1_1.feedback.y */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[65].attribute /* eXST1_1.feedback.y */.min;
  sysData->max[i++]   = data->modelData->realVarsData[65].attribute /* eXST1_1.feedback.y */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS803(sysData);
}

void getIterationVarsNLS803(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[65] /* eXST1_1.feedback.y variable */;
}


/* inner equations */

/*
equation index: 673
type: SIMPLE_ASSIGN
constantLoad._v = sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_673(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,673};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[121] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[120] /* pwLine1.vs.im variable */;
  data->localData[0]->realVars[53] /* constantLoad.v variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 674
type: SIMPLE_ASSIGN
constantLoad._kI = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (-1.0 + constantLoad.b2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_674(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,674};
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
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[53] /* constantLoad.v variable */, 0.5, 7, Less);
  tmp15 = (modelica_boolean)tmp0;
  if(tmp15)
  {
    tmp1 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp2 = -1.0 + data->simulationInfo->realParameter[63];
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
    tmp9 = data->simulationInfo->realParameter[63];
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
    tmp16 = (data->simulationInfo->realParameter[57]) * ((data->simulationInfo->realParameter[63]) * ((tmp3) * (exp(((-data->simulationInfo->realParameter[57])) * (tmp10)))));
  }
  else
  {
    tmp16 = 1.0;
  }
  data->localData[0]->realVars[49] /* constantLoad.kI variable */ = tmp16;
  TRACE_POP
}
/*
equation index: 675
type: SIMPLE_ASSIGN
constantLoad._kP = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a0 + constantLoad.a1 * cos(constantLoad.v * constantLoad.wp) + constantLoad.b1 * sin(constantLoad.v * constantLoad.wp) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_675(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,675};
  modelica_boolean tmp0;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[53] /* constantLoad.v variable */, data->simulationInfo->realParameter[36], 6, Less);
  data->localData[0]->realVars[50] /* constantLoad.kP variable */ = (tmp0?data->simulationInfo->realParameter[55] + (data->simulationInfo->realParameter[56]) * (cos((data->localData[0]->realVars[53] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[76]))) + (data->simulationInfo->realParameter[62]) * (sin((data->localData[0]->realVars[53] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[76]))):1.0);
  TRACE_POP
}
/*
equation index: 676
type: SIMPLE_ASSIGN
constantLoad._Q = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_676(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,676};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, data->simulationInfo->realParameter[72], 4, GreaterEq);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->timeValue, data->simulationInfo->realParameter[72] + data->simulationInfo->realParameter[66], 5, LessEq);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[49] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[39]) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[43]) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[50] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[41] + data->simulationInfo->realParameter[65]);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[49] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[39]) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[43]) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[50] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[41]);
  }
  data->localData[0]->realVars[47] /* constantLoad.Q variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 677
type: SIMPLE_ASSIGN
constantLoad._P = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_677(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,677};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, data->simulationInfo->realParameter[72], 4, GreaterEq);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->timeValue, data->simulationInfo->realParameter[72] + data->simulationInfo->realParameter[66], 5, LessEq);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[49] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[40]) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[44]) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[50] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[42] + data->simulationInfo->realParameter[64]);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[49] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[40]) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[44]) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[50] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[42]);
  }
  data->localData[0]->realVars[46] /* constantLoad.P variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 678
type: SIMPLE_ASSIGN
gENROE._PSId = gENROE.PSIppd - gENROE.Xppd * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_678(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,678};
  data->localData[0]->realVars[84] /* gENROE.PSId variable */ = data->localData[0]->realVars[86] /* gENROE.PSIppd variable */ - ((data->simulationInfo->realParameter[208]) * (data->localData[0]->realVars[94] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 679
type: SIMPLE_ASSIGN
pwLine._is._re = ($cse7 * gENROE.iq - (-$cse6) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_679(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,679};
  data->localData[0]->realVars[107] /* pwLine.is.re variable */ = ((data->localData[0]->realVars[29] /* $cse7 variable */) * (data->localData[0]->realVars[95] /* gENROE.iq variable */) - (((-data->localData[0]->realVars[28] /* $cse6 variable */)) * (data->localData[0]->realVars[94] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[157]);
  TRACE_POP
}
/*
equation index: 680
type: SIMPLE_ASSIGN
pwLine._is._im = ($cse6 * gENROE.iq - $cse7 * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_680(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,680};
  data->localData[0]->realVars[106] /* pwLine.is.im variable */ = ((data->localData[0]->realVars[28] /* $cse6 variable */) * (data->localData[0]->realVars[95] /* gENROE.iq variable */) - ((data->localData[0]->realVars[29] /* $cse7 variable */) * (data->localData[0]->realVars[94] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[157]);
  TRACE_POP
}
/*
equation index: 681
type: SIMPLE_ASSIGN
gENROE._uq = gENROE.PSId - gENROE.R_a * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_681(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,681};
  data->localData[0]->realVars[97] /* gENROE.uq variable */ = data->localData[0]->realVars[84] /* gENROE.PSId variable */ - ((data->simulationInfo->realParameter[191]) * (data->localData[0]->realVars[95] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 682
type: SIMPLE_ASSIGN
gENROE._PSIq = (-gENROE.PSIppq) - gENROE.Xppq * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_682(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,682};
  data->localData[0]->realVars[88] /* gENROE.PSIq variable */ = (-data->localData[0]->realVars[87] /* gENROE.PSIppq variable */) - ((data->simulationInfo->realParameter[209]) * (data->localData[0]->realVars[95] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 683
type: SIMPLE_ASSIGN
gENROE._ud = (-gENROE.PSIq) - gENROE.R_a * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_683(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,683};
  data->localData[0]->realVars[96] /* gENROE.ud variable */ = (-data->localData[0]->realVars[88] /* gENROE.PSIq variable */) - ((data->simulationInfo->realParameter[191]) * (data->localData[0]->realVars[94] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 684
type: SIMPLE_ASSIGN
pwLine._vs._im = $cse6 * gENROE.uq - $cse7 * gENROE.ud
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_684(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,684};
  data->localData[0]->realVars[108] /* pwLine.vs.im variable */ = (data->localData[0]->realVars[28] /* $cse6 variable */) * (data->localData[0]->realVars[97] /* gENROE.uq variable */) - ((data->localData[0]->realVars[29] /* $cse7 variable */) * (data->localData[0]->realVars[96] /* gENROE.ud variable */));
  TRACE_POP
}
/*
equation index: 685
type: SIMPLE_ASSIGN
pwLine._vs._re = $cse6 * gENROE.ud + $cse7 * gENROE.uq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_685(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,685};
  data->localData[0]->realVars[109] /* pwLine.vs.re variable */ = (data->localData[0]->realVars[28] /* $cse6 variable */) * (data->localData[0]->realVars[96] /* gENROE.ud variable */) + (data->localData[0]->realVars[29] /* $cse7 variable */) * (data->localData[0]->realVars[97] /* gENROE.uq variable */);
  TRACE_POP
}
/*
equation index: 686
type: SIMPLE_ASSIGN
gENCLS._p._ir = ((-$cse1) * gENCLS.id - $cse2 * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_686(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,686};
  data->localData[0]->realVars[78] /* gENCLS.p.ir variable */ = (((-data->localData[0]->realVars[24] /* $cse1 variable */)) * (data->localData[0]->realVars[74] /* gENCLS.id variable */) - ((data->localData[0]->realVars[25] /* $cse2 variable */) * (data->localData[0]->realVars[75] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[131]);
  TRACE_POP
}
/*
equation index: 687
type: SIMPLE_ASSIGN
gENCLS._p._ii = ($cse2 * gENCLS.id - $cse1 * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_687(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,687};
  data->localData[0]->realVars[77] /* gENCLS.p.ii variable */ = ((data->localData[0]->realVars[25] /* $cse2 variable */) * (data->localData[0]->realVars[74] /* gENCLS.id variable */) - ((data->localData[0]->realVars[24] /* $cse1 variable */) * (data->localData[0]->realVars[75] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[131]);
  TRACE_POP
}
/*
equation index: 688
type: SIMPLE_ASSIGN
gENCLS._vq = gENCLS.eq + (-gENCLS.R_a) * gENCLS.iq - gENCLS.X_d * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_688(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,688};
  data->localData[0]->realVars[80] /* gENCLS.vq variable */ = data->localData[0]->realVars[5] /* gENCLS.eq STATE(1) */ + ((-data->simulationInfo->realParameter[137])) * (data->localData[0]->realVars[75] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[140]) * (data->localData[0]->realVars[74] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 689
type: SIMPLE_ASSIGN
gENCLS._vd = gENCLS.X_d * gENCLS.iq - gENCLS.R_a * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_689(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,689};
  data->localData[0]->realVars[79] /* gENCLS.vd variable */ = (data->simulationInfo->realParameter[140]) * (data->localData[0]->realVars[75] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[137]) * (data->localData[0]->realVars[74] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 690
type: SIMPLE_ASSIGN
pwLine4._ir._im = (-pwLine1.ir.im) - gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_690(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,690};
  data->localData[0]->realVars[136] /* pwLine4.ir.im variable */ = (-data->localData[0]->realVars[114] /* pwLine1.ir.im variable */) - data->localData[0]->realVars[77] /* gENCLS.p.ii variable */;
  TRACE_POP
}
/*
equation index: 691
type: SIMPLE_ASSIGN
pwLine4._ir._re = (-pwLine1.ir.re) - gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_691(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,691};
  data->localData[0]->realVars[137] /* pwLine4.ir.re variable */ = (-data->localData[0]->realVars[115] /* pwLine1.ir.re variable */) - data->localData[0]->realVars[78] /* gENCLS.p.ir variable */;
  TRACE_POP
}
/*
equation index: 692
type: SIMPLE_ASSIGN
pwFault._p._ii = (-pwLine3.ir.im) - pwLine4.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_692(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,692};
  data->localData[0]->realVars[98] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[126] /* pwLine3.ir.im variable */) - data->localData[0]->realVars[138] /* pwLine4.is.im variable */;
  TRACE_POP
}
/*
equation index: 693
type: SIMPLE_ASSIGN
pwFault._p._ir = (-pwLine3.ir.re) - pwLine4.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_693(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,693};
  data->localData[0]->realVars[99] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[127] /* pwLine3.ir.re variable */) - data->localData[0]->realVars[139] /* pwLine4.is.re variable */;
  TRACE_POP
}
/*
equation index: 694
type: SIMPLE_ASSIGN
constantLoad._p._ii = (-pwLine.ir.im) - pwLine1.is.im - pwLine3.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_694(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,694};
  data->localData[0]->realVars[51] /* constantLoad.p.ii variable */ = (-data->localData[0]->realVars[104] /* pwLine.ir.im variable */) - data->localData[0]->realVars[116] /* pwLine1.is.im variable */ - data->localData[0]->realVars[128] /* pwLine3.is.im variable */;
  TRACE_POP
}
/*
equation index: 695
type: SIMPLE_ASSIGN
pwLine._ir._re = (-pwLine1.is.re) - pwLine3.is.re - constantLoad.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_695(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,695};
  data->localData[0]->realVars[105] /* pwLine.ir.re variable */ = (-data->localData[0]->realVars[117] /* pwLine1.is.re variable */) - data->localData[0]->realVars[129] /* pwLine3.is.re variable */ - data->localData[0]->realVars[52] /* constantLoad.p.ir variable */;
  TRACE_POP
}

void residualFunc763(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,763};
  int i;
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_boolean tmp7;
  modelica_real tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  modelica_boolean tmp11;
  modelica_real tmp12;
  modelica_boolean tmp13;
  modelica_boolean tmp14;
  modelica_boolean tmp15;
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_boolean tmp18;
  modelica_real tmp19;
  modelica_boolean tmp20;
  modelica_real tmp21;
  modelica_boolean tmp22;
  modelica_real tmp23;
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
  data->localData[0]->realVars[52] /* constantLoad.p.ir variable */ = xloc[0];
  data->localData[0]->realVars[129] /* pwLine3.is.re variable */ = xloc[1];
  data->localData[0]->realVars[116] /* pwLine1.is.im variable */ = xloc[2];
  data->localData[0]->realVars[128] /* pwLine3.is.im variable */ = xloc[3];
  data->localData[0]->realVars[104] /* pwLine.ir.im variable */ = xloc[4];
  data->localData[0]->realVars[127] /* pwLine3.ir.re variable */ = xloc[5];
  data->localData[0]->realVars[139] /* pwLine4.is.re variable */ = xloc[6];
  data->localData[0]->realVars[126] /* pwLine3.ir.im variable */ = xloc[7];
  data->localData[0]->realVars[138] /* pwLine4.is.im variable */ = xloc[8];
  data->localData[0]->realVars[117] /* pwLine1.is.re variable */ = xloc[9];
  data->localData[0]->realVars[115] /* pwLine1.ir.re variable */ = xloc[10];
  data->localData[0]->realVars[114] /* pwLine1.ir.im variable */ = xloc[11];
  data->localData[0]->realVars[74] /* gENCLS.id variable */ = xloc[12];
  data->localData[0]->realVars[75] /* gENCLS.iq variable */ = xloc[13];
  data->localData[0]->realVars[119] /* pwLine1.vr.re variable */ = xloc[14];
  data->localData[0]->realVars[118] /* pwLine1.vr.im variable */ = xloc[15];
  data->localData[0]->realVars[95] /* gENROE.iq variable */ = xloc[16];
  data->localData[0]->realVars[94] /* gENROE.id variable */ = xloc[17];
  data->localData[0]->realVars[120] /* pwLine1.vs.im variable */ = xloc[18];
  data->localData[0]->realVars[121] /* pwLine1.vs.re variable */ = xloc[19];
  data->localData[0]->realVars[130] /* pwLine3.vr.im variable */ = xloc[20];
  data->localData[0]->realVars[131] /* pwLine3.vr.re variable */ = xloc[21];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_673(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_674(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_675(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_676(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_677(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_678(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_679(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_680(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_681(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_682(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_683(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_684(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_685(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_686(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_687(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_688(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_689(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_690(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_691(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_692(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_693(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_694(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_695(data, threadData);
  /* body */
  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, data->simulationInfo->realParameter[263], 2, GreaterEq);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->timeValue, data->simulationInfo->realParameter[264], 3, Less);
  res[0] = ((tmp0 && tmp1)?data->localData[0]->realVars[117] /* pwLine1.is.re variable */:data->localData[0]->realVars[121] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[119] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[262]) * (data->localData[0]->realVars[117] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[259]) - ((data->localData[0]->realVars[121] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[260]))) - ((data->simulationInfo->realParameter[261]) * (data->localData[0]->realVars[116] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[121] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[259]) - ((data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[260]))))));

  RELATIONHYSTERESIS(tmp2, data->localData[0]->timeValue, data->simulationInfo->realParameter[241], 12, Less);
  tmp11 = (modelica_boolean)tmp2;
  if(tmp11)
  {
    tmp12 = data->localData[0]->realVars[99] /* pwFault.p.ir variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp3, data->localData[0]->timeValue, data->simulationInfo->realParameter[242], 13, Less);
    tmp9 = (modelica_boolean)(tmp3 && data->simulationInfo->booleanParameter[66]);
    if(tmp9)
    {
      tmp10 = data->localData[0]->realVars[130] /* pwLine3.vr.im variable */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp4, data->localData[0]->timeValue, data->simulationInfo->realParameter[242], 13, Less);
      tmp7 = (modelica_boolean)tmp4;
      if(tmp7)
      {
        tmp5 = data->simulationInfo->realParameter[239];
        tmp6 = data->simulationInfo->realParameter[240];
        tmp8 = data->localData[0]->realVars[99] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[239]) * (data->localData[0]->realVars[131] /* pwLine3.vr.re variable */) + (data->simulationInfo->realParameter[240]) * (data->localData[0]->realVars[130] /* pwLine3.vr.im variable */),(tmp5 * tmp5) + (tmp6 * tmp6),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp8 = data->localData[0]->realVars[99] /* pwFault.p.ir variable */;
      }
      tmp10 = tmp8;
    }
    tmp12 = tmp10;
  }
  res[1] = tmp12;

  RELATIONHYSTERESIS(tmp13, data->localData[0]->timeValue, data->simulationInfo->realParameter[241], 12, Less);
  tmp22 = (modelica_boolean)tmp13;
  if(tmp22)
  {
    tmp23 = data->localData[0]->realVars[98] /* pwFault.p.ii variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp14, data->localData[0]->timeValue, data->simulationInfo->realParameter[242], 13, Less);
    tmp20 = (modelica_boolean)(tmp14 && data->simulationInfo->booleanParameter[66]);
    if(tmp20)
    {
      tmp21 = data->localData[0]->realVars[131] /* pwLine3.vr.re variable */ - 1e-10;
    }
    else
    {
      RELATIONHYSTERESIS(tmp15, data->localData[0]->timeValue, data->simulationInfo->realParameter[242], 13, Less);
      tmp18 = (modelica_boolean)tmp15;
      if(tmp18)
      {
        tmp16 = data->simulationInfo->realParameter[240];
        tmp17 = data->simulationInfo->realParameter[239];
        tmp19 = data->localData[0]->realVars[98] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[239]) * (data->localData[0]->realVars[130] /* pwLine3.vr.im variable */) - ((data->simulationInfo->realParameter[240]) * (data->localData[0]->realVars[131] /* pwLine3.vr.re variable */)),(tmp16 * tmp16) + (tmp17 * tmp17),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
      }
      else
      {
        tmp19 = data->localData[0]->realVars[98] /* pwFault.p.ii variable */;
      }
      tmp21 = tmp19;
    }
    tmp23 = tmp21;
  }
  res[2] = tmp23;

  RELATIONHYSTERESIS(tmp24, data->localData[0]->timeValue, data->simulationInfo->realParameter[285], 10, GreaterEq);
  RELATIONHYSTERESIS(tmp25, data->localData[0]->timeValue, data->simulationInfo->realParameter[286], 11, Less);
  res[3] = ((tmp24 && tmp25)?data->localData[0]->realVars[137] /* pwLine4.ir.re variable */:data->localData[0]->realVars[119] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[131] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[284]) * (data->localData[0]->realVars[137] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[118] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[281]) - ((data->localData[0]->realVars[119] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[282]))) - ((data->simulationInfo->realParameter[283]) * (data->localData[0]->realVars[136] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[119] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[281]) - ((data->localData[0]->realVars[118] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[282]))))));

  RELATIONHYSTERESIS(tmp26, data->localData[0]->timeValue, data->simulationInfo->realParameter[285], 10, GreaterEq);
  RELATIONHYSTERESIS(tmp27, data->localData[0]->timeValue, data->simulationInfo->realParameter[286], 11, Less);
  res[4] = ((tmp26 && tmp27)?data->localData[0]->realVars[136] /* pwLine4.ir.im variable */:data->localData[0]->realVars[118] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[130] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[284]) * (data->localData[0]->realVars[136] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[119] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[281]) - ((data->localData[0]->realVars[118] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[282]))) + (data->simulationInfo->realParameter[283]) * (data->localData[0]->realVars[137] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[118] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[281]) - ((data->localData[0]->realVars[119] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[282])))));

  RELATIONHYSTERESIS(tmp28, data->localData[0]->timeValue, data->simulationInfo->realParameter[285], 10, GreaterEq);
  RELATIONHYSTERESIS(tmp29, data->localData[0]->timeValue, data->simulationInfo->realParameter[286], 11, Less);
  res[5] = ((tmp28 && tmp29)?data->localData[0]->realVars[139] /* pwLine4.is.re variable */:data->localData[0]->realVars[131] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[119] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[284]) * (data->localData[0]->realVars[139] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[130] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[281]) - ((data->localData[0]->realVars[131] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[282]))) - ((data->simulationInfo->realParameter[283]) * (data->localData[0]->realVars[138] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[131] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[281]) - ((data->localData[0]->realVars[130] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[282]))))));

  RELATIONHYSTERESIS(tmp30, data->localData[0]->timeValue, data->simulationInfo->realParameter[285], 10, GreaterEq);
  RELATIONHYSTERESIS(tmp31, data->localData[0]->timeValue, data->simulationInfo->realParameter[286], 11, Less);
  res[6] = ((tmp30 && tmp31)?data->localData[0]->realVars[138] /* pwLine4.is.im variable */:data->localData[0]->realVars[130] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[118] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[284]) * (data->localData[0]->realVars[138] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[131] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[281]) - ((data->localData[0]->realVars[130] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[282]))) + (data->simulationInfo->realParameter[283]) * (data->localData[0]->realVars[139] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[130] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[281]) - ((data->localData[0]->realVars[131] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[282])))));

  RELATIONHYSTERESIS(tmp32, data->localData[0]->timeValue, data->simulationInfo->realParameter[274], 8, GreaterEq);
  RELATIONHYSTERESIS(tmp33, data->localData[0]->timeValue, data->simulationInfo->realParameter[275], 9, Less);
  res[7] = ((tmp32 && tmp33)?data->localData[0]->realVars[126] /* pwLine3.ir.im variable */:data->localData[0]->realVars[130] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[120] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[273]) * (data->localData[0]->realVars[126] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[131] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[270]) - ((data->localData[0]->realVars[130] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[271]))) + (data->simulationInfo->realParameter[272]) * (data->localData[0]->realVars[127] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[130] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[270]) - ((data->localData[0]->realVars[131] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[271])))));

  RELATIONHYSTERESIS(tmp34, data->localData[0]->timeValue, data->simulationInfo->realParameter[274], 8, GreaterEq);
  RELATIONHYSTERESIS(tmp35, data->localData[0]->timeValue, data->simulationInfo->realParameter[275], 9, Less);
  res[8] = ((tmp34 && tmp35)?data->localData[0]->realVars[127] /* pwLine3.ir.re variable */:data->localData[0]->realVars[131] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[121] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[273]) * (data->localData[0]->realVars[127] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[130] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[270]) - ((data->localData[0]->realVars[131] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[271]))) - ((data->simulationInfo->realParameter[272]) * (data->localData[0]->realVars[126] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[131] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[270]) - ((data->localData[0]->realVars[130] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[271]))))));

  RELATIONHYSTERESIS(tmp36, data->localData[0]->timeValue, data->simulationInfo->realParameter[263], 2, GreaterEq);
  RELATIONHYSTERESIS(tmp37, data->localData[0]->timeValue, data->simulationInfo->realParameter[264], 3, Less);
  res[9] = ((tmp36 && tmp37)?data->localData[0]->realVars[115] /* pwLine1.ir.re variable */:data->localData[0]->realVars[119] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[121] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[262]) * (data->localData[0]->realVars[115] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[118] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[259]) - ((data->localData[0]->realVars[119] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[260]))) - ((data->simulationInfo->realParameter[261]) * (data->localData[0]->realVars[114] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[119] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[259]) - ((data->localData[0]->realVars[118] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[260]))))));

  RELATIONHYSTERESIS(tmp38, data->localData[0]->timeValue, data->simulationInfo->realParameter[252], 0, GreaterEq);
  RELATIONHYSTERESIS(tmp39, data->localData[0]->timeValue, data->simulationInfo->realParameter[253], 1, Less);
  res[10] = ((tmp38 && tmp39)?data->localData[0]->realVars[104] /* pwLine.ir.im variable */:data->localData[0]->realVars[120] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[108] /* pwLine.vs.im variable */ - ((data->simulationInfo->realParameter[251]) * (data->localData[0]->realVars[104] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[121] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[248]) - ((data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[249]))) + (data->simulationInfo->realParameter[250]) * (data->localData[0]->realVars[105] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[248]) - ((data->localData[0]->realVars[121] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[249])))));

  RELATIONHYSTERESIS(tmp40, data->localData[0]->timeValue, data->simulationInfo->realParameter[252], 0, GreaterEq);
  RELATIONHYSTERESIS(tmp41, data->localData[0]->timeValue, data->simulationInfo->realParameter[253], 1, Less);
  res[11] = ((tmp40 && tmp41)?data->localData[0]->realVars[106] /* pwLine.is.im variable */:data->localData[0]->realVars[108] /* pwLine.vs.im variable */ - data->localData[0]->realVars[120] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[251]) * (data->localData[0]->realVars[106] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[109] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[248]) - ((data->localData[0]->realVars[108] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[249]))) + (data->simulationInfo->realParameter[250]) * (data->localData[0]->realVars[107] /* pwLine.is.re variable */ + (data->localData[0]->realVars[108] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[248]) - ((data->localData[0]->realVars[109] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[249])))));

  RELATIONHYSTERESIS(tmp42, data->localData[0]->timeValue, data->simulationInfo->realParameter[252], 0, GreaterEq);
  RELATIONHYSTERESIS(tmp43, data->localData[0]->timeValue, data->simulationInfo->realParameter[253], 1, Less);
  res[12] = ((tmp42 && tmp43)?data->localData[0]->realVars[107] /* pwLine.is.re variable */:data->localData[0]->realVars[109] /* pwLine.vs.re variable */ - data->localData[0]->realVars[121] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[251]) * (data->localData[0]->realVars[107] /* pwLine.is.re variable */ + (data->localData[0]->realVars[108] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[248]) - ((data->localData[0]->realVars[109] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[249]))) - ((data->simulationInfo->realParameter[250]) * (data->localData[0]->realVars[106] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[109] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[248]) - ((data->localData[0]->realVars[108] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[249]))))));

  RELATIONHYSTERESIS(tmp44, data->localData[0]->timeValue, data->simulationInfo->realParameter[274], 8, GreaterEq);
  RELATIONHYSTERESIS(tmp45, data->localData[0]->timeValue, data->simulationInfo->realParameter[275], 9, Less);
  res[13] = ((tmp44 && tmp45)?data->localData[0]->realVars[129] /* pwLine3.is.re variable */:data->localData[0]->realVars[121] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[131] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[273]) * (data->localData[0]->realVars[129] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[270]) - ((data->localData[0]->realVars[121] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[271]))) - ((data->simulationInfo->realParameter[272]) * (data->localData[0]->realVars[128] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[121] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[270]) - ((data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[271]))))));

  RELATIONHYSTERESIS(tmp46, data->localData[0]->timeValue, data->simulationInfo->realParameter[274], 8, GreaterEq);
  RELATIONHYSTERESIS(tmp47, data->localData[0]->timeValue, data->simulationInfo->realParameter[275], 9, Less);
  res[14] = ((tmp46 && tmp47)?data->localData[0]->realVars[128] /* pwLine3.is.im variable */:data->localData[0]->realVars[120] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[130] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[273]) * (data->localData[0]->realVars[128] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[121] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[270]) - ((data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[271]))) + (data->simulationInfo->realParameter[272]) * (data->localData[0]->realVars[129] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[270]) - ((data->localData[0]->realVars[121] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[271])))));

  RELATIONHYSTERESIS(tmp48, data->localData[0]->timeValue, data->simulationInfo->realParameter[252], 0, GreaterEq);
  RELATIONHYSTERESIS(tmp49, data->localData[0]->timeValue, data->simulationInfo->realParameter[253], 1, Less);
  res[15] = ((tmp48 && tmp49)?data->localData[0]->realVars[105] /* pwLine.ir.re variable */:data->localData[0]->realVars[121] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[109] /* pwLine.vs.re variable */ - ((data->simulationInfo->realParameter[251]) * (data->localData[0]->realVars[105] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[248]) - ((data->localData[0]->realVars[121] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[249]))) - ((data->simulationInfo->realParameter[250]) * (data->localData[0]->realVars[104] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[121] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[248]) - ((data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[249]))))));

  res[16] = (data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[52] /* constantLoad.p.ir variable */) + ((-data->localData[0]->realVars[121] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[51] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[47] /* constantLoad.Q variable */;

  res[17] = (data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[51] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[121] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[52] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[46] /* constantLoad.P variable */;

  RELATIONHYSTERESIS(tmp50, data->localData[0]->timeValue, data->simulationInfo->realParameter[263], 2, GreaterEq);
  RELATIONHYSTERESIS(tmp51, data->localData[0]->timeValue, data->simulationInfo->realParameter[264], 3, Less);
  res[18] = ((tmp50 && tmp51)?data->localData[0]->realVars[116] /* pwLine1.is.im variable */:data->localData[0]->realVars[120] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[118] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[262]) * (data->localData[0]->realVars[116] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[121] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[259]) - ((data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[260]))) + (data->simulationInfo->realParameter[261]) * (data->localData[0]->realVars[117] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[259]) - ((data->localData[0]->realVars[121] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[260])))));

  res[19] = (data->localData[0]->realVars[24] /* $cse1 variable */) * (data->localData[0]->realVars[80] /* gENCLS.vq variable */) + ((-data->localData[0]->realVars[25] /* $cse2 variable */)) * (data->localData[0]->realVars[79] /* gENCLS.vd variable */) - data->localData[0]->realVars[118] /* pwLine1.vr.im variable */;

  RELATIONHYSTERESIS(tmp52, data->localData[0]->timeValue, data->simulationInfo->realParameter[263], 2, GreaterEq);
  RELATIONHYSTERESIS(tmp53, data->localData[0]->timeValue, data->simulationInfo->realParameter[264], 3, Less);
  res[20] = ((tmp52 && tmp53)?data->localData[0]->realVars[114] /* pwLine1.ir.im variable */:data->localData[0]->realVars[118] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[120] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[262]) * (data->localData[0]->realVars[114] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[119] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[259]) - ((data->localData[0]->realVars[118] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[260]))) + (data->simulationInfo->realParameter[261]) * (data->localData[0]->realVars[115] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[118] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[259]) - ((data->localData[0]->realVars[119] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[260])))));

  res[21] = (data->localData[0]->realVars[25] /* $cse2 variable */) * (data->localData[0]->realVars[80] /* gENCLS.vq variable */) + (data->localData[0]->realVars[24] /* $cse1 variable */) * (data->localData[0]->realVars[79] /* gENCLS.vd variable */) - data->localData[0]->realVars[119] /* pwLine1.vr.re variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS763(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+22] = {0,4,4,4,4,4,3,3,3,3,4,4,4,4,4,7,7,4,4,11,11,8,8};
  const int rowIndex[112] = {10,15,16,17,10,13,14,15,0,16,17,18,13,14,16,17,10,15,16,17,1,7,8,1,5,6,2,7,8,2,5,6,0,10,15,18,3,4,9,20,3,4,9,20,3,4,19,21,3,4,19,21,0,3,4,5,9,20,21,3,4,6,9,18,19,20,10,11,12,15,10,11,12,15,0,7,10,11,13,14,15,16,17,18,20,0,8,9,10,12,13,14,15,16,17,18,1,2,4,5,6,7,8,14,1,2,3,5,6,7,8,13};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern.leadindex = (unsigned int*) malloc((22+1)*sizeof(int));
  inSysData->sparsePattern.index = (unsigned int*) malloc(112*sizeof(int));
  inSysData->sparsePattern.numberOfNoneZeros = 112;
  inSysData->sparsePattern.colorCols = (unsigned int*) malloc(22*sizeof(int));
  inSysData->sparsePattern.maxColors = 10;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern.leadindex, colPtrIndex, (22+1)*sizeof(int));
  
  for(i=2;i<22+1;++i)
    inSysData->sparsePattern.leadindex[i] += inSysData->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern.index, rowIndex, 112*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern.colorCols[21] = 1;
  inSysData->sparsePattern.colorCols[20] = 2;
  inSysData->sparsePattern.colorCols[19] = 3;
  inSysData->sparsePattern.colorCols[18] = 4;
  inSysData->sparsePattern.colorCols[15] = 5;
  inSysData->sparsePattern.colorCols[17] = 5;
  inSysData->sparsePattern.colorCols[14] = 6;
  inSysData->sparsePattern.colorCols[16] = 6;
  inSysData->sparsePattern.colorCols[4] = 7;
  inSysData->sparsePattern.colorCols[13] = 7;
  inSysData->sparsePattern.colorCols[3] = 8;
  inSysData->sparsePattern.colorCols[9] = 8;
  inSysData->sparsePattern.colorCols[12] = 8;
  inSysData->sparsePattern.colorCols[1] = 9;
  inSysData->sparsePattern.colorCols[2] = 9;
  inSysData->sparsePattern.colorCols[6] = 9;
  inSysData->sparsePattern.colorCols[7] = 9;
  inSysData->sparsePattern.colorCols[11] = 9;
  inSysData->sparsePattern.colorCols[0] = 10;
  inSysData->sparsePattern.colorCols[5] = 10;
  inSysData->sparsePattern.colorCols[8] = 10;
  inSysData->sparsePattern.colorCols[10] = 10;
}
void initializeStaticDataNLS763(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for constantLoad.p.ir */
  sysData->nominal[i] = data->modelData->realVarsData[52].attribute /* constantLoad.p.ir */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[52].attribute /* constantLoad.p.ir */.min;
  sysData->max[i++]   = data->modelData->realVarsData[52].attribute /* constantLoad.p.ir */.max;
  /* static nls data for pwLine3.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[129].attribute /* pwLine3.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[129].attribute /* pwLine3.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[129].attribute /* pwLine3.is.re */.max;
  /* static nls data for pwLine1.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[116].attribute /* pwLine1.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[116].attribute /* pwLine1.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[116].attribute /* pwLine1.is.im */.max;
  /* static nls data for pwLine3.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[128].attribute /* pwLine3.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[128].attribute /* pwLine3.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[128].attribute /* pwLine3.is.im */.max;
  /* static nls data for pwLine.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[104].attribute /* pwLine.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[104].attribute /* pwLine.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[104].attribute /* pwLine.ir.im */.max;
  /* static nls data for pwLine3.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[127].attribute /* pwLine3.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[127].attribute /* pwLine3.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[127].attribute /* pwLine3.ir.re */.max;
  /* static nls data for pwLine4.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[139].attribute /* pwLine4.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[139].attribute /* pwLine4.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[139].attribute /* pwLine4.is.re */.max;
  /* static nls data for pwLine3.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[126].attribute /* pwLine3.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[126].attribute /* pwLine3.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[126].attribute /* pwLine3.ir.im */.max;
  /* static nls data for pwLine4.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[138].attribute /* pwLine4.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[138].attribute /* pwLine4.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[138].attribute /* pwLine4.is.im */.max;
  /* static nls data for pwLine1.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[117].attribute /* pwLine1.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[117].attribute /* pwLine1.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[117].attribute /* pwLine1.is.re */.max;
  /* static nls data for pwLine1.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[115].attribute /* pwLine1.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[115].attribute /* pwLine1.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[115].attribute /* pwLine1.ir.re */.max;
  /* static nls data for pwLine1.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[114].attribute /* pwLine1.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[114].attribute /* pwLine1.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[114].attribute /* pwLine1.ir.im */.max;
  /* static nls data for gENCLS.id */
  sysData->nominal[i] = data->modelData->realVarsData[74].attribute /* gENCLS.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[74].attribute /* gENCLS.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[74].attribute /* gENCLS.id */.max;
  /* static nls data for gENCLS.iq */
  sysData->nominal[i] = data->modelData->realVarsData[75].attribute /* gENCLS.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[75].attribute /* gENCLS.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[75].attribute /* gENCLS.iq */.max;
  /* static nls data for pwLine1.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[119].attribute /* pwLine1.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[119].attribute /* pwLine1.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[119].attribute /* pwLine1.vr.re */.max;
  /* static nls data for pwLine1.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[118].attribute /* pwLine1.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[118].attribute /* pwLine1.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[118].attribute /* pwLine1.vr.im */.max;
  /* static nls data for gENROE.iq */
  sysData->nominal[i] = data->modelData->realVarsData[95].attribute /* gENROE.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[95].attribute /* gENROE.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[95].attribute /* gENROE.iq */.max;
  /* static nls data for gENROE.id */
  sysData->nominal[i] = data->modelData->realVarsData[94].attribute /* gENROE.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[94].attribute /* gENROE.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[94].attribute /* gENROE.id */.max;
  /* static nls data for pwLine1.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[120].attribute /* pwLine1.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[120].attribute /* pwLine1.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[120].attribute /* pwLine1.vs.im */.max;
  /* static nls data for pwLine1.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[121].attribute /* pwLine1.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[121].attribute /* pwLine1.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[121].attribute /* pwLine1.vs.re */.max;
  /* static nls data for pwLine3.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[130].attribute /* pwLine3.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[130].attribute /* pwLine3.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[130].attribute /* pwLine3.vr.im */.max;
  /* static nls data for pwLine3.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[131].attribute /* pwLine3.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[131].attribute /* pwLine3.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[131].attribute /* pwLine3.vr.re */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS763(sysData);
}

void getIterationVarsNLS763(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[52] /* constantLoad.p.ir variable */;
  array[1] = data->localData[0]->realVars[129] /* pwLine3.is.re variable */;
  array[2] = data->localData[0]->realVars[116] /* pwLine1.is.im variable */;
  array[3] = data->localData[0]->realVars[128] /* pwLine3.is.im variable */;
  array[4] = data->localData[0]->realVars[104] /* pwLine.ir.im variable */;
  array[5] = data->localData[0]->realVars[127] /* pwLine3.ir.re variable */;
  array[6] = data->localData[0]->realVars[139] /* pwLine4.is.re variable */;
  array[7] = data->localData[0]->realVars[126] /* pwLine3.ir.im variable */;
  array[8] = data->localData[0]->realVars[138] /* pwLine4.is.im variable */;
  array[9] = data->localData[0]->realVars[117] /* pwLine1.is.re variable */;
  array[10] = data->localData[0]->realVars[115] /* pwLine1.ir.re variable */;
  array[11] = data->localData[0]->realVars[114] /* pwLine1.ir.im variable */;
  array[12] = data->localData[0]->realVars[74] /* gENCLS.id variable */;
  array[13] = data->localData[0]->realVars[75] /* gENCLS.iq variable */;
  array[14] = data->localData[0]->realVars[119] /* pwLine1.vr.re variable */;
  array[15] = data->localData[0]->realVars[118] /* pwLine1.vr.im variable */;
  array[16] = data->localData[0]->realVars[95] /* gENROE.iq variable */;
  array[17] = data->localData[0]->realVars[94] /* gENROE.id variable */;
  array[18] = data->localData[0]->realVars[120] /* pwLine1.vs.im variable */;
  array[19] = data->localData[0]->realVars[121] /* pwLine1.vs.re variable */;
  array[20] = data->localData[0]->realVars[130] /* pwLine3.vr.im variable */;
  array[21] = data->localData[0]->realVars[131] /* pwLine3.vr.re variable */;
}


/* inner equations */

/*
equation index: 534
type: SIMPLE_ASSIGN
constantLoad._v = sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_534(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,534};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[121] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[120] /* pwLine1.vs.im variable */;
  data->localData[0]->realVars[53] /* constantLoad.v variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 535
type: SIMPLE_ASSIGN
constantLoad._kP = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a0 + constantLoad.a1 * cos(constantLoad.v * constantLoad.wp) + constantLoad.b1 * sin(constantLoad.v * constantLoad.wp) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_535(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,535};
  modelica_boolean tmp0;
  tmp0 = Less(data->localData[0]->realVars[53] /* constantLoad.v variable */,data->simulationInfo->realParameter[36]);
  data->localData[0]->realVars[50] /* constantLoad.kP variable */ = (tmp0?data->simulationInfo->realParameter[55] + (data->simulationInfo->realParameter[56]) * (cos((data->localData[0]->realVars[53] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[76]))) + (data->simulationInfo->realParameter[62]) * (sin((data->localData[0]->realVars[53] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[76]))):1.0);
  TRACE_POP
}
/*
equation index: 536
type: SIMPLE_ASSIGN
constantLoad._kI = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (-1.0 + constantLoad.b2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_536(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,536};
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
    tmp2 = -1.0 + data->simulationInfo->realParameter[63];
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
    tmp9 = data->simulationInfo->realParameter[63];
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
    tmp16 = (data->simulationInfo->realParameter[57]) * ((data->simulationInfo->realParameter[63]) * ((tmp3) * (exp(((-data->simulationInfo->realParameter[57])) * (tmp10)))));
  }
  else
  {
    tmp16 = 1.0;
  }
  data->localData[0]->realVars[49] /* constantLoad.kI variable */ = tmp16;
  TRACE_POP
}
/*
equation index: 537
type: SIMPLE_ASSIGN
constantLoad._Q = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_537(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,537};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[72]);
  tmp1 = LessEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[72] + data->simulationInfo->realParameter[66]);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[49] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[39]) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[43]) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[50] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[41] + data->simulationInfo->realParameter[65]);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[49] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[39]) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[43]) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[50] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[41]);
  }
  data->localData[0]->realVars[47] /* constantLoad.Q variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 538
type: SIMPLE_ASSIGN
constantLoad._P = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_538(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,538};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[72]);
  tmp1 = LessEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[72] + data->simulationInfo->realParameter[66]);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[49] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[40]) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[44]) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[50] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[42] + data->simulationInfo->realParameter[64]);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[49] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[40]) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[44]) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[50] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[42]);
  }
  data->localData[0]->realVars[46] /* constantLoad.P variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 539
type: SIMPLE_ASSIGN
eXST1_1._ECOMP0 = eXST1_1.TransducerDelay.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_539(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,539};
  data->simulationInfo->realParameter[79] = data->simulationInfo->realParameter[95];
  TRACE_POP
}
/*
equation index: 540
type: SIMPLE_ASSIGN
eXST1_1._V_REF = eXST1_1.Efd0 / eXST1_1.K_A + eXST1_1.ECOMP0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_540(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,540};
  data->simulationInfo->realParameter[98] = DIVISION_SIM(data->simulationInfo->realParameter[80],data->simulationInfo->realParameter[81],"eXST1_1.K_A",equationIndexes) + data->simulationInfo->realParameter[79];
  TRACE_POP
}
/*
equation index: 541
type: SIMPLE_ASSIGN
eXST1_1._ECOMP = eXST1_1.ECOMP0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_541(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,541};
  data->localData[0]->realVars[56] /* eXST1_1.ECOMP variable */ = data->simulationInfo->realParameter[79];
  TRACE_POP
}
/*
equation index: 542
type: SIMPLE_ASSIGN
eXST1_1._VoltageReference._k = eXST1_1.V_REF
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_542(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,542};
  data->simulationInfo->realParameter[105] = data->simulationInfo->realParameter[98];
  TRACE_POP
}
/*
equation index: 543
type: SIMPLE_ASSIGN
$START._eXST1_1._DiffV._u2 = eXST1_1.TransducerDelay.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_543(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,543};
  data->modelData->realVarsData[54].attribute /* eXST1_1.DiffV.u2 variable */.start = data->simulationInfo->realParameter[95];
    data->localData[0]->realVars[54] /* eXST1_1.DiffV.u2 variable */ = data->modelData->realVarsData[54].attribute /* eXST1_1.DiffV.u2 variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[54].info /* eXST1_1.DiffV.u2 */.name, (modelica_real) data->localData[0]->realVars[54] /* eXST1_1.DiffV.u2 variable */);
  TRACE_POP
}
/*
equation index: 544
type: SIMPLE_ASSIGN
$START._eXST1_1._TransducerDelay._state = eXST1_1.TransducerDelay.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_544(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,544};
  data->modelData->realVarsData[0].attribute /* eXST1_1.TransducerDelay.state STATE(1) */.start = data->simulationInfo->realParameter[95];
    data->localData[0]->realVars[0] /* eXST1_1.TransducerDelay.state STATE(1) */ = data->modelData->realVarsData[0].attribute /* eXST1_1.TransducerDelay.state STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[0].info /* eXST1_1.TransducerDelay.state */.name, (modelica_real) data->localData[0]->realVars[0] /* eXST1_1.TransducerDelay.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 545
type: SIMPLE_ASSIGN
eXST1_1._TransducerDelay._state = eXST1_1.TransducerDelay.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_545(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,545};
  data->localData[0]->realVars[0] /* eXST1_1.TransducerDelay.state STATE(1) */ = data->simulationInfo->realParameter[95];
  TRACE_POP
}
/*
equation index: 546
type: SIMPLE_ASSIGN
eXST1_1._DiffV._u2 = if abs(eXST1_1.TransducerDelay.T) <= 1e-15 then eXST1_1.ECOMP * eXST1_1.TransducerDelay.K else eXST1_1.TransducerDelay.state
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_546(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,546};
  modelica_boolean tmp0;
  tmp0 = LessEq(fabs(data->simulationInfo->realParameter[93]),1e-15);
  data->localData[0]->realVars[54] /* eXST1_1.DiffV.u2 variable */ = (tmp0?(data->localData[0]->realVars[56] /* eXST1_1.ECOMP variable */) * (data->simulationInfo->realParameter[92]):data->localData[0]->realVars[0] /* eXST1_1.TransducerDelay.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 547
type: SIMPLE_ASSIGN
eXST1_1._DiffV._y = eXST1_1.DiffV.k1 * eXST1_1.VoltageReference.k + eXST1_1.DiffV.k2 * eXST1_1.DiffV.u2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_547(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,547};
  data->localData[0]->realVars[55] /* eXST1_1.DiffV.y variable */ = (data->simulationInfo->realParameter[77]) * (data->simulationInfo->realParameter[105]) + (data->simulationInfo->realParameter[78]) * (data->localData[0]->realVars[54] /* eXST1_1.DiffV.u2 variable */);
  TRACE_POP
}
/*
equation index: 548
type: SIMPLE_ASSIGN
eXST1_1._add3_2._y = eXST1_1.add3_2.k1 * const.k + eXST1_1.add3_2.k2 * eXST1_1.DiffV.y + eXST1_1.add3_2.k3 * eXST1_1.Limiters.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_548(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,548};
  data->localData[0]->realVars[64] /* eXST1_1.add3_2.y variable */ = (data->simulationInfo->realParameter[106]) * (data->simulationInfo->realParameter[34]) + (data->simulationInfo->realParameter[107]) * (data->localData[0]->realVars[55] /* eXST1_1.DiffV.y variable */) + (data->simulationInfo->realParameter[108]) * (data->localData[0]->realVars[61] /* eXST1_1.Limiters.y variable */);
  TRACE_POP
}
/*
equation index: 549
type: SIMPLE_ASSIGN
eXST1_1._feedback._y = eXST1_1.add3_2.y - eXST1_1.imDerivativeLag.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_549(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,549};
  data->localData[0]->realVars[65] /* eXST1_1.feedback.y variable */ = data->localData[0]->realVars[64] /* eXST1_1.add3_2.y variable */ - data->localData[0]->realVars[66] /* eXST1_1.imDerivativeLag.y variable */;
  TRACE_POP
}
/*
equation index: 550
type: SIMPLE_ASSIGN
eXST1_1._imLeadLag._u = eXST1_1.feedback.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_550(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,550};
  data->localData[0]->realVars[69] /* eXST1_1.imLeadLag.u variable */ = data->localData[0]->realVars[65] /* eXST1_1.feedback.y variable */;
  TRACE_POP
}
/*
equation index: 551
type: SIMPLE_ASSIGN
eXST1_1._K_a._u = if abs(eXST1_1.imLeadLag.T1 - eXST1_1.imLeadLag.T2) < 1e-15 then eXST1_1.imLeadLag.K * eXST1_1.imLeadLag.u else eXST1_1.imLeadLag.TF.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_551(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,551};
  modelica_boolean tmp0;
  tmp0 = Less(fabs(data->simulationInfo->realParameter[114] - data->simulationInfo->realParameter[115]),1e-15);
  data->localData[0]->realVars[59] /* eXST1_1.K_a.u variable */ = (tmp0?(data->simulationInfo->realParameter[113]) * (data->localData[0]->realVars[69] /* eXST1_1.imLeadLag.u variable */):data->localData[0]->realVars[68] /* eXST1_1.imLeadLag.TF.y variable */);
  TRACE_POP
}
/*
equation index: 552
type: SIMPLE_ASSIGN
eXST1_1._K_a._y = eXST1_1.K_a.k * eXST1_1.K_a.u
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_552(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,552};
  data->localData[0]->realVars[60] /* eXST1_1.K_a.y variable */ = (data->simulationInfo->realParameter[84]) * (data->localData[0]->realVars[59] /* eXST1_1.K_a.u variable */);
  TRACE_POP
}
/*
equation index: 553
type: SIMPLE_ASSIGN
eXST1_1._Vm1._y = if abs(eXST1_1.Vm1.T) <= 1e-15 then eXST1_1.K_a.y * eXST1_1.Vm1.K else eXST1_1.Vm1.state
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_553(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,553};
  modelica_boolean tmp0;
  tmp0 = LessEq(fabs(data->simulationInfo->realParameter[102]),1e-15);
  data->localData[0]->realVars[62] /* eXST1_1.Vm1.y variable */ = (tmp0?(data->localData[0]->realVars[60] /* eXST1_1.K_a.y variable */) * (data->simulationInfo->realParameter[101]):data->localData[0]->realVars[1] /* eXST1_1.Vm1.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 554
type: SIMPLE_ASSIGN
eXST1_1._EFD = eXST1_1.XADIFD + $DER.gENROE.Epq * gENROE.Tpd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_554(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,554};
  data->localData[0]->realVars[57] /* eXST1_1.EFD variable */ = data->localData[0]->realVars[63] /* eXST1_1.XADIFD variable */ + (data->localData[0]->realVars[19] /* der(gENROE.Epq) STATE_DER */) * (data->simulationInfo->realParameter[197]);
  TRACE_POP
}
/*
equation index: 555
type: SIMPLE_ASSIGN
pwLine._is._re = (cos(gENROE.delta) * gENROE.iq - (-sin(gENROE.delta)) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_555(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,555};
  data->localData[0]->realVars[107] /* pwLine.is.re variable */ = ((cos(data->localData[0]->realVars[10] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[95] /* gENROE.iq variable */) - (((-sin(data->localData[0]->realVars[10] /* gENROE.delta STATE(1) */))) * (data->localData[0]->realVars[94] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[157]);
  TRACE_POP
}
/*
equation index: 556
type: SIMPLE_ASSIGN
pwLine._is._im = (sin(gENROE.delta) * gENROE.iq - cos(gENROE.delta) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_556(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,556};
  data->localData[0]->realVars[106] /* pwLine.is.im variable */ = ((sin(data->localData[0]->realVars[10] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[95] /* gENROE.iq variable */) - ((cos(data->localData[0]->realVars[10] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[94] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[157]);
  TRACE_POP
}
/*
equation index: 557
type: SIMPLE_ASSIGN
gENROE._PSId = gENROE.PSIppd - gENROE.Xppd * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_557(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,557};
  data->localData[0]->realVars[84] /* gENROE.PSId variable */ = data->localData[0]->realVars[86] /* gENROE.PSIppd variable */ - ((data->simulationInfo->realParameter[208]) * (data->localData[0]->realVars[94] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 558
type: SIMPLE_ASSIGN
gENROE._uq = gENROE.PSId - gENROE.R_a * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_558(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,558};
  data->localData[0]->realVars[97] /* gENROE.uq variable */ = data->localData[0]->realVars[84] /* gENROE.PSId variable */ - ((data->simulationInfo->realParameter[191]) * (data->localData[0]->realVars[95] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 559
type: SIMPLE_ASSIGN
gENROE._PSIpp = sqrt(gENROE.PSIppd ^ 2.0 + gENROE.PSIppq ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_559(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,559};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[86] /* gENROE.PSIppd variable */;
  tmp1 = data->localData[0]->realVars[87] /* gENROE.PSIppq variable */;
  data->localData[0]->realVars[85] /* gENROE.PSIpp variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 560
type: SIMPLE_ASSIGN
gENROE._PSIq = (-gENROE.PSIppq) - gENROE.Xppq * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_560(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,560};
  data->localData[0]->realVars[88] /* gENROE.PSIq variable */ = (-data->localData[0]->realVars[87] /* gENROE.PSIppq variable */) - ((data->simulationInfo->realParameter[209]) * (data->localData[0]->realVars[95] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 561
type: SIMPLE_ASSIGN
gENROE._ud = (-gENROE.PSIq) - gENROE.R_a * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_561(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,561};
  data->localData[0]->realVars[96] /* gENROE.ud variable */ = (-data->localData[0]->realVars[88] /* gENROE.PSIq variable */) - ((data->simulationInfo->realParameter[191]) * (data->localData[0]->realVars[94] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 562
type: SIMPLE_ASSIGN
gENROE._PSIkq = ((gENROE.Epd + (gENROE.Xpq - gENROE.Xl) * gENROE.iq) * gENROE.K1q + gENROE.Epd + gENROE.iq * (gENROE.Xpq - gENROE.Xq) + OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2) * gENROE.PSIppq * (gENROE.Xq - gENROE.Xl) / (gENROE.Xd - gENROE.Xl) - gENROE.XaqIlq) / gENROE.K1q
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_562(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,562};
  data->localData[0]->realVars[9] /* gENROE.PSIkq STATE(1) */ = DIVISION_SIM((data->localData[0]->realVars[6] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[210] - data->simulationInfo->realParameter[205]) * (data->localData[0]->realVars[95] /* gENROE.iq variable */)) * (data->simulationInfo->realParameter[171]) + data->localData[0]->realVars[6] /* gENROE.Epd STATE(1) */ + (data->localData[0]->realVars[95] /* gENROE.iq variable */) * (data->simulationInfo->realParameter[210] - data->simulationInfo->realParameter[211]) + (omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[85] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[194], data->simulationInfo->realParameter[195], 1.0, 1.2)) * ((data->localData[0]->realVars[87] /* gENROE.PSIppq variable */) * (DIVISION_SIM(data->simulationInfo->realParameter[211] - data->simulationInfo->realParameter[205],data->simulationInfo->realParameter[204] - data->simulationInfo->realParameter[205],"gENROE.Xd - gENROE.Xl",equationIndexes))) - data->localData[0]->realVars[91] /* gENROE.XaqIlq variable */,data->simulationInfo->realParameter[171],"gENROE.K1q",equationIndexes);
  TRACE_POP
}
/*
equation index: 563
type: SIMPLE_ASSIGN
gENROE._PSIkd = ((gENROE.Epq + (gENROE.Xl - gENROE.Xpd) * gENROE.id) * gENROE.K1d + gENROE.Epq + gENROE.id * (gENROE.Xd - gENROE.Xpd) + OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2) * gENROE.PSIppd - eXST1_1.XADIFD) / gENROE.K1d
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_563(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,563};
  data->localData[0]->realVars[8] /* gENROE.PSIkd STATE(1) */ = DIVISION_SIM((data->localData[0]->realVars[7] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[205] - data->simulationInfo->realParameter[206]) * (data->localData[0]->realVars[94] /* gENROE.id variable */)) * (data->simulationInfo->realParameter[170]) + data->localData[0]->realVars[7] /* gENROE.Epq STATE(1) */ + (data->localData[0]->realVars[94] /* gENROE.id variable */) * (data->simulationInfo->realParameter[204] - data->simulationInfo->realParameter[206]) + (omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[85] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[194], data->simulationInfo->realParameter[195], 1.0, 1.2)) * (data->localData[0]->realVars[86] /* gENROE.PSIppd variable */) - data->localData[0]->realVars[63] /* eXST1_1.XADIFD variable */,data->simulationInfo->realParameter[170],"gENROE.K1d",equationIndexes);
  TRACE_POP
}
/*
equation index: 564
type: SIMPLE_ASSIGN
gENCLS._p._ir = ((-sin(gENCLS.delta)) * gENCLS.id - cos(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_564(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,564};
  data->localData[0]->realVars[78] /* gENCLS.p.ir variable */ = (((-sin(data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[74] /* gENCLS.id variable */) - ((cos(data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[75] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[131]);
  TRACE_POP
}
/*
equation index: 565
type: SIMPLE_ASSIGN
gENCLS._p._ii = (cos(gENCLS.delta) * gENCLS.id - sin(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_565(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,565};
  data->localData[0]->realVars[77] /* gENCLS.p.ii variable */ = ((cos(data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[74] /* gENCLS.id variable */) - ((sin(data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[75] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[131]);
  TRACE_POP
}
/*
equation index: 566
type: SIMPLE_ASSIGN
gENCLS._vd = gENCLS.X_d * gENCLS.iq - gENCLS.R_a * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_566(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,566};
  data->localData[0]->realVars[79] /* gENCLS.vd variable */ = (data->simulationInfo->realParameter[140]) * (data->localData[0]->realVars[75] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[137]) * (data->localData[0]->realVars[74] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 567
type: SIMPLE_ASSIGN
gENCLS._vq = gENCLS.eq + (-gENCLS.R_a) * gENCLS.iq - gENCLS.X_d * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_567(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,567};
  data->localData[0]->realVars[80] /* gENCLS.vq variable */ = data->localData[0]->realVars[5] /* gENCLS.eq STATE(1) */ + ((-data->simulationInfo->realParameter[137])) * (data->localData[0]->realVars[75] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[140]) * (data->localData[0]->realVars[74] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 568
type: SIMPLE_ASSIGN
pwLine4._ir._re = (-pwLine1.ir.re) - gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_568(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,568};
  data->localData[0]->realVars[137] /* pwLine4.ir.re variable */ = (-data->localData[0]->realVars[115] /* pwLine1.ir.re variable */) - data->localData[0]->realVars[78] /* gENCLS.p.ir variable */;
  TRACE_POP
}
/*
equation index: 569
type: SIMPLE_ASSIGN
pwLine1._ir._im = (-pwLine4.ir.im) - gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_569(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,569};
  data->localData[0]->realVars[114] /* pwLine1.ir.im variable */ = (-data->localData[0]->realVars[136] /* pwLine4.ir.im variable */) - data->localData[0]->realVars[77] /* gENCLS.p.ii variable */;
  TRACE_POP
}
/*
equation index: 570
type: SIMPLE_ASSIGN
pwLine3._is._im = (-pwLine.ir.im) - pwLine1.is.im - constantLoad.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_570(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,570};
  data->localData[0]->realVars[128] /* pwLine3.is.im variable */ = (-data->localData[0]->realVars[104] /* pwLine.ir.im variable */) - data->localData[0]->realVars[116] /* pwLine1.is.im variable */ - data->localData[0]->realVars[51] /* constantLoad.p.ii variable */;
  TRACE_POP
}
/*
equation index: 571
type: SIMPLE_ASSIGN
pwLine3._is._re = (-pwLine.ir.re) - pwLine1.is.re - constantLoad.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_571(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,571};
  data->localData[0]->realVars[129] /* pwLine3.is.re variable */ = (-data->localData[0]->realVars[105] /* pwLine.ir.re variable */) - data->localData[0]->realVars[117] /* pwLine1.is.re variable */ - data->localData[0]->realVars[52] /* constantLoad.p.ir variable */;
  TRACE_POP
}
/*
equation index: 572
type: SIMPLE_ASSIGN
pwFault._p._ii = (-pwLine3.ir.im) - pwLine4.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_572(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,572};
  data->localData[0]->realVars[98] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[126] /* pwLine3.ir.im variable */) - data->localData[0]->realVars[138] /* pwLine4.is.im variable */;
  TRACE_POP
}
/*
equation index: 573
type: SIMPLE_ASSIGN
pwFault._p._ir = (-pwLine3.ir.re) - pwLine4.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_573(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,573};
  data->localData[0]->realVars[99] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[127] /* pwLine3.ir.re variable */) - data->localData[0]->realVars[139] /* pwLine4.is.re variable */;
  TRACE_POP
}

void residualFunc604(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,604};
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
  for (i=0; i<30; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<30; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[127] /* pwLine3.ir.re variable */ = xloc[0];
  data->localData[0]->realVars[139] /* pwLine4.is.re variable */ = xloc[1];
  data->localData[0]->realVars[126] /* pwLine3.ir.im variable */ = xloc[2];
  data->localData[0]->realVars[138] /* pwLine4.is.im variable */ = xloc[3];
  data->localData[0]->realVars[105] /* pwLine.ir.re variable */ = xloc[4];
  data->localData[0]->realVars[117] /* pwLine1.is.re variable */ = xloc[5];
  data->localData[0]->realVars[104] /* pwLine.ir.im variable */ = xloc[6];
  data->localData[0]->realVars[116] /* pwLine1.is.im variable */ = xloc[7];
  data->localData[0]->realVars[51] /* constantLoad.p.ii variable */ = xloc[8];
  data->localData[0]->realVars[52] /* constantLoad.p.ir variable */ = xloc[9];
  data->localData[0]->realVars[136] /* pwLine4.ir.im variable */ = xloc[10];
  data->localData[0]->realVars[115] /* pwLine1.ir.re variable */ = xloc[11];
  data->localData[0]->realVars[75] /* gENCLS.iq variable */ = xloc[12];
  data->localData[0]->realVars[74] /* gENCLS.id variable */ = xloc[13];
  data->localData[0]->realVars[7] /* gENROE.Epq STATE(1) */ = xloc[14];
  data->localData[0]->realVars[6] /* gENROE.Epd STATE(1) */ = xloc[15];
  data->localData[0]->realVars[87] /* gENROE.PSIppq variable */ = xloc[16];
  data->localData[0]->realVars[86] /* gENROE.PSIppd variable */ = xloc[17];
  data->localData[0]->realVars[95] /* gENROE.iq variable */ = xloc[18];
  data->localData[0]->realVars[94] /* gENROE.id variable */ = xloc[19];
  data->localData[0]->realVars[108] /* pwLine.vs.im variable */ = xloc[20];
  data->localData[0]->realVars[109] /* pwLine.vs.re variable */ = xloc[21];
  data->localData[0]->realVars[119] /* pwLine1.vr.re variable */ = xloc[22];
  data->localData[0]->realVars[118] /* pwLine1.vr.im variable */ = xloc[23];
  data->localData[0]->realVars[63] /* eXST1_1.XADIFD variable */ = xloc[24];
  data->simulationInfo->realParameter[95] = xloc[25];
  data->localData[0]->realVars[130] /* pwLine3.vr.im variable */ = xloc[26];
  data->localData[0]->realVars[120] /* pwLine1.vs.im variable */ = xloc[27];
  data->localData[0]->realVars[121] /* pwLine1.vs.re variable */ = xloc[28];
  data->localData[0]->realVars[131] /* pwLine3.vr.re variable */ = xloc[29];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_534(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_535(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_536(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_537(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_538(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_539(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_540(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_541(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_542(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_543(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_544(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_545(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_546(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_547(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_548(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_549(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_550(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_551(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_552(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_553(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_554(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_555(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_556(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_557(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_558(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_559(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_560(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_561(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_562(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_563(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_564(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_565(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_566(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_567(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_568(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_569(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_570(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_571(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_572(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_573(data, threadData);
  /* body */
  tmp0 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[241]);
  tmp9 = (modelica_boolean)tmp0;
  if(tmp9)
  {
    tmp10 = data->localData[0]->realVars[99] /* pwFault.p.ir variable */;
  }
  else
  {
    tmp1 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[242]);
    tmp7 = (modelica_boolean)(tmp1 && data->simulationInfo->booleanParameter[66]);
    if(tmp7)
    {
      tmp8 = data->localData[0]->realVars[130] /* pwLine3.vr.im variable */;
    }
    else
    {
      tmp2 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[242]);
      tmp5 = (modelica_boolean)tmp2;
      if(tmp5)
      {
        tmp3 = data->simulationInfo->realParameter[239];
        tmp4 = data->simulationInfo->realParameter[240];
        tmp6 = data->localData[0]->realVars[99] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[239]) * (data->localData[0]->realVars[131] /* pwLine3.vr.re variable */) + (data->simulationInfo->realParameter[240]) * (data->localData[0]->realVars[130] /* pwLine3.vr.im variable */),(tmp3 * tmp3) + (tmp4 * tmp4),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp6 = data->localData[0]->realVars[99] /* pwFault.p.ir variable */;
      }
      tmp8 = tmp6;
    }
    tmp10 = tmp8;
  }
  res[0] = tmp10;

  tmp11 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[241]);
  tmp20 = (modelica_boolean)tmp11;
  if(tmp20)
  {
    tmp21 = data->localData[0]->realVars[98] /* pwFault.p.ii variable */;
  }
  else
  {
    tmp12 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[242]);
    tmp18 = (modelica_boolean)(tmp12 && data->simulationInfo->booleanParameter[66]);
    if(tmp18)
    {
      tmp19 = data->localData[0]->realVars[131] /* pwLine3.vr.re variable */ - 1e-10;
    }
    else
    {
      tmp13 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[242]);
      tmp16 = (modelica_boolean)tmp13;
      if(tmp16)
      {
        tmp14 = data->simulationInfo->realParameter[240];
        tmp15 = data->simulationInfo->realParameter[239];
        tmp17 = data->localData[0]->realVars[98] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[239]) * (data->localData[0]->realVars[130] /* pwLine3.vr.im variable */) - ((data->simulationInfo->realParameter[240]) * (data->localData[0]->realVars[131] /* pwLine3.vr.re variable */)),(tmp14 * tmp14) + (tmp15 * tmp15),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
      }
      else
      {
        tmp17 = data->localData[0]->realVars[98] /* pwFault.p.ii variable */;
      }
      tmp19 = tmp17;
    }
    tmp21 = tmp19;
  }
  res[1] = tmp21;

  res[2] = (data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[52] /* constantLoad.p.ir variable */) + ((-data->localData[0]->realVars[121] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[51] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[47] /* constantLoad.Q variable */;

  res[3] = (data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[51] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[121] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[52] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[46] /* constantLoad.P variable */;

  tmp22 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[274]);
  tmp23 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[275]);
  res[4] = ((tmp22 && tmp23)?data->localData[0]->realVars[129] /* pwLine3.is.re variable */:data->localData[0]->realVars[121] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[131] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[273]) * (data->localData[0]->realVars[129] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[270]) - ((data->localData[0]->realVars[121] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[271]))) - ((data->simulationInfo->realParameter[272]) * (data->localData[0]->realVars[128] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[121] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[270]) - ((data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[271]))))));

  tmp24 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[263]);
  tmp25 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[264]);
  res[5] = ((tmp24 && tmp25)?data->localData[0]->realVars[117] /* pwLine1.is.re variable */:data->localData[0]->realVars[121] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[119] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[262]) * (data->localData[0]->realVars[117] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[259]) - ((data->localData[0]->realVars[121] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[260]))) - ((data->simulationInfo->realParameter[261]) * (data->localData[0]->realVars[116] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[121] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[259]) - ((data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[260]))))));

  res[6] = (cos(data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[80] /* gENCLS.vq variable */) + (sin(data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[79] /* gENCLS.vd variable */) - data->localData[0]->realVars[119] /* pwLine1.vr.re variable */;

  res[7] = (sin(data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[80] /* gENCLS.vq variable */) + ((-cos(data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[79] /* gENCLS.vd variable */) - data->localData[0]->realVars[118] /* pwLine1.vr.im variable */;

  tmp26 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[285]);
  tmp27 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[286]);
  res[8] = ((tmp26 && tmp27)?data->localData[0]->realVars[137] /* pwLine4.ir.re variable */:data->localData[0]->realVars[119] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[131] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[284]) * (data->localData[0]->realVars[137] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[118] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[281]) - ((data->localData[0]->realVars[119] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[282]))) - ((data->simulationInfo->realParameter[283]) * (data->localData[0]->realVars[136] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[119] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[281]) - ((data->localData[0]->realVars[118] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[282]))))));

  tmp28 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[285]);
  tmp29 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[286]);
  res[9] = ((tmp28 && tmp29)?data->localData[0]->realVars[136] /* pwLine4.ir.im variable */:data->localData[0]->realVars[118] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[130] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[284]) * (data->localData[0]->realVars[136] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[119] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[281]) - ((data->localData[0]->realVars[118] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[282]))) + (data->simulationInfo->realParameter[283]) * (data->localData[0]->realVars[137] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[118] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[281]) - ((data->localData[0]->realVars[119] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[282])))));

  tmp30 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[263]);
  tmp31 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[264]);
  res[10] = ((tmp30 && tmp31)?data->localData[0]->realVars[115] /* pwLine1.ir.re variable */:data->localData[0]->realVars[119] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[121] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[262]) * (data->localData[0]->realVars[115] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[118] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[259]) - ((data->localData[0]->realVars[119] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[260]))) - ((data->simulationInfo->realParameter[261]) * (data->localData[0]->realVars[114] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[119] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[259]) - ((data->localData[0]->realVars[118] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[260]))))));

  tmp32 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[263]);
  tmp33 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[264]);
  res[11] = ((tmp32 && tmp33)?data->localData[0]->realVars[116] /* pwLine1.is.im variable */:data->localData[0]->realVars[120] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[118] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[262]) * (data->localData[0]->realVars[116] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[121] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[259]) - ((data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[260]))) + (data->simulationInfo->realParameter[261]) * (data->localData[0]->realVars[117] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[259]) - ((data->localData[0]->realVars[121] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[260])))));

  res[12] = (sin(data->localData[0]->realVars[10] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[97] /* gENROE.uq variable */) + ((-cos(data->localData[0]->realVars[10] /* gENROE.delta STATE(1) */))) * (data->localData[0]->realVars[96] /* gENROE.ud variable */) - data->localData[0]->realVars[108] /* pwLine.vs.im variable */;

  res[13] = (cos(data->localData[0]->realVars[10] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[97] /* gENROE.uq variable */) + (sin(data->localData[0]->realVars[10] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[96] /* gENROE.ud variable */) - data->localData[0]->realVars[109] /* pwLine.vs.re variable */;

  tmp34 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[252]);
  tmp35 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[253]);
  res[14] = ((tmp34 && tmp35)?data->localData[0]->realVars[107] /* pwLine.is.re variable */:data->localData[0]->realVars[109] /* pwLine.vs.re variable */ - data->localData[0]->realVars[121] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[251]) * (data->localData[0]->realVars[107] /* pwLine.is.re variable */ + (data->localData[0]->realVars[108] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[248]) - ((data->localData[0]->realVars[109] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[249]))) - ((data->simulationInfo->realParameter[250]) * (data->localData[0]->realVars[106] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[109] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[248]) - ((data->localData[0]->realVars[108] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[249]))))));

  tmp36 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[252]);
  tmp37 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[253]);
  res[15] = ((tmp36 && tmp37)?data->localData[0]->realVars[106] /* pwLine.is.im variable */:data->localData[0]->realVars[108] /* pwLine.vs.im variable */ - data->localData[0]->realVars[120] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[251]) * (data->localData[0]->realVars[106] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[109] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[248]) - ((data->localData[0]->realVars[108] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[249]))) + (data->simulationInfo->realParameter[250]) * (data->localData[0]->realVars[107] /* pwLine.is.re variable */ + (data->localData[0]->realVars[108] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[248]) - ((data->localData[0]->realVars[109] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[249])))));

  tmp38 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[263]);
  tmp39 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[264]);
  res[16] = ((tmp38 && tmp39)?data->localData[0]->realVars[114] /* pwLine1.ir.im variable */:data->localData[0]->realVars[118] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[120] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[262]) * (data->localData[0]->realVars[114] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[119] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[259]) - ((data->localData[0]->realVars[118] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[260]))) + (data->simulationInfo->realParameter[261]) * (data->localData[0]->realVars[115] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[118] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[259]) - ((data->localData[0]->realVars[119] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[260])))));

  tmp40 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[285]);
  tmp41 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[286]);
  res[17] = ((tmp40 && tmp41)?data->localData[0]->realVars[139] /* pwLine4.is.re variable */:data->localData[0]->realVars[131] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[119] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[284]) * (data->localData[0]->realVars[139] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[130] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[281]) - ((data->localData[0]->realVars[131] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[282]))) - ((data->simulationInfo->realParameter[283]) * (data->localData[0]->realVars[138] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[131] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[281]) - ((data->localData[0]->realVars[130] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[282]))))));

  tmp42 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[285]);
  tmp43 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[286]);
  res[18] = ((tmp42 && tmp43)?data->localData[0]->realVars[138] /* pwLine4.is.im variable */:data->localData[0]->realVars[130] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[118] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[284]) * (data->localData[0]->realVars[138] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[131] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[281]) - ((data->localData[0]->realVars[130] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[282]))) + (data->simulationInfo->realParameter[283]) * (data->localData[0]->realVars[139] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[130] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[281]) - ((data->localData[0]->realVars[131] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[282])))));

  tmp44 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[274]);
  tmp45 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[275]);
  res[19] = ((tmp44 && tmp45)?data->localData[0]->realVars[127] /* pwLine3.ir.re variable */:data->localData[0]->realVars[131] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[121] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[273]) * (data->localData[0]->realVars[127] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[130] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[270]) - ((data->localData[0]->realVars[131] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[271]))) - ((data->simulationInfo->realParameter[272]) * (data->localData[0]->realVars[126] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[131] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[270]) - ((data->localData[0]->realVars[130] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[271]))))));

  tmp46 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[274]);
  tmp47 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[275]);
  res[20] = ((tmp46 && tmp47)?data->localData[0]->realVars[126] /* pwLine3.ir.im variable */:data->localData[0]->realVars[130] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[120] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[273]) * (data->localData[0]->realVars[126] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[131] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[270]) - ((data->localData[0]->realVars[130] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[271]))) + (data->simulationInfo->realParameter[272]) * (data->localData[0]->realVars[127] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[130] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[270]) - ((data->localData[0]->realVars[131] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[271])))));

  tmp48 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[274]);
  tmp49 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[275]);
  res[21] = ((tmp48 && tmp49)?data->localData[0]->realVars[128] /* pwLine3.is.im variable */:data->localData[0]->realVars[120] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[130] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[273]) * (data->localData[0]->realVars[128] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[121] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[270]) - ((data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[271]))) + (data->simulationInfo->realParameter[272]) * (data->localData[0]->realVars[129] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[270]) - ((data->localData[0]->realVars[121] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[271])))));

  tmp50 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[252]);
  tmp51 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[253]);
  res[22] = ((tmp50 && tmp51)?data->localData[0]->realVars[105] /* pwLine.ir.re variable */:data->localData[0]->realVars[121] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[109] /* pwLine.vs.re variable */ - ((data->simulationInfo->realParameter[251]) * (data->localData[0]->realVars[105] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[248]) - ((data->localData[0]->realVars[121] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[249]))) - ((data->simulationInfo->realParameter[250]) * (data->localData[0]->realVars[104] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[121] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[248]) - ((data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[249]))))));

  tmp52 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[252]);
  tmp53 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[253]);
  res[23] = ((tmp52 && tmp53)?data->localData[0]->realVars[104] /* pwLine.ir.im variable */:data->localData[0]->realVars[120] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[108] /* pwLine.vs.im variable */ - ((data->simulationInfo->realParameter[251]) * (data->localData[0]->realVars[104] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[121] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[248]) - ((data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[249]))) + (data->simulationInfo->realParameter[250]) * (data->localData[0]->realVars[105] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[248]) - ((data->localData[0]->realVars[121] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[249])))));

  tmp54 = data->localData[0]->realVars[109] /* pwLine.vs.re variable */;
  tmp55 = data->localData[0]->realVars[108] /* pwLine.vs.im variable */;
  res[24] = sqrt((tmp54 * tmp54) + (tmp55 * tmp55)) - data->localData[0]->realVars[56] /* eXST1_1.ECOMP variable */;

  tmp56 = Greater(data->localData[0]->realVars[57] /* eXST1_1.EFD variable */,(data->localData[0]->realVars[56] /* eXST1_1.ECOMP variable */) * (data->simulationInfo->realParameter[99]) - ((data->simulationInfo->realParameter[82]) * (data->localData[0]->realVars[63] /* eXST1_1.XADIFD variable */)));
  tmp58 = (modelica_boolean)tmp56;
  if(tmp58)
  {
    tmp59 = (data->localData[0]->realVars[56] /* eXST1_1.ECOMP variable */) * (data->simulationInfo->realParameter[99]) - ((data->simulationInfo->realParameter[82]) * (data->localData[0]->realVars[63] /* eXST1_1.XADIFD variable */));
  }
  else
  {
    tmp57 = Less(data->localData[0]->realVars[57] /* eXST1_1.EFD variable */,(data->localData[0]->realVars[56] /* eXST1_1.ECOMP variable */) * (data->simulationInfo->realParameter[100]) - ((data->simulationInfo->realParameter[82]) * (data->localData[0]->realVars[63] /* eXST1_1.XADIFD variable */)));
    tmp59 = (tmp57?(data->localData[0]->realVars[56] /* eXST1_1.ECOMP variable */) * (data->simulationInfo->realParameter[100]) - ((data->simulationInfo->realParameter[82]) * (data->localData[0]->realVars[63] /* eXST1_1.XADIFD variable */)):data->localData[0]->realVars[62] /* eXST1_1.Vm1.y variable */);
  }
  res[25] = tmp59 - data->localData[0]->realVars[57] /* eXST1_1.EFD variable */;

  res[26] = (data->localData[0]->realVars[8] /* gENROE.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[176]) + (data->localData[0]->realVars[7] /* gENROE.Epq STATE(1) */) * (data->simulationInfo->realParameter[174]) - data->localData[0]->realVars[86] /* gENROE.PSIppd variable */;

  res[27] = data->localData[0]->realVars[7] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[205] - data->simulationInfo->realParameter[206]) * (data->localData[0]->realVars[94] /* gENROE.id variable */) + (-data->localData[0]->realVars[8] /* gENROE.PSIkd STATE(1) */) - ((data->localData[0]->realVars[20] /* der(gENROE.PSIkd) STATE_DER */) * (data->simulationInfo->realParameter[198]));

  res[28] = data->localData[0]->realVars[87] /* gENROE.PSIppq variable */ - ((data->localData[0]->realVars[6] /* gENROE.Epd STATE(1) */) * (data->simulationInfo->realParameter[175])) - ((data->localData[0]->realVars[9] /* gENROE.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[177]));

  res[29] = data->localData[0]->realVars[6] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[210] - data->simulationInfo->realParameter[205]) * (data->localData[0]->realVars[95] /* gENROE.iq variable */) + (-data->localData[0]->realVars[9] /* gENROE.PSIkq STATE(1) */) - ((data->localData[0]->realVars[21] /* der(gENROE.PSIkq) STATE_DER */) * (data->simulationInfo->realParameter[199]));
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS604(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+30] = {0,3,3,3,3,4,4,4,4,4,4,4,4,6,6,2,2,6,6,6,6,5,5,7,7,3,2,8,11,11,8};
  const int rowIndex[151] = {0,19,20,0,17,18,1,19,20,1,17,18,4,21,22,23,4,5,11,21,4,21,22,23,4,5,11,21,2,3,4,21,2,3,4,21,8,9,10,16,8,9,10,16,6,7,8,9,10,16,6,7,8,9,10,16,26,27,28,29,12,13,26,27,28,29,12,13,26,27,28,29,12,13,14,15,28,29,12,13,14,15,26,27,12,14,15,23,24,13,14,15,22,24,5,6,8,9,10,16,17,7,8,9,10,11,16,18,25,26,27,24,25,0,1,9,17,18,19,20,21,2,3,4,5,11,15,16,20,21,22,23,2,3,4,5,10,11,14,19,21,22,23,0,1,4,8,17,18,19,20};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern.leadindex = (unsigned int*) malloc((30+1)*sizeof(int));
  inSysData->sparsePattern.index = (unsigned int*) malloc(151*sizeof(int));
  inSysData->sparsePattern.numberOfNoneZeros = 151;
  inSysData->sparsePattern.colorCols = (unsigned int*) malloc(30*sizeof(int));
  inSysData->sparsePattern.maxColors = 10;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern.leadindex, colPtrIndex, (30+1)*sizeof(int));
  
  for(i=2;i<30+1;++i)
    inSysData->sparsePattern.leadindex[i] += inSysData->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern.index, rowIndex, 151*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern.colorCols[29] = 1;
  inSysData->sparsePattern.colorCols[28] = 2;
  inSysData->sparsePattern.colorCols[27] = 3;
  inSysData->sparsePattern.colorCols[21] = 4;
  inSysData->sparsePattern.colorCols[26] = 4;
  inSysData->sparsePattern.colorCols[9] = 5;
  inSysData->sparsePattern.colorCols[20] = 5;
  inSysData->sparsePattern.colorCols[23] = 5;
  inSysData->sparsePattern.colorCols[8] = 6;
  inSysData->sparsePattern.colorCols[19] = 6;
  inSysData->sparsePattern.colorCols[22] = 6;
  inSysData->sparsePattern.colorCols[7] = 7;
  inSysData->sparsePattern.colorCols[13] = 7;
  inSysData->sparsePattern.colorCols[18] = 7;
  inSysData->sparsePattern.colorCols[24] = 7;
  inSysData->sparsePattern.colorCols[6] = 8;
  inSysData->sparsePattern.colorCols[12] = 8;
  inSysData->sparsePattern.colorCols[17] = 8;
  inSysData->sparsePattern.colorCols[1] = 9;
  inSysData->sparsePattern.colorCols[2] = 9;
  inSysData->sparsePattern.colorCols[5] = 9;
  inSysData->sparsePattern.colorCols[11] = 9;
  inSysData->sparsePattern.colorCols[16] = 9;
  inSysData->sparsePattern.colorCols[0] = 10;
  inSysData->sparsePattern.colorCols[3] = 10;
  inSysData->sparsePattern.colorCols[4] = 10;
  inSysData->sparsePattern.colorCols[10] = 10;
  inSysData->sparsePattern.colorCols[14] = 10;
  inSysData->sparsePattern.colorCols[15] = 10;
  inSysData->sparsePattern.colorCols[25] = 10;
}
void initializeStaticDataNLS604(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for pwLine3.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[127].attribute /* pwLine3.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[127].attribute /* pwLine3.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[127].attribute /* pwLine3.ir.re */.max;
  /* static nls data for pwLine4.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[139].attribute /* pwLine4.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[139].attribute /* pwLine4.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[139].attribute /* pwLine4.is.re */.max;
  /* static nls data for pwLine3.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[126].attribute /* pwLine3.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[126].attribute /* pwLine3.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[126].attribute /* pwLine3.ir.im */.max;
  /* static nls data for pwLine4.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[138].attribute /* pwLine4.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[138].attribute /* pwLine4.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[138].attribute /* pwLine4.is.im */.max;
  /* static nls data for pwLine.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[105].attribute /* pwLine.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[105].attribute /* pwLine.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[105].attribute /* pwLine.ir.re */.max;
  /* static nls data for pwLine1.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[117].attribute /* pwLine1.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[117].attribute /* pwLine1.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[117].attribute /* pwLine1.is.re */.max;
  /* static nls data for pwLine.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[104].attribute /* pwLine.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[104].attribute /* pwLine.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[104].attribute /* pwLine.ir.im */.max;
  /* static nls data for pwLine1.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[116].attribute /* pwLine1.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[116].attribute /* pwLine1.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[116].attribute /* pwLine1.is.im */.max;
  /* static nls data for constantLoad.p.ii */
  sysData->nominal[i] = data->modelData->realVarsData[51].attribute /* constantLoad.p.ii */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[51].attribute /* constantLoad.p.ii */.min;
  sysData->max[i++]   = data->modelData->realVarsData[51].attribute /* constantLoad.p.ii */.max;
  /* static nls data for constantLoad.p.ir */
  sysData->nominal[i] = data->modelData->realVarsData[52].attribute /* constantLoad.p.ir */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[52].attribute /* constantLoad.p.ir */.min;
  sysData->max[i++]   = data->modelData->realVarsData[52].attribute /* constantLoad.p.ir */.max;
  /* static nls data for pwLine4.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[136].attribute /* pwLine4.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[136].attribute /* pwLine4.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[136].attribute /* pwLine4.ir.im */.max;
  /* static nls data for pwLine1.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[115].attribute /* pwLine1.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[115].attribute /* pwLine1.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[115].attribute /* pwLine1.ir.re */.max;
  /* static nls data for gENCLS.iq */
  sysData->nominal[i] = data->modelData->realVarsData[75].attribute /* gENCLS.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[75].attribute /* gENCLS.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[75].attribute /* gENCLS.iq */.max;
  /* static nls data for gENCLS.id */
  sysData->nominal[i] = data->modelData->realVarsData[74].attribute /* gENCLS.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[74].attribute /* gENCLS.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[74].attribute /* gENCLS.id */.max;
  /* static nls data for gENROE.Epq */
  sysData->nominal[i] = data->modelData->realVarsData[7].attribute /* gENROE.Epq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[7].attribute /* gENROE.Epq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[7].attribute /* gENROE.Epq */.max;
  /* static nls data for gENROE.Epd */
  sysData->nominal[i] = data->modelData->realVarsData[6].attribute /* gENROE.Epd */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[6].attribute /* gENROE.Epd */.min;
  sysData->max[i++]   = data->modelData->realVarsData[6].attribute /* gENROE.Epd */.max;
  /* static nls data for gENROE.PSIppq */
  sysData->nominal[i] = data->modelData->realVarsData[87].attribute /* gENROE.PSIppq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[87].attribute /* gENROE.PSIppq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[87].attribute /* gENROE.PSIppq */.max;
  /* static nls data for gENROE.PSIppd */
  sysData->nominal[i] = data->modelData->realVarsData[86].attribute /* gENROE.PSIppd */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[86].attribute /* gENROE.PSIppd */.min;
  sysData->max[i++]   = data->modelData->realVarsData[86].attribute /* gENROE.PSIppd */.max;
  /* static nls data for gENROE.iq */
  sysData->nominal[i] = data->modelData->realVarsData[95].attribute /* gENROE.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[95].attribute /* gENROE.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[95].attribute /* gENROE.iq */.max;
  /* static nls data for gENROE.id */
  sysData->nominal[i] = data->modelData->realVarsData[94].attribute /* gENROE.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[94].attribute /* gENROE.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[94].attribute /* gENROE.id */.max;
  /* static nls data for pwLine.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[108].attribute /* pwLine.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[108].attribute /* pwLine.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[108].attribute /* pwLine.vs.im */.max;
  /* static nls data for pwLine.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[109].attribute /* pwLine.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[109].attribute /* pwLine.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[109].attribute /* pwLine.vs.re */.max;
  /* static nls data for pwLine1.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[119].attribute /* pwLine1.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[119].attribute /* pwLine1.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[119].attribute /* pwLine1.vr.re */.max;
  /* static nls data for pwLine1.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[118].attribute /* pwLine1.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[118].attribute /* pwLine1.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[118].attribute /* pwLine1.vr.im */.max;
  /* static nls data for eXST1_1.XADIFD */
  sysData->nominal[i] = data->modelData->realVarsData[63].attribute /* eXST1_1.XADIFD */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[63].attribute /* eXST1_1.XADIFD */.min;
  sysData->max[i++]   = data->modelData->realVarsData[63].attribute /* eXST1_1.XADIFD */.max;
  /* static nls data for eXST1_1.TransducerDelay.y_start */
  sysData->nominal[i] = data->modelData->realParameterData[95].attribute /* eXST1_1.TransducerDelay.y_start */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[95].attribute /* eXST1_1.TransducerDelay.y_start */.min;
  sysData->max[i++]   = data->modelData->realParameterData[95].attribute /* eXST1_1.TransducerDelay.y_start */.max;
  /* static nls data for pwLine3.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[130].attribute /* pwLine3.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[130].attribute /* pwLine3.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[130].attribute /* pwLine3.vr.im */.max;
  /* static nls data for pwLine1.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[120].attribute /* pwLine1.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[120].attribute /* pwLine1.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[120].attribute /* pwLine1.vs.im */.max;
  /* static nls data for pwLine1.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[121].attribute /* pwLine1.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[121].attribute /* pwLine1.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[121].attribute /* pwLine1.vs.re */.max;
  /* static nls data for pwLine3.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[131].attribute /* pwLine3.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[131].attribute /* pwLine3.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[131].attribute /* pwLine3.vr.re */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS604(sysData);
}

void getIterationVarsNLS604(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[127] /* pwLine3.ir.re variable */;
  array[1] = data->localData[0]->realVars[139] /* pwLine4.is.re variable */;
  array[2] = data->localData[0]->realVars[126] /* pwLine3.ir.im variable */;
  array[3] = data->localData[0]->realVars[138] /* pwLine4.is.im variable */;
  array[4] = data->localData[0]->realVars[105] /* pwLine.ir.re variable */;
  array[5] = data->localData[0]->realVars[117] /* pwLine1.is.re variable */;
  array[6] = data->localData[0]->realVars[104] /* pwLine.ir.im variable */;
  array[7] = data->localData[0]->realVars[116] /* pwLine1.is.im variable */;
  array[8] = data->localData[0]->realVars[51] /* constantLoad.p.ii variable */;
  array[9] = data->localData[0]->realVars[52] /* constantLoad.p.ir variable */;
  array[10] = data->localData[0]->realVars[136] /* pwLine4.ir.im variable */;
  array[11] = data->localData[0]->realVars[115] /* pwLine1.ir.re variable */;
  array[12] = data->localData[0]->realVars[75] /* gENCLS.iq variable */;
  array[13] = data->localData[0]->realVars[74] /* gENCLS.id variable */;
  array[14] = data->localData[0]->realVars[7] /* gENROE.Epq STATE(1) */;
  array[15] = data->localData[0]->realVars[6] /* gENROE.Epd STATE(1) */;
  array[16] = data->localData[0]->realVars[87] /* gENROE.PSIppq variable */;
  array[17] = data->localData[0]->realVars[86] /* gENROE.PSIppd variable */;
  array[18] = data->localData[0]->realVars[95] /* gENROE.iq variable */;
  array[19] = data->localData[0]->realVars[94] /* gENROE.id variable */;
  array[20] = data->localData[0]->realVars[108] /* pwLine.vs.im variable */;
  array[21] = data->localData[0]->realVars[109] /* pwLine.vs.re variable */;
  array[22] = data->localData[0]->realVars[119] /* pwLine1.vr.re variable */;
  array[23] = data->localData[0]->realVars[118] /* pwLine1.vr.im variable */;
  array[24] = data->localData[0]->realVars[63] /* eXST1_1.XADIFD variable */;
  array[25] = data->simulationInfo->realParameter[95];
  array[26] = data->localData[0]->realVars[130] /* pwLine3.vr.im variable */;
  array[27] = data->localData[0]->realVars[120] /* pwLine1.vs.im variable */;
  array[28] = data->localData[0]->realVars[121] /* pwLine1.vs.re variable */;
  array[29] = data->localData[0]->realVars[131] /* pwLine3.vr.re variable */;
}


/* inner equations */

/*
equation index: 26
type: SIMPLE_ASSIGN
constantLoad._v = sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_26(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,26};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[121] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[120] /* pwLine1.vs.im variable */;
  data->localData[0]->realVars[53] /* constantLoad.v variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 27
type: SIMPLE_ASSIGN
constantLoad._kP = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a0 + constantLoad.a1 * cos(constantLoad.v * constantLoad.wp) + constantLoad.b1 * sin(constantLoad.v * constantLoad.wp) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_27(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,27};
  modelica_boolean tmp0;
  tmp0 = Less(data->localData[0]->realVars[53] /* constantLoad.v variable */,data->simulationInfo->realParameter[36]);
  data->localData[0]->realVars[50] /* constantLoad.kP variable */ = (tmp0?data->simulationInfo->realParameter[55] + (data->simulationInfo->realParameter[56]) * (cos((data->localData[0]->realVars[53] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[76]))) + (data->simulationInfo->realParameter[62]) * (sin((data->localData[0]->realVars[53] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[76]))):1.0);
  TRACE_POP
}
/*
equation index: 28
type: SIMPLE_ASSIGN
constantLoad._kI = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (-1.0 + constantLoad.b2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_28(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,28};
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
    tmp2 = -1.0 + data->simulationInfo->realParameter[63];
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
    tmp9 = data->simulationInfo->realParameter[63];
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
    tmp16 = (data->simulationInfo->realParameter[57]) * ((data->simulationInfo->realParameter[63]) * ((tmp3) * (exp(((-data->simulationInfo->realParameter[57])) * (tmp10)))));
  }
  else
  {
    tmp16 = 1.0;
  }
  data->localData[0]->realVars[49] /* constantLoad.kI variable */ = tmp16;
  TRACE_POP
}
/*
equation index: 29
type: SIMPLE_ASSIGN
constantLoad._Q = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_29(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,29};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[72]);
  tmp1 = LessEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[72] + data->simulationInfo->realParameter[66]);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[49] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[39]) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[43]) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[50] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[41] + data->simulationInfo->realParameter[65]);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[49] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[39]) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[43]) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[50] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[41]);
  }
  data->localData[0]->realVars[47] /* constantLoad.Q variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 30
type: SIMPLE_ASSIGN
constantLoad._P = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_30(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,30};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[72]);
  tmp1 = LessEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[72] + data->simulationInfo->realParameter[66]);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[49] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[40]) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[44]) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[50] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[42] + data->simulationInfo->realParameter[64]);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[49] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[40]) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[44]) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[50] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[42]);
  }
  data->localData[0]->realVars[46] /* constantLoad.P variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 31
type: SIMPLE_ASSIGN
eXST1_1._ECOMP0 = eXST1_1.TransducerDelay.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_31(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,31};
  data->simulationInfo->realParameter[79] = data->simulationInfo->realParameter[95];
  TRACE_POP
}
/*
equation index: 32
type: SIMPLE_ASSIGN
eXST1_1._V_REF = eXST1_1.Efd0 / eXST1_1.K_A + eXST1_1.ECOMP0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_32(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,32};
  data->simulationInfo->realParameter[98] = DIVISION_SIM(data->simulationInfo->realParameter[80],data->simulationInfo->realParameter[81],"eXST1_1.K_A",equationIndexes) + data->simulationInfo->realParameter[79];
  TRACE_POP
}
/*
equation index: 33
type: SIMPLE_ASSIGN
eXST1_1._ECOMP = eXST1_1.ECOMP0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_33(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,33};
  data->localData[0]->realVars[56] /* eXST1_1.ECOMP variable */ = data->simulationInfo->realParameter[79];
  TRACE_POP
}
/*
equation index: 34
type: SIMPLE_ASSIGN
eXST1_1._VoltageReference._k = eXST1_1.V_REF
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_34(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,34};
  data->simulationInfo->realParameter[105] = data->simulationInfo->realParameter[98];
  TRACE_POP
}
/*
equation index: 35
type: SIMPLE_ASSIGN
$START._eXST1_1._DiffV._u2 = eXST1_1.TransducerDelay.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_35(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,35};
  data->modelData->realVarsData[54].attribute /* eXST1_1.DiffV.u2 variable */.start = data->simulationInfo->realParameter[95];
    data->localData[0]->realVars[54] /* eXST1_1.DiffV.u2 variable */ = data->modelData->realVarsData[54].attribute /* eXST1_1.DiffV.u2 variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[54].info /* eXST1_1.DiffV.u2 */.name, (modelica_real) data->localData[0]->realVars[54] /* eXST1_1.DiffV.u2 variable */);
  TRACE_POP
}
/*
equation index: 36
type: SIMPLE_ASSIGN
$START._eXST1_1._TransducerDelay._state = eXST1_1.TransducerDelay.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_36(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,36};
  data->modelData->realVarsData[0].attribute /* eXST1_1.TransducerDelay.state STATE(1) */.start = data->simulationInfo->realParameter[95];
    data->localData[0]->realVars[0] /* eXST1_1.TransducerDelay.state STATE(1) */ = data->modelData->realVarsData[0].attribute /* eXST1_1.TransducerDelay.state STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[0].info /* eXST1_1.TransducerDelay.state */.name, (modelica_real) data->localData[0]->realVars[0] /* eXST1_1.TransducerDelay.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 37
type: SIMPLE_ASSIGN
eXST1_1._TransducerDelay._state = eXST1_1.TransducerDelay.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_37(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,37};
  data->localData[0]->realVars[0] /* eXST1_1.TransducerDelay.state STATE(1) */ = data->simulationInfo->realParameter[95];
  TRACE_POP
}
/*
equation index: 38
type: SIMPLE_ASSIGN
eXST1_1._DiffV._u2 = if abs(eXST1_1.TransducerDelay.T) <= 1e-15 then eXST1_1.ECOMP * eXST1_1.TransducerDelay.K else eXST1_1.TransducerDelay.state
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_38(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,38};
  modelica_boolean tmp0;
  tmp0 = LessEq(fabs(data->simulationInfo->realParameter[93]),1e-15);
  data->localData[0]->realVars[54] /* eXST1_1.DiffV.u2 variable */ = (tmp0?(data->localData[0]->realVars[56] /* eXST1_1.ECOMP variable */) * (data->simulationInfo->realParameter[92]):data->localData[0]->realVars[0] /* eXST1_1.TransducerDelay.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 39
type: SIMPLE_ASSIGN
eXST1_1._DiffV._y = eXST1_1.DiffV.k1 * eXST1_1.VoltageReference.k + eXST1_1.DiffV.k2 * eXST1_1.DiffV.u2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_39(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,39};
  data->localData[0]->realVars[55] /* eXST1_1.DiffV.y variable */ = (data->simulationInfo->realParameter[77]) * (data->simulationInfo->realParameter[105]) + (data->simulationInfo->realParameter[78]) * (data->localData[0]->realVars[54] /* eXST1_1.DiffV.u2 variable */);
  TRACE_POP
}
/*
equation index: 40
type: SIMPLE_ASSIGN
eXST1_1._add3_2._y = eXST1_1.add3_2.k1 * const.k + eXST1_1.add3_2.k2 * eXST1_1.DiffV.y + eXST1_1.add3_2.k3 * eXST1_1.Limiters.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_40(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,40};
  data->localData[0]->realVars[64] /* eXST1_1.add3_2.y variable */ = (data->simulationInfo->realParameter[106]) * (data->simulationInfo->realParameter[34]) + (data->simulationInfo->realParameter[107]) * (data->localData[0]->realVars[55] /* eXST1_1.DiffV.y variable */) + (data->simulationInfo->realParameter[108]) * (data->localData[0]->realVars[61] /* eXST1_1.Limiters.y variable */);
  TRACE_POP
}
/*
equation index: 41
type: SIMPLE_ASSIGN
eXST1_1._feedback._y = eXST1_1.add3_2.y - eXST1_1.imDerivativeLag.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_41(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,41};
  data->localData[0]->realVars[65] /* eXST1_1.feedback.y variable */ = data->localData[0]->realVars[64] /* eXST1_1.add3_2.y variable */ - data->localData[0]->realVars[66] /* eXST1_1.imDerivativeLag.y variable */;
  TRACE_POP
}
/*
equation index: 42
type: SIMPLE_ASSIGN
eXST1_1._imLeadLag._u = homotopy(smooth(0, if eXST1_1.feedback.y > eXST1_1.limiter.uMax then eXST1_1.limiter.uMax else if eXST1_1.feedback.y < eXST1_1.limiter.uMin then eXST1_1.limiter.uMin else eXST1_1.feedback.y), eXST1_1.feedback.y)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_42(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,42};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  tmp0 = Greater(data->localData[0]->realVars[65] /* eXST1_1.feedback.y variable */,data->simulationInfo->realParameter[129]);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->simulationInfo->realParameter[129];
  }
  else
  {
    tmp1 = Less(data->localData[0]->realVars[65] /* eXST1_1.feedback.y variable */,data->simulationInfo->realParameter[130]);
    tmp3 = (tmp1?data->simulationInfo->realParameter[130]:data->localData[0]->realVars[65] /* eXST1_1.feedback.y variable */);
  }
  data->localData[0]->realVars[69] /* eXST1_1.imLeadLag.u variable */ = homotopy(tmp3, data->localData[0]->realVars[65] /* eXST1_1.feedback.y variable */);
  TRACE_POP
}
/*
equation index: 43
type: SIMPLE_ASSIGN
eXST1_1._K_a._u = if abs(eXST1_1.imLeadLag.T1 - eXST1_1.imLeadLag.T2) < 1e-15 then eXST1_1.imLeadLag.K * eXST1_1.imLeadLag.u else eXST1_1.imLeadLag.TF.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_43(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,43};
  modelica_boolean tmp0;
  tmp0 = Less(fabs(data->simulationInfo->realParameter[114] - data->simulationInfo->realParameter[115]),1e-15);
  data->localData[0]->realVars[59] /* eXST1_1.K_a.u variable */ = (tmp0?(data->simulationInfo->realParameter[113]) * (data->localData[0]->realVars[69] /* eXST1_1.imLeadLag.u variable */):data->localData[0]->realVars[68] /* eXST1_1.imLeadLag.TF.y variable */);
  TRACE_POP
}
/*
equation index: 44
type: SIMPLE_ASSIGN
eXST1_1._K_a._y = eXST1_1.K_a.k * eXST1_1.K_a.u
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_44(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,44};
  data->localData[0]->realVars[60] /* eXST1_1.K_a.y variable */ = (data->simulationInfo->realParameter[84]) * (data->localData[0]->realVars[59] /* eXST1_1.K_a.u variable */);
  TRACE_POP
}
/*
equation index: 45
type: SIMPLE_ASSIGN
eXST1_1._Vm1._y = if abs(eXST1_1.Vm1.T) <= 1e-15 then eXST1_1.K_a.y * eXST1_1.Vm1.K else eXST1_1.Vm1.state
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_45(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,45};
  modelica_boolean tmp0;
  tmp0 = LessEq(fabs(data->simulationInfo->realParameter[102]),1e-15);
  data->localData[0]->realVars[62] /* eXST1_1.Vm1.y variable */ = (tmp0?(data->localData[0]->realVars[60] /* eXST1_1.K_a.y variable */) * (data->simulationInfo->realParameter[101]):data->localData[0]->realVars[1] /* eXST1_1.Vm1.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 46
type: SIMPLE_ASSIGN
eXST1_1._EFD = eXST1_1.XADIFD + $DER.gENROE.Epq * gENROE.Tpd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_46(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,46};
  data->localData[0]->realVars[57] /* eXST1_1.EFD variable */ = data->localData[0]->realVars[63] /* eXST1_1.XADIFD variable */ + (data->localData[0]->realVars[19] /* der(gENROE.Epq) STATE_DER */) * (data->simulationInfo->realParameter[197]);
  TRACE_POP
}
/*
equation index: 47
type: SIMPLE_ASSIGN
pwLine._is._re = (cos(gENROE.delta) * gENROE.iq - (-sin(gENROE.delta)) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_47(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,47};
  data->localData[0]->realVars[107] /* pwLine.is.re variable */ = ((cos(data->localData[0]->realVars[10] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[95] /* gENROE.iq variable */) - (((-sin(data->localData[0]->realVars[10] /* gENROE.delta STATE(1) */))) * (data->localData[0]->realVars[94] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[157]);
  TRACE_POP
}
/*
equation index: 48
type: SIMPLE_ASSIGN
pwLine._is._im = (sin(gENROE.delta) * gENROE.iq - cos(gENROE.delta) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_48(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,48};
  data->localData[0]->realVars[106] /* pwLine.is.im variable */ = ((sin(data->localData[0]->realVars[10] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[95] /* gENROE.iq variable */) - ((cos(data->localData[0]->realVars[10] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[94] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[157]);
  TRACE_POP
}
/*
equation index: 49
type: SIMPLE_ASSIGN
gENROE._PSId = gENROE.PSIppd - gENROE.Xppd * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_49(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,49};
  data->localData[0]->realVars[84] /* gENROE.PSId variable */ = data->localData[0]->realVars[86] /* gENROE.PSIppd variable */ - ((data->simulationInfo->realParameter[208]) * (data->localData[0]->realVars[94] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 50
type: SIMPLE_ASSIGN
gENROE._uq = gENROE.PSId - gENROE.R_a * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_50(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,50};
  data->localData[0]->realVars[97] /* gENROE.uq variable */ = data->localData[0]->realVars[84] /* gENROE.PSId variable */ - ((data->simulationInfo->realParameter[191]) * (data->localData[0]->realVars[95] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 51
type: SIMPLE_ASSIGN
gENROE._PSIpp = sqrt(gENROE.PSIppd ^ 2.0 + gENROE.PSIppq ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_51(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,51};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[86] /* gENROE.PSIppd variable */;
  tmp1 = data->localData[0]->realVars[87] /* gENROE.PSIppq variable */;
  data->localData[0]->realVars[85] /* gENROE.PSIpp variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 52
type: SIMPLE_ASSIGN
gENROE._PSIq = (-gENROE.PSIppq) - gENROE.Xppq * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_52(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,52};
  data->localData[0]->realVars[88] /* gENROE.PSIq variable */ = (-data->localData[0]->realVars[87] /* gENROE.PSIppq variable */) - ((data->simulationInfo->realParameter[209]) * (data->localData[0]->realVars[95] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 53
type: SIMPLE_ASSIGN
gENROE._ud = (-gENROE.PSIq) - gENROE.R_a * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_53(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,53};
  data->localData[0]->realVars[96] /* gENROE.ud variable */ = (-data->localData[0]->realVars[88] /* gENROE.PSIq variable */) - ((data->simulationInfo->realParameter[191]) * (data->localData[0]->realVars[94] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 54
type: SIMPLE_ASSIGN
gENROE._PSIkq = ((gENROE.Epd + (gENROE.Xpq - gENROE.Xl) * gENROE.iq) * gENROE.K1q + gENROE.Epd + gENROE.iq * (gENROE.Xpq - gENROE.Xq) + OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2) * gENROE.PSIppq * (gENROE.Xq - gENROE.Xl) / (gENROE.Xd - gENROE.Xl) - gENROE.XaqIlq) / gENROE.K1q
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_54(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,54};
  data->localData[0]->realVars[9] /* gENROE.PSIkq STATE(1) */ = DIVISION_SIM((data->localData[0]->realVars[6] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[210] - data->simulationInfo->realParameter[205]) * (data->localData[0]->realVars[95] /* gENROE.iq variable */)) * (data->simulationInfo->realParameter[171]) + data->localData[0]->realVars[6] /* gENROE.Epd STATE(1) */ + (data->localData[0]->realVars[95] /* gENROE.iq variable */) * (data->simulationInfo->realParameter[210] - data->simulationInfo->realParameter[211]) + (omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[85] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[194], data->simulationInfo->realParameter[195], 1.0, 1.2)) * ((data->localData[0]->realVars[87] /* gENROE.PSIppq variable */) * (DIVISION_SIM(data->simulationInfo->realParameter[211] - data->simulationInfo->realParameter[205],data->simulationInfo->realParameter[204] - data->simulationInfo->realParameter[205],"gENROE.Xd - gENROE.Xl",equationIndexes))) - data->localData[0]->realVars[91] /* gENROE.XaqIlq variable */,data->simulationInfo->realParameter[171],"gENROE.K1q",equationIndexes);
  TRACE_POP
}
/*
equation index: 55
type: SIMPLE_ASSIGN
gENROE._PSIkd = ((gENROE.Epq + (gENROE.Xl - gENROE.Xpd) * gENROE.id) * gENROE.K1d + gENROE.Epq + gENROE.id * (gENROE.Xd - gENROE.Xpd) + OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2) * gENROE.PSIppd - eXST1_1.XADIFD) / gENROE.K1d
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_55(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,55};
  data->localData[0]->realVars[8] /* gENROE.PSIkd STATE(1) */ = DIVISION_SIM((data->localData[0]->realVars[7] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[205] - data->simulationInfo->realParameter[206]) * (data->localData[0]->realVars[94] /* gENROE.id variable */)) * (data->simulationInfo->realParameter[170]) + data->localData[0]->realVars[7] /* gENROE.Epq STATE(1) */ + (data->localData[0]->realVars[94] /* gENROE.id variable */) * (data->simulationInfo->realParameter[204] - data->simulationInfo->realParameter[206]) + (omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[85] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[194], data->simulationInfo->realParameter[195], 1.0, 1.2)) * (data->localData[0]->realVars[86] /* gENROE.PSIppd variable */) - data->localData[0]->realVars[63] /* eXST1_1.XADIFD variable */,data->simulationInfo->realParameter[170],"gENROE.K1d",equationIndexes);
  TRACE_POP
}
/*
equation index: 56
type: SIMPLE_ASSIGN
gENCLS._p._ir = ((-sin(gENCLS.delta)) * gENCLS.id - cos(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_56(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,56};
  data->localData[0]->realVars[78] /* gENCLS.p.ir variable */ = (((-sin(data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[74] /* gENCLS.id variable */) - ((cos(data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[75] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[131]);
  TRACE_POP
}
/*
equation index: 57
type: SIMPLE_ASSIGN
gENCLS._p._ii = (cos(gENCLS.delta) * gENCLS.id - sin(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_57(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,57};
  data->localData[0]->realVars[77] /* gENCLS.p.ii variable */ = ((cos(data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[74] /* gENCLS.id variable */) - ((sin(data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[75] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[131]);
  TRACE_POP
}
/*
equation index: 58
type: SIMPLE_ASSIGN
gENCLS._vd = gENCLS.X_d * gENCLS.iq - gENCLS.R_a * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_58(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,58};
  data->localData[0]->realVars[79] /* gENCLS.vd variable */ = (data->simulationInfo->realParameter[140]) * (data->localData[0]->realVars[75] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[137]) * (data->localData[0]->realVars[74] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 59
type: SIMPLE_ASSIGN
gENCLS._vq = gENCLS.eq + (-gENCLS.R_a) * gENCLS.iq - gENCLS.X_d * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_59(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,59};
  data->localData[0]->realVars[80] /* gENCLS.vq variable */ = data->localData[0]->realVars[5] /* gENCLS.eq STATE(1) */ + ((-data->simulationInfo->realParameter[137])) * (data->localData[0]->realVars[75] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[140]) * (data->localData[0]->realVars[74] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 60
type: SIMPLE_ASSIGN
pwLine4._ir._re = (-pwLine1.ir.re) - gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_60(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,60};
  data->localData[0]->realVars[137] /* pwLine4.ir.re variable */ = (-data->localData[0]->realVars[115] /* pwLine1.ir.re variable */) - data->localData[0]->realVars[78] /* gENCLS.p.ir variable */;
  TRACE_POP
}
/*
equation index: 61
type: SIMPLE_ASSIGN
pwLine1._ir._im = (-pwLine4.ir.im) - gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_61(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,61};
  data->localData[0]->realVars[114] /* pwLine1.ir.im variable */ = (-data->localData[0]->realVars[136] /* pwLine4.ir.im variable */) - data->localData[0]->realVars[77] /* gENCLS.p.ii variable */;
  TRACE_POP
}
/*
equation index: 62
type: SIMPLE_ASSIGN
pwLine3._is._im = (-pwLine.ir.im) - pwLine1.is.im - constantLoad.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_62(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,62};
  data->localData[0]->realVars[128] /* pwLine3.is.im variable */ = (-data->localData[0]->realVars[104] /* pwLine.ir.im variable */) - data->localData[0]->realVars[116] /* pwLine1.is.im variable */ - data->localData[0]->realVars[51] /* constantLoad.p.ii variable */;
  TRACE_POP
}
/*
equation index: 63
type: SIMPLE_ASSIGN
pwLine3._is._re = (-pwLine.ir.re) - pwLine1.is.re - constantLoad.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_63(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,63};
  data->localData[0]->realVars[129] /* pwLine3.is.re variable */ = (-data->localData[0]->realVars[105] /* pwLine.ir.re variable */) - data->localData[0]->realVars[117] /* pwLine1.is.re variable */ - data->localData[0]->realVars[52] /* constantLoad.p.ir variable */;
  TRACE_POP
}
/*
equation index: 64
type: SIMPLE_ASSIGN
pwFault._p._ii = (-pwLine3.ir.im) - pwLine4.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_64(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,64};
  data->localData[0]->realVars[98] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[126] /* pwLine3.ir.im variable */) - data->localData[0]->realVars[138] /* pwLine4.is.im variable */;
  TRACE_POP
}
/*
equation index: 65
type: SIMPLE_ASSIGN
pwFault._p._ir = (-pwLine3.ir.re) - pwLine4.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_65(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,65};
  data->localData[0]->realVars[99] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[127] /* pwLine3.ir.re variable */) - data->localData[0]->realVars[139] /* pwLine4.is.re variable */;
  TRACE_POP
}

void residualFunc96(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,96};
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
  for (i=0; i<30; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<30; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[127] /* pwLine3.ir.re variable */ = xloc[0];
  data->localData[0]->realVars[139] /* pwLine4.is.re variable */ = xloc[1];
  data->localData[0]->realVars[126] /* pwLine3.ir.im variable */ = xloc[2];
  data->localData[0]->realVars[138] /* pwLine4.is.im variable */ = xloc[3];
  data->localData[0]->realVars[105] /* pwLine.ir.re variable */ = xloc[4];
  data->localData[0]->realVars[117] /* pwLine1.is.re variable */ = xloc[5];
  data->localData[0]->realVars[104] /* pwLine.ir.im variable */ = xloc[6];
  data->localData[0]->realVars[116] /* pwLine1.is.im variable */ = xloc[7];
  data->localData[0]->realVars[51] /* constantLoad.p.ii variable */ = xloc[8];
  data->localData[0]->realVars[52] /* constantLoad.p.ir variable */ = xloc[9];
  data->localData[0]->realVars[136] /* pwLine4.ir.im variable */ = xloc[10];
  data->localData[0]->realVars[115] /* pwLine1.ir.re variable */ = xloc[11];
  data->localData[0]->realVars[75] /* gENCLS.iq variable */ = xloc[12];
  data->localData[0]->realVars[74] /* gENCLS.id variable */ = xloc[13];
  data->localData[0]->realVars[7] /* gENROE.Epq STATE(1) */ = xloc[14];
  data->localData[0]->realVars[6] /* gENROE.Epd STATE(1) */ = xloc[15];
  data->localData[0]->realVars[87] /* gENROE.PSIppq variable */ = xloc[16];
  data->localData[0]->realVars[86] /* gENROE.PSIppd variable */ = xloc[17];
  data->localData[0]->realVars[95] /* gENROE.iq variable */ = xloc[18];
  data->localData[0]->realVars[94] /* gENROE.id variable */ = xloc[19];
  data->localData[0]->realVars[108] /* pwLine.vs.im variable */ = xloc[20];
  data->localData[0]->realVars[109] /* pwLine.vs.re variable */ = xloc[21];
  data->localData[0]->realVars[119] /* pwLine1.vr.re variable */ = xloc[22];
  data->localData[0]->realVars[118] /* pwLine1.vr.im variable */ = xloc[23];
  data->localData[0]->realVars[63] /* eXST1_1.XADIFD variable */ = xloc[24];
  data->simulationInfo->realParameter[95] = xloc[25];
  data->localData[0]->realVars[130] /* pwLine3.vr.im variable */ = xloc[26];
  data->localData[0]->realVars[120] /* pwLine1.vs.im variable */ = xloc[27];
  data->localData[0]->realVars[121] /* pwLine1.vs.re variable */ = xloc[28];
  data->localData[0]->realVars[131] /* pwLine3.vr.re variable */ = xloc[29];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_26(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_27(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_28(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_29(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_30(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_31(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_32(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_33(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_34(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_35(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_36(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_37(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_38(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_39(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_40(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_41(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_42(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_43(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_44(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_45(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_46(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_47(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_48(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_49(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_50(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_51(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_52(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_53(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_54(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_55(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_56(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_57(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_58(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_59(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_60(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_61(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_62(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_63(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_64(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_65(data, threadData);
  /* body */
  tmp0 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[241]);
  tmp9 = (modelica_boolean)tmp0;
  if(tmp9)
  {
    tmp10 = data->localData[0]->realVars[99] /* pwFault.p.ir variable */;
  }
  else
  {
    tmp1 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[242]);
    tmp7 = (modelica_boolean)(tmp1 && data->simulationInfo->booleanParameter[66]);
    if(tmp7)
    {
      tmp8 = data->localData[0]->realVars[130] /* pwLine3.vr.im variable */;
    }
    else
    {
      tmp2 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[242]);
      tmp5 = (modelica_boolean)tmp2;
      if(tmp5)
      {
        tmp3 = data->simulationInfo->realParameter[239];
        tmp4 = data->simulationInfo->realParameter[240];
        tmp6 = data->localData[0]->realVars[99] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[239]) * (data->localData[0]->realVars[131] /* pwLine3.vr.re variable */) + (data->simulationInfo->realParameter[240]) * (data->localData[0]->realVars[130] /* pwLine3.vr.im variable */),(tmp3 * tmp3) + (tmp4 * tmp4),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp6 = data->localData[0]->realVars[99] /* pwFault.p.ir variable */;
      }
      tmp8 = tmp6;
    }
    tmp10 = tmp8;
  }
  res[0] = tmp10;

  tmp11 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[241]);
  tmp20 = (modelica_boolean)tmp11;
  if(tmp20)
  {
    tmp21 = data->localData[0]->realVars[98] /* pwFault.p.ii variable */;
  }
  else
  {
    tmp12 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[242]);
    tmp18 = (modelica_boolean)(tmp12 && data->simulationInfo->booleanParameter[66]);
    if(tmp18)
    {
      tmp19 = data->localData[0]->realVars[131] /* pwLine3.vr.re variable */ - 1e-10;
    }
    else
    {
      tmp13 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[242]);
      tmp16 = (modelica_boolean)tmp13;
      if(tmp16)
      {
        tmp14 = data->simulationInfo->realParameter[240];
        tmp15 = data->simulationInfo->realParameter[239];
        tmp17 = data->localData[0]->realVars[98] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[239]) * (data->localData[0]->realVars[130] /* pwLine3.vr.im variable */) - ((data->simulationInfo->realParameter[240]) * (data->localData[0]->realVars[131] /* pwLine3.vr.re variable */)),(tmp14 * tmp14) + (tmp15 * tmp15),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
      }
      else
      {
        tmp17 = data->localData[0]->realVars[98] /* pwFault.p.ii variable */;
      }
      tmp19 = tmp17;
    }
    tmp21 = tmp19;
  }
  res[1] = tmp21;

  res[2] = (data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[52] /* constantLoad.p.ir variable */) + ((-data->localData[0]->realVars[121] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[51] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[47] /* constantLoad.Q variable */;

  res[3] = (data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[51] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[121] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[52] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[46] /* constantLoad.P variable */;

  tmp22 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[274]);
  tmp23 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[275]);
  res[4] = ((tmp22 && tmp23)?data->localData[0]->realVars[129] /* pwLine3.is.re variable */:data->localData[0]->realVars[121] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[131] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[273]) * (data->localData[0]->realVars[129] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[270]) - ((data->localData[0]->realVars[121] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[271]))) - ((data->simulationInfo->realParameter[272]) * (data->localData[0]->realVars[128] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[121] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[270]) - ((data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[271]))))));

  tmp24 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[263]);
  tmp25 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[264]);
  res[5] = ((tmp24 && tmp25)?data->localData[0]->realVars[117] /* pwLine1.is.re variable */:data->localData[0]->realVars[121] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[119] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[262]) * (data->localData[0]->realVars[117] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[259]) - ((data->localData[0]->realVars[121] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[260]))) - ((data->simulationInfo->realParameter[261]) * (data->localData[0]->realVars[116] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[121] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[259]) - ((data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[260]))))));

  res[6] = (cos(data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[80] /* gENCLS.vq variable */) + (sin(data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[79] /* gENCLS.vd variable */) - data->localData[0]->realVars[119] /* pwLine1.vr.re variable */;

  res[7] = (sin(data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[80] /* gENCLS.vq variable */) + ((-cos(data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[79] /* gENCLS.vd variable */) - data->localData[0]->realVars[118] /* pwLine1.vr.im variable */;

  tmp26 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[285]);
  tmp27 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[286]);
  res[8] = ((tmp26 && tmp27)?data->localData[0]->realVars[137] /* pwLine4.ir.re variable */:data->localData[0]->realVars[119] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[131] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[284]) * (data->localData[0]->realVars[137] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[118] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[281]) - ((data->localData[0]->realVars[119] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[282]))) - ((data->simulationInfo->realParameter[283]) * (data->localData[0]->realVars[136] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[119] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[281]) - ((data->localData[0]->realVars[118] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[282]))))));

  tmp28 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[285]);
  tmp29 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[286]);
  res[9] = ((tmp28 && tmp29)?data->localData[0]->realVars[136] /* pwLine4.ir.im variable */:data->localData[0]->realVars[118] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[130] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[284]) * (data->localData[0]->realVars[136] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[119] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[281]) - ((data->localData[0]->realVars[118] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[282]))) + (data->simulationInfo->realParameter[283]) * (data->localData[0]->realVars[137] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[118] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[281]) - ((data->localData[0]->realVars[119] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[282])))));

  tmp30 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[263]);
  tmp31 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[264]);
  res[10] = ((tmp30 && tmp31)?data->localData[0]->realVars[115] /* pwLine1.ir.re variable */:data->localData[0]->realVars[119] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[121] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[262]) * (data->localData[0]->realVars[115] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[118] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[259]) - ((data->localData[0]->realVars[119] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[260]))) - ((data->simulationInfo->realParameter[261]) * (data->localData[0]->realVars[114] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[119] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[259]) - ((data->localData[0]->realVars[118] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[260]))))));

  tmp32 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[263]);
  tmp33 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[264]);
  res[11] = ((tmp32 && tmp33)?data->localData[0]->realVars[116] /* pwLine1.is.im variable */:data->localData[0]->realVars[120] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[118] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[262]) * (data->localData[0]->realVars[116] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[121] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[259]) - ((data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[260]))) + (data->simulationInfo->realParameter[261]) * (data->localData[0]->realVars[117] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[259]) - ((data->localData[0]->realVars[121] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[260])))));

  res[12] = (sin(data->localData[0]->realVars[10] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[97] /* gENROE.uq variable */) + ((-cos(data->localData[0]->realVars[10] /* gENROE.delta STATE(1) */))) * (data->localData[0]->realVars[96] /* gENROE.ud variable */) - data->localData[0]->realVars[108] /* pwLine.vs.im variable */;

  res[13] = (cos(data->localData[0]->realVars[10] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[97] /* gENROE.uq variable */) + (sin(data->localData[0]->realVars[10] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[96] /* gENROE.ud variable */) - data->localData[0]->realVars[109] /* pwLine.vs.re variable */;

  tmp34 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[252]);
  tmp35 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[253]);
  res[14] = ((tmp34 && tmp35)?data->localData[0]->realVars[107] /* pwLine.is.re variable */:data->localData[0]->realVars[109] /* pwLine.vs.re variable */ - data->localData[0]->realVars[121] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[251]) * (data->localData[0]->realVars[107] /* pwLine.is.re variable */ + (data->localData[0]->realVars[108] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[248]) - ((data->localData[0]->realVars[109] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[249]))) - ((data->simulationInfo->realParameter[250]) * (data->localData[0]->realVars[106] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[109] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[248]) - ((data->localData[0]->realVars[108] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[249]))))));

  tmp36 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[252]);
  tmp37 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[253]);
  res[15] = ((tmp36 && tmp37)?data->localData[0]->realVars[106] /* pwLine.is.im variable */:data->localData[0]->realVars[108] /* pwLine.vs.im variable */ - data->localData[0]->realVars[120] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[251]) * (data->localData[0]->realVars[106] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[109] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[248]) - ((data->localData[0]->realVars[108] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[249]))) + (data->simulationInfo->realParameter[250]) * (data->localData[0]->realVars[107] /* pwLine.is.re variable */ + (data->localData[0]->realVars[108] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[248]) - ((data->localData[0]->realVars[109] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[249])))));

  tmp38 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[263]);
  tmp39 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[264]);
  res[16] = ((tmp38 && tmp39)?data->localData[0]->realVars[114] /* pwLine1.ir.im variable */:data->localData[0]->realVars[118] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[120] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[262]) * (data->localData[0]->realVars[114] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[119] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[259]) - ((data->localData[0]->realVars[118] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[260]))) + (data->simulationInfo->realParameter[261]) * (data->localData[0]->realVars[115] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[118] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[259]) - ((data->localData[0]->realVars[119] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[260])))));

  tmp40 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[285]);
  tmp41 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[286]);
  res[17] = ((tmp40 && tmp41)?data->localData[0]->realVars[139] /* pwLine4.is.re variable */:data->localData[0]->realVars[131] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[119] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[284]) * (data->localData[0]->realVars[139] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[130] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[281]) - ((data->localData[0]->realVars[131] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[282]))) - ((data->simulationInfo->realParameter[283]) * (data->localData[0]->realVars[138] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[131] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[281]) - ((data->localData[0]->realVars[130] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[282]))))));

  tmp42 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[285]);
  tmp43 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[286]);
  res[18] = ((tmp42 && tmp43)?data->localData[0]->realVars[138] /* pwLine4.is.im variable */:data->localData[0]->realVars[130] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[118] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[284]) * (data->localData[0]->realVars[138] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[131] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[281]) - ((data->localData[0]->realVars[130] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[282]))) + (data->simulationInfo->realParameter[283]) * (data->localData[0]->realVars[139] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[130] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[281]) - ((data->localData[0]->realVars[131] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[282])))));

  tmp44 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[274]);
  tmp45 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[275]);
  res[19] = ((tmp44 && tmp45)?data->localData[0]->realVars[127] /* pwLine3.ir.re variable */:data->localData[0]->realVars[131] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[121] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[273]) * (data->localData[0]->realVars[127] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[130] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[270]) - ((data->localData[0]->realVars[131] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[271]))) - ((data->simulationInfo->realParameter[272]) * (data->localData[0]->realVars[126] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[131] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[270]) - ((data->localData[0]->realVars[130] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[271]))))));

  tmp46 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[274]);
  tmp47 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[275]);
  res[20] = ((tmp46 && tmp47)?data->localData[0]->realVars[126] /* pwLine3.ir.im variable */:data->localData[0]->realVars[130] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[120] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[273]) * (data->localData[0]->realVars[126] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[131] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[270]) - ((data->localData[0]->realVars[130] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[271]))) + (data->simulationInfo->realParameter[272]) * (data->localData[0]->realVars[127] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[130] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[270]) - ((data->localData[0]->realVars[131] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[271])))));

  tmp48 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[274]);
  tmp49 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[275]);
  res[21] = ((tmp48 && tmp49)?data->localData[0]->realVars[128] /* pwLine3.is.im variable */:data->localData[0]->realVars[120] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[130] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[273]) * (data->localData[0]->realVars[128] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[121] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[270]) - ((data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[271]))) + (data->simulationInfo->realParameter[272]) * (data->localData[0]->realVars[129] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[270]) - ((data->localData[0]->realVars[121] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[271])))));

  tmp50 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[252]);
  tmp51 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[253]);
  res[22] = ((tmp50 && tmp51)?data->localData[0]->realVars[105] /* pwLine.ir.re variable */:data->localData[0]->realVars[121] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[109] /* pwLine.vs.re variable */ - ((data->simulationInfo->realParameter[251]) * (data->localData[0]->realVars[105] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[248]) - ((data->localData[0]->realVars[121] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[249]))) - ((data->simulationInfo->realParameter[250]) * (data->localData[0]->realVars[104] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[121] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[248]) - ((data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[249]))))));

  tmp52 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[252]);
  tmp53 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[253]);
  res[23] = ((tmp52 && tmp53)?data->localData[0]->realVars[104] /* pwLine.ir.im variable */:data->localData[0]->realVars[120] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[108] /* pwLine.vs.im variable */ - ((data->simulationInfo->realParameter[251]) * (data->localData[0]->realVars[104] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[121] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[248]) - ((data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[249]))) + (data->simulationInfo->realParameter[250]) * (data->localData[0]->realVars[105] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[248]) - ((data->localData[0]->realVars[121] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[249])))));

  tmp54 = data->localData[0]->realVars[109] /* pwLine.vs.re variable */;
  tmp55 = data->localData[0]->realVars[108] /* pwLine.vs.im variable */;
  res[24] = sqrt((tmp54 * tmp54) + (tmp55 * tmp55)) - data->localData[0]->realVars[56] /* eXST1_1.ECOMP variable */;

  tmp56 = Greater(data->localData[0]->realVars[57] /* eXST1_1.EFD variable */,(data->localData[0]->realVars[56] /* eXST1_1.ECOMP variable */) * (data->simulationInfo->realParameter[99]) - ((data->simulationInfo->realParameter[82]) * (data->localData[0]->realVars[63] /* eXST1_1.XADIFD variable */)));
  tmp58 = (modelica_boolean)tmp56;
  if(tmp58)
  {
    tmp59 = (data->localData[0]->realVars[56] /* eXST1_1.ECOMP variable */) * (data->simulationInfo->realParameter[99]) - ((data->simulationInfo->realParameter[82]) * (data->localData[0]->realVars[63] /* eXST1_1.XADIFD variable */));
  }
  else
  {
    tmp57 = Less(data->localData[0]->realVars[57] /* eXST1_1.EFD variable */,(data->localData[0]->realVars[56] /* eXST1_1.ECOMP variable */) * (data->simulationInfo->realParameter[100]) - ((data->simulationInfo->realParameter[82]) * (data->localData[0]->realVars[63] /* eXST1_1.XADIFD variable */)));
    tmp59 = (tmp57?(data->localData[0]->realVars[56] /* eXST1_1.ECOMP variable */) * (data->simulationInfo->realParameter[100]) - ((data->simulationInfo->realParameter[82]) * (data->localData[0]->realVars[63] /* eXST1_1.XADIFD variable */)):data->localData[0]->realVars[62] /* eXST1_1.Vm1.y variable */);
  }
  res[25] = tmp59 - data->localData[0]->realVars[57] /* eXST1_1.EFD variable */;

  res[26] = (data->localData[0]->realVars[8] /* gENROE.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[176]) + (data->localData[0]->realVars[7] /* gENROE.Epq STATE(1) */) * (data->simulationInfo->realParameter[174]) - data->localData[0]->realVars[86] /* gENROE.PSIppd variable */;

  res[27] = data->localData[0]->realVars[7] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[205] - data->simulationInfo->realParameter[206]) * (data->localData[0]->realVars[94] /* gENROE.id variable */) + (-data->localData[0]->realVars[8] /* gENROE.PSIkd STATE(1) */) - ((data->localData[0]->realVars[20] /* der(gENROE.PSIkd) STATE_DER */) * (data->simulationInfo->realParameter[198]));

  res[28] = data->localData[0]->realVars[87] /* gENROE.PSIppq variable */ - ((data->localData[0]->realVars[6] /* gENROE.Epd STATE(1) */) * (data->simulationInfo->realParameter[175])) - ((data->localData[0]->realVars[9] /* gENROE.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[177]));

  res[29] = data->localData[0]->realVars[6] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[210] - data->simulationInfo->realParameter[205]) * (data->localData[0]->realVars[95] /* gENROE.iq variable */) + (-data->localData[0]->realVars[9] /* gENROE.PSIkq STATE(1) */) - ((data->localData[0]->realVars[21] /* der(gENROE.PSIkq) STATE_DER */) * (data->simulationInfo->realParameter[199]));
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS96(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+30] = {0,3,3,3,3,4,4,4,4,4,4,4,4,6,6,2,2,6,6,6,6,5,5,7,7,3,2,8,11,11,8};
  const int rowIndex[151] = {0,19,20,0,17,18,1,19,20,1,17,18,4,21,22,23,4,5,11,21,4,21,22,23,4,5,11,21,2,3,4,21,2,3,4,21,8,9,10,16,8,9,10,16,6,7,8,9,10,16,6,7,8,9,10,16,26,27,28,29,12,13,26,27,28,29,12,13,26,27,28,29,12,13,14,15,28,29,12,13,14,15,26,27,12,14,15,23,24,13,14,15,22,24,5,6,8,9,10,16,17,7,8,9,10,11,16,18,25,26,27,24,25,0,1,9,17,18,19,20,21,2,3,4,5,11,15,16,20,21,22,23,2,3,4,5,10,11,14,19,21,22,23,0,1,4,8,17,18,19,20};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern.leadindex = (unsigned int*) malloc((30+1)*sizeof(int));
  inSysData->sparsePattern.index = (unsigned int*) malloc(151*sizeof(int));
  inSysData->sparsePattern.numberOfNoneZeros = 151;
  inSysData->sparsePattern.colorCols = (unsigned int*) malloc(30*sizeof(int));
  inSysData->sparsePattern.maxColors = 10;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern.leadindex, colPtrIndex, (30+1)*sizeof(int));
  
  for(i=2;i<30+1;++i)
    inSysData->sparsePattern.leadindex[i] += inSysData->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern.index, rowIndex, 151*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern.colorCols[29] = 1;
  inSysData->sparsePattern.colorCols[28] = 2;
  inSysData->sparsePattern.colorCols[27] = 3;
  inSysData->sparsePattern.colorCols[21] = 4;
  inSysData->sparsePattern.colorCols[26] = 4;
  inSysData->sparsePattern.colorCols[9] = 5;
  inSysData->sparsePattern.colorCols[20] = 5;
  inSysData->sparsePattern.colorCols[23] = 5;
  inSysData->sparsePattern.colorCols[8] = 6;
  inSysData->sparsePattern.colorCols[19] = 6;
  inSysData->sparsePattern.colorCols[22] = 6;
  inSysData->sparsePattern.colorCols[7] = 7;
  inSysData->sparsePattern.colorCols[13] = 7;
  inSysData->sparsePattern.colorCols[18] = 7;
  inSysData->sparsePattern.colorCols[24] = 7;
  inSysData->sparsePattern.colorCols[6] = 8;
  inSysData->sparsePattern.colorCols[12] = 8;
  inSysData->sparsePattern.colorCols[17] = 8;
  inSysData->sparsePattern.colorCols[1] = 9;
  inSysData->sparsePattern.colorCols[2] = 9;
  inSysData->sparsePattern.colorCols[5] = 9;
  inSysData->sparsePattern.colorCols[11] = 9;
  inSysData->sparsePattern.colorCols[16] = 9;
  inSysData->sparsePattern.colorCols[0] = 10;
  inSysData->sparsePattern.colorCols[3] = 10;
  inSysData->sparsePattern.colorCols[4] = 10;
  inSysData->sparsePattern.colorCols[10] = 10;
  inSysData->sparsePattern.colorCols[14] = 10;
  inSysData->sparsePattern.colorCols[15] = 10;
  inSysData->sparsePattern.colorCols[25] = 10;
}
void initializeStaticDataNLS96(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for pwLine3.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[127].attribute /* pwLine3.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[127].attribute /* pwLine3.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[127].attribute /* pwLine3.ir.re */.max;
  /* static nls data for pwLine4.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[139].attribute /* pwLine4.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[139].attribute /* pwLine4.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[139].attribute /* pwLine4.is.re */.max;
  /* static nls data for pwLine3.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[126].attribute /* pwLine3.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[126].attribute /* pwLine3.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[126].attribute /* pwLine3.ir.im */.max;
  /* static nls data for pwLine4.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[138].attribute /* pwLine4.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[138].attribute /* pwLine4.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[138].attribute /* pwLine4.is.im */.max;
  /* static nls data for pwLine.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[105].attribute /* pwLine.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[105].attribute /* pwLine.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[105].attribute /* pwLine.ir.re */.max;
  /* static nls data for pwLine1.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[117].attribute /* pwLine1.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[117].attribute /* pwLine1.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[117].attribute /* pwLine1.is.re */.max;
  /* static nls data for pwLine.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[104].attribute /* pwLine.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[104].attribute /* pwLine.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[104].attribute /* pwLine.ir.im */.max;
  /* static nls data for pwLine1.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[116].attribute /* pwLine1.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[116].attribute /* pwLine1.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[116].attribute /* pwLine1.is.im */.max;
  /* static nls data for constantLoad.p.ii */
  sysData->nominal[i] = data->modelData->realVarsData[51].attribute /* constantLoad.p.ii */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[51].attribute /* constantLoad.p.ii */.min;
  sysData->max[i++]   = data->modelData->realVarsData[51].attribute /* constantLoad.p.ii */.max;
  /* static nls data for constantLoad.p.ir */
  sysData->nominal[i] = data->modelData->realVarsData[52].attribute /* constantLoad.p.ir */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[52].attribute /* constantLoad.p.ir */.min;
  sysData->max[i++]   = data->modelData->realVarsData[52].attribute /* constantLoad.p.ir */.max;
  /* static nls data for pwLine4.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[136].attribute /* pwLine4.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[136].attribute /* pwLine4.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[136].attribute /* pwLine4.ir.im */.max;
  /* static nls data for pwLine1.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[115].attribute /* pwLine1.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[115].attribute /* pwLine1.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[115].attribute /* pwLine1.ir.re */.max;
  /* static nls data for gENCLS.iq */
  sysData->nominal[i] = data->modelData->realVarsData[75].attribute /* gENCLS.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[75].attribute /* gENCLS.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[75].attribute /* gENCLS.iq */.max;
  /* static nls data for gENCLS.id */
  sysData->nominal[i] = data->modelData->realVarsData[74].attribute /* gENCLS.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[74].attribute /* gENCLS.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[74].attribute /* gENCLS.id */.max;
  /* static nls data for gENROE.Epq */
  sysData->nominal[i] = data->modelData->realVarsData[7].attribute /* gENROE.Epq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[7].attribute /* gENROE.Epq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[7].attribute /* gENROE.Epq */.max;
  /* static nls data for gENROE.Epd */
  sysData->nominal[i] = data->modelData->realVarsData[6].attribute /* gENROE.Epd */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[6].attribute /* gENROE.Epd */.min;
  sysData->max[i++]   = data->modelData->realVarsData[6].attribute /* gENROE.Epd */.max;
  /* static nls data for gENROE.PSIppq */
  sysData->nominal[i] = data->modelData->realVarsData[87].attribute /* gENROE.PSIppq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[87].attribute /* gENROE.PSIppq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[87].attribute /* gENROE.PSIppq */.max;
  /* static nls data for gENROE.PSIppd */
  sysData->nominal[i] = data->modelData->realVarsData[86].attribute /* gENROE.PSIppd */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[86].attribute /* gENROE.PSIppd */.min;
  sysData->max[i++]   = data->modelData->realVarsData[86].attribute /* gENROE.PSIppd */.max;
  /* static nls data for gENROE.iq */
  sysData->nominal[i] = data->modelData->realVarsData[95].attribute /* gENROE.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[95].attribute /* gENROE.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[95].attribute /* gENROE.iq */.max;
  /* static nls data for gENROE.id */
  sysData->nominal[i] = data->modelData->realVarsData[94].attribute /* gENROE.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[94].attribute /* gENROE.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[94].attribute /* gENROE.id */.max;
  /* static nls data for pwLine.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[108].attribute /* pwLine.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[108].attribute /* pwLine.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[108].attribute /* pwLine.vs.im */.max;
  /* static nls data for pwLine.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[109].attribute /* pwLine.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[109].attribute /* pwLine.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[109].attribute /* pwLine.vs.re */.max;
  /* static nls data for pwLine1.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[119].attribute /* pwLine1.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[119].attribute /* pwLine1.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[119].attribute /* pwLine1.vr.re */.max;
  /* static nls data for pwLine1.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[118].attribute /* pwLine1.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[118].attribute /* pwLine1.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[118].attribute /* pwLine1.vr.im */.max;
  /* static nls data for eXST1_1.XADIFD */
  sysData->nominal[i] = data->modelData->realVarsData[63].attribute /* eXST1_1.XADIFD */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[63].attribute /* eXST1_1.XADIFD */.min;
  sysData->max[i++]   = data->modelData->realVarsData[63].attribute /* eXST1_1.XADIFD */.max;
  /* static nls data for eXST1_1.TransducerDelay.y_start */
  sysData->nominal[i] = data->modelData->realParameterData[95].attribute /* eXST1_1.TransducerDelay.y_start */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[95].attribute /* eXST1_1.TransducerDelay.y_start */.min;
  sysData->max[i++]   = data->modelData->realParameterData[95].attribute /* eXST1_1.TransducerDelay.y_start */.max;
  /* static nls data for pwLine3.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[130].attribute /* pwLine3.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[130].attribute /* pwLine3.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[130].attribute /* pwLine3.vr.im */.max;
  /* static nls data for pwLine1.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[120].attribute /* pwLine1.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[120].attribute /* pwLine1.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[120].attribute /* pwLine1.vs.im */.max;
  /* static nls data for pwLine1.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[121].attribute /* pwLine1.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[121].attribute /* pwLine1.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[121].attribute /* pwLine1.vs.re */.max;
  /* static nls data for pwLine3.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[131].attribute /* pwLine3.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[131].attribute /* pwLine3.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[131].attribute /* pwLine3.vr.re */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS96(sysData);
}

void getIterationVarsNLS96(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[127] /* pwLine3.ir.re variable */;
  array[1] = data->localData[0]->realVars[139] /* pwLine4.is.re variable */;
  array[2] = data->localData[0]->realVars[126] /* pwLine3.ir.im variable */;
  array[3] = data->localData[0]->realVars[138] /* pwLine4.is.im variable */;
  array[4] = data->localData[0]->realVars[105] /* pwLine.ir.re variable */;
  array[5] = data->localData[0]->realVars[117] /* pwLine1.is.re variable */;
  array[6] = data->localData[0]->realVars[104] /* pwLine.ir.im variable */;
  array[7] = data->localData[0]->realVars[116] /* pwLine1.is.im variable */;
  array[8] = data->localData[0]->realVars[51] /* constantLoad.p.ii variable */;
  array[9] = data->localData[0]->realVars[52] /* constantLoad.p.ir variable */;
  array[10] = data->localData[0]->realVars[136] /* pwLine4.ir.im variable */;
  array[11] = data->localData[0]->realVars[115] /* pwLine1.ir.re variable */;
  array[12] = data->localData[0]->realVars[75] /* gENCLS.iq variable */;
  array[13] = data->localData[0]->realVars[74] /* gENCLS.id variable */;
  array[14] = data->localData[0]->realVars[7] /* gENROE.Epq STATE(1) */;
  array[15] = data->localData[0]->realVars[6] /* gENROE.Epd STATE(1) */;
  array[16] = data->localData[0]->realVars[87] /* gENROE.PSIppq variable */;
  array[17] = data->localData[0]->realVars[86] /* gENROE.PSIppd variable */;
  array[18] = data->localData[0]->realVars[95] /* gENROE.iq variable */;
  array[19] = data->localData[0]->realVars[94] /* gENROE.id variable */;
  array[20] = data->localData[0]->realVars[108] /* pwLine.vs.im variable */;
  array[21] = data->localData[0]->realVars[109] /* pwLine.vs.re variable */;
  array[22] = data->localData[0]->realVars[119] /* pwLine1.vr.re variable */;
  array[23] = data->localData[0]->realVars[118] /* pwLine1.vr.im variable */;
  array[24] = data->localData[0]->realVars[63] /* eXST1_1.XADIFD variable */;
  array[25] = data->simulationInfo->realParameter[95];
  array[26] = data->localData[0]->realVars[130] /* pwLine3.vr.im variable */;
  array[27] = data->localData[0]->realVars[120] /* pwLine1.vs.im variable */;
  array[28] = data->localData[0]->realVars[121] /* pwLine1.vs.re variable */;
  array[29] = data->localData[0]->realVars[131] /* pwLine3.vr.re variable */;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize non-linear systems */
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA* nonLinearSystemData)
{
  
  nonLinearSystemData[4].equationIndex = 808;
  nonLinearSystemData[4].size = 1;
  nonLinearSystemData[4].homotopySupport = 0;
  nonLinearSystemData[4].mixedSystem = 0;
  nonLinearSystemData[4].residualFunc = residualFunc808;
  nonLinearSystemData[4].strictTearingFunctionCall = NULL;
  nonLinearSystemData[4].analyticalJacobianColumn = NULL;
  nonLinearSystemData[4].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[4].jacobianIndex = -1;
  nonLinearSystemData[4].initializeStaticNLSData = initializeStaticDataNLS808;
  nonLinearSystemData[4].getIterationVars = getIterationVarsNLS808;
  nonLinearSystemData[4].checkConstraints = NULL;
  
  
  nonLinearSystemData[3].equationIndex = 803;
  nonLinearSystemData[3].size = 1;
  nonLinearSystemData[3].homotopySupport = 0;
  nonLinearSystemData[3].mixedSystem = 1;
  nonLinearSystemData[3].residualFunc = residualFunc803;
  nonLinearSystemData[3].strictTearingFunctionCall = NULL;
  nonLinearSystemData[3].analyticalJacobianColumn = OpenIPSL_Examples_Controls_PSSE_ES_EXST1_functionJacNLSJac73_column;
  nonLinearSystemData[3].initialAnalyticalJacobian = OpenIPSL_Examples_Controls_PSSE_ES_EXST1_initialAnalyticJacobianNLSJac73;
  nonLinearSystemData[3].jacobianIndex = 1 /*jacInx*/;
  nonLinearSystemData[3].initializeStaticNLSData = initializeStaticDataNLS803;
  nonLinearSystemData[3].getIterationVars = getIterationVarsNLS803;
  nonLinearSystemData[3].checkConstraints = NULL;
  
  
  nonLinearSystemData[2].equationIndex = 763;
  nonLinearSystemData[2].size = 22;
  nonLinearSystemData[2].homotopySupport = 0;
  nonLinearSystemData[2].mixedSystem = 1;
  nonLinearSystemData[2].residualFunc = residualFunc763;
  nonLinearSystemData[2].strictTearingFunctionCall = NULL;
  nonLinearSystemData[2].analyticalJacobianColumn = OpenIPSL_Examples_Controls_PSSE_ES_EXST1_functionJacNLSJac72_column;
  nonLinearSystemData[2].initialAnalyticalJacobian = OpenIPSL_Examples_Controls_PSSE_ES_EXST1_initialAnalyticJacobianNLSJac72;
  nonLinearSystemData[2].jacobianIndex = 0 /*jacInx*/;
  nonLinearSystemData[2].initializeStaticNLSData = initializeStaticDataNLS763;
  nonLinearSystemData[2].getIterationVars = getIterationVarsNLS763;
  nonLinearSystemData[2].checkConstraints = NULL;
  
  
  nonLinearSystemData[1].equationIndex = 604;
  nonLinearSystemData[1].size = 30;
  nonLinearSystemData[1].homotopySupport = 0;
  nonLinearSystemData[1].mixedSystem = 1;
  nonLinearSystemData[1].residualFunc = residualFunc604;
  nonLinearSystemData[1].strictTearingFunctionCall = NULL;
  nonLinearSystemData[1].analyticalJacobianColumn = NULL;
  nonLinearSystemData[1].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[1].jacobianIndex = -1;
  nonLinearSystemData[1].initializeStaticNLSData = initializeStaticDataNLS604;
  nonLinearSystemData[1].getIterationVars = getIterationVarsNLS604;
  nonLinearSystemData[1].checkConstraints = NULL;
  
  
  nonLinearSystemData[0].equationIndex = 96;
  nonLinearSystemData[0].size = 30;
  nonLinearSystemData[0].homotopySupport = 1;
  nonLinearSystemData[0].mixedSystem = 1;
  nonLinearSystemData[0].residualFunc = residualFunc96;
  nonLinearSystemData[0].strictTearingFunctionCall = NULL;
  nonLinearSystemData[0].analyticalJacobianColumn = NULL;
  nonLinearSystemData[0].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[0].jacobianIndex = -1;
  nonLinearSystemData[0].initializeStaticNLSData = initializeStaticDataNLS96;
  nonLinearSystemData[0].getIterationVars = getIterationVarsNLS96;
  nonLinearSystemData[0].checkConstraints = NULL;
}

#if defined(__cplusplus)
}
#endif

