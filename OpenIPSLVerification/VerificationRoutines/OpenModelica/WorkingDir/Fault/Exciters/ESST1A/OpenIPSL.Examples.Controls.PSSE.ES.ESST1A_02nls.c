/* Non Linear Systems */
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESST1A_model.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESST1A_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* inner equations */

/*
equation index: 879
type: SIMPLE_ASSIGN
eSST1A._hV_GATE._n1 = smooth(0, if eSST1A.add3_1.y > eSST1A.imLimited.uMax then eSST1A.imLimited.uMax else if eSST1A.add3_1.y < eSST1A.imLimited.uMin then eSST1A.imLimited.uMin else eSST1A.add3_1.y)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_879(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,879};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  tmp0 = Greater(data->localData[0]->realVars[67] /* eSST1A.add3_1.y variable */,data->simulationInfo->realParameter[162]);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->simulationInfo->realParameter[162];
  }
  else
  {
    tmp1 = Less(data->localData[0]->realVars[67] /* eSST1A.add3_1.y variable */,data->simulationInfo->realParameter[163]);
    tmp3 = (tmp1?data->simulationInfo->realParameter[163]:data->localData[0]->realVars[67] /* eSST1A.add3_1.y variable */);
  }
  data->localData[0]->realVars[71] /* eSST1A.hV_GATE.n1 variable */ = tmp3;
  TRACE_POP
}
/*
equation index: 880
type: SIMPLE_ASSIGN
eSST1A._hV_GATE._p = if eSST1A.hV_GATE.n1 < const1.k then const1.k else eSST1A.hV_GATE.n1
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_880(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,880};
  modelica_boolean tmp0;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[71] /* eSST1A.hV_GATE.n1 variable */, data->simulationInfo->realParameter[35], 14, Less);
  data->localData[0]->realVars[72] /* eSST1A.hV_GATE.p variable */ = (tmp0?data->simulationInfo->realParameter[35]:data->localData[0]->realVars[71] /* eSST1A.hV_GATE.n1 variable */);
  TRACE_POP
}
/*
equation index: 881
type: SIMPLE_ASSIGN
eSST1A._imDerivativeLag._y = (eSST1A.add3_1.y - (eSST1A.add3_1.k2 * eSST1A.DiffV.y + eSST1A.add3_1.k3 * eSST1A.Limiters.y)) / eSST1A.add3_1.k1
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_881(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,881};
  data->localData[0]->realVars[74] /* eSST1A.imDerivativeLag.y variable */ = DIVISION_SIM(data->localData[0]->realVars[67] /* eSST1A.add3_1.y variable */ - ((data->simulationInfo->realParameter[117]) * (data->localData[0]->realVars[57] /* eSST1A.DiffV.y variable */) + (data->simulationInfo->realParameter[118]) * (data->localData[0]->realVars[61] /* eSST1A.Limiters.y variable */)),data->simulationInfo->realParameter[116],"eSST1A.add3_1.k1",equationIndexes);
  TRACE_POP
}
/*
equation index: 882
type: SIMPLE_ASSIGN
eSST1A._imLeadLag._TF._y = (eSST1A.imLeadLag.TF.bb[2] - eSST1A.imLeadLag.TF.a[2] * eSST1A.imLeadLag.TF.d) * eSST1A.imLeadLag.TF.x[1] + eSST1A.imLeadLag.TF.d * eSST1A.hV_GATE.p
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_882(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,882};
  data->localData[0]->realVars[78] /* eSST1A.imLeadLag.TF.y variable */ = (data->simulationInfo->realParameter[140] - ((data->simulationInfo->realParameter[135]) * (data->simulationInfo->realParameter[141]))) * (data->localData[0]->realVars[77] /* eSST1A.imLeadLag.TF.x[1] variable */) + (data->simulationInfo->realParameter[141]) * (data->localData[0]->realVars[72] /* eSST1A.hV_GATE.p variable */);
  TRACE_POP
}
/*
equation index: 883
type: SIMPLE_ASSIGN
eSST1A._imLeadLag._y = if abs(eSST1A.imLeadLag.T1 - eSST1A.imLeadLag.T2) < 1e-15 then eSST1A.imLeadLag.K * eSST1A.hV_GATE.p else eSST1A.imLeadLag.TF.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_883(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,883};
  modelica_boolean tmp0;
  tmp0 = Less(fabs(data->simulationInfo->realParameter[131] - data->simulationInfo->realParameter[132]),1e-15);
  data->localData[0]->realVars[79] /* eSST1A.imLeadLag.y variable */ = (tmp0?(data->simulationInfo->realParameter[130]) * (data->localData[0]->realVars[72] /* eSST1A.hV_GATE.p variable */):data->localData[0]->realVars[78] /* eSST1A.imLeadLag.TF.y variable */);
  TRACE_POP
}
/*
equation index: 884
type: SIMPLE_ASSIGN
eSST1A._imLeadLag1._TF._y = (eSST1A.imLeadLag1.TF.bb[2] - eSST1A.imLeadLag1.TF.a[2] * eSST1A.imLeadLag1.TF.d) * eSST1A.imLeadLag1.TF.x[1] + eSST1A.imLeadLag1.TF.d * eSST1A.imLeadLag.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_884(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,884};
  data->localData[0]->realVars[81] /* eSST1A.imLeadLag1.TF.y variable */ = (data->simulationInfo->realParameter[156] - ((data->simulationInfo->realParameter[151]) * (data->simulationInfo->realParameter[157]))) * (data->localData[0]->realVars[80] /* eSST1A.imLeadLag1.TF.x[1] variable */) + (data->simulationInfo->realParameter[157]) * (data->localData[0]->realVars[79] /* eSST1A.imLeadLag.y variable */);
  TRACE_POP
}
/*
equation index: 885
type: SIMPLE_ASSIGN
eSST1A._imLeadLag1._y = if abs(eSST1A.imLeadLag1.T1 - eSST1A.imLeadLag1.T2) < 1e-15 then eSST1A.imLeadLag1.K * eSST1A.imLeadLag.y else eSST1A.imLeadLag1.TF.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_885(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,885};
  modelica_boolean tmp0;
  tmp0 = Less(fabs(data->simulationInfo->realParameter[147] - data->simulationInfo->realParameter[148]),1e-15);
  data->localData[0]->realVars[82] /* eSST1A.imLeadLag1.y variable */ = (tmp0?(data->simulationInfo->realParameter[146]) * (data->localData[0]->realVars[79] /* eSST1A.imLeadLag.y variable */):data->localData[0]->realVars[81] /* eSST1A.imLeadLag1.TF.y variable */);
  TRACE_POP
}
/*
equation index: 886
type: SIMPLE_ASSIGN
eSST1A._add3_2._u2 = if abs(eSST1A.simpleLagLim.T) <= 1e-15 then max(min(eSST1A.imLeadLag1.y * eSST1A.simpleLagLim.K, eSST1A.simpleLagLim.outMax), eSST1A.simpleLagLim.outMin) else max(min(eSST1A.simpleLagLim.state, eSST1A.simpleLagLim.outMax), eSST1A.simpleLagLim.outMin)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_886(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,886};
  modelica_boolean tmp0;
  tmp0 = LessEq(fabs(data->simulationInfo->realParameter[167]),1e-15);
  data->localData[0]->realVars[68] /* eSST1A.add3_2.u2 variable */ = (tmp0?fmax(fmin((data->localData[0]->realVars[82] /* eSST1A.imLeadLag1.y variable */) * (data->simulationInfo->realParameter[166]),data->simulationInfo->realParameter[169]),data->simulationInfo->realParameter[170]):fmax(fmin(data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */,data->simulationInfo->realParameter[169]),data->simulationInfo->realParameter[170]));
  TRACE_POP
}
/*
equation index: 887
type: SIMPLE_ASSIGN
eSST1A._add3_2._y = eSST1A.add3_2.k1 * const.k + eSST1A.add3_2.k2 * eSST1A.add3_2.u2 + eSST1A.add3_2.k3 * eSST1A.add3_2.u3
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_887(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,887};
  data->localData[0]->realVars[70] /* eSST1A.add3_2.y variable */ = (data->simulationInfo->realParameter[119]) * (data->simulationInfo->realParameter[34]) + (data->simulationInfo->realParameter[120]) * (data->localData[0]->realVars[68] /* eSST1A.add3_2.u2 variable */) + (data->simulationInfo->realParameter[121]) * (data->localData[0]->realVars[69] /* eSST1A.add3_2.u3 variable */);
  TRACE_POP
}

