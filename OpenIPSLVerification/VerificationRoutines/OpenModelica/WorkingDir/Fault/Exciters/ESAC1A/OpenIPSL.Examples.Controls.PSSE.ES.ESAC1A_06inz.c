/* Initialization */
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC1A_model.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC1A_11mix.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC1A_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionInitialEquations_0(DATA *data, threadData_t *threadData);

/*
equation index: 1
type: SIMPLE_ASSIGN
gENCLS.omega = $START.gENCLS.omega
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  data->localData[0]->realVars[85] /* gENCLS.omega variable */ = data->modelData->realVarsData[85].attribute /* gENCLS.omega variable */.start;
  TRACE_POP
}

/*
equation index: 2
type: SIMPLE_ASSIGN
GEN1.p.ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2};
  data->localData[0]->realVars[39] /* GEN1.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 3
type: SIMPLE_ASSIGN
GEN1.p.ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_3(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3};
  data->localData[0]->realVars[38] /* GEN1.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 4
type: SIMPLE_ASSIGN
LOAD.p.ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_4(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4};
  data->localData[0]->realVars[47] /* LOAD.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 5
type: SIMPLE_ASSIGN
LOAD.p.ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_5(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5};
  data->localData[0]->realVars[46] /* LOAD.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 6
type: SIMPLE_ASSIGN
GEN2.p.ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_6(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6};
  data->localData[0]->realVars[43] /* GEN2.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 7
type: SIMPLE_ASSIGN
GEN2.p.ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_7(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7};
  data->localData[0]->realVars[42] /* GEN2.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 8
type: SIMPLE_ASSIGN
FAULT.p.ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_8(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,8};
  data->localData[0]->realVars[35] /* FAULT.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 9
type: SIMPLE_ASSIGN
FAULT.p.ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_9(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,9};
  data->localData[0]->realVars[34] /* FAULT.p.ii variable */ = 0.0;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_347(DATA *data, threadData_t *threadData);


/*
equation index: 11
type: SIMPLE_ASSIGN
gENCLS.delta = gENCLS.delta0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_11(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11};
  data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */ = data->simulationInfo->realParameter[192] /* gENCLS.delta0 PARAM */;
  TRACE_POP
}

/*
equation index: 12
type: SIMPLE_ASSIGN
gENCLS.eq = gENCLS.vf0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_12(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12};
  data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */ = data->simulationInfo->realParameter[202] /* gENCLS.vf0 PARAM */;
  TRACE_POP
}

/*
equation index: 13
type: SIMPLE_ASSIGN
eSAC1A.Efd0 = eSAC1A.EFD0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_13(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13};
  data->simulationInfo->realParameter[88] /* eSAC1A.Efd0 PARAM */ = data->localData[0]->realVars[60] /* eSAC1A.EFD0 variable */;
  TRACE_POP
}

/*
equation index: 14
type: SIMPLE_ASSIGN
eSAC1A.derivative.y = eSAC1A.derivative.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_14(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14};
  data->localData[0]->realVars[64] /* eSAC1A.derivative.y variable */ = data->simulationInfo->realParameter[123] /* eSAC1A.derivative.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 15
type: SIMPLE_ASSIGN
gENROE.w = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_15(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,15};
  data->localData[0]->realVars[12] /* gENROE.w STATE(1) */ = 0.0;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_354(DATA *data, threadData_t *threadData);


/*
equation index: 17
type: SIMPLE_ASSIGN
gENROE.delta = gENROE.delta0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_17(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,17};
  data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */ = data->simulationInfo->realParameter[274] /* gENROE.delta0 PARAM */;
  TRACE_POP
}

/*
equation index: 18
type: SIMPLE_ASSIGN
$DER.gENROE.PSIkq = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_18(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,18};
  data->localData[0]->realVars[23] /* der(gENROE.PSIkq) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 19
type: SIMPLE_ASSIGN
$DER.gENROE.PSIkd = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_19(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,19};
  data->localData[0]->realVars[22] /* der(gENROE.PSIkd) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 20
type: SIMPLE_ASSIGN
$DER.gENROE.Epq = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_20(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,20};
  data->localData[0]->realVars[21] /* der(gENROE.Epq) STATE_DER */ = 0.0;
  TRACE_POP
}

