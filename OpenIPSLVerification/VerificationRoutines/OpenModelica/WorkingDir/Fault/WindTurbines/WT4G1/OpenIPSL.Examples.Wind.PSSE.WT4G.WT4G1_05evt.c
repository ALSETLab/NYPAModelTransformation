/* Events: Sample, Zero Crossings, Relations, Discrete Changes */
#include "OpenIPSL.Examples.Wind.PSSE.WT4G.WT4G1_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* Initializes the raw time events of the simulation using the now
   calcualted parameters. */
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_function_initSample(DATA *data, threadData_t *threadData)
{
  long i=0;
}

const char *OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_zeroCrossingDescription(int i, int **out_EquationIndexes)
{
  static const char *res[] = {"time >= pwLine.t1 and time < pwLine.t2",
  "time >= pwLine1.t1 and time < pwLine1.t2",
  "time >= pwLine1.t1",
  "time < pwLine1.t2",
  "time < pwFault.t1",
  "time < pwFault.t2 and pwFault.ground",
  "time < pwFault.t2",
  "time >= pwLine2.t1 and time < pwLine2.t2",
  "time >= pwLine2.t1",
  "time < pwLine2.t2",
  "wT4G1.V < 0.4",
  "wT4G1.V > 0.8",
  "wT4G1.K2.y < wT4G1.lVPL.VLVPL1",
  "wT4G1.K2.y > wT4G1.lVPL.VLVPL2",
  "wT4G1.V > wT4G1.hVRCL.VHVRCR",
  "time >= pwLine.t1",
  "time < pwLine.t2",
  "wT4G1.K.y > wT4G1.lVPL.LVPL"};
  static const int occurEqs0[] = {1,-1};
  static const int occurEqs1[] = {1,-1};
  static const int occurEqs2[] = {1,-1};
  static const int occurEqs3[] = {1,-1};
  static const int occurEqs4[] = {1,-1};
  static const int occurEqs5[] = {1,-1};
  static const int occurEqs6[] = {1,-1};
  static const int occurEqs7[] = {1,-1};
  static const int occurEqs8[] = {1,-1};
  static const int occurEqs9[] = {1,-1};
  static const int occurEqs10[] = {1,-1};
  static const int occurEqs11[] = {1,-1};
  static const int occurEqs12[] = {1,-1};
  static const int occurEqs13[] = {1,-1};
  static const int occurEqs14[] = {1,-1};
  static const int occurEqs15[] = {1,-1};
  static const int occurEqs16[] = {1,-1};
  static const int occurEqs17[] = {1,199};
  static const int *occurEqs[] = {occurEqs0,occurEqs1,occurEqs2,occurEqs3,occurEqs4,occurEqs5,occurEqs6,occurEqs7,occurEqs8,occurEqs9,occurEqs10,occurEqs11,occurEqs12,occurEqs13,occurEqs14,occurEqs15,occurEqs16,occurEqs17};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
}