void residualFunc899(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,899};
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
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_879(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_880(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_881(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_882(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_883(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_884(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_885(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_886(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_887(data, threadData);
  /* body */
  res[0] = data->localData[0]->realVars[70] /* eSST1A.add3_2.y variable */ + (-data->localData[0]->realVars[1] /* eSST1A.imDerivativeLag.x STATE(1,eSST1A.imDerivativeLag.y) */) - ((data->localData[0]->realVars[74] /* eSST1A.imDerivativeLag.y variable */) * (data->simulationInfo->realParameter[122]));
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS899(NONLINEAR_SYSTEM_DATA* inSysData)
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
void initializeStaticDataNLS899(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for eSST1A.add3_1.y */
  sysData->nominal[i] = data->modelData->realVarsData[67].attribute /* eSST1A.add3_1.y */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[67].attribute /* eSST1A.add3_1.y */.min;
  sysData->max[i++]   = data->modelData->realVarsData[67].attribute /* eSST1A.add3_1.y */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS899(sysData);
}

void getIterationVarsNLS899(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[67] /* eSST1A.add3_1.y variable */;
}


/* inner equations */

/*
equation index: 765
type: SIMPLE_ASSIGN
constantLoad._v = sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_765(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,765};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[135] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[134] /* pwLine1.vs.im variable */;
  data->localData[0]->realVars[55] /* constantLoad.v variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 766
type: SIMPLE_ASSIGN
constantLoad._kP = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a0 + constantLoad.a1 * cos(constantLoad.v * constantLoad.wp) + constantLoad.b1 * sin(constantLoad.v * constantLoad.wp) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_766(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,766};
  modelica_boolean tmp0;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[55] /* constantLoad.v variable */, data->simulationInfo->realParameter[38], 13, Less);
  data->localData[0]->realVars[52] /* constantLoad.kP variable */ = (tmp0?data->simulationInfo->realParameter[57] + (data->simulationInfo->realParameter[58]) * (cos((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[78]))) + (data->simulationInfo->realParameter[64]) * (sin((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[78]))):1.0);
  TRACE_POP
}
/*
equation index: 767
type: SIMPLE_ASSIGN
constantLoad._kI = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (-1.0 + constantLoad.b2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_767(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,767};
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
    tmp2 = -1.0 + data->simulationInfo->realParameter[65];
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
    tmp9 = data->simulationInfo->realParameter[65];
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
    tmp16 = (data->simulationInfo->realParameter[59]) * ((data->simulationInfo->realParameter[65]) * ((tmp3) * (exp(((-data->simulationInfo->realParameter[59])) * (tmp10)))));
  }
  else
  {
    tmp16 = 1.0;
  }
  data->localData[0]->realVars[51] /* constantLoad.kI variable */ = tmp16;
  TRACE_POP
}
/*
equation index: 768
type: SIMPLE_ASSIGN
constantLoad._Q = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_768(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,768};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, data->simulationInfo->realParameter[74], 3, GreaterEq);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->timeValue, data->simulationInfo->realParameter[74] + data->simulationInfo->realParameter[68], 4, LessEq);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[41]) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[45]) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[43] + data->simulationInfo->realParameter[67]);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[41]) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[45]) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[43]);
  }
  data->localData[0]->realVars[49] /* constantLoad.Q variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 769
type: SIMPLE_ASSIGN
constantLoad._P = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_769(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,769};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, data->simulationInfo->realParameter[74], 3, GreaterEq);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->timeValue, data->simulationInfo->realParameter[74] + data->simulationInfo->realParameter[68], 4, LessEq);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[42]) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[46]) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[44] + data->simulationInfo->realParameter[66]);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[42]) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[46]) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[44]);
  }
  data->localData[0]->realVars[48] /* constantLoad.P variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 770
type: SIMPLE_ASSIGN
gENROE._PSIq = (-gENROE.PSIppq) - gENROE.Xppq * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_770(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,770};
  data->localData[0]->realVars[102] /* gENROE.PSIq variable */ = (-data->localData[0]->realVars[101] /* gENROE.PSIppq variable */) - ((data->simulationInfo->realParameter[250]) * (data->localData[0]->realVars[109] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 771
type: SIMPLE_ASSIGN
pwLine._is._re = ($cse7 * gENROE.iq - (-$cse6) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_771(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,771};
  data->localData[0]->realVars[121] /* pwLine.is.re variable */ = ((data->localData[0]->realVars[31] /* $cse7 variable */) * (data->localData[0]->realVars[109] /* gENROE.iq variable */) - (((-data->localData[0]->realVars[30] /* $cse6 variable */)) * (data->localData[0]->realVars[108] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[198]);
  TRACE_POP
}
/*
equation index: 772
type: SIMPLE_ASSIGN
pwLine._is._im = ($cse6 * gENROE.iq - $cse7 * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_772(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,772};
  data->localData[0]->realVars[120] /* pwLine.is.im variable */ = ((data->localData[0]->realVars[30] /* $cse6 variable */) * (data->localData[0]->realVars[109] /* gENROE.iq variable */) - ((data->localData[0]->realVars[31] /* $cse7 variable */) * (data->localData[0]->realVars[108] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[198]);
  TRACE_POP
}
/*
equation index: 773
type: SIMPLE_ASSIGN
gENROE._ud = (-gENROE.PSIq) - gENROE.R_a * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_773(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,773};
  data->localData[0]->realVars[110] /* gENROE.ud variable */ = (-data->localData[0]->realVars[102] /* gENROE.PSIq variable */) - ((data->simulationInfo->realParameter[232]) * (data->localData[0]->realVars[108] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 774
type: SIMPLE_ASSIGN
gENROE._PSId = gENROE.PSIppd - gENROE.Xppd * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_774(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,774};
  data->localData[0]->realVars[98] /* gENROE.PSId variable */ = data->localData[0]->realVars[100] /* gENROE.PSIppd variable */ - ((data->simulationInfo->realParameter[249]) * (data->localData[0]->realVars[108] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 775
type: SIMPLE_ASSIGN
gENROE._uq = gENROE.PSId - gENROE.R_a * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_775(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,775};
  data->localData[0]->realVars[111] /* gENROE.uq variable */ = data->localData[0]->realVars[98] /* gENROE.PSId variable */ - ((data->simulationInfo->realParameter[232]) * (data->localData[0]->realVars[109] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 776
type: SIMPLE_ASSIGN
pwLine._vs._re = $cse6 * gENROE.ud + $cse7 * gENROE.uq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_776(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,776};
  data->localData[0]->realVars[123] /* pwLine.vs.re variable */ = (data->localData[0]->realVars[30] /* $cse6 variable */) * (data->localData[0]->realVars[110] /* gENROE.ud variable */) + (data->localData[0]->realVars[31] /* $cse7 variable */) * (data->localData[0]->realVars[111] /* gENROE.uq variable */);
  TRACE_POP
}
/*
equation index: 777
type: SIMPLE_ASSIGN
pwLine._vs._im = $cse6 * gENROE.uq - $cse7 * gENROE.ud
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_777(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,777};
  data->localData[0]->realVars[122] /* pwLine.vs.im variable */ = (data->localData[0]->realVars[30] /* $cse6 variable */) * (data->localData[0]->realVars[111] /* gENROE.uq variable */) - ((data->localData[0]->realVars[31] /* $cse7 variable */) * (data->localData[0]->realVars[110] /* gENROE.ud variable */));
  TRACE_POP
}
/*
equation index: 778
type: SIMPLE_ASSIGN
gENCLS._p._ir = ((-$cse1) * gENCLS.id - $cse2 * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_778(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,778};
  data->localData[0]->realVars[92] /* gENCLS.p.ir variable */ = (((-data->localData[0]->realVars[26] /* $cse1 variable */)) * (data->localData[0]->realVars[88] /* gENCLS.id variable */) - ((data->localData[0]->realVars[27] /* $cse2 variable */) * (data->localData[0]->realVars[89] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[172]);
  TRACE_POP
}
/*
equation index: 779
type: SIMPLE_ASSIGN
gENCLS._p._ii = ($cse2 * gENCLS.id - $cse1 * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_779(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,779};
  data->localData[0]->realVars[91] /* gENCLS.p.ii variable */ = ((data->localData[0]->realVars[27] /* $cse2 variable */) * (data->localData[0]->realVars[88] /* gENCLS.id variable */) - ((data->localData[0]->realVars[26] /* $cse1 variable */) * (data->localData[0]->realVars[89] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[172]);
  TRACE_POP
}
/*
equation index: 780
type: SIMPLE_ASSIGN
gENCLS._vq = gENCLS.eq + (-gENCLS.R_a) * gENCLS.iq - gENCLS.X_d * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_780(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,780};
  data->localData[0]->realVars[94] /* gENCLS.vq variable */ = data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */ + ((-data->simulationInfo->realParameter[178])) * (data->localData[0]->realVars[89] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[181]) * (data->localData[0]->realVars[88] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 781
type: SIMPLE_ASSIGN
gENCLS._vd = gENCLS.X_d * gENCLS.iq - gENCLS.R_a * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_781(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,781};
  data->localData[0]->realVars[93] /* gENCLS.vd variable */ = (data->simulationInfo->realParameter[181]) * (data->localData[0]->realVars[89] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[178]) * (data->localData[0]->realVars[88] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 782
type: SIMPLE_ASSIGN
pwLine1._ir._re = (-pwLine4.ir.re) - gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_782(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,782};
  data->localData[0]->realVars[129] /* pwLine1.ir.re variable */ = (-data->localData[0]->realVars[151] /* pwLine4.ir.re variable */) - data->localData[0]->realVars[92] /* gENCLS.p.ir variable */;
  TRACE_POP
}
/*
equation index: 783
type: SIMPLE_ASSIGN
pwLine1._ir._im = (-pwLine4.ir.im) - gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_783(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,783};
  data->localData[0]->realVars[128] /* pwLine1.ir.im variable */ = (-data->localData[0]->realVars[150] /* pwLine4.ir.im variable */) - data->localData[0]->realVars[91] /* gENCLS.p.ii variable */;
  TRACE_POP
}
/*
equation index: 784
type: SIMPLE_ASSIGN
pwLine1._is._im = (-pwLine.ir.im) - pwLine3.is.im - constantLoad.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_784(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,784};
  data->localData[0]->realVars[130] /* pwLine1.is.im variable */ = (-data->localData[0]->realVars[118] /* pwLine.ir.im variable */) - data->localData[0]->realVars[142] /* pwLine3.is.im variable */ - data->localData[0]->realVars[53] /* constantLoad.p.ii variable */;
  TRACE_POP
}
/*
equation index: 785
type: SIMPLE_ASSIGN
constantLoad._p._ir = (-pwLine.ir.re) - pwLine1.is.re - pwLine3.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_785(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,785};
  data->localData[0]->realVars[54] /* constantLoad.p.ir variable */ = (-data->localData[0]->realVars[119] /* pwLine.ir.re variable */) - data->localData[0]->realVars[131] /* pwLine1.is.re variable */ - data->localData[0]->realVars[143] /* pwLine3.is.re variable */;
  TRACE_POP
}
/*
equation index: 786
type: SIMPLE_ASSIGN
pwFault._p._ir = (-pwLine3.ir.re) - pwLine4.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_786(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,786};
  data->localData[0]->realVars[113] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[141] /* pwLine3.ir.re variable */) - data->localData[0]->realVars[153] /* pwLine4.is.re variable */;
  TRACE_POP
}
/*
equation index: 787
type: SIMPLE_ASSIGN
pwFault._p._ii = (-pwLine3.ir.im) - pwLine4.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_787(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,787};
  data->localData[0]->realVars[112] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[140] /* pwLine3.ir.im variable */) - data->localData[0]->realVars[152] /* pwLine4.is.im variable */;
  TRACE_POP
}

void residualFunc855(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,855};
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
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_765(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_766(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_767(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_768(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_769(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_770(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_771(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_772(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_773(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_774(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_775(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_776(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_777(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_778(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_779(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_780(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_781(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_782(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_783(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_784(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_785(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_786(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_787(data, threadData);
  /* body */
  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, data->simulationInfo->realParameter[282], 7, Less);
  tmp9 = (modelica_boolean)tmp0;
  if(tmp9)
  {
    tmp10 = data->localData[0]->realVars[112] /* pwFault.p.ii variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp1, data->localData[0]->timeValue, data->simulationInfo->realParameter[283], 8, Less);
    tmp7 = (modelica_boolean)(tmp1 && data->simulationInfo->booleanParameter[70]);
    if(tmp7)
    {
      tmp8 = data->localData[0]->realVars[145] /* pwLine3.vr.re variable */ - 1e-10;
    }
    else
    {
      RELATIONHYSTERESIS(tmp2, data->localData[0]->timeValue, data->simulationInfo->realParameter[283], 8, Less);
      tmp5 = (modelica_boolean)tmp2;
      if(tmp5)
      {
        tmp3 = data->simulationInfo->realParameter[281];
        tmp4 = data->simulationInfo->realParameter[280];
        tmp6 = data->localData[0]->realVars[112] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[280]) * (data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) - ((data->simulationInfo->realParameter[281]) * (data->localData[0]->realVars[145] /* pwLine3.vr.re variable */)),(tmp3 * tmp3) + (tmp4 * tmp4),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
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

  RELATIONHYSTERESIS(tmp11, data->localData[0]->timeValue, data->simulationInfo->realParameter[282], 7, Less);
  tmp20 = (modelica_boolean)tmp11;
  if(tmp20)
  {
    tmp21 = data->localData[0]->realVars[113] /* pwFault.p.ir variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp12, data->localData[0]->timeValue, data->simulationInfo->realParameter[283], 8, Less);
    tmp18 = (modelica_boolean)(tmp12 && data->simulationInfo->booleanParameter[70]);
    if(tmp18)
    {
      tmp19 = data->localData[0]->realVars[144] /* pwLine3.vr.im variable */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp13, data->localData[0]->timeValue, data->simulationInfo->realParameter[283], 8, Less);
      tmp16 = (modelica_boolean)tmp13;
      if(tmp16)
      {
        tmp14 = data->simulationInfo->realParameter[280];
        tmp15 = data->simulationInfo->realParameter[281];
        tmp17 = data->localData[0]->realVars[113] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[280]) * (data->localData[0]->realVars[145] /* pwLine3.vr.re variable */) + (data->simulationInfo->realParameter[281]) * (data->localData[0]->realVars[144] /* pwLine3.vr.im variable */),(tmp14 * tmp14) + (tmp15 * tmp15),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
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

  RELATIONHYSTERESIS(tmp22, data->localData[0]->timeValue, data->simulationInfo->realParameter[293], 0, GreaterEq);
  RELATIONHYSTERESIS(tmp23, data->localData[0]->timeValue, data->simulationInfo->realParameter[294], 1, Less);
  res[2] = ((tmp22 && tmp23)?data->localData[0]->realVars[120] /* pwLine.is.im variable */:data->localData[0]->realVars[122] /* pwLine.vs.im variable */ - data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[292]) * (data->localData[0]->realVars[120] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[123] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[289]) - ((data->localData[0]->realVars[122] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[290]))) + (data->simulationInfo->realParameter[291]) * (data->localData[0]->realVars[121] /* pwLine.is.re variable */ + (data->localData[0]->realVars[122] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[289]) - ((data->localData[0]->realVars[123] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[290])))));

  RELATIONHYSTERESIS(tmp24, data->localData[0]->timeValue, data->simulationInfo->realParameter[293], 0, GreaterEq);
  RELATIONHYSTERESIS(tmp25, data->localData[0]->timeValue, data->simulationInfo->realParameter[294], 1, Less);
  res[3] = ((tmp24 && tmp25)?data->localData[0]->realVars[121] /* pwLine.is.re variable */:data->localData[0]->realVars[123] /* pwLine.vs.re variable */ - data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[292]) * (data->localData[0]->realVars[121] /* pwLine.is.re variable */ + (data->localData[0]->realVars[122] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[289]) - ((data->localData[0]->realVars[123] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[290]))) - ((data->simulationInfo->realParameter[291]) * (data->localData[0]->realVars[120] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[123] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[289]) - ((data->localData[0]->realVars[122] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[290]))))));

  RELATIONHYSTERESIS(tmp26, data->localData[0]->timeValue, data->simulationInfo->realParameter[293], 0, GreaterEq);
  RELATIONHYSTERESIS(tmp27, data->localData[0]->timeValue, data->simulationInfo->realParameter[294], 1, Less);
  res[4] = ((tmp26 && tmp27)?data->localData[0]->realVars[118] /* pwLine.ir.im variable */:data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[122] /* pwLine.vs.im variable */ - ((data->simulationInfo->realParameter[292]) * (data->localData[0]->realVars[118] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[135] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[289]) - ((data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[290]))) + (data->simulationInfo->realParameter[291]) * (data->localData[0]->realVars[119] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[289]) - ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[290])))));

  RELATIONHYSTERESIS(tmp28, data->localData[0]->timeValue, data->simulationInfo->realParameter[293], 0, GreaterEq);
  RELATIONHYSTERESIS(tmp29, data->localData[0]->timeValue, data->simulationInfo->realParameter[294], 1, Less);
  res[5] = ((tmp28 && tmp29)?data->localData[0]->realVars[119] /* pwLine.ir.re variable */:data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[123] /* pwLine.vs.re variable */ - ((data->simulationInfo->realParameter[292]) * (data->localData[0]->realVars[119] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[289]) - ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[290]))) - ((data->simulationInfo->realParameter[291]) * (data->localData[0]->realVars[118] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[135] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[289]) - ((data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[290]))))));

  res[6] = (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[48] /* constantLoad.P variable */;

  RELATIONHYSTERESIS(tmp30, data->localData[0]->timeValue, data->simulationInfo->realParameter[315], 5, GreaterEq);
  RELATIONHYSTERESIS(tmp31, data->localData[0]->timeValue, data->simulationInfo->realParameter[316], 6, Less);
  res[7] = ((tmp30 && tmp31)?data->localData[0]->realVars[143] /* pwLine3.is.re variable */:data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[145] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[314]) * (data->localData[0]->realVars[143] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[311]) - ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[312]))) - ((data->simulationInfo->realParameter[313]) * (data->localData[0]->realVars[142] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[135] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[311]) - ((data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[312]))))));

  res[8] = (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) + ((-data->localData[0]->realVars[135] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[49] /* constantLoad.Q variable */;

  RELATIONHYSTERESIS(tmp32, data->localData[0]->timeValue, data->simulationInfo->realParameter[304], 11, GreaterEq);
  RELATIONHYSTERESIS(tmp33, data->localData[0]->timeValue, data->simulationInfo->realParameter[305], 12, Less);
  res[9] = ((tmp32 && tmp33)?data->localData[0]->realVars[130] /* pwLine1.is.im variable */:data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[132] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[303]) * (data->localData[0]->realVars[130] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[135] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[300]) - ((data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[301]))) + (data->simulationInfo->realParameter[302]) * (data->localData[0]->realVars[131] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[300]) - ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[301])))));

  RELATIONHYSTERESIS(tmp34, data->localData[0]->timeValue, data->simulationInfo->realParameter[304], 11, GreaterEq);
  RELATIONHYSTERESIS(tmp35, data->localData[0]->timeValue, data->simulationInfo->realParameter[305], 12, Less);
  res[10] = ((tmp34 && tmp35)?data->localData[0]->realVars[131] /* pwLine1.is.re variable */:data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[133] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[303]) * (data->localData[0]->realVars[131] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[300]) - ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[301]))) - ((data->simulationInfo->realParameter[302]) * (data->localData[0]->realVars[130] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[135] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[300]) - ((data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[301]))))));

  res[11] = (data->localData[0]->realVars[27] /* $cse2 variable */) * (data->localData[0]->realVars[94] /* gENCLS.vq variable */) + (data->localData[0]->realVars[26] /* $cse1 variable */) * (data->localData[0]->realVars[93] /* gENCLS.vd variable */) - data->localData[0]->realVars[133] /* pwLine1.vr.re variable */;

  res[12] = (data->localData[0]->realVars[26] /* $cse1 variable */) * (data->localData[0]->realVars[94] /* gENCLS.vq variable */) + ((-data->localData[0]->realVars[27] /* $cse2 variable */)) * (data->localData[0]->realVars[93] /* gENCLS.vd variable */) - data->localData[0]->realVars[132] /* pwLine1.vr.im variable */;

  RELATIONHYSTERESIS(tmp36, data->localData[0]->timeValue, data->simulationInfo->realParameter[304], 11, GreaterEq);
  RELATIONHYSTERESIS(tmp37, data->localData[0]->timeValue, data->simulationInfo->realParameter[305], 12, Less);
  res[13] = ((tmp36 && tmp37)?data->localData[0]->realVars[129] /* pwLine1.ir.re variable */:data->localData[0]->realVars[133] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[303]) * (data->localData[0]->realVars[129] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[300]) - ((data->localData[0]->realVars[133] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[301]))) - ((data->simulationInfo->realParameter[302]) * (data->localData[0]->realVars[128] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[133] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[300]) - ((data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[301]))))));

  RELATIONHYSTERESIS(tmp38, data->localData[0]->timeValue, data->simulationInfo->realParameter[304], 11, GreaterEq);
  RELATIONHYSTERESIS(tmp39, data->localData[0]->timeValue, data->simulationInfo->realParameter[305], 12, Less);
  res[14] = ((tmp38 && tmp39)?data->localData[0]->realVars[128] /* pwLine1.ir.im variable */:data->localData[0]->realVars[132] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[303]) * (data->localData[0]->realVars[128] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[133] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[300]) - ((data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[301]))) + (data->simulationInfo->realParameter[302]) * (data->localData[0]->realVars[129] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[300]) - ((data->localData[0]->realVars[133] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[301])))));

  RELATIONHYSTERESIS(tmp40, data->localData[0]->timeValue, data->simulationInfo->realParameter[315], 5, GreaterEq);
  RELATIONHYSTERESIS(tmp41, data->localData[0]->timeValue, data->simulationInfo->realParameter[316], 6, Less);
  res[15] = ((tmp40 && tmp41)?data->localData[0]->realVars[142] /* pwLine3.is.im variable */:data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[144] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[314]) * (data->localData[0]->realVars[142] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[135] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[311]) - ((data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[312]))) + (data->simulationInfo->realParameter[313]) * (data->localData[0]->realVars[143] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[311]) - ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[312])))));

  RELATIONHYSTERESIS(tmp42, data->localData[0]->timeValue, data->simulationInfo->realParameter[326], 9, GreaterEq);
  RELATIONHYSTERESIS(tmp43, data->localData[0]->timeValue, data->simulationInfo->realParameter[327], 10, Less);
  res[16] = ((tmp42 && tmp43)?data->localData[0]->realVars[153] /* pwLine4.is.re variable */:data->localData[0]->realVars[145] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[133] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[325]) * (data->localData[0]->realVars[153] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[322]) - ((data->localData[0]->realVars[145] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[323]))) - ((data->simulationInfo->realParameter[324]) * (data->localData[0]->realVars[152] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[145] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[322]) - ((data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[323]))))));

  RELATIONHYSTERESIS(tmp44, data->localData[0]->timeValue, data->simulationInfo->realParameter[315], 5, GreaterEq);
  RELATIONHYSTERESIS(tmp45, data->localData[0]->timeValue, data->simulationInfo->realParameter[316], 6, Less);
  res[17] = ((tmp44 && tmp45)?data->localData[0]->realVars[141] /* pwLine3.ir.re variable */:data->localData[0]->realVars[145] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[314]) * (data->localData[0]->realVars[141] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[311]) - ((data->localData[0]->realVars[145] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[312]))) - ((data->simulationInfo->realParameter[313]) * (data->localData[0]->realVars[140] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[145] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[311]) - ((data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[312]))))));

  RELATIONHYSTERESIS(tmp46, data->localData[0]->timeValue, data->simulationInfo->realParameter[315], 5, GreaterEq);
  RELATIONHYSTERESIS(tmp47, data->localData[0]->timeValue, data->simulationInfo->realParameter[316], 6, Less);
  res[18] = ((tmp46 && tmp47)?data->localData[0]->realVars[140] /* pwLine3.ir.im variable */:data->localData[0]->realVars[144] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[314]) * (data->localData[0]->realVars[140] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[145] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[311]) - ((data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[312]))) + (data->simulationInfo->realParameter[313]) * (data->localData[0]->realVars[141] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[311]) - ((data->localData[0]->realVars[145] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[312])))));

  RELATIONHYSTERESIS(tmp48, data->localData[0]->timeValue, data->simulationInfo->realParameter[326], 9, GreaterEq);
  RELATIONHYSTERESIS(tmp49, data->localData[0]->timeValue, data->simulationInfo->realParameter[327], 10, Less);
  res[19] = ((tmp48 && tmp49)?data->localData[0]->realVars[152] /* pwLine4.is.im variable */:data->localData[0]->realVars[144] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[132] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[325]) * (data->localData[0]->realVars[152] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[145] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[322]) - ((data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[323]))) + (data->simulationInfo->realParameter[324]) * (data->localData[0]->realVars[153] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[322]) - ((data->localData[0]->realVars[145] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[323])))));

  RELATIONHYSTERESIS(tmp50, data->localData[0]->timeValue, data->simulationInfo->realParameter[326], 9, GreaterEq);
  RELATIONHYSTERESIS(tmp51, data->localData[0]->timeValue, data->simulationInfo->realParameter[327], 10, Less);
  res[20] = ((tmp50 && tmp51)?data->localData[0]->realVars[151] /* pwLine4.ir.re variable */:data->localData[0]->realVars[133] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[145] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[325]) * (data->localData[0]->realVars[151] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[322]) - ((data->localData[0]->realVars[133] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[323]))) - ((data->simulationInfo->realParameter[324]) * (data->localData[0]->realVars[150] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[133] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[322]) - ((data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[323]))))));

  RELATIONHYSTERESIS(tmp52, data->localData[0]->timeValue, data->simulationInfo->realParameter[326], 9, GreaterEq);
  RELATIONHYSTERESIS(tmp53, data->localData[0]->timeValue, data->simulationInfo->realParameter[327], 10, Less);
  res[21] = ((tmp52 && tmp53)?data->localData[0]->realVars[150] /* pwLine4.ir.im variable */:data->localData[0]->realVars[132] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[144] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[325]) * (data->localData[0]->realVars[150] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[133] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[322]) - ((data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[323]))) + (data->simulationInfo->realParameter[324]) * (data->localData[0]->realVars[151] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[322]) - ((data->localData[0]->realVars[133] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[323])))));
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS855(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+22] = {0,3,3,3,3,4,4,4,4,4,4,4,4,4,4,7,7,4,4,8,8,11,11};
  const int rowIndex[112] = {0,16,19,0,17,18,1,17,18,1,16,19,6,8,9,10,6,7,8,15,7,9,10,15,6,8,9,10,4,5,9,10,4,5,6,8,13,14,20,21,13,14,20,21,11,12,13,14,11,12,13,14,9,12,13,14,19,20,21,10,11,13,14,16,20,21,2,3,4,5,2,3,4,5,0,1,7,16,17,18,19,20,0,1,15,16,17,18,19,21,2,4,5,6,7,8,9,10,14,15,18,3,4,5,6,7,8,9,10,13,15,17};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern.leadindex = (unsigned int*) malloc((22+1)*sizeof(int));
  inSysData->sparsePattern.index = (unsigned int*) malloc(112*sizeof(int));
  inSysData->sparsePattern.numberOfNoneZeros = 112;
  inSysData->sparsePattern.colorCols = (unsigned int*) malloc(22*sizeof(int));
  inSysData->sparsePattern.maxColors = 9;
  
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
  inSysData->sparsePattern.colorCols[15] = 4;
  inSysData->sparsePattern.colorCols[14] = 5;
  inSysData->sparsePattern.colorCols[7] = 6;
  inSysData->sparsePattern.colorCols[13] = 6;
  inSysData->sparsePattern.colorCols[17] = 6;
  inSysData->sparsePattern.colorCols[18] = 6;
  inSysData->sparsePattern.colorCols[6] = 7;
  inSysData->sparsePattern.colorCols[9] = 7;
  inSysData->sparsePattern.colorCols[12] = 7;
  inSysData->sparsePattern.colorCols[1] = 8;
  inSysData->sparsePattern.colorCols[3] = 8;
  inSysData->sparsePattern.colorCols[5] = 8;
  inSysData->sparsePattern.colorCols[8] = 8;
  inSysData->sparsePattern.colorCols[11] = 8;
  inSysData->sparsePattern.colorCols[0] = 9;
  inSysData->sparsePattern.colorCols[2] = 9;
  inSysData->sparsePattern.colorCols[4] = 9;
  inSysData->sparsePattern.colorCols[10] = 9;
  inSysData->sparsePattern.colorCols[16] = 9;
}
void initializeStaticDataNLS855(void *inData, threadData_t *threadData, void *inSystemData)
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
  initializeSparsePatternNLS855(sysData);
}

