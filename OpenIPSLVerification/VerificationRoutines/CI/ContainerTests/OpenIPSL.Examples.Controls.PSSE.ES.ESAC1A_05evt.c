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
  "time >= pwLine1.t1 and time < pwLine1.t2",
  "time >= pwLine.t1",
  "time < pwLine.t2",
  "time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t",
  "constantLoad.v < constantLoad.PQBRAK",
  "constantLoad.v < 0.5",
  "time >= constantLoad.t1",
  "time <= constantLoad.t1 + constantLoad.d_t",
  "time >= pwLine1.t1",
  "time < pwLine1.t2",
  "time >= pwLine2.t1 and time < pwLine2.t2",
  "time >= pwLine2.t1",
  "time < pwLine2.t2",
  "time >= pwLine4.t1 and time < pwLine4.t2",
  "time >= pwLine3.t1 and time < pwLine3.t2",
  "time < pwFault.t1",
  "time < pwFault.t2 and pwFault.ground",
  "time < pwFault.t2",
  "time >= pwLine3.t1",
  "time < pwLine3.t2",
  "time >= pwLine4.t1",
  "time < pwLine4.t2",
  "eSAC1A.rectifierCommutationVoltageDrop.division.y <= 0.0",
  "eSAC1A.rectifierCommutationVoltageDrop.division.y > 0.0 and eSAC1A.rectifierCommutationVoltageDrop.division.y <= 0.433",
  "eSAC1A.rectifierCommutationVoltageDrop.division.y > 0.433 and eSAC1A.rectifierCommutationVoltageDrop.division.y < 0.75",
  "eSAC1A.rectifierCommutationVoltageDrop.division.y >= 0.75 and eSAC1A.rectifierCommutationVoltageDrop.division.y <= 1.0",
  "eSAC1A.hV_GATE.n1 < minusInf.k",
  "plusInf.k > eSAC1A.hV_GATE.p",
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
  static const int occurEqs20[] = {1,-1};
  static const int occurEqs21[] = {1,-1};
  static const int occurEqs22[] = {1,-1};
  static const int occurEqs23[] = {1,516};
  static const int occurEqs24[] = {1,516};
  static const int occurEqs25[] = {1,516};
  static const int occurEqs26[] = {1,516};
  static const int occurEqs27[] = {1,539};
  static const int occurEqs28[] = {1,540};
  static const int occurEqs29[] = {1,543};
  static const int occurEqs30[] = {1,544};
  static const int occurEqs31[] = {1,545};
  static const int *occurEqs[] = {occurEqs0,occurEqs1,occurEqs2,occurEqs3,occurEqs4,occurEqs5,occurEqs6,occurEqs7,occurEqs8,occurEqs9,occurEqs10,occurEqs11,occurEqs12,occurEqs13,occurEqs14,occurEqs15,occurEqs16,occurEqs17,occurEqs18,occurEqs19,occurEqs20,occurEqs21,occurEqs22,occurEqs23,occurEqs24,occurEqs25,occurEqs26,occurEqs27,occurEqs28,occurEqs29,occurEqs30,occurEqs31};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
}

