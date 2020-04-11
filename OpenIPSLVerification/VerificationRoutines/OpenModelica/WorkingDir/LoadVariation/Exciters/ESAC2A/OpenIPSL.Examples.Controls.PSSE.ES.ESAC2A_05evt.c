/* Events: Sample, Zero Crossings, Relations, Discrete Changes */
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC2A_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* Initializes the raw time events of the simulation using the now
   calcualted parameters. */
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_function_initSample(DATA *data, threadData_t *threadData)
{
  long i=0;
}

const char *OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_zeroCrossingDescription(int i, int **out_EquationIndexes)
{
  static const char *res[] = {"time >= pwLine.t1 and time < pwLine.t2",
  "constantLoad.v < 0.5",
  "time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t",
  "time >= pwLine3.t1 and time < pwLine3.t2",
  "time >= pwLine.t1",
  "time < pwLine.t2",
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
  "eSAC2A.rectifierCommutationVoltageDrop.division.y <= 0.0",
  "eSAC2A.rectifierCommutationVoltageDrop.division.y > 0.0 and eSAC2A.rectifierCommutationVoltageDrop.division.y <= 0.433",
  "eSAC2A.rectifierCommutationVoltageDrop.division.y > 0.433 and eSAC2A.rectifierCommutationVoltageDrop.division.y < 0.75",
  "eSAC2A.rectifierCommutationVoltageDrop.division.y >= 0.75 and eSAC2A.rectifierCommutationVoltageDrop.division.y <= 1.0",
  "eSAC2A.gain1.y < const5.k",
  "const4.k > eSAC2A.hV_GATE.p",
  "eSAC2A.rotatingExciterWithDemagnetization.sISO.y >= eSAC2A.division.y and eSAC2A.rotatingExciterWithDemagnetization.feedback.y > 0.0",
  "eSAC2A.rotatingExciterWithDemagnetization.sISO.y <= eSAC2A.lowLim.k and eSAC2A.rotatingExciterWithDemagnetization.feedback.y < 0.0",
  "eSAC2A.simpleLagLim.state > eSAC2A.simpleLagLim.outMax and eSAC2A.simpleLagLim.K * eSAC2A.imLeadLag.y - eSAC2A.simpleLagLim.state < 0.0",
  "eSAC2A.simpleLagLim.state < eSAC2A.simpleLagLim.outMin and eSAC2A.simpleLagLim.K * eSAC2A.imLeadLag.y - eSAC2A.simpleLagLim.state > 0.0"};
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
  static const int occurEqs20[] = {1,911};
  static const int occurEqs21[] = {1,911};
  static const int occurEqs22[] = {1,911};
  static const int occurEqs23[] = {1,911};
  static const int occurEqs24[] = {1,935};
  static const int occurEqs25[] = {1,936};
  static const int occurEqs26[] = {1,939};
  static const int occurEqs27[] = {1,939};
  static const int occurEqs28[] = {1,940};
  static const int occurEqs29[] = {1,941};
  static const int *occurEqs[] = {occurEqs0,occurEqs1,occurEqs2,occurEqs3,occurEqs4,occurEqs5,occurEqs6,occurEqs7,occurEqs8,occurEqs9,occurEqs10,occurEqs11,occurEqs12,occurEqs13,occurEqs14,occurEqs15,occurEqs16,occurEqs17,occurEqs18,occurEqs19,occurEqs20,occurEqs21,occurEqs22,occurEqs23,occurEqs24,occurEqs25,occurEqs26,occurEqs27,occurEqs28,occurEqs29};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
}