void getIterationVarsNLS855(struct DATA *inData, double *array)
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
equation index: 594
type: SIMPLE_ASSIGN
constantLoad._v = sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_594(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,594};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[135] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[134] /* pwLine1.vs.im variable */;
  data->localData[0]->realVars[55] /* constantLoad.v variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 595
type: SIMPLE_ASSIGN
constantLoad._kI = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (-1.0 + constantLoad.b2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_595(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,595};
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
    tmp2 = -1.0 + data->simulationInfo->realParameter[65];
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
    tmp9 = data->simulationInfo->realParameter[65];
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
    tmp16 = (data->simulationInfo->realParameter[59]) * ((data->simulationInfo->realParameter[65]) * ((tmp3) * (exp(((-data->simulationInfo->realParameter[59])) * (tmp10)))));
  }
  else
  {
    tmp16 = 1.0;
  }
  data->localData[0]->realVars[51] /* constantLoad.kI variable */ = tmp16;
  TRACE_POP
}
/*
equation index: 596
type: SIMPLE_ASSIGN
constantLoad._kP = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a0 + constantLoad.a1 * cos(constantLoad.v * constantLoad.wp) + constantLoad.b1 * sin(constantLoad.v * constantLoad.wp) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_596(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,596};
  modelica_boolean tmp0;
  tmp0 = Less(data->localData[0]->realVars[55] /* constantLoad.v variable */,data->simulationInfo->realParameter[38]);
  data->localData[0]->realVars[52] /* constantLoad.kP variable */ = (tmp0?data->simulationInfo->realParameter[57] + (data->simulationInfo->realParameter[58]) * (cos((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[78]))) + (data->simulationInfo->realParameter[64]) * (sin((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[78]))):1.0);
  TRACE_POP
}
/*
equation index: 597
type: SIMPLE_ASSIGN
constantLoad._Q = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_597(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,597};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[74]);
  tmp1 = LessEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[74] + data->simulationInfo->realParameter[68]);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[41]) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[45]) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[43] + data->simulationInfo->realParameter[67]);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[41]) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[45]) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[43]);
  }
  data->localData[0]->realVars[49] /* constantLoad.Q variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 598
type: SIMPLE_ASSIGN
constantLoad._P = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_598(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,598};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[74]);
  tmp1 = LessEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[74] + data->simulationInfo->realParameter[68]);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[42]) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[46]) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[44] + data->simulationInfo->realParameter[66]);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[42]) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[46]) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[44]);
  }
  data->localData[0]->realVars[48] /* constantLoad.P variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 599
type: SIMPLE_ASSIGN
eSST1A._IFD0 = (eSST1A.VA0 - (eSST1A.Efd0 - eSST1A.I_LR * eSST1A.K_LR)) / eSST1A.K_LR
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_599(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,599};
  data->simulationInfo->realParameter[83] = DIVISION_SIM(data->simulationInfo->realParameter[102] - (data->simulationInfo->realParameter[82] - ((data->simulationInfo->realParameter[84]) * (data->simulationInfo->realParameter[88]))),data->simulationInfo->realParameter[88],"eSST1A.K_LR",equationIndexes);
  TRACE_POP
}
/*
equation index: 600
type: SIMPLE_ASSIGN
eSST1A._imLeadLag._y_start = eSST1A.VA0 / eSST1A.K_A
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_600(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,600};
  data->simulationInfo->realParameter[145] = DIVISION_SIM(data->simulationInfo->realParameter[102],data->simulationInfo->realParameter[85],"eSST1A.K_A",equationIndexes);
  TRACE_POP
}
/*
equation index: 601
type: SIMPLE_ASSIGN
eSST1A._imLeadLag1._y_start = eSST1A.VA0 / eSST1A.K_A
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_601(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,601};
  data->simulationInfo->realParameter[161] = DIVISION_SIM(data->simulationInfo->realParameter[102],data->simulationInfo->realParameter[85],"eSST1A.K_A",equationIndexes);
  TRACE_POP
}
/*
equation index: 602
type: SIMPLE_ASSIGN
eSST1A._XADIFD = eSST1A.IFD0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_602(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,602};
  data->localData[0]->realVars[62] /* eSST1A.XADIFD variable */ = data->simulationInfo->realParameter[83];
  TRACE_POP
}
/*
equation index: 603
type: SIMPLE_ASSIGN
eSST1A._add2._y = eSST1A.add2.k1 * eSST1A.Vref1.k + eSST1A.add2.k2 * eSST1A.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_603(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,603};
  data->localData[0]->realVars[63] /* eSST1A.add2.y variable */ = (data->simulationInfo->realParameter[112]) * (data->simulationInfo->realParameter[111]) + (data->simulationInfo->realParameter[113]) * (data->localData[0]->realVars[62] /* eSST1A.XADIFD variable */);
  TRACE_POP
}
/*
equation index: 604
type: SIMPLE_ASSIGN
eSST1A._imGain._y = eSST1A.imGain.k * eSST1A.add2.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_604(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,604};
  data->localData[0]->realVars[75] /* eSST1A.imGain.y variable */ = (data->simulationInfo->realParameter[126]) * (data->localData[0]->realVars[63] /* eSST1A.add2.y variable */);
  TRACE_POP
}
/*
equation index: 605
type: SIMPLE_ASSIGN
eSST1A._EFD = eSST1A.XADIFD + $DER.gENROE.Epq * gENROE.Tpd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_605(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,605};
  data->localData[0]->realVars[59] /* eSST1A.EFD variable */ = data->localData[0]->realVars[62] /* eSST1A.XADIFD variable */ + (data->localData[0]->realVars[21] /* der(gENROE.Epq) STATE_DER */) * (data->simulationInfo->realParameter[238]);
  TRACE_POP
}
/*
equation index: 606
type: SIMPLE_ASSIGN
eSST1A._lV_GATE._p = eSST1A.EFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_606(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,606};
  data->localData[0]->realVars[83] /* eSST1A.lV_GATE.p variable */ = data->localData[0]->realVars[59] /* eSST1A.EFD variable */;
  TRACE_POP
}
/*
equation index: 607
type: SIMPLE_ASSIGN
eSST1A._add3_2._u3 = eSST1A.imGain.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_607(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,607};
  data->localData[0]->realVars[69] /* eSST1A.add3_2.u3 variable */ = data->localData[0]->realVars[75] /* eSST1A.imGain.y variable */;
  TRACE_POP
}
/*
equation index: 608
type: SIMPLE_ASSIGN
eSST1A._imLeadLag._TF._y_start = eSST1A.imLeadLag.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_608(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,608};
  data->simulationInfo->realParameter[143] = data->simulationInfo->realParameter[145];
  TRACE_POP
}
/*
equation index: 609
type: SIMPLE_ASSIGN
eSST1A._imLeadLag._TF._y = eSST1A.imLeadLag.TF.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_609(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,609};
  data->localData[0]->realVars[78] /* eSST1A.imLeadLag.TF.y variable */ = data->simulationInfo->realParameter[143];
  TRACE_POP
}
/*
equation index: 610
type: SIMPLE_ASSIGN
eSST1A._imLeadLag1._TF._y_start = eSST1A.imLeadLag1.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_610(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,610};
  data->simulationInfo->realParameter[159] = data->simulationInfo->realParameter[161];
  TRACE_POP
}
/*
equation index: 611
type: SIMPLE_ASSIGN
eSST1A._imLeadLag1._TF._y = eSST1A.imLeadLag1.TF.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_611(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,611};
  data->localData[0]->realVars[81] /* eSST1A.imLeadLag1.TF.y variable */ = data->simulationInfo->realParameter[159];
  TRACE_POP
}
/*
equation index: 612
type: SIMPLE_ASSIGN
eSST1A._simpleLagLim._y_start = eSST1A.VA0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_612(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,612};
  data->simulationInfo->realParameter[171] = data->simulationInfo->realParameter[102];
  TRACE_POP
}
/*
equation index: 613
type: SIMPLE_ASSIGN
$START._eSST1A._add3_2._u2 = eSST1A.simpleLagLim.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_613(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,613};
  data->modelData->realVarsData[68].attribute /* eSST1A.add3_2.u2 variable */.start = data->simulationInfo->realParameter[171];
    data->localData[0]->realVars[68] /* eSST1A.add3_2.u2 variable */ = data->modelData->realVarsData[68].attribute /* eSST1A.add3_2.u2 variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[68].info /* eSST1A.add3_2.u2 */.name, (modelica_real) data->localData[0]->realVars[68] /* eSST1A.add3_2.u2 variable */);
  TRACE_POP
}
/*
equation index: 614
type: SIMPLE_ASSIGN
eSST1A._simpleLagLim._state = eSST1A.simpleLagLim.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_614(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,614};
  data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[171];
  TRACE_POP
}
/*
equation index: 615
type: SIMPLE_ASSIGN
eSST1A._ECOMP0 = eSST1A.TransducerDelay.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_615(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,615};
  data->simulationInfo->realParameter[81] = data->simulationInfo->realParameter[101];
  TRACE_POP
}
/*
equation index: 616
type: SIMPLE_ASSIGN
eSST1A._V_REF = eSST1A.VA0 / eSST1A.K_A + eSST1A.ECOMP0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_616(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,616};
  data->simulationInfo->realParameter[107] = DIVISION_SIM(data->simulationInfo->realParameter[102],data->simulationInfo->realParameter[85],"eSST1A.K_A",equationIndexes) + data->simulationInfo->realParameter[81];
  TRACE_POP
}
/*
equation index: 617
type: SIMPLE_ASSIGN
eSST1A._VoltageReference._k = eSST1A.V_REF
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_617(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,617};
  data->simulationInfo->realParameter[110] = data->simulationInfo->realParameter[107];
  TRACE_POP
}
/*
equation index: 618
type: SIMPLE_ASSIGN
$START._eSST1A._DiffV._u2 = eSST1A.TransducerDelay.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_618(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,618};
  data->modelData->realVarsData[56].attribute /* eSST1A.DiffV.u2 variable */.start = data->simulationInfo->realParameter[101];
    data->localData[0]->realVars[56] /* eSST1A.DiffV.u2 variable */ = data->modelData->realVarsData[56].attribute /* eSST1A.DiffV.u2 variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[56].info /* eSST1A.DiffV.u2 */.name, (modelica_real) data->localData[0]->realVars[56] /* eSST1A.DiffV.u2 variable */);
  TRACE_POP
}
/*
equation index: 619
type: SIMPLE_ASSIGN
$START._eSST1A._TransducerDelay._state = eSST1A.TransducerDelay.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_619(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,619};
  data->modelData->realVarsData[0].attribute /* eSST1A.TransducerDelay.state STATE(1) */.start = data->simulationInfo->realParameter[101];
    data->localData[0]->realVars[0] /* eSST1A.TransducerDelay.state STATE(1) */ = data->modelData->realVarsData[0].attribute /* eSST1A.TransducerDelay.state STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[0].info /* eSST1A.TransducerDelay.state */.name, (modelica_real) data->localData[0]->realVars[0] /* eSST1A.TransducerDelay.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 620
type: SIMPLE_ASSIGN
eSST1A._TransducerDelay._state = eSST1A.TransducerDelay.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_620(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,620};
  data->localData[0]->realVars[0] /* eSST1A.TransducerDelay.state STATE(1) */ = data->simulationInfo->realParameter[101];
  TRACE_POP
}
/*
equation index: 621
type: SIMPLE_ASSIGN
eSST1A._ECOMP = eSST1A.ECOMP0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_621(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,621};
  data->localData[0]->realVars[58] /* eSST1A.ECOMP variable */ = data->simulationInfo->realParameter[81];
  TRACE_POP
}
/*
equation index: 622
type: SIMPLE_ASSIGN
eSST1A._DiffV._u2 = if abs(eSST1A.TransducerDelay.T) <= 1e-15 then eSST1A.ECOMP * eSST1A.TransducerDelay.K else eSST1A.TransducerDelay.state
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_622(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,622};
  modelica_boolean tmp0;
  tmp0 = LessEq(fabs(data->simulationInfo->realParameter[99]),1e-15);
  data->localData[0]->realVars[56] /* eSST1A.DiffV.u2 variable */ = (tmp0?(data->localData[0]->realVars[58] /* eSST1A.ECOMP variable */) * (data->simulationInfo->realParameter[98]):data->localData[0]->realVars[0] /* eSST1A.TransducerDelay.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 623
type: SIMPLE_ASSIGN
eSST1A._DiffV._y = eSST1A.DiffV.k1 * eSST1A.VoltageReference.k + eSST1A.DiffV.k2 * eSST1A.DiffV.u2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_623(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,623};
  data->localData[0]->realVars[57] /* eSST1A.DiffV.y variable */ = (data->simulationInfo->realParameter[79]) * (data->simulationInfo->realParameter[110]) + (data->simulationInfo->realParameter[80]) * (data->localData[0]->realVars[56] /* eSST1A.DiffV.u2 variable */);
  TRACE_POP
}
/*
equation index: 624
type: SIMPLE_ASSIGN
eSST1A._add3_1._y = eSST1A.add3_1.k1 * eSST1A.imDerivativeLag.y + eSST1A.add3_1.k2 * eSST1A.DiffV.y + eSST1A.add3_1.k3 * eSST1A.Limiters.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_624(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,624};
  data->localData[0]->realVars[67] /* eSST1A.add3_1.y variable */ = (data->simulationInfo->realParameter[116]) * (data->localData[0]->realVars[74] /* eSST1A.imDerivativeLag.y variable */) + (data->simulationInfo->realParameter[117]) * (data->localData[0]->realVars[57] /* eSST1A.DiffV.y variable */) + (data->simulationInfo->realParameter[118]) * (data->localData[0]->realVars[61] /* eSST1A.Limiters.y variable */);
  TRACE_POP
}
/*
equation index: 625
type: SIMPLE_ASSIGN
eSST1A._hV_GATE._n1 = eSST1A.add3_1.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_625(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,625};
  data->localData[0]->realVars[71] /* eSST1A.hV_GATE.n1 variable */ = data->localData[0]->realVars[67] /* eSST1A.add3_1.y variable */;
  TRACE_POP
}
/*
equation index: 626
type: SIMPLE_ASSIGN
eSST1A._hV_GATE._p = if eSST1A.hV_GATE.n1 < const1.k then const1.k else eSST1A.hV_GATE.n1
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_626(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,626};
  modelica_boolean tmp0;
  tmp0 = Less(data->localData[0]->realVars[71] /* eSST1A.hV_GATE.n1 variable */,data->simulationInfo->realParameter[35]);
  data->localData[0]->realVars[72] /* eSST1A.hV_GATE.p variable */ = (tmp0?data->simulationInfo->realParameter[35]:data->localData[0]->realVars[71] /* eSST1A.hV_GATE.n1 variable */);
  TRACE_POP
}
/*
equation index: 627
type: SIMPLE_ASSIGN
eSST1A._imLeadLag._y = if abs(eSST1A.imLeadLag.T1 - eSST1A.imLeadLag.T2) < 1e-15 then eSST1A.imLeadLag.K * eSST1A.hV_GATE.p else eSST1A.imLeadLag.TF.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_627(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,627};
  modelica_boolean tmp0;
  tmp0 = Less(fabs(data->simulationInfo->realParameter[131] - data->simulationInfo->realParameter[132]),1e-15);
  data->localData[0]->realVars[79] /* eSST1A.imLeadLag.y variable */ = (tmp0?(data->simulationInfo->realParameter[130]) * (data->localData[0]->realVars[72] /* eSST1A.hV_GATE.p variable */):data->localData[0]->realVars[78] /* eSST1A.imLeadLag.TF.y variable */);
  TRACE_POP
}
/*
equation index: 628
type: SIMPLE_ASSIGN
eSST1A._imLeadLag1._y = if abs(eSST1A.imLeadLag1.T1 - eSST1A.imLeadLag1.T2) < 1e-15 then eSST1A.imLeadLag1.K * eSST1A.imLeadLag.y else eSST1A.imLeadLag1.TF.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_628(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,628};
  modelica_boolean tmp0;
  tmp0 = Less(fabs(data->simulationInfo->realParameter[147] - data->simulationInfo->realParameter[148]),1e-15);
  data->localData[0]->realVars[82] /* eSST1A.imLeadLag1.y variable */ = (tmp0?(data->simulationInfo->realParameter[146]) * (data->localData[0]->realVars[79] /* eSST1A.imLeadLag.y variable */):data->localData[0]->realVars[81] /* eSST1A.imLeadLag1.TF.y variable */);
  TRACE_POP
}
/*
equation index: 629
type: SIMPLE_ASSIGN
eSST1A._add3_2._u2 = if abs(eSST1A.simpleLagLim.T) <= 1e-15 then max(min(eSST1A.imLeadLag1.y * eSST1A.simpleLagLim.K, eSST1A.simpleLagLim.outMax), eSST1A.simpleLagLim.outMin) else max(min(eSST1A.simpleLagLim.state, eSST1A.simpleLagLim.outMax), eSST1A.simpleLagLim.outMin)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_629(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,629};
  modelica_boolean tmp0;
  tmp0 = LessEq(fabs(data->simulationInfo->realParameter[167]),1e-15);
  data->localData[0]->realVars[68] /* eSST1A.add3_2.u2 variable */ = (tmp0?fmax(fmin((data->localData[0]->realVars[82] /* eSST1A.imLeadLag1.y variable */) * (data->simulationInfo->realParameter[166]),data->simulationInfo->realParameter[169]),data->simulationInfo->realParameter[170]):fmax(fmin(data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */,data->simulationInfo->realParameter[169]),data->simulationInfo->realParameter[170]));
  TRACE_POP
}
/*
equation index: 630
type: SIMPLE_ASSIGN
eSST1A._add3_2._y = eSST1A.add3_2.k1 * const.k + eSST1A.add3_2.k2 * eSST1A.add3_2.u2 + eSST1A.add3_2.k3 * eSST1A.add3_2.u3
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_630(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,630};
  data->localData[0]->realVars[70] /* eSST1A.add3_2.y variable */ = (data->simulationInfo->realParameter[119]) * (data->simulationInfo->realParameter[34]) + (data->simulationInfo->realParameter[120]) * (data->localData[0]->realVars[68] /* eSST1A.add3_2.u2 variable */) + (data->simulationInfo->realParameter[121]) * (data->localData[0]->realVars[69] /* eSST1A.add3_2.u3 variable */);
  TRACE_POP
}
/*
equation index: 631
type: SIMPLE_ASSIGN
eSST1A._hV_GATE1._p = if eSST1A.add3_2.y < const1.k then const1.k else eSST1A.add3_2.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_631(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,631};
  modelica_boolean tmp0;
  tmp0 = Less(data->localData[0]->realVars[70] /* eSST1A.add3_2.y variable */,data->simulationInfo->realParameter[35]);
  data->localData[0]->realVars[73] /* eSST1A.hV_GATE1.p variable */ = (tmp0?data->simulationInfo->realParameter[35]:data->localData[0]->realVars[70] /* eSST1A.add3_2.y variable */);
  TRACE_POP
}
/*
equation index: 632
type: SIMPLE_ASSIGN
pwLine._is._im = (sin(gENROE.delta) * gENROE.iq - cos(gENROE.delta) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_632(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,632};
  data->localData[0]->realVars[120] /* pwLine.is.im variable */ = ((sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[109] /* gENROE.iq variable */) - ((cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[108] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[198]);
  TRACE_POP
}
/*
equation index: 633
type: SIMPLE_ASSIGN
pwLine._is._re = (cos(gENROE.delta) * gENROE.iq - (-sin(gENROE.delta)) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_633(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,633};
  data->localData[0]->realVars[121] /* pwLine.is.re variable */ = ((cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[109] /* gENROE.iq variable */) - (((-sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */))) * (data->localData[0]->realVars[108] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[198]);
  TRACE_POP
}
/*
equation index: 634
type: SIMPLE_ASSIGN
gENROE._PSIq = (-gENROE.PSIppq) - gENROE.Xppq * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_634(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,634};
  data->localData[0]->realVars[102] /* gENROE.PSIq variable */ = (-data->localData[0]->realVars[101] /* gENROE.PSIppq variable */) - ((data->simulationInfo->realParameter[250]) * (data->localData[0]->realVars[109] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 635
type: SIMPLE_ASSIGN
gENROE._ud = (-gENROE.PSIq) - gENROE.R_a * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_635(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,635};
  data->localData[0]->realVars[110] /* gENROE.ud variable */ = (-data->localData[0]->realVars[102] /* gENROE.PSIq variable */) - ((data->simulationInfo->realParameter[232]) * (data->localData[0]->realVars[108] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 636
type: SIMPLE_ASSIGN
gENROE._PSIpp = sqrt(gENROE.PSIppd ^ 2.0 + gENROE.PSIppq ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_636(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,636};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[100] /* gENROE.PSIppd variable */;
  tmp1 = data->localData[0]->realVars[101] /* gENROE.PSIppq variable */;
  data->localData[0]->realVars[99] /* gENROE.PSIpp variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 637
type: SIMPLE_ASSIGN
gENROE._PSId = gENROE.PSIppd - gENROE.Xppd * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_637(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,637};
  data->localData[0]->realVars[98] /* gENROE.PSId variable */ = data->localData[0]->realVars[100] /* gENROE.PSIppd variable */ - ((data->simulationInfo->realParameter[249]) * (data->localData[0]->realVars[108] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 638
type: SIMPLE_ASSIGN
gENROE._uq = gENROE.PSId - gENROE.R_a * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_638(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,638};
  data->localData[0]->realVars[111] /* gENROE.uq variable */ = data->localData[0]->realVars[98] /* gENROE.PSId variable */ - ((data->simulationInfo->realParameter[232]) * (data->localData[0]->realVars[109] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 639
type: SIMPLE_ASSIGN
gENROE._PSIkq = ((gENROE.Epd + (gENROE.Xpq - gENROE.Xl) * gENROE.iq) * gENROE.K1q + gENROE.Epd + gENROE.iq * (gENROE.Xpq - gENROE.Xq) + OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2) * gENROE.PSIppq * (gENROE.Xq - gENROE.Xl) / (gENROE.Xd - gENROE.Xl) - gENROE.XaqIlq) / gENROE.K1q
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_639(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,639};
  data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */ = DIVISION_SIM((data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[251] - data->simulationInfo->realParameter[246]) * (data->localData[0]->realVars[109] /* gENROE.iq variable */)) * (data->simulationInfo->realParameter[212]) + data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->localData[0]->realVars[109] /* gENROE.iq variable */) * (data->simulationInfo->realParameter[251] - data->simulationInfo->realParameter[252]) + (omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[99] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[235], data->simulationInfo->realParameter[236], 1.0, 1.2)) * ((data->localData[0]->realVars[101] /* gENROE.PSIppq variable */) * (DIVISION_SIM(data->simulationInfo->realParameter[252] - data->simulationInfo->realParameter[246],data->simulationInfo->realParameter[245] - data->simulationInfo->realParameter[246],"gENROE.Xd - gENROE.Xl",equationIndexes))) - data->localData[0]->realVars[105] /* gENROE.XaqIlq variable */,data->simulationInfo->realParameter[212],"gENROE.K1q",equationIndexes);
  TRACE_POP
}
/*
equation index: 640
type: SIMPLE_ASSIGN
gENROE._PSIkd = ((gENROE.Epq + (gENROE.Xl - gENROE.Xpd) * gENROE.id) * gENROE.K1d + gENROE.Epq + gENROE.id * (gENROE.Xd - gENROE.Xpd) + OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2) * gENROE.PSIppd - eSST1A.XADIFD) / gENROE.K1d
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_640(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,640};
  data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */ = DIVISION_SIM((data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[246] - data->simulationInfo->realParameter[247]) * (data->localData[0]->realVars[108] /* gENROE.id variable */)) * (data->simulationInfo->realParameter[211]) + data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->localData[0]->realVars[108] /* gENROE.id variable */) * (data->simulationInfo->realParameter[245] - data->simulationInfo->realParameter[247]) + (omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[99] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[235], data->simulationInfo->realParameter[236], 1.0, 1.2)) * (data->localData[0]->realVars[100] /* gENROE.PSIppd variable */) - data->localData[0]->realVars[62] /* eSST1A.XADIFD variable */,data->simulationInfo->realParameter[211],"gENROE.K1d",equationIndexes);
  TRACE_POP
}
/*
equation index: 641
type: SIMPLE_ASSIGN
gENCLS._p._ii = (cos(gENCLS.delta) * gENCLS.id - sin(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_641(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,641};
  data->localData[0]->realVars[91] /* gENCLS.p.ii variable */ = ((cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[88] /* gENCLS.id variable */) - ((sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[89] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[172]);
  TRACE_POP
}
/*
equation index: 642
type: SIMPLE_ASSIGN
gENCLS._p._ir = ((-sin(gENCLS.delta)) * gENCLS.id - cos(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_642(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,642};
  data->localData[0]->realVars[92] /* gENCLS.p.ir variable */ = (((-sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[88] /* gENCLS.id variable */) - ((cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[89] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[172]);
  TRACE_POP
}
/*
equation index: 643
type: SIMPLE_ASSIGN
gENCLS._vq = gENCLS.eq + (-gENCLS.R_a) * gENCLS.iq - gENCLS.X_d * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_643(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,643};
  data->localData[0]->realVars[94] /* gENCLS.vq variable */ = data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */ + ((-data->simulationInfo->realParameter[178])) * (data->localData[0]->realVars[89] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[181]) * (data->localData[0]->realVars[88] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 644
type: SIMPLE_ASSIGN
gENCLS._vd = gENCLS.X_d * gENCLS.iq - gENCLS.R_a * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_644(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,644};
  data->localData[0]->realVars[93] /* gENCLS.vd variable */ = (data->simulationInfo->realParameter[181]) * (data->localData[0]->realVars[89] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[178]) * (data->localData[0]->realVars[88] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 645
type: SIMPLE_ASSIGN
pwLine4._ir._im = (-pwLine1.ir.im) - gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_645(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,645};
  data->localData[0]->realVars[150] /* pwLine4.ir.im variable */ = (-data->localData[0]->realVars[128] /* pwLine1.ir.im variable */) - data->localData[0]->realVars[91] /* gENCLS.p.ii variable */;
  TRACE_POP
}
/*
equation index: 646
type: SIMPLE_ASSIGN
pwLine1._ir._re = (-pwLine4.ir.re) - gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_646(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,646};
  data->localData[0]->realVars[129] /* pwLine1.ir.re variable */ = (-data->localData[0]->realVars[151] /* pwLine4.ir.re variable */) - data->localData[0]->realVars[92] /* gENCLS.p.ir variable */;
  TRACE_POP
}
/*
equation index: 647
type: SIMPLE_ASSIGN
pwFault._p._ii = (-pwLine3.ir.im) - pwLine4.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_647(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,647};
  data->localData[0]->realVars[112] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[140] /* pwLine3.ir.im variable */) - data->localData[0]->realVars[152] /* pwLine4.is.im variable */;
  TRACE_POP
}
/*
equation index: 648
type: SIMPLE_ASSIGN
constantLoad._p._ii = (-pwLine.ir.im) - pwLine1.is.im - pwLine3.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_648(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,648};
  data->localData[0]->realVars[53] /* constantLoad.p.ii variable */ = (-data->localData[0]->realVars[118] /* pwLine.ir.im variable */) - data->localData[0]->realVars[130] /* pwLine1.is.im variable */ - data->localData[0]->realVars[142] /* pwLine3.is.im variable */;
  TRACE_POP
}
/*
equation index: 649
type: SIMPLE_ASSIGN
pwFault._p._ir = (-pwLine3.ir.re) - pwLine4.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_649(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,649};
  data->localData[0]->realVars[113] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[141] /* pwLine3.ir.re variable */) - data->localData[0]->realVars[153] /* pwLine4.is.re variable */;
  TRACE_POP
}
/*
equation index: 650
type: SIMPLE_ASSIGN
constantLoad._p._ir = (-pwLine.ir.re) - pwLine1.is.re - pwLine3.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_650(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,650};
  data->localData[0]->realVars[54] /* constantLoad.p.ir variable */ = (-data->localData[0]->realVars[119] /* pwLine.ir.re variable */) - data->localData[0]->realVars[131] /* pwLine1.is.re variable */ - data->localData[0]->realVars[143] /* pwLine3.is.re variable */;
  TRACE_POP
}

