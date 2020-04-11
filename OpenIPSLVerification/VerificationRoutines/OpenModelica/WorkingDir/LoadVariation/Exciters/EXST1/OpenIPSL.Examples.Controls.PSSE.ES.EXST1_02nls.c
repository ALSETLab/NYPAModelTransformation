/* Non Linear Systems */
#include "OpenIPSL.Examples.Controls.PSSE.ES.EXST1_model.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.EXST1_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* inner equations */

void residualFunc827(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,827};
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
  data->localData[0]->realVars[57] /* eXST1.EFD variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[57] /* eXST1.EFD variable */, (data->localData[0]->realVars[56] /* eXST1.ECOMP variable */) * (data->simulationInfo->realParameter[107] /* eXST1.V_RMAX PARAM */) - ((data->simulationInfo->realParameter[84] /* eXST1.K_C PARAM */) * (data->localData[0]->realVars[63] /* eXST1.XADIFD variable */)), 14, Greater);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = (data->localData[0]->realVars[56] /* eXST1.ECOMP variable */) * (data->simulationInfo->realParameter[107] /* eXST1.V_RMAX PARAM */) - ((data->simulationInfo->realParameter[84] /* eXST1.K_C PARAM */) * (data->localData[0]->realVars[63] /* eXST1.XADIFD variable */));
  }
  else
  {
    RELATIONHYSTERESIS(tmp1, data->localData[0]->realVars[57] /* eXST1.EFD variable */, (data->localData[0]->realVars[56] /* eXST1.ECOMP variable */) * (data->simulationInfo->realParameter[108] /* eXST1.V_RMIN PARAM */) - ((data->simulationInfo->realParameter[84] /* eXST1.K_C PARAM */) * (data->localData[0]->realVars[63] /* eXST1.XADIFD variable */)), 15, Less);
    tmp3 = (tmp1?(data->localData[0]->realVars[56] /* eXST1.ECOMP variable */) * (data->simulationInfo->realParameter[108] /* eXST1.V_RMIN PARAM */) - ((data->simulationInfo->realParameter[84] /* eXST1.K_C PARAM */) * (data->localData[0]->realVars[63] /* eXST1.XADIFD variable */)):data->localData[0]->realVars[62] /* eXST1.Vm1.y variable */);
  }
  res[0] = data->localData[0]->realVars[57] /* eXST1.EFD variable */ - (tmp3);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS827(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS827(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for eXST1.EFD */
  sysData->nominal[i] = data->modelData->realVarsData[57].attribute /* eXST1.EFD */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[57].attribute /* eXST1.EFD */.min;
  sysData->max[i++]   = data->modelData->realVarsData[57].attribute /* eXST1.EFD */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS827(sysData);
}

void getIterationVarsNLS827(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[57] /* eXST1.EFD variable */;
}


/* inner equations */

/*
equation index: 808
type: SIMPLE_ASSIGN
eXST1.imLeadLag.u = smooth(0, if eXST1.feedback.y > eXST1.limiter.uMax then eXST1.limiter.uMax else if eXST1.feedback.y < eXST1.limiter.uMin then eXST1.limiter.uMin else eXST1.feedback.y)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_808(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,808};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  tmp0 = Greater(data->localData[0]->realVars[65] /* eXST1.feedback.y variable */,data->simulationInfo->realParameter[142] /* eXST1.limiter.uMax PARAM */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->simulationInfo->realParameter[142] /* eXST1.limiter.uMax PARAM */;
  }
  else
  {
    tmp1 = Less(data->localData[0]->realVars[65] /* eXST1.feedback.y variable */,data->simulationInfo->realParameter[143] /* eXST1.limiter.uMin PARAM */);
    tmp3 = (tmp1?data->simulationInfo->realParameter[143] /* eXST1.limiter.uMin PARAM */:data->localData[0]->realVars[65] /* eXST1.feedback.y variable */);
  }
  data->localData[0]->realVars[69] /* eXST1.imLeadLag.u variable */ = tmp3;
  TRACE_POP
}
/*
equation index: 809
type: SIMPLE_ASSIGN
eXST1.imLeadLag.TF.y = (eXST1.imLeadLag.TF.bb[2] - eXST1.imLeadLag.TF.a[2] * eXST1.imLeadLag.TF.d) * eXST1.imLeadLag.TF.x[1] + eXST1.imLeadLag.TF.d * eXST1.imLeadLag.u
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_809(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,809};
  data->localData[0]->realVars[68] /* eXST1.imLeadLag.TF.y variable */ = (data->simulationInfo->realParameter[134] /* eXST1.imLeadLag.TF.bb[2] PARAM */ - ((data->simulationInfo->realParameter[129] /* eXST1.imLeadLag.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[135] /* eXST1.imLeadLag.TF.d PARAM */))) * (data->localData[0]->realVars[67] /* eXST1.imLeadLag.TF.x[1] variable */) + (data->simulationInfo->realParameter[135] /* eXST1.imLeadLag.TF.d PARAM */) * (data->localData[0]->realVars[69] /* eXST1.imLeadLag.u variable */);
  TRACE_POP
}
/*
equation index: 810
type: SIMPLE_ASSIGN
eXST1.K_a.u = if abs(eXST1.imLeadLag.T1 - eXST1.imLeadLag.T2) < 1e-15 then eXST1.imLeadLag.K * eXST1.imLeadLag.u else eXST1.imLeadLag.TF.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_810(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,810};
  modelica_boolean tmp0;
  tmp0 = Less(fabs(data->simulationInfo->realParameter[125] /* eXST1.imLeadLag.T1 PARAM */ - data->simulationInfo->realParameter[126] /* eXST1.imLeadLag.T2 PARAM */),1e-15);
  data->localData[0]->realVars[59] /* eXST1.K_a.u variable */ = (tmp0?(data->simulationInfo->realParameter[124] /* eXST1.imLeadLag.K PARAM */) * (data->localData[0]->realVars[69] /* eXST1.imLeadLag.u variable */):data->localData[0]->realVars[68] /* eXST1.imLeadLag.TF.y variable */);
  TRACE_POP
}
/*
equation index: 811
type: SIMPLE_ASSIGN
eXST1.K_a.y = eXST1.K_a.k * eXST1.K_a.u
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_811(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,811};
  data->localData[0]->realVars[60] /* eXST1.K_a.y variable */ = (data->simulationInfo->realParameter[86] /* eXST1.K_a.k PARAM */) * (data->localData[0]->realVars[59] /* eXST1.K_a.u variable */);
  TRACE_POP
}
/*
equation index: 812
type: SIMPLE_ASSIGN
eXST1.Vm1.y = if abs(eXST1.Vm1.T) <= 1e-15 then eXST1.K_a.y * eXST1.Vm1.K else eXST1.Vm1.state
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_812(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,812};
  modelica_boolean tmp0;
  tmp0 = LessEq(fabs(data->simulationInfo->realParameter[110] /* eXST1.Vm1.T PARAM */),1e-15);
  data->localData[0]->realVars[62] /* eXST1.Vm1.y variable */ = (tmp0?(data->localData[0]->realVars[60] /* eXST1.K_a.y variable */) * (data->simulationInfo->realParameter[109] /* eXST1.Vm1.K PARAM */):data->localData[0]->realVars[1] /* eXST1.Vm1.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 813
type: SIMPLE_ASSIGN
eXST1.imDerivativeLag.y = 0.1 * (eXST1.Vm1.y - eXST1.imDerivativeLag.x) / eXST1.imDerivativeLag.T
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_813(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,813};
  data->localData[0]->realVars[66] /* eXST1.imDerivativeLag.y variable */ = (0.1) * (DIVISION_SIM(data->localData[0]->realVars[62] /* eXST1.Vm1.y variable */ - data->localData[0]->realVars[2] /* eXST1.imDerivativeLag.x STATE(1) */,data->simulationInfo->realParameter[120] /* eXST1.imDerivativeLag.T PARAM */,"eXST1.imDerivativeLag.T",equationIndexes));
  TRACE_POP
}

void residualFunc822(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,822};
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
  data->localData[0]->realVars[65] /* eXST1.feedback.y variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_808(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_809(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_810(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_811(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_812(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_813(data, threadData);
  /* body */
  res[0] = data->localData[0]->realVars[64] /* eXST1.add3_2.y variable */ + (-data->localData[0]->realVars[66] /* eXST1.imDerivativeLag.y variable */) - data->localData[0]->realVars[65] /* eXST1.feedback.y variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS822(NONLINEAR_SYSTEM_DATA* inSysData)
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
void initializeStaticDataNLS822(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for eXST1.feedback.y */
  sysData->nominal[i] = data->modelData->realVarsData[65].attribute /* eXST1.feedback.y */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[65].attribute /* eXST1.feedback.y */.min;
  sysData->max[i++]   = data->modelData->realVarsData[65].attribute /* eXST1.feedback.y */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS822(sysData);
}

void getIterationVarsNLS822(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[65] /* eXST1.feedback.y variable */;
}


/* inner equations */

