/* Events: Sample, Zero Crossings, Relations, Discrete Changes */
#include "OpenIPSL.Examples.Controls.PSSE.ES.EXAC1_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* Initializes the raw time events of the simulation using the now
   calcualted parameters. */
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_function_initSample(DATA *data, threadData_t *threadData)
{
  long i=0;
}

const char *OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_zeroCrossingDescription(int i, int **out_EquationIndexes)
{
  static const char *res[] = {"time >= pwLine.t1 and time < pwLine.t2",
  "time >= pwLine.t1",
  "time < pwLine.t2",
  "time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t",
  "constantLoad.v < 0.5",
  "constantLoad.v < constantLoad.PQBRAK",
  "time >= constantLoad.t1",
  "time <= constantLoad.t1 + constantLoad.d_t",
  "time >= pwLine3.t1 and time < pwLine3.t2",
  "time >= pwLine3.t1",
  "time < pwLine3.t2",
  "time < pwFault.t1",
  "time < pwFault.t2 and pwFault.ground",
  "time < pwFault.t2",
  "time >= pwLine4.t1 and time < pwLine4.t2",
  "time >= pwLine4.t1",
  "time < pwLine4.t2",
  "time >= pwLine1.t1 and time < pwLine1.t2",
  "time >= pwLine1.t1",
  "time < pwLine1.t2",
  "eXAC1_1.rectifierCommutationVoltageDrop.division.y <= 0.0",
  "eXAC1_1.rectifierCommutationVoltageDrop.division.y > 0.0 and eXAC1_1.rectifierCommutationVoltageDrop.division.y <= 0.433",
  "eXAC1_1.rectifierCommutationVoltageDrop.division.y > 0.433 and eXAC1_1.rectifierCommutationVoltageDrop.division.y < 0.75",
  "eXAC1_1.rectifierCommutationVoltageDrop.division.y >= 0.75 and eXAC1_1.rectifierCommutationVoltageDrop.division.y <= 1.0",
  "eXAC1_1.rotatingExciterWithDemagnetizationLimited.sISO.y < eXAC1_1.rotatingExciterWithDemagnetizationLimited.sISO.outMin and eXAC1_1.rotatingExciterWithDemagnetizationLimited.sISO.k * eXAC1_1.rotatingExciterWithDemagnetizationLimited.feedback.y < 0.0 or eXAC1_1.rotatingExciterWithDemagnetizationLimited.sISO.y > eXAC1_1.rotatingExciterWithDemagnetizationLimited.sISO.outMax and eXAC1_1.rotatingExciterWithDemagnetizationLimited.sISO.k * eXAC1_1.rotatingExciterWithDemagnetizationLimited.feedback.y > 0.0",
  "eXAC1_1.imLimitedSimpleLag.state > eXAC1_1.imLimitedSimpleLag.outMax and eXAC1_1.imLimitedSimpleLag.K * eXAC1_1.imLimitedSimpleLag.u - eXAC1_1.imLimitedSimpleLag.state < 0.0",
  "eXAC1_1.imLimitedSimpleLag.state < eXAC1_1.imLimitedSimpleLag.outMin and eXAC1_1.imLimitedSimpleLag.K * eXAC1_1.imLimitedSimpleLag.u - eXAC1_1.imLimitedSimpleLag.state > 0.0"};
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
  static const int occurEqs20[] = {1,291};
  static const int occurEqs21[] = {1,291};
  static const int occurEqs22[] = {1,291};
  static const int occurEqs23[] = {1,291};
  static const int occurEqs24[] = {1,306};
  static const int occurEqs25[] = {1,303};
  static const int occurEqs26[] = {1,304};
  static const int *occurEqs[] = {occurEqs0,occurEqs1,occurEqs2,occurEqs3,occurEqs4,occurEqs5,occurEqs6,occurEqs7,occurEqs8,occurEqs9,occurEqs10,occurEqs11,occurEqs12,occurEqs13,occurEqs14,occurEqs15,occurEqs16,occurEqs17,occurEqs18,occurEqs19,occurEqs20,occurEqs21,occurEqs22,occurEqs23,occurEqs24,occurEqs25,occurEqs26};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
}