/* forwarded equations */
extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_198(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_199(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_200(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_201(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_202(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_203(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_279(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_280(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_281(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_282(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_283(DATA* data, threadData_t *threadData);

int OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_198(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_199(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_200(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_201(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_202(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_203(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_279(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_280(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_281(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_282(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_283(data, threadData);
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
{
  TRACE_PUSH
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

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_ZC);
#endif
  data->simulationInfo->callStatistics.functionZeroCrossings++;

  tmp1 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[65] /* pwLine.t1 PARAM */, data->simulationInfo->storedRelations[0]);
  tmp2 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[66] /* pwLine.t2 PARAM */, data->simulationInfo->storedRelations[1]);
  gout[0] = ((tmp1 && tmp2)) ? 1 : -1;
  tmp3 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[76] /* pwLine1.t1 PARAM */, data->simulationInfo->storedRelations[2]);
  tmp4 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* pwLine1.t2 PARAM */, data->simulationInfo->storedRelations[3]);
  gout[1] = ((tmp3 && tmp4)) ? 1 : -1;
  tmp5 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[76] /* pwLine1.t1 PARAM */, data->simulationInfo->storedRelations[2]);
  gout[2] = (tmp5) ? 1 : -1;
  tmp6 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* pwLine1.t2 PARAM */, data->simulationInfo->storedRelations[3]);
  gout[3] = (tmp6) ? 1 : -1;
  tmp7 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[54] /* pwFault.t1 PARAM */, data->simulationInfo->storedRelations[4]);
  gout[4] = (tmp7) ? 1 : -1;
  tmp8 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[55] /* pwFault.t2 PARAM */, data->simulationInfo->storedRelations[5]);
  gout[5] = ((tmp8 && data->simulationInfo->booleanParameter[36] /* pwFault.ground PARAM */)) ? 1 : -1;
  tmp9 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[55] /* pwFault.t2 PARAM */, data->simulationInfo->storedRelations[5]);
  gout[6] = (tmp9) ? 1 : -1;
  tmp10 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[87] /* pwLine2.t1 PARAM */, data->simulationInfo->storedRelations[6]);
  tmp11 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[88] /* pwLine2.t2 PARAM */, data->simulationInfo->storedRelations[7]);
  gout[7] = ((tmp10 && tmp11)) ? 1 : -1;
  tmp12 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[87] /* pwLine2.t1 PARAM */, data->simulationInfo->storedRelations[6]);
  gout[8] = (tmp12) ? 1 : -1;
  tmp13 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[88] /* pwLine2.t2 PARAM */, data->simulationInfo->storedRelations[7]);
  gout[9] = (tmp13) ? 1 : -1;
  tmp14 = LessZC(data->localData[0]->realVars[81] /* wT4G1.V variable */, 0.4, data->simulationInfo->storedRelations[8]);
  gout[10] = (tmp14) ? 1 : -1;
  tmp15 = GreaterZC(data->localData[0]->realVars[81] /* wT4G1.V variable */, 0.8, data->simulationInfo->storedRelations[9]);
  gout[11] = (tmp15) ? 1 : -1;
  tmp16 = LessZC(data->localData[0]->realVars[78] /* wT4G1.K2.y variable */, data->simulationInfo->realParameter[143] /* wT4G1.lVPL.VLVPL1 PARAM */, data->simulationInfo->storedRelations[10]);
  gout[12] = (tmp16) ? 1 : -1;
  tmp17 = GreaterZC(data->localData[0]->realVars[78] /* wT4G1.K2.y variable */, data->simulationInfo->realParameter[144] /* wT4G1.lVPL.VLVPL2 PARAM */, data->simulationInfo->storedRelations[11]);
  gout[13] = (tmp17) ? 1 : -1;
  tmp18 = GreaterZC(data->localData[0]->realVars[81] /* wT4G1.V variable */, data->simulationInfo->realParameter[134] /* wT4G1.hVRCL.VHVRCR PARAM */, data->simulationInfo->storedRelations[12]);
  gout[14] = (tmp18) ? 1 : -1;
  tmp19 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[65] /* pwLine.t1 PARAM */, data->simulationInfo->storedRelations[0]);
  gout[15] = (tmp19) ? 1 : -1;
  tmp20 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[66] /* pwLine.t2 PARAM */, data->simulationInfo->storedRelations[1]);
  gout[16] = (tmp20) ? 1 : -1;
  tmp21 = GreaterZC(data->localData[0]->realVars[2] /* wT4G1.K.y STATE(1) */, data->localData[0]->realVars[83] /* wT4G1.lVPL.LVPL variable */, data->simulationInfo->storedRelations[13]);
  gout[17] = (tmp21) ? 1 : -1;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ZC);
#endif

  TRACE_POP
  return 0;
}

const char *OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_relationDescription(int i)
{
  const char *res[] = {"time >= pwLine.t1",
  "time < pwLine.t2",
  "time >= pwLine1.t1",
  "time < pwLine1.t2",
  "time < pwFault.t1",
  "time < pwFault.t2",
  "time >= pwLine2.t1",
  "time < pwLine2.t2",
  "wT4G1.V < 0.4",
  "wT4G1.V > 0.8",
  "wT4G1.K2.y < wT4G1.lVPL.VLVPL1",
  "wT4G1.K2.y > wT4G1.lVPL.VLVPL2",
  "wT4G1.V > wT4G1.hVRCL.VHVRCR",
  "wT4G1.K.y > wT4G1.lVPL.LVPL"};
  return res[i];
}

int OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  TRACE_PUSH
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
  
  if(evalforZeroCross) {
    tmp22 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[65] /* pwLine.t1 PARAM */, data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp22;
    tmp23 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[66] /* pwLine.t2 PARAM */, data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[1] = tmp23;
    tmp24 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[76] /* pwLine1.t1 PARAM */, data->simulationInfo->storedRelations[2]);
    data->simulationInfo->relations[2] = tmp24;
    tmp25 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* pwLine1.t2 PARAM */, data->simulationInfo->storedRelations[3]);
    data->simulationInfo->relations[3] = tmp25;
    tmp26 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[54] /* pwFault.t1 PARAM */, data->simulationInfo->storedRelations[4]);
    data->simulationInfo->relations[4] = tmp26;
    tmp27 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[55] /* pwFault.t2 PARAM */, data->simulationInfo->storedRelations[5]);
    data->simulationInfo->relations[5] = tmp27;
    tmp28 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[87] /* pwLine2.t1 PARAM */, data->simulationInfo->storedRelations[6]);
    data->simulationInfo->relations[6] = tmp28;
    tmp29 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[88] /* pwLine2.t2 PARAM */, data->simulationInfo->storedRelations[7]);
    data->simulationInfo->relations[7] = tmp29;
    tmp30 = LessZC(data->localData[0]->realVars[81] /* wT4G1.V variable */, 0.4, data->simulationInfo->storedRelations[8]);
    data->simulationInfo->relations[8] = tmp30;
    tmp31 = GreaterZC(data->localData[0]->realVars[81] /* wT4G1.V variable */, 0.8, data->simulationInfo->storedRelations[9]);
    data->simulationInfo->relations[9] = tmp31;
    tmp32 = LessZC(data->localData[0]->realVars[78] /* wT4G1.K2.y variable */, data->simulationInfo->realParameter[143] /* wT4G1.lVPL.VLVPL1 PARAM */, data->simulationInfo->storedRelations[10]);
    data->simulationInfo->relations[10] = tmp32;
    tmp33 = GreaterZC(data->localData[0]->realVars[78] /* wT4G1.K2.y variable */, data->simulationInfo->realParameter[144] /* wT4G1.lVPL.VLVPL2 PARAM */, data->simulationInfo->storedRelations[11]);
    data->simulationInfo->relations[11] = tmp33;
    tmp34 = GreaterZC(data->localData[0]->realVars[81] /* wT4G1.V variable */, data->simulationInfo->realParameter[134] /* wT4G1.hVRCL.VHVRCR PARAM */, data->simulationInfo->storedRelations[12]);
    data->simulationInfo->relations[12] = tmp34;
    tmp35 = GreaterZC(data->localData[0]->realVars[2] /* wT4G1.K.y STATE(1) */, data->localData[0]->realVars[83] /* wT4G1.lVPL.LVPL variable */, data->simulationInfo->storedRelations[13]);
    data->simulationInfo->relations[13] = tmp35;
  } else {
    data->simulationInfo->relations[0] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[65] /* pwLine.t1 PARAM */);
    data->simulationInfo->relations[1] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[66] /* pwLine.t2 PARAM */);
    data->simulationInfo->relations[2] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[76] /* pwLine1.t1 PARAM */);
    data->simulationInfo->relations[3] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[77] /* pwLine1.t2 PARAM */);
    data->simulationInfo->relations[4] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[54] /* pwFault.t1 PARAM */);
    data->simulationInfo->relations[5] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[55] /* pwFault.t2 PARAM */);
    data->simulationInfo->relations[6] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[87] /* pwLine2.t1 PARAM */);
    data->simulationInfo->relations[7] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[88] /* pwLine2.t2 PARAM */);
    data->simulationInfo->relations[8] = (data->localData[0]->realVars[81] /* wT4G1.V variable */ < 0.4);
    data->simulationInfo->relations[9] = (data->localData[0]->realVars[81] /* wT4G1.V variable */ > 0.8);
    data->simulationInfo->relations[10] = (data->localData[0]->realVars[78] /* wT4G1.K2.y variable */ < data->simulationInfo->realParameter[143] /* wT4G1.lVPL.VLVPL1 PARAM */);
    data->simulationInfo->relations[11] = (data->localData[0]->realVars[78] /* wT4G1.K2.y variable */ > data->simulationInfo->realParameter[144] /* wT4G1.lVPL.VLVPL2 PARAM */);
    data->simulationInfo->relations[12] = (data->localData[0]->realVars[81] /* wT4G1.V variable */ > data->simulationInfo->realParameter[134] /* wT4G1.hVRCL.VHVRCR PARAM */);
    data->simulationInfo->relations[13] = (data->localData[0]->realVars[2] /* wT4G1.K.y STATE(1) */ > data->localData[0]->realVars[83] /* wT4G1.lVPL.LVPL variable */);
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

