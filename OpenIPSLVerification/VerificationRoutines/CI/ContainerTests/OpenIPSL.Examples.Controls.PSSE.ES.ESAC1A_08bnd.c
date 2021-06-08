/* update bound parameters and variable attributes (start, nominal, min, max) */
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC1A_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 583
type: SIMPLE_ASSIGN
$START.eSAC1A.XADIFD = gENROE.efd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_583(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,583};
  data->modelData->realVarsData[71].attribute /* eSAC1A.XADIFD variable */.start = data->simulationInfo->realParameter[270] /* gENROE.efd0 PARAM */;
    data->localData[0]->realVars[71] /* eSAC1A.XADIFD variable */ = data->modelData->realVarsData[71].attribute /* eSAC1A.XADIFD variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[71].info /* eSAC1A.XADIFD */.name, (modelica_real) data->localData[0]->realVars[71] /* eSAC1A.XADIFD variable */);
  TRACE_POP
}

/*
equation index: 584
type: SIMPLE_ASSIGN
$START.eSAC1A.ECOMP = GEN1.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_584(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,584};
  data->modelData->realVarsData[68].attribute /* eSAC1A.ECOMP variable */.start = data->simulationInfo->realParameter[13] /* GEN1.v_0 PARAM */;
    data->localData[0]->realVars[68] /* eSAC1A.ECOMP variable */ = data->modelData->realVarsData[68].attribute /* eSAC1A.ECOMP variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[68].info /* eSAC1A.ECOMP */.name, (modelica_real) data->localData[0]->realVars[68] /* eSAC1A.ECOMP variable */);
  TRACE_POP
}

/*
equation index: 585
type: SIMPLE_ASSIGN
$START.eSAC1A.EFD = gENROE.efd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_585(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,585};
  data->modelData->realVarsData[69].attribute /* eSAC1A.EFD variable */.start = data->simulationInfo->realParameter[270] /* gENROE.efd0 PARAM */;
    data->localData[0]->realVars[69] /* eSAC1A.EFD variable */ = data->modelData->realVarsData[69].attribute /* eSAC1A.EFD variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[69].info /* eSAC1A.EFD */.name, (modelica_real) data->localData[0]->realVars[69] /* eSAC1A.EFD variable */);
  TRACE_POP
}

/*
equation index: 586
type: SIMPLE_ASSIGN
$START.gENROE.PSIppq = gENROE.PSIppq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_586(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,586};
  data->modelData->realVarsData[106].attribute /* gENROE.PSIppq variable */.start = data->simulationInfo->realParameter[234] /* gENROE.PSIppq0 PARAM */;
    data->localData[0]->realVars[106] /* gENROE.PSIppq variable */ = data->modelData->realVarsData[106].attribute /* gENROE.PSIppq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[106].info /* gENROE.PSIppq */.name, (modelica_real) data->localData[0]->realVars[106] /* gENROE.PSIppq variable */);
  TRACE_POP
}

/*
equation index: 587
type: SIMPLE_ASSIGN
$START.gENROE.PSIppd = gENROE.PSIppd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_587(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,587};
  data->modelData->realVarsData[105].attribute /* gENROE.PSIppd variable */.start = data->simulationInfo->realParameter[233] /* gENROE.PSIppd0 PARAM */;
    data->localData[0]->realVars[105] /* gENROE.PSIppd variable */ = data->modelData->realVarsData[105].attribute /* gENROE.PSIppd variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[105].info /* gENROE.PSIppd */.name, (modelica_real) data->localData[0]->realVars[105] /* gENROE.PSIppd variable */);
  TRACE_POP
}

/*
equation index: 588
type: SIMPLE_ASSIGN
$START.gENROE.PSIq = gENROE.PSIq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_588(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,588};
  data->modelData->realVarsData[107].attribute /* gENROE.PSIq variable */.start = data->simulationInfo->realParameter[235] /* gENROE.PSIq0 PARAM */;
    data->localData[0]->realVars[107] /* gENROE.PSIq variable */ = data->modelData->realVarsData[107].attribute /* gENROE.PSIq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[107].info /* gENROE.PSIq */.name, (modelica_real) data->localData[0]->realVars[107] /* gENROE.PSIq variable */);
  TRACE_POP
}

/*
equation index: 589
type: SIMPLE_ASSIGN
$START.gENROE.PSId = gENROE.PSId0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_589(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,589};
  data->modelData->realVarsData[103].attribute /* gENROE.PSId variable */.start = data->simulationInfo->realParameter[226] /* gENROE.PSId0 PARAM */;
    data->localData[0]->realVars[103] /* gENROE.PSId variable */ = data->modelData->realVarsData[103].attribute /* gENROE.PSId variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[103].info /* gENROE.PSId */.name, (modelica_real) data->localData[0]->realVars[103] /* gENROE.PSId variable */);
  TRACE_POP
}

/*
equation index: 590
type: SIMPLE_ASSIGN
$START.gENROE.PSIkq = gENROE.PSIkq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_590(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,590};
  data->modelData->realVarsData[11].attribute /* gENROE.PSIkq STATE(1) */.start = data->simulationInfo->realParameter[228] /* gENROE.PSIkq0 PARAM */;
    data->localData[0]->realVars[11] /* gENROE.PSIkq STATE(1) */ = data->modelData->realVarsData[11].attribute /* gENROE.PSIkq STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[11].info /* gENROE.PSIkq */.name, (modelica_real) data->localData[0]->realVars[11] /* gENROE.PSIkq STATE(1) */);
  TRACE_POP
}

/*
equation index: 591
type: SIMPLE_ASSIGN
$START.gENROE.PSIkd = gENROE.PSIkd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_591(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,591};
  data->modelData->realVarsData[10].attribute /* gENROE.PSIkd STATE(1) */.start = data->simulationInfo->realParameter[227] /* gENROE.PSIkd0 PARAM */;
    data->localData[0]->realVars[10] /* gENROE.PSIkd STATE(1) */ = data->modelData->realVarsData[10].attribute /* gENROE.PSIkd STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[10].info /* gENROE.PSIkd */.name, (modelica_real) data->localData[0]->realVars[10] /* gENROE.PSIkd STATE(1) */);
  TRACE_POP
}

/*
equation index: 592
type: SIMPLE_ASSIGN
$START.gENROE.Epq = gENROE.Epq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_592(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,592};
  data->modelData->realVarsData[9].attribute /* gENROE.Epq STATE(1) */.start = data->simulationInfo->realParameter[207] /* gENROE.Epq0 PARAM */;
    data->localData[0]->realVars[9] /* gENROE.Epq STATE(1) */ = data->modelData->realVarsData[9].attribute /* gENROE.Epq STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[9].info /* gENROE.Epq */.name, (modelica_real) data->localData[0]->realVars[9] /* gENROE.Epq STATE(1) */);
  TRACE_POP
}

/*
equation index: 593
type: SIMPLE_ASSIGN
$START.gENROE.Epd = gENROE.Epd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_593(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,593};
  data->modelData->realVarsData[8].attribute /* gENROE.Epd STATE(1) */.start = data->simulationInfo->realParameter[206] /* gENROE.Epd0 PARAM */;
    data->localData[0]->realVars[8] /* gENROE.Epd STATE(1) */ = data->modelData->realVarsData[8].attribute /* gENROE.Epd STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[8].info /* gENROE.Epd */.name, (modelica_real) data->localData[0]->realVars[8] /* gENROE.Epd STATE(1) */);
  TRACE_POP
}

/*
equation index: 594
type: SIMPLE_ASSIGN
$START.gENROE.uq = gENROE.uq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_594(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,594};
  data->modelData->realVarsData[116].attribute /* gENROE.uq variable */.start = data->simulationInfo->realParameter[280] /* gENROE.uq0 PARAM */;
    data->localData[0]->realVars[116] /* gENROE.uq variable */ = data->modelData->realVarsData[116].attribute /* gENROE.uq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[116].info /* gENROE.uq */.name, (modelica_real) data->localData[0]->realVars[116] /* gENROE.uq variable */);
  TRACE_POP
}

/*
equation index: 595
type: SIMPLE_ASSIGN
$START.gENROE.ud = gENROE.ud0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_595(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,595};
  data->modelData->realVarsData[115].attribute /* gENROE.ud variable */.start = data->simulationInfo->realParameter[279] /* gENROE.ud0 PARAM */;
    data->localData[0]->realVars[115] /* gENROE.ud variable */ = data->modelData->realVarsData[115].attribute /* gENROE.ud variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[115].info /* gENROE.ud */.name, (modelica_real) data->localData[0]->realVars[115] /* gENROE.ud variable */);
  TRACE_POP
}

/*
equation index: 596
type: SIMPLE_ASSIGN
$START.gENROE.iq = gENROE.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_596(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,596};
  data->modelData->realVarsData[114].attribute /* gENROE.iq variable */.start = data->simulationInfo->realParameter[274] /* gENROE.iq0 PARAM */;
    data->localData[0]->realVars[114] /* gENROE.iq variable */ = data->modelData->realVarsData[114].attribute /* gENROE.iq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[114].info /* gENROE.iq */.name, (modelica_real) data->localData[0]->realVars[114] /* gENROE.iq variable */);
  TRACE_POP
}

/*
equation index: 597
type: SIMPLE_ASSIGN
$START.gENROE.id = gENROE.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_597(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,597};
  data->modelData->realVarsData[113].attribute /* gENROE.id variable */.start = data->simulationInfo->realParameter[272] /* gENROE.id0 PARAM */;
    data->localData[0]->realVars[113] /* gENROE.id variable */ = data->modelData->realVarsData[113].attribute /* gENROE.id variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[113].info /* gENROE.id */.name, (modelica_real) data->localData[0]->realVars[113] /* gENROE.id variable */);
  TRACE_POP
}

/*
equation index: 598
type: SIMPLE_ASSIGN
$START.gENROE.Te = gENROE.pm0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_598(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,598};
  data->modelData->realVarsData[109].attribute /* gENROE.Te variable */.start = data->simulationInfo->realParameter[277] /* gENROE.pm0 PARAM */;
    data->localData[0]->realVars[109] /* gENROE.Te variable */ = data->modelData->realVarsData[109].attribute /* gENROE.Te variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[109].info /* gENROE.Te */.name, (modelica_real) data->localData[0]->realVars[109] /* gENROE.Te variable */);
  TRACE_POP
}

/*
equation index: 599
type: SIMPLE_ASSIGN
$START.gENROE.Q = gENROE.Q_0 / gENROE.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_599(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,599};
  data->modelData->realVarsData[108].attribute /* gENROE.Q variable */.start = DIVISION(data->simulationInfo->realParameter[237] /* gENROE.Q_0 PARAM */,data->simulationInfo->realParameter[243] /* gENROE.S_b PARAM */,"gENROE.S_b");
    data->localData[0]->realVars[108] /* gENROE.Q variable */ = data->modelData->realVarsData[108].attribute /* gENROE.Q variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[108].info /* gENROE.Q */.name, (modelica_real) data->localData[0]->realVars[108] /* gENROE.Q variable */);
  TRACE_POP
}

/*
equation index: 600
type: SIMPLE_ASSIGN
$START.gENROE.P = gENROE.P_0 / gENROE.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_600(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,600};
  data->modelData->realVarsData[101].attribute /* gENROE.P variable */.start = DIVISION(data->simulationInfo->realParameter[236] /* gENROE.P_0 PARAM */,data->simulationInfo->realParameter[243] /* gENROE.S_b PARAM */,"gENROE.S_b");
    data->localData[0]->realVars[101] /* gENROE.P variable */ = data->modelData->realVarsData[101].attribute /* gENROE.P variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[101].info /* gENROE.P */.name, (modelica_real) data->localData[0]->realVars[101] /* gENROE.P variable */);
  TRACE_POP
}

/*
equation index: 601
type: SIMPLE_ASSIGN
$START.gENROE.anglei = atan2(gENROE.ii0, gENROE.ir0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_601(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,601};
  data->modelData->realVarsData[111].attribute /* gENROE.anglei variable */.start = atan2(data->simulationInfo->realParameter[273] /* gENROE.ii0 PARAM */, data->simulationInfo->realParameter[275] /* gENROE.ir0 PARAM */);
    data->localData[0]->realVars[111] /* gENROE.anglei variable */ = data->modelData->realVarsData[111].attribute /* gENROE.anglei variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[111].info /* gENROE.anglei */.name, (modelica_real) data->localData[0]->realVars[111] /* gENROE.anglei variable */);
  TRACE_POP
}

/*
equation index: 602
type: SIMPLE_ASSIGN
$START.gENROE.I = sqrt(gENROE.ir0 ^ 2.0 + gENROE.ii0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_602(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,602};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->simulationInfo->realParameter[275] /* gENROE.ir0 PARAM */;
  tmp1 = data->simulationInfo->realParameter[273] /* gENROE.ii0 PARAM */;
  data->modelData->realVarsData[100].attribute /* gENROE.I variable */.start = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
    data->localData[0]->realVars[100] /* gENROE.I variable */ = data->modelData->realVarsData[100].attribute /* gENROE.I variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[100].info /* gENROE.I */.name, (modelica_real) data->localData[0]->realVars[100] /* gENROE.I variable */);
  TRACE_POP
}

/*
equation index: 603
type: SIMPLE_ASSIGN
$START.gENROE.delta = gENROE.delta0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_603(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,603};
  data->modelData->realVarsData[12].attribute /* gENROE.delta STATE(1) */.start = data->simulationInfo->realParameter[268] /* gENROE.delta0 PARAM */;
    data->localData[0]->realVars[12] /* gENROE.delta STATE(1) */ = data->modelData->realVarsData[12].attribute /* gENROE.delta STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[12].info /* gENROE.delta */.name, (modelica_real) data->localData[0]->realVars[12] /* gENROE.delta STATE(1) */);
  TRACE_POP
}

/*
equation index: 604
type: SIMPLE_ASSIGN
$START.gENROE.w = gENROE.w0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_604(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,604};
  data->modelData->realVarsData[13].attribute /* gENROE.w STATE(1) */.start = data->simulationInfo->realParameter[284] /* gENROE.w0 PARAM */;
    data->localData[0]->realVars[13] /* gENROE.w STATE(1) */ = data->modelData->realVarsData[13].attribute /* gENROE.w STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[13].info /* gENROE.w */.name, (modelica_real) data->localData[0]->realVars[13] /* gENROE.w STATE(1) */);
  TRACE_POP
}

/*
equation index: 605
type: SIMPLE_ASSIGN
$START.gENROE.PELEC = gENROE.p0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_605(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,605};
  data->modelData->realVarsData[102].attribute /* gENROE.PELEC variable */.start = data->simulationInfo->realParameter[276] /* gENROE.p0 PARAM */;
    data->localData[0]->realVars[102] /* gENROE.PELEC variable */ = data->modelData->realVarsData[102].attribute /* gENROE.PELEC variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[102].info /* gENROE.PELEC */.name, (modelica_real) data->localData[0]->realVars[102] /* gENROE.PELEC variable */);
  TRACE_POP
}

/*
equation index: 606
type: SIMPLE_ASSIGN
$START.SHUNT.angle = SHUNT.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_606(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,606};
  data->modelData->realVarsData[54].attribute /* SHUNT.angle variable */.start = data->simulationInfo->realParameter[32] /* SHUNT.angle_0 PARAM */;
    data->localData[0]->realVars[54] /* SHUNT.angle variable */ = data->modelData->realVarsData[54].attribute /* SHUNT.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[54].info /* SHUNT.angle */.name, (modelica_real) data->localData[0]->realVars[54] /* SHUNT.angle variable */);
  TRACE_POP
}

/*
equation index: 607
type: SIMPLE_ASSIGN
$START.SHUNT.V = SHUNT.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_607(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,607};
  data->modelData->realVarsData[53].attribute /* SHUNT.V variable */.start = data->simulationInfo->realParameter[34] /* SHUNT.v_0 PARAM */;
    data->localData[0]->realVars[53] /* SHUNT.V variable */ = data->modelData->realVarsData[53].attribute /* SHUNT.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[53].info /* SHUNT.V */.name, (modelica_real) data->localData[0]->realVars[53] /* SHUNT.V variable */);
  TRACE_POP
}

