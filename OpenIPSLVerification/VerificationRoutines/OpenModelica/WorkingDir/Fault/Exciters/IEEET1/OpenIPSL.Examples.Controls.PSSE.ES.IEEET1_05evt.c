/* Events: Sample, Zero Crossings, Relations, Discrete Changes */
#include "OpenIPSL.Examples.Controls.PSSE.ES.IEEET1_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* Initializes the raw time events of the simulation using the now
   calcualted parameters. */
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_function_initSample(DATA *data, threadData_t *threadData)
{
  long i=0;
}

const char *OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_zeroCrossingDescription(int i, int **out_EquationIndexes)
{
  static const char *res[] = {"time >= pwLine.t1 and time < pwLine.t2",
  "time >= pwLine1.t1 and time < pwLine1.t2",
  "constantLoad.v < 0.5",
  "time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t",
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
  "time < pwLine.t2",
  "time >= constantLoad.t1",
  "time <= constantLoad.t1 + constantLoad.d_t",
  "constantLoad.v < constantLoad.PQBRAK",
  "iEEET2_1.simpleLagLim.state > iEEET2_1.simpleLagLim.outMax and iEEET2_1.simpleLagLim.K * iEEET2_1.simpleLagLim.u - iEEET2_1.simpleLagLim.state < 0.0",
  "iEEET2_1.simpleLagLim.state < iEEET2_1.simpleLagLim.outMin and iEEET2_1.simpleLagLim.K * iEEET2_1.simpleLagLim.u - iEEET2_1.simpleLagLim.state > 0.0"};
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
  static const int occurEqs20[] = {1,283};
  static const int occurEqs21[] = {1,284};
  static const int *occurEqs[] = {occurEqs0,occurEqs1,occurEqs2,occurEqs3,occurEqs4,occurEqs5,occurEqs6,occurEqs7,occurEqs8,occurEqs9,occurEqs10,occurEqs11,occurEqs12,occurEqs13,occurEqs14,occurEqs15,occurEqs16,occurEqs17,occurEqs18,occurEqs19,occurEqs20,occurEqs21};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
}