/* forwarded equations */
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_784(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_785(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_786(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_787(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_788(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_789(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_790(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_791(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_792(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_793(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_794(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_795(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_796(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_797(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_798(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_889(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_900(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_901(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_902(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_903(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_904(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_905(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_906(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_907(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_908(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_909(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_910(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_911(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_912(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_913(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_914(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_915(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_916(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_917(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_918(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_919(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_923(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_924(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_925(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_926(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_927(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_928(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_929(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_930(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_931(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_932(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_933(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_934(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_935(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_936(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_937(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_938(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_939(DATA* data, threadData_t *threadData);

int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_784(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_785(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_786(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_787(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_788(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_789(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_790(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_791(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_792(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_793(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_794(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_795(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_796(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_797(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_798(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_889(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_900(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_901(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_902(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_903(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_904(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_905(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_906(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_907(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_908(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_909(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_910(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_911(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_912(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_913(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_914(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_915(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_916(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_917(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_918(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_919(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_923(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_924(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_925(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_926(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_927(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_928(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_929(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_930(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_931(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_932(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_933(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_934(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_935(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_936(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_937(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_938(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_939(data, threadData);
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
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

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_ZC);
#endif
  data->simulationInfo->callStatistics.functionZeroCrossings++;

  tmp0 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[327] /* pwLine.t1 PARAM */, data->simulationInfo->storedRelations[0]);
  tmp1 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[328] /* pwLine.t2 PARAM */, data->simulationInfo->storedRelations[1]);
  gout[0] = ((tmp0 && tmp1)) ? 1 : -1;
  tmp2 = LessZC(data->localData[0]->realVars[55] /* constantLoad.v variable */, 0.5, data->simulationInfo->storedRelations[2]);
  gout[1] = (tmp2) ? 1 : -1;
  tmp3 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */, data->simulationInfo->storedRelations[3]);
  tmp4 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[71] /* constantLoad.d_t PARAM */, data->simulationInfo->storedRelations[4]);
  gout[2] = ((tmp3 && tmp4)) ? 1 : -1;
  tmp5 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[349] /* pwLine3.t1 PARAM */, data->simulationInfo->storedRelations[5]);
  tmp6 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[350] /* pwLine3.t2 PARAM */, data->simulationInfo->storedRelations[6]);
  gout[3] = ((tmp5 && tmp6)) ? 1 : -1;
  tmp7 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[327] /* pwLine.t1 PARAM */, data->simulationInfo->storedRelations[0]);
  gout[4] = (tmp7) ? 1 : -1;
  tmp8 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[328] /* pwLine.t2 PARAM */, data->simulationInfo->storedRelations[1]);
  gout[5] = (tmp8) ? 1 : -1;
  tmp9 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[349] /* pwLine3.t1 PARAM */, data->simulationInfo->storedRelations[5]);
  gout[6] = (tmp9) ? 1 : -1;
  tmp10 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[350] /* pwLine3.t2 PARAM */, data->simulationInfo->storedRelations[6]);
  gout[7] = (tmp10) ? 1 : -1;
  tmp11 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[360] /* pwLine4.t1 PARAM */, data->simulationInfo->storedRelations[7]);
  tmp12 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[361] /* pwLine4.t2 PARAM */, data->simulationInfo->storedRelations[8]);
  gout[8] = ((tmp11 && tmp12)) ? 1 : -1;
  tmp13 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[316] /* pwFault.t1 PARAM */, data->simulationInfo->storedRelations[9]);
  gout[9] = (tmp13) ? 1 : -1;
  tmp14 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[317] /* pwFault.t2 PARAM */, data->simulationInfo->storedRelations[10]);
  gout[10] = ((tmp14 && data->simulationInfo->booleanParameter[66] /* pwFault.ground PARAM */)) ? 1 : -1;
  tmp15 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[317] /* pwFault.t2 PARAM */, data->simulationInfo->storedRelations[10]);
  gout[11] = (tmp15) ? 1 : -1;
  tmp16 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[360] /* pwLine4.t1 PARAM */, data->simulationInfo->storedRelations[7]);
  gout[12] = (tmp16) ? 1 : -1;
  tmp17 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[361] /* pwLine4.t2 PARAM */, data->simulationInfo->storedRelations[8]);
  gout[13] = (tmp17) ? 1 : -1;
  tmp18 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[338] /* pwLine1.t1 PARAM */, data->simulationInfo->storedRelations[11]);
  tmp19 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[339] /* pwLine1.t2 PARAM */, data->simulationInfo->storedRelations[12]);
  gout[14] = ((tmp18 && tmp19)) ? 1 : -1;
  tmp20 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[338] /* pwLine1.t1 PARAM */, data->simulationInfo->storedRelations[11]);
  gout[15] = (tmp20) ? 1 : -1;
  tmp21 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[339] /* pwLine1.t2 PARAM */, data->simulationInfo->storedRelations[12]);
  gout[16] = (tmp21) ? 1 : -1;
  tmp22 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */, data->simulationInfo->storedRelations[3]);
  gout[17] = (tmp22) ? 1 : -1;
  tmp23 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[71] /* constantLoad.d_t PARAM */, data->simulationInfo->storedRelations[4]);
  gout[18] = (tmp23) ? 1 : -1;
  tmp24 = LessZC(data->localData[0]->realVars[55] /* constantLoad.v variable */, data->simulationInfo->realParameter[41] /* constantLoad.PQBRAK PARAM */, data->simulationInfo->storedRelations[13]);
  gout[19] = (tmp24) ? 1 : -1;
  tmp25 = LessEqZC(data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */, 0.0, data->simulationInfo->storedRelations[14]);
  gout[20] = (tmp25) ? 1 : -1;
  tmp26 = GreaterZC(data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */, 0.0, data->simulationInfo->storedRelations[15]);
  tmp27 = LessEqZC(data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */, 0.433, data->simulationInfo->storedRelations[16]);
  gout[21] = ((tmp26 && tmp27)) ? 1 : -1;
  tmp28 = GreaterZC(data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */, 0.433, data->simulationInfo->storedRelations[17]);
  tmp29 = LessZC(data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */, 0.75, data->simulationInfo->storedRelations[18]);
  gout[22] = ((tmp28 && tmp29)) ? 1 : -1;
  tmp30 = GreaterEqZC(data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */, 0.75, data->simulationInfo->storedRelations[19]);
  tmp31 = LessEqZC(data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */, 1.0, data->simulationInfo->storedRelations[20]);
  gout[23] = ((tmp30 && tmp31)) ? 1 : -1;
  tmp32 = LessZC(data->localData[0]->realVars[72] /* eSAC2A.gain1.y variable */, data->simulationInfo->realParameter[38] /* const5.k PARAM */, data->simulationInfo->storedRelations[21]);
  gout[24] = (tmp32) ? 1 : -1;
  tmp33 = GreaterZC(data->simulationInfo->realParameter[36] /* const4.k PARAM */, data->localData[0]->realVars[73] /* eSAC2A.hV_GATE.p variable */, data->simulationInfo->storedRelations[22]);
  gout[25] = (tmp33) ? 1 : -1;
  tmp34 = GreaterEqZC(data->localData[0]->realVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */, data->localData[0]->realVars[71] /* eSAC2A.division.y variable */, data->simulationInfo->storedRelations[23]);
  tmp35 = GreaterZC(data->localData[0]->realVars[85] /* eSAC2A.rotatingExciterWithDemagnetization.feedback.y variable */, 0.0, data->simulationInfo->storedRelations[24]);
  gout[26] = ((tmp34 && tmp35)) ? 1 : -1;
  tmp36 = LessEqZC(data->localData[0]->realVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */, data->simulationInfo->realParameter[168] /* eSAC2A.lowLim.k PARAM */, data->simulationInfo->storedRelations[25]);
  tmp37 = LessZC(data->localData[0]->realVars[85] /* eSAC2A.rotatingExciterWithDemagnetization.feedback.y variable */, 0.0, data->simulationInfo->storedRelations[26]);
  gout[27] = ((tmp36 && tmp37)) ? 1 : -1;
  tmp38 = GreaterZC(data->localData[0]->realVars[4] /* eSAC2A.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[200] /* eSAC2A.simpleLagLim.outMax PARAM */, data->simulationInfo->storedRelations[27]);
  tmp39 = LessZC((data->simulationInfo->realParameter[196] /* eSAC2A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[76] /* eSAC2A.imLeadLag.y variable */) - data->localData[0]->realVars[4] /* eSAC2A.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[28]);
  gout[28] = ((tmp38 && tmp39)) ? 1 : -1;
  tmp40 = LessZC(data->localData[0]->realVars[4] /* eSAC2A.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[201] /* eSAC2A.simpleLagLim.outMin PARAM */, data->simulationInfo->storedRelations[29]);
  tmp41 = GreaterZC((data->simulationInfo->realParameter[196] /* eSAC2A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[76] /* eSAC2A.imLeadLag.y variable */) - data->localData[0]->realVars[4] /* eSAC2A.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[30]);
  gout[29] = ((tmp40 && tmp41)) ? 1 : -1;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ZC);
#endif

  TRACE_POP
  return 0;
}

const char *OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_relationDescription(int i)
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
  "eSAC2A.rectifierCommutationVoltageDrop.division.y <= 0.0",
  "eSAC2A.rectifierCommutationVoltageDrop.division.y > 0.0",
  "eSAC2A.rectifierCommutationVoltageDrop.division.y <= 0.433",
  "eSAC2A.rectifierCommutationVoltageDrop.division.y > 0.433",
  "eSAC2A.rectifierCommutationVoltageDrop.division.y < 0.75",
  "eSAC2A.rectifierCommutationVoltageDrop.division.y >= 0.75",
  "eSAC2A.rectifierCommutationVoltageDrop.division.y <= 1.0",
  "eSAC2A.gain1.y < const5.k",
  "const4.k > eSAC2A.hV_GATE.p",
  "eSAC2A.rotatingExciterWithDemagnetization.sISO.y >= eSAC2A.division.y",
  "eSAC2A.rotatingExciterWithDemagnetization.feedback.y > 0.0",
  "eSAC2A.rotatingExciterWithDemagnetization.sISO.y <= eSAC2A.lowLim.k",
  "eSAC2A.rotatingExciterWithDemagnetization.feedback.y < 0.0",
  "eSAC2A.simpleLagLim.state > eSAC2A.simpleLagLim.outMax",
  "eSAC2A.simpleLagLim.K * eSAC2A.imLeadLag.y - eSAC2A.simpleLagLim.state < 0.0",
  "eSAC2A.simpleLagLim.state < eSAC2A.simpleLagLim.outMin",
  "eSAC2A.simpleLagLim.K * eSAC2A.imLeadLag.y - eSAC2A.simpleLagLim.state > 0.0"};
  return res[i];
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  TRACE_PUSH
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
  modelica_boolean tmp71;
  modelica_boolean tmp72;
  
  if(evalforZeroCross) {
    tmp42 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[327] /* pwLine.t1 PARAM */, data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp42;
    tmp43 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[328] /* pwLine.t2 PARAM */, data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[1] = tmp43;
    tmp44 = LessZC(data->localData[0]->realVars[55] /* constantLoad.v variable */, 0.5, data->simulationInfo->storedRelations[2]);
    data->simulationInfo->relations[2] = tmp44;
    tmp45 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */, data->simulationInfo->storedRelations[3]);
    data->simulationInfo->relations[3] = tmp45;
    tmp46 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[71] /* constantLoad.d_t PARAM */, data->simulationInfo->storedRelations[4]);
    data->simulationInfo->relations[4] = tmp46;
    tmp47 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[349] /* pwLine3.t1 PARAM */, data->simulationInfo->storedRelations[5]);
    data->simulationInfo->relations[5] = tmp47;
    tmp48 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[350] /* pwLine3.t2 PARAM */, data->simulationInfo->storedRelations[6]);
    data->simulationInfo->relations[6] = tmp48;
    tmp49 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[360] /* pwLine4.t1 PARAM */, data->simulationInfo->storedRelations[7]);
    data->simulationInfo->relations[7] = tmp49;
    tmp50 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[361] /* pwLine4.t2 PARAM */, data->simulationInfo->storedRelations[8]);
    data->simulationInfo->relations[8] = tmp50;
    tmp51 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[316] /* pwFault.t1 PARAM */, data->simulationInfo->storedRelations[9]);
    data->simulationInfo->relations[9] = tmp51;
    tmp52 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[317] /* pwFault.t2 PARAM */, data->simulationInfo->storedRelations[10]);
    data->simulationInfo->relations[10] = tmp52;
    tmp53 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[338] /* pwLine1.t1 PARAM */, data->simulationInfo->storedRelations[11]);
    data->simulationInfo->relations[11] = tmp53;
    tmp54 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[339] /* pwLine1.t2 PARAM */, data->simulationInfo->storedRelations[12]);
    data->simulationInfo->relations[12] = tmp54;
    tmp55 = LessZC(data->localData[0]->realVars[55] /* constantLoad.v variable */, data->simulationInfo->realParameter[41] /* constantLoad.PQBRAK PARAM */, data->simulationInfo->storedRelations[13]);
    data->simulationInfo->relations[13] = tmp55;
    tmp56 = LessEqZC(data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */, 0.0, data->simulationInfo->storedRelations[14]);
    data->simulationInfo->relations[14] = tmp56;
    tmp57 = GreaterZC(data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */, 0.0, data->simulationInfo->storedRelations[15]);
    data->simulationInfo->relations[15] = tmp57;
    tmp58 = LessEqZC(data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */, 0.433, data->simulationInfo->storedRelations[16]);
    data->simulationInfo->relations[16] = tmp58;
    tmp59 = GreaterZC(data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */, 0.433, data->simulationInfo->storedRelations[17]);
    data->simulationInfo->relations[17] = tmp59;
    tmp60 = LessZC(data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */, 0.75, data->simulationInfo->storedRelations[18]);
    data->simulationInfo->relations[18] = tmp60;
    tmp61 = GreaterEqZC(data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */, 0.75, data->simulationInfo->storedRelations[19]);
    data->simulationInfo->relations[19] = tmp61;
    tmp62 = LessEqZC(data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */, 1.0, data->simulationInfo->storedRelations[20]);
    data->simulationInfo->relations[20] = tmp62;
    tmp63 = LessZC(data->localData[0]->realVars[72] /* eSAC2A.gain1.y variable */, data->simulationInfo->realParameter[38] /* const5.k PARAM */, data->simulationInfo->storedRelations[21]);
    data->simulationInfo->relations[21] = tmp63;
    tmp64 = GreaterZC(data->simulationInfo->realParameter[36] /* const4.k PARAM */, data->localData[0]->realVars[73] /* eSAC2A.hV_GATE.p variable */, data->simulationInfo->storedRelations[22]);
    data->simulationInfo->relations[22] = tmp64;
    tmp65 = GreaterEqZC(data->localData[0]->realVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */, data->localData[0]->realVars[71] /* eSAC2A.division.y variable */, data->simulationInfo->storedRelations[23]);
    data->simulationInfo->relations[23] = tmp65;
    tmp66 = GreaterZC(data->localData[0]->realVars[85] /* eSAC2A.rotatingExciterWithDemagnetization.feedback.y variable */, 0.0, data->simulationInfo->storedRelations[24]);
    data->simulationInfo->relations[24] = tmp66;
    tmp67 = LessEqZC(data->localData[0]->realVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */, data->simulationInfo->realParameter[168] /* eSAC2A.lowLim.k PARAM */, data->simulationInfo->storedRelations[25]);
    data->simulationInfo->relations[25] = tmp67;
    tmp68 = LessZC(data->localData[0]->realVars[85] /* eSAC2A.rotatingExciterWithDemagnetization.feedback.y variable */, 0.0, data->simulationInfo->storedRelations[26]);
    data->simulationInfo->relations[26] = tmp68;
    tmp69 = GreaterZC(data->localData[0]->realVars[4] /* eSAC2A.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[200] /* eSAC2A.simpleLagLim.outMax PARAM */, data->simulationInfo->storedRelations[27]);
    data->simulationInfo->relations[27] = tmp69;
    tmp70 = LessZC((data->simulationInfo->realParameter[196] /* eSAC2A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[76] /* eSAC2A.imLeadLag.y variable */) - data->localData[0]->realVars[4] /* eSAC2A.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[28]);
    data->simulationInfo->relations[28] = tmp70;
    tmp71 = LessZC(data->localData[0]->realVars[4] /* eSAC2A.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[201] /* eSAC2A.simpleLagLim.outMin PARAM */, data->simulationInfo->storedRelations[29]);
    data->simulationInfo->relations[29] = tmp71;
    tmp72 = GreaterZC((data->simulationInfo->realParameter[196] /* eSAC2A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[76] /* eSAC2A.imLeadLag.y variable */) - data->localData[0]->realVars[4] /* eSAC2A.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[30]);
    data->simulationInfo->relations[30] = tmp72;
  } else {
    data->simulationInfo->relations[0] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[327] /* pwLine.t1 PARAM */);
    data->simulationInfo->relations[1] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[328] /* pwLine.t2 PARAM */);
    data->simulationInfo->relations[2] = (data->localData[0]->realVars[55] /* constantLoad.v variable */ < 0.5);
    data->simulationInfo->relations[3] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */);
    data->simulationInfo->relations[4] = (data->localData[0]->timeValue <= data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[71] /* constantLoad.d_t PARAM */);
    data->simulationInfo->relations[5] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[349] /* pwLine3.t1 PARAM */);
    data->simulationInfo->relations[6] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[350] /* pwLine3.t2 PARAM */);
    data->simulationInfo->relations[7] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[360] /* pwLine4.t1 PARAM */);
    data->simulationInfo->relations[8] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[361] /* pwLine4.t2 PARAM */);
    data->simulationInfo->relations[9] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[316] /* pwFault.t1 PARAM */);
    data->simulationInfo->relations[10] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[317] /* pwFault.t2 PARAM */);
    data->simulationInfo->relations[11] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[338] /* pwLine1.t1 PARAM */);
    data->simulationInfo->relations[12] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[339] /* pwLine1.t2 PARAM */);
    data->simulationInfo->relations[13] = (data->localData[0]->realVars[55] /* constantLoad.v variable */ < data->simulationInfo->realParameter[41] /* constantLoad.PQBRAK PARAM */);
    data->simulationInfo->relations[14] = (data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */ <= 0.0);
    data->simulationInfo->relations[15] = (data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */ > 0.0);
    data->simulationInfo->relations[16] = (data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */ <= 0.433);
    data->simulationInfo->relations[17] = (data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */ > 0.433);
    data->simulationInfo->relations[18] = (data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */ < 0.75);
    data->simulationInfo->relations[19] = (data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */ >= 0.75);
    data->simulationInfo->relations[20] = (data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */ <= 1.0);
    data->simulationInfo->relations[21] = (data->localData[0]->realVars[72] /* eSAC2A.gain1.y variable */ < data->simulationInfo->realParameter[38] /* const5.k PARAM */);
    data->simulationInfo->relations[22] = (data->simulationInfo->realParameter[36] /* const4.k PARAM */ > data->localData[0]->realVars[73] /* eSAC2A.hV_GATE.p variable */);
    data->simulationInfo->relations[23] = (data->localData[0]->realVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */ >= data->localData[0]->realVars[71] /* eSAC2A.division.y variable */);
    data->simulationInfo->relations[24] = (data->localData[0]->realVars[85] /* eSAC2A.rotatingExciterWithDemagnetization.feedback.y variable */ > 0.0);
    data->simulationInfo->relations[25] = (data->localData[0]->realVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */ <= data->simulationInfo->realParameter[168] /* eSAC2A.lowLim.k PARAM */);
    data->simulationInfo->relations[26] = (data->localData[0]->realVars[85] /* eSAC2A.rotatingExciterWithDemagnetization.feedback.y variable */ < 0.0);
    data->simulationInfo->relations[27] = (data->localData[0]->realVars[4] /* eSAC2A.simpleLagLim.state STATE(1) */ > data->simulationInfo->realParameter[200] /* eSAC2A.simpleLagLim.outMax PARAM */);
    data->simulationInfo->relations[28] = ((data->simulationInfo->realParameter[196] /* eSAC2A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[76] /* eSAC2A.imLeadLag.y variable */) - data->localData[0]->realVars[4] /* eSAC2A.simpleLagLim.state STATE(1) */ < 0.0);
    data->simulationInfo->relations[29] = (data->localData[0]->realVars[4] /* eSAC2A.simpleLagLim.state STATE(1) */ < data->simulationInfo->realParameter[201] /* eSAC2A.simpleLagLim.outMin PARAM */);
    data->simulationInfo->relations[30] = ((data->simulationInfo->realParameter[196] /* eSAC2A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[76] /* eSAC2A.imLeadLag.y variable */) - data->localData[0]->realVars[4] /* eSAC2A.simpleLagLim.state STATE(1) */ > 0.0);
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