/*
equation index: 608
type: SIMPLE_ASSIGN
$START.pwLine2.vr.im = gENCLS.vi0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_608(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,608};
  data->modelData->realVarsData[147].attribute /* pwLine2.vr.im variable */.start = data->simulationInfo->realParameter[198] /* gENCLS.vi0 PARAM */;
    data->localData[0]->realVars[147] /* pwLine2.vr.im variable */ = data->modelData->realVarsData[147].attribute /* pwLine2.vr.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[147].info /* pwLine2.vr.im */.name, (modelica_real) data->localData[0]->realVars[147] /* pwLine2.vr.im variable */);
  TRACE_POP
}

/*
equation index: 609
type: SIMPLE_ASSIGN
$START.pwLine2.vr.re = gENCLS.vr0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_609(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,609};
  data->modelData->realVarsData[148].attribute /* pwLine2.vr.re variable */.start = data->simulationInfo->realParameter[200] /* gENCLS.vr0 PARAM */;
    data->localData[0]->realVars[148] /* pwLine2.vr.re variable */ = data->modelData->realVarsData[148].attribute /* pwLine2.vr.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[148].info /* pwLine2.vr.re */.name, (modelica_real) data->localData[0]->realVars[148] /* pwLine2.vr.re variable */);
  TRACE_POP
}

/*
equation index: 610
type: SIMPLE_ASSIGN
$START.pwLine1.vr.im = SHUNT.v_0 * sin(SHUNT.angle_0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_610(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,610};
  data->modelData->realVarsData[137].attribute /* pwLine1.vr.im variable */.start = (data->simulationInfo->realParameter[34] /* SHUNT.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[32] /* SHUNT.angle_0 PARAM */));
    data->localData[0]->realVars[137] /* pwLine1.vr.im variable */ = data->modelData->realVarsData[137].attribute /* pwLine1.vr.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[137].info /* pwLine1.vr.im */.name, (modelica_real) data->localData[0]->realVars[137] /* pwLine1.vr.im variable */);
  TRACE_POP
}

/*
equation index: 611
type: SIMPLE_ASSIGN
$START.pwLine1.vr.re = SHUNT.v_0 * cos(SHUNT.angle_0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_611(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,611};
  data->modelData->realVarsData[138].attribute /* pwLine1.vr.re variable */.start = (data->simulationInfo->realParameter[34] /* SHUNT.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[32] /* SHUNT.angle_0 PARAM */));
    data->localData[0]->realVars[138] /* pwLine1.vr.re variable */ = data->modelData->realVarsData[138].attribute /* pwLine1.vr.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[138].info /* pwLine1.vr.re */.name, (modelica_real) data->localData[0]->realVars[138] /* pwLine1.vr.re variable */);
  TRACE_POP
}

/*
equation index: 612
type: SIMPLE_ASSIGN
$START.pwLine1.vs.im = constantLoad.vi0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_612(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,612};
  data->modelData->realVarsData[139].attribute /* pwLine1.vs.im variable */.start = data->simulationInfo->realParameter[75] /* constantLoad.vi0 PARAM */;
    data->localData[0]->realVars[139] /* pwLine1.vs.im variable */ = data->modelData->realVarsData[139].attribute /* pwLine1.vs.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[139].info /* pwLine1.vs.im */.name, (modelica_real) data->localData[0]->realVars[139] /* pwLine1.vs.im variable */);
  TRACE_POP
}

/*
equation index: 613
type: SIMPLE_ASSIGN
$START.pwLine1.vs.re = constantLoad.vr0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_613(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,613};
  data->modelData->realVarsData[140].attribute /* pwLine1.vs.re variable */.start = data->simulationInfo->realParameter[76] /* constantLoad.vr0 PARAM */;
    data->localData[0]->realVars[140] /* pwLine1.vs.re variable */ = data->modelData->realVarsData[140].attribute /* pwLine1.vs.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[140].info /* pwLine1.vs.re */.name, (modelica_real) data->localData[0]->realVars[140] /* pwLine1.vs.re variable */);
  TRACE_POP
}

/*
equation index: 614
type: SIMPLE_ASSIGN
$START.FAULT.angle = FAULT.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_614(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,614};
  data->modelData->realVarsData[34].attribute /* FAULT.angle variable */.start = data->simulationInfo->realParameter[4] /* FAULT.angle_0 PARAM */;
    data->localData[0]->realVars[34] /* FAULT.angle variable */ = data->modelData->realVarsData[34].attribute /* FAULT.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[34].info /* FAULT.angle */.name, (modelica_real) data->localData[0]->realVars[34] /* FAULT.angle variable */);
  TRACE_POP
}

/*
equation index: 615
type: SIMPLE_ASSIGN
$START.FAULT.V = FAULT.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_615(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,615};
  data->modelData->realVarsData[33].attribute /* FAULT.V variable */.start = data->simulationInfo->realParameter[6] /* FAULT.v_0 PARAM */;
    data->localData[0]->realVars[33] /* FAULT.V variable */ = data->modelData->realVarsData[33].attribute /* FAULT.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[33].info /* FAULT.V */.name, (modelica_real) data->localData[0]->realVars[33] /* FAULT.V variable */);
  TRACE_POP
}

/*
equation index: 616
type: SIMPLE_ASSIGN
$START.GEN2.angle = gENCLS.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_616(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,616};
  data->modelData->realVarsData[44].attribute /* GEN2.angle variable */.start = data->simulationInfo->realParameter[186] /* gENCLS.angle_0 PARAM */;
    data->localData[0]->realVars[44] /* GEN2.angle variable */ = data->modelData->realVarsData[44].attribute /* GEN2.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[44].info /* GEN2.angle */.name, (modelica_real) data->localData[0]->realVars[44] /* GEN2.angle variable */);
  TRACE_POP
}

/*
equation index: 617
type: SIMPLE_ASSIGN
$START.GEN2.V = gENCLS.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_617(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,617};
  data->modelData->realVarsData[43].attribute /* GEN2.V variable */.start = data->simulationInfo->realParameter[195] /* gENCLS.v_0 PARAM */;
    data->localData[0]->realVars[43] /* GEN2.V variable */ = data->modelData->realVarsData[43].attribute /* GEN2.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[43].info /* GEN2.V */.name, (modelica_real) data->localData[0]->realVars[43] /* GEN2.V variable */);
  TRACE_POP
}

/*
equation index: 618
type: SIMPLE_ASSIGN
$START.LOAD.angle = constantLoad.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_618(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,618};
  data->modelData->realVarsData[49].attribute /* LOAD.angle variable */.start = data->simulationInfo->realParameter[60] /* constantLoad.angle_0 PARAM */;
    data->localData[0]->realVars[49] /* LOAD.angle variable */ = data->modelData->realVarsData[49].attribute /* LOAD.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[49].info /* LOAD.angle */.name, (modelica_real) data->localData[0]->realVars[49] /* LOAD.angle variable */);
  TRACE_POP
}

/*
equation index: 619
type: SIMPLE_ASSIGN
$START.GEN1.angle = GEN1.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_619(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,619};
  data->modelData->realVarsData[39].attribute /* GEN1.angle variable */.start = data->simulationInfo->realParameter[11] /* GEN1.angle_0 PARAM */;
    data->localData[0]->realVars[39] /* GEN1.angle variable */ = data->modelData->realVarsData[39].attribute /* GEN1.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[39].info /* GEN1.angle */.name, (modelica_real) data->localData[0]->realVars[39] /* GEN1.angle variable */);
  TRACE_POP
}

/*
equation index: 620
type: SIMPLE_ASSIGN
$START.constantLoad.v = LOAD.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_620(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,620};
  data->modelData->realVarsData[65].attribute /* constantLoad.v variable */.start = data->simulationInfo->realParameter[27] /* LOAD.v_0 PARAM */;
    data->localData[0]->realVars[65] /* constantLoad.v variable */ = data->modelData->realVarsData[65].attribute /* constantLoad.v variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[65].info /* constantLoad.v */.name, (modelica_real) data->localData[0]->realVars[65] /* constantLoad.v variable */);
  TRACE_POP
}

/*
equation index: 621
type: SIMPLE_ASSIGN
$START.constantLoad.p.ii = constantLoad.ii0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_621(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,621};
  data->modelData->realVarsData[63].attribute /* constantLoad.p.ii variable */.start = data->simulationInfo->realParameter[69] /* constantLoad.ii0 PARAM */;
    data->localData[0]->realVars[63] /* constantLoad.p.ii variable */ = data->modelData->realVarsData[63].attribute /* constantLoad.p.ii variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[63].info /* constantLoad.p.ii */.name, (modelica_real) data->localData[0]->realVars[63] /* constantLoad.p.ii variable */);
  TRACE_POP
}

/*
equation index: 622
type: SIMPLE_ASSIGN
$START.constantLoad.p.ir = constantLoad.ir0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_622(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,622};
  data->modelData->realVarsData[64].attribute /* constantLoad.p.ir variable */.start = data->simulationInfo->realParameter[70] /* constantLoad.ir0 PARAM */;
    data->localData[0]->realVars[64] /* constantLoad.p.ir variable */ = data->modelData->realVarsData[64].attribute /* constantLoad.p.ir variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[64].info /* constantLoad.p.ir */.name, (modelica_real) data->localData[0]->realVars[64] /* constantLoad.p.ir variable */);
  TRACE_POP
}

/*
equation index: 623
type: SIMPLE_ASSIGN
$START.gENCLS.Q = gENCLS.Q_0 / gENCLS.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_623(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,623};
  data->modelData->realVarsData[91].attribute /* gENCLS.Q variable */.start = DIVISION(data->simulationInfo->realParameter[181] /* gENCLS.Q_0 PARAM */,data->simulationInfo->realParameter[183] /* gENCLS.S_b PARAM */,"gENCLS.S_b");
    data->localData[0]->realVars[91] /* gENCLS.Q variable */ = data->modelData->realVarsData[91].attribute /* gENCLS.Q variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[91].info /* gENCLS.Q */.name, (modelica_real) data->localData[0]->realVars[91] /* gENCLS.Q variable */);
  TRACE_POP
}

/*
equation index: 624
type: SIMPLE_ASSIGN
$START.gENCLS.P = gENCLS.P_0 / gENCLS.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_624(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,624};
  data->modelData->realVarsData[90].attribute /* gENCLS.P variable */.start = DIVISION(data->simulationInfo->realParameter[180] /* gENCLS.P_0 PARAM */,data->simulationInfo->realParameter[183] /* gENCLS.S_b PARAM */,"gENCLS.S_b");
    data->localData[0]->realVars[90] /* gENCLS.P variable */ = data->modelData->realVarsData[90].attribute /* gENCLS.P variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[90].info /* gENCLS.P */.name, (modelica_real) data->localData[0]->realVars[90] /* gENCLS.P variable */);
  TRACE_POP
}

/*
equation index: 625
type: SIMPLE_ASSIGN
$START.gENCLS.iq = gENCLS.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_625(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,625};
  data->modelData->realVarsData[95].attribute /* gENCLS.iq variable */.start = data->simulationInfo->realParameter[191] /* gENCLS.iq0 PARAM */;
    data->localData[0]->realVars[95] /* gENCLS.iq variable */ = data->modelData->realVarsData[95].attribute /* gENCLS.iq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[95].info /* gENCLS.iq */.name, (modelica_real) data->localData[0]->realVars[95] /* gENCLS.iq variable */);
  TRACE_POP
}

/*
equation index: 626
type: SIMPLE_ASSIGN
$START.gENCLS.id = gENCLS.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_626(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,626};
  data->modelData->realVarsData[94].attribute /* gENCLS.id variable */.start = data->simulationInfo->realParameter[189] /* gENCLS.id0 PARAM */;
    data->localData[0]->realVars[94] /* gENCLS.id variable */ = data->modelData->realVarsData[94].attribute /* gENCLS.id variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[94].info /* gENCLS.id */.name, (modelica_real) data->localData[0]->realVars[94] /* gENCLS.id variable */);
  TRACE_POP
}

/*
equation index: 627
type: SIMPLE_ASSIGN
$START.gENCLS.vq = gENCLS.vq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_627(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,627};
  data->modelData->realVarsData[99].attribute /* gENCLS.vq variable */.start = data->simulationInfo->realParameter[199] /* gENCLS.vq0 PARAM */;
    data->localData[0]->realVars[99] /* gENCLS.vq variable */ = data->modelData->realVarsData[99].attribute /* gENCLS.vq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[99].info /* gENCLS.vq */.name, (modelica_real) data->localData[0]->realVars[99] /* gENCLS.vq variable */);
  TRACE_POP
}

/*
equation index: 628
type: SIMPLE_ASSIGN
$START.gENCLS.vd = gENCLS.vd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_628(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,628};
  data->modelData->realVarsData[98].attribute /* gENCLS.vd variable */.start = data->simulationInfo->realParameter[196] /* gENCLS.vd0 PARAM */;
    data->localData[0]->realVars[98] /* gENCLS.vd variable */ = data->modelData->realVarsData[98].attribute /* gENCLS.vd variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[98].info /* gENCLS.vd */.name, (modelica_real) data->localData[0]->realVars[98] /* gENCLS.vd variable */);
  TRACE_POP
}

/*
equation index: 629
type: SIMPLE_ASSIGN
$START.gENCLS.eq = gENCLS.vf0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_629(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,629};
  data->modelData->realVarsData[6].attribute /* gENCLS.eq STATE(1) */.start = data->simulationInfo->realParameter[197] /* gENCLS.vf0 PARAM */;
    data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */ = data->modelData->realVarsData[6].attribute /* gENCLS.eq STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[6].info /* gENCLS.eq */.name, (modelica_real) data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */);
  TRACE_POP
}

/*
equation index: 630
type: SIMPLE_ASSIGN
$START.gENCLS.delta = gENCLS.delta0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_630(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,630};
  data->modelData->realVarsData[5].attribute /* gENCLS.delta STATE(1) */.start = data->simulationInfo->realParameter[187] /* gENCLS.delta0 PARAM */;
    data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */ = data->modelData->realVarsData[5].attribute /* gENCLS.delta STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[5].info /* gENCLS.delta */.name, (modelica_real) data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */);
  TRACE_POP
}

/*
equation index: 631
type: SIMPLE_ASSIGN
$START.gENCLS.p.ii = gENCLS.ii0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_631(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,631};
  data->modelData->realVarsData[96].attribute /* gENCLS.p.ii variable */.start = data->simulationInfo->realParameter[190] /* gENCLS.ii0 PARAM */;
    data->localData[0]->realVars[96] /* gENCLS.p.ii variable */ = data->modelData->realVarsData[96].attribute /* gENCLS.p.ii variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[96].info /* gENCLS.p.ii */.name, (modelica_real) data->localData[0]->realVars[96] /* gENCLS.p.ii variable */);
  TRACE_POP
}

/*
equation index: 632
type: SIMPLE_ASSIGN
$START.gENCLS.p.ir = gENCLS.ir0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_632(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,632};
  data->modelData->realVarsData[97].attribute /* gENCLS.p.ir variable */.start = data->simulationInfo->realParameter[192] /* gENCLS.ir0 PARAM */;
    data->localData[0]->realVars[97] /* gENCLS.p.ir variable */ = data->modelData->realVarsData[97].attribute /* gENCLS.p.ir variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[97].info /* gENCLS.p.ir */.name, (modelica_real) data->localData[0]->realVars[97] /* gENCLS.p.ir variable */);
  TRACE_POP
}

/*
equation index: 633
type: SIMPLE_ASSIGN
$START.pwLine3.vr.im = FAULT.v_0 * sin(FAULT.angle_0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_633(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,633};
  data->modelData->realVarsData[157].attribute /* pwLine3.vr.im variable */.start = (data->simulationInfo->realParameter[6] /* FAULT.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[4] /* FAULT.angle_0 PARAM */));
    data->localData[0]->realVars[157] /* pwLine3.vr.im variable */ = data->modelData->realVarsData[157].attribute /* pwLine3.vr.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[157].info /* pwLine3.vr.im */.name, (modelica_real) data->localData[0]->realVars[157] /* pwLine3.vr.im variable */);
  TRACE_POP
}

