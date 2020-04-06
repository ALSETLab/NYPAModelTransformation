/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "OpenIPSL.Examples.Controls.PSSE.ES.EXAC2_model.h"
#include "simulation/solver/events.h"

#define prefixedName_performSimulation OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_performSimulation
#define prefixedName_updateContinuousSystem OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_updateContinuousSystem
#include <simulation/solver/perform_simulation.c>

#define prefixedName_performQSSSimulation OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_performQSSSimulation
#include <simulation/solver/perform_qss_simulation.c>

/* dummy VARINFO and FILEINFO */
const FILE_INFO dummyFILE_INFO = omc_dummyFileInfo;
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/*
equation index: 755
type: SIMPLE_ASSIGN
eXAC2_1._EFD0 = gENROE.efd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_755(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,755};
  data->localData[0]->realVars[63] /* eXAC2_1.EFD0 variable */ = data->simulationInfo->realParameter[272];
  TRACE_POP
}
/*
equation index: 756
type: SIMPLE_ASSIGN
der(gENCLS._delta) = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_756(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,756};
  data->localData[0]->realVars[18] /* der(gENCLS.delta) STATE_DER */ = 0.0;
  TRACE_POP
}
/*
equation index: 757
type: SIMPLE_ASSIGN
der(gENCLS._eq) = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_757(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,757};
  data->localData[0]->realVars[19] /* der(gENCLS.eq) STATE_DER */ = 0.0;
  TRACE_POP
}
/*
equation index: 758
type: SIMPLE_ASSIGN
gENROE._PSIppd = gENROE.Epq * gENROE.K3d + gENROE.PSIkd * gENROE.K4d
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_758(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,758};
  data->localData[0]->realVars[100] /* gENROE.PSIppd variable */ = (data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */) * (data->simulationInfo->realParameter[222]) + (data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[224]);
  TRACE_POP
}
/*
equation index: 759
type: SIMPLE_ASSIGN
gENROE._PSIppq = gENROE.PSIkq * gENROE.K4q + gENROE.Epd * gENROE.K3q
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_759(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,759};
  data->localData[0]->realVars[101] /* gENROE.PSIppq variable */ = (data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[225]) + (data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */) * (data->simulationInfo->realParameter[223]);
  TRACE_POP
}
/*
equation index: 760
type: SIMPLE_ASSIGN
gENROE._PSIpp = sqrt(gENROE.PSIppd ^ 2.0 + gENROE.PSIppq ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_760(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,760};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[100] /* gENROE.PSIppd variable */;
  tmp1 = data->localData[0]->realVars[101] /* gENROE.PSIppq variable */;
  data->localData[0]->realVars[99] /* gENROE.PSIpp variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 761
type: SIMPLE_ASSIGN
$cse5 = OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_761(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,761};
  data->localData[0]->realVars[29] /* $cse5 variable */ = omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[99] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[242], data->simulationInfo->realParameter[243], 1.0, 1.2);
  TRACE_POP
}
/*
equation index: 762
type: SIMPLE_ASSIGN
der(gENROE._delta) = gENROE.w_b * gENROE.w
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_762(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,762};
  data->localData[0]->realVars[24] /* der(gENROE.delta) STATE_DER */ = (data->simulationInfo->realParameter[286]) * (data->localData[0]->realVars[12] /* gENROE.w STATE(1) */);
  TRACE_POP
}
/*
equation index: 763
type: SIMPLE_ASSIGN
eXAC2_1._leadLag._TF._x[1] = eXAC2_1.leadLag.TF.x_scaled[1] / eXAC2_1.leadLag.TF.a_end
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_763(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,763};
  data->localData[0]->realVars[74] /* eXAC2_1.leadLag.TF.x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[3] /* eXAC2_1.leadLag.TF.x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[145],"eXAC2_1.leadLag.TF.a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 764
type: SIMPLE_ASSIGN
eXAC2_1._rotatingExciterWithDemagnetizationLimited._Sum._u2 = eXAC2_1.rotatingExciterWithDemagnetizationLimited.gain.k * eXAC2_1.rotatingExciterWithDemagnetizationLimited.sISO.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_764(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,764};
  data->localData[0]->realVars[81] /* eXAC2_1.rotatingExciterWithDemagnetizationLimited.Sum.u2 variable */ = (data->simulationInfo->realParameter[170]) * (data->localData[0]->realVars[4] /* eXAC2_1.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */);
  TRACE_POP
}
/*
equation index: 765
type: SIMPLE_ASSIGN
eXAC2_1._rotatingExciterWithDemagnetizationLimited._VE._u2 = OpenIPSL.NonElectrical.Functions.SE(eXAC2_1.rotatingExciterWithDemagnetizationLimited.sISO.y, eXAC2_1.rotatingExciterWithDemagnetizationLimited.se1.SE1, eXAC2_1.rotatingExciterWithDemagnetizationLimited.se1.SE2, eXAC2_1.rotatingExciterWithDemagnetizationLimited.se1.E1, eXAC2_1.rotatingExciterWithDemagnetizationLimited.se1.E2)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_765(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,765};
  data->localData[0]->realVars[82] /* eXAC2_1.rotatingExciterWithDemagnetizationLimited.VE.u2 variable */ = omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->localData[0]->realVars[4] /* eXAC2_1.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */, data->simulationInfo->realParameter[177], data->simulationInfo->realParameter[178], data->simulationInfo->realParameter[175], data->simulationInfo->realParameter[176]);
  TRACE_POP
}
/*
equation index: 766
type: SIMPLE_ASSIGN
eXAC2_1._rotatingExciterWithDemagnetizationLimited._Sum._u1 = eXAC2_1.rotatingExciterWithDemagnetizationLimited.sISO.y * eXAC2_1.rotatingExciterWithDemagnetizationLimited.VE.u2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_766(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,766};
  data->localData[0]->realVars[80] /* eXAC2_1.rotatingExciterWithDemagnetizationLimited.Sum.u1 variable */ = (data->localData[0]->realVars[4] /* eXAC2_1.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */) * (data->localData[0]->realVars[82] /* eXAC2_1.rotatingExciterWithDemagnetizationLimited.VE.u2 variable */);
  TRACE_POP
}
/*
equation index: 767
type: SIMPLE_ASSIGN
$cse7 = cos(gENROE.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_767(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,767};
  data->localData[0]->realVars[31] /* $cse7 variable */ = cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 768
