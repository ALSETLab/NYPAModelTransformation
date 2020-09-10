/* Events: Sample, Zero Crossings, Relations, Discrete Changes */
#include "OpenIPSL.Examples.Controls.PSSE.ES.EXST1_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* Initializes the raw time events of the simulation using the now
   calcualted parameters. */
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_function_initSample(DATA *data, threadData_t *threadData)
{
  long i=0;
}

const char *OpenIPSL_Examples_Controls_PSSE_ES_EXST1_zeroCrossingDescription(int i, int **out_EquationIndexes)
{
  static const char *res[] = {"time >= pwLine.t1 and time < pwLine.t2",
  "time >= pwLine1.t1 and time < pwLine1.t2",
  "time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t",
  "constantLoad.v < constantLoad.PQBRAK",
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
  "time >= pwLine1.t1",
  "time < pwLine1.t2",
  "time >= pwLine.t1",
  "time < pwLine.t2",
  "eXST1.EFD > eXST1.ECOMP * eXST1.V_RMAX - eXST1.K_C * eXST1.XADIFD",
  "eXST1.EFD < eXST1.ECOMP * eXST1.V_RMIN - eXST1.K_C * eXST1.XADIFD",
  "eXST1.feedback.y > eXST1.limiter.uMax",
  "eXST1.feedback.y < eXST1.limiter.uMin"};
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
  static const int occurEqs20[] = {1,828};
  static const int occurEqs21[] = {1,828};
  static const int occurEqs22[] = {1,684};
  static const int occurEqs23[] = {1,684};
  static const int *occurEqs[] = {occurEqs0,occurEqs1,occurEqs2,occurEqs3,occurEqs4,occurEqs5,occurEqs6,occurEqs7,occurEqs8,occurEqs9,occurEqs10,occurEqs11,occurEqs12,occurEqs13,occurEqs14,occurEqs15,occurEqs16,occurEqs17,occurEqs18,occurEqs19,occurEqs20,occurEqs21,occurEqs22,occurEqs23};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
}

