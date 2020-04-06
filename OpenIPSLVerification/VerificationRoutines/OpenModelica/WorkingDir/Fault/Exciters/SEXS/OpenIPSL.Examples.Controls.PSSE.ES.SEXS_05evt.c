/* Events: Sample, Zero Crossings, Relations, Discrete Changes */
#include "OpenIPSL.Examples.Controls.PSSE.ES.SEXS_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* Initializes the raw time events of the simulation using the now
   calcualted parameters. */
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_function_initSample(DATA *data, threadData_t *threadData)
{
  long i=0;
}

const char *OpenIPSL_Examples_Controls_PSSE_ES_SEXS_zeroCrossingDescription(int i, int **out_EquationIndexes)
{
  static const char *res[] = {"time >= pwLine.t1 and time < pwLine.t2",
  "time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t",
  "constantLoad.v < constantLoad.PQBRAK",
  "constantLoad.v < 0.5",
  "time >= constantLoad.t1",
  "time <= constantLoad.t1 + constantLoad.d_t",
  "time >= pwLine1.t1 and time < pwLine1.t2",
  "time >= pwLine3.t1 and time < pwLine3.t2",
  "time >= pwLine3.t1",
  "time < pwLine3.t2",
  "time < pwFault.t1",
  "time < pwFault.t2 and pwFault.ground",
  "time < pwFault.t2",
  "time >= pwLine4.t1 and time < pwLine4.t2",
  "time >= pwLine4.t1",
  "time < pwLine4.t2",
  "time >= pwLine1.t1",
  "time < pwLine1.t2",
  "time >= pwLine.t1",
  "time < pwLine.t2",
  "sEXS.simpleLagLim.state > sEXS.simpleLagLim.outMax and sEXS.simpleLagLim.K * sEXS.leadLag.y - sEXS.simpleLagLim.state < 0.0",
  "sEXS.simpleLagLim.state < sEXS.simpleLagLim.outMin and sEXS.simpleLagLim.K * sEXS.leadLag.y - sEXS.simpleLagLim.state > 0.0"};
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
  static const int occurEqs20[] = {1,270};
  static const int occurEqs21[] = {1,271};
  static const int *occurEqs[] = {occurEqs0,occurEqs1,occurEqs2,occurEqs3,occurEqs4,occurEqs5,occurEqs6,occurEqs7,occurEqs8,occurEqs9,occurEqs10,occurEqs11,occurEqs12,occurEqs13,occurEqs14,occurEqs15,occurEqs16,occurEqs17,occurEqs18,occurEqs19,occurEqs20,occurEqs21};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
}

