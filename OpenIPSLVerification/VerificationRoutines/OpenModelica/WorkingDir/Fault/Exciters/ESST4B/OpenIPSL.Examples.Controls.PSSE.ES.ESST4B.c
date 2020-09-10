/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "OpenIPSL.Examples.Controls.PSSE.ES.ESST4B_model.h"
#include "simulation/solver/events.h"

#define prefixedName_performSimulation OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_performSimulation
#define prefixedName_updateContinuousSystem OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_updateContinuousSystem
#include <simulation/solver/perform_simulation.c.inc>

#define prefixedName_performQSSSimulation OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_performQSSSimulation
#include <simulation/solver/perform_qss_simulation.c.inc>

/* dummy VARINFO and FILEINFO */
const FILE_INFO dummyFILE_INFO = omc_dummyFileInfo;
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_data_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_setc_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/*
equation index: 740
type: SIMPLE_ASSIGN
eSST4B.EFD0 = gENROU.efd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_740(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,740};
  data->localData[0]->realVars[58] /* eSST4B.EFD0 variable */ = data->simulationInfo->realParameter[256] /* gENROU.efd0 PARAM */;
  TRACE_POP
}
/*
equation index: 741
type: SIMPLE_ASSIGN
$DER.gENCLS.delta = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_741(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,741};
  data->localData[0]->realVars[16] /* der(gENCLS.delta) STATE_DER */ = 0.0;
  TRACE_POP
}
/*
equation index: 742
type: SIMPLE_ASSIGN
$DER.gENCLS.eq = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_742(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,742};
  data->localData[0]->realVars[17] /* der(gENCLS.eq) STATE_DER */ = 0.0;
  TRACE_POP
}
/*
equation index: 743
type: SIMPLE_ASSIGN
gENROU.PSIppd = gENROU.Epq * gENROU.K3d + gENROU.PSIkd * gENROU.K4d
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_743(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,743};
  data->localData[0]->realVars[97] /* gENROU.PSIppd variable */ = (data->localData[0]->realVars[7] /* gENROU.Epq STATE(1) */) * (data->simulationInfo->realParameter[204] /* gENROU.K3d PARAM */) + (data->localData[0]->realVars[8] /* gENROU.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[206] /* gENROU.K4d PARAM */);
  TRACE_POP
}
/*
equation index: 744
type: SIMPLE_ASSIGN
gENROU.PSIppq = gENROU.PSIkq * gENROU.K4q + gENROU.Epd * gENROU.K3q
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_744(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,744};
  data->localData[0]->realVars[98] /* gENROU.PSIppq variable */ = (data->localData[0]->realVars[9] /* gENROU.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[207] /* gENROU.K4q PARAM */) + (data->localData[0]->realVars[6] /* gENROU.Epd STATE(1) */) * (data->simulationInfo->realParameter[205] /* gENROU.K3q PARAM */);
  TRACE_POP
}
/*
equation index: 745
type: SIMPLE_ASSIGN
gENROU.PSIpp = sqrt(gENROU.PSIppd ^ 2.0 + gENROU.PSIppq ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_745(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,745};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[97] /* gENROU.PSIppd variable */;
  tmp1 = data->localData[0]->realVars[98] /* gENROU.PSIppq variable */;
  data->localData[0]->realVars[96] /* gENROU.PSIpp variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 746
type: SIMPLE_ASSIGN
$cse5 = OpenIPSL.NonElectrical.Functions.SE(gENROU.PSIpp, gENROU.S10, gENROU.S12, 1.0, 1.2)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_746(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,746};
  data->localData[0]->realVars[27] /* $cse5 variable */ = omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->localData[0]->realVars[96] /* gENROU.PSIpp variable */, data->simulationInfo->realParameter[226] /* gENROU.S10 PARAM */, data->simulationInfo->realParameter[227] /* gENROU.S12 PARAM */, 1.0, 1.2);
  TRACE_POP
}
/*
equation index: 747
type: SIMPLE_ASSIGN
$DER.gENROU.delta = gENROU.w_b * gENROU.w
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_747(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,747};
  data->localData[0]->realVars[22] /* der(gENROU.delta) STATE_DER */ = (data->simulationInfo->realParameter[270] /* gENROU.w_b PARAM */) * (data->localData[0]->realVars[11] /* gENROU.w STATE(1) */);
  TRACE_POP
}
/*
equation index: 748
type: SIMPLE_ASSIGN
$cse7 = cos(gENROU.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_748(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,748};
  data->localData[0]->realVars[29] /* $cse7 variable */ = cos(data->localData[0]->realVars[10] /* gENROU.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 749
type: SIMPLE_ASSIGN
$cse6 = sin(gENROU.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_749(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,749};
  data->localData[0]->realVars[28] /* $cse6 variable */ = sin(data->localData[0]->realVars[10] /* gENROU.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 750
type: SIMPLE_ASSIGN
$cse2 = cos(gENCLS.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_750(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,750};
  data->localData[0]->realVars[25] /* $cse2 variable */ = cos(data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 751
type: SIMPLE_ASSIGN
$cse1 = sin(gENCLS.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_751(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,751};
  data->localData[0]->realVars[24] /* $cse1 variable */ = sin(data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */);
  TRACE_POP
}
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_752(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_753(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_754(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_755(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_756(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_757(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_758(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_759(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_760(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_761(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_762(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_763(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_764(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_765(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_766(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_767(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_768(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_769(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_770(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_771(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_772(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_773(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_774(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_796(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_795(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_794(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_793(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_792(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_791(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_790(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_789(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_788(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_787(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_786(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_785(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_784(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_783(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_782(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_781(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_780(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_779(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_778(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_777(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_776(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_775(DATA*, threadData_t*);
/*
equation index: 842
indexNonlinear: 2
type: NONLINEAR

vars: {pwLine1.is.re, constantLoad.p.ir, pwLine.ir.im, pwLine1.is.im, pwLine3.ir.re, pwLine4.is.re, pwLine4.is.im, pwLine3.ir.im, pwLine3.is.im, pwLine3.is.re, pwLine4.ir.re, pwLine1.ir.im, gENCLS.id, gENCLS.iq, pwLine1.vr.re, pwLine1.vr.im, gENROU.id, gENROU.iq, pwLine1.vs.im, pwLine1.vs.re, pwLine3.vr.im, pwLine3.vr.re}
eqns: {752, 753, 754, 755, 756, 757, 758, 759, 760, 761, 762, 763, 764, 765, 766, 767, 768, 769, 770, 771, 772, 773, 774, 796, 795, 794, 793, 792, 791, 790, 789, 788, 787, 786, 785, 784, 783, 782, 781, 780, 779, 778, 777, 776, 775}
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_842(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,842};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 842 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[0] = data->localData[0]->realVars[128] /* pwLine1.is.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[1] = data->localData[0]->realVars[52] /* constantLoad.p.ir variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[2] = data->localData[0]->realVars[115] /* pwLine.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[3] = data->localData[0]->realVars[127] /* pwLine1.is.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[4] = data->localData[0]->realVars[138] /* pwLine3.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[5] = data->localData[0]->realVars[150] /* pwLine4.is.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[6] = data->localData[0]->realVars[149] /* pwLine4.is.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[7] = data->localData[0]->realVars[137] /* pwLine3.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[8] = data->localData[0]->realVars[139] /* pwLine3.is.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[9] = data->localData[0]->realVars[140] /* pwLine3.is.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[10] = data->localData[0]->realVars[148] /* pwLine4.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[11] = data->localData[0]->realVars[125] /* pwLine1.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[12] = data->localData[0]->realVars[85] /* gENCLS.id variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[13] = data->localData[0]->realVars[86] /* gENCLS.iq variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[14] = data->localData[0]->realVars[130] /* pwLine1.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[15] = data->localData[0]->realVars[129] /* pwLine1.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[16] = data->localData[0]->realVars[105] /* gENROU.id variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[17] = data->localData[0]->realVars[106] /* gENROU.iq variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[18] = data->localData[0]->realVars[131] /* pwLine1.vs.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[19] = data->localData[0]->realVars[132] /* pwLine1.vs.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[20] = data->localData[0]->realVars[141] /* pwLine3.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[21] = data->localData[0]->realVars[142] /* pwLine3.vr.re variable */;
  retValue = solve_nonlinear_system(data, threadData, 2);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,842};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 842 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[128] /* pwLine1.is.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[0];
  data->localData[0]->realVars[52] /* constantLoad.p.ir variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[1];
  data->localData[0]->realVars[115] /* pwLine.ir.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[2];
  data->localData[0]->realVars[127] /* pwLine1.is.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[3];
  data->localData[0]->realVars[138] /* pwLine3.ir.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[4];
  data->localData[0]->realVars[150] /* pwLine4.is.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[5];
  data->localData[0]->realVars[149] /* pwLine4.is.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[6];
  data->localData[0]->realVars[137] /* pwLine3.ir.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[7];
  data->localData[0]->realVars[139] /* pwLine3.is.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[8];
  data->localData[0]->realVars[140] /* pwLine3.is.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[9];
  data->localData[0]->realVars[148] /* pwLine4.ir.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[10];
  data->localData[0]->realVars[125] /* pwLine1.ir.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[11];
  data->localData[0]->realVars[85] /* gENCLS.id variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[12];
  data->localData[0]->realVars[86] /* gENCLS.iq variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[13];
  data->localData[0]->realVars[130] /* pwLine1.vr.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[14];
  data->localData[0]->realVars[129] /* pwLine1.vr.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[15];
  data->localData[0]->realVars[105] /* gENROU.id variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[16];
  data->localData[0]->realVars[106] /* gENROU.iq variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[17];
  data->localData[0]->realVars[131] /* pwLine1.vs.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[18];
  data->localData[0]->realVars[132] /* pwLine1.vs.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[19];
  data->localData[0]->realVars[141] /* pwLine3.vr.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[20];
  data->localData[0]->realVars[142] /* pwLine3.vr.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[21];
  TRACE_POP
}
/*
equation index: 843
type: SIMPLE_ASSIGN
eSST4B.I_T.re = 2.0 * pwLine.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_843(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,843};
  data->localData[0]->realVars[64] /* eSST4B.I_T.re variable */ = (2.0) * (data->localData[0]->realVars[118] /* pwLine.is.re variable */);
  TRACE_POP
}
/*
equation index: 844
type: SIMPLE_ASSIGN
$DER.gENROU.PSIkd = (gENROU.Epq + (gENROU.Xl - gENROU.Xpd) * gENROU.id - gENROU.PSIkd) / gENROU.Tppd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_844(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,844};
  data->localData[0]->realVars[20] /* der(gENROU.PSIkd) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[7] /* gENROU.Epq STATE(1) */ + (data->simulationInfo->realParameter[237] /* gENROU.Xl PARAM */ - data->simulationInfo->realParameter[238] /* gENROU.Xpd PARAM */) * (data->localData[0]->realVars[105] /* gENROU.id variable */) - data->localData[0]->realVars[8] /* gENROU.PSIkd STATE(1) */,data->simulationInfo->realParameter[230] /* gENROU.Tppd0 PARAM */,"gENROU.Tppd0",equationIndexes);
  TRACE_POP
}
/*
equation index: 845
type: SIMPLE_ASSIGN
eSST4B.XADIFD = gENROU.K1d * (gENROU.Epq + (gENROU.Xl - gENROU.Xpd) * gENROU.id - gENROU.PSIkd) + gENROU.Epq + gENROU.id * (gENROU.Xd - gENROU.Xpd) + $cse5 * gENROU.PSIppd
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_845(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,845};
  data->localData[0]->realVars[70] /* eSST4B.XADIFD variable */ = (data->simulationInfo->realParameter[200] /* gENROU.K1d PARAM */) * (data->localData[0]->realVars[7] /* gENROU.Epq STATE(1) */ + (data->simulationInfo->realParameter[237] /* gENROU.Xl PARAM */ - data->simulationInfo->realParameter[238] /* gENROU.Xpd PARAM */) * (data->localData[0]->realVars[105] /* gENROU.id variable */) - data->localData[0]->realVars[8] /* gENROU.PSIkd STATE(1) */) + data->localData[0]->realVars[7] /* gENROU.Epq STATE(1) */ + (data->localData[0]->realVars[105] /* gENROU.id variable */) * (data->simulationInfo->realParameter[236] /* gENROU.Xd PARAM */ - data->simulationInfo->realParameter[238] /* gENROU.Xpd PARAM */) + (data->localData[0]->realVars[27] /* $cse5 variable */) * (data->localData[0]->realVars[97] /* gENROU.PSIppd variable */);
  TRACE_POP
}
/*
equation index: 846
type: SIMPLE_ASSIGN
eSST4B.rectifierCommutationVoltageDrop.division.u1 = eSST4B.rectifierCommutationVoltageDrop.gain2.k * eSST4B.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_846(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,846};
  data->localData[0]->realVars[78] /* eSST4B.rectifierCommutationVoltageDrop.division.u1 variable */ = (data->simulationInfo->realParameter[159] /* eSST4B.rectifierCommutationVoltageDrop.gain2.k PARAM */) * (data->localData[0]->realVars[70] /* eSST4B.XADIFD variable */);
  TRACE_POP
}
/*
equation index: 847
type: SIMPLE_ASSIGN
pwLine4.P12 = (pwLine3.vr.re * pwLine4.is.re + pwLine3.vr.im * pwLine4.is.im) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_847(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,847};
  data->localData[0]->realVars[143] /* pwLine4.P12 variable */ = ((data->localData[0]->realVars[142] /* pwLine3.vr.re variable */) * (data->localData[0]->realVars[150] /* pwLine4.is.re variable */) + (data->localData[0]->realVars[141] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[149] /* pwLine4.is.im variable */)) * (data->simulationInfo->realParameter[311] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 848
type: SIMPLE_ASSIGN
pwLine4.Q12 = (pwLine3.vr.im * pwLine4.is.re - pwLine3.vr.re * pwLine4.is.im) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_848(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,848};
  data->localData[0]->realVars[145] /* pwLine4.Q12 variable */ = ((data->localData[0]->realVars[141] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[150] /* pwLine4.is.re variable */) - ((data->localData[0]->realVars[142] /* pwLine3.vr.re variable */) * (data->localData[0]->realVars[149] /* pwLine4.is.im variable */))) * (data->simulationInfo->realParameter[311] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 849
type: SIMPLE_ASSIGN
FAULT.V = sqrt(pwLine3.vr.re ^ 2.0 + pwLine3.vr.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_849(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,849};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[142] /* pwLine3.vr.re variable */;
  tmp1 = data->localData[0]->realVars[141] /* pwLine3.vr.im variable */;
  data->localData[0]->realVars[30] /* FAULT.V variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 850
type: SIMPLE_ASSIGN
$cse4 = atan2(pwLine3.vr.im, pwLine3.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_850(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,850};
  data->localData[0]->realVars[26] /* $cse4 variable */ = atan2(data->localData[0]->realVars[141] /* pwLine3.vr.im variable */, data->localData[0]->realVars[142] /* pwLine3.vr.re variable */);
  TRACE_POP
}
/*
equation index: 851
type: SIMPLE_ASSIGN
FAULT.angle = 57.29577951308232 * $cse4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_851(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,851};
  data->localData[0]->realVars[31] /* FAULT.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[26] /* $cse4 variable */);
  TRACE_POP
}
/*
equation index: 852
type: SIMPLE_ASSIGN
pwLine3.P21 = ((-pwLine3.vr.re) * pwLine3.ir.re - pwLine3.vr.im * pwLine3.ir.im) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_852(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,852};
  data->localData[0]->realVars[134] /* pwLine3.P21 variable */ = (((-data->localData[0]->realVars[142] /* pwLine3.vr.re variable */)) * (data->localData[0]->realVars[138] /* pwLine3.ir.re variable */) - ((data->localData[0]->realVars[141] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[137] /* pwLine3.ir.im variable */))) * (data->simulationInfo->realParameter[300] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 853
type: SIMPLE_ASSIGN
pwLine3.Q21 = (pwLine3.vr.re * pwLine3.ir.im - pwLine3.vr.im * pwLine3.ir.re) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_853(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,853};
  data->localData[0]->realVars[136] /* pwLine3.Q21 variable */ = ((data->localData[0]->realVars[142] /* pwLine3.vr.re variable */) * (data->localData[0]->realVars[137] /* pwLine3.ir.im variable */) - ((data->localData[0]->realVars[141] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[138] /* pwLine3.ir.re variable */))) * (data->simulationInfo->realParameter[300] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 854
type: SIMPLE_ASSIGN
LOAD.V = constantLoad.v
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_854(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,854};
  data->localData[0]->realVars[42] /* LOAD.V variable */ = data->localData[0]->realVars[53] /* constantLoad.v variable */;
  TRACE_POP
}
/*
equation index: 855
type: SIMPLE_ASSIGN
$DER.gENROU.PSIkq = (gENROU.Epd + (gENROU.Xpq - gENROU.Xl) * gENROU.iq - gENROU.PSIkq) / gENROU.Tppq0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_855(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,855};
  data->localData[0]->realVars[21] /* der(gENROU.PSIkq) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[6] /* gENROU.Epd STATE(1) */ + (data->simulationInfo->realParameter[242] /* gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[237] /* gENROU.Xl PARAM */) * (data->localData[0]->realVars[106] /* gENROU.iq variable */) - data->localData[0]->realVars[9] /* gENROU.PSIkq STATE(1) */,data->simulationInfo->realParameter[231] /* gENROU.Tppq0 PARAM */,"gENROU.Tppq0",equationIndexes);
  TRACE_POP
}
/*
equation index: 856
type: SIMPLE_ASSIGN
gENROU.XaqIlq = gENROU.K1q * (gENROU.Epd + (gENROU.Xpq - gENROU.Xl) * gENROU.iq - gENROU.PSIkq) + gENROU.Epd + gENROU.iq * (gENROU.Xpq - gENROU.Xq) + $cse5 * gENROU.PSIppq * (gENROU.Xq - gENROU.Xl) / (gENROU.Xd - gENROU.Xl)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_856(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,856};
  data->localData[0]->realVars[102] /* gENROU.XaqIlq variable */ = (data->simulationInfo->realParameter[201] /* gENROU.K1q PARAM */) * (data->localData[0]->realVars[6] /* gENROU.Epd STATE(1) */ + (data->simulationInfo->realParameter[242] /* gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[237] /* gENROU.Xl PARAM */) * (data->localData[0]->realVars[106] /* gENROU.iq variable */) - data->localData[0]->realVars[9] /* gENROU.PSIkq STATE(1) */) + data->localData[0]->realVars[6] /* gENROU.Epd STATE(1) */ + (data->localData[0]->realVars[106] /* gENROU.iq variable */) * (data->simulationInfo->realParameter[242] /* gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[243] /* gENROU.Xq PARAM */) + (data->localData[0]->realVars[27] /* $cse5 variable */) * ((data->localData[0]->realVars[98] /* gENROU.PSIppq variable */) * (DIVISION_SIM(data->simulationInfo->realParameter[243] /* gENROU.Xq PARAM */ - data->simulationInfo->realParameter[237] /* gENROU.Xl PARAM */,data->simulationInfo->realParameter[236] /* gENROU.Xd PARAM */ - data->simulationInfo->realParameter[237] /* gENROU.Xl PARAM */,"gENROU.Xd - gENROU.Xl",equationIndexes)));
  TRACE_POP
}
/*
equation index: 857
type: SIMPLE_ASSIGN
$DER.gENROU.Epd = (-gENROU.XaqIlq) / gENROU.Tpq0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_857(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,857};
  data->localData[0]->realVars[18] /* der(gENROU.Epd) STATE_DER */ = DIVISION_SIM((-data->localData[0]->realVars[102] /* gENROU.XaqIlq variable */),data->simulationInfo->realParameter[232] /* gENROU.Tpq0 PARAM */,"gENROU.Tpq0",equationIndexes);
  TRACE_POP
}
/*
equation index: 858
type: SIMPLE_ASSIGN
gENROU.Te = gENROU.PSId * gENROU.iq - gENROU.PSIq * gENROU.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_858(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,858};
  data->localData[0]->realVars[101] /* gENROU.Te variable */ = (data->localData[0]->realVars[95] /* gENROU.PSId variable */) * (data->localData[0]->realVars[106] /* gENROU.iq variable */) - ((data->localData[0]->realVars[99] /* gENROU.PSIq variable */) * (data->localData[0]->realVars[105] /* gENROU.id variable */));
  TRACE_POP
}
/*
equation index: 859
type: SIMPLE_ASSIGN
$DER.gENROU.w = 0.5 * ((gENROU.pm0 - gENROU.D * gENROU.w) / (1.0 + gENROU.w) - gENROU.Te) / gENROU.H
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_859(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,859};
  data->localData[0]->realVars[23] /* der(gENROU.w) STATE_DER */ = (0.5) * (DIVISION_SIM(DIVISION_SIM(data->simulationInfo->realParameter[263] /* gENROU.pm0 PARAM */ - ((data->simulationInfo->realParameter[187] /* gENROU.D PARAM */) * (data->localData[0]->realVars[11] /* gENROU.w STATE(1) */)),1.0 + data->localData[0]->realVars[11] /* gENROU.w STATE(1) */,"1.0 + gENROU.w",equationIndexes) - data->localData[0]->realVars[101] /* gENROU.Te variable */,data->simulationInfo->realParameter[193] /* gENROU.H PARAM */,"gENROU.H",equationIndexes));
  TRACE_POP
}
/*
equation index: 860
type: SIMPLE_ASSIGN
eSST4B.ECOMP = sqrt(pwLine.vs.re ^ 2.0 + pwLine.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_860(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,860};
  modelica_real tmp2;
  modelica_real tmp3;
  tmp2 = data->localData[0]->realVars[120] /* pwLine.vs.re variable */;
  tmp3 = data->localData[0]->realVars[119] /* pwLine.vs.im variable */;
  data->localData[0]->realVars[56] /* eSST4B.ECOMP variable */ = sqrt((tmp2 * tmp2) + (tmp3 * tmp3));
  TRACE_POP
}
/*
equation index: 861
type: SIMPLE_ASSIGN
$DER.eSST4B.TransducerDelay.state = (eSST4B.TransducerDelay.K * eSST4B.ECOMP - eSST4B.TransducerDelay.state) / eSST4B.TransducerDelay.T_mod
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_861(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,861};
  data->localData[0]->realVars[12] /* der(eSST4B.TransducerDelay.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[105] /* eSST4B.TransducerDelay.K PARAM */) * (data->localData[0]->realVars[56] /* eSST4B.ECOMP variable */) - data->localData[0]->realVars[0] /* eSST4B.TransducerDelay.state STATE(1) */,data->simulationInfo->realParameter[107] /* eSST4B.TransducerDelay.T_mod PARAM */,"eSST4B.TransducerDelay.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 862
type: SIMPLE_ASSIGN
eSST4B.DiffV.u2 = if abs(eSST4B.TransducerDelay.T) <= 1e-15 then eSST4B.ECOMP * eSST4B.TransducerDelay.K else eSST4B.TransducerDelay.state
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_862(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,862};
  modelica_boolean tmp4;
  tmp4 = LessEq(fabs(data->simulationInfo->realParameter[106] /* eSST4B.TransducerDelay.T PARAM */),1e-15);
  data->localData[0]->realVars[54] /* eSST4B.DiffV.u2 variable */ = (tmp4?(data->localData[0]->realVars[56] /* eSST4B.ECOMP variable */) * (data->simulationInfo->realParameter[105] /* eSST4B.TransducerDelay.K PARAM */):data->localData[0]->realVars[0] /* eSST4B.TransducerDelay.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 863
type: SIMPLE_ASSIGN
eSST4B.DiffV.y = eSST4B.DiffV.k1 * eSST4B.VoltageReference.k + eSST4B.DiffV.k2 * eSST4B.DiffV.u2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_863(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,863};
  data->localData[0]->realVars[55] /* eSST4B.DiffV.y variable */ = (data->simulationInfo->realParameter[82] /* eSST4B.DiffV.k1 PARAM */) * (data->simulationInfo->realParameter[136] /* eSST4B.VoltageReference.k PARAM */) + (data->simulationInfo->realParameter[83] /* eSST4B.DiffV.k2 PARAM */) * (data->localData[0]->realVars[54] /* eSST4B.DiffV.u2 variable */);
  TRACE_POP
}
/*
equation index: 864
type: SIMPLE_ASSIGN
eSST4B.Gain1.u = eSST4B.add3_1.k1 * const.k + eSST4B.add3_1.k2 * eSST4B.DiffV.y + eSST4B.add3_1.k3 * const5.k
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_864(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,864};
  data->localData[0]->realVars[59] /* eSST4B.Gain1.u variable */ = (data->simulationInfo->realParameter[145] /* eSST4B.add3_1.k1 PARAM */) * (data->simulationInfo->realParameter[34] /* const.k PARAM */) + (data->simulationInfo->realParameter[146] /* eSST4B.add3_1.k2 PARAM */) * (data->localData[0]->realVars[55] /* eSST4B.DiffV.y variable */) + (data->simulationInfo->realParameter[147] /* eSST4B.add3_1.k3 PARAM */) * (data->simulationInfo->realParameter[38] /* const5.k PARAM */);
  TRACE_POP
}
/*
equation index: 865
type: SIMPLE_ASSIGN
$DER.eSST4B.VR1.y = if eSST4B.VR1.y < eSST4B.VR1.outMin and eSST4B.VR1.k * eSST4B.Gain1.u < 0.0 or eSST4B.VR1.y > eSST4B.VR1.outMax and eSST4B.VR1.k * eSST4B.Gain1.u > 0.0 then 0.0 else eSST4B.VR1.k * eSST4B.Gain1.u
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_865(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,865};
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  modelica_boolean tmp8;
  RELATIONHYSTERESIS(tmp5, data->localData[0]->realVars[3] /* eSST4B.VR1.y STATE(1) */, data->simulationInfo->realParameter[127] /* eSST4B.VR1.outMin PARAM */, 14, Less);
  RELATIONHYSTERESIS(tmp6, (data->simulationInfo->realParameter[125] /* eSST4B.VR1.k PARAM */) * (data->localData[0]->realVars[59] /* eSST4B.Gain1.u variable */), 0.0, 15, Less);
  RELATIONHYSTERESIS(tmp7, data->localData[0]->realVars[3] /* eSST4B.VR1.y STATE(1) */, data->simulationInfo->realParameter[126] /* eSST4B.VR1.outMax PARAM */, 16, Greater);
  RELATIONHYSTERESIS(tmp8, (data->simulationInfo->realParameter[125] /* eSST4B.VR1.k PARAM */) * (data->localData[0]->realVars[59] /* eSST4B.Gain1.u variable */), 0.0, 17, Greater);
  data->localData[0]->realVars[15] /* der(eSST4B.VR1.y) STATE_DER */ = (((tmp5 && tmp6) || (tmp7 && tmp8))?0.0:(data->simulationInfo->realParameter[125] /* eSST4B.VR1.k PARAM */) * (data->localData[0]->realVars[59] /* eSST4B.Gain1.u variable */));
  TRACE_POP
}
/*
equation index: 866
type: SIMPLE_ASSIGN
eSST4B.Gain1.y = eSST4B.Gain1.k * eSST4B.Gain1.u
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_866(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,866};
  data->localData[0]->realVars[60] /* eSST4B.Gain1.y variable */ = (data->simulationInfo->realParameter[87] /* eSST4B.Gain1.k PARAM */) * (data->localData[0]->realVars[59] /* eSST4B.Gain1.u variable */);
  TRACE_POP
}
/*
equation index: 867
type: SIMPLE_ASSIGN
eSST4B.add.y = eSST4B.add.k1 * eSST4B.Gain1.y + eSST4B.add.k2 * eSST4B.VR1.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_867(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,867};
  data->localData[0]->realVars[71] /* eSST4B.add.y variable */ = (data->simulationInfo->realParameter[139] /* eSST4B.add.k1 PARAM */) * (data->localData[0]->realVars[60] /* eSST4B.Gain1.y variable */) + (data->simulationInfo->realParameter[140] /* eSST4B.add.k2 PARAM */) * (data->localData[0]->realVars[3] /* eSST4B.VR1.y STATE(1) */);
  TRACE_POP
}
/*
equation index: 868
type: SIMPLE_ASSIGN
eSST4B.VA.u = smooth(0, if eSST4B.add.y > eSST4B.limiter.uMax then eSST4B.limiter.uMax else if eSST4B.add.y < eSST4B.limiter.uMin then eSST4B.limiter.uMin else eSST4B.add.y)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_868(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,868};
  modelica_boolean tmp9;
  modelica_boolean tmp10;
  modelica_boolean tmp11;
  modelica_real tmp12;
  tmp9 = Greater(data->localData[0]->realVars[71] /* eSST4B.add.y variable */,data->simulationInfo->realParameter[152] /* eSST4B.limiter.uMax PARAM */);
  tmp11 = (modelica_boolean)tmp9;
  if(tmp11)
  {
    tmp12 = data->simulationInfo->realParameter[152] /* eSST4B.limiter.uMax PARAM */;
  }
  else
  {
    tmp10 = Less(data->localData[0]->realVars[71] /* eSST4B.add.y variable */,data->simulationInfo->realParameter[153] /* eSST4B.limiter.uMin PARAM */);
    tmp12 = (tmp10?data->simulationInfo->realParameter[153] /* eSST4B.limiter.uMin PARAM */:data->localData[0]->realVars[71] /* eSST4B.add.y variable */);
  }
  data->localData[0]->realVars[65] /* eSST4B.VA.u variable */ = tmp12;
  TRACE_POP
}
/*
equation index: 869
type: SIMPLE_ASSIGN
$DER.eSST4B.VA.state = (eSST4B.VA.K * eSST4B.VA.u - eSST4B.VA.state) / eSST4B.VA.T_mod
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_869(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,869};
  data->localData[0]->realVars[13] /* der(eSST4B.VA.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[110] /* eSST4B.VA.K PARAM */) * (data->localData[0]->realVars[65] /* eSST4B.VA.u variable */) - data->localData[0]->realVars[1] /* eSST4B.VA.state STATE(1) */,data->simulationInfo->realParameter[112] /* eSST4B.VA.T_mod PARAM */,"eSST4B.VA.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 870
type: SIMPLE_ASSIGN
eSST4B.VA.y = if abs(eSST4B.VA.T) <= 1e-15 then eSST4B.VA.u * eSST4B.VA.K else eSST4B.VA.state
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_870(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,870};
  modelica_boolean tmp13;
  tmp13 = LessEq(fabs(data->simulationInfo->realParameter[111] /* eSST4B.VA.T PARAM */),1e-15);
  data->localData[0]->realVars[66] /* eSST4B.VA.y variable */ = (tmp13?(data->localData[0]->realVars[65] /* eSST4B.VA.u variable */) * (data->simulationInfo->realParameter[110] /* eSST4B.VA.K PARAM */):data->localData[0]->realVars[1] /* eSST4B.VA.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 871
type: SIMPLE_ASSIGN
GEN1.V = eSST4B.ECOMP
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_871(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,871};
  data->localData[0]->realVars[34] /* GEN1.V variable */ = data->localData[0]->realVars[56] /* eSST4B.ECOMP variable */;
  TRACE_POP
}
/*
equation index: 872
type: SIMPLE_ASSIGN
gENROU.anglev = atan2(pwLine.vs.im, pwLine.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_872(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,872};
  data->localData[0]->realVars[104] /* gENROU.anglev variable */ = atan2(data->localData[0]->realVars[119] /* pwLine.vs.im variable */, data->localData[0]->realVars[120] /* pwLine.vs.re variable */);
  TRACE_POP
}
/*
equation index: 873
type: SIMPLE_ASSIGN
GEN1.angle = 57.29577951308232 * gENROU.anglev
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_873(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,873};
  data->localData[0]->realVars[35] /* GEN1.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[104] /* gENROU.anglev variable */);
  TRACE_POP
}
/*
equation index: 874
type: SIMPLE_ASSIGN
eSST4B.I_T.im = 2.0 * pwLine.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_874(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,874};
  data->localData[0]->realVars[63] /* eSST4B.I_T.im variable */ = (2.0) * (data->localData[0]->realVars[117] /* pwLine.is.im variable */);
  TRACE_POP
}
/*
equation index: 875
type: SIMPLE_ASSIGN
eSST4B.VE = ((eSST4B.K_P_comp.re * pwLine.vs.re + ((-eSST4B.K_I) - eSST4B.K_P_comp.re * eSST4B.X_L) * eSST4B.I_T.im - eSST4B.K_P_comp.im * (eSST4B.X_L * eSST4B.I_T.re + pwLine.vs.im)) ^ 2.0 + (eSST4B.K_P_comp.re * pwLine.vs.im + eSST4B.K_P_comp.im * pwLine.vs.re + (eSST4B.K_I + eSST4B.K_P_comp.re * eSST4B.X_L) * eSST4B.I_T.re - eSST4B.K_P_comp.im * eSST4B.X_L * eSST4B.I_T.im) ^ 2.0) ^ 0.5
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_875(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,875};
  modelica_real tmp14;
  modelica_real tmp15;
  modelica_real tmp16;
  tmp14 = (data->simulationInfo->realParameter[100] /* eSST4B.K_P_comp.re PARAM */) * (data->localData[0]->realVars[120] /* pwLine.vs.re variable */) + ((-data->simulationInfo->realParameter[93] /* eSST4B.K_I PARAM */) - ((data->simulationInfo->realParameter[100] /* eSST4B.K_P_comp.re PARAM */) * (data->simulationInfo->realParameter[138] /* eSST4B.X_L PARAM */))) * (data->localData[0]->realVars[63] /* eSST4B.I_T.im variable */) - ((data->simulationInfo->realParameter[99] /* eSST4B.K_P_comp.im PARAM */) * ((data->simulationInfo->realParameter[138] /* eSST4B.X_L PARAM */) * (data->localData[0]->realVars[64] /* eSST4B.I_T.re variable */) + data->localData[0]->realVars[119] /* pwLine.vs.im variable */));
  tmp15 = (data->simulationInfo->realParameter[100] /* eSST4B.K_P_comp.re PARAM */) * (data->localData[0]->realVars[119] /* pwLine.vs.im variable */) + (data->simulationInfo->realParameter[99] /* eSST4B.K_P_comp.im PARAM */) * (data->localData[0]->realVars[120] /* pwLine.vs.re variable */) + (data->simulationInfo->realParameter[93] /* eSST4B.K_I PARAM */ + (data->simulationInfo->realParameter[100] /* eSST4B.K_P_comp.re PARAM */) * (data->simulationInfo->realParameter[138] /* eSST4B.X_L PARAM */)) * (data->localData[0]->realVars[64] /* eSST4B.I_T.re variable */) - ((data->simulationInfo->realParameter[99] /* eSST4B.K_P_comp.im PARAM */) * ((data->simulationInfo->realParameter[138] /* eSST4B.X_L PARAM */) * (data->localData[0]->realVars[63] /* eSST4B.I_T.im variable */)));
  tmp16 = (tmp14 * tmp14) + (tmp15 * tmp15);
  if(!(tmp16 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt((eSST4B.K_P_comp.re * pwLine.vs.re + ((-eSST4B.K_I) - eSST4B.K_P_comp.re * eSST4B.X_L) * eSST4B.I_T.im - eSST4B.K_P_comp.im * (eSST4B.X_L * eSST4B.I_T.re + pwLine.vs.im)) ^ 2.0 + (eSST4B.K_P_comp.re * pwLine.vs.im + eSST4B.K_P_comp.im * pwLine.vs.re + (eSST4B.K_I + eSST4B.K_P_comp.re * eSST4B.X_L) * eSST4B.I_T.re - eSST4B.K_P_comp.im * eSST4B.X_L * eSST4B.I_T.im) ^ 2.0) was %g should be >= 0", tmp16);
  }
  data->localData[0]->realVars[67] /* eSST4B.VE variable */ = sqrt(tmp16);
  TRACE_POP
}
/*
equation index: 876
type: SIMPLE_ASSIGN
eSST4B.rectifierCommutationVoltageDrop.division.y = eSST4B.rectifierCommutationVoltageDrop.division.u1 / eSST4B.VE
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_876(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,876};
  data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */ = DIVISION_SIM(data->localData[0]->realVars[78] /* eSST4B.rectifierCommutationVoltageDrop.division.u1 variable */,data->localData[0]->realVars[67] /* eSST4B.VE variable */,"eSST4B.VE",equationIndexes);
  TRACE_POP
}
/*
equation index: 877
type: SIMPLE_ASSIGN
eSST4B.rectifierCommutationVoltageDrop.fEX.y = if eSST4B.rectifierCommutationVoltageDrop.division.y <= 0.0 then 1.0 else if eSST4B.rectifierCommutationVoltageDrop.division.y > 0.0 and eSST4B.rectifierCommutationVoltageDrop.division.y <= 0.433 then 1.0 + (-0.577) * eSST4B.rectifierCommutationVoltageDrop.division.y else if eSST4B.rectifierCommutationVoltageDrop.division.y > 0.433 and eSST4B.rectifierCommutationVoltageDrop.division.y < 0.75 then sqrt(0.75 - eSST4B.rectifierCommutationVoltageDrop.division.y ^ 2.0) else if eSST4B.rectifierCommutationVoltageDrop.division.y >= 0.75 and eSST4B.rectifierCommutationVoltageDrop.division.y <= 1.0 then 1.732 * (1.0 - eSST4B.rectifierCommutationVoltageDrop.division.y) else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_877(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,877};
  modelica_boolean tmp17;
  modelica_boolean tmp18;
  modelica_boolean tmp19;
  modelica_boolean tmp20;
  modelica_boolean tmp21;
  modelica_real tmp22;
  modelica_real tmp23;
  modelica_boolean tmp24;
  modelica_boolean tmp25;
  modelica_boolean tmp26;
  modelica_real tmp27;
  modelica_boolean tmp28;
  modelica_real tmp29;
  modelica_boolean tmp30;
  modelica_real tmp31;
  RELATIONHYSTERESIS(tmp17, data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */, 0.0, 18, LessEq);
  tmp30 = (modelica_boolean)tmp17;
  if(tmp30)
  {
    tmp31 = 1.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp18, data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */, 0.0, 19, Greater);
    RELATIONHYSTERESIS(tmp19, data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */, 0.433, 20, LessEq);
    tmp28 = (modelica_boolean)(tmp18 && tmp19);
    if(tmp28)
    {
      tmp29 = 1.0 + (-0.577) * (data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */);
    }
    else
    {
      RELATIONHYSTERESIS(tmp20, data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */, 0.433, 21, Greater);
      RELATIONHYSTERESIS(tmp21, data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */, 0.75, 22, Less);
      tmp26 = (modelica_boolean)(tmp20 && tmp21);
      if(tmp26)
      {
        tmp22 = data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */;
        tmp23 = 0.75 - ((tmp22 * tmp22));
        if(!(tmp23 >= 0.0))
        {
          FILE_INFO info = {"",0,0,0,0,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(0.75 - eSST4B.rectifierCommutationVoltageDrop.division.y ^ 2.0) was %g should be >= 0", tmp23);
        }
        tmp27 = sqrt(tmp23);
      }
      else
      {
        RELATIONHYSTERESIS(tmp24, data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */, 0.75, 23, GreaterEq);
        RELATIONHYSTERESIS(tmp25, data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */, 1.0, 24, LessEq);
        tmp27 = ((tmp24 && tmp25)?(1.732) * (1.0 - data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */):0.0);
      }
      tmp29 = tmp27;
    }
    tmp31 = tmp29;
  }
  data->localData[0]->realVars[80] /* eSST4B.rectifierCommutationVoltageDrop.fEX.y variable */ = tmp31;
  TRACE_POP
}
/*
equation index: 878
type: SIMPLE_ASSIGN
eSST4B.maxLimiter.u = eSST4B.VE * eSST4B.rectifierCommutationVoltageDrop.fEX.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_878(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,878};
  data->localData[0]->realVars[76] /* eSST4B.maxLimiter.u variable */ = (data->localData[0]->realVars[67] /* eSST4B.VE variable */) * (data->localData[0]->realVars[80] /* eSST4B.rectifierCommutationVoltageDrop.fEX.y variable */);
  TRACE_POP
}
/*
equation index: 879
type: SIMPLE_ASSIGN
eSST4B.maxLimiter.y = smooth(0, if eSST4B.maxLimiter.u > eSST4B.maxLimiter.uMax then eSST4B.maxLimiter.uMax else if eSST4B.maxLimiter.u < eSST4B.maxLimiter.uMin then eSST4B.maxLimiter.uMin else eSST4B.maxLimiter.u)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_879(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,879};
  modelica_boolean tmp32;
  modelica_boolean tmp33;
  modelica_boolean tmp34;
  modelica_real tmp35;
  tmp32 = Greater(data->localData[0]->realVars[76] /* eSST4B.maxLimiter.u variable */,data->simulationInfo->realParameter[156] /* eSST4B.maxLimiter.uMax PARAM */);
  tmp34 = (modelica_boolean)tmp32;
  if(tmp34)
  {
    tmp35 = data->simulationInfo->realParameter[156] /* eSST4B.maxLimiter.uMax PARAM */;
  }
  else
  {
    tmp33 = Less(data->localData[0]->realVars[76] /* eSST4B.maxLimiter.u variable */,data->simulationInfo->realParameter[157] /* eSST4B.maxLimiter.uMin PARAM */);
    tmp35 = (tmp33?data->simulationInfo->realParameter[157] /* eSST4B.maxLimiter.uMin PARAM */:data->localData[0]->realVars[76] /* eSST4B.maxLimiter.u variable */);
  }
  data->localData[0]->realVars[77] /* eSST4B.maxLimiter.y variable */ = tmp35;
  TRACE_POP
}
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_880(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_881(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_882(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_883(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_884(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_885(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_886(DATA*, threadData_t*);
/*
equation index: 894
indexNonlinear: 3
type: NONLINEAR

vars: {eSST4B.add2.y}
eqns: {880, 881, 882, 883, 884, 885, 886}
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_894(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,894};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 894 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[0] = data->localData[0]->realVars[73] /* eSST4B.add2.y variable */;
  retValue = solve_nonlinear_system(data, threadData, 3);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,894};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 894 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[73] /* eSST4B.add2.y variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[0];
  TRACE_POP
}
/*
equation index: 895
type: SIMPLE_ASSIGN
$DER.eSST4B.VM1.y = if eSST4B.VM1.y < eSST4B.VM1.outMin and eSST4B.VM1.k * eSST4B.Gain2.u < 0.0 or eSST4B.VM1.y > eSST4B.VM1.outMax and eSST4B.VM1.k * eSST4B.Gain2.u > 0.0 then 0.0 else eSST4B.VM1.k * eSST4B.Gain2.u
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_895(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,895};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[2] /* eSST4B.VM1.y STATE(1) */, data->simulationInfo->realParameter[120] /* eSST4B.VM1.outMin PARAM */, 26, Less);
  RELATIONHYSTERESIS(tmp1, (data->simulationInfo->realParameter[118] /* eSST4B.VM1.k PARAM */) * (data->localData[0]->realVars[61] /* eSST4B.Gain2.u variable */), 0.0, 27, Less);
  RELATIONHYSTERESIS(tmp2, data->localData[0]->realVars[2] /* eSST4B.VM1.y STATE(1) */, data->simulationInfo->realParameter[119] /* eSST4B.VM1.outMax PARAM */, 28, Greater);
  RELATIONHYSTERESIS(tmp3, (data->simulationInfo->realParameter[118] /* eSST4B.VM1.k PARAM */) * (data->localData[0]->realVars[61] /* eSST4B.Gain2.u variable */), 0.0, 29, Greater);
  data->localData[0]->realVars[14] /* der(eSST4B.VM1.y) STATE_DER */ = (((tmp0 && tmp1) || (tmp2 && tmp3))?0.0:(data->simulationInfo->realParameter[118] /* eSST4B.VM1.k PARAM */) * (data->localData[0]->realVars[61] /* eSST4B.Gain2.u variable */));
  TRACE_POP
}
/*
equation index: 896
type: SIMPLE_ASSIGN
$DER.gENROU.Epq = (eSST4B.EFD - eSST4B.XADIFD) / gENROU.Tpd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_896(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,896};
  data->localData[0]->realVars[19] /* der(gENROU.Epq) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[57] /* eSST4B.EFD variable */ - data->localData[0]->realVars[70] /* eSST4B.XADIFD variable */,data->simulationInfo->realParameter[229] /* gENROU.Tpd0 PARAM */,"gENROU.Tpd0",equationIndexes);
  TRACE_POP
}
/*
equation index: 897
type: SIMPLE_ASSIGN
gENROU.P = pwLine.vs.im * pwLine.is.im + pwLine.vs.re * pwLine.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_897(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,897};
  data->localData[0]->realVars[93] /* gENROU.P variable */ = (data->localData[0]->realVars[119] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[117] /* pwLine.is.im variable */) + (data->localData[0]->realVars[120] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[118] /* pwLine.is.re variable */);
  TRACE_POP
}
/*
equation index: 898
type: SIMPLE_ASSIGN
gENROU.PELEC = gENROU.P / gENROU.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_898(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,898};
  data->localData[0]->realVars[94] /* gENROU.PELEC variable */ = DIVISION_SIM(data->localData[0]->realVars[93] /* gENROU.P variable */,data->simulationInfo->realParameter[186] /* gENROU.CoB PARAM */,"gENROU.CoB",equationIndexes);
  TRACE_POP
}
/*
equation index: 899
type: SIMPLE_ASSIGN
gENROU.Q = pwLine.vs.im * pwLine.is.re - pwLine.vs.re * pwLine.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_899(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,899};
  data->localData[0]->realVars[100] /* gENROU.Q variable */ = (data->localData[0]->realVars[119] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[118] /* pwLine.is.re variable */) - ((data->localData[0]->realVars[120] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[117] /* pwLine.is.im variable */));
  TRACE_POP
}
/*
equation index: 900
type: SIMPLE_ASSIGN
gENROU.I = sqrt(pwLine.is.im ^ 2.0 + pwLine.is.re ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_900(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,900};
  modelica_real tmp4;
  modelica_real tmp5;
  tmp4 = data->localData[0]->realVars[117] /* pwLine.is.im variable */;
  tmp5 = data->localData[0]->realVars[118] /* pwLine.is.re variable */;
  data->localData[0]->realVars[92] /* gENROU.I variable */ = sqrt((tmp4 * tmp4) + (tmp5 * tmp5));
  TRACE_POP
}
/*
equation index: 901
type: SIMPLE_ASSIGN
gENROU.anglei = atan2(-pwLine.is.im, -pwLine.is.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_901(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,901};
  data->localData[0]->realVars[103] /* gENROU.anglei variable */ = atan2((-data->localData[0]->realVars[117] /* pwLine.is.im variable */), (-data->localData[0]->realVars[118] /* pwLine.is.re variable */));
  TRACE_POP
}
/*
equation index: 902
type: SIMPLE_ASSIGN
pwLine.Q12 = (pwLine.vs.im * pwLine.is.re - pwLine.vs.re * pwLine.is.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_902(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,902};
  data->localData[0]->realVars[113] /* pwLine.Q12 variable */ = ((data->localData[0]->realVars[119] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[118] /* pwLine.is.re variable */) - ((data->localData[0]->realVars[120] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[117] /* pwLine.is.im variable */))) * (data->simulationInfo->realParameter[278] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 903
type: SIMPLE_ASSIGN
pwLine.P12 = (pwLine.vs.re * pwLine.is.re + pwLine.vs.im * pwLine.is.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_903(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,903};
  data->localData[0]->realVars[111] /* pwLine.P12 variable */ = ((data->localData[0]->realVars[120] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[118] /* pwLine.is.re variable */) + (data->localData[0]->realVars[119] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[117] /* pwLine.is.im variable */)) * (data->simulationInfo->realParameter[278] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 904
type: SIMPLE_ASSIGN
pwLine3.P12 = (pwLine1.vs.re * pwLine3.is.re + pwLine1.vs.im * pwLine3.is.im) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_904(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,904};
  data->localData[0]->realVars[133] /* pwLine3.P12 variable */ = ((data->localData[0]->realVars[132] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[140] /* pwLine3.is.re variable */) + (data->localData[0]->realVars[131] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[139] /* pwLine3.is.im variable */)) * (data->simulationInfo->realParameter[300] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 905
type: SIMPLE_ASSIGN
pwLine3.Q12 = (pwLine1.vs.im * pwLine3.is.re - pwLine1.vs.re * pwLine3.is.im) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_905(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,905};
  data->localData[0]->realVars[135] /* pwLine3.Q12 variable */ = ((data->localData[0]->realVars[131] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[140] /* pwLine3.is.re variable */) - ((data->localData[0]->realVars[132] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[139] /* pwLine3.is.im variable */))) * (data->simulationInfo->realParameter[300] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 906
type: SIMPLE_ASSIGN
constantLoad.angle = atan2(pwLine1.vs.im, pwLine1.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_906(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,906};
  data->localData[0]->realVars[48] /* constantLoad.angle variable */ = atan2(data->localData[0]->realVars[131] /* pwLine1.vs.im variable */, data->localData[0]->realVars[132] /* pwLine1.vs.re variable */);
  TRACE_POP
}
/*
equation index: 907
type: SIMPLE_ASSIGN
LOAD.angle = 57.29577951308232 * constantLoad.angle
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_907(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,907};
  data->localData[0]->realVars[43] /* LOAD.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[48] /* constantLoad.angle variable */);
  TRACE_POP
}
/*
equation index: 908
type: SIMPLE_ASSIGN
pwLine.Q21 = (pwLine1.vs.re * pwLine.ir.im - pwLine1.vs.im * pwLine.ir.re) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_908(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,908};
  data->localData[0]->realVars[114] /* pwLine.Q21 variable */ = ((data->localData[0]->realVars[132] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[115] /* pwLine.ir.im variable */) - ((data->localData[0]->realVars[131] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[116] /* pwLine.ir.re variable */))) * (data->simulationInfo->realParameter[278] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 909
type: SIMPLE_ASSIGN
pwLine.P21 = ((-pwLine1.vs.re) * pwLine.ir.re - pwLine1.vs.im * pwLine.ir.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_909(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,909};
  data->localData[0]->realVars[112] /* pwLine.P21 variable */ = (((-data->localData[0]->realVars[132] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[116] /* pwLine.ir.re variable */) - ((data->localData[0]->realVars[131] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[115] /* pwLine.ir.im variable */))) * (data->simulationInfo->realParameter[278] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 910
type: SIMPLE_ASSIGN
pwLine1.P12 = (pwLine1.vs.re * pwLine1.is.re + pwLine1.vs.im * pwLine1.is.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_910(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,910};
  data->localData[0]->realVars[121] /* pwLine1.P12 variable */ = ((data->localData[0]->realVars[132] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[128] /* pwLine1.is.re variable */) + (data->localData[0]->realVars[131] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[127] /* pwLine1.is.im variable */)) * (data->simulationInfo->realParameter[289] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 911
type: SIMPLE_ASSIGN
pwLine1.Q12 = (pwLine1.vs.im * pwLine1.is.re - pwLine1.vs.re * pwLine1.is.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_911(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,911};
  data->localData[0]->realVars[123] /* pwLine1.Q12 variable */ = ((data->localData[0]->realVars[131] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[128] /* pwLine1.is.re variable */) - ((data->localData[0]->realVars[132] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[127] /* pwLine1.is.im variable */))) * (data->simulationInfo->realParameter[289] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 912
type: SIMPLE_ASSIGN
pwLine1.P21 = ((-pwLine1.vr.re) * pwLine1.ir.re - pwLine1.vr.im * pwLine1.ir.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_912(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,912};
  data->localData[0]->realVars[122] /* pwLine1.P21 variable */ = (((-data->localData[0]->realVars[130] /* pwLine1.vr.re variable */)) * (data->localData[0]->realVars[126] /* pwLine1.ir.re variable */) - ((data->localData[0]->realVars[129] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[125] /* pwLine1.ir.im variable */))) * (data->simulationInfo->realParameter[289] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 913
type: SIMPLE_ASSIGN
pwLine1.Q21 = (pwLine1.vr.re * pwLine1.ir.im - pwLine1.vr.im * pwLine1.ir.re) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_913(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,913};
  data->localData[0]->realVars[124] /* pwLine1.Q21 variable */ = ((data->localData[0]->realVars[130] /* pwLine1.vr.re variable */) * (data->localData[0]->realVars[125] /* pwLine1.ir.im variable */) - ((data->localData[0]->realVars[129] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[126] /* pwLine1.ir.re variable */))) * (data->simulationInfo->realParameter[289] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 914
type: SIMPLE_ASSIGN
pwLine4.P21 = ((-pwLine1.vr.re) * pwLine4.ir.re - pwLine1.vr.im * pwLine4.ir.im) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_914(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,914};
  data->localData[0]->realVars[144] /* pwLine4.P21 variable */ = (((-data->localData[0]->realVars[130] /* pwLine1.vr.re variable */)) * (data->localData[0]->realVars[148] /* pwLine4.ir.re variable */) - ((data->localData[0]->realVars[129] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[147] /* pwLine4.ir.im variable */))) * (data->simulationInfo->realParameter[311] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 915
type: SIMPLE_ASSIGN
pwLine4.Q21 = (pwLine1.vr.re * pwLine4.ir.im - pwLine1.vr.im * pwLine4.ir.re) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_915(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,915};
  data->localData[0]->realVars[146] /* pwLine4.Q21 variable */ = ((data->localData[0]->realVars[130] /* pwLine1.vr.re variable */) * (data->localData[0]->realVars[147] /* pwLine4.ir.im variable */) - ((data->localData[0]->realVars[129] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[148] /* pwLine4.ir.re variable */))) * (data->simulationInfo->realParameter[311] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 916
type: SIMPLE_ASSIGN
gENCLS.P = (-pwLine1.vr.re) * gENCLS.p.ir - pwLine1.vr.im * gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_916(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,916};
  data->localData[0]->realVars[81] /* gENCLS.P variable */ = ((-data->localData[0]->realVars[130] /* pwLine1.vr.re variable */)) * (data->localData[0]->realVars[89] /* gENCLS.p.ir variable */) - ((data->localData[0]->realVars[129] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[88] /* gENCLS.p.ii variable */));
  TRACE_POP
}
/*
equation index: 917
type: SIMPLE_ASSIGN
gENCLS.Q = pwLine1.vr.re * gENCLS.p.ii - pwLine1.vr.im * gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_917(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,917};
  data->localData[0]->realVars[82] /* gENCLS.Q variable */ = (data->localData[0]->realVars[130] /* pwLine1.vr.re variable */) * (data->localData[0]->realVars[88] /* gENCLS.p.ii variable */) - ((data->localData[0]->realVars[129] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[89] /* gENCLS.p.ir variable */));
  TRACE_POP
}
/*
equation index: 918
type: SIMPLE_ASSIGN
GEN2.V = sqrt(pwLine1.vr.re ^ 2.0 + pwLine1.vr.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_918(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,918};
  modelica_real tmp6;
  modelica_real tmp7;
  tmp6 = data->localData[0]->realVars[130] /* pwLine1.vr.re variable */;
  tmp7 = data->localData[0]->realVars[129] /* pwLine1.vr.im variable */;
  data->localData[0]->realVars[38] /* GEN2.V variable */ = sqrt((tmp6 * tmp6) + (tmp7 * tmp7));
  TRACE_POP
}
/*
equation index: 919
type: SIMPLE_ASSIGN
gENCLS.V = GEN2.V
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_919(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,919};
  data->localData[0]->realVars[83] /* gENCLS.V variable */ = data->localData[0]->realVars[38] /* GEN2.V variable */;
  TRACE_POP
}
/*
equation index: 920
type: SIMPLE_ASSIGN
gENCLS.anglev = atan2(pwLine1.vr.im, pwLine1.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_920(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,920};
  data->localData[0]->realVars[84] /* gENCLS.anglev variable */ = atan2(data->localData[0]->realVars[129] /* pwLine1.vr.im variable */, data->localData[0]->realVars[130] /* pwLine1.vr.re variable */);
  TRACE_POP
}
/*
equation index: 921
type: SIMPLE_ASSIGN
GEN2.angle = 57.29577951308232 * gENCLS.anglev
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_921(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,921};
  data->localData[0]->realVars[39] /* GEN2.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[84] /* gENCLS.anglev variable */);
  TRACE_POP
}
/*
equation index: 924
type: ALGORITHM

  assert(eSST4B.maxLimiter.uMax >= eSST4B.maxLimiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(eSST4B.maxLimiter.uMax, 6, 0, true) + ") < uMin (=" + String(eSST4B.maxLimiter.uMin, 6, 0, true) + ")");
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_924(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,924};
  modelica_boolean tmp8;
  static const MMC_DEFSTRINGLIT(tmp9,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp10;
  static const MMC_DEFSTRINGLIT(tmp11,11,") < uMin (=");
  modelica_string tmp12;
  static int tmp13 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp8 = GreaterEq(data->simulationInfo->realParameter[156] /* eSST4B.maxLimiter.uMax PARAM */,data->simulationInfo->realParameter[157] /* eSST4B.maxLimiter.uMin PARAM */);
    if(!tmp8)
    {
      tmp10 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[156] /* eSST4B.maxLimiter.uMax PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp9),tmp10);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp11));
      tmp12 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[157] /* eSST4B.maxLimiter.uMin PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp12);
      tmpMeta[3] = stringAppend(tmpMeta[2],(modelica_string) mmc_strings_len1[41]);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.3/Blocks/Nonlinear.mo",22,9,23,65,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neSST4B.maxLimiter.uMax >= eSST4B.maxLimiter.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta[3]));
      }
    }
  }
  TRACE_POP
}
/*
equation index: 923
type: ALGORITHM

  assert(eSST4B.limiter1.uMax >= eSST4B.limiter1.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(eSST4B.limiter1.uMax, 6, 0, true) + ") < uMin (=" + String(eSST4B.limiter1.uMin, 6, 0, true) + ")");
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_923(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,923};
  modelica_boolean tmp14;
  static const MMC_DEFSTRINGLIT(tmp15,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp16;
  static const MMC_DEFSTRINGLIT(tmp17,11,") < uMin (=");
  modelica_string tmp18;
  static int tmp19 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp14 = GreaterEq(data->simulationInfo->realParameter[154] /* eSST4B.limiter1.uMax PARAM */,data->simulationInfo->realParameter[155] /* eSST4B.limiter1.uMin PARAM */);
    if(!tmp14)
    {
      tmp16 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[154] /* eSST4B.limiter1.uMax PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp15),tmp16);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp17));
      tmp18 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[155] /* eSST4B.limiter1.uMin PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp18);
      tmpMeta[3] = stringAppend(tmpMeta[2],(modelica_string) mmc_strings_len1[41]);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.3/Blocks/Nonlinear.mo",22,9,23,65,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neSST4B.limiter1.uMax >= eSST4B.limiter1.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta[3]));
      }
    }
  }
  TRACE_POP
}
/*
equation index: 922
type: ALGORITHM

  assert(eSST4B.limiter.uMax >= eSST4B.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(eSST4B.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(eSST4B.limiter.uMin, 6, 0, true) + ")");
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_922(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,922};
  modelica_boolean tmp20;
  static const MMC_DEFSTRINGLIT(tmp21,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp22;
  static const MMC_DEFSTRINGLIT(tmp23,11,") < uMin (=");
  modelica_string tmp24;
  static int tmp25 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp20 = GreaterEq(data->simulationInfo->realParameter[152] /* eSST4B.limiter.uMax PARAM */,data->simulationInfo->realParameter[153] /* eSST4B.limiter.uMin PARAM */);
    if(!tmp20)
    {
      tmp22 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[152] /* eSST4B.limiter.uMax PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp21),tmp22);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp23));
      tmp24 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[153] /* eSST4B.limiter.uMin PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp24);
      tmpMeta[3] = stringAppend(tmpMeta[2],(modelica_string) mmc_strings_len1[41]);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.3/Blocks/Nonlinear.mo",22,9,23,65,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neSST4B.limiter.uMax >= eSST4B.limiter.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta[3]));
      }
    }
  }
  TRACE_POP
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_DAE);
#endif

  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_functionLocalKnownVars(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_740(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_741(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_742(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_743(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_744(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_745(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_746(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_747(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_748(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_749(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_750(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_751(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_842(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_843(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_844(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_845(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_846(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_847(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_848(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_849(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_850(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_851(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_852(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_853(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_854(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_855(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_856(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_857(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_858(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_859(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_860(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_861(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_862(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_863(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_864(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_865(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_866(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_867(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_868(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_869(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_870(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_871(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_872(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_873(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_874(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_875(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_876(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_877(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_878(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_879(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_894(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_895(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_896(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_897(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_898(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_899(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_900(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_901(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_902(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_903(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_904(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_905(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_906(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_907(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_908(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_909(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_910(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_911(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_912(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_913(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_914(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_915(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_916(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_917(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_918(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_919(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_920(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_921(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_924(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_923(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_922(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_DAE);
#endif
  TRACE_POP
  return 0;
}


int OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/* forwarded equations */
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_741(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_742(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_743(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_744(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_745(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_746(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_747(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_748(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_749(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_750(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_751(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_842(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_843(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_844(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_845(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_846(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_855(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_856(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_857(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_858(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_859(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_860(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_861(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_862(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_863(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_864(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_865(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_866(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_867(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_868(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_869(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_870(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_874(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_875(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_876(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_877(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_878(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_879(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_894(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_895(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_896(DATA* data, threadData_t *threadData);

static void functionODE_system0(DATA *data, threadData_t *threadData)
{
    OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_741(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_742(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_743(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_744(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_745(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_746(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_747(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_748(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_749(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_750(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_751(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_842(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_843(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_844(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_845(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_846(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_855(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_856(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_857(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_858(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_859(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_860(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_861(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_862(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_863(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_864(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_865(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_866(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_867(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_868(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_869(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_870(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_874(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_875(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_876(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_877(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_878(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_879(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_894(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_895(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_896(data, threadData);
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_FUNCTION_ODE);
#endif

  
  data->simulationInfo->callStatistics.functionODE++;
  
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_functionLocalKnownVars(data, threadData);
  functionODE_system0(data, threadData);

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_FUNCTION_ODE);
#endif

  TRACE_POP
  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char**argv, DATA *data, threadData_t *threadData);

#include "OpenIPSL.Examples.Controls.PSSE.ES.ESST4B_12jac.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESST4B_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_callback = {
   (int (*)(DATA *, threadData_t *, void *)) OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_performSimulation,
   (int (*)(DATA *, threadData_t *, void *)) OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_performQSSSimulation,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_updateContinuousSystem,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_callExternalObjectDestructors,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_initialNonLinearSystem,
   NULL,
   NULL,
   #if !defined(OMC_NO_STATESELECTION)
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_initializeStateSets,
   #else
   NULL,
   #endif
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_initializeDAEmodeData,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_functionODE,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_functionAlgebraics,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_functionDAE,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_functionLocalKnownVars,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_input_function,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_input_function_init,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_input_function_updateStartValues,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_data_function,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_output_function,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_setc_function,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_function_storeDelayed,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_updateBoundVariableAttributes,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_functionInitialEquations,
   1, /* useHomotopy - 0: local homotopy (equidistant lambda), 1: global homotopy (equidistant lambda), 2: new global homotopy approach (adaptive lambda), 3: new local homotopy approach (adaptive lambda)*/
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_functionInitialEquations_lambda0,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_functionRemovedInitialEquations,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_updateBoundParameters,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_checkForAsserts,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_function_ZeroCrossingsEquations,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_function_ZeroCrossings,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_function_updateRelations,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_zeroCrossingDescription,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_relationDescription,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_function_initSample,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_INDEX_JAC_A,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_INDEX_JAC_B,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_INDEX_JAC_C,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_INDEX_JAC_D,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_INDEX_JAC_F,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_initialAnalyticJacobianA,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_initialAnalyticJacobianB,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_initialAnalyticJacobianC,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_initialAnalyticJacobianD,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_initialAnalyticJacobianF,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_functionJacA_column,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_functionJacB_column,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_functionJacC_column,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_functionJacD_column,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_functionJacF_column,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_linear_model_frame,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_linear_model_datarecovery_frame,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_mayer,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_lagrange,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_pickUpBoundsForInputsInOptimization,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_setInputData,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_getTimeGrid,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_symbolicInlineSystem,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_function_initSynchronous,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_function_updateSynchronous,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_function_equationsSynchronous,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_inputNames,
   NULL,
   NULL,
   NULL,
   -1

};

#define _OMC_LIT_RESOURCE_0_name_data "Complex"
#define _OMC_LIT_RESOURCE_0_dir_data "/usr/lib/omlibrary"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_name,7,_OMC_LIT_RESOURCE_0_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir,18,_OMC_LIT_RESOURCE_0_dir_data);

#define _OMC_LIT_RESOURCE_1_name_data "Modelica"
#define _OMC_LIT_RESOURCE_1_dir_data "/usr/lib/omlibrary/Modelica 3.2.3"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_name,8,_OMC_LIT_RESOURCE_1_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir,33,_OMC_LIT_RESOURCE_1_dir_data);

#define _OMC_LIT_RESOURCE_2_name_data "ModelicaServices"
#define _OMC_LIT_RESOURCE_2_dir_data "/usr/lib/omlibrary/ModelicaServices 3.2.3"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_name,16,_OMC_LIT_RESOURCE_2_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir,41,_OMC_LIT_RESOURCE_2_dir_data);

#define _OMC_LIT_RESOURCE_3_name_data "OpenIPSL"
#define _OMC_LIT_RESOURCE_3_dir_data "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/OpenIPSL/OpenIPSL"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_name,8,_OMC_LIT_RESOURCE_3_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir,124,_OMC_LIT_RESOURCE_3_dir_data);

static const MMC_DEFSTRUCTLIT(_OMC_LIT_RESOURCES,8,MMC_ARRAY_TAG) {MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir)}};
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "OpenIPSL.Examples.Controls.PSSE.ES.ESST4B";
  data->modelData->modelFilePrefix = "OpenIPSL.Examples.Controls.PSSE.ES.ESST4B";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/OpenIPSL/OpenIPSL/Examples/Controls/PSSE/ES";
  data->modelData->modelGUID = "{3cfa9bb8-39e5-42e3-94ac-18c0f902df10}";
  #if defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME)
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  #else
  #if defined(_MSC_VER) /* handle joke compilers */
  {
  /* for MSVC we encode a string like char x[] = {'a', 'b', 'c', '\0'} */
  /* because the string constant limit is 65535 bytes */
  static const char contents_init[] =
    #include "OpenIPSL.Examples.Controls.PSSE.ES.ESST4B_init.c"
    ;
  static const char contents_info[] =
    #include "OpenIPSL.Examples.Controls.PSSE.ES.ESST4B_info.c"
    ;
    data->modelData->initXMLData = contents_init;
    data->modelData->modelDataXml.infoXMLData = contents_info;
  }
  #else /* handle real compilers */
  data->modelData->initXMLData =
  #include "OpenIPSL.Examples.Controls.PSSE.ES.ESST4B_init.c"
    ;
  data->modelData->modelDataXml.infoXMLData =
  #include "OpenIPSL.Examples.Controls.PSSE.ES.ESST4B_info.c"
    ;
  #endif /* defined(_MSC_VER) */
  #endif /* defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME) */
  data->modelData->runTestsuite = 0;
  
  data->modelData->nStates = 12;
  data->modelData->nVariablesReal = 151;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesInteger = 0;
  data->modelData->nVariablesBoolean = 2;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 319;
  data->modelData->nParametersInteger = 10;
  data->modelData->nParametersBoolean = 82;
  data->modelData->nParametersString = 0;
  data->modelData->nInputVars = 0;
  data->modelData->nOutputVars = 0;
  
  data->modelData->nAliasReal = 110;
  data->modelData->nAliasInteger = 0;
  data->modelData->nAliasBoolean = 0;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 29;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 32;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  
  data->modelData->modelDataXml.fileName = "OpenIPSL.Examples.Controls.PSSE.ES.ESST4B_info.json";
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 6;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 1192;
  data->modelData->nMixedSystems = 0;
  data->modelData->nLinearSystems = 0;
  data->modelData->nNonLinearSystems = 4;
  data->modelData->nStateSets = 0;
  data->modelData->nJacobians = 7;
  data->modelData->nOptimizeConstraints = 0;
  data->modelData->nOptimizeFinalConstraints = 0;
  
  data->modelData->nDelayExpressions = 0;
  
  data->modelData->nClocks = 0;
  data->modelData->nSubClocks = 0;
  
  data->modelData->nSensitivityVars = 0;
  data->modelData->nSensitivityParamVars = 0;
  data->modelData->nSetcVars = 0;
  data->modelData->ndataReconVars = 0;
  data->modelData->linearizationDumpLanguage =
  OMC_LINEARIZE_DUMP_LANGUAGE_MODELICA;
}

static int rml_execution_failed()
{
  fflush(NULL);
  fprintf(stderr, "Execution failed!\n");
  fflush(NULL);
  return 1;
}

#if defined(threadData)
#undef threadData
#endif
/* call the simulation runtime main from our main! */
int main(int argc, char**argv)
{
  int res;
  DATA data;
  MODEL_DATA modelData;
  SIMULATION_INFO simInfo;
  data.modelData = &modelData;
  data.simulationInfo = &simInfo;
  measure_time_flag = 0;
  compiledInDAEMode = 0;
  compiledWithSymSolver = 0;
  MMC_INIT(0);
  omc_alloc_interface.init();
  {
    MMC_TRY_TOP()
  
    MMC_TRY_STACK()
  
    OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_setupDataStruc(&data, threadData);
    res = _main_SimulationRuntime(argc, argv, &data, threadData);
    
    MMC_ELSE()
    rml_execution_failed();
    fprintf(stderr, "Stack overflow detected and was not caught.\nSend us a bug report at https://trac.openmodelica.org/OpenModelica/newticket\n    Include the following trace:\n");
    printStacktraceMessages();
    fflush(NULL);
    return 1;
    MMC_CATCH_STACK()
    
    MMC_CATCH_TOP(return rml_execution_failed());
  }

  fflush(NULL);
  EXIT(res);
  return res;
}

#ifdef __cplusplus
}
#endif


