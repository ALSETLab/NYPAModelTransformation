/* Non Linear Systems */
#include "OpenIPSL.Examples.Controls.PSSE.ES.IEEET2_model.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.IEEET2_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* inner equations */

/*
equation index: 293
type: SIMPLE_ASSIGN
iEEET2.add.u2 = if abs(iEEET2.simpleLag.T) <= 1e-15 then iEEET2.derivativeLag.y * iEEET2.simpleLag.K else iEEET2.simpleLag.state
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_293(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,293};
  modelica_boolean tmp0;
  tmp0 = LessEq(fabs(data->simulationInfo->realParameter[255] /* iEEET2.simpleLag.T PARAM */),1e-15);
  data->localData[0]->realVars[91] /* iEEET2.add.u2 variable */ = (tmp0?(data->localData[0]->realVars[94] /* iEEET2.derivativeLag.y variable */) * (data->simulationInfo->realParameter[254] /* iEEET2.simpleLag.K PARAM */):data->localData[0]->realVars[11] /* iEEET2.simpleLag.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 294
type: SIMPLE_ASSIGN
iEEET2.add.y = iEEET2.add.k1 * iEEET2.add.u1 + iEEET2.add.k2 * iEEET2.add.u2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_294(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,294};
  data->localData[0]->realVars[92] /* iEEET2.add.y variable */ = (data->simulationInfo->realParameter[228] /* iEEET2.add.k1 PARAM */) * (data->localData[0]->realVars[90] /* iEEET2.add.u1 variable */) + (data->simulationInfo->realParameter[229] /* iEEET2.add.k2 PARAM */) * (data->localData[0]->realVars[91] /* iEEET2.add.u2 variable */);
  TRACE_POP
}
/*
equation index: 295
type: SIMPLE_ASSIGN
iEEET2.derivativeLag.u = if abs(iEEET2.simpleLagLim.T) <= 1e-15 then max(min(iEEET2.add.y * iEEET2.simpleLagLim.K, iEEET2.simpleLagLim.outMax), iEEET2.simpleLagLim.outMin) else max(min(iEEET2.simpleLagLim.state, iEEET2.simpleLagLim.outMax), iEEET2.simpleLagLim.outMin)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_295(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,295};
  modelica_boolean tmp0;
  tmp0 = LessEq(fabs(data->simulationInfo->realParameter[260] /* iEEET2.simpleLagLim.T PARAM */),1e-15);
  data->localData[0]->realVars[93] /* iEEET2.derivativeLag.u variable */ = (tmp0?fmax(fmin((data->localData[0]->realVars[92] /* iEEET2.add.y variable */) * (data->simulationInfo->realParameter[259] /* iEEET2.simpleLagLim.K PARAM */),data->simulationInfo->realParameter[263] /* iEEET2.simpleLagLim.outMax PARAM */),data->simulationInfo->realParameter[264] /* iEEET2.simpleLagLim.outMin PARAM */):fmax(fmin(data->localData[0]->realVars[12] /* iEEET2.simpleLagLim.state STATE(1) */,data->simulationInfo->realParameter[263] /* iEEET2.simpleLagLim.outMax PARAM */),data->simulationInfo->realParameter[264] /* iEEET2.simpleLagLim.outMin PARAM */));
  TRACE_POP
}

void residualFunc301(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,301};
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
  data->localData[0]->realVars[94] /* iEEET2.derivativeLag.y variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_293(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_294(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_295(data, threadData);
  /* body */
  res[0] = (0.06) * (DIVISION_SIM(data->localData[0]->realVars[93] /* iEEET2.derivativeLag.u variable */ - data->localData[0]->realVars[9] /* iEEET2.derivativeLag.x STATE(1) */,data->simulationInfo->realParameter[234] /* iEEET2.derivativeLag.T PARAM */,"iEEET2.derivativeLag.T",equationIndexes)) - data->localData[0]->realVars[94] /* iEEET2.derivativeLag.y variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS301(NONLINEAR_SYSTEM_DATA* inSysData)
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
void initializeStaticDataNLS301(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for iEEET2.derivativeLag.y */
  sysData->nominal[i] = data->modelData->realVarsData[94].attribute /* iEEET2.derivativeLag.y */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[94].attribute /* iEEET2.derivativeLag.y */.min;
  sysData->max[i++]   = data->modelData->realVarsData[94].attribute /* iEEET2.derivativeLag.y */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS301(sysData);
}

void getIterationVarsNLS301(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[94] /* iEEET2.derivativeLag.y variable */;
}


/* inner equations */

