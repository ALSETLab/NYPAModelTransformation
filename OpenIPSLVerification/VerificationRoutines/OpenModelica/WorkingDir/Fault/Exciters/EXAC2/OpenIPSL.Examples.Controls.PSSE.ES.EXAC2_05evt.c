/* Events: Sample, Zero Crossings, Relations, Discrete Changes */
#include "OpenIPSL.Examples.Controls.PSSE.ES.EXAC2_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* Initializes the raw time events of the simulation using the now
   calcualted parameters. */
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_function_initSample(DATA *data, threadData_t *threadData)
{
  long i=0;
}

const char *OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_zeroCrossingDescription(int i, int **out_EquationIndexes)
{
  static const char *res[] = {"time >= pwLine.t1 and time < pwLine.t2",
  "time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t",
  "constantLoad.v < 0.5",
  "time >= constantLoad.t1",
  "time <= constantLoad.t1 + constantLoad.d_t",
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
  "time >= pwLine.t1",
  "time < pwLine.t2",
  "constantLoad.v < constantLoad.PQBRAK",
  "eXAC2_1.rectifierCommutationVoltageDrop.division.y <= 0.0",
  "eXAC2_1.rectifierCommutationVoltageDrop.division.y > 0.0 and eXAC2_1.rectifierCommutationVoltageDrop.division.y <= 0.433",
  "eXAC2_1.rectifierCommutationVoltageDrop.division.y > 0.433 and eXAC2_1.rectifierCommutationVoltageDrop.division.y < 0.75",
  "eXAC2_1.rectifierCommutationVoltageDrop.division.y >= 0.75 and eXAC2_1.rectifierCommutationVoltageDrop.division.y <= 1.0",
  "eXAC2_1.DiffV1.y > eXAC2_1.gain3.y",
  "eXAC2_1.rotatingExciterWithDemagnetizationLimited.sISO.y < eXAC2_1.rotatingExciterWithDemagnetizationLimited.sISO.outMin and eXAC2_1.rotatingExciterWithDemagnetizationLimited.sISO.k * eXAC2_1.rotatingExciterWithDemagnetizationLimited.feedback.y < 0.0 or eXAC2_1.rotatingExciterWithDemagnetizationLimited.sISO.y > eXAC2_1.rotatingExciterWithDemagnetizationLimited.sISO.outMax and eXAC2_1.rotatingExciterWithDemagnetizationLimited.sISO.k * eXAC2_1.rotatingExciterWithDemagnetizationLimited.feedback.y > 0.0",
  "eXAC2_1.imLimitedSimpleLag.state > eXAC2_1.imLimitedSimpleLag.outMax and eXAC2_1.imLimitedSimpleLag.K * eXAC2_1.imLimitedSimpleLag.u - eXAC2_1.imLimitedSimpleLag.state < 0.0",
  "eXAC2_1.imLimitedSimpleLag.state < eXAC2_1.imLimitedSimpleLag.outMin and eXAC2_1.imLimitedSimpleLag.K * eXAC2_1.imLimitedSimpleLag.u - eXAC2_1.imLimitedSimpleLag.state > 0.0"};
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
  static const int occurEqs20[] = {1,866};
  static const int occurEqs21[] = {1,866};
  static const int occurEqs22[] = {1,866};
  static const int occurEqs23[] = {1,866};
  static const int occurEqs24[] = {1,886};
  static const int occurEqs25[] = {1,890};
  static const int occurEqs26[] = {1,891};
  static const int occurEqs27[] = {1,892};
  static const int *occurEqs[] = {occurEqs0,occurEqs1,occurEqs2,occurEqs3,occurEqs4,occurEqs5,occurEqs6,occurEqs7,occurEqs8,occurEqs9,occurEqs10,occurEqs11,occurEqs12,occurEqs13,occurEqs14,occurEqs15,occurEqs16,occurEqs17,occurEqs18,occurEqs19,occurEqs20,occurEqs21,occurEqs22,occurEqs23,occurEqs24,occurEqs25,occurEqs26,occurEqs27};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
}

