/* Events: Sample, Zero Crossings, Relations, Discrete Changes */
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC1A_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* Initializes the raw time events of the simulation using the now
   calcualted parameters. */
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_function_initSample(DATA *data, threadData_t *threadData)
{
  long i=0;
}

const char *OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_zeroCrossingDescription(int i, int **out_EquationIndexes)
{
  static const char *res[] = {"time >= pwLine.t1 and time < pwLine.t2",
  "constantLoad.v < 0.5",
  "time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t",
  "time >= pwLine3.t1 and time < pwLine3.t2",
  "time >= pwLine.t1",
  "time < pwLine.t2",
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
  "time >= constantLoad.t1",
  "time <= constantLoad.t1 + constantLoad.d_t",
  "constantLoad.v < constantLoad.PQBRAK",
  "eSAC1A.rectifierCommutationVoltageDrop.division.y <= 0.0",
  "eSAC1A.rectifierCommutationVoltageDrop.division.y > 0.0 and eSAC1A.rectifierCommutationVoltageDrop.division.y <= 0.433",
  "eSAC1A.rectifierCommutationVoltageDrop.division.y > 0.433 and eSAC1A.rectifierCommutationVoltageDrop.division.y < 0.75",
  "eSAC1A.rectifierCommutationVoltageDrop.division.y >= 0.75 and eSAC1A.rectifierCommutationVoltageDrop.division.y <= 1.0",
  "eSAC1A.hV_GATE.n1 < const1.k",
  "const2.k > eSAC1A.hV_GATE.p",
  "eSAC1A.rotatingExciterWithDemagnetization.sISO.y < eSAC1A.rotatingExciterWithDemagnetization.sISO.outMin and eSAC1A.rotatingExciterWithDemagnetization.sISO.k * eSAC1A.rotatingExciterWithDemagnetization.feedback.y < 0.0 or eSAC1A.rotatingExciterWithDemagnetization.sISO.y > eSAC1A.rotatingExciterWithDemagnetization.sISO.outMax and eSAC1A.rotatingExciterWithDemagnetization.sISO.k * eSAC1A.rotatingExciterWithDemagnetization.feedback.y > 0.0",
  "eSAC1A.simpleLagLim.state > eSAC1A.simpleLagLim.outMax and eSAC1A.simpleLagLim.K * eSAC1A.imLeadLag.y - eSAC1A.simpleLagLim.state < 0.0",
  "eSAC1A.simpleLagLim.state < eSAC1A.simpleLagLim.outMin and eSAC1A.simpleLagLim.K * eSAC1A.imLeadLag.y - eSAC1A.simpleLagLim.state > 0.0"};
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
  static const int occurEqs20[] = {1,857};
  static const int occurEqs21[] = {1,857};
  static const int occurEqs22[] = {1,857};
  static const int occurEqs23[] = {1,857};
  static const int occurEqs24[] = {1,875};
  static const int occurEqs25[] = {1,876};
  static const int occurEqs26[] = {1,879};
  static const int occurEqs27[] = {1,880};
  static const int occurEqs28[] = {1,881};
  static const int *occurEqs[] = {occurEqs0,occurEqs1,occurEqs2,occurEqs3,occurEqs4,occurEqs5,occurEqs6,occurEqs7,occurEqs8,occurEqs9,occurEqs10,occurEqs11,occurEqs12,occurEqs13,occurEqs14,occurEqs15,occurEqs16,occurEqs17,occurEqs18,occurEqs19,occurEqs20,occurEqs21,occurEqs22,occurEqs23,occurEqs24,occurEqs25,occurEqs26,occurEqs27,occurEqs28};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
}

