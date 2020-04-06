/* Events: Sample, Zero Crossings, Relations, Discrete Changes */
#include "OpenIPSL.Examples.Controls.PSSE.ES.SCRX_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* Initializes the raw time events of the simulation using the now
   calcualted parameters. */
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_function_initSample(DATA *data, threadData_t *threadData)
{
  long i=0;
}

const char *OpenIPSL_Examples_Controls_PSSE_ES_SCRX_zeroCrossingDescription(int i, int **out_EquationIndexes)
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
  "sCRX.simpleLagLim.state > sCRX.simpleLagLim.outMax and sCRX.simpleLagLim.K * sCRX.imLeadLag.y - sCRX.simpleLagLim.state < 0.0",
  "sCRX.simpleLagLim.state < sCRX.simpleLagLim.outMin and sCRX.simpleLagLim.K * sCRX.imLeadLag.y - sCRX.simpleLagLim.state > 0.0",
  "gENROE.XADIFD < 0.0"};
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
  static const int occurEqs20[] = {1,277};
  static const int occurEqs21[] = {1,278};
  static const int occurEqs22[] = {1,280};
  static const int *occurEqs[] = {occurEqs0,occurEqs1,occurEqs2,occurEqs3,occurEqs4,occurEqs5,occurEqs6,occurEqs7,occurEqs8,occurEqs9,occurEqs10,occurEqs11,occurEqs12,occurEqs13,occurEqs14,occurEqs15,occurEqs16,occurEqs17,occurEqs18,occurEqs19,occurEqs20,occurEqs21,occurEqs22};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
}

