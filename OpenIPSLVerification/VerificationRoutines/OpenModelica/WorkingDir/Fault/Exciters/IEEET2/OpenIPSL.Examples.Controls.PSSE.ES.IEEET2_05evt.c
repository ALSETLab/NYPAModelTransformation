/* Events: Sample, Zero Crossings, Relations, Discrete Changes */
#include "OpenIPSL.Examples.Controls.PSSE.ES.IEEET2_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* Initializes the raw time events of the simulation using the now
   calcualted parameters. */
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_function_initSample(DATA *data, threadData_t *threadData)
{
  long i=0;
}

const char *OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_zeroCrossingDescription(int i, int **out_EquationIndexes)
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
  "time >= pwLine4.t1",
  "time < pwLine4.t2",
  "time < pwFault.t1",
  "time < pwFault.t2 and pwFault.ground",
  "time < pwFault.t2",
  "time >= pwLine1.t1",
  "time < pwLine1.t2",
  "time >= pwLine.t1",
  "time < pwLine.t2",
  "iEEET2_1.simpleLagLim.state > iEEET2_1.simpleLagLim.outMax and iEEET2_1.simpleLagLim.K * iEEET2_1.add.y - iEEET2_1.simpleLagLim.state < 0.0",
  "iEEET2_1.simpleLagLim.state < iEEET2_1.simpleLagLim.outMin and iEEET2_1.simpleLagLim.K * iEEET2_1.add.y - iEEET2_1.simpleLagLim.state > 0.0"};
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
  static const int occurEqs20[] = {1,299};
  static const int occurEqs21[] = {1,300};
  static const int *occurEqs[] = {occurEqs0,occurEqs1,occurEqs2,occurEqs3,occurEqs4,occurEqs5,occurEqs6,occurEqs7,occurEqs8,occurEqs9,occurEqs10,occurEqs11,occurEqs12,occurEqs13,occurEqs14,occurEqs15,occurEqs16,occurEqs17,occurEqs18,occurEqs19,occurEqs20,occurEqs21};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
}