/*
equation index: 634
type: SIMPLE_ASSIGN
$START.pwLine3.vr.re = FAULT.v_0 * cos(FAULT.angle_0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_634(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,634};
  data->modelData->realVarsData[158].attribute /* pwLine3.vr.re variable */.start = (data->simulationInfo->realParameter[6] /* FAULT.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[4] /* FAULT.angle_0 PARAM */));
    data->localData[0]->realVars[158] /* pwLine3.vr.re variable */ = data->modelData->realVarsData[158].attribute /* pwLine3.vr.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[158].info /* pwLine3.vr.re */.name, (modelica_real) data->localData[0]->realVars[158] /* pwLine3.vr.re variable */);
  TRACE_POP
}

/*
equation index: 635
type: SIMPLE_ASSIGN
$START.pwLine.is.im = -gENROE.ii0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_635(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,635};
  data->modelData->realVarsData[125].attribute /* pwLine.is.im variable */.start = (-data->simulationInfo->realParameter[273] /* gENROE.ii0 PARAM */);
    data->localData[0]->realVars[125] /* pwLine.is.im variable */ = data->modelData->realVarsData[125].attribute /* pwLine.is.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[125].info /* pwLine.is.im */.name, (modelica_real) data->localData[0]->realVars[125] /* pwLine.is.im variable */);
  TRACE_POP
}

/*
equation index: 636
type: SIMPLE_ASSIGN
$START.pwLine.is.re = -gENROE.ir0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_636(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,636};
  data->modelData->realVarsData[126].attribute /* pwLine.is.re variable */.start = (-data->simulationInfo->realParameter[275] /* gENROE.ir0 PARAM */);
    data->localData[0]->realVars[126] /* pwLine.is.re variable */ = data->modelData->realVarsData[126].attribute /* pwLine.is.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[126].info /* pwLine.is.re */.name, (modelica_real) data->localData[0]->realVars[126] /* pwLine.is.re variable */);
  TRACE_POP
}

/*
equation index: 637
type: SIMPLE_ASSIGN
$START.pwLine.vs.im = gENROE.vi0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_637(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,637};
  data->modelData->realVarsData[127].attribute /* pwLine.vs.im variable */.start = data->simulationInfo->realParameter[282] /* gENROE.vi0 PARAM */;
    data->localData[0]->realVars[127] /* pwLine.vs.im variable */ = data->modelData->realVarsData[127].attribute /* pwLine.vs.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[127].info /* pwLine.vs.im */.name, (modelica_real) data->localData[0]->realVars[127] /* pwLine.vs.im variable */);
  TRACE_POP
}

/*
equation index: 638
type: SIMPLE_ASSIGN
$START.pwLine.vs.re = gENROE.vr0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_638(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,638};
  data->modelData->realVarsData[128].attribute /* pwLine.vs.re variable */.start = data->simulationInfo->realParameter[283] /* gENROE.vr0 PARAM */;
    data->localData[0]->realVars[128] /* pwLine.vs.re variable */ = data->modelData->realVarsData[128].attribute /* pwLine.vs.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[128].info /* pwLine.vs.re */.name, (modelica_real) data->localData[0]->realVars[128] /* pwLine.vs.re variable */);
  TRACE_POP
}

/*
equation index: 639
type: SIMPLE_ASSIGN
$START.GEN1.V = GEN1.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_639(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,639};
  data->modelData->realVarsData[38].attribute /* GEN1.V variable */.start = data->simulationInfo->realParameter[13] /* GEN1.v_0 PARAM */;
    data->localData[0]->realVars[38] /* GEN1.V variable */ = data->modelData->realVarsData[38].attribute /* GEN1.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[38].info /* GEN1.V */.name, (modelica_real) data->localData[0]->realVars[38] /* GEN1.V variable */);
  TRACE_POP
}

/*
equation index: 640
type: SIMPLE_ASSIGN
$START.gENROE.anglev = gENROE.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_640(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,640};
  data->modelData->realVarsData[112].attribute /* gENROE.anglev variable */.start = data->simulationInfo->realParameter[266] /* gENROE.angle_0 PARAM */;
    data->localData[0]->realVars[112] /* gENROE.anglev variable */ = data->modelData->realVarsData[112].attribute /* gENROE.anglev variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[112].info /* gENROE.anglev */.name, (modelica_real) data->localData[0]->realVars[112] /* gENROE.anglev variable */);
  TRACE_POP
}

/*
equation index: 641
type: SIMPLE_ASSIGN
$START.gENCLS.V = gENCLS.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_641(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,641};
  data->modelData->realVarsData[92].attribute /* gENCLS.V variable */.start = data->simulationInfo->realParameter[195] /* gENCLS.v_0 PARAM */;
    data->localData[0]->realVars[92] /* gENCLS.V variable */ = data->modelData->realVarsData[92].attribute /* gENCLS.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[92].info /* gENCLS.V */.name, (modelica_real) data->localData[0]->realVars[92] /* gENCLS.V variable */);
  TRACE_POP
}

/*
equation index: 642
type: SIMPLE_ASSIGN
$START.gENCLS.anglev = gENCLS.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_642(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,642};
  data->modelData->realVarsData[93].attribute /* gENCLS.anglev variable */.start = data->simulationInfo->realParameter[186] /* gENCLS.angle_0 PARAM */;
    data->localData[0]->realVars[93] /* gENCLS.anglev variable */ = data->modelData->realVarsData[93].attribute /* gENCLS.anglev variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[93].info /* gENCLS.anglev */.name, (modelica_real) data->localData[0]->realVars[93] /* gENCLS.anglev variable */);
  TRACE_POP
}

/*
equation index: 643
type: SIMPLE_ASSIGN
$START.LOAD.V = LOAD.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_643(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,643};
  data->modelData->realVarsData[48].attribute /* LOAD.V variable */.start = data->simulationInfo->realParameter[27] /* LOAD.v_0 PARAM */;
    data->localData[0]->realVars[48] /* LOAD.V variable */ = data->modelData->realVarsData[48].attribute /* LOAD.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[48].info /* LOAD.V */.name, (modelica_real) data->localData[0]->realVars[48] /* LOAD.V variable */);
  TRACE_POP
}