/*
equation index: 692
type: SIMPLE_ASSIGN
constantLoad.v = sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_692(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,692};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[121] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[120] /* pwLine1.vs.im variable */;
  data->localData[0]->realVars[53] /* constantLoad.v variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 693
type: SIMPLE_ASSIGN
constantLoad.kI = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (-1.0 + constantLoad.b2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_693(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,693};
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
    tmp2 = -1.0 + data->simulationInfo->realParameter[64] /* constantLoad.b2 PARAM */;
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
    tmp9 = data->simulationInfo->realParameter[64] /* constantLoad.b2 PARAM */;
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
    tmp16 = (data->simulationInfo->realParameter[58] /* constantLoad.a2 PARAM */) * ((data->simulationInfo->realParameter[64] /* constantLoad.b2 PARAM */) * ((tmp3) * (exp(((-data->simulationInfo->realParameter[58] /* constantLoad.a2 PARAM */)) * (tmp10)))));
  }
  else
  {
    tmp16 = 1.0;
  }
  data->localData[0]->realVars[49] /* constantLoad.kI variable */ = tmp16;
  TRACE_POP
}
/*
equation index: 694
type: SIMPLE_ASSIGN
constantLoad.kP = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a0 + constantLoad.a1 * cos(constantLoad.v * constantLoad.wp) + constantLoad.b1 * sin(constantLoad.v * constantLoad.wp) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_694(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,694};
  modelica_boolean tmp0;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[53] /* constantLoad.v variable */, data->simulationInfo->realParameter[37] /* constantLoad.PQBRAK PARAM */, 6, Less);
  data->localData[0]->realVars[50] /* constantLoad.kP variable */ = (tmp0?data->simulationInfo->realParameter[56] /* constantLoad.a0 PARAM */ + (data->simulationInfo->realParameter[57] /* constantLoad.a1 PARAM */) * (cos((data->localData[0]->realVars[53] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[77] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[63] /* constantLoad.b1 PARAM */) * (sin((data->localData[0]->realVars[53] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[77] /* constantLoad.wp PARAM */))):1.0);
  TRACE_POP
}
/*
equation index: 695
type: SIMPLE_ASSIGN
constantLoad.Q = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_695(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,695};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */, 4, GreaterEq);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->timeValue, data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[67] /* constantLoad.d_t PARAM */, 5, LessEq);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[49] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[40] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[44] /* constantLoad.S_Y.im PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[50] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[42] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[66] /* constantLoad.d_Q PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[49] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[40] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[44] /* constantLoad.S_Y.im PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[50] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[42] /* constantLoad.S_P.im PARAM */);
  }
  data->localData[0]->realVars[47] /* constantLoad.Q variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 696
type: SIMPLE_ASSIGN
constantLoad.P = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_696(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,696};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */, 4, GreaterEq);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->timeValue, data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[67] /* constantLoad.d_t PARAM */, 5, LessEq);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[49] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[41] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[45] /* constantLoad.S_Y.re PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[50] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[43] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_P PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[49] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[41] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[45] /* constantLoad.S_Y.re PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[50] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[43] /* constantLoad.S_P.re PARAM */);
  }
  data->localData[0]->realVars[46] /* constantLoad.P variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 697
type: SIMPLE_ASSIGN
gENROE.PSId = gENROE.PSIppd - gENROE.Xppd * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_697(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,697};
  data->localData[0]->realVars[84] /* gENROE.PSId variable */ = data->localData[0]->realVars[86] /* gENROE.PSIppd variable */ - ((data->simulationInfo->realParameter[224] /* gENROE.Xppd PARAM */) * (data->localData[0]->realVars[94] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 698
type: SIMPLE_ASSIGN
pwLine.is.re = ($cse7 * gENROE.iq - (-$cse6) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_698(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,698};
  data->localData[0]->realVars[107] /* pwLine.is.re variable */ = ((data->localData[0]->realVars[29] /* $cse7 variable */) * (data->localData[0]->realVars[95] /* gENROE.iq variable */) - (((-data->localData[0]->realVars[28] /* $cse6 variable */)) * (data->localData[0]->realVars[94] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[170] /* gENROE.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 699
type: SIMPLE_ASSIGN
pwLine.is.im = ($cse6 * gENROE.iq - $cse7 * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_699(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,699};
  data->localData[0]->realVars[106] /* pwLine.is.im variable */ = ((data->localData[0]->realVars[28] /* $cse6 variable */) * (data->localData[0]->realVars[95] /* gENROE.iq variable */) - ((data->localData[0]->realVars[29] /* $cse7 variable */) * (data->localData[0]->realVars[94] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[170] /* gENROE.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 700
type: SIMPLE_ASSIGN
gENROE.uq = gENROE.PSId - gENROE.R_a * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_700(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,700};
  data->localData[0]->realVars[97] /* gENROE.uq variable */ = data->localData[0]->realVars[84] /* gENROE.PSId variable */ - ((data->simulationInfo->realParameter[207] /* gENROE.R_a PARAM */) * (data->localData[0]->realVars[95] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 701
type: SIMPLE_ASSIGN
gENROE.PSIq = (-gENROE.PSIppq) - gENROE.Xppq * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_701(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,701};
  data->localData[0]->realVars[88] /* gENROE.PSIq variable */ = (-data->localData[0]->realVars[87] /* gENROE.PSIppq variable */) - ((data->simulationInfo->realParameter[225] /* gENROE.Xppq PARAM */) * (data->localData[0]->realVars[95] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 702
type: SIMPLE_ASSIGN
gENROE.ud = (-gENROE.PSIq) - gENROE.R_a * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_702(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,702};
  data->localData[0]->realVars[96] /* gENROE.ud variable */ = (-data->localData[0]->realVars[88] /* gENROE.PSIq variable */) - ((data->simulationInfo->realParameter[207] /* gENROE.R_a PARAM */) * (data->localData[0]->realVars[94] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 703
type: SIMPLE_ASSIGN
pwLine.vs.im = $cse6 * gENROE.uq - $cse7 * gENROE.ud
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_703(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,703};
  data->localData[0]->realVars[108] /* pwLine.vs.im variable */ = (data->localData[0]->realVars[28] /* $cse6 variable */) * (data->localData[0]->realVars[97] /* gENROE.uq variable */) - ((data->localData[0]->realVars[29] /* $cse7 variable */) * (data->localData[0]->realVars[96] /* gENROE.ud variable */));
  TRACE_POP
}
/*
equation index: 704
type: SIMPLE_ASSIGN
pwLine.vs.re = $cse6 * gENROE.ud + $cse7 * gENROE.uq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_704(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,704};
  data->localData[0]->realVars[109] /* pwLine.vs.re variable */ = (data->localData[0]->realVars[28] /* $cse6 variable */) * (data->localData[0]->realVars[96] /* gENROE.ud variable */) + (data->localData[0]->realVars[29] /* $cse7 variable */) * (data->localData[0]->realVars[97] /* gENROE.uq variable */);
  TRACE_POP
}
/*
equation index: 705
type: SIMPLE_ASSIGN
gENCLS.p.ir = ((-$cse1) * gENCLS.id - $cse2 * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_705(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,705};
  data->localData[0]->realVars[78] /* gENCLS.p.ir variable */ = (((-data->localData[0]->realVars[24] /* $cse1 variable */)) * (data->localData[0]->realVars[74] /* gENCLS.id variable */) - ((data->localData[0]->realVars[25] /* $cse2 variable */) * (data->localData[0]->realVars[75] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[144] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 706
type: SIMPLE_ASSIGN
gENCLS.p.ii = ($cse2 * gENCLS.id - $cse1 * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_706(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,706};
  data->localData[0]->realVars[77] /* gENCLS.p.ii variable */ = ((data->localData[0]->realVars[25] /* $cse2 variable */) * (data->localData[0]->realVars[74] /* gENCLS.id variable */) - ((data->localData[0]->realVars[24] /* $cse1 variable */) * (data->localData[0]->realVars[75] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[144] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 707
type: SIMPLE_ASSIGN
gENCLS.vq = gENCLS.eq + (-gENCLS.R_a) * gENCLS.iq - gENCLS.X_d * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_707(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,707};
  data->localData[0]->realVars[80] /* gENCLS.vq variable */ = data->localData[0]->realVars[5] /* gENCLS.eq STATE(1) */ + ((-data->simulationInfo->realParameter[150] /* gENCLS.R_a PARAM */)) * (data->localData[0]->realVars[75] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[153] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[74] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 708
type: SIMPLE_ASSIGN
gENCLS.vd = gENCLS.X_d * gENCLS.iq - gENCLS.R_a * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_708(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,708};
  data->localData[0]->realVars[79] /* gENCLS.vd variable */ = (data->simulationInfo->realParameter[153] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[75] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[150] /* gENCLS.R_a PARAM */) * (data->localData[0]->realVars[74] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 709
type: SIMPLE_ASSIGN
pwLine4.ir.im = (-pwLine1.ir.im) - gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_709(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,709};
  data->localData[0]->realVars[136] /* pwLine4.ir.im variable */ = (-data->localData[0]->realVars[114] /* pwLine1.ir.im variable */) - data->localData[0]->realVars[77] /* gENCLS.p.ii variable */;
  TRACE_POP
}
/*
equation index: 710
type: SIMPLE_ASSIGN
pwLine4.ir.re = (-pwLine1.ir.re) - gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_710(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,710};
  data->localData[0]->realVars[137] /* pwLine4.ir.re variable */ = (-data->localData[0]->realVars[115] /* pwLine1.ir.re variable */) - data->localData[0]->realVars[78] /* gENCLS.p.ir variable */;
  TRACE_POP
}
/*
equation index: 711
type: SIMPLE_ASSIGN
pwFault.p.ii = (-pwLine3.ir.im) - pwLine4.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_711(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,711};
  data->localData[0]->realVars[98] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[126] /* pwLine3.ir.im variable */) - data->localData[0]->realVars[138] /* pwLine4.is.im variable */;
  TRACE_POP
}
/*
equation index: 712
type: SIMPLE_ASSIGN
pwFault.p.ir = (-pwLine3.ir.re) - pwLine4.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_712(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,712};
  data->localData[0]->realVars[99] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[127] /* pwLine3.ir.re variable */) - data->localData[0]->realVars[139] /* pwLine4.is.re variable */;
  TRACE_POP
}
/*
equation index: 713
type: SIMPLE_ASSIGN
constantLoad.p.ii = (-pwLine.ir.im) - pwLine1.is.im - pwLine3.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_713(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,713};
  data->localData[0]->realVars[51] /* constantLoad.p.ii variable */ = (-data->localData[0]->realVars[104] /* pwLine.ir.im variable */) - data->localData[0]->realVars[116] /* pwLine1.is.im variable */ - data->localData[0]->realVars[128] /* pwLine3.is.im variable */;
  TRACE_POP
}
/*
equation index: 714
type: SIMPLE_ASSIGN
pwLine.ir.re = (-pwLine1.is.re) - pwLine3.is.re - constantLoad.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_714(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,714};
  data->localData[0]->realVars[105] /* pwLine.ir.re variable */ = (-data->localData[0]->realVars[117] /* pwLine1.is.re variable */) - data->localData[0]->realVars[129] /* pwLine3.is.re variable */ - data->localData[0]->realVars[52] /* constantLoad.p.ir variable */;
  TRACE_POP
}

void residualFunc782(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,782};
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
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_692(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_693(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_694(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_695(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_696(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_697(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_698(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_699(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_700(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_701(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_702(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_703(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_704(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_705(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_706(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_707(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_708(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_709(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_710(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_711(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_712(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_713(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_714(data, threadData);
  /* body */
  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, data->simulationInfo->realParameter[279] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->timeValue, data->simulationInfo->realParameter[280] /* pwLine1.t2 PARAM */, 3, Less);
  res[0] = ((tmp0 && tmp1)?data->localData[0]->realVars[117] /* pwLine1.is.re variable */:data->localData[0]->realVars[121] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[119] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[278] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[117] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[275] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[121] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[276] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[277] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[116] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[121] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[275] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[276] /* pwLine1.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp2, data->localData[0]->timeValue, data->simulationInfo->realParameter[257] /* pwFault.t1 PARAM */, 12, Less);
  tmp11 = (modelica_boolean)tmp2;
  if(tmp11)
  {
    tmp12 = data->localData[0]->realVars[99] /* pwFault.p.ir variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp3, data->localData[0]->timeValue, data->simulationInfo->realParameter[258] /* pwFault.t2 PARAM */, 13, Less);
    tmp9 = (modelica_boolean)(tmp3 && data->simulationInfo->booleanParameter[66] /* pwFault.ground PARAM */);
    if(tmp9)
    {
      tmp10 = data->localData[0]->realVars[130] /* pwLine3.vr.im variable */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp4, data->localData[0]->timeValue, data->simulationInfo->realParameter[258] /* pwFault.t2 PARAM */, 13, Less);
      tmp7 = (modelica_boolean)tmp4;
      if(tmp7)
      {
        tmp5 = data->simulationInfo->realParameter[255] /* pwFault.R PARAM */;
        tmp6 = data->simulationInfo->realParameter[256] /* pwFault.X PARAM */;
        tmp8 = data->localData[0]->realVars[99] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[255] /* pwFault.R PARAM */) * (data->localData[0]->realVars[131] /* pwLine3.vr.re variable */) + (data->simulationInfo->realParameter[256] /* pwFault.X PARAM */) * (data->localData[0]->realVars[130] /* pwLine3.vr.im variable */),(tmp5 * tmp5) + (tmp6 * tmp6),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
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

  RELATIONHYSTERESIS(tmp13, data->localData[0]->timeValue, data->simulationInfo->realParameter[257] /* pwFault.t1 PARAM */, 12, Less);
  tmp22 = (modelica_boolean)tmp13;
  if(tmp22)
  {
    tmp23 = data->localData[0]->realVars[98] /* pwFault.p.ii variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp14, data->localData[0]->timeValue, data->simulationInfo->realParameter[258] /* pwFault.t2 PARAM */, 13, Less);
    tmp20 = (modelica_boolean)(tmp14 && data->simulationInfo->booleanParameter[66] /* pwFault.ground PARAM */);
    if(tmp20)
    {
      tmp21 = data->localData[0]->realVars[131] /* pwLine3.vr.re variable */ - 1e-10;
    }
    else
    {
      RELATIONHYSTERESIS(tmp15, data->localData[0]->timeValue, data->simulationInfo->realParameter[258] /* pwFault.t2 PARAM */, 13, Less);
      tmp18 = (modelica_boolean)tmp15;
      if(tmp18)
      {
        tmp16 = data->simulationInfo->realParameter[256] /* pwFault.X PARAM */;
        tmp17 = data->simulationInfo->realParameter[255] /* pwFault.R PARAM */;
        tmp19 = data->localData[0]->realVars[98] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[255] /* pwFault.R PARAM */) * (data->localData[0]->realVars[130] /* pwLine3.vr.im variable */) - ((data->simulationInfo->realParameter[256] /* pwFault.X PARAM */) * (data->localData[0]->realVars[131] /* pwLine3.vr.re variable */)),(tmp16 * tmp16) + (tmp17 * tmp17),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
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

  RELATIONHYSTERESIS(tmp24, data->localData[0]->timeValue, data->simulationInfo->realParameter[301] /* pwLine4.t1 PARAM */, 10, GreaterEq);
  RELATIONHYSTERESIS(tmp25, data->localData[0]->timeValue, data->simulationInfo->realParameter[302] /* pwLine4.t2 PARAM */, 11, Less);
  res[3] = ((tmp24 && tmp25)?data->localData[0]->realVars[137] /* pwLine4.ir.re variable */:data->localData[0]->realVars[119] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[131] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[300] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[137] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[118] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[297] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[119] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[298] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[299] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[136] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[119] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[297] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[118] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[298] /* pwLine4.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp26, data->localData[0]->timeValue, data->simulationInfo->realParameter[301] /* pwLine4.t1 PARAM */, 10, GreaterEq);
  RELATIONHYSTERESIS(tmp27, data->localData[0]->timeValue, data->simulationInfo->realParameter[302] /* pwLine4.t2 PARAM */, 11, Less);
  res[4] = ((tmp26 && tmp27)?data->localData[0]->realVars[136] /* pwLine4.ir.im variable */:data->localData[0]->realVars[118] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[130] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[300] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[136] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[119] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[297] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[118] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[298] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[299] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[137] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[118] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[297] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[119] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[298] /* pwLine4.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp28, data->localData[0]->timeValue, data->simulationInfo->realParameter[301] /* pwLine4.t1 PARAM */, 10, GreaterEq);
  RELATIONHYSTERESIS(tmp29, data->localData[0]->timeValue, data->simulationInfo->realParameter[302] /* pwLine4.t2 PARAM */, 11, Less);
  res[5] = ((tmp28 && tmp29)?data->localData[0]->realVars[139] /* pwLine4.is.re variable */:data->localData[0]->realVars[131] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[119] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[300] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[139] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[130] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[297] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[131] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[298] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[299] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[138] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[131] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[297] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[130] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[298] /* pwLine4.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp30, data->localData[0]->timeValue, data->simulationInfo->realParameter[301] /* pwLine4.t1 PARAM */, 10, GreaterEq);
  RELATIONHYSTERESIS(tmp31, data->localData[0]->timeValue, data->simulationInfo->realParameter[302] /* pwLine4.t2 PARAM */, 11, Less);
  res[6] = ((tmp30 && tmp31)?data->localData[0]->realVars[138] /* pwLine4.is.im variable */:data->localData[0]->realVars[130] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[118] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[300] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[138] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[131] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[297] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[130] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[298] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[299] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[139] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[130] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[297] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[131] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[298] /* pwLine4.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp32, data->localData[0]->timeValue, data->simulationInfo->realParameter[290] /* pwLine3.t1 PARAM */, 8, GreaterEq);
  RELATIONHYSTERESIS(tmp33, data->localData[0]->timeValue, data->simulationInfo->realParameter[291] /* pwLine3.t2 PARAM */, 9, Less);
  res[7] = ((tmp32 && tmp33)?data->localData[0]->realVars[126] /* pwLine3.ir.im variable */:data->localData[0]->realVars[130] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[120] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[289] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[126] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[131] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[286] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[130] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[287] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[288] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[127] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[130] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[286] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[131] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[287] /* pwLine3.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp34, data->localData[0]->timeValue, data->simulationInfo->realParameter[290] /* pwLine3.t1 PARAM */, 8, GreaterEq);
  RELATIONHYSTERESIS(tmp35, data->localData[0]->timeValue, data->simulationInfo->realParameter[291] /* pwLine3.t2 PARAM */, 9, Less);
  res[8] = ((tmp34 && tmp35)?data->localData[0]->realVars[127] /* pwLine3.ir.re variable */:data->localData[0]->realVars[131] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[121] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[289] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[127] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[130] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[286] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[131] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[287] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[288] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[126] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[131] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[286] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[130] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[287] /* pwLine3.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp36, data->localData[0]->timeValue, data->simulationInfo->realParameter[279] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp37, data->localData[0]->timeValue, data->simulationInfo->realParameter[280] /* pwLine1.t2 PARAM */, 3, Less);
  res[9] = ((tmp36 && tmp37)?data->localData[0]->realVars[115] /* pwLine1.ir.re variable */:data->localData[0]->realVars[119] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[121] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[278] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[115] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[118] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[275] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[119] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[276] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[277] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[114] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[119] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[275] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[118] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[276] /* pwLine1.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp38, data->localData[0]->timeValue, data->simulationInfo->realParameter[268] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp39, data->localData[0]->timeValue, data->simulationInfo->realParameter[269] /* pwLine.t2 PARAM */, 1, Less);
  res[10] = ((tmp38 && tmp39)?data->localData[0]->realVars[104] /* pwLine.ir.im variable */:data->localData[0]->realVars[120] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[108] /* pwLine.vs.im variable */ - ((data->simulationInfo->realParameter[267] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[104] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[121] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[264] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[265] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[266] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[105] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[264] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[121] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[265] /* pwLine.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp40, data->localData[0]->timeValue, data->simulationInfo->realParameter[268] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp41, data->localData[0]->timeValue, data->simulationInfo->realParameter[269] /* pwLine.t2 PARAM */, 1, Less);
  res[11] = ((tmp40 && tmp41)?data->localData[0]->realVars[106] /* pwLine.is.im variable */:data->localData[0]->realVars[108] /* pwLine.vs.im variable */ - data->localData[0]->realVars[120] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[267] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[106] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[109] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[264] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[108] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[265] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[266] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[107] /* pwLine.is.re variable */ + (data->localData[0]->realVars[108] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[264] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[109] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[265] /* pwLine.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp42, data->localData[0]->timeValue, data->simulationInfo->realParameter[268] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp43, data->localData[0]->timeValue, data->simulationInfo->realParameter[269] /* pwLine.t2 PARAM */, 1, Less);
  res[12] = ((tmp42 && tmp43)?data->localData[0]->realVars[107] /* pwLine.is.re variable */:data->localData[0]->realVars[109] /* pwLine.vs.re variable */ - data->localData[0]->realVars[121] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[267] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[107] /* pwLine.is.re variable */ + (data->localData[0]->realVars[108] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[264] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[109] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[265] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[266] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[106] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[109] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[264] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[108] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[265] /* pwLine.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp44, data->localData[0]->timeValue, data->simulationInfo->realParameter[290] /* pwLine3.t1 PARAM */, 8, GreaterEq);
  RELATIONHYSTERESIS(tmp45, data->localData[0]->timeValue, data->simulationInfo->realParameter[291] /* pwLine3.t2 PARAM */, 9, Less);
  res[13] = ((tmp44 && tmp45)?data->localData[0]->realVars[129] /* pwLine3.is.re variable */:data->localData[0]->realVars[121] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[131] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[289] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[129] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[286] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[121] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[287] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[288] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[128] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[121] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[286] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[287] /* pwLine3.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp46, data->localData[0]->timeValue, data->simulationInfo->realParameter[290] /* pwLine3.t1 PARAM */, 8, GreaterEq);
  RELATIONHYSTERESIS(tmp47, data->localData[0]->timeValue, data->simulationInfo->realParameter[291] /* pwLine3.t2 PARAM */, 9, Less);
  res[14] = ((tmp46 && tmp47)?data->localData[0]->realVars[128] /* pwLine3.is.im variable */:data->localData[0]->realVars[120] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[130] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[289] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[128] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[121] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[286] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[287] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[288] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[129] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[286] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[121] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[287] /* pwLine3.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp48, data->localData[0]->timeValue, data->simulationInfo->realParameter[268] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp49, data->localData[0]->timeValue, data->simulationInfo->realParameter[269] /* pwLine.t2 PARAM */, 1, Less);
  res[15] = ((tmp48 && tmp49)?data->localData[0]->realVars[105] /* pwLine.ir.re variable */:data->localData[0]->realVars[121] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[109] /* pwLine.vs.re variable */ - ((data->simulationInfo->realParameter[267] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[105] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[264] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[121] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[265] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[266] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[104] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[121] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[264] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[265] /* pwLine.Y.re PARAM */))))));

  res[16] = (data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[52] /* constantLoad.p.ir variable */) + ((-data->localData[0]->realVars[121] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[51] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[47] /* constantLoad.Q variable */;

  res[17] = (data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[51] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[121] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[52] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[46] /* constantLoad.P variable */;

  RELATIONHYSTERESIS(tmp50, data->localData[0]->timeValue, data->simulationInfo->realParameter[279] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp51, data->localData[0]->timeValue, data->simulationInfo->realParameter[280] /* pwLine1.t2 PARAM */, 3, Less);
  res[18] = ((tmp50 && tmp51)?data->localData[0]->realVars[116] /* pwLine1.is.im variable */:data->localData[0]->realVars[120] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[118] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[278] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[116] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[121] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[275] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[276] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[277] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[117] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[275] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[121] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[276] /* pwLine1.Y.re PARAM */)))));

  res[19] = (data->localData[0]->realVars[24] /* $cse1 variable */) * (data->localData[0]->realVars[80] /* gENCLS.vq variable */) + ((-data->localData[0]->realVars[25] /* $cse2 variable */)) * (data->localData[0]->realVars[79] /* gENCLS.vd variable */) - data->localData[0]->realVars[118] /* pwLine1.vr.im variable */;

  RELATIONHYSTERESIS(tmp52, data->localData[0]->timeValue, data->simulationInfo->realParameter[279] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp53, data->localData[0]->timeValue, data->simulationInfo->realParameter[280] /* pwLine1.t2 PARAM */, 3, Less);
  res[20] = ((tmp52 && tmp53)?data->localData[0]->realVars[114] /* pwLine1.ir.im variable */:data->localData[0]->realVars[118] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[120] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[278] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[114] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[119] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[275] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[118] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[276] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[277] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[115] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[118] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[275] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[119] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[276] /* pwLine1.Y.re PARAM */)))));

  res[21] = (data->localData[0]->realVars[25] /* $cse2 variable */) * (data->localData[0]->realVars[80] /* gENCLS.vq variable */) + (data->localData[0]->realVars[24] /* $cse1 variable */) * (data->localData[0]->realVars[79] /* gENCLS.vd variable */) - data->localData[0]->realVars[119] /* pwLine1.vr.re variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS782(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+22] = {0,4,4,4,4,4,3,3,3,3,4,4,4,4,4,7,7,4,4,11,11,8,8};
  const int rowIndex[112] = {10,15,16,17,10,13,14,15,0,16,17,18,13,14,16,17,10,15,16,17,1,7,8,1,5,6,2,7,8,2,5,6,0,10,15,18,3,4,9,20,3,4,9,20,3,4,19,21,3,4,19,21,0,3,4,5,9,20,21,3,4,6,9,18,19,20,10,11,12,15,10,11,12,15,0,7,10,11,13,14,15,16,17,18,20,0,8,9,10,12,13,14,15,16,17,18,1,2,4,5,6,7,8,14,1,2,3,5,6,7,8,13};
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
  inSysData->sparsePattern->colorCols[17] = 5;
  inSysData->sparsePattern->colorCols[14] = 6;
  inSysData->sparsePattern->colorCols[16] = 6;
  inSysData->sparsePattern->colorCols[4] = 7;
  inSysData->sparsePattern->colorCols[13] = 7;
  inSysData->sparsePattern->colorCols[3] = 8;
  inSysData->sparsePattern->colorCols[9] = 8;
  inSysData->sparsePattern->colorCols[12] = 8;
  inSysData->sparsePattern->colorCols[1] = 9;
  inSysData->sparsePattern->colorCols[2] = 9;
  inSysData->sparsePattern->colorCols[6] = 9;
  inSysData->sparsePattern->colorCols[7] = 9;
  inSysData->sparsePattern->colorCols[11] = 9;
  inSysData->sparsePattern->colorCols[0] = 10;
  inSysData->sparsePattern->colorCols[5] = 10;
  inSysData->sparsePattern->colorCols[8] = 10;
  inSysData->sparsePattern->colorCols[10] = 10;
}
void initializeStaticDataNLS782(void *inData, threadData_t *threadData, void *inSystemData)
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
  initializeSparsePatternNLS782(sysData);
}

void getIterationVarsNLS782(struct DATA *inData, double *array)
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
equation index: 551
type: SIMPLE_ASSIGN
constantLoad.v = sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_551(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,551};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[121] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[120] /* pwLine1.vs.im variable */;
  data->localData[0]->realVars[53] /* constantLoad.v variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 552
type: SIMPLE_ASSIGN
constantLoad.kI = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (-1.0 + constantLoad.b2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_552(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,552};
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
    tmp2 = -1.0 + data->simulationInfo->realParameter[64] /* constantLoad.b2 PARAM */;
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
    tmp9 = data->simulationInfo->realParameter[64] /* constantLoad.b2 PARAM */;
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
    tmp16 = (data->simulationInfo->realParameter[58] /* constantLoad.a2 PARAM */) * ((data->simulationInfo->realParameter[64] /* constantLoad.b2 PARAM */) * ((tmp3) * (exp(((-data->simulationInfo->realParameter[58] /* constantLoad.a2 PARAM */)) * (tmp10)))));
  }
  else
  {
    tmp16 = 1.0;
  }
  data->localData[0]->realVars[49] /* constantLoad.kI variable */ = tmp16;
  TRACE_POP
}
/*
equation index: 553
type: SIMPLE_ASSIGN
constantLoad.kP = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a0 + constantLoad.a1 * cos(constantLoad.v * constantLoad.wp) + constantLoad.b1 * sin(constantLoad.v * constantLoad.wp) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_553(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,553};
  modelica_boolean tmp0;
  tmp0 = Less(data->localData[0]->realVars[53] /* constantLoad.v variable */,data->simulationInfo->realParameter[37] /* constantLoad.PQBRAK PARAM */);
  data->localData[0]->realVars[50] /* constantLoad.kP variable */ = (tmp0?data->simulationInfo->realParameter[56] /* constantLoad.a0 PARAM */ + (data->simulationInfo->realParameter[57] /* constantLoad.a1 PARAM */) * (cos((data->localData[0]->realVars[53] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[77] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[63] /* constantLoad.b1 PARAM */) * (sin((data->localData[0]->realVars[53] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[77] /* constantLoad.wp PARAM */))):1.0);
  TRACE_POP
}
/*
equation index: 554
type: SIMPLE_ASSIGN
constantLoad.Q = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_554(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,554};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */);
  tmp1 = LessEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[67] /* constantLoad.d_t PARAM */);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[49] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[40] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[44] /* constantLoad.S_Y.im PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[50] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[42] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[66] /* constantLoad.d_Q PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[49] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[40] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[44] /* constantLoad.S_Y.im PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[50] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[42] /* constantLoad.S_P.im PARAM */);
  }
  data->localData[0]->realVars[47] /* constantLoad.Q variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 555
type: SIMPLE_ASSIGN
constantLoad.P = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_555(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,555};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */);
  tmp1 = LessEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[67] /* constantLoad.d_t PARAM */);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[49] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[41] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[45] /* constantLoad.S_Y.re PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[50] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[43] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_P PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[49] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[41] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[45] /* constantLoad.S_Y.re PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[50] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[43] /* constantLoad.S_P.re PARAM */);
  }
  data->localData[0]->realVars[46] /* constantLoad.P variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 556
type: SIMPLE_ASSIGN
eXST1.ECOMP0 = eXST1.ECOMP
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_556(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,556};
  data->simulationInfo->realParameter[81] /* eXST1.ECOMP0 PARAM */ = data->localData[0]->realVars[56] /* eXST1.ECOMP variable */;
  TRACE_POP
}
/*
equation index: 557
type: SIMPLE_ASSIGN
eXST1.V_REF = eXST1.Efd0 / eXST1.K_A + eXST1.ECOMP0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_557(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,557};
  data->simulationInfo->realParameter[106] /* eXST1.V_REF PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[82] /* eXST1.Efd0 PARAM */,data->simulationInfo->realParameter[83] /* eXST1.K_A PARAM */,"eXST1.K_A",equationIndexes) + data->simulationInfo->realParameter[81] /* eXST1.ECOMP0 PARAM */;
  TRACE_POP
}
/*
equation index: 558
type: SIMPLE_ASSIGN
eXST1.VoltageReference.k = eXST1.V_REF
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_558(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,558};
  data->simulationInfo->realParameter[114] /* eXST1.VoltageReference.k PARAM */ = data->simulationInfo->realParameter[106] /* eXST1.V_REF PARAM */;
  TRACE_POP
}
/*
equation index: 559
type: SIMPLE_ASSIGN
eXST1.TransducerDelay.y_start = eXST1.ECOMP0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_559(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,559};
  data->simulationInfo->realParameter[100] /* eXST1.TransducerDelay.y_start PARAM */ = data->simulationInfo->realParameter[81] /* eXST1.ECOMP0 PARAM */;
  TRACE_POP
}
/*
equation index: 560
type: SIMPLE_ASSIGN
$START.eXST1.DiffV.u2 = eXST1.TransducerDelay.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_560(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,560};
  data->modelData->realVarsData[54].attribute /* eXST1.DiffV.u2 variable */.start = data->simulationInfo->realParameter[100] /* eXST1.TransducerDelay.y_start PARAM */;
    data->localData[0]->realVars[54] /* eXST1.DiffV.u2 variable */ = data->modelData->realVarsData[54].attribute /* eXST1.DiffV.u2 variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[54].info /* eXST1.DiffV.u2 */.name, (modelica_real) data->localData[0]->realVars[54] /* eXST1.DiffV.u2 variable */);
  TRACE_POP
}
/*
equation index: 561
type: SIMPLE_ASSIGN
$START.eXST1.TransducerDelay.state = eXST1.TransducerDelay.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_561(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,561};
  data->modelData->realVarsData[0].attribute /* eXST1.TransducerDelay.state STATE(1) */.start = data->simulationInfo->realParameter[100] /* eXST1.TransducerDelay.y_start PARAM */;
    data->localData[0]->realVars[0] /* eXST1.TransducerDelay.state STATE(1) */ = data->modelData->realVarsData[0].attribute /* eXST1.TransducerDelay.state STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[0].info /* eXST1.TransducerDelay.state */.name, (modelica_real) data->localData[0]->realVars[0] /* eXST1.TransducerDelay.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 562
type: SIMPLE_ASSIGN
eXST1.TransducerDelay.state = eXST1.TransducerDelay.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_562(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,562};
  data->localData[0]->realVars[0] /* eXST1.TransducerDelay.state STATE(1) */ = data->simulationInfo->realParameter[100] /* eXST1.TransducerDelay.y_start PARAM */;
  TRACE_POP
}
/*
equation index: 563
type: SIMPLE_ASSIGN
eXST1.DiffV.u2 = if abs(eXST1.TransducerDelay.T) <= 1e-15 then eXST1.ECOMP * eXST1.TransducerDelay.K else eXST1.TransducerDelay.state
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_563(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,563};
  modelica_boolean tmp0;
  tmp0 = LessEq(fabs(data->simulationInfo->realParameter[97] /* eXST1.TransducerDelay.T PARAM */),1e-15);
  data->localData[0]->realVars[54] /* eXST1.DiffV.u2 variable */ = (tmp0?(data->localData[0]->realVars[56] /* eXST1.ECOMP variable */) * (data->simulationInfo->realParameter[96] /* eXST1.TransducerDelay.K PARAM */):data->localData[0]->realVars[0] /* eXST1.TransducerDelay.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 564
type: SIMPLE_ASSIGN
eXST1.DiffV.y = eXST1.DiffV.k1 * eXST1.VoltageReference.k + eXST1.DiffV.k2 * eXST1.DiffV.u2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_564(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,564};
  data->localData[0]->realVars[55] /* eXST1.DiffV.y variable */ = (data->simulationInfo->realParameter[78] /* eXST1.DiffV.k1 PARAM */) * (data->simulationInfo->realParameter[114] /* eXST1.VoltageReference.k PARAM */) + (data->simulationInfo->realParameter[79] /* eXST1.DiffV.k2 PARAM */) * (data->localData[0]->realVars[54] /* eXST1.DiffV.u2 variable */);
  TRACE_POP
}
/*
equation index: 565
type: SIMPLE_ASSIGN
eXST1.add3_2.y = eXST1.add3_2.k1 * const.k + eXST1.add3_2.k2 * eXST1.DiffV.y + eXST1.add3_2.k3 * eXST1.Limiters.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_565(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,565};
  data->localData[0]->realVars[64] /* eXST1.add3_2.y variable */ = (data->simulationInfo->realParameter[116] /* eXST1.add3_2.k1 PARAM */) * (data->simulationInfo->realParameter[34] /* const.k PARAM */) + (data->simulationInfo->realParameter[117] /* eXST1.add3_2.k2 PARAM */) * (data->localData[0]->realVars[55] /* eXST1.DiffV.y variable */) + (data->simulationInfo->realParameter[118] /* eXST1.add3_2.k3 PARAM */) * (data->localData[0]->realVars[61] /* eXST1.Limiters.y variable */);
  TRACE_POP
}
/*
equation index: 566
type: SIMPLE_ASSIGN
eXST1.feedback.y = eXST1.add3_2.y - eXST1.imDerivativeLag.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_566(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,566};
  data->localData[0]->realVars[65] /* eXST1.feedback.y variable */ = data->localData[0]->realVars[64] /* eXST1.add3_2.y variable */ - data->localData[0]->realVars[66] /* eXST1.imDerivativeLag.y variable */;
  TRACE_POP
}
/*
equation index: 567
type: SIMPLE_ASSIGN
eXST1.imLeadLag.u = eXST1.feedback.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_567(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,567};
  data->localData[0]->realVars[69] /* eXST1.imLeadLag.u variable */ = data->localData[0]->realVars[65] /* eXST1.feedback.y variable */;
  TRACE_POP
}
/*
equation index: 568
type: SIMPLE_ASSIGN
eXST1.K_a.u = if abs(eXST1.imLeadLag.T1 - eXST1.imLeadLag.T2) < 1e-15 then eXST1.imLeadLag.K * eXST1.imLeadLag.u else eXST1.imLeadLag.TF.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_568(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,568};
  modelica_boolean tmp0;
  tmp0 = Less(fabs(data->simulationInfo->realParameter[125] /* eXST1.imLeadLag.T1 PARAM */ - data->simulationInfo->realParameter[126] /* eXST1.imLeadLag.T2 PARAM */),1e-15);
  data->localData[0]->realVars[59] /* eXST1.K_a.u variable */ = (tmp0?(data->simulationInfo->realParameter[124] /* eXST1.imLeadLag.K PARAM */) * (data->localData[0]->realVars[69] /* eXST1.imLeadLag.u variable */):data->localData[0]->realVars[68] /* eXST1.imLeadLag.TF.y variable */);
  TRACE_POP
}
/*
equation index: 569
type: SIMPLE_ASSIGN
eXST1.K_a.y = eXST1.K_a.k * eXST1.K_a.u
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_569(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,569};
  data->localData[0]->realVars[60] /* eXST1.K_a.y variable */ = (data->simulationInfo->realParameter[86] /* eXST1.K_a.k PARAM */) * (data->localData[0]->realVars[59] /* eXST1.K_a.u variable */);
  TRACE_POP
}
/*
equation index: 570
type: SIMPLE_ASSIGN
eXST1.Vm1.y = if abs(eXST1.Vm1.T) <= 1e-15 then eXST1.K_a.y * eXST1.Vm1.K else eXST1.Vm1.state
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_570(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,570};
  modelica_boolean tmp0;
  tmp0 = LessEq(fabs(data->simulationInfo->realParameter[110] /* eXST1.Vm1.T PARAM */),1e-15);
  data->localData[0]->realVars[62] /* eXST1.Vm1.y variable */ = (tmp0?(data->localData[0]->realVars[60] /* eXST1.K_a.y variable */) * (data->simulationInfo->realParameter[109] /* eXST1.Vm1.K PARAM */):data->localData[0]->realVars[1] /* eXST1.Vm1.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 571
type: SIMPLE_ASSIGN
eXST1.EFD = eXST1.XADIFD + $DER.gENROE.Epq * gENROE.Tpd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_571(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,571};
  data->localData[0]->realVars[57] /* eXST1.EFD variable */ = data->localData[0]->realVars[63] /* eXST1.XADIFD variable */ + (data->localData[0]->realVars[19] /* der(gENROE.Epq) STATE_DER */) * (data->simulationInfo->realParameter[213] /* gENROE.Tpd0 PARAM */);
  TRACE_POP
}
/*
equation index: 572
type: SIMPLE_ASSIGN
pwLine.is.re = (cos(gENROE.delta) * gENROE.iq - (-sin(gENROE.delta)) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_572(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,572};
  data->localData[0]->realVars[107] /* pwLine.is.re variable */ = ((cos(data->localData[0]->realVars[10] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[95] /* gENROE.iq variable */) - (((-sin(data->localData[0]->realVars[10] /* gENROE.delta STATE(1) */))) * (data->localData[0]->realVars[94] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[170] /* gENROE.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 573
type: SIMPLE_ASSIGN
pwLine.is.im = (sin(gENROE.delta) * gENROE.iq - cos(gENROE.delta) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_573(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,573};
  data->localData[0]->realVars[106] /* pwLine.is.im variable */ = ((sin(data->localData[0]->realVars[10] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[95] /* gENROE.iq variable */) - ((cos(data->localData[0]->realVars[10] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[94] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[170] /* gENROE.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 574
type: SIMPLE_ASSIGN
gENROE.PSId = gENROE.PSIppd - gENROE.Xppd * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_574(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,574};
  data->localData[0]->realVars[84] /* gENROE.PSId variable */ = data->localData[0]->realVars[86] /* gENROE.PSIppd variable */ - ((data->simulationInfo->realParameter[224] /* gENROE.Xppd PARAM */) * (data->localData[0]->realVars[94] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 575
type: SIMPLE_ASSIGN
gENROE.uq = gENROE.PSId - gENROE.R_a * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_575(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,575};
  data->localData[0]->realVars[97] /* gENROE.uq variable */ = data->localData[0]->realVars[84] /* gENROE.PSId variable */ - ((data->simulationInfo->realParameter[207] /* gENROE.R_a PARAM */) * (data->localData[0]->realVars[95] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 576
type: SIMPLE_ASSIGN
gENROE.PSIpp = sqrt(gENROE.PSIppd ^ 2.0 + gENROE.PSIppq ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_576(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,576};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[86] /* gENROE.PSIppd variable */;
  tmp1 = data->localData[0]->realVars[87] /* gENROE.PSIppq variable */;
  data->localData[0]->realVars[85] /* gENROE.PSIpp variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 577
type: SIMPLE_ASSIGN
gENROE.PSIq = (-gENROE.PSIppq) - gENROE.Xppq * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_577(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,577};
  data->localData[0]->realVars[88] /* gENROE.PSIq variable */ = (-data->localData[0]->realVars[87] /* gENROE.PSIppq variable */) - ((data->simulationInfo->realParameter[225] /* gENROE.Xppq PARAM */) * (data->localData[0]->realVars[95] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 578
type: SIMPLE_ASSIGN
gENROE.ud = (-gENROE.PSIq) - gENROE.R_a * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_578(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,578};
  data->localData[0]->realVars[96] /* gENROE.ud variable */ = (-data->localData[0]->realVars[88] /* gENROE.PSIq variable */) - ((data->simulationInfo->realParameter[207] /* gENROE.R_a PARAM */) * (data->localData[0]->realVars[94] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 579
type: SIMPLE_ASSIGN
gENROE.PSIkq = ((gENROE.Epd + (gENROE.Xpq - gENROE.Xl) * gENROE.iq) * gENROE.K1q + gENROE.Epd + gENROE.iq * (gENROE.Xpq - gENROE.Xq) + OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2) * gENROE.PSIppq * (gENROE.Xq - gENROE.Xl) / (gENROE.Xd - gENROE.Xl) - gENROE.XaqIlq) / gENROE.K1q
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_579(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,579};
  data->localData[0]->realVars[9] /* gENROE.PSIkq STATE(1) */ = DIVISION_SIM((data->localData[0]->realVars[6] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[226] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[221] /* gENROE.Xl PARAM */) * (data->localData[0]->realVars[95] /* gENROE.iq variable */)) * (data->simulationInfo->realParameter[185] /* gENROE.K1q PARAM */) + data->localData[0]->realVars[6] /* gENROE.Epd STATE(1) */ + (data->localData[0]->realVars[95] /* gENROE.iq variable */) * (data->simulationInfo->realParameter[226] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[227] /* gENROE.Xq PARAM */) + (omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[85] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[210] /* gENROE.S10 PARAM */, data->simulationInfo->realParameter[211] /* gENROE.S12 PARAM */, 1.0, 1.2)) * ((data->localData[0]->realVars[87] /* gENROE.PSIppq variable */) * (DIVISION_SIM(data->simulationInfo->realParameter[227] /* gENROE.Xq PARAM */ - data->simulationInfo->realParameter[221] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[220] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[221] /* gENROE.Xl PARAM */,"gENROE.Xd - gENROE.Xl",equationIndexes))) - data->localData[0]->realVars[91] /* gENROE.XaqIlq variable */,data->simulationInfo->realParameter[185] /* gENROE.K1q PARAM */,"gENROE.K1q",equationIndexes);
  TRACE_POP
}
/*
equation index: 580
type: SIMPLE_ASSIGN
gENROE.Epq = (eXST1.XADIFD - (((gENROE.Xl - gENROE.Xpd) * gENROE.id - gENROE.PSIkd) * gENROE.K1d + gENROE.id * (gENROE.Xd - gENROE.Xpd) + OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2) * gENROE.PSIppd)) / (1.0 + gENROE.K1d)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_580(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,580};
  data->localData[0]->realVars[7] /* gENROE.Epq STATE(1) */ = DIVISION_SIM(data->localData[0]->realVars[63] /* eXST1.XADIFD variable */ - (((data->simulationInfo->realParameter[221] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[222] /* gENROE.Xpd PARAM */) * (data->localData[0]->realVars[94] /* gENROE.id variable */) - data->localData[0]->realVars[8] /* gENROE.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[184] /* gENROE.K1d PARAM */) + (data->localData[0]->realVars[94] /* gENROE.id variable */) * (data->simulationInfo->realParameter[220] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[222] /* gENROE.Xpd PARAM */) + (omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[85] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[210] /* gENROE.S10 PARAM */, data->simulationInfo->realParameter[211] /* gENROE.S12 PARAM */, 1.0, 1.2)) * (data->localData[0]->realVars[86] /* gENROE.PSIppd variable */)),1.0 + data->simulationInfo->realParameter[184] /* gENROE.K1d PARAM */,"1.0 + gENROE.K1d",equationIndexes);
  TRACE_POP
}
/*
equation index: 581
type: SIMPLE_ASSIGN
gENCLS.p.ir = ((-sin(gENCLS.delta)) * gENCLS.id - cos(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_581(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,581};
  data->localData[0]->realVars[78] /* gENCLS.p.ir variable */ = (((-sin(data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[74] /* gENCLS.id variable */) - ((cos(data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[75] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[144] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 582
type: SIMPLE_ASSIGN
gENCLS.p.ii = (cos(gENCLS.delta) * gENCLS.id - sin(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_582(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,582};
  data->localData[0]->realVars[77] /* gENCLS.p.ii variable */ = ((cos(data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[74] /* gENCLS.id variable */) - ((sin(data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[75] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[144] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 583
type: SIMPLE_ASSIGN
gENCLS.vd = gENCLS.X_d * gENCLS.iq - gENCLS.R_a * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_583(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,583};
  data->localData[0]->realVars[79] /* gENCLS.vd variable */ = (data->simulationInfo->realParameter[153] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[75] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[150] /* gENCLS.R_a PARAM */) * (data->localData[0]->realVars[74] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 584
type: SIMPLE_ASSIGN
gENCLS.vq = gENCLS.eq + (-gENCLS.R_a) * gENCLS.iq - gENCLS.X_d * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_584(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,584};
  data->localData[0]->realVars[80] /* gENCLS.vq variable */ = data->localData[0]->realVars[5] /* gENCLS.eq STATE(1) */ + ((-data->simulationInfo->realParameter[150] /* gENCLS.R_a PARAM */)) * (data->localData[0]->realVars[75] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[153] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[74] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 585
type: SIMPLE_ASSIGN
pwLine4.ir.re = (-pwLine1.ir.re) - gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_585(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,585};
  data->localData[0]->realVars[137] /* pwLine4.ir.re variable */ = (-data->localData[0]->realVars[115] /* pwLine1.ir.re variable */) - data->localData[0]->realVars[78] /* gENCLS.p.ir variable */;
  TRACE_POP
}
/*
equation index: 586
type: SIMPLE_ASSIGN
pwLine1.ir.im = (-pwLine4.ir.im) - gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_586(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,586};
  data->localData[0]->realVars[114] /* pwLine1.ir.im variable */ = (-data->localData[0]->realVars[136] /* pwLine4.ir.im variable */) - data->localData[0]->realVars[77] /* gENCLS.p.ii variable */;
  TRACE_POP
}
/*
equation index: 587
type: SIMPLE_ASSIGN
pwFault.p.ir = (-pwLine3.ir.re) - pwLine4.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_587(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,587};
  data->localData[0]->realVars[99] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[127] /* pwLine3.ir.re variable */) - data->localData[0]->realVars[139] /* pwLine4.is.re variable */;
  TRACE_POP
}
/*
equation index: 588
type: SIMPLE_ASSIGN
pwFault.p.ii = (-pwLine3.ir.im) - pwLine4.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_588(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,588};
  data->localData[0]->realVars[98] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[126] /* pwLine3.ir.im variable */) - data->localData[0]->realVars[138] /* pwLine4.is.im variable */;
  TRACE_POP
}
/*
equation index: 589
type: SIMPLE_ASSIGN
constantLoad.p.ii = (-pwLine.ir.im) - pwLine1.is.im - pwLine3.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_589(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,589};
  data->localData[0]->realVars[51] /* constantLoad.p.ii variable */ = (-data->localData[0]->realVars[104] /* pwLine.ir.im variable */) - data->localData[0]->realVars[116] /* pwLine1.is.im variable */ - data->localData[0]->realVars[128] /* pwLine3.is.im variable */;
  TRACE_POP
}
/*
equation index: 590
type: SIMPLE_ASSIGN
constantLoad.p.ir = (-pwLine.ir.re) - pwLine1.is.re - pwLine3.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_590(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,590};
  data->localData[0]->realVars[52] /* constantLoad.p.ir variable */ = (-data->localData[0]->realVars[105] /* pwLine.ir.re variable */) - data->localData[0]->realVars[117] /* pwLine1.is.re variable */ - data->localData[0]->realVars[129] /* pwLine3.is.re variable */;
  TRACE_POP
}

void residualFunc621(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,621};
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
  modelica_real tmp20;
  modelica_real tmp21;
  modelica_boolean tmp22;
  modelica_real tmp23;
  modelica_boolean tmp24;
  modelica_real tmp25;
  modelica_boolean tmp26;
  modelica_real tmp27;
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
  data->localData[0]->realVars[105] /* pwLine.ir.re variable */ = xloc[0];
  data->localData[0]->realVars[117] /* pwLine1.is.re variable */ = xloc[1];
  data->localData[0]->realVars[104] /* pwLine.ir.im variable */ = xloc[2];
  data->localData[0]->realVars[116] /* pwLine1.is.im variable */ = xloc[3];
  data->localData[0]->realVars[126] /* pwLine3.ir.im variable */ = xloc[4];
  data->localData[0]->realVars[138] /* pwLine4.is.im variable */ = xloc[5];
  data->localData[0]->realVars[128] /* pwLine3.is.im variable */ = xloc[6];
  data->localData[0]->realVars[129] /* pwLine3.is.re variable */ = xloc[7];
  data->localData[0]->realVars[139] /* pwLine4.is.re variable */ = xloc[8];
  data->localData[0]->realVars[127] /* pwLine3.ir.re variable */ = xloc[9];
  data->localData[0]->realVars[136] /* pwLine4.ir.im variable */ = xloc[10];
  data->localData[0]->realVars[115] /* pwLine1.ir.re variable */ = xloc[11];
  data->localData[0]->realVars[75] /* gENCLS.iq variable */ = xloc[12];
  data->localData[0]->realVars[74] /* gENCLS.id variable */ = xloc[13];
  data->localData[0]->realVars[8] /* gENROE.PSIkd STATE(1) */ = xloc[14];
  data->localData[0]->realVars[6] /* gENROE.Epd STATE(1) */ = xloc[15];
  data->localData[0]->realVars[87] /* gENROE.PSIppq variable */ = xloc[16];
  data->localData[0]->realVars[86] /* gENROE.PSIppd variable */ = xloc[17];
  data->localData[0]->realVars[95] /* gENROE.iq variable */ = xloc[18];
  data->localData[0]->realVars[94] /* gENROE.id variable */ = xloc[19];
  data->localData[0]->realVars[109] /* pwLine.vs.re variable */ = xloc[20];
  data->localData[0]->realVars[108] /* pwLine.vs.im variable */ = xloc[21];
  data->localData[0]->realVars[118] /* pwLine1.vr.im variable */ = xloc[22];
  data->localData[0]->realVars[119] /* pwLine1.vr.re variable */ = xloc[23];
  data->localData[0]->realVars[63] /* eXST1.XADIFD variable */ = xloc[24];
  data->localData[0]->realVars[56] /* eXST1.ECOMP variable */ = xloc[25];
  data->localData[0]->realVars[120] /* pwLine1.vs.im variable */ = xloc[26];
  data->localData[0]->realVars[130] /* pwLine3.vr.im variable */ = xloc[27];
  data->localData[0]->realVars[131] /* pwLine3.vr.re variable */ = xloc[28];
  data->localData[0]->realVars[121] /* pwLine1.vs.re variable */ = xloc[29];
  /* backup outputs */
  /* pre body */
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

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_574(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_575(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_576(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_577(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_578(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_579(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_580(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_581(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_582(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_583(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_584(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_585(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_586(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_587(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_588(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_589(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_590(data, threadData);
  /* body */
  tmp0 = Greater(data->localData[0]->realVars[57] /* eXST1.EFD variable */,(data->localData[0]->realVars[56] /* eXST1.ECOMP variable */) * (data->simulationInfo->realParameter[107] /* eXST1.V_RMAX PARAM */) - ((data->simulationInfo->realParameter[84] /* eXST1.K_C PARAM */) * (data->localData[0]->realVars[63] /* eXST1.XADIFD variable */)));
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = (data->localData[0]->realVars[56] /* eXST1.ECOMP variable */) * (data->simulationInfo->realParameter[107] /* eXST1.V_RMAX PARAM */) - ((data->simulationInfo->realParameter[84] /* eXST1.K_C PARAM */) * (data->localData[0]->realVars[63] /* eXST1.XADIFD variable */));
  }
  else
  {
    tmp1 = Less(data->localData[0]->realVars[57] /* eXST1.EFD variable */,(data->localData[0]->realVars[56] /* eXST1.ECOMP variable */) * (data->simulationInfo->realParameter[108] /* eXST1.V_RMIN PARAM */) - ((data->simulationInfo->realParameter[84] /* eXST1.K_C PARAM */) * (data->localData[0]->realVars[63] /* eXST1.XADIFD variable */)));
    tmp3 = (tmp1?(data->localData[0]->realVars[56] /* eXST1.ECOMP variable */) * (data->simulationInfo->realParameter[108] /* eXST1.V_RMIN PARAM */) - ((data->simulationInfo->realParameter[84] /* eXST1.K_C PARAM */) * (data->localData[0]->realVars[63] /* eXST1.XADIFD variable */)):data->localData[0]->realVars[62] /* eXST1.Vm1.y variable */);
  }
  res[0] = tmp3 - data->localData[0]->realVars[57] /* eXST1.EFD variable */;

  res[1] = (data->localData[0]->realVars[8] /* gENROE.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[190] /* gENROE.K4d PARAM */) + (data->localData[0]->realVars[7] /* gENROE.Epq STATE(1) */) * (data->simulationInfo->realParameter[188] /* gENROE.K3d PARAM */) - data->localData[0]->realVars[86] /* gENROE.PSIppd variable */;

  res[2] = data->localData[0]->realVars[7] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[221] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[222] /* gENROE.Xpd PARAM */) * (data->localData[0]->realVars[94] /* gENROE.id variable */) + (-data->localData[0]->realVars[8] /* gENROE.PSIkd STATE(1) */) - ((data->localData[0]->realVars[20] /* der(gENROE.PSIkd) STATE_DER */) * (data->simulationInfo->realParameter[214] /* gENROE.Tppd0 PARAM */));

  tmp4 = data->localData[0]->realVars[109] /* pwLine.vs.re variable */;
  tmp5 = data->localData[0]->realVars[108] /* pwLine.vs.im variable */;
  res[3] = sqrt((tmp4 * tmp4) + (tmp5 * tmp5)) - data->localData[0]->realVars[56] /* eXST1.ECOMP variable */;

  res[4] = (sin(data->localData[0]->realVars[10] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[97] /* gENROE.uq variable */) + ((-cos(data->localData[0]->realVars[10] /* gENROE.delta STATE(1) */))) * (data->localData[0]->realVars[96] /* gENROE.ud variable */) - data->localData[0]->realVars[108] /* pwLine.vs.im variable */;

  res[5] = (cos(data->localData[0]->realVars[10] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[97] /* gENROE.uq variable */) + (sin(data->localData[0]->realVars[10] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[96] /* gENROE.ud variable */) - data->localData[0]->realVars[109] /* pwLine.vs.re variable */;

  res[6] = (sin(data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[80] /* gENCLS.vq variable */) + ((-cos(data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[79] /* gENCLS.vd variable */) - data->localData[0]->realVars[118] /* pwLine1.vr.im variable */;

  res[7] = (cos(data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[80] /* gENCLS.vq variable */) + (sin(data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[79] /* gENCLS.vd variable */) - data->localData[0]->realVars[119] /* pwLine1.vr.re variable */;

  tmp6 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[257] /* pwFault.t1 PARAM */);
  tmp15 = (modelica_boolean)tmp6;
  if(tmp15)
  {
    tmp16 = data->localData[0]->realVars[98] /* pwFault.p.ii variable */;
  }
  else
  {
    tmp7 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[258] /* pwFault.t2 PARAM */);
    tmp13 = (modelica_boolean)(tmp7 && data->simulationInfo->booleanParameter[66] /* pwFault.ground PARAM */);
    if(tmp13)
    {
      tmp14 = data->localData[0]->realVars[131] /* pwLine3.vr.re variable */ - 1e-10;
    }
    else
    {
      tmp8 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[258] /* pwFault.t2 PARAM */);
      tmp11 = (modelica_boolean)tmp8;
      if(tmp11)
      {
        tmp9 = data->simulationInfo->realParameter[256] /* pwFault.X PARAM */;
        tmp10 = data->simulationInfo->realParameter[255] /* pwFault.R PARAM */;
        tmp12 = data->localData[0]->realVars[98] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[255] /* pwFault.R PARAM */) * (data->localData[0]->realVars[130] /* pwLine3.vr.im variable */) - ((data->simulationInfo->realParameter[256] /* pwFault.X PARAM */) * (data->localData[0]->realVars[131] /* pwLine3.vr.re variable */)),(tmp9 * tmp9) + (tmp10 * tmp10),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
      }
      else
      {
        tmp12 = data->localData[0]->realVars[98] /* pwFault.p.ii variable */;
      }
      tmp14 = tmp12;
    }
    tmp16 = tmp14;
  }
  res[8] = tmp16;

  tmp17 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[257] /* pwFault.t1 PARAM */);
  tmp26 = (modelica_boolean)tmp17;
  if(tmp26)
  {
    tmp27 = data->localData[0]->realVars[99] /* pwFault.p.ir variable */;
  }
  else
  {
    tmp18 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[258] /* pwFault.t2 PARAM */);
    tmp24 = (modelica_boolean)(tmp18 && data->simulationInfo->booleanParameter[66] /* pwFault.ground PARAM */);
    if(tmp24)
    {
      tmp25 = data->localData[0]->realVars[130] /* pwLine3.vr.im variable */;
    }
    else
    {
      tmp19 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[258] /* pwFault.t2 PARAM */);
      tmp22 = (modelica_boolean)tmp19;
      if(tmp22)
      {
        tmp20 = data->simulationInfo->realParameter[255] /* pwFault.R PARAM */;
        tmp21 = data->simulationInfo->realParameter[256] /* pwFault.X PARAM */;
        tmp23 = data->localData[0]->realVars[99] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[255] /* pwFault.R PARAM */) * (data->localData[0]->realVars[131] /* pwLine3.vr.re variable */) + (data->simulationInfo->realParameter[256] /* pwFault.X PARAM */) * (data->localData[0]->realVars[130] /* pwLine3.vr.im variable */),(tmp20 * tmp20) + (tmp21 * tmp21),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp23 = data->localData[0]->realVars[99] /* pwFault.p.ir variable */;
      }
      tmp25 = tmp23;
    }
    tmp27 = tmp25;
  }
  res[9] = tmp27;

  tmp28 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[290] /* pwLine3.t1 PARAM */);
  tmp29 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[291] /* pwLine3.t2 PARAM */);
  res[10] = ((tmp28 && tmp29)?data->localData[0]->realVars[128] /* pwLine3.is.im variable */:data->localData[0]->realVars[120] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[130] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[289] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[128] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[121] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[286] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[287] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[288] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[129] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[286] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[121] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[287] /* pwLine3.Y.re PARAM */)))));

  tmp30 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[290] /* pwLine3.t1 PARAM */);
  tmp31 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[291] /* pwLine3.t2 PARAM */);
  res[11] = ((tmp30 && tmp31)?data->localData[0]->realVars[129] /* pwLine3.is.re variable */:data->localData[0]->realVars[121] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[131] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[289] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[129] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[286] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[121] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[287] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[288] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[128] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[121] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[286] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[287] /* pwLine3.Y.re PARAM */))))));

  tmp32 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[301] /* pwLine4.t1 PARAM */);
  tmp33 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[302] /* pwLine4.t2 PARAM */);
  res[12] = ((tmp32 && tmp33)?data->localData[0]->realVars[137] /* pwLine4.ir.re variable */:data->localData[0]->realVars[119] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[131] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[300] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[137] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[118] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[297] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[119] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[298] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[299] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[136] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[119] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[297] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[118] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[298] /* pwLine4.Y.re PARAM */))))));

  tmp34 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[301] /* pwLine4.t1 PARAM */);
  tmp35 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[302] /* pwLine4.t2 PARAM */);
  res[13] = ((tmp34 && tmp35)?data->localData[0]->realVars[136] /* pwLine4.ir.im variable */:data->localData[0]->realVars[118] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[130] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[300] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[136] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[119] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[297] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[118] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[298] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[299] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[137] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[118] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[297] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[119] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[298] /* pwLine4.Y.re PARAM */)))));

  tmp36 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[279] /* pwLine1.t1 PARAM */);
  tmp37 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[280] /* pwLine1.t2 PARAM */);
  res[14] = ((tmp36 && tmp37)?data->localData[0]->realVars[115] /* pwLine1.ir.re variable */:data->localData[0]->realVars[119] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[121] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[278] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[115] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[118] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[275] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[119] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[276] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[277] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[114] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[119] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[275] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[118] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[276] /* pwLine1.Y.re PARAM */))))));

  tmp38 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[301] /* pwLine4.t1 PARAM */);
  tmp39 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[302] /* pwLine4.t2 PARAM */);
  res[15] = ((tmp38 && tmp39)?data->localData[0]->realVars[139] /* pwLine4.is.re variable */:data->localData[0]->realVars[131] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[119] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[300] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[139] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[130] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[297] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[131] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[298] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[299] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[138] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[131] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[297] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[130] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[298] /* pwLine4.Y.re PARAM */))))));

  tmp40 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[301] /* pwLine4.t1 PARAM */);
  tmp41 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[302] /* pwLine4.t2 PARAM */);
  res[16] = ((tmp40 && tmp41)?data->localData[0]->realVars[138] /* pwLine4.is.im variable */:data->localData[0]->realVars[130] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[118] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[300] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[138] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[131] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[297] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[130] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[298] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[299] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[139] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[130] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[297] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[131] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[298] /* pwLine4.Y.re PARAM */)))));

  tmp42 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[290] /* pwLine3.t1 PARAM */);
  tmp43 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[291] /* pwLine3.t2 PARAM */);
  res[17] = ((tmp42 && tmp43)?data->localData[0]->realVars[127] /* pwLine3.ir.re variable */:data->localData[0]->realVars[131] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[121] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[289] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[127] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[130] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[286] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[131] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[287] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[288] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[126] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[131] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[286] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[130] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[287] /* pwLine3.Y.re PARAM */))))));

  tmp44 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[290] /* pwLine3.t1 PARAM */);
  tmp45 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[291] /* pwLine3.t2 PARAM */);
  res[18] = ((tmp44 && tmp45)?data->localData[0]->realVars[126] /* pwLine3.ir.im variable */:data->localData[0]->realVars[130] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[120] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[289] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[126] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[131] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[286] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[130] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[287] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[288] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[127] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[130] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[286] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[131] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[287] /* pwLine3.Y.re PARAM */)))));

  tmp46 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[279] /* pwLine1.t1 PARAM */);
  tmp47 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[280] /* pwLine1.t2 PARAM */);
  res[19] = ((tmp46 && tmp47)?data->localData[0]->realVars[117] /* pwLine1.is.re variable */:data->localData[0]->realVars[121] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[119] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[278] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[117] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[275] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[121] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[276] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[277] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[116] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[121] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[275] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[276] /* pwLine1.Y.re PARAM */))))));

  tmp48 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[279] /* pwLine1.t1 PARAM */);
  tmp49 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[280] /* pwLine1.t2 PARAM */);
  res[20] = ((tmp48 && tmp49)?data->localData[0]->realVars[114] /* pwLine1.ir.im variable */:data->localData[0]->realVars[118] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[120] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[278] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[114] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[119] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[275] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[118] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[276] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[277] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[115] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[118] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[275] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[119] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[276] /* pwLine1.Y.re PARAM */)))));

  tmp50 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[279] /* pwLine1.t1 PARAM */);
  tmp51 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[280] /* pwLine1.t2 PARAM */);
  res[21] = ((tmp50 && tmp51)?data->localData[0]->realVars[116] /* pwLine1.is.im variable */:data->localData[0]->realVars[120] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[118] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[278] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[116] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[121] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[275] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[276] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[277] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[117] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[275] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[121] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[276] /* pwLine1.Y.re PARAM */)))));

  res[22] = (data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[52] /* constantLoad.p.ir variable */) + ((-data->localData[0]->realVars[121] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[51] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[47] /* constantLoad.Q variable */;

  res[23] = (data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[51] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[121] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[52] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[46] /* constantLoad.P variable */;

  tmp52 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[268] /* pwLine.t1 PARAM */);
  tmp53 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[269] /* pwLine.t2 PARAM */);
  res[24] = ((tmp52 && tmp53)?data->localData[0]->realVars[104] /* pwLine.ir.im variable */:data->localData[0]->realVars[120] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[108] /* pwLine.vs.im variable */ - ((data->simulationInfo->realParameter[267] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[104] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[121] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[264] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[265] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[266] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[105] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[264] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[121] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[265] /* pwLine.Y.re PARAM */)))));

  tmp54 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[268] /* pwLine.t1 PARAM */);
  tmp55 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[269] /* pwLine.t2 PARAM */);
  res[25] = ((tmp54 && tmp55)?data->localData[0]->realVars[105] /* pwLine.ir.re variable */:data->localData[0]->realVars[121] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[109] /* pwLine.vs.re variable */ - ((data->simulationInfo->realParameter[267] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[105] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[264] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[121] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[265] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[266] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[104] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[121] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[264] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[265] /* pwLine.Y.re PARAM */))))));

  tmp56 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[268] /* pwLine.t1 PARAM */);
  tmp57 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[269] /* pwLine.t2 PARAM */);
  res[26] = ((tmp56 && tmp57)?data->localData[0]->realVars[107] /* pwLine.is.re variable */:data->localData[0]->realVars[109] /* pwLine.vs.re variable */ - data->localData[0]->realVars[121] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[267] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[107] /* pwLine.is.re variable */ + (data->localData[0]->realVars[108] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[264] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[109] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[265] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[266] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[106] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[109] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[264] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[108] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[265] /* pwLine.Y.re PARAM */))))));

  tmp58 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[268] /* pwLine.t1 PARAM */);
  tmp59 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[269] /* pwLine.t2 PARAM */);
  res[27] = ((tmp58 && tmp59)?data->localData[0]->realVars[106] /* pwLine.is.im variable */:data->localData[0]->realVars[108] /* pwLine.vs.im variable */ - data->localData[0]->realVars[120] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[267] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[106] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[109] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[264] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[108] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[265] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[266] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[107] /* pwLine.is.re variable */ + (data->localData[0]->realVars[108] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[264] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[109] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[265] /* pwLine.Y.re PARAM */)))));

  res[28] = data->localData[0]->realVars[87] /* gENROE.PSIppq variable */ - ((data->localData[0]->realVars[6] /* gENROE.Epd STATE(1) */) * (data->simulationInfo->realParameter[189] /* gENROE.K3q PARAM */)) - ((data->localData[0]->realVars[9] /* gENROE.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[191] /* gENROE.K4q PARAM */));

  res[29] = data->localData[0]->realVars[6] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[226] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[221] /* gENROE.Xl PARAM */) * (data->localData[0]->realVars[95] /* gENROE.iq variable */) + (-data->localData[0]->realVars[9] /* gENROE.PSIkq STATE(1) */) - ((data->localData[0]->realVars[21] /* der(gENROE.PSIkq) STATE_DER */) * (data->simulationInfo->realParameter[215] /* gENROE.Tppq0 PARAM */));
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS621(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+30] = {0,4,4,4,4,3,3,4,4,3,3,4,4,6,6,2,2,6,6,6,6,5,5,7,7,3,2,11,8,8,11};
  const int rowIndex[151] = {22,23,24,25,19,21,22,23,22,23,24,25,19,21,22,23,8,17,18,8,15,16,10,11,22,23,10,11,22,23,9,15,16,9,17,18,12,13,14,20,12,13,14,20,6,7,12,13,14,20,6,7,12,13,14,20,1,2,28,29,1,2,4,5,28,29,1,2,4,5,28,29,4,5,26,27,28,29,1,2,4,5,26,27,3,5,25,26,27,3,4,24,26,27,6,12,13,14,16,20,21,7,12,13,14,15,19,20,0,1,2,0,3,10,11,18,19,20,21,22,23,24,25,27,8,9,10,13,15,16,17,18,8,9,11,12,15,16,17,18,10,11,14,17,19,21,22,23,24,25,26};
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
  inSysData->sparsePattern->colorCols[7] = 5;
  inSysData->sparsePattern->colorCols[20] = 5;
  inSysData->sparsePattern->colorCols[23] = 5;
  inSysData->sparsePattern->colorCols[6] = 6;
  inSysData->sparsePattern->colorCols[19] = 6;
  inSysData->sparsePattern->colorCols[22] = 6;
  inSysData->sparsePattern->colorCols[3] = 7;
  inSysData->sparsePattern->colorCols[13] = 7;
  inSysData->sparsePattern->colorCols[18] = 7;
  inSysData->sparsePattern->colorCols[24] = 7;
  inSysData->sparsePattern->colorCols[2] = 8;
  inSysData->sparsePattern->colorCols[12] = 8;
  inSysData->sparsePattern->colorCols[17] = 8;
  inSysData->sparsePattern->colorCols[1] = 9;
  inSysData->sparsePattern->colorCols[5] = 9;
  inSysData->sparsePattern->colorCols[9] = 9;
  inSysData->sparsePattern->colorCols[11] = 9;
  inSysData->sparsePattern->colorCols[16] = 9;
  inSysData->sparsePattern->colorCols[0] = 10;
  inSysData->sparsePattern->colorCols[4] = 10;
  inSysData->sparsePattern->colorCols[8] = 10;
  inSysData->sparsePattern->colorCols[10] = 10;
  inSysData->sparsePattern->colorCols[14] = 10;
  inSysData->sparsePattern->colorCols[15] = 10;
  inSysData->sparsePattern->colorCols[25] = 10;
}
void initializeStaticDataNLS621(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
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
  /* static nls data for pwLine3.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[126].attribute /* pwLine3.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[126].attribute /* pwLine3.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[126].attribute /* pwLine3.ir.im */.max;
  /* static nls data for pwLine4.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[138].attribute /* pwLine4.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[138].attribute /* pwLine4.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[138].attribute /* pwLine4.is.im */.max;
  /* static nls data for pwLine3.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[128].attribute /* pwLine3.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[128].attribute /* pwLine3.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[128].attribute /* pwLine3.is.im */.max;
  /* static nls data for pwLine3.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[129].attribute /* pwLine3.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[129].attribute /* pwLine3.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[129].attribute /* pwLine3.is.re */.max;
  /* static nls data for pwLine4.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[139].attribute /* pwLine4.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[139].attribute /* pwLine4.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[139].attribute /* pwLine4.is.re */.max;
  /* static nls data for pwLine3.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[127].attribute /* pwLine3.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[127].attribute /* pwLine3.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[127].attribute /* pwLine3.ir.re */.max;
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
  /* static nls data for gENROE.PSIkd */
  sysData->nominal[i] = data->modelData->realVarsData[8].attribute /* gENROE.PSIkd */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[8].attribute /* gENROE.PSIkd */.min;
  sysData->max[i++]   = data->modelData->realVarsData[8].attribute /* gENROE.PSIkd */.max;
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
  /* static nls data for pwLine.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[109].attribute /* pwLine.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[109].attribute /* pwLine.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[109].attribute /* pwLine.vs.re */.max;
  /* static nls data for pwLine.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[108].attribute /* pwLine.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[108].attribute /* pwLine.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[108].attribute /* pwLine.vs.im */.max;
  /* static nls data for pwLine1.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[118].attribute /* pwLine1.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[118].attribute /* pwLine1.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[118].attribute /* pwLine1.vr.im */.max;
  /* static nls data for pwLine1.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[119].attribute /* pwLine1.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[119].attribute /* pwLine1.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[119].attribute /* pwLine1.vr.re */.max;
  /* static nls data for eXST1.XADIFD */
  sysData->nominal[i] = data->modelData->realVarsData[63].attribute /* eXST1.XADIFD */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[63].attribute /* eXST1.XADIFD */.min;
  sysData->max[i++]   = data->modelData->realVarsData[63].attribute /* eXST1.XADIFD */.max;
  /* static nls data for eXST1.ECOMP */
  sysData->nominal[i] = data->modelData->realVarsData[56].attribute /* eXST1.ECOMP */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[56].attribute /* eXST1.ECOMP */.min;
  sysData->max[i++]   = data->modelData->realVarsData[56].attribute /* eXST1.ECOMP */.max;
  /* static nls data for pwLine1.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[120].attribute /* pwLine1.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[120].attribute /* pwLine1.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[120].attribute /* pwLine1.vs.im */.max;
  /* static nls data for pwLine3.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[130].attribute /* pwLine3.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[130].attribute /* pwLine3.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[130].attribute /* pwLine3.vr.im */.max;
  /* static nls data for pwLine3.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[131].attribute /* pwLine3.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[131].attribute /* pwLine3.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[131].attribute /* pwLine3.vr.re */.max;
  /* static nls data for pwLine1.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[121].attribute /* pwLine1.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[121].attribute /* pwLine1.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[121].attribute /* pwLine1.vs.re */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS621(sysData);
}

