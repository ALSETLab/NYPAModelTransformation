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
eSAC1A.rotatingExciterWithDemagnetization.sISO.local_reset = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  data->localData[0]->booleanVars[2] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.local_reset DISCRETE */ = 0;
  TRACE_POP
}

/*
equation index: 2
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.sISO.local_set = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2};
  data->localData[0]->realVars[89] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.local_set variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 3
type: SIMPLE_ASSIGN
GEN1.p.ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_3(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3};
  data->localData[0]->realVars[42] /* GEN1.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 4
type: SIMPLE_ASSIGN
GEN1.p.ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_4(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4};
  data->localData[0]->realVars[41] /* GEN1.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 5
type: SIMPLE_ASSIGN
LOAD.p.ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_5(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5};
  data->localData[0]->realVars[52] /* LOAD.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 6
type: SIMPLE_ASSIGN
LOAD.p.ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_6(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6};
  data->localData[0]->realVars[51] /* LOAD.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 7
type: SIMPLE_ASSIGN
GEN2.p.ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_7(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7};
  data->localData[0]->realVars[47] /* GEN2.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 8
type: SIMPLE_ASSIGN
GEN2.p.ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_8(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,8};
  data->localData[0]->realVars[46] /* GEN2.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 9
type: SIMPLE_ASSIGN
FAULT.p.ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_9(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,9};
  data->localData[0]->realVars[37] /* FAULT.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 10
type: SIMPLE_ASSIGN
FAULT.p.ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_10(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10};
  data->localData[0]->realVars[36] /* FAULT.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 11
type: SIMPLE_ASSIGN
SHUNT.p.ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_11(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11};
  data->localData[0]->realVars[57] /* SHUNT.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 12
type: SIMPLE_ASSIGN
SHUNT.p.ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_12(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12};
  data->localData[0]->realVars[56] /* SHUNT.p.ii variable */ = 0.0;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_386(DATA *data, threadData_t *threadData);


/*
equation index: 14
type: SIMPLE_ASSIGN
gENCLS.delta = gENCLS.delta0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_14(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14};
  data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */ = data->simulationInfo->realParameter[187] /* gENCLS.delta0 PARAM */;
  TRACE_POP
}

/*
equation index: 15
type: SIMPLE_ASSIGN
gENCLS.eq = gENCLS.vf0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_15(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,15};
  data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */ = data->simulationInfo->realParameter[197] /* gENCLS.vf0 PARAM */;
  TRACE_POP
}

/*
equation index: 16
type: SIMPLE_ASSIGN
gENROE.w = gENROE.w0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_16(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,16};
  data->localData[0]->realVars[13] /* gENROE.w STATE(1) */ = data->simulationInfo->realParameter[284] /* gENROE.w0 PARAM */;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_393(DATA *data, threadData_t *threadData);


/*
equation index: 18
type: SIMPLE_ASSIGN
gENROE.delta = gENROE.delta0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_18(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,18};
  data->localData[0]->realVars[12] /* gENROE.delta STATE(1) */ = data->simulationInfo->realParameter[268] /* gENROE.delta0 PARAM */;
  TRACE_POP
}

/*
equation index: 19
type: SIMPLE_ASSIGN
eSAC1A.Efd0 = eSAC1A.EFD0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_19(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,19};
  data->simulationInfo->realParameter[84] /* eSAC1A.Efd0 PARAM */ = data->localData[0]->realVars[70] /* eSAC1A.EFD0 variable */;
  TRACE_POP
}

/*
equation index: 20
type: SIMPLE_ASSIGN
eSAC1A.derivative.y = eSAC1A.derivative.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_20(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,20};
  data->localData[0]->realVars[74] /* eSAC1A.derivative.y variable */ = data->simulationInfo->realParameter[119] /* eSAC1A.derivative.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 21
type: SIMPLE_ASSIGN
$DER.gENROE.PSIkq = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_21(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,21};
  data->localData[0]->realVars[25] /* der(gENROE.PSIkq) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 22
type: SIMPLE_ASSIGN
$DER.gENROE.PSIkd = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_22(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,22};
  data->localData[0]->realVars[24] /* der(gENROE.PSIkd) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 23
type: SIMPLE_ASSIGN
$DER.gENROE.Epq = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_23(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,23};
  data->localData[0]->realVars[23] /* der(gENROE.Epq) STATE_DER */ = 0.0;
  TRACE_POP
}

