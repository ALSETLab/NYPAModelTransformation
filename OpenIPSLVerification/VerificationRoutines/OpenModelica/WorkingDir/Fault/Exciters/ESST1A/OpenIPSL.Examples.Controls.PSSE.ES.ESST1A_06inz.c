/* Initialization */
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESST1A_model.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESST1A_11mix.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESST1A_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_functionInitialEquations_0(DATA *data, threadData_t *threadData);

/*
equation index: 1
type: SIMPLE_ASSIGN
gENCLS.omega = $START.gENCLS.omega
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  data->localData[0]->realVars[90] /* gENCLS.omega variable */ = data->modelData->realVarsData[90].attribute /* gENCLS.omega variable */.start;
  TRACE_POP
}

/*
equation index: 2
type: SIMPLE_ASSIGN
eSST1A.Limiters.y = const.k * (eSST1A.Limiters.k1 + eSST1A.Limiters.k2)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2};
  data->localData[0]->realVars[61] /* eSST1A.Limiters.y variable */ = (data->simulationInfo->realParameter[34] /* const.k PARAM */) * (data->simulationInfo->realParameter[93] /* eSST1A.Limiters.k1 PARAM */ + data->simulationInfo->realParameter[94] /* eSST1A.Limiters.k2 PARAM */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_356(DATA *data, threadData_t *threadData);


/*
equation index: 4
type: SIMPLE_ASSIGN
gENCLS.delta = gENCLS.delta0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_4(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4};
  data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */ = data->simulationInfo->realParameter[209] /* gENCLS.delta0 PARAM */;
  TRACE_POP
}

/*
equation index: 5
type: SIMPLE_ASSIGN
gENCLS.eq = gENCLS.vf0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_5(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5};
  data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */ = data->simulationInfo->realParameter[219] /* gENCLS.vf0 PARAM */;
  TRACE_POP
}

/*
equation index: 6
type: SIMPLE_ASSIGN
eSST1A.Efd0 = eSST1A.EFD0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_6(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6};
  data->simulationInfo->realParameter[86] /* eSST1A.Efd0 PARAM */ = data->localData[0]->realVars[60] /* eSST1A.EFD0 variable */;
  TRACE_POP
}

/*
equation index: 7
type: SIMPLE_ASSIGN
eSST1A.imDerivativeLag.x_start = eSST1A.Efd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_7(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7};
  data->simulationInfo->realParameter[143] /* eSST1A.imDerivativeLag.x_start PARAM */ = data->simulationInfo->realParameter[86] /* eSST1A.Efd0 PARAM */;
  TRACE_POP
}

/*
equation index: 8
type: SIMPLE_ASSIGN
$START.eSST1A.imDerivativeLag.x = eSST1A.imDerivativeLag.x_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_8(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,8};
  data->modelData->realVarsData[1].attribute /* eSST1A.imDerivativeLag.x STATE(1) */.start = data->simulationInfo->realParameter[143] /* eSST1A.imDerivativeLag.x_start PARAM */;
    data->localData[0]->realVars[1] /* eSST1A.imDerivativeLag.x STATE(1) */ = data->modelData->realVarsData[1].attribute /* eSST1A.imDerivativeLag.x STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[1].info /* eSST1A.imDerivativeLag.x */.name, (modelica_real) data->localData[0]->realVars[1] /* eSST1A.imDerivativeLag.x STATE(1) */);
  TRACE_POP
}

/*
equation index: 9
type: SIMPLE_ASSIGN
eSST1A.imDerivativeLag.y = eSST1A.imDerivativeLag.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_9(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,9};
  data->localData[0]->realVars[74] /* eSST1A.imDerivativeLag.y variable */ = data->simulationInfo->realParameter[144] /* eSST1A.imDerivativeLag.y_start PARAM */;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_514(DATA *data, threadData_t *threadData);


/*
equation index: 11
type: SIMPLE_ASSIGN
gENROE.w = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_11(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11};
  data->localData[0]->realVars[12] /* gENROE.w STATE(1) */ = 0.0;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_363(DATA *data, threadData_t *threadData);


/*
equation index: 13
type: SIMPLE_ASSIGN
gENROE.delta = gENROE.delta0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_13(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13};
  data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */ = data->simulationInfo->realParameter[291] /* gENROE.delta0 PARAM */;
  TRACE_POP
}

