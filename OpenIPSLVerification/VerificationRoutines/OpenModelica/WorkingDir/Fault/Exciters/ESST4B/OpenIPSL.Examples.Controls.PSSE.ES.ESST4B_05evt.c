/* Events: Sample, Zero Crossings, Relations, Discrete Changes */
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESST4B_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* Initializes the raw time events of the simulation using the now
   calcualted parameters. */
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_function_initSample(DATA *data, threadData_t *threadData)
{
  long i=0;
}

const char *OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_zeroCrossingDescription(int i, int **out_EquationIndexes)
{
  static const char *res[] = {"time >= pwLine.t1 and time < pwLine.t2",
  "constantLoad.v < 0.5",
  "time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t",
  "time >= pwLine.t1",
  "time < pwLine.t2",
  "time >= pwLine3.t1 and time < pwLine3.t2",
  "time >= pwLine3.t1",
  "time < pwLine3.t2",
  "time >= pwLine4.t1 and time < pwLine4.t2",
  "time < pwFault.t1",
  "time < pwFault.t2 and pwFault.ground",
  "time < pwFault.t2",
  "time >= pwLine4.t1",
  "time < pwLine4.t2",
  "time >= pwLine1.t1 and time < pwLine1.t2",
  "time >= pwLine1.t1",
  "time < pwLine1.t2",
  "time >= constantLoad.t1",
  "time <= constantLoad.t1 + constantLoad.d_t",
  "constantLoad.v < constantLoad.PQBRAK",
  "eSST4B.VR1.y < eSST4B.VR1.outMin and eSST4B.VR1.k * eSST4B.Gain1.u < 0.0 or eSST4B.VR1.y > eSST4B.VR1.outMax and eSST4B.VR1.k * eSST4B.Gain1.u > 0.0",
  "eSST4B.rectifierCommutationVoltageDrop.division.y <= 0.0",
  "eSST4B.rectifierCommutationVoltageDrop.division.y > 0.0 and eSST4B.rectifierCommutationVoltageDrop.division.y <= 0.433",
  "eSST4B.rectifierCommutationVoltageDrop.division.y > 0.433 and eSST4B.rectifierCommutationVoltageDrop.division.y < 0.75",
  "eSST4B.rectifierCommutationVoltageDrop.division.y >= 0.75 and eSST4B.rectifierCommutationVoltageDrop.division.y <= 1.0",
  "eSST4B.lV_Gate.n1 > const1.k",
  "eSST4B.VM1.y < eSST4B.VM1.outMin and eSST4B.VM1.k * eSST4B.Gain2.u < 0.0 or eSST4B.VM1.y > eSST4B.VM1.outMax and eSST4B.VM1.k * eSST4B.Gain2.u > 0.0",
  "eSST4B.add2.y > eSST4B.limiter1.uMax",
  "eSST4B.add2.y < eSST4B.limiter1.uMin"};
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
  static const int occurEqs20[] = {1,865};
  static const int occurEqs21[] = {1,877};
  static const int occurEqs22[] = {1,877};
  static const int occurEqs23[] = {1,877};
  static const int occurEqs24[] = {1,877};
  static const int occurEqs25[] = {1,-1};
  static const int occurEqs26[] = {1,895};
  static const int occurEqs27[] = {1,743};
  static const int occurEqs28[] = {1,743};
  static const int *occurEqs[] = {occurEqs0,occurEqs1,occurEqs2,occurEqs3,occurEqs4,occurEqs5,occurEqs6,occurEqs7,occurEqs8,occurEqs9,occurEqs10,occurEqs11,occurEqs12,occurEqs13,occurEqs14,occurEqs15,occurEqs16,occurEqs17,occurEqs18,occurEqs19,occurEqs20,occurEqs21,occurEqs22,occurEqs23,occurEqs24,occurEqs25,occurEqs26,occurEqs27,occurEqs28};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
}

