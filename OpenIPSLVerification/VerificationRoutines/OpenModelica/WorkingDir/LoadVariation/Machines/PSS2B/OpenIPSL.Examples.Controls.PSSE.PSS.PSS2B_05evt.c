/* Events: Sample, Zero Crossings, Relations, Discrete Changes */
#include "OpenIPSL.Examples.Controls.PSSE.PSS.PSS2B_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* Initializes the raw time events of the simulation using the now
   calcualted parameters. */
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_function_initSample(DATA *data, threadData_t *threadData)
{
  long i=0;
}

const char *OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_zeroCrossingDescription(int i, int **out_EquationIndexes)
{
  static const char *res[] = {"time >= pwLine.t1 and time < pwLine.t2",
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
  "constantLoad.v < 0.5",
  "time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t",
  "time >= pwLine.t1",
  "time < pwLine.t2",
  "time >= constantLoad.t1",
  "time <= constantLoad.t1 + constantLoad.d_t",
  "constantLoad.v < constantLoad.PQBRAK",
  "eSST1A.hV_GATE.n1 < const1.k",
  "eSST1A.simpleLagLim.state > eSST1A.simpleLagLim.outMax and eSST1A.simpleLagLim.K * eSST1A.imLeadLag1.y - eSST1A.simpleLagLim.state < 0.0",
  "eSST1A.simpleLagLim.state < eSST1A.simpleLagLim.outMin and eSST1A.simpleLagLim.K * eSST1A.imLeadLag1.y - eSST1A.simpleLagLim.state > 0.0",
  "eSST1A.add3_2.y < const1.k",
  "eSST1A.hV_GATE1.p > const2.k",
  "eSST1A.add3_1.y > eSST1A.imLimited.uMax",
  "eSST1A.add3_1.y < eSST1A.imLimited.uMin"};
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
  static const int occurEqs21[] = {1,1300};
  static const int occurEqs22[] = {1,1301};
  static const int occurEqs23[] = {1,1305};
  static const int occurEqs24[] = {1,1306};
  static const int occurEqs25[] = {1,1112};
  static const int occurEqs26[] = {1,1112};
  static const int *occurEqs[] = {occurEqs0,occurEqs1,occurEqs2,occurEqs3,occurEqs4,occurEqs5,occurEqs6,occurEqs7,occurEqs8,occurEqs9,occurEqs10,occurEqs11,occurEqs12,occurEqs13,occurEqs14,occurEqs15,occurEqs16,occurEqs17,occurEqs18,occurEqs19,occurEqs20,occurEqs21,occurEqs22,occurEqs23,occurEqs24,occurEqs25,occurEqs26};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
}

