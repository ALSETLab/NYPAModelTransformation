/* Initialization */
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC2A_model.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC2A_11mix.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC2A_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_functionInitialEquations_0(DATA *data, threadData_t *threadData);

/*
equation index: 1
type: SIMPLE_ASSIGN
gENCLS._omega = $START.gENCLS.omega
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  data->localData[0]->realVars[89] /* gENCLS.omega variable */ = data->modelData->realVarsData[89].attribute /* gENCLS.omega variable */.start;
  TRACE_POP
}

/*
equation index: 2
type: SIMPLE_ASSIGN
GEN1._p._ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2};
  data->localData[0]->realVars[39] /* GEN1.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 3
type: SIMPLE_ASSIGN
GEN1._p._ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_3(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3};
  data->localData[0]->realVars[38] /* GEN1.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 4
type: SIMPLE_ASSIGN
LOAD._p._ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_4(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4};
  data->localData[0]->realVars[47] /* LOAD.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 5
type: SIMPLE_ASSIGN
LOAD._p._ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_5(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5};
  data->localData[0]->realVars[46] /* LOAD.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 6
type: SIMPLE_ASSIGN
GEN2._p._ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_6(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6};
  data->localData[0]->realVars[43] /* GEN2.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 7
type: SIMPLE_ASSIGN
GEN2._p._ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_7(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7};
  data->localData[0]->realVars[42] /* GEN2.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 8
type: SIMPLE_ASSIGN
FAULT._p._ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_8(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,8};
  data->localData[0]->realVars[35] /* FAULT.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 9
type: SIMPLE_ASSIGN
FAULT._p._ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_9(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,9};
  data->localData[0]->realVars[34] /* FAULT.p.ii variable */ = 0.0;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_744(DATA *data, threadData_t *threadData);


/*
equation index: 11
type: SIMPLE_ASSIGN
gENCLS._delta = $START.gENCLS.delta
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_11(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11};
  data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */ = data->modelData->realVarsData[5].attribute /* gENCLS.delta STATE(1) */.start;
  TRACE_POP
}

/*
equation index: 12
type: SIMPLE_ASSIGN
gENCLS._eq = $START.gENCLS.eq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_12(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12};
  data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */ = data->modelData->realVarsData[6].attribute /* gENCLS.eq STATE(1) */.start;
  TRACE_POP
}

/*
equation index: 13
type: SIMPLE_ASSIGN
eSAC2A._Efd0 = eSAC2A.EFD0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_13(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13};
  data->simulationInfo->realParameter[89] = data->localData[0]->realVars[63] /* eSAC2A.EFD0 variable */;
  TRACE_POP
}

/*
equation index: 14
type: SIMPLE_ASSIGN
eSAC2A._derivative._y = eSAC2A.derivative.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_14(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14};
  data->localData[0]->realVars[67] /* eSAC2A.derivative.y variable */ = data->simulationInfo->realParameter[122];
  TRACE_POP
}

/*
equation index: 15
type: SIMPLE_ASSIGN
generator._w = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_15(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,15};
  data->localData[0]->realVars[12] /* generator.w STATE(1) */ = 0.0;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_751(DATA *data, threadData_t *threadData);


/*
equation index: 17
type: SIMPLE_ASSIGN
generator._delta = generator.delta0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_17(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,17};
  data->localData[0]->realVars[11] /* generator.delta STATE(1) */ = data->simulationInfo->realParameter[267];
  TRACE_POP
}

/*
equation index: 18
type: SIMPLE_ASSIGN
der(generator._PSIkq) = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_18(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,18};
  data->localData[0]->realVars[23] /* der(generator.PSIkq) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 19
type: SIMPLE_ASSIGN
der(generator._PSIkd) = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_19(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,19};
  data->localData[0]->realVars[22] /* der(generator.PSIkd) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 20
type: SIMPLE_ASSIGN
der(generator._Epq) = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_20(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,20};
  data->localData[0]->realVars[21] /* der(generator.Epq) STATE_DER */ = 0.0;
  TRACE_POP
}

