/* Events: Sample, Zero Crossings, Relations, Discrete Changes */
#include "OpenIPSL.Examples.Banks.PSSE.CSVGN1_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* Initializes the raw time events of the simulation using the now
   calcualted parameters. */
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_function_initSample(DATA *data, threadData_t *threadData)
{
  long i=0;
}

const char *OpenIPSL_Examples_Banks_PSSE_CSVGN1_zeroCrossingDescription(int i, int **out_EquationIndexes)
{
  static const char *res[] = {"time >= pwLine.t1 and time < pwLine.t2",
  "time >= pwLine1.t1 and time < pwLine1.t2",
  "constantLoad.v < 0.5",
  "time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t",
  "time >= pwLine1.t1",
  "time < pwLine1.t2",
  "time >= pwLine3.t1 and time < pwLine3.t2",
  "time >= pwLine3.t1",
  "time < pwLine3.t2",
  "time < pwFault.t1",
  "time < pwFault.t2 and pwFault.ground",
  "time < pwFault.t2",
  "time >= pwLine4.t1 and time < pwLine4.t2",
  "time >= pwLine4.t1",
  "time < pwLine4.t2",
  "time >= pwLine2.t1 and time < pwLine2.t2",
  "time >= pwLine2.t1",
  "time < pwLine2.t2",
  "time >= pwLine.t1",
  "time < pwLine.t2",
  "time >= constantLoad.t1",
  "time <= constantLoad.t1 + constantLoad.d_t",
  "constantLoad.v < constantLoad.PQBRAK",
  "cSVGN1.LagLim.state > cSVGN1.LagLim.outMax and cSVGN1.LagLim.K * cSVGN1.LagLim.u - cSVGN1.LagLim.state < 0.0",
  "cSVGN1.LagLim.state < cSVGN1.LagLim.outMin and cSVGN1.LagLim.K * cSVGN1.LagLim.u - cSVGN1.LagLim.state > 0.0",
  "cSVGN1.leadLagLim.gain.y > cSVGN1.leadLagLim.limiter.uMax",
  "cSVGN1.leadLagLim.gain.y < cSVGN1.leadLagLim.limiter.uMin"};
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
  static const int occurEqs20[] = {1,-1};
  static const int occurEqs21[] = {1,-1};
  static const int occurEqs22[] = {1,-1};
  static const int occurEqs23[] = {1,952};
  static const int occurEqs24[] = {1,953};
  static const int occurEqs25[] = {1,-1};
  static const int occurEqs26[] = {1,-1};
  static const int *occurEqs[] = {occurEqs0,occurEqs1,occurEqs2,occurEqs3,occurEqs4,occurEqs5,occurEqs6,occurEqs7,occurEqs8,occurEqs9,occurEqs10,occurEqs11,occurEqs12,occurEqs13,occurEqs14,occurEqs15,occurEqs16,occurEqs17,occurEqs18,occurEqs19,occurEqs20,occurEqs21,occurEqs22,occurEqs23,occurEqs24,occurEqs25,occurEqs26};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
}