/* forwarded equations */
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1099(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1100(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1101(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1102(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1103(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1104(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1105(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1106(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1107(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1108(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1109(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1110(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1111(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1112(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1113(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1114(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1115(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1116(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1117(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1118(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1119(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1120(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1121(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1122(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1123(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1124(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1125(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1126(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1127(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1218(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1231(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1232(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1233(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1236(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1237(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1238(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1239(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1240(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1241(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1242(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1243(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1244(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1245(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1246(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1247(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1248(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1249(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1250(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1254(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1255(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1256(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1257(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1258(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1259(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1260(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1261(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1262(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1263(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1264(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1265(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1266(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1267(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1268(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1269(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1270(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1271(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1272(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1273(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1274(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1275(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1276(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1277(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1298(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1299(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1302(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1303(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1304(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1305(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1306(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1307(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1308(DATA* data, threadData_t *threadData);

int OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1099(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1100(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1101(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1102(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1103(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1104(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1105(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1106(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1107(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1108(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1109(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1110(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1111(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1112(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1113(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1114(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1115(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1116(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1117(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1118(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1119(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1120(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1121(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1122(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1123(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1124(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1125(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1126(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1127(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1218(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1231(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1232(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1233(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1236(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1237(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1238(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1239(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1240(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1241(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1242(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1243(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1244(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1245(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1246(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1247(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1248(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1249(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1250(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1254(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1255(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1256(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1257(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1258(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1259(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1260(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1261(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1262(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1263(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1264(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1265(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1266(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1267(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1268(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1269(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1270(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1271(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1272(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1273(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1274(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1275(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1276(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1277(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1298(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1299(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1302(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1303(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1304(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1305(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1306(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1307(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1308(data, threadData);
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
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

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_ZC);
#endif
  data->simulationInfo->callStatistics.functionZeroCrossings++;

  tmp0 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[489] /* pwLine.t1 PARAM */, data->simulationInfo->storedRelations[0]);
  tmp1 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[490] /* pwLine.t2 PARAM */, data->simulationInfo->storedRelations[1]);
  gout[0] = ((tmp0 && tmp1)) ? 1 : -1;
  tmp2 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[511] /* pwLine3.t1 PARAM */, data->simulationInfo->storedRelations[2]);
  tmp3 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[512] /* pwLine3.t2 PARAM */, data->simulationInfo->storedRelations[3]);
  gout[1] = ((tmp2 && tmp3)) ? 1 : -1;
  tmp4 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[511] /* pwLine3.t1 PARAM */, data->simulationInfo->storedRelations[2]);
  gout[2] = (tmp4) ? 1 : -1;
  tmp5 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[512] /* pwLine3.t2 PARAM */, data->simulationInfo->storedRelations[3]);
  gout[3] = (tmp5) ? 1 : -1;
  tmp6 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[478] /* pwFault.t1 PARAM */, data->simulationInfo->storedRelations[4]);
  gout[4] = (tmp6) ? 1 : -1;
  tmp7 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[479] /* pwFault.t2 PARAM */, data->simulationInfo->storedRelations[5]);
  gout[5] = ((tmp7 && data->simulationInfo->booleanParameter[76] /* pwFault.ground PARAM */)) ? 1 : -1;
  tmp8 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[479] /* pwFault.t2 PARAM */, data->simulationInfo->storedRelations[5]);
  gout[6] = (tmp8) ? 1 : -1;
  tmp9 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[522] /* pwLine4.t1 PARAM */, data->simulationInfo->storedRelations[6]);
  tmp10 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[523] /* pwLine4.t2 PARAM */, data->simulationInfo->storedRelations[7]);
  gout[7] = ((tmp9 && tmp10)) ? 1 : -1;
  tmp11 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[522] /* pwLine4.t1 PARAM */, data->simulationInfo->storedRelations[6]);
  gout[8] = (tmp11) ? 1 : -1;
  tmp12 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[523] /* pwLine4.t2 PARAM */, data->simulationInfo->storedRelations[7]);
  gout[9] = (tmp12) ? 1 : -1;
  tmp13 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[500] /* pwLine1.t1 PARAM */, data->simulationInfo->storedRelations[8]);
  tmp14 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[501] /* pwLine1.t2 PARAM */, data->simulationInfo->storedRelations[9]);
  gout[10] = ((tmp13 && tmp14)) ? 1 : -1;
  tmp15 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[500] /* pwLine1.t1 PARAM */, data->simulationInfo->storedRelations[8]);
  gout[11] = (tmp15) ? 1 : -1;
  tmp16 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[501] /* pwLine1.t2 PARAM */, data->simulationInfo->storedRelations[9]);
  gout[12] = (tmp16) ? 1 : -1;
  tmp17 = LessZC(data->localData[0]->realVars[73] /* constantLoad.v variable */, 0.5, data->simulationInfo->storedRelations[10]);
  gout[13] = (tmp17) ? 1 : -1;
  tmp18 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */, data->simulationInfo->storedRelations[11]);
  tmp19 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[71] /* constantLoad.d_t PARAM */, data->simulationInfo->storedRelations[12]);
  gout[14] = ((tmp18 && tmp19)) ? 1 : -1;
  tmp20 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[489] /* pwLine.t1 PARAM */, data->simulationInfo->storedRelations[0]);
  gout[15] = (tmp20) ? 1 : -1;
  tmp21 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[490] /* pwLine.t2 PARAM */, data->simulationInfo->storedRelations[1]);
  gout[16] = (tmp21) ? 1 : -1;
  tmp22 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */, data->simulationInfo->storedRelations[11]);
  gout[17] = (tmp22) ? 1 : -1;
  tmp23 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[71] /* constantLoad.d_t PARAM */, data->simulationInfo->storedRelations[12]);
  gout[18] = (tmp23) ? 1 : -1;
  tmp24 = LessZC(data->localData[0]->realVars[73] /* constantLoad.v variable */, data->simulationInfo->realParameter[41] /* constantLoad.PQBRAK PARAM */, data->simulationInfo->storedRelations[13]);
  gout[19] = (tmp24) ? 1 : -1;
  tmp25 = LessZC(data->localData[0]->realVars[90] /* eSST1A.hV_GATE.n1 variable */, data->simulationInfo->realParameter[36] /* const1.k PARAM */, data->simulationInfo->storedRelations[14]);
  gout[20] = (tmp25) ? 1 : -1;
  tmp26 = GreaterZC(data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[192] /* eSST1A.simpleLagLim.outMax PARAM */, data->simulationInfo->storedRelations[15]);
  tmp27 = LessZC((data->simulationInfo->realParameter[188] /* eSST1A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[101] /* eSST1A.imLeadLag1.y variable */) - data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[16]);
  gout[21] = ((tmp26 && tmp27)) ? 1 : -1;
  tmp28 = LessZC(data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[193] /* eSST1A.simpleLagLim.outMin PARAM */, data->simulationInfo->storedRelations[17]);
  tmp29 = GreaterZC((data->simulationInfo->realParameter[188] /* eSST1A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[101] /* eSST1A.imLeadLag1.y variable */) - data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[18]);
  gout[22] = ((tmp28 && tmp29)) ? 1 : -1;
  tmp30 = LessZC(data->localData[0]->realVars[89] /* eSST1A.add3_2.y variable */, data->simulationInfo->realParameter[36] /* const1.k PARAM */, data->simulationInfo->storedRelations[19]);
  gout[23] = (tmp30) ? 1 : -1;
  tmp31 = GreaterZC(data->localData[0]->realVars[92] /* eSST1A.hV_GATE1.p variable */, data->simulationInfo->realParameter[38] /* const2.k PARAM */, data->simulationInfo->storedRelations[20]);
  gout[24] = (tmp31) ? 1 : -1;
  tmp32 = GreaterZC(data->localData[0]->realVars[86] /* eSST1A.add3_1.y variable */, data->simulationInfo->realParameter[183] /* eSST1A.imLimited.uMax PARAM */, data->simulationInfo->storedRelations[21]);
  gout[25] = (tmp32) ? 1 : -1;
  tmp33 = LessZC(data->localData[0]->realVars[86] /* eSST1A.add3_1.y variable */, data->simulationInfo->realParameter[184] /* eSST1A.imLimited.uMin PARAM */, data->simulationInfo->storedRelations[22]);
  gout[26] = (tmp33) ? 1 : -1;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ZC);
#endif

  TRACE_POP
  return 0;
}

const char *OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_relationDescription(int i)
{
  const char *res[] = {"time >= pwLine.t1",
  "time < pwLine.t2",
  "time >= pwLine3.t1",
  "time < pwLine3.t2",
  "time < pwFault.t1",
  "time < pwFault.t2",
  "time >= pwLine4.t1",
  "time < pwLine4.t2",
  "time >= pwLine1.t1",
  "time < pwLine1.t2",
  "constantLoad.v < 0.5",
  "time >= constantLoad.t1",
  "time <= constantLoad.t1 + constantLoad.d_t",
  "constantLoad.v < constantLoad.PQBRAK",
  "eSST1A.hV_GATE.n1 < const1.k",
  "eSST1A.simpleLagLim.state > eSST1A.simpleLagLim.outMax",
  "eSST1A.simpleLagLim.K * eSST1A.imLeadLag1.y - eSST1A.simpleLagLim.state < 0.0",
  "eSST1A.simpleLagLim.state < eSST1A.simpleLagLim.outMin",
  "eSST1A.simpleLagLim.K * eSST1A.imLeadLag1.y - eSST1A.simpleLagLim.state > 0.0",
  "eSST1A.add3_2.y < const1.k",
  "eSST1A.hV_GATE1.p > const2.k",
  "eSST1A.add3_1.y > eSST1A.imLimited.uMax",
  "eSST1A.add3_1.y < eSST1A.imLimited.uMin"};
  return res[i];
}

int OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  TRACE_PUSH
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
  modelica_boolean tmp49;
  modelica_boolean tmp50;
  modelica_boolean tmp51;
  modelica_boolean tmp52;
  modelica_boolean tmp53;
  modelica_boolean tmp54;
  modelica_boolean tmp55;
  modelica_boolean tmp56;
  
  if(evalforZeroCross) {
    tmp34 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[489] /* pwLine.t1 PARAM */, data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp34;
    tmp35 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[490] /* pwLine.t2 PARAM */, data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[1] = tmp35;
    tmp36 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[511] /* pwLine3.t1 PARAM */, data->simulationInfo->storedRelations[2]);
    data->simulationInfo->relations[2] = tmp36;
    tmp37 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[512] /* pwLine3.t2 PARAM */, data->simulationInfo->storedRelations[3]);
    data->simulationInfo->relations[3] = tmp37;
    tmp38 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[478] /* pwFault.t1 PARAM */, data->simulationInfo->storedRelations[4]);
    data->simulationInfo->relations[4] = tmp38;
    tmp39 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[479] /* pwFault.t2 PARAM */, data->simulationInfo->storedRelations[5]);
    data->simulationInfo->relations[5] = tmp39;
    tmp40 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[522] /* pwLine4.t1 PARAM */, data->simulationInfo->storedRelations[6]);
    data->simulationInfo->relations[6] = tmp40;
    tmp41 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[523] /* pwLine4.t2 PARAM */, data->simulationInfo->storedRelations[7]);
    data->simulationInfo->relations[7] = tmp41;
    tmp42 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[500] /* pwLine1.t1 PARAM */, data->simulationInfo->storedRelations[8]);
    data->simulationInfo->relations[8] = tmp42;
    tmp43 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[501] /* pwLine1.t2 PARAM */, data->simulationInfo->storedRelations[9]);
    data->simulationInfo->relations[9] = tmp43;
    tmp44 = LessZC(data->localData[0]->realVars[73] /* constantLoad.v variable */, 0.5, data->simulationInfo->storedRelations[10]);
    data->simulationInfo->relations[10] = tmp44;
    tmp45 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */, data->simulationInfo->storedRelations[11]);
    data->simulationInfo->relations[11] = tmp45;
    tmp46 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[71] /* constantLoad.d_t PARAM */, data->simulationInfo->storedRelations[12]);
    data->simulationInfo->relations[12] = tmp46;
    tmp47 = LessZC(data->localData[0]->realVars[73] /* constantLoad.v variable */, data->simulationInfo->realParameter[41] /* constantLoad.PQBRAK PARAM */, data->simulationInfo->storedRelations[13]);
    data->simulationInfo->relations[13] = tmp47;
    tmp48 = LessZC(data->localData[0]->realVars[90] /* eSST1A.hV_GATE.n1 variable */, data->simulationInfo->realParameter[36] /* const1.k PARAM */, data->simulationInfo->storedRelations[14]);
    data->simulationInfo->relations[14] = tmp48;
    tmp49 = GreaterZC(data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[192] /* eSST1A.simpleLagLim.outMax PARAM */, data->simulationInfo->storedRelations[15]);
    data->simulationInfo->relations[15] = tmp49;
    tmp50 = LessZC((data->simulationInfo->realParameter[188] /* eSST1A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[101] /* eSST1A.imLeadLag1.y variable */) - data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[16]);
    data->simulationInfo->relations[16] = tmp50;
    tmp51 = LessZC(data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[193] /* eSST1A.simpleLagLim.outMin PARAM */, data->simulationInfo->storedRelations[17]);
    data->simulationInfo->relations[17] = tmp51;
    tmp52 = GreaterZC((data->simulationInfo->realParameter[188] /* eSST1A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[101] /* eSST1A.imLeadLag1.y variable */) - data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[18]);
    data->simulationInfo->relations[18] = tmp52;
    tmp53 = LessZC(data->localData[0]->realVars[89] /* eSST1A.add3_2.y variable */, data->simulationInfo->realParameter[36] /* const1.k PARAM */, data->simulationInfo->storedRelations[19]);
    data->simulationInfo->relations[19] = tmp53;
    tmp54 = GreaterZC(data->localData[0]->realVars[92] /* eSST1A.hV_GATE1.p variable */, data->simulationInfo->realParameter[38] /* const2.k PARAM */, data->simulationInfo->storedRelations[20]);
    data->simulationInfo->relations[20] = tmp54;
    tmp55 = GreaterZC(data->localData[0]->realVars[86] /* eSST1A.add3_1.y variable */, data->simulationInfo->realParameter[183] /* eSST1A.imLimited.uMax PARAM */, data->simulationInfo->storedRelations[21]);
    data->simulationInfo->relations[21] = tmp55;
    tmp56 = LessZC(data->localData[0]->realVars[86] /* eSST1A.add3_1.y variable */, data->simulationInfo->realParameter[184] /* eSST1A.imLimited.uMin PARAM */, data->simulationInfo->storedRelations[22]);
    data->simulationInfo->relations[22] = tmp56;
  } else {
    data->simulationInfo->relations[0] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[489] /* pwLine.t1 PARAM */);
    data->simulationInfo->relations[1] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[490] /* pwLine.t2 PARAM */);
    data->simulationInfo->relations[2] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[511] /* pwLine3.t1 PARAM */);
    data->simulationInfo->relations[3] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[512] /* pwLine3.t2 PARAM */);
    data->simulationInfo->relations[4] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[478] /* pwFault.t1 PARAM */);
    data->simulationInfo->relations[5] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[479] /* pwFault.t2 PARAM */);
    data->simulationInfo->relations[6] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[522] /* pwLine4.t1 PARAM */);
    data->simulationInfo->relations[7] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[523] /* pwLine4.t2 PARAM */);
    data->simulationInfo->relations[8] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[500] /* pwLine1.t1 PARAM */);
    data->simulationInfo->relations[9] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[501] /* pwLine1.t2 PARAM */);
    data->simulationInfo->relations[10] = (data->localData[0]->realVars[73] /* constantLoad.v variable */ < 0.5);
    data->simulationInfo->relations[11] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */);
    data->simulationInfo->relations[12] = (data->localData[0]->timeValue <= data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[71] /* constantLoad.d_t PARAM */);
    data->simulationInfo->relations[13] = (data->localData[0]->realVars[73] /* constantLoad.v variable */ < data->simulationInfo->realParameter[41] /* constantLoad.PQBRAK PARAM */);
    data->simulationInfo->relations[14] = (data->localData[0]->realVars[90] /* eSST1A.hV_GATE.n1 variable */ < data->simulationInfo->realParameter[36] /* const1.k PARAM */);
    data->simulationInfo->relations[15] = (data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */ > data->simulationInfo->realParameter[192] /* eSST1A.simpleLagLim.outMax PARAM */);
    data->simulationInfo->relations[16] = ((data->simulationInfo->realParameter[188] /* eSST1A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[101] /* eSST1A.imLeadLag1.y variable */) - data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */ < 0.0);
    data->simulationInfo->relations[17] = (data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */ < data->simulationInfo->realParameter[193] /* eSST1A.simpleLagLim.outMin PARAM */);
    data->simulationInfo->relations[18] = ((data->simulationInfo->realParameter[188] /* eSST1A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[101] /* eSST1A.imLeadLag1.y variable */) - data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */ > 0.0);
    data->simulationInfo->relations[19] = (data->localData[0]->realVars[89] /* eSST1A.add3_2.y variable */ < data->simulationInfo->realParameter[36] /* const1.k PARAM */);
    data->simulationInfo->relations[20] = (data->localData[0]->realVars[92] /* eSST1A.hV_GATE1.p variable */ > data->simulationInfo->realParameter[38] /* const2.k PARAM */);
    data->simulationInfo->relations[21] = (data->localData[0]->realVars[86] /* eSST1A.add3_1.y variable */ > data->simulationInfo->realParameter[183] /* eSST1A.imLimited.uMax PARAM */);
    data->simulationInfo->relations[22] = (data->localData[0]->realVars[86] /* eSST1A.add3_1.y variable */ < data->simulationInfo->realParameter[184] /* eSST1A.imLimited.uMin PARAM */);
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