/* forwarded equations */
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_387(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_388(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_389(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_390(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_391(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_392(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_393(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_394(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_395(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_396(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_397(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_398(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_399(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_400(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_401(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_500(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_509(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_510(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_511(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_512(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_513(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_514(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_515(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_516(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_517(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_518(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_521(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_522(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_523(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_524(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_525(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_529(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_530(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_531(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_532(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_533(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_534(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_535(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_536(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_537(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_538(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_539(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_540(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_541(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_542(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_543(DATA* data, threadData_t *threadData);

int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_387(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_388(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_389(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_390(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_391(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_392(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_393(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_394(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_395(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_396(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_397(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_398(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_399(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_400(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_401(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_500(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_509(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_510(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_511(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_512(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_513(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_514(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_515(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_516(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_517(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_518(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_521(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_522(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_523(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_524(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_525(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_529(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_530(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_531(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_532(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_533(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_534(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_535(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_536(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_537(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_538(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_539(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_540(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_541(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_542(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_543(data, threadData);
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
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
  modelica_boolean tmp43;
  modelica_boolean tmp44;
  modelica_boolean tmp45;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_ZC);
#endif
  data->simulationInfo->callStatistics.functionZeroCrossings++;

  tmp0 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[303] /* pwLine.t1 PARAM */, data->simulationInfo->storedRelations[0]);
  tmp1 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[304] /* pwLine.t2 PARAM */, data->simulationInfo->storedRelations[1]);
  gout[0] = ((tmp0 && tmp1)) ? 1 : -1;
  tmp2 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[314] /* pwLine1.t1 PARAM */, data->simulationInfo->storedRelations[2]);
  tmp3 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[315] /* pwLine1.t2 PARAM */, data->simulationInfo->storedRelations[3]);
  gout[1] = ((tmp2 && tmp3)) ? 1 : -1;
  tmp4 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[303] /* pwLine.t1 PARAM */, data->simulationInfo->storedRelations[0]);
  gout[2] = (tmp4) ? 1 : -1;
  tmp5 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[304] /* pwLine.t2 PARAM */, data->simulationInfo->storedRelations[1]);
  gout[3] = (tmp5) ? 1 : -1;
  tmp6 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */, data->simulationInfo->storedRelations[4]);
  tmp7 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[67] /* constantLoad.d_t PARAM */, data->simulationInfo->storedRelations[5]);
  gout[4] = ((tmp6 && tmp7)) ? 1 : -1;
  tmp8 = LessZC(data->localData[0]->realVars[65] /* constantLoad.v variable */, data->simulationInfo->realParameter[38] /* constantLoad.PQBRAK PARAM */, data->simulationInfo->storedRelations[6]);
  gout[5] = (tmp8) ? 1 : -1;
  tmp9 = LessZC(data->localData[0]->realVars[65] /* constantLoad.v variable */, 0.5, data->simulationInfo->storedRelations[7]);
  gout[6] = (tmp9) ? 1 : -1;
  tmp10 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */, data->simulationInfo->storedRelations[4]);
  gout[7] = (tmp10) ? 1 : -1;
  tmp11 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[67] /* constantLoad.d_t PARAM */, data->simulationInfo->storedRelations[5]);
  gout[8] = (tmp11) ? 1 : -1;
  tmp12 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[314] /* pwLine1.t1 PARAM */, data->simulationInfo->storedRelations[2]);
  gout[9] = (tmp12) ? 1 : -1;
  tmp13 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[315] /* pwLine1.t2 PARAM */, data->simulationInfo->storedRelations[3]);
  gout[10] = (tmp13) ? 1 : -1;
  tmp14 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[325] /* pwLine2.t1 PARAM */, data->simulationInfo->storedRelations[8]);
  tmp15 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[326] /* pwLine2.t2 PARAM */, data->simulationInfo->storedRelations[9]);
  gout[11] = ((tmp14 && tmp15)) ? 1 : -1;
  tmp16 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[325] /* pwLine2.t1 PARAM */, data->simulationInfo->storedRelations[8]);
  gout[12] = (tmp16) ? 1 : -1;
  tmp17 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[326] /* pwLine2.t2 PARAM */, data->simulationInfo->storedRelations[9]);
  gout[13] = (tmp17) ? 1 : -1;
  tmp18 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[347] /* pwLine4.t1 PARAM */, data->simulationInfo->storedRelations[10]);
  tmp19 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[348] /* pwLine4.t2 PARAM */, data->simulationInfo->storedRelations[11]);
  gout[14] = ((tmp18 && tmp19)) ? 1 : -1;
  tmp20 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[336] /* pwLine3.t1 PARAM */, data->simulationInfo->storedRelations[12]);
  tmp21 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[337] /* pwLine3.t2 PARAM */, data->simulationInfo->storedRelations[13]);
  gout[15] = ((tmp20 && tmp21)) ? 1 : -1;
  tmp22 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[292] /* pwFault.t1 PARAM */, data->simulationInfo->storedRelations[14]);
  gout[16] = (tmp22) ? 1 : -1;
  tmp23 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[293] /* pwFault.t2 PARAM */, data->simulationInfo->storedRelations[15]);
  gout[17] = ((tmp23 && data->simulationInfo->booleanParameter[79] /* pwFault.ground PARAM */)) ? 1 : -1;
  tmp24 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[293] /* pwFault.t2 PARAM */, data->simulationInfo->storedRelations[15]);
  gout[18] = (tmp24) ? 1 : -1;
  tmp25 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[336] /* pwLine3.t1 PARAM */, data->simulationInfo->storedRelations[12]);
  gout[19] = (tmp25) ? 1 : -1;
  tmp26 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[337] /* pwLine3.t2 PARAM */, data->simulationInfo->storedRelations[13]);
  gout[20] = (tmp26) ? 1 : -1;
  tmp27 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[347] /* pwLine4.t1 PARAM */, data->simulationInfo->storedRelations[10]);
  gout[21] = (tmp27) ? 1 : -1;
  tmp28 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[348] /* pwLine4.t2 PARAM */, data->simulationInfo->storedRelations[11]);
  gout[22] = (tmp28) ? 1 : -1;
  tmp29 = LessEqZC(data->localData[0]->realVars[83] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */, 0.0, data->simulationInfo->storedRelations[16]);
  gout[23] = (tmp29) ? 1 : -1;
  tmp30 = GreaterZC(data->localData[0]->realVars[83] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */, 0.0, data->simulationInfo->storedRelations[17]);
  tmp31 = LessEqZC(data->localData[0]->realVars[83] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */, 0.433, data->simulationInfo->storedRelations[18]);
  gout[24] = ((tmp30 && tmp31)) ? 1 : -1;
  tmp32 = GreaterZC(data->localData[0]->realVars[83] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */, 0.433, data->simulationInfo->storedRelations[19]);
  tmp33 = LessZC(data->localData[0]->realVars[83] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */, 0.75, data->simulationInfo->storedRelations[20]);
  gout[25] = ((tmp32 && tmp33)) ? 1 : -1;
  tmp34 = GreaterEqZC(data->localData[0]->realVars[83] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */, 0.75, data->simulationInfo->storedRelations[21]);
  tmp35 = LessEqZC(data->localData[0]->realVars[83] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */, 1.0, data->simulationInfo->storedRelations[22]);
  gout[26] = ((tmp34 && tmp35)) ? 1 : -1;
  tmp36 = LessZC(data->localData[0]->realVars[75] /* eSAC1A.hV_GATE.n1 variable */, data->simulationInfo->realParameter[286] /* minusInf.k PARAM */, data->simulationInfo->storedRelations[23]);
  gout[27] = (tmp36) ? 1 : -1;
  tmp37 = GreaterZC(data->simulationInfo->realParameter[288] /* plusInf.k PARAM */, data->localData[0]->realVars[76] /* eSAC1A.hV_GATE.p variable */, data->simulationInfo->storedRelations[24]);
  gout[28] = (tmp37) ? 1 : -1;
  tmp38 = LessZC(data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */, data->simulationInfo->realParameter[163] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.outMin PARAM */, data->simulationInfo->storedRelations[25]);
  tmp39 = LessZC((data->simulationInfo->realParameter[161] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.k PARAM */) * (data->localData[0]->realVars[88] /* eSAC1A.rotatingExciterWithDemagnetization.feedback.y variable */), 0.0, data->simulationInfo->storedRelations[26]);
  tmp40 = GreaterZC(data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */, data->simulationInfo->realParameter[162] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.outMax PARAM */, data->simulationInfo->storedRelations[27]);
  tmp41 = GreaterZC((data->simulationInfo->realParameter[161] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.k PARAM */) * (data->localData[0]->realVars[88] /* eSAC1A.rotatingExciterWithDemagnetization.feedback.y variable */), 0.0, data->simulationInfo->storedRelations[28]);
  gout[29] = (((tmp38 && tmp39) || (tmp40 && tmp41))) ? 1 : -1;
  tmp42 = GreaterZC(data->localData[0]->realVars[4] /* eSAC1A.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[173] /* eSAC1A.simpleLagLim.outMax PARAM */, data->simulationInfo->storedRelations[29]);
  tmp43 = LessZC((data->simulationInfo->realParameter[169] /* eSAC1A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[79] /* eSAC1A.imLeadLag.y variable */) - data->localData[0]->realVars[4] /* eSAC1A.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[30]);
  gout[30] = ((tmp42 && tmp43)) ? 1 : -1;
  tmp44 = LessZC(data->localData[0]->realVars[4] /* eSAC1A.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[174] /* eSAC1A.simpleLagLim.outMin PARAM */, data->simulationInfo->storedRelations[31]);
  tmp45 = GreaterZC((data->simulationInfo->realParameter[169] /* eSAC1A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[79] /* eSAC1A.imLeadLag.y variable */) - data->localData[0]->realVars[4] /* eSAC1A.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[32]);
  gout[31] = ((tmp44 && tmp45)) ? 1 : -1;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ZC);
#endif

  TRACE_POP
  return 0;
}

const char *OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_relationDescription(int i)
{
  const char *res[] = {"time >= pwLine.t1",
  "time < pwLine.t2",
  "time >= pwLine1.t1",
  "time < pwLine1.t2",
  "time >= constantLoad.t1",
  "time <= constantLoad.t1 + constantLoad.d_t",
  "constantLoad.v < constantLoad.PQBRAK",
  "constantLoad.v < 0.5",
  "time >= pwLine2.t1",
  "time < pwLine2.t2",
  "time >= pwLine4.t1",
  "time < pwLine4.t2",
  "time >= pwLine3.t1",
  "time < pwLine3.t2",
  "time < pwFault.t1",
  "time < pwFault.t2",
  "eSAC1A.rectifierCommutationVoltageDrop.division.y <= 0.0",
  "eSAC1A.rectifierCommutationVoltageDrop.division.y > 0.0",
  "eSAC1A.rectifierCommutationVoltageDrop.division.y <= 0.433",
  "eSAC1A.rectifierCommutationVoltageDrop.division.y > 0.433",
  "eSAC1A.rectifierCommutationVoltageDrop.division.y < 0.75",
  "eSAC1A.rectifierCommutationVoltageDrop.division.y >= 0.75",
  "eSAC1A.rectifierCommutationVoltageDrop.division.y <= 1.0",
  "eSAC1A.hV_GATE.n1 < minusInf.k",
  "plusInf.k > eSAC1A.hV_GATE.p",
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
  modelica_boolean tmp75;
  modelica_boolean tmp76;
  modelica_boolean tmp77;
  modelica_boolean tmp78;
  
  if(evalforZeroCross) {
    tmp46 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[303] /* pwLine.t1 PARAM */, data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp46;
    tmp47 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[304] /* pwLine.t2 PARAM */, data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[1] = tmp47;
    tmp48 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[314] /* pwLine1.t1 PARAM */, data->simulationInfo->storedRelations[2]);
    data->simulationInfo->relations[2] = tmp48;
    tmp49 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[315] /* pwLine1.t2 PARAM */, data->simulationInfo->storedRelations[3]);
    data->simulationInfo->relations[3] = tmp49;
    tmp50 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */, data->simulationInfo->storedRelations[4]);
    data->simulationInfo->relations[4] = tmp50;
    tmp51 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[67] /* constantLoad.d_t PARAM */, data->simulationInfo->storedRelations[5]);
    data->simulationInfo->relations[5] = tmp51;
    tmp52 = LessZC(data->localData[0]->realVars[65] /* constantLoad.v variable */, data->simulationInfo->realParameter[38] /* constantLoad.PQBRAK PARAM */, data->simulationInfo->storedRelations[6]);
    data->simulationInfo->relations[6] = tmp52;
    tmp53 = LessZC(data->localData[0]->realVars[65] /* constantLoad.v variable */, 0.5, data->simulationInfo->storedRelations[7]);
    data->simulationInfo->relations[7] = tmp53;
    tmp54 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[325] /* pwLine2.t1 PARAM */, data->simulationInfo->storedRelations[8]);
    data->simulationInfo->relations[8] = tmp54;
    tmp55 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[326] /* pwLine2.t2 PARAM */, data->simulationInfo->storedRelations[9]);
    data->simulationInfo->relations[9] = tmp55;
    tmp56 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[347] /* pwLine4.t1 PARAM */, data->simulationInfo->storedRelations[10]);
    data->simulationInfo->relations[10] = tmp56;
    tmp57 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[348] /* pwLine4.t2 PARAM */, data->simulationInfo->storedRelations[11]);
    data->simulationInfo->relations[11] = tmp57;
    tmp58 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[336] /* pwLine3.t1 PARAM */, data->simulationInfo->storedRelations[12]);
    data->simulationInfo->relations[12] = tmp58;
    tmp59 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[337] /* pwLine3.t2 PARAM */, data->simulationInfo->storedRelations[13]);
    data->simulationInfo->relations[13] = tmp59;
    tmp60 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[292] /* pwFault.t1 PARAM */, data->simulationInfo->storedRelations[14]);
    data->simulationInfo->relations[14] = tmp60;
    tmp61 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[293] /* pwFault.t2 PARAM */, data->simulationInfo->storedRelations[15]);
    data->simulationInfo->relations[15] = tmp61;
    tmp62 = LessEqZC(data->localData[0]->realVars[83] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */, 0.0, data->simulationInfo->storedRelations[16]);
    data->simulationInfo->relations[16] = tmp62;
    tmp63 = GreaterZC(data->localData[0]->realVars[83] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */, 0.0, data->simulationInfo->storedRelations[17]);
    data->simulationInfo->relations[17] = tmp63;
    tmp64 = LessEqZC(data->localData[0]->realVars[83] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */, 0.433, data->simulationInfo->storedRelations[18]);
    data->simulationInfo->relations[18] = tmp64;
    tmp65 = GreaterZC(data->localData[0]->realVars[83] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */, 0.433, data->simulationInfo->storedRelations[19]);
    data->simulationInfo->relations[19] = tmp65;
    tmp66 = LessZC(data->localData[0]->realVars[83] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */, 0.75, data->simulationInfo->storedRelations[20]);
    data->simulationInfo->relations[20] = tmp66;
    tmp67 = GreaterEqZC(data->localData[0]->realVars[83] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */, 0.75, data->simulationInfo->storedRelations[21]);
    data->simulationInfo->relations[21] = tmp67;
    tmp68 = LessEqZC(data->localData[0]->realVars[83] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */, 1.0, data->simulationInfo->storedRelations[22]);
    data->simulationInfo->relations[22] = tmp68;
    tmp69 = LessZC(data->localData[0]->realVars[75] /* eSAC1A.hV_GATE.n1 variable */, data->simulationInfo->realParameter[286] /* minusInf.k PARAM */, data->simulationInfo->storedRelations[23]);
    data->simulationInfo->relations[23] = tmp69;
    tmp70 = GreaterZC(data->simulationInfo->realParameter[288] /* plusInf.k PARAM */, data->localData[0]->realVars[76] /* eSAC1A.hV_GATE.p variable */, data->simulationInfo->storedRelations[24]);
    data->simulationInfo->relations[24] = tmp70;
    tmp71 = LessZC(data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */, data->simulationInfo->realParameter[163] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.outMin PARAM */, data->simulationInfo->storedRelations[25]);
    data->simulationInfo->relations[25] = tmp71;
    tmp72 = LessZC((data->simulationInfo->realParameter[161] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.k PARAM */) * (data->localData[0]->realVars[88] /* eSAC1A.rotatingExciterWithDemagnetization.feedback.y variable */), 0.0, data->simulationInfo->storedRelations[26]);
    data->simulationInfo->relations[26] = tmp72;
    tmp73 = GreaterZC(data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */, data->simulationInfo->realParameter[162] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.outMax PARAM */, data->simulationInfo->storedRelations[27]);
    data->simulationInfo->relations[27] = tmp73;
    tmp74 = GreaterZC((data->simulationInfo->realParameter[161] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.k PARAM */) * (data->localData[0]->realVars[88] /* eSAC1A.rotatingExciterWithDemagnetization.feedback.y variable */), 0.0, data->simulationInfo->storedRelations[28]);
    data->simulationInfo->relations[28] = tmp74;
    tmp75 = GreaterZC(data->localData[0]->realVars[4] /* eSAC1A.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[173] /* eSAC1A.simpleLagLim.outMax PARAM */, data->simulationInfo->storedRelations[29]);
    data->simulationInfo->relations[29] = tmp75;
    tmp76 = LessZC((data->simulationInfo->realParameter[169] /* eSAC1A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[79] /* eSAC1A.imLeadLag.y variable */) - data->localData[0]->realVars[4] /* eSAC1A.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[30]);
    data->simulationInfo->relations[30] = tmp76;
    tmp77 = LessZC(data->localData[0]->realVars[4] /* eSAC1A.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[174] /* eSAC1A.simpleLagLim.outMin PARAM */, data->simulationInfo->storedRelations[31]);
    data->simulationInfo->relations[31] = tmp77;
    tmp78 = GreaterZC((data->simulationInfo->realParameter[169] /* eSAC1A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[79] /* eSAC1A.imLeadLag.y variable */) - data->localData[0]->realVars[4] /* eSAC1A.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[32]);
    data->simulationInfo->relations[32] = tmp78;
  } else {
    data->simulationInfo->relations[0] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[303] /* pwLine.t1 PARAM */);
    data->simulationInfo->relations[1] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[304] /* pwLine.t2 PARAM */);
    data->simulationInfo->relations[2] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[314] /* pwLine1.t1 PARAM */);
    data->simulationInfo->relations[3] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[315] /* pwLine1.t2 PARAM */);
    data->simulationInfo->relations[4] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */);
    data->simulationInfo->relations[5] = (data->localData[0]->timeValue <= data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[67] /* constantLoad.d_t PARAM */);
    data->simulationInfo->relations[6] = (data->localData[0]->realVars[65] /* constantLoad.v variable */ < data->simulationInfo->realParameter[38] /* constantLoad.PQBRAK PARAM */);
    data->simulationInfo->relations[7] = (data->localData[0]->realVars[65] /* constantLoad.v variable */ < 0.5);
    data->simulationInfo->relations[8] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[325] /* pwLine2.t1 PARAM */);
    data->simulationInfo->relations[9] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[326] /* pwLine2.t2 PARAM */);
    data->simulationInfo->relations[10] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[347] /* pwLine4.t1 PARAM */);
    data->simulationInfo->relations[11] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[348] /* pwLine4.t2 PARAM */);
    data->simulationInfo->relations[12] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[336] /* pwLine3.t1 PARAM */);
    data->simulationInfo->relations[13] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[337] /* pwLine3.t2 PARAM */);
    data->simulationInfo->relations[14] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[292] /* pwFault.t1 PARAM */);
    data->simulationInfo->relations[15] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[293] /* pwFault.t2 PARAM */);
    data->simulationInfo->relations[16] = (data->localData[0]->realVars[83] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */ <= 0.0);
    data->simulationInfo->relations[17] = (data->localData[0]->realVars[83] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */ > 0.0);
    data->simulationInfo->relations[18] = (data->localData[0]->realVars[83] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */ <= 0.433);
    data->simulationInfo->relations[19] = (data->localData[0]->realVars[83] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */ > 0.433);
    data->simulationInfo->relations[20] = (data->localData[0]->realVars[83] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */ < 0.75);
    data->simulationInfo->relations[21] = (data->localData[0]->realVars[83] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */ >= 0.75);
    data->simulationInfo->relations[22] = (data->localData[0]->realVars[83] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */ <= 1.0);
    data->simulationInfo->relations[23] = (data->localData[0]->realVars[75] /* eSAC1A.hV_GATE.n1 variable */ < data->simulationInfo->realParameter[286] /* minusInf.k PARAM */);
    data->simulationInfo->relations[24] = (data->simulationInfo->realParameter[288] /* plusInf.k PARAM */ > data->localData[0]->realVars[76] /* eSAC1A.hV_GATE.p variable */);
    data->simulationInfo->relations[25] = (data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */ < data->simulationInfo->realParameter[163] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.outMin PARAM */);
    data->simulationInfo->relations[26] = ((data->simulationInfo->realParameter[161] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.k PARAM */) * (data->localData[0]->realVars[88] /* eSAC1A.rotatingExciterWithDemagnetization.feedback.y variable */) < 0.0);
    data->simulationInfo->relations[27] = (data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */ > data->simulationInfo->realParameter[162] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.outMax PARAM */);
    data->simulationInfo->relations[28] = ((data->simulationInfo->realParameter[161] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.k PARAM */) * (data->localData[0]->realVars[88] /* eSAC1A.rotatingExciterWithDemagnetization.feedback.y variable */) > 0.0);
    data->simulationInfo->relations[29] = (data->localData[0]->realVars[4] /* eSAC1A.simpleLagLim.state STATE(1) */ > data->simulationInfo->realParameter[173] /* eSAC1A.simpleLagLim.outMax PARAM */);
    data->simulationInfo->relations[30] = ((data->simulationInfo->realParameter[169] /* eSAC1A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[79] /* eSAC1A.imLeadLag.y variable */) - data->localData[0]->realVars[4] /* eSAC1A.simpleLagLim.state STATE(1) */ < 0.0);
    data->simulationInfo->relations[31] = (data->localData[0]->realVars[4] /* eSAC1A.simpleLagLim.state STATE(1) */ < data->simulationInfo->realParameter[174] /* eSAC1A.simpleLagLim.outMin PARAM */);
    data->simulationInfo->relations[32] = ((data->simulationInfo->realParameter[169] /* eSAC1A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[79] /* eSAC1A.imLeadLag.y variable */) - data->localData[0]->realVars[4] /* eSAC1A.simpleLagLim.state STATE(1) */ > 0.0);
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