void residualFunc681(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,681};
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
  data->localData[0]->realVars[153] /* pwLine4.is.re variable */ = xloc[2];
  data->localData[0]->realVars[141] /* pwLine3.ir.re variable */ = xloc[3];
  data->localData[0]->realVars[118] /* pwLine.ir.im variable */ = xloc[4];
  data->localData[0]->realVars[142] /* pwLine3.is.im variable */ = xloc[5];
  data->localData[0]->realVars[143] /* pwLine3.is.re variable */ = xloc[6];
  data->localData[0]->realVars[130] /* pwLine1.is.im variable */ = xloc[7];
  data->localData[0]->realVars[152] /* pwLine4.is.im variable */ = xloc[8];
  data->localData[0]->realVars[140] /* pwLine3.ir.im variable */ = xloc[9];
  data->localData[0]->realVars[151] /* pwLine4.ir.re variable */ = xloc[10];
  data->localData[0]->realVars[128] /* pwLine1.ir.im variable */ = xloc[11];
  data->localData[0]->realVars[89] /* gENCLS.iq variable */ = xloc[12];
  data->localData[0]->realVars[88] /* gENCLS.id variable */ = xloc[13];
  data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ = xloc[14];
  data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ = xloc[15];
  data->localData[0]->realVars[100] /* gENROE.PSIppd variable */ = xloc[16];
  data->localData[0]->realVars[101] /* gENROE.PSIppq variable */ = xloc[17];
  data->localData[0]->realVars[108] /* gENROE.id variable */ = xloc[18];
  data->localData[0]->realVars[109] /* gENROE.iq variable */ = xloc[19];
  data->localData[0]->realVars[122] /* pwLine.vs.im variable */ = xloc[20];
  data->localData[0]->realVars[123] /* pwLine.vs.re variable */ = xloc[21];
  data->localData[0]->realVars[132] /* pwLine1.vr.im variable */ = xloc[22];
  data->localData[0]->realVars[133] /* pwLine1.vr.re variable */ = xloc[23];
  data->simulationInfo->realParameter[101] = xloc[24];
  data->simulationInfo->realParameter[102] = xloc[25];
  data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ = xloc[26];
  data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ = xloc[27];
  data->localData[0]->realVars[144] /* pwLine3.vr.im variable */ = xloc[28];
  data->localData[0]->realVars[145] /* pwLine3.vr.re variable */ = xloc[29];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_594(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_595(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_596(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_597(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_598(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_599(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_600(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_601(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_602(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_603(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_604(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_605(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_606(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_607(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_608(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_609(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_610(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_611(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_612(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_613(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_614(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_615(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_616(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_617(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_618(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_619(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_620(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_621(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_622(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_623(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_624(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_625(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_626(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_627(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_628(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_629(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_630(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_631(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_632(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_633(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_634(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_635(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_636(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_637(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_638(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_639(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_640(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_641(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_642(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_643(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_644(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_645(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_646(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_647(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_648(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_649(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_650(data, threadData);
  /* body */
  res[0] = (sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[94] /* gENCLS.vq variable */) + ((-cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[93] /* gENCLS.vd variable */) - data->localData[0]->realVars[132] /* pwLine1.vr.im variable */;

  tmp0 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[282]);
  tmp9 = (modelica_boolean)tmp0;
  if(tmp9)
  {
    tmp10 = data->localData[0]->realVars[112] /* pwFault.p.ii variable */;
  }
  else
  {
    tmp1 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[283]);
    tmp7 = (modelica_boolean)(tmp1 && data->simulationInfo->booleanParameter[70]);
    if(tmp7)
    {
      tmp8 = data->localData[0]->realVars[145] /* pwLine3.vr.re variable */ - 1e-10;
    }
    else
    {
      tmp2 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[283]);
      tmp5 = (modelica_boolean)tmp2;
      if(tmp5)
      {
        tmp3 = data->simulationInfo->realParameter[281];
        tmp4 = data->simulationInfo->realParameter[280];
        tmp6 = data->localData[0]->realVars[112] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[280]) * (data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) - ((data->simulationInfo->realParameter[281]) * (data->localData[0]->realVars[145] /* pwLine3.vr.re variable */)),(tmp3 * tmp3) + (tmp4 * tmp4),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
      }
      else
      {
        tmp6 = data->localData[0]->realVars[112] /* pwFault.p.ii variable */;
      }
      tmp8 = tmp6;
    }
    tmp10 = tmp8;
  }
  res[1] = tmp10;

  tmp11 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[315]);
  tmp12 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[316]);
  res[2] = ((tmp11 && tmp12)?data->localData[0]->realVars[142] /* pwLine3.is.im variable */:data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[144] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[314]) * (data->localData[0]->realVars[142] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[135] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[311]) - ((data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[312]))) + (data->simulationInfo->realParameter[313]) * (data->localData[0]->realVars[143] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[311]) - ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[312])))));

  tmp13 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[315]);
  tmp14 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[316]);
  res[3] = ((tmp13 && tmp14)?data->localData[0]->realVars[143] /* pwLine3.is.re variable */:data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[145] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[314]) * (data->localData[0]->realVars[143] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[311]) - ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[312]))) - ((data->simulationInfo->realParameter[313]) * (data->localData[0]->realVars[142] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[135] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[311]) - ((data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[312]))))));

  tmp15 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[315]);
  tmp16 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[316]);
  res[4] = ((tmp15 && tmp16)?data->localData[0]->realVars[141] /* pwLine3.ir.re variable */:data->localData[0]->realVars[145] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[314]) * (data->localData[0]->realVars[141] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[311]) - ((data->localData[0]->realVars[145] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[312]))) - ((data->simulationInfo->realParameter[313]) * (data->localData[0]->realVars[140] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[145] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[311]) - ((data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[312]))))));

  tmp17 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[315]);
  tmp18 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[316]);
  res[5] = ((tmp17 && tmp18)?data->localData[0]->realVars[140] /* pwLine3.ir.im variable */:data->localData[0]->realVars[144] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[314]) * (data->localData[0]->realVars[140] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[145] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[311]) - ((data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[312]))) + (data->simulationInfo->realParameter[313]) * (data->localData[0]->realVars[141] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[311]) - ((data->localData[0]->realVars[145] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[312])))));

  tmp19 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[282]);
  tmp28 = (modelica_boolean)tmp19;
  if(tmp28)
  {
    tmp29 = data->localData[0]->realVars[113] /* pwFault.p.ir variable */;
  }
  else
  {
    tmp20 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[283]);
    tmp26 = (modelica_boolean)(tmp20 && data->simulationInfo->booleanParameter[70]);
    if(tmp26)
    {
      tmp27 = data->localData[0]->realVars[144] /* pwLine3.vr.im variable */;
    }
    else
    {
      tmp21 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[283]);
      tmp24 = (modelica_boolean)tmp21;
      if(tmp24)
      {
        tmp22 = data->simulationInfo->realParameter[280];
        tmp23 = data->simulationInfo->realParameter[281];
        tmp25 = data->localData[0]->realVars[113] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[280]) * (data->localData[0]->realVars[145] /* pwLine3.vr.re variable */) + (data->simulationInfo->realParameter[281]) * (data->localData[0]->realVars[144] /* pwLine3.vr.im variable */),(tmp22 * tmp22) + (tmp23 * tmp23),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp25 = data->localData[0]->realVars[113] /* pwFault.p.ir variable */;
      }
      tmp27 = tmp25;
    }
    tmp29 = tmp27;
  }
  res[6] = tmp29;

  tmp30 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[326]);
  tmp31 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[327]);
  res[7] = ((tmp30 && tmp31)?data->localData[0]->realVars[152] /* pwLine4.is.im variable */:data->localData[0]->realVars[144] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[132] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[325]) * (data->localData[0]->realVars[152] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[145] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[322]) - ((data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[323]))) + (data->simulationInfo->realParameter[324]) * (data->localData[0]->realVars[153] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[322]) - ((data->localData[0]->realVars[145] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[323])))));

  tmp32 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[326]);
  tmp33 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[327]);
  res[8] = ((tmp32 && tmp33)?data->localData[0]->realVars[153] /* pwLine4.is.re variable */:data->localData[0]->realVars[145] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[133] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[325]) * (data->localData[0]->realVars[153] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[322]) - ((data->localData[0]->realVars[145] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[323]))) - ((data->simulationInfo->realParameter[324]) * (data->localData[0]->realVars[152] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[145] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[322]) - ((data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[323]))))));

  tmp34 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[304]);
  tmp35 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[305]);
  res[9] = ((tmp34 && tmp35)?data->localData[0]->realVars[131] /* pwLine1.is.re variable */:data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[133] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[303]) * (data->localData[0]->realVars[131] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[300]) - ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[301]))) - ((data->simulationInfo->realParameter[302]) * (data->localData[0]->realVars[130] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[135] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[300]) - ((data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[301]))))));

  res[10] = (cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[94] /* gENCLS.vq variable */) + (sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[93] /* gENCLS.vd variable */) - data->localData[0]->realVars[133] /* pwLine1.vr.re variable */;

  tmp36 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[326]);
  tmp37 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[327]);
  res[11] = ((tmp36 && tmp37)?data->localData[0]->realVars[151] /* pwLine4.ir.re variable */:data->localData[0]->realVars[133] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[145] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[325]) * (data->localData[0]->realVars[151] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[322]) - ((data->localData[0]->realVars[133] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[323]))) - ((data->simulationInfo->realParameter[324]) * (data->localData[0]->realVars[150] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[133] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[322]) - ((data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[323]))))));

  tmp38 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[326]);
  tmp39 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[327]);
  res[12] = ((tmp38 && tmp39)?data->localData[0]->realVars[150] /* pwLine4.ir.im variable */:data->localData[0]->realVars[132] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[144] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[325]) * (data->localData[0]->realVars[150] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[133] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[322]) - ((data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[323]))) + (data->simulationInfo->realParameter[324]) * (data->localData[0]->realVars[151] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[322]) - ((data->localData[0]->realVars[133] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[323])))));

  tmp40 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[304]);
  tmp41 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[305]);
  res[13] = ((tmp40 && tmp41)?data->localData[0]->realVars[130] /* pwLine1.is.im variable */:data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[132] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[303]) * (data->localData[0]->realVars[130] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[135] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[300]) - ((data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[301]))) + (data->simulationInfo->realParameter[302]) * (data->localData[0]->realVars[131] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[300]) - ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[301])))));

  tmp42 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[304]);
  tmp43 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[305]);
  res[14] = ((tmp42 && tmp43)?data->localData[0]->realVars[129] /* pwLine1.ir.re variable */:data->localData[0]->realVars[133] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[303]) * (data->localData[0]->realVars[129] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[300]) - ((data->localData[0]->realVars[133] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[301]))) - ((data->simulationInfo->realParameter[302]) * (data->localData[0]->realVars[128] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[133] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[300]) - ((data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[301]))))));

  tmp44 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[304]);
  tmp45 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[305]);
  res[15] = ((tmp44 && tmp45)?data->localData[0]->realVars[128] /* pwLine1.ir.im variable */:data->localData[0]->realVars[132] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[303]) * (data->localData[0]->realVars[128] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[133] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[300]) - ((data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[301]))) + (data->simulationInfo->realParameter[302]) * (data->localData[0]->realVars[129] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[300]) - ((data->localData[0]->realVars[133] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[301])))));

  res[16] = (sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[111] /* gENROE.uq variable */) + ((-cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */))) * (data->localData[0]->realVars[110] /* gENROE.ud variable */) - data->localData[0]->realVars[122] /* pwLine.vs.im variable */;

  res[17] = (cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[111] /* gENROE.uq variable */) + (sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[110] /* gENROE.ud variable */) - data->localData[0]->realVars[123] /* pwLine.vs.re variable */;

  tmp46 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[293]);
  tmp47 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[294]);
  res[18] = ((tmp46 && tmp47)?data->localData[0]->realVars[121] /* pwLine.is.re variable */:data->localData[0]->realVars[123] /* pwLine.vs.re variable */ - data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[292]) * (data->localData[0]->realVars[121] /* pwLine.is.re variable */ + (data->localData[0]->realVars[122] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[289]) - ((data->localData[0]->realVars[123] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[290]))) - ((data->simulationInfo->realParameter[291]) * (data->localData[0]->realVars[120] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[123] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[289]) - ((data->localData[0]->realVars[122] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[290]))))));

  tmp48 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[293]);
  tmp49 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[294]);
  res[19] = ((tmp48 && tmp49)?data->localData[0]->realVars[120] /* pwLine.is.im variable */:data->localData[0]->realVars[122] /* pwLine.vs.im variable */ - data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[292]) * (data->localData[0]->realVars[120] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[123] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[289]) - ((data->localData[0]->realVars[122] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[290]))) + (data->simulationInfo->realParameter[291]) * (data->localData[0]->realVars[121] /* pwLine.is.re variable */ + (data->localData[0]->realVars[122] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[289]) - ((data->localData[0]->realVars[123] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[290])))));

  res[20] = (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) + ((-data->localData[0]->realVars[135] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[49] /* constantLoad.Q variable */;

  res[21] = (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[48] /* constantLoad.P variable */;

  tmp50 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[293]);
  tmp51 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[294]);
  res[22] = ((tmp50 && tmp51)?data->localData[0]->realVars[119] /* pwLine.ir.re variable */:data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[123] /* pwLine.vs.re variable */ - ((data->simulationInfo->realParameter[292]) * (data->localData[0]->realVars[119] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[289]) - ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[290]))) - ((data->simulationInfo->realParameter[291]) * (data->localData[0]->realVars[118] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[135] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[289]) - ((data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[290]))))));

  tmp52 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[293]);
  tmp53 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[294]);
  res[23] = ((tmp52 && tmp53)?data->localData[0]->realVars[118] /* pwLine.ir.im variable */:data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[122] /* pwLine.vs.im variable */ - ((data->simulationInfo->realParameter[292]) * (data->localData[0]->realVars[118] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[135] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[289]) - ((data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[290]))) + (data->simulationInfo->realParameter[291]) * (data->localData[0]->realVars[119] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[289]) - ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[290])))));

  tmp54 = data->localData[0]->realVars[123] /* pwLine.vs.re variable */;
  tmp55 = data->localData[0]->realVars[122] /* pwLine.vs.im variable */;
  res[24] = sqrt((tmp54 * tmp54) + (tmp55 * tmp55)) - data->localData[0]->realVars[58] /* eSST1A.ECOMP variable */;

  tmp56 = Greater(data->localData[0]->realVars[73] /* eSST1A.hV_GATE1.p variable */,data->simulationInfo->realParameter[36]);
  res[25] = (tmp56?data->simulationInfo->realParameter[36]:data->localData[0]->realVars[73] /* eSST1A.hV_GATE1.p variable */) - data->localData[0]->realVars[83] /* eSST1A.lV_GATE.p variable */;

  res[26] = (data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[217]) + (data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */) * (data->simulationInfo->realParameter[215]) - data->localData[0]->realVars[100] /* gENROE.PSIppd variable */;

  res[27] = data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[246] - data->simulationInfo->realParameter[247]) * (data->localData[0]->realVars[108] /* gENROE.id variable */) + (-data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */) - ((data->localData[0]->realVars[22] /* der(gENROE.PSIkd) STATE_DER */) * (data->simulationInfo->realParameter[239]));

  res[28] = data->localData[0]->realVars[101] /* gENROE.PSIppq variable */ - ((data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */) * (data->simulationInfo->realParameter[216])) - ((data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[218]));

  res[29] = data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[251] - data->simulationInfo->realParameter[246]) * (data->localData[0]->realVars[109] /* gENROE.iq variable */) + (-data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */) - ((data->localData[0]->realVars[23] /* der(gENROE.PSIkq) STATE_DER */) * (data->simulationInfo->realParameter[240]));
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS681(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+30] = {0,4,4,3,3,4,4,4,4,3,3,4,4,6,6,2,2,6,6,6,6,5,5,7,7,2,3,11,11,8,8};
  const int rowIndex[151] = {20,21,22,23,9,13,20,21,6,7,8,4,5,6,20,21,22,23,2,3,20,21,2,3,20,21,9,13,20,21,1,7,8,1,4,5,11,12,14,15,11,12,14,15,0,10,11,12,14,15,0,10,11,12,14,15,26,27,28,29,16,17,26,27,28,29,16,17,26,27,28,29,16,17,18,19,26,27,16,17,18,19,28,29,16,18,19,23,24,17,18,19,22,24,0,7,11,12,13,14,15,8,9,10,11,12,14,15,24,25,25,26,27,2,3,5,9,13,15,19,20,21,22,23,2,3,4,9,13,14,18,20,21,22,23,1,2,4,5,6,7,8,12,1,3,4,5,6,7,8,11};
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
  inSysData->sparsePattern.colorCols[27] = 2;
  inSysData->sparsePattern.colorCols[26] = 3;
  inSysData->sparsePattern.colorCols[21] = 4;
  inSysData->sparsePattern.colorCols[23] = 4;
  inSysData->sparsePattern.colorCols[7] = 5;
  inSysData->sparsePattern.colorCols[20] = 5;
  inSysData->sparsePattern.colorCols[28] = 5;
  inSysData->sparsePattern.colorCols[6] = 6;
  inSysData->sparsePattern.colorCols[19] = 6;
  inSysData->sparsePattern.colorCols[22] = 6;
  inSysData->sparsePattern.colorCols[25] = 6;
  inSysData->sparsePattern.colorCols[5] = 7;
  inSysData->sparsePattern.colorCols[13] = 7;
  inSysData->sparsePattern.colorCols[18] = 7;
  inSysData->sparsePattern.colorCols[4] = 8;
  inSysData->sparsePattern.colorCols[12] = 8;
  inSysData->sparsePattern.colorCols[17] = 8;
  inSysData->sparsePattern.colorCols[1] = 9;
  inSysData->sparsePattern.colorCols[3] = 9;
  inSysData->sparsePattern.colorCols[8] = 9;
  inSysData->sparsePattern.colorCols[11] = 9;
  inSysData->sparsePattern.colorCols[16] = 9;
  inSysData->sparsePattern.colorCols[0] = 10;
  inSysData->sparsePattern.colorCols[2] = 10;
  inSysData->sparsePattern.colorCols[9] = 10;
  inSysData->sparsePattern.colorCols[10] = 10;
  inSysData->sparsePattern.colorCols[14] = 10;
  inSysData->sparsePattern.colorCols[15] = 10;
  inSysData->sparsePattern.colorCols[24] = 10;
}
void initializeStaticDataNLS681(void *inData, threadData_t *threadData, void *inSystemData)
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
  /* static nls data for pwLine4.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[153].attribute /* pwLine4.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[153].attribute /* pwLine4.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[153].attribute /* pwLine4.is.re */.max;
  /* static nls data for pwLine3.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[141].attribute /* pwLine3.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[141].attribute /* pwLine3.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[141].attribute /* pwLine3.ir.re */.max;
  /* static nls data for pwLine.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[118].attribute /* pwLine.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[118].attribute /* pwLine.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[118].attribute /* pwLine.ir.im */.max;
  /* static nls data for pwLine3.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[142].attribute /* pwLine3.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[142].attribute /* pwLine3.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[142].attribute /* pwLine3.is.im */.max;
  /* static nls data for pwLine3.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[143].attribute /* pwLine3.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[143].attribute /* pwLine3.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[143].attribute /* pwLine3.is.re */.max;
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
  /* static nls data for gENROE.Epq */
  sysData->nominal[i] = data->modelData->realVarsData[8].attribute /* gENROE.Epq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[8].attribute /* gENROE.Epq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[8].attribute /* gENROE.Epq */.max;
  /* static nls data for gENROE.Epd */
  sysData->nominal[i] = data->modelData->realVarsData[7].attribute /* gENROE.Epd */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[7].attribute /* gENROE.Epd */.min;
  sysData->max[i++]   = data->modelData->realVarsData[7].attribute /* gENROE.Epd */.max;
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
  /* static nls data for pwLine.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[122].attribute /* pwLine.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[122].attribute /* pwLine.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[122].attribute /* pwLine.vs.im */.max;
  /* static nls data for pwLine.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[123].attribute /* pwLine.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[123].attribute /* pwLine.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[123].attribute /* pwLine.vs.re */.max;
  /* static nls data for pwLine1.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[132].attribute /* pwLine1.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[132].attribute /* pwLine1.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[132].attribute /* pwLine1.vr.im */.max;
  /* static nls data for pwLine1.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[133].attribute /* pwLine1.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[133].attribute /* pwLine1.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[133].attribute /* pwLine1.vr.re */.max;
  /* static nls data for eSST1A.TransducerDelay.y_start */
  sysData->nominal[i] = data->modelData->realParameterData[101].attribute /* eSST1A.TransducerDelay.y_start */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[101].attribute /* eSST1A.TransducerDelay.y_start */.min;
  sysData->max[i++]   = data->modelData->realParameterData[101].attribute /* eSST1A.TransducerDelay.y_start */.max;
  /* static nls data for eSST1A.VA0 */
  sysData->nominal[i] = data->modelData->realParameterData[102].attribute /* eSST1A.VA0 */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[102].attribute /* eSST1A.VA0 */.min;
  sysData->max[i++]   = data->modelData->realParameterData[102].attribute /* eSST1A.VA0 */.max;
  /* static nls data for pwLine1.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[134].attribute /* pwLine1.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[134].attribute /* pwLine1.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[134].attribute /* pwLine1.vs.im */.max;
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
  /* initial sparse pattern */
  initializeSparsePatternNLS681(sysData);
}