/*
equation index: 644
type: SIMPLE_ASSIGN
$START.constantLoad.angle = constantLoad.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_644(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,644};
  data->modelData->realVarsData[60].attribute /* constantLoad.angle variable */.start = data->simulationInfo->realParameter[60] /* constantLoad.angle_0 PARAM */;
    data->localData[0]->realVars[60] /* constantLoad.angle variable */ = data->modelData->realVarsData[60].attribute /* constantLoad.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[60].info /* constantLoad.angle */.name, (modelica_real) data->localData[0]->realVars[60] /* constantLoad.angle variable */);
  TRACE_POP
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_updateBoundVariableAttributes(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  /* min ******************************************************** */
  
  infoStreamPrint(LOG_INIT, 1, "updating min-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  /* max ******************************************************** */
  
  infoStreamPrint(LOG_INIT, 1, "updating max-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  /* nominal **************************************************** */
  
  infoStreamPrint(LOG_INIT, 1, "updating nominal-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  /* start ****************************************************** */
  infoStreamPrint(LOG_INIT, 1, "updating primary start-values");
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_583(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_584(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_585(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_586(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_587(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_588(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_589(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_590(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_591(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_592(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_593(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_594(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_595(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_596(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_597(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_598(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_599(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_600(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_601(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_602(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_603(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_604(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_605(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_606(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_607(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_608(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_609(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_610(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_611(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_612(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_613(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_614(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_615(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_616(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_617(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_618(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_619(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_620(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_621(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_622(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_623(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_624(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_625(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_626(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_627(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_628(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_629(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_630(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_631(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_632(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_633(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_634(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_635(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_636(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_637(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_638(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_639(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_640(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_641(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_642(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_643(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_644(data, threadData);
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  TRACE_POP
  return 0;
}

void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_updateBoundParameters_0(DATA *data, threadData_t *threadData);

/*
equation index: 645
type: SIMPLE_ASSIGN
gENROE.Xpp = gENROE.Xppd
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_645(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,645};
  data->simulationInfo->realParameter[254] /* gENROE.Xpp PARAM */ = data->simulationInfo->realParameter[255] /* gENROE.Xppd PARAM */;
  TRACE_POP
}

/*
equation index: 648
type: SIMPLE_ASSIGN
gENROE.abs_PSIpp0 = (gENROE.PSIpp0.re ^ 2.0 + gENROE.PSIpp0.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_648(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,648};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  tmp0 = data->simulationInfo->realParameter[230] /* gENROE.PSIpp0.re PARAM */;
  tmp1 = data->simulationInfo->realParameter[229] /* gENROE.PSIpp0.im PARAM */;
  tmp2 = (tmp0 * tmp0) + (tmp1 * tmp1);
  if(!(tmp2 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(gENROE.PSIpp0.re ^ 2.0 + gENROE.PSIpp0.im ^ 2.0) was %g should be >= 0", tmp2);
  }
  data->simulationInfo->realParameter[262] /* gENROE.abs_PSIpp0 PARAM */ = sqrt(tmp2);
  TRACE_POP
}

/*
equation index: 649
type: SIMPLE_ASSIGN
gENROE.dsat = OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.abs_PSIpp0, gENROE.S10, gENROE.S12, 1.0, 1.2)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_649(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,649};
  data->simulationInfo->realParameter[269] /* gENROE.dsat PARAM */ = omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->simulationInfo->realParameter[262] /* gENROE.abs_PSIpp0 PARAM */, data->simulationInfo->realParameter[241] /* gENROE.S10 PARAM */, data->simulationInfo->realParameter[242] /* gENROE.S12 PARAM */, 1.0, 1.2);
  TRACE_POP
}

/*
equation index: 651
type: SIMPLE_ASSIGN
gENROE.PSIppd0 = gENROE.PSIpp0_dq.re
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_651(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,651};
  data->simulationInfo->realParameter[233] /* gENROE.PSIppd0 PARAM */ = data->simulationInfo->realParameter[232] /* gENROE.PSIpp0_dq.re PARAM */;
  TRACE_POP
}

/*
equation index: 653
type: SIMPLE_ASSIGN
gENROE.id0 = gENROE.I_dq.im
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_653(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,653};
  data->simulationInfo->realParameter[272] /* gENROE.id0 PARAM */ = data->simulationInfo->realParameter[209] /* gENROE.I_dq.im PARAM */;
  TRACE_POP
}

/*
equation index: 654
type: SIMPLE_ASSIGN
gENROE.efd0 = gENROE.PSIppd0 * (1.0 + gENROE.dsat) + gENROE.id0 * (gENROE.Xd - gENROE.Xpp)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_654(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,654};
  data->simulationInfo->realParameter[270] /* gENROE.efd0 PARAM */ = (data->simulationInfo->realParameter[233] /* gENROE.PSIppd0 PARAM */) * (1.0 + data->simulationInfo->realParameter[269] /* gENROE.dsat PARAM */) + (data->simulationInfo->realParameter[272] /* gENROE.id0 PARAM */) * (data->simulationInfo->realParameter[251] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[254] /* gENROE.Xpp PARAM */);
  TRACE_POP
}

/*
equation index: 655
type: SIMPLE_ASSIGN
gENROE.EFD0 = gENROE.efd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_655(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,655};
  data->simulationInfo->realParameter[205] /* gENROE.EFD0 PARAM */ = data->simulationInfo->realParameter[270] /* gENROE.efd0 PARAM */;
  TRACE_POP
}

/*
equation index: 656
type: SIMPLE_ASSIGN
eSAC1A.imLeadLag.T1 = eSAC1A.T_C
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_656(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,656};
  data->simulationInfo->realParameter[122] /* eSAC1A.imLeadLag.T1 PARAM */ = data->simulationInfo->realParameter[95] /* eSAC1A.T_C PARAM */;
  TRACE_POP
}

/*
equation index: 657
type: SIMPLE_ASSIGN
eSAC1A.imLeadLag.par1.y = eSAC1A.imLeadLag.T1
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_657(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,657};
  data->simulationInfo->realParameter[135] /* eSAC1A.imLeadLag.par1.y PARAM */ = data->simulationInfo->realParameter[122] /* eSAC1A.imLeadLag.T1 PARAM */;
  TRACE_POP
}

/*
equation index: 658
type: SIMPLE_ASSIGN
eSAC1A.imLeadLag.T2 = eSAC1A.T_B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_658(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,658};
  data->simulationInfo->realParameter[123] /* eSAC1A.imLeadLag.T2 PARAM */ = data->simulationInfo->realParameter[94] /* eSAC1A.T_B PARAM */;
  TRACE_POP
}

/*
equation index: 659
type: SIMPLE_ASSIGN
eSAC1A.imLeadLag.par2.y = eSAC1A.imLeadLag.T2
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_659(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,659};
  data->simulationInfo->realParameter[136] /* eSAC1A.imLeadLag.par2.y PARAM */ = data->simulationInfo->realParameter[123] /* eSAC1A.imLeadLag.T2 PARAM */;
  TRACE_POP
}

/*
equation index: 660
type: SIMPLE_ASSIGN
eSAC1A.imSimpleLag.T = eSAC1A.T_R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_660(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,660};
  data->simulationInfo->realParameter[140] /* eSAC1A.imSimpleLag.T PARAM */ = data->simulationInfo->realParameter[98] /* eSAC1A.T_R PARAM */;
  TRACE_POP
}

/*
equation index: 661
type: SIMPLE_ASSIGN
eSAC1A.imSimpleLag.const.y = eSAC1A.imSimpleLag.T
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_661(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,661};
  data->simulationInfo->realParameter[142] /* eSAC1A.imSimpleLag.const.y PARAM */ = data->simulationInfo->realParameter[140] /* eSAC1A.imSimpleLag.T PARAM */;
  TRACE_POP
}

/*
equation index: 662
type: SIMPLE_ASSIGN
eSAC1A.simpleLagLim.T = eSAC1A.T_A
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_662(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,662};
  data->simulationInfo->realParameter[170] /* eSAC1A.simpleLagLim.T PARAM */ = data->simulationInfo->realParameter[93] /* eSAC1A.T_A PARAM */;
  TRACE_POP
}

/*
equation index: 663
type: SIMPLE_ASSIGN
eSAC1A.simpleLagLim.const.y = eSAC1A.simpleLagLim.T
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_663(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,663};
  data->simulationInfo->realParameter[172] /* eSAC1A.simpleLagLim.const.y PARAM */ = data->simulationInfo->realParameter[170] /* eSAC1A.simpleLagLim.T PARAM */;
  TRACE_POP
}

/*
equation index: 664
type: SIMPLE_ASSIGN
gENROE.p0 = gENROE.P_0 / gENROE.M_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_664(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,664};
  data->simulationInfo->realParameter[276] /* gENROE.p0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[236] /* gENROE.P_0 PARAM */,data->simulationInfo->realParameter[223] /* gENROE.M_b PARAM */,"gENROE.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 666
type: SIMPLE_ASSIGN
gENROE.iq0 = gENROE.I_dq.re
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_666(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,666};
  data->simulationInfo->realParameter[274] /* gENROE.iq0 PARAM */ = data->simulationInfo->realParameter[210] /* gENROE.I_dq.re PARAM */;
  TRACE_POP
}

/*
equation index: 667
type: SIMPLE_ASSIGN
gENROE.pm0 = gENROE.p0 + gENROE.R_a * (gENROE.iq0 ^ 2.0 + gENROE.id0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_667(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,667};
  modelica_real tmp3;
  modelica_real tmp4;
  tmp3 = data->simulationInfo->realParameter[274] /* gENROE.iq0 PARAM */;
  tmp4 = data->simulationInfo->realParameter[272] /* gENROE.id0 PARAM */;
  data->simulationInfo->realParameter[277] /* gENROE.pm0 PARAM */ = data->simulationInfo->realParameter[276] /* gENROE.p0 PARAM */ + (data->simulationInfo->realParameter[238] /* gENROE.R_a PARAM */) * ((tmp3 * tmp3) + (tmp4 * tmp4));
  TRACE_POP
}

/*
equation index: 668
type: SIMPLE_ASSIGN
gENROE.PMECH = gENROE.pm0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_668(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,668};
  data->simulationInfo->realParameter[224] /* gENROE.PMECH PARAM */ = data->simulationInfo->realParameter[277] /* gENROE.pm0 PARAM */;
  TRACE_POP
}

/*
equation index: 669
type: SIMPLE_ASSIGN
gENROE.PMECH0 = gENROE.pm0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_669(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,669};
  data->simulationInfo->realParameter[225] /* gENROE.PMECH0 PARAM */ = data->simulationInfo->realParameter[277] /* gENROE.pm0 PARAM */;
  TRACE_POP
}

/*
equation index: 670
type: SIMPLE_ASSIGN
eSAC1A.add3_1.u1 = zero.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_670(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,670};
  data->simulationInfo->realParameter[115] /* eSAC1A.add3_1.u1 PARAM */ = data->simulationInfo->realParameter[349] /* zero.k PARAM */;
  TRACE_POP
}

/*
equation index: 671
type: SIMPLE_ASSIGN
eSAC1A.VOTHSG = zero.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_671(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,671};
  data->simulationInfo->realParameter[102] /* eSAC1A.VOTHSG PARAM */ = data->simulationInfo->realParameter[349] /* zero.k PARAM */;
  TRACE_POP
}

/*
equation index: 672
type: SIMPLE_ASSIGN
zero.y = zero.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_672(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,672};
  data->simulationInfo->realParameter[350] /* zero.y PARAM */ = data->simulationInfo->realParameter[349] /* zero.k PARAM */;
  TRACE_POP
}

/*
equation index: 673
type: SIMPLE_ASSIGN
eSAC1A.lV_GATE.n1 = plusInf.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_673(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,673};
  data->simulationInfo->realParameter[144] /* eSAC1A.lV_GATE.n1 PARAM */ = data->simulationInfo->realParameter[288] /* plusInf.k PARAM */;
  TRACE_POP
}

/*
equation index: 674
type: SIMPLE_ASSIGN
eSAC1A.VOEL = plusInf.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_674(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,674};
  data->simulationInfo->realParameter[101] /* eSAC1A.VOEL PARAM */ = data->simulationInfo->realParameter[288] /* plusInf.k PARAM */;
  TRACE_POP
}

/*
equation index: 675
type: SIMPLE_ASSIGN
plusInf.y = plusInf.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_675(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,675};
  data->simulationInfo->realParameter[289] /* plusInf.y PARAM */ = data->simulationInfo->realParameter[288] /* plusInf.k PARAM */;
  TRACE_POP
}

/*
equation index: 676
type: SIMPLE_ASSIGN
eSAC1A.hV_GATE.n2 = minusInf.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_676(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,676};
  data->simulationInfo->realParameter[120] /* eSAC1A.hV_GATE.n2 PARAM */ = data->simulationInfo->realParameter[286] /* minusInf.k PARAM */;
  TRACE_POP
}

/*
equation index: 677
type: SIMPLE_ASSIGN
eSAC1A.VUEL = minusInf.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_677(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,677};
  data->simulationInfo->realParameter[104] /* eSAC1A.VUEL PARAM */ = data->simulationInfo->realParameter[286] /* minusInf.k PARAM */;
  TRACE_POP
}

/*
equation index: 678
type: SIMPLE_ASSIGN
minusInf.y = minusInf.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_678(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,678};
  data->simulationInfo->realParameter[287] /* minusInf.y PARAM */ = data->simulationInfo->realParameter[286] /* minusInf.k PARAM */;
  TRACE_POP
}

/*
equation index: 679
type: SIMPLE_ASSIGN
eSAC1A.rectifierCommutationVoltageDrop.K_C = eSAC1A.K_C
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_679(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,679};
  data->simulationInfo->realParameter[147] /* eSAC1A.rectifierCommutationVoltageDrop.K_C PARAM */ = data->simulationInfo->realParameter[87] /* eSAC1A.K_C PARAM */;
  TRACE_POP
}

/*
equation index: 680
type: SIMPLE_ASSIGN
eSAC1A.rectifierCommutationVoltageDrop.gain2.k = eSAC1A.rectifierCommutationVoltageDrop.K_C
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_680(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,680};
  data->simulationInfo->realParameter[148] /* eSAC1A.rectifierCommutationVoltageDrop.gain2.k PARAM */ = data->simulationInfo->realParameter[147] /* eSAC1A.rectifierCommutationVoltageDrop.K_C PARAM */;
  TRACE_POP
}

/*
equation index: 681
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.K_D = eSAC1A.K_D
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_681(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,681};
  data->simulationInfo->realParameter[152] /* eSAC1A.rotatingExciterWithDemagnetization.K_D PARAM */ = data->simulationInfo->realParameter[88] /* eSAC1A.K_D PARAM */;
  TRACE_POP
}

/*
equation index: 687
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.T_E = eSAC1A.T_E
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_687(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,687};
  data->simulationInfo->realParameter[159] /* eSAC1A.rotatingExciterWithDemagnetization.T_E PARAM */ = data->simulationInfo->realParameter[96] /* eSAC1A.T_E PARAM */;
  TRACE_POP
}

/*
equation index: 688
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.sISO.k = 1.0 / eSAC1A.rotatingExciterWithDemagnetization.T_E
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_688(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,688};
  data->simulationInfo->realParameter[161] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.k PARAM */ = DIVISION_SIM(1.0,data->simulationInfo->realParameter[159] /* eSAC1A.rotatingExciterWithDemagnetization.T_E PARAM */,"eSAC1A.rotatingExciterWithDemagnetization.T_E",equationIndexes);
  TRACE_POP
}

/*
equation index: 689
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.E_2 = eSAC1A.E_2
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_689(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,689};
  data->simulationInfo->realParameter[150] /* eSAC1A.rotatingExciterWithDemagnetization.E_2 PARAM */ = data->simulationInfo->realParameter[83] /* eSAC1A.E_2 PARAM */;
  TRACE_POP
}

/*
equation index: 690
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.se1.E2 = eSAC1A.rotatingExciterWithDemagnetization.E_2
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_690(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,690};
  data->simulationInfo->realParameter[166] /* eSAC1A.rotatingExciterWithDemagnetization.se1.E2 PARAM */ = data->simulationInfo->realParameter[150] /* eSAC1A.rotatingExciterWithDemagnetization.E_2 PARAM */;
  TRACE_POP
}

/*
equation index: 691
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.E_1 = eSAC1A.E_1
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_691(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,691};
  data->simulationInfo->realParameter[149] /* eSAC1A.rotatingExciterWithDemagnetization.E_1 PARAM */ = data->simulationInfo->realParameter[82] /* eSAC1A.E_1 PARAM */;
  TRACE_POP
}

/*
equation index: 692
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.se1.E1 = eSAC1A.rotatingExciterWithDemagnetization.E_1
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_692(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,692};
  data->simulationInfo->realParameter[165] /* eSAC1A.rotatingExciterWithDemagnetization.se1.E1 PARAM */ = data->simulationInfo->realParameter[149] /* eSAC1A.rotatingExciterWithDemagnetization.E_1 PARAM */;
  TRACE_POP
}

/*
equation index: 693
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.S_EE_2 = eSAC1A.S_EE_2
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_693(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,693};
  data->simulationInfo->realParameter[155] /* eSAC1A.rotatingExciterWithDemagnetization.S_EE_2 PARAM */ = data->simulationInfo->realParameter[92] /* eSAC1A.S_EE_2 PARAM */;
  TRACE_POP
}

/*
equation index: 694
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.se1.SE2 = eSAC1A.rotatingExciterWithDemagnetization.S_EE_2
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_694(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,694};
  data->simulationInfo->realParameter[168] /* eSAC1A.rotatingExciterWithDemagnetization.se1.SE2 PARAM */ = data->simulationInfo->realParameter[155] /* eSAC1A.rotatingExciterWithDemagnetization.S_EE_2 PARAM */;
  TRACE_POP
}

/*
equation index: 695
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.S_EE_1 = eSAC1A.S_EE_1
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_695(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,695};
  data->simulationInfo->realParameter[154] /* eSAC1A.rotatingExciterWithDemagnetization.S_EE_1 PARAM */ = data->simulationInfo->realParameter[91] /* eSAC1A.S_EE_1 PARAM */;
  TRACE_POP
}

/*
equation index: 696
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.se1.SE1 = eSAC1A.rotatingExciterWithDemagnetization.S_EE_1
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_696(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,696};
  data->simulationInfo->realParameter[167] /* eSAC1A.rotatingExciterWithDemagnetization.se1.SE1 PARAM */ = data->simulationInfo->realParameter[154] /* eSAC1A.rotatingExciterWithDemagnetization.S_EE_1 PARAM */;
  TRACE_POP
}

/*
equation index: 697
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.Sum.k3 = eSAC1A.rotatingExciterWithDemagnetization.K_D
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_697(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,697};
  data->simulationInfo->realParameter[158] /* eSAC1A.rotatingExciterWithDemagnetization.Sum.k3 PARAM */ = data->simulationInfo->realParameter[152] /* eSAC1A.rotatingExciterWithDemagnetization.K_D PARAM */;
  TRACE_POP
}

/*
equation index: 698
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.K_E = eSAC1A.K_E
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_698(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,698};
  data->simulationInfo->realParameter[153] /* eSAC1A.rotatingExciterWithDemagnetization.K_E PARAM */ = data->simulationInfo->realParameter[89] /* eSAC1A.K_E PARAM */;
  TRACE_POP
}

/*
equation index: 699
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.gain.k = eSAC1A.rotatingExciterWithDemagnetization.K_E
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_699(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,699};
  data->simulationInfo->realParameter[160] /* eSAC1A.rotatingExciterWithDemagnetization.gain.k PARAM */ = data->simulationInfo->realParameter[153] /* eSAC1A.rotatingExciterWithDemagnetization.K_E PARAM */;
  TRACE_POP
}

/*
equation index: 702
type: SIMPLE_ASSIGN
eSAC1A.derivative.T = eSAC1A.T_F
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_702(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,702};
  data->simulationInfo->realParameter[116] /* eSAC1A.derivative.T PARAM */ = data->simulationInfo->realParameter[97] /* eSAC1A.T_F PARAM */;
  TRACE_POP
}

/*
equation index: 704
type: SIMPLE_ASSIGN
eSAC1A.simpleLagLim.T_mod = if eSAC1A.simpleLagLim.T < 1e-15 then 1000.0 else eSAC1A.simpleLagLim.T
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_704(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,704};
  modelica_boolean tmp5;
  tmp5 = Less(data->simulationInfo->realParameter[170] /* eSAC1A.simpleLagLim.T PARAM */,1e-15);
  data->simulationInfo->realParameter[171] /* eSAC1A.simpleLagLim.T_mod PARAM */ = (tmp5?1000.0:data->simulationInfo->realParameter[170] /* eSAC1A.simpleLagLim.T PARAM */);
  TRACE_POP
}

/*
equation index: 705
type: SIMPLE_ASSIGN
eSAC1A.simpleLagLim.outMin = eSAC1A.V_AMIN
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_705(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,705};
  data->simulationInfo->realParameter[174] /* eSAC1A.simpleLagLim.outMin PARAM */ = data->simulationInfo->realParameter[106] /* eSAC1A.V_AMIN PARAM */;
  TRACE_POP
}

/*
equation index: 706
type: SIMPLE_ASSIGN
eSAC1A.simpleLagLim.outMax = eSAC1A.V_AMAX
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_706(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,706};
  data->simulationInfo->realParameter[173] /* eSAC1A.simpleLagLim.outMax PARAM */ = data->simulationInfo->realParameter[105] /* eSAC1A.V_AMAX PARAM */;
  TRACE_POP
}

/*
equation index: 707
type: SIMPLE_ASSIGN
eSAC1A.simpleLagLim.K = eSAC1A.K_A
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_707(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,707};
  data->simulationInfo->realParameter[169] /* eSAC1A.simpleLagLim.K PARAM */ = data->simulationInfo->realParameter[86] /* eSAC1A.K_A PARAM */;
  TRACE_POP
}

/*
equation index: 711
type: SIMPLE_ASSIGN
eSAC1A.limiter1.uMin = eSAC1A.V_RMIN
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_711(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,711};
  data->simulationInfo->realParameter[146] /* eSAC1A.limiter1.uMin PARAM */ = data->simulationInfo->realParameter[109] /* eSAC1A.V_RMIN PARAM */;
  TRACE_POP
}

/*
equation index: 712
type: SIMPLE_ASSIGN
eSAC1A.limiter1.uMax = eSAC1A.V_RMAX
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_712(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,712};
  data->simulationInfo->realParameter[145] /* eSAC1A.limiter1.uMax PARAM */ = data->simulationInfo->realParameter[108] /* eSAC1A.V_RMAX PARAM */;
  TRACE_POP
}

/*
equation index: 713
type: SIMPLE_ASSIGN
eSAC1A.imSimpleLag.T_mod = if eSAC1A.imSimpleLag.T < 1e-15 then 1000.0 else eSAC1A.imSimpleLag.T
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_713(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,713};
  modelica_boolean tmp6;
  tmp6 = Less(data->simulationInfo->realParameter[140] /* eSAC1A.imSimpleLag.T PARAM */,1e-15);
  data->simulationInfo->realParameter[141] /* eSAC1A.imSimpleLag.T_mod PARAM */ = (tmp6?1000.0:data->simulationInfo->realParameter[140] /* eSAC1A.imSimpleLag.T PARAM */);
  TRACE_POP
}

/*
equation index: 714
type: SIMPLE_ASSIGN
eSAC1A.imLeadLag.T2_dummy = if abs(eSAC1A.imLeadLag.T1 - eSAC1A.imLeadLag.T2) < 1e-15 then 1000.0 else eSAC1A.imLeadLag.T2
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_714(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,714};
  modelica_boolean tmp7;
  tmp7 = Less(fabs(data->simulationInfo->realParameter[122] /* eSAC1A.imLeadLag.T1 PARAM */ - data->simulationInfo->realParameter[123] /* eSAC1A.imLeadLag.T2 PARAM */),1e-15);
  data->simulationInfo->realParameter[124] /* eSAC1A.imLeadLag.T2_dummy PARAM */ = (tmp7?1000.0:data->simulationInfo->realParameter[123] /* eSAC1A.imLeadLag.T2 PARAM */);
  TRACE_POP
}

/*
equation index: 715
type: SIMPLE_ASSIGN
eSAC1A.imLeadLag.TF.a[1] = eSAC1A.imLeadLag.T2_dummy
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_715(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,715};
  data->simulationInfo->realParameter[125] /* eSAC1A.imLeadLag.TF.a[1] PARAM */ = data->simulationInfo->realParameter[124] /* eSAC1A.imLeadLag.T2_dummy PARAM */;
  TRACE_POP
}

/*
equation index: 716
type: SIMPLE_ASSIGN
eSAC1A.imLeadLag.TF.a_end = if eSAC1A.imLeadLag.TF.a[2] > 1e-13 * sqrt(eSAC1A.imLeadLag.TF.a[1] ^ 2.0 + eSAC1A.imLeadLag.TF.a[2] ^ 2.0) then eSAC1A.imLeadLag.TF.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_716(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,716};
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_boolean tmp10;
  tmp8 = data->simulationInfo->realParameter[125] /* eSAC1A.imLeadLag.TF.a[1] PARAM */;
  tmp9 = data->simulationInfo->realParameter[126] /* eSAC1A.imLeadLag.TF.a[2] PARAM */;
  tmp10 = Greater(data->simulationInfo->realParameter[126] /* eSAC1A.imLeadLag.TF.a[2] PARAM */,(1e-13) * (sqrt((tmp8 * tmp8) + (tmp9 * tmp9))));
  data->simulationInfo->realParameter[127] /* eSAC1A.imLeadLag.TF.a_end PARAM */ = (tmp10?data->simulationInfo->realParameter[126] /* eSAC1A.imLeadLag.TF.a[2] PARAM */:1.0);
  TRACE_POP
}

/*
equation index: 717
type: SIMPLE_ASSIGN
eSAC1A.imLeadLag.TF.b[1] = eSAC1A.imLeadLag.K * eSAC1A.imLeadLag.T1
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_717(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,717};
  data->simulationInfo->realParameter[128] /* eSAC1A.imLeadLag.TF.b[1] PARAM */ = (data->simulationInfo->realParameter[121] /* eSAC1A.imLeadLag.K PARAM */) * (data->simulationInfo->realParameter[122] /* eSAC1A.imLeadLag.T1 PARAM */);
  TRACE_POP
}

/*
equation index: 718
type: SIMPLE_ASSIGN
eSAC1A.imLeadLag.TF.bb[1] = eSAC1A.imLeadLag.TF.b[1]
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_718(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,718};
  data->simulationInfo->realParameter[130] /* eSAC1A.imLeadLag.TF.bb[1] PARAM */ = data->simulationInfo->realParameter[128] /* eSAC1A.imLeadLag.TF.b[1] PARAM */;
  TRACE_POP
}

/*
equation index: 719
type: SIMPLE_ASSIGN
eSAC1A.imLeadLag.TF.d = eSAC1A.imLeadLag.TF.bb[1] / eSAC1A.imLeadLag.TF.a[1]
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_719(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,719};
  data->simulationInfo->realParameter[132] /* eSAC1A.imLeadLag.TF.d PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[130] /* eSAC1A.imLeadLag.TF.bb[1] PARAM */,data->simulationInfo->realParameter[125] /* eSAC1A.imLeadLag.TF.a[1] PARAM */,"eSAC1A.imLeadLag.TF.a[1]",equationIndexes);
  TRACE_POP
}

/*
equation index: 720
type: SIMPLE_ASSIGN
eSAC1A.imLeadLag.TF.b[2] = eSAC1A.imLeadLag.K
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_720(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,720};
  data->simulationInfo->realParameter[129] /* eSAC1A.imLeadLag.TF.b[2] PARAM */ = data->simulationInfo->realParameter[121] /* eSAC1A.imLeadLag.K PARAM */;
  TRACE_POP
}