/* forwarded equations */
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_681(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_682(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_683(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_684(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_685(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_686(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_687(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_688(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_689(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_690(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_691(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_692(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_783(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_792(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_793(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_794(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_797(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_798(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_799(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_800(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_804(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_805(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_806(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_807(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_808(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_823(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_824(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_825(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_826(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_828(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_829(DATA* data, threadData_t *threadData);

int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_681(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_682(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_683(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_684(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_685(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_686(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_687(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_688(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_689(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_690(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_691(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_692(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_783(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_792(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_793(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_794(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_797(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_798(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_799(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_800(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_804(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_805(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_806(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_807(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_808(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_823(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_824(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_825(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_826(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_828(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_829(data, threadData);
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
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

  tmp0 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[268] /* pwLine.t1 PARAM */, data->simulationInfo->storedRelations[0]);
  tmp1 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[269] /* pwLine.t2 PARAM */, data->simulationInfo->storedRelations[1]);
  gout[0] = ((tmp0 && tmp1)) ? 1 : -1;
  tmp2 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[279] /* pwLine1.t1 PARAM */, data->simulationInfo->storedRelations[2]);
  tmp3 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[280] /* pwLine1.t2 PARAM */, data->simulationInfo->storedRelations[3]);
  gout[1] = ((tmp2 && tmp3)) ? 1 : -1;
  tmp4 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */, data->simulationInfo->storedRelations[4]);
  tmp5 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[67] /* constantLoad.d_t PARAM */, data->simulationInfo->storedRelations[5]);
  gout[2] = ((tmp4 && tmp5)) ? 1 : -1;
  tmp6 = LessZC(data->localData[0]->realVars[53] /* constantLoad.v variable */, data->simulationInfo->realParameter[37] /* constantLoad.PQBRAK PARAM */, data->simulationInfo->storedRelations[6]);
  gout[3] = (tmp6) ? 1 : -1;
  tmp7 = LessZC(data->localData[0]->realVars[53] /* constantLoad.v variable */, 0.5, data->simulationInfo->storedRelations[7]);
  gout[4] = (tmp7) ? 1 : -1;
  tmp8 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */, data->simulationInfo->storedRelations[4]);
  gout[5] = (tmp8) ? 1 : -1;
  tmp9 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[67] /* constantLoad.d_t PARAM */, data->simulationInfo->storedRelations[5]);
  gout[6] = (tmp9) ? 1 : -1;
  tmp10 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[290] /* pwLine3.t1 PARAM */, data->simulationInfo->storedRelations[8]);
  tmp11 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[291] /* pwLine3.t2 PARAM */, data->simulationInfo->storedRelations[9]);
  gout[7] = ((tmp10 && tmp11)) ? 1 : -1;
  tmp12 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[290] /* pwLine3.t1 PARAM */, data->simulationInfo->storedRelations[8]);
  gout[8] = (tmp12) ? 1 : -1;
  tmp13 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[291] /* pwLine3.t2 PARAM */, data->simulationInfo->storedRelations[9]);
  gout[9] = (tmp13) ? 1 : -1;
  tmp14 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[301] /* pwLine4.t1 PARAM */, data->simulationInfo->storedRelations[10]);
  tmp15 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[302] /* pwLine4.t2 PARAM */, data->simulationInfo->storedRelations[11]);
  gout[10] = ((tmp14 && tmp15)) ? 1 : -1;
  tmp16 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[257] /* pwFault.t1 PARAM */, data->simulationInfo->storedRelations[12]);
  gout[11] = (tmp16) ? 1 : -1;
  tmp17 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[258] /* pwFault.t2 PARAM */, data->simulationInfo->storedRelations[13]);
  gout[12] = ((tmp17 && data->simulationInfo->booleanParameter[66] /* pwFault.ground PARAM */)) ? 1 : -1;
  tmp18 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[258] /* pwFault.t2 PARAM */, data->simulationInfo->storedRelations[13]);
  gout[13] = (tmp18) ? 1 : -1;
  tmp19 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[301] /* pwLine4.t1 PARAM */, data->simulationInfo->storedRelations[10]);
  gout[14] = (tmp19) ? 1 : -1;
  tmp20 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[302] /* pwLine4.t2 PARAM */, data->simulationInfo->storedRelations[11]);
  gout[15] = (tmp20) ? 1 : -1;
  tmp21 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[279] /* pwLine1.t1 PARAM */, data->simulationInfo->storedRelations[2]);
  gout[16] = (tmp21) ? 1 : -1;
  tmp22 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[280] /* pwLine1.t2 PARAM */, data->simulationInfo->storedRelations[3]);
  gout[17] = (tmp22) ? 1 : -1;
  tmp23 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[268] /* pwLine.t1 PARAM */, data->simulationInfo->storedRelations[0]);
  gout[18] = (tmp23) ? 1 : -1;
  tmp24 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[269] /* pwLine.t2 PARAM */, data->simulationInfo->storedRelations[1]);
  gout[19] = (tmp24) ? 1 : -1;
  tmp25 = GreaterZC(data->localData[0]->realVars[57] /* eXST1.EFD variable */, (data->localData[0]->realVars[56] /* eXST1.ECOMP variable */) * (data->simulationInfo->realParameter[107] /* eXST1.V_RMAX PARAM */) - ((data->simulationInfo->realParameter[84] /* eXST1.K_C PARAM */) * (data->localData[0]->realVars[63] /* eXST1.XADIFD variable */)), data->simulationInfo->storedRelations[14]);
  gout[20] = (tmp25) ? 1 : -1;
  tmp26 = LessZC(data->localData[0]->realVars[57] /* eXST1.EFD variable */, (data->localData[0]->realVars[56] /* eXST1.ECOMP variable */) * (data->simulationInfo->realParameter[108] /* eXST1.V_RMIN PARAM */) - ((data->simulationInfo->realParameter[84] /* eXST1.K_C PARAM */) * (data->localData[0]->realVars[63] /* eXST1.XADIFD variable */)), data->simulationInfo->storedRelations[15]);
  gout[21] = (tmp26) ? 1 : -1;
  tmp27 = GreaterZC(data->localData[0]->realVars[65] /* eXST1.feedback.y variable */, data->simulationInfo->realParameter[142] /* eXST1.limiter.uMax PARAM */, data->simulationInfo->storedRelations[16]);
  gout[22] = (tmp27) ? 1 : -1;
  tmp28 = LessZC(data->localData[0]->realVars[65] /* eXST1.feedback.y variable */, data->simulationInfo->realParameter[143] /* eXST1.limiter.uMin PARAM */, data->simulationInfo->storedRelations[17]);
  gout[23] = (tmp28) ? 1 : -1;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ZC);
#endif

  TRACE_POP
  return 0;
}

const char *OpenIPSL_Examples_Controls_PSSE_ES_EXST1_relationDescription(int i)
{
  const char *res[] = {"time >= pwLine.t1",
  "time < pwLine.t2",
  "time >= pwLine1.t1",
  "time < pwLine1.t2",
  "time >= constantLoad.t1",
  "time <= constantLoad.t1 + constantLoad.d_t",
  "constantLoad.v < constantLoad.PQBRAK",
  "constantLoad.v < 0.5",
  "time >= pwLine3.t1",
  "time < pwLine3.t2",
  "time >= pwLine4.t1",
  "time < pwLine4.t2",
  "time < pwFault.t1",
  "time < pwFault.t2",
  "eXST1.EFD > eXST1.ECOMP * eXST1.V_RMAX - eXST1.K_C * eXST1.XADIFD",
  "eXST1.EFD < eXST1.ECOMP * eXST1.V_RMIN - eXST1.K_C * eXST1.XADIFD",
  "eXST1.feedback.y > eXST1.limiter.uMax",
  "eXST1.feedback.y < eXST1.limiter.uMin"};
  return res[i];
}

int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
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
    tmp29 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[268] /* pwLine.t1 PARAM */, data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp29;
    tmp30 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[269] /* pwLine.t2 PARAM */, data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[1] = tmp30;
    tmp31 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[279] /* pwLine1.t1 PARAM */, data->simulationInfo->storedRelations[2]);
    data->simulationInfo->relations[2] = tmp31;
    tmp32 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[280] /* pwLine1.t2 PARAM */, data->simulationInfo->storedRelations[3]);
    data->simulationInfo->relations[3] = tmp32;
    tmp33 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */, data->simulationInfo->storedRelations[4]);
    data->simulationInfo->relations[4] = tmp33;
    tmp34 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[67] /* constantLoad.d_t PARAM */, data->simulationInfo->storedRelations[5]);
    data->simulationInfo->relations[5] = tmp34;
    tmp35 = LessZC(data->localData[0]->realVars[53] /* constantLoad.v variable */, data->simulationInfo->realParameter[37] /* constantLoad.PQBRAK PARAM */, data->simulationInfo->storedRelations[6]);
    data->simulationInfo->relations[6] = tmp35;
    tmp36 = LessZC(data->localData[0]->realVars[53] /* constantLoad.v variable */, 0.5, data->simulationInfo->storedRelations[7]);
    data->simulationInfo->relations[7] = tmp36;
    tmp37 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[290] /* pwLine3.t1 PARAM */, data->simulationInfo->storedRelations[8]);
    data->simulationInfo->relations[8] = tmp37;
    tmp38 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[291] /* pwLine3.t2 PARAM */, data->simulationInfo->storedRelations[9]);
    data->simulationInfo->relations[9] = tmp38;
    tmp39 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[301] /* pwLine4.t1 PARAM */, data->simulationInfo->storedRelations[10]);
    data->simulationInfo->relations[10] = tmp39;
    tmp40 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[302] /* pwLine4.t2 PARAM */, data->simulationInfo->storedRelations[11]);
    data->simulationInfo->relations[11] = tmp40;
    tmp41 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[257] /* pwFault.t1 PARAM */, data->simulationInfo->storedRelations[12]);
    data->simulationInfo->relations[12] = tmp41;
    tmp42 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[258] /* pwFault.t2 PARAM */, data->simulationInfo->storedRelations[13]);
    data->simulationInfo->relations[13] = tmp42;
    tmp43 = GreaterZC(data->localData[0]->realVars[57] /* eXST1.EFD variable */, (data->localData[0]->realVars[56] /* eXST1.ECOMP variable */) * (data->simulationInfo->realParameter[107] /* eXST1.V_RMAX PARAM */) - ((data->simulationInfo->realParameter[84] /* eXST1.K_C PARAM */) * (data->localData[0]->realVars[63] /* eXST1.XADIFD variable */)), data->simulationInfo->storedRelations[14]);
    data->simulationInfo->relations[14] = tmp43;
    tmp44 = LessZC(data->localData[0]->realVars[57] /* eXST1.EFD variable */, (data->localData[0]->realVars[56] /* eXST1.ECOMP variable */) * (data->simulationInfo->realParameter[108] /* eXST1.V_RMIN PARAM */) - ((data->simulationInfo->realParameter[84] /* eXST1.K_C PARAM */) * (data->localData[0]->realVars[63] /* eXST1.XADIFD variable */)), data->simulationInfo->storedRelations[15]);
    data->simulationInfo->relations[15] = tmp44;
    tmp45 = GreaterZC(data->localData[0]->realVars[65] /* eXST1.feedback.y variable */, data->simulationInfo->realParameter[142] /* eXST1.limiter.uMax PARAM */, data->simulationInfo->storedRelations[16]);
    data->simulationInfo->relations[16] = tmp45;
    tmp46 = LessZC(data->localData[0]->realVars[65] /* eXST1.feedback.y variable */, data->simulationInfo->realParameter[143] /* eXST1.limiter.uMin PARAM */, data->simulationInfo->storedRelations[17]);
    data->simulationInfo->relations[17] = tmp46;
  } else {
    data->simulationInfo->relations[0] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[268] /* pwLine.t1 PARAM */);
    data->simulationInfo->relations[1] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[269] /* pwLine.t2 PARAM */);
    data->simulationInfo->relations[2] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[279] /* pwLine1.t1 PARAM */);
    data->simulationInfo->relations[3] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[280] /* pwLine1.t2 PARAM */);
    data->simulationInfo->relations[4] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */);
    data->simulationInfo->relations[5] = (data->localData[0]->timeValue <= data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[67] /* constantLoad.d_t PARAM */);
    data->simulationInfo->relations[6] = (data->localData[0]->realVars[53] /* constantLoad.v variable */ < data->simulationInfo->realParameter[37] /* constantLoad.PQBRAK PARAM */);
    data->simulationInfo->relations[7] = (data->localData[0]->realVars[53] /* constantLoad.v variable */ < 0.5);
    data->simulationInfo->relations[8] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[290] /* pwLine3.t1 PARAM */);
    data->simulationInfo->relations[9] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[291] /* pwLine3.t2 PARAM */);
    data->simulationInfo->relations[10] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[301] /* pwLine4.t1 PARAM */);
    data->simulationInfo->relations[11] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[302] /* pwLine4.t2 PARAM */);
    data->simulationInfo->relations[12] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[257] /* pwFault.t1 PARAM */);
    data->simulationInfo->relations[13] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[258] /* pwFault.t2 PARAM */);
    data->simulationInfo->relations[14] = (data->localData[0]->realVars[57] /* eXST1.EFD variable */ > (data->localData[0]->realVars[56] /* eXST1.ECOMP variable */) * (data->simulationInfo->realParameter[107] /* eXST1.V_RMAX PARAM */) - ((data->simulationInfo->realParameter[84] /* eXST1.K_C PARAM */) * (data->localData[0]->realVars[63] /* eXST1.XADIFD variable */)));
    data->simulationInfo->relations[15] = (data->localData[0]->realVars[57] /* eXST1.EFD variable */ < (data->localData[0]->realVars[56] /* eXST1.ECOMP variable */) * (data->simulationInfo->realParameter[108] /* eXST1.V_RMIN PARAM */) - ((data->simulationInfo->realParameter[84] /* eXST1.K_C PARAM */) * (data->localData[0]->realVars[63] /* eXST1.XADIFD variable */)));
    data->simulationInfo->relations[16] = (data->localData[0]->realVars[65] /* eXST1.feedback.y variable */ > data->simulationInfo->realParameter[142] /* eXST1.limiter.uMax PARAM */);
    data->simulationInfo->relations[17] = (data->localData[0]->realVars[65] /* eXST1.feedback.y variable */ < data->simulationInfo->realParameter[143] /* eXST1.limiter.uMin PARAM */);
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