/* forwarded equations */
extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_762(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_763(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_764(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_765(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_766(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_767(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_768(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_769(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_770(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_771(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_772(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_909(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_911(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_912(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_913(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_916(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_917(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_918(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_948(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_949(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_950(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_951(DATA* data, threadData_t *threadData);

int OpenIPSL_Examples_Banks_PSSE_CSVGN1_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_762(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_763(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_764(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_765(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_766(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_767(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_768(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_769(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_770(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_771(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_772(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_909(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_911(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_912(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_913(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_916(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_917(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_918(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_948(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_949(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_950(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_951(data, threadData);
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Banks_PSSE_CSVGN1_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
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
  modelica_boolean tmp29;
  modelica_boolean tmp30;
  modelica_boolean tmp31;
  modelica_boolean tmp32;
  modelica_boolean tmp33;
  modelica_boolean tmp34;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_ZC);
#endif
  data->simulationInfo->callStatistics.functionZeroCrossings++;

  tmp0 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[293] /* pwLine.t1 PARAM */, data->simulationInfo->storedRelations[0]);
  tmp1 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[294] /* pwLine.t2 PARAM */, data->simulationInfo->storedRelations[1]);
  gout[0] = ((tmp0 && tmp1)) ? 1 : -1;
  tmp2 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[304] /* pwLine1.t1 PARAM */, data->simulationInfo->storedRelations[2]);
  tmp3 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[305] /* pwLine1.t2 PARAM */, data->simulationInfo->storedRelations[3]);
  gout[1] = ((tmp2 && tmp3)) ? 1 : -1;
  tmp4 = LessZC(data->localData[0]->realVars[79] /* constantLoad.v variable */, 0.5, data->simulationInfo->storedRelations[4]);
  gout[2] = (tmp4) ? 1 : -1;
  tmp5 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[174] /* constantLoad.t1 PARAM */, data->simulationInfo->storedRelations[5]);
  tmp6 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[174] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[168] /* constantLoad.d_t PARAM */, data->simulationInfo->storedRelations[6]);
  gout[3] = ((tmp5 && tmp6)) ? 1 : -1;
  tmp7 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[304] /* pwLine1.t1 PARAM */, data->simulationInfo->storedRelations[2]);
  gout[4] = (tmp7) ? 1 : -1;
  tmp8 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[305] /* pwLine1.t2 PARAM */, data->simulationInfo->storedRelations[3]);
  gout[5] = (tmp8) ? 1 : -1;
  tmp9 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[326] /* pwLine3.t1 PARAM */, data->simulationInfo->storedRelations[7]);
  tmp10 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[327] /* pwLine3.t2 PARAM */, data->simulationInfo->storedRelations[8]);
  gout[6] = ((tmp9 && tmp10)) ? 1 : -1;
  tmp11 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[326] /* pwLine3.t1 PARAM */, data->simulationInfo->storedRelations[7]);
  gout[7] = (tmp11) ? 1 : -1;
  tmp12 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[327] /* pwLine3.t2 PARAM */, data->simulationInfo->storedRelations[8]);
  gout[8] = (tmp12) ? 1 : -1;
  tmp13 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[282] /* pwFault.t1 PARAM */, data->simulationInfo->storedRelations[9]);
  gout[9] = (tmp13) ? 1 : -1;
  tmp14 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[283] /* pwFault.t2 PARAM */, data->simulationInfo->storedRelations[10]);
  gout[10] = ((tmp14 && data->simulationInfo->booleanParameter[76] /* pwFault.ground PARAM */)) ? 1 : -1;
  tmp15 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[283] /* pwFault.t2 PARAM */, data->simulationInfo->storedRelations[10]);
  gout[11] = (tmp15) ? 1 : -1;
  tmp16 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[337] /* pwLine4.t1 PARAM */, data->simulationInfo->storedRelations[11]);
  tmp17 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[338] /* pwLine4.t2 PARAM */, data->simulationInfo->storedRelations[12]);
  gout[12] = ((tmp16 && tmp17)) ? 1 : -1;
  tmp18 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[337] /* pwLine4.t1 PARAM */, data->simulationInfo->storedRelations[11]);
  gout[13] = (tmp18) ? 1 : -1;
  tmp19 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[338] /* pwLine4.t2 PARAM */, data->simulationInfo->storedRelations[12]);
  gout[14] = (tmp19) ? 1 : -1;
  tmp20 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[315] /* pwLine2.t1 PARAM */, data->simulationInfo->storedRelations[13]);
  tmp21 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[316] /* pwLine2.t2 PARAM */, data->simulationInfo->storedRelations[14]);
  gout[15] = ((tmp20 && tmp21)) ? 1 : -1;
  tmp22 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[315] /* pwLine2.t1 PARAM */, data->simulationInfo->storedRelations[13]);
  gout[16] = (tmp22) ? 1 : -1;
  tmp23 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[316] /* pwLine2.t2 PARAM */, data->simulationInfo->storedRelations[14]);
  gout[17] = (tmp23) ? 1 : -1;
  tmp24 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[293] /* pwLine.t1 PARAM */, data->simulationInfo->storedRelations[0]);
  gout[18] = (tmp24) ? 1 : -1;
  tmp25 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[294] /* pwLine.t2 PARAM */, data->simulationInfo->storedRelations[1]);
  gout[19] = (tmp25) ? 1 : -1;
  tmp26 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[174] /* constantLoad.t1 PARAM */, data->simulationInfo->storedRelations[5]);
  gout[20] = (tmp26) ? 1 : -1;
  tmp27 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[174] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[168] /* constantLoad.d_t PARAM */, data->simulationInfo->storedRelations[6]);
  gout[21] = (tmp27) ? 1 : -1;
  tmp28 = LessZC(data->localData[0]->realVars[79] /* constantLoad.v variable */, data->simulationInfo->realParameter[138] /* constantLoad.PQBRAK PARAM */, data->simulationInfo->storedRelations[15]);
  gout[22] = (tmp28) ? 1 : -1;
  tmp29 = GreaterZC(data->localData[0]->realVars[0] /* cSVGN1.LagLim.state STATE(1) */, data->simulationInfo->realParameter[48] /* cSVGN1.LagLim.outMax PARAM */, data->simulationInfo->storedRelations[16]);
  tmp30 = LessZC((data->simulationInfo->realParameter[44] /* cSVGN1.LagLim.K PARAM */) * (data->localData[0]->realVars[47] /* cSVGN1.LagLim.u variable */) - data->localData[0]->realVars[0] /* cSVGN1.LagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[17]);
  gout[23] = ((tmp29 && tmp30)) ? 1 : -1;
  tmp31 = LessZC(data->localData[0]->realVars[0] /* cSVGN1.LagLim.state STATE(1) */, data->simulationInfo->realParameter[49] /* cSVGN1.LagLim.outMin PARAM */, data->simulationInfo->storedRelations[18]);
  tmp32 = GreaterZC((data->simulationInfo->realParameter[44] /* cSVGN1.LagLim.K PARAM */) * (data->localData[0]->realVars[47] /* cSVGN1.LagLim.u variable */) - data->localData[0]->realVars[0] /* cSVGN1.LagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[19]);
  gout[24] = ((tmp31 && tmp32)) ? 1 : -1;
  tmp33 = GreaterZC(data->localData[0]->realVars[65] /* cSVGN1.leadLagLim.gain.y variable */, data->simulationInfo->realParameter[120] /* cSVGN1.leadLagLim.limiter.uMax PARAM */, data->simulationInfo->storedRelations[20]);
  gout[25] = (tmp33) ? 1 : -1;
  tmp34 = LessZC(data->localData[0]->realVars[65] /* cSVGN1.leadLagLim.gain.y variable */, data->simulationInfo->realParameter[121] /* cSVGN1.leadLagLim.limiter.uMin PARAM */, data->simulationInfo->storedRelations[21]);
  gout[26] = (tmp34) ? 1 : -1;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ZC);
#endif

  TRACE_POP
  return 0;
}

const char *OpenIPSL_Examples_Banks_PSSE_CSVGN1_relationDescription(int i)
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
  "time >= pwLine2.t1",
  "time < pwLine2.t2",
  "constantLoad.v < constantLoad.PQBRAK",
  "cSVGN1.LagLim.state > cSVGN1.LagLim.outMax",
  "cSVGN1.LagLim.K * cSVGN1.LagLim.u - cSVGN1.LagLim.state < 0.0",
  "cSVGN1.LagLim.state < cSVGN1.LagLim.outMin",
  "cSVGN1.LagLim.K * cSVGN1.LagLim.u - cSVGN1.LagLim.state > 0.0",
  "cSVGN1.leadLagLim.gain.y > cSVGN1.leadLagLim.limiter.uMax",
  "cSVGN1.leadLagLim.gain.y < cSVGN1.leadLagLim.limiter.uMin"};
  return res[i];
}

int OpenIPSL_Examples_Banks_PSSE_CSVGN1_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
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
  modelica_boolean tmp53;
  modelica_boolean tmp54;
  modelica_boolean tmp55;
  modelica_boolean tmp56;
  
  if(evalforZeroCross) {
    tmp35 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[293] /* pwLine.t1 PARAM */, data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp35;
    tmp36 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[294] /* pwLine.t2 PARAM */, data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[1] = tmp36;
    tmp37 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[304] /* pwLine1.t1 PARAM */, data->simulationInfo->storedRelations[2]);
    data->simulationInfo->relations[2] = tmp37;
    tmp38 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[305] /* pwLine1.t2 PARAM */, data->simulationInfo->storedRelations[3]);
    data->simulationInfo->relations[3] = tmp38;
    tmp39 = LessZC(data->localData[0]->realVars[79] /* constantLoad.v variable */, 0.5, data->simulationInfo->storedRelations[4]);
    data->simulationInfo->relations[4] = tmp39;
    tmp40 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[174] /* constantLoad.t1 PARAM */, data->simulationInfo->storedRelations[5]);
    data->simulationInfo->relations[5] = tmp40;
    tmp41 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[174] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[168] /* constantLoad.d_t PARAM */, data->simulationInfo->storedRelations[6]);
    data->simulationInfo->relations[6] = tmp41;
    tmp42 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[326] /* pwLine3.t1 PARAM */, data->simulationInfo->storedRelations[7]);
    data->simulationInfo->relations[7] = tmp42;
    tmp43 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[327] /* pwLine3.t2 PARAM */, data->simulationInfo->storedRelations[8]);
    data->simulationInfo->relations[8] = tmp43;
    tmp44 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[282] /* pwFault.t1 PARAM */, data->simulationInfo->storedRelations[9]);
    data->simulationInfo->relations[9] = tmp44;
    tmp45 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[283] /* pwFault.t2 PARAM */, data->simulationInfo->storedRelations[10]);
    data->simulationInfo->relations[10] = tmp45;
    tmp46 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[337] /* pwLine4.t1 PARAM */, data->simulationInfo->storedRelations[11]);
    data->simulationInfo->relations[11] = tmp46;
    tmp47 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[338] /* pwLine4.t2 PARAM */, data->simulationInfo->storedRelations[12]);
    data->simulationInfo->relations[12] = tmp47;
    tmp48 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[315] /* pwLine2.t1 PARAM */, data->simulationInfo->storedRelations[13]);
    data->simulationInfo->relations[13] = tmp48;
    tmp49 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[316] /* pwLine2.t2 PARAM */, data->simulationInfo->storedRelations[14]);
    data->simulationInfo->relations[14] = tmp49;
    tmp50 = LessZC(data->localData[0]->realVars[79] /* constantLoad.v variable */, data->simulationInfo->realParameter[138] /* constantLoad.PQBRAK PARAM */, data->simulationInfo->storedRelations[15]);
    data->simulationInfo->relations[15] = tmp50;
    tmp51 = GreaterZC(data->localData[0]->realVars[0] /* cSVGN1.LagLim.state STATE(1) */, data->simulationInfo->realParameter[48] /* cSVGN1.LagLim.outMax PARAM */, data->simulationInfo->storedRelations[16]);
    data->simulationInfo->relations[16] = tmp51;
    tmp52 = LessZC((data->simulationInfo->realParameter[44] /* cSVGN1.LagLim.K PARAM */) * (data->localData[0]->realVars[47] /* cSVGN1.LagLim.u variable */) - data->localData[0]->realVars[0] /* cSVGN1.LagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[17]);
    data->simulationInfo->relations[17] = tmp52;
    tmp53 = LessZC(data->localData[0]->realVars[0] /* cSVGN1.LagLim.state STATE(1) */, data->simulationInfo->realParameter[49] /* cSVGN1.LagLim.outMin PARAM */, data->simulationInfo->storedRelations[18]);
    data->simulationInfo->relations[18] = tmp53;
    tmp54 = GreaterZC((data->simulationInfo->realParameter[44] /* cSVGN1.LagLim.K PARAM */) * (data->localData[0]->realVars[47] /* cSVGN1.LagLim.u variable */) - data->localData[0]->realVars[0] /* cSVGN1.LagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[19]);
    data->simulationInfo->relations[19] = tmp54;
    tmp55 = GreaterZC(data->localData[0]->realVars[65] /* cSVGN1.leadLagLim.gain.y variable */, data->simulationInfo->realParameter[120] /* cSVGN1.leadLagLim.limiter.uMax PARAM */, data->simulationInfo->storedRelations[20]);
    data->simulationInfo->relations[20] = tmp55;
    tmp56 = LessZC(data->localData[0]->realVars[65] /* cSVGN1.leadLagLim.gain.y variable */, data->simulationInfo->realParameter[121] /* cSVGN1.leadLagLim.limiter.uMin PARAM */, data->simulationInfo->storedRelations[21]);
    data->simulationInfo->relations[21] = tmp56;
  } else {
    data->simulationInfo->relations[0] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[293] /* pwLine.t1 PARAM */);
    data->simulationInfo->relations[1] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[294] /* pwLine.t2 PARAM */);
    data->simulationInfo->relations[2] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[304] /* pwLine1.t1 PARAM */);
    data->simulationInfo->relations[3] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[305] /* pwLine1.t2 PARAM */);
    data->simulationInfo->relations[4] = (data->localData[0]->realVars[79] /* constantLoad.v variable */ < 0.5);
    data->simulationInfo->relations[5] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[174] /* constantLoad.t1 PARAM */);
    data->simulationInfo->relations[6] = (data->localData[0]->timeValue <= data->simulationInfo->realParameter[174] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[168] /* constantLoad.d_t PARAM */);
    data->simulationInfo->relations[7] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[326] /* pwLine3.t1 PARAM */);
    data->simulationInfo->relations[8] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[327] /* pwLine3.t2 PARAM */);
    data->simulationInfo->relations[9] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[282] /* pwFault.t1 PARAM */);
    data->simulationInfo->relations[10] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[283] /* pwFault.t2 PARAM */);
    data->simulationInfo->relations[11] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[337] /* pwLine4.t1 PARAM */);
    data->simulationInfo->relations[12] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[338] /* pwLine4.t2 PARAM */);
    data->simulationInfo->relations[13] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[315] /* pwLine2.t1 PARAM */);
    data->simulationInfo->relations[14] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[316] /* pwLine2.t2 PARAM */);
    data->simulationInfo->relations[15] = (data->localData[0]->realVars[79] /* constantLoad.v variable */ < data->simulationInfo->realParameter[138] /* constantLoad.PQBRAK PARAM */);
    data->simulationInfo->relations[16] = (data->localData[0]->realVars[0] /* cSVGN1.LagLim.state STATE(1) */ > data->simulationInfo->realParameter[48] /* cSVGN1.LagLim.outMax PARAM */);
    data->simulationInfo->relations[17] = ((data->simulationInfo->realParameter[44] /* cSVGN1.LagLim.K PARAM */) * (data->localData[0]->realVars[47] /* cSVGN1.LagLim.u variable */) - data->localData[0]->realVars[0] /* cSVGN1.LagLim.state STATE(1) */ < 0.0);
    data->simulationInfo->relations[18] = (data->localData[0]->realVars[0] /* cSVGN1.LagLim.state STATE(1) */ < data->simulationInfo->realParameter[49] /* cSVGN1.LagLim.outMin PARAM */);
    data->simulationInfo->relations[19] = ((data->simulationInfo->realParameter[44] /* cSVGN1.LagLim.K PARAM */) * (data->localData[0]->realVars[47] /* cSVGN1.LagLim.u variable */) - data->localData[0]->realVars[0] /* cSVGN1.LagLim.state STATE(1) */ > 0.0);
    data->simulationInfo->relations[20] = (data->localData[0]->realVars[65] /* cSVGN1.leadLagLim.gain.y variable */ > data->simulationInfo->realParameter[120] /* cSVGN1.leadLagLim.limiter.uMax PARAM */);
    data->simulationInfo->relations[21] = (data->localData[0]->realVars[65] /* cSVGN1.leadLagLim.gain.y variable */ < data->simulationInfo->realParameter[121] /* cSVGN1.leadLagLim.limiter.uMin PARAM */);
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif
