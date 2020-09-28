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
  "iEEET1.simpleLagLim.state > iEEET1.simpleLagLim.outMax and iEEET1.simpleLagLim.K * iEEET1.simpleLagLim.u - iEEET1.simpleLagLim.state < 0.0",
  "iEEET1.simpleLagLim.state < iEEET1.simpleLagLim.outMin and iEEET1.simpleLagLim.K * iEEET1.simpleLagLim.u - iEEET1.simpleLagLim.state > 0.0"};
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
  static const int occurEqs20[] = {1,285};
  static const int occurEqs21[] = {1,286};
  static const int *occurEqs[] = {occurEqs0,occurEqs1,occurEqs2,occurEqs3,occurEqs4,occurEqs5,occurEqs6,occurEqs7,occurEqs8,occurEqs9,occurEqs10,occurEqs11,occurEqs12,occurEqs13,occurEqs14,occurEqs15,occurEqs16,occurEqs17,occurEqs18,occurEqs19,occurEqs20,occurEqs21};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
}

/* forwarded equations */
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
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_174(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_175(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_266(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_275(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_276(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_277(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_278(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_279(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_280(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_281(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_282(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_283(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_284(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_290(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_291(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_292(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_293(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_294(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_295(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_296(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_297(DATA* data, threadData_t *threadData);

int OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

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

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_174(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_175(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_266(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_275(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_276(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_277(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_278(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_279(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_280(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_281(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_282(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_283(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_284(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_290(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_291(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_292(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_293(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_294(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_295(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_296(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_297(data, threadData);
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
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
  modelica_boolean tmp25;
  modelica_boolean tmp26;
  modelica_boolean tmp27;
  modelica_boolean tmp28;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_ZC);
#endif
  data->simulationInfo->callStatistics.functionZeroCrossings++;

  tmp0 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[273] /* pwLine.t1 PARAM */, data->simulationInfo->storedRelations[0]);
  tmp1 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[274] /* pwLine.t2 PARAM */, data->simulationInfo->storedRelations[1]);
  gout[0] = ((tmp0 && tmp1)) ? 1 : -1;
  tmp2 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[284] /* pwLine1.t1 PARAM */, data->simulationInfo->storedRelations[2]);
  tmp3 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[285] /* pwLine1.t2 PARAM */, data->simulationInfo->storedRelations[3]);
  gout[1] = ((tmp2 && tmp3)) ? 1 : -1;
  tmp4 = LessZC(data->localData[0]->realVars[53] /* constantLoad.v variable */, 0.5, data->simulationInfo->storedRelations[4]);
  gout[2] = (tmp4) ? 1 : -1;
  tmp5 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */, data->simulationInfo->storedRelations[5]);
  tmp6 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[67] /* constantLoad.d_t PARAM */, data->simulationInfo->storedRelations[6]);
  gout[3] = ((tmp5 && tmp6)) ? 1 : -1;
  tmp7 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[295] /* pwLine3.t1 PARAM */, data->simulationInfo->storedRelations[7]);
  tmp8 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[296] /* pwLine3.t2 PARAM */, data->simulationInfo->storedRelations[8]);
  gout[4] = ((tmp7 && tmp8)) ? 1 : -1;
  tmp9 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[295] /* pwLine3.t1 PARAM */, data->simulationInfo->storedRelations[7]);
  gout[5] = (tmp9) ? 1 : -1;
  tmp10 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[296] /* pwLine3.t2 PARAM */, data->simulationInfo->storedRelations[8]);
  gout[6] = (tmp10) ? 1 : -1;
  tmp11 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[262] /* pwFault.t1 PARAM */, data->simulationInfo->storedRelations[9]);
  gout[7] = (tmp11) ? 1 : -1;
  tmp12 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[263] /* pwFault.t2 PARAM */, data->simulationInfo->storedRelations[10]);
  gout[8] = ((tmp12 && data->simulationInfo->booleanParameter[64] /* pwFault.ground PARAM */)) ? 1 : -1;
  tmp13 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[263] /* pwFault.t2 PARAM */, data->simulationInfo->storedRelations[10]);
  gout[9] = (tmp13) ? 1 : -1;
  tmp14 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[306] /* pwLine4.t1 PARAM */, data->simulationInfo->storedRelations[11]);
  tmp15 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[307] /* pwLine4.t2 PARAM */, data->simulationInfo->storedRelations[12]);
  gout[10] = ((tmp14 && tmp15)) ? 1 : -1;
  tmp16 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[306] /* pwLine4.t1 PARAM */, data->simulationInfo->storedRelations[11]);
  gout[11] = (tmp16) ? 1 : -1;
  tmp17 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[307] /* pwLine4.t2 PARAM */, data->simulationInfo->storedRelations[12]);
  gout[12] = (tmp17) ? 1 : -1;
  tmp18 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[284] /* pwLine1.t1 PARAM */, data->simulationInfo->storedRelations[2]);
  gout[13] = (tmp18) ? 1 : -1;
  tmp19 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[285] /* pwLine1.t2 PARAM */, data->simulationInfo->storedRelations[3]);
  gout[14] = (tmp19) ? 1 : -1;
  tmp20 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[273] /* pwLine.t1 PARAM */, data->simulationInfo->storedRelations[0]);
  gout[15] = (tmp20) ? 1 : -1;
  tmp21 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[274] /* pwLine.t2 PARAM */, data->simulationInfo->storedRelations[1]);
  gout[16] = (tmp21) ? 1 : -1;
  tmp22 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */, data->simulationInfo->storedRelations[5]);
  gout[17] = (tmp22) ? 1 : -1;
  tmp23 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[67] /* constantLoad.d_t PARAM */, data->simulationInfo->storedRelations[6]);
  gout[18] = (tmp23) ? 1 : -1;
  tmp24 = LessZC(data->localData[0]->realVars[53] /* constantLoad.v variable */, data->simulationInfo->realParameter[37] /* constantLoad.PQBRAK PARAM */, data->simulationInfo->storedRelations[13]);
  gout[19] = (tmp24) ? 1 : -1;
  tmp25 = GreaterZC(data->localData[0]->realVars[11] /* iEEET1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[251] /* iEEET1.simpleLagLim.outMax PARAM */, data->simulationInfo->storedRelations[14]);
  tmp26 = LessZC((data->simulationInfo->realParameter[247] /* iEEET1.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[95] /* iEEET1.simpleLagLim.u variable */) - data->localData[0]->realVars[11] /* iEEET1.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[15]);
  gout[20] = ((tmp25 && tmp26)) ? 1 : -1;
  tmp27 = LessZC(data->localData[0]->realVars[11] /* iEEET1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[252] /* iEEET1.simpleLagLim.outMin PARAM */, data->simulationInfo->storedRelations[16]);
  tmp28 = GreaterZC((data->simulationInfo->realParameter[247] /* iEEET1.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[95] /* iEEET1.simpleLagLim.u variable */) - data->localData[0]->realVars[11] /* iEEET1.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[17]);
  gout[21] = ((tmp27 && tmp28)) ? 1 : -1;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ZC);
#endif

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
  "iEEET1.simpleLagLim.state > iEEET1.simpleLagLim.outMax",
  "iEEET1.simpleLagLim.K * iEEET1.simpleLagLim.u - iEEET1.simpleLagLim.state < 0.0",
  "iEEET1.simpleLagLim.state < iEEET1.simpleLagLim.outMin",
  "iEEET1.simpleLagLim.K * iEEET1.simpleLagLim.u - iEEET1.simpleLagLim.state > 0.0"};
  return res[i];
}

int OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  TRACE_PUSH
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
  
  if(evalforZeroCross) {
    tmp29 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[273] /* pwLine.t1 PARAM */, data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp29;
    tmp30 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[274] /* pwLine.t2 PARAM */, data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[1] = tmp30;
    tmp31 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[284] /* pwLine1.t1 PARAM */, data->simulationInfo->storedRelations[2]);
    data->simulationInfo->relations[2] = tmp31;
    tmp32 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[285] /* pwLine1.t2 PARAM */, data->simulationInfo->storedRelations[3]);
    data->simulationInfo->relations[3] = tmp32;
    tmp33 = LessZC(data->localData[0]->realVars[53] /* constantLoad.v variable */, 0.5, data->simulationInfo->storedRelations[4]);
    data->simulationInfo->relations[4] = tmp33;
    tmp34 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */, data->simulationInfo->storedRelations[5]);
    data->simulationInfo->relations[5] = tmp34;
    tmp35 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[67] /* constantLoad.d_t PARAM */, data->simulationInfo->storedRelations[6]);
    data->simulationInfo->relations[6] = tmp35;
    tmp36 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[295] /* pwLine3.t1 PARAM */, data->simulationInfo->storedRelations[7]);
    data->simulationInfo->relations[7] = tmp36;
    tmp37 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[296] /* pwLine3.t2 PARAM */, data->simulationInfo->storedRelations[8]);
    data->simulationInfo->relations[8] = tmp37;
    tmp38 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[262] /* pwFault.t1 PARAM */, data->simulationInfo->storedRelations[9]);
    data->simulationInfo->relations[9] = tmp38;
    tmp39 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[263] /* pwFault.t2 PARAM */, data->simulationInfo->storedRelations[10]);
    data->simulationInfo->relations[10] = tmp39;
    tmp40 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[306] /* pwLine4.t1 PARAM */, data->simulationInfo->storedRelations[11]);
    data->simulationInfo->relations[11] = tmp40;
    tmp41 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[307] /* pwLine4.t2 PARAM */, data->simulationInfo->storedRelations[12]);
    data->simulationInfo->relations[12] = tmp41;
    tmp42 = LessZC(data->localData[0]->realVars[53] /* constantLoad.v variable */, data->simulationInfo->realParameter[37] /* constantLoad.PQBRAK PARAM */, data->simulationInfo->storedRelations[13]);
    data->simulationInfo->relations[13] = tmp42;
    tmp43 = GreaterZC(data->localData[0]->realVars[11] /* iEEET1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[251] /* iEEET1.simpleLagLim.outMax PARAM */, data->simulationInfo->storedRelations[14]);
    data->simulationInfo->relations[14] = tmp43;
    tmp44 = LessZC((data->simulationInfo->realParameter[247] /* iEEET1.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[95] /* iEEET1.simpleLagLim.u variable */) - data->localData[0]->realVars[11] /* iEEET1.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[15]);
    data->simulationInfo->relations[15] = tmp44;
    tmp45 = LessZC(data->localData[0]->realVars[11] /* iEEET1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[252] /* iEEET1.simpleLagLim.outMin PARAM */, data->simulationInfo->storedRelations[16]);
    data->simulationInfo->relations[16] = tmp45;
    tmp46 = GreaterZC((data->simulationInfo->realParameter[247] /* iEEET1.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[95] /* iEEET1.simpleLagLim.u variable */) - data->localData[0]->realVars[11] /* iEEET1.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[17]);
    data->simulationInfo->relations[17] = tmp46;
  } else {
    data->simulationInfo->relations[0] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[273] /* pwLine.t1 PARAM */);
    data->simulationInfo->relations[1] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[274] /* pwLine.t2 PARAM */);
    data->simulationInfo->relations[2] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[284] /* pwLine1.t1 PARAM */);
    data->simulationInfo->relations[3] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[285] /* pwLine1.t2 PARAM */);
    data->simulationInfo->relations[4] = (data->localData[0]->realVars[53] /* constantLoad.v variable */ < 0.5);
    data->simulationInfo->relations[5] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */);
    data->simulationInfo->relations[6] = (data->localData[0]->timeValue <= data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[67] /* constantLoad.d_t PARAM */);
    data->simulationInfo->relations[7] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[295] /* pwLine3.t1 PARAM */);
    data->simulationInfo->relations[8] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[296] /* pwLine3.t2 PARAM */);
    data->simulationInfo->relations[9] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[262] /* pwFault.t1 PARAM */);
    data->simulationInfo->relations[10] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[263] /* pwFault.t2 PARAM */);
    data->simulationInfo->relations[11] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[306] /* pwLine4.t1 PARAM */);
    data->simulationInfo->relations[12] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[307] /* pwLine4.t2 PARAM */);
    data->simulationInfo->relations[13] = (data->localData[0]->realVars[53] /* constantLoad.v variable */ < data->simulationInfo->realParameter[37] /* constantLoad.PQBRAK PARAM */);
    data->simulationInfo->relations[14] = (data->localData[0]->realVars[11] /* iEEET1.simpleLagLim.state STATE(1) */ > data->simulationInfo->realParameter[251] /* iEEET1.simpleLagLim.outMax PARAM */);
    data->simulationInfo->relations[15] = ((data->simulationInfo->realParameter[247] /* iEEET1.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[95] /* iEEET1.simpleLagLim.u variable */) - data->localData[0]->realVars[11] /* iEEET1.simpleLagLim.state STATE(1) */ < 0.0);
    data->simulationInfo->relations[16] = (data->localData[0]->realVars[11] /* iEEET1.simpleLagLim.state STATE(1) */ < data->simulationInfo->realParameter[252] /* iEEET1.simpleLagLim.outMin PARAM */);
    data->simulationInfo->relations[17] = ((data->simulationInfo->realParameter[247] /* iEEET1.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[95] /* iEEET1.simpleLagLim.u variable */) - data->localData[0]->realVars[11] /* iEEET1.simpleLagLim.state STATE(1) */ > 0.0);
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