/*
equation index: 721
type: SIMPLE_ASSIGN
eSAC1A.imLeadLag.TF.bb[2] = eSAC1A.imLeadLag.TF.b[2]
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_721(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,721};
  data->simulationInfo->realParameter[131] /* eSAC1A.imLeadLag.TF.bb[2] PARAM */ = data->simulationInfo->realParameter[129] /* eSAC1A.imLeadLag.TF.b[2] PARAM */;
  TRACE_POP
}

/*
equation index: 727
type: SIMPLE_ASSIGN
gENROE.K4q = (gENROE.Xpq - gENROE.Xppq) / (gENROE.Xpq - gENROE.Xl)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_727(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,727};
  data->simulationInfo->realParameter[222] /* gENROE.K4q PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[257] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[256] /* gENROE.Xppq PARAM */,data->simulationInfo->realParameter[257] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[252] /* gENROE.Xl PARAM */,"gENROE.Xpq - gENROE.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 728
type: SIMPLE_ASSIGN
gENROE.K3q = (gENROE.Xppq - gENROE.Xl) / (gENROE.Xpq - gENROE.Xl)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_728(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,728};
  data->simulationInfo->realParameter[220] /* gENROE.K3q PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[256] /* gENROE.Xppq PARAM */ - data->simulationInfo->realParameter[252] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[257] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[252] /* gENROE.Xl PARAM */,"gENROE.Xpq - gENROE.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 729
type: SIMPLE_ASSIGN
gENROE.K4d = (gENROE.Xpd - gENROE.Xppd) / (gENROE.Xpd - gENROE.Xl)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_729(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,729};
  data->simulationInfo->realParameter[221] /* gENROE.K4d PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[253] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[255] /* gENROE.Xppd PARAM */,data->simulationInfo->realParameter[253] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[252] /* gENROE.Xl PARAM */,"gENROE.Xpd - gENROE.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 730
type: SIMPLE_ASSIGN
gENROE.K3d = (gENROE.Xppd - gENROE.Xl) / (gENROE.Xpd - gENROE.Xl)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_730(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,730};
  data->simulationInfo->realParameter[219] /* gENROE.K3d PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[255] /* gENROE.Xppd PARAM */ - data->simulationInfo->realParameter[252] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[253] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[252] /* gENROE.Xl PARAM */,"gENROE.Xpd - gENROE.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 731
type: SIMPLE_ASSIGN
gENROE.K2q = (gENROE.Xpq - gENROE.Xl) * (gENROE.Xppq - gENROE.Xl) / (gENROE.Xpq - gENROE.Xppq)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_731(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,731};
  data->simulationInfo->realParameter[218] /* gENROE.K2q PARAM */ = (data->simulationInfo->realParameter[257] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[252] /* gENROE.Xl PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[256] /* gENROE.Xppq PARAM */ - data->simulationInfo->realParameter[252] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[257] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[256] /* gENROE.Xppq PARAM */,"gENROE.Xpq - gENROE.Xppq",equationIndexes));
  TRACE_POP
}

/*
equation index: 732
type: SIMPLE_ASSIGN
gENROE.K1q = (gENROE.Xpq - gENROE.Xppq) * (gENROE.Xq - gENROE.Xpq) / (gENROE.Xpq - gENROE.Xl) ^ 2.0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_732(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,732};
  modelica_real tmp11;
  tmp11 = data->simulationInfo->realParameter[257] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[252] /* gENROE.Xl PARAM */;
  data->simulationInfo->realParameter[216] /* gENROE.K1q PARAM */ = (data->simulationInfo->realParameter[257] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[256] /* gENROE.Xppq PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[258] /* gENROE.Xq PARAM */ - data->simulationInfo->realParameter[257] /* gENROE.Xpq PARAM */,(tmp11 * tmp11),"(gENROE.Xpq - gENROE.Xl) ^ 2.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 733
type: SIMPLE_ASSIGN
gENROE.K2d = (gENROE.Xpd - gENROE.Xl) * (gENROE.Xppd - gENROE.Xl) / (gENROE.Xpd - gENROE.Xppd)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_733(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,733};
  data->simulationInfo->realParameter[217] /* gENROE.K2d PARAM */ = (data->simulationInfo->realParameter[253] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[252] /* gENROE.Xl PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[255] /* gENROE.Xppd PARAM */ - data->simulationInfo->realParameter[252] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[253] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[255] /* gENROE.Xppd PARAM */,"gENROE.Xpd - gENROE.Xppd",equationIndexes));
  TRACE_POP
}

/*
equation index: 734
type: SIMPLE_ASSIGN
gENROE.K1d = (gENROE.Xpd - gENROE.Xppd) * (gENROE.Xd - gENROE.Xpd) / (gENROE.Xpd - gENROE.Xl) ^ 2.0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_734(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,734};
  modelica_real tmp12;
  tmp12 = data->simulationInfo->realParameter[253] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[252] /* gENROE.Xl PARAM */;
  data->simulationInfo->realParameter[215] /* gENROE.K1d PARAM */ = (data->simulationInfo->realParameter[253] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[255] /* gENROE.Xppd PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[251] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[253] /* gENROE.Xpd PARAM */,(tmp12 * tmp12),"(gENROE.Xpd - gENROE.Xl) ^ 2.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 736
type: SIMPLE_ASSIGN
gENROE.PSIppq0 = gENROE.PSIpp0_dq.im
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_736(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,736};
  data->simulationInfo->realParameter[234] /* gENROE.PSIppq0 PARAM */ = data->simulationInfo->realParameter[231] /* gENROE.PSIpp0_dq.im PARAM */;
  TRACE_POP
}

/*
equation index: 737
type: SIMPLE_ASSIGN
gENROE.PSIq0 = gENROE.PSIppq0 - gENROE.Xppq * gENROE.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_737(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,737};
  data->simulationInfo->realParameter[235] /* gENROE.PSIq0 PARAM */ = data->simulationInfo->realParameter[234] /* gENROE.PSIppq0 PARAM */ - ((data->simulationInfo->realParameter[256] /* gENROE.Xppq PARAM */) * (data->simulationInfo->realParameter[274] /* gENROE.iq0 PARAM */));
  TRACE_POP
}

/*
equation index: 738
type: SIMPLE_ASSIGN
gENROE.PSId0 = gENROE.PSIppd0 - gENROE.Xppd * gENROE.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_738(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,738};
  data->simulationInfo->realParameter[226] /* gENROE.PSId0 PARAM */ = data->simulationInfo->realParameter[233] /* gENROE.PSIppd0 PARAM */ - ((data->simulationInfo->realParameter[255] /* gENROE.Xppd PARAM */) * (data->simulationInfo->realParameter[272] /* gENROE.id0 PARAM */));
  TRACE_POP
}

/*
equation index: 739
type: SIMPLE_ASSIGN
gENROE.PSIkq0 = ((gENROE.Xpq - gENROE.Xl) * gENROE.K3q * gENROE.iq0 - gENROE.PSIppq0) / (gENROE.K3q + gENROE.K4q)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_739(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,739};
  data->simulationInfo->realParameter[228] /* gENROE.PSIkq0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[257] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[252] /* gENROE.Xl PARAM */) * ((data->simulationInfo->realParameter[220] /* gENROE.K3q PARAM */) * (data->simulationInfo->realParameter[274] /* gENROE.iq0 PARAM */)) - data->simulationInfo->realParameter[234] /* gENROE.PSIppq0 PARAM */,data->simulationInfo->realParameter[220] /* gENROE.K3q PARAM */ + data->simulationInfo->realParameter[222] /* gENROE.K4q PARAM */,"gENROE.K3q + gENROE.K4q",equationIndexes);
  TRACE_POP
}

/*
equation index: 740
type: SIMPLE_ASSIGN
gENROE.PSIkd0 = (gENROE.PSIppd0 + (gENROE.Xl - gENROE.Xpd) * gENROE.K3d * gENROE.id0) / (gENROE.K3d + gENROE.K4d)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_740(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,740};
  data->simulationInfo->realParameter[227] /* gENROE.PSIkd0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[233] /* gENROE.PSIppd0 PARAM */ + (data->simulationInfo->realParameter[252] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[253] /* gENROE.Xpd PARAM */) * ((data->simulationInfo->realParameter[219] /* gENROE.K3d PARAM */) * (data->simulationInfo->realParameter[272] /* gENROE.id0 PARAM */)),data->simulationInfo->realParameter[219] /* gENROE.K3d PARAM */ + data->simulationInfo->realParameter[221] /* gENROE.K4d PARAM */,"gENROE.K3d + gENROE.K4d",equationIndexes);
  TRACE_POP
}

/*
equation index: 741
type: SIMPLE_ASSIGN
gENROE.Epd0 = gENROE.PSIkq0 + (gENROE.Xl - gENROE.Xpq) * gENROE.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_741(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,741};
  data->simulationInfo->realParameter[206] /* gENROE.Epd0 PARAM */ = data->simulationInfo->realParameter[228] /* gENROE.PSIkq0 PARAM */ + (data->simulationInfo->realParameter[252] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[257] /* gENROE.Xpq PARAM */) * (data->simulationInfo->realParameter[274] /* gENROE.iq0 PARAM */);
  TRACE_POP
}

/*
equation index: 742
type: SIMPLE_ASSIGN
gENROE.Epq0 = gENROE.PSIkd0 + (gENROE.Xpd - gENROE.Xl) * gENROE.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_742(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,742};
  data->simulationInfo->realParameter[207] /* gENROE.Epq0 PARAM */ = data->simulationInfo->realParameter[227] /* gENROE.PSIkd0 PARAM */ + (data->simulationInfo->realParameter[253] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[252] /* gENROE.Xl PARAM */) * (data->simulationInfo->realParameter[272] /* gENROE.id0 PARAM */);
  TRACE_POP
}

/*
equation index: 743
type: SIMPLE_ASSIGN
gENROE.uq0 = gENROE.PSIppd0 + (-gENROE.Xppd) * gENROE.id0 - gENROE.R_a * gENROE.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_743(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,743};
  data->simulationInfo->realParameter[280] /* gENROE.uq0 PARAM */ = data->simulationInfo->realParameter[233] /* gENROE.PSIppd0 PARAM */ + ((-data->simulationInfo->realParameter[255] /* gENROE.Xppd PARAM */)) * (data->simulationInfo->realParameter[272] /* gENROE.id0 PARAM */) - ((data->simulationInfo->realParameter[238] /* gENROE.R_a PARAM */) * (data->simulationInfo->realParameter[274] /* gENROE.iq0 PARAM */));
  TRACE_POP
}

/*
equation index: 744
type: SIMPLE_ASSIGN
gENROE.ud0 = gENROE.Xppq * gENROE.iq0 + (-gENROE.PSIppq0) - gENROE.R_a * gENROE.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_744(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,744};
  data->simulationInfo->realParameter[279] /* gENROE.ud0 PARAM */ = (data->simulationInfo->realParameter[256] /* gENROE.Xppq PARAM */) * (data->simulationInfo->realParameter[274] /* gENROE.iq0 PARAM */) + (-data->simulationInfo->realParameter[234] /* gENROE.PSIppq0 PARAM */) - ((data->simulationInfo->realParameter[238] /* gENROE.R_a PARAM */) * (data->simulationInfo->realParameter[272] /* gENROE.id0 PARAM */));
  TRACE_POP
}

/*
equation index: 747
type: SIMPLE_ASSIGN
gENROE.ang_PSIpp0 = Modelica.Math.atan3(gENROE.PSIpp0.im, gENROE.PSIpp0.re, 0.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_747(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,747};
  data->simulationInfo->realParameter[264] /* gENROE.ang_PSIpp0 PARAM */ = omc_Modelica_Math_atan3(threadData, data->simulationInfo->realParameter[229] /* gENROE.PSIpp0.im PARAM */, data->simulationInfo->realParameter[230] /* gENROE.PSIpp0.re PARAM */, 0.0);
  TRACE_POP
}

/*
equation index: 750
type: SIMPLE_ASSIGN
gENROE.ang_It = Modelica.Math.atan3(gENROE.It.im, gENROE.It.re, 0.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_750(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,750};
  data->simulationInfo->realParameter[263] /* gENROE.ang_It PARAM */ = omc_Modelica_Math_atan3(threadData, data->simulationInfo->realParameter[213] /* gENROE.It.im PARAM */, data->simulationInfo->realParameter[214] /* gENROE.It.re PARAM */, 0.0);
  TRACE_POP
}

/*
equation index: 751
type: SIMPLE_ASSIGN
gENROE.ang_PSIpp0andIt = gENROE.ang_PSIpp0 - gENROE.ang_It
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_751(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,751};
  data->simulationInfo->realParameter[265] /* gENROE.ang_PSIpp0andIt PARAM */ = data->simulationInfo->realParameter[264] /* gENROE.ang_PSIpp0 PARAM */ - data->simulationInfo->realParameter[263] /* gENROE.ang_It PARAM */;
  TRACE_POP
}

/*
equation index: 752
type: SIMPLE_ASSIGN
gENROE.a = gENROE.abs_PSIpp0 * (1.0 + gENROE.dsat * (gENROE.Xq - gENROE.Xl) / (gENROE.Xd - gENROE.Xl))
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_752(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,752};
  data->simulationInfo->realParameter[261] /* gENROE.a PARAM */ = (data->simulationInfo->realParameter[262] /* gENROE.abs_PSIpp0 PARAM */) * (1.0 + (data->simulationInfo->realParameter[269] /* gENROE.dsat PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[258] /* gENROE.Xq PARAM */ - data->simulationInfo->realParameter[252] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[251] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[252] /* gENROE.Xl PARAM */,"gENROE.Xd - gENROE.Xl",equationIndexes)));
  TRACE_POP
}

/*
equation index: 753
type: SIMPLE_ASSIGN
gENROE.b = (gENROE.It.re ^ 2.0 + gENROE.It.im ^ 2.0) ^ 0.5 * (gENROE.Xpp - gENROE.Xq)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_753(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,753};
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  tmp13 = data->simulationInfo->realParameter[214] /* gENROE.It.re PARAM */;
  tmp14 = data->simulationInfo->realParameter[213] /* gENROE.It.im PARAM */;
  tmp15 = (tmp13 * tmp13) + (tmp14 * tmp14);
  if(!(tmp15 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(gENROE.It.re ^ 2.0 + gENROE.It.im ^ 2.0) was %g should be >= 0", tmp15);
  }
  data->simulationInfo->realParameter[267] /* gENROE.b PARAM */ = (sqrt(tmp15)) * (data->simulationInfo->realParameter[254] /* gENROE.Xpp PARAM */ - data->simulationInfo->realParameter[258] /* gENROE.Xq PARAM */);
  TRACE_POP
}

