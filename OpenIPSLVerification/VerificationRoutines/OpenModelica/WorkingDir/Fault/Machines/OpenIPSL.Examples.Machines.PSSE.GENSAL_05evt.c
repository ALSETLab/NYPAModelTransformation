/* Events: Sample, Zero Crossings, Relations, Discrete Changes */
#include "OpenIPSL.Examples.Machines.PSSE.GENSAL_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* Initializes the raw time events of the simulation using the now
   calcualted parameters. */
void OpenIPSL_Examples_Machines_PSSE_GENSAL_function_initSample(DATA *data, threadData_t *threadData)
{
  long i=0;
}

const char *OpenIPSL_Examples_Machines_PSSE_GENSAL_zeroCrossingDescription(int i, int **out_EquationIndexes)
{
  static const char *res[] = {"time >= pwLine.t1 and time < pwLine.t2",
  "time >= pwLine1.t1 and time < pwLine1.t2",
  "constantLoad.v < 0.5",
  "time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t",
  "time >= constantLoad.t1",
  "time <= constantLoad.t1 + constantLoad.d_t",
  "constantLoad.v < constantLoad.PQBRAK",
  "time >= pwLine3.t1 and time < pwLine3.t2",
  "time >= pwLine3.t1",
  "time < pwLine3.t2",
  "time < pwFault.t1",
  "time < pwFault.t2 and pwFault.ground",
  "time < pwFault.t2",
  "time >= pwLine4.t1 and time < pwLine4.t2",
  "time >= pwLine4.t1",
  "time < pwLine4.t2",
  "time >= pwLine1.t1",
  "time < pwLine1.t2",
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
extern void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_110(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_111(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_112(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_113(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_114(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_115(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_116(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_117(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_118(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_209(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_219(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_220(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_221(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_222(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_223(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_224(DATA* data, threadData_t *threadData);

int OpenIPSL_Examples_Machines_PSSE_GENSAL_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_110(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_111(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_112(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_113(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_114(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_115(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_116(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_117(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_118(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_209(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_219(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_220(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_221(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_222(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_223(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_224(data, threadData);
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Machines_PSSE_GENSAL_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
{
  TRACE_PUSH
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
  modelica_boolean tmp40;
  modelica_boolean tmp41;
  modelica_boolean tmp42;
  modelica_boolean tmp43;
  modelica_boolean tmp44;
  
  data->simulationInfo->callStatistics.functionZeroCrossings++;
  
  tmp20 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[186], data->simulationInfo->storedRelations[0]);
  tmp21 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[187], data->simulationInfo->storedRelations[1]);
  gout[0] = ((tmp20 && tmp21)) ? 1 : -1;
  tmp22 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[197], data->simulationInfo->storedRelations[2]);
  tmp23 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[198], data->simulationInfo->storedRelations[3]);
  gout[1] = ((tmp22 && tmp23)) ? 1 : -1;
  tmp24 = LessZC(data->localData[0]->realVars[43] /* constantLoad.v variable */, 0.5, data->simulationInfo->storedRelations[4]);
  gout[2] = (tmp24) ? 1 : -1;
  tmp25 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71], data->simulationInfo->storedRelations[5]);
  tmp26 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71] + data->simulationInfo->realParameter[65], data->simulationInfo->storedRelations[6]);
  gout[3] = ((tmp25 && tmp26)) ? 1 : -1;
  tmp27 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71], data->simulationInfo->storedRelations[5]);
  gout[4] = (tmp27) ? 1 : -1;
  tmp28 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71] + data->simulationInfo->realParameter[65], data->simulationInfo->storedRelations[6]);
  gout[5] = (tmp28) ? 1 : -1;
  tmp29 = LessZC(data->localData[0]->realVars[43] /* constantLoad.v variable */, data->simulationInfo->realParameter[35], data->simulationInfo->storedRelations[7]);
  gout[6] = (tmp29) ? 1 : -1;
  tmp30 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[208], data->simulationInfo->storedRelations[8]);
  tmp31 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[209], data->simulationInfo->storedRelations[9]);
  gout[7] = ((tmp30 && tmp31)) ? 1 : -1;
  tmp32 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[208], data->simulationInfo->storedRelations[8]);
  gout[8] = (tmp32) ? 1 : -1;
  tmp33 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[209], data->simulationInfo->storedRelations[9]);
  gout[9] = (tmp33) ? 1 : -1;
  tmp34 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[175], data->simulationInfo->storedRelations[10]);
  gout[10] = (tmp34) ? 1 : -1;
  tmp35 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[176], data->simulationInfo->storedRelations[11]);
  gout[11] = ((tmp35 && data->simulationInfo->booleanParameter[63])) ? 1 : -1;
  tmp36 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[176], data->simulationInfo->storedRelations[11]);
  gout[12] = (tmp36) ? 1 : -1;
  tmp37 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[219], data->simulationInfo->storedRelations[12]);
  tmp38 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[220], data->simulationInfo->storedRelations[13]);
  gout[13] = ((tmp37 && tmp38)) ? 1 : -1;
  tmp39 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[219], data->simulationInfo->storedRelations[12]);
  gout[14] = (tmp39) ? 1 : -1;
  tmp40 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[220], data->simulationInfo->storedRelations[13]);
  gout[15] = (tmp40) ? 1 : -1;
  tmp41 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[197], data->simulationInfo->storedRelations[2]);
  gout[16] = (tmp41) ? 1 : -1;
  tmp42 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[198], data->simulationInfo->storedRelations[3]);
  gout[17] = (tmp42) ? 1 : -1;
  tmp43 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[186], data->simulationInfo->storedRelations[0]);
  gout[18] = (tmp43) ? 1 : -1;
  tmp44 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[187], data->simulationInfo->storedRelations[1]);
  gout[19] = (tmp44) ? 1 : -1;
  
  TRACE_POP
  return 0;
}

const char *OpenIPSL_Examples_Machines_PSSE_GENSAL_relationDescription(int i)
{
  const char *res[] = {"time >= pwLine.t1",
  "time < pwLine.t2",
  "time >= pwLine1.t1",
  "time < pwLine1.t2",
  "constantLoad.v < 0.5",
  "time >= constantLoad.t1",
  "time <= constantLoad.t1 + constantLoad.d_t",
  "constantLoad.v < constantLoad.PQBRAK",
  "time >= pwLine3.t1",
  "time < pwLine3.t2",
  "time < pwFault.t1",
  "time < pwFault.t2",
  "time >= pwLine4.t1",
  "time < pwLine4.t2"};
  return res[i];
}

int OpenIPSL_Examples_Machines_PSSE_GENSAL_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  TRACE_PUSH
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
  
  if(evalforZeroCross) {
    tmp45 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[186], data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp45;
    tmp46 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[187], data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[1] = tmp46;
    tmp47 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[197], data->simulationInfo->storedRelations[2]);
    data->simulationInfo->relations[2] = tmp47;
    tmp48 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[198], data->simulationInfo->storedRelations[3]);
    data->simulationInfo->relations[3] = tmp48;
    tmp49 = LessZC(data->localData[0]->realVars[43] /* constantLoad.v variable */, 0.5, data->simulationInfo->storedRelations[4]);
    data->simulationInfo->relations[4] = tmp49;
    tmp50 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71], data->simulationInfo->storedRelations[5]);
    data->simulationInfo->relations[5] = tmp50;
    tmp51 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71] + data->simulationInfo->realParameter[65], data->simulationInfo->storedRelations[6]);
    data->simulationInfo->relations[6] = tmp51;
    tmp52 = LessZC(data->localData[0]->realVars[43] /* constantLoad.v variable */, data->simulationInfo->realParameter[35], data->simulationInfo->storedRelations[7]);
    data->simulationInfo->relations[7] = tmp52;
    tmp53 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[208], data->simulationInfo->storedRelations[8]);
    data->simulationInfo->relations[8] = tmp53;
    tmp54 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[209], data->simulationInfo->storedRelations[9]);
    data->simulationInfo->relations[9] = tmp54;
    tmp55 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[175], data->simulationInfo->storedRelations[10]);
    data->simulationInfo->relations[10] = tmp55;
    tmp56 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[176], data->simulationInfo->storedRelations[11]);
    data->simulationInfo->relations[11] = tmp56;
    tmp57 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[219], data->simulationInfo->storedRelations[12]);
    data->simulationInfo->relations[12] = tmp57;
    tmp58 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[220], data->simulationInfo->storedRelations[13]);
    data->simulationInfo->relations[13] = tmp58;
  } else {
    data->simulationInfo->relations[0] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[186]);
    data->simulationInfo->relations[1] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[187]);
    data->simulationInfo->relations[2] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[197]);
    data->simulationInfo->relations[3] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[198]);
    data->simulationInfo->relations[4] = (data->localData[0]->realVars[43] /* constantLoad.v variable */ < 0.5);
    data->simulationInfo->relations[5] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[71]);
    data->simulationInfo->relations[6] = (data->localData[0]->timeValue <= data->simulationInfo->realParameter[71] + data->simulationInfo->realParameter[65]);
    data->simulationInfo->relations[7] = (data->localData[0]->realVars[43] /* constantLoad.v variable */ < data->simulationInfo->realParameter[35]);
    data->simulationInfo->relations[8] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[208]);
    data->simulationInfo->relations[9] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[209]);
    data->simulationInfo->relations[10] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[175]);
    data->simulationInfo->relations[11] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[176]);
    data->simulationInfo->relations[12] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[219]);
    data->simulationInfo->relations[13] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[220]);
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