void getIterationVarsNLS621(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[105] /* pwLine.ir.re variable */;
  array[1] = data->localData[0]->realVars[117] /* pwLine1.is.re variable */;
  array[2] = data->localData[0]->realVars[104] /* pwLine.ir.im variable */;
  array[3] = data->localData[0]->realVars[116] /* pwLine1.is.im variable */;
  array[4] = data->localData[0]->realVars[126] /* pwLine3.ir.im variable */;
  array[5] = data->localData[0]->realVars[138] /* pwLine4.is.im variable */;
  array[6] = data->localData[0]->realVars[128] /* pwLine3.is.im variable */;
  array[7] = data->localData[0]->realVars[129] /* pwLine3.is.re variable */;
  array[8] = data->localData[0]->realVars[139] /* pwLine4.is.re variable */;
  array[9] = data->localData[0]->realVars[127] /* pwLine3.ir.re variable */;
  array[10] = data->localData[0]->realVars[136] /* pwLine4.ir.im variable */;
  array[11] = data->localData[0]->realVars[115] /* pwLine1.ir.re variable */;
  array[12] = data->localData[0]->realVars[75] /* gENCLS.iq variable */;
  array[13] = data->localData[0]->realVars[74] /* gENCLS.id variable */;
  array[14] = data->localData[0]->realVars[8] /* gENROE.PSIkd STATE(1) */;
  array[15] = data->localData[0]->realVars[6] /* gENROE.Epd STATE(1) */;
  array[16] = data->localData[0]->realVars[87] /* gENROE.PSIppq variable */;
  array[17] = data->localData[0]->realVars[86] /* gENROE.PSIppd variable */;
  array[18] = data->localData[0]->realVars[95] /* gENROE.iq variable */;
  array[19] = data->localData[0]->realVars[94] /* gENROE.id variable */;
  array[20] = data->localData[0]->realVars[109] /* pwLine.vs.re variable */;
  array[21] = data->localData[0]->realVars[108] /* pwLine.vs.im variable */;
  array[22] = data->localData[0]->realVars[118] /* pwLine1.vr.im variable */;
  array[23] = data->localData[0]->realVars[119] /* pwLine1.vr.re variable */;
  array[24] = data->localData[0]->realVars[63] /* eXST1.XADIFD variable */;
  array[25] = data->localData[0]->realVars[56] /* eXST1.ECOMP variable */;
  array[26] = data->localData[0]->realVars[120] /* pwLine1.vs.im variable */;
  array[27] = data->localData[0]->realVars[130] /* pwLine3.vr.im variable */;
  array[28] = data->localData[0]->realVars[131] /* pwLine3.vr.re variable */;
  array[29] = data->localData[0]->realVars[121] /* pwLine1.vs.re variable */;
}