/*
equation index: 754
type: SIMPLE_ASSIGN
gENROE.delta0 = atan(gENROE.b * cos(gENROE.ang_PSIpp0andIt) / (gENROE.b * sin(gENROE.ang_PSIpp0andIt) - gENROE.a)) + gENROE.ang_PSIpp0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_754(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,754};
  data->simulationInfo->realParameter[268] /* gENROE.delta0 PARAM */ = atan((data->simulationInfo->realParameter[267] /* gENROE.b PARAM */) * (DIVISION_SIM(cos(data->simulationInfo->realParameter[265] /* gENROE.ang_PSIpp0andIt PARAM */),(data->simulationInfo->realParameter[267] /* gENROE.b PARAM */) * (sin(data->simulationInfo->realParameter[265] /* gENROE.ang_PSIpp0andIt PARAM */)) - data->simulationInfo->realParameter[261] /* gENROE.a PARAM */,"gENROE.b * sin(gENROE.ang_PSIpp0andIt) - gENROE.a",equationIndexes))) + data->simulationInfo->realParameter[264] /* gENROE.ang_PSIpp0 PARAM */;
  TRACE_POP
}

/*
equation index: 763
type: SIMPLE_ASSIGN
gENROE.q0 = gENROE.Q_0 / gENROE.M_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_763(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,763};
  data->simulationInfo->realParameter[278] /* gENROE.q0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[237] /* gENROE.Q_0 PARAM */,data->simulationInfo->realParameter[223] /* gENROE.M_b PARAM */,"gENROE.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 764
type: SIMPLE_ASSIGN
gENROE.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_764(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,764};
  data->simulationInfo->realParameter[243] /* gENROE.S_b PARAM */ = data->simulationInfo->realParameter[35] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 765
type: SIMPLE_ASSIGN
gENROE.CoB = gENROE.M_b / gENROE.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_765(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,765};
  data->simulationInfo->realParameter[201] /* gENROE.CoB PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[223] /* gENROE.M_b PARAM */,data->simulationInfo->realParameter[243] /* gENROE.S_b PARAM */,"gENROE.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 766
type: SIMPLE_ASSIGN
gENROE.vr0 = gENROE.v_0 * cos(gENROE.angle_0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_766(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,766};
  data->simulationInfo->realParameter[283] /* gENROE.vr0 PARAM */ = (data->simulationInfo->realParameter[281] /* gENROE.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[266] /* gENROE.angle_0 PARAM */));
  TRACE_POP
}

/*
equation index: 767
type: SIMPLE_ASSIGN
gENROE.vi0 = gENROE.v_0 * sin(gENROE.angle_0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_767(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,767};
  data->simulationInfo->realParameter[282] /* gENROE.vi0 PARAM */ = (data->simulationInfo->realParameter[281] /* gENROE.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[266] /* gENROE.angle_0 PARAM */));
  TRACE_POP
}

/*
equation index: 768
type: SIMPLE_ASSIGN
gENROE.ii0 = gENROE.CoB * (gENROE.q0 * gENROE.vr0 - gENROE.p0 * gENROE.vi0) / (gENROE.vr0 ^ 2.0 + gENROE.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_768(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,768};
  modelica_real tmp16;
  modelica_real tmp17;
  tmp16 = data->simulationInfo->realParameter[283] /* gENROE.vr0 PARAM */;
  tmp17 = data->simulationInfo->realParameter[282] /* gENROE.vi0 PARAM */;
  data->simulationInfo->realParameter[273] /* gENROE.ii0 PARAM */ = (data->simulationInfo->realParameter[201] /* gENROE.CoB PARAM */) * (DIVISION_SIM((data->simulationInfo->realParameter[278] /* gENROE.q0 PARAM */) * (data->simulationInfo->realParameter[283] /* gENROE.vr0 PARAM */) - ((data->simulationInfo->realParameter[276] /* gENROE.p0 PARAM */) * (data->simulationInfo->realParameter[282] /* gENROE.vi0 PARAM */)),(tmp16 * tmp16) + (tmp17 * tmp17),"gENROE.vr0 ^ 2.0 + gENROE.vi0 ^ 2.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 769
type: SIMPLE_ASSIGN
gENROE.ir0 = (-gENROE.CoB) * (gENROE.p0 * gENROE.vr0 + gENROE.q0 * gENROE.vi0) / (gENROE.vr0 ^ 2.0 + gENROE.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_769(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,769};
  modelica_real tmp18;
  modelica_real tmp19;
  tmp18 = data->simulationInfo->realParameter[283] /* gENROE.vr0 PARAM */;
  tmp19 = data->simulationInfo->realParameter[282] /* gENROE.vi0 PARAM */;
  data->simulationInfo->realParameter[275] /* gENROE.ir0 PARAM */ = ((-data->simulationInfo->realParameter[201] /* gENROE.CoB PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[276] /* gENROE.p0 PARAM */) * (data->simulationInfo->realParameter[283] /* gENROE.vr0 PARAM */) + (data->simulationInfo->realParameter[278] /* gENROE.q0 PARAM */) * (data->simulationInfo->realParameter[282] /* gENROE.vi0 PARAM */),(tmp18 * tmp18) + (tmp19 * tmp19),"gENROE.vr0 ^ 2.0 + gENROE.vi0 ^ 2.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 770
type: SIMPLE_ASSIGN
gENROE.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_770(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,770};
  data->simulationInfo->realParameter[271] /* gENROE.fn PARAM */ = data->simulationInfo->realParameter[36] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 771
type: SIMPLE_ASSIGN
gENROE.w_b = 6.283185307179586 * gENROE.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_771(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,771};
  data->simulationInfo->realParameter[285] /* gENROE.w_b PARAM */ = (6.283185307179586) * (data->simulationInfo->realParameter[271] /* gENROE.fn PARAM */);
  TRACE_POP
}

/*
equation index: 772
type: SIMPLE_ASSIGN
SHUNT.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_772(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,772};
  data->simulationInfo->realParameter[33] /* SHUNT.fn PARAM */ = data->simulationInfo->realParameter[36] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 773
type: SIMPLE_ASSIGN
SHUNT.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_773(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,773};
  data->simulationInfo->realParameter[30] /* SHUNT.S_b PARAM */ = data->simulationInfo->realParameter[35] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 774
type: SIMPLE_ASSIGN
pwLine2.Z.im = pwLine2.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_774(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,774};
  data->simulationInfo->realParameter[323] /* pwLine2.Z.im PARAM */ = data->simulationInfo->realParameter[320] /* pwLine2.X PARAM */;
  TRACE_POP
}

/*
equation index: 775
type: SIMPLE_ASSIGN
pwLine2.Z.re = pwLine2.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_775(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,775};
  data->simulationInfo->realParameter[324] /* pwLine2.Z.re PARAM */ = data->simulationInfo->realParameter[318] /* pwLine2.R PARAM */;
  TRACE_POP
}

/*
equation index: 776
type: SIMPLE_ASSIGN
pwLine2.Y.im = pwLine2.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_776(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,776};
  data->simulationInfo->realParameter[321] /* pwLine2.Y.im PARAM */ = data->simulationInfo->realParameter[316] /* pwLine2.B PARAM */;
  TRACE_POP
}

/*
equation index: 777
type: SIMPLE_ASSIGN
pwLine2.Y.re = pwLine2.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_777(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,777};
  data->simulationInfo->realParameter[322] /* pwLine2.Y.re PARAM */ = data->simulationInfo->realParameter[317] /* pwLine2.G PARAM */;
  TRACE_POP
}

/*
equation index: 779
type: SIMPLE_ASSIGN
pwLine2.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_779(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,779};
  data->simulationInfo->realParameter[319] /* pwLine2.S_b PARAM */ = data->simulationInfo->realParameter[35] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 780
type: SIMPLE_ASSIGN
pwLine1.Z.im = pwLine1.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_780(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,780};
  data->simulationInfo->realParameter[312] /* pwLine1.Z.im PARAM */ = data->simulationInfo->realParameter[309] /* pwLine1.X PARAM */;
  TRACE_POP
}

/*
equation index: 781
type: SIMPLE_ASSIGN
pwLine1.Z.re = pwLine1.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_781(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,781};
  data->simulationInfo->realParameter[313] /* pwLine1.Z.re PARAM */ = data->simulationInfo->realParameter[307] /* pwLine1.R PARAM */;
  TRACE_POP
}

/*
equation index: 782
type: SIMPLE_ASSIGN
pwLine1.Y.im = pwLine1.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_782(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,782};
  data->simulationInfo->realParameter[310] /* pwLine1.Y.im PARAM */ = data->simulationInfo->realParameter[305] /* pwLine1.B PARAM */;
  TRACE_POP
}

/*
equation index: 783
type: SIMPLE_ASSIGN
pwLine1.Y.re = pwLine1.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_783(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,783};
  data->simulationInfo->realParameter[311] /* pwLine1.Y.re PARAM */ = data->simulationInfo->realParameter[306] /* pwLine1.G PARAM */;
  TRACE_POP
}

/*
equation index: 785
type: SIMPLE_ASSIGN
pwLine1.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_785(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,785};
  data->simulationInfo->realParameter[308] /* pwLine1.S_b PARAM */ = data->simulationInfo->realParameter[35] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 786
type: SIMPLE_ASSIGN
FAULT.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_786(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,786};
  data->simulationInfo->realParameter[5] /* FAULT.fn PARAM */ = data->simulationInfo->realParameter[36] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 787
type: SIMPLE_ASSIGN
FAULT.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_787(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,787};
  data->simulationInfo->realParameter[2] /* FAULT.S_b PARAM */ = data->simulationInfo->realParameter[35] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 788
type: SIMPLE_ASSIGN
GEN2.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_788(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,788};
  data->simulationInfo->realParameter[19] /* GEN2.fn PARAM */ = data->simulationInfo->realParameter[36] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 789
type: SIMPLE_ASSIGN
GEN2.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_789(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,789};
  data->simulationInfo->realParameter[16] /* GEN2.S_b PARAM */ = data->simulationInfo->realParameter[35] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 790
type: SIMPLE_ASSIGN
LOAD.angle_0 = constantLoad.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_790(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,790};
  data->simulationInfo->realParameter[25] /* LOAD.angle_0 PARAM */ = data->simulationInfo->realParameter[60] /* constantLoad.angle_0 PARAM */;
  TRACE_POP
}

/*
equation index: 791
type: SIMPLE_ASSIGN
LOAD.v_0 = constantLoad.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_791(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,791};
  data->simulationInfo->realParameter[27] /* LOAD.v_0 PARAM */ = data->simulationInfo->realParameter[74] /* constantLoad.v_0 PARAM */;
  TRACE_POP
}

/*
equation index: 792
type: SIMPLE_ASSIGN
LOAD.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_792(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,792};
  data->simulationInfo->realParameter[26] /* LOAD.fn PARAM */ = data->simulationInfo->realParameter[36] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 793
type: SIMPLE_ASSIGN
LOAD.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_793(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,793};
  data->simulationInfo->realParameter[23] /* LOAD.S_b PARAM */ = data->simulationInfo->realParameter[35] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 794
type: SIMPLE_ASSIGN
GEN1.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_794(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,794};
  data->simulationInfo->realParameter[12] /* GEN1.fn PARAM */ = data->simulationInfo->realParameter[36] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 795
type: SIMPLE_ASSIGN
GEN1.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_795(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,795};
  data->simulationInfo->realParameter[9] /* GEN1.S_b PARAM */ = data->simulationInfo->realParameter[35] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 796
type: SIMPLE_ASSIGN
pwFault.ground = abs(pwFault.R) < 1e-15 and abs(pwFault.X) < 1e-15
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_796(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,796};
  modelica_boolean tmp20;
  modelica_boolean tmp21;
  tmp20 = Less(fabs(data->simulationInfo->realParameter[290] /* pwFault.R PARAM */),1e-15);
  tmp21 = Less(fabs(data->simulationInfo->realParameter[291] /* pwFault.X PARAM */),1e-15);
  data->simulationInfo->booleanParameter[79] /* pwFault.ground PARAM */ = (tmp20 && tmp21);
  TRACE_POP
}

/*
equation index: 797
type: SIMPLE_ASSIGN
constantLoad.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_797(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,797};
  data->simulationInfo->realParameter[47] /* constantLoad.S_b PARAM */ = data->simulationInfo->realParameter[35] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 798
type: SIMPLE_ASSIGN
constantLoad.p0 = (constantLoad.S_i.re * constantLoad.v_0 + constantLoad.S_y.re * constantLoad.v_0 ^ 2.0 + constantLoad.S_p.re) / constantLoad.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_798(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,798};
  modelica_real tmp22;
  tmp22 = data->simulationInfo->realParameter[74] /* constantLoad.v_0 PARAM */;
  data->simulationInfo->realParameter[71] /* constantLoad.p0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[49] /* constantLoad.S_i.re PARAM */) * (data->simulationInfo->realParameter[74] /* constantLoad.v_0 PARAM */) + (data->simulationInfo->realParameter[53] /* constantLoad.S_y.re PARAM */) * ((tmp22 * tmp22)) + data->simulationInfo->realParameter[51] /* constantLoad.S_p.re PARAM */,data->simulationInfo->realParameter[47] /* constantLoad.S_b PARAM */,"constantLoad.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 799
type: SIMPLE_ASSIGN
constantLoad.q0 = (constantLoad.S_i.im * constantLoad.v_0 + constantLoad.S_y.im * constantLoad.v_0 ^ 2.0 + constantLoad.S_p.im) / constantLoad.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_799(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,799};
  modelica_real tmp23;
  tmp23 = data->simulationInfo->realParameter[74] /* constantLoad.v_0 PARAM */;
  data->simulationInfo->realParameter[72] /* constantLoad.q0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[48] /* constantLoad.S_i.im PARAM */) * (data->simulationInfo->realParameter[74] /* constantLoad.v_0 PARAM */) + (data->simulationInfo->realParameter[52] /* constantLoad.S_y.im PARAM */) * ((tmp23 * tmp23)) + data->simulationInfo->realParameter[50] /* constantLoad.S_p.im PARAM */,data->simulationInfo->realParameter[47] /* constantLoad.S_b PARAM */,"constantLoad.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 800
type: SIMPLE_ASSIGN
constantLoad.PF = if constantLoad.q0 <= 1e-15 then 1.0 else constantLoad.p0 / constantLoad.q0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_800(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,800};
  modelica_boolean tmp24;
  tmp24 = LessEq(data->simulationInfo->realParameter[72] /* constantLoad.q0 PARAM */,1e-15);
  data->simulationInfo->realParameter[37] /* constantLoad.PF PARAM */ = (tmp24?1.0:DIVISION_SIM(data->simulationInfo->realParameter[71] /* constantLoad.p0 PARAM */,data->simulationInfo->realParameter[72] /* constantLoad.q0 PARAM */,"constantLoad.q0",equationIndexes));
  TRACE_POP
}

/*
equation index: 801
type: SIMPLE_ASSIGN
constantLoad.d_Q = (constantLoad.p0 + constantLoad.d_P) / constantLoad.PF - constantLoad.q0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_801(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,801};
  data->simulationInfo->realParameter[66] /* constantLoad.d_Q PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[71] /* constantLoad.p0 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_P PARAM */,data->simulationInfo->realParameter[37] /* constantLoad.PF PARAM */,"constantLoad.PF",equationIndexes) - data->simulationInfo->realParameter[72] /* constantLoad.q0 PARAM */;
  TRACE_POP
}

/*
equation index: 814
type: SIMPLE_ASSIGN
constantLoad.vr0 = constantLoad.v_0 * cos(constantLoad.angle_0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_814(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,814};
  data->simulationInfo->realParameter[76] /* constantLoad.vr0 PARAM */ = (data->simulationInfo->realParameter[74] /* constantLoad.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[60] /* constantLoad.angle_0 PARAM */));
  TRACE_POP
}

/*
equation index: 815
type: SIMPLE_ASSIGN
constantLoad.vi0 = constantLoad.v_0 * sin(constantLoad.angle_0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_815(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,815};
  data->simulationInfo->realParameter[75] /* constantLoad.vi0 PARAM */ = (data->simulationInfo->realParameter[74] /* constantLoad.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[60] /* constantLoad.angle_0 PARAM */));
  TRACE_POP
}