/* forwarded equations */
extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_146(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_147(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_148(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_149(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_150(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_151(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_152(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_153(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_154(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_155(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_156(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_157(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_248(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_258(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_259(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_260(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_261(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_262(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_263(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_264(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_265(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_269(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_270(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_271(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_272(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_273(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_274(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_275(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_276(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_279(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_280(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_281(DATA* data, threadData_t *threadData);

int OpenIPSL_Examples_Controls_PSSE_ES_SCRX_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_146(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_147(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_148(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_149(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_150(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_151(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_152(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_153(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_154(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_155(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_156(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_157(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_248(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_258(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_259(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_260(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_261(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_262(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_263(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_264(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_265(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_269(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_270(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_271(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_272(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_273(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_274(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_275(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_276(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_279(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_280(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_281(data, threadData);
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_SCRX_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
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
  
  data->simulationInfo->callStatistics.functionZeroCrossings++;
  
  tmp0 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[199], data->simulationInfo->storedRelations[0]);
  tmp1 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[200], data->simulationInfo->storedRelations[1]);
  gout[0] = ((tmp0 && tmp1)) ? 1 : -1;
  tmp2 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[210], data->simulationInfo->storedRelations[2]);
  tmp3 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[211], data->simulationInfo->storedRelations[3]);
  gout[1] = ((tmp2 && tmp3)) ? 1 : -1;
  tmp4 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[73], data->simulationInfo->storedRelations[4]);
  tmp5 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[73] + data->simulationInfo->realParameter[67], data->simulationInfo->storedRelations[5]);
  gout[2] = ((tmp4 && tmp5)) ? 1 : -1;
  tmp6 = LessZC(data->localData[0]->realVars[49] /* constantLoad.v variable */, data->simulationInfo->realParameter[37], data->simulationInfo->storedRelations[6]);
  gout[3] = (tmp6) ? 1 : -1;
  tmp7 = LessZC(data->localData[0]->realVars[49] /* constantLoad.v variable */, 0.5, data->simulationInfo->storedRelations[7]);
  gout[4] = (tmp7) ? 1 : -1;
  tmp8 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[73], data->simulationInfo->storedRelations[4]);
  gout[5] = (tmp8) ? 1 : -1;
  tmp9 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[73] + data->simulationInfo->realParameter[67], data->simulationInfo->storedRelations[5]);
  gout[6] = (tmp9) ? 1 : -1;
  tmp10 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[221], data->simulationInfo->storedRelations[8]);
  tmp11 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[222], data->simulationInfo->storedRelations[9]);
  gout[7] = ((tmp10 && tmp11)) ? 1 : -1;
  tmp12 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[221], data->simulationInfo->storedRelations[8]);
  gout[8] = (tmp12) ? 1 : -1;
  tmp13 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[222], data->simulationInfo->storedRelations[9]);
  gout[9] = (tmp13) ? 1 : -1;
  tmp14 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[232], data->simulationInfo->storedRelations[10]);
  tmp15 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[233], data->simulationInfo->storedRelations[11]);
  gout[10] = ((tmp14 && tmp15)) ? 1 : -1;
  tmp16 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[188], data->simulationInfo->storedRelations[12]);
  gout[11] = (tmp16) ? 1 : -1;
  tmp17 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[189], data->simulationInfo->storedRelations[13]);
  gout[12] = ((tmp17 && data->simulationInfo->booleanParameter[63])) ? 1 : -1;
  tmp18 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[189], data->simulationInfo->storedRelations[13]);
  gout[13] = (tmp18) ? 1 : -1;
  tmp19 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[232], data->simulationInfo->storedRelations[10]);
  gout[14] = (tmp19) ? 1 : -1;
  tmp20 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[233], data->simulationInfo->storedRelations[11]);
  gout[15] = (tmp20) ? 1 : -1;
  tmp21 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[210], data->simulationInfo->storedRelations[2]);
  gout[16] = (tmp21) ? 1 : -1;
  tmp22 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[211], data->simulationInfo->storedRelations[3]);
  gout[17] = (tmp22) ? 1 : -1;
  tmp23 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[199], data->simulationInfo->storedRelations[0]);
  gout[18] = (tmp23) ? 1 : -1;
  tmp24 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[200], data->simulationInfo->storedRelations[1]);
  gout[19] = (tmp24) ? 1 : -1;
  tmp25 = GreaterZC(data->localData[0]->realVars[9] /* sCRX.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[274], data->simulationInfo->storedRelations[14]);
  tmp26 = LessZC((data->simulationInfo->realParameter[271]) * (data->localData[0]->realVars[129] /* sCRX.imLeadLag.y variable */) - data->localData[0]->realVars[9] /* sCRX.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[15]);
  gout[20] = ((tmp25 && tmp26)) ? 1 : -1;
  tmp27 = LessZC(data->localData[0]->realVars[9] /* sCRX.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[275], data->simulationInfo->storedRelations[16]);
  tmp28 = GreaterZC((data->simulationInfo->realParameter[271]) * (data->localData[0]->realVars[129] /* sCRX.imLeadLag.y variable */) - data->localData[0]->realVars[9] /* sCRX.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[17]);
  gout[21] = ((tmp27 && tmp28)) ? 1 : -1;
  tmp29 = LessZC(data->localData[0]->realVars[72] /* gENROE.XADIFD variable */, 0.0, data->simulationInfo->storedRelations[18]);
  gout[22] = (tmp29) ? 1 : -1;
  
  TRACE_POP
  return 0;
}

const char *OpenIPSL_Examples_Controls_PSSE_ES_SCRX_relationDescription(int i)
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
  "sCRX.simpleLagLim.state > sCRX.simpleLagLim.outMax",
  "sCRX.simpleLagLim.K * sCRX.imLeadLag.y - sCRX.simpleLagLim.state < 0.0",
  "sCRX.simpleLagLim.state < sCRX.simpleLagLim.outMin",
  "sCRX.simpleLagLim.K * sCRX.imLeadLag.y - sCRX.simpleLagLim.state > 0.0",
  "gENROE.XADIFD < 0.0"};
  return res[i];
}

int OpenIPSL_Examples_Controls_PSSE_ES_SCRX_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  TRACE_PUSH
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
  modelica_boolean tmp48;
  
  if(evalforZeroCross) {
    tmp30 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[199], data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp30;
    tmp31 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[200], data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[1] = tmp31;
    tmp32 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[210], data->simulationInfo->storedRelations[2]);
    data->simulationInfo->relations[2] = tmp32;
    tmp33 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[211], data->simulationInfo->storedRelations[3]);
    data->simulationInfo->relations[3] = tmp33;
    tmp34 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[73], data->simulationInfo->storedRelations[4]);
    data->simulationInfo->relations[4] = tmp34;
    tmp35 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[73] + data->simulationInfo->realParameter[67], data->simulationInfo->storedRelations[5]);
    data->simulationInfo->relations[5] = tmp35;
    tmp36 = LessZC(data->localData[0]->realVars[49] /* constantLoad.v variable */, data->simulationInfo->realParameter[37], data->simulationInfo->storedRelations[6]);
    data->simulationInfo->relations[6] = tmp36;
    tmp37 = LessZC(data->localData[0]->realVars[49] /* constantLoad.v variable */, 0.5, data->simulationInfo->storedRelations[7]);
    data->simulationInfo->relations[7] = tmp37;
    tmp38 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[221], data->simulationInfo->storedRelations[8]);
    data->simulationInfo->relations[8] = tmp38;
    tmp39 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[222], data->simulationInfo->storedRelations[9]);
    data->simulationInfo->relations[9] = tmp39;
    tmp40 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[232], data->simulationInfo->storedRelations[10]);
    data->simulationInfo->relations[10] = tmp40;
    tmp41 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[233], data->simulationInfo->storedRelations[11]);
    data->simulationInfo->relations[11] = tmp41;
    tmp42 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[188], data->simulationInfo->storedRelations[12]);
    data->simulationInfo->relations[12] = tmp42;
    tmp43 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[189], data->simulationInfo->storedRelations[13]);
    data->simulationInfo->relations[13] = tmp43;
    tmp44 = GreaterZC(data->localData[0]->realVars[9] /* sCRX.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[274], data->simulationInfo->storedRelations[14]);
    data->simulationInfo->relations[14] = tmp44;
    tmp45 = LessZC((data->simulationInfo->realParameter[271]) * (data->localData[0]->realVars[129] /* sCRX.imLeadLag.y variable */) - data->localData[0]->realVars[9] /* sCRX.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[15]);
    data->simulationInfo->relations[15] = tmp45;
    tmp46 = LessZC(data->localData[0]->realVars[9] /* sCRX.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[275], data->simulationInfo->storedRelations[16]);
    data->simulationInfo->relations[16] = tmp46;
    tmp47 = GreaterZC((data->simulationInfo->realParameter[271]) * (data->localData[0]->realVars[129] /* sCRX.imLeadLag.y variable */) - data->localData[0]->realVars[9] /* sCRX.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[17]);
    data->simulationInfo->relations[17] = tmp47;
    tmp48 = LessZC(data->localData[0]->realVars[72] /* gENROE.XADIFD variable */, 0.0, data->simulationInfo->storedRelations[18]);
    data->simulationInfo->relations[18] = tmp48;
  } else {
    data->simulationInfo->relations[0] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[199]);
    data->simulationInfo->relations[1] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[200]);
    data->simulationInfo->relations[2] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[210]);
    data->simulationInfo->relations[3] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[211]);
    data->simulationInfo->relations[4] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[73]);
    data->simulationInfo->relations[5] = (data->localData[0]->timeValue <= data->simulationInfo->realParameter[73] + data->simulationInfo->realParameter[67]);
    data->simulationInfo->relations[6] = (data->localData[0]->realVars[49] /* constantLoad.v variable */ < data->simulationInfo->realParameter[37]);
    data->simulationInfo->relations[7] = (data->localData[0]->realVars[49] /* constantLoad.v variable */ < 0.5);
    data->simulationInfo->relations[8] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[221]);
    data->simulationInfo->relations[9] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[222]);
    data->simulationInfo->relations[10] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[232]);
    data->simulationInfo->relations[11] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[233]);
    data->simulationInfo->relations[12] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[188]);
    data->simulationInfo->relations[13] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[189]);
    data->simulationInfo->relations[14] = (data->localData[0]->realVars[9] /* sCRX.simpleLagLim.state STATE(1) */ > data->simulationInfo->realParameter[274]);
    data->simulationInfo->relations[15] = ((data->simulationInfo->realParameter[271]) * (data->localData[0]->realVars[129] /* sCRX.imLeadLag.y variable */) - data->localData[0]->realVars[9] /* sCRX.simpleLagLim.state STATE(1) */ < 0.0);
    data->simulationInfo->relations[16] = (data->localData[0]->realVars[9] /* sCRX.simpleLagLim.state STATE(1) */ < data->simulationInfo->realParameter[275]);
    data->simulationInfo->relations[17] = ((data->simulationInfo->realParameter[271]) * (data->localData[0]->realVars[129] /* sCRX.imLeadLag.y variable */) - data->localData[0]->realVars[9] /* sCRX.simpleLagLim.state STATE(1) */ > 0.0);
    data->simulationInfo->relations[18] = (data->localData[0]->realVars[72] /* gENROE.XADIFD variable */ < 0.0);
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