void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_21(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_22(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_23(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_24(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_25(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_26(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_27(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_28(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_29(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_30(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_31(DATA*, threadData_t*);
/*
equation index: 32
indexNonlinear: 0
type: NONLINEAR

vars: {eSAC1A.XADIFD}
eqns: {21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31}
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_32(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,32};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 32 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[0] = data->localData[0]->realVars[61] /* eSAC1A.XADIFD variable */;
  retValue = solve_nonlinear_system(data, threadData, 0);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,32};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 32 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[61] /* eSAC1A.XADIFD variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[0];
  TRACE_POP
}

/*
equation index: 33
type: SIMPLE_ASSIGN
eSAC1A.VFE0 = eSAC1A.VE0 * (OpenIPSL.NonElectrical.Functions.SE(eSAC1A.VE0, eSAC1A.S_EE_1, eSAC1A.S_EE_2, eSAC1A.E_1, eSAC1A.E_2) + eSAC1A.K_E) + eSAC1A.Ifd0 * eSAC1A.K_D
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_33(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,33};
  data->simulationInfo->realParameter[104] /* eSAC1A.VFE0 PARAM */ = (data->simulationInfo->realParameter[103] /* eSAC1A.VE0 PARAM */) * (omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->simulationInfo->realParameter[103] /* eSAC1A.VE0 PARAM */, data->simulationInfo->realParameter[95] /* eSAC1A.S_EE_1 PARAM */, data->simulationInfo->realParameter[96] /* eSAC1A.S_EE_2 PARAM */, data->simulationInfo->realParameter[86] /* eSAC1A.E_1 PARAM */, data->simulationInfo->realParameter[87] /* eSAC1A.E_2 PARAM */) + data->simulationInfo->realParameter[93] /* eSAC1A.K_E PARAM */) + (data->simulationInfo->realParameter[89] /* eSAC1A.Ifd0 PARAM */) * (data->simulationInfo->realParameter[92] /* eSAC1A.K_D PARAM */);
  TRACE_POP
}

/*
equation index: 34
type: SIMPLE_ASSIGN
eSAC1A.VR0 = eSAC1A.VFE0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_34(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,34};
  data->simulationInfo->realParameter[107] /* eSAC1A.VR0 PARAM */ = data->simulationInfo->realParameter[104] /* eSAC1A.VFE0 PARAM */;
  TRACE_POP
}

/*
equation index: 35
type: SIMPLE_ASSIGN
eSAC1A.simpleLagLim.y_start = eSAC1A.VR0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_35(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,35};
  data->simulationInfo->realParameter[179] /* eSAC1A.simpleLagLim.y_start PARAM */ = data->simulationInfo->realParameter[107] /* eSAC1A.VR0 PARAM */;
  TRACE_POP
}

/*
equation index: 36
type: SIMPLE_ASSIGN
eSAC1A.simpleLagLim.state = eSAC1A.simpleLagLim.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_36(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,36};
  data->localData[0]->realVars[4] /* eSAC1A.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[179] /* eSAC1A.simpleLagLim.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 37
type: SIMPLE_ASSIGN
$START.eSAC1A.hV_GATE.n1 = eSAC1A.simpleLagLim.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_37(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,37};
  data->modelData->realVarsData[65].attribute /* eSAC1A.hV_GATE.n1 variable */.start = data->simulationInfo->realParameter[179] /* eSAC1A.simpleLagLim.y_start PARAM */;
    data->localData[0]->realVars[65] /* eSAC1A.hV_GATE.n1 variable */ = data->modelData->realVarsData[65].attribute /* eSAC1A.hV_GATE.n1 variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[65].info /* eSAC1A.hV_GATE.n1 */.name, (modelica_real) data->localData[0]->realVars[65] /* eSAC1A.hV_GATE.n1 variable */);
  TRACE_POP
}

/*
equation index: 38
type: SIMPLE_ASSIGN
eSAC1A.imLeadLag.y_start = eSAC1A.VR0 / eSAC1A.K_A
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_38(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,38};
  data->simulationInfo->realParameter[142] /* eSAC1A.imLeadLag.y_start PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[107] /* eSAC1A.VR0 PARAM */,data->simulationInfo->realParameter[90] /* eSAC1A.K_A PARAM */,"eSAC1A.K_A",equationIndexes);
  TRACE_POP
}

/*
equation index: 39
type: SIMPLE_ASSIGN
eSAC1A.imLeadLag.TF.y_start = eSAC1A.imLeadLag.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_39(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,39};
  data->simulationInfo->realParameter[138] /* eSAC1A.imLeadLag.TF.y_start PARAM */ = data->simulationInfo->realParameter[142] /* eSAC1A.imLeadLag.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 40
type: SIMPLE_ASSIGN
eSAC1A.imLeadLag.TF.y = eSAC1A.imLeadLag.TF.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_40(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,40};
  data->localData[0]->realVars[68] /* eSAC1A.imLeadLag.TF.y variable */ = data->simulationInfo->realParameter[138] /* eSAC1A.imLeadLag.TF.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 41
type: SIMPLE_ASSIGN
eSAC1A.imLeadLag.x_start = eSAC1A.VR0 / eSAC1A.K_A
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_41(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,41};
  data->simulationInfo->realParameter[141] /* eSAC1A.imLeadLag.x_start PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[107] /* eSAC1A.VR0 PARAM */,data->simulationInfo->realParameter[90] /* eSAC1A.K_A PARAM */,"eSAC1A.K_A",equationIndexes);
  TRACE_POP
}

/*
equation index: 42
type: SIMPLE_ASSIGN
eSAC1A.imLeadLag.TF.x_start[1] = eSAC1A.imLeadLag.x_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_42(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,42};
  data->simulationInfo->realParameter[137] /* eSAC1A.imLeadLag.TF.x_start[1] PARAM */ = data->simulationInfo->realParameter[141] /* eSAC1A.imLeadLag.x_start PARAM */;
  TRACE_POP
}