/* forwarded equations */
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_162(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_163(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_164(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_165(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_166(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_167(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_168(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_169(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_170(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_171(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_172(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_173(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_174(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_175(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_176(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_267(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_276(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_277(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_278(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_279(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_280(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_281(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_282(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_283(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_284(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_285(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_286(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_287(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_288(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_297(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_298(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_301(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_302(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_303(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_304(DATA* data, threadData_t *threadData);

int OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_162(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_163(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_164(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_165(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_166(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_167(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_168(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_169(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_170(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_171(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_172(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_173(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_174(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_175(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_176(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_267(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_276(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_277(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_278(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_279(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_280(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_281(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_282(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_283(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_284(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_285(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_286(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_287(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_288(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_297(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_298(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_301(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_302(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_303(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_304(data, threadData);
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
{
  TRACE_PUSH
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
  
  data->simulationInfo->callStatistics.functionZeroCrossings++;
  
  tmp119 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[264], data->simulationInfo->storedRelations[0]);
  tmp120 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[265], data->simulationInfo->storedRelations[1]);
  gout[0] = ((tmp119 && tmp120)) ? 1 : -1;
  tmp121 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[275], data->simulationInfo->storedRelations[2]);
  tmp122 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[276], data->simulationInfo->storedRelations[3]);
  gout[1] = ((tmp121 && tmp122)) ? 1 : -1;
  tmp123 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[72], data->simulationInfo->storedRelations[4]);
  tmp124 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[72] + data->simulationInfo->realParameter[66], data->simulationInfo->storedRelations[5]);
  gout[2] = ((tmp123 && tmp124)) ? 1 : -1;
  tmp125 = LessZC(data->localData[0]->realVars[55] /* constantLoad.v variable */, data->simulationInfo->realParameter[36], data->simulationInfo->storedRelations[6]);
  gout[3] = (tmp125) ? 1 : -1;
  tmp126 = LessZC(data->localData[0]->realVars[55] /* constantLoad.v variable */, 0.5, data->simulationInfo->storedRelations[7]);
  gout[4] = (tmp126) ? 1 : -1;
  tmp127 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[72], data->simulationInfo->storedRelations[4]);
  gout[5] = (tmp127) ? 1 : -1;
  tmp128 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[72] + data->simulationInfo->realParameter[66], data->simulationInfo->storedRelations[5]);
  gout[6] = (tmp128) ? 1 : -1;
  tmp129 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[286], data->simulationInfo->storedRelations[8]);
  tmp130 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[287], data->simulationInfo->storedRelations[9]);
  gout[7] = ((tmp129 && tmp130)) ? 1 : -1;
  tmp131 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[286], data->simulationInfo->storedRelations[8]);
  gout[8] = (tmp131) ? 1 : -1;
  tmp132 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[287], data->simulationInfo->storedRelations[9]);
  gout[9] = (tmp132) ? 1 : -1;
  tmp133 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[297], data->simulationInfo->storedRelations[10]);
  tmp134 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[298], data->simulationInfo->storedRelations[11]);
  gout[10] = ((tmp133 && tmp134)) ? 1 : -1;
  tmp135 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[297], data->simulationInfo->storedRelations[10]);
  gout[11] = (tmp135) ? 1 : -1;
  tmp136 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[298], data->simulationInfo->storedRelations[11]);
  gout[12] = (tmp136) ? 1 : -1;
  tmp137 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[253], data->simulationInfo->storedRelations[12]);
  gout[13] = (tmp137) ? 1 : -1;
  tmp138 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[254], data->simulationInfo->storedRelations[13]);
  gout[14] = ((tmp138 && data->simulationInfo->booleanParameter[64])) ? 1 : -1;
  tmp139 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[254], data->simulationInfo->storedRelations[13]);
  gout[15] = (tmp139) ? 1 : -1;
  tmp140 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[275], data->simulationInfo->storedRelations[2]);
  gout[16] = (tmp140) ? 1 : -1;
  tmp141 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[276], data->simulationInfo->storedRelations[3]);
  gout[17] = (tmp141) ? 1 : -1;
  tmp142 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[264], data->simulationInfo->storedRelations[0]);
  gout[18] = (tmp142) ? 1 : -1;
  tmp143 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[265], data->simulationInfo->storedRelations[1]);
  gout[19] = (tmp143) ? 1 : -1;
  tmp144 = GreaterZC(data->localData[0]->realVars[12] /* iEEET2_1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[248], data->simulationInfo->storedRelations[14]);
  tmp145 = LessZC((data->simulationInfo->realParameter[245]) * (data->localData[0]->realVars[92] /* iEEET2_1.add.y variable */) - data->localData[0]->realVars[12] /* iEEET2_1.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[15]);
  gout[20] = ((tmp144 && tmp145)) ? 1 : -1;
  tmp146 = LessZC(data->localData[0]->realVars[12] /* iEEET2_1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[249], data->simulationInfo->storedRelations[16]);
  tmp147 = GreaterZC((data->simulationInfo->realParameter[245]) * (data->localData[0]->realVars[92] /* iEEET2_1.add.y variable */) - data->localData[0]->realVars[12] /* iEEET2_1.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[17]);
  gout[21] = ((tmp146 && tmp147)) ? 1 : -1;
  
  TRACE_POP
  return 0;
}

const char *OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_relationDescription(int i)
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
  "iEEET2_1.simpleLagLim.state > iEEET2_1.simpleLagLim.outMax",
  "iEEET2_1.simpleLagLim.K * iEEET2_1.add.y - iEEET2_1.simpleLagLim.state < 0.0",
  "iEEET2_1.simpleLagLim.state < iEEET2_1.simpleLagLim.outMin",
  "iEEET2_1.simpleLagLim.K * iEEET2_1.add.y - iEEET2_1.simpleLagLim.state > 0.0"};
  return res[i];
}

int OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  TRACE_PUSH
  modelica_boolean tmp148;
  modelica_boolean tmp149;
  modelica_boolean tmp150;
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
  
  if(evalforZeroCross) {
    tmp148 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[264], data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp148;
    tmp149 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[265], data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[1] = tmp149;
    tmp150 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[275], data->simulationInfo->storedRelations[2]);
    data->simulationInfo->relations[2] = tmp150;
    tmp151 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[276], data->simulationInfo->storedRelations[3]);
    data->simulationInfo->relations[3] = tmp151;
    tmp152 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[72], data->simulationInfo->storedRelations[4]);
    data->simulationInfo->relations[4] = tmp152;
    tmp153 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[72] + data->simulationInfo->realParameter[66], data->simulationInfo->storedRelations[5]);
    data->simulationInfo->relations[5] = tmp153;
    tmp154 = LessZC(data->localData[0]->realVars[55] /* constantLoad.v variable */, data->simulationInfo->realParameter[36], data->simulationInfo->storedRelations[6]);
    data->simulationInfo->relations[6] = tmp154;
    tmp155 = LessZC(data->localData[0]->realVars[55] /* constantLoad.v variable */, 0.5, data->simulationInfo->storedRelations[7]);
    data->simulationInfo->relations[7] = tmp155;
    tmp156 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[286], data->simulationInfo->storedRelations[8]);
    data->simulationInfo->relations[8] = tmp156;
    tmp157 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[287], data->simulationInfo->storedRelations[9]);
    data->simulationInfo->relations[9] = tmp157;
    tmp158 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[297], data->simulationInfo->storedRelations[10]);
    data->simulationInfo->relations[10] = tmp158;
    tmp159 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[298], data->simulationInfo->storedRelations[11]);
    data->simulationInfo->relations[11] = tmp159;
    tmp160 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[253], data->simulationInfo->storedRelations[12]);
    data->simulationInfo->relations[12] = tmp160;
    tmp161 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[254], data->simulationInfo->storedRelations[13]);
    data->simulationInfo->relations[13] = tmp161;
    tmp162 = GreaterZC(data->localData[0]->realVars[12] /* iEEET2_1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[248], data->simulationInfo->storedRelations[14]);
    data->simulationInfo->relations[14] = tmp162;
    tmp163 = LessZC((data->simulationInfo->realParameter[245]) * (data->localData[0]->realVars[92] /* iEEET2_1.add.y variable */) - data->localData[0]->realVars[12] /* iEEET2_1.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[15]);
    data->simulationInfo->relations[15] = tmp163;
    tmp164 = LessZC(data->localData[0]->realVars[12] /* iEEET2_1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[249], data->simulationInfo->storedRelations[16]);
    data->simulationInfo->relations[16] = tmp164;
    tmp165 = GreaterZC((data->simulationInfo->realParameter[245]) * (data->localData[0]->realVars[92] /* iEEET2_1.add.y variable */) - data->localData[0]->realVars[12] /* iEEET2_1.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[17]);
    data->simulationInfo->relations[17] = tmp165;
  } else {
    data->simulationInfo->relations[0] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[264]);
    data->simulationInfo->relations[1] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[265]);
    data->simulationInfo->relations[2] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[275]);
    data->simulationInfo->relations[3] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[276]);
    data->simulationInfo->relations[4] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[72]);
    data->simulationInfo->relations[5] = (data->localData[0]->timeValue <= data->simulationInfo->realParameter[72] + data->simulationInfo->realParameter[66]);
    data->simulationInfo->relations[6] = (data->localData[0]->realVars[55] /* constantLoad.v variable */ < data->simulationInfo->realParameter[36]);
    data->simulationInfo->relations[7] = (data->localData[0]->realVars[55] /* constantLoad.v variable */ < 0.5);
    data->simulationInfo->relations[8] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[286]);
    data->simulationInfo->relations[9] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[287]);
    data->simulationInfo->relations[10] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[297]);
    data->simulationInfo->relations[11] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[298]);
    data->simulationInfo->relations[12] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[253]);
    data->simulationInfo->relations[13] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[254]);
    data->simulationInfo->relations[14] = (data->localData[0]->realVars[12] /* iEEET2_1.simpleLagLim.state STATE(1) */ > data->simulationInfo->realParameter[248]);
    data->simulationInfo->relations[15] = ((data->simulationInfo->realParameter[245]) * (data->localData[0]->realVars[92] /* iEEET2_1.add.y variable */) - data->localData[0]->realVars[12] /* iEEET2_1.simpleLagLim.state STATE(1) */ < 0.0);
    data->simulationInfo->relations[16] = (data->localData[0]->realVars[12] /* iEEET2_1.simpleLagLim.state STATE(1) */ < data->simulationInfo->realParameter[249]);
    data->simulationInfo->relations[17] = ((data->simulationInfo->realParameter[245]) * (data->localData[0]->realVars[92] /* iEEET2_1.add.y variable */) - data->localData[0]->realVars[12] /* iEEET2_1.simpleLagLim.state STATE(1) */ > 0.0);
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