/*
equation index: 181
type: SIMPLE_ASSIGN
constantLoad.v = sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_181(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,181};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[124] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[123] /* pwLine1.vs.im variable */;
  data->localData[0]->realVars[55] /* constantLoad.v variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 182
type: SIMPLE_ASSIGN
constantLoad.kI = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (-1.0 + constantLoad.b2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_182(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,182};
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
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[55] /* constantLoad.v variable */, 0.5, 7, Less);
  tmp15 = (modelica_boolean)tmp0;
  if(tmp15)
  {
    tmp1 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
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
    }tmp8 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
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
  data->localData[0]->realVars[51] /* constantLoad.kI variable */ = tmp16;
  TRACE_POP
}
/*
equation index: 183
type: SIMPLE_ASSIGN
constantLoad.kP = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a0 + constantLoad.a1 * cos(constantLoad.v * constantLoad.wp) + constantLoad.b1 * sin(constantLoad.v * constantLoad.wp) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_183(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,183};
  modelica_boolean tmp0;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[55] /* constantLoad.v variable */, data->simulationInfo->realParameter[37] /* constantLoad.PQBRAK PARAM */, 6, Less);
  data->localData[0]->realVars[52] /* constantLoad.kP variable */ = (tmp0?data->simulationInfo->realParameter[56] /* constantLoad.a0 PARAM */ + (data->simulationInfo->realParameter[57] /* constantLoad.a1 PARAM */) * (cos((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[77] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[63] /* constantLoad.b1 PARAM */) * (sin((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[77] /* constantLoad.wp PARAM */))):1.0);
  TRACE_POP
}
/*
equation index: 184
type: SIMPLE_ASSIGN
constantLoad.Q = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_184(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,184};
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
    tmp2 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[40] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[44] /* constantLoad.S_Y.im PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[42] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[66] /* constantLoad.d_Q PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[40] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[44] /* constantLoad.S_Y.im PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[42] /* constantLoad.S_P.im PARAM */);
  }
  data->localData[0]->realVars[49] /* constantLoad.Q variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 185
type: SIMPLE_ASSIGN
constantLoad.P = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_185(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,185};
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
    tmp2 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[41] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[45] /* constantLoad.S_Y.re PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[43] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_P PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[41] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[45] /* constantLoad.S_Y.re PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[43] /* constantLoad.S_P.re PARAM */);
  }
  data->localData[0]->realVars[48] /* constantLoad.P variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 186
type: SIMPLE_ASSIGN
gENROE.PSIq = (-gENROE.PSIppq) - gENROE.Xppq * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_186(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,186};
  data->localData[0]->realVars[74] /* gENROE.PSIq variable */ = (-data->localData[0]->realVars[73] /* gENROE.PSIppq variable */) - ((data->simulationInfo->realParameter[159] /* gENROE.Xppq PARAM */) * (data->localData[0]->realVars[82] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 187
type: SIMPLE_ASSIGN
pwLine.is.im = ($cse6 * gENROE.iq - $cse7 * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_187(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,187};
  data->localData[0]->realVars[109] /* pwLine.is.im variable */ = ((data->localData[0]->realVars[30] /* $cse6 variable */) * (data->localData[0]->realVars[82] /* gENROE.iq variable */) - ((data->localData[0]->realVars[31] /* $cse7 variable */) * (data->localData[0]->realVars[81] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[104] /* gENROE.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 188
type: SIMPLE_ASSIGN
pwLine.is.re = ($cse7 * gENROE.iq - (-$cse6) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_188(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,188};
  data->localData[0]->realVars[110] /* pwLine.is.re variable */ = ((data->localData[0]->realVars[31] /* $cse7 variable */) * (data->localData[0]->realVars[82] /* gENROE.iq variable */) - (((-data->localData[0]->realVars[30] /* $cse6 variable */)) * (data->localData[0]->realVars[81] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[104] /* gENROE.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 189
type: SIMPLE_ASSIGN
gENROE.ud = (-gENROE.PSIq) - gENROE.R_a * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_189(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,189};
  data->localData[0]->realVars[83] /* gENROE.ud variable */ = (-data->localData[0]->realVars[74] /* gENROE.PSIq variable */) - ((data->simulationInfo->realParameter[141] /* gENROE.R_a PARAM */) * (data->localData[0]->realVars[81] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 190
type: SIMPLE_ASSIGN
gENROE.PSId = gENROE.PSIppd - gENROE.Xppd * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_190(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,190};
  data->localData[0]->realVars[70] /* gENROE.PSId variable */ = data->localData[0]->realVars[72] /* gENROE.PSIppd variable */ - ((data->simulationInfo->realParameter[158] /* gENROE.Xppd PARAM */) * (data->localData[0]->realVars[81] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 191
type: SIMPLE_ASSIGN
gENROE.uq = gENROE.PSId - gENROE.R_a * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_191(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,191};
  data->localData[0]->realVars[84] /* gENROE.uq variable */ = data->localData[0]->realVars[70] /* gENROE.PSId variable */ - ((data->simulationInfo->realParameter[141] /* gENROE.R_a PARAM */) * (data->localData[0]->realVars[82] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 192
type: SIMPLE_ASSIGN
pwLine.vs.im = $cse6 * gENROE.uq - $cse7 * gENROE.ud
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_192(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,192};
  data->localData[0]->realVars[111] /* pwLine.vs.im variable */ = (data->localData[0]->realVars[30] /* $cse6 variable */) * (data->localData[0]->realVars[84] /* gENROE.uq variable */) - ((data->localData[0]->realVars[31] /* $cse7 variable */) * (data->localData[0]->realVars[83] /* gENROE.ud variable */));
  TRACE_POP
}
/*
equation index: 193
type: SIMPLE_ASSIGN
pwLine.vs.re = $cse6 * gENROE.ud + $cse7 * gENROE.uq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_193(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,193};
  data->localData[0]->realVars[112] /* pwLine.vs.re variable */ = (data->localData[0]->realVars[30] /* $cse6 variable */) * (data->localData[0]->realVars[83] /* gENROE.ud variable */) + (data->localData[0]->realVars[31] /* $cse7 variable */) * (data->localData[0]->realVars[84] /* gENROE.uq variable */);
  TRACE_POP
}
/*
equation index: 194
type: SIMPLE_ASSIGN
gENCLS.p.ii = ($cse2 * gENCLS.id - $cse1 * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_194(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,194};
  data->localData[0]->realVars[63] /* gENCLS.p.ii variable */ = ((data->localData[0]->realVars[27] /* $cse2 variable */) * (data->localData[0]->realVars[60] /* gENCLS.id variable */) - ((data->localData[0]->realVars[26] /* $cse1 variable */) * (data->localData[0]->realVars[61] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[78] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 195
type: SIMPLE_ASSIGN
gENCLS.p.ir = ((-$cse1) * gENCLS.id - $cse2 * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_195(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,195};
  data->localData[0]->realVars[64] /* gENCLS.p.ir variable */ = (((-data->localData[0]->realVars[26] /* $cse1 variable */)) * (data->localData[0]->realVars[60] /* gENCLS.id variable */) - ((data->localData[0]->realVars[27] /* $cse2 variable */) * (data->localData[0]->realVars[61] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[78] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 196
type: SIMPLE_ASSIGN
gENCLS.vq = gENCLS.eq + (-gENCLS.R_a) * gENCLS.iq - gENCLS.X_d * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_196(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,196};
  data->localData[0]->realVars[66] /* gENCLS.vq variable */ = data->localData[0]->realVars[1] /* gENCLS.eq STATE(1) */ + ((-data->simulationInfo->realParameter[84] /* gENCLS.R_a PARAM */)) * (data->localData[0]->realVars[61] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[87] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[60] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 197
type: SIMPLE_ASSIGN
gENCLS.vd = gENCLS.X_d * gENCLS.iq - gENCLS.R_a * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_197(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,197};
  data->localData[0]->realVars[65] /* gENCLS.vd variable */ = (data->simulationInfo->realParameter[87] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[61] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[84] /* gENCLS.R_a PARAM */) * (data->localData[0]->realVars[60] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 198
type: SIMPLE_ASSIGN
pwLine4.ir.im = (-pwLine1.ir.im) - gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_198(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,198};
  data->localData[0]->realVars[139] /* pwLine4.ir.im variable */ = (-data->localData[0]->realVars[117] /* pwLine1.ir.im variable */) - data->localData[0]->realVars[63] /* gENCLS.p.ii variable */;
  TRACE_POP
}
/*
equation index: 199
type: SIMPLE_ASSIGN
pwLine4.ir.re = (-pwLine1.ir.re) - gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_199(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,199};
  data->localData[0]->realVars[140] /* pwLine4.ir.re variable */ = (-data->localData[0]->realVars[118] /* pwLine1.ir.re variable */) - data->localData[0]->realVars[64] /* gENCLS.p.ir variable */;
  TRACE_POP
}
/*
equation index: 200
type: SIMPLE_ASSIGN
pwLine1.is.re = (-pwLine.ir.re) - pwLine3.is.re - constantLoad.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_200(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,200};
  data->localData[0]->realVars[120] /* pwLine1.is.re variable */ = (-data->localData[0]->realVars[108] /* pwLine.ir.re variable */) - data->localData[0]->realVars[132] /* pwLine3.is.re variable */ - data->localData[0]->realVars[54] /* constantLoad.p.ir variable */;
  TRACE_POP
}
/*
equation index: 201
type: SIMPLE_ASSIGN
pwLine1.is.im = (-pwLine.ir.im) - pwLine3.is.im - constantLoad.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_201(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,201};
  data->localData[0]->realVars[119] /* pwLine1.is.im variable */ = (-data->localData[0]->realVars[107] /* pwLine.ir.im variable */) - data->localData[0]->realVars[131] /* pwLine3.is.im variable */ - data->localData[0]->realVars[53] /* constantLoad.p.ii variable */;
  TRACE_POP
}
/*
equation index: 202
type: SIMPLE_ASSIGN
pwFault.p.ii = (-pwLine3.ir.im) - pwLine4.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_202(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,202};
  data->localData[0]->realVars[101] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[129] /* pwLine3.ir.im variable */) - data->localData[0]->realVars[141] /* pwLine4.is.im variable */;
  TRACE_POP
}
/*
equation index: 203
type: SIMPLE_ASSIGN
pwFault.p.ir = (-pwLine3.ir.re) - pwLine4.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_203(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,203};
  data->localData[0]->realVars[102] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[130] /* pwLine3.ir.re variable */) - data->localData[0]->realVars[142] /* pwLine4.is.re variable */;
  TRACE_POP
}

void residualFunc271(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,271};
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
  data->localData[0]->realVars[130] /* pwLine3.ir.re variable */ = xloc[0];
  data->localData[0]->realVars[142] /* pwLine4.is.re variable */ = xloc[1];
  data->localData[0]->realVars[129] /* pwLine3.ir.im variable */ = xloc[2];
  data->localData[0]->realVars[141] /* pwLine4.is.im variable */ = xloc[3];
  data->localData[0]->realVars[107] /* pwLine.ir.im variable */ = xloc[4];
  data->localData[0]->realVars[131] /* pwLine3.is.im variable */ = xloc[5];
  data->localData[0]->realVars[108] /* pwLine.ir.re variable */ = xloc[6];
  data->localData[0]->realVars[132] /* pwLine3.is.re variable */ = xloc[7];
  data->localData[0]->realVars[54] /* constantLoad.p.ir variable */ = xloc[8];
  data->localData[0]->realVars[53] /* constantLoad.p.ii variable */ = xloc[9];
  data->localData[0]->realVars[118] /* pwLine1.ir.re variable */ = xloc[10];
  data->localData[0]->realVars[117] /* pwLine1.ir.im variable */ = xloc[11];
  data->localData[0]->realVars[60] /* gENCLS.id variable */ = xloc[12];
  data->localData[0]->realVars[61] /* gENCLS.iq variable */ = xloc[13];
  data->localData[0]->realVars[122] /* pwLine1.vr.re variable */ = xloc[14];
  data->localData[0]->realVars[121] /* pwLine1.vr.im variable */ = xloc[15];
  data->localData[0]->realVars[81] /* gENROE.id variable */ = xloc[16];
  data->localData[0]->realVars[82] /* gENROE.iq variable */ = xloc[17];
  data->localData[0]->realVars[124] /* pwLine1.vs.re variable */ = xloc[18];
  data->localData[0]->realVars[123] /* pwLine1.vs.im variable */ = xloc[19];
  data->localData[0]->realVars[133] /* pwLine3.vr.im variable */ = xloc[20];
  data->localData[0]->realVars[134] /* pwLine3.vr.re variable */ = xloc[21];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_181(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_182(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_183(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_184(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_185(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_186(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_187(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_188(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_189(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_190(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_191(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_192(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_193(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_194(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_195(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_196(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_197(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_198(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_199(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_200(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_201(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_202(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_203(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[27] /* $cse2 variable */) * (data->localData[0]->realVars[66] /* gENCLS.vq variable */) + (data->localData[0]->realVars[26] /* $cse1 variable */) * (data->localData[0]->realVars[65] /* gENCLS.vd variable */) - data->localData[0]->realVars[122] /* pwLine1.vr.re variable */;

  res[1] = (data->localData[0]->realVars[123] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) + ((-data->localData[0]->realVars[124] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[49] /* constantLoad.Q variable */;

  res[2] = (data->localData[0]->realVars[123] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[124] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[48] /* constantLoad.P variable */;

  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, data->simulationInfo->realParameter[301] /* pwLine3.t1 PARAM */, 8, GreaterEq);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->timeValue, data->simulationInfo->realParameter[302] /* pwLine3.t2 PARAM */, 9, Less);
  res[3] = ((tmp0 && tmp1)?data->localData[0]->realVars[131] /* pwLine3.is.im variable */:data->localData[0]->realVars[123] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[133] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[300] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[131] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[124] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[297] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[123] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[298] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[299] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[132] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[123] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[297] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[124] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[298] /* pwLine3.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp2, data->localData[0]->timeValue, data->simulationInfo->realParameter[301] /* pwLine3.t1 PARAM */, 8, GreaterEq);
  RELATIONHYSTERESIS(tmp3, data->localData[0]->timeValue, data->simulationInfo->realParameter[302] /* pwLine3.t2 PARAM */, 9, Less);
  res[4] = ((tmp2 && tmp3)?data->localData[0]->realVars[132] /* pwLine3.is.re variable */:data->localData[0]->realVars[124] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[134] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[300] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[132] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[123] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[297] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[124] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[298] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[299] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[131] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[124] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[297] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[123] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[298] /* pwLine3.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp4, data->localData[0]->timeValue, data->simulationInfo->realParameter[312] /* pwLine4.t1 PARAM */, 10, GreaterEq);
  RELATIONHYSTERESIS(tmp5, data->localData[0]->timeValue, data->simulationInfo->realParameter[313] /* pwLine4.t2 PARAM */, 11, Less);
  res[5] = ((tmp4 && tmp5)?data->localData[0]->realVars[142] /* pwLine4.is.re variable */:data->localData[0]->realVars[134] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[122] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[311] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[142] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[133] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[308] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[134] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[309] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[310] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[141] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[134] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[308] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[133] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[309] /* pwLine4.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp6, data->localData[0]->timeValue, data->simulationInfo->realParameter[312] /* pwLine4.t1 PARAM */, 10, GreaterEq);
  RELATIONHYSTERESIS(tmp7, data->localData[0]->timeValue, data->simulationInfo->realParameter[313] /* pwLine4.t2 PARAM */, 11, Less);
  res[6] = ((tmp6 && tmp7)?data->localData[0]->realVars[141] /* pwLine4.is.im variable */:data->localData[0]->realVars[133] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[121] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[311] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[141] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[134] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[308] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[133] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[309] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[310] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[142] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[133] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[308] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[134] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[309] /* pwLine4.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp8, data->localData[0]->timeValue, data->simulationInfo->realParameter[268] /* pwFault.t1 PARAM */, 12, Less);
  tmp17 = (modelica_boolean)tmp8;
  if(tmp17)
  {
    tmp18 = data->localData[0]->realVars[101] /* pwFault.p.ii variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp9, data->localData[0]->timeValue, data->simulationInfo->realParameter[269] /* pwFault.t2 PARAM */, 13, Less);
    tmp15 = (modelica_boolean)(tmp9 && data->simulationInfo->booleanParameter[66] /* pwFault.ground PARAM */);
    if(tmp15)
    {
      tmp16 = data->localData[0]->realVars[134] /* pwLine3.vr.re variable */ - 1e-10;
    }
    else
    {
      RELATIONHYSTERESIS(tmp10, data->localData[0]->timeValue, data->simulationInfo->realParameter[269] /* pwFault.t2 PARAM */, 13, Less);
      tmp13 = (modelica_boolean)tmp10;
      if(tmp13)
      {
        tmp11 = data->simulationInfo->realParameter[267] /* pwFault.X PARAM */;
        tmp12 = data->simulationInfo->realParameter[266] /* pwFault.R PARAM */;
        tmp14 = data->localData[0]->realVars[101] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[266] /* pwFault.R PARAM */) * (data->localData[0]->realVars[133] /* pwLine3.vr.im variable */) - ((data->simulationInfo->realParameter[267] /* pwFault.X PARAM */) * (data->localData[0]->realVars[134] /* pwLine3.vr.re variable */)),(tmp11 * tmp11) + (tmp12 * tmp12),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
      }
      else
      {
        tmp14 = data->localData[0]->realVars[101] /* pwFault.p.ii variable */;
      }
      tmp16 = tmp14;
    }
    tmp18 = tmp16;
  }
  res[7] = tmp18;

  RELATIONHYSTERESIS(tmp19, data->localData[0]->timeValue, data->simulationInfo->realParameter[268] /* pwFault.t1 PARAM */, 12, Less);
  tmp28 = (modelica_boolean)tmp19;
  if(tmp28)
  {
    tmp29 = data->localData[0]->realVars[102] /* pwFault.p.ir variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp20, data->localData[0]->timeValue, data->simulationInfo->realParameter[269] /* pwFault.t2 PARAM */, 13, Less);
    tmp26 = (modelica_boolean)(tmp20 && data->simulationInfo->booleanParameter[66] /* pwFault.ground PARAM */);
    if(tmp26)
    {
      tmp27 = data->localData[0]->realVars[133] /* pwLine3.vr.im variable */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp21, data->localData[0]->timeValue, data->simulationInfo->realParameter[269] /* pwFault.t2 PARAM */, 13, Less);
      tmp24 = (modelica_boolean)tmp21;
      if(tmp24)
      {
        tmp22 = data->simulationInfo->realParameter[266] /* pwFault.R PARAM */;
        tmp23 = data->simulationInfo->realParameter[267] /* pwFault.X PARAM */;
        tmp25 = data->localData[0]->realVars[102] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[266] /* pwFault.R PARAM */) * (data->localData[0]->realVars[134] /* pwLine3.vr.re variable */) + (data->simulationInfo->realParameter[267] /* pwFault.X PARAM */) * (data->localData[0]->realVars[133] /* pwLine3.vr.im variable */),(tmp22 * tmp22) + (tmp23 * tmp23),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp25 = data->localData[0]->realVars[102] /* pwFault.p.ir variable */;
      }
      tmp27 = tmp25;
    }
    tmp29 = tmp27;
  }
  res[8] = tmp29;

  RELATIONHYSTERESIS(tmp30, data->localData[0]->timeValue, data->simulationInfo->realParameter[301] /* pwLine3.t1 PARAM */, 8, GreaterEq);
  RELATIONHYSTERESIS(tmp31, data->localData[0]->timeValue, data->simulationInfo->realParameter[302] /* pwLine3.t2 PARAM */, 9, Less);
  res[9] = ((tmp30 && tmp31)?data->localData[0]->realVars[130] /* pwLine3.ir.re variable */:data->localData[0]->realVars[134] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[124] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[300] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[130] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[133] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[297] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[134] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[298] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[299] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[129] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[134] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[297] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[133] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[298] /* pwLine3.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp32, data->localData[0]->timeValue, data->simulationInfo->realParameter[301] /* pwLine3.t1 PARAM */, 8, GreaterEq);
  RELATIONHYSTERESIS(tmp33, data->localData[0]->timeValue, data->simulationInfo->realParameter[302] /* pwLine3.t2 PARAM */, 9, Less);
  res[10] = ((tmp32 && tmp33)?data->localData[0]->realVars[129] /* pwLine3.ir.im variable */:data->localData[0]->realVars[133] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[123] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[300] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[129] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[134] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[297] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[133] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[298] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[299] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[130] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[133] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[297] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[134] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[298] /* pwLine3.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp34, data->localData[0]->timeValue, data->simulationInfo->realParameter[279] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp35, data->localData[0]->timeValue, data->simulationInfo->realParameter[280] /* pwLine.t2 PARAM */, 1, Less);
  res[11] = ((tmp34 && tmp35)?data->localData[0]->realVars[107] /* pwLine.ir.im variable */:data->localData[0]->realVars[123] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[111] /* pwLine.vs.im variable */ - ((data->simulationInfo->realParameter[278] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[107] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[124] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[275] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[123] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[276] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[277] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[108] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[123] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[275] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[124] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[276] /* pwLine.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp36, data->localData[0]->timeValue, data->simulationInfo->realParameter[279] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp37, data->localData[0]->timeValue, data->simulationInfo->realParameter[280] /* pwLine.t2 PARAM */, 1, Less);
  res[12] = ((tmp36 && tmp37)?data->localData[0]->realVars[110] /* pwLine.is.re variable */:data->localData[0]->realVars[112] /* pwLine.vs.re variable */ - data->localData[0]->realVars[124] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[278] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[110] /* pwLine.is.re variable */ + (data->localData[0]->realVars[111] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[275] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[112] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[276] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[277] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[109] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[112] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[275] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[111] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[276] /* pwLine.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp38, data->localData[0]->timeValue, data->simulationInfo->realParameter[279] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp39, data->localData[0]->timeValue, data->simulationInfo->realParameter[280] /* pwLine.t2 PARAM */, 1, Less);
  res[13] = ((tmp38 && tmp39)?data->localData[0]->realVars[109] /* pwLine.is.im variable */:data->localData[0]->realVars[111] /* pwLine.vs.im variable */ - data->localData[0]->realVars[123] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[278] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[109] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[112] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[275] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[111] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[276] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[277] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[110] /* pwLine.is.re variable */ + (data->localData[0]->realVars[111] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[275] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[112] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[276] /* pwLine.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp40, data->localData[0]->timeValue, data->simulationInfo->realParameter[290] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp41, data->localData[0]->timeValue, data->simulationInfo->realParameter[291] /* pwLine1.t2 PARAM */, 3, Less);
  res[14] = ((tmp40 && tmp41)?data->localData[0]->realVars[120] /* pwLine1.is.re variable */:data->localData[0]->realVars[124] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[122] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[289] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[120] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[123] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[286] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[124] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[287] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[288] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[119] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[124] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[286] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[123] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[287] /* pwLine1.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp42, data->localData[0]->timeValue, data->simulationInfo->realParameter[279] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp43, data->localData[0]->timeValue, data->simulationInfo->realParameter[280] /* pwLine.t2 PARAM */, 1, Less);
  res[15] = ((tmp42 && tmp43)?data->localData[0]->realVars[108] /* pwLine.ir.re variable */:data->localData[0]->realVars[124] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[112] /* pwLine.vs.re variable */ - ((data->simulationInfo->realParameter[278] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[108] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[123] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[275] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[124] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[276] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[277] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[107] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[124] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[275] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[123] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[276] /* pwLine.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp44, data->localData[0]->timeValue, data->simulationInfo->realParameter[290] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp45, data->localData[0]->timeValue, data->simulationInfo->realParameter[291] /* pwLine1.t2 PARAM */, 3, Less);
  res[16] = ((tmp44 && tmp45)?data->localData[0]->realVars[119] /* pwLine1.is.im variable */:data->localData[0]->realVars[123] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[121] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[289] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[119] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[124] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[286] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[123] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[287] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[288] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[120] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[123] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[286] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[124] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[287] /* pwLine1.Y.re PARAM */)))));

  res[17] = (data->localData[0]->realVars[26] /* $cse1 variable */) * (data->localData[0]->realVars[66] /* gENCLS.vq variable */) + ((-data->localData[0]->realVars[27] /* $cse2 variable */)) * (data->localData[0]->realVars[65] /* gENCLS.vd variable */) - data->localData[0]->realVars[121] /* pwLine1.vr.im variable */;

  RELATIONHYSTERESIS(tmp46, data->localData[0]->timeValue, data->simulationInfo->realParameter[312] /* pwLine4.t1 PARAM */, 10, GreaterEq);
  RELATIONHYSTERESIS(tmp47, data->localData[0]->timeValue, data->simulationInfo->realParameter[313] /* pwLine4.t2 PARAM */, 11, Less);
  res[18] = ((tmp46 && tmp47)?data->localData[0]->realVars[140] /* pwLine4.ir.re variable */:data->localData[0]->realVars[122] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[134] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[311] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[140] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[121] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[308] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[122] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[309] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[310] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[139] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[122] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[308] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[121] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[309] /* pwLine4.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp48, data->localData[0]->timeValue, data->simulationInfo->realParameter[312] /* pwLine4.t1 PARAM */, 10, GreaterEq);
  RELATIONHYSTERESIS(tmp49, data->localData[0]->timeValue, data->simulationInfo->realParameter[313] /* pwLine4.t2 PARAM */, 11, Less);
  res[19] = ((tmp48 && tmp49)?data->localData[0]->realVars[139] /* pwLine4.ir.im variable */:data->localData[0]->realVars[121] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[133] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[311] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[139] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[122] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[308] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[121] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[309] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[310] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[140] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[121] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[308] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[122] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[309] /* pwLine4.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp50, data->localData[0]->timeValue, data->simulationInfo->realParameter[290] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp51, data->localData[0]->timeValue, data->simulationInfo->realParameter[291] /* pwLine1.t2 PARAM */, 3, Less);
  res[20] = ((tmp50 && tmp51)?data->localData[0]->realVars[118] /* pwLine1.ir.re variable */:data->localData[0]->realVars[122] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[124] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[289] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[118] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[121] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[286] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[122] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[287] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[288] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[117] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[122] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[286] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[121] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[287] /* pwLine1.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp52, data->localData[0]->timeValue, data->simulationInfo->realParameter[290] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp53, data->localData[0]->timeValue, data->simulationInfo->realParameter[291] /* pwLine1.t2 PARAM */, 3, Less);
  res[21] = ((tmp52 && tmp53)?data->localData[0]->realVars[117] /* pwLine1.ir.im variable */:data->localData[0]->realVars[121] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[123] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[289] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[117] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[122] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[286] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[121] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[287] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[288] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[118] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[121] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[286] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[122] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[287] /* pwLine1.Y.re PARAM */)))));
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS271(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+22] = {0,3,3,3,3,4,4,4,4,4,4,4,4,4,4,7,7,4,4,11,11,8,8};
  const int rowIndex[112] = {8,9,10,5,6,8,7,9,10,5,6,7,11,14,15,16,3,4,14,16,11,14,15,16,3,4,14,16,1,2,14,16,1,2,14,16,18,19,20,21,18,19,20,21,0,17,18,19,0,17,18,19,0,5,14,18,19,20,21,6,16,17,18,19,20,21,11,12,13,15,11,12,13,15,1,2,3,4,9,11,12,14,15,16,20,1,2,3,4,10,11,13,14,15,16,21,3,5,6,7,8,9,10,19,4,5,6,7,8,9,10,18};
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
  inSysData->sparsePattern->colorCols[19] = 1;
  inSysData->sparsePattern->colorCols[18] = 2;
  inSysData->sparsePattern->colorCols[15] = 3;
  inSysData->sparsePattern->colorCols[14] = 4;
  inSysData->sparsePattern->colorCols[9] = 5;
  inSysData->sparsePattern->colorCols[21] = 5;
  inSysData->sparsePattern->colorCols[8] = 6;
  inSysData->sparsePattern->colorCols[20] = 6;
  inSysData->sparsePattern->colorCols[7] = 7;
  inSysData->sparsePattern->colorCols[13] = 7;
  inSysData->sparsePattern->colorCols[17] = 7;
  inSysData->sparsePattern->colorCols[6] = 8;
  inSysData->sparsePattern->colorCols[12] = 8;
  inSysData->sparsePattern->colorCols[1] = 9;
  inSysData->sparsePattern->colorCols[2] = 9;
  inSysData->sparsePattern->colorCols[5] = 9;
  inSysData->sparsePattern->colorCols[11] = 9;
  inSysData->sparsePattern->colorCols[16] = 9;
  inSysData->sparsePattern->colorCols[0] = 10;
  inSysData->sparsePattern->colorCols[3] = 10;
  inSysData->sparsePattern->colorCols[4] = 10;
  inSysData->sparsePattern->colorCols[10] = 10;
}
void initializeStaticDataNLS271(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for pwLine3.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[130].attribute /* pwLine3.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[130].attribute /* pwLine3.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[130].attribute /* pwLine3.ir.re */.max;
  /* static nls data for pwLine4.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[142].attribute /* pwLine4.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[142].attribute /* pwLine4.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[142].attribute /* pwLine4.is.re */.max;
  /* static nls data for pwLine3.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[129].attribute /* pwLine3.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[129].attribute /* pwLine3.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[129].attribute /* pwLine3.ir.im */.max;
  /* static nls data for pwLine4.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[141].attribute /* pwLine4.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[141].attribute /* pwLine4.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[141].attribute /* pwLine4.is.im */.max;
  /* static nls data for pwLine.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[107].attribute /* pwLine.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[107].attribute /* pwLine.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[107].attribute /* pwLine.ir.im */.max;
  /* static nls data for pwLine3.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[131].attribute /* pwLine3.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[131].attribute /* pwLine3.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[131].attribute /* pwLine3.is.im */.max;
  /* static nls data for pwLine.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[108].attribute /* pwLine.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[108].attribute /* pwLine.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[108].attribute /* pwLine.ir.re */.max;
  /* static nls data for pwLine3.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[132].attribute /* pwLine3.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[132].attribute /* pwLine3.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[132].attribute /* pwLine3.is.re */.max;
  /* static nls data for constantLoad.p.ir */
  sysData->nominal[i] = data->modelData->realVarsData[54].attribute /* constantLoad.p.ir */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[54].attribute /* constantLoad.p.ir */.min;
  sysData->max[i++]   = data->modelData->realVarsData[54].attribute /* constantLoad.p.ir */.max;
  /* static nls data for constantLoad.p.ii */
  sysData->nominal[i] = data->modelData->realVarsData[53].attribute /* constantLoad.p.ii */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[53].attribute /* constantLoad.p.ii */.min;
  sysData->max[i++]   = data->modelData->realVarsData[53].attribute /* constantLoad.p.ii */.max;
  /* static nls data for pwLine1.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[118].attribute /* pwLine1.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[118].attribute /* pwLine1.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[118].attribute /* pwLine1.ir.re */.max;
  /* static nls data for pwLine1.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[117].attribute /* pwLine1.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[117].attribute /* pwLine1.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[117].attribute /* pwLine1.ir.im */.max;
  /* static nls data for gENCLS.id */
  sysData->nominal[i] = data->modelData->realVarsData[60].attribute /* gENCLS.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[60].attribute /* gENCLS.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[60].attribute /* gENCLS.id */.max;
  /* static nls data for gENCLS.iq */
  sysData->nominal[i] = data->modelData->realVarsData[61].attribute /* gENCLS.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[61].attribute /* gENCLS.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[61].attribute /* gENCLS.iq */.max;
  /* static nls data for pwLine1.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[122].attribute /* pwLine1.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[122].attribute /* pwLine1.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[122].attribute /* pwLine1.vr.re */.max;
  /* static nls data for pwLine1.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[121].attribute /* pwLine1.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[121].attribute /* pwLine1.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[121].attribute /* pwLine1.vr.im */.max;
  /* static nls data for gENROE.id */
  sysData->nominal[i] = data->modelData->realVarsData[81].attribute /* gENROE.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[81].attribute /* gENROE.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[81].attribute /* gENROE.id */.max;
  /* static nls data for gENROE.iq */
  sysData->nominal[i] = data->modelData->realVarsData[82].attribute /* gENROE.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[82].attribute /* gENROE.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[82].attribute /* gENROE.iq */.max;
  /* static nls data for pwLine1.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[124].attribute /* pwLine1.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[124].attribute /* pwLine1.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[124].attribute /* pwLine1.vs.re */.max;
  /* static nls data for pwLine1.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[123].attribute /* pwLine1.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[123].attribute /* pwLine1.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[123].attribute /* pwLine1.vs.im */.max;
  /* static nls data for pwLine3.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[133].attribute /* pwLine3.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[133].attribute /* pwLine3.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[133].attribute /* pwLine3.vr.im */.max;
  /* static nls data for pwLine3.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[134].attribute /* pwLine3.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[134].attribute /* pwLine3.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[134].attribute /* pwLine3.vr.re */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS271(sysData);
}

void getIterationVarsNLS271(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[130] /* pwLine3.ir.re variable */;
  array[1] = data->localData[0]->realVars[142] /* pwLine4.is.re variable */;
  array[2] = data->localData[0]->realVars[129] /* pwLine3.ir.im variable */;
  array[3] = data->localData[0]->realVars[141] /* pwLine4.is.im variable */;
  array[4] = data->localData[0]->realVars[107] /* pwLine.ir.im variable */;
  array[5] = data->localData[0]->realVars[131] /* pwLine3.is.im variable */;
  array[6] = data->localData[0]->realVars[108] /* pwLine.ir.re variable */;
  array[7] = data->localData[0]->realVars[132] /* pwLine3.is.re variable */;
  array[8] = data->localData[0]->realVars[54] /* constantLoad.p.ir variable */;
  array[9] = data->localData[0]->realVars[53] /* constantLoad.p.ii variable */;
  array[10] = data->localData[0]->realVars[118] /* pwLine1.ir.re variable */;
  array[11] = data->localData[0]->realVars[117] /* pwLine1.ir.im variable */;
  array[12] = data->localData[0]->realVars[60] /* gENCLS.id variable */;
  array[13] = data->localData[0]->realVars[61] /* gENCLS.iq variable */;
  array[14] = data->localData[0]->realVars[122] /* pwLine1.vr.re variable */;
  array[15] = data->localData[0]->realVars[121] /* pwLine1.vr.im variable */;
  array[16] = data->localData[0]->realVars[81] /* gENROE.id variable */;
  array[17] = data->localData[0]->realVars[82] /* gENROE.iq variable */;
  array[18] = data->localData[0]->realVars[124] /* pwLine1.vs.re variable */;
  array[19] = data->localData[0]->realVars[123] /* pwLine1.vs.im variable */;
  array[20] = data->localData[0]->realVars[133] /* pwLine3.vr.im variable */;
  array[21] = data->localData[0]->realVars[134] /* pwLine3.vr.re variable */;
}


/* inner equations */

/*
equation index: 41
type: SIMPLE_ASSIGN
constantLoad.v = sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_41(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,41};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[124] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[123] /* pwLine1.vs.im variable */;
  data->localData[0]->realVars[55] /* constantLoad.v variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 42
type: SIMPLE_ASSIGN
constantLoad.kP = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a0 + constantLoad.a1 * cos(constantLoad.v * constantLoad.wp) + constantLoad.b1 * sin(constantLoad.v * constantLoad.wp) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_42(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,42};
  modelica_boolean tmp0;
  tmp0 = Less(data->localData[0]->realVars[55] /* constantLoad.v variable */,data->simulationInfo->realParameter[37] /* constantLoad.PQBRAK PARAM */);
  data->localData[0]->realVars[52] /* constantLoad.kP variable */ = (tmp0?data->simulationInfo->realParameter[56] /* constantLoad.a0 PARAM */ + (data->simulationInfo->realParameter[57] /* constantLoad.a1 PARAM */) * (cos((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[77] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[63] /* constantLoad.b1 PARAM */) * (sin((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[77] /* constantLoad.wp PARAM */))):1.0);
  TRACE_POP
}
/*
equation index: 43
type: SIMPLE_ASSIGN
constantLoad.kI = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (-1.0 + constantLoad.b2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_43(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,43};
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
    }tmp8 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
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
  data->localData[0]->realVars[51] /* constantLoad.kI variable */ = tmp16;
  TRACE_POP
}
/*
equation index: 44
type: SIMPLE_ASSIGN
constantLoad.Q = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_44(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,44};
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
    tmp2 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[40] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[44] /* constantLoad.S_Y.im PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[42] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[66] /* constantLoad.d_Q PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[40] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[44] /* constantLoad.S_Y.im PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[42] /* constantLoad.S_P.im PARAM */);
  }
  data->localData[0]->realVars[49] /* constantLoad.Q variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 45
type: SIMPLE_ASSIGN
constantLoad.P = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_45(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,45};
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
    tmp2 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[41] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[45] /* constantLoad.S_Y.re PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[43] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_P PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[41] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[45] /* constantLoad.S_Y.re PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[43] /* constantLoad.S_P.re PARAM */);
  }
  data->localData[0]->realVars[48] /* constantLoad.P variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 46
type: SIMPLE_ASSIGN
pwLine.is.re = (cos(gENROE.delta) * gENROE.iq - (-sin(gENROE.delta)) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_46(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,46};
  data->localData[0]->realVars[110] /* pwLine.is.re variable */ = ((cos(data->localData[0]->realVars[6] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[82] /* gENROE.iq variable */) - (((-sin(data->localData[0]->realVars[6] /* gENROE.delta STATE(1) */))) * (data->localData[0]->realVars[81] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[104] /* gENROE.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 47
type: SIMPLE_ASSIGN
pwLine.is.im = (sin(gENROE.delta) * gENROE.iq - cos(gENROE.delta) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_47(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,47};
  data->localData[0]->realVars[109] /* pwLine.is.im variable */ = ((sin(data->localData[0]->realVars[6] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[82] /* gENROE.iq variable */) - ((cos(data->localData[0]->realVars[6] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[81] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[104] /* gENROE.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 48
type: SIMPLE_ASSIGN
gENROE.PSIq = (-gENROE.PSIppq) - gENROE.Xppq * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_48(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,48};
  data->localData[0]->realVars[74] /* gENROE.PSIq variable */ = (-data->localData[0]->realVars[73] /* gENROE.PSIppq variable */) - ((data->simulationInfo->realParameter[159] /* gENROE.Xppq PARAM */) * (data->localData[0]->realVars[82] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 49
type: SIMPLE_ASSIGN
gENROE.ud = (-gENROE.PSIq) - gENROE.R_a * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_49(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,49};
  data->localData[0]->realVars[83] /* gENROE.ud variable */ = (-data->localData[0]->realVars[74] /* gENROE.PSIq variable */) - ((data->simulationInfo->realParameter[141] /* gENROE.R_a PARAM */) * (data->localData[0]->realVars[81] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 50
type: SIMPLE_ASSIGN
pwLine.vs.re = sin(gENROE.delta) * gENROE.ud + cos(gENROE.delta) * gENROE.uq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_50(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,50};
  data->localData[0]->realVars[112] /* pwLine.vs.re variable */ = (sin(data->localData[0]->realVars[6] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[83] /* gENROE.ud variable */) + (cos(data->localData[0]->realVars[6] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[84] /* gENROE.uq variable */);
  TRACE_POP
}
/*
equation index: 51
type: SIMPLE_ASSIGN
pwLine.vs.im = sin(gENROE.delta) * gENROE.uq - cos(gENROE.delta) * gENROE.ud
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_51(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,51};
  data->localData[0]->realVars[111] /* pwLine.vs.im variable */ = (sin(data->localData[0]->realVars[6] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[84] /* gENROE.uq variable */) - ((cos(data->localData[0]->realVars[6] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[83] /* gENROE.ud variable */));
  TRACE_POP
}
/*
equation index: 52
type: SIMPLE_ASSIGN
gENROE.PSId = gENROE.uq + gENROE.R_a * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_52(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,52};
  data->localData[0]->realVars[70] /* gENROE.PSId variable */ = data->localData[0]->realVars[84] /* gENROE.uq variable */ + (data->simulationInfo->realParameter[141] /* gENROE.R_a PARAM */) * (data->localData[0]->realVars[82] /* gENROE.iq variable */);
  TRACE_POP
}
/*
equation index: 53
type: SIMPLE_ASSIGN
gENROE.PSIppd = gENROE.PSId + gENROE.Xppd * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_53(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,53};
  data->localData[0]->realVars[72] /* gENROE.PSIppd variable */ = data->localData[0]->realVars[70] /* gENROE.PSId variable */ + (data->simulationInfo->realParameter[158] /* gENROE.Xppd PARAM */) * (data->localData[0]->realVars[81] /* gENROE.id variable */);
  TRACE_POP
}
/*
equation index: 54
type: SIMPLE_ASSIGN
gENROE.PSIpp = sqrt(gENROE.PSIppd ^ 2.0 + gENROE.PSIppq ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_54(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,54};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[72] /* gENROE.PSIppd variable */;
  tmp1 = data->localData[0]->realVars[73] /* gENROE.PSIppq variable */;
  data->localData[0]->realVars[71] /* gENROE.PSIpp variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 55
type: SIMPLE_ASSIGN
gENROE.PSIkd = ((gENROE.Epq + (gENROE.Xl - gENROE.Xpd) * gENROE.id) * gENROE.K1d + gENROE.Epq + gENROE.id * (gENROE.Xd - gENROE.Xpd) + OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2) * gENROE.PSIppd - gENROE.XADIFD) / gENROE.K1d
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_55(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,55};
  data->localData[0]->realVars[4] /* gENROE.PSIkd STATE(1) */ = DIVISION_SIM((data->localData[0]->realVars[3] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[155] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[156] /* gENROE.Xpd PARAM */) * (data->localData[0]->realVars[81] /* gENROE.id variable */)) * (data->simulationInfo->realParameter[118] /* gENROE.K1d PARAM */) + data->localData[0]->realVars[3] /* gENROE.Epq STATE(1) */ + (data->localData[0]->realVars[81] /* gENROE.id variable */) * (data->simulationInfo->realParameter[154] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[156] /* gENROE.Xpd PARAM */) + (omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[71] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[144] /* gENROE.S10 PARAM */, data->simulationInfo->realParameter[145] /* gENROE.S12 PARAM */, 1.0, 1.2)) * (data->localData[0]->realVars[72] /* gENROE.PSIppd variable */) - data->localData[0]->realVars[77] /* gENROE.XADIFD variable */,data->simulationInfo->realParameter[118] /* gENROE.K1d PARAM */,"gENROE.K1d",equationIndexes);
  TRACE_POP
}
/*
equation index: 56
type: SIMPLE_ASSIGN
gENROE.PSIkq = ((gENROE.Epd + (gENROE.Xpq - gENROE.Xl) * gENROE.iq) * gENROE.K1q + gENROE.Epd + gENROE.iq * (gENROE.Xpq - gENROE.Xq) + OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2) * gENROE.PSIppq * (gENROE.Xq - gENROE.Xl) / (gENROE.Xd - gENROE.Xl) - gENROE.XaqIlq) / gENROE.K1q
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_56(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,56};
  data->localData[0]->realVars[5] /* gENROE.PSIkq STATE(1) */ = DIVISION_SIM((data->localData[0]->realVars[2] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[160] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[155] /* gENROE.Xl PARAM */) * (data->localData[0]->realVars[82] /* gENROE.iq variable */)) * (data->simulationInfo->realParameter[119] /* gENROE.K1q PARAM */) + data->localData[0]->realVars[2] /* gENROE.Epd STATE(1) */ + (data->localData[0]->realVars[82] /* gENROE.iq variable */) * (data->simulationInfo->realParameter[160] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[161] /* gENROE.Xq PARAM */) + (omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[71] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[144] /* gENROE.S10 PARAM */, data->simulationInfo->realParameter[145] /* gENROE.S12 PARAM */, 1.0, 1.2)) * ((data->localData[0]->realVars[73] /* gENROE.PSIppq variable */) * (DIVISION_SIM(data->simulationInfo->realParameter[161] /* gENROE.Xq PARAM */ - data->simulationInfo->realParameter[155] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[154] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[155] /* gENROE.Xl PARAM */,"gENROE.Xd - gENROE.Xl",equationIndexes))) - data->localData[0]->realVars[78] /* gENROE.XaqIlq variable */,data->simulationInfo->realParameter[119] /* gENROE.K1q PARAM */,"gENROE.K1q",equationIndexes);
  TRACE_POP
}
/*
equation index: 57
type: SIMPLE_ASSIGN
gENCLS.p.ir = ((-sin(gENCLS.delta)) * gENCLS.id - cos(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_57(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,57};
  data->localData[0]->realVars[64] /* gENCLS.p.ir variable */ = (((-sin(data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[60] /* gENCLS.id variable */) - ((cos(data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[61] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[78] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 58
type: SIMPLE_ASSIGN
gENCLS.p.ii = (cos(gENCLS.delta) * gENCLS.id - sin(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_58(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,58};
  data->localData[0]->realVars[63] /* gENCLS.p.ii variable */ = ((cos(data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[60] /* gENCLS.id variable */) - ((sin(data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[61] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[78] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 59
type: SIMPLE_ASSIGN
gENCLS.vq = gENCLS.eq + (-gENCLS.R_a) * gENCLS.iq - gENCLS.X_d * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_59(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,59};
  data->localData[0]->realVars[66] /* gENCLS.vq variable */ = data->localData[0]->realVars[1] /* gENCLS.eq STATE(1) */ + ((-data->simulationInfo->realParameter[84] /* gENCLS.R_a PARAM */)) * (data->localData[0]->realVars[61] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[87] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[60] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 60
type: SIMPLE_ASSIGN
gENCLS.vd = gENCLS.X_d * gENCLS.iq - gENCLS.R_a * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_60(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,60};
  data->localData[0]->realVars[65] /* gENCLS.vd variable */ = (data->simulationInfo->realParameter[87] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[61] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[84] /* gENCLS.R_a PARAM */) * (data->localData[0]->realVars[60] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 61
type: SIMPLE_ASSIGN
pwLine4.ir.im = (-pwLine1.ir.im) - gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_61(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,61};
  data->localData[0]->realVars[139] /* pwLine4.ir.im variable */ = (-data->localData[0]->realVars[117] /* pwLine1.ir.im variable */) - data->localData[0]->realVars[63] /* gENCLS.p.ii variable */;
  TRACE_POP
}
/*
equation index: 62
type: SIMPLE_ASSIGN
pwLine1.ir.re = (-pwLine4.ir.re) - gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_62(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,62};
  data->localData[0]->realVars[118] /* pwLine1.ir.re variable */ = (-data->localData[0]->realVars[140] /* pwLine4.ir.re variable */) - data->localData[0]->realVars[64] /* gENCLS.p.ir variable */;
  TRACE_POP
}
/*
equation index: 63
type: SIMPLE_ASSIGN
pwLine3.is.im = (-pwLine.ir.im) - pwLine1.is.im - constantLoad.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_63(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,63};
  data->localData[0]->realVars[131] /* pwLine3.is.im variable */ = (-data->localData[0]->realVars[107] /* pwLine.ir.im variable */) - data->localData[0]->realVars[119] /* pwLine1.is.im variable */ - data->localData[0]->realVars[53] /* constantLoad.p.ii variable */;
  TRACE_POP
}
/*
equation index: 64
type: SIMPLE_ASSIGN
pwLine.ir.re = (-pwLine1.is.re) - pwLine3.is.re - constantLoad.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_64(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,64};
  data->localData[0]->realVars[108] /* pwLine.ir.re variable */ = (-data->localData[0]->realVars[120] /* pwLine1.is.re variable */) - data->localData[0]->realVars[132] /* pwLine3.is.re variable */ - data->localData[0]->realVars[54] /* constantLoad.p.ir variable */;
  TRACE_POP
}
/*
equation index: 65
type: SIMPLE_ASSIGN
pwFault.p.ii = (-pwLine3.ir.im) - pwLine4.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_65(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,65};
  data->localData[0]->realVars[101] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[129] /* pwLine3.ir.im variable */) - data->localData[0]->realVars[141] /* pwLine4.is.im variable */;
  TRACE_POP
}
/*
equation index: 66
type: SIMPLE_ASSIGN
pwFault.p.ir = (-pwLine3.ir.re) - pwLine4.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_66(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,66};
  data->localData[0]->realVars[102] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[130] /* pwLine3.ir.re variable */) - data->localData[0]->realVars[142] /* pwLine4.is.re variable */;
  TRACE_POP
}

void residualFunc93(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,93};
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
  for (i=0; i<26; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<26; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[130] /* pwLine3.ir.re variable */ = xloc[0];
  data->localData[0]->realVars[142] /* pwLine4.is.re variable */ = xloc[1];
  data->localData[0]->realVars[141] /* pwLine4.is.im variable */ = xloc[2];
  data->localData[0]->realVars[129] /* pwLine3.ir.im variable */ = xloc[3];
  data->localData[0]->realVars[120] /* pwLine1.is.re variable */ = xloc[4];
  data->localData[0]->realVars[132] /* pwLine3.is.re variable */ = xloc[5];
  data->localData[0]->realVars[107] /* pwLine.ir.im variable */ = xloc[6];
  data->localData[0]->realVars[119] /* pwLine1.is.im variable */ = xloc[7];
  data->localData[0]->realVars[53] /* constantLoad.p.ii variable */ = xloc[8];
  data->localData[0]->realVars[54] /* constantLoad.p.ir variable */ = xloc[9];
  data->localData[0]->realVars[140] /* pwLine4.ir.re variable */ = xloc[10];
  data->localData[0]->realVars[117] /* pwLine1.ir.im variable */ = xloc[11];
  data->localData[0]->realVars[60] /* gENCLS.id variable */ = xloc[12];
  data->localData[0]->realVars[61] /* gENCLS.iq variable */ = xloc[13];
  data->localData[0]->realVars[2] /* gENROE.Epd STATE(1) */ = xloc[14];
  data->localData[0]->realVars[3] /* gENROE.Epq STATE(1) */ = xloc[15];
  data->localData[0]->realVars[84] /* gENROE.uq variable */ = xloc[16];
  data->localData[0]->realVars[73] /* gENROE.PSIppq variable */ = xloc[17];
  data->localData[0]->realVars[81] /* gENROE.id variable */ = xloc[18];
  data->localData[0]->realVars[82] /* gENROE.iq variable */ = xloc[19];
  data->localData[0]->realVars[121] /* pwLine1.vr.im variable */ = xloc[20];
  data->localData[0]->realVars[122] /* pwLine1.vr.re variable */ = xloc[21];
  data->localData[0]->realVars[123] /* pwLine1.vs.im variable */ = xloc[22];
  data->localData[0]->realVars[124] /* pwLine1.vs.re variable */ = xloc[23];
  data->localData[0]->realVars[133] /* pwLine3.vr.im variable */ = xloc[24];
  data->localData[0]->realVars[134] /* pwLine3.vr.re variable */ = xloc[25];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_41(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_42(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_43(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_44(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_45(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_46(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_47(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_48(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_49(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_50(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_51(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_52(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_53(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_54(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_55(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_56(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_57(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_58(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_59(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_60(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_61(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_62(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_63(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_64(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_65(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_66(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[123] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) + ((-data->localData[0]->realVars[124] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[49] /* constantLoad.Q variable */;

  res[1] = (data->localData[0]->realVars[123] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[124] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[48] /* constantLoad.P variable */;

  res[2] = (sin(data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[66] /* gENCLS.vq variable */) + ((-cos(data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[65] /* gENCLS.vd variable */) - data->localData[0]->realVars[121] /* pwLine1.vr.im variable */;

  res[3] = (cos(data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[66] /* gENCLS.vq variable */) + (sin(data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[65] /* gENCLS.vd variable */) - data->localData[0]->realVars[122] /* pwLine1.vr.re variable */;

  tmp0 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[268] /* pwFault.t1 PARAM */);
  tmp9 = (modelica_boolean)tmp0;
  if(tmp9)
  {
    tmp10 = data->localData[0]->realVars[101] /* pwFault.p.ii variable */;
  }
  else
  {
    tmp1 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[269] /* pwFault.t2 PARAM */);
    tmp7 = (modelica_boolean)(tmp1 && data->simulationInfo->booleanParameter[66] /* pwFault.ground PARAM */);
    if(tmp7)
    {
      tmp8 = data->localData[0]->realVars[134] /* pwLine3.vr.re variable */ - 1e-10;
    }
    else
    {
      tmp2 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[269] /* pwFault.t2 PARAM */);
      tmp5 = (modelica_boolean)tmp2;
      if(tmp5)
      {
        tmp3 = data->simulationInfo->realParameter[267] /* pwFault.X PARAM */;
        tmp4 = data->simulationInfo->realParameter[266] /* pwFault.R PARAM */;
        tmp6 = data->localData[0]->realVars[101] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[266] /* pwFault.R PARAM */) * (data->localData[0]->realVars[133] /* pwLine3.vr.im variable */) - ((data->simulationInfo->realParameter[267] /* pwFault.X PARAM */) * (data->localData[0]->realVars[134] /* pwLine3.vr.re variable */)),(tmp3 * tmp3) + (tmp4 * tmp4),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
      }
      else
      {
        tmp6 = data->localData[0]->realVars[101] /* pwFault.p.ii variable */;
      }
      tmp8 = tmp6;
    }
    tmp10 = tmp8;
  }
  res[4] = tmp10;

  tmp11 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[268] /* pwFault.t1 PARAM */);
  tmp20 = (modelica_boolean)tmp11;
  if(tmp20)
  {
    tmp21 = data->localData[0]->realVars[102] /* pwFault.p.ir variable */;
  }
  else
  {
    tmp12 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[269] /* pwFault.t2 PARAM */);
    tmp18 = (modelica_boolean)(tmp12 && data->simulationInfo->booleanParameter[66] /* pwFault.ground PARAM */);
    if(tmp18)
    {
      tmp19 = data->localData[0]->realVars[133] /* pwLine3.vr.im variable */;
    }
    else
    {
      tmp13 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[269] /* pwFault.t2 PARAM */);
      tmp16 = (modelica_boolean)tmp13;
      if(tmp16)
      {
        tmp14 = data->simulationInfo->realParameter[266] /* pwFault.R PARAM */;
        tmp15 = data->simulationInfo->realParameter[267] /* pwFault.X PARAM */;
        tmp17 = data->localData[0]->realVars[102] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[266] /* pwFault.R PARAM */) * (data->localData[0]->realVars[134] /* pwLine3.vr.re variable */) + (data->simulationInfo->realParameter[267] /* pwFault.X PARAM */) * (data->localData[0]->realVars[133] /* pwLine3.vr.im variable */),(tmp14 * tmp14) + (tmp15 * tmp15),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp17 = data->localData[0]->realVars[102] /* pwFault.p.ir variable */;
      }
      tmp19 = tmp17;
    }
    tmp21 = tmp19;
  }
  res[5] = tmp21;

  tmp22 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[301] /* pwLine3.t1 PARAM */);
  tmp23 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[302] /* pwLine3.t2 PARAM */);
  res[6] = ((tmp22 && tmp23)?data->localData[0]->realVars[131] /* pwLine3.is.im variable */:data->localData[0]->realVars[123] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[133] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[300] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[131] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[124] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[297] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[123] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[298] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[299] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[132] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[123] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[297] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[124] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[298] /* pwLine3.Y.re PARAM */)))));

  tmp24 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[301] /* pwLine3.t1 PARAM */);
  tmp25 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[302] /* pwLine3.t2 PARAM */);
  res[7] = ((tmp24 && tmp25)?data->localData[0]->realVars[132] /* pwLine3.is.re variable */:data->localData[0]->realVars[124] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[134] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[300] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[132] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[123] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[297] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[124] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[298] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[299] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[131] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[124] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[297] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[123] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[298] /* pwLine3.Y.re PARAM */))))));

  tmp26 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[312] /* pwLine4.t1 PARAM */);
  tmp27 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[313] /* pwLine4.t2 PARAM */);
  res[8] = ((tmp26 && tmp27)?data->localData[0]->realVars[141] /* pwLine4.is.im variable */:data->localData[0]->realVars[133] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[121] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[311] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[141] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[134] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[308] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[133] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[309] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[310] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[142] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[133] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[308] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[134] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[309] /* pwLine4.Y.re PARAM */)))));

  tmp28 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[301] /* pwLine3.t1 PARAM */);
  tmp29 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[302] /* pwLine3.t2 PARAM */);
  res[9] = ((tmp28 && tmp29)?data->localData[0]->realVars[130] /* pwLine3.ir.re variable */:data->localData[0]->realVars[134] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[124] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[300] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[130] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[133] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[297] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[134] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[298] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[299] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[129] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[134] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[297] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[133] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[298] /* pwLine3.Y.re PARAM */))))));

  tmp30 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[301] /* pwLine3.t1 PARAM */);
  tmp31 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[302] /* pwLine3.t2 PARAM */);
  res[10] = ((tmp30 && tmp31)?data->localData[0]->realVars[129] /* pwLine3.ir.im variable */:data->localData[0]->realVars[133] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[123] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[300] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[129] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[134] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[297] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[133] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[298] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[299] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[130] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[133] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[297] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[134] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[298] /* pwLine3.Y.re PARAM */)))));

  tmp32 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[312] /* pwLine4.t1 PARAM */);
  tmp33 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[313] /* pwLine4.t2 PARAM */);
  res[11] = ((tmp32 && tmp33)?data->localData[0]->realVars[142] /* pwLine4.is.re variable */:data->localData[0]->realVars[134] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[122] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[311] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[142] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[133] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[308] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[134] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[309] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[310] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[141] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[134] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[308] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[133] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[309] /* pwLine4.Y.re PARAM */))))));

  tmp34 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[290] /* pwLine1.t1 PARAM */);
  tmp35 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[291] /* pwLine1.t2 PARAM */);
  res[12] = ((tmp34 && tmp35)?data->localData[0]->realVars[120] /* pwLine1.is.re variable */:data->localData[0]->realVars[124] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[122] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[289] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[120] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[123] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[286] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[124] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[287] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[288] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[119] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[124] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[286] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[123] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[287] /* pwLine1.Y.re PARAM */))))));

  tmp36 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[312] /* pwLine4.t1 PARAM */);
  tmp37 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[313] /* pwLine4.t2 PARAM */);
  res[13] = ((tmp36 && tmp37)?data->localData[0]->realVars[140] /* pwLine4.ir.re variable */:data->localData[0]->realVars[122] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[134] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[311] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[140] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[121] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[308] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[122] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[309] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[310] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[139] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[122] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[308] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[121] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[309] /* pwLine4.Y.re PARAM */))))));

  tmp38 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[312] /* pwLine4.t1 PARAM */);
  tmp39 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[313] /* pwLine4.t2 PARAM */);
  res[14] = ((tmp38 && tmp39)?data->localData[0]->realVars[139] /* pwLine4.ir.im variable */:data->localData[0]->realVars[121] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[133] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[311] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[139] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[122] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[308] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[121] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[309] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[310] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[140] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[121] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[308] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[122] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[309] /* pwLine4.Y.re PARAM */)))));

  tmp40 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[290] /* pwLine1.t1 PARAM */);
  tmp41 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[291] /* pwLine1.t2 PARAM */);
  res[15] = ((tmp40 && tmp41)?data->localData[0]->realVars[119] /* pwLine1.is.im variable */:data->localData[0]->realVars[123] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[121] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[289] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[119] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[124] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[286] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[123] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[287] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[288] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[120] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[123] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[286] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[124] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[287] /* pwLine1.Y.re PARAM */)))));

  res[16] = data->localData[0]->realVars[73] /* gENROE.PSIppq variable */ - ((data->localData[0]->realVars[2] /* gENROE.Epd STATE(1) */) * (data->simulationInfo->realParameter[123] /* gENROE.K3q PARAM */)) - ((data->localData[0]->realVars[5] /* gENROE.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[125] /* gENROE.K4q PARAM */));

  res[17] = data->localData[0]->realVars[2] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[160] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[155] /* gENROE.Xl PARAM */) * (data->localData[0]->realVars[82] /* gENROE.iq variable */) + (-data->localData[0]->realVars[5] /* gENROE.PSIkq STATE(1) */) - ((data->localData[0]->realVars[18] /* der(gENROE.PSIkq) STATE_DER */) * (data->simulationInfo->realParameter[149] /* gENROE.Tppq0 PARAM */));

  tmp42 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[279] /* pwLine.t1 PARAM */);
  tmp43 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[280] /* pwLine.t2 PARAM */);
  res[18] = ((tmp42 && tmp43)?data->localData[0]->realVars[110] /* pwLine.is.re variable */:data->localData[0]->realVars[112] /* pwLine.vs.re variable */ - data->localData[0]->realVars[124] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[278] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[110] /* pwLine.is.re variable */ + (data->localData[0]->realVars[111] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[275] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[112] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[276] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[277] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[109] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[112] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[275] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[111] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[276] /* pwLine.Y.re PARAM */))))));

  tmp44 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[290] /* pwLine1.t1 PARAM */);
  tmp45 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[291] /* pwLine1.t2 PARAM */);
  res[19] = ((tmp44 && tmp45)?data->localData[0]->realVars[118] /* pwLine1.ir.re variable */:data->localData[0]->realVars[122] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[124] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[289] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[118] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[121] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[286] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[122] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[287] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[288] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[117] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[122] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[286] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[121] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[287] /* pwLine1.Y.re PARAM */))))));

  tmp46 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[290] /* pwLine1.t1 PARAM */);
  tmp47 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[291] /* pwLine1.t2 PARAM */);
  res[20] = ((tmp46 && tmp47)?data->localData[0]->realVars[117] /* pwLine1.ir.im variable */:data->localData[0]->realVars[121] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[123] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[289] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[117] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[122] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[286] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[121] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[287] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[288] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[118] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[121] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[286] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[122] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[287] /* pwLine1.Y.re PARAM */)))));

  tmp48 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[279] /* pwLine.t1 PARAM */);
  tmp49 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[280] /* pwLine.t2 PARAM */);
  res[21] = ((tmp48 && tmp49)?data->localData[0]->realVars[109] /* pwLine.is.im variable */:data->localData[0]->realVars[111] /* pwLine.vs.im variable */ - data->localData[0]->realVars[123] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[278] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[109] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[112] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[275] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[111] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[276] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[277] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[110] /* pwLine.is.re variable */ + (data->localData[0]->realVars[111] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[275] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[112] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[276] /* pwLine.Y.re PARAM */)))));

  tmp50 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[279] /* pwLine.t1 PARAM */);
  tmp51 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[280] /* pwLine.t2 PARAM */);
  res[22] = ((tmp50 && tmp51)?data->localData[0]->realVars[108] /* pwLine.ir.re variable */:data->localData[0]->realVars[124] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[112] /* pwLine.vs.re variable */ - ((data->simulationInfo->realParameter[278] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[108] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[123] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[275] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[124] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[276] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[277] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[107] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[124] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[275] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[123] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[276] /* pwLine.Y.re PARAM */))))));

  tmp52 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[279] /* pwLine.t1 PARAM */);
  tmp53 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[280] /* pwLine.t2 PARAM */);
  res[23] = ((tmp52 && tmp53)?data->localData[0]->realVars[107] /* pwLine.ir.im variable */:data->localData[0]->realVars[123] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[111] /* pwLine.vs.im variable */ - ((data->simulationInfo->realParameter[278] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[107] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[124] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[275] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[123] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[276] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[277] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[108] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[123] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[275] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[124] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[276] /* pwLine.Y.re PARAM */)))));

  res[24] = (data->localData[0]->realVars[4] /* gENROE.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[124] /* gENROE.K4d PARAM */) + (data->localData[0]->realVars[3] /* gENROE.Epq STATE(1) */) * (data->simulationInfo->realParameter[122] /* gENROE.K3d PARAM */) - data->localData[0]->realVars[72] /* gENROE.PSIppd variable */;

  res[25] = data->localData[0]->realVars[3] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[155] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[156] /* gENROE.Xpd PARAM */) * (data->localData[0]->realVars[81] /* gENROE.id variable */) + (-data->localData[0]->realVars[4] /* gENROE.PSIkd STATE(1) */) - ((data->localData[0]->realVars[17] /* der(gENROE.PSIkd) STATE_DER */) * (data->simulationInfo->realParameter[148] /* gENROE.Tppd0 PARAM */));
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS93(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+26] = {0,3,3,3,3,4,4,4,4,4,4,4,4,6,6,2,2,8,8,8,8,7,7,11,11,8,8};
  const int rowIndex[144] = {5,9,10,5,8,11,4,8,11,4,9,10,12,15,22,23,6,7,22,23,6,7,22,23,6,7,12,15,0,1,6,7,0,1,22,23,13,14,19,20,13,14,19,20,2,3,13,14,19,20,2,3,13,14,19,20,16,17,24,25,16,17,18,21,22,23,24,25,16,17,18,21,22,23,24,25,16,17,18,21,22,23,24,25,16,17,18,21,22,23,24,25,2,8,13,14,15,19,20,3,11,12,13,14,19,20,0,1,6,7,10,12,15,20,21,22,23,0,1,6,7,9,12,15,18,19,22,23,4,5,6,8,9,10,11,14,4,5,7,8,9,10,11,13};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((26+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(144*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 144;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(26*sizeof(int));
  inSysData->sparsePattern->maxColors = 10;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (26+1)*sizeof(int));
  
  for(i=2;i<26+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 144*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[23] = 1;
  inSysData->sparsePattern->colorCols[22] = 2;
  inSysData->sparsePattern->colorCols[19] = 3;
  inSysData->sparsePattern->colorCols[25] = 3;
  inSysData->sparsePattern->colorCols[18] = 4;
  inSysData->sparsePattern->colorCols[24] = 4;
  inSysData->sparsePattern->colorCols[17] = 5;
  inSysData->sparsePattern->colorCols[21] = 5;
  inSysData->sparsePattern->colorCols[16] = 6;
  inSysData->sparsePattern->colorCols[20] = 6;
  inSysData->sparsePattern->colorCols[7] = 7;
  inSysData->sparsePattern->colorCols[9] = 7;
  inSysData->sparsePattern->colorCols[13] = 7;
  inSysData->sparsePattern->colorCols[6] = 8;
  inSysData->sparsePattern->colorCols[12] = 8;
  inSysData->sparsePattern->colorCols[1] = 9;
  inSysData->sparsePattern->colorCols[3] = 9;
  inSysData->sparsePattern->colorCols[5] = 9;
  inSysData->sparsePattern->colorCols[11] = 9;
  inSysData->sparsePattern->colorCols[0] = 10;
  inSysData->sparsePattern->colorCols[2] = 10;
  inSysData->sparsePattern->colorCols[4] = 10;
  inSysData->sparsePattern->colorCols[8] = 10;
  inSysData->sparsePattern->colorCols[10] = 10;
  inSysData->sparsePattern->colorCols[14] = 10;
  inSysData->sparsePattern->colorCols[15] = 10;
}
void initializeStaticDataNLS93(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for pwLine3.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[130].attribute /* pwLine3.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[130].attribute /* pwLine3.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[130].attribute /* pwLine3.ir.re */.max;
  /* static nls data for pwLine4.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[142].attribute /* pwLine4.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[142].attribute /* pwLine4.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[142].attribute /* pwLine4.is.re */.max;
  /* static nls data for pwLine4.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[141].attribute /* pwLine4.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[141].attribute /* pwLine4.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[141].attribute /* pwLine4.is.im */.max;
  /* static nls data for pwLine3.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[129].attribute /* pwLine3.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[129].attribute /* pwLine3.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[129].attribute /* pwLine3.ir.im */.max;
  /* static nls data for pwLine1.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[120].attribute /* pwLine1.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[120].attribute /* pwLine1.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[120].attribute /* pwLine1.is.re */.max;
  /* static nls data for pwLine3.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[132].attribute /* pwLine3.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[132].attribute /* pwLine3.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[132].attribute /* pwLine3.is.re */.max;
  /* static nls data for pwLine.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[107].attribute /* pwLine.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[107].attribute /* pwLine.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[107].attribute /* pwLine.ir.im */.max;
  /* static nls data for pwLine1.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[119].attribute /* pwLine1.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[119].attribute /* pwLine1.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[119].attribute /* pwLine1.is.im */.max;
  /* static nls data for constantLoad.p.ii */
  sysData->nominal[i] = data->modelData->realVarsData[53].attribute /* constantLoad.p.ii */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[53].attribute /* constantLoad.p.ii */.min;
  sysData->max[i++]   = data->modelData->realVarsData[53].attribute /* constantLoad.p.ii */.max;
  /* static nls data for constantLoad.p.ir */
  sysData->nominal[i] = data->modelData->realVarsData[54].attribute /* constantLoad.p.ir */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[54].attribute /* constantLoad.p.ir */.min;
  sysData->max[i++]   = data->modelData->realVarsData[54].attribute /* constantLoad.p.ir */.max;
  /* static nls data for pwLine4.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[140].attribute /* pwLine4.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[140].attribute /* pwLine4.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[140].attribute /* pwLine4.ir.re */.max;
  /* static nls data for pwLine1.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[117].attribute /* pwLine1.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[117].attribute /* pwLine1.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[117].attribute /* pwLine1.ir.im */.max;
  /* static nls data for gENCLS.id */
  sysData->nominal[i] = data->modelData->realVarsData[60].attribute /* gENCLS.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[60].attribute /* gENCLS.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[60].attribute /* gENCLS.id */.max;
  /* static nls data for gENCLS.iq */
  sysData->nominal[i] = data->modelData->realVarsData[61].attribute /* gENCLS.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[61].attribute /* gENCLS.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[61].attribute /* gENCLS.iq */.max;
  /* static nls data for gENROE.Epd */
  sysData->nominal[i] = data->modelData->realVarsData[2].attribute /* gENROE.Epd */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[2].attribute /* gENROE.Epd */.min;
  sysData->max[i++]   = data->modelData->realVarsData[2].attribute /* gENROE.Epd */.max;
  /* static nls data for gENROE.Epq */
  sysData->nominal[i] = data->modelData->realVarsData[3].attribute /* gENROE.Epq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[3].attribute /* gENROE.Epq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[3].attribute /* gENROE.Epq */.max;
  /* static nls data for gENROE.uq */
  sysData->nominal[i] = data->modelData->realVarsData[84].attribute /* gENROE.uq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[84].attribute /* gENROE.uq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[84].attribute /* gENROE.uq */.max;
  /* static nls data for gENROE.PSIppq */
  sysData->nominal[i] = data->modelData->realVarsData[73].attribute /* gENROE.PSIppq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[73].attribute /* gENROE.PSIppq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[73].attribute /* gENROE.PSIppq */.max;
  /* static nls data for gENROE.id */
  sysData->nominal[i] = data->modelData->realVarsData[81].attribute /* gENROE.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[81].attribute /* gENROE.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[81].attribute /* gENROE.id */.max;
  /* static nls data for gENROE.iq */
  sysData->nominal[i] = data->modelData->realVarsData[82].attribute /* gENROE.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[82].attribute /* gENROE.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[82].attribute /* gENROE.iq */.max;
  /* static nls data for pwLine1.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[121].attribute /* pwLine1.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[121].attribute /* pwLine1.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[121].attribute /* pwLine1.vr.im */.max;
  /* static nls data for pwLine1.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[122].attribute /* pwLine1.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[122].attribute /* pwLine1.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[122].attribute /* pwLine1.vr.re */.max;
  /* static nls data for pwLine1.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[123].attribute /* pwLine1.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[123].attribute /* pwLine1.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[123].attribute /* pwLine1.vs.im */.max;
  /* static nls data for pwLine1.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[124].attribute /* pwLine1.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[124].attribute /* pwLine1.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[124].attribute /* pwLine1.vs.re */.max;
  /* static nls data for pwLine3.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[133].attribute /* pwLine3.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[133].attribute /* pwLine3.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[133].attribute /* pwLine3.vr.im */.max;
  /* static nls data for pwLine3.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[134].attribute /* pwLine3.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[134].attribute /* pwLine3.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[134].attribute /* pwLine3.vr.re */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS93(sysData);
}

void getIterationVarsNLS93(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[130] /* pwLine3.ir.re variable */;
  array[1] = data->localData[0]->realVars[142] /* pwLine4.is.re variable */;
  array[2] = data->localData[0]->realVars[141] /* pwLine4.is.im variable */;
  array[3] = data->localData[0]->realVars[129] /* pwLine3.ir.im variable */;
  array[4] = data->localData[0]->realVars[120] /* pwLine1.is.re variable */;
  array[5] = data->localData[0]->realVars[132] /* pwLine3.is.re variable */;
  array[6] = data->localData[0]->realVars[107] /* pwLine.ir.im variable */;
  array[7] = data->localData[0]->realVars[119] /* pwLine1.is.im variable */;
  array[8] = data->localData[0]->realVars[53] /* constantLoad.p.ii variable */;
  array[9] = data->localData[0]->realVars[54] /* constantLoad.p.ir variable */;
  array[10] = data->localData[0]->realVars[140] /* pwLine4.ir.re variable */;
  array[11] = data->localData[0]->realVars[117] /* pwLine1.ir.im variable */;
  array[12] = data->localData[0]->realVars[60] /* gENCLS.id variable */;
  array[13] = data->localData[0]->realVars[61] /* gENCLS.iq variable */;
  array[14] = data->localData[0]->realVars[2] /* gENROE.Epd STATE(1) */;
  array[15] = data->localData[0]->realVars[3] /* gENROE.Epq STATE(1) */;
  array[16] = data->localData[0]->realVars[84] /* gENROE.uq variable */;
  array[17] = data->localData[0]->realVars[73] /* gENROE.PSIppq variable */;
  array[18] = data->localData[0]->realVars[81] /* gENROE.id variable */;
  array[19] = data->localData[0]->realVars[82] /* gENROE.iq variable */;
  array[20] = data->localData[0]->realVars[121] /* pwLine1.vr.im variable */;
  array[21] = data->localData[0]->realVars[122] /* pwLine1.vr.re variable */;
  array[22] = data->localData[0]->realVars[123] /* pwLine1.vs.im variable */;
  array[23] = data->localData[0]->realVars[124] /* pwLine1.vs.re variable */;
  array[24] = data->localData[0]->realVars[133] /* pwLine3.vr.im variable */;
  array[25] = data->localData[0]->realVars[134] /* pwLine3.vr.re variable */;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize non-linear systems */
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA* nonLinearSystemData)
{
  
  nonLinearSystemData[2].equationIndex = 301;
  nonLinearSystemData[2].size = 1;
  nonLinearSystemData[2].homotopySupport = 0;
  nonLinearSystemData[2].mixedSystem = 0;
  nonLinearSystemData[2].residualFunc = residualFunc301;
  nonLinearSystemData[2].strictTearingFunctionCall = NULL;
  nonLinearSystemData[2].analyticalJacobianColumn = OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_functionJacNLSJac36_column;
  nonLinearSystemData[2].initialAnalyticalJacobian = OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_initialAnalyticJacobianNLSJac36;
  nonLinearSystemData[2].jacobianIndex = 1 /*jacInx*/;
  nonLinearSystemData[2].initializeStaticNLSData = initializeStaticDataNLS301;
  nonLinearSystemData[2].getIterationVars = getIterationVarsNLS301;
  nonLinearSystemData[2].checkConstraints = NULL;
  
  
  nonLinearSystemData[1].equationIndex = 271;
  nonLinearSystemData[1].size = 22;
  nonLinearSystemData[1].homotopySupport = 0;
  nonLinearSystemData[1].mixedSystem = 1;
  nonLinearSystemData[1].residualFunc = residualFunc271;
  nonLinearSystemData[1].strictTearingFunctionCall = NULL;
  nonLinearSystemData[1].analyticalJacobianColumn = OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_functionJacNLSJac35_column;
  nonLinearSystemData[1].initialAnalyticalJacobian = OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_initialAnalyticJacobianNLSJac35;
  nonLinearSystemData[1].jacobianIndex = 0 /*jacInx*/;
  nonLinearSystemData[1].initializeStaticNLSData = initializeStaticDataNLS271;
  nonLinearSystemData[1].getIterationVars = getIterationVarsNLS271;
  nonLinearSystemData[1].checkConstraints = NULL;
  
  
  nonLinearSystemData[0].equationIndex = 93;
  nonLinearSystemData[0].size = 26;
  nonLinearSystemData[0].homotopySupport = 0;
  nonLinearSystemData[0].mixedSystem = 1;
  nonLinearSystemData[0].residualFunc = residualFunc93;
  nonLinearSystemData[0].strictTearingFunctionCall = NULL;
  nonLinearSystemData[0].analyticalJacobianColumn = NULL;
  nonLinearSystemData[0].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[0].jacobianIndex = -1;
  nonLinearSystemData[0].initializeStaticNLSData = initializeStaticDataNLS93;
  nonLinearSystemData[0].getIterationVars = getIterationVarsNLS93;
  nonLinearSystemData[0].checkConstraints = NULL;
}

#if defined(__cplusplus)
}
#endif