/*
equation index: 816
type: SIMPLE_ASSIGN
constantLoad.ii0 = (constantLoad.p0 * constantLoad.vi0 - constantLoad.q0 * constantLoad.vr0) / (constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_816(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,816};
  modelica_real tmp25;
  modelica_real tmp26;
  tmp25 = data->simulationInfo->realParameter[76] /* constantLoad.vr0 PARAM */;
  tmp26 = data->simulationInfo->realParameter[75] /* constantLoad.vi0 PARAM */;
  data->simulationInfo->realParameter[69] /* constantLoad.ii0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[71] /* constantLoad.p0 PARAM */) * (data->simulationInfo->realParameter[75] /* constantLoad.vi0 PARAM */) - ((data->simulationInfo->realParameter[72] /* constantLoad.q0 PARAM */) * (data->simulationInfo->realParameter[76] /* constantLoad.vr0 PARAM */)),(tmp25 * tmp25) + (tmp26 * tmp26),"constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 817
type: SIMPLE_ASSIGN
constantLoad.ir0 = (constantLoad.p0 * constantLoad.vr0 + constantLoad.q0 * constantLoad.vi0) / (constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_817(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,817};
  modelica_real tmp27;
  modelica_real tmp28;
  tmp27 = data->simulationInfo->realParameter[76] /* constantLoad.vr0 PARAM */;
  tmp28 = data->simulationInfo->realParameter[75] /* constantLoad.vi0 PARAM */;
  data->simulationInfo->realParameter[70] /* constantLoad.ir0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[71] /* constantLoad.p0 PARAM */) * (data->simulationInfo->realParameter[76] /* constantLoad.vr0 PARAM */) + (data->simulationInfo->realParameter[72] /* constantLoad.q0 PARAM */) * (data->simulationInfo->realParameter[75] /* constantLoad.vi0 PARAM */),(tmp27 * tmp27) + (tmp28 * tmp28),"constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 819
type: SIMPLE_ASSIGN
constantLoad.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_819(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,819};
  data->simulationInfo->realParameter[68] /* constantLoad.fn PARAM */ = data->simulationInfo->realParameter[36] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 820
type: SIMPLE_ASSIGN
gENCLS.vr0 = gENCLS.v_0 * cos(gENCLS.angle_0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_820(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,820};
  data->simulationInfo->realParameter[200] /* gENCLS.vr0 PARAM */ = (data->simulationInfo->realParameter[195] /* gENCLS.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[186] /* gENCLS.angle_0 PARAM */));
  TRACE_POP
}

/*
equation index: 821
type: SIMPLE_ASSIGN
gENCLS.vi0 = gENCLS.v_0 * sin(gENCLS.angle_0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_821(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,821};
  data->simulationInfo->realParameter[198] /* gENCLS.vi0 PARAM */ = (data->simulationInfo->realParameter[195] /* gENCLS.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[186] /* gENCLS.angle_0 PARAM */));
  TRACE_POP
}

/*
equation index: 822
type: SIMPLE_ASSIGN
gENCLS.p0 = gENCLS.P_0 / gENCLS.M_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_822(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,822};
  data->simulationInfo->realParameter[193] /* gENCLS.p0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[180] /* gENCLS.P_0 PARAM */,data->simulationInfo->realParameter[179] /* gENCLS.M_b PARAM */,"gENCLS.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 823
type: SIMPLE_ASSIGN
gENCLS.q0 = gENCLS.Q_0 / gENCLS.M_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_823(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,823};
  data->simulationInfo->realParameter[194] /* gENCLS.q0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[181] /* gENCLS.Q_0 PARAM */,data->simulationInfo->realParameter[179] /* gENCLS.M_b PARAM */,"gENCLS.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 824
type: SIMPLE_ASSIGN
gENCLS.ir0 = (gENCLS.p0 * gENCLS.vr0 + gENCLS.q0 * gENCLS.vi0) / (gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_824(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,824};
  modelica_real tmp29;
  modelica_real tmp30;
  tmp29 = data->simulationInfo->realParameter[200] /* gENCLS.vr0 PARAM */;
  tmp30 = data->simulationInfo->realParameter[198] /* gENCLS.vi0 PARAM */;
  data->simulationInfo->realParameter[192] /* gENCLS.ir0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[193] /* gENCLS.p0 PARAM */) * (data->simulationInfo->realParameter[200] /* gENCLS.vr0 PARAM */) + (data->simulationInfo->realParameter[194] /* gENCLS.q0 PARAM */) * (data->simulationInfo->realParameter[198] /* gENCLS.vi0 PARAM */),(tmp29 * tmp29) + (tmp30 * tmp30),"gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 825
type: SIMPLE_ASSIGN
gENCLS.ii0 = (gENCLS.p0 * gENCLS.vi0 - gENCLS.q0 * gENCLS.vr0) / (gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_825(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,825};
  modelica_real tmp31;
  modelica_real tmp32;
  tmp31 = data->simulationInfo->realParameter[200] /* gENCLS.vr0 PARAM */;
  tmp32 = data->simulationInfo->realParameter[198] /* gENCLS.vi0 PARAM */;
  data->simulationInfo->realParameter[190] /* gENCLS.ii0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[193] /* gENCLS.p0 PARAM */) * (data->simulationInfo->realParameter[198] /* gENCLS.vi0 PARAM */) - ((data->simulationInfo->realParameter[194] /* gENCLS.q0 PARAM */) * (data->simulationInfo->realParameter[200] /* gENCLS.vr0 PARAM */)),(tmp31 * tmp31) + (tmp32 * tmp32),"gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 826
type: SIMPLE_ASSIGN
gENCLS.delta0 = atan2(gENCLS.vi0 + gENCLS.R_a * gENCLS.ii0 + gENCLS.X_d * gENCLS.ir0, gENCLS.vr0 + gENCLS.R_a * gENCLS.ir0 - gENCLS.X_d * gENCLS.ii0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_826(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,826};
  data->simulationInfo->realParameter[187] /* gENCLS.delta0 PARAM */ = atan2(data->simulationInfo->realParameter[198] /* gENCLS.vi0 PARAM */ + (data->simulationInfo->realParameter[182] /* gENCLS.R_a PARAM */) * (data->simulationInfo->realParameter[190] /* gENCLS.ii0 PARAM */) + (data->simulationInfo->realParameter[185] /* gENCLS.X_d PARAM */) * (data->simulationInfo->realParameter[192] /* gENCLS.ir0 PARAM */), data->simulationInfo->realParameter[200] /* gENCLS.vr0 PARAM */ + (data->simulationInfo->realParameter[182] /* gENCLS.R_a PARAM */) * (data->simulationInfo->realParameter[192] /* gENCLS.ir0 PARAM */) - ((data->simulationInfo->realParameter[185] /* gENCLS.X_d PARAM */) * (data->simulationInfo->realParameter[190] /* gENCLS.ii0 PARAM */)));
  TRACE_POP
}

/*
equation index: 827
type: SIMPLE_ASSIGN
gENCLS.vq0 = gENCLS.vr0 * sin(1.570796326794897 - gENCLS.delta0) + gENCLS.vi0 * cos(1.570796326794897 - gENCLS.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_827(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,827};
  data->simulationInfo->realParameter[199] /* gENCLS.vq0 PARAM */ = (data->simulationInfo->realParameter[200] /* gENCLS.vr0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[187] /* gENCLS.delta0 PARAM */)) + (data->simulationInfo->realParameter[198] /* gENCLS.vi0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[187] /* gENCLS.delta0 PARAM */));
  TRACE_POP
}

/*
equation index: 828
type: SIMPLE_ASSIGN
gENCLS.id0 = gENCLS.ir0 * cos(1.570796326794897 - gENCLS.delta0) - gENCLS.ii0 * sin(1.570796326794897 - gENCLS.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_828(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,828};
  data->simulationInfo->realParameter[189] /* gENCLS.id0 PARAM */ = (data->simulationInfo->realParameter[192] /* gENCLS.ir0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[187] /* gENCLS.delta0 PARAM */)) - ((data->simulationInfo->realParameter[190] /* gENCLS.ii0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[187] /* gENCLS.delta0 PARAM */)));
  TRACE_POP
}

/*
equation index: 829
type: SIMPLE_ASSIGN
gENCLS.iq0 = gENCLS.ir0 * sin(1.570796326794897 - gENCLS.delta0) + gENCLS.ii0 * cos(1.570796326794897 - gENCLS.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_829(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,829};
  data->simulationInfo->realParameter[191] /* gENCLS.iq0 PARAM */ = (data->simulationInfo->realParameter[192] /* gENCLS.ir0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[187] /* gENCLS.delta0 PARAM */)) + (data->simulationInfo->realParameter[190] /* gENCLS.ii0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[187] /* gENCLS.delta0 PARAM */));
  TRACE_POP
}

/*
equation index: 830
type: SIMPLE_ASSIGN
gENCLS.vf0 = gENCLS.vq0 + gENCLS.R_a * gENCLS.iq0 + gENCLS.X_d * gENCLS.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_830(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,830};
  data->simulationInfo->realParameter[197] /* gENCLS.vf0 PARAM */ = data->simulationInfo->realParameter[199] /* gENCLS.vq0 PARAM */ + (data->simulationInfo->realParameter[182] /* gENCLS.R_a PARAM */) * (data->simulationInfo->realParameter[191] /* gENCLS.iq0 PARAM */) + (data->simulationInfo->realParameter[185] /* gENCLS.X_d PARAM */) * (data->simulationInfo->realParameter[189] /* gENCLS.id0 PARAM */);
  TRACE_POP
}

/*
equation index: 831
type: SIMPLE_ASSIGN
gENCLS.vd0 = gENCLS.vr0 * cos(1.570796326794897 - gENCLS.delta0) - gENCLS.vi0 * sin(1.570796326794897 - gENCLS.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_831(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,831};
  data->simulationInfo->realParameter[196] /* gENCLS.vd0 PARAM */ = (data->simulationInfo->realParameter[200] /* gENCLS.vr0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[187] /* gENCLS.delta0 PARAM */)) - ((data->simulationInfo->realParameter[198] /* gENCLS.vi0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[187] /* gENCLS.delta0 PARAM */)));
  TRACE_POP
}

/*
equation index: 832
type: SIMPLE_ASSIGN
gENCLS.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_832(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,832};
  data->simulationInfo->realParameter[183] /* gENCLS.S_b PARAM */ = data->simulationInfo->realParameter[35] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 833
type: SIMPLE_ASSIGN
gENCLS.CoB = gENCLS.M_b / gENCLS.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_833(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,833};
  data->simulationInfo->realParameter[176] /* gENCLS.CoB PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[179] /* gENCLS.M_b PARAM */,data->simulationInfo->realParameter[183] /* gENCLS.S_b PARAM */,"gENCLS.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 835
type: SIMPLE_ASSIGN
gENCLS.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_835(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,835};
  data->simulationInfo->realParameter[188] /* gENCLS.fn PARAM */ = data->simulationInfo->realParameter[36] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 836
type: SIMPLE_ASSIGN
pwLine4.Z.im = pwLine4.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_836(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,836};
  data->simulationInfo->realParameter[345] /* pwLine4.Z.im PARAM */ = data->simulationInfo->realParameter[342] /* pwLine4.X PARAM */;
  TRACE_POP
}

/*
equation index: 837
type: SIMPLE_ASSIGN
pwLine4.Z.re = pwLine4.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_837(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,837};
  data->simulationInfo->realParameter[346] /* pwLine4.Z.re PARAM */ = data->simulationInfo->realParameter[340] /* pwLine4.R PARAM */;
  TRACE_POP
}

/*
equation index: 838
type: SIMPLE_ASSIGN
pwLine4.Y.im = pwLine4.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_838(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,838};
  data->simulationInfo->realParameter[343] /* pwLine4.Y.im PARAM */ = data->simulationInfo->realParameter[338] /* pwLine4.B PARAM */;
  TRACE_POP
}

/*
equation index: 839
type: SIMPLE_ASSIGN
pwLine4.Y.re = pwLine4.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_839(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,839};
  data->simulationInfo->realParameter[344] /* pwLine4.Y.re PARAM */ = data->simulationInfo->realParameter[339] /* pwLine4.G PARAM */;
  TRACE_POP
}

/*
equation index: 841
type: SIMPLE_ASSIGN
pwLine4.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_841(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,841};
  data->simulationInfo->realParameter[341] /* pwLine4.S_b PARAM */ = data->simulationInfo->realParameter[35] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 842
type: SIMPLE_ASSIGN
pwLine3.Z.im = pwLine3.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_842(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,842};
  data->simulationInfo->realParameter[334] /* pwLine3.Z.im PARAM */ = data->simulationInfo->realParameter[331] /* pwLine3.X PARAM */;
  TRACE_POP
}

/*
equation index: 843
type: SIMPLE_ASSIGN
pwLine3.Z.re = pwLine3.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_843(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,843};
  data->simulationInfo->realParameter[335] /* pwLine3.Z.re PARAM */ = data->simulationInfo->realParameter[329] /* pwLine3.R PARAM */;
  TRACE_POP
}

/*
equation index: 844
type: SIMPLE_ASSIGN
pwLine3.Y.im = pwLine3.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_844(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,844};
  data->simulationInfo->realParameter[332] /* pwLine3.Y.im PARAM */ = data->simulationInfo->realParameter[327] /* pwLine3.B PARAM */;
  TRACE_POP
}

/*
equation index: 845
type: SIMPLE_ASSIGN
pwLine3.Y.re = pwLine3.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_845(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,845};
  data->simulationInfo->realParameter[333] /* pwLine3.Y.re PARAM */ = data->simulationInfo->realParameter[328] /* pwLine3.G PARAM */;
  TRACE_POP
}

/*
equation index: 847
type: SIMPLE_ASSIGN
pwLine3.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_847(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,847};
  data->simulationInfo->realParameter[330] /* pwLine3.S_b PARAM */ = data->simulationInfo->realParameter[35] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 848
type: SIMPLE_ASSIGN
pwLine.Z.im = pwLine.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_848(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,848};
  data->simulationInfo->realParameter[301] /* pwLine.Z.im PARAM */ = data->simulationInfo->realParameter[298] /* pwLine.X PARAM */;
  TRACE_POP
}

/*
equation index: 849
type: SIMPLE_ASSIGN
pwLine.Z.re = pwLine.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_849(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,849};
  data->simulationInfo->realParameter[302] /* pwLine.Z.re PARAM */ = data->simulationInfo->realParameter[296] /* pwLine.R PARAM */;
  TRACE_POP
}

/*
equation index: 850
type: SIMPLE_ASSIGN
pwLine.Y.im = pwLine.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_850(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,850};
  data->simulationInfo->realParameter[299] /* pwLine.Y.im PARAM */ = data->simulationInfo->realParameter[294] /* pwLine.B PARAM */;
  TRACE_POP
}

/*
equation index: 851
type: SIMPLE_ASSIGN
pwLine.Y.re = pwLine.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_851(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,851};
  data->simulationInfo->realParameter[300] /* pwLine.Y.re PARAM */ = data->simulationInfo->realParameter[295] /* pwLine.G PARAM */;
  TRACE_POP
}