/*
equation index: 14
type: SIMPLE_ASSIGN
$DER.gENROE.PSIkq = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_14(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14};
  data->localData[0]->realVars[23] /* der(gENROE.PSIkq) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 15
type: SIMPLE_ASSIGN
$DER.gENROE.PSIkd = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_15(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,15};
  data->localData[0]->realVars[22] /* der(gENROE.PSIkd) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 16
type: SIMPLE_ASSIGN
$DER.gENROE.Epq = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_16(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,16};
  data->localData[0]->realVars[21] /* der(gENROE.Epq) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 17
type: SIMPLE_ASSIGN
$DER.gENROE.Epd = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_17(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,17};
  data->localData[0]->realVars[20] /* der(gENROE.Epd) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 18
type: SIMPLE_ASSIGN
gENROE.XaqIlq = (-$DER.gENROE.Epd) * gENROE.Tpq0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_18(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,18};
  data->localData[0]->realVars[105] /* gENROE.XaqIlq variable */ = ((-data->localData[0]->realVars[20] /* der(gENROE.Epd) STATE_DER */)) * (data->simulationInfo->realParameter[269] /* gENROE.Tpq0 PARAM */);
  TRACE_POP
}

void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_19(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_20(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_21(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_22(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_23(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_24(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_25(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_26(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_27(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_28(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_29(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_30(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_31(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_32(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_33(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_34(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_35(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_36(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_37(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_38(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_39(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_40(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_41(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_42(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_43(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_44(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_45(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_46(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_47(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_48(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_49(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_50(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_51(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_52(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_53(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_54(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_55(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_56(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_57(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_58(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_59(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_60(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_61(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_62(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_63(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_64(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_65(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_66(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_67(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_68(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_69(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_70(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_71(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_72(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_73(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_74(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_75(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_76(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_77(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_78(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_79(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_109(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_108(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_107(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_106(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_105(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_104(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_103(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_102(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_101(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_100(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_99(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_98(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_97(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_96(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_95(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_94(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_93(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_92(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_91(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_90(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_89(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_88(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_87(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_86(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_85(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_84(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_83(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_82(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_81(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_80(DATA*, threadData_t*);
/*
equation index: 110
indexNonlinear: 0
type: NONLINEAR

vars: {pwLine.ir.re, pwLine1.is.re, pwLine.ir.im, pwLine1.is.im, pwLine4.is.im, pwLine3.ir.im, pwLine3.ir.re, pwLine4.is.re, pwLine3.is.re, pwLine3.is.im, pwLine4.ir.re, pwLine1.ir.im, gENCLS.iq, gENCLS.id, gENROE.Epd, gENROE.PSIkd, gENROE.PSIppd, gENROE.PSIppq, gENROE.id, gENROE.iq, pwLine.vs.re, pwLine.vs.im, pwLine1.vr.im, pwLine1.vr.re, eSST1A.XADIFD, eSST1A.ECOMP, pwLine1.vs.re, pwLine3.vr.im, pwLine3.vr.re, pwLine1.vs.im}
eqns: {19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 109, 108, 107, 106, 105, 104, 103, 102, 101, 100, 99, 98, 97, 96, 95, 94, 93, 92, 91, 90, 89, 88, 87, 86, 85, 84, 83, 82, 81, 80}
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_110(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,110};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 110 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[0] = data->localData[0]->realVars[119] /* pwLine.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1] = data->localData[0]->realVars[131] /* pwLine1.is.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[2] = data->localData[0]->realVars[118] /* pwLine.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[3] = data->localData[0]->realVars[130] /* pwLine1.is.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[4] = data->localData[0]->realVars[152] /* pwLine4.is.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[5] = data->localData[0]->realVars[140] /* pwLine3.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[6] = data->localData[0]->realVars[141] /* pwLine3.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[7] = data->localData[0]->realVars[153] /* pwLine4.is.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[8] = data->localData[0]->realVars[143] /* pwLine3.is.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[9] = data->localData[0]->realVars[142] /* pwLine3.is.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[10] = data->localData[0]->realVars[151] /* pwLine4.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[11] = data->localData[0]->realVars[128] /* pwLine1.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[12] = data->localData[0]->realVars[89] /* gENCLS.iq variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[13] = data->localData[0]->realVars[88] /* gENCLS.id variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[14] = data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[15] = data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[16] = data->localData[0]->realVars[100] /* gENROE.PSIppd variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[17] = data->localData[0]->realVars[101] /* gENROE.PSIppq variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[18] = data->localData[0]->realVars[108] /* gENROE.id variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[19] = data->localData[0]->realVars[109] /* gENROE.iq variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[20] = data->localData[0]->realVars[123] /* pwLine.vs.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[21] = data->localData[0]->realVars[122] /* pwLine.vs.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[22] = data->localData[0]->realVars[132] /* pwLine1.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[23] = data->localData[0]->realVars[133] /* pwLine1.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[24] = data->localData[0]->realVars[62] /* eSST1A.XADIFD variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[25] = data->localData[0]->realVars[58] /* eSST1A.ECOMP variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[26] = data->localData[0]->realVars[135] /* pwLine1.vs.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[27] = data->localData[0]->realVars[144] /* pwLine3.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[28] = data->localData[0]->realVars[145] /* pwLine3.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[29] = data->localData[0]->realVars[134] /* pwLine1.vs.im variable */;
  retValue = solve_nonlinear_system(data, threadData, 0);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,110};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 110 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[119] /* pwLine.ir.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[0];
  data->localData[0]->realVars[131] /* pwLine1.is.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[1];
  data->localData[0]->realVars[118] /* pwLine.ir.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[2];
  data->localData[0]->realVars[130] /* pwLine1.is.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[3];
  data->localData[0]->realVars[152] /* pwLine4.is.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[4];
  data->localData[0]->realVars[140] /* pwLine3.ir.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[5];
  data->localData[0]->realVars[141] /* pwLine3.ir.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[6];
  data->localData[0]->realVars[153] /* pwLine4.is.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[7];
  data->localData[0]->realVars[143] /* pwLine3.is.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[8];
  data->localData[0]->realVars[142] /* pwLine3.is.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[9];
  data->localData[0]->realVars[151] /* pwLine4.ir.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[10];
  data->localData[0]->realVars[128] /* pwLine1.ir.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[11];
  data->localData[0]->realVars[89] /* gENCLS.iq variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[12];
  data->localData[0]->realVars[88] /* gENCLS.id variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[13];
  data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[14];
  data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[15];
  data->localData[0]->realVars[100] /* gENROE.PSIppd variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[16];
  data->localData[0]->realVars[101] /* gENROE.PSIppq variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[17];
  data->localData[0]->realVars[108] /* gENROE.id variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[18];
  data->localData[0]->realVars[109] /* gENROE.iq variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[19];
  data->localData[0]->realVars[123] /* pwLine.vs.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[20];
  data->localData[0]->realVars[122] /* pwLine.vs.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[21];
  data->localData[0]->realVars[132] /* pwLine1.vr.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[22];
  data->localData[0]->realVars[133] /* pwLine1.vr.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[23];
  data->localData[0]->realVars[62] /* eSST1A.XADIFD variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[24];
  data->localData[0]->realVars[58] /* eSST1A.ECOMP variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[25];
  data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[26];
  data->localData[0]->realVars[144] /* pwLine3.vr.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[27];
  data->localData[0]->realVars[145] /* pwLine3.vr.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[28];
  data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[29];
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_473(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_472(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_516(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_481(DATA *data, threadData_t *threadData);


/*
equation index: 115
type: SIMPLE_ASSIGN
eSST1A.DiffV.u1 = eSST1A.VoltageReference.k
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_115(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,115};
  data->simulationInfo->realParameter[84] /* eSST1A.DiffV.u1 PARAM */ = data->simulationInfo->realParameter[123] /* eSST1A.VoltageReference.k PARAM */;
  TRACE_POP
}

/*
equation index: 116
type: SIMPLE_ASSIGN
eSST1A.VoltageReference.y = eSST1A.VoltageReference.k
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_116(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,116};
  data->simulationInfo->realParameter[124] /* eSST1A.VoltageReference.y PARAM */ = data->simulationInfo->realParameter[123] /* eSST1A.VoltageReference.k PARAM */;
  TRACE_POP
}

/*
equation index: 117
type: SIMPLE_ASSIGN
eSST1A.imLeadLag.x_start = eSST1A.V_REF - eSST1A.ECOMP0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_117(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,117};
  data->simulationInfo->realParameter[165] /* eSST1A.imLeadLag.x_start PARAM */ = data->simulationInfo->realParameter[120] /* eSST1A.V_REF PARAM */ - data->simulationInfo->realParameter[85] /* eSST1A.ECOMP0 PARAM */;
  TRACE_POP
}

/*
equation index: 118
type: SIMPLE_ASSIGN
eSST1A.imLeadLag.TF.x_start[1] = eSST1A.imLeadLag.x_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_118(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,118};
  data->simulationInfo->realParameter[161] /* eSST1A.imLeadLag.TF.x_start[1] PARAM */ = data->simulationInfo->realParameter[165] /* eSST1A.imLeadLag.x_start PARAM */;
  TRACE_POP
}

/*
equation index: 119
type: SIMPLE_ASSIGN
$START.eSST1A.imLeadLag.TF.x[1] = eSST1A.imLeadLag.TF.x_start[1]
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_119(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,119};
  data->modelData->realVarsData[77].attribute /* eSST1A.imLeadLag.TF.x[1] variable */.start = data->simulationInfo->realParameter[161] /* eSST1A.imLeadLag.TF.x_start[1] PARAM */;
    data->localData[0]->realVars[77] /* eSST1A.imLeadLag.TF.x[1] variable */ = data->modelData->realVarsData[77].attribute /* eSST1A.imLeadLag.TF.x[1] variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[77].info /* eSST1A.imLeadLag.TF.x[1] */.name, (modelica_real) data->localData[0]->realVars[77] /* eSST1A.imLeadLag.TF.x[1] variable */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_509(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_508(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_507(DATA *data, threadData_t *threadData);


/*
equation index: 123
type: SIMPLE_ASSIGN
eSST1A.imLeadLag1.x_start = eSST1A.VA0 / eSST1A.K_A
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_123(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,123};
  data->simulationInfo->realParameter[183] /* eSST1A.imLeadLag1.x_start PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[109] /* eSST1A.VA0 PARAM */,data->simulationInfo->realParameter[89] /* eSST1A.K_A PARAM */,"eSST1A.K_A",equationIndexes);
  TRACE_POP
}

/*
equation index: 124
type: SIMPLE_ASSIGN
eSST1A.imLeadLag1.TF.x_start[1] = eSST1A.imLeadLag1.x_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_124(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,124};
  data->simulationInfo->realParameter[179] /* eSST1A.imLeadLag1.TF.x_start[1] PARAM */ = data->simulationInfo->realParameter[183] /* eSST1A.imLeadLag1.x_start PARAM */;
  TRACE_POP
}

/*
equation index: 125
type: SIMPLE_ASSIGN
$START.eSST1A.imLeadLag1.TF.x[1] = eSST1A.imLeadLag1.TF.x_start[1]
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_125(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,125};
  data->modelData->realVarsData[80].attribute /* eSST1A.imLeadLag1.TF.x[1] variable */.start = data->simulationInfo->realParameter[179] /* eSST1A.imLeadLag1.TF.x_start[1] PARAM */;
    data->localData[0]->realVars[80] /* eSST1A.imLeadLag1.TF.x[1] variable */ = data->modelData->realVarsData[80].attribute /* eSST1A.imLeadLag1.TF.x[1] variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[80].info /* eSST1A.imLeadLag1.TF.x[1] */.name, (modelica_real) data->localData[0]->realVars[80] /* eSST1A.imLeadLag1.TF.x[1] variable */);
  TRACE_POP
}

/*
equation index: 126
type: SIMPLE_ASSIGN
eSST1A.imLeadLag.TF.x[1] = (eSST1A.imLeadLag.TF.d * eSST1A.hV_GATE.p - eSST1A.imLeadLag.TF.y) / (eSST1A.imLeadLag.TF.a[2] * eSST1A.imLeadLag.TF.d - eSST1A.imLeadLag.TF.bb[2])
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_126(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,126};
  data->localData[0]->realVars[77] /* eSST1A.imLeadLag.TF.x[1] variable */ = DIVISION_SIM((data->simulationInfo->realParameter[160] /* eSST1A.imLeadLag.TF.d PARAM */) * (data->localData[0]->realVars[72] /* eSST1A.hV_GATE.p variable */) - data->localData[0]->realVars[78] /* eSST1A.imLeadLag.TF.y variable */,(data->simulationInfo->realParameter[154] /* eSST1A.imLeadLag.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[160] /* eSST1A.imLeadLag.TF.d PARAM */) - data->simulationInfo->realParameter[159] /* eSST1A.imLeadLag.TF.bb[2] PARAM */,"eSST1A.imLeadLag.TF.a[2] * eSST1A.imLeadLag.TF.d - eSST1A.imLeadLag.TF.bb[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 127
type: SIMPLE_ASSIGN
eSST1A.imLeadLag.TF.x_scaled[1] = eSST1A.imLeadLag.TF.x[1] * eSST1A.imLeadLag.TF.a_end
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_127(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,127};
  data->localData[0]->realVars[2] /* eSST1A.imLeadLag.TF.x_scaled[1] STATE(1) */ = (data->localData[0]->realVars[77] /* eSST1A.imLeadLag.TF.x[1] variable */) * (data->simulationInfo->realParameter[155] /* eSST1A.imLeadLag.TF.a_end PARAM */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_505(DATA *data, threadData_t *threadData);


/*
equation index: 129
type: SIMPLE_ASSIGN
eSST1A.imLeadLag1.TF.x[1] = (eSST1A.imLeadLag1.TF.d * eSST1A.imLeadLag.y - eSST1A.imLeadLag1.TF.y) / (eSST1A.imLeadLag1.TF.a[2] * eSST1A.imLeadLag1.TF.d - eSST1A.imLeadLag1.TF.bb[2])
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_129(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,129};
  data->localData[0]->realVars[80] /* eSST1A.imLeadLag1.TF.x[1] variable */ = DIVISION_SIM((data->simulationInfo->realParameter[178] /* eSST1A.imLeadLag1.TF.d PARAM */) * (data->localData[0]->realVars[79] /* eSST1A.imLeadLag.y variable */) - data->localData[0]->realVars[81] /* eSST1A.imLeadLag1.TF.y variable */,(data->simulationInfo->realParameter[172] /* eSST1A.imLeadLag1.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[178] /* eSST1A.imLeadLag1.TF.d PARAM */) - data->simulationInfo->realParameter[177] /* eSST1A.imLeadLag1.TF.bb[2] PARAM */,"eSST1A.imLeadLag1.TF.a[2] * eSST1A.imLeadLag1.TF.d - eSST1A.imLeadLag1.TF.bb[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 130
type: SIMPLE_ASSIGN
eSST1A.imLeadLag1.TF.x_scaled[1] = eSST1A.imLeadLag1.TF.x[1] * eSST1A.imLeadLag1.TF.a_end
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_130(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,130};
  data->localData[0]->realVars[3] /* eSST1A.imLeadLag1.TF.x_scaled[1] STATE(1) */ = (data->localData[0]->realVars[80] /* eSST1A.imLeadLag1.TF.x[1] variable */) * (data->simulationInfo->realParameter[173] /* eSST1A.imLeadLag1.TF.a_end PARAM */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_506(DATA *data, threadData_t *threadData);


/*
equation index: 132
type: SIMPLE_ASSIGN
eSST1A.imDerivativeLag.x = eSST1A.add3_2.y - eSST1A.imDerivativeLag.y * eSST1A.imDerivativeLag.T
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_132(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,132};
  data->localData[0]->realVars[1] /* eSST1A.imDerivativeLag.x STATE(1) */ = data->localData[0]->realVars[70] /* eSST1A.add3_2.y variable */ - ((data->localData[0]->realVars[74] /* eSST1A.imDerivativeLag.y variable */) * (data->simulationInfo->realParameter[141] /* eSST1A.imDerivativeLag.T PARAM */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_515(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_476(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_474(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_475(DATA *data, threadData_t *threadData);


/*
equation index: 137
type: SIMPLE_ASSIGN
GEN1.angle = 57.29577951308232 * atan2(pwLine.vs.im, pwLine.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_137(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,137};
  data->localData[0]->realVars[37] /* GEN1.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[122] /* pwLine.vs.im variable */, data->localData[0]->realVars[123] /* pwLine.vs.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_520(DATA *data, threadData_t *threadData);


/*
equation index: 139
type: SIMPLE_ASSIGN
LOAD.angle = 57.29577951308232 * atan2(pwLine1.vs.im, pwLine1.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_139(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,139};
  data->localData[0]->realVars[45] /* LOAD.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[134] /* pwLine1.vs.im variable */, data->localData[0]->realVars[135] /* pwLine1.vs.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_525(DATA *data, threadData_t *threadData);


/*
equation index: 141
type: SIMPLE_ASSIGN
GEN2.angle = 57.29577951308232 * atan2(pwLine1.vr.im, pwLine1.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_141(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,141};
  data->localData[0]->realVars[41] /* GEN2.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[132] /* pwLine1.vr.im variable */, data->localData[0]->realVars[133] /* pwLine1.vr.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_538(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_539(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_540(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_545(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_544(DATA *data, threadData_t *threadData);


/*
equation index: 147
type: SIMPLE_ASSIGN
FAULT.angle = 57.29577951308232 * atan2(pwLine3.vr.im, pwLine3.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_147(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,147};
  data->localData[0]->realVars[33] /* FAULT.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[144] /* pwLine3.vr.im variable */, data->localData[0]->realVars[145] /* pwLine3.vr.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_529(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_524(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_523(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_533(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_532(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_535(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_534(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_543(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_542(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_537(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_536(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_522(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_521(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_527(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_528(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_518(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_519(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_470(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_471(DATA *data, threadData_t *threadData);


/*
equation index: 167
type: SIMPLE_ASSIGN
GEN1.p.ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_167(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,167};
  data->localData[0]->realVars[39] /* GEN1.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 168
type: SIMPLE_ASSIGN
GEN1.p.ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_168(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,168};
  data->localData[0]->realVars[38] /* GEN1.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 169
type: SIMPLE_ASSIGN
LOAD.p.ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_169(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,169};
  data->localData[0]->realVars[47] /* LOAD.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 170
type: SIMPLE_ASSIGN
LOAD.p.ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_170(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,170};
  data->localData[0]->realVars[46] /* LOAD.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 171
type: SIMPLE_ASSIGN
GEN2.p.ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_171(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,171};
  data->localData[0]->realVars[43] /* GEN2.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 172
type: SIMPLE_ASSIGN
GEN2.p.ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_172(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,172};
  data->localData[0]->realVars[42] /* GEN2.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 173
type: SIMPLE_ASSIGN
FAULT.p.ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_173(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,173};
  data->localData[0]->realVars[35] /* FAULT.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 174
type: SIMPLE_ASSIGN
FAULT.p.ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_174(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,174};
  data->localData[0]->realVars[34] /* FAULT.p.ii variable */ = 0.0;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_357(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_358(DATA *data, threadData_t *threadData);


/*
equation index: 178
type: ALGORITHM

  assert(eSST1A.imLimited.uMax >= eSST1A.imLimited.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(eSST1A.imLimited.uMax, 6, 0, true) + ") < uMin (=" + String(eSST1A.imLimited.uMin, 6, 0, true) + ")");
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_178(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,178};
  modelica_boolean tmp0;
  static const MMC_DEFSTRINGLIT(tmp1,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp2;
  static const MMC_DEFSTRINGLIT(tmp3,11,") < uMin (=");
  modelica_string tmp4;
  static int tmp5 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp0 = GreaterEq(data->simulationInfo->realParameter[185] /* eSST1A.imLimited.uMax PARAM */,data->simulationInfo->realParameter[186] /* eSST1A.imLimited.uMin PARAM */);
    if(!tmp0)
    {
      tmp2 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[185] /* eSST1A.imLimited.uMax PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp1),tmp2);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp3));
      tmp4 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[186] /* eSST1A.imLimited.uMin PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp4);
      tmpMeta[3] = stringAppend(tmpMeta[2],(modelica_string) mmc_strings_len1[41]);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Nonlinear.mo",19,9,20,65,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neSST1A.imLimited.uMax >= eSST1A.imLimited.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta[3]));
      }
    }
  }
  TRACE_POP
}

/*
equation index: 177
type: ALGORITHM

  assert(eSST1A.imLimited1.uMax >= eSST1A.imLimited1.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(eSST1A.imLimited1.uMax, 6, 0, true) + ") < uMin (=" + String(eSST1A.imLimited1.uMin, 6, 0, true) + ")");
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_177(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,177};
  modelica_boolean tmp6;
  static const MMC_DEFSTRINGLIT(tmp7,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp8;
  static const MMC_DEFSTRINGLIT(tmp9,11,") < uMin (=");
  modelica_string tmp10;
  static int tmp11 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp6 = GreaterEq(data->simulationInfo->realParameter[187] /* eSST1A.imLimited1.uMax PARAM */,data->simulationInfo->realParameter[188] /* eSST1A.imLimited1.uMin PARAM */);
    if(!tmp6)
    {
      tmp8 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[187] /* eSST1A.imLimited1.uMax PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp7),tmp8);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp9));
      tmp10 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[188] /* eSST1A.imLimited1.uMin PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp10);
      tmpMeta[3] = stringAppend(tmpMeta[2],(modelica_string) mmc_strings_len1[41]);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Nonlinear.mo",19,9,20,65,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neSST1A.imLimited1.uMax >= eSST1A.imLimited1.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta[3]));
      }
    }
  }
  TRACE_POP
}
OMC_DISABLE_OPT
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_2(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_356(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_4(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_5(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_6(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_7(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_8(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_9(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_514(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_11(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_363(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_13(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_14(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_15(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_16(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_17(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_18(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_110(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_473(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_472(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_516(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_481(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_115(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_116(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_117(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_118(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_119(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_509(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_508(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_507(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_123(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_124(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_125(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_126(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_127(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_505(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_129(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_130(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_506(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_132(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_515(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_476(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_474(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_475(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_137(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_520(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_139(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_525(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_141(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_538(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_539(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_540(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_545(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_544(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_147(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_529(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_524(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_523(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_533(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_532(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_535(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_534(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_543(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_542(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_537(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_536(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_522(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_521(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_527(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_528(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_518(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_519(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_470(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_471(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_167(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_168(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_169(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_170(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_171(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_172(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_173(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_174(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_357(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_358(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_178(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_177(data, threadData);
  TRACE_POP
}


int OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_2(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_356(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_4(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_5(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_6(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_7(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_8(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_9(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_514(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_11(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_363(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_13(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_14(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_15(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_16(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_17(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_18(DATA *data, threadData_t *threadData);


void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_197(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_198(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_199(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_200(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_201(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_202(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_203(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_204(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_205(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_206(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_207(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_208(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_209(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_210(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_211(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_212(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_213(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_214(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_215(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_216(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_217(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_218(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_219(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_220(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_221(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_222(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_223(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_224(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_225(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_226(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_227(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_228(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_229(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_230(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_231(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_232(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_233(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_234(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_235(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_236(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_237(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_238(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_239(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_240(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_241(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_242(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_243(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_244(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_245(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_246(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_247(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_248(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_249(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_250(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_251(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_252(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_253(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_283(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_282(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_281(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_280(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_279(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_278(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_277(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_276(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_275(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_274(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_273(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_272(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_271(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_270(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_269(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_268(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_267(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_266(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_265(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_264(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_263(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_262(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_261(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_260(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_259(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_258(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_257(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_256(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_255(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_254(DATA*, threadData_t*);
/*
equation index: 284
indexNonlinear: 1
type: NONLINEAR

vars: {pwLine.ir.re, pwLine1.is.re, pwLine.ir.im, pwLine1.is.im, pwLine4.is.im, pwLine3.ir.im, pwLine3.ir.re, pwLine4.is.re, pwLine3.is.re, pwLine3.is.im, pwLine4.ir.re, pwLine1.ir.im, gENCLS.iq, gENCLS.id, gENROE.Epd, gENROE.PSIkd, gENROE.PSIppd, gENROE.PSIppq, gENROE.id, gENROE.iq, pwLine.vs.re, pwLine.vs.im, pwLine1.vr.im, pwLine1.vr.re, eSST1A.ECOMP, eSST1A.XADIFD, pwLine1.vs.re, pwLine3.vr.im, pwLine3.vr.re, pwLine1.vs.im}
eqns: {197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 283, 282, 281, 280, 279, 278, 277, 276, 275, 274, 273, 272, 271, 270, 269, 268, 267, 266, 265, 264, 263, 262, 261, 260, 259, 258, 257, 256, 255, 254}
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_284(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,284};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 284 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[0] = data->localData[0]->realVars[119] /* pwLine.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[1] = data->localData[0]->realVars[131] /* pwLine1.is.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[2] = data->localData[0]->realVars[118] /* pwLine.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[3] = data->localData[0]->realVars[130] /* pwLine1.is.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[4] = data->localData[0]->realVars[152] /* pwLine4.is.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[5] = data->localData[0]->realVars[140] /* pwLine3.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[6] = data->localData[0]->realVars[141] /* pwLine3.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[7] = data->localData[0]->realVars[153] /* pwLine4.is.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[8] = data->localData[0]->realVars[143] /* pwLine3.is.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[9] = data->localData[0]->realVars[142] /* pwLine3.is.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[10] = data->localData[0]->realVars[151] /* pwLine4.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[11] = data->localData[0]->realVars[128] /* pwLine1.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[12] = data->simulationInfo->realParameter[213] /* gENCLS.iq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[13] = data->simulationInfo->realParameter[211] /* gENCLS.id0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[14] = data->simulationInfo->realParameter[228] /* gENROE.Epd0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[15] = data->simulationInfo->realParameter[249] /* gENROE.PSIkd0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[16] = data->simulationInfo->realParameter[255] /* gENROE.PSIppd0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[17] = data->simulationInfo->realParameter[256] /* gENROE.PSIppq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[18] = data->simulationInfo->realParameter[295] /* gENROE.id0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[19] = data->simulationInfo->realParameter[297] /* gENROE.iq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[20] = data->simulationInfo->realParameter[306] /* gENROE.vr0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[21] = data->simulationInfo->realParameter[305] /* gENROE.vi0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[22] = data->simulationInfo->realParameter[220] /* gENCLS.vi0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[23] = data->simulationInfo->realParameter[222] /* gENCLS.vr0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[24] = data->simulationInfo->realParameter[15] /* GEN1.v_0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[25] = data->simulationInfo->realParameter[293] /* gENROE.efd0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[26] = data->simulationInfo->realParameter[80] /* constantLoad.vr0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[27] = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[28] = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[29] = data->simulationInfo->realParameter[79] /* constantLoad.vi0 PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 1);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,284};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 284 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[119] /* pwLine.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[0];
  data->localData[0]->realVars[131] /* pwLine1.is.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[1];
  data->localData[0]->realVars[118] /* pwLine.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[2];
  data->localData[0]->realVars[130] /* pwLine1.is.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[3];
  data->localData[0]->realVars[152] /* pwLine4.is.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[4];
  data->localData[0]->realVars[140] /* pwLine3.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[5];
  data->localData[0]->realVars[141] /* pwLine3.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[6];
  data->localData[0]->realVars[153] /* pwLine4.is.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[7];
  data->localData[0]->realVars[143] /* pwLine3.is.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[8];
  data->localData[0]->realVars[142] /* pwLine3.is.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[9];
  data->localData[0]->realVars[151] /* pwLine4.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[10];
  data->localData[0]->realVars[128] /* pwLine1.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[11];
  data->localData[0]->realVars[89] /* gENCLS.iq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[12];
  data->localData[0]->realVars[88] /* gENCLS.id variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[13];
  data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ = data->simulationInfo->nonlinearSystemData[1].nlsx[14];
  data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */ = data->simulationInfo->nonlinearSystemData[1].nlsx[15];
  data->localData[0]->realVars[100] /* gENROE.PSIppd variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[16];
  data->localData[0]->realVars[101] /* gENROE.PSIppq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[17];
  data->localData[0]->realVars[108] /* gENROE.id variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[18];
  data->localData[0]->realVars[109] /* gENROE.iq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[19];
  data->localData[0]->realVars[123] /* pwLine.vs.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[20];
  data->localData[0]->realVars[122] /* pwLine.vs.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[21];
  data->localData[0]->realVars[132] /* pwLine1.vr.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[22];
  data->localData[0]->realVars[133] /* pwLine1.vr.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[23];
  data->localData[0]->realVars[58] /* eSST1A.ECOMP variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[24];
  data->localData[0]->realVars[62] /* eSST1A.XADIFD variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[25];
  data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[26];
  data->localData[0]->realVars[144] /* pwLine3.vr.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[27];
  data->localData[0]->realVars[145] /* pwLine3.vr.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[28];
  data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[29];
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_473(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_472(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_516(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_466(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_132(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_115(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_116(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_117(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_118(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_119(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_509(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_508(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_507(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_123(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_124(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_125(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_129(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_130(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_506(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_126(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_127(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_505(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_481(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_479(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_480(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_478(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_515(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_476(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_474(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_475(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_137(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_520(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_139(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_525(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_141(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_538(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_539(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_540(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_545(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_544(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_147(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_529(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_524(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_523(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_533(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_532(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_535(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_534(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_543(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_542(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_537(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_536(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_522(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_521(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_527(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_528(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_518(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_519(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_470(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_471(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_167(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_168(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_169(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_170(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_171(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_172(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_173(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_174(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_357(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_358(DATA *data, threadData_t *threadData);


int OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_2(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_356(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_4(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_5(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_6(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_7(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_8(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_9(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_514(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_11(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_363(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_13(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_14(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_15(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_16(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_17(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_18(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_284(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_473(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_472(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_516(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_466(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_132(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_115(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_116(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_117(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_118(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_119(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_509(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_508(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_507(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_123(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_124(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_125(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_129(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_130(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_506(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_126(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_127(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_505(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_481(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_479(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_480(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_478(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_515(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_476(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_474(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_475(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_137(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_520(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_139(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_525(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_141(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_538(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_539(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_540(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_545(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_544(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_147(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_529(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_524(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_523(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_533(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_532(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_535(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_534(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_543(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_542(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_537(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_536(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_522(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_521(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_527(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_528(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_518(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_519(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_470(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_471(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_167(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_168(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_169(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_170(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_171(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_172(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_173(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_174(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_357(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_358(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int *equationIndexes = NULL;
  double res = 0.0;

  res = data->localData[0]->realVars[90] /* gENCLS.omega variable */;
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