/* forwarded equations */
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_731(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_732(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_733(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_734(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_735(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_736(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_737(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_738(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_739(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_740(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_741(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_742(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_743(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_744(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_745(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_836(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_845(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_846(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_847(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_848(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_849(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_850(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_851(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_852(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_853(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_854(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_855(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_856(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_857(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_858(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_859(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_865(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_866(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_867(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_868(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_869(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_870(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_871(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_872(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_873(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_874(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_875(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_876(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_877(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_878(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_879(DATA* data, threadData_t *threadData);

int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_731(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_732(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_733(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_734(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_735(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_736(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_737(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_738(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_739(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_740(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_741(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_742(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_743(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_744(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_745(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_836(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_845(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_846(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_847(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_848(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_849(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_850(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_851(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_852(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_853(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_854(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_855(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_856(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_857(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_858(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_859(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_865(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_866(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_867(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_868(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_869(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_870(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_871(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_872(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_873(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_874(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_875(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_876(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_877(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_878(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_879(data, threadData);
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
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
  
  data->simulationInfo->callStatistics.functionZeroCrossings++;
  
  tmp6 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[286], data->simulationInfo->storedRelations[0]);
  tmp7 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[287], data->simulationInfo->storedRelations[1]);
  gout[0] = ((tmp6 && tmp7)) ? 1 : -1;
  tmp8 = LessZC(data->localData[0]->realVars[55] /* constantLoad.v variable */, 0.5, data->simulationInfo->storedRelations[2]);
  gout[1] = (tmp8) ? 1 : -1;
  tmp9 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[74], data->simulationInfo->storedRelations[3]);
  tmp10 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[74] + data->simulationInfo->realParameter[68], data->simulationInfo->storedRelations[4]);
  gout[2] = ((tmp9 && tmp10)) ? 1 : -1;
  tmp11 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[308], data->simulationInfo->storedRelations[5]);
  tmp12 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[309], data->simulationInfo->storedRelations[6]);
  gout[3] = ((tmp11 && tmp12)) ? 1 : -1;
  tmp13 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[286], data->simulationInfo->storedRelations[0]);
  gout[4] = (tmp13) ? 1 : -1;
  tmp14 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[287], data->simulationInfo->storedRelations[1]);
  gout[5] = (tmp14) ? 1 : -1;
  tmp15 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[308], data->simulationInfo->storedRelations[5]);
  gout[6] = (tmp15) ? 1 : -1;
  tmp16 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[309], data->simulationInfo->storedRelations[6]);
  gout[7] = (tmp16) ? 1 : -1;
  tmp17 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[275], data->simulationInfo->storedRelations[7]);
  gout[8] = (tmp17) ? 1 : -1;
  tmp18 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[276], data->simulationInfo->storedRelations[8]);
  gout[9] = ((tmp18 && data->simulationInfo->booleanParameter[68])) ? 1 : -1;
  tmp19 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[276], data->simulationInfo->storedRelations[8]);
  gout[10] = (tmp19) ? 1 : -1;
  tmp20 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[319], data->simulationInfo->storedRelations[9]);
  tmp21 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[320], data->simulationInfo->storedRelations[10]);
  gout[11] = ((tmp20 && tmp21)) ? 1 : -1;
  tmp22 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[319], data->simulationInfo->storedRelations[9]);
  gout[12] = (tmp22) ? 1 : -1;
  tmp23 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[320], data->simulationInfo->storedRelations[10]);
  gout[13] = (tmp23) ? 1 : -1;
  tmp24 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[297], data->simulationInfo->storedRelations[11]);
  tmp25 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[298], data->simulationInfo->storedRelations[12]);
  gout[14] = ((tmp24 && tmp25)) ? 1 : -1;
  tmp26 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[297], data->simulationInfo->storedRelations[11]);
  gout[15] = (tmp26) ? 1 : -1;
  tmp27 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[298], data->simulationInfo->storedRelations[12]);
  gout[16] = (tmp27) ? 1 : -1;
  tmp28 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[74], data->simulationInfo->storedRelations[3]);
  gout[17] = (tmp28) ? 1 : -1;
  tmp29 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[74] + data->simulationInfo->realParameter[68], data->simulationInfo->storedRelations[4]);
  gout[18] = (tmp29) ? 1 : -1;
  tmp30 = LessZC(data->localData[0]->realVars[55] /* constantLoad.v variable */, data->simulationInfo->realParameter[38], data->simulationInfo->storedRelations[13]);
  gout[19] = (tmp30) ? 1 : -1;
  tmp31 = LessEqZC(data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */, 0.0, data->simulationInfo->storedRelations[14]);
  gout[20] = (tmp31) ? 1 : -1;
  tmp32 = GreaterZC(data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */, 0.0, data->simulationInfo->storedRelations[15]);
  tmp33 = LessEqZC(data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */, 0.433, data->simulationInfo->storedRelations[16]);
  gout[21] = ((tmp32 && tmp33)) ? 1 : -1;
  tmp34 = GreaterZC(data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */, 0.433, data->simulationInfo->storedRelations[17]);
  tmp35 = LessZC(data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */, 0.75, data->simulationInfo->storedRelations[18]);
  gout[22] = ((tmp34 && tmp35)) ? 1 : -1;
  tmp36 = GreaterEqZC(data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */, 0.75, data->simulationInfo->storedRelations[19]);
  tmp37 = LessEqZC(data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */, 1.0, data->simulationInfo->storedRelations[20]);
  gout[23] = ((tmp36 && tmp37)) ? 1 : -1;
  tmp38 = LessZC(data->localData[0]->realVars[65] /* eSAC1A.hV_GATE.n1 variable */, data->simulationInfo->realParameter[35], data->simulationInfo->storedRelations[21]);
  gout[24] = (tmp38) ? 1 : -1;
  tmp39 = GreaterZC(data->simulationInfo->realParameter[36], data->localData[0]->realVars[66] /* eSAC1A.hV_GATE.p variable */, data->simulationInfo->storedRelations[22]);
  gout[25] = (tmp39) ? 1 : -1;
  tmp40 = LessZC(data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */, data->simulationInfo->realParameter[153], data->simulationInfo->storedRelations[23]);
  tmp41 = LessZC((data->simulationInfo->realParameter[151]) * (data->localData[0]->realVars[78] /* eSAC1A.rotatingExciterWithDemagnetization.feedback.y variable */), 0.0, data->simulationInfo->storedRelations[24]);
  tmp42 = GreaterZC(data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */, data->simulationInfo->realParameter[152], data->simulationInfo->storedRelations[25]);
  tmp43 = GreaterZC((data->simulationInfo->realParameter[151]) * (data->localData[0]->realVars[78] /* eSAC1A.rotatingExciterWithDemagnetization.feedback.y variable */), 0.0, data->simulationInfo->storedRelations[26]);
  gout[26] = (((tmp40 && tmp41) || (tmp42 && tmp43))) ? 1 : -1;
  tmp44 = GreaterZC(data->localData[0]->realVars[4] /* eSAC1A.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[162], data->simulationInfo->storedRelations[27]);
  tmp45 = LessZC((data->simulationInfo->realParameter[159]) * (data->localData[0]->realVars[69] /* eSAC1A.imLeadLag.y variable */) - data->localData[0]->realVars[4] /* eSAC1A.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[28]);
  gout[27] = ((tmp44 && tmp45)) ? 1 : -1;
  tmp46 = LessZC(data->localData[0]->realVars[4] /* eSAC1A.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[163], data->simulationInfo->storedRelations[29]);
  tmp47 = GreaterZC((data->simulationInfo->realParameter[159]) * (data->localData[0]->realVars[69] /* eSAC1A.imLeadLag.y variable */) - data->localData[0]->realVars[4] /* eSAC1A.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[30]);
  gout[28] = ((tmp46 && tmp47)) ? 1 : -1;
  
  TRACE_POP
  return 0;
}

const char *OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_relationDescription(int i)
{
  const char *res[] = {"time >= pwLine.t1",
  "time < pwLine.t2",
  "constantLoad.v < 0.5",
  "time >= constantLoad.t1",
  "time <= constantLoad.t1 + constantLoad.d_t",
  "time >= pwLine3.t1",
  "time < pwLine3.t2",
  "time < pwFault.t1",
  "time < pwFault.t2",
  "time >= pwLine4.t1",
  "time < pwLine4.t2",
  "time >= pwLine1.t1",
  "time < pwLine1.t2",
  "constantLoad.v < constantLoad.PQBRAK",
  "eSAC1A.rectifierCommutationVoltageDrop.division.y <= 0.0",
  "eSAC1A.rectifierCommutationVoltageDrop.division.y > 0.0",
  "eSAC1A.rectifierCommutationVoltageDrop.division.y <= 0.433",
  "eSAC1A.rectifierCommutationVoltageDrop.division.y > 0.433",
  "eSAC1A.rectifierCommutationVoltageDrop.division.y < 0.75",
  "eSAC1A.rectifierCommutationVoltageDrop.division.y >= 0.75",
  "eSAC1A.rectifierCommutationVoltageDrop.division.y <= 1.0",
  "eSAC1A.hV_GATE.n1 < const1.k",
  "const2.k > eSAC1A.hV_GATE.p",
  "eSAC1A.rotatingExciterWithDemagnetization.sISO.y < eSAC1A.rotatingExciterWithDemagnetization.sISO.outMin",
  "eSAC1A.rotatingExciterWithDemagnetization.sISO.k * eSAC1A.rotatingExciterWithDemagnetization.feedback.y < 0.0",
  "eSAC1A.rotatingExciterWithDemagnetization.sISO.y > eSAC1A.rotatingExciterWithDemagnetization.sISO.outMax",
  "eSAC1A.rotatingExciterWithDemagnetization.sISO.k * eSAC1A.rotatingExciterWithDemagnetization.feedback.y > 0.0",
  "eSAC1A.simpleLagLim.state > eSAC1A.simpleLagLim.outMax",
  "eSAC1A.simpleLagLim.K * eSAC1A.imLeadLag.y - eSAC1A.simpleLagLim.state < 0.0",
  "eSAC1A.simpleLagLim.state < eSAC1A.simpleLagLim.outMin",
  "eSAC1A.simpleLagLim.K * eSAC1A.imLeadLag.y - eSAC1A.simpleLagLim.state > 0.0"};
  return res[i];
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  TRACE_PUSH
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
  modelica_boolean tmp75;
  modelica_boolean tmp76;
  modelica_boolean tmp77;
  modelica_boolean tmp78;
  
  if(evalforZeroCross) {
    tmp48 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[286], data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp48;
    tmp49 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[287], data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[1] = tmp49;
    tmp50 = LessZC(data->localData[0]->realVars[55] /* constantLoad.v variable */, 0.5, data->simulationInfo->storedRelations[2]);
    data->simulationInfo->relations[2] = tmp50;
    tmp51 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[74], data->simulationInfo->storedRelations[3]);
    data->simulationInfo->relations[3] = tmp51;
    tmp52 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[74] + data->simulationInfo->realParameter[68], data->simulationInfo->storedRelations[4]);
    data->simulationInfo->relations[4] = tmp52;
    tmp53 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[308], data->simulationInfo->storedRelations[5]);
    data->simulationInfo->relations[5] = tmp53;
    tmp54 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[309], data->simulationInfo->storedRelations[6]);
    data->simulationInfo->relations[6] = tmp54;
    tmp55 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[275], data->simulationInfo->storedRelations[7]);
    data->simulationInfo->relations[7] = tmp55;
    tmp56 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[276], data->simulationInfo->storedRelations[8]);
    data->simulationInfo->relations[8] = tmp56;
    tmp57 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[319], data->simulationInfo->storedRelations[9]);
    data->simulationInfo->relations[9] = tmp57;
    tmp58 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[320], data->simulationInfo->storedRelations[10]);
    data->simulationInfo->relations[10] = tmp58;
    tmp59 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[297], data->simulationInfo->storedRelations[11]);
    data->simulationInfo->relations[11] = tmp59;
    tmp60 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[298], data->simulationInfo->storedRelations[12]);
    data->simulationInfo->relations[12] = tmp60;
    tmp61 = LessZC(data->localData[0]->realVars[55] /* constantLoad.v variable */, data->simulationInfo->realParameter[38], data->simulationInfo->storedRelations[13]);
    data->simulationInfo->relations[13] = tmp61;
    tmp62 = LessEqZC(data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */, 0.0, data->simulationInfo->storedRelations[14]);
    data->simulationInfo->relations[14] = tmp62;
    tmp63 = GreaterZC(data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */, 0.0, data->simulationInfo->storedRelations[15]);
    data->simulationInfo->relations[15] = tmp63;
    tmp64 = LessEqZC(data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */, 0.433, data->simulationInfo->storedRelations[16]);
    data->simulationInfo->relations[16] = tmp64;
    tmp65 = GreaterZC(data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */, 0.433, data->simulationInfo->storedRelations[17]);
    data->simulationInfo->relations[17] = tmp65;
    tmp66 = LessZC(data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */, 0.75, data->simulationInfo->storedRelations[18]);
    data->simulationInfo->relations[18] = tmp66;
    tmp67 = GreaterEqZC(data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */, 0.75, data->simulationInfo->storedRelations[19]);
    data->simulationInfo->relations[19] = tmp67;
    tmp68 = LessEqZC(data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */, 1.0, data->simulationInfo->storedRelations[20]);
    data->simulationInfo->relations[20] = tmp68;
    tmp69 = LessZC(data->localData[0]->realVars[65] /* eSAC1A.hV_GATE.n1 variable */, data->simulationInfo->realParameter[35], data->simulationInfo->storedRelations[21]);
    data->simulationInfo->relations[21] = tmp69;
    tmp70 = GreaterZC(data->simulationInfo->realParameter[36], data->localData[0]->realVars[66] /* eSAC1A.hV_GATE.p variable */, data->simulationInfo->storedRelations[22]);
    data->simulationInfo->relations[22] = tmp70;
    tmp71 = LessZC(data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */, data->simulationInfo->realParameter[153], data->simulationInfo->storedRelations[23]);
    data->simulationInfo->relations[23] = tmp71;
    tmp72 = LessZC((data->simulationInfo->realParameter[151]) * (data->localData[0]->realVars[78] /* eSAC1A.rotatingExciterWithDemagnetization.feedback.y variable */), 0.0, data->simulationInfo->storedRelations[24]);
    data->simulationInfo->relations[24] = tmp72;
    tmp73 = GreaterZC(data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */, data->simulationInfo->realParameter[152], data->simulationInfo->storedRelations[25]);
    data->simulationInfo->relations[25] = tmp73;
    tmp74 = GreaterZC((data->simulationInfo->realParameter[151]) * (data->localData[0]->realVars[78] /* eSAC1A.rotatingExciterWithDemagnetization.feedback.y variable */), 0.0, data->simulationInfo->storedRelations[26]);
    data->simulationInfo->relations[26] = tmp74;
    tmp75 = GreaterZC(data->localData[0]->realVars[4] /* eSAC1A.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[162], data->simulationInfo->storedRelations[27]);
    data->simulationInfo->relations[27] = tmp75;
    tmp76 = LessZC((data->simulationInfo->realParameter[159]) * (data->localData[0]->realVars[69] /* eSAC1A.imLeadLag.y variable */) - data->localData[0]->realVars[4] /* eSAC1A.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[28]);
    data->simulationInfo->relations[28] = tmp76;
    tmp77 = LessZC(data->localData[0]->realVars[4] /* eSAC1A.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[163], data->simulationInfo->storedRelations[29]);
    data->simulationInfo->relations[29] = tmp77;
    tmp78 = GreaterZC((data->simulationInfo->realParameter[159]) * (data->localData[0]->realVars[69] /* eSAC1A.imLeadLag.y variable */) - data->localData[0]->realVars[4] /* eSAC1A.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[30]);
    data->simulationInfo->relations[30] = tmp78;
  } else {
    data->simulationInfo->relations[0] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[286]);
    data->simulationInfo->relations[1] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[287]);
    data->simulationInfo->relations[2] = (data->localData[0]->realVars[55] /* constantLoad.v variable */ < 0.5);
    data->simulationInfo->relations[3] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[74]);
    data->simulationInfo->relations[4] = (data->localData[0]->timeValue <= data->simulationInfo->realParameter[74] + data->simulationInfo->realParameter[68]);
    data->simulationInfo->relations[5] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[308]);
    data->simulationInfo->relations[6] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[309]);
    data->simulationInfo->relations[7] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[275]);
    data->simulationInfo->relations[8] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[276]);
    data->simulationInfo->relations[9] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[319]);
    data->simulationInfo->relations[10] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[320]);
    data->simulationInfo->relations[11] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[297]);
    data->simulationInfo->relations[12] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[298]);
    data->simulationInfo->relations[13] = (data->localData[0]->realVars[55] /* constantLoad.v variable */ < data->simulationInfo->realParameter[38]);
    data->simulationInfo->relations[14] = (data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */ <= 0.0);
    data->simulationInfo->relations[15] = (data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */ > 0.0);
    data->simulationInfo->relations[16] = (data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */ <= 0.433);
    data->simulationInfo->relations[17] = (data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */ > 0.433);
    data->simulationInfo->relations[18] = (data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */ < 0.75);
    data->simulationInfo->relations[19] = (data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */ >= 0.75);
    data->simulationInfo->relations[20] = (data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */ <= 1.0);
    data->simulationInfo->relations[21] = (data->localData[0]->realVars[65] /* eSAC1A.hV_GATE.n1 variable */ < data->simulationInfo->realParameter[35]);
    data->simulationInfo->relations[22] = (data->simulationInfo->realParameter[36] > data->localData[0]->realVars[66] /* eSAC1A.hV_GATE.p variable */);
    data->simulationInfo->relations[23] = (data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */ < data->simulationInfo->realParameter[153]);
    data->simulationInfo->relations[24] = ((data->simulationInfo->realParameter[151]) * (data->localData[0]->realVars[78] /* eSAC1A.rotatingExciterWithDemagnetization.feedback.y variable */) < 0.0);
    data->simulationInfo->relations[25] = (data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */ > data->simulationInfo->realParameter[152]);
    data->simulationInfo->relations[26] = ((data->simulationInfo->realParameter[151]) * (data->localData[0]->realVars[78] /* eSAC1A.rotatingExciterWithDemagnetization.feedback.y variable */) > 0.0);
    data->simulationInfo->relations[27] = (data->localData[0]->realVars[4] /* eSAC1A.simpleLagLim.state STATE(1) */ > data->simulationInfo->realParameter[162]);
    data->simulationInfo->relations[28] = ((data->simulationInfo->realParameter[159]) * (data->localData[0]->realVars[69] /* eSAC1A.imLeadLag.y variable */) - data->localData[0]->realVars[4] /* eSAC1A.simpleLagLim.state STATE(1) */ < 0.0);
    data->simulationInfo->relations[29] = (data->localData[0]->realVars[4] /* eSAC1A.simpleLagLim.state STATE(1) */ < data->simulationInfo->realParameter[163]);
    data->simulationInfo->relations[30] = ((data->simulationInfo->realParameter[159]) * (data->localData[0]->realVars[69] /* eSAC1A.imLeadLag.y variable */) - data->localData[0]->realVars[4] /* eSAC1A.simpleLagLim.state STATE(1) */ > 0.0);
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

