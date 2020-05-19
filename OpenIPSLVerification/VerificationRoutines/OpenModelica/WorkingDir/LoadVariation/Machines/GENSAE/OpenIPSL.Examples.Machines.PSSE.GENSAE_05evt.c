/* Events: Sample, Zero Crossings, Relations, Discrete Changes */
#include "OpenIPSL.Examples.Machines.PSSE.GENSAE_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* Initializes the raw time events of the simulation using the now
   calcualted parameters. */
void OpenIPSL_Examples_Machines_PSSE_GENSAE_function_initSample(DATA *data, threadData_t *threadData)
{
  long i=0;
}

const char *OpenIPSL_Examples_Machines_PSSE_GENSAE_zeroCrossingDescription(int i, int **out_EquationIndexes)
{
  static const char *res[] = {"time >= pwLine.t1 and time < pwLine.t2",
  "time >= pwLine1.t1 and time < pwLine1.t2",
  "time >= pwLine1.t1",
  "time < pwLine1.t2",
  "time >= pwLine4.t1 and time < pwLine4.t2",
  "time >= pwLine4.t1",
  "time < pwLine4.t2",
  "time >= pwLine3.t1 and time < pwLine3.t2",
  "time < pwFault.t1",
  "time < pwFault.t2 and pwFault.ground",
  "time < pwFault.t2",
  "time >= pwLine3.t1",
  "time < pwLine3.t2",
  "time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t",
  "constantLoad.v < constantLoad.PQBRAK",
  "constantLoad.v < 0.5",
  "time >= constantLoad.t1",
  "time <= constantLoad.t1 + constantLoad.d_t",
  "time >= pwLine.t1",
  "time < pwLine.t2"};
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
  static const int occurEqs17[] = {1,-1};
  static const int occurEqs18[] = {1,-1};
  static const int occurEqs19[] = {1,-1};
  static const int *occurEqs[] = {occurEqs0,occurEqs1,occurEqs2,occurEqs3,occurEqs4,occurEqs5,occurEqs6,occurEqs7,occurEqs8,occurEqs9,occurEqs10,occurEqs11,occurEqs12,occurEqs13,occurEqs14,occurEqs15,occurEqs16,occurEqs17,occurEqs18,occurEqs19};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
}