/*
equation index: 853
type: SIMPLE_ASSIGN
pwLine.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_853(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,853};
  data->simulationInfo->realParameter[297] /* pwLine.S_b PARAM */ = data->simulationInfo->realParameter[35] /* SysData.S_b PARAM */;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_12(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_11(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_10(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_9(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_8(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_7(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_6(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_5(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_4(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_3(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_2(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_1(DATA *data, threadData_t *threadData);


/*
equation index: 866
type: ALGORITHM

  assert(eSAC1A.rotatingExciterWithDemagnetization.sISO.initType >= Modelica.Blocks.Types.Init.NoInit and eSAC1A.rotatingExciterWithDemagnetization.sISO.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eSAC1A.rotatingExciterWithDemagnetization.sISO.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(eSAC1A.rotatingExciterWithDemagnetization.sISO.initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_866(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,866};
  modelica_boolean tmp33;
  modelica_boolean tmp34;
  static const MMC_DEFSTRINGLIT(tmp35,188,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eSAC1A.rotatingExciterWithDemagnetization.sISO.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp36;
  static int tmp37 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp37)
  {
    tmp33 = GreaterEq(data->simulationInfo->integerParameter[7] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.initType PARAM */,1);
    tmp34 = LessEq(data->simulationInfo->integerParameter[7] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.initType PARAM */,4);
    if(!(tmp33 && tmp34))
    {
      tmp36 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[7] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.initType PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp35),tmp36);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.3/Blocks/Continuous.mo",149,5,151,64,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neSAC1A.rotatingExciterWithDemagnetization.sISO.initType >= Modelica.Blocks.Types.Init.NoInit and eSAC1A.rotatingExciterWithDemagnetization.sISO.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp37 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 867
type: ALGORITHM

  assert(eSAC1A.derivative.initType >= Modelica.Blocks.Types.Init.NoInit and eSAC1A.derivative.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eSAC1A.derivative.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(eSAC1A.derivative.initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_867(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,867};
  modelica_boolean tmp38;
  modelica_boolean tmp39;
  static const MMC_DEFSTRINGLIT(tmp40,159,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eSAC1A.derivative.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp41;
  static int tmp42 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp42)
  {
    tmp38 = GreaterEq(data->simulationInfo->integerParameter[1] /* eSAC1A.derivative.initType PARAM */,1);
    tmp39 = LessEq(data->simulationInfo->integerParameter[1] /* eSAC1A.derivative.initType PARAM */,4);
    if(!(tmp38 && tmp39))
    {
      tmp41 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[1] /* eSAC1A.derivative.initType PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp40),tmp41);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.3/Blocks/Continuous.mo",300,5,303,40,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neSAC1A.derivative.initType >= Modelica.Blocks.Types.Init.NoInit and eSAC1A.derivative.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp42 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 868
type: ALGORITHM

  assert(eSAC1A.derivative.T >= 1e-60, "Variable violating min constraint: 1e-60 <= eSAC1A.derivative.T, has value: " + String(eSAC1A.derivative.T, "g"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_868(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,868};
  modelica_boolean tmp43;
  static const MMC_DEFSTRINGLIT(tmp44,76,"Variable violating min constraint: 1e-60 <= eSAC1A.derivative.T, has value: ");
  modelica_string tmp45;
  static int tmp46 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp46)
  {
    tmp43 = GreaterEq(data->simulationInfo->realParameter[116] /* eSAC1A.derivative.T PARAM */,1e-60);
    if(!tmp43)
    {
      tmp45 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[116] /* eSAC1A.derivative.T PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp44),tmp45);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.3/Blocks/Continuous.mo",298,5,299,69,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neSAC1A.derivative.T >= 1e-60", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp46 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 869
type: ALGORITHM

  assert(eSAC1A.limiter1.homotopyType >= Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy and eSAC1A.limiter1.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit, "Variable violating min/max constraint: Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy <= eSAC1A.limiter1.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit, has value: " + String(eSAC1A.limiter1.homotopyType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_869(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,869};
  modelica_boolean tmp47;
  modelica_boolean tmp48;
  static const MMC_DEFSTRINGLIT(tmp49,184,"Variable violating min/max constraint: Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy <= eSAC1A.limiter1.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit, has value: ");
  modelica_string tmp50;
  static int tmp51 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp51)
  {
    tmp47 = GreaterEq(data->simulationInfo->integerParameter[6] /* eSAC1A.limiter1.homotopyType PARAM */,1);
    tmp48 = LessEq(data->simulationInfo->integerParameter[6] /* eSAC1A.limiter1.homotopyType PARAM */,4);
    if(!(tmp47 && tmp48))
    {
      tmp50 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[6] /* eSAC1A.limiter1.homotopyType PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp49),tmp50);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.3/Blocks/Nonlinear.mo",12,9,13,69,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neSAC1A.limiter1.homotopyType >= Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy and eSAC1A.limiter1.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp51 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 870
type: ALGORITHM

  assert(eSAC1A.imLeadLag.TF.initType >= Modelica.Blocks.Types.Init.NoInit and eSAC1A.imLeadLag.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eSAC1A.imLeadLag.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(eSAC1A.imLeadLag.TF.initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_870(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,870};
  modelica_boolean tmp52;
  modelica_boolean tmp53;
  static const MMC_DEFSTRINGLIT(tmp54,161,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eSAC1A.imLeadLag.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp55;
  static int tmp56 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp56)
  {
    tmp52 = GreaterEq(data->simulationInfo->integerParameter[2] /* eSAC1A.imLeadLag.TF.initType PARAM */,1);
    tmp53 = LessEq(data->simulationInfo->integerParameter[2] /* eSAC1A.imLeadLag.TF.initType PARAM */,4);
    if(!(tmp52 && tmp53))
    {
      tmp55 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[2] /* eSAC1A.imLeadLag.TF.initType PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp54),tmp55);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.3/Blocks/Continuous.mo",1279,5,1282,31,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neSAC1A.imLeadLag.TF.initType >= Modelica.Blocks.Types.Init.NoInit and eSAC1A.imLeadLag.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp56 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 871
type: ALGORITHM

  assert(gENROE.w0 >= -0.999999999999999, "Variable violating min constraint: -0.999999999999999 <= gENROE.w0, has value: " + String(gENROE.w0, "g"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_871(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,871};
  modelica_boolean tmp57;
  static const MMC_DEFSTRINGLIT(tmp58,79,"Variable violating min constraint: -0.999999999999999 <= gENROE.w0, has value: ");
  modelica_string tmp59;
  static int tmp60 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp60)
  {
    tmp57 = GreaterEq(data->simulationInfo->realParameter[284] /* gENROE.w0 PARAM */,-0.999999999999999);
    if(!tmp57)
    {
      tmp59 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[284] /* gENROE.w0 PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp58),tmp59);
      {
        FILE_INFO info = {"/home/manuelnvro/dev/Gitted/DockerTraining/OpenIPSLVerification/VerificationRoutines/OpenIPSL/OpenIPSL/Electrical/Machines/PSSE/BaseClasses/baseMachine.mo",50,3,51,48,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ngENROE.w0 >= -0.999999999999999", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp60 = 1;
    }
  }
  TRACE_POP
}
OMC_DISABLE_OPT
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_updateBoundParameters_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_645(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_648(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_649(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_651(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_653(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_654(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_655(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_656(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_657(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_658(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_659(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_660(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_661(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_662(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_663(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_664(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_666(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_667(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_668(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_669(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_670(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_671(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_672(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_673(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_674(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_675(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_676(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_677(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_678(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_679(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_680(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_681(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_687(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_688(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_689(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_690(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_691(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_692(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_693(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_694(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_695(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_696(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_697(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_698(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_699(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_702(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_704(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_705(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_706(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_707(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_711(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_712(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_713(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_714(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_715(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_716(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_717(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_718(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_719(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_720(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_721(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_727(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_728(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_729(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_730(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_731(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_732(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_733(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_734(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_736(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_737(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_738(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_739(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_740(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_741(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_742(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_743(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_744(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_747(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_750(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_751(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_752(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_753(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_754(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_763(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_764(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_765(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_766(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_767(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_768(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_769(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_770(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_771(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_772(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_773(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_774(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_775(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_776(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_777(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_779(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_780(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_781(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_782(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_783(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_785(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_786(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_787(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_788(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_789(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_790(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_791(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_792(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_793(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_794(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_795(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_796(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_797(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_798(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_799(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_800(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_801(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_814(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_815(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_816(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_817(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_819(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_820(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_821(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_822(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_823(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_824(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_825(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_826(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_827(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_828(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_829(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_830(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_831(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_832(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_833(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_835(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_836(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_837(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_838(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_839(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_841(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_842(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_843(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_844(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_845(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_847(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_848(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_849(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_850(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_851(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_853(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_12(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_11(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_10(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_9(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_8(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_7(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_6(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_5(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_4(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_3(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_2(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_1(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_866(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_867(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_868(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_869(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_870(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_871(data, threadData);
  TRACE_POP
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_updateBoundParameters(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  data->simulationInfo->integerParameter[0] /* constantLoad.characteristic PARAM */ = ((modelica_integer) 2);
  data->modelData->integerParameterData[0].time_unvarying = 1;
  data->simulationInfo->integerParameter[3] /* eSAC1A.imLeadLag.TF.na PARAM */ = ((modelica_integer) 2);
  data->modelData->integerParameterData[3].time_unvarying = 1;
  data->simulationInfo->integerParameter[4] /* eSAC1A.imLeadLag.TF.nb PARAM */ = ((modelica_integer) 2);
  data->modelData->integerParameterData[4].time_unvarying = 1;
  data->simulationInfo->integerParameter[5] /* eSAC1A.imLeadLag.TF.nx PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[5].time_unvarying = 1;
  data->simulationInfo->integerParameter[8] /* pwLine.opening PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[8].time_unvarying = 1;
  data->simulationInfo->integerParameter[9] /* pwLine1.opening PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[9].time_unvarying = 1;
  data->simulationInfo->integerParameter[10] /* pwLine2.opening PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[10].time_unvarying = 1;
  data->simulationInfo->integerParameter[11] /* pwLine3.opening PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[11].time_unvarying = 1;
  data->simulationInfo->integerParameter[12] /* pwLine4.opening PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[12].time_unvarying = 1;
  data->simulationInfo->realParameter[41] /* constantLoad.S_I.im PARAM */ = 0.0;
  data->modelData->realParameterData[41].time_unvarying = 1;
  data->simulationInfo->realParameter[42] /* constantLoad.S_I.re PARAM */ = 0.5040355607168797;
  data->modelData->realParameterData[42].time_unvarying = 1;
  data->simulationInfo->realParameter[43] /* constantLoad.S_P.im PARAM */ = 0.0;
  data->modelData->realParameterData[43].time_unvarying = 1;
  data->simulationInfo->realParameter[44] /* constantLoad.S_P.re PARAM */ = 0.0;
  data->modelData->realParameterData[44].time_unvarying = 1;
  data->simulationInfo->realParameter[45] /* constantLoad.S_Y.im PARAM */ = 0.1016207385868717;
  data->modelData->realParameterData[45].time_unvarying = 1;
  data->simulationInfo->realParameter[46] /* constantLoad.S_Y.re PARAM */ = 0.0;
  data->modelData->realParameterData[46].time_unvarying = 1;
  data->simulationInfo->realParameter[57] /* constantLoad.a0 PARAM */ = 0.4881;
  data->modelData->realParameterData[57].time_unvarying = 1;
  data->simulationInfo->realParameter[58] /* constantLoad.a1 PARAM */ = -0.4999;
  data->modelData->realParameterData[58].time_unvarying = 1;
  data->simulationInfo->realParameter[59] /* constantLoad.a2 PARAM */ = 1.502;
  data->modelData->realParameterData[59].time_unvarying = 1;
  data->simulationInfo->realParameter[63] /* constantLoad.b1 PARAM */ = 0.1389;
  data->modelData->realParameterData[63].time_unvarying = 1;
  data->simulationInfo->realParameter[64] /* constantLoad.b2 PARAM */ = 1.769;
  data->modelData->realParameterData[64].time_unvarying = 1;
  data->simulationInfo->realParameter[77] /* constantLoad.wp PARAM */ = 3.964;
  data->modelData->realParameterData[77].time_unvarying = 1;
  data->simulationInfo->realParameter[90] /* eSAC1A.K_F PARAM */ = 0.03;
  data->modelData->realParameterData[90].time_unvarying = 1;
  data->simulationInfo->realParameter[117] /* eSAC1A.derivative.k PARAM */ = 0.03;
  data->modelData->realParameterData[117].time_unvarying = 1;
  data->simulationInfo->realParameter[178] /* gENCLS.H PARAM */ = 0.0;
  data->modelData->realParameterData[178].time_unvarying = 1;
  data->simulationInfo->realParameter[203] /* gENROE.DQ_dq.im PARAM */ = -0.5649141637601983;
  data->modelData->realParameterData[203].time_unvarying = 1;
  data->simulationInfo->realParameter[204] /* gENROE.DQ_dq.re PARAM */ = 0.8251496758668186;
  data->modelData->realParameterData[204].time_unvarying = 1;
  data->simulationInfo->realParameter[209] /* gENROE.I_dq.im PARAM */ = 0.2488961938364639;
  data->modelData->realParameterData[209].time_unvarying = 1;
  data->simulationInfo->realParameter[210] /* gENROE.I_dq.re PARAM */ = 0.3177807746702022;
  data->modelData->realParameterData[210].time_unvarying = 1;
  data->simulationInfo->realParameter[211] /* gENROE.Is.im PARAM */ = -5.013440011922865;
  data->modelData->realParameterData[211].time_unvarying = 1;
  data->simulationInfo->realParameter[212] /* gENROE.Is.re PARAM */ = 0.7549909820038485;
  data->modelData->realParameterData[212].time_unvarying = 1;
  data->simulationInfo->realParameter[213] /* gENROE.It.im PARAM */ = -0.02585775308675781;
  data->modelData->realParameterData[213].time_unvarying = 1;
  data->simulationInfo->realParameter[214] /* gENROE.It.re PARAM */ = 0.4028216884200461;
  data->modelData->realParameterData[214].time_unvarying = 1;
  data->simulationInfo->realParameter[229] /* gENROE.PSIpp0.im PARAM */ = 0.1509981964007697;
  data->modelData->realParameterData[229].time_unvarying = 1;
  data->simulationInfo->realParameter[230] /* gENROE.PSIpp0.re PARAM */ = 1.002688002384573;
  data->modelData->realParameterData[230].time_unvarying = 1;
  data->simulationInfo->realParameter[231] /* gENROE.PSIpp0_dq.im PARAM */ = -0.4418365415628954;
  data->modelData->realParameterData[231].time_unvarying = 1;
  data->simulationInfo->realParameter[232] /* gENROE.PSIpp0_dq.re PARAM */ = 0.9126687000122173;
  data->modelData->realParameterData[232].time_unvarying = 1;
  data->simulationInfo->realParameter[239] /* gENROE.S.im PARAM */ = 0.05416582;
  data->modelData->realParameterData[239].time_unvarying = 1;
  data->simulationInfo->realParameter[240] /* gENROE.S.re PARAM */ = 0.4;
  data->modelData->realParameterData[240].time_unvarying = 1;
  data->simulationInfo->realParameter[248] /* gENROE.VT.im PARAM */ = 0.07043385871676049;
  data->modelData->realParameterData[248].time_unvarying = 1;
  data->simulationInfo->realParameter[249] /* gENROE.VT.re PARAM */ = 0.9975164517672215;
  data->modelData->realParameterData[249].time_unvarying = 1;
  data->simulationInfo->realParameter[259] /* gENROE.Zs.im PARAM */ = 0.2;
  data->modelData->realParameterData[259].time_unvarying = 1;
  data->simulationInfo->realParameter[260] /* gENROE.Zs.re PARAM */ = 0.0;
  data->modelData->realParameterData[260].time_unvarying = 1;
  data->simulationInfo->booleanParameter[54] /* eSAC1A.derivative.zeroGain PARAM */ = 0;
  data->modelData->booleanParameterData[54].time_unvarying = 1;
  data->simulationInfo->booleanParameter[55] /* eSAC1A.limiter1.limitsAtInit PARAM */ = 1;
  data->modelData->booleanParameterData[55].time_unvarying = 1;
  data->simulationInfo->booleanParameter[56] /* eSAC1A.limiter1.strict PARAM */ = 0;
  data->modelData->booleanParameterData[56].time_unvarying = 1;
  data->simulationInfo->booleanParameter[57] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.limitsAtInit PARAM */ = 1;
  data->modelData->booleanParameterData[57].time_unvarying = 1;
  data->simulationInfo->booleanParameter[58] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.strict PARAM */ = 0;
  data->modelData->booleanParameterData[58].time_unvarying = 1;
  data->simulationInfo->booleanParameter[59] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.use_reset PARAM */ = 0;
  data->modelData->booleanParameterData[59].time_unvarying = 1;
  data->simulationInfo->booleanParameter[60] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.use_set PARAM */ = 0;
  data->modelData->booleanParameterData[60].time_unvarying = 1;
  data->simulationInfo->integerParameter[1] /* eSAC1A.derivative.initType PARAM */ = 4;
  data->modelData->integerParameterData[1].time_unvarying = 1;
  data->simulationInfo->integerParameter[2] /* eSAC1A.imLeadLag.TF.initType PARAM */ = 4;
  data->modelData->integerParameterData[2].time_unvarying = 1;
  data->simulationInfo->integerParameter[6] /* eSAC1A.limiter1.homotopyType PARAM */ = 2;
  data->modelData->integerParameterData[6].time_unvarying = 1;
  data->simulationInfo->integerParameter[7] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.initType PARAM */ = 4;
  data->modelData->integerParameterData[7].time_unvarying = 1;
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_updateBoundParameters_0(data, threadData);
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