void getIterationVarsNLS681(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[119] /* pwLine.ir.re variable */;
  array[1] = data->localData[0]->realVars[131] /* pwLine1.is.re variable */;
  array[2] = data->localData[0]->realVars[153] /* pwLine4.is.re variable */;
  array[3] = data->localData[0]->realVars[141] /* pwLine3.ir.re variable */;
  array[4] = data->localData[0]->realVars[118] /* pwLine.ir.im variable */;
  array[5] = data->localData[0]->realVars[142] /* pwLine3.is.im variable */;
  array[6] = data->localData[0]->realVars[143] /* pwLine3.is.re variable */;
  array[7] = data->localData[0]->realVars[130] /* pwLine1.is.im variable */;
  array[8] = data->localData[0]->realVars[152] /* pwLine4.is.im variable */;
  array[9] = data->localData[0]->realVars[140] /* pwLine3.ir.im variable */;
  array[10] = data->localData[0]->realVars[151] /* pwLine4.ir.re variable */;
  array[11] = data->localData[0]->realVars[128] /* pwLine1.ir.im variable */;
  array[12] = data->localData[0]->realVars[89] /* gENCLS.iq variable */;
  array[13] = data->localData[0]->realVars[88] /* gENCLS.id variable */;
  array[14] = data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */;
  array[15] = data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */;
  array[16] = data->localData[0]->realVars[100] /* gENROE.PSIppd variable */;
  array[17] = data->localData[0]->realVars[101] /* gENROE.PSIppq variable */;
  array[18] = data->localData[0]->realVars[108] /* gENROE.id variable */;
  array[19] = data->localData[0]->realVars[109] /* gENROE.iq variable */;
  array[20] = data->localData[0]->realVars[122] /* pwLine.vs.im variable */;
  array[21] = data->localData[0]->realVars[123] /* pwLine.vs.re variable */;
  array[22] = data->localData[0]->realVars[132] /* pwLine1.vr.im variable */;
  array[23] = data->localData[0]->realVars[133] /* pwLine1.vr.re variable */;
  array[24] = data->simulationInfo->realParameter[101];
  array[25] = data->simulationInfo->realParameter[102];
  array[26] = data->localData[0]->realVars[134] /* pwLine1.vs.im variable */;
  array[27] = data->localData[0]->realVars[135] /* pwLine1.vs.re variable */;
  array[28] = data->localData[0]->realVars[144] /* pwLine3.vr.im variable */;
  array[29] = data->localData[0]->realVars[145] /* pwLine3.vr.re variable */;
}


/* inner equations */