/* forwarded equations */
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_157(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_158(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_159(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_160(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_161(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_162(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_163(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_164(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_165(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_166(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_167(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_168(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_169(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_170(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_171(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_172(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_173(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_264(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_273(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_274(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_275(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_276(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_277(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_278(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_279(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_280(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_281(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_282(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_288(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_289(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_290(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_291(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_292(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_293(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_294(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_295(DATA* data, threadData_t *threadData);

int OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_157(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_158(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_159(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_160(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_161(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_162(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_163(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_164(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_165(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_166(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_167(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_168(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_169(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_170(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_171(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_172(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_173(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_264(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_273(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_274(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_275(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_276(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_277(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_278(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_279(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_280(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_281(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_282(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_288(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_289(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_290(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_291(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_292(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_293(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_294(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_295(data, threadData);
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
{
  TRACE_PUSH
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
  
  data->simulationInfo->callStatistics.functionZeroCrossings++;
  
  tmp6 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[259], data->simulationInfo->storedRelations[0]);
  tmp7 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[260], data->simulationInfo->storedRelations[1]);
  gout[0] = ((tmp6 && tmp7)) ? 1 : -1;
  tmp8 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[270], data->simulationInfo->storedRelations[2]);
  tmp9 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[271], data->simulationInfo->storedRelations[3]);
  gout[1] = ((tmp8 && tmp9)) ? 1 : -1;
  tmp10 = LessZC(data->localData[0]->realVars[53] /* constantLoad.v variable */, 0.5, data->simulationInfo->storedRelations[4]);
  gout[2] = (tmp10) ? 1 : -1;
  tmp11 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[72], data->simulationInfo->storedRelations[5]);
  tmp12 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[72] + data->simulationInfo->realParameter[66], data->simulationInfo->storedRelations[6]);
  gout[3] = ((tmp11 && tmp12)) ? 1 : -1;
  tmp13 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[281], data->simulationInfo->storedRelations[7]);
  tmp14 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[282], data->simulationInfo->storedRelations[8]);
  gout[4] = ((tmp13 && tmp14)) ? 1 : -1;
  tmp15 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[281], data->simulationInfo->storedRelations[7]);
  gout[5] = (tmp15) ? 1 : -1;
  tmp16 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[282], data->simulationInfo->storedRelations[8]);
  gout[6] = (tmp16) ? 1 : -1;
  tmp17 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[248], data->simulationInfo->storedRelations[9]);
  gout[7] = (tmp17) ? 1 : -1;
  tmp18 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[249], data->simulationInfo->storedRelations[10]);
  gout[8] = ((tmp18 && data->simulationInfo->booleanParameter[64])) ? 1 : -1;
  tmp19 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[249], data->simulationInfo->storedRelations[10]);
  gout[9] = (tmp19) ? 1 : -1;
  tmp20 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[292], data->simulationInfo->storedRelations[11]);
  tmp21 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[293], data->simulationInfo->storedRelations[12]);
  gout[10] = ((tmp20 && tmp21)) ? 1 : -1;
  tmp22 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[292], data->simulationInfo->storedRelations[11]);
  gout[11] = (tmp22) ? 1 : -1;
  tmp23 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[293], data->simulationInfo->storedRelations[12]);
  gout[12] = (tmp23) ? 1 : -1;
  tmp24 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[270], data->simulationInfo->storedRelations[2]);
  gout[13] = (tmp24) ? 1 : -1;
  tmp25 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[271], data->simulationInfo->storedRelations[3]);
  gout[14] = (tmp25) ? 1 : -1;
  tmp26 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[259], data->simulationInfo->storedRelations[0]);
  gout[15] = (tmp26) ? 1 : -1;
  tmp27 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[260], data->simulationInfo->storedRelations[1]);
  gout[16] = (tmp27) ? 1 : -1;
  tmp28 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[72], data->simulationInfo->storedRelations[5]);
  gout[17] = (tmp28) ? 1 : -1;
  tmp29 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[72] + data->simulationInfo->realParameter[66], data->simulationInfo->storedRelations[6]);
  gout[18] = (tmp29) ? 1 : -1;
  tmp30 = LessZC(data->localData[0]->realVars[53] /* constantLoad.v variable */, data->simulationInfo->realParameter[36], data->simulationInfo->storedRelations[13]);
  gout[19] = (tmp30) ? 1 : -1;
  tmp31 = GreaterZC(data->localData[0]->realVars[11] /* iEEET2_1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[238], data->simulationInfo->storedRelations[14]);
  tmp32 = LessZC((data->simulationInfo->realParameter[235]) * (data->localData[0]->realVars[95] /* iEEET2_1.simpleLagLim.u variable */) - data->localData[0]->realVars[11] /* iEEET2_1.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[15]);
  gout[20] = ((tmp31 && tmp32)) ? 1 : -1;
  tmp33 = LessZC(data->localData[0]->realVars[11] /* iEEET2_1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[239], data->simulationInfo->storedRelations[16]);
  tmp34 = GreaterZC((data->simulationInfo->realParameter[235]) * (data->localData[0]->realVars[95] /* iEEET2_1.simpleLagLim.u variable */) - data->localData[0]->realVars[11] /* iEEET2_1.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[17]);
  gout[21] = ((tmp33 && tmp34)) ? 1 : -1;
  
  TRACE_POP
  return 0;
}

const char *OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_relationDescription(int i)
{
  const char *res[] = {"time >= pwLine.t1",
  "time < pwLine.t2",
  "time >= pwLine1.t1",
  "time < pwLine1.t2",
  "constantLoad.v < 0.5",
  "time >= constantLoad.t1",
  "time <= constantLoad.t1 + constantLoad.d_t",
  "time >= pwLine3.t1",
  "time < pwLine3.t2",
  "time < pwFault.t1",
  "time < pwFault.t2",
  "time >= pwLine4.t1",
  "time < pwLine4.t2",
  "constantLoad.v < constantLoad.PQBRAK",
  "iEEET2_1.simpleLagLim.state > iEEET2_1.simpleLagLim.outMax",
  "iEEET2_1.simpleLagLim.K * iEEET2_1.simpleLagLim.u - iEEET2_1.simpleLagLim.state < 0.0",
  "iEEET2_1.simpleLagLim.state < iEEET2_1.simpleLagLim.outMin",
  "iEEET2_1.simpleLagLim.K * iEEET2_1.simpleLagLim.u - iEEET2_1.simpleLagLim.state > 0.0"};
  return res[i];
}

int OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  TRACE_PUSH
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
  
  if(evalforZeroCross) {
    tmp35 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[259], data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp35;
    tmp36 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[260], data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[1] = tmp36;
    tmp37 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[270], data->simulationInfo->storedRelations[2]);
    data->simulationInfo->relations[2] = tmp37;
    tmp38 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[271], data->simulationInfo->storedRelations[3]);
    data->simulationInfo->relations[3] = tmp38;
    tmp39 = LessZC(data->localData[0]->realVars[53] /* constantLoad.v variable */, 0.5, data->simulationInfo->storedRelations[4]);
    data->simulationInfo->relations[4] = tmp39;
    tmp40 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[72], data->simulationInfo->storedRelations[5]);
    data->simulationInfo->relations[5] = tmp40;
    tmp41 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[72] + data->simulationInfo->realParameter[66], data->simulationInfo->storedRelations[6]);
    data->simulationInfo->relations[6] = tmp41;
    tmp42 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[281], data->simulationInfo->storedRelations[7]);
    data->simulationInfo->relations[7] = tmp42;
    tmp43 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[282], data->simulationInfo->storedRelations[8]);
    data->simulationInfo->relations[8] = tmp43;
    tmp44 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[248], data->simulationInfo->storedRelations[9]);
    data->simulationInfo->relations[9] = tmp44;
    tmp45 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[249], data->simulationInfo->storedRelations[10]);
    data->simulationInfo->relations[10] = tmp45;
    tmp46 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[292], data->simulationInfo->storedRelations[11]);
    data->simulationInfo->relations[11] = tmp46;
    tmp47 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[293], data->simulationInfo->storedRelations[12]);
    data->simulationInfo->relations[12] = tmp47;
    tmp48 = LessZC(data->localData[0]->realVars[53] /* constantLoad.v variable */, data->simulationInfo->realParameter[36], data->simulationInfo->storedRelations[13]);
    data->simulationInfo->relations[13] = tmp48;
    tmp49 = GreaterZC(data->localData[0]->realVars[11] /* iEEET2_1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[238], data->simulationInfo->storedRelations[14]);
    data->simulationInfo->relations[14] = tmp49;
    tmp50 = LessZC((data->simulationInfo->realParameter[235]) * (data->localData[0]->realVars[95] /* iEEET2_1.simpleLagLim.u variable */) - data->localData[0]->realVars[11] /* iEEET2_1.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[15]);
    data->simulationInfo->relations[15] = tmp50;
    tmp51 = LessZC(data->localData[0]->realVars[11] /* iEEET2_1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[239], data->simulationInfo->storedRelations[16]);
    data->simulationInfo->relations[16] = tmp51;
    tmp52 = GreaterZC((data->simulationInfo->realParameter[235]) * (data->localData[0]->realVars[95] /* iEEET2_1.simpleLagLim.u variable */) - data->localData[0]->realVars[11] /* iEEET2_1.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[17]);
    data->simulationInfo->relations[17] = tmp52;
  } else {
    data->simulationInfo->relations[0] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[259]);
    data->simulationInfo->relations[1] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[260]);
    data->simulationInfo->relations[2] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[270]);
    data->simulationInfo->relations[3] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[271]);
    data->simulationInfo->relations[4] = (data->localData[0]->realVars[53] /* constantLoad.v variable */ < 0.5);
    data->simulationInfo->relations[5] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[72]);
    data->simulationInfo->relations[6] = (data->localData[0]->timeValue <= data->simulationInfo->realParameter[72] + data->simulationInfo->realParameter[66]);
    data->simulationInfo->relations[7] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[281]);
    data->simulationInfo->relations[8] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[282]);
    data->simulationInfo->relations[9] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[248]);
    data->simulationInfo->relations[10] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[249]);
    data->simulationInfo->relations[11] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[292]);
    data->simulationInfo->relations[12] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[293]);
    data->simulationInfo->relations[13] = (data->localData[0]->realVars[53] /* constantLoad.v variable */ < data->simulationInfo->realParameter[36]);
    data->simulationInfo->relations[14] = (data->localData[0]->realVars[11] /* iEEET2_1.simpleLagLim.state STATE(1) */ > data->simulationInfo->realParameter[238]);
    data->simulationInfo->relations[15] = ((data->simulationInfo->realParameter[235]) * (data->localData[0]->realVars[95] /* iEEET2_1.simpleLagLim.u variable */) - data->localData[0]->realVars[11] /* iEEET2_1.simpleLagLim.state STATE(1) */ < 0.0);
    data->simulationInfo->relations[16] = (data->localData[0]->realVars[11] /* iEEET2_1.simpleLagLim.state STATE(1) */ < data->simulationInfo->realParameter[239]);
    data->simulationInfo->relations[17] = ((data->simulationInfo->realParameter[235]) * (data->localData[0]->realVars[95] /* iEEET2_1.simpleLagLim.u variable */) - data->localData[0]->realVars[11] /* iEEET2_1.simpleLagLim.state STATE(1) */ > 0.0);
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