/* forwarded equations */
extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_141(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_142(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_143(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_144(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_145(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_146(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_147(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_148(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_149(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_150(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_151(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_152(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_243(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_254(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_255(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_256(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_257(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_258(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_259(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_260(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_261(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_262(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_263(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_264(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_265(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_266(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_267(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_268(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_269(DATA* data, threadData_t *threadData);

int OpenIPSL_Examples_Controls_PSSE_ES_SEXS_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_141(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_142(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_143(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_144(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_145(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_146(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_147(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_148(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_149(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_150(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_151(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_152(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_243(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_254(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_255(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_256(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_257(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_258(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_259(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_260(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_261(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_262(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_263(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_264(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_265(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_266(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_267(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_268(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_269(data, threadData);
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_SEXS_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
{
  TRACE_PUSH
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
  
  data->simulationInfo->callStatistics.functionZeroCrossings++;
  
  tmp37 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[199], data->simulationInfo->storedRelations[0]);
  tmp38 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[200], data->simulationInfo->storedRelations[1]);
  gout[0] = ((tmp37 && tmp38)) ? 1 : -1;
  tmp39 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[73], data->simulationInfo->storedRelations[2]);
  tmp40 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[73] + data->simulationInfo->realParameter[67], data->simulationInfo->storedRelations[3]);
  gout[1] = ((tmp39 && tmp40)) ? 1 : -1;
  tmp41 = LessZC(data->localData[0]->realVars[49] /* constantLoad.v variable */, data->simulationInfo->realParameter[37], data->simulationInfo->storedRelations[4]);
  gout[2] = (tmp41) ? 1 : -1;
  tmp42 = LessZC(data->localData[0]->realVars[49] /* constantLoad.v variable */, 0.5, data->simulationInfo->storedRelations[5]);
  gout[3] = (tmp42) ? 1 : -1;
  tmp43 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[73], data->simulationInfo->storedRelations[2]);
  gout[4] = (tmp43) ? 1 : -1;
  tmp44 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[73] + data->simulationInfo->realParameter[67], data->simulationInfo->storedRelations[3]);
  gout[5] = (tmp44) ? 1 : -1;
  tmp45 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[210], data->simulationInfo->storedRelations[6]);
  tmp46 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[211], data->simulationInfo->storedRelations[7]);
  gout[6] = ((tmp45 && tmp46)) ? 1 : -1;
  tmp47 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[221], data->simulationInfo->storedRelations[8]);
  tmp48 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[222], data->simulationInfo->storedRelations[9]);
  gout[7] = ((tmp47 && tmp48)) ? 1 : -1;
  tmp49 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[221], data->simulationInfo->storedRelations[8]);
  gout[8] = (tmp49) ? 1 : -1;
  tmp50 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[222], data->simulationInfo->storedRelations[9]);
  gout[9] = (tmp50) ? 1 : -1;
  tmp51 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[188], data->simulationInfo->storedRelations[10]);
  gout[10] = (tmp51) ? 1 : -1;
  tmp52 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[189], data->simulationInfo->storedRelations[11]);
  gout[11] = ((tmp52 && data->simulationInfo->booleanParameter[63])) ? 1 : -1;
  tmp53 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[189], data->simulationInfo->storedRelations[11]);
  gout[12] = (tmp53) ? 1 : -1;
  tmp54 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[232], data->simulationInfo->storedRelations[12]);
  tmp55 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[233], data->simulationInfo->storedRelations[13]);
  gout[13] = ((tmp54 && tmp55)) ? 1 : -1;
  tmp56 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[232], data->simulationInfo->storedRelations[12]);
  gout[14] = (tmp56) ? 1 : -1;
  tmp57 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[233], data->simulationInfo->storedRelations[13]);
  gout[15] = (tmp57) ? 1 : -1;
  tmp58 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[210], data->simulationInfo->storedRelations[6]);
  gout[16] = (tmp58) ? 1 : -1;
  tmp59 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[211], data->simulationInfo->storedRelations[7]);
  gout[17] = (tmp59) ? 1 : -1;
  tmp60 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[199], data->simulationInfo->storedRelations[0]);
  gout[18] = (tmp60) ? 1 : -1;
  tmp61 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[200], data->simulationInfo->storedRelations[1]);
  gout[19] = (tmp61) ? 1 : -1;
  tmp62 = GreaterZC(data->localData[0]->realVars[9] /* sEXS.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[270], data->simulationInfo->storedRelations[14]);
  tmp63 = LessZC((data->simulationInfo->realParameter[267]) * (data->localData[0]->realVars[129] /* sEXS.leadLag.y variable */) - data->localData[0]->realVars[9] /* sEXS.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[15]);
  gout[20] = ((tmp62 && tmp63)) ? 1 : -1;
  tmp64 = LessZC(data->localData[0]->realVars[9] /* sEXS.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[271], data->simulationInfo->storedRelations[16]);
  tmp65 = GreaterZC((data->simulationInfo->realParameter[267]) * (data->localData[0]->realVars[129] /* sEXS.leadLag.y variable */) - data->localData[0]->realVars[9] /* sEXS.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[17]);
  gout[21] = ((tmp64 && tmp65)) ? 1 : -1;
  
  TRACE_POP
  return 0;
}

const char *OpenIPSL_Examples_Controls_PSSE_ES_SEXS_relationDescription(int i)
{
  const char *res[] = {"time >= pwLine.t1",
  "time < pwLine.t2",
  "time >= constantLoad.t1",
  "time <= constantLoad.t1 + constantLoad.d_t",
  "constantLoad.v < constantLoad.PQBRAK",
  "constantLoad.v < 0.5",
  "time >= pwLine1.t1",
  "time < pwLine1.t2",
  "time >= pwLine3.t1",
  "time < pwLine3.t2",
  "time < pwFault.t1",
  "time < pwFault.t2",
  "time >= pwLine4.t1",
  "time < pwLine4.t2",
  "sEXS.simpleLagLim.state > sEXS.simpleLagLim.outMax",
  "sEXS.simpleLagLim.K * sEXS.leadLag.y - sEXS.simpleLagLim.state < 0.0",
  "sEXS.simpleLagLim.state < sEXS.simpleLagLim.outMin",
  "sEXS.simpleLagLim.K * sEXS.leadLag.y - sEXS.simpleLagLim.state > 0.0"};
  return res[i];
}

int OpenIPSL_Examples_Controls_PSSE_ES_SEXS_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  TRACE_PUSH
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
  modelica_boolean tmp79;
  modelica_boolean tmp80;
  modelica_boolean tmp81;
  modelica_boolean tmp82;
  modelica_boolean tmp83;
  
  if(evalforZeroCross) {
    tmp66 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[199], data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp66;
    tmp67 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[200], data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[1] = tmp67;
    tmp68 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[73], data->simulationInfo->storedRelations[2]);
    data->simulationInfo->relations[2] = tmp68;
    tmp69 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[73] + data->simulationInfo->realParameter[67], data->simulationInfo->storedRelations[3]);
    data->simulationInfo->relations[3] = tmp69;
    tmp70 = LessZC(data->localData[0]->realVars[49] /* constantLoad.v variable */, data->simulationInfo->realParameter[37], data->simulationInfo->storedRelations[4]);
    data->simulationInfo->relations[4] = tmp70;
    tmp71 = LessZC(data->localData[0]->realVars[49] /* constantLoad.v variable */, 0.5, data->simulationInfo->storedRelations[5]);
    data->simulationInfo->relations[5] = tmp71;
    tmp72 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[210], data->simulationInfo->storedRelations[6]);
    data->simulationInfo->relations[6] = tmp72;
    tmp73 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[211], data->simulationInfo->storedRelations[7]);
    data->simulationInfo->relations[7] = tmp73;
    tmp74 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[221], data->simulationInfo->storedRelations[8]);
    data->simulationInfo->relations[8] = tmp74;
    tmp75 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[222], data->simulationInfo->storedRelations[9]);
    data->simulationInfo->relations[9] = tmp75;
    tmp76 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[188], data->simulationInfo->storedRelations[10]);
    data->simulationInfo->relations[10] = tmp76;
    tmp77 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[189], data->simulationInfo->storedRelations[11]);
    data->simulationInfo->relations[11] = tmp77;
    tmp78 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[232], data->simulationInfo->storedRelations[12]);
    data->simulationInfo->relations[12] = tmp78;
    tmp79 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[233], data->simulationInfo->storedRelations[13]);
    data->simulationInfo->relations[13] = tmp79;
    tmp80 = GreaterZC(data->localData[0]->realVars[9] /* sEXS.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[270], data->simulationInfo->storedRelations[14]);
    data->simulationInfo->relations[14] = tmp80;
    tmp81 = LessZC((data->simulationInfo->realParameter[267]) * (data->localData[0]->realVars[129] /* sEXS.leadLag.y variable */) - data->localData[0]->realVars[9] /* sEXS.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[15]);
    data->simulationInfo->relations[15] = tmp81;
    tmp82 = LessZC(data->localData[0]->realVars[9] /* sEXS.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[271], data->simulationInfo->storedRelations[16]);
    data->simulationInfo->relations[16] = tmp82;
    tmp83 = GreaterZC((data->simulationInfo->realParameter[267]) * (data->localData[0]->realVars[129] /* sEXS.leadLag.y variable */) - data->localData[0]->realVars[9] /* sEXS.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[17]);
    data->simulationInfo->relations[17] = tmp83;
  } else {
    data->simulationInfo->relations[0] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[199]);
    data->simulationInfo->relations[1] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[200]);
    data->simulationInfo->relations[2] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[73]);
    data->simulationInfo->relations[3] = (data->localData[0]->timeValue <= data->simulationInfo->realParameter[73] + data->simulationInfo->realParameter[67]);
    data->simulationInfo->relations[4] = (data->localData[0]->realVars[49] /* constantLoad.v variable */ < data->simulationInfo->realParameter[37]);
    data->simulationInfo->relations[5] = (data->localData[0]->realVars[49] /* constantLoad.v variable */ < 0.5);
    data->simulationInfo->relations[6] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[210]);
    data->simulationInfo->relations[7] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[211]);
    data->simulationInfo->relations[8] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[221]);
    data->simulationInfo->relations[9] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[222]);
    data->simulationInfo->relations[10] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[188]);
    data->simulationInfo->relations[11] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[189]);
    data->simulationInfo->relations[12] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[232]);
    data->simulationInfo->relations[13] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[233]);
    data->simulationInfo->relations[14] = (data->localData[0]->realVars[9] /* sEXS.simpleLagLim.state STATE(1) */ > data->simulationInfo->realParameter[270]);
    data->simulationInfo->relations[15] = ((data->simulationInfo->realParameter[267]) * (data->localData[0]->realVars[129] /* sEXS.leadLag.y variable */) - data->localData[0]->realVars[9] /* sEXS.simpleLagLim.state STATE(1) */ < 0.0);
    data->simulationInfo->relations[16] = (data->localData[0]->realVars[9] /* sEXS.simpleLagLim.state STATE(1) */ < data->simulationInfo->realParameter[271]);
    data->simulationInfo->relations[17] = ((data->simulationInfo->realParameter[267]) * (data->localData[0]->realVars[129] /* sEXS.leadLag.y variable */) - data->localData[0]->realVars[9] /* sEXS.simpleLagLim.state STATE(1) */ > 0.0);
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