/* forwarded equations */
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_741(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_742(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_743(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_744(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_745(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_746(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_747(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_748(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_749(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_750(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_751(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_842(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_843(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_844(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_845(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_846(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_855(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_856(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_857(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_858(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_859(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_860(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_861(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_862(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_863(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_864(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_865(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_866(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_867(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_868(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_869(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_870(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_874(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_875(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_876(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_877(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_878(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_879(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_894(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_895(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_896(DATA* data, threadData_t *threadData);

int OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_741(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_742(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_743(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_744(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_745(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_746(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_747(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_748(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_749(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_750(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_751(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_842(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_843(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_844(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_845(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_846(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_855(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_856(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_857(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_858(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_859(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_860(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_861(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_862(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_863(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_864(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_865(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_866(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_867(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_868(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_869(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_870(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_874(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_875(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_876(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_877(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_878(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_879(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_894(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_895(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_896(data, threadData);
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
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
  modelica_boolean tmp35;
  modelica_boolean tmp36;
  modelica_boolean tmp37;
  modelica_boolean tmp38;
  modelica_boolean tmp39;
  modelica_boolean tmp40;
  modelica_boolean tmp41;
  modelica_boolean tmp42;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_ZC);
#endif
  data->simulationInfo->callStatistics.functionZeroCrossings++;

  tmp0 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[284] /* pwLine.t1 PARAM */, data->simulationInfo->storedRelations[0]);
  tmp1 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[285] /* pwLine.t2 PARAM */, data->simulationInfo->storedRelations[1]);
  gout[0] = ((tmp0 && tmp1)) ? 1 : -1;
  tmp2 = LessZC(data->localData[0]->realVars[53] /* constantLoad.v variable */, 0.5, data->simulationInfo->storedRelations[2]);
  gout[1] = (tmp2) ? 1 : -1;
  tmp3 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */, data->simulationInfo->storedRelations[3]);
  tmp4 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[71] /* constantLoad.d_t PARAM */, data->simulationInfo->storedRelations[4]);
  gout[2] = ((tmp3 && tmp4)) ? 1 : -1;
  tmp5 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[284] /* pwLine.t1 PARAM */, data->simulationInfo->storedRelations[0]);
  gout[3] = (tmp5) ? 1 : -1;
  tmp6 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[285] /* pwLine.t2 PARAM */, data->simulationInfo->storedRelations[1]);
  gout[4] = (tmp6) ? 1 : -1;
  tmp7 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[306] /* pwLine3.t1 PARAM */, data->simulationInfo->storedRelations[5]);
  tmp8 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[307] /* pwLine3.t2 PARAM */, data->simulationInfo->storedRelations[6]);
  gout[5] = ((tmp7 && tmp8)) ? 1 : -1;
  tmp9 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[306] /* pwLine3.t1 PARAM */, data->simulationInfo->storedRelations[5]);
  gout[6] = (tmp9) ? 1 : -1;
  tmp10 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[307] /* pwLine3.t2 PARAM */, data->simulationInfo->storedRelations[6]);
  gout[7] = (tmp10) ? 1 : -1;
  tmp11 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[317] /* pwLine4.t1 PARAM */, data->simulationInfo->storedRelations[7]);
  tmp12 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[318] /* pwLine4.t2 PARAM */, data->simulationInfo->storedRelations[8]);
  gout[8] = ((tmp11 && tmp12)) ? 1 : -1;
  tmp13 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[273] /* pwFault.t1 PARAM */, data->simulationInfo->storedRelations[9]);
  gout[9] = (tmp13) ? 1 : -1;
  tmp14 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[274] /* pwFault.t2 PARAM */, data->simulationInfo->storedRelations[10]);
  gout[10] = ((tmp14 && data->simulationInfo->booleanParameter[77] /* pwFault.ground PARAM */)) ? 1 : -1;
  tmp15 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[274] /* pwFault.t2 PARAM */, data->simulationInfo->storedRelations[10]);
  gout[11] = (tmp15) ? 1 : -1;
  tmp16 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[317] /* pwLine4.t1 PARAM */, data->simulationInfo->storedRelations[7]);
  gout[12] = (tmp16) ? 1 : -1;
  tmp17 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[318] /* pwLine4.t2 PARAM */, data->simulationInfo->storedRelations[8]);
  gout[13] = (tmp17) ? 1 : -1;
  tmp18 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[295] /* pwLine1.t1 PARAM */, data->simulationInfo->storedRelations[11]);
  tmp19 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[296] /* pwLine1.t2 PARAM */, data->simulationInfo->storedRelations[12]);
  gout[14] = ((tmp18 && tmp19)) ? 1 : -1;
  tmp20 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[295] /* pwLine1.t1 PARAM */, data->simulationInfo->storedRelations[11]);
  gout[15] = (tmp20) ? 1 : -1;
  tmp21 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[296] /* pwLine1.t2 PARAM */, data->simulationInfo->storedRelations[12]);
  gout[16] = (tmp21) ? 1 : -1;
  tmp22 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */, data->simulationInfo->storedRelations[3]);
  gout[17] = (tmp22) ? 1 : -1;
  tmp23 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[71] /* constantLoad.d_t PARAM */, data->simulationInfo->storedRelations[4]);
  gout[18] = (tmp23) ? 1 : -1;
  tmp24 = LessZC(data->localData[0]->realVars[53] /* constantLoad.v variable */, data->simulationInfo->realParameter[41] /* constantLoad.PQBRAK PARAM */, data->simulationInfo->storedRelations[13]);
  gout[19] = (tmp24) ? 1 : -1;
  tmp25 = LessZC(data->localData[0]->realVars[3] /* eSST4B.VR1.y STATE(1) */, data->simulationInfo->realParameter[127] /* eSST4B.VR1.outMin PARAM */, data->simulationInfo->storedRelations[14]);
  tmp26 = LessZC((data->simulationInfo->realParameter[125] /* eSST4B.VR1.k PARAM */) * (data->localData[0]->realVars[59] /* eSST4B.Gain1.u variable */), 0.0, data->simulationInfo->storedRelations[15]);
  tmp27 = GreaterZC(data->localData[0]->realVars[3] /* eSST4B.VR1.y STATE(1) */, data->simulationInfo->realParameter[126] /* eSST4B.VR1.outMax PARAM */, data->simulationInfo->storedRelations[16]);
  tmp28 = GreaterZC((data->simulationInfo->realParameter[125] /* eSST4B.VR1.k PARAM */) * (data->localData[0]->realVars[59] /* eSST4B.Gain1.u variable */), 0.0, data->simulationInfo->storedRelations[17]);
  gout[20] = (((tmp25 && tmp26) || (tmp27 && tmp28))) ? 1 : -1;
  tmp29 = LessEqZC(data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */, 0.0, data->simulationInfo->storedRelations[18]);
  gout[21] = (tmp29) ? 1 : -1;
  tmp30 = GreaterZC(data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */, 0.0, data->simulationInfo->storedRelations[19]);
  tmp31 = LessEqZC(data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */, 0.433, data->simulationInfo->storedRelations[20]);
  gout[22] = ((tmp30 && tmp31)) ? 1 : -1;
  tmp32 = GreaterZC(data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */, 0.433, data->simulationInfo->storedRelations[21]);
  tmp33 = LessZC(data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */, 0.75, data->simulationInfo->storedRelations[22]);
  gout[23] = ((tmp32 && tmp33)) ? 1 : -1;
  tmp34 = GreaterEqZC(data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */, 0.75, data->simulationInfo->storedRelations[23]);
  tmp35 = LessEqZC(data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */, 1.0, data->simulationInfo->storedRelations[24]);
  gout[24] = ((tmp34 && tmp35)) ? 1 : -1;
  tmp36 = GreaterZC(data->localData[0]->realVars[74] /* eSST4B.lV_Gate.n1 variable */, data->simulationInfo->realParameter[36] /* const1.k PARAM */, data->simulationInfo->storedRelations[25]);
  gout[25] = (tmp36) ? 1 : -1;
  tmp37 = LessZC(data->localData[0]->realVars[2] /* eSST4B.VM1.y STATE(1) */, data->simulationInfo->realParameter[120] /* eSST4B.VM1.outMin PARAM */, data->simulationInfo->storedRelations[26]);
  tmp38 = LessZC((data->simulationInfo->realParameter[118] /* eSST4B.VM1.k PARAM */) * (data->localData[0]->realVars[61] /* eSST4B.Gain2.u variable */), 0.0, data->simulationInfo->storedRelations[27]);
  tmp39 = GreaterZC(data->localData[0]->realVars[2] /* eSST4B.VM1.y STATE(1) */, data->simulationInfo->realParameter[119] /* eSST4B.VM1.outMax PARAM */, data->simulationInfo->storedRelations[28]);
  tmp40 = GreaterZC((data->simulationInfo->realParameter[118] /* eSST4B.VM1.k PARAM */) * (data->localData[0]->realVars[61] /* eSST4B.Gain2.u variable */), 0.0, data->simulationInfo->storedRelations[29]);
  gout[26] = (((tmp37 && tmp38) || (tmp39 && tmp40))) ? 1 : -1;
  tmp41 = GreaterZC(data->localData[0]->realVars[73] /* eSST4B.add2.y variable */, data->simulationInfo->realParameter[154] /* eSST4B.limiter1.uMax PARAM */, data->simulationInfo->storedRelations[30]);
  gout[27] = (tmp41) ? 1 : -1;
  tmp42 = LessZC(data->localData[0]->realVars[73] /* eSST4B.add2.y variable */, data->simulationInfo->realParameter[155] /* eSST4B.limiter1.uMin PARAM */, data->simulationInfo->storedRelations[31]);
  gout[28] = (tmp42) ? 1 : -1;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ZC);
#endif

  TRACE_POP
  return 0;
}

const char *OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_relationDescription(int i)
{
  const char *res[] = {"time >= pwLine.t1",
  "time < pwLine.t2",
  "constantLoad.v < 0.5",
  "time >= constantLoad.t1",
  "time <= constantLoad.t1 + constantLoad.d_t",
  "time >= pwLine3.t1",
  "time < pwLine3.t2",
  "time >= pwLine4.t1",
  "time < pwLine4.t2",
  "time < pwFault.t1",
  "time < pwFault.t2",
  "time >= pwLine1.t1",
  "time < pwLine1.t2",
  "constantLoad.v < constantLoad.PQBRAK",
  "eSST4B.VR1.y < eSST4B.VR1.outMin",
  "eSST4B.VR1.k * eSST4B.Gain1.u < 0.0",
  "eSST4B.VR1.y > eSST4B.VR1.outMax",
  "eSST4B.VR1.k * eSST4B.Gain1.u > 0.0",
  "eSST4B.rectifierCommutationVoltageDrop.division.y <= 0.0",
  "eSST4B.rectifierCommutationVoltageDrop.division.y > 0.0",
  "eSST4B.rectifierCommutationVoltageDrop.division.y <= 0.433",
  "eSST4B.rectifierCommutationVoltageDrop.division.y > 0.433",
  "eSST4B.rectifierCommutationVoltageDrop.division.y < 0.75",
  "eSST4B.rectifierCommutationVoltageDrop.division.y >= 0.75",
  "eSST4B.rectifierCommutationVoltageDrop.division.y <= 1.0",
  "eSST4B.lV_Gate.n1 > const1.k",
  "eSST4B.VM1.y < eSST4B.VM1.outMin",
  "eSST4B.VM1.k * eSST4B.Gain2.u < 0.0",
  "eSST4B.VM1.y > eSST4B.VM1.outMax",
  "eSST4B.VM1.k * eSST4B.Gain2.u > 0.0",
  "eSST4B.add2.y > eSST4B.limiter1.uMax",
  "eSST4B.add2.y < eSST4B.limiter1.uMin"};
  return res[i];
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  TRACE_PUSH
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
  modelica_boolean tmp60;
  modelica_boolean tmp61;
  modelica_boolean tmp62;
  modelica_boolean tmp63;
  modelica_boolean tmp64;
  modelica_boolean tmp65;
  modelica_boolean tmp66;
  modelica_boolean tmp67;
  modelica_boolean tmp68;
  modelica_boolean tmp69;
  modelica_boolean tmp70;
  modelica_boolean tmp71;
  modelica_boolean tmp72;
  modelica_boolean tmp73;
  modelica_boolean tmp74;
  
  if(evalforZeroCross) {
    tmp43 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[284] /* pwLine.t1 PARAM */, data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp43;
    tmp44 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[285] /* pwLine.t2 PARAM */, data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[1] = tmp44;
    tmp45 = LessZC(data->localData[0]->realVars[53] /* constantLoad.v variable */, 0.5, data->simulationInfo->storedRelations[2]);
    data->simulationInfo->relations[2] = tmp45;
    tmp46 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */, data->simulationInfo->storedRelations[3]);
    data->simulationInfo->relations[3] = tmp46;
    tmp47 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[71] /* constantLoad.d_t PARAM */, data->simulationInfo->storedRelations[4]);
    data->simulationInfo->relations[4] = tmp47;
    tmp48 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[306] /* pwLine3.t1 PARAM */, data->simulationInfo->storedRelations[5]);
    data->simulationInfo->relations[5] = tmp48;
    tmp49 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[307] /* pwLine3.t2 PARAM */, data->simulationInfo->storedRelations[6]);
    data->simulationInfo->relations[6] = tmp49;
    tmp50 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[317] /* pwLine4.t1 PARAM */, data->simulationInfo->storedRelations[7]);
    data->simulationInfo->relations[7] = tmp50;
    tmp51 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[318] /* pwLine4.t2 PARAM */, data->simulationInfo->storedRelations[8]);
    data->simulationInfo->relations[8] = tmp51;
    tmp52 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[273] /* pwFault.t1 PARAM */, data->simulationInfo->storedRelations[9]);
    data->simulationInfo->relations[9] = tmp52;
    tmp53 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[274] /* pwFault.t2 PARAM */, data->simulationInfo->storedRelations[10]);
    data->simulationInfo->relations[10] = tmp53;
    tmp54 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[295] /* pwLine1.t1 PARAM */, data->simulationInfo->storedRelations[11]);
    data->simulationInfo->relations[11] = tmp54;
    tmp55 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[296] /* pwLine1.t2 PARAM */, data->simulationInfo->storedRelations[12]);
    data->simulationInfo->relations[12] = tmp55;
    tmp56 = LessZC(data->localData[0]->realVars[53] /* constantLoad.v variable */, data->simulationInfo->realParameter[41] /* constantLoad.PQBRAK PARAM */, data->simulationInfo->storedRelations[13]);
    data->simulationInfo->relations[13] = tmp56;
    tmp57 = LessZC(data->localData[0]->realVars[3] /* eSST4B.VR1.y STATE(1) */, data->simulationInfo->realParameter[127] /* eSST4B.VR1.outMin PARAM */, data->simulationInfo->storedRelations[14]);
    data->simulationInfo->relations[14] = tmp57;
    tmp58 = LessZC((data->simulationInfo->realParameter[125] /* eSST4B.VR1.k PARAM */) * (data->localData[0]->realVars[59] /* eSST4B.Gain1.u variable */), 0.0, data->simulationInfo->storedRelations[15]);
    data->simulationInfo->relations[15] = tmp58;
    tmp59 = GreaterZC(data->localData[0]->realVars[3] /* eSST4B.VR1.y STATE(1) */, data->simulationInfo->realParameter[126] /* eSST4B.VR1.outMax PARAM */, data->simulationInfo->storedRelations[16]);
    data->simulationInfo->relations[16] = tmp59;
    tmp60 = GreaterZC((data->simulationInfo->realParameter[125] /* eSST4B.VR1.k PARAM */) * (data->localData[0]->realVars[59] /* eSST4B.Gain1.u variable */), 0.0, data->simulationInfo->storedRelations[17]);
    data->simulationInfo->relations[17] = tmp60;
    tmp61 = LessEqZC(data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */, 0.0, data->simulationInfo->storedRelations[18]);
    data->simulationInfo->relations[18] = tmp61;
    tmp62 = GreaterZC(data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */, 0.0, data->simulationInfo->storedRelations[19]);
    data->simulationInfo->relations[19] = tmp62;
    tmp63 = LessEqZC(data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */, 0.433, data->simulationInfo->storedRelations[20]);
    data->simulationInfo->relations[20] = tmp63;
    tmp64 = GreaterZC(data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */, 0.433, data->simulationInfo->storedRelations[21]);
    data->simulationInfo->relations[21] = tmp64;
    tmp65 = LessZC(data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */, 0.75, data->simulationInfo->storedRelations[22]);
    data->simulationInfo->relations[22] = tmp65;
    tmp66 = GreaterEqZC(data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */, 0.75, data->simulationInfo->storedRelations[23]);
    data->simulationInfo->relations[23] = tmp66;
    tmp67 = LessEqZC(data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */, 1.0, data->simulationInfo->storedRelations[24]);
    data->simulationInfo->relations[24] = tmp67;
    tmp68 = GreaterZC(data->localData[0]->realVars[74] /* eSST4B.lV_Gate.n1 variable */, data->simulationInfo->realParameter[36] /* const1.k PARAM */, data->simulationInfo->storedRelations[25]);
    data->simulationInfo->relations[25] = tmp68;
    tmp69 = LessZC(data->localData[0]->realVars[2] /* eSST4B.VM1.y STATE(1) */, data->simulationInfo->realParameter[120] /* eSST4B.VM1.outMin PARAM */, data->simulationInfo->storedRelations[26]);
    data->simulationInfo->relations[26] = tmp69;
    tmp70 = LessZC((data->simulationInfo->realParameter[118] /* eSST4B.VM1.k PARAM */) * (data->localData[0]->realVars[61] /* eSST4B.Gain2.u variable */), 0.0, data->simulationInfo->storedRelations[27]);
    data->simulationInfo->relations[27] = tmp70;
    tmp71 = GreaterZC(data->localData[0]->realVars[2] /* eSST4B.VM1.y STATE(1) */, data->simulationInfo->realParameter[119] /* eSST4B.VM1.outMax PARAM */, data->simulationInfo->storedRelations[28]);
    data->simulationInfo->relations[28] = tmp71;
    tmp72 = GreaterZC((data->simulationInfo->realParameter[118] /* eSST4B.VM1.k PARAM */) * (data->localData[0]->realVars[61] /* eSST4B.Gain2.u variable */), 0.0, data->simulationInfo->storedRelations[29]);
    data->simulationInfo->relations[29] = tmp72;
    tmp73 = GreaterZC(data->localData[0]->realVars[73] /* eSST4B.add2.y variable */, data->simulationInfo->realParameter[154] /* eSST4B.limiter1.uMax PARAM */, data->simulationInfo->storedRelations[30]);
    data->simulationInfo->relations[30] = tmp73;
    tmp74 = LessZC(data->localData[0]->realVars[73] /* eSST4B.add2.y variable */, data->simulationInfo->realParameter[155] /* eSST4B.limiter1.uMin PARAM */, data->simulationInfo->storedRelations[31]);
    data->simulationInfo->relations[31] = tmp74;
  } else {
    data->simulationInfo->relations[0] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[284] /* pwLine.t1 PARAM */);
    data->simulationInfo->relations[1] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[285] /* pwLine.t2 PARAM */);
    data->simulationInfo->relations[2] = (data->localData[0]->realVars[53] /* constantLoad.v variable */ < 0.5);
    data->simulationInfo->relations[3] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */);
    data->simulationInfo->relations[4] = (data->localData[0]->timeValue <= data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[71] /* constantLoad.d_t PARAM */);
    data->simulationInfo->relations[5] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[306] /* pwLine3.t1 PARAM */);
    data->simulationInfo->relations[6] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[307] /* pwLine3.t2 PARAM */);
    data->simulationInfo->relations[7] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[317] /* pwLine4.t1 PARAM */);
    data->simulationInfo->relations[8] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[318] /* pwLine4.t2 PARAM */);
    data->simulationInfo->relations[9] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[273] /* pwFault.t1 PARAM */);
    data->simulationInfo->relations[10] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[274] /* pwFault.t2 PARAM */);
    data->simulationInfo->relations[11] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[295] /* pwLine1.t1 PARAM */);
    data->simulationInfo->relations[12] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[296] /* pwLine1.t2 PARAM */);
    data->simulationInfo->relations[13] = (data->localData[0]->realVars[53] /* constantLoad.v variable */ < data->simulationInfo->realParameter[41] /* constantLoad.PQBRAK PARAM */);
    data->simulationInfo->relations[14] = (data->localData[0]->realVars[3] /* eSST4B.VR1.y STATE(1) */ < data->simulationInfo->realParameter[127] /* eSST4B.VR1.outMin PARAM */);
    data->simulationInfo->relations[15] = ((data->simulationInfo->realParameter[125] /* eSST4B.VR1.k PARAM */) * (data->localData[0]->realVars[59] /* eSST4B.Gain1.u variable */) < 0.0);
    data->simulationInfo->relations[16] = (data->localData[0]->realVars[3] /* eSST4B.VR1.y STATE(1) */ > data->simulationInfo->realParameter[126] /* eSST4B.VR1.outMax PARAM */);
    data->simulationInfo->relations[17] = ((data->simulationInfo->realParameter[125] /* eSST4B.VR1.k PARAM */) * (data->localData[0]->realVars[59] /* eSST4B.Gain1.u variable */) > 0.0);
    data->simulationInfo->relations[18] = (data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */ <= 0.0);
    data->simulationInfo->relations[19] = (data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */ > 0.0);
    data->simulationInfo->relations[20] = (data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */ <= 0.433);
    data->simulationInfo->relations[21] = (data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */ > 0.433);
    data->simulationInfo->relations[22] = (data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */ < 0.75);
    data->simulationInfo->relations[23] = (data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */ >= 0.75);
    data->simulationInfo->relations[24] = (data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */ <= 1.0);
    data->simulationInfo->relations[25] = (data->localData[0]->realVars[74] /* eSST4B.lV_Gate.n1 variable */ > data->simulationInfo->realParameter[36] /* const1.k PARAM */);
    data->simulationInfo->relations[26] = (data->localData[0]->realVars[2] /* eSST4B.VM1.y STATE(1) */ < data->simulationInfo->realParameter[120] /* eSST4B.VM1.outMin PARAM */);
    data->simulationInfo->relations[27] = ((data->simulationInfo->realParameter[118] /* eSST4B.VM1.k PARAM */) * (data->localData[0]->realVars[61] /* eSST4B.Gain2.u variable */) < 0.0);
    data->simulationInfo->relations[28] = (data->localData[0]->realVars[2] /* eSST4B.VM1.y STATE(1) */ > data->simulationInfo->realParameter[119] /* eSST4B.VM1.outMax PARAM */);
    data->simulationInfo->relations[29] = ((data->simulationInfo->realParameter[118] /* eSST4B.VM1.k PARAM */) * (data->localData[0]->realVars[61] /* eSST4B.Gain2.u variable */) > 0.0);
    data->simulationInfo->relations[30] = (data->localData[0]->realVars[73] /* eSST4B.add2.y variable */ > data->simulationInfo->realParameter[154] /* eSST4B.limiter1.uMax PARAM */);
    data->simulationInfo->relations[31] = (data->localData[0]->realVars[73] /* eSST4B.add2.y variable */ < data->simulationInfo->realParameter[155] /* eSST4B.limiter1.uMin PARAM */);
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