/* forwarded equations */
extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_111(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_112(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_113(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_114(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_115(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_116(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_117(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_118(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_119(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_120(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_211(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_213(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_216(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_217(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_218(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_219(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_220(DATA* data, threadData_t *threadData);

int OpenIPSL_Examples_Machines_PSSE_GENSAE_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_111(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_112(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_113(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_114(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_115(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_116(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_117(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_118(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_119(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_120(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_211(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_213(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_216(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_217(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_218(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_219(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_220(data, threadData);
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Machines_PSSE_GENSAE_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
{
  TRACE_PUSH
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

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_ZC);
#endif
  data->simulationInfo->callStatistics.functionZeroCrossings++;

  tmp0 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[192] /* pwLine.t1 PARAM */, data->simulationInfo->storedRelations[0]);
  tmp1 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[193] /* pwLine.t2 PARAM */, data->simulationInfo->storedRelations[1]);
  gout[0] = ((tmp0 && tmp1)) ? 1 : -1;
  tmp2 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[203] /* pwLine1.t1 PARAM */, data->simulationInfo->storedRelations[2]);
  tmp3 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[204] /* pwLine1.t2 PARAM */, data->simulationInfo->storedRelations[3]);
  gout[1] = ((tmp2 && tmp3)) ? 1 : -1;
  tmp4 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[203] /* pwLine1.t1 PARAM */, data->simulationInfo->storedRelations[2]);
  gout[2] = (tmp4) ? 1 : -1;
  tmp5 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[204] /* pwLine1.t2 PARAM */, data->simulationInfo->storedRelations[3]);
  gout[3] = (tmp5) ? 1 : -1;
  tmp6 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[225] /* pwLine4.t1 PARAM */, data->simulationInfo->storedRelations[4]);
  tmp7 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[226] /* pwLine4.t2 PARAM */, data->simulationInfo->storedRelations[5]);
  gout[4] = ((tmp6 && tmp7)) ? 1 : -1;
  tmp8 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[225] /* pwLine4.t1 PARAM */, data->simulationInfo->storedRelations[4]);
  gout[5] = (tmp8) ? 1 : -1;
  tmp9 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[226] /* pwLine4.t2 PARAM */, data->simulationInfo->storedRelations[5]);
  gout[6] = (tmp9) ? 1 : -1;
  tmp10 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[214] /* pwLine3.t1 PARAM */, data->simulationInfo->storedRelations[6]);
  tmp11 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[215] /* pwLine3.t2 PARAM */, data->simulationInfo->storedRelations[7]);
  gout[7] = ((tmp10 && tmp11)) ? 1 : -1;
  tmp12 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[181] /* pwFault.t1 PARAM */, data->simulationInfo->storedRelations[8]);
  gout[8] = (tmp12) ? 1 : -1;
  tmp13 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[182] /* pwFault.t2 PARAM */, data->simulationInfo->storedRelations[9]);
  gout[9] = ((tmp13 && data->simulationInfo->booleanParameter[63] /* pwFault.ground PARAM */)) ? 1 : -1;
  tmp14 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[182] /* pwFault.t2 PARAM */, data->simulationInfo->storedRelations[9]);
  gout[10] = (tmp14) ? 1 : -1;
  tmp15 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[214] /* pwLine3.t1 PARAM */, data->simulationInfo->storedRelations[6]);
  gout[11] = (tmp15) ? 1 : -1;
  tmp16 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[215] /* pwLine3.t2 PARAM */, data->simulationInfo->storedRelations[7]);
  gout[12] = (tmp16) ? 1 : -1;
  tmp17 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */, data->simulationInfo->storedRelations[10]);
  tmp18 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */, data->simulationInfo->storedRelations[11]);
  gout[13] = ((tmp17 && tmp18)) ? 1 : -1;
  tmp19 = LessZC(data->localData[0]->realVars[43] /* constantLoad.v variable */, data->simulationInfo->realParameter[35] /* constantLoad.PQBRAK PARAM */, data->simulationInfo->storedRelations[12]);
  gout[14] = (tmp19) ? 1 : -1;
  tmp20 = LessZC(data->localData[0]->realVars[43] /* constantLoad.v variable */, 0.5, data->simulationInfo->storedRelations[13]);
  gout[15] = (tmp20) ? 1 : -1;
  tmp21 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */, data->simulationInfo->storedRelations[10]);
  gout[16] = (tmp21) ? 1 : -1;
  tmp22 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */, data->simulationInfo->storedRelations[11]);
  gout[17] = (tmp22) ? 1 : -1;
  tmp23 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[192] /* pwLine.t1 PARAM */, data->simulationInfo->storedRelations[0]);
  gout[18] = (tmp23) ? 1 : -1;
  tmp24 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[193] /* pwLine.t2 PARAM */, data->simulationInfo->storedRelations[1]);
  gout[19] = (tmp24) ? 1 : -1;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ZC);
#endif

  TRACE_POP
  return 0;
}

const char *OpenIPSL_Examples_Machines_PSSE_GENSAE_relationDescription(int i)
{
  const char *res[] = {"time >= pwLine.t1",
  "time < pwLine.t2",
  "time >= pwLine1.t1",
  "time < pwLine1.t2",
  "time >= pwLine4.t1",
  "time < pwLine4.t2",
  "time >= pwLine3.t1",
  "time < pwLine3.t2",
  "time < pwFault.t1",
  "time < pwFault.t2",
  "time >= constantLoad.t1",
  "time <= constantLoad.t1 + constantLoad.d_t",
  "constantLoad.v < constantLoad.PQBRAK",
  "constantLoad.v < 0.5"};
  return res[i];
}

int OpenIPSL_Examples_Machines_PSSE_GENSAE_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  TRACE_PUSH
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
  
  if(evalforZeroCross) {
    tmp25 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[192] /* pwLine.t1 PARAM */, data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp25;
    tmp26 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[193] /* pwLine.t2 PARAM */, data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[1] = tmp26;
    tmp27 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[203] /* pwLine1.t1 PARAM */, data->simulationInfo->storedRelations[2]);
    data->simulationInfo->relations[2] = tmp27;
    tmp28 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[204] /* pwLine1.t2 PARAM */, data->simulationInfo->storedRelations[3]);
    data->simulationInfo->relations[3] = tmp28;
    tmp29 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[225] /* pwLine4.t1 PARAM */, data->simulationInfo->storedRelations[4]);
    data->simulationInfo->relations[4] = tmp29;
    tmp30 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[226] /* pwLine4.t2 PARAM */, data->simulationInfo->storedRelations[5]);
    data->simulationInfo->relations[5] = tmp30;
    tmp31 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[214] /* pwLine3.t1 PARAM */, data->simulationInfo->storedRelations[6]);
    data->simulationInfo->relations[6] = tmp31;
    tmp32 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[215] /* pwLine3.t2 PARAM */, data->simulationInfo->storedRelations[7]);
    data->simulationInfo->relations[7] = tmp32;
    tmp33 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[181] /* pwFault.t1 PARAM */, data->simulationInfo->storedRelations[8]);
    data->simulationInfo->relations[8] = tmp33;
    tmp34 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[182] /* pwFault.t2 PARAM */, data->simulationInfo->storedRelations[9]);
    data->simulationInfo->relations[9] = tmp34;
    tmp35 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */, data->simulationInfo->storedRelations[10]);
    data->simulationInfo->relations[10] = tmp35;
    tmp36 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */, data->simulationInfo->storedRelations[11]);
    data->simulationInfo->relations[11] = tmp36;
    tmp37 = LessZC(data->localData[0]->realVars[43] /* constantLoad.v variable */, data->simulationInfo->realParameter[35] /* constantLoad.PQBRAK PARAM */, data->simulationInfo->storedRelations[12]);
    data->simulationInfo->relations[12] = tmp37;
    tmp38 = LessZC(data->localData[0]->realVars[43] /* constantLoad.v variable */, 0.5, data->simulationInfo->storedRelations[13]);
    data->simulationInfo->relations[13] = tmp38;
  } else {
    data->simulationInfo->relations[0] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[192] /* pwLine.t1 PARAM */);
    data->simulationInfo->relations[1] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[193] /* pwLine.t2 PARAM */);
    data->simulationInfo->relations[2] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[203] /* pwLine1.t1 PARAM */);
    data->simulationInfo->relations[3] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[204] /* pwLine1.t2 PARAM */);
    data->simulationInfo->relations[4] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[225] /* pwLine4.t1 PARAM */);
    data->simulationInfo->relations[5] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[226] /* pwLine4.t2 PARAM */);
    data->simulationInfo->relations[6] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[214] /* pwLine3.t1 PARAM */);
    data->simulationInfo->relations[7] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[215] /* pwLine3.t2 PARAM */);
    data->simulationInfo->relations[8] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[181] /* pwFault.t1 PARAM */);
    data->simulationInfo->relations[9] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[182] /* pwFault.t2 PARAM */);
    data->simulationInfo->relations[10] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */);
    data->simulationInfo->relations[11] = (data->localData[0]->timeValue <= data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */);
    data->simulationInfo->relations[12] = (data->localData[0]->realVars[43] /* constantLoad.v variable */ < data->simulationInfo->realParameter[35] /* constantLoad.PQBRAK PARAM */);
    data->simulationInfo->relations[13] = (data->localData[0]->realVars[43] /* constantLoad.v variable */ < 0.5);
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

