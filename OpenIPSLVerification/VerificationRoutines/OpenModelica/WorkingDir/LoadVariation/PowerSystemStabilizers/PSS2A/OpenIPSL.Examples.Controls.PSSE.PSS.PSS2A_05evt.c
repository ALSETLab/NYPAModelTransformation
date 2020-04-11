/* Events: Sample, Zero Crossings, Relations, Discrete Changes */
#include "OpenIPSL.Examples.Controls.PSSE.PSS.PSS2A_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* Initializes the raw time events of the simulation using the now
   calcualted parameters. */
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_function_initSample(DATA *data, threadData_t *threadData)
{
  long i=0;
}

const char *OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_zeroCrossingDescription(int i, int **out_EquationIndexes)
{
  static const char *res[] = {"time >= pwLine.t1 and time < pwLine.t2",
  "time >= pwLine3.t1 and time < pwLine3.t2",
  "time < pwFault.t1",
  "time < pwFault.t2 and pwFault.ground",
  "time < pwFault.t2",
  "time >= pwLine4.t1 and time < pwLine4.t2",
  "time >= pwLine3.t1",
  "time < pwLine3.t2",
  "constantLoad.v < 0.5",
  "time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t",
  "time >= pwLine1.t1 and time < pwLine1.t2",
  "time >= pwLine1.t1",
  "time < pwLine1.t2",
  "time >= pwLine4.t1",
  "time < pwLine4.t2",
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
  static const int occurEqs21[] = {1,1364};
  static const int occurEqs22[] = {1,1365};
  static const int occurEqs23[] = {1,1369};
  static const int occurEqs24[] = {1,1370};
  static const int occurEqs25[] = {1,1185};
  static const int occurEqs26[] = {1,1185};
  static const int *occurEqs[] = {occurEqs0,occurEqs1,occurEqs2,occurEqs3,occurEqs4,occurEqs5,occurEqs6,occurEqs7,occurEqs8,occurEqs9,occurEqs10,occurEqs11,occurEqs12,occurEqs13,occurEqs14,occurEqs15,occurEqs16,occurEqs17,occurEqs18,occurEqs19,occurEqs20,occurEqs21,occurEqs22,occurEqs23,occurEqs24,occurEqs25,occurEqs26};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
}

/* forwarded equations */
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1165(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1166(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1167(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1168(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1169(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1170(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1171(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1172(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1173(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1174(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1175(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1176(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1177(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1178(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1179(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1180(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1181(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1182(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1183(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1184(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1185(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1186(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1187(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1188(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1189(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1190(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1191(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1192(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1193(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1194(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1195(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1196(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1197(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1288(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1289(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1290(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1291(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1292(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1293(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1294(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1295(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1296(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1297(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1298(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1299(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1300(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1301(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1302(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1303(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1304(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1305(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1306(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1310(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1311(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1312(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1313(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1314(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1315(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1316(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1317(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1318(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1319(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1320(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1321(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1322(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1323(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1324(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1325(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1326(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1327(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1328(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1329(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1330(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1331(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1332(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1333(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1334(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1335(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1336(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1337(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1338(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1339(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1340(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1341(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1362(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1363(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1366(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1367(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1368(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1369(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1370(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1371(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1372(DATA* data, threadData_t *threadData);

int OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1165(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1166(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1167(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1168(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1169(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1170(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1171(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1172(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1173(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1174(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1175(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1176(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1177(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1178(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1179(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1180(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1181(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1182(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1183(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1184(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1185(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1186(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1187(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1188(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1189(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1190(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1191(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1192(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1193(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1194(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1195(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1196(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1197(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1288(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1289(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1290(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1291(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1292(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1293(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1294(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1295(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1296(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1297(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1298(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1299(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1300(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1301(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1302(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1303(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1304(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1305(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1306(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1310(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1311(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1312(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1313(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1314(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1315(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1316(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1317(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1318(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1319(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1320(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1321(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1322(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1323(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1324(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1325(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1326(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1327(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1328(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1329(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1330(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1331(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1332(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1333(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1334(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1335(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1336(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1337(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1338(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1339(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1340(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1341(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1362(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1363(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1366(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1367(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1368(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1369(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1370(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1371(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1372(data, threadData);
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
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

  tmp0 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[514] /* pwLine.t1 PARAM */, data->simulationInfo->storedRelations[0]);
  tmp1 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[515] /* pwLine.t2 PARAM */, data->simulationInfo->storedRelations[1]);
  gout[0] = ((tmp0 && tmp1)) ? 1 : -1;
  tmp2 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[536] /* pwLine3.t1 PARAM */, data->simulationInfo->storedRelations[2]);
  tmp3 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[537] /* pwLine3.t2 PARAM */, data->simulationInfo->storedRelations[3]);
  gout[1] = ((tmp2 && tmp3)) ? 1 : -1;
  tmp4 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[503] /* pwFault.t1 PARAM */, data->simulationInfo->storedRelations[4]);
  gout[2] = (tmp4) ? 1 : -1;
  tmp5 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[504] /* pwFault.t2 PARAM */, data->simulationInfo->storedRelations[5]);
  gout[3] = ((tmp5 && data->simulationInfo->booleanParameter[72] /* pwFault.ground PARAM */)) ? 1 : -1;
  tmp6 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[504] /* pwFault.t2 PARAM */, data->simulationInfo->storedRelations[5]);
  gout[4] = (tmp6) ? 1 : -1;
  tmp7 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[547] /* pwLine4.t1 PARAM */, data->simulationInfo->storedRelations[6]);
  tmp8 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[548] /* pwLine4.t2 PARAM */, data->simulationInfo->storedRelations[7]);
  gout[5] = ((tmp7 && tmp8)) ? 1 : -1;
  tmp9 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[536] /* pwLine3.t1 PARAM */, data->simulationInfo->storedRelations[2]);
  gout[6] = (tmp9) ? 1 : -1;
  tmp10 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[537] /* pwLine3.t2 PARAM */, data->simulationInfo->storedRelations[3]);
  gout[7] = (tmp10) ? 1 : -1;
  tmp11 = LessZC(data->localData[0]->realVars[83] /* constantLoad.v variable */, 0.5, data->simulationInfo->storedRelations[8]);
  gout[8] = (tmp11) ? 1 : -1;
  tmp12 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */, data->simulationInfo->storedRelations[9]);
  tmp13 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[71] /* constantLoad.d_t PARAM */, data->simulationInfo->storedRelations[10]);
  gout[9] = ((tmp12 && tmp13)) ? 1 : -1;
  tmp14 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[525] /* pwLine1.t1 PARAM */, data->simulationInfo->storedRelations[11]);
  tmp15 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[526] /* pwLine1.t2 PARAM */, data->simulationInfo->storedRelations[12]);
  gout[10] = ((tmp14 && tmp15)) ? 1 : -1;
  tmp16 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[525] /* pwLine1.t1 PARAM */, data->simulationInfo->storedRelations[11]);
  gout[11] = (tmp16) ? 1 : -1;
  tmp17 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[526] /* pwLine1.t2 PARAM */, data->simulationInfo->storedRelations[12]);
  gout[12] = (tmp17) ? 1 : -1;
  tmp18 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[547] /* pwLine4.t1 PARAM */, data->simulationInfo->storedRelations[6]);
  gout[13] = (tmp18) ? 1 : -1;
  tmp19 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[548] /* pwLine4.t2 PARAM */, data->simulationInfo->storedRelations[7]);
  gout[14] = (tmp19) ? 1 : -1;
  tmp20 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[514] /* pwLine.t1 PARAM */, data->simulationInfo->storedRelations[0]);
  gout[15] = (tmp20) ? 1 : -1;
  tmp21 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[515] /* pwLine.t2 PARAM */, data->simulationInfo->storedRelations[1]);
  gout[16] = (tmp21) ? 1 : -1;
  tmp22 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */, data->simulationInfo->storedRelations[9]);
  gout[17] = (tmp22) ? 1 : -1;
  tmp23 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[71] /* constantLoad.d_t PARAM */, data->simulationInfo->storedRelations[10]);
  gout[18] = (tmp23) ? 1 : -1;
  tmp24 = LessZC(data->localData[0]->realVars[83] /* constantLoad.v variable */, data->simulationInfo->realParameter[41] /* constantLoad.PQBRAK PARAM */, data->simulationInfo->storedRelations[13]);
  gout[19] = (tmp24) ? 1 : -1;
  tmp25 = LessZC(data->localData[0]->realVars[100] /* eSST1A.hV_GATE.n1 variable */, data->simulationInfo->realParameter[36] /* const1.k PARAM */, data->simulationInfo->storedRelations[14]);
  gout[20] = (tmp25) ? 1 : -1;
  tmp26 = GreaterZC(data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[192] /* eSST1A.simpleLagLim.outMax PARAM */, data->simulationInfo->storedRelations[15]);
  tmp27 = LessZC((data->simulationInfo->realParameter[188] /* eSST1A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[111] /* eSST1A.imLeadLag1.y variable */) - data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[16]);
  gout[21] = ((tmp26 && tmp27)) ? 1 : -1;
  tmp28 = LessZC(data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[193] /* eSST1A.simpleLagLim.outMin PARAM */, data->simulationInfo->storedRelations[17]);
  tmp29 = GreaterZC((data->simulationInfo->realParameter[188] /* eSST1A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[111] /* eSST1A.imLeadLag1.y variable */) - data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[18]);
  gout[22] = ((tmp28 && tmp29)) ? 1 : -1;
  tmp30 = LessZC(data->localData[0]->realVars[99] /* eSST1A.add3_2.y variable */, data->simulationInfo->realParameter[36] /* const1.k PARAM */, data->simulationInfo->storedRelations[19]);
  gout[23] = (tmp30) ? 1 : -1;
  tmp31 = GreaterZC(data->localData[0]->realVars[102] /* eSST1A.hV_GATE1.p variable */, data->simulationInfo->realParameter[38] /* const2.k PARAM */, data->simulationInfo->storedRelations[20]);
  gout[24] = (tmp31) ? 1 : -1;
  tmp32 = GreaterZC(data->localData[0]->realVars[96] /* eSST1A.add3_1.y variable */, data->simulationInfo->realParameter[183] /* eSST1A.imLimited.uMax PARAM */, data->simulationInfo->storedRelations[21]);
  gout[25] = (tmp32) ? 1 : -1;
  tmp33 = LessZC(data->localData[0]->realVars[96] /* eSST1A.add3_1.y variable */, data->simulationInfo->realParameter[184] /* eSST1A.imLimited.uMin PARAM */, data->simulationInfo->storedRelations[22]);
  gout[26] = (tmp33) ? 1 : -1;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ZC);
#endif

  TRACE_POP
  return 0;
}

const char *OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_relationDescription(int i)
{
  const char *res[] = {"time >= pwLine.t1",
  "time < pwLine.t2",
  "time >= pwLine3.t1",
  "time < pwLine3.t2",
  "time < pwFault.t1",
  "time < pwFault.t2",
  "time >= pwLine4.t1",
  "time < pwLine4.t2",
  "constantLoad.v < 0.5",
  "time >= constantLoad.t1",
  "time <= constantLoad.t1 + constantLoad.d_t",
  "time >= pwLine1.t1",
  "time < pwLine1.t2",
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

int OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
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
    tmp34 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[514] /* pwLine.t1 PARAM */, data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp34;
    tmp35 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[515] /* pwLine.t2 PARAM */, data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[1] = tmp35;
    tmp36 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[536] /* pwLine3.t1 PARAM */, data->simulationInfo->storedRelations[2]);
    data->simulationInfo->relations[2] = tmp36;
    tmp37 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[537] /* pwLine3.t2 PARAM */, data->simulationInfo->storedRelations[3]);
    data->simulationInfo->relations[3] = tmp37;
    tmp38 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[503] /* pwFault.t1 PARAM */, data->simulationInfo->storedRelations[4]);
    data->simulationInfo->relations[4] = tmp38;
    tmp39 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[504] /* pwFault.t2 PARAM */, data->simulationInfo->storedRelations[5]);
    data->simulationInfo->relations[5] = tmp39;
    tmp40 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[547] /* pwLine4.t1 PARAM */, data->simulationInfo->storedRelations[6]);
    data->simulationInfo->relations[6] = tmp40;
    tmp41 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[548] /* pwLine4.t2 PARAM */, data->simulationInfo->storedRelations[7]);
    data->simulationInfo->relations[7] = tmp41;
    tmp42 = LessZC(data->localData[0]->realVars[83] /* constantLoad.v variable */, 0.5, data->simulationInfo->storedRelations[8]);
    data->simulationInfo->relations[8] = tmp42;
    tmp43 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */, data->simulationInfo->storedRelations[9]);
    data->simulationInfo->relations[9] = tmp43;
    tmp44 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[71] /* constantLoad.d_t PARAM */, data->simulationInfo->storedRelations[10]);
    data->simulationInfo->relations[10] = tmp44;
    tmp45 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[525] /* pwLine1.t1 PARAM */, data->simulationInfo->storedRelations[11]);
    data->simulationInfo->relations[11] = tmp45;
    tmp46 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[526] /* pwLine1.t2 PARAM */, data->simulationInfo->storedRelations[12]);
    data->simulationInfo->relations[12] = tmp46;
    tmp47 = LessZC(data->localData[0]->realVars[83] /* constantLoad.v variable */, data->simulationInfo->realParameter[41] /* constantLoad.PQBRAK PARAM */, data->simulationInfo->storedRelations[13]);
    data->simulationInfo->relations[13] = tmp47;
    tmp48 = LessZC(data->localData[0]->realVars[100] /* eSST1A.hV_GATE.n1 variable */, data->simulationInfo->realParameter[36] /* const1.k PARAM */, data->simulationInfo->storedRelations[14]);
    data->simulationInfo->relations[14] = tmp48;
    tmp49 = GreaterZC(data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[192] /* eSST1A.simpleLagLim.outMax PARAM */, data->simulationInfo->storedRelations[15]);
    data->simulationInfo->relations[15] = tmp49;
    tmp50 = LessZC((data->simulationInfo->realParameter[188] /* eSST1A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[111] /* eSST1A.imLeadLag1.y variable */) - data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[16]);
    data->simulationInfo->relations[16] = tmp50;
    tmp51 = LessZC(data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[193] /* eSST1A.simpleLagLim.outMin PARAM */, data->simulationInfo->storedRelations[17]);
    data->simulationInfo->relations[17] = tmp51;
    tmp52 = GreaterZC((data->simulationInfo->realParameter[188] /* eSST1A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[111] /* eSST1A.imLeadLag1.y variable */) - data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[18]);
    data->simulationInfo->relations[18] = tmp52;
    tmp53 = LessZC(data->localData[0]->realVars[99] /* eSST1A.add3_2.y variable */, data->simulationInfo->realParameter[36] /* const1.k PARAM */, data->simulationInfo->storedRelations[19]);
    data->simulationInfo->relations[19] = tmp53;
    tmp54 = GreaterZC(data->localData[0]->realVars[102] /* eSST1A.hV_GATE1.p variable */, data->simulationInfo->realParameter[38] /* const2.k PARAM */, data->simulationInfo->storedRelations[20]);
    data->simulationInfo->relations[20] = tmp54;
    tmp55 = GreaterZC(data->localData[0]->realVars[96] /* eSST1A.add3_1.y variable */, data->simulationInfo->realParameter[183] /* eSST1A.imLimited.uMax PARAM */, data->simulationInfo->storedRelations[21]);
    data->simulationInfo->relations[21] = tmp55;
    tmp56 = LessZC(data->localData[0]->realVars[96] /* eSST1A.add3_1.y variable */, data->simulationInfo->realParameter[184] /* eSST1A.imLimited.uMin PARAM */, data->simulationInfo->storedRelations[22]);
    data->simulationInfo->relations[22] = tmp56;
  } else {
    data->simulationInfo->relations[0] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[514] /* pwLine.t1 PARAM */);
    data->simulationInfo->relations[1] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[515] /* pwLine.t2 PARAM */);
    data->simulationInfo->relations[2] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[536] /* pwLine3.t1 PARAM */);
    data->simulationInfo->relations[3] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[537] /* pwLine3.t2 PARAM */);
    data->simulationInfo->relations[4] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[503] /* pwFault.t1 PARAM */);
    data->simulationInfo->relations[5] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[504] /* pwFault.t2 PARAM */);
    data->simulationInfo->relations[6] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[547] /* pwLine4.t1 PARAM */);
    data->simulationInfo->relations[7] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[548] /* pwLine4.t2 PARAM */);
    data->simulationInfo->relations[8] = (data->localData[0]->realVars[83] /* constantLoad.v variable */ < 0.5);
    data->simulationInfo->relations[9] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */);
    data->simulationInfo->relations[10] = (data->localData[0]->timeValue <= data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[71] /* constantLoad.d_t PARAM */);
    data->simulationInfo->relations[11] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[525] /* pwLine1.t1 PARAM */);
    data->simulationInfo->relations[12] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[526] /* pwLine1.t2 PARAM */);
    data->simulationInfo->relations[13] = (data->localData[0]->realVars[83] /* constantLoad.v variable */ < data->simulationInfo->realParameter[41] /* constantLoad.PQBRAK PARAM */);
    data->simulationInfo->relations[14] = (data->localData[0]->realVars[100] /* eSST1A.hV_GATE.n1 variable */ < data->simulationInfo->realParameter[36] /* const1.k PARAM */);
    data->simulationInfo->relations[15] = (data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */ > data->simulationInfo->realParameter[192] /* eSST1A.simpleLagLim.outMax PARAM */);
    data->simulationInfo->relations[16] = ((data->simulationInfo->realParameter[188] /* eSST1A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[111] /* eSST1A.imLeadLag1.y variable */) - data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */ < 0.0);
    data->simulationInfo->relations[17] = (data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */ < data->simulationInfo->realParameter[193] /* eSST1A.simpleLagLim.outMin PARAM */);
    data->simulationInfo->relations[18] = ((data->simulationInfo->realParameter[188] /* eSST1A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[111] /* eSST1A.imLeadLag1.y variable */) - data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */ > 0.0);
    data->simulationInfo->relations[19] = (data->localData[0]->realVars[99] /* eSST1A.add3_2.y variable */ < data->simulationInfo->realParameter[36] /* const1.k PARAM */);
    data->simulationInfo->relations[20] = (data->localData[0]->realVars[102] /* eSST1A.hV_GATE1.p variable */ > data->simulationInfo->realParameter[38] /* const2.k PARAM */);
    data->simulationInfo->relations[21] = (data->localData[0]->realVars[96] /* eSST1A.add3_1.y variable */ > data->simulationInfo->realParameter[183] /* eSST1A.imLimited.uMax PARAM */);
    data->simulationInfo->relations[22] = (data->localData[0]->realVars[96] /* eSST1A.add3_1.y variable */ < data->simulationInfo->realParameter[184] /* eSST1A.imLimited.uMin PARAM */);
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

