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
  modelica_boolean tmp111;
  modelica_boolean tmp112;
  modelica_boolean tmp113;
  modelica_boolean tmp114;
  modelica_boolean tmp115;
  modelica_boolean tmp116;
  modelica_boolean tmp117;
  modelica_boolean tmp118;
  modelica_boolean tmp119;
  modelica_boolean tmp120;
  modelica_boolean tmp121;
  modelica_boolean tmp122;
  modelica_boolean tmp123;
  modelica_boolean tmp124;
  modelica_boolean tmp125;
  modelica_boolean tmp126;
  modelica_boolean tmp127;
  modelica_boolean tmp128;
  modelica_boolean tmp129;
  modelica_boolean tmp130;
  modelica_boolean tmp131;
  modelica_boolean tmp132;
  modelica_boolean tmp133;
  modelica_boolean tmp134;
  modelica_boolean tmp135;
  modelica_boolean tmp136;
  modelica_boolean tmp137;
  modelica_boolean tmp138;
  modelica_boolean tmp139;
  modelica_boolean tmp140;
  modelica_boolean tmp141;
  modelica_boolean tmp142;
  modelica_boolean tmp143;
  modelica_boolean tmp144;
  modelica_boolean tmp145;
  modelica_boolean tmp146;
  modelica_boolean tmp147;
  modelica_boolean tmp148;
  modelica_boolean tmp149;
  modelica_boolean tmp150;
  
  data->simulationInfo->callStatistics.functionZeroCrossings++;
  
  tmp111 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[283], data->simulationInfo->storedRelations[0]);
  tmp112 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[284], data->simulationInfo->storedRelations[1]);
  gout[0] = ((tmp111 && tmp112)) ? 1 : -1;
  tmp113 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[283], data->simulationInfo->storedRelations[0]);
  gout[1] = (tmp113) ? 1 : -1;
  tmp114 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[284], data->simulationInfo->storedRelations[1]);
  gout[2] = (tmp114) ? 1 : -1;
  tmp115 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[72], data->simulationInfo->storedRelations[2]);
  tmp116 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[72] + data->simulationInfo->realParameter[66], data->simulationInfo->storedRelations[3]);
  gout[3] = ((tmp115 && tmp116)) ? 1 : -1;
  tmp117 = LessZC(data->localData[0]->realVars[55] /* constantLoad.v variable */, 0.5, data->simulationInfo->storedRelations[4]);
  gout[4] = (tmp117) ? 1 : -1;
  tmp118 = LessZC(data->localData[0]->realVars[55] /* constantLoad.v variable */, data->simulationInfo->realParameter[36], data->simulationInfo->storedRelations[5]);
  gout[5] = (tmp118) ? 1 : -1;
  tmp119 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[72], data->simulationInfo->storedRelations[2]);
  gout[6] = (tmp119) ? 1 : -1;
  tmp120 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[72] + data->simulationInfo->realParameter[66], data->simulationInfo->storedRelations[3]);
  gout[7] = (tmp120) ? 1 : -1;
  tmp121 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[305], data->simulationInfo->storedRelations[6]);
  tmp122 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[306], data->simulationInfo->storedRelations[7]);
  gout[8] = ((tmp121 && tmp122)) ? 1 : -1;
  tmp123 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[305], data->simulationInfo->storedRelations[6]);
  gout[9] = (tmp123) ? 1 : -1;
  tmp124 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[306], data->simulationInfo->storedRelations[7]);
  gout[10] = (tmp124) ? 1 : -1;
  tmp125 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[272], data->simulationInfo->storedRelations[8]);
  gout[11] = (tmp125) ? 1 : -1;
  tmp126 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[273], data->simulationInfo->storedRelations[9]);
  gout[12] = ((tmp126 && data->simulationInfo->booleanParameter[66])) ? 1 : -1;
  tmp127 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[273], data->simulationInfo->storedRelations[9]);
  gout[13] = (tmp127) ? 1 : -1;
  tmp128 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[316], data->simulationInfo->storedRelations[10]);
  tmp129 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[317], data->simulationInfo->storedRelations[11]);
  gout[14] = ((tmp128 && tmp129)) ? 1 : -1;
  tmp130 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[316], data->simulationInfo->storedRelations[10]);
  gout[15] = (tmp130) ? 1 : -1;
  tmp131 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[317], data->simulationInfo->storedRelations[11]);
  gout[16] = (tmp131) ? 1 : -1;
  tmp132 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[294], data->simulationInfo->storedRelations[12]);
  tmp133 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[295], data->simulationInfo->storedRelations[13]);
  gout[17] = ((tmp132 && tmp133)) ? 1 : -1;
  tmp134 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[294], data->simulationInfo->storedRelations[12]);
  gout[18] = (tmp134) ? 1 : -1;
  tmp135 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[295], data->simulationInfo->storedRelations[13]);
  gout[19] = (tmp135) ? 1 : -1;
  tmp136 = LessEqZC(data->localData[0]->realVars[71] /* eXAC1_1.rectifierCommutationVoltageDrop.division.y variable */, 0.0, data->simulationInfo->storedRelations[14]);
  gout[20] = (tmp136) ? 1 : -1;
  tmp137 = GreaterZC(data->localData[0]->realVars[71] /* eXAC1_1.rectifierCommutationVoltageDrop.division.y variable */, 0.0, data->simulationInfo->storedRelations[15]);
  tmp138 = LessEqZC(data->localData[0]->realVars[71] /* eXAC1_1.rectifierCommutationVoltageDrop.division.y variable */, 0.433, data->simulationInfo->storedRelations[16]);
  gout[21] = ((tmp137 && tmp138)) ? 1 : -1;
  tmp139 = GreaterZC(data->localData[0]->realVars[71] /* eXAC1_1.rectifierCommutationVoltageDrop.division.y variable */, 0.433, data->simulationInfo->storedRelations[17]);
  tmp140 = LessZC(data->localData[0]->realVars[71] /* eXAC1_1.rectifierCommutationVoltageDrop.division.y variable */, 0.75, data->simulationInfo->storedRelations[18]);
  gout[22] = ((tmp139 && tmp140)) ? 1 : -1;
  tmp141 = GreaterEqZC(data->localData[0]->realVars[71] /* eXAC1_1.rectifierCommutationVoltageDrop.division.y variable */, 0.75, data->simulationInfo->storedRelations[19]);
  tmp142 = LessEqZC(data->localData[0]->realVars[71] /* eXAC1_1.rectifierCommutationVoltageDrop.division.y variable */, 1.0, data->simulationInfo->storedRelations[20]);
  gout[23] = ((tmp141 && tmp142)) ? 1 : -1;
  tmp143 = LessZC(data->localData[0]->realVars[4] /* eXAC1_1.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */, data->simulationInfo->realParameter[156], data->simulationInfo->storedRelations[21]);
  tmp144 = LessZC((data->simulationInfo->realParameter[154]) * (data->localData[0]->realVars[76] /* eXAC1_1.rotatingExciterWithDemagnetizationLimited.feedback.y variable */), 0.0, data->simulationInfo->storedRelations[22]);
  tmp145 = GreaterZC(data->localData[0]->realVars[4] /* eXAC1_1.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */, data->simulationInfo->realParameter[155], data->simulationInfo->storedRelations[23]);
  tmp146 = GreaterZC((data->simulationInfo->realParameter[154]) * (data->localData[0]->realVars[76] /* eXAC1_1.rotatingExciterWithDemagnetizationLimited.feedback.y variable */), 0.0, data->simulationInfo->storedRelations[24]);
  gout[24] = (((tmp143 && tmp144) || (tmp145 && tmp146))) ? 1 : -1;
  tmp147 = GreaterZC(data->localData[0]->realVars[2] /* eXAC1_1.imLimitedSimpleLag.state STATE(1) */, data->simulationInfo->realParameter[121], data->simulationInfo->storedRelations[25]);
  tmp148 = LessZC((data->simulationInfo->realParameter[118]) * (data->localData[0]->realVars[66] /* eXAC1_1.imLimitedSimpleLag.u variable */) - data->localData[0]->realVars[2] /* eXAC1_1.imLimitedSimpleLag.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[26]);
  gout[25] = ((tmp147 && tmp148)) ? 1 : -1;
  tmp149 = LessZC(data->localData[0]->realVars[2] /* eXAC1_1.imLimitedSimpleLag.state STATE(1) */, data->simulationInfo->realParameter[122], data->simulationInfo->storedRelations[27]);
  tmp150 = GreaterZC((data->simulationInfo->realParameter[118]) * (data->localData[0]->realVars[66] /* eXAC1_1.imLimitedSimpleLag.u variable */) - data->localData[0]->realVars[2] /* eXAC1_1.imLimitedSimpleLag.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[28]);
  gout[26] = ((tmp149 && tmp150)) ? 1 : -1;
  
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
  modelica_boolean tmp151;
  modelica_boolean tmp152;
  modelica_boolean tmp153;
  modelica_boolean tmp154;
  modelica_boolean tmp155;
  modelica_boolean tmp156;
  modelica_boolean tmp157;
  modelica_boolean tmp158;
  modelica_boolean tmp159;
  modelica_boolean tmp160;
  modelica_boolean tmp161;
  modelica_boolean tmp162;
  modelica_boolean tmp163;
  modelica_boolean tmp164;
  modelica_boolean tmp165;
  modelica_boolean tmp166;
  modelica_boolean tmp167;
  modelica_boolean tmp168;
  modelica_boolean tmp169;
  modelica_boolean tmp170;
  modelica_boolean tmp171;
  modelica_boolean tmp172;
  modelica_boolean tmp173;
  modelica_boolean tmp174;
  modelica_boolean tmp175;
  modelica_boolean tmp176;
  modelica_boolean tmp177;
  modelica_boolean tmp178;
  modelica_boolean tmp179;
  
  if(evalforZeroCross) {
    tmp151 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[283], data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp151;
    tmp152 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[284], data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[1] = tmp152;
    tmp153 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[72], data->simulationInfo->storedRelations[2]);
    data->simulationInfo->relations[2] = tmp153;
    tmp154 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[72] + data->simulationInfo->realParameter[66], data->simulationInfo->storedRelations[3]);
    data->simulationInfo->relations[3] = tmp154;
    tmp155 = LessZC(data->localData[0]->realVars[55] /* constantLoad.v variable */, 0.5, data->simulationInfo->storedRelations[4]);
    data->simulationInfo->relations[4] = tmp155;
    tmp156 = LessZC(data->localData[0]->realVars[55] /* constantLoad.v variable */, data->simulationInfo->realParameter[36], data->simulationInfo->storedRelations[5]);
    data->simulationInfo->relations[5] = tmp156;
    tmp157 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[305], data->simulationInfo->storedRelations[6]);
    data->simulationInfo->relations[6] = tmp157;
    tmp158 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[306], data->simulationInfo->storedRelations[7]);
    data->simulationInfo->relations[7] = tmp158;
    tmp159 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[272], data->simulationInfo->storedRelations[8]);
    data->simulationInfo->relations[8] = tmp159;
    tmp160 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[273], data->simulationInfo->storedRelations[9]);
    data->simulationInfo->relations[9] = tmp160;
    tmp161 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[316], data->simulationInfo->storedRelations[10]);
    data->simulationInfo->relations[10] = tmp161;
    tmp162 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[317], data->simulationInfo->storedRelations[11]);
    data->simulationInfo->relations[11] = tmp162;
    tmp163 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[294], data->simulationInfo->storedRelations[12]);
    data->simulationInfo->relations[12] = tmp163;
    tmp164 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[295], data->simulationInfo->storedRelations[13]);
    data->simulationInfo->relations[13] = tmp164;
    tmp165 = LessEqZC(data->localData[0]->realVars[71] /* eXAC1_1.rectifierCommutationVoltageDrop.division.y variable */, 0.0, data->simulationInfo->storedRelations[14]);
    data->simulationInfo->relations[14] = tmp165;
    tmp166 = GreaterZC(data->localData[0]->realVars[71] /* eXAC1_1.rectifierCommutationVoltageDrop.division.y variable */, 0.0, data->simulationInfo->storedRelations[15]);
    data->simulationInfo->relations[15] = tmp166;
    tmp167 = LessEqZC(data->localData[0]->realVars[71] /* eXAC1_1.rectifierCommutationVoltageDrop.division.y variable */, 0.433, data->simulationInfo->storedRelations[16]);
    data->simulationInfo->relations[16] = tmp167;
    tmp168 = GreaterZC(data->localData[0]->realVars[71] /* eXAC1_1.rectifierCommutationVoltageDrop.division.y variable */, 0.433, data->simulationInfo->storedRelations[17]);
    data->simulationInfo->relations[17] = tmp168;
    tmp169 = LessZC(data->localData[0]->realVars[71] /* eXAC1_1.rectifierCommutationVoltageDrop.division.y variable */, 0.75, data->simulationInfo->storedRelations[18]);
    data->simulationInfo->relations[18] = tmp169;
    tmp170 = GreaterEqZC(data->localData[0]->realVars[71] /* eXAC1_1.rectifierCommutationVoltageDrop.division.y variable */, 0.75, data->simulationInfo->storedRelations[19]);
    data->simulationInfo->relations[19] = tmp170;
    tmp171 = LessEqZC(data->localData[0]->realVars[71] /* eXAC1_1.rectifierCommutationVoltageDrop.division.y variable */, 1.0, data->simulationInfo->storedRelations[20]);
    data->simulationInfo->relations[20] = tmp171;
    tmp172 = LessZC(data->localData[0]->realVars[4] /* eXAC1_1.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */, data->simulationInfo->realParameter[156], data->simulationInfo->storedRelations[21]);
    data->simulationInfo->relations[21] = tmp172;
    tmp173 = LessZC((data->simulationInfo->realParameter[154]) * (data->localData[0]->realVars[76] /* eXAC1_1.rotatingExciterWithDemagnetizationLimited.feedback.y variable */), 0.0, data->simulationInfo->storedRelations[22]);
    data->simulationInfo->relations[22] = tmp173;
    tmp174 = GreaterZC(data->localData[0]->realVars[4] /* eXAC1_1.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */, data->simulationInfo->realParameter[155], data->simulationInfo->storedRelations[23]);
    data->simulationInfo->relations[23] = tmp174;
    tmp175 = GreaterZC((data->simulationInfo->realParameter[154]) * (data->localData[0]->realVars[76] /* eXAC1_1.rotatingExciterWithDemagnetizationLimited.feedback.y variable */), 0.0, data->simulationInfo->storedRelations[24]);
    data->simulationInfo->relations[24] = tmp175;
    tmp176 = GreaterZC(data->localData[0]->realVars[2] /* eXAC1_1.imLimitedSimpleLag.state STATE(1) */, data->simulationInfo->realParameter[121], data->simulationInfo->storedRelations[25]);
    data->simulationInfo->relations[25] = tmp176;
    tmp177 = LessZC((data->simulationInfo->realParameter[118]) * (data->localData[0]->realVars[66] /* eXAC1_1.imLimitedSimpleLag.u variable */) - data->localData[0]->realVars[2] /* eXAC1_1.imLimitedSimpleLag.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[26]);
    data->simulationInfo->relations[26] = tmp177;
    tmp178 = LessZC(data->localData[0]->realVars[2] /* eXAC1_1.imLimitedSimpleLag.state STATE(1) */, data->simulationInfo->realParameter[122], data->simulationInfo->storedRelations[27]);
    data->simulationInfo->relations[27] = tmp178;
    tmp179 = GreaterZC((data->simulationInfo->realParameter[118]) * (data->localData[0]->realVars[66] /* eXAC1_1.imLimitedSimpleLag.u variable */) - data->localData[0]->realVars[2] /* eXAC1_1.imLimitedSimpleLag.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[28]);
    data->simulationInfo->relations[28] = tmp179;
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