type: SIMPLE_ASSIGN
$cse6 = sin(gENROE.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_768(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,768};
  data->localData[0]->realVars[30] /* $cse6 variable */ = sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 769
type: SIMPLE_ASSIGN
$cse2 = cos(gENCLS.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_769(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,769};
  data->localData[0]->realVars[27] /* $cse2 variable */ = cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 770
type: SIMPLE_ASSIGN
$cse1 = sin(gENCLS.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_770(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,770};
  data->localData[0]->realVars[26] /* $cse1 variable */ = sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */);
  TRACE_POP
}
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_771(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_772(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_773(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_774(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_775(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_776(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_777(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_778(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_779(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_780(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_781(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_782(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_783(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_784(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_785(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_786(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_787(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_788(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_789(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_790(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_791(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_792(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_793(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_815(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_814(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_813(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_812(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_811(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_810(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_809(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_808(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_807(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_806(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_805(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_804(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_803(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_802(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_801(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_800(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_799(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_798(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_797(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_796(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_795(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_794(DATA*, threadData_t*);
/*
equation index: 861
indexNonlinear: 4
type: NONLINEAR

vars: {pwLine1._is._re, constantLoad._p._ir, pwLine1._is._im, constantLoad._p._ii, pwLine4._is._im, pwLine3._ir._im, pwLine3._ir._re, pwLine4._is._re, pwLine3._is._im, pwLine3._is._re, pwLine1._ir._re, pwLine1._ir._im, gENCLS._iq, gENCLS._id, pwLine1._vr._im, pwLine1._vr._re, gENROE._id, gENROE._iq, pwLine3._vr._im, pwLine1._vs._re, pwLine1._vs._im, pwLine3._vr._re}
eqns: {771, 772, 773, 774, 775, 776, 777, 778, 779, 780, 781, 782, 783, 784, 785, 786, 787, 788, 789, 790, 791, 792, 793, 815, 814, 813, 812, 811, 810, 809, 808, 807, 806, 805, 804, 803, 802, 801, 800, 799, 798, 797, 796, 795, 794}
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_861(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,861};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 861 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[0] = data->localData[0]->realVars[131] /* pwLine1.is.re variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[1] = data->localData[0]->realVars[54] /* constantLoad.p.ir variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[2] = data->localData[0]->realVars[130] /* pwLine1.is.im variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[3] = data->localData[0]->realVars[53] /* constantLoad.p.ii variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[4] = data->localData[0]->realVars[152] /* pwLine4.is.im variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[5] = data->localData[0]->realVars[140] /* pwLine3.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[6] = data->localData[0]->realVars[141] /* pwLine3.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[7] = data->localData[0]->realVars[153] /* pwLine4.is.re variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[8] = data->localData[0]->realVars[142] /* pwLine3.is.im variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[9] = data->localData[0]->realVars[143] /* pwLine3.is.re variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[10] = data->localData[0]->realVars[129] /* pwLine1.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[11] = data->localData[0]->realVars[128] /* pwLine1.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[12] = data->localData[0]->realVars[89] /* gENCLS.iq variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[13] = data->localData[0]->realVars[88] /* gENCLS.id variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[14] = data->localData[0]->realVars[132] /* pwLine1.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[15] = data->localData[0]->realVars[133] /* pwLine1.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[16] = data->localData[0]->realVars[108] /* gENROE.id variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[17] = data->localData[0]->realVars[109] /* gENROE.iq variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[18] = data->localData[0]->realVars[144] /* pwLine3.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[19] = data->localData[0]->realVars[135] /* pwLine1.vs.re variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[20] = data->localData[0]->realVars[134] /* pwLine1.vs.im variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[21] = data->localData[0]->realVars[145] /* pwLine3.vr.re variable */;
  retValue = solve_nonlinear_system(data, threadData, 4);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,861};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 861 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[131] /* pwLine1.is.re variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[0];
  data->localData[0]->realVars[54] /* constantLoad.p.ir variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[1];
  data->localData[0]->realVars[130] /* pwLine1.is.im variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[2];
  data->localData[0]->realVars[53] /* constantLoad.p.ii variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[3];
  data->localData[0]->realVars[152] /* pwLine4.is.im variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[4];
  data->localData[0]->realVars[140] /* pwLine3.ir.im variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[5];
  data->localData[0]->realVars[141] /* pwLine3.ir.re variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[6];
  data->localData[0]->realVars[153] /* pwLine4.is.re variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[7];
  data->localData[0]->realVars[142] /* pwLine3.is.im variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[8];
  data->localData[0]->realVars[143] /* pwLine3.is.re variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[9];
  data->localData[0]->realVars[129] /* pwLine1.ir.re variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[10];
  data->localData[0]->realVars[128] /* pwLine1.ir.im variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[11];
  data->localData[0]->realVars[89] /* gENCLS.iq variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[12];
  data->localData[0]->realVars[88] /* gENCLS.id variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[13];
  data->localData[0]->realVars[132] /* pwLine1.vr.im variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[14];
  data->localData[0]->realVars[133] /* pwLine1.vr.re variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[15];
  data->localData[0]->realVars[108] /* gENROE.id variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[16];
  data->localData[0]->realVars[109] /* gENROE.iq variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[17];
  data->localData[0]->realVars[144] /* pwLine3.vr.im variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[18];
  data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[19];
  data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[20];
  data->localData[0]->realVars[145] /* pwLine3.vr.re variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[21];
  TRACE_POP
}
/*
equation index: 862
type: SIMPLE_ASSIGN
der(gENROE._PSIkd) = (gENROE.Epq + (gENROE.Xl - gENROE.Xpd) * gENROE.id - gENROE.PSIkd) / gENROE.Tppd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_862(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,862};
  data->localData[0]->realVars[22] /* der(gENROE.PSIkd) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[253] - data->simulationInfo->realParameter[254]) * (data->localData[0]->realVars[108] /* gENROE.id variable */) - data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */,data->simulationInfo->realParameter[246],"gENROE.Tppd0",equationIndexes);
  TRACE_POP
}
/*
equation index: 863
type: SIMPLE_ASSIGN
eXAC2_1._XADIFD = gENROE.K1d * (gENROE.Epq + (gENROE.Xl - gENROE.Xpd) * gENROE.id - gENROE.PSIkd) + gENROE.Epq + gENROE.id * (gENROE.Xd - gENROE.Xpd) + $cse5 * gENROE.PSIppd
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_863(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,863};
  data->localData[0]->realVars[64] /* eXAC2_1.XADIFD variable */ = (data->simulationInfo->realParameter[218]) * (data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[253] - data->simulationInfo->realParameter[254]) * (data->localData[0]->realVars[108] /* gENROE.id variable */) - data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */) + data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->localData[0]->realVars[108] /* gENROE.id variable */) * (data->simulationInfo->realParameter[252] - data->simulationInfo->realParameter[254]) + (data->localData[0]->realVars[29] /* $cse5 variable */) * (data->localData[0]->realVars[100] /* gENROE.PSIppd variable */);
  TRACE_POP
}
/*
equation index: 864
type: SIMPLE_ASSIGN
eXAC2_1._rectifierCommutationVoltageDrop._division._u1 = eXAC2_1.rectifierCommutationVoltageDrop.gain2.k * eXAC2_1.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_864(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,864};
  data->localData[0]->realVars[77] /* eXAC2_1.rectifierCommutationVoltageDrop.division.u1 variable */ = (data->simulationInfo->realParameter[158]) * (data->localData[0]->realVars[64] /* eXAC2_1.XADIFD variable */);
  TRACE_POP
}
/*
equation index: 865
type: SIMPLE_ASSIGN
eXAC2_1._rectifierCommutationVoltageDrop._division._y = eXAC2_1.rectifierCommutationVoltageDrop.division.u1 / eXAC2_1.rotatingExciterWithDemagnetizationLimited.sISO.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_865(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,865};
  data->localData[0]->realVars[78] /* eXAC2_1.rectifierCommutationVoltageDrop.division.y variable */ = DIVISION_SIM(data->localData[0]->realVars[77] /* eXAC2_1.rectifierCommutationVoltageDrop.division.u1 variable */,data->localData[0]->realVars[4] /* eXAC2_1.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */,"eXAC2_1.rotatingExciterWithDemagnetizationLimited.sISO.y",equationIndexes);
  TRACE_POP
}
/*
equation index: 866
type: SIMPLE_ASSIGN
eXAC2_1._rectifierCommutationVoltageDrop._fEX._y = if eXAC2_1.rectifierCommutationVoltageDrop.division.y <= 0.0 then 1.0 else if eXAC2_1.rectifierCommutationVoltageDrop.division.y > 0.0 and eXAC2_1.rectifierCommutationVoltageDrop.division.y <= 0.433 then 1.0 + (-0.577) * eXAC2_1.rectifierCommutationVoltageDrop.division.y else if eXAC2_1.rectifierCommutationVoltageDrop.division.y > 0.433 and eXAC2_1.rectifierCommutationVoltageDrop.division.y < 0.75 then sqrt(0.75 - eXAC2_1.rectifierCommutationVoltageDrop.division.y ^ 2.0) else if eXAC2_1.rectifierCommutationVoltageDrop.division.y >= 0.75 and eXAC2_1.rectifierCommutationVoltageDrop.division.y <= 1.0 then 1.732 * (1.0 - eXAC2_1.rectifierCommutationVoltageDrop.division.y) else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_866(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,866};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_boolean tmp7;
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  modelica_boolean tmp11;
  modelica_real tmp12;
  modelica_boolean tmp13;
  modelica_real tmp14;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[78] /* eXAC2_1.rectifierCommutationVoltageDrop.division.y variable */, 0.0, 14, LessEq);
  tmp13 = (modelica_boolean)tmp0;
  if(tmp13)
  {
    tmp14 = 1.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp1, data->localData[0]->realVars[78] /* eXAC2_1.rectifierCommutationVoltageDrop.division.y variable */, 0.0, 15, Greater);
    RELATIONHYSTERESIS(tmp2, data->localData[0]->realVars[78] /* eXAC2_1.rectifierCommutationVoltageDrop.division.y variable */, 0.433, 16, LessEq);
    tmp11 = (modelica_boolean)(tmp1 && tmp2);
    if(tmp11)
    {
      tmp12 = 1.0 + (-0.577) * (data->localData[0]->realVars[78] /* eXAC2_1.rectifierCommutationVoltageDrop.division.y variable */);
    }
    else
    {
      RELATIONHYSTERESIS(tmp3, data->localData[0]->realVars[78] /* eXAC2_1.rectifierCommutationVoltageDrop.division.y variable */, 0.433, 17, Greater);
      RELATIONHYSTERESIS(tmp4, data->localData[0]->realVars[78] /* eXAC2_1.rectifierCommutationVoltageDrop.division.y variable */, 0.75, 18, Less);
      tmp9 = (modelica_boolean)(tmp3 && tmp4);
      if(tmp9)
      {
        tmp5 = data->localData[0]->realVars[78] /* eXAC2_1.rectifierCommutationVoltageDrop.division.y variable */;
        tmp6 = 0.75 - ((tmp5 * tmp5));
        if(!(tmp6 >= 0.0))
        {
          FILE_INFO info = {"",0,0,0,0,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(0.75 - eXAC2_1.rectifierCommutationVoltageDrop.division.y ^ 2.0) was %g should be >= 0", tmp6);
        }
        tmp10 = sqrt(tmp6);
      }
      else
      {
        RELATIONHYSTERESIS(tmp7, data->localData[0]->realVars[78] /* eXAC2_1.rectifierCommutationVoltageDrop.division.y variable */, 0.75, 19, GreaterEq);
        RELATIONHYSTERESIS(tmp8, data->localData[0]->realVars[78] /* eXAC2_1.rectifierCommutationVoltageDrop.division.y variable */, 1.0, 20, LessEq);
        tmp10 = ((tmp7 && tmp8)?(1.732) * (1.0 - data->localData[0]->realVars[78] /* eXAC2_1.rectifierCommutationVoltageDrop.division.y variable */):0.0);
      }
      tmp12 = tmp10;
    }
    tmp14 = tmp12;
  }
  data->localData[0]->realVars[79] /* eXAC2_1.rectifierCommutationVoltageDrop.fEX.y variable */ = tmp14;
  TRACE_POP
}
/*
equation index: 867
type: SIMPLE_ASSIGN
eXAC2_1._EFD = eXAC2_1.rotatingExciterWithDemagnetizationLimited.sISO.y * eXAC2_1.rectifierCommutationVoltageDrop.fEX.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_867(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,867};
  data->localData[0]->realVars[62] /* eXAC2_1.EFD variable */ = (data->localData[0]->realVars[4] /* eXAC2_1.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */) * (data->localData[0]->realVars[79] /* eXAC2_1.rectifierCommutationVoltageDrop.fEX.y variable */);
  TRACE_POP
}
/*
equation index: 868
type: SIMPLE_ASSIGN
der(gENROE._Epq) = (eXAC2_1.EFD - eXAC2_1.XADIFD) / gENROE.Tpd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_868(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,868};
  data->localData[0]->realVars[21] /* der(gENROE.Epq) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[62] /* eXAC2_1.EFD variable */ - data->localData[0]->realVars[64] /* eXAC2_1.XADIFD variable */,data->simulationInfo->realParameter[245],"gENROE.Tpd0",equationIndexes);
  TRACE_POP
}
/*
equation index: 869
type: SIMPLE_ASSIGN
eXAC2_1._add3._u1 = eXAC2_1.rotatingExciterWithDemagnetizationLimited.Sum.k1 * eXAC2_1.rotatingExciterWithDemagnetizationLimited.Sum.u1 + eXAC2_1.rotatingExciterWithDemagnetizationLimited.Sum.k2 * eXAC2_1.rotatingExciterWithDemagnetizationLimited.Sum.u2 + eXAC2_1.rotatingExciterWithDemagnetizationLimited.Sum.k3 * eXAC2_1.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_869(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,869};
  data->localData[0]->realVars[65] /* eXAC2_1.add3.u1 variable */ = (data->simulationInfo->realParameter[166]) * (data->localData[0]->realVars[80] /* eXAC2_1.rotatingExciterWithDemagnetizationLimited.Sum.u1 variable */) + (data->simulationInfo->realParameter[167]) * (data->localData[0]->realVars[81] /* eXAC2_1.rotatingExciterWithDemagnetizationLimited.Sum.u2 variable */) + (data->simulationInfo->realParameter[168]) * (data->localData[0]->realVars[64] /* eXAC2_1.XADIFD variable */);
  TRACE_POP
}
/*
equation index: 870
type: SIMPLE_ASSIGN
der(eXAC2_1._imDerivativeLag._x) = (eXAC2_1.add3.u1 - eXAC2_1.imDerivativeLag.x) / eXAC2_1.imDerivativeLag.T
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_870(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,870};
  data->localData[0]->realVars[14] /* der(eXAC2_1.imDerivativeLag.x) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[65] /* eXAC2_1.add3.u1 variable */ - data->localData[0]->realVars[1] /* eXAC2_1.imDerivativeLag.x STATE(1) */,data->simulationInfo->realParameter[129],"eXAC2_1.imDerivativeLag.T",equationIndexes);
  TRACE_POP
}
/*
equation index: 871
type: SIMPLE_ASSIGN
eXAC2_1._imDerivativeLag._y = 0.03 * (eXAC2_1.add3.u1 - eXAC2_1.imDerivativeLag.x) / eXAC2_1.imDerivativeLag.T
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_871(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,871};
  data->localData[0]->realVars[72] /* eXAC2_1.imDerivativeLag.y variable */ = (0.03) * (DIVISION_SIM(data->localData[0]->realVars[65] /* eXAC2_1.add3.u1 variable */ - data->localData[0]->realVars[1] /* eXAC2_1.imDerivativeLag.x STATE(1) */,data->simulationInfo->realParameter[129],"eXAC2_1.imDerivativeLag.T",equationIndexes));
  TRACE_POP
}
/*
equation index: 872
type: SIMPLE_ASSIGN
eXAC2_1._DiffV1._u2 = eXAC2_1.gain.k * eXAC2_1.add3.u1
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_872(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,872};
  data->localData[0]->realVars[59] /* eXAC2_1.DiffV1.u2 variable */ = (data->simulationInfo->realParameter[126]) * (data->localData[0]->realVars[65] /* eXAC2_1.add3.u1 variable */);
  TRACE_POP
}
/*
equation index: 873
type: SIMPLE_ASSIGN
eXAC2_1._add3._y = eXAC2_1.add3.k1 * eXAC2_1.add3.u1 + eXAC2_1.add3.k2 * eXAC2_1.Vref1.k
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_873(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,873};
  data->localData[0]->realVars[66] /* eXAC2_1.add3.y variable */ = (data->simulationInfo->realParameter[118]) * (data->localData[0]->realVars[65] /* eXAC2_1.add3.u1 variable */) + (data->simulationInfo->realParameter[119]) * (data->simulationInfo->realParameter[117]);
  TRACE_POP
}
/*
equation index: 874
type: SIMPLE_ASSIGN
eXAC2_1._gain3._y = eXAC2_1.gain3.k * eXAC2_1.add3.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_874(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,874};
  data->localData[0]->realVars[71] /* eXAC2_1.gain3.y variable */ = (data->simulationInfo->realParameter[128]) * (data->localData[0]->realVars[66] /* eXAC2_1.add3.y variable */);
  TRACE_POP
}
/*
equation index: 875
type: SIMPLE_ASSIGN
eXAC2_1._ECOMP = sqrt(pwLine.vs.re ^ 2.0 + pwLine.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_875(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,875};
  modelica_real tmp15;
  modelica_real tmp16;
  tmp15 = data->localData[0]->realVars[123] /* pwLine.vs.re variable */;
  tmp16 = data->localData[0]->realVars[122] /* pwLine.vs.im variable */;
  data->localData[0]->realVars[61] /* eXAC2_1.ECOMP variable */ = sqrt((tmp15 * tmp15) + (tmp16 * tmp16));
  TRACE_POP
}
/*
equation index: 876
type: SIMPLE_ASSIGN
der(eXAC2_1._TransducerDelay._state) = (eXAC2_1.TransducerDelay.K * eXAC2_1.ECOMP - eXAC2_1.TransducerDelay.state) / eXAC2_1.TransducerDelay.T_mod
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_876(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,876};
  data->localData[0]->realVars[13] /* der(eXAC2_1.TransducerDelay.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[102]) * (data->localData[0]->realVars[61] /* eXAC2_1.ECOMP variable */) - data->localData[0]->realVars[0] /* eXAC2_1.TransducerDelay.state STATE(1) */,data->simulationInfo->realParameter[104],"eXAC2_1.TransducerDelay.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 877
type: SIMPLE_ASSIGN
eXAC2_1._DiffV._u2 = if abs(eXAC2_1.TransducerDelay.T) <= 1e-15 then eXAC2_1.ECOMP * eXAC2_1.TransducerDelay.K else eXAC2_1.TransducerDelay.state
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_877(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,877};
  modelica_boolean tmp17;
  tmp17 = LessEq(fabs(data->simulationInfo->realParameter[103]),1e-15);
  data->localData[0]->realVars[56] /* eXAC2_1.DiffV.u2 variable */ = (tmp17?(data->localData[0]->realVars[61] /* eXAC2_1.ECOMP variable */) * (data->simulationInfo->realParameter[102]):data->localData[0]->realVars[0] /* eXAC2_1.TransducerDelay.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 878
type: SIMPLE_ASSIGN
eXAC2_1._DiffV._y = eXAC2_1.DiffV.k1 * eXAC2_1.VoltageReference.k + eXAC2_1.DiffV.k2 * eXAC2_1.DiffV.u2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_878(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,878};
  data->localData[0]->realVars[57] /* eXAC2_1.DiffV.y variable */ = (data->simulationInfo->realParameter[77]) * (data->simulationInfo->realParameter[116]) + (data->simulationInfo->realParameter[78]) * (data->localData[0]->realVars[56] /* eXAC2_1.DiffV.u2 variable */);
  TRACE_POP
}
/*
equation index: 879
type: SIMPLE_ASSIGN
eXAC2_1._add3_1._y = eXAC2_1.add3_1.k1 * eXAC2_1.add3_1.u1 + eXAC2_1.add3_1.k2 * eXAC2_1.DiffV.y + eXAC2_1.add3_1.k3 * eXAC2_1.imDerivativeLag.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_879(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,879};
  data->localData[0]->realVars[68] /* eXAC2_1.add3_1.y variable */ = (data->simulationInfo->realParameter[120]) * (data->localData[0]->realVars[67] /* eXAC2_1.add3_1.u1 variable */) + (data->simulationInfo->realParameter[121]) * (data->localData[0]->realVars[57] /* eXAC2_1.DiffV.y variable */) + (data->simulationInfo->realParameter[122]) * (data->localData[0]->realVars[72] /* eXAC2_1.imDerivativeLag.y variable */);
  TRACE_POP
}
/*
equation index: 880
type: SIMPLE_ASSIGN
der(eXAC2_1._leadLag._TF._x_scaled[1]) = (eXAC2_1.leadLag.TF.a_end * eXAC2_1.add3_1.y - eXAC2_1.leadLag.TF.a[2] * eXAC2_1.leadLag.TF.x_scaled[1]) / eXAC2_1.leadLag.TF.a[1]
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_880(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,880};
  data->localData[0]->realVars[16] /* der(eXAC2_1.leadLag.TF.x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[145]) * (data->localData[0]->realVars[68] /* eXAC2_1.add3_1.y variable */) - ((data->simulationInfo->realParameter[144]) * (data->localData[0]->realVars[3] /* eXAC2_1.leadLag.TF.x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[143],"eXAC2_1.leadLag.TF.a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 881
type: SIMPLE_ASSIGN
eXAC2_1._leadLag._TF._y = (eXAC2_1.leadLag.TF.bb[2] - eXAC2_1.leadLag.TF.a[2] * eXAC2_1.leadLag.TF.d) * eXAC2_1.leadLag.TF.x[1] + eXAC2_1.leadLag.TF.d * eXAC2_1.add3_1.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_881(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,881};
  data->localData[0]->realVars[75] /* eXAC2_1.leadLag.TF.y variable */ = (data->simulationInfo->realParameter[149] - ((data->simulationInfo->realParameter[144]) * (data->simulationInfo->realParameter[150]))) * (data->localData[0]->realVars[74] /* eXAC2_1.leadLag.TF.x[1] variable */) + (data->simulationInfo->realParameter[150]) * (data->localData[0]->realVars[68] /* eXAC2_1.add3_1.y variable */);
  TRACE_POP
}
/*
equation index: 882
type: SIMPLE_ASSIGN
eXAC2_1._imLimitedSimpleLag._u = if abs(eXAC2_1.leadLag.T1 - eXAC2_1.leadLag.T2) < 1e-15 then eXAC2_1.leadLag.K * eXAC2_1.add3_1.y else eXAC2_1.leadLag.TF.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_882(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,882};
  modelica_boolean tmp18;
  tmp18 = Less(fabs(data->simulationInfo->realParameter[140] - data->simulationInfo->realParameter[141]),1e-15);
  data->localData[0]->realVars[73] /* eXAC2_1.imLimitedSimpleLag.u variable */ = (tmp18?(data->simulationInfo->realParameter[139]) * (data->localData[0]->realVars[68] /* eXAC2_1.add3_1.y variable */):data->localData[0]->realVars[75] /* eXAC2_1.leadLag.TF.y variable */);
  TRACE_POP
}
/*
equation index: 883
type: SIMPLE_ASSIGN
der(eXAC2_1._imLimitedSimpleLag._state) = (eXAC2_1.imLimitedSimpleLag.K * eXAC2_1.imLimitedSimpleLag.u - eXAC2_1.imLimitedSimpleLag.state) / eXAC2_1.imLimitedSimpleLag.T_mod
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_883(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,883};
  data->localData[0]->realVars[15] /* der(eXAC2_1.imLimitedSimpleLag.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[133]) * (data->localData[0]->realVars[73] /* eXAC2_1.imLimitedSimpleLag.u variable */) - data->localData[0]->realVars[2] /* eXAC2_1.imLimitedSimpleLag.state STATE(1) */,data->simulationInfo->realParameter[135],"eXAC2_1.imLimitedSimpleLag.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 884
type: SIMPLE_ASSIGN
eXAC2_1._DiffV1._u1 = if abs(eXAC2_1.imLimitedSimpleLag.T) <= 1e-15 then max(min(eXAC2_1.imLimitedSimpleLag.u * eXAC2_1.imLimitedSimpleLag.K, eXAC2_1.imLimitedSimpleLag.outMax), eXAC2_1.imLimitedSimpleLag.outMin) else max(min(eXAC2_1.imLimitedSimpleLag.state, eXAC2_1.imLimitedSimpleLag.outMax), eXAC2_1.imLimitedSimpleLag.outMin)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_884(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,884};
  modelica_boolean tmp19;
  tmp19 = LessEq(fabs(data->simulationInfo->realParameter[134]),1e-15);
  data->localData[0]->realVars[58] /* eXAC2_1.DiffV1.u1 variable */ = (tmp19?fmax(fmin((data->localData[0]->realVars[73] /* eXAC2_1.imLimitedSimpleLag.u variable */) * (data->simulationInfo->realParameter[133]),data->simulationInfo->realParameter[136]),data->simulationInfo->realParameter[137]):fmax(fmin(data->localData[0]->realVars[2] /* eXAC2_1.imLimitedSimpleLag.state STATE(1) */,data->simulationInfo->realParameter[136]),data->simulationInfo->realParameter[137]));
  TRACE_POP
}
/*
equation index: 885
type: SIMPLE_ASSIGN
eXAC2_1._DiffV1._y = eXAC2_1.DiffV1.k1 * eXAC2_1.DiffV1.u1 + eXAC2_1.DiffV1.k2 * eXAC2_1.DiffV1.u2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_885(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,885};
  data->localData[0]->realVars[60] /* eXAC2_1.DiffV1.y variable */ = (data->simulationInfo->realParameter[79]) * (data->localData[0]->realVars[58] /* eXAC2_1.DiffV1.u1 variable */) + (data->simulationInfo->realParameter[80]) * (data->localData[0]->realVars[59] /* eXAC2_1.DiffV1.u2 variable */);
  TRACE_POP
}
/*
equation index: 886
type: SIMPLE_ASSIGN
eXAC2_1._gain1._u = if eXAC2_1.DiffV1.y > eXAC2_1.gain3.y then eXAC2_1.gain3.y else eXAC2_1.DiffV1.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_886(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,886};
  modelica_boolean tmp20;
  RELATIONHYSTERESIS(tmp20, data->localData[0]->realVars[60] /* eXAC2_1.DiffV1.y variable */, data->localData[0]->realVars[71] /* eXAC2_1.gain3.y variable */, 21, Greater);
  data->localData[0]->realVars[69] /* eXAC2_1.gain1.u variable */ = (tmp20?data->localData[0]->realVars[71] /* eXAC2_1.gain3.y variable */:data->localData[0]->realVars[60] /* eXAC2_1.DiffV1.y variable */);
  TRACE_POP
}
/*
equation index: 887
type: SIMPLE_ASSIGN
eXAC2_1._gain1._y = eXAC2_1.gain1.k * eXAC2_1.gain1.u
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_887(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,887};
  data->localData[0]->realVars[70] /* eXAC2_1.gain1.y variable */ = (data->simulationInfo->realParameter[127]) * (data->localData[0]->realVars[69] /* eXAC2_1.gain1.u variable */);
  TRACE_POP
}
/*
equation index: 888
type: SIMPLE_ASSIGN
eXAC2_1._limiter._y = smooth(0, if eXAC2_1.gain1.y > eXAC2_1.limiter.uMax then eXAC2_1.limiter.uMax else if eXAC2_1.gain1.y < eXAC2_1.limiter.uMin then eXAC2_1.limiter.uMin else eXAC2_1.gain1.y)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_888(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,888};
  modelica_boolean tmp21;
  modelica_boolean tmp22;
  modelica_boolean tmp23;
  modelica_real tmp24;
  tmp21 = Greater(data->localData[0]->realVars[70] /* eXAC2_1.gain1.y variable */,data->simulationInfo->realParameter[155]);
  tmp23 = (modelica_boolean)tmp21;
  if(tmp23)
  {
    tmp24 = data->simulationInfo->realParameter[155];
  }
  else
  {
    tmp22 = Less(data->localData[0]->realVars[70] /* eXAC2_1.gain1.y variable */,data->simulationInfo->realParameter[156]);
    tmp24 = (tmp22?data->simulationInfo->realParameter[156]:data->localData[0]->realVars[70] /* eXAC2_1.gain1.y variable */);
  }
  data->localData[0]->realVars[76] /* eXAC2_1.limiter.y variable */ = tmp24;
  TRACE_POP
}
/*
equation index: 889
type: SIMPLE_ASSIGN
eXAC2_1._rotatingExciterWithDemagnetizationLimited._feedback._y = eXAC2_1.limiter.y - eXAC2_1.add3.u1
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_889(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,889};
  data->localData[0]->realVars[83] /* eXAC2_1.rotatingExciterWithDemagnetizationLimited.feedback.y variable */ = data->localData[0]->realVars[76] /* eXAC2_1.limiter.y variable */ - data->localData[0]->realVars[65] /* eXAC2_1.add3.u1 variable */;
  TRACE_POP
}
/*
equation index: 890
type: SIMPLE_ASSIGN
der(eXAC2_1._rotatingExciterWithDemagnetizationLimited._sISO._y) = if eXAC2_1.rotatingExciterWithDemagnetizationLimited.sISO.y < eXAC2_1.rotatingExciterWithDemagnetizationLimited.sISO.outMin and eXAC2_1.rotatingExciterWithDemagnetizationLimited.sISO.k * eXAC2_1.rotatingExciterWithDemagnetizationLimited.feedback.y < 0.0 or eXAC2_1.rotatingExciterWithDemagnetizationLimited.sISO.y > eXAC2_1.rotatingExciterWithDemagnetizationLimited.sISO.outMax and eXAC2_1.rotatingExciterWithDemagnetizationLimited.sISO.k * eXAC2_1.rotatingExciterWithDemagnetizationLimited.feedback.y > 0.0 then 0.0 else eXAC2_1.rotatingExciterWithDemagnetizationLimited.sISO.k * eXAC2_1.rotatingExciterWithDemagnetizationLimited.feedback.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_890(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,890};
  modelica_boolean tmp25;
  modelica_boolean tmp26;
  modelica_boolean tmp27;
  modelica_boolean tmp28;
  RELATIONHYSTERESIS(tmp25, data->localData[0]->realVars[4] /* eXAC2_1.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */, data->simulationInfo->realParameter[173], 22, Less);
  RELATIONHYSTERESIS(tmp26, (data->simulationInfo->realParameter[171]) * (data->localData[0]->realVars[83] /* eXAC2_1.rotatingExciterWithDemagnetizationLimited.feedback.y variable */), 0.0, 23, Less);
  RELATIONHYSTERESIS(tmp27, data->localData[0]->realVars[4] /* eXAC2_1.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */, data->simulationInfo->realParameter[172], 24, Greater);
  RELATIONHYSTERESIS(tmp28, (data->simulationInfo->realParameter[171]) * (data->localData[0]->realVars[83] /* eXAC2_1.rotatingExciterWithDemagnetizationLimited.feedback.y variable */), 0.0, 25, Greater);
  data->localData[0]->realVars[17] /* der(eXAC2_1.rotatingExciterWithDemagnetizationLimited.sISO.y) STATE_DER */ = (((tmp25 && tmp26) || (tmp27 && tmp28))?0.0:(data->simulationInfo->realParameter[171]) * (data->localData[0]->realVars[83] /* eXAC2_1.rotatingExciterWithDemagnetizationLimited.feedback.y variable */));
  TRACE_POP
}
/*
equation index: 891
type: SIMPLE_ASSIGN
$whenCondition2 = eXAC2_1.imLimitedSimpleLag.state > eXAC2_1.imLimitedSimpleLag.outMax and eXAC2_1.imLimitedSimpleLag.K * eXAC2_1.imLimitedSimpleLag.u - eXAC2_1.imLimitedSimpleLag.state < 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_891(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,891};
  modelica_boolean tmp29;
  modelica_boolean tmp30;
  RELATIONHYSTERESIS(tmp29, data->localData[0]->realVars[2] /* eXAC2_1.imLimitedSimpleLag.state STATE(1) */, data->simulationInfo->realParameter[136], 26, Greater);
  RELATIONHYSTERESIS(tmp30, (data->simulationInfo->realParameter[133]) * (data->localData[0]->realVars[73] /* eXAC2_1.imLimitedSimpleLag.u variable */) - data->localData[0]->realVars[2] /* eXAC2_1.imLimitedSimpleLag.state STATE(1) */, 0.0, 27, Less);
  data->localData[0]->booleanVars[1] /* $whenCondition2 DISCRETE */ = (tmp29 && tmp30);
  TRACE_POP
}
/*
equation index: 892
type: SIMPLE_ASSIGN
$whenCondition1 = eXAC2_1.imLimitedSimpleLag.state < eXAC2_1.imLimitedSimpleLag.outMin and eXAC2_1.imLimitedSimpleLag.K * eXAC2_1.imLimitedSimpleLag.u - eXAC2_1.imLimitedSimpleLag.state > 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_892(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,892};
  modelica_boolean tmp31;
  modelica_boolean tmp32;
  RELATIONHYSTERESIS(tmp31, data->localData[0]->realVars[2] /* eXAC2_1.imLimitedSimpleLag.state STATE(1) */, data->simulationInfo->realParameter[137], 28, Less);
  RELATIONHYSTERESIS(tmp32, (data->simulationInfo->realParameter[133]) * (data->localData[0]->realVars[73] /* eXAC2_1.imLimitedSimpleLag.u variable */) - data->localData[0]->realVars[2] /* eXAC2_1.imLimitedSimpleLag.state STATE(1) */, 0.0, 29, Greater);
  data->localData[0]->booleanVars[0] /* $whenCondition1 DISCRETE */ = (tmp31 && tmp32);
  TRACE_POP
}
/*
equation index: 893
type: SIMPLE_ASSIGN
GEN1._V = eXAC2_1.ECOMP
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_893(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,893};
  data->localData[0]->realVars[36] /* GEN1.V variable */ = data->localData[0]->realVars[61] /* eXAC2_1.ECOMP variable */;
  TRACE_POP
}
/*
equation index: 894
type: SIMPLE_ASSIGN
gENROE._anglev = atan2(pwLine.vs.im, pwLine.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_894(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,894};
  data->localData[0]->realVars[107] /* gENROE.anglev variable */ = atan2(data->localData[0]->realVars[122] /* pwLine.vs.im variable */, data->localData[0]->realVars[123] /* pwLine.vs.re variable */);
  TRACE_POP
}
/*
equation index: 895
type: SIMPLE_ASSIGN
GEN1._angle = 57.29577951308232 * gENROE.anglev
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_895(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,895};
  data->localData[0]->realVars[37] /* GEN1.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[107] /* gENROE.anglev variable */);
  TRACE_POP
}
/*
equation index: 896
type: SIMPLE_ASSIGN
der(gENROE._PSIkq) = (gENROE.Epd + (gENROE.Xpq - gENROE.Xl) * gENROE.iq - gENROE.PSIkq) / gENROE.Tppq0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_896(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,896};
  data->localData[0]->realVars[23] /* der(gENROE.PSIkq) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[258] - data->simulationInfo->realParameter[253]) * (data->localData[0]->realVars[109] /* gENROE.iq variable */) - data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */,data->simulationInfo->realParameter[247],"gENROE.Tppq0",equationIndexes);
  TRACE_POP
}
/*
equation index: 897
type: SIMPLE_ASSIGN
gENROE._XaqIlq = gENROE.K1q * (gENROE.Epd + (gENROE.Xpq - gENROE.Xl) * gENROE.iq - gENROE.PSIkq) + gENROE.Epd + gENROE.iq * (gENROE.Xpq - gENROE.Xq) + $cse5 * gENROE.PSIppq * (gENROE.Xq - gENROE.Xl) / (gENROE.Xd - gENROE.Xl)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_897(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,897};
  data->localData[0]->realVars[105] /* gENROE.XaqIlq variable */ = (data->simulationInfo->realParameter[219]) * (data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[258] - data->simulationInfo->realParameter[253]) * (data->localData[0]->realVars[109] /* gENROE.iq variable */) - data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */) + data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->localData[0]->realVars[109] /* gENROE.iq variable */) * (data->simulationInfo->realParameter[258] - data->simulationInfo->realParameter[259]) + (data->localData[0]->realVars[29] /* $cse5 variable */) * ((data->localData[0]->realVars[101] /* gENROE.PSIppq variable */) * (DIVISION_SIM(data->simulationInfo->realParameter[259] - data->simulationInfo->realParameter[253],data->simulationInfo->realParameter[252] - data->simulationInfo->realParameter[253],"gENROE.Xd - gENROE.Xl",equationIndexes)));
  TRACE_POP
}
/*
equation index: 898
type: SIMPLE_ASSIGN
der(gENROE._Epd) = (-gENROE.XaqIlq) / gENROE.Tpq0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_898(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,898};
  data->localData[0]->realVars[20] /* der(gENROE.Epd) STATE_DER */ = DIVISION_SIM((-data->localData[0]->realVars[105] /* gENROE.XaqIlq variable */),data->simulationInfo->realParameter[248],"gENROE.Tpq0",equationIndexes);
  TRACE_POP
}
/*
equation index: 899
type: SIMPLE_ASSIGN
gENROE._Te = gENROE.PSId * gENROE.iq - gENROE.PSIq * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_899(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,899};
  data->localData[0]->realVars[104] /* gENROE.Te variable */ = (data->localData[0]->realVars[98] /* gENROE.PSId variable */) * (data->localData[0]->realVars[109] /* gENROE.iq variable */) - ((data->localData[0]->realVars[102] /* gENROE.PSIq variable */) * (data->localData[0]->realVars[108] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 900
type: SIMPLE_ASSIGN
der(gENROE._w) = 0.5 * ((gENROE.pm0 - gENROE.D * gENROE.w) / (1.0 + gENROE.w) - gENROE.Te) / gENROE.H
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_900(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,900};
  data->localData[0]->realVars[25] /* der(gENROE.w) STATE_DER */ = (0.5) * (DIVISION_SIM(DIVISION_SIM(data->simulationInfo->realParameter[279] - ((data->simulationInfo->realParameter[206]) * (data->localData[0]->realVars[12] /* gENROE.w STATE(1) */)),1.0 + data->localData[0]->realVars[12] /* gENROE.w STATE(1) */,"1.0 + gENROE.w",equationIndexes) - data->localData[0]->realVars[104] /* gENROE.Te variable */,data->simulationInfo->realParameter[211],"gENROE.H",equationIndexes));
  TRACE_POP
}
/*
equation index: 901
type: SIMPLE_ASSIGN
gENROE._P = pwLine.vs.im * pwLine.is.im + pwLine.vs.re * pwLine.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_901(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,901};
  data->localData[0]->realVars[96] /* gENROE.P variable */ = (data->localData[0]->realVars[122] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[120] /* pwLine.is.im variable */) + (data->localData[0]->realVars[123] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[121] /* pwLine.is.re variable */);
  TRACE_POP
}
/*
equation index: 902
type: SIMPLE_ASSIGN
gENROE._PELEC = gENROE.P / gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_902(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,902};
  data->localData[0]->realVars[97] /* gENROE.PELEC variable */ = DIVISION_SIM(data->localData[0]->realVars[96] /* gENROE.P variable */,data->simulationInfo->realParameter[205],"gENROE.CoB",equationIndexes);
  TRACE_POP
}
/*
equation index: 903
type: SIMPLE_ASSIGN
gENROE._Q = pwLine.vs.im * pwLine.is.re - pwLine.vs.re * pwLine.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_903(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,903};
  data->localData[0]->realVars[103] /* gENROE.Q variable */ = (data->localData[0]->realVars[122] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[121] /* pwLine.is.re variable */) - ((data->localData[0]->realVars[123] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[120] /* pwLine.is.im variable */));
  TRACE_POP
}
/*
equation index: 904
type: SIMPLE_ASSIGN
gENROE._I = sqrt(pwLine.is.im ^ 2.0 + pwLine.is.re ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_904(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,904};
  modelica_real tmp33;
  modelica_real tmp34;
  tmp33 = data->localData[0]->realVars[120] /* pwLine.is.im variable */;
  tmp34 = data->localData[0]->realVars[121] /* pwLine.is.re variable */;
  data->localData[0]->realVars[95] /* gENROE.I variable */ = sqrt((tmp33 * tmp33) + (tmp34 * tmp34));
  TRACE_POP
}
/*
equation index: 905
type: SIMPLE_ASSIGN
gENROE._anglei = atan2(-pwLine.is.im, -pwLine.is.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_905(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,905};
  data->localData[0]->realVars[106] /* gENROE.anglei variable */ = atan2((-data->localData[0]->realVars[120] /* pwLine.is.im variable */), (-data->localData[0]->realVars[121] /* pwLine.is.re variable */));
  TRACE_POP
}
/*
equation index: 906
type: SIMPLE_ASSIGN
pwLine._Q12 = (pwLine.vs.im * pwLine.is.re - pwLine.vs.re * pwLine.is.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_906(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,906};
  data->localData[0]->realVars[116] /* pwLine.Q12 variable */ = ((data->localData[0]->realVars[122] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[121] /* pwLine.is.re variable */) - ((data->localData[0]->realVars[123] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[120] /* pwLine.is.im variable */))) * (data->simulationInfo->realParameter[294]);
  TRACE_POP
}
/*
equation index: 907
type: SIMPLE_ASSIGN
pwLine._P12 = (pwLine.vs.re * pwLine.is.re + pwLine.vs.im * pwLine.is.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_907(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,907};
  data->localData[0]->realVars[114] /* pwLine.P12 variable */ = ((data->localData[0]->realVars[123] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[121] /* pwLine.is.re variable */) + (data->localData[0]->realVars[122] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[120] /* pwLine.is.im variable */)) * (data->simulationInfo->realParameter[294]);
  TRACE_POP
}
/*
equation index: 908
type: SIMPLE_ASSIGN
pwLine3._P12 = (pwLine1.vs.re * pwLine3.is.re + pwLine1.vs.im * pwLine3.is.im) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_908(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,908};
  data->localData[0]->realVars[136] /* pwLine3.P12 variable */ = ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[143] /* pwLine3.is.re variable */) + (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[142] /* pwLine3.is.im variable */)) * (data->simulationInfo->realParameter[316]);
  TRACE_POP
}
/*
equation index: 909
type: SIMPLE_ASSIGN
pwLine3._Q12 = (pwLine1.vs.im * pwLine3.is.re - pwLine1.vs.re * pwLine3.is.im) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_909(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,909};
  data->localData[0]->realVars[138] /* pwLine3.Q12 variable */ = ((data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[143] /* pwLine3.is.re variable */) - ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[142] /* pwLine3.is.im variable */))) * (data->simulationInfo->realParameter[316]);
  TRACE_POP
}
/*
equation index: 910
type: SIMPLE_ASSIGN
constantLoad._angle = atan2(pwLine1.vs.im, pwLine1.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_910(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,910};
  data->localData[0]->realVars[50] /* constantLoad.angle variable */ = atan2(data->localData[0]->realVars[134] /* pwLine1.vs.im variable */, data->localData[0]->realVars[135] /* pwLine1.vs.re variable */);
  TRACE_POP
}
/*
equation index: 911
type: SIMPLE_ASSIGN
LOAD._angle = 57.29577951308232 * constantLoad.angle
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_911(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,911};
  data->localData[0]->realVars[45] /* LOAD.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[50] /* constantLoad.angle variable */);
  TRACE_POP
}
/*
equation index: 912
type: SIMPLE_ASSIGN
LOAD._V = constantLoad.v
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_912(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,912};
  data->localData[0]->realVars[44] /* LOAD.V variable */ = data->localData[0]->realVars[55] /* constantLoad.v variable */;
  TRACE_POP
}
/*
equation index: 913
type: SIMPLE_ASSIGN
pwLine._Q21 = (pwLine1.vs.re * pwLine.ir.im - pwLine1.vs.im * pwLine.ir.re) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_913(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,913};
  data->localData[0]->realVars[117] /* pwLine.Q21 variable */ = ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[118] /* pwLine.ir.im variable */) - ((data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[119] /* pwLine.ir.re variable */))) * (data->simulationInfo->realParameter[294]);
  TRACE_POP
}
/*
equation index: 914
type: SIMPLE_ASSIGN
pwLine._P21 = ((-pwLine1.vs.re) * pwLine.ir.re - pwLine1.vs.im * pwLine.ir.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_914(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,914};
  data->localData[0]->realVars[115] /* pwLine.P21 variable */ = (((-data->localData[0]->realVars[135] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[119] /* pwLine.ir.re variable */) - ((data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[118] /* pwLine.ir.im variable */))) * (data->simulationInfo->realParameter[294]);
  TRACE_POP
}
/*
equation index: 915
type: SIMPLE_ASSIGN
pwLine1._P12 = (pwLine1.vs.re * pwLine1.is.re + pwLine1.vs.im * pwLine1.is.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_915(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,915};
  data->localData[0]->realVars[124] /* pwLine1.P12 variable */ = ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[131] /* pwLine1.is.re variable */) + (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[130] /* pwLine1.is.im variable */)) * (data->simulationInfo->realParameter[305]);
  TRACE_POP
}
/*
equation index: 916
type: SIMPLE_ASSIGN
pwLine1._Q12 = (pwLine1.vs.im * pwLine1.is.re - pwLine1.vs.re * pwLine1.is.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_916(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,916};
  data->localData[0]->realVars[126] /* pwLine1.Q12 variable */ = ((data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[131] /* pwLine1.is.re variable */) - ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[130] /* pwLine1.is.im variable */))) * (data->simulationInfo->realParameter[305]);
  TRACE_POP
}
/*
equation index: 917
type: SIMPLE_ASSIGN
pwLine3._P21 = ((-pwLine3.vr.re) * pwLine3.ir.re - pwLine3.vr.im * pwLine3.ir.im) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_917(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,917};
  data->localData[0]->realVars[137] /* pwLine3.P21 variable */ = (((-data->localData[0]->realVars[145] /* pwLine3.vr.re variable */)) * (data->localData[0]->realVars[141] /* pwLine3.ir.re variable */) - ((data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[140] /* pwLine3.ir.im variable */))) * (data->simulationInfo->realParameter[316]);
  TRACE_POP
}
/*
equation index: 918
type: SIMPLE_ASSIGN
pwLine3._Q21 = (pwLine3.vr.re * pwLine3.ir.im - pwLine3.vr.im * pwLine3.ir.re) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_918(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,918};
  data->localData[0]->realVars[139] /* pwLine3.Q21 variable */ = ((data->localData[0]->realVars[145] /* pwLine3.vr.re variable */) * (data->localData[0]->realVars[140] /* pwLine3.ir.im variable */) - ((data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[141] /* pwLine3.ir.re variable */))) * (data->simulationInfo->realParameter[316]);
  TRACE_POP
}
/*
equation index: 919
type: SIMPLE_ASSIGN
pwLine4._P12 = (pwLine3.vr.re * pwLine4.is.re + pwLine3.vr.im * pwLine4.is.im) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_919(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,919};
  data->localData[0]->realVars[146] /* pwLine4.P12 variable */ = ((data->localData[0]->realVars[145] /* pwLine3.vr.re variable */) * (data->localData[0]->realVars[153] /* pwLine4.is.re variable */) + (data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[152] /* pwLine4.is.im variable */)) * (data->simulationInfo->realParameter[327]);
  TRACE_POP
}
/*
equation index: 920
type: SIMPLE_ASSIGN
pwLine4._Q12 = (pwLine3.vr.im * pwLine4.is.re - pwLine3.vr.re * pwLine4.is.im) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_920(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,920};
  data->localData[0]->realVars[148] /* pwLine4.Q12 variable */ = ((data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[153] /* pwLine4.is.re variable */) - ((data->localData[0]->realVars[145] /* pwLine3.vr.re variable */) * (data->localData[0]->realVars[152] /* pwLine4.is.im variable */))) * (data->simulationInfo->realParameter[327]);
  TRACE_POP
}
/*
equation index: 921
type: SIMPLE_ASSIGN
FAULT._V = sqrt(pwLine3.vr.re ^ 2.0 + pwLine3.vr.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_921(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,921};
  modelica_real tmp35;
  modelica_real tmp36;
  tmp35 = data->localData[0]->realVars[145] /* pwLine3.vr.re variable */;
  tmp36 = data->localData[0]->realVars[144] /* pwLine3.vr.im variable */;
  data->localData[0]->realVars[32] /* FAULT.V variable */ = sqrt((tmp35 * tmp35) + (tmp36 * tmp36));
  TRACE_POP
}
/*
equation index: 922
type: SIMPLE_ASSIGN
$cse4 = atan2(pwLine3.vr.im, pwLine3.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_922(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,922};
  data->localData[0]->realVars[28] /* $cse4 variable */ = atan2(data->localData[0]->realVars[144] /* pwLine3.vr.im variable */, data->localData[0]->realVars[145] /* pwLine3.vr.re variable */);
  TRACE_POP
}
/*
equation index: 923
type: SIMPLE_ASSIGN
FAULT._angle = 57.29577951308232 * $cse4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_923(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,923};
  data->localData[0]->realVars[33] /* FAULT.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[28] /* $cse4 variable */);
  TRACE_POP
}
/*
equation index: 924
type: SIMPLE_ASSIGN
pwLine1._P21 = ((-pwLine1.vr.re) * pwLine1.ir.re - pwLine1.vr.im * pwLine1.ir.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_924(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,924};
  data->localData[0]->realVars[125] /* pwLine1.P21 variable */ = (((-data->localData[0]->realVars[133] /* pwLine1.vr.re variable */)) * (data->localData[0]->realVars[129] /* pwLine1.ir.re variable */) - ((data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[128] /* pwLine1.ir.im variable */))) * (data->simulationInfo->realParameter[305]);
  TRACE_POP
}
/*
equation index: 925
type: SIMPLE_ASSIGN
pwLine1._Q21 = (pwLine1.vr.re * pwLine1.ir.im - pwLine1.vr.im * pwLine1.ir.re) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_925(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,925};
  data->localData[0]->realVars[127] /* pwLine1.Q21 variable */ = ((data->localData[0]->realVars[133] /* pwLine1.vr.re variable */) * (data->localData[0]->realVars[128] /* pwLine1.ir.im variable */) - ((data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[129] /* pwLine1.ir.re variable */))) * (data->simulationInfo->realParameter[305]);
  TRACE_POP
}
/*
equation index: 926
type: SIMPLE_ASSIGN
pwLine4._P21 = ((-pwLine1.vr.re) * pwLine4.ir.re - pwLine1.vr.im * pwLine4.ir.im) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_926(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,926};
  data->localData[0]->realVars[147] /* pwLine4.P21 variable */ = (((-data->localData[0]->realVars[133] /* pwLine1.vr.re variable */)) * (data->localData[0]->realVars[151] /* pwLine4.ir.re variable */) - ((data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[150] /* pwLine4.ir.im variable */))) * (data->simulationInfo->realParameter[327]);
  TRACE_POP
}
/*
equation index: 927
type: SIMPLE_ASSIGN
pwLine4._Q21 = (pwLine1.vr.re * pwLine4.ir.im - pwLine1.vr.im * pwLine4.ir.re) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_927(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,927};
  data->localData[0]->realVars[149] /* pwLine4.Q21 variable */ = ((data->localData[0]->realVars[133] /* pwLine1.vr.re variable */) * (data->localData[0]->realVars[150] /* pwLine4.ir.im variable */) - ((data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[151] /* pwLine4.ir.re variable */))) * (data->simulationInfo->realParameter[327]);
  TRACE_POP
}
/*
equation index: 928
type: SIMPLE_ASSIGN
gENCLS._P = (-pwLine1.vr.re) * gENCLS.p.ir - pwLine1.vr.im * gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_928(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,928};
  data->localData[0]->realVars[84] /* gENCLS.P variable */ = ((-data->localData[0]->realVars[133] /* pwLine1.vr.re variable */)) * (data->localData[0]->realVars[92] /* gENCLS.p.ir variable */) - ((data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[91] /* gENCLS.p.ii variable */));
  TRACE_POP
}
/*
equation index: 929
type: SIMPLE_ASSIGN
gENCLS._Q = pwLine1.vr.re * gENCLS.p.ii - pwLine1.vr.im * gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_929(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,929};
  data->localData[0]->realVars[85] /* gENCLS.Q variable */ = (data->localData[0]->realVars[133] /* pwLine1.vr.re variable */) * (data->localData[0]->realVars[91] /* gENCLS.p.ii variable */) - ((data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[92] /* gENCLS.p.ir variable */));
  TRACE_POP
}
/*
equation index: 930
type: SIMPLE_ASSIGN
GEN2._V = sqrt(pwLine1.vr.re ^ 2.0 + pwLine1.vr.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_930(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,930};
  modelica_real tmp37;
  modelica_real tmp38;
  tmp37 = data->localData[0]->realVars[133] /* pwLine1.vr.re variable */;
  tmp38 = data->localData[0]->realVars[132] /* pwLine1.vr.im variable */;
  data->localData[0]->realVars[40] /* GEN2.V variable */ = sqrt((tmp37 * tmp37) + (tmp38 * tmp38));
  TRACE_POP
}
/*
equation index: 931
type: SIMPLE_ASSIGN
gENCLS._V = GEN2.V
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_931(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,931};
  data->localData[0]->realVars[86] /* gENCLS.V variable */ = data->localData[0]->realVars[40] /* GEN2.V variable */;
  TRACE_POP
}
/*
equation index: 932
type: SIMPLE_ASSIGN
gENCLS._anglev = atan2(pwLine1.vr.im, pwLine1.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_932(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,932};
  data->localData[0]->realVars[87] /* gENCLS.anglev variable */ = atan2(data->localData[0]->realVars[132] /* pwLine1.vr.im variable */, data->localData[0]->realVars[133] /* pwLine1.vr.re variable */);
  TRACE_POP
}
/*
equation index: 933
type: SIMPLE_ASSIGN
GEN2._angle = 57.29577951308232 * gENCLS.anglev
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_933(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,933};
  data->localData[0]->realVars[41] /* GEN2.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[87] /* gENCLS.anglev variable */);
  TRACE_POP
}
/*
equation index: 936
type: ALGORITHM

  assert(eXAC2_1.limiter.uMax >= eXAC2_1.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(eXAC2_1.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(eXAC2_1.limiter.uMin, 6, 0, true) + ")");
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_936(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,936};
  modelica_boolean tmp39;
  static const MMC_DEFSTRINGLIT(tmp40,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp41;
  static const MMC_DEFSTRINGLIT(tmp42,11,") < uMin (=");
  modelica_string tmp43;
  static int tmp44 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp39 = GreaterEq(data->simulationInfo->realParameter[155],data->simulationInfo->realParameter[156]);
    if(!tmp39)
    {
      tmp41 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[155], ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp40),tmp41);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp42));
      tmp43 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[156], ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp43);
      tmpMeta[3] = stringAppend(tmpMeta[2],(modelica_string) mmc_strings_len1[41]);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Nonlinear.mo",19,9,20,65,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neXAC2_1.limiter.uMax >= eXAC2_1.limiter.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta[3]));
      }
    }
  }
  TRACE_POP
}
/*
equation index: 934
type: WHEN

when {$whenCondition2} then
  reinit(eXAC2_1._imLimitedSimpleLag._state,  eXAC2_1.imLimitedSimpleLag.outMax);
end when;
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_934(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,934};
  if((data->localData[0]->booleanVars[1] /* $whenCondition2 DISCRETE */ && !data->simulationInfo->booleanVarsPre[1] /* $whenCondition2 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[2] /* eXAC2_1.imLimitedSimpleLag.state STATE(1) */ = data->simulationInfo->realParameter[136];
    infoStreamPrint(LOG_EVENTS, 0, "reinit eXAC2_1.imLimitedSimpleLag.state = %g", data->localData[0]->realVars[2] /* eXAC2_1.imLimitedSimpleLag.state STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  else if((data->localData[0]->booleanVars[0] /* $whenCondition1 DISCRETE */ && !data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[2] /* eXAC2_1.imLimitedSimpleLag.state STATE(1) */ = data->simulationInfo->realParameter[137];
    infoStreamPrint(LOG_EVENTS, 0, "reinit eXAC2_1.imLimitedSimpleLag.state = %g", data->localData[0]->realVars[2] /* eXAC2_1.imLimitedSimpleLag.state STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
  
  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_functionLocalKnownVars(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_755(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_756(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_757(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_758(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_759(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_760(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_761(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_762(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_763(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_764(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_765(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_766(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_767(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_768(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_769(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_770(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_861(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_862(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_863(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_864(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_865(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_866(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_867(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_868(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_869(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_870(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_871(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_872(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_873(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_874(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_875(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_876(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_877(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_878(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_879(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_880(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_881(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_882(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_883(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_884(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_885(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_886(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_887(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_888(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_889(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_890(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_891(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_892(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_893(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_894(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_895(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_896(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_897(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_898(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_899(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_900(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_901(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_902(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_903(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_904(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_905(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_906(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_907(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_908(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_909(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_910(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_911(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_912(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_913(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_914(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_915(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_916(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_917(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_918(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_919(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_920(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_921(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_922(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_923(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_924(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_925(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_926(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_927(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_928(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_929(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_930(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_931(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_932(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_933(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_936(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_934(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}


int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/* forwarded equations */
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_756(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_757(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_758(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_759(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_760(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_761(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_762(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_763(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_764(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_765(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_766(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_767(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_768(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_769(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_770(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_861(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_862(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_863(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_864(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_865(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_866(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_867(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_868(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_869(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_870(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_871(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_872(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_873(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_874(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_875(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_876(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_877(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_878(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_879(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_880(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_881(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_882(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_883(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_884(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_885(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_886(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_887(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_888(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_889(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_890(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_896(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_897(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_898(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_899(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_900(DATA* data, threadData_t *threadData);

static void functionODE_system0(DATA *data, threadData_t *threadData)
{
    OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_756(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_757(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_758(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_759(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_760(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_761(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_762(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_763(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_764(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_765(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_766(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_767(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_768(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_769(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_770(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_861(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_862(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_863(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_864(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_865(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_866(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_867(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_868(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_869(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_870(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_871(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_872(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_873(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_874(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_875(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_876(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_877(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_878(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_879(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_880(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_881(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_882(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_883(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_884(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_885(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_886(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_887(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_888(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_889(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_890(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_896(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_897(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_898(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_899(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_900(data, threadData);
}

int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  data->simulationInfo->callStatistics.functionODE++;
  
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_functionLocalKnownVars(data, threadData);
  functionODE_system0(data, threadData);

  
  TRACE_POP
  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char**argv, DATA *data, threadData_t *threadData);

#include "OpenIPSL.Examples.Controls.PSSE.ES.EXAC2_12jac.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.EXAC2_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_callback = {
   (int (*)(DATA *, threadData_t *, void *)) OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_performSimulation,
   (int (*)(DATA *, threadData_t *, void *)) OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_performQSSSimulation,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_updateContinuousSystem,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_callExternalObjectDestructors,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_initialNonLinearSystem,
   NULL,
   NULL,
   #if !defined(OMC_NO_STATESELECTION)
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_initializeStateSets,
   #else
   NULL,
   #endif
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_initializeDAEmodeData,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_functionODE,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_functionAlgebraics,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_functionDAE,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_functionLocalKnownVars,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_input_function,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_input_function_init,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_input_function_updateStartValues,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_output_function,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_function_storeDelayed,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_updateBoundVariableAttributes,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_functionInitialEquations,
   1, /* useHomotopy - 0: local homotopy (equidistant lambda), 1: global homotopy (equidistant lambda), 2: new global homotopy approach (adaptive lambda), 3: new local homotopy approach (adaptive lambda)*/
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_functionInitialEquations_lambda0,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_functionRemovedInitialEquations,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_updateBoundParameters,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_checkForAsserts,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_function_ZeroCrossingsEquations,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_function_ZeroCrossings,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_function_updateRelations,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_zeroCrossingDescription,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_relationDescription,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_function_initSample,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_INDEX_JAC_A,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_INDEX_JAC_B,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_INDEX_JAC_C,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_INDEX_JAC_D,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_initialAnalyticJacobianA,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_initialAnalyticJacobianB,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_initialAnalyticJacobianC,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_initialAnalyticJacobianD,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_functionJacA_column,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_functionJacB_column,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_functionJacC_column,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_functionJacD_column,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_linear_model_frame,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_linear_model_datarecovery_frame,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_mayer,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_lagrange,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_pickUpBoundsForInputsInOptimization,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_setInputData,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_getTimeGrid,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_symbolicInlineSystem,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_function_initSynchronous,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_function_updateSynchronous,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_function_equationsSynchronous,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_inputNames,
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
#define _OMC_LIT_RESOURCE_1_dir_data "/usr/lib/omlibrary/Modelica 3.2.2"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_name,8,_OMC_LIT_RESOURCE_1_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir,33,_OMC_LIT_RESOURCE_1_dir_data);

#define _OMC_LIT_RESOURCE_2_name_data "ModelicaServices"
#define _OMC_LIT_RESOURCE_2_dir_data "/usr/lib/omlibrary/ModelicaServices 3.2.2"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_name,16,_OMC_LIT_RESOURCE_2_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir,41,_OMC_LIT_RESOURCE_2_dir_data);

#define _OMC_LIT_RESOURCE_3_name_data "OpenIPSL"
#define _OMC_LIT_RESOURCE_3_dir_data "/home/manuelnvro/dev/Gitted/OpenIPSL/OpenIPSL"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_name,8,_OMC_LIT_RESOURCE_3_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir,45,_OMC_LIT_RESOURCE_3_dir_data);

static const MMC_DEFSTRUCTLIT(_OMC_LIT_RESOURCES,8,MMC_ARRAY_TAG) {MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir)}};
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "OpenIPSL.Examples.Controls.PSSE.ES.EXAC2";
  data->modelData->modelFilePrefix = "OpenIPSL.Examples.Controls.PSSE.ES.EXAC2";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "/home/manuelnvro/dev/Gitted/OpenIPSL/OpenIPSL/Examples/Controls/PSSE/ES";
  data->modelData->modelGUID = "{515a0645-ca16-4330-bdbe-72ac60319021}";
  #if defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME)
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  #else
  #if defined(_MSC_VER) /* handle joke compilers */
  {
  /* for MSVC we encode a string like char x[] = {'a', 'b', 'c', '\0'} */
  /* because the string constant limit is 65535 bytes */
  static const char contents_init[] =
    #include "OpenIPSL.Examples.Controls.PSSE.ES.EXAC2_init.c"
    ;
  static const char contents_info[] =
    #include "OpenIPSL.Examples.Controls.PSSE.ES.EXAC2_info.c"
    ;
    data->modelData->initXMLData = contents_init;
    data->modelData->modelDataXml.infoXMLData = contents_info;
  }
  #else /* handle real compilers */
  data->modelData->initXMLData =
  #include "OpenIPSL.Examples.Controls.PSSE.ES.EXAC2_init.c"
    ;
  data->modelData->modelDataXml.infoXMLData =
  #include "OpenIPSL.Examples.Controls.PSSE.ES.EXAC2_info.c"
    ;
  #endif /* defined(_MSC_VER) */
  #endif /* defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME) */
  
  data->modelData->nStates = 13;
  data->modelData->nVariablesReal = 154;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesInteger = 0;
  data->modelData->nVariablesBoolean = 2;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 335;
  data->modelData->nParametersInteger = 11;
  data->modelData->nParametersBoolean = 73;
  data->modelData->nParametersString = 0;
  data->modelData->nInputVars = 0;
  data->modelData->nOutputVars = 0;
  
  data->modelData->nAliasReal = 126;
  data->modelData->nAliasInteger = 0;
  data->modelData->nAliasBoolean = 0;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 28;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 30;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  data->modelData->modelDataXml.fileName = "OpenIPSL.Examples.Controls.PSSE.ES.EXAC2_info.json";
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 7;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 1199;
  data->modelData->nMixedSystems = 0;
  data->modelData->nLinearSystems = 0;
  data->modelData->nNonLinearSystems = 5;
  data->modelData->nStateSets = 0;
  data->modelData->nJacobians = 5;
  data->modelData->nOptimizeConstraints = 0;
  data->modelData->nOptimizeFinalConstraints = 0;
  
  data->modelData->nDelayExpressions = 0;
  
  data->modelData->nClocks = 0;
  data->modelData->nSubClocks = 0;
  
  data->modelData->nSensitivityVars = 0;
  data->modelData->nSensitivityParamVars = 0;
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
  
    OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_setupDataStruc(&data, threadData);
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