/*
equation index: 43
type: SIMPLE_ASSIGN
$START.eSAC1A.imLeadLag.TF.x[1] = eSAC1A.imLeadLag.TF.x_start[1]
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_43(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,43};
  data->modelData->realVarsData[67].attribute /* eSAC1A.imLeadLag.TF.x[1] variable */.start = data->simulationInfo->realParameter[137] /* eSAC1A.imLeadLag.TF.x_start[1] PARAM */;
    data->localData[0]->realVars[67] /* eSAC1A.imLeadLag.TF.x[1] variable */ = data->modelData->realVarsData[67].attribute /* eSAC1A.imLeadLag.TF.x[1] variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[67].info /* eSAC1A.imLeadLag.TF.x[1] */.name, (modelica_real) data->localData[0]->realVars[67] /* eSAC1A.imLeadLag.TF.x[1] variable */);
  TRACE_POP
}

/*
equation index: 44
type: SIMPLE_ASSIGN
eSAC1A.derivative.x_start = eSAC1A.VFE0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_44(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,44};
  data->simulationInfo->realParameter[122] /* eSAC1A.derivative.x_start PARAM */ = data->simulationInfo->realParameter[104] /* eSAC1A.VFE0 PARAM */;
  TRACE_POP
}

/*
equation index: 45
type: SIMPLE_ASSIGN
$START.eSAC1A.derivative.x = eSAC1A.derivative.x_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_45(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,45};
  data->modelData->realVarsData[0].attribute /* eSAC1A.derivative.x STATE(1) */.start = data->simulationInfo->realParameter[122] /* eSAC1A.derivative.x_start PARAM */;
    data->localData[0]->realVars[0] /* eSAC1A.derivative.x STATE(1) */ = data->modelData->realVarsData[0].attribute /* eSAC1A.derivative.x STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[0].info /* eSAC1A.derivative.x */.name, (modelica_real) data->localData[0]->realVars[0] /* eSAC1A.derivative.x STATE(1) */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_357(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_358(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_356(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_469(DATA *data, threadData_t *threadData);


/*
equation index: 50
type: SIMPLE_ASSIGN
eSAC1A.derivative.x = (eSAC1A.derivative.u / eSAC1A.derivative.T * 0.03 - eSAC1A.derivative.y) * eSAC1A.derivative.T / 0.03
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_50(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,50};
  data->localData[0]->realVars[0] /* eSAC1A.derivative.x STATE(1) */ = DIVISION_SIM(((DIVISION_SIM(data->localData[0]->realVars[63] /* eSAC1A.derivative.u variable */,data->simulationInfo->realParameter[120] /* eSAC1A.derivative.T PARAM */,"eSAC1A.derivative.T",equationIndexes)) * (0.03) - data->localData[0]->realVars[64] /* eSAC1A.derivative.y variable */) * (data->simulationInfo->realParameter[120] /* eSAC1A.derivative.T PARAM */),0.03,"0.03",equationIndexes);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_470(DATA *data, threadData_t *threadData);


/*
equation index: 52
type: SIMPLE_ASSIGN
$DER.gENROE.Epd = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_52(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,52};
  data->localData[0]->realVars[20] /* der(gENROE.Epd) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 53
type: SIMPLE_ASSIGN
gENROE.XaqIlq = (-$DER.gENROE.Epd) * gENROE.Tpq0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_53(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,53};
  data->localData[0]->realVars[100] /* gENROE.XaqIlq variable */ = ((-data->localData[0]->realVars[20] /* der(gENROE.Epd) STATE_DER */)) * (data->simulationInfo->realParameter[252] /* gENROE.Tpq0 PARAM */);
  TRACE_POP
}

void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_54(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_55(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_56(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_57(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_58(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_59(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_60(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_61(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_62(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_63(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_64(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_65(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_66(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_67(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_68(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_69(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_70(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_71(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_72(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_73(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_74(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_75(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_76(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_77(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_78(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_79(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_105(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_104(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_103(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_102(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_101(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_100(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_99(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_98(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_97(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_96(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_95(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_94(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_93(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_92(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_91(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_90(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_89(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_88(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_87(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_86(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_85(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_84(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_83(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_82(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_81(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_80(DATA*, threadData_t*);
/*
equation index: 106
indexNonlinear: 1
type: NONLINEAR

vars: {pwLine.ir.re, pwLine1.is.re, pwLine.ir.im, pwLine1.is.im, pwLine3.is.re, pwLine3.is.im, pwLine4.is.im, pwLine3.ir.im, pwLine4.is.re, pwLine3.ir.re, pwLine1.ir.im, pwLine1.ir.re, gENCLS.id, gENCLS.iq, gENROE.Epq, gENROE.Epd, gENROE.uq, gENROE.PSIppq, gENROE.iq, gENROE.id, pwLine1.vr.im, pwLine1.vr.re, pwLine3.vr.re, pwLine3.vr.im, pwLine1.vs.re, pwLine1.vs.im}
eqns: {54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 105, 104, 103, 102, 101, 100, 99, 98, 97, 96, 95, 94, 93, 92, 91, 90, 89, 88, 87, 86, 85, 84, 83, 82, 81, 80}
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_106(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,106};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 106 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[0] = data->localData[0]->realVars[114] /* pwLine.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[1] = data->localData[0]->realVars[126] /* pwLine1.is.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[2] = data->localData[0]->realVars[113] /* pwLine.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[3] = data->localData[0]->realVars[125] /* pwLine1.is.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[4] = data->localData[0]->realVars[138] /* pwLine3.is.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[5] = data->localData[0]->realVars[137] /* pwLine3.is.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[6] = data->localData[0]->realVars[147] /* pwLine4.is.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[7] = data->localData[0]->realVars[135] /* pwLine3.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[8] = data->localData[0]->realVars[148] /* pwLine4.is.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[9] = data->localData[0]->realVars[136] /* pwLine3.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[10] = data->localData[0]->realVars[123] /* pwLine1.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[11] = data->localData[0]->realVars[124] /* pwLine1.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[12] = data->localData[0]->realVars[83] /* gENCLS.id variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[13] = data->localData[0]->realVars[84] /* gENCLS.iq variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[14] = data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[15] = data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[16] = data->localData[0]->realVars[106] /* gENROE.uq variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[17] = data->localData[0]->realVars[96] /* gENROE.PSIppq variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[18] = data->localData[0]->realVars[104] /* gENROE.iq variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[19] = data->localData[0]->realVars[103] /* gENROE.id variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[20] = data->localData[0]->realVars[127] /* pwLine1.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[21] = data->localData[0]->realVars[128] /* pwLine1.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[22] = data->localData[0]->realVars[140] /* pwLine3.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[23] = data->localData[0]->realVars[139] /* pwLine3.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[24] = data->localData[0]->realVars[130] /* pwLine1.vs.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[25] = data->localData[0]->realVars[129] /* pwLine1.vs.im variable */;
  retValue = solve_nonlinear_system(data, threadData, 1);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,106};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 106 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[114] /* pwLine.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[0];
  data->localData[0]->realVars[126] /* pwLine1.is.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[1];
  data->localData[0]->realVars[113] /* pwLine.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[2];
  data->localData[0]->realVars[125] /* pwLine1.is.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[3];
  data->localData[0]->realVars[138] /* pwLine3.is.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[4];
  data->localData[0]->realVars[137] /* pwLine3.is.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[5];
  data->localData[0]->realVars[147] /* pwLine4.is.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[6];
  data->localData[0]->realVars[135] /* pwLine3.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[7];
  data->localData[0]->realVars[148] /* pwLine4.is.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[8];
  data->localData[0]->realVars[136] /* pwLine3.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[9];
  data->localData[0]->realVars[123] /* pwLine1.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[10];
  data->localData[0]->realVars[124] /* pwLine1.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[11];
  data->localData[0]->realVars[83] /* gENCLS.id variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[12];
  data->localData[0]->realVars[84] /* gENCLS.iq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[13];
  data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ = data->simulationInfo->nonlinearSystemData[1].nlsx[14];
  data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ = data->simulationInfo->nonlinearSystemData[1].nlsx[15];
  data->localData[0]->realVars[106] /* gENROE.uq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[16];
  data->localData[0]->realVars[96] /* gENROE.PSIppq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[17];
  data->localData[0]->realVars[104] /* gENROE.iq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[18];
  data->localData[0]->realVars[103] /* gENROE.id variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[19];
  data->localData[0]->realVars[127] /* pwLine1.vr.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[20];
  data->localData[0]->realVars[128] /* pwLine1.vr.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[21];
  data->localData[0]->realVars[140] /* pwLine3.vr.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[22];
  data->localData[0]->realVars[139] /* pwLine3.vr.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[23];
  data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[24];
  data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[25];
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_454(DATA *data, threadData_t *threadData);


/*
equation index: 108
type: SIMPLE_ASSIGN
GEN2.angle = 57.29577951308232 * atan2(pwLine1.vr.im, pwLine1.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_108(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,108};
  data->localData[0]->realVars[41] /* GEN2.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[127] /* pwLine1.vr.im variable */, data->localData[0]->realVars[128] /* pwLine1.vr.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_514(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_515(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_516(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_521(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_520(DATA *data, threadData_t *threadData);


/*
equation index: 114
type: SIMPLE_ASSIGN
FAULT.angle = 57.29577951308232 * atan2(pwLine3.vr.im, pwLine3.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_114(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,114};
  data->localData[0]->realVars[33] /* FAULT.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[139] /* pwLine3.vr.im variable */, data->localData[0]->realVars[140] /* pwLine3.vr.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_457(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_456(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_455(DATA *data, threadData_t *threadData);


/*
equation index: 118
type: SIMPLE_ASSIGN
LOAD.angle = 57.29577951308232 * atan2(pwLine1.vs.im, pwLine1.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_118(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,118};
  data->localData[0]->realVars[45] /* LOAD.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[129] /* pwLine1.vs.im variable */, data->localData[0]->realVars[130] /* pwLine1.vs.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_506(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_505(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_504(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_500(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_482(DATA *data, threadData_t *threadData);


/*
equation index: 124
type: SIMPLE_ASSIGN
eSAC1A.ECOMP0 = eSAC1A.ECOMP
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_124(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,124};
  data->simulationInfo->realParameter[85] /* eSAC1A.ECOMP0 PARAM */ = data->localData[0]->realVars[58] /* eSAC1A.ECOMP variable */;
  TRACE_POP
}

/*
equation index: 125
type: SIMPLE_ASSIGN
eSAC1A.V_REF = eSAC1A.VR0 / eSAC1A.K_A + eSAC1A.ECOMP0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_125(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,125};
  data->simulationInfo->realParameter[111] /* eSAC1A.V_REF PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[107] /* eSAC1A.VR0 PARAM */,data->simulationInfo->realParameter[90] /* eSAC1A.K_A PARAM */,"eSAC1A.K_A",equationIndexes) + data->simulationInfo->realParameter[85] /* eSAC1A.ECOMP0 PARAM */;
  TRACE_POP
}

/*
equation index: 126
type: SIMPLE_ASSIGN
eSAC1A.VoltageReference.k = eSAC1A.V_REF
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_126(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,126};
  data->simulationInfo->realParameter[114] /* eSAC1A.VoltageReference.k PARAM */ = data->simulationInfo->realParameter[111] /* eSAC1A.V_REF PARAM */;
  TRACE_POP
}

/*
equation index: 127
type: SIMPLE_ASSIGN
eSAC1A.DiffV.u1 = eSAC1A.VoltageReference.k
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_127(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,127};
  data->simulationInfo->realParameter[84] /* eSAC1A.DiffV.u1 PARAM */ = data->simulationInfo->realParameter[114] /* eSAC1A.VoltageReference.k PARAM */;
  TRACE_POP
}

/*
equation index: 128
type: SIMPLE_ASSIGN
eSAC1A.VoltageReference.y = eSAC1A.VoltageReference.k
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_128(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,128};
  data->simulationInfo->realParameter[115] /* eSAC1A.VoltageReference.y PARAM */ = data->simulationInfo->realParameter[114] /* eSAC1A.VoltageReference.k PARAM */;
  TRACE_POP
}

/*
equation index: 129
type: SIMPLE_ASSIGN
eSAC1A.imSimpleLag.y_start = eSAC1A.ECOMP0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_129(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,129};
  data->simulationInfo->realParameter[147] /* eSAC1A.imSimpleLag.y_start PARAM */ = data->simulationInfo->realParameter[85] /* eSAC1A.ECOMP0 PARAM */;
  TRACE_POP
}

/*
equation index: 130
type: SIMPLE_ASSIGN
$START.eSAC1A.imSimpleLag.state = eSAC1A.imSimpleLag.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_130(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,130};
  data->modelData->realVarsData[2].attribute /* eSAC1A.imSimpleLag.state STATE(1) */.start = data->simulationInfo->realParameter[147] /* eSAC1A.imSimpleLag.y_start PARAM */;
    data->localData[0]->realVars[2] /* eSAC1A.imSimpleLag.state STATE(1) */ = data->modelData->realVarsData[2].attribute /* eSAC1A.imSimpleLag.state STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[2].info /* eSAC1A.imSimpleLag.state */.name, (modelica_real) data->localData[0]->realVars[2] /* eSAC1A.imSimpleLag.state STATE(1) */);
  TRACE_POP
}

/*
equation index: 131
type: SIMPLE_ASSIGN
eSAC1A.imSimpleLag.state = eSAC1A.imSimpleLag.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_131(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,131};
  data->localData[0]->realVars[2] /* eSAC1A.imSimpleLag.state STATE(1) */ = data->simulationInfo->realParameter[147] /* eSAC1A.imSimpleLag.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 132
type: SIMPLE_ASSIGN
$START.eSAC1A.DiffV.u2 = eSAC1A.imSimpleLag.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_132(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,132};
  data->modelData->realVarsData[56].attribute /* eSAC1A.DiffV.u2 variable */.start = data->simulationInfo->realParameter[147] /* eSAC1A.imSimpleLag.y_start PARAM */;
    data->localData[0]->realVars[56] /* eSAC1A.DiffV.u2 variable */ = data->modelData->realVarsData[56].attribute /* eSAC1A.DiffV.u2 variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[56].info /* eSAC1A.DiffV.u2 */.name, (modelica_real) data->localData[0]->realVars[56] /* eSAC1A.DiffV.u2 variable */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_484(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_485(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_486(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_489(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_498(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_497(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_491(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_492(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_493(DATA *data, threadData_t *threadData);


/*
equation index: 142
type: SIMPLE_ASSIGN
eSAC1A.limiter1.y = homotopy(smooth(0, if eSAC1A.lV_GATE.p > eSAC1A.limiter1.uMax then eSAC1A.limiter1.uMax else if eSAC1A.lV_GATE.p < eSAC1A.limiter1.uMin then eSAC1A.limiter1.uMin else eSAC1A.lV_GATE.p), eSAC1A.lV_GATE.p)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_142(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,142};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  tmp0 = Greater(data->localData[0]->realVars[70] /* eSAC1A.lV_GATE.p variable */,data->simulationInfo->realParameter[149] /* eSAC1A.limiter1.uMax PARAM */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->simulationInfo->realParameter[149] /* eSAC1A.limiter1.uMax PARAM */;
  }
  else
  {
    tmp1 = Less(data->localData[0]->realVars[70] /* eSAC1A.lV_GATE.p variable */,data->simulationInfo->realParameter[150] /* eSAC1A.limiter1.uMin PARAM */);
    tmp3 = (tmp1?data->simulationInfo->realParameter[150] /* eSAC1A.limiter1.uMin PARAM */:data->localData[0]->realVars[70] /* eSAC1A.lV_GATE.p variable */);
  }
  data->localData[0]->realVars[71] /* eSAC1A.limiter1.y variable */ = homotopy(tmp3, data->localData[0]->realVars[70] /* eSAC1A.lV_GATE.p variable */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_495(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_496(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_490(DATA *data, threadData_t *threadData);


/*
equation index: 146
type: SIMPLE_ASSIGN
eSAC1A.imLeadLag.TF.x[1] = (eSAC1A.imLeadLag.TF.d * eSAC1A.add3_1.y - eSAC1A.imLeadLag.TF.y) / (eSAC1A.imLeadLag.TF.a[2] * eSAC1A.imLeadLag.TF.d - eSAC1A.imLeadLag.TF.bb[2])
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_146(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,146};
  data->localData[0]->realVars[67] /* eSAC1A.imLeadLag.TF.x[1] variable */ = DIVISION_SIM((data->simulationInfo->realParameter[136] /* eSAC1A.imLeadLag.TF.d PARAM */) * (data->localData[0]->realVars[62] /* eSAC1A.add3_1.y variable */) - data->localData[0]->realVars[68] /* eSAC1A.imLeadLag.TF.y variable */,(data->simulationInfo->realParameter[130] /* eSAC1A.imLeadLag.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[136] /* eSAC1A.imLeadLag.TF.d PARAM */) - data->simulationInfo->realParameter[135] /* eSAC1A.imLeadLag.TF.bb[2] PARAM */,"eSAC1A.imLeadLag.TF.a[2] * eSAC1A.imLeadLag.TF.d - eSAC1A.imLeadLag.TF.bb[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 147
type: SIMPLE_ASSIGN
eSAC1A.imLeadLag.TF.x_scaled[1] = eSAC1A.imLeadLag.TF.x[1] * eSAC1A.imLeadLag.TF.a_end
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_147(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,147};
  data->localData[0]->realVars[1] /* eSAC1A.imLeadLag.TF.x_scaled[1] STATE(1) */ = (data->localData[0]->realVars[67] /* eSAC1A.imLeadLag.TF.x[1] variable */) * (data->simulationInfo->realParameter[131] /* eSAC1A.imLeadLag.TF.a_end PARAM */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_487(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_483(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_499(DATA *data, threadData_t *threadData);


/*
equation index: 151
type: SIMPLE_ASSIGN
GEN1.angle = 57.29577951308232 * atan2(pwLine.vs.im, pwLine.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_151(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,151};
  data->localData[0]->realVars[37] /* GEN1.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[117] /* pwLine.vs.im variable */, data->localData[0]->realVars[118] /* pwLine.vs.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_478(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_477(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_481(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_479(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_480(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_461(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_460(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_513(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_512(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_519(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_518(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_511(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_510(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_508(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_509(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_502(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_503(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_466(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_467(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_348(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_349(DATA *data, threadData_t *threadData);


/*
equation index: 173
type: ALGORITHM

  assert(eSAC1A.limiter1.uMax >= eSAC1A.limiter1.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(eSAC1A.limiter1.uMax, 6, 0, true) + ") < uMin (=" + String(eSAC1A.limiter1.uMin, 6, 0, true) + ")");
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_173(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,173};
  modelica_boolean tmp4;
  static const MMC_DEFSTRINGLIT(tmp5,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp6;
  static const MMC_DEFSTRINGLIT(tmp7,11,") < uMin (=");
  modelica_string tmp8;
  static int tmp9 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp4 = GreaterEq(data->simulationInfo->realParameter[149] /* eSAC1A.limiter1.uMax PARAM */,data->simulationInfo->realParameter[150] /* eSAC1A.limiter1.uMin PARAM */);
    if(!tmp4)
    {
      tmp6 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[149] /* eSAC1A.limiter1.uMax PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp5),tmp6);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp7));
      tmp8 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[150] /* eSAC1A.limiter1.uMin PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp8);
      tmpMeta[3] = stringAppend(tmpMeta[2],(modelica_string) mmc_strings_len1[41]);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Nonlinear.mo",19,9,20,65,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neSAC1A.limiter1.uMax >= eSAC1A.limiter1.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta[3]));
      }
    }
  }
  TRACE_POP
}
OMC_DISABLE_OPT
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_1(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_2(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_3(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_4(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_5(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_6(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_7(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_8(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_9(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_347(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_11(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_12(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_13(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_14(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_15(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_354(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_17(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_18(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_19(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_20(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_32(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_33(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_34(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_35(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_36(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_37(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_38(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_39(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_40(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_41(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_42(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_43(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_44(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_45(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_357(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_358(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_356(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_469(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_50(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_470(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_52(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_53(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_106(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_454(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_108(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_514(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_515(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_516(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_521(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_520(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_114(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_457(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_456(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_455(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_118(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_506(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_505(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_504(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_500(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_482(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_124(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_125(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_126(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_127(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_128(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_129(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_130(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_131(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_132(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_484(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_485(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_486(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_489(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_498(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_497(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_491(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_492(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_493(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_142(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_495(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_496(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_490(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_146(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_147(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_487(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_483(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_499(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_151(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_478(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_477(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_481(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_479(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_480(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_461(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_460(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_513(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_512(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_519(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_518(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_511(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_510(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_508(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_509(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_502(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_503(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_466(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_467(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_348(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_349(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_173(data, threadData);
  TRACE_POP
}


int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_1(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_2(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_3(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_4(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_5(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_6(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_7(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_8(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_9(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_347(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_11(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_12(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_13(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_14(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_15(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_354(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_17(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_18(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_19(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_20(DATA *data, threadData_t *threadData);


void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_194(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_195(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_196(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_197(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_198(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_199(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_200(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_201(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_202(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_203(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_204(DATA*, threadData_t*);
/*
equation index: 205
indexNonlinear: 2
type: NONLINEAR

vars: {eSAC1A.XADIFD}
eqns: {194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204}
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_205(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,205};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 205 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[0] = data->simulationInfo->realParameter[276] /* gENROE.efd0 PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 2);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,205};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 205 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[61] /* eSAC1A.XADIFD variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[0];
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_33(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_34(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_35(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_36(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_37(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_38(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_39(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_40(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_41(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_42(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_43(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_44(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_45(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_357(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_358(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_356(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_469(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_50(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_470(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_52(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_53(DATA *data, threadData_t *threadData);


void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_227(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_228(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_229(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_230(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_231(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_232(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_233(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_234(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_235(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_236(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_237(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_238(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_239(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_240(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_241(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_242(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_243(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_244(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_245(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_246(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_247(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_248(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_249(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_250(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_251(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_252(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_278(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_277(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_276(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_275(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_274(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_273(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_272(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_271(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_270(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_269(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_268(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_267(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_266(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_265(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_264(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_263(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_262(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_261(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_260(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_259(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_258(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_257(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_256(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_255(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_254(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_253(DATA*, threadData_t*);
/*
equation index: 279
indexNonlinear: 3
type: NONLINEAR

vars: {pwLine.ir.re, pwLine1.is.re, pwLine.ir.im, pwLine1.is.im, pwLine3.is.re, pwLine3.is.im, pwLine4.is.im, pwLine3.ir.im, pwLine4.is.re, pwLine3.ir.re, pwLine1.ir.im, pwLine1.ir.re, gENCLS.id, gENCLS.iq, gENROE.Epq, gENROE.Epd, gENROE.uq, gENROE.PSIppq, gENROE.iq, gENROE.id, pwLine1.vr.im, pwLine1.vr.re, pwLine3.vr.re, pwLine3.vr.im, pwLine1.vs.re, pwLine1.vs.im}
eqns: {227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 278, 277, 276, 275, 274, 273, 272, 271, 270, 269, 268, 267, 266, 265, 264, 263, 262, 261, 260, 259, 258, 257, 256, 255, 254, 253}
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_279(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,279};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 279 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[0] = data->localData[0]->realVars[114] /* pwLine.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[1] = data->localData[0]->realVars[126] /* pwLine1.is.re variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[2] = data->localData[0]->realVars[113] /* pwLine.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[3] = data->localData[0]->realVars[125] /* pwLine1.is.im variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[4] = data->localData[0]->realVars[138] /* pwLine3.is.re variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[5] = data->localData[0]->realVars[137] /* pwLine3.is.im variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[6] = data->localData[0]->realVars[147] /* pwLine4.is.im variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[7] = data->localData[0]->realVars[135] /* pwLine3.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[8] = data->localData[0]->realVars[148] /* pwLine4.is.re variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[9] = data->localData[0]->realVars[136] /* pwLine3.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[10] = data->localData[0]->realVars[123] /* pwLine1.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[11] = data->localData[0]->realVars[124] /* pwLine1.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[12] = data->simulationInfo->realParameter[194] /* gENCLS.id0 PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[13] = data->simulationInfo->realParameter[196] /* gENCLS.iq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[14] = data->simulationInfo->realParameter[212] /* gENROE.Epq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[15] = data->simulationInfo->realParameter[211] /* gENROE.Epd0 PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[16] = data->simulationInfo->realParameter[286] /* gENROE.uq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[17] = data->simulationInfo->realParameter[239] /* gENROE.PSIppq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[18] = data->simulationInfo->realParameter[280] /* gENROE.iq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[19] = data->simulationInfo->realParameter[278] /* gENROE.id0 PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[20] = data->simulationInfo->realParameter[203] /* gENCLS.vi0 PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[21] = data->simulationInfo->realParameter[205] /* gENCLS.vr0 PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[22] = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[23] = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[24] = data->simulationInfo->realParameter[80] /* constantLoad.vr0 PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[25] = data->simulationInfo->realParameter[79] /* constantLoad.vi0 PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 3);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,279};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 279 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[114] /* pwLine.ir.re variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[0];
  data->localData[0]->realVars[126] /* pwLine1.is.re variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[1];
  data->localData[0]->realVars[113] /* pwLine.ir.im variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[2];
  data->localData[0]->realVars[125] /* pwLine1.is.im variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[3];
  data->localData[0]->realVars[138] /* pwLine3.is.re variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[4];
  data->localData[0]->realVars[137] /* pwLine3.is.im variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[5];
  data->localData[0]->realVars[147] /* pwLine4.is.im variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[6];
  data->localData[0]->realVars[135] /* pwLine3.ir.im variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[7];
  data->localData[0]->realVars[148] /* pwLine4.is.re variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[8];
  data->localData[0]->realVars[136] /* pwLine3.ir.re variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[9];
  data->localData[0]->realVars[123] /* pwLine1.ir.im variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[10];
  data->localData[0]->realVars[124] /* pwLine1.ir.re variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[11];
  data->localData[0]->realVars[83] /* gENCLS.id variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[12];
  data->localData[0]->realVars[84] /* gENCLS.iq variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[13];
  data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ = data->simulationInfo->nonlinearSystemData[3].nlsx[14];
  data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ = data->simulationInfo->nonlinearSystemData[3].nlsx[15];
  data->localData[0]->realVars[106] /* gENROE.uq variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[16];
  data->localData[0]->realVars[96] /* gENROE.PSIppq variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[17];
  data->localData[0]->realVars[104] /* gENROE.iq variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[18];
  data->localData[0]->realVars[103] /* gENROE.id variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[19];
  data->localData[0]->realVars[127] /* pwLine1.vr.im variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[20];
  data->localData[0]->realVars[128] /* pwLine1.vr.re variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[21];
  data->localData[0]->realVars[140] /* pwLine3.vr.re variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[22];
  data->localData[0]->realVars[139] /* pwLine3.vr.im variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[23];
  data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[24];
  data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[25];
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_454(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_108(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_514(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_515(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_516(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_521(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_520(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_114(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_457(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_456(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_455(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_118(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_506(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_505(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_504(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_500(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_482(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_124(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_125(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_126(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_127(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_128(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_129(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_130(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_131(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_132(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_484(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_485(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_486(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_489(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_498(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_497(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_491(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_492(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_493(DATA *data, threadData_t *threadData);


/*
equation index: 315
type: SIMPLE_ASSIGN
eSAC1A.limiter1.y = eSAC1A.lV_GATE.p
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_315(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,315};
  data->localData[0]->realVars[71] /* eSAC1A.limiter1.y variable */ = data->localData[0]->realVars[70] /* eSAC1A.lV_GATE.p variable */;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_495(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_496(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_490(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_146(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_147(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_487(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_483(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_499(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_151(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_478(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_477(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_481(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_479(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_480(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_461(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_460(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_513(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_512(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_519(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_518(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_511(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_510(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_508(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_509(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_502(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_503(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_466(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_467(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_348(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_349(DATA *data, threadData_t *threadData);


int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_1(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_2(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_3(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_4(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_5(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_6(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_7(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_8(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_9(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_347(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_11(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_12(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_13(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_14(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_15(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_354(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_17(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_18(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_19(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_20(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_205(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_33(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_34(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_35(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_36(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_37(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_38(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_39(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_40(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_41(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_42(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_43(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_44(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_45(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_357(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_358(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_356(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_469(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_50(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_470(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_52(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_53(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_279(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_454(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_108(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_514(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_515(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_516(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_521(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_520(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_114(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_457(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_456(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_455(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_118(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_506(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_505(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_504(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_500(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_482(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_124(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_125(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_126(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_127(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_128(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_129(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_130(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_131(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_132(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_484(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_485(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_486(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_489(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_498(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_497(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_491(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_492(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_493(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_315(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_495(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_496(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_490(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_146(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_147(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_487(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_483(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_499(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_151(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_478(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_477(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_481(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_479(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_480(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_461(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_460(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_513(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_512(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_519(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_518(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_511(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_510(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_508(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_509(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_502(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_503(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_466(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_467(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_348(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_349(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int *equationIndexes = NULL;
  double res = 0.0;

  res = data->localData[0]->realVars[85] /* gENCLS.omega variable */;
  if(fabs(res) > 1e-5)
  {
    errorStreamPrint(LOG_INIT, 0, "The initialization problem is inconsistent due to the following equation: 0 != %g = gENCLS.omega", res);
    return 1;
  }
  
  TRACE_POP
  return 0;
}


#if defined(__cplusplus)
}
#endif