/*
equation index: 19
type: SIMPLE_ASSIGN
constantLoad._v = sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
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
constantLoad._kI = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (-1.0 + constantLoad.b2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_20(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,20};
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
    tmp2 = -1.0 + data->simulationInfo->realParameter[65];
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
    tmp9 = data->simulationInfo->realParameter[65];
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
    tmp16 = (data->simulationInfo->realParameter[59]) * ((data->simulationInfo->realParameter[65]) * ((tmp3) * (exp(((-data->simulationInfo->realParameter[59])) * (tmp10)))));
  }
  else
  {
    tmp16 = 1.0;
  }
  data->localData[0]->realVars[51] /* constantLoad.kI variable */ = tmp16;
  TRACE_POP
}
/*
equation index: 21
type: SIMPLE_ASSIGN
constantLoad._kP = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a0 + constantLoad.a1 * cos(constantLoad.v * constantLoad.wp) + constantLoad.b1 * sin(constantLoad.v * constantLoad.wp) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_21(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,21};
  modelica_boolean tmp0;
  tmp0 = Less(data->localData[0]->realVars[55] /* constantLoad.v variable */,data->simulationInfo->realParameter[38]);
  data->localData[0]->realVars[52] /* constantLoad.kP variable */ = (tmp0?data->simulationInfo->realParameter[57] + (data->simulationInfo->realParameter[58]) * (cos((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[78]))) + (data->simulationInfo->realParameter[64]) * (sin((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[78]))):1.0);
  TRACE_POP
}
/*
equation index: 22
type: SIMPLE_ASSIGN
constantLoad._Q = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.im
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
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[74]);
  tmp1 = LessEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[74] + data->simulationInfo->realParameter[68]);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[41]) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[45]) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[43] + data->simulationInfo->realParameter[67]);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[41]) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[45]) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[43]);
  }
  data->localData[0]->realVars[49] /* constantLoad.Q variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 23
type: SIMPLE_ASSIGN
constantLoad._P = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.re
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
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[74]);
  tmp1 = LessEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[74] + data->simulationInfo->realParameter[68]);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[42]) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[46]) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[44] + data->simulationInfo->realParameter[66]);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[42]) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[46]) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[44]);
  }
  data->localData[0]->realVars[48] /* constantLoad.P variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 24
type: SIMPLE_ASSIGN
eSST1A._add2._y = eSST1A.add2.k1 * eSST1A.Vref1.k + eSST1A.add2.k2 * eSST1A.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_24(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,24};
  data->localData[0]->realVars[63] /* eSST1A.add2.y variable */ = (data->simulationInfo->realParameter[112]) * (data->simulationInfo->realParameter[111]) + (data->simulationInfo->realParameter[113]) * (data->localData[0]->realVars[62] /* eSST1A.XADIFD variable */);
  TRACE_POP
}
/*
equation index: 25
type: SIMPLE_ASSIGN
eSST1A._imGain._y = eSST1A.imGain.k * eSST1A.add2.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_25(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,25};
  data->localData[0]->realVars[75] /* eSST1A.imGain.y variable */ = (data->simulationInfo->realParameter[126]) * (data->localData[0]->realVars[63] /* eSST1A.add2.y variable */);
  TRACE_POP
}
/*
equation index: 26
type: SIMPLE_ASSIGN
eSST1A._add3_2._u3 = homotopy(smooth(0, if eSST1A.imGain.y > eSST1A.imLimited1.uMax then eSST1A.imLimited1.uMax else if eSST1A.imGain.y < eSST1A.imLimited1.uMin then eSST1A.imLimited1.uMin else eSST1A.imGain.y), eSST1A.imGain.y)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_26(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,26};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  tmp0 = Greater(data->localData[0]->realVars[75] /* eSST1A.imGain.y variable */,data->simulationInfo->realParameter[164]);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->simulationInfo->realParameter[164];
  }
  else
  {
    tmp1 = Less(data->localData[0]->realVars[75] /* eSST1A.imGain.y variable */,data->simulationInfo->realParameter[165]);
    tmp3 = (tmp1?data->simulationInfo->realParameter[165]:data->localData[0]->realVars[75] /* eSST1A.imGain.y variable */);
  }
  data->localData[0]->realVars[69] /* eSST1A.add3_2.u3 variable */ = homotopy(tmp3, data->localData[0]->realVars[75] /* eSST1A.imGain.y variable */);
  TRACE_POP
}
/*
equation index: 27
type: SIMPLE_ASSIGN
eSST1A._add3._u1 = eSST1A.imGain3.k * eSST1A.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_27(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,27};
  data->localData[0]->realVars[64] /* eSST1A.add3.u1 variable */ = (data->simulationInfo->realParameter[129]) * (data->localData[0]->realVars[62] /* eSST1A.XADIFD variable */);
  TRACE_POP
}
/*
equation index: 28
type: SIMPLE_ASSIGN
eSST1A._EFD = eSST1A.XADIFD + $DER.gENROE.Epq * gENROE.Tpd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_28(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,28};
  data->localData[0]->realVars[59] /* eSST1A.EFD variable */ = data->localData[0]->realVars[62] /* eSST1A.XADIFD variable */ + (data->localData[0]->realVars[21] /* der(gENROE.Epq) STATE_DER */) * (data->simulationInfo->realParameter[238]);
  TRACE_POP
}
/*
equation index: 29
type: SIMPLE_ASSIGN
eSST1A._IFD0 = eSST1A.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_29(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,29};
  data->simulationInfo->realParameter[83] = data->localData[0]->realVars[62] /* eSST1A.XADIFD variable */;
  TRACE_POP
}
/*
equation index: 30
type: SIMPLE_ASSIGN
eSST1A._VA0 = eSST1A.Efd0 + eSST1A.K_LR * (eSST1A.IFD0 - eSST1A.I_LR)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_30(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,30};
  data->simulationInfo->realParameter[102] = data->simulationInfo->realParameter[82] + (data->simulationInfo->realParameter[88]) * (data->simulationInfo->realParameter[83] - data->simulationInfo->realParameter[84]);
  TRACE_POP
}
/*
equation index: 31
type: SIMPLE_ASSIGN
eSST1A._imLeadLag._y_start = eSST1A.VA0 / eSST1A.K_A
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_31(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,31};
  data->simulationInfo->realParameter[145] = DIVISION_SIM(data->simulationInfo->realParameter[102],data->simulationInfo->realParameter[85],"eSST1A.K_A",equationIndexes);
  TRACE_POP
}
/*
equation index: 32
type: SIMPLE_ASSIGN
eSST1A._imLeadLag1._y_start = eSST1A.VA0 / eSST1A.K_A
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_32(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,32};
  data->simulationInfo->realParameter[161] = DIVISION_SIM(data->simulationInfo->realParameter[102],data->simulationInfo->realParameter[85],"eSST1A.K_A",equationIndexes);
  TRACE_POP
}
/*
equation index: 33
type: SIMPLE_ASSIGN
eSST1A._imLeadLag._TF._y_start = eSST1A.imLeadLag.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_33(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,33};
  data->simulationInfo->realParameter[143] = data->simulationInfo->realParameter[145];
  TRACE_POP
}
/*
equation index: 34
type: SIMPLE_ASSIGN
eSST1A._imLeadLag._TF._y = eSST1A.imLeadLag.TF.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_34(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,34};
  data->localData[0]->realVars[78] /* eSST1A.imLeadLag.TF.y variable */ = data->simulationInfo->realParameter[143];
  TRACE_POP
}
/*
equation index: 35
type: SIMPLE_ASSIGN
eSST1A._imLeadLag1._TF._y_start = eSST1A.imLeadLag1.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_35(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,35};
  data->simulationInfo->realParameter[159] = data->simulationInfo->realParameter[161];
  TRACE_POP
}
/*
equation index: 36
type: SIMPLE_ASSIGN
eSST1A._imLeadLag1._TF._y = eSST1A.imLeadLag1.TF.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_36(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,36};
  data->localData[0]->realVars[81] /* eSST1A.imLeadLag1.TF.y variable */ = data->simulationInfo->realParameter[159];
  TRACE_POP
}
/*
equation index: 37
type: SIMPLE_ASSIGN
eSST1A._simpleLagLim._y_start = eSST1A.VA0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_37(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,37};
  data->simulationInfo->realParameter[171] = data->simulationInfo->realParameter[102];
  TRACE_POP
}
/*
equation index: 38
type: SIMPLE_ASSIGN
$START._eSST1A._add3_2._u2 = eSST1A.simpleLagLim.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_38(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,38};
  data->modelData->realVarsData[68].attribute /* eSST1A.add3_2.u2 variable */.start = data->simulationInfo->realParameter[171];
    data->localData[0]->realVars[68] /* eSST1A.add3_2.u2 variable */ = data->modelData->realVarsData[68].attribute /* eSST1A.add3_2.u2 variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[68].info /* eSST1A.add3_2.u2 */.name, (modelica_real) data->localData[0]->realVars[68] /* eSST1A.add3_2.u2 variable */);
  TRACE_POP
}
/*
equation index: 39
type: SIMPLE_ASSIGN
eSST1A._simpleLagLim._state = eSST1A.simpleLagLim.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_39(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,39};
  data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[171];
  TRACE_POP
}
/*
equation index: 40
type: SIMPLE_ASSIGN
eSST1A._imGain1._y = eSST1A.imGain1.k * eSST1A.ECOMP
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_40(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,40};
  data->localData[0]->realVars[76] /* eSST1A.imGain1.y variable */ = (data->simulationInfo->realParameter[127]) * (data->localData[0]->realVars[58] /* eSST1A.ECOMP variable */);
  TRACE_POP
}
/*
equation index: 41
type: SIMPLE_ASSIGN
eSST1A._add3._u2 = eSST1A.imGain2.k * eSST1A.ECOMP
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_41(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,41};
  data->localData[0]->realVars[65] /* eSST1A.add3.u2 variable */ = (data->simulationInfo->realParameter[128]) * (data->localData[0]->realVars[58] /* eSST1A.ECOMP variable */);
  TRACE_POP
}
/*
equation index: 42
type: SIMPLE_ASSIGN
eSST1A._add3._y = eSST1A.add3.k1 * eSST1A.add3.u1 + eSST1A.add3.k2 * eSST1A.add3.u2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_42(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,42};
  data->localData[0]->realVars[66] /* eSST1A.add3.y variable */ = (data->simulationInfo->realParameter[114]) * (data->localData[0]->realVars[64] /* eSST1A.add3.u1 variable */) + (data->simulationInfo->realParameter[115]) * (data->localData[0]->realVars[65] /* eSST1A.add3.u2 variable */);
  TRACE_POP
}
/*
equation index: 43
type: SIMPLE_ASSIGN
eSST1A._ECOMP0 = eSST1A.ECOMP
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_43(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,43};
  data->simulationInfo->realParameter[81] = data->localData[0]->realVars[58] /* eSST1A.ECOMP variable */;
  TRACE_POP
}
/*
equation index: 44
type: SIMPLE_ASSIGN
eSST1A._V_REF = eSST1A.VA0 / eSST1A.K_A + eSST1A.ECOMP0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_44(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,44};
  data->simulationInfo->realParameter[107] = DIVISION_SIM(data->simulationInfo->realParameter[102],data->simulationInfo->realParameter[85],"eSST1A.K_A",equationIndexes) + data->simulationInfo->realParameter[81];
  TRACE_POP
}
/*
equation index: 45
type: SIMPLE_ASSIGN
eSST1A._TransducerDelay._y_start = eSST1A.ECOMP0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_45(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,45};
  data->simulationInfo->realParameter[101] = data->simulationInfo->realParameter[81];
  TRACE_POP
}
/*
equation index: 46
type: SIMPLE_ASSIGN
$START._eSST1A._DiffV._u2 = eSST1A.TransducerDelay.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_46(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,46};
  data->modelData->realVarsData[56].attribute /* eSST1A.DiffV.u2 variable */.start = data->simulationInfo->realParameter[101];
    data->localData[0]->realVars[56] /* eSST1A.DiffV.u2 variable */ = data->modelData->realVarsData[56].attribute /* eSST1A.DiffV.u2 variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[56].info /* eSST1A.DiffV.u2 */.name, (modelica_real) data->localData[0]->realVars[56] /* eSST1A.DiffV.u2 variable */);
  TRACE_POP
}
/*
equation index: 47
type: SIMPLE_ASSIGN
$START._eSST1A._TransducerDelay._state = eSST1A.TransducerDelay.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_47(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,47};
  data->modelData->realVarsData[0].attribute /* eSST1A.TransducerDelay.state STATE(1) */.start = data->simulationInfo->realParameter[101];
    data->localData[0]->realVars[0] /* eSST1A.TransducerDelay.state STATE(1) */ = data->modelData->realVarsData[0].attribute /* eSST1A.TransducerDelay.state STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[0].info /* eSST1A.TransducerDelay.state */.name, (modelica_real) data->localData[0]->realVars[0] /* eSST1A.TransducerDelay.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 48
type: SIMPLE_ASSIGN
eSST1A._TransducerDelay._state = eSST1A.TransducerDelay.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_48(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,48};
  data->localData[0]->realVars[0] /* eSST1A.TransducerDelay.state STATE(1) */ = data->simulationInfo->realParameter[101];
  TRACE_POP
}
/*
equation index: 49
type: SIMPLE_ASSIGN
eSST1A._DiffV._u2 = if abs(eSST1A.TransducerDelay.T) <= 1e-15 then eSST1A.ECOMP * eSST1A.TransducerDelay.K else eSST1A.TransducerDelay.state
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_49(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,49};
  modelica_boolean tmp0;
  tmp0 = LessEq(fabs(data->simulationInfo->realParameter[99]),1e-15);
  data->localData[0]->realVars[56] /* eSST1A.DiffV.u2 variable */ = (tmp0?(data->localData[0]->realVars[58] /* eSST1A.ECOMP variable */) * (data->simulationInfo->realParameter[98]):data->localData[0]->realVars[0] /* eSST1A.TransducerDelay.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 50
type: SIMPLE_ASSIGN
eSST1A._VoltageReference._k = eSST1A.V_REF
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_50(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,50};
  data->simulationInfo->realParameter[110] = data->simulationInfo->realParameter[107];
  TRACE_POP
}
/*
equation index: 51
type: SIMPLE_ASSIGN
eSST1A._DiffV._y = eSST1A.DiffV.k1 * eSST1A.VoltageReference.k + eSST1A.DiffV.k2 * eSST1A.DiffV.u2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_51(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,51};
  data->localData[0]->realVars[57] /* eSST1A.DiffV.y variable */ = (data->simulationInfo->realParameter[79]) * (data->simulationInfo->realParameter[110]) + (data->simulationInfo->realParameter[80]) * (data->localData[0]->realVars[56] /* eSST1A.DiffV.u2 variable */);
  TRACE_POP
}
/*
equation index: 52
type: SIMPLE_ASSIGN
eSST1A._add3_1._y = eSST1A.add3_1.k1 * eSST1A.imDerivativeLag.y + eSST1A.add3_1.k2 * eSST1A.DiffV.y + eSST1A.add3_1.k3 * eSST1A.Limiters.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_52(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,52};
  data->localData[0]->realVars[67] /* eSST1A.add3_1.y variable */ = (data->simulationInfo->realParameter[116]) * (data->localData[0]->realVars[74] /* eSST1A.imDerivativeLag.y variable */) + (data->simulationInfo->realParameter[117]) * (data->localData[0]->realVars[57] /* eSST1A.DiffV.y variable */) + (data->simulationInfo->realParameter[118]) * (data->localData[0]->realVars[61] /* eSST1A.Limiters.y variable */);
  TRACE_POP
}
/*
equation index: 53
type: SIMPLE_ASSIGN
eSST1A._hV_GATE._n1 = homotopy(smooth(0, if eSST1A.add3_1.y > eSST1A.imLimited.uMax then eSST1A.imLimited.uMax else if eSST1A.add3_1.y < eSST1A.imLimited.uMin then eSST1A.imLimited.uMin else eSST1A.add3_1.y), eSST1A.add3_1.y)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_53(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,53};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  tmp0 = Greater(data->localData[0]->realVars[67] /* eSST1A.add3_1.y variable */,data->simulationInfo->realParameter[162]);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->simulationInfo->realParameter[162];
  }
  else
  {
    tmp1 = Less(data->localData[0]->realVars[67] /* eSST1A.add3_1.y variable */,data->simulationInfo->realParameter[163]);
    tmp3 = (tmp1?data->simulationInfo->realParameter[163]:data->localData[0]->realVars[67] /* eSST1A.add3_1.y variable */);
  }
  data->localData[0]->realVars[71] /* eSST1A.hV_GATE.n1 variable */ = homotopy(tmp3, data->localData[0]->realVars[67] /* eSST1A.add3_1.y variable */);
  TRACE_POP
}
/*
equation index: 54
type: SIMPLE_ASSIGN
eSST1A._hV_GATE._p = if eSST1A.hV_GATE.n1 < const1.k then const1.k else eSST1A.hV_GATE.n1
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_54(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,54};
  modelica_boolean tmp0;
  tmp0 = Less(data->localData[0]->realVars[71] /* eSST1A.hV_GATE.n1 variable */,data->simulationInfo->realParameter[35]);
  data->localData[0]->realVars[72] /* eSST1A.hV_GATE.p variable */ = (tmp0?data->simulationInfo->realParameter[35]:data->localData[0]->realVars[71] /* eSST1A.hV_GATE.n1 variable */);
  TRACE_POP
}
/*
equation index: 55
type: SIMPLE_ASSIGN
eSST1A._imLeadLag._y = if abs(eSST1A.imLeadLag.T1 - eSST1A.imLeadLag.T2) < 1e-15 then eSST1A.imLeadLag.K * eSST1A.hV_GATE.p else eSST1A.imLeadLag.TF.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_55(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,55};
  modelica_boolean tmp0;
  tmp0 = Less(fabs(data->simulationInfo->realParameter[131] - data->simulationInfo->realParameter[132]),1e-15);
  data->localData[0]->realVars[79] /* eSST1A.imLeadLag.y variable */ = (tmp0?(data->simulationInfo->realParameter[130]) * (data->localData[0]->realVars[72] /* eSST1A.hV_GATE.p variable */):data->localData[0]->realVars[78] /* eSST1A.imLeadLag.TF.y variable */);
  TRACE_POP
}
/*
equation index: 56
type: SIMPLE_ASSIGN
eSST1A._imLeadLag1._y = if abs(eSST1A.imLeadLag1.T1 - eSST1A.imLeadLag1.T2) < 1e-15 then eSST1A.imLeadLag1.K * eSST1A.imLeadLag.y else eSST1A.imLeadLag1.TF.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_56(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,56};
  modelica_boolean tmp0;
  tmp0 = Less(fabs(data->simulationInfo->realParameter[147] - data->simulationInfo->realParameter[148]),1e-15);
  data->localData[0]->realVars[82] /* eSST1A.imLeadLag1.y variable */ = (tmp0?(data->simulationInfo->realParameter[146]) * (data->localData[0]->realVars[79] /* eSST1A.imLeadLag.y variable */):data->localData[0]->realVars[81] /* eSST1A.imLeadLag1.TF.y variable */);
  TRACE_POP
}
/*
equation index: 57
type: SIMPLE_ASSIGN
eSST1A._add3_2._u2 = if abs(eSST1A.simpleLagLim.T) <= 1e-15 then max(min(eSST1A.imLeadLag1.y * eSST1A.simpleLagLim.K, eSST1A.simpleLagLim.outMax), eSST1A.simpleLagLim.outMin) else max(min(eSST1A.simpleLagLim.state, eSST1A.simpleLagLim.outMax), eSST1A.simpleLagLim.outMin)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_57(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,57};
  modelica_boolean tmp0;
  tmp0 = LessEq(fabs(data->simulationInfo->realParameter[167]),1e-15);
  data->localData[0]->realVars[68] /* eSST1A.add3_2.u2 variable */ = (tmp0?fmax(fmin((data->localData[0]->realVars[82] /* eSST1A.imLeadLag1.y variable */) * (data->simulationInfo->realParameter[166]),data->simulationInfo->realParameter[169]),data->simulationInfo->realParameter[170]):fmax(fmin(data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */,data->simulationInfo->realParameter[169]),data->simulationInfo->realParameter[170]));
  TRACE_POP
}
/*
equation index: 58
type: SIMPLE_ASSIGN
eSST1A._add3_2._y = eSST1A.add3_2.k1 * const.k + eSST1A.add3_2.k2 * eSST1A.add3_2.u2 + eSST1A.add3_2.k3 * eSST1A.add3_2.u3
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_58(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,58};
  data->localData[0]->realVars[70] /* eSST1A.add3_2.y variable */ = (data->simulationInfo->realParameter[119]) * (data->simulationInfo->realParameter[34]) + (data->simulationInfo->realParameter[120]) * (data->localData[0]->realVars[68] /* eSST1A.add3_2.u2 variable */) + (data->simulationInfo->realParameter[121]) * (data->localData[0]->realVars[69] /* eSST1A.add3_2.u3 variable */);
  TRACE_POP
}
/*
equation index: 59
type: SIMPLE_ASSIGN
eSST1A._hV_GATE1._p = if eSST1A.add3_2.y < const1.k then const1.k else eSST1A.add3_2.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_59(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,59};
  modelica_boolean tmp0;
  tmp0 = Less(data->localData[0]->realVars[70] /* eSST1A.add3_2.y variable */,data->simulationInfo->realParameter[35]);
  data->localData[0]->realVars[73] /* eSST1A.hV_GATE1.p variable */ = (tmp0?data->simulationInfo->realParameter[35]:data->localData[0]->realVars[70] /* eSST1A.add3_2.y variable */);
  TRACE_POP
}
/*
equation index: 60
type: SIMPLE_ASSIGN
eSST1A._lV_GATE._p = if eSST1A.hV_GATE1.p > const2.k then const2.k else eSST1A.hV_GATE1.p
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_60(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,60};
  modelica_boolean tmp0;
  tmp0 = Greater(data->localData[0]->realVars[73] /* eSST1A.hV_GATE1.p variable */,data->simulationInfo->realParameter[36]);
  data->localData[0]->realVars[83] /* eSST1A.lV_GATE.p variable */ = (tmp0?data->simulationInfo->realParameter[36]:data->localData[0]->realVars[73] /* eSST1A.hV_GATE1.p variable */);
  TRACE_POP
}
/*
equation index: 61
type: SIMPLE_ASSIGN
pwLine._is._im = (sin(gENROE.delta) * gENROE.iq - cos(gENROE.delta) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_61(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,61};
  data->localData[0]->realVars[120] /* pwLine.is.im variable */ = ((sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[109] /* gENROE.iq variable */) - ((cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[108] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[198]);
  TRACE_POP
}
/*
equation index: 62
type: SIMPLE_ASSIGN
pwLine._is._re = (cos(gENROE.delta) * gENROE.iq - (-sin(gENROE.delta)) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_62(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,62};
  data->localData[0]->realVars[121] /* pwLine.is.re variable */ = ((cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[109] /* gENROE.iq variable */) - (((-sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */))) * (data->localData[0]->realVars[108] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[198]);
  TRACE_POP
}
/*
equation index: 63
type: SIMPLE_ASSIGN
gENROE._PSIq = (-gENROE.PSIppq) - gENROE.Xppq * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_63(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,63};
  data->localData[0]->realVars[102] /* gENROE.PSIq variable */ = (-data->localData[0]->realVars[101] /* gENROE.PSIppq variable */) - ((data->simulationInfo->realParameter[250]) * (data->localData[0]->realVars[109] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 64
type: SIMPLE_ASSIGN
gENROE._ud = (-gENROE.PSIq) - gENROE.R_a * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_64(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,64};
  data->localData[0]->realVars[110] /* gENROE.ud variable */ = (-data->localData[0]->realVars[102] /* gENROE.PSIq variable */) - ((data->simulationInfo->realParameter[232]) * (data->localData[0]->realVars[108] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 65
type: SIMPLE_ASSIGN
gENROE._PSIpp = sqrt(gENROE.PSIppd ^ 2.0 + gENROE.PSIppq ^ 2.0)
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
gENROE._PSId = gENROE.PSIppd - gENROE.Xppd * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_66(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,66};
  data->localData[0]->realVars[98] /* gENROE.PSId variable */ = data->localData[0]->realVars[100] /* gENROE.PSIppd variable */ - ((data->simulationInfo->realParameter[249]) * (data->localData[0]->realVars[108] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 67
type: SIMPLE_ASSIGN
gENROE._uq = gENROE.PSId - gENROE.R_a * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_67(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,67};
  data->localData[0]->realVars[111] /* gENROE.uq variable */ = data->localData[0]->realVars[98] /* gENROE.PSId variable */ - ((data->simulationInfo->realParameter[232]) * (data->localData[0]->realVars[109] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 68
type: SIMPLE_ASSIGN
gENROE._PSIkd = ((gENROE.Epq + (gENROE.Xl - gENROE.Xpd) * gENROE.id) * gENROE.K1d + gENROE.Epq + gENROE.id * (gENROE.Xd - gENROE.Xpd) + OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2) * gENROE.PSIppd - eSST1A.XADIFD) / gENROE.K1d
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_68(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,68};
  data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */ = DIVISION_SIM((data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[246] - data->simulationInfo->realParameter[247]) * (data->localData[0]->realVars[108] /* gENROE.id variable */)) * (data->simulationInfo->realParameter[211]) + data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->localData[0]->realVars[108] /* gENROE.id variable */) * (data->simulationInfo->realParameter[245] - data->simulationInfo->realParameter[247]) + (omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[99] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[235], data->simulationInfo->realParameter[236], 1.0, 1.2)) * (data->localData[0]->realVars[100] /* gENROE.PSIppd variable */) - data->localData[0]->realVars[62] /* eSST1A.XADIFD variable */,data->simulationInfo->realParameter[211],"gENROE.K1d",equationIndexes);
  TRACE_POP
}
/*
equation index: 69
type: SIMPLE_ASSIGN
gENROE._Epd = (gENROE.XaqIlq - (((gENROE.Xpq - gENROE.Xl) * gENROE.iq - gENROE.PSIkq) * gENROE.K1q + gENROE.iq * (gENROE.Xpq - gENROE.Xq) + OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2) * gENROE.PSIppq * (gENROE.Xq - gENROE.Xl) / (gENROE.Xd - gENROE.Xl))) / (1.0 + gENROE.K1q)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_69(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,69};
  data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ = DIVISION_SIM(data->localData[0]->realVars[105] /* gENROE.XaqIlq variable */ - (((data->simulationInfo->realParameter[251] - data->simulationInfo->realParameter[246]) * (data->localData[0]->realVars[109] /* gENROE.iq variable */) - data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[212]) + (data->localData[0]->realVars[109] /* gENROE.iq variable */) * (data->simulationInfo->realParameter[251] - data->simulationInfo->realParameter[252]) + (omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[99] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[235], data->simulationInfo->realParameter[236], 1.0, 1.2)) * ((data->localData[0]->realVars[101] /* gENROE.PSIppq variable */) * (DIVISION_SIM(data->simulationInfo->realParameter[252] - data->simulationInfo->realParameter[246],data->simulationInfo->realParameter[245] - data->simulationInfo->realParameter[246],"gENROE.Xd - gENROE.Xl",equationIndexes)))),1.0 + data->simulationInfo->realParameter[212],"1.0 + gENROE.K1q",equationIndexes);
  TRACE_POP
}
/*
equation index: 70
type: SIMPLE_ASSIGN
gENCLS._p._ir = ((-sin(gENCLS.delta)) * gENCLS.id - cos(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_70(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,70};
  data->localData[0]->realVars[92] /* gENCLS.p.ir variable */ = (((-sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[88] /* gENCLS.id variable */) - ((cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[89] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[172]);
  TRACE_POP
}
/*
equation index: 71
type: SIMPLE_ASSIGN
gENCLS._p._ii = (cos(gENCLS.delta) * gENCLS.id - sin(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_71(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,71};
  data->localData[0]->realVars[91] /* gENCLS.p.ii variable */ = ((cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[88] /* gENCLS.id variable */) - ((sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[89] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[172]);
  TRACE_POP
}
/*
equation index: 72
type: SIMPLE_ASSIGN
gENCLS._vq = gENCLS.eq + (-gENCLS.R_a) * gENCLS.iq - gENCLS.X_d * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_72(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,72};
  data->localData[0]->realVars[94] /* gENCLS.vq variable */ = data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */ + ((-data->simulationInfo->realParameter[178])) * (data->localData[0]->realVars[89] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[181]) * (data->localData[0]->realVars[88] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 73
type: SIMPLE_ASSIGN
gENCLS._vd = gENCLS.X_d * gENCLS.iq - gENCLS.R_a * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_73(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,73};
  data->localData[0]->realVars[93] /* gENCLS.vd variable */ = (data->simulationInfo->realParameter[181]) * (data->localData[0]->realVars[89] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[178]) * (data->localData[0]->realVars[88] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 74
type: SIMPLE_ASSIGN
pwLine4._ir._im = (-pwLine1.ir.im) - gENCLS.p.ii
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
pwLine4._ir._re = (-pwLine1.ir.re) - gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_75(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,75};
  data->localData[0]->realVars[151] /* pwLine4.ir.re variable */ = (-data->localData[0]->realVars[129] /* pwLine1.ir.re variable */) - data->localData[0]->realVars[92] /* gENCLS.p.ir variable */;
  TRACE_POP
}
/*
equation index: 76
type: SIMPLE_ASSIGN
pwFault._p._ir = (-pwLine3.ir.re) - pwLine4.is.re
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
pwFault._p._ii = (-pwLine3.ir.im) - pwLine4.is.im
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
pwLine._ir._im = (-pwLine1.is.im) - pwLine3.is.im - constantLoad.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_78(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,78};
  data->localData[0]->realVars[118] /* pwLine.ir.im variable */ = (-data->localData[0]->realVars[130] /* pwLine1.is.im variable */) - data->localData[0]->realVars[142] /* pwLine3.is.im variable */ - data->localData[0]->realVars[53] /* constantLoad.p.ii variable */;
  TRACE_POP
}
/*
equation index: 79
type: SIMPLE_ASSIGN
pwLine1._is._re = (-pwLine.ir.re) - pwLine3.is.re - constantLoad.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_79(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,79};
  data->localData[0]->realVars[131] /* pwLine1.is.re variable */ = (-data->localData[0]->realVars[119] /* pwLine.ir.re variable */) - data->localData[0]->realVars[143] /* pwLine3.is.re variable */ - data->localData[0]->realVars[54] /* constantLoad.p.ir variable */;
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
  data->localData[0]->realVars[119] /* pwLine.ir.re variable */ = xloc[0];
  data->localData[0]->realVars[54] /* constantLoad.p.ir variable */ = xloc[1];
  data->localData[0]->realVars[130] /* pwLine1.is.im variable */ = xloc[2];
  data->localData[0]->realVars[53] /* constantLoad.p.ii variable */ = xloc[3];
  data->localData[0]->realVars[142] /* pwLine3.is.im variable */ = xloc[4];
  data->localData[0]->realVars[143] /* pwLine3.is.re variable */ = xloc[5];
  data->localData[0]->realVars[140] /* pwLine3.ir.im variable */ = xloc[6];
  data->localData[0]->realVars[152] /* pwLine4.is.im variable */ = xloc[7];
  data->localData[0]->realVars[141] /* pwLine3.ir.re variable */ = xloc[8];
  data->localData[0]->realVars[153] /* pwLine4.is.re variable */ = xloc[9];
  data->localData[0]->realVars[129] /* pwLine1.ir.re variable */ = xloc[10];
  data->localData[0]->realVars[128] /* pwLine1.ir.im variable */ = xloc[11];
  data->localData[0]->realVars[88] /* gENCLS.id variable */ = xloc[12];
  data->localData[0]->realVars[89] /* gENCLS.iq variable */ = xloc[13];
  data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */ = xloc[14];
  data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ = xloc[15];
  data->localData[0]->realVars[100] /* gENROE.PSIppd variable */ = xloc[16];
  data->localData[0]->realVars[101] /* gENROE.PSIppq variable */ = xloc[17];
  data->localData[0]->realVars[108] /* gENROE.id variable */ = xloc[18];
  data->localData[0]->realVars[109] /* gENROE.iq variable */ = xloc[19];
  data->localData[0]->realVars[122] /* pwLine.vs.im variable */ = xloc[20];
  data->localData[0]->realVars[123] /* pwLine.vs.re variable */ = xloc[21];
  data->localData[0]->realVars[133] /* pwLine1.vr.re variable */ = xloc[22];
  data->localData[0]->realVars[132] /* pwLine1.vr.im variable */ = xloc[23];
  data->localData[0]->realVars[58] /* eSST1A.ECOMP variable */ = xloc[24];
  data->localData[0]->realVars[62] /* eSST1A.XADIFD variable */ = xloc[25];
  data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ = xloc[26];
  data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ = xloc[27];
  data->localData[0]->realVars[145] /* pwLine3.vr.re variable */ = xloc[28];
  data->localData[0]->realVars[144] /* pwLine3.vr.im variable */ = xloc[29];
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
  res[0] = (sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[94] /* gENCLS.vq variable */) + ((-cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[93] /* gENCLS.vd variable */) - data->localData[0]->realVars[132] /* pwLine1.vr.im variable */;

  tmp0 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[282]);
  tmp9 = (modelica_boolean)tmp0;
  if(tmp9)
  {
    tmp10 = data->localData[0]->realVars[112] /* pwFault.p.ii variable */;
  }
  else
  {
    tmp1 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[283]);
    tmp7 = (modelica_boolean)(tmp1 && data->simulationInfo->booleanParameter[70]);
    if(tmp7)
    {
      tmp8 = data->localData[0]->realVars[145] /* pwLine3.vr.re variable */ - 1e-10;
    }
    else
    {
      tmp2 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[283]);
      tmp5 = (modelica_boolean)tmp2;
      if(tmp5)
      {
        tmp3 = data->simulationInfo->realParameter[281];
        tmp4 = data->simulationInfo->realParameter[280];
        tmp6 = data->localData[0]->realVars[112] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[280]) * (data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) - ((data->simulationInfo->realParameter[281]) * (data->localData[0]->realVars[145] /* pwLine3.vr.re variable */)),(tmp3 * tmp3) + (tmp4 * tmp4),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
      }
      else
      {
        tmp6 = data->localData[0]->realVars[112] /* pwFault.p.ii variable */;
      }
      tmp8 = tmp6;
    }
    tmp10 = tmp8;
  }
  res[1] = tmp10;

  tmp11 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[326]);
  tmp12 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[327]);
  res[2] = ((tmp11 && tmp12)?data->localData[0]->realVars[153] /* pwLine4.is.re variable */:data->localData[0]->realVars[145] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[133] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[325]) * (data->localData[0]->realVars[153] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[322]) - ((data->localData[0]->realVars[145] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[323]))) - ((data->simulationInfo->realParameter[324]) * (data->localData[0]->realVars[152] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[145] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[322]) - ((data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[323]))))));

  tmp13 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[326]);
  tmp14 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[327]);
  res[3] = ((tmp13 && tmp14)?data->localData[0]->realVars[152] /* pwLine4.is.im variable */:data->localData[0]->realVars[144] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[132] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[325]) * (data->localData[0]->realVars[152] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[145] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[322]) - ((data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[323]))) + (data->simulationInfo->realParameter[324]) * (data->localData[0]->realVars[153] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[322]) - ((data->localData[0]->realVars[145] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[323])))));

  tmp15 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[326]);
  tmp16 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[327]);
  res[4] = ((tmp15 && tmp16)?data->localData[0]->realVars[150] /* pwLine4.ir.im variable */:data->localData[0]->realVars[132] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[144] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[325]) * (data->localData[0]->realVars[150] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[133] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[322]) - ((data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[323]))) + (data->simulationInfo->realParameter[324]) * (data->localData[0]->realVars[151] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[322]) - ((data->localData[0]->realVars[133] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[323])))));

  tmp17 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[326]);
  tmp18 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[327]);
  res[5] = ((tmp17 && tmp18)?data->localData[0]->realVars[151] /* pwLine4.ir.re variable */:data->localData[0]->realVars[133] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[145] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[325]) * (data->localData[0]->realVars[151] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[322]) - ((data->localData[0]->realVars[133] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[323]))) - ((data->simulationInfo->realParameter[324]) * (data->localData[0]->realVars[150] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[133] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[322]) - ((data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[323]))))));

  tmp19 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[315]);
  tmp20 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[316]);
  res[6] = ((tmp19 && tmp20)?data->localData[0]->realVars[142] /* pwLine3.is.im variable */:data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[144] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[314]) * (data->localData[0]->realVars[142] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[135] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[311]) - ((data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[312]))) + (data->simulationInfo->realParameter[313]) * (data->localData[0]->realVars[143] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[311]) - ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[312])))));

  tmp21 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[315]);
  tmp22 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[316]);
  res[7] = ((tmp21 && tmp22)?data->localData[0]->realVars[143] /* pwLine3.is.re variable */:data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[145] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[314]) * (data->localData[0]->realVars[143] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[311]) - ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[312]))) - ((data->simulationInfo->realParameter[313]) * (data->localData[0]->realVars[142] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[135] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[311]) - ((data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[312]))))));

  tmp23 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[282]);
  tmp32 = (modelica_boolean)tmp23;
  if(tmp32)
  {
    tmp33 = data->localData[0]->realVars[113] /* pwFault.p.ir variable */;
  }
  else
  {
    tmp24 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[283]);
    tmp30 = (modelica_boolean)(tmp24 && data->simulationInfo->booleanParameter[70]);
    if(tmp30)
    {
      tmp31 = data->localData[0]->realVars[144] /* pwLine3.vr.im variable */;
    }
    else
    {
      tmp25 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[283]);
      tmp28 = (modelica_boolean)tmp25;
      if(tmp28)
      {
        tmp26 = data->simulationInfo->realParameter[280];
        tmp27 = data->simulationInfo->realParameter[281];
        tmp29 = data->localData[0]->realVars[113] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[280]) * (data->localData[0]->realVars[145] /* pwLine3.vr.re variable */) + (data->simulationInfo->realParameter[281]) * (data->localData[0]->realVars[144] /* pwLine3.vr.im variable */),(tmp26 * tmp26) + (tmp27 * tmp27),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp29 = data->localData[0]->realVars[113] /* pwFault.p.ir variable */;
      }
      tmp31 = tmp29;
    }
    tmp33 = tmp31;
  }
  res[8] = tmp33;

  tmp34 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[315]);
  tmp35 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[316]);
  res[9] = ((tmp34 && tmp35)?data->localData[0]->realVars[140] /* pwLine3.ir.im variable */:data->localData[0]->realVars[144] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[314]) * (data->localData[0]->realVars[140] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[145] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[311]) - ((data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[312]))) + (data->simulationInfo->realParameter[313]) * (data->localData[0]->realVars[141] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[311]) - ((data->localData[0]->realVars[145] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[312])))));

  tmp36 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[315]);
  tmp37 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[316]);
  res[10] = ((tmp36 && tmp37)?data->localData[0]->realVars[141] /* pwLine3.ir.re variable */:data->localData[0]->realVars[145] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[314]) * (data->localData[0]->realVars[141] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[311]) - ((data->localData[0]->realVars[145] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[312]))) - ((data->simulationInfo->realParameter[313]) * (data->localData[0]->realVars[140] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[145] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[311]) - ((data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[312]))))));

  res[11] = (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) + ((-data->localData[0]->realVars[135] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[49] /* constantLoad.Q variable */;

  res[12] = (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[48] /* constantLoad.P variable */;

  tmp38 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[304]);
  tmp39 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[305]);
  res[13] = ((tmp38 && tmp39)?data->localData[0]->realVars[130] /* pwLine1.is.im variable */:data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[132] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[303]) * (data->localData[0]->realVars[130] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[135] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[300]) - ((data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[301]))) + (data->simulationInfo->realParameter[302]) * (data->localData[0]->realVars[131] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[300]) - ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[301])))));

  tmp40 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[304]);
  tmp41 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[305]);
  res[14] = ((tmp40 && tmp41)?data->localData[0]->realVars[131] /* pwLine1.is.re variable */:data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[133] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[303]) * (data->localData[0]->realVars[131] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[300]) - ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[301]))) - ((data->simulationInfo->realParameter[302]) * (data->localData[0]->realVars[130] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[135] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[300]) - ((data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[301]))))));

  res[15] = (cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[94] /* gENCLS.vq variable */) + (sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[93] /* gENCLS.vd variable */) - data->localData[0]->realVars[133] /* pwLine1.vr.re variable */;

  tmp42 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[304]);
  tmp43 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[305]);
  res[16] = ((tmp42 && tmp43)?data->localData[0]->realVars[129] /* pwLine1.ir.re variable */:data->localData[0]->realVars[133] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[303]) * (data->localData[0]->realVars[129] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[300]) - ((data->localData[0]->realVars[133] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[301]))) - ((data->simulationInfo->realParameter[302]) * (data->localData[0]->realVars[128] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[133] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[300]) - ((data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[301]))))));

  tmp44 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[304]);
  tmp45 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[305]);
  res[17] = ((tmp44 && tmp45)?data->localData[0]->realVars[128] /* pwLine1.ir.im variable */:data->localData[0]->realVars[132] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[303]) * (data->localData[0]->realVars[128] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[133] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[300]) - ((data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[301]))) + (data->simulationInfo->realParameter[302]) * (data->localData[0]->realVars[129] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[300]) - ((data->localData[0]->realVars[133] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[301])))));

  res[18] = data->localData[0]->realVars[101] /* gENROE.PSIppq variable */ - ((data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */) * (data->simulationInfo->realParameter[216])) - ((data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[218]));

  res[19] = data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[251] - data->simulationInfo->realParameter[246]) * (data->localData[0]->realVars[109] /* gENROE.iq variable */) + (-data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */) - ((data->localData[0]->realVars[23] /* der(gENROE.PSIkq) STATE_DER */) * (data->simulationInfo->realParameter[240]));

  res[20] = (sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[111] /* gENROE.uq variable */) + ((-cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */))) * (data->localData[0]->realVars[110] /* gENROE.ud variable */) - data->localData[0]->realVars[122] /* pwLine.vs.im variable */;

  res[21] = (cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[111] /* gENROE.uq variable */) + (sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[110] /* gENROE.ud variable */) - data->localData[0]->realVars[123] /* pwLine.vs.re variable */;

  tmp46 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[293]);
  tmp47 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[294]);
  res[22] = ((tmp46 && tmp47)?data->localData[0]->realVars[121] /* pwLine.is.re variable */:data->localData[0]->realVars[123] /* pwLine.vs.re variable */ - data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[292]) * (data->localData[0]->realVars[121] /* pwLine.is.re variable */ + (data->localData[0]->realVars[122] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[289]) - ((data->localData[0]->realVars[123] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[290]))) - ((data->simulationInfo->realParameter[291]) * (data->localData[0]->realVars[120] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[123] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[289]) - ((data->localData[0]->realVars[122] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[290]))))));

  tmp48 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[293]);
  tmp49 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[294]);
  res[23] = ((tmp48 && tmp49)?data->localData[0]->realVars[120] /* pwLine.is.im variable */:data->localData[0]->realVars[122] /* pwLine.vs.im variable */ - data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[292]) * (data->localData[0]->realVars[120] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[123] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[289]) - ((data->localData[0]->realVars[122] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[290]))) + (data->simulationInfo->realParameter[291]) * (data->localData[0]->realVars[121] /* pwLine.is.re variable */ + (data->localData[0]->realVars[122] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[289]) - ((data->localData[0]->realVars[123] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[290])))));

  tmp50 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[293]);
  tmp51 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[294]);
  res[24] = ((tmp50 && tmp51)?data->localData[0]->realVars[119] /* pwLine.ir.re variable */:data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[123] /* pwLine.vs.re variable */ - ((data->simulationInfo->realParameter[292]) * (data->localData[0]->realVars[119] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[289]) - ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[290]))) - ((data->simulationInfo->realParameter[291]) * (data->localData[0]->realVars[118] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[135] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[289]) - ((data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[290]))))));

  tmp52 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[293]);
  tmp53 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[294]);
  res[25] = ((tmp52 && tmp53)?data->localData[0]->realVars[118] /* pwLine.ir.im variable */:data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[122] /* pwLine.vs.im variable */ - ((data->simulationInfo->realParameter[292]) * (data->localData[0]->realVars[118] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[135] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[289]) - ((data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[290]))) + (data->simulationInfo->realParameter[291]) * (data->localData[0]->realVars[119] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[289]) - ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[290])))));

  tmp54 = data->localData[0]->realVars[123] /* pwLine.vs.re variable */;
  tmp55 = data->localData[0]->realVars[122] /* pwLine.vs.im variable */;
  res[26] = sqrt((tmp54 * tmp54) + (tmp55 * tmp55)) - data->localData[0]->realVars[58] /* eSST1A.ECOMP variable */;

  tmp56 = Greater(data->localData[0]->realVars[83] /* eSST1A.lV_GATE.p variable */,data->localData[0]->realVars[66] /* eSST1A.add3.y variable */);
  tmp58 = (modelica_boolean)tmp56;
  if(tmp58)
  {
    tmp59 = data->localData[0]->realVars[66] /* eSST1A.add3.y variable */;
  }
  else
  {
    tmp57 = Less(data->localData[0]->realVars[83] /* eSST1A.lV_GATE.p variable */,data->localData[0]->realVars[76] /* eSST1A.imGain1.y variable */);
    tmp59 = (tmp57?data->localData[0]->realVars[76] /* eSST1A.imGain1.y variable */:data->localData[0]->realVars[83] /* eSST1A.lV_GATE.p variable */);
  }
  res[27] = homotopy(tmp59, data->localData[0]->realVars[83] /* eSST1A.lV_GATE.p variable */) - data->localData[0]->realVars[59] /* eSST1A.EFD variable */;

  res[28] = (data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[217]) + (data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */) * (data->simulationInfo->realParameter[215]) - data->localData[0]->realVars[100] /* gENROE.PSIppd variable */;

  res[29] = data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[246] - data->simulationInfo->realParameter[247]) * (data->localData[0]->realVars[108] /* gENROE.id variable */) + (-data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */) - ((data->localData[0]->realVars[22] /* der(gENROE.PSIkd) STATE_DER */) * (data->simulationInfo->realParameter[239]));
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS110(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+30] = {0,4,4,4,4,4,4,3,3,3,3,4,4,4,4,2,2,6,6,6,6,5,5,7,7,2,3,11,11,8,8};
  const int rowIndex[147] = {13,14,24,25,11,12,13,14,13,14,24,25,11,12,24,25,6,7,24,25,6,7,13,14,1,9,10,1,2,3,8,9,10,2,3,8,4,5,16,17,4,5,16,17,0,4,5,15,0,4,5,15,18,19,28,29,18,19,20,21,28,29,18,19,20,21,28,29,20,21,22,23,28,29,18,19,20,21,22,23,20,22,23,25,26,21,22,23,24,26,2,4,5,14,15,16,17,0,3,4,5,13,16,17,26,27,27,28,29,6,7,9,11,12,13,14,17,23,24,25,6,7,10,11,12,13,14,16,22,24,25,1,2,3,5,7,8,9,10,1,2,3,4,6,8,9,10};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern.leadindex = (unsigned int*) malloc((30+1)*sizeof(int));
  inSysData->sparsePattern.index = (unsigned int*) malloc(147*sizeof(int));
  inSysData->sparsePattern.numberOfNoneZeros = 147;
  inSysData->sparsePattern.colorCols = (unsigned int*) malloc(30*sizeof(int));
  inSysData->sparsePattern.maxColors = 10;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern.leadindex, colPtrIndex, (30+1)*sizeof(int));
  
  for(i=2;i<30+1;++i)
    inSysData->sparsePattern.leadindex[i] += inSysData->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern.index, rowIndex, 147*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern.colorCols[29] = 1;
  inSysData->sparsePattern.colorCols[27] = 2;
  inSysData->sparsePattern.colorCols[26] = 3;
  inSysData->sparsePattern.colorCols[21] = 4;
  inSysData->sparsePattern.colorCols[28] = 4;
  inSysData->sparsePattern.colorCols[20] = 5;
  inSysData->sparsePattern.colorCols[23] = 5;
  inSysData->sparsePattern.colorCols[19] = 6;
  inSysData->sparsePattern.colorCols[22] = 6;
  inSysData->sparsePattern.colorCols[25] = 6;
  inSysData->sparsePattern.colorCols[3] = 7;
  inSysData->sparsePattern.colorCols[5] = 7;
  inSysData->sparsePattern.colorCols[13] = 7;
  inSysData->sparsePattern.colorCols[18] = 7;
  inSysData->sparsePattern.colorCols[2] = 8;
  inSysData->sparsePattern.colorCols[12] = 8;
  inSysData->sparsePattern.colorCols[17] = 8;
  inSysData->sparsePattern.colorCols[1] = 9;
  inSysData->sparsePattern.colorCols[4] = 9;
  inSysData->sparsePattern.colorCols[7] = 9;
  inSysData->sparsePattern.colorCols[8] = 9;
  inSysData->sparsePattern.colorCols[11] = 9;
  inSysData->sparsePattern.colorCols[16] = 9;
  inSysData->sparsePattern.colorCols[0] = 10;
  inSysData->sparsePattern.colorCols[6] = 10;
  inSysData->sparsePattern.colorCols[9] = 10;
  inSysData->sparsePattern.colorCols[10] = 10;
  inSysData->sparsePattern.colorCols[14] = 10;
  inSysData->sparsePattern.colorCols[15] = 10;
  inSysData->sparsePattern.colorCols[24] = 10;
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
  /* static nls data for constantLoad.p.ir */
  sysData->nominal[i] = data->modelData->realVarsData[54].attribute /* constantLoad.p.ir */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[54].attribute /* constantLoad.p.ir */.min;
  sysData->max[i++]   = data->modelData->realVarsData[54].attribute /* constantLoad.p.ir */.max;
  /* static nls data for pwLine1.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[130].attribute /* pwLine1.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[130].attribute /* pwLine1.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[130].attribute /* pwLine1.is.im */.max;
  /* static nls data for constantLoad.p.ii */
  sysData->nominal[i] = data->modelData->realVarsData[53].attribute /* constantLoad.p.ii */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[53].attribute /* constantLoad.p.ii */.min;
  sysData->max[i++]   = data->modelData->realVarsData[53].attribute /* constantLoad.p.ii */.max;
  /* static nls data for pwLine3.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[142].attribute /* pwLine3.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[142].attribute /* pwLine3.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[142].attribute /* pwLine3.is.im */.max;
  /* static nls data for pwLine3.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[143].attribute /* pwLine3.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[143].attribute /* pwLine3.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[143].attribute /* pwLine3.is.re */.max;
  /* static nls data for pwLine3.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[140].attribute /* pwLine3.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[140].attribute /* pwLine3.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[140].attribute /* pwLine3.ir.im */.max;
  /* static nls data for pwLine4.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[152].attribute /* pwLine4.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[152].attribute /* pwLine4.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[152].attribute /* pwLine4.is.im */.max;
  /* static nls data for pwLine3.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[141].attribute /* pwLine3.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[141].attribute /* pwLine3.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[141].attribute /* pwLine3.ir.re */.max;
  /* static nls data for pwLine4.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[153].attribute /* pwLine4.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[153].attribute /* pwLine4.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[153].attribute /* pwLine4.is.re */.max;
  /* static nls data for pwLine1.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[129].attribute /* pwLine1.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[129].attribute /* pwLine1.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[129].attribute /* pwLine1.ir.re */.max;
  /* static nls data for pwLine1.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[128].attribute /* pwLine1.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[128].attribute /* pwLine1.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[128].attribute /* pwLine1.ir.im */.max;
  /* static nls data for gENCLS.id */
  sysData->nominal[i] = data->modelData->realVarsData[88].attribute /* gENCLS.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[88].attribute /* gENCLS.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[88].attribute /* gENCLS.id */.max;
  /* static nls data for gENCLS.iq */
  sysData->nominal[i] = data->modelData->realVarsData[89].attribute /* gENCLS.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[89].attribute /* gENCLS.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[89].attribute /* gENCLS.iq */.max;
  /* static nls data for gENROE.PSIkq */
  sysData->nominal[i] = data->modelData->realVarsData[10].attribute /* gENROE.PSIkq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[10].attribute /* gENROE.PSIkq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[10].attribute /* gENROE.PSIkq */.max;
  /* static nls data for gENROE.Epq */
  sysData->nominal[i] = data->modelData->realVarsData[8].attribute /* gENROE.Epq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[8].attribute /* gENROE.Epq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[8].attribute /* gENROE.Epq */.max;
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
  /* static nls data for pwLine.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[122].attribute /* pwLine.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[122].attribute /* pwLine.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[122].attribute /* pwLine.vs.im */.max;
  /* static nls data for pwLine.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[123].attribute /* pwLine.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[123].attribute /* pwLine.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[123].attribute /* pwLine.vs.re */.max;
  /* static nls data for pwLine1.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[133].attribute /* pwLine1.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[133].attribute /* pwLine1.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[133].attribute /* pwLine1.vr.re */.max;
  /* static nls data for pwLine1.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[132].attribute /* pwLine1.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[132].attribute /* pwLine1.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[132].attribute /* pwLine1.vr.im */.max;
  /* static nls data for eSST1A.ECOMP */
  sysData->nominal[i] = data->modelData->realVarsData[58].attribute /* eSST1A.ECOMP */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[58].attribute /* eSST1A.ECOMP */.min;
  sysData->max[i++]   = data->modelData->realVarsData[58].attribute /* eSST1A.ECOMP */.max;
  /* static nls data for eSST1A.XADIFD */
  sysData->nominal[i] = data->modelData->realVarsData[62].attribute /* eSST1A.XADIFD */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[62].attribute /* eSST1A.XADIFD */.min;
  sysData->max[i++]   = data->modelData->realVarsData[62].attribute /* eSST1A.XADIFD */.max;
  /* static nls data for pwLine1.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[134].attribute /* pwLine1.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[134].attribute /* pwLine1.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[134].attribute /* pwLine1.vs.im */.max;
  /* static nls data for pwLine1.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[135].attribute /* pwLine1.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[135].attribute /* pwLine1.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[135].attribute /* pwLine1.vs.re */.max;
  /* static nls data for pwLine3.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[145].attribute /* pwLine3.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[145].attribute /* pwLine3.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[145].attribute /* pwLine3.vr.re */.max;
  /* static nls data for pwLine3.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[144].attribute /* pwLine3.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[144].attribute /* pwLine3.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[144].attribute /* pwLine3.vr.im */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS110(sysData);
}