/* inner equations */

/*
equation index: 26
type: SIMPLE_ASSIGN
constantLoad.v = sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
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
constantLoad.kI = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (-1.0 + constantLoad.b2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_27(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,27};
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
    tmp2 = -1.0 + data->simulationInfo->realParameter[64] /* constantLoad.b2 PARAM */;
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
    tmp9 = data->simulationInfo->realParameter[64] /* constantLoad.b2 PARAM */;
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
    tmp16 = (data->simulationInfo->realParameter[58] /* constantLoad.a2 PARAM */) * ((data->simulationInfo->realParameter[64] /* constantLoad.b2 PARAM */) * ((tmp3) * (exp(((-data->simulationInfo->realParameter[58] /* constantLoad.a2 PARAM */)) * (tmp10)))));
  }
  else
  {
    tmp16 = 1.0;
  }
  data->localData[0]->realVars[49] /* constantLoad.kI variable */ = tmp16;
  TRACE_POP
}
/*
equation index: 28
type: SIMPLE_ASSIGN
constantLoad.kP = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a0 + constantLoad.a1 * cos(constantLoad.v * constantLoad.wp) + constantLoad.b1 * sin(constantLoad.v * constantLoad.wp) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_28(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,28};
  modelica_boolean tmp0;
  tmp0 = Less(data->localData[0]->realVars[53] /* constantLoad.v variable */,data->simulationInfo->realParameter[37] /* constantLoad.PQBRAK PARAM */);
  data->localData[0]->realVars[50] /* constantLoad.kP variable */ = (tmp0?data->simulationInfo->realParameter[56] /* constantLoad.a0 PARAM */ + (data->simulationInfo->realParameter[57] /* constantLoad.a1 PARAM */) * (cos((data->localData[0]->realVars[53] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[77] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[63] /* constantLoad.b1 PARAM */) * (sin((data->localData[0]->realVars[53] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[77] /* constantLoad.wp PARAM */))):1.0);
  TRACE_POP
}
/*
equation index: 29
type: SIMPLE_ASSIGN
constantLoad.Q = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.im
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
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */);
  tmp1 = LessEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[67] /* constantLoad.d_t PARAM */);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[49] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[40] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[44] /* constantLoad.S_Y.im PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[50] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[42] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[66] /* constantLoad.d_Q PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[49] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[40] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[44] /* constantLoad.S_Y.im PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[50] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[42] /* constantLoad.S_P.im PARAM */);
  }
  data->localData[0]->realVars[47] /* constantLoad.Q variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 30
type: SIMPLE_ASSIGN
constantLoad.P = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.re
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
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */);
  tmp1 = LessEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[67] /* constantLoad.d_t PARAM */);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[49] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[41] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[45] /* constantLoad.S_Y.re PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[50] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[43] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_P PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[49] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[41] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[45] /* constantLoad.S_Y.re PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[50] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[43] /* constantLoad.S_P.re PARAM */);
  }
  data->localData[0]->realVars[46] /* constantLoad.P variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 31
type: SIMPLE_ASSIGN
eXST1.ECOMP0 = eXST1.ECOMP
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_31(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,31};
  data->simulationInfo->realParameter[81] /* eXST1.ECOMP0 PARAM */ = data->localData[0]->realVars[56] /* eXST1.ECOMP variable */;
  TRACE_POP
}
/*
equation index: 32
type: SIMPLE_ASSIGN
eXST1.V_REF = eXST1.Efd0 / eXST1.K_A + eXST1.ECOMP0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_32(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,32};
  data->simulationInfo->realParameter[106] /* eXST1.V_REF PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[82] /* eXST1.Efd0 PARAM */,data->simulationInfo->realParameter[83] /* eXST1.K_A PARAM */,"eXST1.K_A",equationIndexes) + data->simulationInfo->realParameter[81] /* eXST1.ECOMP0 PARAM */;
  TRACE_POP
}
/*
equation index: 33
type: SIMPLE_ASSIGN
eXST1.VoltageReference.k = eXST1.V_REF
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_33(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,33};
  data->simulationInfo->realParameter[114] /* eXST1.VoltageReference.k PARAM */ = data->simulationInfo->realParameter[106] /* eXST1.V_REF PARAM */;
  TRACE_POP
}
/*
equation index: 34
type: SIMPLE_ASSIGN
eXST1.TransducerDelay.y_start = eXST1.ECOMP0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_34(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,34};
  data->simulationInfo->realParameter[100] /* eXST1.TransducerDelay.y_start PARAM */ = data->simulationInfo->realParameter[81] /* eXST1.ECOMP0 PARAM */;
  TRACE_POP
}
/*
equation index: 35
type: SIMPLE_ASSIGN
$START.eXST1.DiffV.u2 = eXST1.TransducerDelay.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_35(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,35};
  data->modelData->realVarsData[54].attribute /* eXST1.DiffV.u2 variable */.start = data->simulationInfo->realParameter[100] /* eXST1.TransducerDelay.y_start PARAM */;
    data->localData[0]->realVars[54] /* eXST1.DiffV.u2 variable */ = data->modelData->realVarsData[54].attribute /* eXST1.DiffV.u2 variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[54].info /* eXST1.DiffV.u2 */.name, (modelica_real) data->localData[0]->realVars[54] /* eXST1.DiffV.u2 variable */);
  TRACE_POP
}
/*
equation index: 36
type: SIMPLE_ASSIGN
$START.eXST1.TransducerDelay.state = eXST1.TransducerDelay.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_36(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,36};
  data->modelData->realVarsData[0].attribute /* eXST1.TransducerDelay.state STATE(1) */.start = data->simulationInfo->realParameter[100] /* eXST1.TransducerDelay.y_start PARAM */;
    data->localData[0]->realVars[0] /* eXST1.TransducerDelay.state STATE(1) */ = data->modelData->realVarsData[0].attribute /* eXST1.TransducerDelay.state STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[0].info /* eXST1.TransducerDelay.state */.name, (modelica_real) data->localData[0]->realVars[0] /* eXST1.TransducerDelay.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 37
type: SIMPLE_ASSIGN
eXST1.TransducerDelay.state = eXST1.TransducerDelay.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_37(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,37};
  data->localData[0]->realVars[0] /* eXST1.TransducerDelay.state STATE(1) */ = data->simulationInfo->realParameter[100] /* eXST1.TransducerDelay.y_start PARAM */;
  TRACE_POP
}
/*
equation index: 38
type: SIMPLE_ASSIGN
eXST1.DiffV.u2 = if abs(eXST1.TransducerDelay.T) <= 1e-15 then eXST1.ECOMP * eXST1.TransducerDelay.K else eXST1.TransducerDelay.state
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_38(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,38};
  modelica_boolean tmp0;
  tmp0 = LessEq(fabs(data->simulationInfo->realParameter[97] /* eXST1.TransducerDelay.T PARAM */),1e-15);
  data->localData[0]->realVars[54] /* eXST1.DiffV.u2 variable */ = (tmp0?(data->localData[0]->realVars[56] /* eXST1.ECOMP variable */) * (data->simulationInfo->realParameter[96] /* eXST1.TransducerDelay.K PARAM */):data->localData[0]->realVars[0] /* eXST1.TransducerDelay.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 39
type: SIMPLE_ASSIGN
eXST1.DiffV.y = eXST1.DiffV.k1 * eXST1.VoltageReference.k + eXST1.DiffV.k2 * eXST1.DiffV.u2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_39(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,39};
  data->localData[0]->realVars[55] /* eXST1.DiffV.y variable */ = (data->simulationInfo->realParameter[78] /* eXST1.DiffV.k1 PARAM */) * (data->simulationInfo->realParameter[114] /* eXST1.VoltageReference.k PARAM */) + (data->simulationInfo->realParameter[79] /* eXST1.DiffV.k2 PARAM */) * (data->localData[0]->realVars[54] /* eXST1.DiffV.u2 variable */);
  TRACE_POP
}
/*
equation index: 40
type: SIMPLE_ASSIGN
eXST1.add3_2.y = eXST1.add3_2.k1 * const.k + eXST1.add3_2.k2 * eXST1.DiffV.y + eXST1.add3_2.k3 * eXST1.Limiters.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_40(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,40};
  data->localData[0]->realVars[64] /* eXST1.add3_2.y variable */ = (data->simulationInfo->realParameter[116] /* eXST1.add3_2.k1 PARAM */) * (data->simulationInfo->realParameter[34] /* const.k PARAM */) + (data->simulationInfo->realParameter[117] /* eXST1.add3_2.k2 PARAM */) * (data->localData[0]->realVars[55] /* eXST1.DiffV.y variable */) + (data->simulationInfo->realParameter[118] /* eXST1.add3_2.k3 PARAM */) * (data->localData[0]->realVars[61] /* eXST1.Limiters.y variable */);
  TRACE_POP
}
/*
equation index: 41
type: SIMPLE_ASSIGN
eXST1.feedback.y = eXST1.add3_2.y - eXST1.imDerivativeLag.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_41(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,41};
  data->localData[0]->realVars[65] /* eXST1.feedback.y variable */ = data->localData[0]->realVars[64] /* eXST1.add3_2.y variable */ - data->localData[0]->realVars[66] /* eXST1.imDerivativeLag.y variable */;
  TRACE_POP
}
/*
equation index: 42
type: SIMPLE_ASSIGN
eXST1.imLeadLag.u = homotopy(smooth(0, if eXST1.feedback.y > eXST1.limiter.uMax then eXST1.limiter.uMax else if eXST1.feedback.y < eXST1.limiter.uMin then eXST1.limiter.uMin else eXST1.feedback.y), eXST1.feedback.y)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_42(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,42};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  tmp0 = Greater(data->localData[0]->realVars[65] /* eXST1.feedback.y variable */,data->simulationInfo->realParameter[142] /* eXST1.limiter.uMax PARAM */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->simulationInfo->realParameter[142] /* eXST1.limiter.uMax PARAM */;
  }
  else
  {
    tmp1 = Less(data->localData[0]->realVars[65] /* eXST1.feedback.y variable */,data->simulationInfo->realParameter[143] /* eXST1.limiter.uMin PARAM */);
    tmp3 = (tmp1?data->simulationInfo->realParameter[143] /* eXST1.limiter.uMin PARAM */:data->localData[0]->realVars[65] /* eXST1.feedback.y variable */);
  }
  data->localData[0]->realVars[69] /* eXST1.imLeadLag.u variable */ = homotopy(tmp3, data->localData[0]->realVars[65] /* eXST1.feedback.y variable */);
  TRACE_POP
}
/*
equation index: 43
type: SIMPLE_ASSIGN
eXST1.K_a.u = if abs(eXST1.imLeadLag.T1 - eXST1.imLeadLag.T2) < 1e-15 then eXST1.imLeadLag.K * eXST1.imLeadLag.u else eXST1.imLeadLag.TF.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_43(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,43};
  modelica_boolean tmp0;
  tmp0 = Less(fabs(data->simulationInfo->realParameter[125] /* eXST1.imLeadLag.T1 PARAM */ - data->simulationInfo->realParameter[126] /* eXST1.imLeadLag.T2 PARAM */),1e-15);
  data->localData[0]->realVars[59] /* eXST1.K_a.u variable */ = (tmp0?(data->simulationInfo->realParameter[124] /* eXST1.imLeadLag.K PARAM */) * (data->localData[0]->realVars[69] /* eXST1.imLeadLag.u variable */):data->localData[0]->realVars[68] /* eXST1.imLeadLag.TF.y variable */);
  TRACE_POP
}
/*
equation index: 44
type: SIMPLE_ASSIGN
eXST1.K_a.y = eXST1.K_a.k * eXST1.K_a.u
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_44(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,44};
  data->localData[0]->realVars[60] /* eXST1.K_a.y variable */ = (data->simulationInfo->realParameter[86] /* eXST1.K_a.k PARAM */) * (data->localData[0]->realVars[59] /* eXST1.K_a.u variable */);
  TRACE_POP
}
/*
equation index: 45
type: SIMPLE_ASSIGN
eXST1.Vm1.y = if abs(eXST1.Vm1.T) <= 1e-15 then eXST1.K_a.y * eXST1.Vm1.K else eXST1.Vm1.state
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_45(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,45};
  modelica_boolean tmp0;
  tmp0 = LessEq(fabs(data->simulationInfo->realParameter[110] /* eXST1.Vm1.T PARAM */),1e-15);
  data->localData[0]->realVars[62] /* eXST1.Vm1.y variable */ = (tmp0?(data->localData[0]->realVars[60] /* eXST1.K_a.y variable */) * (data->simulationInfo->realParameter[109] /* eXST1.Vm1.K PARAM */):data->localData[0]->realVars[1] /* eXST1.Vm1.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 46
type: SIMPLE_ASSIGN
eXST1.EFD = eXST1.XADIFD + $DER.gENROE.Epq * gENROE.Tpd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_46(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,46};
  data->localData[0]->realVars[57] /* eXST1.EFD variable */ = data->localData[0]->realVars[63] /* eXST1.XADIFD variable */ + (data->localData[0]->realVars[19] /* der(gENROE.Epq) STATE_DER */) * (data->simulationInfo->realParameter[213] /* gENROE.Tpd0 PARAM */);
  TRACE_POP
}
/*
equation index: 47
type: SIMPLE_ASSIGN
pwLine.is.re = (cos(gENROE.delta) * gENROE.iq - (-sin(gENROE.delta)) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_47(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,47};
  data->localData[0]->realVars[107] /* pwLine.is.re variable */ = ((cos(data->localData[0]->realVars[10] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[95] /* gENROE.iq variable */) - (((-sin(data->localData[0]->realVars[10] /* gENROE.delta STATE(1) */))) * (data->localData[0]->realVars[94] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[170] /* gENROE.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 48
type: SIMPLE_ASSIGN
pwLine.is.im = (sin(gENROE.delta) * gENROE.iq - cos(gENROE.delta) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_48(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,48};
  data->localData[0]->realVars[106] /* pwLine.is.im variable */ = ((sin(data->localData[0]->realVars[10] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[95] /* gENROE.iq variable */) - ((cos(data->localData[0]->realVars[10] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[94] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[170] /* gENROE.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 49
type: SIMPLE_ASSIGN
gENROE.PSId = gENROE.PSIppd - gENROE.Xppd * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_49(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,49};
  data->localData[0]->realVars[84] /* gENROE.PSId variable */ = data->localData[0]->realVars[86] /* gENROE.PSIppd variable */ - ((data->simulationInfo->realParameter[224] /* gENROE.Xppd PARAM */) * (data->localData[0]->realVars[94] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 50
type: SIMPLE_ASSIGN
gENROE.uq = gENROE.PSId - gENROE.R_a * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_50(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,50};
  data->localData[0]->realVars[97] /* gENROE.uq variable */ = data->localData[0]->realVars[84] /* gENROE.PSId variable */ - ((data->simulationInfo->realParameter[207] /* gENROE.R_a PARAM */) * (data->localData[0]->realVars[95] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 51
type: SIMPLE_ASSIGN
gENROE.PSIpp = sqrt(gENROE.PSIppd ^ 2.0 + gENROE.PSIppq ^ 2.0)
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
gENROE.PSIq = (-gENROE.PSIppq) - gENROE.Xppq * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_52(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,52};
  data->localData[0]->realVars[88] /* gENROE.PSIq variable */ = (-data->localData[0]->realVars[87] /* gENROE.PSIppq variable */) - ((data->simulationInfo->realParameter[225] /* gENROE.Xppq PARAM */) * (data->localData[0]->realVars[95] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 53
type: SIMPLE_ASSIGN
gENROE.ud = (-gENROE.PSIq) - gENROE.R_a * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_53(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,53};
  data->localData[0]->realVars[96] /* gENROE.ud variable */ = (-data->localData[0]->realVars[88] /* gENROE.PSIq variable */) - ((data->simulationInfo->realParameter[207] /* gENROE.R_a PARAM */) * (data->localData[0]->realVars[94] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 54
type: SIMPLE_ASSIGN
gENROE.PSIkq = ((gENROE.Epd + (gENROE.Xpq - gENROE.Xl) * gENROE.iq) * gENROE.K1q + gENROE.Epd + gENROE.iq * (gENROE.Xpq - gENROE.Xq) + OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2) * gENROE.PSIppq * (gENROE.Xq - gENROE.Xl) / (gENROE.Xd - gENROE.Xl) - gENROE.XaqIlq) / gENROE.K1q
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_54(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,54};
  data->localData[0]->realVars[9] /* gENROE.PSIkq STATE(1) */ = DIVISION_SIM((data->localData[0]->realVars[6] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[226] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[221] /* gENROE.Xl PARAM */) * (data->localData[0]->realVars[95] /* gENROE.iq variable */)) * (data->simulationInfo->realParameter[185] /* gENROE.K1q PARAM */) + data->localData[0]->realVars[6] /* gENROE.Epd STATE(1) */ + (data->localData[0]->realVars[95] /* gENROE.iq variable */) * (data->simulationInfo->realParameter[226] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[227] /* gENROE.Xq PARAM */) + (omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[85] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[210] /* gENROE.S10 PARAM */, data->simulationInfo->realParameter[211] /* gENROE.S12 PARAM */, 1.0, 1.2)) * ((data->localData[0]->realVars[87] /* gENROE.PSIppq variable */) * (DIVISION_SIM(data->simulationInfo->realParameter[227] /* gENROE.Xq PARAM */ - data->simulationInfo->realParameter[221] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[220] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[221] /* gENROE.Xl PARAM */,"gENROE.Xd - gENROE.Xl",equationIndexes))) - data->localData[0]->realVars[91] /* gENROE.XaqIlq variable */,data->simulationInfo->realParameter[185] /* gENROE.K1q PARAM */,"gENROE.K1q",equationIndexes);
  TRACE_POP
}
/*
equation index: 55
type: SIMPLE_ASSIGN
gENROE.Epq = (eXST1.XADIFD - (((gENROE.Xl - gENROE.Xpd) * gENROE.id - gENROE.PSIkd) * gENROE.K1d + gENROE.id * (gENROE.Xd - gENROE.Xpd) + OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2) * gENROE.PSIppd)) / (1.0 + gENROE.K1d)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_55(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,55};
  data->localData[0]->realVars[7] /* gENROE.Epq STATE(1) */ = DIVISION_SIM(data->localData[0]->realVars[63] /* eXST1.XADIFD variable */ - (((data->simulationInfo->realParameter[221] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[222] /* gENROE.Xpd PARAM */) * (data->localData[0]->realVars[94] /* gENROE.id variable */) - data->localData[0]->realVars[8] /* gENROE.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[184] /* gENROE.K1d PARAM */) + (data->localData[0]->realVars[94] /* gENROE.id variable */) * (data->simulationInfo->realParameter[220] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[222] /* gENROE.Xpd PARAM */) + (omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[85] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[210] /* gENROE.S10 PARAM */, data->simulationInfo->realParameter[211] /* gENROE.S12 PARAM */, 1.0, 1.2)) * (data->localData[0]->realVars[86] /* gENROE.PSIppd variable */)),1.0 + data->simulationInfo->realParameter[184] /* gENROE.K1d PARAM */,"1.0 + gENROE.K1d",equationIndexes);
  TRACE_POP
}
/*
equation index: 56
type: SIMPLE_ASSIGN
gENCLS.p.ir = ((-sin(gENCLS.delta)) * gENCLS.id - cos(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_56(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,56};
  data->localData[0]->realVars[78] /* gENCLS.p.ir variable */ = (((-sin(data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[74] /* gENCLS.id variable */) - ((cos(data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[75] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[144] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 57
type: SIMPLE_ASSIGN
gENCLS.p.ii = (cos(gENCLS.delta) * gENCLS.id - sin(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_57(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,57};
  data->localData[0]->realVars[77] /* gENCLS.p.ii variable */ = ((cos(data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[74] /* gENCLS.id variable */) - ((sin(data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[75] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[144] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 58
type: SIMPLE_ASSIGN
gENCLS.vd = gENCLS.X_d * gENCLS.iq - gENCLS.R_a * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_58(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,58};
  data->localData[0]->realVars[79] /* gENCLS.vd variable */ = (data->simulationInfo->realParameter[153] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[75] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[150] /* gENCLS.R_a PARAM */) * (data->localData[0]->realVars[74] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 59
type: SIMPLE_ASSIGN
gENCLS.vq = gENCLS.eq + (-gENCLS.R_a) * gENCLS.iq - gENCLS.X_d * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_59(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,59};
  data->localData[0]->realVars[80] /* gENCLS.vq variable */ = data->localData[0]->realVars[5] /* gENCLS.eq STATE(1) */ + ((-data->simulationInfo->realParameter[150] /* gENCLS.R_a PARAM */)) * (data->localData[0]->realVars[75] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[153] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[74] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 60
type: SIMPLE_ASSIGN
pwLine4.ir.re = (-pwLine1.ir.re) - gENCLS.p.ir
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
pwLine1.ir.im = (-pwLine4.ir.im) - gENCLS.p.ii
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
pwFault.p.ir = (-pwLine3.ir.re) - pwLine4.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_62(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,62};
  data->localData[0]->realVars[99] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[127] /* pwLine3.ir.re variable */) - data->localData[0]->realVars[139] /* pwLine4.is.re variable */;
  TRACE_POP
}
/*
equation index: 63
type: SIMPLE_ASSIGN
pwFault.p.ii = (-pwLine3.ir.im) - pwLine4.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_63(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,63};
  data->localData[0]->realVars[98] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[126] /* pwLine3.ir.im variable */) - data->localData[0]->realVars[138] /* pwLine4.is.im variable */;
  TRACE_POP
}
/*
equation index: 64
type: SIMPLE_ASSIGN
constantLoad.p.ii = (-pwLine.ir.im) - pwLine1.is.im - pwLine3.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_64(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,64};
  data->localData[0]->realVars[51] /* constantLoad.p.ii variable */ = (-data->localData[0]->realVars[104] /* pwLine.ir.im variable */) - data->localData[0]->realVars[116] /* pwLine1.is.im variable */ - data->localData[0]->realVars[128] /* pwLine3.is.im variable */;
  TRACE_POP
}
/*
equation index: 65
type: SIMPLE_ASSIGN
constantLoad.p.ir = (-pwLine.ir.re) - pwLine1.is.re - pwLine3.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_65(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,65};
  data->localData[0]->realVars[52] /* constantLoad.p.ir variable */ = (-data->localData[0]->realVars[105] /* pwLine.ir.re variable */) - data->localData[0]->realVars[117] /* pwLine1.is.re variable */ - data->localData[0]->realVars[129] /* pwLine3.is.re variable */;
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
  modelica_real tmp20;
  modelica_real tmp21;
  modelica_boolean tmp22;
  modelica_real tmp23;
  modelica_boolean tmp24;
  modelica_real tmp25;
  modelica_boolean tmp26;
  modelica_real tmp27;
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
  data->localData[0]->realVars[105] /* pwLine.ir.re variable */ = xloc[0];
  data->localData[0]->realVars[117] /* pwLine1.is.re variable */ = xloc[1];
  data->localData[0]->realVars[104] /* pwLine.ir.im variable */ = xloc[2];
  data->localData[0]->realVars[116] /* pwLine1.is.im variable */ = xloc[3];
  data->localData[0]->realVars[126] /* pwLine3.ir.im variable */ = xloc[4];
  data->localData[0]->realVars[138] /* pwLine4.is.im variable */ = xloc[5];
  data->localData[0]->realVars[128] /* pwLine3.is.im variable */ = xloc[6];
  data->localData[0]->realVars[129] /* pwLine3.is.re variable */ = xloc[7];
  data->localData[0]->realVars[139] /* pwLine4.is.re variable */ = xloc[8];
  data->localData[0]->realVars[127] /* pwLine3.ir.re variable */ = xloc[9];
  data->localData[0]->realVars[136] /* pwLine4.ir.im variable */ = xloc[10];
  data->localData[0]->realVars[115] /* pwLine1.ir.re variable */ = xloc[11];
  data->localData[0]->realVars[75] /* gENCLS.iq variable */ = xloc[12];
  data->localData[0]->realVars[74] /* gENCLS.id variable */ = xloc[13];
  data->localData[0]->realVars[8] /* gENROE.PSIkd STATE(1) */ = xloc[14];
  data->localData[0]->realVars[6] /* gENROE.Epd STATE(1) */ = xloc[15];
  data->localData[0]->realVars[87] /* gENROE.PSIppq variable */ = xloc[16];
  data->localData[0]->realVars[86] /* gENROE.PSIppd variable */ = xloc[17];
  data->localData[0]->realVars[95] /* gENROE.iq variable */ = xloc[18];
  data->localData[0]->realVars[94] /* gENROE.id variable */ = xloc[19];
  data->localData[0]->realVars[109] /* pwLine.vs.re variable */ = xloc[20];
  data->localData[0]->realVars[108] /* pwLine.vs.im variable */ = xloc[21];
  data->localData[0]->realVars[118] /* pwLine1.vr.im variable */ = xloc[22];
  data->localData[0]->realVars[119] /* pwLine1.vr.re variable */ = xloc[23];
  data->localData[0]->realVars[63] /* eXST1.XADIFD variable */ = xloc[24];
  data->localData[0]->realVars[56] /* eXST1.ECOMP variable */ = xloc[25];
  data->localData[0]->realVars[120] /* pwLine1.vs.im variable */ = xloc[26];
  data->localData[0]->realVars[130] /* pwLine3.vr.im variable */ = xloc[27];
  data->localData[0]->realVars[131] /* pwLine3.vr.re variable */ = xloc[28];
  data->localData[0]->realVars[121] /* pwLine1.vs.re variable */ = xloc[29];
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
  tmp0 = Greater(data->localData[0]->realVars[57] /* eXST1.EFD variable */,(data->localData[0]->realVars[56] /* eXST1.ECOMP variable */) * (data->simulationInfo->realParameter[107] /* eXST1.V_RMAX PARAM */) - ((data->simulationInfo->realParameter[84] /* eXST1.K_C PARAM */) * (data->localData[0]->realVars[63] /* eXST1.XADIFD variable */)));
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = (data->localData[0]->realVars[56] /* eXST1.ECOMP variable */) * (data->simulationInfo->realParameter[107] /* eXST1.V_RMAX PARAM */) - ((data->simulationInfo->realParameter[84] /* eXST1.K_C PARAM */) * (data->localData[0]->realVars[63] /* eXST1.XADIFD variable */));
  }
  else
  {
    tmp1 = Less(data->localData[0]->realVars[57] /* eXST1.EFD variable */,(data->localData[0]->realVars[56] /* eXST1.ECOMP variable */) * (data->simulationInfo->realParameter[108] /* eXST1.V_RMIN PARAM */) - ((data->simulationInfo->realParameter[84] /* eXST1.K_C PARAM */) * (data->localData[0]->realVars[63] /* eXST1.XADIFD variable */)));
    tmp3 = (tmp1?(data->localData[0]->realVars[56] /* eXST1.ECOMP variable */) * (data->simulationInfo->realParameter[108] /* eXST1.V_RMIN PARAM */) - ((data->simulationInfo->realParameter[84] /* eXST1.K_C PARAM */) * (data->localData[0]->realVars[63] /* eXST1.XADIFD variable */)):data->localData[0]->realVars[62] /* eXST1.Vm1.y variable */);
  }
  res[0] = tmp3 - data->localData[0]->realVars[57] /* eXST1.EFD variable */;

  res[1] = (data->localData[0]->realVars[8] /* gENROE.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[190] /* gENROE.K4d PARAM */) + (data->localData[0]->realVars[7] /* gENROE.Epq STATE(1) */) * (data->simulationInfo->realParameter[188] /* gENROE.K3d PARAM */) - data->localData[0]->realVars[86] /* gENROE.PSIppd variable */;

  res[2] = data->localData[0]->realVars[7] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[221] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[222] /* gENROE.Xpd PARAM */) * (data->localData[0]->realVars[94] /* gENROE.id variable */) + (-data->localData[0]->realVars[8] /* gENROE.PSIkd STATE(1) */) - ((data->localData[0]->realVars[20] /* der(gENROE.PSIkd) STATE_DER */) * (data->simulationInfo->realParameter[214] /* gENROE.Tppd0 PARAM */));

  tmp4 = data->localData[0]->realVars[109] /* pwLine.vs.re variable */;
  tmp5 = data->localData[0]->realVars[108] /* pwLine.vs.im variable */;
  res[3] = sqrt((tmp4 * tmp4) + (tmp5 * tmp5)) - data->localData[0]->realVars[56] /* eXST1.ECOMP variable */;

  res[4] = (sin(data->localData[0]->realVars[10] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[97] /* gENROE.uq variable */) + ((-cos(data->localData[0]->realVars[10] /* gENROE.delta STATE(1) */))) * (data->localData[0]->realVars[96] /* gENROE.ud variable */) - data->localData[0]->realVars[108] /* pwLine.vs.im variable */;

  res[5] = (cos(data->localData[0]->realVars[10] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[97] /* gENROE.uq variable */) + (sin(data->localData[0]->realVars[10] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[96] /* gENROE.ud variable */) - data->localData[0]->realVars[109] /* pwLine.vs.re variable */;

  res[6] = (sin(data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[80] /* gENCLS.vq variable */) + ((-cos(data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[79] /* gENCLS.vd variable */) - data->localData[0]->realVars[118] /* pwLine1.vr.im variable */;

  res[7] = (cos(data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[80] /* gENCLS.vq variable */) + (sin(data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[79] /* gENCLS.vd variable */) - data->localData[0]->realVars[119] /* pwLine1.vr.re variable */;

  tmp6 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[257] /* pwFault.t1 PARAM */);
  tmp15 = (modelica_boolean)tmp6;
  if(tmp15)
  {
    tmp16 = data->localData[0]->realVars[98] /* pwFault.p.ii variable */;
  }
  else
  {
    tmp7 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[258] /* pwFault.t2 PARAM */);
    tmp13 = (modelica_boolean)(tmp7 && data->simulationInfo->booleanParameter[66] /* pwFault.ground PARAM */);
    if(tmp13)
    {
      tmp14 = data->localData[0]->realVars[131] /* pwLine3.vr.re variable */ - 1e-10;
    }
    else
    {
      tmp8 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[258] /* pwFault.t2 PARAM */);
      tmp11 = (modelica_boolean)tmp8;
      if(tmp11)
      {
        tmp9 = data->simulationInfo->realParameter[256] /* pwFault.X PARAM */;
        tmp10 = data->simulationInfo->realParameter[255] /* pwFault.R PARAM */;
        tmp12 = data->localData[0]->realVars[98] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[255] /* pwFault.R PARAM */) * (data->localData[0]->realVars[130] /* pwLine3.vr.im variable */) - ((data->simulationInfo->realParameter[256] /* pwFault.X PARAM */) * (data->localData[0]->realVars[131] /* pwLine3.vr.re variable */)),(tmp9 * tmp9) + (tmp10 * tmp10),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
      }
      else
      {
        tmp12 = data->localData[0]->realVars[98] /* pwFault.p.ii variable */;
      }
      tmp14 = tmp12;
    }
    tmp16 = tmp14;
  }
  res[8] = tmp16;

  tmp17 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[257] /* pwFault.t1 PARAM */);
  tmp26 = (modelica_boolean)tmp17;
  if(tmp26)
  {
    tmp27 = data->localData[0]->realVars[99] /* pwFault.p.ir variable */;
  }
  else
  {
    tmp18 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[258] /* pwFault.t2 PARAM */);
    tmp24 = (modelica_boolean)(tmp18 && data->simulationInfo->booleanParameter[66] /* pwFault.ground PARAM */);
    if(tmp24)
    {
      tmp25 = data->localData[0]->realVars[130] /* pwLine3.vr.im variable */;
    }
    else
    {
      tmp19 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[258] /* pwFault.t2 PARAM */);
      tmp22 = (modelica_boolean)tmp19;
      if(tmp22)
      {
        tmp20 = data->simulationInfo->realParameter[255] /* pwFault.R PARAM */;
        tmp21 = data->simulationInfo->realParameter[256] /* pwFault.X PARAM */;
        tmp23 = data->localData[0]->realVars[99] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[255] /* pwFault.R PARAM */) * (data->localData[0]->realVars[131] /* pwLine3.vr.re variable */) + (data->simulationInfo->realParameter[256] /* pwFault.X PARAM */) * (data->localData[0]->realVars[130] /* pwLine3.vr.im variable */),(tmp20 * tmp20) + (tmp21 * tmp21),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp23 = data->localData[0]->realVars[99] /* pwFault.p.ir variable */;
      }
      tmp25 = tmp23;
    }
    tmp27 = tmp25;
  }
  res[9] = tmp27;

  tmp28 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[290] /* pwLine3.t1 PARAM */);
  tmp29 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[291] /* pwLine3.t2 PARAM */);
  res[10] = ((tmp28 && tmp29)?data->localData[0]->realVars[128] /* pwLine3.is.im variable */:data->localData[0]->realVars[120] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[130] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[289] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[128] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[121] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[286] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[287] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[288] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[129] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[286] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[121] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[287] /* pwLine3.Y.re PARAM */)))));

  tmp30 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[290] /* pwLine3.t1 PARAM */);
  tmp31 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[291] /* pwLine3.t2 PARAM */);
  res[11] = ((tmp30 && tmp31)?data->localData[0]->realVars[129] /* pwLine3.is.re variable */:data->localData[0]->realVars[121] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[131] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[289] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[129] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[286] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[121] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[287] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[288] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[128] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[121] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[286] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[287] /* pwLine3.Y.re PARAM */))))));

  tmp32 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[301] /* pwLine4.t1 PARAM */);
  tmp33 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[302] /* pwLine4.t2 PARAM */);
  res[12] = ((tmp32 && tmp33)?data->localData[0]->realVars[137] /* pwLine4.ir.re variable */:data->localData[0]->realVars[119] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[131] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[300] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[137] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[118] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[297] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[119] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[298] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[299] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[136] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[119] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[297] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[118] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[298] /* pwLine4.Y.re PARAM */))))));

  tmp34 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[301] /* pwLine4.t1 PARAM */);
  tmp35 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[302] /* pwLine4.t2 PARAM */);
  res[13] = ((tmp34 && tmp35)?data->localData[0]->realVars[136] /* pwLine4.ir.im variable */:data->localData[0]->realVars[118] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[130] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[300] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[136] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[119] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[297] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[118] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[298] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[299] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[137] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[118] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[297] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[119] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[298] /* pwLine4.Y.re PARAM */)))));

  tmp36 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[279] /* pwLine1.t1 PARAM */);
  tmp37 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[280] /* pwLine1.t2 PARAM */);
  res[14] = ((tmp36 && tmp37)?data->localData[0]->realVars[115] /* pwLine1.ir.re variable */:data->localData[0]->realVars[119] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[121] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[278] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[115] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[118] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[275] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[119] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[276] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[277] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[114] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[119] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[275] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[118] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[276] /* pwLine1.Y.re PARAM */))))));

  tmp38 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[301] /* pwLine4.t1 PARAM */);
  tmp39 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[302] /* pwLine4.t2 PARAM */);
  res[15] = ((tmp38 && tmp39)?data->localData[0]->realVars[139] /* pwLine4.is.re variable */:data->localData[0]->realVars[131] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[119] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[300] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[139] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[130] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[297] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[131] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[298] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[299] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[138] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[131] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[297] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[130] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[298] /* pwLine4.Y.re PARAM */))))));

  tmp40 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[301] /* pwLine4.t1 PARAM */);
  tmp41 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[302] /* pwLine4.t2 PARAM */);
  res[16] = ((tmp40 && tmp41)?data->localData[0]->realVars[138] /* pwLine4.is.im variable */:data->localData[0]->realVars[130] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[118] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[300] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[138] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[131] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[297] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[130] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[298] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[299] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[139] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[130] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[297] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[131] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[298] /* pwLine4.Y.re PARAM */)))));

  tmp42 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[290] /* pwLine3.t1 PARAM */);
  tmp43 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[291] /* pwLine3.t2 PARAM */);
  res[17] = ((tmp42 && tmp43)?data->localData[0]->realVars[127] /* pwLine3.ir.re variable */:data->localData[0]->realVars[131] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[121] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[289] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[127] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[130] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[286] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[131] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[287] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[288] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[126] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[131] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[286] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[130] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[287] /* pwLine3.Y.re PARAM */))))));

  tmp44 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[290] /* pwLine3.t1 PARAM */);
  tmp45 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[291] /* pwLine3.t2 PARAM */);
  res[18] = ((tmp44 && tmp45)?data->localData[0]->realVars[126] /* pwLine3.ir.im variable */:data->localData[0]->realVars[130] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[120] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[289] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[126] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[131] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[286] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[130] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[287] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[288] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[127] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[130] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[286] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[131] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[287] /* pwLine3.Y.re PARAM */)))));

  tmp46 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[279] /* pwLine1.t1 PARAM */);
  tmp47 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[280] /* pwLine1.t2 PARAM */);
  res[19] = ((tmp46 && tmp47)?data->localData[0]->realVars[117] /* pwLine1.is.re variable */:data->localData[0]->realVars[121] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[119] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[278] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[117] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[275] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[121] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[276] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[277] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[116] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[121] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[275] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[276] /* pwLine1.Y.re PARAM */))))));

  tmp48 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[279] /* pwLine1.t1 PARAM */);
  tmp49 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[280] /* pwLine1.t2 PARAM */);
  res[20] = ((tmp48 && tmp49)?data->localData[0]->realVars[114] /* pwLine1.ir.im variable */:data->localData[0]->realVars[118] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[120] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[278] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[114] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[119] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[275] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[118] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[276] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[277] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[115] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[118] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[275] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[119] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[276] /* pwLine1.Y.re PARAM */)))));

  tmp50 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[279] /* pwLine1.t1 PARAM */);
  tmp51 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[280] /* pwLine1.t2 PARAM */);
  res[21] = ((tmp50 && tmp51)?data->localData[0]->realVars[116] /* pwLine1.is.im variable */:data->localData[0]->realVars[120] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[118] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[278] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[116] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[121] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[275] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[276] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[277] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[117] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[275] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[121] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[276] /* pwLine1.Y.re PARAM */)))));

  res[22] = (data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[52] /* constantLoad.p.ir variable */) + ((-data->localData[0]->realVars[121] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[51] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[47] /* constantLoad.Q variable */;

  res[23] = (data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[51] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[121] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[52] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[46] /* constantLoad.P variable */;

  tmp52 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[268] /* pwLine.t1 PARAM */);
  tmp53 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[269] /* pwLine.t2 PARAM */);
  res[24] = ((tmp52 && tmp53)?data->localData[0]->realVars[104] /* pwLine.ir.im variable */:data->localData[0]->realVars[120] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[108] /* pwLine.vs.im variable */ - ((data->simulationInfo->realParameter[267] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[104] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[121] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[264] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[265] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[266] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[105] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[264] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[121] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[265] /* pwLine.Y.re PARAM */)))));

  tmp54 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[268] /* pwLine.t1 PARAM */);
  tmp55 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[269] /* pwLine.t2 PARAM */);
  res[25] = ((tmp54 && tmp55)?data->localData[0]->realVars[105] /* pwLine.ir.re variable */:data->localData[0]->realVars[121] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[109] /* pwLine.vs.re variable */ - ((data->simulationInfo->realParameter[267] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[105] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[264] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[121] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[265] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[266] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[104] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[121] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[264] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[265] /* pwLine.Y.re PARAM */))))));

  tmp56 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[268] /* pwLine.t1 PARAM */);
  tmp57 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[269] /* pwLine.t2 PARAM */);
  res[26] = ((tmp56 && tmp57)?data->localData[0]->realVars[107] /* pwLine.is.re variable */:data->localData[0]->realVars[109] /* pwLine.vs.re variable */ - data->localData[0]->realVars[121] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[267] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[107] /* pwLine.is.re variable */ + (data->localData[0]->realVars[108] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[264] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[109] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[265] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[266] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[106] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[109] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[264] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[108] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[265] /* pwLine.Y.re PARAM */))))));

  tmp58 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[268] /* pwLine.t1 PARAM */);
  tmp59 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[269] /* pwLine.t2 PARAM */);
  res[27] = ((tmp58 && tmp59)?data->localData[0]->realVars[106] /* pwLine.is.im variable */:data->localData[0]->realVars[108] /* pwLine.vs.im variable */ - data->localData[0]->realVars[120] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[267] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[106] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[109] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[264] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[108] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[265] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[266] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[107] /* pwLine.is.re variable */ + (data->localData[0]->realVars[108] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[264] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[109] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[265] /* pwLine.Y.re PARAM */)))));

  res[28] = data->localData[0]->realVars[87] /* gENROE.PSIppq variable */ - ((data->localData[0]->realVars[6] /* gENROE.Epd STATE(1) */) * (data->simulationInfo->realParameter[189] /* gENROE.K3q PARAM */)) - ((data->localData[0]->realVars[9] /* gENROE.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[191] /* gENROE.K4q PARAM */));

  res[29] = data->localData[0]->realVars[6] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[226] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[221] /* gENROE.Xl PARAM */) * (data->localData[0]->realVars[95] /* gENROE.iq variable */) + (-data->localData[0]->realVars[9] /* gENROE.PSIkq STATE(1) */) - ((data->localData[0]->realVars[21] /* der(gENROE.PSIkq) STATE_DER */) * (data->simulationInfo->realParameter[215] /* gENROE.Tppq0 PARAM */));
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS96(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+30] = {0,4,4,4,4,3,3,4,4,3,3,4,4,6,6,2,2,6,6,6,6,5,5,7,7,3,2,11,8,8,11};
  const int rowIndex[151] = {22,23,24,25,19,21,22,23,22,23,24,25,19,21,22,23,8,17,18,8,15,16,10,11,22,23,10,11,22,23,9,15,16,9,17,18,12,13,14,20,12,13,14,20,6,7,12,13,14,20,6,7,12,13,14,20,1,2,28,29,1,2,4,5,28,29,1,2,4,5,28,29,4,5,26,27,28,29,1,2,4,5,26,27,3,5,25,26,27,3,4,24,26,27,6,12,13,14,16,20,21,7,12,13,14,15,19,20,0,1,2,0,3,10,11,18,19,20,21,22,23,24,25,27,8,9,10,13,15,16,17,18,8,9,11,12,15,16,17,18,10,11,14,17,19,21,22,23,24,25,26};
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
  inSysData->sparsePattern->colorCols[7] = 5;
  inSysData->sparsePattern->colorCols[20] = 5;
  inSysData->sparsePattern->colorCols[23] = 5;
  inSysData->sparsePattern->colorCols[6] = 6;
  inSysData->sparsePattern->colorCols[19] = 6;
  inSysData->sparsePattern->colorCols[22] = 6;
  inSysData->sparsePattern->colorCols[3] = 7;
  inSysData->sparsePattern->colorCols[13] = 7;
  inSysData->sparsePattern->colorCols[18] = 7;
  inSysData->sparsePattern->colorCols[24] = 7;
  inSysData->sparsePattern->colorCols[2] = 8;
  inSysData->sparsePattern->colorCols[12] = 8;
  inSysData->sparsePattern->colorCols[17] = 8;
  inSysData->sparsePattern->colorCols[1] = 9;
  inSysData->sparsePattern->colorCols[5] = 9;
  inSysData->sparsePattern->colorCols[9] = 9;
  inSysData->sparsePattern->colorCols[11] = 9;
  inSysData->sparsePattern->colorCols[16] = 9;
  inSysData->sparsePattern->colorCols[0] = 10;
  inSysData->sparsePattern->colorCols[4] = 10;
  inSysData->sparsePattern->colorCols[8] = 10;
  inSysData->sparsePattern->colorCols[10] = 10;
  inSysData->sparsePattern->colorCols[14] = 10;
  inSysData->sparsePattern->colorCols[15] = 10;
  inSysData->sparsePattern->colorCols[25] = 10;
}
void initializeStaticDataNLS96(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
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
  /* static nls data for pwLine3.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[126].attribute /* pwLine3.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[126].attribute /* pwLine3.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[126].attribute /* pwLine3.ir.im */.max;
  /* static nls data for pwLine4.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[138].attribute /* pwLine4.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[138].attribute /* pwLine4.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[138].attribute /* pwLine4.is.im */.max;
  /* static nls data for pwLine3.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[128].attribute /* pwLine3.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[128].attribute /* pwLine3.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[128].attribute /* pwLine3.is.im */.max;
  /* static nls data for pwLine3.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[129].attribute /* pwLine3.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[129].attribute /* pwLine3.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[129].attribute /* pwLine3.is.re */.max;
  /* static nls data for pwLine4.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[139].attribute /* pwLine4.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[139].attribute /* pwLine4.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[139].attribute /* pwLine4.is.re */.max;
  /* static nls data for pwLine3.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[127].attribute /* pwLine3.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[127].attribute /* pwLine3.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[127].attribute /* pwLine3.ir.re */.max;
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
  /* static nls data for gENROE.PSIkd */
  sysData->nominal[i] = data->modelData->realVarsData[8].attribute /* gENROE.PSIkd */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[8].attribute /* gENROE.PSIkd */.min;
  sysData->max[i++]   = data->modelData->realVarsData[8].attribute /* gENROE.PSIkd */.max;
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
  /* static nls data for pwLine.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[109].attribute /* pwLine.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[109].attribute /* pwLine.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[109].attribute /* pwLine.vs.re */.max;
  /* static nls data for pwLine.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[108].attribute /* pwLine.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[108].attribute /* pwLine.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[108].attribute /* pwLine.vs.im */.max;
  /* static nls data for pwLine1.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[118].attribute /* pwLine1.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[118].attribute /* pwLine1.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[118].attribute /* pwLine1.vr.im */.max;
  /* static nls data for pwLine1.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[119].attribute /* pwLine1.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[119].attribute /* pwLine1.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[119].attribute /* pwLine1.vr.re */.max;
  /* static nls data for eXST1.XADIFD */
  sysData->nominal[i] = data->modelData->realVarsData[63].attribute /* eXST1.XADIFD */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[63].attribute /* eXST1.XADIFD */.min;
  sysData->max[i++]   = data->modelData->realVarsData[63].attribute /* eXST1.XADIFD */.max;
  /* static nls data for eXST1.ECOMP */
  sysData->nominal[i] = data->modelData->realVarsData[56].attribute /* eXST1.ECOMP */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[56].attribute /* eXST1.ECOMP */.min;
  sysData->max[i++]   = data->modelData->realVarsData[56].attribute /* eXST1.ECOMP */.max;
  /* static nls data for pwLine1.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[120].attribute /* pwLine1.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[120].attribute /* pwLine1.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[120].attribute /* pwLine1.vs.im */.max;
  /* static nls data for pwLine3.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[130].attribute /* pwLine3.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[130].attribute /* pwLine3.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[130].attribute /* pwLine3.vr.im */.max;
  /* static nls data for pwLine3.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[131].attribute /* pwLine3.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[131].attribute /* pwLine3.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[131].attribute /* pwLine3.vr.re */.max;
  /* static nls data for pwLine1.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[121].attribute /* pwLine1.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[121].attribute /* pwLine1.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[121].attribute /* pwLine1.vs.re */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS96(sysData);
}

