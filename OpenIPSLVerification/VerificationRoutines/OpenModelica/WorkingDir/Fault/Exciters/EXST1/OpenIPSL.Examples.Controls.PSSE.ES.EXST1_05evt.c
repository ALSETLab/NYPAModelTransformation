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
  "eXST1_1.EFD > eXST1_1.ECOMP * eXST1_1.V_RMAX - eXST1_1.K_C * eXST1_1.XADIFD",
  "eXST1_1.EFD < eXST1_1.ECOMP * eXST1_1.V_RMIN - eXST1_1.K_C * eXST1_1.XADIFD",
  "eXST1_1.feedback.y > eXST1_1.limiter.uMax",
  "eXST1_1.feedback.y < eXST1_1.limiter.uMin"};
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
  static const int occurEqs20[] = {1,808};
  static const int occurEqs21[] = {1,808};
  static const int occurEqs22[] = {1,664};
  static const int occurEqs23[] = {1,664};
  static const int *occurEqs[] = {occurEqs0,occurEqs1,occurEqs2,occurEqs3,occurEqs4,occurEqs5,occurEqs6,occurEqs7,occurEqs8,occurEqs9,occurEqs10,occurEqs11,occurEqs12,occurEqs13,occurEqs14,occurEqs15,occurEqs16,occurEqs17,occurEqs18,occurEqs19,occurEqs20,occurEqs21,occurEqs22,occurEqs23};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
}