void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_24(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_25(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_26(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_27(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_28(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_29(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_30(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_31(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_32(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_33(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_34(DATA*, threadData_t*);
/*
equation index: 35
indexNonlinear: 0
type: NONLINEAR

vars: {eSAC1A.XADIFD}
eqns: {24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34}
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_35(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,35};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 35 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[0] = data->localData[0]->realVars[71] /* eSAC1A.XADIFD variable */;
  retValue = solve_nonlinear_system(data, threadData, 0);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,35};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 35 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[71] /* eSAC1A.XADIFD variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[0];
  TRACE_POP
}

/*
equation index: 36
type: SIMPLE_ASSIGN
eSAC1A.VFE0 = eSAC1A.VE0 * (OpenIPSL.NonElectrical.Functions.SE(eSAC1A.VE0, eSAC1A.S_EE_1, eSAC1A.S_EE_2, eSAC1A.E_1, eSAC1A.E_2) + eSAC1A.K_E) + eSAC1A.Ifd0 * eSAC1A.K_D
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_36(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,36};
  data->simulationInfo->realParameter[100] /* eSAC1A.VFE0 PARAM */ = (data->simulationInfo->realParameter[99] /* eSAC1A.VE0 PARAM */) * (omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->simulationInfo->realParameter[99] /* eSAC1A.VE0 PARAM */, data->simulationInfo->realParameter[91] /* eSAC1A.S_EE_1 PARAM */, data->simulationInfo->realParameter[92] /* eSAC1A.S_EE_2 PARAM */, data->simulationInfo->realParameter[82] /* eSAC1A.E_1 PARAM */, data->simulationInfo->realParameter[83] /* eSAC1A.E_2 PARAM */) + data->simulationInfo->realParameter[89] /* eSAC1A.K_E PARAM */) + (data->simulationInfo->realParameter[85] /* eSAC1A.Ifd0 PARAM */) * (data->simulationInfo->realParameter[88] /* eSAC1A.K_D PARAM */);
  TRACE_POP
}

/*
equation index: 37
type: SIMPLE_ASSIGN
eSAC1A.VR0 = eSAC1A.VFE0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_37(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,37};
  data->simulationInfo->realParameter[103] /* eSAC1A.VR0 PARAM */ = data->simulationInfo->realParameter[100] /* eSAC1A.VFE0 PARAM */;
  TRACE_POP
}

/*
equation index: 38
type: SIMPLE_ASSIGN
eSAC1A.simpleLagLim.y_start = eSAC1A.VR0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_38(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,38};
  data->simulationInfo->realParameter[175] /* eSAC1A.simpleLagLim.y_start PARAM */ = data->simulationInfo->realParameter[103] /* eSAC1A.VR0 PARAM */;
  TRACE_POP
}

/*
equation index: 39
type: SIMPLE_ASSIGN
eSAC1A.simpleLagLim.state = eSAC1A.simpleLagLim.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_39(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,39};
  data->localData[0]->realVars[4] /* eSAC1A.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[175] /* eSAC1A.simpleLagLim.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 40
type: SIMPLE_ASSIGN
$START.eSAC1A.hV_GATE.n1 = eSAC1A.simpleLagLim.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_40(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,40};
  data->modelData->realVarsData[75].attribute /* eSAC1A.hV_GATE.n1 variable */.start = data->simulationInfo->realParameter[175] /* eSAC1A.simpleLagLim.y_start PARAM */;
    data->localData[0]->realVars[75] /* eSAC1A.hV_GATE.n1 variable */ = data->modelData->realVarsData[75].attribute /* eSAC1A.hV_GATE.n1 variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[75].info /* eSAC1A.hV_GATE.n1 */.name, (modelica_real) data->localData[0]->realVars[75] /* eSAC1A.hV_GATE.n1 variable */);
  TRACE_POP
}

/*
equation index: 41
type: SIMPLE_ASSIGN
eSAC1A.imLeadLag.y_start = eSAC1A.VR0 / eSAC1A.K_A
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_41(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,41};
  data->simulationInfo->realParameter[138] /* eSAC1A.imLeadLag.y_start PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[103] /* eSAC1A.VR0 PARAM */,data->simulationInfo->realParameter[86] /* eSAC1A.K_A PARAM */,"eSAC1A.K_A",equationIndexes);
  TRACE_POP
}

/*
equation index: 42
type: SIMPLE_ASSIGN
eSAC1A.imLeadLag.TF.y_start = eSAC1A.imLeadLag.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_42(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,42};
  data->simulationInfo->realParameter[134] /* eSAC1A.imLeadLag.TF.y_start PARAM */ = data->simulationInfo->realParameter[138] /* eSAC1A.imLeadLag.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 43
type: SIMPLE_ASSIGN
eSAC1A.imLeadLag.TF.y = eSAC1A.imLeadLag.TF.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_43(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,43};
  data->localData[0]->realVars[78] /* eSAC1A.imLeadLag.TF.y variable */ = data->simulationInfo->realParameter[134] /* eSAC1A.imLeadLag.TF.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 44
type: SIMPLE_ASSIGN
eSAC1A.imLeadLag.x_start = eSAC1A.VR0 / eSAC1A.K_A
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_44(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,44};
  data->simulationInfo->realParameter[137] /* eSAC1A.imLeadLag.x_start PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[103] /* eSAC1A.VR0 PARAM */,data->simulationInfo->realParameter[86] /* eSAC1A.K_A PARAM */,"eSAC1A.K_A",equationIndexes);
  TRACE_POP
}

/*
equation index: 45
type: SIMPLE_ASSIGN
eSAC1A.imLeadLag.TF.x_start[1] = eSAC1A.imLeadLag.x_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_45(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,45};
  data->simulationInfo->realParameter[133] /* eSAC1A.imLeadLag.TF.x_start[1] PARAM */ = data->simulationInfo->realParameter[137] /* eSAC1A.imLeadLag.x_start PARAM */;
  TRACE_POP
}