void getIterationVarsNLS96(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[105] /* pwLine.ir.re variable */;
  array[1] = data->localData[0]->realVars[117] /* pwLine1.is.re variable */;
  array[2] = data->localData[0]->realVars[104] /* pwLine.ir.im variable */;
  array[3] = data->localData[0]->realVars[116] /* pwLine1.is.im variable */;
  array[4] = data->localData[0]->realVars[126] /* pwLine3.ir.im variable */;
  array[5] = data->localData[0]->realVars[138] /* pwLine4.is.im variable */;
  array[6] = data->localData[0]->realVars[128] /* pwLine3.is.im variable */;
  array[7] = data->localData[0]->realVars[129] /* pwLine3.is.re variable */;
  array[8] = data->localData[0]->realVars[139] /* pwLine4.is.re variable */;
  array[9] = data->localData[0]->realVars[127] /* pwLine3.ir.re variable */;
  array[10] = data->localData[0]->realVars[136] /* pwLine4.ir.im variable */;
  array[11] = data->localData[0]->realVars[115] /* pwLine1.ir.re variable */;
  array[12] = data->localData[0]->realVars[75] /* gENCLS.iq variable */;
  array[13] = data->localData[0]->realVars[74] /* gENCLS.id variable */;
  array[14] = data->localData[0]->realVars[8] /* gENROE.PSIkd STATE(1) */;
  array[15] = data->localData[0]->realVars[6] /* gENROE.Epd STATE(1) */;
  array[16] = data->localData[0]->realVars[87] /* gENROE.PSIppq variable */;
  array[17] = data->localData[0]->realVars[86] /* gENROE.PSIppd variable */;
  array[18] = data->localData[0]->realVars[95] /* gENROE.iq variable */;
  array[19] = data->localData[0]->realVars[94] /* gENROE.id variable */;
  array[20] = data->localData[0]->realVars[109] /* pwLine.vs.re variable */;
  array[21] = data->localData[0]->realVars[108] /* pwLine.vs.im variable */;
  array[22] = data->localData[0]->realVars[118] /* pwLine1.vr.im variable */;
  array[23] = data->localData[0]->realVars[119] /* pwLine1.vr.re variable */;
  array[24] = data->localData[0]->realVars[63] /* eXST1.XADIFD variable */;
  array[25] = data->localData[0]->realVars[56] /* eXST1.ECOMP variable */;
  array[26] = data->localData[0]->realVars[120] /* pwLine1.vs.im variable */;
  array[27] = data->localData[0]->realVars[130] /* pwLine3.vr.im variable */;
  array[28] = data->localData[0]->realVars[131] /* pwLine3.vr.re variable */;
  array[29] = data->localData[0]->realVars[121] /* pwLine1.vs.re variable */;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize non-linear systems */
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA* nonLinearSystemData)
{
  
  nonLinearSystemData[4].equationIndex = 827;
  nonLinearSystemData[4].size = 1;
  nonLinearSystemData[4].homotopySupport = 0;
  nonLinearSystemData[4].mixedSystem = 0;
  nonLinearSystemData[4].residualFunc = residualFunc827;
  nonLinearSystemData[4].strictTearingFunctionCall = NULL;
  nonLinearSystemData[4].analyticalJacobianColumn = NULL;
  nonLinearSystemData[4].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[4].jacobianIndex = -1;
  nonLinearSystemData[4].initializeStaticNLSData = initializeStaticDataNLS827;
  nonLinearSystemData[4].getIterationVars = getIterationVarsNLS827;
  nonLinearSystemData[4].checkConstraints = NULL;
  
  
  nonLinearSystemData[3].equationIndex = 822;
  nonLinearSystemData[3].size = 1;
  nonLinearSystemData[3].homotopySupport = 0;
  nonLinearSystemData[3].mixedSystem = 1;
  nonLinearSystemData[3].residualFunc = residualFunc822;
  nonLinearSystemData[3].strictTearingFunctionCall = NULL;
  nonLinearSystemData[3].analyticalJacobianColumn = OpenIPSL_Examples_Controls_PSSE_ES_EXST1_functionJacNLSJac22_column;
  nonLinearSystemData[3].initialAnalyticalJacobian = OpenIPSL_Examples_Controls_PSSE_ES_EXST1_initialAnalyticJacobianNLSJac22;
  nonLinearSystemData[3].jacobianIndex = 1 /*jacInx*/;
  nonLinearSystemData[3].initializeStaticNLSData = initializeStaticDataNLS822;
  nonLinearSystemData[3].getIterationVars = getIterationVarsNLS822;
  nonLinearSystemData[3].checkConstraints = NULL;
  
  
  nonLinearSystemData[2].equationIndex = 782;
  nonLinearSystemData[2].size = 22;
  nonLinearSystemData[2].homotopySupport = 0;
  nonLinearSystemData[2].mixedSystem = 1;
  nonLinearSystemData[2].residualFunc = residualFunc782;
  nonLinearSystemData[2].strictTearingFunctionCall = NULL;
  nonLinearSystemData[2].analyticalJacobianColumn = OpenIPSL_Examples_Controls_PSSE_ES_EXST1_functionJacNLSJac21_column;
  nonLinearSystemData[2].initialAnalyticalJacobian = OpenIPSL_Examples_Controls_PSSE_ES_EXST1_initialAnalyticJacobianNLSJac21;
  nonLinearSystemData[2].jacobianIndex = 0 /*jacInx*/;
  nonLinearSystemData[2].initializeStaticNLSData = initializeStaticDataNLS782;
  nonLinearSystemData[2].getIterationVars = getIterationVarsNLS782;
  nonLinearSystemData[2].checkConstraints = NULL;
  
  
  nonLinearSystemData[1].equationIndex = 621;
  nonLinearSystemData[1].size = 30;
  nonLinearSystemData[1].homotopySupport = 0;
  nonLinearSystemData[1].mixedSystem = 1;
  nonLinearSystemData[1].residualFunc = residualFunc621;
  nonLinearSystemData[1].strictTearingFunctionCall = NULL;
  nonLinearSystemData[1].analyticalJacobianColumn = NULL;
  nonLinearSystemData[1].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[1].jacobianIndex = -1;
  nonLinearSystemData[1].initializeStaticNLSData = initializeStaticDataNLS621;
  nonLinearSystemData[1].getIterationVars = getIterationVarsNLS621;
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