/* forwarded equations */
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_171(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_172(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_173(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_174(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_175(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_176(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_177(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_178(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_179(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_180(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_181(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_182(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_183(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_184(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_185(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_276(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_277(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_278(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_279(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_280(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_281(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_282(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_283(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_287(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_288(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_289(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_290(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_291(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_292(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_293(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_294(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_295(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_296(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_297(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_298(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_299(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_300(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_301(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_302(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_305(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_306(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_307(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_308(DATA* data, threadData_t *threadData);

int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_171(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_172(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_173(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_174(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_175(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_176(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_177(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_178(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_179(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_180(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_181(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_182(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_183(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_184(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_185(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_276(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_277(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_278(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_279(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_280(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_281(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_282(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_283(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_287(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_288(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_289(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_290(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_291(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_292(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_293(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_294(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_295(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_296(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_297(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_298(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_299(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_300(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_301(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_302(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_305(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_306(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_307(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_308(data, threadData);
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
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
  
  data->simulationInfo->callStatistics.functionZeroCrossings++;
  
  tmp0 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[283], data->simulationInfo->storedRelations[0]);
  tmp1 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[284], data->simulationInfo->storedRelations[1]);
  gout[0] = ((tmp0 && tmp1)) ? 1 : -1;
  tmp2 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[283], data->simulationInfo->storedRelations[0]);
  gout[1] = (tmp2) ? 1 : -1;
  tmp3 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[284], data->simulationInfo->storedRelations[1]);
  gout[2] = (tmp3) ? 1 : -1;
  tmp4 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[72], data->simulationInfo->storedRelations[2]);
  tmp5 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[72] + data->simulationInfo->realParameter[66], data->simulationInfo->storedRelations[3]);
  gout[3] = ((tmp4 && tmp5)) ? 1 : -1;
  tmp6 = LessZC(data->localData[0]->realVars[55] /* constantLoad.v variable */, 0.5, data->simulationInfo->storedRelations[4]);
  gout[4] = (tmp6) ? 1 : -1;
  tmp7 = LessZC(data->localData[0]->realVars[55] /* constantLoad.v variable */, data->simulationInfo->realParameter[36], data->simulationInfo->storedRelations[5]);
  gout[5] = (tmp7) ? 1 : -1;
  tmp8 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[72], data->simulationInfo->storedRelations[2]);
  gout[6] = (tmp8) ? 1 : -1;
  tmp9 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[72] + data->simulationInfo->realParameter[66], data->simulationInfo->storedRelations[3]);
  gout[7] = (tmp9) ? 1 : -1;
  tmp10 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[305], data->simulationInfo->storedRelations[6]);
  tmp11 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[306], data->simulationInfo->storedRelations[7]);
  gout[8] = ((tmp10 && tmp11)) ? 1 : -1;
  tmp12 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[305], data->simulationInfo->storedRelations[6]);
  gout[9] = (tmp12) ? 1 : -1;
  tmp13 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[306], data->simulationInfo->storedRelations[7]);
  gout[10] = (tmp13) ? 1 : -1;
  tmp14 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[272], data->simulationInfo->storedRelations[8]);
  gout[11] = (tmp14) ? 1 : -1;
  tmp15 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[273], data->simulationInfo->storedRelations[9]);
  gout[12] = ((tmp15 && data->simulationInfo->booleanParameter[66])) ? 1 : -1;
  tmp16 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[273], data->simulationInfo->storedRelations[9]);
  gout[13] = (tmp16) ? 1 : -1;
  tmp17 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[316], data->simulationInfo->storedRelations[10]);
  tmp18 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[317], data->simulationInfo->storedRelations[11]);
  gout[14] = ((tmp17 && tmp18)) ? 1 : -1;
  tmp19 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[316], data->simulationInfo->storedRelations[10]);
  gout[15] = (tmp19) ? 1 : -1;
  tmp20 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[317], data->simulationInfo->storedRelations[11]);
  gout[16] = (tmp20) ? 1 : -1;
  tmp21 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[294], data->simulationInfo->storedRelations[12]);
  tmp22 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[295], data->simulationInfo->storedRelations[13]);
  gout[17] = ((tmp21 && tmp22)) ? 1 : -1;
  tmp23 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[294], data->simulationInfo->storedRelations[12]);
  gout[18] = (tmp23) ? 1 : -1;
  tmp24 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[295], data->simulationInfo->storedRelations[13]);
  gout[19] = (tmp24) ? 1 : -1;
  tmp25 = LessEqZC(data->localData[0]->realVars[71] /* eXAC1_1.rectifierCommutationVoltageDrop.division.y variable */, 0.0, data->simulationInfo->storedRelations[14]);
  gout[20] = (tmp25) ? 1 : -1;
  tmp26 = GreaterZC(data->localData[0]->realVars[71] /* eXAC1_1.rectifierCommutationVoltageDrop.division.y variable */, 0.0, data->simulationInfo->storedRelations[15]);
  tmp27 = LessEqZC(data->localData[0]->realVars[71] /* eXAC1_1.rectifierCommutationVoltageDrop.division.y variable */, 0.433, data->simulationInfo->storedRelations[16]);
  gout[21] = ((tmp26 && tmp27)) ? 1 : -1;
  tmp28 = GreaterZC(data->localData[0]->realVars[71] /* eXAC1_1.rectifierCommutationVoltageDrop.division.y variable */, 0.433, data->simulationInfo->storedRelations[17]);
  tmp29 = LessZC(data->localData[0]->realVars[71] /* eXAC1_1.rectifierCommutationVoltageDrop.division.y variable */, 0.75, data->simulationInfo->storedRelations[18]);
  gout[22] = ((tmp28 && tmp29)) ? 1 : -1;
  tmp30 = GreaterEqZC(data->localData[0]->realVars[71] /* eXAC1_1.rectifierCommutationVoltageDrop.division.y variable */, 0.75, data->simulationInfo->storedRelations[19]);
  tmp31 = LessEqZC(data->localData[0]->realVars[71] /* eXAC1_1.rectifierCommutationVoltageDrop.division.y variable */, 1.0, data->simulationInfo->storedRelations[20]);
  gout[23] = ((tmp30 && tmp31)) ? 1 : -1;
  tmp32 = LessZC(data->localData[0]->realVars[4] /* eXAC1_1.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */, data->simulationInfo->realParameter[156], data->simulationInfo->storedRelations[21]);
  tmp33 = LessZC((data->simulationInfo->realParameter[154]) * (data->localData[0]->realVars[76] /* eXAC1_1.rotatingExciterWithDemagnetizationLimited.feedback.y variable */), 0.0, data->simulationInfo->storedRelations[22]);
  tmp34 = GreaterZC(data->localData[0]->realVars[4] /* eXAC1_1.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */, data->simulationInfo->realParameter[155], data->simulationInfo->storedRelations[23]);
  tmp35 = GreaterZC((data->simulationInfo->realParameter[154]) * (data->localData[0]->realVars[76] /* eXAC1_1.rotatingExciterWithDemagnetizationLimited.feedback.y variable */), 0.0, data->simulationInfo->storedRelations[24]);
  gout[24] = (((tmp32 && tmp33) || (tmp34 && tmp35))) ? 1 : -1;
  tmp36 = GreaterZC(data->localData[0]->realVars[2] /* eXAC1_1.imLimitedSimpleLag.state STATE(1) */, data->simulationInfo->realParameter[121], data->simulationInfo->storedRelations[25]);
  tmp37 = LessZC((data->simulationInfo->realParameter[118]) * (data->localData[0]->realVars[66] /* eXAC1_1.imLimitedSimpleLag.u variable */) - data->localData[0]->realVars[2] /* eXAC1_1.imLimitedSimpleLag.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[26]);
  gout[25] = ((tmp36 && tmp37)) ? 1 : -1;
  tmp38 = LessZC(data->localData[0]->realVars[2] /* eXAC1_1.imLimitedSimpleLag.state STATE(1) */, data->simulationInfo->realParameter[122], data->simulationInfo->storedRelations[27]);
  tmp39 = GreaterZC((data->simulationInfo->realParameter[118]) * (data->localData[0]->realVars[66] /* eXAC1_1.imLimitedSimpleLag.u variable */) - data->localData[0]->realVars[2] /* eXAC1_1.imLimitedSimpleLag.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[28]);
  gout[26] = ((tmp38 && tmp39)) ? 1 : -1;
  
  TRACE_POP
  return 0;
}

const char *OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_relationDescription(int i)
{
  const char *res[] = {"time >= pwLine.t1",
  "time < pwLine.t2",
  "time >= constantLoad.t1",
  "time <= constantLoad.t1 + constantLoad.d_t",
  "constantLoad.v < 0.5",
  "constantLoad.v < constantLoad.PQBRAK",
  "time >= pwLine3.t1",
  "time < pwLine3.t2",
  "time < pwFault.t1",
  "time < pwFault.t2",
  "time >= pwLine4.t1",
  "time < pwLine4.t2",
  "time >= pwLine1.t1",
  "time < pwLine1.t2",
  "eXAC1_1.rectifierCommutationVoltageDrop.division.y <= 0.0",
  "eXAC1_1.rectifierCommutationVoltageDrop.division.y > 0.0",
  "eXAC1_1.rectifierCommutationVoltageDrop.division.y <= 0.433",
  "eXAC1_1.rectifierCommutationVoltageDrop.division.y > 0.433",
  "eXAC1_1.rectifierCommutationVoltageDrop.division.y < 0.75",
  "eXAC1_1.rectifierCommutationVoltageDrop.division.y >= 0.75",
  "eXAC1_1.rectifierCommutationVoltageDrop.division.y <= 1.0",
  "eXAC1_1.rotatingExciterWithDemagnetizationLimited.sISO.y < eXAC1_1.rotatingExciterWithDemagnetizationLimited.sISO.outMin",
  "eXAC1_1.rotatingExciterWithDemagnetizationLimited.sISO.k * eXAC1_1.rotatingExciterWithDemagnetizationLimited.feedback.y < 0.0",
  "eXAC1_1.rotatingExciterWithDemagnetizationLimited.sISO.y > eXAC1_1.rotatingExciterWithDemagnetizationLimited.sISO.outMax",
  "eXAC1_1.rotatingExciterWithDemagnetizationLimited.sISO.k * eXAC1_1.rotatingExciterWithDemagnetizationLimited.feedback.y > 0.0",
  "eXAC1_1.imLimitedSimpleLag.state > eXAC1_1.imLimitedSimpleLag.outMax",
  "eXAC1_1.imLimitedSimpleLag.K * eXAC1_1.imLimitedSimpleLag.u - eXAC1_1.imLimitedSimpleLag.state < 0.0",
  "eXAC1_1.imLimitedSimpleLag.state < eXAC1_1.imLimitedSimpleLag.outMin",
  "eXAC1_1.imLimitedSimpleLag.K * eXAC1_1.imLimitedSimpleLag.u - eXAC1_1.imLimitedSimpleLag.state > 0.0"};
  return res[i];
}

int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  TRACE_PUSH
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
  
  if(evalforZeroCross) {
    tmp40 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[283], data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp40;
    tmp41 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[284], data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[1] = tmp41;
    tmp42 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[72], data->simulationInfo->storedRelations[2]);
    data->simulationInfo->relations[2] = tmp42;
    tmp43 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[72] + data->simulationInfo->realParameter[66], data->simulationInfo->storedRelations[3]);
    data->simulationInfo->relations[3] = tmp43;
    tmp44 = LessZC(data->localData[0]->realVars[55] /* constantLoad.v variable */, 0.5, data->simulationInfo->storedRelations[4]);
    data->simulationInfo->relations[4] = tmp44;
    tmp45 = LessZC(data->localData[0]->realVars[55] /* constantLoad.v variable */, data->simulationInfo->realParameter[36], data->simulationInfo->storedRelations[5]);
    data->simulationInfo->relations[5] = tmp45;
    tmp46 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[305], data->simulationInfo->storedRelations[6]);
    data->simulationInfo->relations[6] = tmp46;
    tmp47 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[306], data->simulationInfo->storedRelations[7]);
    data->simulationInfo->relations[7] = tmp47;
    tmp48 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[272], data->simulationInfo->storedRelations[8]);
    data->simulationInfo->relations[8] = tmp48;
    tmp49 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[273], data->simulationInfo->storedRelations[9]);
    data->simulationInfo->relations[9] = tmp49;
    tmp50 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[316], data->simulationInfo->storedRelations[10]);
    data->simulationInfo->relations[10] = tmp50;
    tmp51 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[317], data->simulationInfo->storedRelations[11]);
    data->simulationInfo->relations[11] = tmp51;
    tmp52 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[294], data->simulationInfo->storedRelations[12]);
    data->simulationInfo->relations[12] = tmp52;
    tmp53 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[295], data->simulationInfo->storedRelations[13]);
    data->simulationInfo->relations[13] = tmp53;
    tmp54 = LessEqZC(data->localData[0]->realVars[71] /* eXAC1_1.rectifierCommutationVoltageDrop.division.y variable */, 0.0, data->simulationInfo->storedRelations[14]);
    data->simulationInfo->relations[14] = tmp54;
    tmp55 = GreaterZC(data->localData[0]->realVars[71] /* eXAC1_1.rectifierCommutationVoltageDrop.division.y variable */, 0.0, data->simulationInfo->storedRelations[15]);
    data->simulationInfo->relations[15] = tmp55;
    tmp56 = LessEqZC(data->localData[0]->realVars[71] /* eXAC1_1.rectifierCommutationVoltageDrop.division.y variable */, 0.433, data->simulationInfo->storedRelations[16]);
    data->simulationInfo->relations[16] = tmp56;
    tmp57 = GreaterZC(data->localData[0]->realVars[71] /* eXAC1_1.rectifierCommutationVoltageDrop.division.y variable */, 0.433, data->simulationInfo->storedRelations[17]);
    data->simulationInfo->relations[17] = tmp57;
    tmp58 = LessZC(data->localData[0]->realVars[71] /* eXAC1_1.rectifierCommutationVoltageDrop.division.y variable */, 0.75, data->simulationInfo->storedRelations[18]);
    data->simulationInfo->relations[18] = tmp58;
    tmp59 = GreaterEqZC(data->localData[0]->realVars[71] /* eXAC1_1.rectifierCommutationVoltageDrop.division.y variable */, 0.75, data->simulationInfo->storedRelations[19]);
    data->simulationInfo->relations[19] = tmp59;
    tmp60 = LessEqZC(data->localData[0]->realVars[71] /* eXAC1_1.rectifierCommutationVoltageDrop.division.y variable */, 1.0, data->simulationInfo->storedRelations[20]);
    data->simulationInfo->relations[20] = tmp60;
    tmp61 = LessZC(data->localData[0]->realVars[4] /* eXAC1_1.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */, data->simulationInfo->realParameter[156], data->simulationInfo->storedRelations[21]);
    data->simulationInfo->relations[21] = tmp61;
    tmp62 = LessZC((data->simulationInfo->realParameter[154]) * (data->localData[0]->realVars[76] /* eXAC1_1.rotatingExciterWithDemagnetizationLimited.feedback.y variable */), 0.0, data->simulationInfo->storedRelations[22]);
    data->simulationInfo->relations[22] = tmp62;
    tmp63 = GreaterZC(data->localData[0]->realVars[4] /* eXAC1_1.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */, data->simulationInfo->realParameter[155], data->simulationInfo->storedRelations[23]);
    data->simulationInfo->relations[23] = tmp63;
    tmp64 = GreaterZC((data->simulationInfo->realParameter[154]) * (data->localData[0]->realVars[76] /* eXAC1_1.rotatingExciterWithDemagnetizationLimited.feedback.y variable */), 0.0, data->simulationInfo->storedRelations[24]);
    data->simulationInfo->relations[24] = tmp64;
    tmp65 = GreaterZC(data->localData[0]->realVars[2] /* eXAC1_1.imLimitedSimpleLag.state STATE(1) */, data->simulationInfo->realParameter[121], data->simulationInfo->storedRelations[25]);
    data->simulationInfo->relations[25] = tmp65;
    tmp66 = LessZC((data->simulationInfo->realParameter[118]) * (data->localData[0]->realVars[66] /* eXAC1_1.imLimitedSimpleLag.u variable */) - data->localData[0]->realVars[2] /* eXAC1_1.imLimitedSimpleLag.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[26]);
    data->simulationInfo->relations[26] = tmp66;
    tmp67 = LessZC(data->localData[0]->realVars[2] /* eXAC1_1.imLimitedSimpleLag.state STATE(1) */, data->simulationInfo->realParameter[122], data->simulationInfo->storedRelations[27]);
    data->simulationInfo->relations[27] = tmp67;
    tmp68 = GreaterZC((data->simulationInfo->realParameter[118]) * (data->localData[0]->realVars[66] /* eXAC1_1.imLimitedSimpleLag.u variable */) - data->localData[0]->realVars[2] /* eXAC1_1.imLimitedSimpleLag.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[28]);
    data->simulationInfo->relations[28] = tmp68;
  } else {
    data->simulationInfo->relations[0] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[283]);
    data->simulationInfo->relations[1] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[284]);
    data->simulationInfo->relations[2] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[72]);
    data->simulationInfo->relations[3] = (data->localData[0]->timeValue <= data->simulationInfo->realParameter[72] + data->simulationInfo->realParameter[66]);
    data->simulationInfo->relations[4] = (data->localData[0]->realVars[55] /* constantLoad.v variable */ < 0.5);
    data->simulationInfo->relations[5] = (data->localData[0]->realVars[55] /* constantLoad.v variable */ < data->simulationInfo->realParameter[36]);
    data->simulationInfo->relations[6] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[305]);
    data->simulationInfo->relations[7] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[306]);
    data->simulationInfo->relations[8] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[272]);
    data->simulationInfo->relations[9] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[273]);
    data->simulationInfo->relations[10] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[316]);
    data->simulationInfo->relations[11] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[317]);
    data->simulationInfo->relations[12] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[294]);
    data->simulationInfo->relations[13] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[295]);
    data->simulationInfo->relations[14] = (data->localData[0]->realVars[71] /* eXAC1_1.rectifierCommutationVoltageDrop.division.y variable */ <= 0.0);
    data->simulationInfo->relations[15] = (data->localData[0]->realVars[71] /* eXAC1_1.rectifierCommutationVoltageDrop.division.y variable */ > 0.0);
    data->simulationInfo->relations[16] = (data->localData[0]->realVars[71] /* eXAC1_1.rectifierCommutationVoltageDrop.division.y variable */ <= 0.433);
    data->simulationInfo->relations[17] = (data->localData[0]->realVars[71] /* eXAC1_1.rectifierCommutationVoltageDrop.division.y variable */ > 0.433);
    data->simulationInfo->relations[18] = (data->localData[0]->realVars[71] /* eXAC1_1.rectifierCommutationVoltageDrop.division.y variable */ < 0.75);
    data->simulationInfo->relations[19] = (data->localData[0]->realVars[71] /* eXAC1_1.rectifierCommutationVoltageDrop.division.y variable */ >= 0.75);
    data->simulationInfo->relations[20] = (data->localData[0]->realVars[71] /* eXAC1_1.rectifierCommutationVoltageDrop.division.y variable */ <= 1.0);
    data->simulationInfo->relations[21] = (data->localData[0]->realVars[4] /* eXAC1_1.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */ < data->simulationInfo->realParameter[156]);
    data->simulationInfo->relations[22] = ((data->simulationInfo->realParameter[154]) * (data->localData[0]->realVars[76] /* eXAC1_1.rotatingExciterWithDemagnetizationLimited.feedback.y variable */) < 0.0);
    data->simulationInfo->relations[23] = (data->localData[0]->realVars[4] /* eXAC1_1.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */ > data->simulationInfo->realParameter[155]);
    data->simulationInfo->relations[24] = ((data->simulationInfo->realParameter[154]) * (data->localData[0]->realVars[76] /* eXAC1_1.rotatingExciterWithDemagnetizationLimited.feedback.y variable */) > 0.0);
    data->simulationInfo->relations[25] = (data->localData[0]->realVars[2] /* eXAC1_1.imLimitedSimpleLag.state STATE(1) */ > data->simulationInfo->realParameter[121]);
    data->simulationInfo->relations[26] = ((data->simulationInfo->realParameter[118]) * (data->localData[0]->realVars[66] /* eXAC1_1.imLimitedSimpleLag.u variable */) - data->localData[0]->realVars[2] /* eXAC1_1.imLimitedSimpleLag.state STATE(1) */ < 0.0);
    data->simulationInfo->relations[27] = (data->localData[0]->realVars[2] /* eXAC1_1.imLimitedSimpleLag.state STATE(1) */ < data->simulationInfo->realParameter[122]);
    data->simulationInfo->relations[28] = ((data->simulationInfo->realParameter[118]) * (data->localData[0]->realVars[66] /* eXAC1_1.imLimitedSimpleLag.u variable */) - data->localData[0]->realVars[2] /* eXAC1_1.imLimitedSimpleLag.state STATE(1) */ > 0.0);
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