/*
equation index: 46
type: SIMPLE_ASSIGN
$START.eSAC1A.imLeadLag.TF.x[1] = eSAC1A.imLeadLag.TF.x_start[1]
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_46(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,46};
  data->modelData->realVarsData[77].attribute /* eSAC1A.imLeadLag.TF.x[1] variable */.start = data->simulationInfo->realParameter[133] /* eSAC1A.imLeadLag.TF.x_start[1] PARAM */;
    data->localData[0]->realVars[77] /* eSAC1A.imLeadLag.TF.x[1] variable */ = data->modelData->realVarsData[77].attribute /* eSAC1A.imLeadLag.TF.x[1] variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[77].info /* eSAC1A.imLeadLag.TF.x[1] */.name, (modelica_real) data->localData[0]->realVars[77] /* eSAC1A.imLeadLag.TF.x[1] variable */);
  TRACE_POP
}

/*
equation index: 47
type: SIMPLE_ASSIGN
eSAC1A.derivative.x_start = eSAC1A.VFE0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_47(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,47};
  data->simulationInfo->realParameter[118] /* eSAC1A.derivative.x_start PARAM */ = data->simulationInfo->realParameter[100] /* eSAC1A.VFE0 PARAM */;
  TRACE_POP
}

/*
equation index: 48
type: SIMPLE_ASSIGN
$START.eSAC1A.derivative.x = eSAC1A.derivative.x_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_48(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,48};
  data->modelData->realVarsData[0].attribute /* eSAC1A.derivative.x STATE(1) */.start = data->simulationInfo->realParameter[118] /* eSAC1A.derivative.x_start PARAM */;
    data->localData[0]->realVars[0] /* eSAC1A.derivative.x STATE(1) */ = data->modelData->realVarsData[0].attribute /* eSAC1A.derivative.x STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[0].info /* eSAC1A.derivative.x */.name, (modelica_real) data->localData[0]->realVars[0] /* eSAC1A.derivative.x STATE(1) */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_396(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_397(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_395(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_511(DATA *data, threadData_t *threadData);


/*
equation index: 53
type: SIMPLE_ASSIGN
eSAC1A.derivative.x = (eSAC1A.derivative.u / eSAC1A.derivative.T * 0.03 - eSAC1A.derivative.y) * eSAC1A.derivative.T / 0.03
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_53(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,53};
  data->localData[0]->realVars[0] /* eSAC1A.derivative.x STATE(1) */ = DIVISION_SIM(((DIVISION_SIM(data->localData[0]->realVars[73] /* eSAC1A.derivative.u variable */,data->simulationInfo->realParameter[116] /* eSAC1A.derivative.T PARAM */,"eSAC1A.derivative.T",equationIndexes)) * (0.03) - data->localData[0]->realVars[74] /* eSAC1A.derivative.y variable */) * (data->simulationInfo->realParameter[116] /* eSAC1A.derivative.T PARAM */),0.03,"0.03",equationIndexes);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_512(DATA *data, threadData_t *threadData);


/*
equation index: 55
type: SIMPLE_ASSIGN
$DER.gENROE.Epd = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_55(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,55};
  data->localData[0]->realVars[22] /* der(gENROE.Epd) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 56
type: SIMPLE_ASSIGN
gENROE.XaqIlq = (-$DER.gENROE.Epd) * gENROE.Tpq0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_56(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,56};
  data->localData[0]->realVars[110] /* gENROE.XaqIlq variable */ = ((-data->localData[0]->realVars[22] /* der(gENROE.Epd) STATE_DER */)) * (data->simulationInfo->realParameter[247] /* gENROE.Tpq0 PARAM */);
  TRACE_POP
}

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
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_80(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_81(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_82(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_112(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_111(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_110(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_109(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_108(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_107(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_106(DATA*, threadData_t*);
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
/*
equation index: 113
indexNonlinear: 1
type: NONLINEAR

vars: {pwLine3.ir.im, pwLine4.is.im, pwLine3.ir.re, pwLine4.is.re, pwLine.ir.im, pwLine1.is.im, constantLoad.p.ii, pwLine.ir.re, constantLoad.p.ir, pwLine1.is.re, pwLine4.ir.re, pwLine4.ir.im, gENCLS.iq, gENCLS.id, gENROE.Epq, gENROE.Epd, gENROE.uq, gENROE.PSIppq, gENROE.iq, gENROE.id, pwLine2.vr.re, pwLine2.vr.im, pwLine1.vs.im, pwLine3.vr.im, pwLine3.vr.re, pwLine1.vr.re, pwLine1.ir.re, pwLine1.vr.im, pwLine1.vs.re, pwLine1.ir.im}
eqns: {57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 112, 111, 110, 109, 108, 107, 106, 105, 104, 103, 102, 101, 100, 99, 98, 97, 96, 95, 94, 93, 92, 91, 90, 89, 88, 87, 86, 85, 84, 83}
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_113(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,113};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 113 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[0] = data->localData[0]->realVars[153] /* pwLine3.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[1] = data->localData[0]->realVars[165] /* pwLine4.is.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[2] = data->localData[0]->realVars[154] /* pwLine3.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[3] = data->localData[0]->realVars[166] /* pwLine4.is.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[4] = data->localData[0]->realVars[123] /* pwLine.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[5] = data->localData[0]->realVars[135] /* pwLine1.is.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[6] = data->localData[0]->realVars[63] /* constantLoad.p.ii variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[7] = data->localData[0]->realVars[124] /* pwLine.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[8] = data->localData[0]->realVars[64] /* constantLoad.p.ir variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[9] = data->localData[0]->realVars[136] /* pwLine1.is.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[10] = data->localData[0]->realVars[164] /* pwLine4.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[11] = data->localData[0]->realVars[163] /* pwLine4.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[12] = data->localData[0]->realVars[95] /* gENCLS.iq variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[13] = data->localData[0]->realVars[94] /* gENCLS.id variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[14] = data->localData[0]->realVars[9] /* gENROE.Epq STATE(1) */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[15] = data->localData[0]->realVars[8] /* gENROE.Epd STATE(1) */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[16] = data->localData[0]->realVars[116] /* gENROE.uq variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[17] = data->localData[0]->realVars[106] /* gENROE.PSIppq variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[18] = data->localData[0]->realVars[114] /* gENROE.iq variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[19] = data->localData[0]->realVars[113] /* gENROE.id variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[20] = data->localData[0]->realVars[148] /* pwLine2.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[21] = data->localData[0]->realVars[147] /* pwLine2.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[22] = data->localData[0]->realVars[139] /* pwLine1.vs.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[23] = data->localData[0]->realVars[157] /* pwLine3.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[24] = data->localData[0]->realVars[158] /* pwLine3.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[25] = data->localData[0]->realVars[138] /* pwLine1.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[26] = data->localData[0]->realVars[134] /* pwLine1.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[27] = data->localData[0]->realVars[137] /* pwLine1.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[28] = data->localData[0]->realVars[140] /* pwLine1.vs.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[29] = data->localData[0]->realVars[133] /* pwLine1.ir.im variable */;
  retValue = solve_nonlinear_system(data, threadData, 1);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,113};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 113 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[153] /* pwLine3.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[0];
  data->localData[0]->realVars[165] /* pwLine4.is.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[1];
  data->localData[0]->realVars[154] /* pwLine3.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[2];
  data->localData[0]->realVars[166] /* pwLine4.is.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[3];
  data->localData[0]->realVars[123] /* pwLine.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[4];
  data->localData[0]->realVars[135] /* pwLine1.is.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[5];
  data->localData[0]->realVars[63] /* constantLoad.p.ii variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[6];
  data->localData[0]->realVars[124] /* pwLine.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[7];
  data->localData[0]->realVars[64] /* constantLoad.p.ir variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[8];
  data->localData[0]->realVars[136] /* pwLine1.is.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[9];
  data->localData[0]->realVars[164] /* pwLine4.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[10];
  data->localData[0]->realVars[163] /* pwLine4.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[11];
  data->localData[0]->realVars[95] /* gENCLS.iq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[12];
  data->localData[0]->realVars[94] /* gENCLS.id variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[13];
  data->localData[0]->realVars[9] /* gENROE.Epq STATE(1) */ = data->simulationInfo->nonlinearSystemData[1].nlsx[14];
  data->localData[0]->realVars[8] /* gENROE.Epd STATE(1) */ = data->simulationInfo->nonlinearSystemData[1].nlsx[15];
  data->localData[0]->realVars[116] /* gENROE.uq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[16];
  data->localData[0]->realVars[106] /* gENROE.PSIppq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[17];
  data->localData[0]->realVars[114] /* gENROE.iq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[18];
  data->localData[0]->realVars[113] /* gENROE.id variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[19];
  data->localData[0]->realVars[148] /* pwLine2.vr.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[20];
  data->localData[0]->realVars[147] /* pwLine2.vr.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[21];
  data->localData[0]->realVars[139] /* pwLine1.vs.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[22];
  data->localData[0]->realVars[157] /* pwLine3.vr.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[23];
  data->localData[0]->realVars[158] /* pwLine3.vr.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[24];
  data->localData[0]->realVars[138] /* pwLine1.vr.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[25];
  data->localData[0]->realVars[134] /* pwLine1.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[26];
  data->localData[0]->realVars[137] /* pwLine1.vr.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[27];
  data->localData[0]->realVars[140] /* pwLine1.vs.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[28];
  data->localData[0]->realVars[133] /* pwLine1.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[29];
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_502(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_503(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_501(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_507(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_506(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_552(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_553(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_554(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_508(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_558(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_557(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_505(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_504(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_573(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_572(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_576(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_577(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_578(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_570(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_571(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_562(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_563(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_561(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_575(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_574(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_569(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_568(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_567(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_566(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_565(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_564(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_520(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_519(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_529(DATA *data, threadData_t *threadData);


/*
equation index: 148
type: SIMPLE_ASSIGN
eSAC1A.ECOMP0 = eSAC1A.ECOMP
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_148(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,148};
  data->simulationInfo->realParameter[81] /* eSAC1A.ECOMP0 PARAM */ = data->localData[0]->realVars[68] /* eSAC1A.ECOMP variable */;
  TRACE_POP
}

/*
equation index: 149
type: SIMPLE_ASSIGN
eSAC1A.V_REF = eSAC1A.VR0 / eSAC1A.K_A + eSAC1A.ECOMP0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_149(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,149};
  data->simulationInfo->realParameter[107] /* eSAC1A.V_REF PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[103] /* eSAC1A.VR0 PARAM */,data->simulationInfo->realParameter[86] /* eSAC1A.K_A PARAM */,"eSAC1A.K_A",equationIndexes) + data->simulationInfo->realParameter[81] /* eSAC1A.ECOMP0 PARAM */;
  TRACE_POP
}

/*
equation index: 150
type: SIMPLE_ASSIGN
eSAC1A.VoltageReference.k = eSAC1A.V_REF
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_150(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,150};
  data->simulationInfo->realParameter[110] /* eSAC1A.VoltageReference.k PARAM */ = data->simulationInfo->realParameter[107] /* eSAC1A.V_REF PARAM */;
  TRACE_POP
}

/*
equation index: 151
type: SIMPLE_ASSIGN
eSAC1A.DiffV.u1 = eSAC1A.VoltageReference.k
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_151(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,151};
  data->simulationInfo->realParameter[80] /* eSAC1A.DiffV.u1 PARAM */ = data->simulationInfo->realParameter[110] /* eSAC1A.VoltageReference.k PARAM */;
  TRACE_POP
}

/*
equation index: 152
type: SIMPLE_ASSIGN
eSAC1A.VoltageReference.y = eSAC1A.VoltageReference.k
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_152(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,152};
  data->simulationInfo->realParameter[111] /* eSAC1A.VoltageReference.y PARAM */ = data->simulationInfo->realParameter[110] /* eSAC1A.VoltageReference.k PARAM */;
  TRACE_POP
}

/*
equation index: 153
type: SIMPLE_ASSIGN
eSAC1A.imSimpleLag.y_start = eSAC1A.ECOMP0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_153(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,153};
  data->simulationInfo->realParameter[143] /* eSAC1A.imSimpleLag.y_start PARAM */ = data->simulationInfo->realParameter[81] /* eSAC1A.ECOMP0 PARAM */;
  TRACE_POP
}

/*
equation index: 154
type: SIMPLE_ASSIGN
$START.eSAC1A.imSimpleLag.state = eSAC1A.imSimpleLag.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_154(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,154};
  data->modelData->realVarsData[2].attribute /* eSAC1A.imSimpleLag.state STATE(1) */.start = data->simulationInfo->realParameter[143] /* eSAC1A.imSimpleLag.y_start PARAM */;
    data->localData[0]->realVars[2] /* eSAC1A.imSimpleLag.state STATE(1) */ = data->modelData->realVarsData[2].attribute /* eSAC1A.imSimpleLag.state STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[2].info /* eSAC1A.imSimpleLag.state */.name, (modelica_real) data->localData[0]->realVars[2] /* eSAC1A.imSimpleLag.state STATE(1) */);
  TRACE_POP
}

/*
equation index: 155
type: SIMPLE_ASSIGN
eSAC1A.imSimpleLag.state = eSAC1A.imSimpleLag.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_155(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,155};
  data->localData[0]->realVars[2] /* eSAC1A.imSimpleLag.state STATE(1) */ = data->simulationInfo->realParameter[143] /* eSAC1A.imSimpleLag.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 156
type: SIMPLE_ASSIGN
$START.eSAC1A.DiffV.u2 = eSAC1A.imSimpleLag.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_156(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,156};
  data->modelData->realVarsData[66].attribute /* eSAC1A.DiffV.u2 variable */.start = data->simulationInfo->realParameter[143] /* eSAC1A.imSimpleLag.y_start PARAM */;
    data->localData[0]->realVars[66] /* eSAC1A.DiffV.u2 variable */ = data->modelData->realVarsData[66].attribute /* eSAC1A.DiffV.u2 variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[66].info /* eSAC1A.DiffV.u2 */.name, (modelica_real) data->localData[0]->realVars[66] /* eSAC1A.DiffV.u2 variable */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_531(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_532(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_533(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_536(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_545(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_544(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_538(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_539(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_540(DATA *data, threadData_t *threadData);


/*
equation index: 166
type: SIMPLE_ASSIGN
eSAC1A.limiter1.y = homotopy(smooth(0, if eSAC1A.lV_GATE.p > eSAC1A.limiter1.uMax then eSAC1A.limiter1.uMax else if eSAC1A.lV_GATE.p < eSAC1A.limiter1.uMin then eSAC1A.limiter1.uMin else eSAC1A.lV_GATE.p), eSAC1A.lV_GATE.p)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_166(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,166};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  tmp0 = Greater(data->localData[0]->realVars[80] /* eSAC1A.lV_GATE.p variable */,data->simulationInfo->realParameter[145] /* eSAC1A.limiter1.uMax PARAM */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->simulationInfo->realParameter[145] /* eSAC1A.limiter1.uMax PARAM */;
  }
  else
  {
    tmp1 = Less(data->localData[0]->realVars[80] /* eSAC1A.lV_GATE.p variable */,data->simulationInfo->realParameter[146] /* eSAC1A.limiter1.uMin PARAM */);
    tmp3 = (tmp1?data->simulationInfo->realParameter[146] /* eSAC1A.limiter1.uMin PARAM */:data->localData[0]->realVars[80] /* eSAC1A.lV_GATE.p variable */);
  }
  data->localData[0]->realVars[81] /* eSAC1A.limiter1.y variable */ = homotopy(tmp3, data->localData[0]->realVars[80] /* eSAC1A.lV_GATE.p variable */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_542(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_543(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_537(DATA *data, threadData_t *threadData);


/*
equation index: 170
type: SIMPLE_ASSIGN
eSAC1A.imLeadLag.TF.x[1] = (eSAC1A.imLeadLag.TF.d * eSAC1A.add3_1.y - eSAC1A.imLeadLag.TF.y) / (eSAC1A.imLeadLag.TF.a[2] * eSAC1A.imLeadLag.TF.d - eSAC1A.imLeadLag.TF.bb[2])
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_170(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,170};
  data->localData[0]->realVars[77] /* eSAC1A.imLeadLag.TF.x[1] variable */ = DIVISION_SIM((data->simulationInfo->realParameter[132] /* eSAC1A.imLeadLag.TF.d PARAM */) * (data->localData[0]->realVars[72] /* eSAC1A.add3_1.y variable */) - data->localData[0]->realVars[78] /* eSAC1A.imLeadLag.TF.y variable */,(data->simulationInfo->realParameter[126] /* eSAC1A.imLeadLag.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[132] /* eSAC1A.imLeadLag.TF.d PARAM */) - data->simulationInfo->realParameter[131] /* eSAC1A.imLeadLag.TF.bb[2] PARAM */,"eSAC1A.imLeadLag.TF.a[2] * eSAC1A.imLeadLag.TF.d - eSAC1A.imLeadLag.TF.bb[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 171
type: SIMPLE_ASSIGN
eSAC1A.imLeadLag.TF.x_scaled[1] = eSAC1A.imLeadLag.TF.x[1] * eSAC1A.imLeadLag.TF.a_end
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_171(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,171};
  data->localData[0]->realVars[1] /* eSAC1A.imLeadLag.TF.x_scaled[1] STATE(1) */ = (data->localData[0]->realVars[77] /* eSAC1A.imLeadLag.TF.x[1] variable */) * (data->simulationInfo->realParameter[127] /* eSAC1A.imLeadLag.TF.a_end PARAM */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_534(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_530(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_546(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_528(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_526(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_527(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_547(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_549(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_548(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_560(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_559(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_555(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_556(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_550(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_551(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_522(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_523(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_579(DATA *data, threadData_t *threadData);


/*
equation index: 190
type: SIMPLE_ASSIGN
gENCLS.omega = $START.gENCLS.omega
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_190(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,190};
  data->localData[0]->realVars[7] /* gENCLS.omega STATE(1) */ = data->modelData->realVarsData[7].attribute /* gENCLS.omega STATE(1) */.start;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_387(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_388(DATA *data, threadData_t *threadData);


/*
equation index: 193
type: ALGORITHM

  assert(eSAC1A.limiter1.uMax >= eSAC1A.limiter1.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(eSAC1A.limiter1.uMax, 6, 0, true) + ") < uMin (=" + String(eSAC1A.limiter1.uMin, 6, 0, true) + ")");
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_193(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,193};
  modelica_boolean tmp4;
  static const MMC_DEFSTRINGLIT(tmp5,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp6;
  static const MMC_DEFSTRINGLIT(tmp7,11,") < uMin (=");
  modelica_string tmp8;
  static int tmp9 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp4 = GreaterEq(data->simulationInfo->realParameter[145] /* eSAC1A.limiter1.uMax PARAM */,data->simulationInfo->realParameter[146] /* eSAC1A.limiter1.uMin PARAM */);
    if(!tmp4)
    {
      tmp6 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[145] /* eSAC1A.limiter1.uMax PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp5),tmp6);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp7));
      tmp8 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[146] /* eSAC1A.limiter1.uMin PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp8);
      tmpMeta[3] = stringAppend(tmpMeta[2],(modelica_string) mmc_strings_len1[41]);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.3/Blocks/Nonlinear.mo",22,9,23,65,1};
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
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_10(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_11(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_12(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_386(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_14(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_15(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_16(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_393(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_18(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_19(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_20(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_21(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_22(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_23(data, threadData);
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
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_46(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_47(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_48(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_396(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_397(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_395(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_511(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_53(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_512(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_55(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_56(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_113(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_502(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_503(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_501(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_507(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_506(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_552(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_553(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_554(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_508(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_558(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_557(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_505(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_504(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_573(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_572(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_576(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_577(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_578(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_570(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_571(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_562(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_563(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_561(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_575(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_574(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_569(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_568(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_567(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_566(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_565(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_564(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_520(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_519(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_529(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_148(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_149(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_150(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_151(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_152(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_153(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_154(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_155(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_156(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_531(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_532(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_533(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_536(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_545(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_544(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_538(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_539(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_540(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_166(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_542(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_543(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_537(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_170(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_171(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_534(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_530(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_546(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_528(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_526(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_527(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_547(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_549(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_548(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_560(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_559(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_555(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_556(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_550(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_551(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_522(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_523(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_579(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_190(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_387(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_388(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_193(data, threadData);
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

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_10(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_11(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_12(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_386(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_14(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_15(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_16(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_393(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_18(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_19(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_20(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_21(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_22(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_23(DATA *data, threadData_t *threadData);


void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_217(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_218(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_219(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_220(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_221(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_222(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_223(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_224(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_225(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_226(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_227(DATA*, threadData_t*);
/*
equation index: 228
indexNonlinear: 2
type: NONLINEAR

vars: {eSAC1A.XADIFD}
eqns: {217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227}
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_228(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,228};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 228 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[0] = data->simulationInfo->realParameter[270] /* gENROE.efd0 PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 2);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,228};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 228 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[71] /* eSAC1A.XADIFD variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[0];
  TRACE_POP
}
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

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_46(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_47(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_48(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_396(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_397(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_395(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_511(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_53(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_512(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_55(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_56(DATA *data, threadData_t *threadData);


void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_250(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_251(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_252(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_253(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_254(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_255(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_256(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_257(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_258(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_259(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_260(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_261(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_262(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_263(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_264(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_265(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_266(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_267(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_268(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_269(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_270(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_271(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_272(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_273(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_274(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_275(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_305(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_304(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_303(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_302(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_301(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_300(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_299(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_298(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_297(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_296(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_295(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_294(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_293(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_292(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_291(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_290(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_289(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_288(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_287(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_286(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_285(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_284(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_283(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_282(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_281(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_280(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_279(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_278(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_277(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_276(DATA*, threadData_t*);
/*
equation index: 306
indexNonlinear: 3
type: NONLINEAR

vars: {pwLine3.ir.im, pwLine4.is.im, pwLine3.ir.re, pwLine4.is.re, pwLine.ir.im, pwLine1.is.im, constantLoad.p.ii, pwLine.ir.re, constantLoad.p.ir, pwLine1.is.re, pwLine4.ir.re, pwLine4.ir.im, gENCLS.iq, gENCLS.id, gENROE.Epq, gENROE.Epd, gENROE.uq, gENROE.PSIppq, gENROE.iq, gENROE.id, pwLine2.vr.re, pwLine2.vr.im, pwLine1.vs.im, pwLine3.vr.im, pwLine3.vr.re, pwLine1.vr.re, pwLine1.ir.re, pwLine1.vr.im, pwLine1.vs.re, pwLine1.ir.im}
eqns: {250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 305, 304, 303, 302, 301, 300, 299, 298, 297, 296, 295, 294, 293, 292, 291, 290, 289, 288, 287, 286, 285, 284, 283, 282, 281, 280, 279, 278, 277, 276}
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_306(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,306};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 306 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[0] = data->localData[0]->realVars[153] /* pwLine3.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[1] = data->localData[0]->realVars[165] /* pwLine4.is.im variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[2] = data->localData[0]->realVars[154] /* pwLine3.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[3] = data->localData[0]->realVars[166] /* pwLine4.is.re variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[4] = data->localData[0]->realVars[123] /* pwLine.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[5] = data->localData[0]->realVars[135] /* pwLine1.is.im variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[6] = data->simulationInfo->realParameter[69] /* constantLoad.ii0 PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[7] = data->localData[0]->realVars[124] /* pwLine.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[8] = data->simulationInfo->realParameter[70] /* constantLoad.ir0 PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[9] = data->localData[0]->realVars[136] /* pwLine1.is.re variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[10] = data->localData[0]->realVars[164] /* pwLine4.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[11] = data->localData[0]->realVars[163] /* pwLine4.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[12] = data->simulationInfo->realParameter[191] /* gENCLS.iq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[13] = data->simulationInfo->realParameter[189] /* gENCLS.id0 PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[14] = data->simulationInfo->realParameter[207] /* gENROE.Epq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[15] = data->simulationInfo->realParameter[206] /* gENROE.Epd0 PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[16] = data->simulationInfo->realParameter[280] /* gENROE.uq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[17] = data->simulationInfo->realParameter[234] /* gENROE.PSIppq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[18] = data->simulationInfo->realParameter[274] /* gENROE.iq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[19] = data->simulationInfo->realParameter[272] /* gENROE.id0 PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[20] = data->simulationInfo->realParameter[200] /* gENCLS.vr0 PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[21] = data->simulationInfo->realParameter[198] /* gENCLS.vi0 PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[22] = data->simulationInfo->realParameter[75] /* constantLoad.vi0 PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[23] = (data->simulationInfo->realParameter[6] /* FAULT.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[4] /* FAULT.angle_0 PARAM */));
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[24] = (data->simulationInfo->realParameter[6] /* FAULT.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[4] /* FAULT.angle_0 PARAM */));
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[25] = (data->simulationInfo->realParameter[34] /* SHUNT.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[32] /* SHUNT.angle_0 PARAM */));
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[26] = data->localData[0]->realVars[134] /* pwLine1.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[27] = (data->simulationInfo->realParameter[34] /* SHUNT.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[32] /* SHUNT.angle_0 PARAM */));
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[28] = data->simulationInfo->realParameter[76] /* constantLoad.vr0 PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[29] = data->localData[0]->realVars[133] /* pwLine1.ir.im variable */;
  retValue = solve_nonlinear_system(data, threadData, 3);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,306};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 306 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[153] /* pwLine3.ir.im variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[0];
  data->localData[0]->realVars[165] /* pwLine4.is.im variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[1];
  data->localData[0]->realVars[154] /* pwLine3.ir.re variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[2];
  data->localData[0]->realVars[166] /* pwLine4.is.re variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[3];
  data->localData[0]->realVars[123] /* pwLine.ir.im variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[4];
  data->localData[0]->realVars[135] /* pwLine1.is.im variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[5];
  data->localData[0]->realVars[63] /* constantLoad.p.ii variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[6];
  data->localData[0]->realVars[124] /* pwLine.ir.re variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[7];
  data->localData[0]->realVars[64] /* constantLoad.p.ir variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[8];
  data->localData[0]->realVars[136] /* pwLine1.is.re variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[9];
  data->localData[0]->realVars[164] /* pwLine4.ir.re variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[10];
  data->localData[0]->realVars[163] /* pwLine4.ir.im variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[11];
  data->localData[0]->realVars[95] /* gENCLS.iq variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[12];
  data->localData[0]->realVars[94] /* gENCLS.id variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[13];
  data->localData[0]->realVars[9] /* gENROE.Epq STATE(1) */ = data->simulationInfo->nonlinearSystemData[3].nlsx[14];
  data->localData[0]->realVars[8] /* gENROE.Epd STATE(1) */ = data->simulationInfo->nonlinearSystemData[3].nlsx[15];
  data->localData[0]->realVars[116] /* gENROE.uq variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[16];
  data->localData[0]->realVars[106] /* gENROE.PSIppq variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[17];
  data->localData[0]->realVars[114] /* gENROE.iq variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[18];
  data->localData[0]->realVars[113] /* gENROE.id variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[19];
  data->localData[0]->realVars[148] /* pwLine2.vr.re variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[20];
  data->localData[0]->realVars[147] /* pwLine2.vr.im variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[21];
  data->localData[0]->realVars[139] /* pwLine1.vs.im variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[22];
  data->localData[0]->realVars[157] /* pwLine3.vr.im variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[23];
  data->localData[0]->realVars[158] /* pwLine3.vr.re variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[24];
  data->localData[0]->realVars[138] /* pwLine1.vr.re variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[25];
  data->localData[0]->realVars[134] /* pwLine1.ir.re variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[26];
  data->localData[0]->realVars[137] /* pwLine1.vr.im variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[27];
  data->localData[0]->realVars[140] /* pwLine1.vs.re variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[28];
  data->localData[0]->realVars[133] /* pwLine1.ir.im variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[29];
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_502(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_503(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_501(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_507(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_506(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_552(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_553(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_554(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_508(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_558(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_557(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_505(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_504(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_573(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_572(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_576(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_577(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_578(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_570(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_571(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_562(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_563(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_561(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_575(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_574(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_569(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_568(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_567(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_566(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_565(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_564(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_520(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_519(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_529(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_148(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_149(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_150(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_151(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_152(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_153(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_154(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_155(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_156(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_531(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_532(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_533(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_536(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_545(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_544(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_538(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_539(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_540(DATA *data, threadData_t *threadData);


/*
equation index: 359
type: SIMPLE_ASSIGN
eSAC1A.limiter1.y = eSAC1A.lV_GATE.p
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_359(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,359};
  data->localData[0]->realVars[81] /* eSAC1A.limiter1.y variable */ = data->localData[0]->realVars[80] /* eSAC1A.lV_GATE.p variable */;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_542(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_543(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_537(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_170(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_171(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_534(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_530(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_546(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_528(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_526(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_527(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_547(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_549(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_548(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_560(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_559(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_555(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_556(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_550(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_551(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_522(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_523(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_579(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_190(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_387(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_388(DATA *data, threadData_t *threadData);


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

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_10(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_11(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_12(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_386(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_14(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_15(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_16(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_393(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_18(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_19(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_20(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_21(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_22(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_23(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_228(data, threadData);

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

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_46(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_47(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_48(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_396(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_397(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_395(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_511(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_53(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_512(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_55(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_56(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_306(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_502(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_503(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_501(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_507(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_506(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_552(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_553(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_554(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_508(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_558(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_557(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_505(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_504(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_573(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_572(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_576(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_577(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_578(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_570(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_571(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_562(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_563(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_561(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_575(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_574(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_569(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_568(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_567(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_566(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_565(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_564(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_520(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_519(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_529(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_148(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_149(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_150(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_151(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_152(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_153(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_154(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_155(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_156(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_531(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_532(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_533(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_536(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_545(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_544(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_538(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_539(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_540(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_359(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_542(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_543(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_537(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_170(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_171(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_534(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_530(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_546(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_528(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_526(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_527(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_547(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_549(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_548(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_560(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_559(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_555(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_556(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_550(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_551(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_522(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_523(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_579(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_190(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_387(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_388(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int *equationIndexes = NULL;
  double res = 0.0;

  
  TRACE_POP
  return 0;
}


#if defined(__cplusplus)
}
#endif