void getIterationVarsNLS110(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[119] /* pwLine.ir.re variable */;
  array[1] = data->localData[0]->realVars[54] /* constantLoad.p.ir variable */;
  array[2] = data->localData[0]->realVars[130] /* pwLine1.is.im variable */;
  array[3] = data->localData[0]->realVars[53] /* constantLoad.p.ii variable */;
  array[4] = data->localData[0]->realVars[142] /* pwLine3.is.im variable */;
  array[5] = data->localData[0]->realVars[143] /* pwLine3.is.re variable */;
  array[6] = data->localData[0]->realVars[140] /* pwLine3.ir.im variable */;
  array[7] = data->localData[0]->realVars[152] /* pwLine4.is.im variable */;
  array[8] = data->localData[0]->realVars[141] /* pwLine3.ir.re variable */;
  array[9] = data->localData[0]->realVars[153] /* pwLine4.is.re variable */;
  array[10] = data->localData[0]->realVars[129] /* pwLine1.ir.re variable */;
  array[11] = data->localData[0]->realVars[128] /* pwLine1.ir.im variable */;
  array[12] = data->localData[0]->realVars[88] /* gENCLS.id variable */;
  array[13] = data->localData[0]->realVars[89] /* gENCLS.iq variable */;
  array[14] = data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */;
  array[15] = data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */;
  array[16] = data->localData[0]->realVars[100] /* gENROE.PSIppd variable */;
  array[17] = data->localData[0]->realVars[101] /* gENROE.PSIppq variable */;
  array[18] = data->localData[0]->realVars[108] /* gENROE.id variable */;
  array[19] = data->localData[0]->realVars[109] /* gENROE.iq variable */;
  array[20] = data->localData[0]->realVars[122] /* pwLine.vs.im variable */;
  array[21] = data->localData[0]->realVars[123] /* pwLine.vs.re variable */;
  array[22] = data->localData[0]->realVars[133] /* pwLine1.vr.re variable */;
  array[23] = data->localData[0]->realVars[132] /* pwLine1.vr.im variable */;
  array[24] = data->localData[0]->realVars[58] /* eSST1A.ECOMP variable */;
  array[25] = data->localData[0]->realVars[62] /* eSST1A.XADIFD variable */;
  array[26] = data->localData[0]->realVars[134] /* pwLine1.vs.im variable */;
  array[27] = data->localData[0]->realVars[135] /* pwLine1.vs.re variable */;
  array[28] = data->localData[0]->realVars[145] /* pwLine3.vr.re variable */;
  array[29] = data->localData[0]->realVars[144] /* pwLine3.vr.im variable */;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize non-linear systems */
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA* nonLinearSystemData)
{
  
  nonLinearSystemData[3].equationIndex = 899;
  nonLinearSystemData[3].size = 1;
  nonLinearSystemData[3].homotopySupport = 0;
  nonLinearSystemData[3].mixedSystem = 1;
  nonLinearSystemData[3].residualFunc = residualFunc899;
  nonLinearSystemData[3].strictTearingFunctionCall = NULL;
  nonLinearSystemData[3].analyticalJacobianColumn = OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_functionJacNLSJac57_column;
  nonLinearSystemData[3].initialAnalyticalJacobian = OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_initialAnalyticJacobianNLSJac57;
  nonLinearSystemData[3].jacobianIndex = 1 /*jacInx*/;
  nonLinearSystemData[3].initializeStaticNLSData = initializeStaticDataNLS899;
  nonLinearSystemData[3].getIterationVars = getIterationVarsNLS899;
  nonLinearSystemData[3].checkConstraints = NULL;
  
  
  nonLinearSystemData[2].equationIndex = 855;
  nonLinearSystemData[2].size = 22;
  nonLinearSystemData[2].homotopySupport = 0;
  nonLinearSystemData[2].mixedSystem = 1;
  nonLinearSystemData[2].residualFunc = residualFunc855;
  nonLinearSystemData[2].strictTearingFunctionCall = NULL;
  nonLinearSystemData[2].analyticalJacobianColumn = OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_functionJacNLSJac56_column;
  nonLinearSystemData[2].initialAnalyticalJacobian = OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_initialAnalyticJacobianNLSJac56;
  nonLinearSystemData[2].jacobianIndex = 0 /*jacInx*/;
  nonLinearSystemData[2].initializeStaticNLSData = initializeStaticDataNLS855;
  nonLinearSystemData[2].getIterationVars = getIterationVarsNLS855;
  nonLinearSystemData[2].checkConstraints = NULL;
  
  
  nonLinearSystemData[1].equationIndex = 681;
  nonLinearSystemData[1].size = 30;
  nonLinearSystemData[1].homotopySupport = 0;
  nonLinearSystemData[1].mixedSystem = 1;
  nonLinearSystemData[1].residualFunc = residualFunc681;
  nonLinearSystemData[1].strictTearingFunctionCall = NULL;
  nonLinearSystemData[1].analyticalJacobianColumn = NULL;
  nonLinearSystemData[1].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[1].jacobianIndex = -1;
  nonLinearSystemData[1].initializeStaticNLSData = initializeStaticDataNLS681;
  nonLinearSystemData[1].getIterationVars = getIterationVarsNLS681;
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

