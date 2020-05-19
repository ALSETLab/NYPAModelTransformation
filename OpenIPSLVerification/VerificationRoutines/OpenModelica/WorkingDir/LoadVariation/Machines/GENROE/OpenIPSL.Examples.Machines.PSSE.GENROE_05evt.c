/* Events: Sample, Zero Crossings, Relations, Discrete Changes */
#include "OpenIPSL.Examples.Machines.PSSE.GENROE_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* Initializes the raw time events of the simulation using the now
   calcualted parameters. */
void OpenIPSL_Examples_Machines_PSSE_GENROE_function_initSample(DATA *data, threadData_t *threadData)
{
  long i=0;
}

const char *OpenIPSL_Examples_Machines_PSSE_GENROE_zeroCrossingDescription(int i, int **out_EquationIndexes)
{
  static const char *res[] = {"time >= pwLine.t1 and time < pwLine.t2",
  "time >= pwLine1.t1 and time < pwLine1.t2",
  "constantLoad.v < 0.5",
  "time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t",
  "time >= pwLine1.t1",
  "time < pwLine1.t2",
  "time >= pwLine4.t1 and time < pwLine4.t2",
  "time >= pwLine3.t1 and time < pwLine3.t2",
  "time < pwFault.t1",
  "time < pwFault.t2 and pwFault.ground",
  "time < pwFault.t2",
  "time >= pwLine4.t1",
  "time < pwLine4.t2",
  "time >= pwLine3.t1",
  "time < pwLine3.t2",
  "time >= pwLine.t1",
  "time < pwLine.t2",
  "time >= constantLoad.t1",
  "time <= constantLoad.t1 + constantLoad.d_t",
  "constantLoad.v < constantLoad.PQBRAK"};
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
extern void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_115(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_116(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_117(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_118(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_119(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_120(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_121(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_122(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_123(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_124(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_125(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_216(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_225(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_226(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_227(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_230(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_231(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_232(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_233(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_234(DATA* data, threadData_t *threadData);

int OpenIPSL_Examples_Machines_PSSE_GENROE_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_115(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_116(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_117(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_118(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_119(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_120(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_121(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_122(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_123(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_124(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_125(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_216(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_225(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_226(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_227(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_230(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_231(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_232(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_233(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_234(data, threadData);
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Machines_PSSE_GENROE_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
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

  tmp0 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[201] /* pwLine.t1 PARAM */, data->simulationInfo->storedRelations[0]);
  tmp1 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[202] /* pwLine.t2 PARAM */, data->simulationInfo->storedRelations[1]);
  gout[0] = ((tmp0 && tmp1)) ? 1 : -1;
  tmp2 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[212] /* pwLine1.t1 PARAM */, data->simulationInfo->storedRelations[2]);
  tmp3 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[213] /* pwLine1.t2 PARAM */, data->simulationInfo->storedRelations[3]);
  gout[1] = ((tmp2 && tmp3)) ? 1 : -1;
  tmp4 = LessZC(data->localData[0]->realVars[45] /* constantLoad.v variable */, 0.5, data->simulationInfo->storedRelations[4]);
  gout[2] = (tmp4) ? 1 : -1;
  tmp5 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */, data->simulationInfo->storedRelations[5]);
  tmp6 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */, data->simulationInfo->storedRelations[6]);
  gout[3] = ((tmp5 && tmp6)) ? 1 : -1;
  tmp7 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[212] /* pwLine1.t1 PARAM */, data->simulationInfo->storedRelations[2]);
  gout[4] = (tmp7) ? 1 : -1;
  tmp8 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[213] /* pwLine1.t2 PARAM */, data->simulationInfo->storedRelations[3]);
  gout[5] = (tmp8) ? 1 : -1;
  tmp9 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[234] /* pwLine4.t1 PARAM */, data->simulationInfo->storedRelations[7]);
  tmp10 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[235] /* pwLine4.t2 PARAM */, data->simulationInfo->storedRelations[8]);
  gout[6] = ((tmp9 && tmp10)) ? 1 : -1;
  tmp11 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[223] /* pwLine3.t1 PARAM */, data->simulationInfo->storedRelations[9]);
  tmp12 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[224] /* pwLine3.t2 PARAM */, data->simulationInfo->storedRelations[10]);
  gout[7] = ((tmp11 && tmp12)) ? 1 : -1;
  tmp13 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[190] /* pwFault.t1 PARAM */, data->simulationInfo->storedRelations[11]);
  gout[8] = (tmp13) ? 1 : -1;
  tmp14 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[191] /* pwFault.t2 PARAM */, data->simulationInfo->storedRelations[12]);
  gout[9] = ((tmp14 && data->simulationInfo->booleanParameter[63] /* pwFault.ground PARAM */)) ? 1 : -1;
  tmp15 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[191] /* pwFault.t2 PARAM */, data->simulationInfo->storedRelations[12]);
  gout[10] = (tmp15) ? 1 : -1;
  tmp16 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[234] /* pwLine4.t1 PARAM */, data->simulationInfo->storedRelations[7]);
  gout[11] = (tmp16) ? 1 : -1;
  tmp17 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[235] /* pwLine4.t2 PARAM */, data->simulationInfo->storedRelations[8]);
  gout[12] = (tmp17) ? 1 : -1;
  tmp18 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[223] /* pwLine3.t1 PARAM */, data->simulationInfo->storedRelations[9]);
  gout[13] = (tmp18) ? 1 : -1;
  tmp19 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[224] /* pwLine3.t2 PARAM */, data->simulationInfo->storedRelations[10]);
  gout[14] = (tmp19) ? 1 : -1;
  tmp20 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[201] /* pwLine.t1 PARAM */, data->simulationInfo->storedRelations[0]);
  gout[15] = (tmp20) ? 1 : -1;
  tmp21 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[202] /* pwLine.t2 PARAM */, data->simulationInfo->storedRelations[1]);
  gout[16] = (tmp21) ? 1 : -1;
  tmp22 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */, data->simulationInfo->storedRelations[5]);
  gout[17] = (tmp22) ? 1 : -1;
  tmp23 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */, data->simulationInfo->storedRelations[6]);
  gout[18] = (tmp23) ? 1 : -1;
  tmp24 = LessZC(data->localData[0]->realVars[45] /* constantLoad.v variable */, data->simulationInfo->realParameter[35] /* constantLoad.PQBRAK PARAM */, data->simulationInfo->storedRelations[13]);
  gout[19] = (tmp24) ? 1 : -1;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ZC);
#endif

  TRACE_POP
  return 0;
}

const char *OpenIPSL_Examples_Machines_PSSE_GENROE_relationDescription(int i)
{
  const char *res[] = {"time >= pwLine.t1",
  "time < pwLine.t2",
  "time >= pwLine1.t1",
  "time < pwLine1.t2",
  "constantLoad.v < 0.5",
  "time >= constantLoad.t1",
  "time <= constantLoad.t1 + constantLoad.d_t",
  "time >= pwLine4.t1",
  "time < pwLine4.t2",
  "time >= pwLine3.t1",
  "time < pwLine3.t2",
  "time < pwFault.t1",
  "time < pwFault.t2",
  "constantLoad.v < constantLoad.PQBRAK"};
  return res[i];
}

int OpenIPSL_Examples_Machines_PSSE_GENROE_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
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
    tmp25 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[201] /* pwLine.t1 PARAM */, data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp25;
    tmp26 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[202] /* pwLine.t2 PARAM */, data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[1] = tmp26;
    tmp27 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[212] /* pwLine1.t1 PARAM */, data->simulationInfo->storedRelations[2]);
    data->simulationInfo->relations[2] = tmp27;
    tmp28 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[213] /* pwLine1.t2 PARAM */, data->simulationInfo->storedRelations[3]);
    data->simulationInfo->relations[3] = tmp28;
    tmp29 = LessZC(data->localData[0]->realVars[45] /* constantLoad.v variable */, 0.5, data->simulationInfo->storedRelations[4]);
    data->simulationInfo->relations[4] = tmp29;
    tmp30 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */, data->simulationInfo->storedRelations[5]);
    data->simulationInfo->relations[5] = tmp30;
    tmp31 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */, data->simulationInfo->storedRelations[6]);
    data->simulationInfo->relations[6] = tmp31;
    tmp32 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[234] /* pwLine4.t1 PARAM */, data->simulationInfo->storedRelations[7]);
    data->simulationInfo->relations[7] = tmp32;
    tmp33 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[235] /* pwLine4.t2 PARAM */, data->simulationInfo->storedRelations[8]);
    data->simulationInfo->relations[8] = tmp33;
    tmp34 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[223] /* pwLine3.t1 PARAM */, data->simulationInfo->storedRelations[9]);
    data->simulationInfo->relations[9] = tmp34;
    tmp35 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[224] /* pwLine3.t2 PARAM */, data->simulationInfo->storedRelations[10]);
    data->simulationInfo->relations[10] = tmp35;
    tmp36 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[190] /* pwFault.t1 PARAM */, data->simulationInfo->storedRelations[11]);
    data->simulationInfo->relations[11] = tmp36;
    tmp37 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[191] /* pwFault.t2 PARAM */, data->simulationInfo->storedRelations[12]);
    data->simulationInfo->relations[12] = tmp37;
    tmp38 = LessZC(data->localData[0]->realVars[45] /* constantLoad.v variable */, data->simulationInfo->realParameter[35] /* constantLoad.PQBRAK PARAM */, data->simulationInfo->storedRelations[13]);
    data->simulationInfo->relations[13] = tmp38;
  } else {
    data->simulationInfo->relations[0] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[201] /* pwLine.t1 PARAM */);
    data->simulationInfo->relations[1] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[202] /* pwLine.t2 PARAM */);
    data->simulationInfo->relations[2] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[212] /* pwLine1.t1 PARAM */);
    data->simulationInfo->relations[3] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[213] /* pwLine1.t2 PARAM */);
    data->simulationInfo->relations[4] = (data->localData[0]->realVars[45] /* constantLoad.v variable */ < 0.5);
    data->simulationInfo->relations[5] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */);
    data->simulationInfo->relations[6] = (data->localData[0]->timeValue <= data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */);
    data->simulationInfo->relations[7] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[234] /* pwLine4.t1 PARAM */);
    data->simulationInfo->relations[8] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[235] /* pwLine4.t2 PARAM */);
    data->simulationInfo->relations[9] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[223] /* pwLine3.t1 PARAM */);
    data->simulationInfo->relations[10] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[224] /* pwLine3.t2 PARAM */);
    data->simulationInfo->relations[11] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[190] /* pwFault.t1 PARAM */);
    data->simulationInfo->relations[12] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[191] /* pwFault.t2 PARAM */);
    data->simulationInfo->relations[13] = (data->localData[0]->realVars[45] /* constantLoad.v variable */ < data->simulationInfo->realParameter[35] /* constantLoad.PQBRAK PARAM */);
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