/* forwarded equations */
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_661(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_662(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_663(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_664(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_665(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_666(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_667(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_668(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_669(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_670(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_671(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_672(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_763(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_772(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_773(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_774(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_777(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_778(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_779(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_780(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_784(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_785(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_786(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_787(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_788(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_803(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_804(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_805(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_806(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_808(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_809(DATA* data, threadData_t *threadData);

int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_661(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_662(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_663(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_664(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_665(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_666(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_667(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_668(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_669(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_670(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_671(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_672(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_763(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_772(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_773(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_774(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_777(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_778(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_779(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_780(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_784(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_785(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_786(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_787(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_788(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_803(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_804(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_805(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_806(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_808(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_809(data, threadData);
  
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
  
  data->simulationInfo->callStatistics.functionZeroCrossings++;
  
  tmp0 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[252], data->simulationInfo->storedRelations[0]);
  tmp1 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[253], data->simulationInfo->storedRelations[1]);
  gout[0] = ((tmp0 && tmp1)) ? 1 : -1;
  tmp2 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[263], data->simulationInfo->storedRelations[2]);
  tmp3 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[264], data->simulationInfo->storedRelations[3]);
  gout[1] = ((tmp2 && tmp3)) ? 1 : -1;
  tmp4 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[72], data->simulationInfo->storedRelations[4]);
  tmp5 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[72] + data->simulationInfo->realParameter[66], data->simulationInfo->storedRelations[5]);
  gout[2] = ((tmp4 && tmp5)) ? 1 : -1;
  tmp6 = LessZC(data->localData[0]->realVars[53] /* constantLoad.v variable */, data->simulationInfo->realParameter[36], data->simulationInfo->storedRelations[6]);
  gout[3] = (tmp6) ? 1 : -1;
  tmp7 = LessZC(data->localData[0]->realVars[53] /* constantLoad.v variable */, 0.5, data->simulationInfo->storedRelations[7]);
  gout[4] = (tmp7) ? 1 : -1;
  tmp8 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[72], data->simulationInfo->storedRelations[4]);
  gout[5] = (tmp8) ? 1 : -1;
  tmp9 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[72] + data->simulationInfo->realParameter[66], data->simulationInfo->storedRelations[5]);
  gout[6] = (tmp9) ? 1 : -1;
  tmp10 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[274], data->simulationInfo->storedRelations[8]);
  tmp11 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[275], data->simulationInfo->storedRelations[9]);
  gout[7] = ((tmp10 && tmp11)) ? 1 : -1;
  tmp12 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[274], data->simulationInfo->storedRelations[8]);
  gout[8] = (tmp12) ? 1 : -1;
  tmp13 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[275], data->simulationInfo->storedRelations[9]);
  gout[9] = (tmp13) ? 1 : -1;
  tmp14 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[285], data->simulationInfo->storedRelations[10]);
  tmp15 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[286], data->simulationInfo->storedRelations[11]);
  gout[10] = ((tmp14 && tmp15)) ? 1 : -1;
  tmp16 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[241], data->simulationInfo->storedRelations[12]);
  gout[11] = (tmp16) ? 1 : -1;
  tmp17 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[242], data->simulationInfo->storedRelations[13]);
  gout[12] = ((tmp17 && data->simulationInfo->booleanParameter[66])) ? 1 : -1;
  tmp18 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[242], data->simulationInfo->storedRelations[13]);
  gout[13] = (tmp18) ? 1 : -1;
  tmp19 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[285], data->simulationInfo->storedRelations[10]);
  gout[14] = (tmp19) ? 1 : -1;
  tmp20 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[286], data->simulationInfo->storedRelations[11]);
  gout[15] = (tmp20) ? 1 : -1;
  tmp21 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[263], data->simulationInfo->storedRelations[2]);
  gout[16] = (tmp21) ? 1 : -1;
  tmp22 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[264], data->simulationInfo->storedRelations[3]);
  gout[17] = (tmp22) ? 1 : -1;
  tmp23 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[252], data->simulationInfo->storedRelations[0]);
  gout[18] = (tmp23) ? 1 : -1;
  tmp24 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[253], data->simulationInfo->storedRelations[1]);
  gout[19] = (tmp24) ? 1 : -1;
  tmp25 = GreaterZC(data->localData[0]->realVars[57] /* eXST1_1.EFD variable */, (data->localData[0]->realVars[56] /* eXST1_1.ECOMP variable */) * (data->simulationInfo->realParameter[99]) - ((data->simulationInfo->realParameter[82]) * (data->localData[0]->realVars[63] /* eXST1_1.XADIFD variable */)), data->simulationInfo->storedRelations[14]);
  gout[20] = (tmp25) ? 1 : -1;
  tmp26 = LessZC(data->localData[0]->realVars[57] /* eXST1_1.EFD variable */, (data->localData[0]->realVars[56] /* eXST1_1.ECOMP variable */) * (data->simulationInfo->realParameter[100]) - ((data->simulationInfo->realParameter[82]) * (data->localData[0]->realVars[63] /* eXST1_1.XADIFD variable */)), data->simulationInfo->storedRelations[15]);
  gout[21] = (tmp26) ? 1 : -1;
  tmp27 = GreaterZC(data->localData[0]->realVars[65] /* eXST1_1.feedback.y variable */, data->simulationInfo->realParameter[129], data->simulationInfo->storedRelations[16]);
  gout[22] = (tmp27) ? 1 : -1;
  tmp28 = LessZC(data->localData[0]->realVars[65] /* eXST1_1.feedback.y variable */, data->simulationInfo->realParameter[130], data->simulationInfo->storedRelations[17]);
  gout[23] = (tmp28) ? 1 : -1;
  
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
  "eXST1_1.EFD > eXST1_1.ECOMP * eXST1_1.V_RMAX - eXST1_1.K_C * eXST1_1.XADIFD",
  "eXST1_1.EFD < eXST1_1.ECOMP * eXST1_1.V_RMIN - eXST1_1.K_C * eXST1_1.XADIFD",
  "eXST1_1.feedback.y > eXST1_1.limiter.uMax",
  "eXST1_1.feedback.y < eXST1_1.limiter.uMin"};
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
    tmp29 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[252], data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp29;
    tmp30 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[253], data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[1] = tmp30;
    tmp31 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[263], data->simulationInfo->storedRelations[2]);
    data->simulationInfo->relations[2] = tmp31;
    tmp32 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[264], data->simulationInfo->storedRelations[3]);
    data->simulationInfo->relations[3] = tmp32;
    tmp33 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[72], data->simulationInfo->storedRelations[4]);
    data->simulationInfo->relations[4] = tmp33;
    tmp34 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[72] + data->simulationInfo->realParameter[66], data->simulationInfo->storedRelations[5]);
    data->simulationInfo->relations[5] = tmp34;
    tmp35 = LessZC(data->localData[0]->realVars[53] /* constantLoad.v variable */, data->simulationInfo->realParameter[36], data->simulationInfo->storedRelations[6]);
    data->simulationInfo->relations[6] = tmp35;
    tmp36 = LessZC(data->localData[0]->realVars[53] /* constantLoad.v variable */, 0.5, data->simulationInfo->storedRelations[7]);
    data->simulationInfo->relations[7] = tmp36;
    tmp37 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[274], data->simulationInfo->storedRelations[8]);
    data->simulationInfo->relations[8] = tmp37;
    tmp38 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[275], data->simulationInfo->storedRelations[9]);
    data->simulationInfo->relations[9] = tmp38;
    tmp39 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[285], data->simulationInfo->storedRelations[10]);
    data->simulationInfo->relations[10] = tmp39;
    tmp40 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[286], data->simulationInfo->storedRelations[11]);
    data->simulationInfo->relations[11] = tmp40;
    tmp41 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[241], data->simulationInfo->storedRelations[12]);
    data->simulationInfo->relations[12] = tmp41;
    tmp42 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[242], data->simulationInfo->storedRelations[13]);
    data->simulationInfo->relations[13] = tmp42;
    tmp43 = GreaterZC(data->localData[0]->realVars[57] /* eXST1_1.EFD variable */, (data->localData[0]->realVars[56] /* eXST1_1.ECOMP variable */) * (data->simulationInfo->realParameter[99]) - ((data->simulationInfo->realParameter[82]) * (data->localData[0]->realVars[63] /* eXST1_1.XADIFD variable */)), data->simulationInfo->storedRelations[14]);
    data->simulationInfo->relations[14] = tmp43;
    tmp44 = LessZC(data->localData[0]->realVars[57] /* eXST1_1.EFD variable */, (data->localData[0]->realVars[56] /* eXST1_1.ECOMP variable */) * (data->simulationInfo->realParameter[100]) - ((data->simulationInfo->realParameter[82]) * (data->localData[0]->realVars[63] /* eXST1_1.XADIFD variable */)), data->simulationInfo->storedRelations[15]);
    data->simulationInfo->relations[15] = tmp44;
    tmp45 = GreaterZC(data->localData[0]->realVars[65] /* eXST1_1.feedback.y variable */, data->simulationInfo->realParameter[129], data->simulationInfo->storedRelations[16]);
    data->simulationInfo->relations[16] = tmp45;
    tmp46 = LessZC(data->localData[0]->realVars[65] /* eXST1_1.feedback.y variable */, data->simulationInfo->realParameter[130], data->simulationInfo->storedRelations[17]);
    data->simulationInfo->relations[17] = tmp46;
  } else {
    data->simulationInfo->relations[0] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[252]);
    data->simulationInfo->relations[1] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[253]);
    data->simulationInfo->relations[2] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[263]);
    data->simulationInfo->relations[3] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[264]);
    data->simulationInfo->relations[4] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[72]);
    data->simulationInfo->relations[5] = (data->localData[0]->timeValue <= data->simulationInfo->realParameter[72] + data->simulationInfo->realParameter[66]);
    data->simulationInfo->relations[6] = (data->localData[0]->realVars[53] /* constantLoad.v variable */ < data->simulationInfo->realParameter[36]);
    data->simulationInfo->relations[7] = (data->localData[0]->realVars[53] /* constantLoad.v variable */ < 0.5);
    data->simulationInfo->relations[8] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[274]);
    data->simulationInfo->relations[9] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[275]);
    data->simulationInfo->relations[10] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[285]);
    data->simulationInfo->relations[11] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[286]);
    data->simulationInfo->relations[12] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[241]);
    data->simulationInfo->relations[13] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[242]);
    data->simulationInfo->relations[14] = (data->localData[0]->realVars[57] /* eXST1_1.EFD variable */ > (data->localData[0]->realVars[56] /* eXST1_1.ECOMP variable */) * (data->simulationInfo->realParameter[99]) - ((data->simulationInfo->realParameter[82]) * (data->localData[0]->realVars[63] /* eXST1_1.XADIFD variable */)));
    data->simulationInfo->relations[15] = (data->localData[0]->realVars[57] /* eXST1_1.EFD variable */ < (data->localData[0]->realVars[56] /* eXST1_1.ECOMP variable */) * (data->simulationInfo->realParameter[100]) - ((data->simulationInfo->realParameter[82]) * (data->localData[0]->realVars[63] /* eXST1_1.XADIFD variable */)));
    data->simulationInfo->relations[16] = (data->localData[0]->realVars[65] /* eXST1_1.feedback.y variable */ > data->simulationInfo->realParameter[129]);
    data->simulationInfo->relations[17] = (data->localData[0]->realVars[65] /* eXST1_1.feedback.y variable */ < data->simulationInfo->realParameter[130]);
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