/* forwarded equations */
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_756(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_757(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_758(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_759(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_760(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_761(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_762(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_763(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_764(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_765(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_766(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_767(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_768(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_769(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_770(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_861(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_862(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_863(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_864(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_865(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_866(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_867(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_868(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_869(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_870(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_871(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_872(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_873(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_874(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_875(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_876(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_877(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_878(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_879(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_880(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_881(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_882(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_883(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_884(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_885(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_886(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_887(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_888(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_889(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_890(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_896(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_897(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_898(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_899(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_900(DATA* data, threadData_t *threadData);

int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_756(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_757(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_758(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_759(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_760(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_761(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_762(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_763(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_764(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_765(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_766(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_767(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_768(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_769(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_770(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_861(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_862(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_863(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_864(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_865(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_866(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_867(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_868(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_869(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_870(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_871(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_872(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_873(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_874(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_875(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_876(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_877(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_878(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_879(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_880(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_881(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_882(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_883(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_884(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_885(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_886(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_887(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_888(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_889(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_890(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_896(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_897(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_898(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_899(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_900(data, threadData);
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
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
  
  data->simulationInfo->callStatistics.functionZeroCrossings++;
  
  tmp0 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[300], data->simulationInfo->storedRelations[0]);
  tmp1 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[301], data->simulationInfo->storedRelations[1]);
  gout[0] = ((tmp0 && tmp1)) ? 1 : -1;
  tmp2 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[72], data->simulationInfo->storedRelations[2]);
  tmp3 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[72] + data->simulationInfo->realParameter[66], data->simulationInfo->storedRelations[3]);
  gout[1] = ((tmp2 && tmp3)) ? 1 : -1;
  tmp4 = LessZC(data->localData[0]->realVars[55] /* constantLoad.v variable */, 0.5, data->simulationInfo->storedRelations[4]);
  gout[2] = (tmp4) ? 1 : -1;
  tmp5 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[72], data->simulationInfo->storedRelations[2]);
  gout[3] = (tmp5) ? 1 : -1;
  tmp6 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[72] + data->simulationInfo->realParameter[66], data->simulationInfo->storedRelations[3]);
  gout[4] = (tmp6) ? 1 : -1;
  tmp7 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[322], data->simulationInfo->storedRelations[5]);
  tmp8 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[323], data->simulationInfo->storedRelations[6]);
  gout[5] = ((tmp7 && tmp8)) ? 1 : -1;
  tmp9 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[322], data->simulationInfo->storedRelations[5]);
  gout[6] = (tmp9) ? 1 : -1;
  tmp10 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[323], data->simulationInfo->storedRelations[6]);
  gout[7] = (tmp10) ? 1 : -1;
  tmp11 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[333], data->simulationInfo->storedRelations[7]);
  tmp12 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[334], data->simulationInfo->storedRelations[8]);
  gout[8] = ((tmp11 && tmp12)) ? 1 : -1;
  tmp13 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[289], data->simulationInfo->storedRelations[9]);
  gout[9] = (tmp13) ? 1 : -1;
  tmp14 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[290], data->simulationInfo->storedRelations[10]);
  gout[10] = ((tmp14 && data->simulationInfo->booleanParameter[68])) ? 1 : -1;
  tmp15 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[290], data->simulationInfo->storedRelations[10]);
  gout[11] = (tmp15) ? 1 : -1;
  tmp16 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[333], data->simulationInfo->storedRelations[7]);
  gout[12] = (tmp16) ? 1 : -1;
  tmp17 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[334], data->simulationInfo->storedRelations[8]);
  gout[13] = (tmp17) ? 1 : -1;
  tmp18 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[311], data->simulationInfo->storedRelations[11]);
  tmp19 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[312], data->simulationInfo->storedRelations[12]);
  gout[14] = ((tmp18 && tmp19)) ? 1 : -1;
  tmp20 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[311], data->simulationInfo->storedRelations[11]);
  gout[15] = (tmp20) ? 1 : -1;
  tmp21 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[312], data->simulationInfo->storedRelations[12]);
  gout[16] = (tmp21) ? 1 : -1;
  tmp22 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[300], data->simulationInfo->storedRelations[0]);
  gout[17] = (tmp22) ? 1 : -1;
  tmp23 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[301], data->simulationInfo->storedRelations[1]);
  gout[18] = (tmp23) ? 1 : -1;
  tmp24 = LessZC(data->localData[0]->realVars[55] /* constantLoad.v variable */, data->simulationInfo->realParameter[36], data->simulationInfo->storedRelations[13]);
  gout[19] = (tmp24) ? 1 : -1;
  tmp25 = LessEqZC(data->localData[0]->realVars[78] /* eXAC2_1.rectifierCommutationVoltageDrop.division.y variable */, 0.0, data->simulationInfo->storedRelations[14]);
  gout[20] = (tmp25) ? 1 : -1;
  tmp26 = GreaterZC(data->localData[0]->realVars[78] /* eXAC2_1.rectifierCommutationVoltageDrop.division.y variable */, 0.0, data->simulationInfo->storedRelations[15]);
  tmp27 = LessEqZC(data->localData[0]->realVars[78] /* eXAC2_1.rectifierCommutationVoltageDrop.division.y variable */, 0.433, data->simulationInfo->storedRelations[16]);
  gout[21] = ((tmp26 && tmp27)) ? 1 : -1;
  tmp28 = GreaterZC(data->localData[0]->realVars[78] /* eXAC2_1.rectifierCommutationVoltageDrop.division.y variable */, 0.433, data->simulationInfo->storedRelations[17]);
  tmp29 = LessZC(data->localData[0]->realVars[78] /* eXAC2_1.rectifierCommutationVoltageDrop.division.y variable */, 0.75, data->simulationInfo->storedRelations[18]);
  gout[22] = ((tmp28 && tmp29)) ? 1 : -1;
  tmp30 = GreaterEqZC(data->localData[0]->realVars[78] /* eXAC2_1.rectifierCommutationVoltageDrop.division.y variable */, 0.75, data->simulationInfo->storedRelations[19]);
  tmp31 = LessEqZC(data->localData[0]->realVars[78] /* eXAC2_1.rectifierCommutationVoltageDrop.division.y variable */, 1.0, data->simulationInfo->storedRelations[20]);
  gout[23] = ((tmp30 && tmp31)) ? 1 : -1;
  tmp32 = GreaterZC(data->localData[0]->realVars[60] /* eXAC2_1.DiffV1.y variable */, data->localData[0]->realVars[71] /* eXAC2_1.gain3.y variable */, data->simulationInfo->storedRelations[21]);
  gout[24] = (tmp32) ? 1 : -1;
  tmp33 = LessZC(data->localData[0]->realVars[4] /* eXAC2_1.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */, data->simulationInfo->realParameter[173], data->simulationInfo->storedRelations[22]);
  tmp34 = LessZC((data->simulationInfo->realParameter[171]) * (data->localData[0]->realVars[83] /* eXAC2_1.rotatingExciterWithDemagnetizationLimited.feedback.y variable */), 0.0, data->simulationInfo->storedRelations[23]);
  tmp35 = GreaterZC(data->localData[0]->realVars[4] /* eXAC2_1.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */, data->simulationInfo->realParameter[172], data->simulationInfo->storedRelations[24]);
  tmp36 = GreaterZC((data->simulationInfo->realParameter[171]) * (data->localData[0]->realVars[83] /* eXAC2_1.rotatingExciterWithDemagnetizationLimited.feedback.y variable */), 0.0, data->simulationInfo->storedRelations[25]);
  gout[25] = (((tmp33 && tmp34) || (tmp35 && tmp36))) ? 1 : -1;
  tmp37 = GreaterZC(data->localData[0]->realVars[2] /* eXAC2_1.imLimitedSimpleLag.state STATE(1) */, data->simulationInfo->realParameter[136], data->simulationInfo->storedRelations[26]);
  tmp38 = LessZC((data->simulationInfo->realParameter[133]) * (data->localData[0]->realVars[73] /* eXAC2_1.imLimitedSimpleLag.u variable */) - data->localData[0]->realVars[2] /* eXAC2_1.imLimitedSimpleLag.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[27]);
  gout[26] = ((tmp37 && tmp38)) ? 1 : -1;
  tmp39 = LessZC(data->localData[0]->realVars[2] /* eXAC2_1.imLimitedSimpleLag.state STATE(1) */, data->simulationInfo->realParameter[137], data->simulationInfo->storedRelations[28]);
  tmp40 = GreaterZC((data->simulationInfo->realParameter[133]) * (data->localData[0]->realVars[73] /* eXAC2_1.imLimitedSimpleLag.u variable */) - data->localData[0]->realVars[2] /* eXAC2_1.imLimitedSimpleLag.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[29]);
  gout[27] = ((tmp39 && tmp40)) ? 1 : -1;
  
  TRACE_POP
  return 0;
}

const char *OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_relationDescription(int i)
{
  const char *res[] = {"time >= pwLine.t1",
  "time < pwLine.t2",
  "time >= constantLoad.t1",
  "time <= constantLoad.t1 + constantLoad.d_t",
  "constantLoad.v < 0.5",
  "time >= pwLine3.t1",
  "time < pwLine3.t2",
  "time >= pwLine4.t1",
  "time < pwLine4.t2",
  "time < pwFault.t1",
  "time < pwFault.t2",
  "time >= pwLine1.t1",
  "time < pwLine1.t2",
  "constantLoad.v < constantLoad.PQBRAK",
  "eXAC2_1.rectifierCommutationVoltageDrop.division.y <= 0.0",
  "eXAC2_1.rectifierCommutationVoltageDrop.division.y > 0.0",
  "eXAC2_1.rectifierCommutationVoltageDrop.division.y <= 0.433",
  "eXAC2_1.rectifierCommutationVoltageDrop.division.y > 0.433",
  "eXAC2_1.rectifierCommutationVoltageDrop.division.y < 0.75",
  "eXAC2_1.rectifierCommutationVoltageDrop.division.y >= 0.75",
  "eXAC2_1.rectifierCommutationVoltageDrop.division.y <= 1.0",
  "eXAC2_1.DiffV1.y > eXAC2_1.gain3.y",
  "eXAC2_1.rotatingExciterWithDemagnetizationLimited.sISO.y < eXAC2_1.rotatingExciterWithDemagnetizationLimited.sISO.outMin",
  "eXAC2_1.rotatingExciterWithDemagnetizationLimited.sISO.k * eXAC2_1.rotatingExciterWithDemagnetizationLimited.feedback.y < 0.0",
  "eXAC2_1.rotatingExciterWithDemagnetizationLimited.sISO.y > eXAC2_1.rotatingExciterWithDemagnetizationLimited.sISO.outMax",
  "eXAC2_1.rotatingExciterWithDemagnetizationLimited.sISO.k * eXAC2_1.rotatingExciterWithDemagnetizationLimited.feedback.y > 0.0",
  "eXAC2_1.imLimitedSimpleLag.state > eXAC2_1.imLimitedSimpleLag.outMax",
  "eXAC2_1.imLimitedSimpleLag.K * eXAC2_1.imLimitedSimpleLag.u - eXAC2_1.imLimitedSimpleLag.state < 0.0",
  "eXAC2_1.imLimitedSimpleLag.state < eXAC2_1.imLimitedSimpleLag.outMin",
  "eXAC2_1.imLimitedSimpleLag.K * eXAC2_1.imLimitedSimpleLag.u - eXAC2_1.imLimitedSimpleLag.state > 0.0"};
  return res[i];
}

int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  TRACE_PUSH
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
  modelica_boolean tmp69;
  modelica_boolean tmp70;
  
  if(evalforZeroCross) {
    tmp41 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[300], data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp41;
    tmp42 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[301], data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[1] = tmp42;
    tmp43 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[72], data->simulationInfo->storedRelations[2]);
    data->simulationInfo->relations[2] = tmp43;
    tmp44 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[72] + data->simulationInfo->realParameter[66], data->simulationInfo->storedRelations[3]);
    data->simulationInfo->relations[3] = tmp44;
    tmp45 = LessZC(data->localData[0]->realVars[55] /* constantLoad.v variable */, 0.5, data->simulationInfo->storedRelations[4]);
    data->simulationInfo->relations[4] = tmp45;
    tmp46 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[322], data->simulationInfo->storedRelations[5]);
    data->simulationInfo->relations[5] = tmp46;
    tmp47 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[323], data->simulationInfo->storedRelations[6]);
    data->simulationInfo->relations[6] = tmp47;
    tmp48 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[333], data->simulationInfo->storedRelations[7]);
    data->simulationInfo->relations[7] = tmp48;
    tmp49 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[334], data->simulationInfo->storedRelations[8]);
    data->simulationInfo->relations[8] = tmp49;
    tmp50 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[289], data->simulationInfo->storedRelations[9]);
    data->simulationInfo->relations[9] = tmp50;
    tmp51 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[290], data->simulationInfo->storedRelations[10]);
    data->simulationInfo->relations[10] = tmp51;
    tmp52 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[311], data->simulationInfo->storedRelations[11]);
    data->simulationInfo->relations[11] = tmp52;
    tmp53 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[312], data->simulationInfo->storedRelations[12]);
    data->simulationInfo->relations[12] = tmp53;
    tmp54 = LessZC(data->localData[0]->realVars[55] /* constantLoad.v variable */, data->simulationInfo->realParameter[36], data->simulationInfo->storedRelations[13]);
    data->simulationInfo->relations[13] = tmp54;
    tmp55 = LessEqZC(data->localData[0]->realVars[78] /* eXAC2_1.rectifierCommutationVoltageDrop.division.y variable */, 0.0, data->simulationInfo->storedRelations[14]);
    data->simulationInfo->relations[14] = tmp55;
    tmp56 = GreaterZC(data->localData[0]->realVars[78] /* eXAC2_1.rectifierCommutationVoltageDrop.division.y variable */, 0.0, data->simulationInfo->storedRelations[15]);
    data->simulationInfo->relations[15] = tmp56;
    tmp57 = LessEqZC(data->localData[0]->realVars[78] /* eXAC2_1.rectifierCommutationVoltageDrop.division.y variable */, 0.433, data->simulationInfo->storedRelations[16]);
    data->simulationInfo->relations[16] = tmp57;
    tmp58 = GreaterZC(data->localData[0]->realVars[78] /* eXAC2_1.rectifierCommutationVoltageDrop.division.y variable */, 0.433, data->simulationInfo->storedRelations[17]);
    data->simulationInfo->relations[17] = tmp58;
    tmp59 = LessZC(data->localData[0]->realVars[78] /* eXAC2_1.rectifierCommutationVoltageDrop.division.y variable */, 0.75, data->simulationInfo->storedRelations[18]);
    data->simulationInfo->relations[18] = tmp59;
    tmp60 = GreaterEqZC(data->localData[0]->realVars[78] /* eXAC2_1.rectifierCommutationVoltageDrop.division.y variable */, 0.75, data->simulationInfo->storedRelations[19]);
    data->simulationInfo->relations[19] = tmp60;
    tmp61 = LessEqZC(data->localData[0]->realVars[78] /* eXAC2_1.rectifierCommutationVoltageDrop.division.y variable */, 1.0, data->simulationInfo->storedRelations[20]);
    data->simulationInfo->relations[20] = tmp61;
    tmp62 = GreaterZC(data->localData[0]->realVars[60] /* eXAC2_1.DiffV1.y variable */, data->localData[0]->realVars[71] /* eXAC2_1.gain3.y variable */, data->simulationInfo->storedRelations[21]);
    data->simulationInfo->relations[21] = tmp62;
    tmp63 = LessZC(data->localData[0]->realVars[4] /* eXAC2_1.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */, data->simulationInfo->realParameter[173], data->simulationInfo->storedRelations[22]);
    data->simulationInfo->relations[22] = tmp63;
    tmp64 = LessZC((data->simulationInfo->realParameter[171]) * (data->localData[0]->realVars[83] /* eXAC2_1.rotatingExciterWithDemagnetizationLimited.feedback.y variable */), 0.0, data->simulationInfo->storedRelations[23]);
    data->simulationInfo->relations[23] = tmp64;
    tmp65 = GreaterZC(data->localData[0]->realVars[4] /* eXAC2_1.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */, data->simulationInfo->realParameter[172], data->simulationInfo->storedRelations[24]);
    data->simulationInfo->relations[24] = tmp65;
    tmp66 = GreaterZC((data->simulationInfo->realParameter[171]) * (data->localData[0]->realVars[83] /* eXAC2_1.rotatingExciterWithDemagnetizationLimited.feedback.y variable */), 0.0, data->simulationInfo->storedRelations[25]);
    data->simulationInfo->relations[25] = tmp66;
    tmp67 = GreaterZC(data->localData[0]->realVars[2] /* eXAC2_1.imLimitedSimpleLag.state STATE(1) */, data->simulationInfo->realParameter[136], data->simulationInfo->storedRelations[26]);
    data->simulationInfo->relations[26] = tmp67;
    tmp68 = LessZC((data->simulationInfo->realParameter[133]) * (data->localData[0]->realVars[73] /* eXAC2_1.imLimitedSimpleLag.u variable */) - data->localData[0]->realVars[2] /* eXAC2_1.imLimitedSimpleLag.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[27]);
    data->simulationInfo->relations[27] = tmp68;
    tmp69 = LessZC(data->localData[0]->realVars[2] /* eXAC2_1.imLimitedSimpleLag.state STATE(1) */, data->simulationInfo->realParameter[137], data->simulationInfo->storedRelations[28]);
    data->simulationInfo->relations[28] = tmp69;
    tmp70 = GreaterZC((data->simulationInfo->realParameter[133]) * (data->localData[0]->realVars[73] /* eXAC2_1.imLimitedSimpleLag.u variable */) - data->localData[0]->realVars[2] /* eXAC2_1.imLimitedSimpleLag.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[29]);
    data->simulationInfo->relations[29] = tmp70;
  } else {
    data->simulationInfo->relations[0] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[300]);
    data->simulationInfo->relations[1] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[301]);
    data->simulationInfo->relations[2] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[72]);
    data->simulationInfo->relations[3] = (data->localData[0]->timeValue <= data->simulationInfo->realParameter[72] + data->simulationInfo->realParameter[66]);
    data->simulationInfo->relations[4] = (data->localData[0]->realVars[55] /* constantLoad.v variable */ < 0.5);
    data->simulationInfo->relations[5] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[322]);
    data->simulationInfo->relations[6] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[323]);
    data->simulationInfo->relations[7] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[333]);
    data->simulationInfo->relations[8] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[334]);
    data->simulationInfo->relations[9] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[289]);
    data->simulationInfo->relations[10] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[290]);
    data->simulationInfo->relations[11] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[311]);
    data->simulationInfo->relations[12] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[312]);
    data->simulationInfo->relations[13] = (data->localData[0]->realVars[55] /* constantLoad.v variable */ < data->simulationInfo->realParameter[36]);
    data->simulationInfo->relations[14] = (data->localData[0]->realVars[78] /* eXAC2_1.rectifierCommutationVoltageDrop.division.y variable */ <= 0.0);
    data->simulationInfo->relations[15] = (data->localData[0]->realVars[78] /* eXAC2_1.rectifierCommutationVoltageDrop.division.y variable */ > 0.0);
    data->simulationInfo->relations[16] = (data->localData[0]->realVars[78] /* eXAC2_1.rectifierCommutationVoltageDrop.division.y variable */ <= 0.433);
    data->simulationInfo->relations[17] = (data->localData[0]->realVars[78] /* eXAC2_1.rectifierCommutationVoltageDrop.division.y variable */ > 0.433);
    data->simulationInfo->relations[18] = (data->localData[0]->realVars[78] /* eXAC2_1.rectifierCommutationVoltageDrop.division.y variable */ < 0.75);
    data->simulationInfo->relations[19] = (data->localData[0]->realVars[78] /* eXAC2_1.rectifierCommutationVoltageDrop.division.y variable */ >= 0.75);
    data->simulationInfo->relations[20] = (data->localData[0]->realVars[78] /* eXAC2_1.rectifierCommutationVoltageDrop.division.y variable */ <= 1.0);
    data->simulationInfo->relations[21] = (data->localData[0]->realVars[60] /* eXAC2_1.DiffV1.y variable */ > data->localData[0]->realVars[71] /* eXAC2_1.gain3.y variable */);
    data->simulationInfo->relations[22] = (data->localData[0]->realVars[4] /* eXAC2_1.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */ < data->simulationInfo->realParameter[173]);
    data->simulationInfo->relations[23] = ((data->simulationInfo->realParameter[171]) * (data->localData[0]->realVars[83] /* eXAC2_1.rotatingExciterWithDemagnetizationLimited.feedback.y variable */) < 0.0);
    data->simulationInfo->relations[24] = (data->localData[0]->realVars[4] /* eXAC2_1.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */ > data->simulationInfo->realParameter[172]);
    data->simulationInfo->relations[25] = ((data->simulationInfo->realParameter[171]) * (data->localData[0]->realVars[83] /* eXAC2_1.rotatingExciterWithDemagnetizationLimited.feedback.y variable */) > 0.0);
    data->simulationInfo->relations[26] = (data->localData[0]->realVars[2] /* eXAC2_1.imLimitedSimpleLag.state STATE(1) */ > data->simulationInfo->realParameter[136]);
    data->simulationInfo->relations[27] = ((data->simulationInfo->realParameter[133]) * (data->localData[0]->realVars[73] /* eXAC2_1.imLimitedSimpleLag.u variable */) - data->localData[0]->realVars[2] /* eXAC2_1.imLimitedSimpleLag.state STATE(1) */ < 0.0);
    data->simulationInfo->relations[28] = (data->localData[0]->realVars[2] /* eXAC2_1.imLimitedSimpleLag.state STATE(1) */ < data->simulationInfo->realParameter[137]);
    data->simulationInfo->relations[29] = ((data->simulationInfo->realParameter[133]) * (data->localData[0]->realVars[73] /* eXAC2_1.imLimitedSimpleLag.u variable */) - data->localData[0]->realVars[2] /* eXAC2_1.imLimitedSimpleLag.state STATE(1) */ > 0.0);
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