void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_21(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_22(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_23(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_24(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_25(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_26(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_27(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_28(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_30(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_29(DATA*, threadData_t*);
/*
equation index: 31
indexNonlinear: 0
type: NONLINEAR

vars: {eSAC2A._XADIFD, eSAC2A._rotatingExciterWithDemagnetization._sISO._y}
eqns: {21, 22, 23, 24, 25, 26, 27, 28, 30, 29}
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_31(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,31};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 31 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[0] = data->localData[0]->realVars[64] /* eSAC2A.XADIFD variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1] = data->localData[0]->realVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */;
  retValue = solve_nonlinear_system(data, threadData, 0);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,31};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 31 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[64] /* eSAC2A.XADIFD variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[0];
  data->localData[0]->realVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[1];
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_860(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_861(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_863(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_864(DATA *data, threadData_t *threadData);


/*
equation index: 36
type: SIMPLE_ASSIGN
eSAC2A._VFE0 = eSAC2A.VE0 * (OpenIPSL.NonElectrical.Functions.SE(eSAC2A.VE0, eSAC2A.S_EE_1, eSAC2A.S_EE_2, eSAC2A.E_1, eSAC2A.E_2) + eSAC2A.K_E) + eSAC2A.Ifd0 * eSAC2A.K_D
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_36(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,36};
  data->simulationInfo->realParameter[106] = (data->simulationInfo->realParameter[105]) * (omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->simulationInfo->realParameter[105], data->simulationInfo->realParameter[97], data->simulationInfo->realParameter[98], data->simulationInfo->realParameter[87], data->simulationInfo->realParameter[88]) + data->simulationInfo->realParameter[95]) + (data->simulationInfo->realParameter[91]) * (data->simulationInfo->realParameter[94]);
  TRACE_POP
}

/*
equation index: 37
type: SIMPLE_ASSIGN
eSAC2A._VR0 = eSAC2A.VFE0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_37(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,37};
  data->simulationInfo->realParameter[107] = data->simulationInfo->realParameter[106];
  TRACE_POP
}

/*
equation index: 38
type: SIMPLE_ASSIGN
eSAC2A._simpleLagLim._y_start = eSAC2A.VR0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_38(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,38};
  data->simulationInfo->realParameter[175] = data->simulationInfo->realParameter[107];
  TRACE_POP
}

/*
equation index: 39
type: SIMPLE_ASSIGN
eSAC2A._simpleLagLim._state = eSAC2A.simpleLagLim.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_39(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,39};
  data->localData[0]->realVars[4] /* eSAC2A.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[175];
  TRACE_POP
}

/*
equation index: 40
type: SIMPLE_ASSIGN
$START._eSAC2A._hV_GATE._n1 = eSAC2A.simpleLagLim.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_40(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,40};
  data->modelData->realVarsData[69].attribute /* eSAC2A.hV_GATE.n1 variable */.start = data->simulationInfo->realParameter[175];
    data->localData[0]->realVars[69] /* eSAC2A.hV_GATE.n1 variable */ = data->modelData->realVarsData[69].attribute /* eSAC2A.hV_GATE.n1 variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[69].info /* eSAC2A.hV_GATE.n1 */.name, (modelica_real) data->localData[0]->realVars[69] /* eSAC2A.hV_GATE.n1 variable */);
  TRACE_POP
}

/*
equation index: 41
type: SIMPLE_ASSIGN
eSAC2A._imLeadLag._y_start = eSAC2A.VR0 / eSAC2A.K_A
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_41(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,41};
  data->simulationInfo->realParameter[138] = DIVISION_SIM(data->simulationInfo->realParameter[107],data->simulationInfo->realParameter[92],"eSAC2A.K_A",equationIndexes);
  TRACE_POP
}

/*
equation index: 42
type: SIMPLE_ASSIGN
eSAC2A._imLeadLag._TF._y_start = eSAC2A.imLeadLag.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_42(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,42};
  data->simulationInfo->realParameter[136] = data->simulationInfo->realParameter[138];
  TRACE_POP
}

/*
equation index: 43
type: SIMPLE_ASSIGN
eSAC2A._imLeadLag._TF._y = eSAC2A.imLeadLag.TF.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_43(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,43};
  data->localData[0]->realVars[72] /* eSAC2A.imLeadLag.TF.y variable */ = data->simulationInfo->realParameter[136];
  TRACE_POP
}

/*
equation index: 44
type: SIMPLE_ASSIGN
eSAC2A._imLeadLag._x_start = eSAC2A.VR0 / eSAC2A.K_A
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_44(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,44};
  data->simulationInfo->realParameter[137] = DIVISION_SIM(data->simulationInfo->realParameter[107],data->simulationInfo->realParameter[92],"eSAC2A.K_A",equationIndexes);
  TRACE_POP
}

/*
equation index: 45
type: SIMPLE_ASSIGN
eSAC2A._imLeadLag._TF._x_start[1] = eSAC2A.imLeadLag.x_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_45(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,45};
  data->simulationInfo->realParameter[135] = data->simulationInfo->realParameter[137];
  TRACE_POP
}

/*
equation index: 46
type: SIMPLE_ASSIGN
$START._eSAC2A._imLeadLag._TF._x[1] = eSAC2A.imLeadLag.TF.x_start[1]
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_46(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,46};
  data->modelData->realVarsData[71].attribute /* eSAC2A.imLeadLag.TF.x[1] variable */.start = data->simulationInfo->realParameter[135];
    data->localData[0]->realVars[71] /* eSAC2A.imLeadLag.TF.x[1] variable */ = data->modelData->realVarsData[71].attribute /* eSAC2A.imLeadLag.TF.x[1] variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[71].info /* eSAC2A.imLeadLag.TF.x[1] */.name, (modelica_real) data->localData[0]->realVars[71] /* eSAC2A.imLeadLag.TF.x[1] variable */);
  TRACE_POP
}

/*
equation index: 47
type: SIMPLE_ASSIGN
eSAC2A._derivative._x_start = eSAC2A.VFE0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_47(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,47};
  data->simulationInfo->realParameter[121] = data->simulationInfo->realParameter[106];
  TRACE_POP
}

/*
equation index: 48
type: SIMPLE_ASSIGN
$START._eSAC2A._derivative._x = eSAC2A.derivative.x_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_48(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,48};
  data->modelData->realVarsData[0].attribute /* eSAC2A.derivative.x STATE(1) */.start = data->simulationInfo->realParameter[121];
    data->localData[0]->realVars[0] /* eSAC2A.derivative.x STATE(1) */ = data->modelData->realVarsData[0].attribute /* eSAC2A.derivative.x STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[0].info /* eSAC2A.derivative.x */.name, (modelica_real) data->localData[0]->realVars[0] /* eSAC2A.derivative.x STATE(1) */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_754(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_755(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_753(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_853(DATA *data, threadData_t *threadData);


/*
equation index: 53
type: SIMPLE_ASSIGN
eSAC2A._derivative._x = (eSAC2A.derivative.u / eSAC2A.derivative.T * 0.03 - eSAC2A.derivative.y) * eSAC2A.derivative.T / 0.03
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_53(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,53};
  data->localData[0]->realVars[0] /* eSAC2A.derivative.x STATE(1) */ = DIVISION_SIM(((DIVISION_SIM(data->localData[0]->realVars[66] /* eSAC2A.derivative.u variable */,data->simulationInfo->realParameter[119],"eSAC2A.derivative.T",equationIndexes)) * (0.03) - data->localData[0]->realVars[67] /* eSAC2A.derivative.y variable */) * (data->simulationInfo->realParameter[119]),0.03,"0.03",equationIndexes);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_854(DATA *data, threadData_t *threadData);


/*
equation index: 55
type: SIMPLE_ASSIGN
der(generator._Epd) = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_55(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,55};
  data->localData[0]->realVars[20] /* der(generator.Epd) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 56
type: SIMPLE_ASSIGN
generator._XaqIlq = (-$DER.generator.Epd) * generator.Tpq0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_56(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,56};
  data->localData[0]->realVars[104] /* generator.XaqIlq variable */ = ((-data->localData[0]->realVars[20] /* der(generator.Epd) STATE_DER */)) * (data->simulationInfo->realParameter[245]);
  TRACE_POP
}

void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_57(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_58(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_59(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_60(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_61(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_62(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_63(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_64(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_65(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_66(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_67(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_68(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_69(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_70(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_71(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_72(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_73(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_74(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_75(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_76(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_77(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_78(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_79(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_80(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_81(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_82(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_108(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_107(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_106(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_105(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_104(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_103(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_102(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_101(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_100(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_99(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_98(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_97(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_96(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_95(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_94(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_93(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_92(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_91(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_90(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_89(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_88(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_87(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_86(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_85(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_84(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_83(DATA*, threadData_t*);
/*
equation index: 109
indexNonlinear: 1
type: NONLINEAR

vars: {pwLine._ir._im, pwLine1._is._im, constantLoad._p._ir, pwLine._ir._re, pwLine3._is._re, pwLine3._is._im, pwLine3._ir._re, pwLine4._is._re, pwLine4._is._im, pwLine3._ir._im, pwLine4._ir._im, pwLine1._ir._re, gENCLS._id, gENCLS._iq, generator._Epd, generator._Epq, generator._uq, generator._PSIppq, generator._id, generator._iq, pwLine1._vr._im, pwLine1._vr._re, pwLine1._vs._re, pwLine1._vs._im, pwLine3._vr._re, pwLine3._vr._im}
eqns: {57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 108, 107, 106, 105, 104, 103, 102, 101, 100, 99, 98, 97, 96, 95, 94, 93, 92, 91, 90, 89, 88, 87, 86, 85, 84, 83}
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_109(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,109};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 109 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[0] = data->localData[0]->realVars[117] /* pwLine.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[1] = data->localData[0]->realVars[129] /* pwLine1.is.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[2] = data->localData[0]->realVars[54] /* constantLoad.p.ir variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[3] = data->localData[0]->realVars[118] /* pwLine.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[4] = data->localData[0]->realVars[142] /* pwLine3.is.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[5] = data->localData[0]->realVars[141] /* pwLine3.is.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[6] = data->localData[0]->realVars[140] /* pwLine3.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[7] = data->localData[0]->realVars[152] /* pwLine4.is.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[8] = data->localData[0]->realVars[151] /* pwLine4.is.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[9] = data->localData[0]->realVars[139] /* pwLine3.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[10] = data->localData[0]->realVars[149] /* pwLine4.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[11] = data->localData[0]->realVars[128] /* pwLine1.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[12] = data->localData[0]->realVars[87] /* gENCLS.id variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[13] = data->localData[0]->realVars[88] /* gENCLS.iq variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[14] = data->localData[0]->realVars[7] /* generator.Epd STATE(1) */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[15] = data->localData[0]->realVars[8] /* generator.Epq STATE(1) */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[16] = data->localData[0]->realVars[110] /* generator.uq variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[17] = data->localData[0]->realVars[100] /* generator.PSIppq variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[18] = data->localData[0]->realVars[107] /* generator.id variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[19] = data->localData[0]->realVars[108] /* generator.iq variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[20] = data->localData[0]->realVars[131] /* pwLine1.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[21] = data->localData[0]->realVars[132] /* pwLine1.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[22] = data->localData[0]->realVars[134] /* pwLine1.vs.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[23] = data->localData[0]->realVars[133] /* pwLine1.vs.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[24] = data->localData[0]->realVars[144] /* pwLine3.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[25] = data->localData[0]->realVars[143] /* pwLine3.vr.im variable */;
  retValue = solve_nonlinear_system(data, threadData, 1);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,109};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 109 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[117] /* pwLine.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[0];
  data->localData[0]->realVars[129] /* pwLine1.is.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[1];
  data->localData[0]->realVars[54] /* constantLoad.p.ir variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[2];
  data->localData[0]->realVars[118] /* pwLine.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[3];
  data->localData[0]->realVars[142] /* pwLine3.is.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[4];
  data->localData[0]->realVars[141] /* pwLine3.is.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[5];
  data->localData[0]->realVars[140] /* pwLine3.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[6];
  data->localData[0]->realVars[152] /* pwLine4.is.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[7];
  data->localData[0]->realVars[151] /* pwLine4.is.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[8];
  data->localData[0]->realVars[139] /* pwLine3.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[9];
  data->localData[0]->realVars[149] /* pwLine4.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[10];
  data->localData[0]->realVars[128] /* pwLine1.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[11];
  data->localData[0]->realVars[87] /* gENCLS.id variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[12];
  data->localData[0]->realVars[88] /* gENCLS.iq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[13];
  data->localData[0]->realVars[7] /* generator.Epd STATE(1) */ = data->simulationInfo->nonlinearSystemData[1].nlsx[14];
  data->localData[0]->realVars[8] /* generator.Epq STATE(1) */ = data->simulationInfo->nonlinearSystemData[1].nlsx[15];
  data->localData[0]->realVars[110] /* generator.uq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[16];
  data->localData[0]->realVars[100] /* generator.PSIppq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[17];
  data->localData[0]->realVars[107] /* generator.id variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[18];
  data->localData[0]->realVars[108] /* generator.iq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[19];
  data->localData[0]->realVars[131] /* pwLine1.vr.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[20];
  data->localData[0]->realVars[132] /* pwLine1.vr.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[21];
  data->localData[0]->realVars[134] /* pwLine1.vs.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[22];
  data->localData[0]->realVars[133] /* pwLine1.vs.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[23];
  data->localData[0]->realVars[144] /* pwLine3.vr.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[24];
  data->localData[0]->realVars[143] /* pwLine3.vr.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[25];
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_871(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_870(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_893(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_891(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_892(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_890(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_872(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_873(DATA *data, threadData_t *threadData);


/*
equation index: 118
type: SIMPLE_ASSIGN
eSAC2A._ECOMP0 = eSAC2A.ECOMP
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_118(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,118};
  data->simulationInfo->realParameter[86] = data->localData[0]->realVars[61] /* eSAC2A.ECOMP variable */;
  TRACE_POP
}

/*
equation index: 119
type: SIMPLE_ASSIGN
eSAC2A._V_REF = eSAC2A.VR0 / eSAC2A.K_A + eSAC2A.ECOMP0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_119(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,119};
  data->simulationInfo->realParameter[111] = DIVISION_SIM(data->simulationInfo->realParameter[107],data->simulationInfo->realParameter[92],"eSAC2A.K_A",equationIndexes) + data->simulationInfo->realParameter[86];
  TRACE_POP
}

/*
equation index: 120
type: SIMPLE_ASSIGN
eSAC2A._VoltageReference._k = eSAC2A.V_REF
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_120(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,120};
  data->simulationInfo->realParameter[114] = data->simulationInfo->realParameter[111];
  TRACE_POP
}

/*
equation index: 121
type: SIMPLE_ASSIGN
eSAC2A._imSimpleLag._y_start = eSAC2A.ECOMP0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_121(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,121};
  data->simulationInfo->realParameter[142] = data->simulationInfo->realParameter[86];
  TRACE_POP
}

/*
equation index: 122
type: SIMPLE_ASSIGN
$START._eSAC2A._imSimpleLag._state = eSAC2A.imSimpleLag.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_122(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,122};
  data->modelData->realVarsData[2].attribute /* eSAC2A.imSimpleLag.state STATE(1) */.start = data->simulationInfo->realParameter[142];
    data->localData[0]->realVars[2] /* eSAC2A.imSimpleLag.state STATE(1) */ = data->modelData->realVarsData[2].attribute /* eSAC2A.imSimpleLag.state STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[2].info /* eSAC2A.imSimpleLag.state */.name, (modelica_real) data->localData[0]->realVars[2] /* eSAC2A.imSimpleLag.state STATE(1) */);
  TRACE_POP
}

/*
equation index: 123
type: SIMPLE_ASSIGN
eSAC2A._imSimpleLag._state = eSAC2A.imSimpleLag.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_123(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,123};
  data->localData[0]->realVars[2] /* eSAC2A.imSimpleLag.state STATE(1) */ = data->simulationInfo->realParameter[142];
  TRACE_POP
}

/*
equation index: 124
type: SIMPLE_ASSIGN
$START._eSAC2A._DiffV._u2 = eSAC2A.imSimpleLag.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_124(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,124};
  data->modelData->realVarsData[56].attribute /* eSAC2A.DiffV.u2 variable */.start = data->simulationInfo->realParameter[142];
    data->localData[0]->realVars[56] /* eSAC2A.DiffV.u2 variable */ = data->modelData->realVarsData[56].attribute /* eSAC2A.DiffV.u2 variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[56].info /* eSAC2A.DiffV.u2 */.name, (modelica_real) data->localData[0]->realVars[56] /* eSAC2A.DiffV.u2 variable */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_875(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_876(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_877(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_880(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_889(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_888(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_882(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_883(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_884(DATA *data, threadData_t *threadData);


/*
equation index: 134
type: SIMPLE_ASSIGN
eSAC2A._limiter1._y = homotopy(smooth(0, if eSAC2A.lV_GATE.p > eSAC2A.limiter1.uMax then eSAC2A.limiter1.uMax else if eSAC2A.lV_GATE.p < eSAC2A.limiter1.uMin then eSAC2A.limiter1.uMin else eSAC2A.lV_GATE.p), eSAC2A.lV_GATE.p)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_134(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,134};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  tmp0 = Greater(data->localData[0]->realVars[74] /* eSAC2A.lV_GATE.p variable */,data->simulationInfo->realParameter[143]);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->simulationInfo->realParameter[143];
  }
  else
  {
    tmp1 = Less(data->localData[0]->realVars[74] /* eSAC2A.lV_GATE.p variable */,data->simulationInfo->realParameter[144]);
    tmp3 = (tmp1?data->simulationInfo->realParameter[144]:data->localData[0]->realVars[74] /* eSAC2A.lV_GATE.p variable */);
  }
  data->localData[0]->realVars[75] /* eSAC2A.limiter1.y variable */ = homotopy(tmp3, data->localData[0]->realVars[74] /* eSAC2A.lV_GATE.p variable */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_886(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_887(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_881(DATA *data, threadData_t *threadData);


/*
equation index: 138
type: SIMPLE_ASSIGN
eSAC2A._imLeadLag._TF._x[1] = (eSAC2A.imLeadLag.TF.d * eSAC2A.add3_1.y - eSAC2A.imLeadLag.TF.y) / (eSAC2A.imLeadLag.TF.a[2] * eSAC2A.imLeadLag.TF.d - eSAC2A.imLeadLag.TF.bb[2])
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_138(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,138};
  data->localData[0]->realVars[71] /* eSAC2A.imLeadLag.TF.x[1] variable */ = DIVISION_SIM((data->simulationInfo->realParameter[134]) * (data->localData[0]->realVars[65] /* eSAC2A.add3_1.y variable */) - data->localData[0]->realVars[72] /* eSAC2A.imLeadLag.TF.y variable */,(data->simulationInfo->realParameter[128]) * (data->simulationInfo->realParameter[134]) - data->simulationInfo->realParameter[133],"eSAC2A.imLeadLag.TF.a[2] * eSAC2A.imLeadLag.TF.d - eSAC2A.imLeadLag.TF.bb[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 139
type: SIMPLE_ASSIGN
eSAC2A._imLeadLag._TF._x_scaled[1] = eSAC2A.imLeadLag.TF.x[1] * eSAC2A.imLeadLag.TF.a_end
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_139(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,139};
  data->localData[0]->realVars[1] /* eSAC2A.imLeadLag.TF.x_scaled[1] STATE(1) */ = (data->localData[0]->realVars[71] /* eSAC2A.imLeadLag.TF.x[1] variable */) * (data->simulationInfo->realParameter[129]);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_878(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_874(DATA *data, threadData_t *threadData);


/*
equation index: 142
type: SIMPLE_ASSIGN
GEN1._angle = 57.29577951308232 * atan2(pwLine.vs.im, pwLine.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_142(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,142};
  data->localData[0]->realVars[37] /* GEN1.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[121] /* pwLine.vs.im variable */, data->localData[0]->realVars[122] /* pwLine.vs.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_910(DATA *data, threadData_t *threadData);


/*
equation index: 144
type: SIMPLE_ASSIGN
LOAD._angle = 57.29577951308232 * atan2(pwLine1.vs.im, pwLine1.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_144(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,144};
  data->localData[0]->realVars[45] /* LOAD.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[133] /* pwLine1.vs.im variable */, data->localData[0]->realVars[134] /* pwLine1.vs.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_915(DATA *data, threadData_t *threadData);


/*
equation index: 146
type: SIMPLE_ASSIGN
GEN2._angle = 57.29577951308232 * atan2(pwLine1.vr.im, pwLine1.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_146(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,146};
  data->localData[0]->realVars[41] /* GEN2.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[131] /* pwLine1.vr.im variable */, data->localData[0]->realVars[132] /* pwLine1.vr.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_899(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_900(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_901(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_922(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_921(DATA *data, threadData_t *threadData);


/*
equation index: 152
type: SIMPLE_ASSIGN
FAULT._angle = 57.29577951308232 * atan2(pwLine3.vr.im, pwLine3.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_152(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,152};
  data->localData[0]->realVars[33] /* FAULT.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[143] /* pwLine3.vr.im variable */, data->localData[0]->realVars[144] /* pwLine3.vr.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_907(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_914(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_913(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_904(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_903(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_906(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_905(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_898(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_897(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_920(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_919(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_912(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_911(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_917(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_918(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_895(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_896(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_868(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_869(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_745(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_746(DATA *data, threadData_t *threadData);


/*
equation index: 174
type: ALGORITHM

  assert(eSAC2A.limiter1.uMax >= eSAC2A.limiter1.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(eSAC2A.limiter1.uMax, 6, 0, true) + ") < uMin (=" + String(eSAC2A.limiter1.uMin, 6, 0, true) + ")");
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_174(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,174};
  modelica_boolean tmp4;
  static const MMC_DEFSTRINGLIT(tmp5,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp6;
  static const MMC_DEFSTRINGLIT(tmp7,11,") < uMin (=");
  modelica_string tmp8;
  static int tmp9 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp4 = GreaterEq(data->simulationInfo->realParameter[143],data->simulationInfo->realParameter[144]);
    if(!tmp4)
    {
      tmp6 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[143], ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp5),tmp6);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp7));
      tmp8 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[144], ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp8);
      tmpMeta[3] = stringAppend(tmpMeta[2],(modelica_string) mmc_strings_len1[41]);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Nonlinear.mo",19,9,20,65,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neSAC2A.limiter1.uMax >= eSAC2A.limiter1.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta[3]));
      }
    }
  }
  TRACE_POP
}
OMC_DISABLE_OPT
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_1(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_2(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_3(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_4(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_5(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_6(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_7(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_8(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_9(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_744(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_11(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_12(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_13(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_14(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_15(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_751(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_17(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_18(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_19(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_20(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_31(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_860(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_861(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_863(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_864(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_36(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_37(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_38(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_39(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_40(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_41(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_42(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_43(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_44(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_45(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_46(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_47(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_48(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_754(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_755(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_753(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_853(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_53(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_854(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_55(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_56(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_109(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_871(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_870(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_893(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_891(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_892(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_890(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_872(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_873(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_118(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_119(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_120(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_121(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_122(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_123(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_124(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_875(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_876(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_877(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_880(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_889(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_888(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_882(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_883(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_884(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_134(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_886(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_887(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_881(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_138(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_139(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_878(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_874(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_142(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_910(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_144(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_915(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_146(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_899(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_900(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_901(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_922(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_921(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_152(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_907(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_914(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_913(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_904(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_903(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_906(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_905(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_898(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_897(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_920(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_919(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_912(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_911(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_917(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_918(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_895(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_896(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_868(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_869(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_745(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_746(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_174(data, threadData);
  TRACE_POP
}


int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}

/*
equation index: 569
type: SIMPLE_ASSIGN
eSAC2A._DiffV2._k2 = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_569(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,569};
  data->simulationInfo->realParameter[85] = 1.0;
  TRACE_POP
}

/*
equation index: 568
type: SIMPLE_ASSIGN
eSAC2A._DiffV2._k1 = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_568(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,568};
  data->simulationInfo->realParameter[84] = 1.0;
  TRACE_POP
}

/*
equation index: 567
type: SIMPLE_ASSIGN
eSAC2A._K_E = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_567(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,567};
  data->simulationInfo->realParameter[95] = 1.0;
  TRACE_POP
}

/*
equation index: 566
type: SIMPLE_ASSIGN
eSAC2A._const._k = eSAC2A.K_E
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_566(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,566};
  data->simulationInfo->realParameter[118] = data->simulationInfo->realParameter[95];
  TRACE_POP
}

/*
equation index: 565
type: SIMPLE_ASSIGN
eSAC2A._E_2 = 7.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_565(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,565};
  data->simulationInfo->realParameter[88] = 7.0;
  TRACE_POP
}

/*
equation index: 564
type: SIMPLE_ASSIGN
eSAC2A._se1._E2 = eSAC2A.E_2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_564(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,564};
  data->simulationInfo->realParameter[167] = data->simulationInfo->realParameter[88];
  TRACE_POP
}

/*
equation index: 563
type: SIMPLE_ASSIGN
eSAC2A._E_1 = 5.25
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_563(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,563};
  data->simulationInfo->realParameter[87] = 5.25;
  TRACE_POP
}

/*
equation index: 562
type: SIMPLE_ASSIGN
eSAC2A._se1._E1 = eSAC2A.E_1
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_562(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,562};
  data->simulationInfo->realParameter[166] = data->simulationInfo->realParameter[87];
  TRACE_POP
}

/*
equation index: 561
type: SIMPLE_ASSIGN
eSAC2A._S_EE_2 = 0.1
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_561(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,561};
  data->simulationInfo->realParameter[98] = 0.1;
  TRACE_POP
}

/*
equation index: 560
type: SIMPLE_ASSIGN
eSAC2A._se1._SE2 = eSAC2A.S_EE_2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_560(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,560};
  data->simulationInfo->realParameter[169] = data->simulationInfo->realParameter[98];
  TRACE_POP
}

/*
equation index: 559
type: SIMPLE_ASSIGN
eSAC2A._S_EE_1 = 0.03
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_559(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,559};
  data->simulationInfo->realParameter[97] = 0.03;
  TRACE_POP
}

/*
equation index: 558
type: SIMPLE_ASSIGN
eSAC2A._se1._SE1 = eSAC2A.S_EE_1
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_558(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,558};
  data->simulationInfo->realParameter[168] = data->simulationInfo->realParameter[97];
  TRACE_POP
}

/*
equation index: 557
type: SIMPLE_ASSIGN
eSAC2A._DiffV1._k2 = -1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_557(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,557};
  data->simulationInfo->realParameter[83] = -1.0;
  TRACE_POP
}

/*
equation index: 556
type: SIMPLE_ASSIGN
eSAC2A._DiffV1._k1 = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_556(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,556};
  data->simulationInfo->realParameter[82] = 1.0;
  TRACE_POP
}

/*
equation index: 555
type: SIMPLE_ASSIGN
eSAC2A._V_FEMAX = 10.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_555(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,555};
  data->simulationInfo->realParameter[110] = 10.0;
  TRACE_POP
}

/*
equation index: 554
type: SIMPLE_ASSIGN
eSAC2A._FEMAX._k = eSAC2A.V_FEMAX
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_554(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,554};
  data->simulationInfo->realParameter[90] = data->simulationInfo->realParameter[110];
  TRACE_POP
}

/*
equation index: 553
type: SIMPLE_ASSIGN
eSAC2A._lowLim._k = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_553(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,553};
  data->simulationInfo->realParameter[145] = 0.0;
  TRACE_POP
}

/*
equation index: 552
type: SIMPLE_ASSIGN
eSAC2A._K_C = 0.2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_552(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,552};
  data->simulationInfo->realParameter[93] = 0.2;
  TRACE_POP
}

/*
equation index: 551
type: SIMPLE_ASSIGN
eSAC2A._rectifierCommutationVoltageDrop._K_C = eSAC2A.K_C
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_551(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,551};
  data->simulationInfo->realParameter[146] = data->simulationInfo->realParameter[93];
  TRACE_POP
}

/*
equation index: 550
type: SIMPLE_ASSIGN
eSAC2A._rectifierCommutationVoltageDrop._gain2._k = eSAC2A.rectifierCommutationVoltageDrop.K_C
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_550(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,550};
  data->simulationInfo->realParameter[147] = data->simulationInfo->realParameter[146];
  TRACE_POP
}

/*
equation index: 549
type: SIMPLE_ASSIGN
eSAC2A._add3_1._k3 = -1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_549(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,549};
  data->simulationInfo->realParameter[117] = -1.0;
  TRACE_POP
}

/*
equation index: 548
type: SIMPLE_ASSIGN
eSAC2A._add3_1._k2 = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_548(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,548};
  data->simulationInfo->realParameter[116] = 1.0;
  TRACE_POP
}

/*
equation index: 547
type: SIMPLE_ASSIGN
eSAC2A._add3_1._k1 = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_547(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,547};
  data->simulationInfo->realParameter[115] = 1.0;
  TRACE_POP
}

/*
equation index: 546
type: SIMPLE_ASSIGN
eSAC2A._K_D = 0.48
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_546(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,546};
  data->simulationInfo->realParameter[94] = 0.48;
  TRACE_POP
}

/*
equation index: 545
type: SIMPLE_ASSIGN
eSAC2A._rotatingExciterWithDemagnetization._K_D = eSAC2A.K_D
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_545(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,545};
  data->simulationInfo->realParameter[151] = data->simulationInfo->realParameter[94];
  TRACE_POP
}

/*
equation index: 544
type: SIMPLE_ASSIGN
eSAC2A._T_E = 0.8
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_544(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,544};
  data->simulationInfo->realParameter[102] = 0.8;
  TRACE_POP
}

/*
equation index: 543
type: SIMPLE_ASSIGN
eSAC2A._rotatingExciterWithDemagnetization._T_E = eSAC2A.T_E
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_543(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,543};
  data->simulationInfo->realParameter[158] = data->simulationInfo->realParameter[102];
  TRACE_POP
}

/*
equation index: 542
type: SIMPLE_ASSIGN
eSAC2A._rotatingExciterWithDemagnetization._sISO._K = 1.0 / eSAC2A.rotatingExciterWithDemagnetization.T_E
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_542(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,542};
  data->simulationInfo->realParameter[160] = DIVISION_SIM(1.0,data->simulationInfo->realParameter[158],"eSAC2A.rotatingExciterWithDemagnetization.T_E",equationIndexes);
  TRACE_POP
}

/*
equation index: 541
type: SIMPLE_ASSIGN
eSAC2A._rotatingExciterWithDemagnetization._E_2 = eSAC2A.E_2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_541(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,541};
  data->simulationInfo->realParameter[149] = data->simulationInfo->realParameter[88];
  TRACE_POP
}

/*
equation index: 540
type: SIMPLE_ASSIGN
eSAC2A._rotatingExciterWithDemagnetization._se1._E2 = eSAC2A.rotatingExciterWithDemagnetization.E_2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_540(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,540};
  data->simulationInfo->realParameter[163] = data->simulationInfo->realParameter[149];
  TRACE_POP
}

/*
equation index: 539
type: SIMPLE_ASSIGN
eSAC2A._rotatingExciterWithDemagnetization._E_1 = eSAC2A.E_1
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_539(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,539};
  data->simulationInfo->realParameter[148] = data->simulationInfo->realParameter[87];
  TRACE_POP
}

/*
equation index: 538
type: SIMPLE_ASSIGN
eSAC2A._rotatingExciterWithDemagnetization._se1._E1 = eSAC2A.rotatingExciterWithDemagnetization.E_1
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_538(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,538};
  data->simulationInfo->realParameter[162] = data->simulationInfo->realParameter[148];
  TRACE_POP
}

/*
equation index: 537
type: SIMPLE_ASSIGN
eSAC2A._rotatingExciterWithDemagnetization._S_EE_2 = eSAC2A.S_EE_2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_537(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,537};
  data->simulationInfo->realParameter[154] = data->simulationInfo->realParameter[98];
  TRACE_POP
}

/*
equation index: 536
type: SIMPLE_ASSIGN
eSAC2A._rotatingExciterWithDemagnetization._se1._SE2 = eSAC2A.rotatingExciterWithDemagnetization.S_EE_2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_536(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,536};
  data->simulationInfo->realParameter[165] = data->simulationInfo->realParameter[154];
  TRACE_POP
}

/*
equation index: 535
type: SIMPLE_ASSIGN
eSAC2A._rotatingExciterWithDemagnetization._S_EE_1 = eSAC2A.S_EE_1
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_535(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,535};
  data->simulationInfo->realParameter[153] = data->simulationInfo->realParameter[97];
  TRACE_POP
}

/*
equation index: 534
type: SIMPLE_ASSIGN
eSAC2A._rotatingExciterWithDemagnetization._se1._SE1 = eSAC2A.rotatingExciterWithDemagnetization.S_EE_1
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_534(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,534};
  data->simulationInfo->realParameter[164] = data->simulationInfo->realParameter[153];
  TRACE_POP
}

/*
equation index: 533
type: SIMPLE_ASSIGN
eSAC2A._rotatingExciterWithDemagnetization._Sum._k3 = eSAC2A.rotatingExciterWithDemagnetization.K_D
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_533(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,533};
  data->simulationInfo->realParameter[157] = data->simulationInfo->realParameter[151];
  TRACE_POP
}

/*
equation index: 532
type: SIMPLE_ASSIGN
eSAC2A._rotatingExciterWithDemagnetization._Sum._k2 = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_532(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,532};
  data->simulationInfo->realParameter[156] = 1.0;
  TRACE_POP
}

/*
equation index: 531
type: SIMPLE_ASSIGN
eSAC2A._rotatingExciterWithDemagnetization._Sum._k1 = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_531(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,531};
  data->simulationInfo->realParameter[155] = 1.0;
  TRACE_POP
}

/*
equation index: 530
type: SIMPLE_ASSIGN
eSAC2A._rotatingExciterWithDemagnetization._K_E = eSAC2A.K_E
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_530(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,530};
  data->simulationInfo->realParameter[152] = data->simulationInfo->realParameter[95];
  TRACE_POP
}

/*
equation index: 529
type: SIMPLE_ASSIGN
eSAC2A._rotatingExciterWithDemagnetization._gain._k = eSAC2A.rotatingExciterWithDemagnetization.K_E
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_529(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,529};
  data->simulationInfo->realParameter[159] = data->simulationInfo->realParameter[152];
  TRACE_POP
}

/*
equation index: 528
type: SIMPLE_ASSIGN
eSAC2A._derivative._zeroGain = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_528(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,528};
  data->simulationInfo->booleanParameter[45] = 0;
  TRACE_POP
}

/*
equation index: 527
type: SIMPLE_ASSIGN
eSAC2A._derivative._y_start = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_527(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,527};
  data->simulationInfo->realParameter[122] = 0.0;
  TRACE_POP
}

/*
equation index: 526
type: SIMPLE_ASSIGN
eSAC2A._derivative._initType = Modelica.Blocks.Types.Init.InitialOutput
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_526(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,526};
  data->simulationInfo->integerParameter[1] = 4;
  TRACE_POP
}

/*
equation index: 525
type: SIMPLE_ASSIGN
eSAC2A._T_F = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_525(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,525};
  data->simulationInfo->realParameter[103] = 1.0;
  TRACE_POP
}

/*
equation index: 524
type: SIMPLE_ASSIGN
eSAC2A._derivative._T = eSAC2A.T_F
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_524(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,524};
  data->simulationInfo->realParameter[119] = data->simulationInfo->realParameter[103];
  TRACE_POP
}

/*
equation index: 523
type: SIMPLE_ASSIGN
eSAC2A._derivative._k = 0.03
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_523(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,523};
  data->simulationInfo->realParameter[120] = 0.03;
  TRACE_POP
}

/*
equation index: 522
type: SIMPLE_ASSIGN
eSAC2A._T_A = 0.02
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_522(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,522};
  data->simulationInfo->realParameter[99] = 0.02;
  TRACE_POP
}

/*
equation index: 521
type: SIMPLE_ASSIGN
eSAC2A._simpleLagLim._T = eSAC2A.T_A
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_521(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,521};
  data->simulationInfo->realParameter[171] = data->simulationInfo->realParameter[99];
  TRACE_POP
}

/*
equation index: 520
type: SIMPLE_ASSIGN
eSAC2A._simpleLagLim._T_mod = if eSAC2A.simpleLagLim.T < 1e-15 then 1000.0 else eSAC2A.simpleLagLim.T
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_520(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,520};
  modelica_boolean tmp0;
  tmp0 = Less(data->simulationInfo->realParameter[171],1e-15);
  data->simulationInfo->realParameter[172] = (tmp0?1000.0:data->simulationInfo->realParameter[171]);
  TRACE_POP
}

/*
equation index: 519
type: SIMPLE_ASSIGN
eSAC2A._V_AMIN = -5.43
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_519(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,519};
  data->simulationInfo->realParameter[109] = -5.43;
  TRACE_POP
}

/*
equation index: 518
type: SIMPLE_ASSIGN
eSAC2A._simpleLagLim._outMin = eSAC2A.V_AMIN
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_518(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,518};
  data->simulationInfo->realParameter[174] = data->simulationInfo->realParameter[109];
  TRACE_POP
}

/*
equation index: 517
type: SIMPLE_ASSIGN
eSAC2A._V_AMAX = 9.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_517(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,517};
  data->simulationInfo->realParameter[108] = 9.0;
  TRACE_POP
}

/*
equation index: 516
type: SIMPLE_ASSIGN
eSAC2A._simpleLagLim._outMax = eSAC2A.V_AMAX
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_516(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,516};
  data->simulationInfo->realParameter[173] = data->simulationInfo->realParameter[108];
  TRACE_POP
}

/*
equation index: 515
type: SIMPLE_ASSIGN
eSAC2A._K_A = 400.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_515(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,515};
  data->simulationInfo->realParameter[92] = 400.0;
  TRACE_POP
}

/*
equation index: 514
type: SIMPLE_ASSIGN
eSAC2A._simpleLagLim._K = eSAC2A.K_A
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_514(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,514};
  data->simulationInfo->realParameter[170] = data->simulationInfo->realParameter[92];
  TRACE_POP
}

/*
equation index: 513
type: SIMPLE_ASSIGN
eSAC2A._limiter1._limitsAtInit = true
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_513(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,513};
  data->simulationInfo->booleanParameter[46] = 1;
  TRACE_POP
}

/*
equation index: 512
type: SIMPLE_ASSIGN
eSAC2A._limiter1._strict = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_512(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,512};
  data->simulationInfo->booleanParameter[47] = 0;
  TRACE_POP
}

/*
equation index: 511
type: SIMPLE_ASSIGN
eSAC2A._V_RMIN = -4.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_511(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,511};
  data->simulationInfo->realParameter[113] = -4.0;
  TRACE_POP
}

/*
equation index: 510
type: SIMPLE_ASSIGN
eSAC2A._limiter1._uMin = eSAC2A.V_RMIN
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_510(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,510};
  data->simulationInfo->realParameter[144] = data->simulationInfo->realParameter[113];
  TRACE_POP
}

/*
equation index: 509
type: SIMPLE_ASSIGN
eSAC2A._V_RMAX = 4.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_509(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,509};
  data->simulationInfo->realParameter[112] = 4.0;
  TRACE_POP
}

/*
equation index: 508
type: SIMPLE_ASSIGN
eSAC2A._limiter1._uMax = eSAC2A.V_RMAX
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_508(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,508};
  data->simulationInfo->realParameter[143] = data->simulationInfo->realParameter[112];
  TRACE_POP
}

/*
equation index: 507
type: SIMPLE_ASSIGN
eSAC2A._T_R = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_507(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,507};
  data->simulationInfo->realParameter[104] = 0.0;
  TRACE_POP
}

/*
equation index: 506
type: SIMPLE_ASSIGN
eSAC2A._imSimpleLag._T = eSAC2A.T_R
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_506(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,506};
  data->simulationInfo->realParameter[140] = data->simulationInfo->realParameter[104];
  TRACE_POP
}

/*
equation index: 505
type: SIMPLE_ASSIGN
eSAC2A._imSimpleLag._T_mod = if eSAC2A.imSimpleLag.T < 1e-15 then 1000.0 else eSAC2A.imSimpleLag.T
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_505(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,505};
  modelica_boolean tmp1;
  tmp1 = Less(data->simulationInfo->realParameter[140],1e-15);
  data->simulationInfo->realParameter[141] = (tmp1?1000.0:data->simulationInfo->realParameter[140]);
  TRACE_POP
}

/*
equation index: 504
type: SIMPLE_ASSIGN
eSAC2A._imSimpleLag._K = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_504(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,504};
  data->simulationInfo->realParameter[139] = 1.0;
  TRACE_POP
}

/*
equation index: 503
type: SIMPLE_ASSIGN
eSAC2A._T_C = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_503(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,503};
  data->simulationInfo->realParameter[101] = 0.0;
  TRACE_POP
}

/*
equation index: 502
type: SIMPLE_ASSIGN
eSAC2A._imLeadLag._T1 = eSAC2A.T_C
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_502(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,502};
  data->simulationInfo->realParameter[124] = data->simulationInfo->realParameter[101];
  TRACE_POP
}

/*
equation index: 501
type: SIMPLE_ASSIGN
eSAC2A._T_B = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_501(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,501};
  data->simulationInfo->realParameter[100] = 0.0;
  TRACE_POP
}

/*
equation index: 500
type: SIMPLE_ASSIGN
eSAC2A._imLeadLag._T2 = eSAC2A.T_B
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_500(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,500};
  data->simulationInfo->realParameter[125] = data->simulationInfo->realParameter[100];
  TRACE_POP
}

/*
equation index: 499
type: SIMPLE_ASSIGN
eSAC2A._imLeadLag._T2_dummy = if abs(eSAC2A.imLeadLag.T1 - eSAC2A.imLeadLag.T2) < 1e-15 then 1000.0 else eSAC2A.imLeadLag.T2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_499(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,499};
  modelica_boolean tmp2;
  tmp2 = Less(fabs(data->simulationInfo->realParameter[124] - data->simulationInfo->realParameter[125]),1e-15);
  data->simulationInfo->realParameter[126] = (tmp2?1000.0:data->simulationInfo->realParameter[125]);
  TRACE_POP
}

/*
equation index: 498
type: SIMPLE_ASSIGN
eSAC2A._imLeadLag._TF._a[1] = eSAC2A.imLeadLag.T2_dummy
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_498(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,498};
  data->simulationInfo->realParameter[127] = data->simulationInfo->realParameter[126];
  TRACE_POP
}

/*
equation index: 497
type: SIMPLE_ASSIGN
eSAC2A._imLeadLag._TF._a[2] = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_497(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,497};
  data->simulationInfo->realParameter[128] = 1.0;
  TRACE_POP
}

/*
equation index: 496
type: SIMPLE_ASSIGN
eSAC2A._imLeadLag._TF._a_end = if eSAC2A.imLeadLag.TF.a[2] > 1e-13 * sqrt(eSAC2A.imLeadLag.TF.a[1] ^ 2.0 + eSAC2A.imLeadLag.TF.a[2] ^ 2.0) then eSAC2A.imLeadLag.TF.a[2] else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_496(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,496};
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_boolean tmp5;
  tmp3 = data->simulationInfo->realParameter[127];
  tmp4 = data->simulationInfo->realParameter[128];
  tmp5 = Greater(data->simulationInfo->realParameter[128],(1e-13) * (sqrt((tmp3 * tmp3) + (tmp4 * tmp4))));
  data->simulationInfo->realParameter[129] = (tmp5?data->simulationInfo->realParameter[128]:1.0);
  TRACE_POP
}

/*
equation index: 495
type: SIMPLE_ASSIGN
eSAC2A._imLeadLag._K = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_495(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,495};
  data->simulationInfo->realParameter[123] = 1.0;
  TRACE_POP
}

/*
equation index: 494
type: SIMPLE_ASSIGN
eSAC2A._imLeadLag._TF._b[1] = eSAC2A.imLeadLag.K * eSAC2A.imLeadLag.T1
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_494(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,494};
  data->simulationInfo->realParameter[130] = (data->simulationInfo->realParameter[123]) * (data->simulationInfo->realParameter[124]);
  TRACE_POP
}

/*
equation index: 493
type: SIMPLE_ASSIGN
eSAC2A._imLeadLag._TF._bb[1] = eSAC2A.imLeadLag.TF.b[1]
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_493(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,493};
  data->simulationInfo->realParameter[132] = data->simulationInfo->realParameter[130];
  TRACE_POP
}

/*
equation index: 492
type: SIMPLE_ASSIGN
eSAC2A._imLeadLag._TF._d = eSAC2A.imLeadLag.TF.bb[1] / eSAC2A.imLeadLag.TF.a[1]
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_492(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,492};
  data->simulationInfo->realParameter[134] = DIVISION_SIM(data->simulationInfo->realParameter[132],data->simulationInfo->realParameter[127],"eSAC2A.imLeadLag.TF.a[1]",equationIndexes);
  TRACE_POP
}

/*
equation index: 491
type: SIMPLE_ASSIGN
eSAC2A._imLeadLag._TF._b[2] = eSAC2A.imLeadLag.K
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_491(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,491};
  data->simulationInfo->realParameter[131] = data->simulationInfo->realParameter[123];
  TRACE_POP
}

/*
equation index: 490
type: SIMPLE_ASSIGN
eSAC2A._imLeadLag._TF._bb[2] = eSAC2A.imLeadLag.TF.b[2]
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_490(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,490};
  data->simulationInfo->realParameter[133] = data->simulationInfo->realParameter[131];
  TRACE_POP
}

/*
equation index: 489
type: SIMPLE_ASSIGN
eSAC2A._imLeadLag._TF._nx = 1
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_489(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,489};
  data->simulationInfo->integerParameter[5] = ((modelica_integer) 1);
  TRACE_POP
}

/*
equation index: 488
type: SIMPLE_ASSIGN
eSAC2A._imLeadLag._TF._nb = 2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_488(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,488};
  data->simulationInfo->integerParameter[4] = ((modelica_integer) 2);
  TRACE_POP
}

/*
equation index: 487
type: SIMPLE_ASSIGN
eSAC2A._imLeadLag._TF._na = 2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_487(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,487};
  data->simulationInfo->integerParameter[3] = ((modelica_integer) 2);
  TRACE_POP
}

/*
equation index: 486
type: SIMPLE_ASSIGN
eSAC2A._imLeadLag._TF._initType = Modelica.Blocks.Types.Init.InitialOutput
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_486(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,486};
  data->simulationInfo->integerParameter[2] = 4;
  TRACE_POP
}

/*
equation index: 485
type: SIMPLE_ASSIGN
eSAC2A._K_F = 0.03
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_485(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,485};
  data->simulationInfo->realParameter[96] = 0.03;
  TRACE_POP
}

/*
equation index: 484
type: SIMPLE_ASSIGN
eSAC2A._DiffV._k2 = -1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_484(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,484};
  data->simulationInfo->realParameter[81] = -1.0;
  TRACE_POP
}

/*
equation index: 483
type: SIMPLE_ASSIGN
eSAC2A._DiffV._k1 = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_483(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,483};
  data->simulationInfo->realParameter[80] = 1.0;
  TRACE_POP
}

/*
equation index: 482
type: SIMPLE_ASSIGN
const5._k = -1000.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_482(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,482};
  data->simulationInfo->realParameter[37] = -1000.0;
  TRACE_POP
}

/*
equation index: 481
type: SIMPLE_ASSIGN
const4._k = 1000.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_481(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,481};
  data->simulationInfo->realParameter[36] = 1000.0;
  TRACE_POP
}

/*
equation index: 480
type: SIMPLE_ASSIGN
const2._k = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_480(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,480};
  data->simulationInfo->realParameter[35] = 0.0;
  TRACE_POP
}

/*
equation index: 479
type: SIMPLE_ASSIGN
const._k = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_479(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,479};
  data->simulationInfo->realParameter[34] = 0.0;
  TRACE_POP
}

/*
equation index: 478
type: SIMPLE_ASSIGN
generator._Xppq = 0.2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_478(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,478};
  data->simulationInfo->realParameter[254] = 0.2;
  TRACE_POP
}

/*
equation index: 477
type: SIMPLE_ASSIGN
generator._Xl = 0.12
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_477(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,477};
  data->simulationInfo->realParameter[250] = 0.12;
  TRACE_POP
}

/*
equation index: 476
type: SIMPLE_ASSIGN
generator._Xpq = 0.6
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_476(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,476};
  data->simulationInfo->realParameter[255] = 0.6;
  TRACE_POP
}

/*
equation index: 475
type: SIMPLE_ASSIGN
generator._K4q = (generator.Xpq - generator.Xppq) / (generator.Xpq - generator.Xl)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_475(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,475};
  data->simulationInfo->realParameter[222] = DIVISION_SIM(data->simulationInfo->realParameter[255] - data->simulationInfo->realParameter[254],data->simulationInfo->realParameter[255] - data->simulationInfo->realParameter[250],"generator.Xpq - generator.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 474
type: SIMPLE_ASSIGN
generator._K3q = (generator.Xppq - generator.Xl) / (generator.Xpq - generator.Xl)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_474(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,474};
  data->simulationInfo->realParameter[220] = DIVISION_SIM(data->simulationInfo->realParameter[254] - data->simulationInfo->realParameter[250],data->simulationInfo->realParameter[255] - data->simulationInfo->realParameter[250],"generator.Xpq - generator.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 473
type: SIMPLE_ASSIGN
generator._Xpd = 0.3
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_473(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,473};
  data->simulationInfo->realParameter[251] = 0.3;
  TRACE_POP
}

/*
equation index: 472
type: SIMPLE_ASSIGN
generator._Xppd = 0.2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_472(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,472};
  data->simulationInfo->realParameter[253] = 0.2;
  TRACE_POP
}

/*
equation index: 471
type: SIMPLE_ASSIGN
generator._K4d = (generator.Xpd - generator.Xppd) / (generator.Xpd - generator.Xl)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_471(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,471};
  data->simulationInfo->realParameter[221] = DIVISION_SIM(data->simulationInfo->realParameter[251] - data->simulationInfo->realParameter[253],data->simulationInfo->realParameter[251] - data->simulationInfo->realParameter[250],"generator.Xpd - generator.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 470
type: SIMPLE_ASSIGN
generator._K3d = (generator.Xppd - generator.Xl) / (generator.Xpd - generator.Xl)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_470(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,470};
  data->simulationInfo->realParameter[219] = DIVISION_SIM(data->simulationInfo->realParameter[253] - data->simulationInfo->realParameter[250],data->simulationInfo->realParameter[251] - data->simulationInfo->realParameter[250],"generator.Xpd - generator.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 469
type: SIMPLE_ASSIGN
generator._K2q = (generator.Xpq - generator.Xl) * (generator.Xppq - generator.Xl) / (generator.Xpq - generator.Xppq)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_469(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,469};
  data->simulationInfo->realParameter[218] = (data->simulationInfo->realParameter[255] - data->simulationInfo->realParameter[250]) * (DIVISION_SIM(data->simulationInfo->realParameter[254] - data->simulationInfo->realParameter[250],data->simulationInfo->realParameter[255] - data->simulationInfo->realParameter[254],"generator.Xpq - generator.Xppq",equationIndexes));
  TRACE_POP
}

/*
equation index: 468
type: SIMPLE_ASSIGN
generator._Xq = 1.35
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_468(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,468};
  data->simulationInfo->realParameter[256] = 1.35;
  TRACE_POP
}

/*
equation index: 467
type: SIMPLE_ASSIGN
generator._K1q = (generator.Xpq - generator.Xppq) * (generator.Xq - generator.Xpq) / (generator.Xpq - generator.Xl) ^ 2.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_467(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,467};
  modelica_real tmp6;
  tmp6 = data->simulationInfo->realParameter[255] - data->simulationInfo->realParameter[250];
  data->simulationInfo->realParameter[216] = (data->simulationInfo->realParameter[255] - data->simulationInfo->realParameter[254]) * (DIVISION_SIM(data->simulationInfo->realParameter[256] - data->simulationInfo->realParameter[255],(tmp6 * tmp6),"(generator.Xpq - generator.Xl) ^ 2.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 466
type: SIMPLE_ASSIGN
generator._K2d = (generator.Xpd - generator.Xl) * (generator.Xppd - generator.Xl) / (generator.Xpd - generator.Xppd)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_466(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,466};
  data->simulationInfo->realParameter[217] = (data->simulationInfo->realParameter[251] - data->simulationInfo->realParameter[250]) * (DIVISION_SIM(data->simulationInfo->realParameter[253] - data->simulationInfo->realParameter[250],data->simulationInfo->realParameter[251] - data->simulationInfo->realParameter[253],"generator.Xpd - generator.Xppd",equationIndexes));
  TRACE_POP
}

/*
equation index: 465
type: SIMPLE_ASSIGN
generator._Xd = 1.41
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_465(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,465};
  data->simulationInfo->realParameter[249] = 1.41;
  TRACE_POP
}

/*
equation index: 464
type: SIMPLE_ASSIGN
generator._K1d = (generator.Xpd - generator.Xppd) * (generator.Xd - generator.Xpd) / (generator.Xpd - generator.Xl) ^ 2.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_464(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,464};
  modelica_real tmp7;
  tmp7 = data->simulationInfo->realParameter[251] - data->simulationInfo->realParameter[250];
  data->simulationInfo->realParameter[215] = (data->simulationInfo->realParameter[251] - data->simulationInfo->realParameter[253]) * (DIVISION_SIM(data->simulationInfo->realParameter[249] - data->simulationInfo->realParameter[251],(tmp7 * tmp7),"(generator.Xpd - generator.Xl) ^ 2.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 463
type: SIMPLE_ASSIGN
generator._PSIpp0_dq._im = -0.3513686588669895
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_463(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,463};
  data->simulationInfo->realParameter[229] = -0.3513686588669895;
  TRACE_POP
}

/*
equation index: 462
type: SIMPLE_ASSIGN
generator._PSIppq0 = generator.PSIpp0_dq.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_462(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,462};
  data->simulationInfo->realParameter[232] = data->simulationInfo->realParameter[229];
  TRACE_POP
}

/*
equation index: 461
type: SIMPLE_ASSIGN
generator._I_dq._re = 0.3403918503789823
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_461(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,461};
  data->simulationInfo->realParameter[210] = 0.3403918503789823;
  TRACE_POP
}

/*
equation index: 460
type: SIMPLE_ASSIGN
generator._iq0 = generator.I_dq.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_460(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,460};
  data->simulationInfo->realParameter[273] = data->simulationInfo->realParameter[210];
  TRACE_POP
}

/*
equation index: 459
type: SIMPLE_ASSIGN
generator._PSIq0 = (-generator.PSIppq0) - generator.Xppq * generator.iq0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_459(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,459};
  data->simulationInfo->realParameter[233] = (-data->simulationInfo->realParameter[232]) - ((data->simulationInfo->realParameter[254]) * (data->simulationInfo->realParameter[273]));
  TRACE_POP
}

/*
equation index: 458
type: SIMPLE_ASSIGN
generator._PSIpp0_dq._re = 0.9511696446345945
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_458(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,458};
  data->simulationInfo->realParameter[230] = 0.9511696446345945;
  TRACE_POP
}

/*
equation index: 457
type: SIMPLE_ASSIGN
generator._PSIppd0 = generator.PSIpp0_dq.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_457(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,457};
  data->simulationInfo->realParameter[231] = data->simulationInfo->realParameter[230];
  TRACE_POP
}

/*
equation index: 456
type: SIMPLE_ASSIGN
generator._I_dq._im = 0.2169491553618439
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_456(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,456};
  data->simulationInfo->realParameter[209] = 0.2169491553618439;
  TRACE_POP
}

/*
equation index: 455
type: SIMPLE_ASSIGN
generator._id0 = generator.I_dq.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_455(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,455};
  data->simulationInfo->realParameter[271] = data->simulationInfo->realParameter[209];
  TRACE_POP
}

/*
equation index: 454
type: SIMPLE_ASSIGN
generator._PSId0 = generator.PSIppd0 - generator.Xppd * generator.id0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_454(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,454};
  data->simulationInfo->realParameter[224] = data->simulationInfo->realParameter[231] - ((data->simulationInfo->realParameter[253]) * (data->simulationInfo->realParameter[271]));
  TRACE_POP
}

/*
equation index: 453
type: SIMPLE_ASSIGN
generator._PSIkq0 = ((generator.Xpq - generator.Xl) * generator.K3q * generator.iq0 - generator.PSIppq0) / (generator.K3q + generator.K4q)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_453(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,453};
  data->simulationInfo->realParameter[226] = DIVISION_SIM((data->simulationInfo->realParameter[255] - data->simulationInfo->realParameter[250]) * ((data->simulationInfo->realParameter[220]) * (data->simulationInfo->realParameter[273])) - data->simulationInfo->realParameter[232],data->simulationInfo->realParameter[220] + data->simulationInfo->realParameter[222],"generator.K3q + generator.K4q",equationIndexes);
  TRACE_POP
}

/*
equation index: 452
type: SIMPLE_ASSIGN
generator._PSIkd0 = (generator.PSIppd0 + (generator.Xl - generator.Xpd) * generator.K3d * generator.id0) / (generator.K3d + generator.K4d)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_452(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,452};
  data->simulationInfo->realParameter[225] = DIVISION_SIM(data->simulationInfo->realParameter[231] + (data->simulationInfo->realParameter[250] - data->simulationInfo->realParameter[251]) * ((data->simulationInfo->realParameter[219]) * (data->simulationInfo->realParameter[271])),data->simulationInfo->realParameter[219] + data->simulationInfo->realParameter[221],"generator.K3d + generator.K4d",equationIndexes);
  TRACE_POP
}

/*
equation index: 451
type: SIMPLE_ASSIGN
generator._Epd0 = generator.PSIkq0 + (generator.Xl - generator.Xpq) * generator.iq0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_451(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,451};
  data->simulationInfo->realParameter[206] = data->simulationInfo->realParameter[226] + (data->simulationInfo->realParameter[250] - data->simulationInfo->realParameter[255]) * (data->simulationInfo->realParameter[273]);
  TRACE_POP
}

/*
equation index: 450
type: SIMPLE_ASSIGN
generator._Epq0 = generator.PSIkd0 + (generator.Xpd - generator.Xl) * generator.id0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_450(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,450};
  data->simulationInfo->realParameter[207] = data->simulationInfo->realParameter[225] + (data->simulationInfo->realParameter[251] - data->simulationInfo->realParameter[250]) * (data->simulationInfo->realParameter[271]);
  TRACE_POP
}

/*
equation index: 449
type: SIMPLE_ASSIGN
generator._Xpp = 0.2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_449(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,449};
  data->simulationInfo->realParameter[252] = 0.2;
  TRACE_POP
}

/*
equation index: 448
type: SIMPLE_ASSIGN
generator._S10 = 0.1
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_448(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,448};
  data->simulationInfo->realParameter[239] = 0.1;
  TRACE_POP
}

/*
equation index: 447
type: SIMPLE_ASSIGN
generator._S12 = 0.5
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_447(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,447};
  data->simulationInfo->realParameter[240] = 0.5;
  TRACE_POP
}

/*
equation index: 446
type: SIMPLE_ASSIGN
generator._PSIpp0._re = 1.00266858402025
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_446(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,446};
  data->simulationInfo->realParameter[228] = 1.00266858402025;
  TRACE_POP
}

/*
equation index: 445
type: SIMPLE_ASSIGN
generator._PSIpp0._im = 0.1511268934608054
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_445(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,445};
  data->simulationInfo->realParameter[227] = 0.1511268934608054;
  TRACE_POP
}

/*
equation index: 444
type: SIMPLE_ASSIGN
generator._abs_PSIpp0 = (generator.PSIpp0.re ^ 2.0 + generator.PSIpp0.im ^ 2.0) ^ 0.5
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_444(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,444};
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  tmp8 = data->simulationInfo->realParameter[228];
  tmp9 = data->simulationInfo->realParameter[227];
  tmp10 = (tmp8 * tmp8) + (tmp9 * tmp9);
  if(!(tmp10 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(generator.PSIpp0.re ^ 2.0 + generator.PSIpp0.im ^ 2.0) was %g should be >= 0", tmp10);
  }
  data->simulationInfo->realParameter[260] = sqrt(tmp10);
  TRACE_POP
}

/*
equation index: 443
type: SIMPLE_ASSIGN
generator._dsat = OpenIPSL.NonElectrical.Functions.SE(generator.abs_PSIpp0, generator.S10, generator.S12, 1.0, 1.2)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_443(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,443};
  data->simulationInfo->realParameter[268] = omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->simulationInfo->realParameter[260], data->simulationInfo->realParameter[239], data->simulationInfo->realParameter[240], 1.0, 1.2);
  TRACE_POP
}

/*
equation index: 442
type: SIMPLE_ASSIGN
generator._efd0 = generator.PSIppd0 * (1.0 + generator.dsat) + generator.id0 * (generator.Xpd - generator.Xpp + generator.Xd - generator.Xpd)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_442(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,442};
  data->simulationInfo->realParameter[269] = (data->simulationInfo->realParameter[231]) * (1.0 + data->simulationInfo->realParameter[268]) + (data->simulationInfo->realParameter[271]) * (data->simulationInfo->realParameter[251] - data->simulationInfo->realParameter[252] + data->simulationInfo->realParameter[249] - data->simulationInfo->realParameter[251]);
  TRACE_POP
}

/*
equation index: 441
type: SIMPLE_ASSIGN
generator._R_a = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_441(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,441};
  data->simulationInfo->realParameter[236] = 0.0;
  TRACE_POP
}

/*
equation index: 440
type: SIMPLE_ASSIGN
generator._P_0 = 39999952.9123306
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_440(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,440};
  data->simulationInfo->realParameter[234] = 39999952.9123306;
  TRACE_POP
}

/*
equation index: 439
type: SIMPLE_ASSIGN
generator._M_b = 100000000.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_439(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,439};
  data->simulationInfo->realParameter[223] = 100000000.0;
  TRACE_POP
}

/*
equation index: 438
type: SIMPLE_ASSIGN
generator._p0 = generator.P_0 / generator.M_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_438(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,438};
  data->simulationInfo->realParameter[275] = DIVISION_SIM(data->simulationInfo->realParameter[234],data->simulationInfo->realParameter[223],"generator.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 437
type: SIMPLE_ASSIGN
generator._pm0 = generator.p0 + generator.R_a * (generator.iq0 ^ 2.0 + generator.id0 ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_437(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,437};
  modelica_real tmp11;
  modelica_real tmp12;
  tmp11 = data->simulationInfo->realParameter[273];
  tmp12 = data->simulationInfo->realParameter[271];
  data->simulationInfo->realParameter[276] = data->simulationInfo->realParameter[275] + (data->simulationInfo->realParameter[236]) * ((tmp11 * tmp11) + (tmp12 * tmp12));
  TRACE_POP
}

/*
equation index: 436
type: SIMPLE_ASSIGN
generator._uq0 = generator.PSIppd0 + (-generator.Xppd) * generator.id0 - generator.R_a * generator.iq0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_436(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,436};
  data->simulationInfo->realParameter[279] = data->simulationInfo->realParameter[231] + ((-data->simulationInfo->realParameter[253])) * (data->simulationInfo->realParameter[271]) - ((data->simulationInfo->realParameter[236]) * (data->simulationInfo->realParameter[273]));
  TRACE_POP
}

/*
equation index: 435
type: SIMPLE_ASSIGN
generator._ud0 = generator.Xppq * generator.iq0 + (-generator.PSIppq0) - generator.R_a * generator.id0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_435(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,435};
  data->simulationInfo->realParameter[278] = (data->simulationInfo->realParameter[254]) * (data->simulationInfo->realParameter[273]) + (-data->simulationInfo->realParameter[232]) - ((data->simulationInfo->realParameter[236]) * (data->simulationInfo->realParameter[271]));
  TRACE_POP
}

/*
equation index: 434
type: SIMPLE_ASSIGN
generator._DQ_dq._im = -0.4824562617299565
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_434(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,434};
  data->simulationInfo->realParameter[204] = -0.4824562617299565;
  TRACE_POP
}

/*
equation index: 433
type: SIMPLE_ASSIGN
generator._DQ_dq._re = 0.8759200622873959
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_433(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,433};
  data->simulationInfo->realParameter[205] = 0.8759200622873959;
  TRACE_POP
}

/*
equation index: 432
type: SIMPLE_ASSIGN
generator._ang_PSIpp0 = Modelica.Math.atan3(generator.PSIpp0.im, generator.PSIpp0.re, 0.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_432(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,432};
  data->simulationInfo->realParameter[262] = omc_Modelica_Math_atan3(threadData, data->simulationInfo->realParameter[227], data->simulationInfo->realParameter[228], 0.0);
  TRACE_POP
}

/*
equation index: 431
type: SIMPLE_ASSIGN
generator._It._re = 0.402824529267427
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_431(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,431};
  data->simulationInfo->realParameter[214] = 0.402824529267427;
  TRACE_POP
}

/*
equation index: 430
type: SIMPLE_ASSIGN
generator._It._im = -0.02580593802055783
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_430(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,430};
  data->simulationInfo->realParameter[213] = -0.02580593802055783;
  TRACE_POP
}

/*
equation index: 429
type: SIMPLE_ASSIGN
generator._ang_It = Modelica.Math.atan3(generator.It.im, generator.It.re, 0.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_429(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,429};
  data->simulationInfo->realParameter[261] = omc_Modelica_Math_atan3(threadData, data->simulationInfo->realParameter[213], data->simulationInfo->realParameter[214], 0.0);
  TRACE_POP
}

/*
equation index: 428
type: SIMPLE_ASSIGN
generator._ang_PSIpp0andIt = generator.ang_PSIpp0 - generator.ang_It
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_428(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,428};
  data->simulationInfo->realParameter[263] = data->simulationInfo->realParameter[262] - data->simulationInfo->realParameter[261];
  TRACE_POP
}

/*
equation index: 427
type: SIMPLE_ASSIGN
generator._a = generator.abs_PSIpp0 * (1.0 + generator.dsat * (generator.Xq - generator.Xl) / (generator.Xd - generator.Xl))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_427(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,427};
  data->simulationInfo->realParameter[259] = (data->simulationInfo->realParameter[260]) * (1.0 + (data->simulationInfo->realParameter[268]) * (DIVISION_SIM(data->simulationInfo->realParameter[256] - data->simulationInfo->realParameter[250],data->simulationInfo->realParameter[249] - data->simulationInfo->realParameter[250],"generator.Xd - generator.Xl",equationIndexes)));
  TRACE_POP
}

/*
equation index: 426
type: SIMPLE_ASSIGN
generator._b = (generator.It.re ^ 2.0 + generator.It.im ^ 2.0) ^ 0.5 * (generator.Xpp - generator.Xq)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_426(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,426};
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  tmp13 = data->simulationInfo->realParameter[214];
  tmp14 = data->simulationInfo->realParameter[213];
  tmp15 = (tmp13 * tmp13) + (tmp14 * tmp14);
  if(!(tmp15 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(generator.It.re ^ 2.0 + generator.It.im ^ 2.0) was %g should be >= 0", tmp15);
  }
  data->simulationInfo->realParameter[266] = (sqrt(tmp15)) * (data->simulationInfo->realParameter[252] - data->simulationInfo->realParameter[256]);
  TRACE_POP
}

/*
equation index: 425
type: SIMPLE_ASSIGN
generator._delta0 = atan(generator.b * cos(generator.ang_PSIpp0andIt) / (generator.b * sin(generator.ang_PSIpp0andIt) - generator.a)) + generator.ang_PSIpp0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_425(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,425};
  data->simulationInfo->realParameter[267] = atan((data->simulationInfo->realParameter[266]) * (DIVISION_SIM(cos(data->simulationInfo->realParameter[263]),(data->simulationInfo->realParameter[266]) * (sin(data->simulationInfo->realParameter[263])) - data->simulationInfo->realParameter[259],"generator.b * sin(generator.ang_PSIpp0andIt) - generator.a",equationIndexes))) + data->simulationInfo->realParameter[262];
  TRACE_POP
}

/*
equation index: 424
type: SIMPLE_ASSIGN
generator._Is._im = -5.013342920101253
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_424(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,424};
  data->simulationInfo->realParameter[211] = -5.013342920101253;
  TRACE_POP
}

/*
equation index: 423
type: SIMPLE_ASSIGN
generator._Is._re = 0.7556344673040269
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_423(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,423};
  data->simulationInfo->realParameter[212] = 0.7556344673040269;
  TRACE_POP
}

/*
equation index: 422
type: SIMPLE_ASSIGN
generator._S._im = 0.0541657134890556
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_422(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,422};
  data->simulationInfo->realParameter[237] = 0.0541657134890556;
  TRACE_POP
}

/*
equation index: 421
type: SIMPLE_ASSIGN
generator._S._re = 0.399999529123306
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_421(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,421};
  data->simulationInfo->realParameter[238] = 0.399999529123306;
  TRACE_POP
}

/*
equation index: 420
type: SIMPLE_ASSIGN
generator._VT._im = 0.07056198760732002
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_420(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,420};
  data->simulationInfo->realParameter[246] = 0.07056198760732002;
  TRACE_POP
}

/*
equation index: 419
type: SIMPLE_ASSIGN
generator._VT._re = 0.9975073964161391
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_419(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,419};
  data->simulationInfo->realParameter[247] = 0.9975073964161391;
  TRACE_POP
}

/*
equation index: 418
type: SIMPLE_ASSIGN
generator._Zs._im = 0.2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_418(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,418};
  data->simulationInfo->realParameter[257] = 0.2;
  TRACE_POP
}

/*
equation index: 417
type: SIMPLE_ASSIGN
generator._Zs._re = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_417(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,417};
  data->simulationInfo->realParameter[258] = 0.0;
  TRACE_POP
}

/*
equation index: 416
type: SIMPLE_ASSIGN
generator._Tpq0 = 0.7
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_416(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,416};
  data->simulationInfo->realParameter[245] = 0.7;
  TRACE_POP
}

/*
equation index: 415
type: SIMPLE_ASSIGN
generator._Q_0 = 5416571.34890556
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_415(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,415};
  data->simulationInfo->realParameter[235] = 5416571.34890556;
  TRACE_POP
}

/*
equation index: 414
type: SIMPLE_ASSIGN
generator._q0 = generator.Q_0 / generator.M_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_414(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,414};
  data->simulationInfo->realParameter[277] = DIVISION_SIM(data->simulationInfo->realParameter[235],data->simulationInfo->realParameter[223],"generator.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 413
type: SIMPLE_ASSIGN
SysData._S_b = 100000000.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_413(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,413};
  data->simulationInfo->realParameter[32] = 100000000.0;
  TRACE_POP
}

/*
equation index: 412
type: SIMPLE_ASSIGN
generator._S_b = SysData.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_412(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,412};
  data->simulationInfo->realParameter[241] = data->simulationInfo->realParameter[32];
  TRACE_POP
}

/*
equation index: 411
type: SIMPLE_ASSIGN
generator._CoB = generator.M_b / generator.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_411(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,411};
  data->simulationInfo->realParameter[202] = DIVISION_SIM(data->simulationInfo->realParameter[223],data->simulationInfo->realParameter[241],"generator.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 410
type: SIMPLE_ASSIGN
generator._v_0 = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_410(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,410};
  data->simulationInfo->realParameter[280] = 1.0;
  TRACE_POP
}

/*
equation index: 409
type: SIMPLE_ASSIGN
generator._angle_0 = 4.04626655578613
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_409(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,409};
  data->simulationInfo->realParameter[264] = 4.04626655578613;
  TRACE_POP
}

/*
equation index: 408
type: SIMPLE_ASSIGN
generator._angle_0rad = 0.0174532925199433 * generator.angle_0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_408(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,408};
  data->simulationInfo->realParameter[265] = (0.0174532925199433) * (data->simulationInfo->realParameter[264]);
  TRACE_POP
}

/*
equation index: 407
type: SIMPLE_ASSIGN
generator._vr0 = generator.v_0 * cos(generator.angle_0rad)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_407(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,407};
  data->simulationInfo->realParameter[282] = (data->simulationInfo->realParameter[280]) * (cos(data->simulationInfo->realParameter[265]));
  TRACE_POP
}

/*
equation index: 406
type: SIMPLE_ASSIGN
generator._vi0 = generator.v_0 * sin(generator.angle_0rad)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_406(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,406};
  data->simulationInfo->realParameter[281] = (data->simulationInfo->realParameter[280]) * (sin(data->simulationInfo->realParameter[265]));
  TRACE_POP
}

/*
equation index: 405
type: SIMPLE_ASSIGN
generator._ii0 = generator.CoB * (generator.q0 * generator.vr0 - generator.p0 * generator.vi0) / (generator.vr0 ^ 2.0 + generator.vi0 ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_405(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,405};
  modelica_real tmp16;
  modelica_real tmp17;
  tmp16 = data->simulationInfo->realParameter[282];
  tmp17 = data->simulationInfo->realParameter[281];
  data->simulationInfo->realParameter[272] = DIVISION_SIM((data->simulationInfo->realParameter[202]) * ((data->simulationInfo->realParameter[277]) * (data->simulationInfo->realParameter[282]) - ((data->simulationInfo->realParameter[275]) * (data->simulationInfo->realParameter[281]))),(tmp16 * tmp16) + (tmp17 * tmp17),"generator.vr0 ^ 2.0 + generator.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 404
type: SIMPLE_ASSIGN
generator._ir0 = (-generator.CoB) * (generator.p0 * generator.vr0 + generator.q0 * generator.vi0) / (generator.vr0 ^ 2.0 + generator.vi0 ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_404(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,404};
  modelica_real tmp18;
  modelica_real tmp19;
  tmp18 = data->simulationInfo->realParameter[282];
  tmp19 = data->simulationInfo->realParameter[281];
  data->simulationInfo->realParameter[274] = ((-data->simulationInfo->realParameter[202])) * (DIVISION_SIM((data->simulationInfo->realParameter[275]) * (data->simulationInfo->realParameter[282]) + (data->simulationInfo->realParameter[277]) * (data->simulationInfo->realParameter[281]),(tmp18 * tmp18) + (tmp19 * tmp19),"generator.vr0 ^ 2.0 + generator.vi0 ^ 2.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 403
type: SIMPLE_ASSIGN
SysData._fn = 50.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_403(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,403};
  data->simulationInfo->realParameter[33] = 50.0;
  TRACE_POP
}

/*
equation index: 402
type: SIMPLE_ASSIGN
generator._fn = SysData.fn
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_402(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,402};
  data->simulationInfo->realParameter[270] = data->simulationInfo->realParameter[33];
  TRACE_POP
}

/*
equation index: 401
type: SIMPLE_ASSIGN
generator._w_b = 6.283185307179586 * generator.fn
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_401(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,401};
  data->simulationInfo->realParameter[283] = (6.283185307179586) * (data->simulationInfo->realParameter[270]);
  TRACE_POP
}

/*
equation index: 400
type: SIMPLE_ASSIGN
generator._D = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_400(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,400};
  data->simulationInfo->realParameter[203] = 0.0;
  TRACE_POP
}

/*
equation index: 399
type: SIMPLE_ASSIGN
generator._H = 4.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_399(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,399};
  data->simulationInfo->realParameter[208] = 4.0;
  TRACE_POP
}

/*
equation index: 398
type: SIMPLE_ASSIGN
generator._Tppq0 = 0.1
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_398(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,398};
  data->simulationInfo->realParameter[244] = 0.1;
  TRACE_POP
}

/*
equation index: 397
type: SIMPLE_ASSIGN
generator._Tppd0 = 0.05
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_397(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,397};
  data->simulationInfo->realParameter[243] = 0.05;
  TRACE_POP
}

/*
equation index: 396
type: SIMPLE_ASSIGN
generator._Tpd0 = 5.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_396(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,396};
  data->simulationInfo->realParameter[242] = 5.0;
  TRACE_POP
}

/*
equation index: 395
type: SIMPLE_ASSIGN
generator._enabledisplayPF = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_395(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,395};
  data->simulationInfo->booleanParameter[63] = 0;
  TRACE_POP
}

/*
equation index: 394
type: SIMPLE_ASSIGN
generator._displayPF = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_394(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,394};
  data->simulationInfo->booleanParameter[57] = 0;
  TRACE_POP
}

/*
equation index: 393
type: SIMPLE_ASSIGN
generator._enableangle_0 = true
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_393(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,393};
  data->simulationInfo->booleanParameter[62] = 1;
  TRACE_POP
}

/*
equation index: 392
type: SIMPLE_ASSIGN
generator._enablev_0 = true
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_392(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,392};
  data->simulationInfo->booleanParameter[65] = 1;
  TRACE_POP
}

/*
equation index: 391
type: SIMPLE_ASSIGN
generator._enableQ_0 = true
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_391(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,391};
  data->simulationInfo->booleanParameter[59] = 1;
  TRACE_POP
}

/*
equation index: 390
type: SIMPLE_ASSIGN
generator._enableP_0 = true
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_390(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,390};
  data->simulationInfo->booleanParameter[58] = 1;
  TRACE_POP
}

/*
equation index: 389
type: SIMPLE_ASSIGN
generator._enablefn = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_389(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,389};
  data->simulationInfo->booleanParameter[64] = 0;
  TRACE_POP
}

/*
equation index: 388
type: SIMPLE_ASSIGN
generator._enableV_b = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_388(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,388};
  data->simulationInfo->booleanParameter[61] = 0;
  TRACE_POP
}

/*
equation index: 387
type: SIMPLE_ASSIGN
generator._V_b = 400000.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_387(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,387};
  data->simulationInfo->realParameter[248] = 400000.0;
  TRACE_POP
}

/*
equation index: 386
type: SIMPLE_ASSIGN
generator._enableS_b = true
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_386(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,386};
  data->simulationInfo->booleanParameter[60] = 1;
  TRACE_POP
}

/*
equation index: 385
type: SIMPLE_ASSIGN
FAULT._angle_0 = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_385(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,385};
  data->simulationInfo->realParameter[4] = 0.0;
  TRACE_POP
}

/*
equation index: 384
type: SIMPLE_ASSIGN
FAULT._angle_0rad = 0.0174532925199433 * FAULT.angle_0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_384(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,384};
  data->simulationInfo->realParameter[5] = (0.0174532925199433) * (data->simulationInfo->realParameter[4]);
  TRACE_POP
}

/*
equation index: 383
type: SIMPLE_ASSIGN
FAULT._enabledisplayPF = true
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_383(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,383};
  data->simulationInfo->booleanParameter[6] = 1;
  TRACE_POP
}

/*
equation index: 382
type: SIMPLE_ASSIGN
FAULT._displayPF = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_382(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,382};
  data->simulationInfo->booleanParameter[0] = 0;
  TRACE_POP
}

/*
equation index: 381
type: SIMPLE_ASSIGN
FAULT._enableangle_0 = true
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_381(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,381};
  data->simulationInfo->booleanParameter[5] = 1;
  TRACE_POP
}

/*
equation index: 380
type: SIMPLE_ASSIGN
FAULT._enablev_0 = true
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_380(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,380};
  data->simulationInfo->booleanParameter[8] = 1;
  TRACE_POP
}

/*
equation index: 379
type: SIMPLE_ASSIGN
FAULT._v_0 = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_379(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,379};
  data->simulationInfo->realParameter[7] = 1.0;
  TRACE_POP
}

/*
equation index: 378
type: SIMPLE_ASSIGN
FAULT._enableQ_0 = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_378(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,378};
  data->simulationInfo->booleanParameter[2] = 0;
  TRACE_POP
}

/*
equation index: 377
type: SIMPLE_ASSIGN
FAULT._Q_0 = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_377(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,377};
  data->simulationInfo->realParameter[1] = 0.0;
  TRACE_POP
}

/*
equation index: 376
type: SIMPLE_ASSIGN
FAULT._enableP_0 = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_376(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,376};
  data->simulationInfo->booleanParameter[1] = 0;
  TRACE_POP
}

/*
equation index: 375
type: SIMPLE_ASSIGN
FAULT._P_0 = 1000000.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_375(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,375};
  data->simulationInfo->realParameter[0] = 1000000.0;
  TRACE_POP
}

/*
equation index: 374
type: SIMPLE_ASSIGN
FAULT._enablefn = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_374(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,374};
  data->simulationInfo->booleanParameter[7] = 0;
  TRACE_POP
}

/*
equation index: 373
type: SIMPLE_ASSIGN
FAULT._fn = SysData.fn
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_373(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,373};
  data->simulationInfo->realParameter[6] = data->simulationInfo->realParameter[33];
  TRACE_POP
}

/*
equation index: 372
type: SIMPLE_ASSIGN
FAULT._enableV_b = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_372(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,372};
  data->simulationInfo->booleanParameter[4] = 0;
  TRACE_POP
}

/*
equation index: 371
type: SIMPLE_ASSIGN
FAULT._V_b = 400000.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_371(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,371};
  data->simulationInfo->realParameter[3] = 400000.0;
  TRACE_POP
}

/*
equation index: 370
type: SIMPLE_ASSIGN
FAULT._enableS_b = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_370(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,370};
  data->simulationInfo->booleanParameter[3] = 0;
  TRACE_POP
}

/*
equation index: 369
type: SIMPLE_ASSIGN
FAULT._S_b = SysData.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_369(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,369};
  data->simulationInfo->realParameter[2] = data->simulationInfo->realParameter[32];
  TRACE_POP
}

/*
equation index: 368
type: SIMPLE_ASSIGN
GEN2._angle_0 = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_368(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,368};
  data->simulationInfo->realParameter[20] = 0.0;
  TRACE_POP
}

/*
equation index: 367
type: SIMPLE_ASSIGN
GEN2._angle_0rad = 0.0174532925199433 * GEN2.angle_0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_367(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,367};
  data->simulationInfo->realParameter[21] = (0.0174532925199433) * (data->simulationInfo->realParameter[20]);
  TRACE_POP
}

/*
equation index: 366
type: SIMPLE_ASSIGN
GEN2._enabledisplayPF = true
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_366(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,366};
  data->simulationInfo->booleanParameter[24] = 1;
  TRACE_POP
}

/*
equation index: 365
type: SIMPLE_ASSIGN
GEN2._displayPF = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_365(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,365};
  data->simulationInfo->booleanParameter[18] = 0;
  TRACE_POP
}

/*
equation index: 364
type: SIMPLE_ASSIGN
GEN2._enableangle_0 = true
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_364(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,364};
  data->simulationInfo->booleanParameter[23] = 1;
  TRACE_POP
}

/*
equation index: 363
type: SIMPLE_ASSIGN
GEN2._enablev_0 = true
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_363(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,363};
  data->simulationInfo->booleanParameter[26] = 1;
  TRACE_POP
}

/*
equation index: 362
type: SIMPLE_ASSIGN
GEN2._v_0 = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_362(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,362};
  data->simulationInfo->realParameter[23] = 1.0;
  TRACE_POP
}

/*
equation index: 361
type: SIMPLE_ASSIGN
GEN2._enableQ_0 = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_361(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,361};
  data->simulationInfo->booleanParameter[20] = 0;
  TRACE_POP
}

/*
equation index: 360
type: SIMPLE_ASSIGN
GEN2._Q_0 = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_360(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,360};
  data->simulationInfo->realParameter[17] = 0.0;
  TRACE_POP
}

/*
equation index: 359
type: SIMPLE_ASSIGN
GEN2._enableP_0 = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_359(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,359};
  data->simulationInfo->booleanParameter[19] = 0;
  TRACE_POP
}

/*
equation index: 358
type: SIMPLE_ASSIGN
GEN2._P_0 = 1000000.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_358(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,358};
  data->simulationInfo->realParameter[16] = 1000000.0;
  TRACE_POP
}

/*
equation index: 357
type: SIMPLE_ASSIGN
GEN2._enablefn = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_357(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,357};
  data->simulationInfo->booleanParameter[25] = 0;
  TRACE_POP
}

/*
equation index: 356
type: SIMPLE_ASSIGN
GEN2._fn = SysData.fn
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_356(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,356};
  data->simulationInfo->realParameter[22] = data->simulationInfo->realParameter[33];
  TRACE_POP
}

/*
equation index: 355
type: SIMPLE_ASSIGN
GEN2._enableV_b = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_355(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,355};
  data->simulationInfo->booleanParameter[22] = 0;
  TRACE_POP
}

/*
equation index: 354
type: SIMPLE_ASSIGN
GEN2._V_b = 400000.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_354(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,354};
  data->simulationInfo->realParameter[19] = 400000.0;
  TRACE_POP
}

/*
equation index: 353
type: SIMPLE_ASSIGN
GEN2._enableS_b = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_353(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,353};
  data->simulationInfo->booleanParameter[21] = 0;
  TRACE_POP
}

/*
equation index: 352
type: SIMPLE_ASSIGN
GEN2._S_b = SysData.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_352(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,352};
  data->simulationInfo->realParameter[18] = data->simulationInfo->realParameter[32];
  TRACE_POP
}

/*
equation index: 351
type: SIMPLE_ASSIGN
LOAD._angle_0 = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_351(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,351};
  data->simulationInfo->realParameter[28] = 0.0;
  TRACE_POP
}

/*
equation index: 350
type: SIMPLE_ASSIGN
LOAD._angle_0rad = 0.0174532925199433 * LOAD.angle_0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_350(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,350};
  data->simulationInfo->realParameter[29] = (0.0174532925199433) * (data->simulationInfo->realParameter[28]);
  TRACE_POP
}

/*
equation index: 349
type: SIMPLE_ASSIGN
LOAD._enabledisplayPF = true
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_349(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,349};
  data->simulationInfo->booleanParameter[33] = 1;
  TRACE_POP
}

/*
equation index: 348
type: SIMPLE_ASSIGN
LOAD._displayPF = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_348(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,348};
  data->simulationInfo->booleanParameter[27] = 0;
  TRACE_POP
}

/*
equation index: 347
type: SIMPLE_ASSIGN
LOAD._enableangle_0 = true
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_347(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,347};
  data->simulationInfo->booleanParameter[32] = 1;
  TRACE_POP
}

/*
equation index: 346
type: SIMPLE_ASSIGN
LOAD._enablev_0 = true
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_346(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,346};
  data->simulationInfo->booleanParameter[35] = 1;
  TRACE_POP
}

/*
equation index: 345
type: SIMPLE_ASSIGN
LOAD._v_0 = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_345(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,345};
  data->simulationInfo->realParameter[31] = 1.0;
  TRACE_POP
}

/*
equation index: 344
type: SIMPLE_ASSIGN
LOAD._enableQ_0 = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_344(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,344};
  data->simulationInfo->booleanParameter[29] = 0;
  TRACE_POP
}

/*
equation index: 343
type: SIMPLE_ASSIGN
LOAD._Q_0 = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_343(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,343};
  data->simulationInfo->realParameter[25] = 0.0;
  TRACE_POP
}

/*
equation index: 342
type: SIMPLE_ASSIGN
LOAD._enableP_0 = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_342(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,342};
  data->simulationInfo->booleanParameter[28] = 0;
  TRACE_POP
}

/*
equation index: 341
type: SIMPLE_ASSIGN
LOAD._P_0 = 1000000.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_341(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,341};
  data->simulationInfo->realParameter[24] = 1000000.0;
  TRACE_POP
}

/*
equation index: 340
type: SIMPLE_ASSIGN
LOAD._enablefn = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_340(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,340};
  data->simulationInfo->booleanParameter[34] = 0;
  TRACE_POP
}

/*
equation index: 339
type: SIMPLE_ASSIGN
LOAD._fn = SysData.fn
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_339(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,339};
  data->simulationInfo->realParameter[30] = data->simulationInfo->realParameter[33];
  TRACE_POP
}

/*
equation index: 338
type: SIMPLE_ASSIGN
LOAD._enableV_b = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_338(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,338};
  data->simulationInfo->booleanParameter[31] = 0;
  TRACE_POP
}

/*
equation index: 337
type: SIMPLE_ASSIGN
LOAD._V_b = 400000.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_337(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,337};
  data->simulationInfo->realParameter[27] = 400000.0;
  TRACE_POP
}

/*
equation index: 336
type: SIMPLE_ASSIGN
LOAD._enableS_b = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_336(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,336};
  data->simulationInfo->booleanParameter[30] = 0;
  TRACE_POP
}

/*
equation index: 335
type: SIMPLE_ASSIGN
LOAD._S_b = SysData.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_335(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,335};
  data->simulationInfo->realParameter[26] = data->simulationInfo->realParameter[32];
  TRACE_POP
}

/*
equation index: 334
type: SIMPLE_ASSIGN
GEN1._angle_0 = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_334(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,334};
  data->simulationInfo->realParameter[12] = 0.0;
  TRACE_POP
}

/*
equation index: 333
type: SIMPLE_ASSIGN
GEN1._angle_0rad = 0.0174532925199433 * GEN1.angle_0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_333(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,333};
  data->simulationInfo->realParameter[13] = (0.0174532925199433) * (data->simulationInfo->realParameter[12]);
  TRACE_POP
}

/*
equation index: 332
type: SIMPLE_ASSIGN
GEN1._enabledisplayPF = true
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_332(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,332};
  data->simulationInfo->booleanParameter[15] = 1;
  TRACE_POP
}

/*
equation index: 331
type: SIMPLE_ASSIGN
GEN1._displayPF = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_331(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,331};
  data->simulationInfo->booleanParameter[9] = 0;
  TRACE_POP
}

/*
equation index: 330
type: SIMPLE_ASSIGN
GEN1._enableangle_0 = true
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_330(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,330};
  data->simulationInfo->booleanParameter[14] = 1;
  TRACE_POP
}

/*
equation index: 329
type: SIMPLE_ASSIGN
GEN1._enablev_0 = true
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_329(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,329};
  data->simulationInfo->booleanParameter[17] = 1;
  TRACE_POP
}

/*
equation index: 328
type: SIMPLE_ASSIGN
GEN1._v_0 = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_328(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,328};
  data->simulationInfo->realParameter[15] = 1.0;
  TRACE_POP
}

/*
equation index: 327
type: SIMPLE_ASSIGN
GEN1._enableQ_0 = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_327(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,327};
  data->simulationInfo->booleanParameter[11] = 0;
  TRACE_POP
}

/*
equation index: 326
type: SIMPLE_ASSIGN
GEN1._Q_0 = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_326(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,326};
  data->simulationInfo->realParameter[9] = 0.0;
  TRACE_POP
}

/*
equation index: 325
type: SIMPLE_ASSIGN
GEN1._enableP_0 = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_325(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,325};
  data->simulationInfo->booleanParameter[10] = 0;
  TRACE_POP
}

/*
equation index: 324
type: SIMPLE_ASSIGN
GEN1._P_0 = 1000000.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_324(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,324};
  data->simulationInfo->realParameter[8] = 1000000.0;
  TRACE_POP
}

/*
equation index: 323
type: SIMPLE_ASSIGN
GEN1._enablefn = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_323(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,323};
  data->simulationInfo->booleanParameter[16] = 0;
  TRACE_POP
}

/*
equation index: 322
type: SIMPLE_ASSIGN
GEN1._fn = SysData.fn
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_322(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,322};
  data->simulationInfo->realParameter[14] = data->simulationInfo->realParameter[33];
  TRACE_POP
}

/*
equation index: 321
type: SIMPLE_ASSIGN
GEN1._enableV_b = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_321(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,321};
  data->simulationInfo->booleanParameter[13] = 0;
  TRACE_POP
}

/*
equation index: 320
type: SIMPLE_ASSIGN
GEN1._V_b = 400000.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_320(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,320};
  data->simulationInfo->realParameter[11] = 400000.0;
  TRACE_POP
}

/*
equation index: 319
type: SIMPLE_ASSIGN
GEN1._enableS_b = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_319(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,319};
  data->simulationInfo->booleanParameter[12] = 0;
  TRACE_POP
}

/*
equation index: 318
type: SIMPLE_ASSIGN
GEN1._S_b = SysData.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_318(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,318};
  data->simulationInfo->realParameter[10] = data->simulationInfo->realParameter[32];
  TRACE_POP
}

/*
equation index: 317
type: SIMPLE_ASSIGN
pwFault._R = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_317(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,317};
  data->simulationInfo->realParameter[284] = 0.0;
  TRACE_POP
}

/*
equation index: 316
type: SIMPLE_ASSIGN
pwFault._X = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_316(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,316};
  data->simulationInfo->realParameter[285] = 0.0;
  TRACE_POP
}

/*
equation index: 315
type: SIMPLE_ASSIGN
pwFault._ground = abs(pwFault.R) < 1e-15 and abs(pwFault.X) < 1e-15
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_315(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,315};
  modelica_boolean tmp20;
  modelica_boolean tmp21;
  tmp20 = Less(fabs(data->simulationInfo->realParameter[284]),1e-15);
  tmp21 = Less(fabs(data->simulationInfo->realParameter[285]),1e-15);
  data->simulationInfo->booleanParameter[66] = (tmp20 && tmp21);
  TRACE_POP
}

/*
equation index: 314
type: SIMPLE_ASSIGN
pwFault._t2 = 2.15
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_314(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,314};
  data->simulationInfo->realParameter[287] = 2.15;
  TRACE_POP
}

/*
equation index: 313
type: SIMPLE_ASSIGN
pwFault._t1 = 2.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_313(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,313};
  data->simulationInfo->realParameter[286] = 2.0;
  TRACE_POP
}

/*
equation index: 312
type: SIMPLE_ASSIGN
constantLoad._S_b = SysData.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_312(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,312};
  data->simulationInfo->realParameter[48] = data->simulationInfo->realParameter[32];
  TRACE_POP
}

/*
equation index: 311
type: SIMPLE_ASSIGN
constantLoad._v_0 = 0.9919935
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_311(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,311};
  data->simulationInfo->realParameter[76] = 0.9919935;
  TRACE_POP
}

/*
equation index: 310
type: SIMPLE_ASSIGN
constantLoad._S_p._re = 50000000.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_310(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,310};
  data->simulationInfo->realParameter[52] = 50000000.0;
  TRACE_POP
}

/*
equation index: 309
type: SIMPLE_ASSIGN
constantLoad._S_i._re = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_309(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,309};
  data->simulationInfo->realParameter[50] = 0.0;
  TRACE_POP
}

/*
equation index: 308
type: SIMPLE_ASSIGN
constantLoad._S_y._re = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_308(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,308};
  data->simulationInfo->realParameter[54] = 0.0;
  TRACE_POP
}

/*
equation index: 307
type: SIMPLE_ASSIGN
constantLoad._p0 = (constantLoad.S_i.re * constantLoad.v_0 + constantLoad.S_y.re * constantLoad.v_0 ^ 2.0 + constantLoad.S_p.re) / constantLoad.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_307(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,307};
  modelica_real tmp22;
  tmp22 = data->simulationInfo->realParameter[76];
  data->simulationInfo->realParameter[73] = DIVISION_SIM((data->simulationInfo->realParameter[50]) * (data->simulationInfo->realParameter[76]) + (data->simulationInfo->realParameter[54]) * ((tmp22 * tmp22)) + data->simulationInfo->realParameter[52],data->simulationInfo->realParameter[48],"constantLoad.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 306
type: SIMPLE_ASSIGN
constantLoad._S_p._im = 10000000.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_306(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,306};
  data->simulationInfo->realParameter[51] = 10000000.0;
  TRACE_POP
}

/*
equation index: 305
type: SIMPLE_ASSIGN
constantLoad._S_i._im = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_305(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,305};
  data->simulationInfo->realParameter[49] = 0.0;
  TRACE_POP
}

/*
equation index: 304
type: SIMPLE_ASSIGN
constantLoad._S_y._im = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_304(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,304};
  data->simulationInfo->realParameter[53] = 0.0;
  TRACE_POP
}

/*
equation index: 303
type: SIMPLE_ASSIGN
constantLoad._q0 = (constantLoad.S_i.im * constantLoad.v_0 + constantLoad.S_y.im * constantLoad.v_0 ^ 2.0 + constantLoad.S_p.im) / constantLoad.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_303(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,303};
  modelica_real tmp23;
  tmp23 = data->simulationInfo->realParameter[76];
  data->simulationInfo->realParameter[74] = DIVISION_SIM((data->simulationInfo->realParameter[49]) * (data->simulationInfo->realParameter[76]) + (data->simulationInfo->realParameter[53]) * ((tmp23 * tmp23)) + data->simulationInfo->realParameter[51],data->simulationInfo->realParameter[48],"constantLoad.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 302
type: SIMPLE_ASSIGN
constantLoad._d_P = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_302(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,302};
  data->simulationInfo->realParameter[67] = 0.0;
  TRACE_POP
}

/*
equation index: 301
type: SIMPLE_ASSIGN
constantLoad._PF = if constantLoad.q0 == 0.0 then 1.0 else constantLoad.p0 / constantLoad.q0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_301(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,301};
  data->simulationInfo->realParameter[38] = ((data->simulationInfo->realParameter[74] == 0.0)?1.0:DIVISION_SIM(data->simulationInfo->realParameter[73],data->simulationInfo->realParameter[74],"constantLoad.q0",equationIndexes));
  TRACE_POP
}

/*
equation index: 300
type: SIMPLE_ASSIGN
constantLoad._d_Q = (constantLoad.p0 + constantLoad.d_P) / constantLoad.PF - constantLoad.q0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_300(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,300};
  data->simulationInfo->realParameter[68] = DIVISION_SIM(data->simulationInfo->realParameter[73] + data->simulationInfo->realParameter[67],data->simulationInfo->realParameter[38],"constantLoad.PF",equationIndexes) - data->simulationInfo->realParameter[74];
  TRACE_POP
}

/*
equation index: 299
type: SIMPLE_ASSIGN
constantLoad._d_t = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_299(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,299};
  data->simulationInfo->realParameter[69] = 0.0;
  TRACE_POP
}

/*
equation index: 298
type: SIMPLE_ASSIGN
constantLoad._t1 = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_298(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,298};
  data->simulationInfo->realParameter[75] = 0.0;
  TRACE_POP
}

/*
equation index: 297
type: SIMPLE_ASSIGN
constantLoad._wp = 3.964
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_297(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,297};
  data->simulationInfo->realParameter[79] = 3.964;
  TRACE_POP
}

/*
equation index: 296
type: SIMPLE_ASSIGN
constantLoad._b1 = 0.1389
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_296(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,296};
  data->simulationInfo->realParameter[65] = 0.1389;
  TRACE_POP
}

/*
equation index: 295
type: SIMPLE_ASSIGN
constantLoad._a1 = -0.4999
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_295(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,295};
  data->simulationInfo->realParameter[59] = -0.4999;
  TRACE_POP
}

/*
equation index: 294
type: SIMPLE_ASSIGN
constantLoad._a0 = 0.4881
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_294(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,294};
  data->simulationInfo->realParameter[58] = 0.4881;
  TRACE_POP
}

/*
equation index: 293
type: SIMPLE_ASSIGN
constantLoad._b2 = 1.769
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_293(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,293};
  data->simulationInfo->realParameter[66] = 1.769;
  TRACE_POP
}

/*
equation index: 292
type: SIMPLE_ASSIGN
constantLoad._a2 = 1.502
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_292(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,292};
  data->simulationInfo->realParameter[60] = 1.502;
  TRACE_POP
}

/*
equation index: 291
type: SIMPLE_ASSIGN
constantLoad._S_Y._im = 0.1016207385868717
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_291(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,291};
  data->simulationInfo->realParameter[46] = 0.1016207385868717;
  TRACE_POP
}

/*
equation index: 290
type: SIMPLE_ASSIGN
constantLoad._S_Y._re = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_290(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,290};
  data->simulationInfo->realParameter[47] = 0.0;
  TRACE_POP
}

/*
equation index: 289
type: SIMPLE_ASSIGN
constantLoad._S_I._im = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_289(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,289};
  data->simulationInfo->realParameter[42] = 0.0;
  TRACE_POP
}

/*
equation index: 288
type: SIMPLE_ASSIGN
constantLoad._S_I._re = 0.5040355607168797
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_288(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,288};
  data->simulationInfo->realParameter[43] = 0.5040355607168797;
  TRACE_POP
}

/*
equation index: 287
type: SIMPLE_ASSIGN
constantLoad._S_P._im = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_287(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,287};
  data->simulationInfo->realParameter[44] = 0.0;
  TRACE_POP
}

/*
equation index: 286
type: SIMPLE_ASSIGN
constantLoad._S_P._re = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_286(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,286};
  data->simulationInfo->realParameter[45] = 0.0;
  TRACE_POP
}

/*
equation index: 285
type: SIMPLE_ASSIGN
constantLoad._angle_0 = -0.5762684
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_285(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,285};
  data->simulationInfo->realParameter[61] = -0.5762684;
  TRACE_POP
}

/*
equation index: 284
type: SIMPLE_ASSIGN
constantLoad._angle_0rad = 0.0174532925199433 * constantLoad.angle_0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_284(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,284};
  data->simulationInfo->realParameter[62] = (0.0174532925199433) * (data->simulationInfo->realParameter[61]);
  TRACE_POP
}

/*
equation index: 283
type: SIMPLE_ASSIGN
constantLoad._vr0 = constantLoad.v_0 * cos(constantLoad.angle_0rad)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_283(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,283};
  data->simulationInfo->realParameter[78] = (data->simulationInfo->realParameter[76]) * (cos(data->simulationInfo->realParameter[62]));
  TRACE_POP
}

/*
equation index: 282
type: SIMPLE_ASSIGN
constantLoad._vi0 = constantLoad.v_0 * sin(constantLoad.angle_0rad)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_282(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,282};
  data->simulationInfo->realParameter[77] = (data->simulationInfo->realParameter[76]) * (sin(data->simulationInfo->realParameter[62]));
  TRACE_POP
}

/*
equation index: 281
type: SIMPLE_ASSIGN
constantLoad._ii0 = (constantLoad.p0 * constantLoad.vi0 - constantLoad.q0 * constantLoad.vr0) / (constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_281(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,281};
  modelica_real tmp25;
  modelica_real tmp26;
  tmp25 = data->simulationInfo->realParameter[78];
  tmp26 = data->simulationInfo->realParameter[77];
  data->simulationInfo->realParameter[71] = DIVISION_SIM((data->simulationInfo->realParameter[73]) * (data->simulationInfo->realParameter[77]) - ((data->simulationInfo->realParameter[74]) * (data->simulationInfo->realParameter[78])),(tmp25 * tmp25) + (tmp26 * tmp26),"constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 280
type: SIMPLE_ASSIGN
constantLoad._ir0 = (constantLoad.p0 * constantLoad.vr0 + constantLoad.q0 * constantLoad.vi0) / (constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_280(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,280};
  modelica_real tmp27;
  modelica_real tmp28;
  tmp27 = data->simulationInfo->realParameter[78];
  tmp28 = data->simulationInfo->realParameter[77];
  data->simulationInfo->realParameter[72] = DIVISION_SIM((data->simulationInfo->realParameter[73]) * (data->simulationInfo->realParameter[78]) + (data->simulationInfo->realParameter[74]) * (data->simulationInfo->realParameter[77]),(tmp27 * tmp27) + (tmp28 * tmp28),"constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 279
type: SIMPLE_ASSIGN
constantLoad._characteristic = 2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_279(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,279};
  data->simulationInfo->integerParameter[0] = ((modelica_integer) 2);
  TRACE_POP
}

/*
equation index: 278
type: SIMPLE_ASSIGN
constantLoad._PQBRAK = 0.7
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_278(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,278};
  data->simulationInfo->realParameter[39] = 0.7;
  TRACE_POP
}

/*
equation index: 277
type: SIMPLE_ASSIGN
constantLoad._b._im = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_277(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,277};
  data->simulationInfo->realParameter[63] = 1.0;
  TRACE_POP
}

/*
equation index: 276
type: SIMPLE_ASSIGN
constantLoad._b._re = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_276(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,276};
  data->simulationInfo->realParameter[64] = 0.0;
  TRACE_POP
}

/*
equation index: 275
type: SIMPLE_ASSIGN
constantLoad._a._im = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_275(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,275};
  data->simulationInfo->realParameter[56] = 0.0;
  TRACE_POP
}

/*
equation index: 274
type: SIMPLE_ASSIGN
constantLoad._a._re = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_274(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,274};
  data->simulationInfo->realParameter[57] = 1.0;
  TRACE_POP
}

/*
equation index: 273
type: SIMPLE_ASSIGN
constantLoad._enabledisplayPF = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_273(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,273};
  data->simulationInfo->booleanParameter[42] = 0;
  TRACE_POP
}

/*
equation index: 272
type: SIMPLE_ASSIGN
constantLoad._displayPF = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_272(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,272};
  data->simulationInfo->booleanParameter[36] = 0;
  TRACE_POP
}

/*
equation index: 271
type: SIMPLE_ASSIGN
constantLoad._enableangle_0 = true
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_271(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,271};
  data->simulationInfo->booleanParameter[41] = 1;
  TRACE_POP
}

/*
equation index: 270
type: SIMPLE_ASSIGN
constantLoad._enablev_0 = true
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_270(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,270};
  data->simulationInfo->booleanParameter[44] = 1;
  TRACE_POP
}

/*
equation index: 269
type: SIMPLE_ASSIGN
constantLoad._enableQ_0 = true
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_269(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,269};
  data->simulationInfo->booleanParameter[38] = 1;
  TRACE_POP
}

/*
equation index: 268
type: SIMPLE_ASSIGN
constantLoad._Q_0 = 10000000.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_268(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,268};
  data->simulationInfo->realParameter[41] = 10000000.0;
  TRACE_POP
}

/*
equation index: 267
type: SIMPLE_ASSIGN
constantLoad._enableP_0 = true
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_267(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,267};
  data->simulationInfo->booleanParameter[37] = 1;
  TRACE_POP
}

/*
equation index: 266
type: SIMPLE_ASSIGN
constantLoad._P_0 = 50000000.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_266(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,266};
  data->simulationInfo->realParameter[40] = 50000000.0;
  TRACE_POP
}

/*
equation index: 265
type: SIMPLE_ASSIGN
constantLoad._enablefn = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_265(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,265};
  data->simulationInfo->booleanParameter[43] = 0;
  TRACE_POP
}

/*
equation index: 264
type: SIMPLE_ASSIGN
constantLoad._fn = SysData.fn
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_264(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,264};
  data->simulationInfo->realParameter[70] = data->simulationInfo->realParameter[33];
  TRACE_POP
}

/*
equation index: 263
type: SIMPLE_ASSIGN
constantLoad._enableV_b = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_263(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,263};
  data->simulationInfo->booleanParameter[40] = 0;
  TRACE_POP
}

/*
equation index: 262
type: SIMPLE_ASSIGN
constantLoad._V_b = 400000.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_262(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,262};
  data->simulationInfo->realParameter[55] = 400000.0;
  TRACE_POP
}

/*
equation index: 261
type: SIMPLE_ASSIGN
constantLoad._enableS_b = true
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_261(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,261};
  data->simulationInfo->booleanParameter[39] = 1;
  TRACE_POP
}

/*
equation index: 260
type: SIMPLE_ASSIGN
gENCLS._R_a = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_260(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,260};
  data->simulationInfo->realParameter[182] = 0.0;
  TRACE_POP
}

/*
equation index: 259
type: SIMPLE_ASSIGN
gENCLS._X_d = 0.2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_259(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,259};
  data->simulationInfo->realParameter[185] = 0.2;
  TRACE_POP
}

/*
equation index: 258
type: SIMPLE_ASSIGN
gENCLS._v_0 = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_258(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,258};
  data->simulationInfo->realParameter[196] = 1.0;
  TRACE_POP
}

/*
equation index: 257
type: SIMPLE_ASSIGN
gENCLS._angle_0 = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_257(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,257};
  data->simulationInfo->realParameter[186] = 0.0;
  TRACE_POP
}

/*
equation index: 256
type: SIMPLE_ASSIGN
gENCLS._angle_0rad = 0.0174532925199433 * gENCLS.angle_0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_256(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,256};
  data->simulationInfo->realParameter[187] = (0.0174532925199433) * (data->simulationInfo->realParameter[186]);
  TRACE_POP
}

/*
equation index: 255
type: SIMPLE_ASSIGN
gENCLS._vr0 = gENCLS.v_0 * cos(gENCLS.angle_0rad)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_255(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,255};
  data->simulationInfo->realParameter[201] = (data->simulationInfo->realParameter[196]) * (cos(data->simulationInfo->realParameter[187]));
  TRACE_POP
}

/*
equation index: 254
type: SIMPLE_ASSIGN
gENCLS._vi0 = gENCLS.v_0 * sin(gENCLS.angle_0rad)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_254(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,254};
  data->simulationInfo->realParameter[199] = (data->simulationInfo->realParameter[196]) * (sin(data->simulationInfo->realParameter[187]));
  TRACE_POP
}

/*
equation index: 253
type: SIMPLE_ASSIGN
gENCLS._P_0 = 10017110.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_253(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,253};
  data->simulationInfo->realParameter[180] = 10017110.0;
  TRACE_POP
}

/*
equation index: 252
type: SIMPLE_ASSIGN
gENCLS._p0 = gENCLS.P_0 / gENCLS.M_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_252(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,252};
  data->simulationInfo->realParameter[194] = DIVISION_SIM(data->simulationInfo->realParameter[180],data->simulationInfo->realParameter[179],"gENCLS.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 251
type: SIMPLE_ASSIGN
gENCLS._Q_0 = 8006544.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_251(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,251};
  data->simulationInfo->realParameter[181] = 8006544.0;
  TRACE_POP
}

/*
equation index: 250
type: SIMPLE_ASSIGN
gENCLS._q0 = gENCLS.Q_0 / gENCLS.M_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_250(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,250};
  data->simulationInfo->realParameter[195] = DIVISION_SIM(data->simulationInfo->realParameter[181],data->simulationInfo->realParameter[179],"gENCLS.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 249
type: SIMPLE_ASSIGN
gENCLS._ir0 = (gENCLS.p0 * gENCLS.vr0 + gENCLS.q0 * gENCLS.vi0) / (gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_249(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,249};
  modelica_real tmp29;
  modelica_real tmp30;
  tmp29 = data->simulationInfo->realParameter[201];
  tmp30 = data->simulationInfo->realParameter[199];
  data->simulationInfo->realParameter[193] = DIVISION_SIM((data->simulationInfo->realParameter[194]) * (data->simulationInfo->realParameter[201]) + (data->simulationInfo->realParameter[195]) * (data->simulationInfo->realParameter[199]),(tmp29 * tmp29) + (tmp30 * tmp30),"gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 248
type: SIMPLE_ASSIGN
gENCLS._ii0 = (gENCLS.p0 * gENCLS.vi0 - gENCLS.q0 * gENCLS.vr0) / (gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_248(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,248};
  modelica_real tmp31;
  modelica_real tmp32;
  tmp31 = data->simulationInfo->realParameter[201];
  tmp32 = data->simulationInfo->realParameter[199];
  data->simulationInfo->realParameter[191] = DIVISION_SIM((data->simulationInfo->realParameter[194]) * (data->simulationInfo->realParameter[199]) - ((data->simulationInfo->realParameter[195]) * (data->simulationInfo->realParameter[201])),(tmp31 * tmp31) + (tmp32 * tmp32),"gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 247
type: SIMPLE_ASSIGN
gENCLS._delta0 = atan2(gENCLS.vi0 + gENCLS.R_a * gENCLS.ii0 + gENCLS.X_d * gENCLS.ir0, gENCLS.vr0 + gENCLS.R_a * gENCLS.ir0 - gENCLS.X_d * gENCLS.ii0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_247(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,247};
  data->simulationInfo->realParameter[188] = atan2(data->simulationInfo->realParameter[199] + (data->simulationInfo->realParameter[182]) * (data->simulationInfo->realParameter[191]) + (data->simulationInfo->realParameter[185]) * (data->simulationInfo->realParameter[193]), data->simulationInfo->realParameter[201] + (data->simulationInfo->realParameter[182]) * (data->simulationInfo->realParameter[193]) - ((data->simulationInfo->realParameter[185]) * (data->simulationInfo->realParameter[191])));
  TRACE_POP
}

/*
equation index: 246
type: SIMPLE_ASSIGN
gENCLS._vq0 = gENCLS.vr0 * sin(1.570796326794897 - gENCLS.delta0) + gENCLS.vi0 * cos(1.570796326794897 - gENCLS.delta0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_246(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,246};
  data->simulationInfo->realParameter[200] = (data->simulationInfo->realParameter[201]) * (sin(1.570796326794897 - data->simulationInfo->realParameter[188])) + (data->simulationInfo->realParameter[199]) * (cos(1.570796326794897 - data->simulationInfo->realParameter[188]));
  TRACE_POP
}

/*
equation index: 245
type: SIMPLE_ASSIGN
gENCLS._id0 = gENCLS.ir0 * cos(1.570796326794897 - gENCLS.delta0) - gENCLS.ii0 * sin(1.570796326794897 - gENCLS.delta0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_245(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,245};
  data->simulationInfo->realParameter[190] = (data->simulationInfo->realParameter[193]) * (cos(1.570796326794897 - data->simulationInfo->realParameter[188])) - ((data->simulationInfo->realParameter[191]) * (sin(1.570796326794897 - data->simulationInfo->realParameter[188])));
  TRACE_POP
}

/*
equation index: 244
type: SIMPLE_ASSIGN
gENCLS._iq0 = gENCLS.ir0 * sin(1.570796326794897 - gENCLS.delta0) + gENCLS.ii0 * cos(1.570796326794897 - gENCLS.delta0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_244(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,244};
  data->simulationInfo->realParameter[192] = (data->simulationInfo->realParameter[193]) * (sin(1.570796326794897 - data->simulationInfo->realParameter[188])) + (data->simulationInfo->realParameter[191]) * (cos(1.570796326794897 - data->simulationInfo->realParameter[188]));
  TRACE_POP
}

/*
equation index: 243
type: SIMPLE_ASSIGN
gENCLS._vf0 = gENCLS.vq0 + gENCLS.R_a * gENCLS.iq0 + gENCLS.X_d * gENCLS.id0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_243(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,243};
  data->simulationInfo->realParameter[198] = data->simulationInfo->realParameter[200] + (data->simulationInfo->realParameter[182]) * (data->simulationInfo->realParameter[192]) + (data->simulationInfo->realParameter[185]) * (data->simulationInfo->realParameter[190]);
  TRACE_POP
}

/*
equation index: 242
type: SIMPLE_ASSIGN
gENCLS._vd0 = gENCLS.vr0 * cos(1.570796326794897 - gENCLS.delta0) - gENCLS.vi0 * sin(1.570796326794897 - gENCLS.delta0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_242(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,242};
  data->simulationInfo->realParameter[197] = (data->simulationInfo->realParameter[201]) * (cos(1.570796326794897 - data->simulationInfo->realParameter[188])) - ((data->simulationInfo->realParameter[199]) * (sin(1.570796326794897 - data->simulationInfo->realParameter[188])));
  TRACE_POP
}

/*
equation index: 241
type: SIMPLE_ASSIGN
gENCLS._S_b = SysData.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_241(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,241};
  data->simulationInfo->realParameter[183] = data->simulationInfo->realParameter[32];
  TRACE_POP
}

/*
equation index: 240
type: SIMPLE_ASSIGN
gENCLS._CoB = gENCLS.M_b / gENCLS.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_240(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,240};
  data->simulationInfo->realParameter[176] = DIVISION_SIM(data->simulationInfo->realParameter[179],data->simulationInfo->realParameter[183],"gENCLS.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 239
type: SIMPLE_ASSIGN
gENCLS._D = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_239(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,239};
  data->simulationInfo->realParameter[177] = 0.0;
  TRACE_POP
}

/*
equation index: 238
type: SIMPLE_ASSIGN
gENCLS._H = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_238(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,238};
  data->simulationInfo->realParameter[178] = 0.0;
  TRACE_POP
}

/*
equation index: 237
type: SIMPLE_ASSIGN
gENCLS._enabledisplayPF = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_237(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,237};
  data->simulationInfo->booleanParameter[54] = 0;
  TRACE_POP
}

/*
equation index: 236
type: SIMPLE_ASSIGN
gENCLS._displayPF = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_236(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,236};
  data->simulationInfo->booleanParameter[48] = 0;
  TRACE_POP
}

/*
equation index: 235
type: SIMPLE_ASSIGN
gENCLS._enableangle_0 = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_235(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,235};
  data->simulationInfo->booleanParameter[53] = 0;
  TRACE_POP
}

/*
equation index: 234
type: SIMPLE_ASSIGN
gENCLS._enablev_0 = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_234(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,234};
  data->simulationInfo->booleanParameter[56] = 0;
  TRACE_POP
}

/*
equation index: 233
type: SIMPLE_ASSIGN
gENCLS._enableQ_0 = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_233(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,233};
  data->simulationInfo->booleanParameter[50] = 0;
  TRACE_POP
}

/*
equation index: 232
type: SIMPLE_ASSIGN
gENCLS._enableP_0 = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_232(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,232};
  data->simulationInfo->booleanParameter[49] = 0;
  TRACE_POP
}

/*
equation index: 231
type: SIMPLE_ASSIGN
gENCLS._enablefn = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_231(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,231};
  data->simulationInfo->booleanParameter[55] = 0;
  TRACE_POP
}

/*
equation index: 230
type: SIMPLE_ASSIGN
gENCLS._fn = SysData.fn
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_230(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,230};
  data->simulationInfo->realParameter[189] = data->simulationInfo->realParameter[33];
  TRACE_POP
}

/*
equation index: 229
type: SIMPLE_ASSIGN
gENCLS._enableV_b = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_229(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,229};
  data->simulationInfo->booleanParameter[52] = 0;
  TRACE_POP
}

/*
equation index: 228
type: SIMPLE_ASSIGN
gENCLS._V_b = 400000.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_228(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,228};
  data->simulationInfo->realParameter[184] = 400000.0;
  TRACE_POP
}

/*
equation index: 227
type: SIMPLE_ASSIGN
gENCLS._enableS_b = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_227(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,227};
  data->simulationInfo->booleanParameter[51] = 0;
  TRACE_POP
}

/*
equation index: 226
type: SIMPLE_ASSIGN
pwLine4._X = 0.1
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_226(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,226};
  data->simulationInfo->realParameter[325] = 0.1;
  TRACE_POP
}

/*
equation index: 225
type: SIMPLE_ASSIGN
pwLine4._Z._im = pwLine4.X
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_225(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,225};
  data->simulationInfo->realParameter[328] = data->simulationInfo->realParameter[325];
  TRACE_POP
}

/*
equation index: 224
type: SIMPLE_ASSIGN
pwLine4._R = 0.0005
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_224(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,224};
  data->simulationInfo->realParameter[323] = 0.0005;
  TRACE_POP
}

/*
equation index: 223
type: SIMPLE_ASSIGN
pwLine4._Z._re = pwLine4.R
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_223(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,223};
  data->simulationInfo->realParameter[329] = data->simulationInfo->realParameter[323];
  TRACE_POP
}

/*
equation index: 222
type: SIMPLE_ASSIGN
pwLine4._B = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_222(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,222};
  data->simulationInfo->realParameter[321] = 0.0;
  TRACE_POP
}

/*
equation index: 221
type: SIMPLE_ASSIGN
pwLine4._Y._im = pwLine4.B
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_221(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,221};
  data->simulationInfo->realParameter[326] = data->simulationInfo->realParameter[321];
  TRACE_POP
}

/*
equation index: 220
type: SIMPLE_ASSIGN
pwLine4._G = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_220(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,220};
  data->simulationInfo->realParameter[322] = 0.0;
  TRACE_POP
}

/*
equation index: 219
type: SIMPLE_ASSIGN
pwLine4._Y._re = pwLine4.G
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_219(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,219};
  data->simulationInfo->realParameter[327] = data->simulationInfo->realParameter[322];
  TRACE_POP
}

/*
equation index: 218
type: SIMPLE_ASSIGN
pwLine4._displayPF = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_218(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,218};
  data->simulationInfo->booleanParameter[70] = 0;
  TRACE_POP
}

/*
equation index: 217
type: SIMPLE_ASSIGN
pwLine4._opening = 1
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_217(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,217};
  data->simulationInfo->integerParameter[9] = ((modelica_integer) 1);
  TRACE_POP
}

/*
equation index: 216
type: SIMPLE_ASSIGN
pwLine4._t2 = 9.999999999999999e+59
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_216(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,216};
  data->simulationInfo->realParameter[331] = 9.999999999999999e+59;
  TRACE_POP
}

/*
equation index: 215
type: SIMPLE_ASSIGN
pwLine4._t1 = 9.999999999999999e+59
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_215(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,215};
  data->simulationInfo->realParameter[330] = 9.999999999999999e+59;
  TRACE_POP
}

/*
equation index: 214
type: SIMPLE_ASSIGN
pwLine4._S_b = SysData.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_214(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,214};
  data->simulationInfo->realParameter[324] = data->simulationInfo->realParameter[32];
  TRACE_POP
}

/*
equation index: 213
type: SIMPLE_ASSIGN
pwLine3._X = 0.1
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_213(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,213};
  data->simulationInfo->realParameter[314] = 0.1;
  TRACE_POP
}

/*
equation index: 212
type: SIMPLE_ASSIGN
pwLine3._Z._im = pwLine3.X
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_212(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,212};
  data->simulationInfo->realParameter[317] = data->simulationInfo->realParameter[314];
  TRACE_POP
}

/*
equation index: 211
type: SIMPLE_ASSIGN
pwLine3._R = 0.0005
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_211(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,211};
  data->simulationInfo->realParameter[312] = 0.0005;
  TRACE_POP
}

/*
equation index: 210
type: SIMPLE_ASSIGN
pwLine3._Z._re = pwLine3.R
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_210(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,210};
  data->simulationInfo->realParameter[318] = data->simulationInfo->realParameter[312];
  TRACE_POP
}

/*
equation index: 209
type: SIMPLE_ASSIGN
pwLine3._B = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_209(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,209};
  data->simulationInfo->realParameter[310] = 0.0;
  TRACE_POP
}

/*
equation index: 208
type: SIMPLE_ASSIGN
pwLine3._Y._im = pwLine3.B
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_208(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,208};
  data->simulationInfo->realParameter[315] = data->simulationInfo->realParameter[310];
  TRACE_POP
}

/*
equation index: 207
type: SIMPLE_ASSIGN
pwLine3._G = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_207(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,207};
  data->simulationInfo->realParameter[311] = 0.0;
  TRACE_POP
}

/*
equation index: 206
type: SIMPLE_ASSIGN
pwLine3._Y._re = pwLine3.G
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_206(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,206};
  data->simulationInfo->realParameter[316] = data->simulationInfo->realParameter[311];
  TRACE_POP
}

/*
equation index: 205
type: SIMPLE_ASSIGN
pwLine3._displayPF = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_205(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,205};
  data->simulationInfo->booleanParameter[69] = 0;
  TRACE_POP
}

/*
equation index: 204
type: SIMPLE_ASSIGN
pwLine3._opening = 1
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_204(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,204};
  data->simulationInfo->integerParameter[8] = ((modelica_integer) 1);
  TRACE_POP
}

/*
equation index: 203
type: SIMPLE_ASSIGN
pwLine3._t2 = 9.999999999999999e+59
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_203(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,203};
  data->simulationInfo->realParameter[320] = 9.999999999999999e+59;
  TRACE_POP
}

/*
equation index: 202
type: SIMPLE_ASSIGN
pwLine3._t1 = 9.999999999999999e+59
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_202(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,202};
  data->simulationInfo->realParameter[319] = 9.999999999999999e+59;
  TRACE_POP
}

/*
equation index: 201
type: SIMPLE_ASSIGN
pwLine3._S_b = SysData.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_201(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,201};
  data->simulationInfo->realParameter[313] = data->simulationInfo->realParameter[32];
  TRACE_POP
}

/*
equation index: 200
type: SIMPLE_ASSIGN
pwLine1._X = 0.2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_200(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,200};
  data->simulationInfo->realParameter[303] = 0.2;
  TRACE_POP
}

/*
equation index: 199
type: SIMPLE_ASSIGN
pwLine1._Z._im = pwLine1.X
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_199(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,199};
  data->simulationInfo->realParameter[306] = data->simulationInfo->realParameter[303];
  TRACE_POP
}

/*
equation index: 198
type: SIMPLE_ASSIGN
pwLine1._R = 0.001
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_198(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,198};
  data->simulationInfo->realParameter[301] = 0.001;
  TRACE_POP
}

/*
equation index: 197
type: SIMPLE_ASSIGN
pwLine1._Z._re = pwLine1.R
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_197(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,197};
  data->simulationInfo->realParameter[307] = data->simulationInfo->realParameter[301];
  TRACE_POP
}

/*
equation index: 196
type: SIMPLE_ASSIGN
pwLine1._B = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_196(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,196};
  data->simulationInfo->realParameter[299] = 0.0;
  TRACE_POP
}

/*
equation index: 195
type: SIMPLE_ASSIGN
pwLine1._Y._im = pwLine1.B
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_195(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,195};
  data->simulationInfo->realParameter[304] = data->simulationInfo->realParameter[299];
  TRACE_POP
}

/*
equation index: 194
type: SIMPLE_ASSIGN
pwLine1._G = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_194(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,194};
  data->simulationInfo->realParameter[300] = 0.0;
  TRACE_POP
}

/*
equation index: 193
type: SIMPLE_ASSIGN
pwLine1._Y._re = pwLine1.G
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_193(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,193};
  data->simulationInfo->realParameter[305] = data->simulationInfo->realParameter[300];
  TRACE_POP
}

/*
equation index: 192
type: SIMPLE_ASSIGN
pwLine1._displayPF = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_192(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,192};
  data->simulationInfo->booleanParameter[68] = 0;
  TRACE_POP
}

/*
equation index: 191
type: SIMPLE_ASSIGN
pwLine1._opening = 1
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_191(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,191};
  data->simulationInfo->integerParameter[7] = ((modelica_integer) 1);
  TRACE_POP
}

/*
equation index: 190
type: SIMPLE_ASSIGN
pwLine1._t2 = 9.999999999999999e+59
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_190(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,190};
  data->simulationInfo->realParameter[309] = 9.999999999999999e+59;
  TRACE_POP
}

/*
equation index: 189
type: SIMPLE_ASSIGN
pwLine1._t1 = 9.999999999999999e+59
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_189(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,189};
  data->simulationInfo->realParameter[308] = 9.999999999999999e+59;
  TRACE_POP
}

/*
equation index: 188
type: SIMPLE_ASSIGN
pwLine1._S_b = SysData.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_188(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,188};
  data->simulationInfo->realParameter[302] = data->simulationInfo->realParameter[32];
  TRACE_POP
}

/*
equation index: 187
type: SIMPLE_ASSIGN
pwLine._X = 0.2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_187(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,187};
  data->simulationInfo->realParameter[292] = 0.2;
  TRACE_POP
}

/*
equation index: 186
type: SIMPLE_ASSIGN
pwLine._Z._im = pwLine.X
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_186(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,186};
  data->simulationInfo->realParameter[295] = data->simulationInfo->realParameter[292];
  TRACE_POP
}

/*
equation index: 185
type: SIMPLE_ASSIGN
pwLine._R = 0.001
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_185(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,185};
  data->simulationInfo->realParameter[290] = 0.001;
  TRACE_POP
}

/*
equation index: 184
type: SIMPLE_ASSIGN
pwLine._Z._re = pwLine.R
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_184(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,184};
  data->simulationInfo->realParameter[296] = data->simulationInfo->realParameter[290];
  TRACE_POP
}

/*
equation index: 183
type: SIMPLE_ASSIGN
pwLine._B = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_183(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,183};
  data->simulationInfo->realParameter[288] = 0.0;
  TRACE_POP
}

/*
equation index: 182
type: SIMPLE_ASSIGN
pwLine._Y._im = pwLine.B
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_182(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,182};
  data->simulationInfo->realParameter[293] = data->simulationInfo->realParameter[288];
  TRACE_POP
}

/*
equation index: 181
type: SIMPLE_ASSIGN
pwLine._G = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_181(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,181};
  data->simulationInfo->realParameter[289] = 0.0;
  TRACE_POP
}

/*
equation index: 180
type: SIMPLE_ASSIGN
pwLine._Y._re = pwLine.G
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_180(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,180};
  data->simulationInfo->realParameter[294] = data->simulationInfo->realParameter[289];
  TRACE_POP
}

/*
equation index: 179
type: SIMPLE_ASSIGN
pwLine._displayPF = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_179(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,179};
  data->simulationInfo->booleanParameter[67] = 0;
  TRACE_POP
}

/*
equation index: 178
type: SIMPLE_ASSIGN
pwLine._opening = 1
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_178(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,178};
  data->simulationInfo->integerParameter[6] = ((modelica_integer) 1);
  TRACE_POP
}

/*
equation index: 177
type: SIMPLE_ASSIGN
pwLine._t2 = 9.999999999999999e+59
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_177(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,177};
  data->simulationInfo->realParameter[298] = 9.999999999999999e+59;
  TRACE_POP
}

/*
equation index: 176
type: SIMPLE_ASSIGN
pwLine._t1 = 9.999999999999999e+59
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_176(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,176};
  data->simulationInfo->realParameter[297] = 9.999999999999999e+59;
  TRACE_POP
}

/*
equation index: 175
type: SIMPLE_ASSIGN
pwLine._S_b = SysData.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_175(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,175};
  data->simulationInfo->realParameter[291] = data->simulationInfo->realParameter[32];
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_1(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_2(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_3(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_4(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_5(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_6(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_7(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_8(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_9(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_744(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_11(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_12(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_13(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_14(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_15(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_751(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_17(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_18(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_19(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_20(DATA *data, threadData_t *threadData);


void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_590(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_591(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_592(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_593(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_594(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_595(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_596(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_597(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_599(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_598(DATA*, threadData_t*);
/*
equation index: 600
indexNonlinear: 2
type: NONLINEAR

vars: {eSAC2A._XADIFD, eSAC2A._rotatingExciterWithDemagnetization._sISO._y}
eqns: {590, 591, 592, 593, 594, 595, 596, 597, 599, 598}
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_600(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,600};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 600 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[0] = data->localData[0]->realVars[64] /* eSAC2A.XADIFD variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[1] = data->localData[0]->realVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */;
  retValue = solve_nonlinear_system(data, threadData, 2);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,600};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 600 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[64] /* eSAC2A.XADIFD variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[0];
  data->localData[0]->realVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */ = data->simulationInfo->nonlinearSystemData[2].nlsx[1];
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_860(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_861(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_863(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_864(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_36(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_37(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_38(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_39(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_40(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_41(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_42(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_43(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_44(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_45(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_46(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_47(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_48(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_754(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_755(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_753(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_853(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_53(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_854(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_55(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_56(DATA *data, threadData_t *threadData);


void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_626(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_627(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_628(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_629(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_630(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_631(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_632(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_633(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_634(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_635(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_636(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_637(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_638(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_639(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_640(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_641(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_642(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_643(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_644(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_645(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_646(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_647(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_648(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_649(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_650(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_651(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_677(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_676(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_675(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_674(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_673(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_672(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_671(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_670(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_669(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_668(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_667(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_666(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_665(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_664(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_663(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_662(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_661(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_660(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_659(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_658(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_657(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_656(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_655(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_654(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_653(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_652(DATA*, threadData_t*);
/*
equation index: 678
indexNonlinear: 3
type: NONLINEAR

vars: {pwLine._ir._im, pwLine1._is._im, constantLoad._p._ir, pwLine._ir._re, pwLine3._is._re, pwLine3._is._im, pwLine3._ir._re, pwLine4._is._re, pwLine4._is._im, pwLine3._ir._im, pwLine4._ir._im, pwLine1._ir._re, gENCLS._id, gENCLS._iq, generator._Epd, generator._Epq, generator._uq, generator._PSIppq, generator._id, generator._iq, pwLine1._vr._im, pwLine1._vr._re, pwLine1._vs._re, pwLine1._vs._im, pwLine3._vr._re, pwLine3._vr._im}
eqns: {626, 627, 628, 629, 630, 631, 632, 633, 634, 635, 636, 637, 638, 639, 640, 641, 642, 643, 644, 645, 646, 647, 648, 649, 650, 651, 677, 676, 675, 674, 673, 672, 671, 670, 669, 668, 667, 666, 665, 664, 663, 662, 661, 660, 659, 658, 657, 656, 655, 654, 653, 652}
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_678(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,678};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 678 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[0] = data->localData[0]->realVars[117] /* pwLine.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[1] = data->localData[0]->realVars[129] /* pwLine1.is.im variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[2] = data->localData[0]->realVars[54] /* constantLoad.p.ir variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[3] = data->localData[0]->realVars[118] /* pwLine.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[4] = data->localData[0]->realVars[142] /* pwLine3.is.re variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[5] = data->localData[0]->realVars[141] /* pwLine3.is.im variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[6] = data->localData[0]->realVars[140] /* pwLine3.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[7] = data->localData[0]->realVars[152] /* pwLine4.is.re variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[8] = data->localData[0]->realVars[151] /* pwLine4.is.im variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[9] = data->localData[0]->realVars[139] /* pwLine3.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[10] = data->localData[0]->realVars[149] /* pwLine4.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[11] = data->localData[0]->realVars[128] /* pwLine1.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[12] = data->localData[0]->realVars[87] /* gENCLS.id variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[13] = data->localData[0]->realVars[88] /* gENCLS.iq variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[14] = data->localData[0]->realVars[7] /* generator.Epd STATE(1) */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[15] = data->localData[0]->realVars[8] /* generator.Epq STATE(1) */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[16] = data->localData[0]->realVars[110] /* generator.uq variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[17] = data->localData[0]->realVars[100] /* generator.PSIppq variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[18] = data->localData[0]->realVars[107] /* generator.id variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[19] = data->localData[0]->realVars[108] /* generator.iq variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[20] = data->localData[0]->realVars[131] /* pwLine1.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[21] = data->localData[0]->realVars[132] /* pwLine1.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[22] = data->localData[0]->realVars[134] /* pwLine1.vs.re variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[23] = data->localData[0]->realVars[133] /* pwLine1.vs.im variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[24] = data->localData[0]->realVars[144] /* pwLine3.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[25] = data->localData[0]->realVars[143] /* pwLine3.vr.im variable */;
  retValue = solve_nonlinear_system(data, threadData, 3);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,678};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 678 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[117] /* pwLine.ir.im variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[0];
  data->localData[0]->realVars[129] /* pwLine1.is.im variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[1];
  data->localData[0]->realVars[54] /* constantLoad.p.ir variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[2];
  data->localData[0]->realVars[118] /* pwLine.ir.re variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[3];
  data->localData[0]->realVars[142] /* pwLine3.is.re variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[4];
  data->localData[0]->realVars[141] /* pwLine3.is.im variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[5];
  data->localData[0]->realVars[140] /* pwLine3.ir.re variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[6];
  data->localData[0]->realVars[152] /* pwLine4.is.re variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[7];
  data->localData[0]->realVars[151] /* pwLine4.is.im variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[8];
  data->localData[0]->realVars[139] /* pwLine3.ir.im variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[9];
  data->localData[0]->realVars[149] /* pwLine4.ir.im variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[10];
  data->localData[0]->realVars[128] /* pwLine1.ir.re variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[11];
  data->localData[0]->realVars[87] /* gENCLS.id variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[12];
  data->localData[0]->realVars[88] /* gENCLS.iq variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[13];
  data->localData[0]->realVars[7] /* generator.Epd STATE(1) */ = data->simulationInfo->nonlinearSystemData[3].nlsx[14];
  data->localData[0]->realVars[8] /* generator.Epq STATE(1) */ = data->simulationInfo->nonlinearSystemData[3].nlsx[15];
  data->localData[0]->realVars[110] /* generator.uq variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[16];
  data->localData[0]->realVars[100] /* generator.PSIppq variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[17];
  data->localData[0]->realVars[107] /* generator.id variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[18];
  data->localData[0]->realVars[108] /* generator.iq variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[19];
  data->localData[0]->realVars[131] /* pwLine1.vr.im variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[20];
  data->localData[0]->realVars[132] /* pwLine1.vr.re variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[21];
  data->localData[0]->realVars[134] /* pwLine1.vs.re variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[22];
  data->localData[0]->realVars[133] /* pwLine1.vs.im variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[23];
  data->localData[0]->realVars[144] /* pwLine3.vr.re variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[24];
  data->localData[0]->realVars[143] /* pwLine3.vr.im variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[25];
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_871(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_870(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_893(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_891(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_892(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_890(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_872(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_873(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_118(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_119(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_120(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_121(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_122(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_123(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_124(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_875(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_876(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_877(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_880(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_889(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_888(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_882(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_883(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_884(DATA *data, threadData_t *threadData);


/*
equation index: 703
type: SIMPLE_ASSIGN
eSAC2A._limiter1._y = eSAC2A.lV_GATE.p
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_703(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,703};
  data->localData[0]->realVars[75] /* eSAC2A.limiter1.y variable */ = data->localData[0]->realVars[74] /* eSAC2A.lV_GATE.p variable */;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_886(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_887(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_881(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_138(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_139(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_878(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_874(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_142(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_910(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_144(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_915(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_146(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_899(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_900(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_901(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_922(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_921(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_152(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_907(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_914(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_913(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_904(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_903(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_906(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_905(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_898(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_897(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_920(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_919(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_912(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_911(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_917(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_918(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_895(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_896(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_868(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_869(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_745(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_746(DATA *data, threadData_t *threadData);


int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_569(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_568(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_567(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_566(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_565(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_564(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_563(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_562(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_561(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_560(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_559(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_558(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_557(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_556(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_555(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_554(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_553(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_552(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_551(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_550(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_549(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_548(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_547(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_546(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_545(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_544(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_543(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_542(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_541(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_540(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_539(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_538(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_537(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_536(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_535(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_534(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_533(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_532(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_531(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_530(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_529(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_528(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_527(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_526(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_525(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_524(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_523(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_522(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_521(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_520(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_519(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_518(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_517(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_516(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_515(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_514(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_513(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_512(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_511(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_510(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_509(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_508(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_507(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_506(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_505(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_504(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_503(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_502(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_501(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_500(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_499(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_498(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_497(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_496(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_495(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_494(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_493(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_492(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_491(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_490(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_489(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_488(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_487(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_486(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_485(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_484(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_483(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_482(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_481(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_480(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_479(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_478(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_477(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_476(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_475(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_474(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_473(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_472(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_471(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_470(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_469(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_468(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_467(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_466(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_465(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_464(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_463(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_462(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_461(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_460(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_459(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_458(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_457(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_456(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_455(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_454(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_453(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_452(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_451(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_450(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_449(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_448(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_447(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_446(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_445(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_444(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_443(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_442(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_441(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_440(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_439(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_438(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_437(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_436(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_435(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_434(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_433(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_432(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_431(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_430(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_429(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_428(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_427(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_426(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_425(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_424(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_423(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_422(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_421(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_420(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_419(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_418(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_417(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_416(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_415(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_414(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_413(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_412(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_411(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_410(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_409(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_408(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_407(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_406(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_405(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_404(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_403(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_402(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_401(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_400(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_399(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_398(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_397(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_396(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_395(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_394(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_393(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_392(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_391(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_390(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_389(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_388(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_387(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_386(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_385(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_384(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_383(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_382(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_381(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_380(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_379(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_378(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_377(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_376(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_375(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_374(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_373(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_372(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_371(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_370(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_369(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_368(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_367(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_366(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_365(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_364(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_363(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_362(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_361(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_360(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_359(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_358(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_357(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_356(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_355(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_354(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_353(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_352(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_351(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_350(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_349(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_348(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_347(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_346(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_345(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_344(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_343(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_342(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_341(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_340(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_339(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_338(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_337(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_336(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_335(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_334(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_333(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_332(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_331(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_330(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_329(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_328(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_327(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_326(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_325(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_324(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_323(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_322(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_321(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_320(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_319(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_318(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_317(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_316(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_315(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_314(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_313(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_312(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_311(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_310(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_309(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_308(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_307(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_306(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_305(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_304(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_303(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_302(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_301(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_300(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_299(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_298(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_297(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_296(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_295(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_294(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_293(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_292(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_291(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_290(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_289(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_288(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_287(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_286(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_285(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_284(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_283(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_282(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_281(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_280(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_279(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_278(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_277(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_276(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_275(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_274(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_273(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_272(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_271(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_270(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_269(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_268(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_267(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_266(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_265(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_264(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_263(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_262(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_261(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_260(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_259(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_258(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_257(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_256(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_255(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_254(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_253(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_252(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_251(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_250(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_249(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_248(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_247(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_246(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_245(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_244(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_243(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_242(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_241(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_240(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_239(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_238(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_237(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_236(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_235(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_234(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_233(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_232(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_231(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_230(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_229(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_228(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_227(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_226(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_225(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_224(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_223(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_222(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_221(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_220(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_219(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_218(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_217(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_216(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_215(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_214(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_213(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_212(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_211(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_210(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_209(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_208(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_207(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_206(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_205(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_204(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_203(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_202(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_201(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_200(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_199(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_198(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_197(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_196(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_195(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_194(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_193(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_192(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_191(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_190(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_189(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_188(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_187(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_186(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_185(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_184(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_183(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_182(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_181(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_180(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_179(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_178(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_177(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_176(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_175(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_1(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_2(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_3(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_4(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_5(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_6(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_7(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_8(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_9(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_744(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_11(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_12(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_13(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_14(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_15(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_751(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_17(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_18(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_19(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_20(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_600(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_860(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_861(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_863(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_864(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_36(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_37(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_38(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_39(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_40(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_41(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_42(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_43(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_44(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_45(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_46(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_47(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_48(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_754(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_755(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_753(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_853(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_53(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_854(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_55(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_56(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_678(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_871(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_870(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_893(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_891(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_892(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_890(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_872(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_873(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_118(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_119(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_120(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_121(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_122(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_123(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_124(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_875(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_876(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_877(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_880(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_889(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_888(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_882(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_883(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_884(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_703(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_886(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_887(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_881(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_138(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_139(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_878(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_874(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_142(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_910(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_144(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_915(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_146(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_899(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_900(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_901(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_922(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_921(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_152(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_907(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_914(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_913(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_904(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_903(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_906(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_905(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_898(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_897(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_920(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_919(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_912(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_911(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_917(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_918(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_895(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_896(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_868(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_869(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_745(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_746(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int *equationIndexes = NULL;
  double res = 0.0;

  res = data->localData[0]->realVars[89] /* gENCLS.omega variable */;
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

