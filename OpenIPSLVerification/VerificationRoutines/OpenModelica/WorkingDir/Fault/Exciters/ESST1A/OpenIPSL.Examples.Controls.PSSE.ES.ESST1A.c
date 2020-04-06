/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "OpenIPSL.Examples.Controls.PSSE.ES.ESST1A_model.h"
#include "simulation/solver/events.h"

#define prefixedName_performSimulation OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_performSimulation
#define prefixedName_updateContinuousSystem OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_updateContinuousSystem
#include <simulation/solver/perform_simulation.c>

#define prefixedName_performQSSSimulation OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_performQSSSimulation
#include <simulation/solver/perform_qss_simulation.c>

/* dummy VARINFO and FILEINFO */
const FILE_INFO dummyFILE_INFO = omc_dummyFileInfo;
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/*
equation index: 751
type: SIMPLE_ASSIGN
eSST1A._EFD0 = gENROE.efd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_751(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,751};
  data->localData[0]->realVars[60] /* eSST1A.EFD0 variable */ = data->simulationInfo->realParameter[265];
  TRACE_POP
}
/*
equation index: 752
type: SIMPLE_ASSIGN
der(gENCLS._delta) = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_752(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,752};
  data->localData[0]->realVars[18] /* der(gENCLS.delta) STATE_DER */ = 0.0;
  TRACE_POP
}
/*
equation index: 753
type: SIMPLE_ASSIGN
der(gENCLS._eq) = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_753(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,753};
  data->localData[0]->realVars[19] /* der(gENCLS.eq) STATE_DER */ = 0.0;
  TRACE_POP
}
/*
equation index: 754
type: SIMPLE_ASSIGN
gENROE._PSIppd = gENROE.Epq * gENROE.K3d + gENROE.PSIkd * gENROE.K4d
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_754(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,754};
  data->localData[0]->realVars[100] /* gENROE.PSIppd variable */ = (data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */) * (data->simulationInfo->realParameter[215]) + (data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[217]);
  TRACE_POP
}
/*
equation index: 755
type: SIMPLE_ASSIGN
gENROE._PSIppq = gENROE.PSIkq * gENROE.K4q + gENROE.Epd * gENROE.K3q
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_755(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,755};
  data->localData[0]->realVars[101] /* gENROE.PSIppq variable */ = (data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[218]) + (data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */) * (data->simulationInfo->realParameter[216]);
  TRACE_POP
}
/*
equation index: 756
type: SIMPLE_ASSIGN
gENROE._PSIpp = sqrt(gENROE.PSIppd ^ 2.0 + gENROE.PSIppq ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_756(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,756};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[100] /* gENROE.PSIppd variable */;
  tmp1 = data->localData[0]->realVars[101] /* gENROE.PSIppq variable */;
  data->localData[0]->realVars[99] /* gENROE.PSIpp variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 757
type: SIMPLE_ASSIGN
$cse5 = OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_757(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,757};
  data->localData[0]->realVars[29] /* $cse5 variable */ = omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[99] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[235], data->simulationInfo->realParameter[236], 1.0, 1.2);
  TRACE_POP
}
/*
equation index: 758
type: SIMPLE_ASSIGN
der(gENROE._delta) = gENROE.w_b * gENROE.w
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_758(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,758};
  data->localData[0]->realVars[24] /* der(gENROE.delta) STATE_DER */ = (data->simulationInfo->realParameter[279]) * (data->localData[0]->realVars[12] /* gENROE.w STATE(1) */);
  TRACE_POP
}
/*
equation index: 759
type: SIMPLE_ASSIGN
eSST1A._imLeadLag._TF._x[1] = eSST1A.imLeadLag.TF.x_scaled[1] / eSST1A.imLeadLag.TF.a_end
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_759(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,759};
  data->localData[0]->realVars[77] /* eSST1A.imLeadLag.TF.x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[2] /* eSST1A.imLeadLag.TF.x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[136],"eSST1A.imLeadLag.TF.a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 760
type: SIMPLE_ASSIGN
eSST1A._imLeadLag1._TF._x[1] = eSST1A.imLeadLag1.TF.x_scaled[1] / eSST1A.imLeadLag1.TF.a_end
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_760(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,760};
  data->localData[0]->realVars[80] /* eSST1A.imLeadLag1.TF.x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[3] /* eSST1A.imLeadLag1.TF.x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[152],"eSST1A.imLeadLag1.TF.a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 761
type: SIMPLE_ASSIGN
$cse7 = cos(gENROE.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_761(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,761};
  data->localData[0]->realVars[31] /* $cse7 variable */ = cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 762
type: SIMPLE_ASSIGN
$cse6 = sin(gENROE.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_762(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,762};
  data->localData[0]->realVars[30] /* $cse6 variable */ = sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 763
type: SIMPLE_ASSIGN
$cse2 = cos(gENCLS.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_763(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,763};
  data->localData[0]->realVars[27] /* $cse2 variable */ = cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 764
type: SIMPLE_ASSIGN
$cse1 = sin(gENCLS.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_764(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,764};
  data->localData[0]->realVars[26] /* $cse1 variable */ = sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */);
  TRACE_POP
}
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_765(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_766(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_767(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_768(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_769(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_770(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_771(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_772(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_773(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_774(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_775(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_776(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_777(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_778(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_779(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_780(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_781(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_782(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_783(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_784(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_785(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_786(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_787(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_809(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_808(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_807(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_806(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_805(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_804(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_803(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_802(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_801(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_800(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_799(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_798(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_797(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_796(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_795(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_794(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_793(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_792(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_791(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_790(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_789(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_788(DATA*, threadData_t*);
/*
equation index: 855
indexNonlinear: 2
type: NONLINEAR

vars: {pwLine4._is._im, pwLine3._ir._im, pwLine3._ir._re, pwLine4._is._re, pwLine1._is._re, pwLine3._is._re, pwLine3._is._im, constantLoad._p._ii, pwLine._ir._im, pwLine._ir._re, pwLine4._ir._im, pwLine4._ir._re, gENCLS._id, gENCLS._iq, pwLine1._vr._im, pwLine1._vr._re, gENROE._id, gENROE._iq, pwLine3._vr._re, pwLine3._vr._im, pwLine1._vs._im, pwLine1._vs._re}
eqns: {765, 766, 767, 768, 769, 770, 771, 772, 773, 774, 775, 776, 777, 778, 779, 780, 781, 782, 783, 784, 785, 786, 787, 809, 808, 807, 806, 805, 804, 803, 802, 801, 800, 799, 798, 797, 796, 795, 794, 793, 792, 791, 790, 789, 788}
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_855(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,855};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 855 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[0] = data->localData[0]->realVars[152] /* pwLine4.is.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[1] = data->localData[0]->realVars[140] /* pwLine3.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[2] = data->localData[0]->realVars[141] /* pwLine3.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[3] = data->localData[0]->realVars[153] /* pwLine4.is.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[4] = data->localData[0]->realVars[131] /* pwLine1.is.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[5] = data->localData[0]->realVars[143] /* pwLine3.is.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[6] = data->localData[0]->realVars[142] /* pwLine3.is.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[7] = data->localData[0]->realVars[53] /* constantLoad.p.ii variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[8] = data->localData[0]->realVars[118] /* pwLine.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[9] = data->localData[0]->realVars[119] /* pwLine.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[10] = data->localData[0]->realVars[150] /* pwLine4.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[11] = data->localData[0]->realVars[151] /* pwLine4.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[12] = data->localData[0]->realVars[88] /* gENCLS.id variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[13] = data->localData[0]->realVars[89] /* gENCLS.iq variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[14] = data->localData[0]->realVars[132] /* pwLine1.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[15] = data->localData[0]->realVars[133] /* pwLine1.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[16] = data->localData[0]->realVars[108] /* gENROE.id variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[17] = data->localData[0]->realVars[109] /* gENROE.iq variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[18] = data->localData[0]->realVars[145] /* pwLine3.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[19] = data->localData[0]->realVars[144] /* pwLine3.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[20] = data->localData[0]->realVars[134] /* pwLine1.vs.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[21] = data->localData[0]->realVars[135] /* pwLine1.vs.re variable */;
  retValue = solve_nonlinear_system(data, threadData, 2);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,855};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 855 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[152] /* pwLine4.is.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[0];
  data->localData[0]->realVars[140] /* pwLine3.ir.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[1];
  data->localData[0]->realVars[141] /* pwLine3.ir.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[2];
  data->localData[0]->realVars[153] /* pwLine4.is.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[3];
  data->localData[0]->realVars[131] /* pwLine1.is.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[4];
  data->localData[0]->realVars[143] /* pwLine3.is.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[5];
  data->localData[0]->realVars[142] /* pwLine3.is.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[6];
  data->localData[0]->realVars[53] /* constantLoad.p.ii variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[7];
  data->localData[0]->realVars[118] /* pwLine.ir.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[8];
  data->localData[0]->realVars[119] /* pwLine.ir.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[9];
  data->localData[0]->realVars[150] /* pwLine4.ir.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[10];
  data->localData[0]->realVars[151] /* pwLine4.ir.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[11];
  data->localData[0]->realVars[88] /* gENCLS.id variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[12];
  data->localData[0]->realVars[89] /* gENCLS.iq variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[13];
  data->localData[0]->realVars[132] /* pwLine1.vr.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[14];
  data->localData[0]->realVars[133] /* pwLine1.vr.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[15];
  data->localData[0]->realVars[108] /* gENROE.id variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[16];
  data->localData[0]->realVars[109] /* gENROE.iq variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[17];
  data->localData[0]->realVars[145] /* pwLine3.vr.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[18];
  data->localData[0]->realVars[144] /* pwLine3.vr.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[19];
  data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[20];
  data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[21];
  TRACE_POP
}
/*
equation index: 856
type: SIMPLE_ASSIGN
der(gENROE._PSIkd) = (gENROE.Epq + (gENROE.Xl - gENROE.Xpd) * gENROE.id - gENROE.PSIkd) / gENROE.Tppd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_856(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,856};
  data->localData[0]->realVars[22] /* der(gENROE.PSIkd) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[246] - data->simulationInfo->realParameter[247]) * (data->localData[0]->realVars[108] /* gENROE.id variable */) - data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */,data->simulationInfo->realParameter[239],"gENROE.Tppd0",equationIndexes);
  TRACE_POP
}
/*
equation index: 857
type: SIMPLE_ASSIGN
eSST1A._XADIFD = gENROE.K1d * (gENROE.Epq + (gENROE.Xl - gENROE.Xpd) * gENROE.id - gENROE.PSIkd) + gENROE.Epq + gENROE.id * (gENROE.Xd - gENROE.Xpd) + $cse5 * gENROE.PSIppd
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_857(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,857};
  data->localData[0]->realVars[62] /* eSST1A.XADIFD variable */ = (data->simulationInfo->realParameter[211]) * (data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[246] - data->simulationInfo->realParameter[247]) * (data->localData[0]->realVars[108] /* gENROE.id variable */) - data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */) + data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->localData[0]->realVars[108] /* gENROE.id variable */) * (data->simulationInfo->realParameter[245] - data->simulationInfo->realParameter[247]) + (data->localData[0]->realVars[29] /* $cse5 variable */) * (data->localData[0]->realVars[100] /* gENROE.PSIppd variable */);
  TRACE_POP
}
/*
equation index: 858
type: SIMPLE_ASSIGN
eSST1A._add2._y = eSST1A.add2.k1 * eSST1A.Vref1.k + eSST1A.add2.k2 * eSST1A.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_858(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,858};
  data->localData[0]->realVars[63] /* eSST1A.add2.y variable */ = (data->simulationInfo->realParameter[112]) * (data->simulationInfo->realParameter[111]) + (data->simulationInfo->realParameter[113]) * (data->localData[0]->realVars[62] /* eSST1A.XADIFD variable */);
  TRACE_POP
}
/*
equation index: 859
type: SIMPLE_ASSIGN
eSST1A._imGain._y = eSST1A.imGain.k * eSST1A.add2.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_859(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,859};
  data->localData[0]->realVars[75] /* eSST1A.imGain.y variable */ = (data->simulationInfo->realParameter[126]) * (data->localData[0]->realVars[63] /* eSST1A.add2.y variable */);
  TRACE_POP
}
/*
equation index: 860
type: SIMPLE_ASSIGN
eSST1A._add3_2._u3 = smooth(0, if eSST1A.imGain.y > eSST1A.imLimited1.uMax then eSST1A.imLimited1.uMax else if eSST1A.imGain.y < eSST1A.imLimited1.uMin then eSST1A.imLimited1.uMin else eSST1A.imGain.y)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_860(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,860};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  tmp0 = Greater(data->localData[0]->realVars[75] /* eSST1A.imGain.y variable */,data->simulationInfo->realParameter[164]);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->simulationInfo->realParameter[164];
  }
  else
  {
    tmp1 = Less(data->localData[0]->realVars[75] /* eSST1A.imGain.y variable */,data->simulationInfo->realParameter[165]);
    tmp3 = (tmp1?data->simulationInfo->realParameter[165]:data->localData[0]->realVars[75] /* eSST1A.imGain.y variable */);
  }
  data->localData[0]->realVars[69] /* eSST1A.add3_2.u3 variable */ = tmp3;
  TRACE_POP
}
/*
equation index: 861
type: SIMPLE_ASSIGN
eSST1A._add3._u1 = eSST1A.imGain3.k * eSST1A.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_861(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,861};
  data->localData[0]->realVars[64] /* eSST1A.add3.u1 variable */ = (data->simulationInfo->realParameter[129]) * (data->localData[0]->realVars[62] /* eSST1A.XADIFD variable */);
  TRACE_POP
}
/*
equation index: 862
type: SIMPLE_ASSIGN
der(gENROE._PSIkq) = (gENROE.Epd + (gENROE.Xpq - gENROE.Xl) * gENROE.iq - gENROE.PSIkq) / gENROE.Tppq0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_862(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,862};
  data->localData[0]->realVars[23] /* der(gENROE.PSIkq) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[251] - data->simulationInfo->realParameter[246]) * (data->localData[0]->realVars[109] /* gENROE.iq variable */) - data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */,data->simulationInfo->realParameter[240],"gENROE.Tppq0",equationIndexes);
  TRACE_POP
}
/*
equation index: 863
type: SIMPLE_ASSIGN
gENROE._XaqIlq = gENROE.K1q * (gENROE.Epd + (gENROE.Xpq - gENROE.Xl) * gENROE.iq - gENROE.PSIkq) + gENROE.Epd + gENROE.iq * (gENROE.Xpq - gENROE.Xq) + $cse5 * gENROE.PSIppq * (gENROE.Xq - gENROE.Xl) / (gENROE.Xd - gENROE.Xl)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_863(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,863};
  data->localData[0]->realVars[105] /* gENROE.XaqIlq variable */ = (data->simulationInfo->realParameter[212]) * (data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[251] - data->simulationInfo->realParameter[246]) * (data->localData[0]->realVars[109] /* gENROE.iq variable */) - data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */) + data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->localData[0]->realVars[109] /* gENROE.iq variable */) * (data->simulationInfo->realParameter[251] - data->simulationInfo->realParameter[252]) + (data->localData[0]->realVars[29] /* $cse5 variable */) * ((data->localData[0]->realVars[101] /* gENROE.PSIppq variable */) * (DIVISION_SIM(data->simulationInfo->realParameter[252] - data->simulationInfo->realParameter[246],data->simulationInfo->realParameter[245] - data->simulationInfo->realParameter[246],"gENROE.Xd - gENROE.Xl",equationIndexes)));
  TRACE_POP
}
/*
equation index: 864
type: SIMPLE_ASSIGN
der(gENROE._Epd) = (-gENROE.XaqIlq) / gENROE.Tpq0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_864(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,864};
  data->localData[0]->realVars[20] /* der(gENROE.Epd) STATE_DER */ = DIVISION_SIM((-data->localData[0]->realVars[105] /* gENROE.XaqIlq variable */),data->simulationInfo->realParameter[241],"gENROE.Tpq0",equationIndexes);
  TRACE_POP
}
/*
equation index: 865
type: SIMPLE_ASSIGN
gENROE._Te = gENROE.PSId * gENROE.iq - gENROE.PSIq * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_865(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,865};
  data->localData[0]->realVars[104] /* gENROE.Te variable */ = (data->localData[0]->realVars[98] /* gENROE.PSId variable */) * (data->localData[0]->realVars[109] /* gENROE.iq variable */) - ((data->localData[0]->realVars[102] /* gENROE.PSIq variable */) * (data->localData[0]->realVars[108] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 866
type: SIMPLE_ASSIGN
der(gENROE._w) = 0.5 * ((gENROE.pm0 - gENROE.D * gENROE.w) / (1.0 + gENROE.w) - gENROE.Te) / gENROE.H
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_866(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,866};
  data->localData[0]->realVars[25] /* der(gENROE.w) STATE_DER */ = (0.5) * (DIVISION_SIM(DIVISION_SIM(data->simulationInfo->realParameter[272] - ((data->simulationInfo->realParameter[199]) * (data->localData[0]->realVars[12] /* gENROE.w STATE(1) */)),1.0 + data->localData[0]->realVars[12] /* gENROE.w STATE(1) */,"1.0 + gENROE.w",equationIndexes) - data->localData[0]->realVars[104] /* gENROE.Te variable */,data->simulationInfo->realParameter[204],"gENROE.H",equationIndexes));
  TRACE_POP
}
/*
equation index: 867
type: SIMPLE_ASSIGN
gENROE._I = sqrt(pwLine.is.im ^ 2.0 + pwLine.is.re ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_867(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,867};
  modelica_real tmp4;
  modelica_real tmp5;
  tmp4 = data->localData[0]->realVars[120] /* pwLine.is.im variable */;
  tmp5 = data->localData[0]->realVars[121] /* pwLine.is.re variable */;
  data->localData[0]->realVars[95] /* gENROE.I variable */ = sqrt((tmp4 * tmp4) + (tmp5 * tmp5));
  TRACE_POP
}
/*
equation index: 868
type: SIMPLE_ASSIGN
gENROE._anglei = atan2(-pwLine.is.im, -pwLine.is.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_868(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,868};
  data->localData[0]->realVars[106] /* gENROE.anglei variable */ = atan2((-data->localData[0]->realVars[120] /* pwLine.is.im variable */), (-data->localData[0]->realVars[121] /* pwLine.is.re variable */));
  TRACE_POP
}
/*
equation index: 869
type: SIMPLE_ASSIGN
gENROE._P = pwLine.vs.im * pwLine.is.im + pwLine.vs.re * pwLine.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_869(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,869};
  data->localData[0]->realVars[96] /* gENROE.P variable */ = (data->localData[0]->realVars[122] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[120] /* pwLine.is.im variable */) + (data->localData[0]->realVars[123] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[121] /* pwLine.is.re variable */);
  TRACE_POP
}
/*
equation index: 870
type: SIMPLE_ASSIGN
gENROE._PELEC = gENROE.P / gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_870(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,870};
  data->localData[0]->realVars[97] /* gENROE.PELEC variable */ = DIVISION_SIM(data->localData[0]->realVars[96] /* gENROE.P variable */,data->simulationInfo->realParameter[198],"gENROE.CoB",equationIndexes);
  TRACE_POP
}
/*
equation index: 871
type: SIMPLE_ASSIGN
gENROE._Q = pwLine.vs.im * pwLine.is.re - pwLine.vs.re * pwLine.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_871(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,871};
  data->localData[0]->realVars[103] /* gENROE.Q variable */ = (data->localData[0]->realVars[122] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[121] /* pwLine.is.re variable */) - ((data->localData[0]->realVars[123] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[120] /* pwLine.is.im variable */));
  TRACE_POP
}
/*
equation index: 872
type: SIMPLE_ASSIGN
eSST1A._ECOMP = sqrt(pwLine.vs.re ^ 2.0 + pwLine.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_872(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,872};
  modelica_real tmp6;
  modelica_real tmp7;
  tmp6 = data->localData[0]->realVars[123] /* pwLine.vs.re variable */;
  tmp7 = data->localData[0]->realVars[122] /* pwLine.vs.im variable */;
  data->localData[0]->realVars[58] /* eSST1A.ECOMP variable */ = sqrt((tmp6 * tmp6) + (tmp7 * tmp7));
  TRACE_POP
}
/*
equation index: 873
type: SIMPLE_ASSIGN
eSST1A._imGain1._y = eSST1A.imGain1.k * eSST1A.ECOMP
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_873(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,873};
  data->localData[0]->realVars[76] /* eSST1A.imGain1.y variable */ = (data->simulationInfo->realParameter[127]) * (data->localData[0]->realVars[58] /* eSST1A.ECOMP variable */);
  TRACE_POP
}
/*
equation index: 874
type: SIMPLE_ASSIGN
eSST1A._add3._u2 = eSST1A.imGain2.k * eSST1A.ECOMP
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_874(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,874};
  data->localData[0]->realVars[65] /* eSST1A.add3.u2 variable */ = (data->simulationInfo->realParameter[128]) * (data->localData[0]->realVars[58] /* eSST1A.ECOMP variable */);
  TRACE_POP
}
/*
equation index: 875
type: SIMPLE_ASSIGN
eSST1A._add3._y = eSST1A.add3.k1 * eSST1A.add3.u1 + eSST1A.add3.k2 * eSST1A.add3.u2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_875(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,875};
  data->localData[0]->realVars[66] /* eSST1A.add3.y variable */ = (data->simulationInfo->realParameter[114]) * (data->localData[0]->realVars[64] /* eSST1A.add3.u1 variable */) + (data->simulationInfo->realParameter[115]) * (data->localData[0]->realVars[65] /* eSST1A.add3.u2 variable */);
  TRACE_POP
}
/*
equation index: 876
type: SIMPLE_ASSIGN
der(eSST1A._TransducerDelay._state) = (eSST1A.TransducerDelay.K * eSST1A.ECOMP - eSST1A.TransducerDelay.state) / eSST1A.TransducerDelay.T_mod
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_876(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,876};
  data->localData[0]->realVars[13] /* der(eSST1A.TransducerDelay.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[98]) * (data->localData[0]->realVars[58] /* eSST1A.ECOMP variable */) - data->localData[0]->realVars[0] /* eSST1A.TransducerDelay.state STATE(1) */,data->simulationInfo->realParameter[100],"eSST1A.TransducerDelay.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 877
type: SIMPLE_ASSIGN
eSST1A._DiffV._u2 = if abs(eSST1A.TransducerDelay.T) <= 1e-15 then eSST1A.ECOMP * eSST1A.TransducerDelay.K else eSST1A.TransducerDelay.state
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_877(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,877};
  modelica_boolean tmp8;
  tmp8 = LessEq(fabs(data->simulationInfo->realParameter[99]),1e-15);
  data->localData[0]->realVars[56] /* eSST1A.DiffV.u2 variable */ = (tmp8?(data->localData[0]->realVars[58] /* eSST1A.ECOMP variable */) * (data->simulationInfo->realParameter[98]):data->localData[0]->realVars[0] /* eSST1A.TransducerDelay.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 878
type: SIMPLE_ASSIGN
eSST1A._DiffV._y = eSST1A.DiffV.k1 * eSST1A.VoltageReference.k + eSST1A.DiffV.k2 * eSST1A.DiffV.u2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_878(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,878};
  data->localData[0]->realVars[57] /* eSST1A.DiffV.y variable */ = (data->simulationInfo->realParameter[79]) * (data->simulationInfo->realParameter[110]) + (data->simulationInfo->realParameter[80]) * (data->localData[0]->realVars[56] /* eSST1A.DiffV.u2 variable */);
  TRACE_POP
}
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_879(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_880(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_881(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_882(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_883(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_884(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_885(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_886(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_887(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_888(DATA*, threadData_t*);
/*
equation index: 899
indexNonlinear: 3
type: NONLINEAR

vars: {eSST1A._add3_1._y}
eqns: {879, 880, 881, 882, 883, 884, 885, 886, 887, 888}
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_899(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,899};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 899 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[0] = data->localData[0]->realVars[67] /* eSST1A.add3_1.y variable */;
  retValue = solve_nonlinear_system(data, threadData, 3);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,899};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 899 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[67] /* eSST1A.add3_1.y variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[0];
  TRACE_POP
}
/*
equation index: 900
type: SIMPLE_ASSIGN
der(eSST1A._imLeadLag._TF._x_scaled[1]) = (eSST1A.imLeadLag.TF.a_end * eSST1A.hV_GATE.p - eSST1A.imLeadLag.TF.a[2] * eSST1A.imLeadLag.TF.x_scaled[1]) / eSST1A.imLeadLag.TF.a[1]
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_900(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,900};
  data->localData[0]->realVars[15] /* der(eSST1A.imLeadLag.TF.x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[136]) * (data->localData[0]->realVars[72] /* eSST1A.hV_GATE.p variable */) - ((data->simulationInfo->realParameter[135]) * (data->localData[0]->realVars[2] /* eSST1A.imLeadLag.TF.x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[134],"eSST1A.imLeadLag.TF.a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 901
type: SIMPLE_ASSIGN
der(eSST1A._imLeadLag1._TF._x_scaled[1]) = (eSST1A.imLeadLag1.TF.a_end * eSST1A.imLeadLag.y - eSST1A.imLeadLag1.TF.a[2] * eSST1A.imLeadLag1.TF.x_scaled[1]) / eSST1A.imLeadLag1.TF.a[1]
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_901(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,901};
  data->localData[0]->realVars[16] /* der(eSST1A.imLeadLag1.TF.x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[152]) * (data->localData[0]->realVars[79] /* eSST1A.imLeadLag.y variable */) - ((data->simulationInfo->realParameter[151]) * (data->localData[0]->realVars[3] /* eSST1A.imLeadLag1.TF.x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[150],"eSST1A.imLeadLag1.TF.a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 902
type: SIMPLE_ASSIGN
der(eSST1A._simpleLagLim._state) = (eSST1A.simpleLagLim.K * eSST1A.imLeadLag1.y - eSST1A.simpleLagLim.state) / eSST1A.simpleLagLim.T_mod
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_902(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,902};
  data->localData[0]->realVars[17] /* der(eSST1A.simpleLagLim.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[166]) * (data->localData[0]->realVars[82] /* eSST1A.imLeadLag1.y variable */) - data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */,data->simulationInfo->realParameter[168],"eSST1A.simpleLagLim.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 903
type: SIMPLE_ASSIGN
$whenCondition2 = eSST1A.simpleLagLim.state > eSST1A.simpleLagLim.outMax and eSST1A.simpleLagLim.K * eSST1A.imLeadLag1.y - eSST1A.simpleLagLim.state < 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_903(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,903};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[169], 17, Greater);
  RELATIONHYSTERESIS(tmp1, (data->simulationInfo->realParameter[166]) * (data->localData[0]->realVars[82] /* eSST1A.imLeadLag1.y variable */) - data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */, 0.0, 18, Less);
  data->localData[0]->booleanVars[1] /* $whenCondition2 DISCRETE */ = (tmp0 && tmp1);
  TRACE_POP
}
/*
equation index: 904
type: SIMPLE_ASSIGN
$whenCondition1 = eSST1A.simpleLagLim.state < eSST1A.simpleLagLim.outMin and eSST1A.simpleLagLim.K * eSST1A.imLeadLag1.y - eSST1A.simpleLagLim.state > 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_904(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,904};
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  RELATIONHYSTERESIS(tmp2, data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[170], 19, Less);
  RELATIONHYSTERESIS(tmp3, (data->simulationInfo->realParameter[166]) * (data->localData[0]->realVars[82] /* eSST1A.imLeadLag1.y variable */) - data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */, 0.0, 20, Greater);
  data->localData[0]->booleanVars[0] /* $whenCondition1 DISCRETE */ = (tmp2 && tmp3);
  TRACE_POP
}
/*
equation index: 905
type: SIMPLE_ASSIGN
eSST1A._hV_GATE1._p = if eSST1A.add3_2.y < const1.k then const1.k else eSST1A.add3_2.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_905(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,905};
  modelica_boolean tmp4;
  RELATIONHYSTERESIS(tmp4, data->localData[0]->realVars[70] /* eSST1A.add3_2.y variable */, data->simulationInfo->realParameter[35], 15, Less);
  data->localData[0]->realVars[73] /* eSST1A.hV_GATE1.p variable */ = (tmp4?data->simulationInfo->realParameter[35]:data->localData[0]->realVars[70] /* eSST1A.add3_2.y variable */);
  TRACE_POP
}
/*
equation index: 906
type: SIMPLE_ASSIGN
eSST1A._lV_GATE._p = if eSST1A.hV_GATE1.p > const2.k then const2.k else eSST1A.hV_GATE1.p
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_906(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,906};
  modelica_boolean tmp5;
  RELATIONHYSTERESIS(tmp5, data->localData[0]->realVars[73] /* eSST1A.hV_GATE1.p variable */, data->simulationInfo->realParameter[36], 16, Greater);
  data->localData[0]->realVars[83] /* eSST1A.lV_GATE.p variable */ = (tmp5?data->simulationInfo->realParameter[36]:data->localData[0]->realVars[73] /* eSST1A.hV_GATE1.p variable */);
  TRACE_POP
}
/*
equation index: 907
type: SIMPLE_ASSIGN
eSST1A._EFD = smooth(0, if eSST1A.lV_GATE.p > eSST1A.add3.y then eSST1A.add3.y else if eSST1A.lV_GATE.p < eSST1A.imGain1.y then eSST1A.imGain1.y else eSST1A.lV_GATE.p)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_907(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,907};
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  tmp6 = Greater(data->localData[0]->realVars[83] /* eSST1A.lV_GATE.p variable */,data->localData[0]->realVars[66] /* eSST1A.add3.y variable */);
  tmp8 = (modelica_boolean)tmp6;
  if(tmp8)
  {
    tmp9 = data->localData[0]->realVars[66] /* eSST1A.add3.y variable */;
  }
  else
  {
    tmp7 = Less(data->localData[0]->realVars[83] /* eSST1A.lV_GATE.p variable */,data->localData[0]->realVars[76] /* eSST1A.imGain1.y variable */);
    tmp9 = (tmp7?data->localData[0]->realVars[76] /* eSST1A.imGain1.y variable */:data->localData[0]->realVars[83] /* eSST1A.lV_GATE.p variable */);
  }
  data->localData[0]->realVars[59] /* eSST1A.EFD variable */ = tmp9;
  TRACE_POP
}
/*
equation index: 908
type: SIMPLE_ASSIGN
der(gENROE._Epq) = (eSST1A.EFD - eSST1A.XADIFD) / gENROE.Tpd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_908(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,908};
  data->localData[0]->realVars[21] /* der(gENROE.Epq) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[59] /* eSST1A.EFD variable */ - data->localData[0]->realVars[62] /* eSST1A.XADIFD variable */,data->simulationInfo->realParameter[238],"gENROE.Tpd0",equationIndexes);
  TRACE_POP
}
/*
equation index: 909
type: SIMPLE_ASSIGN
der(eSST1A._imDerivativeLag._x) = eSST1A.imDerivativeLag.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_909(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,909};
  data->localData[0]->realVars[14] /* der(eSST1A.imDerivativeLag.x) STATE_DER */ = data->localData[0]->realVars[74] /* eSST1A.imDerivativeLag.y variable */;
  TRACE_POP
}
/*
equation index: 910
type: SIMPLE_ASSIGN
GEN1._V = eSST1A.ECOMP
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_910(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,910};
  data->localData[0]->realVars[36] /* GEN1.V variable */ = data->localData[0]->realVars[58] /* eSST1A.ECOMP variable */;
  TRACE_POP
}
/*
equation index: 911
type: SIMPLE_ASSIGN
gENROE._anglev = atan2(pwLine.vs.im, pwLine.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_911(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,911};
  data->localData[0]->realVars[107] /* gENROE.anglev variable */ = atan2(data->localData[0]->realVars[122] /* pwLine.vs.im variable */, data->localData[0]->realVars[123] /* pwLine.vs.re variable */);
  TRACE_POP
}
/*
equation index: 912
type: SIMPLE_ASSIGN
GEN1._angle = 57.29577951308232 * gENROE.anglev
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_912(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,912};
  data->localData[0]->realVars[37] /* GEN1.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[107] /* gENROE.anglev variable */);
  TRACE_POP
}
/*
equation index: 913
type: SIMPLE_ASSIGN
pwLine._Q12 = (pwLine.vs.im * pwLine.is.re - pwLine.vs.re * pwLine.is.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_913(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,913};
  data->localData[0]->realVars[116] /* pwLine.Q12 variable */ = ((data->localData[0]->realVars[122] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[121] /* pwLine.is.re variable */) - ((data->localData[0]->realVars[123] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[120] /* pwLine.is.im variable */))) * (data->simulationInfo->realParameter[287]);
  TRACE_POP
}
/*
equation index: 914
type: SIMPLE_ASSIGN
pwLine._P12 = (pwLine.vs.re * pwLine.is.re + pwLine.vs.im * pwLine.is.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_914(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,914};
  data->localData[0]->realVars[114] /* pwLine.P12 variable */ = ((data->localData[0]->realVars[123] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[121] /* pwLine.is.re variable */) + (data->localData[0]->realVars[122] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[120] /* pwLine.is.im variable */)) * (data->simulationInfo->realParameter[287]);
  TRACE_POP
}
/*
equation index: 915
type: SIMPLE_ASSIGN
LOAD._V = constantLoad.v
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_915(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,915};
  data->localData[0]->realVars[44] /* LOAD.V variable */ = data->localData[0]->realVars[55] /* constantLoad.v variable */;
  TRACE_POP
}
/*
equation index: 916
type: SIMPLE_ASSIGN
pwLine1._P12 = (pwLine1.vs.re * pwLine1.is.re + pwLine1.vs.im * pwLine1.is.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_916(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,916};
  data->localData[0]->realVars[124] /* pwLine1.P12 variable */ = ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[131] /* pwLine1.is.re variable */) + (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[130] /* pwLine1.is.im variable */)) * (data->simulationInfo->realParameter[298]);
  TRACE_POP
}
/*
equation index: 917
type: SIMPLE_ASSIGN
pwLine1._Q12 = (pwLine1.vs.im * pwLine1.is.re - pwLine1.vs.re * pwLine1.is.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_917(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,917};
  data->localData[0]->realVars[126] /* pwLine1.Q12 variable */ = ((data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[131] /* pwLine1.is.re variable */) - ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[130] /* pwLine1.is.im variable */))) * (data->simulationInfo->realParameter[298]);
  TRACE_POP
}
/*
equation index: 918
type: SIMPLE_ASSIGN
pwLine3._P12 = (pwLine1.vs.re * pwLine3.is.re + pwLine1.vs.im * pwLine3.is.im) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_918(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,918};
  data->localData[0]->realVars[136] /* pwLine3.P12 variable */ = ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[143] /* pwLine3.is.re variable */) + (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[142] /* pwLine3.is.im variable */)) * (data->simulationInfo->realParameter[309]);
  TRACE_POP
}
/*
equation index: 919
type: SIMPLE_ASSIGN
pwLine3._Q12 = (pwLine1.vs.im * pwLine3.is.re - pwLine1.vs.re * pwLine3.is.im) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_919(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,919};
  data->localData[0]->realVars[138] /* pwLine3.Q12 variable */ = ((data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[143] /* pwLine3.is.re variable */) - ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[142] /* pwLine3.is.im variable */))) * (data->simulationInfo->realParameter[309]);
  TRACE_POP
}
/*
equation index: 920
type: SIMPLE_ASSIGN
constantLoad._angle = atan2(pwLine1.vs.im, pwLine1.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_920(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,920};
  data->localData[0]->realVars[50] /* constantLoad.angle variable */ = atan2(data->localData[0]->realVars[134] /* pwLine1.vs.im variable */, data->localData[0]->realVars[135] /* pwLine1.vs.re variable */);
  TRACE_POP
}
/*
equation index: 921
type: SIMPLE_ASSIGN
LOAD._angle = 57.29577951308232 * constantLoad.angle
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_921(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,921};
  data->localData[0]->realVars[45] /* LOAD.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[50] /* constantLoad.angle variable */);
  TRACE_POP
}
/*
equation index: 922
type: SIMPLE_ASSIGN
pwLine._Q21 = (pwLine1.vs.re * pwLine.ir.im - pwLine1.vs.im * pwLine.ir.re) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_922(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,922};
  data->localData[0]->realVars[117] /* pwLine.Q21 variable */ = ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[118] /* pwLine.ir.im variable */) - ((data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[119] /* pwLine.ir.re variable */))) * (data->simulationInfo->realParameter[287]);
  TRACE_POP
}
/*
equation index: 923
type: SIMPLE_ASSIGN
pwLine._P21 = ((-pwLine1.vs.re) * pwLine.ir.re - pwLine1.vs.im * pwLine.ir.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_923(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,923};
  data->localData[0]->realVars[115] /* pwLine.P21 variable */ = (((-data->localData[0]->realVars[135] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[119] /* pwLine.ir.re variable */) - ((data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[118] /* pwLine.ir.im variable */))) * (data->simulationInfo->realParameter[287]);
  TRACE_POP
}
/*
equation index: 924
type: SIMPLE_ASSIGN
FAULT._V = sqrt(pwLine3.vr.re ^ 2.0 + pwLine3.vr.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_924(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,924};
  modelica_real tmp10;
  modelica_real tmp11;
  tmp10 = data->localData[0]->realVars[145] /* pwLine3.vr.re variable */;
  tmp11 = data->localData[0]->realVars[144] /* pwLine3.vr.im variable */;
  data->localData[0]->realVars[32] /* FAULT.V variable */ = sqrt((tmp10 * tmp10) + (tmp11 * tmp11));
  TRACE_POP
}
/*
equation index: 925
type: SIMPLE_ASSIGN
$cse4 = atan2(pwLine3.vr.im, pwLine3.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_925(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,925};
  data->localData[0]->realVars[28] /* $cse4 variable */ = atan2(data->localData[0]->realVars[144] /* pwLine3.vr.im variable */, data->localData[0]->realVars[145] /* pwLine3.vr.re variable */);
  TRACE_POP
}
/*
equation index: 926
type: SIMPLE_ASSIGN
FAULT._angle = 57.29577951308232 * $cse4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_926(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,926};
  data->localData[0]->realVars[33] /* FAULT.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[28] /* $cse4 variable */);
  TRACE_POP
}
/*
equation index: 927
type: SIMPLE_ASSIGN
pwLine3._P21 = ((-pwLine3.vr.re) * pwLine3.ir.re - pwLine3.vr.im * pwLine3.ir.im) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_927(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,927};
  data->localData[0]->realVars[137] /* pwLine3.P21 variable */ = (((-data->localData[0]->realVars[145] /* pwLine3.vr.re variable */)) * (data->localData[0]->realVars[141] /* pwLine3.ir.re variable */) - ((data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[140] /* pwLine3.ir.im variable */))) * (data->simulationInfo->realParameter[309]);
  TRACE_POP
}
/*
equation index: 928
type: SIMPLE_ASSIGN
pwLine3._Q21 = (pwLine3.vr.re * pwLine3.ir.im - pwLine3.vr.im * pwLine3.ir.re) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_928(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,928};
  data->localData[0]->realVars[139] /* pwLine3.Q21 variable */ = ((data->localData[0]->realVars[145] /* pwLine3.vr.re variable */) * (data->localData[0]->realVars[140] /* pwLine3.ir.im variable */) - ((data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[141] /* pwLine3.ir.re variable */))) * (data->simulationInfo->realParameter[309]);
  TRACE_POP
}
/*
equation index: 929
type: SIMPLE_ASSIGN
pwLine4._P12 = (pwLine3.vr.re * pwLine4.is.re + pwLine3.vr.im * pwLine4.is.im) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_929(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,929};
  data->localData[0]->realVars[146] /* pwLine4.P12 variable */ = ((data->localData[0]->realVars[145] /* pwLine3.vr.re variable */) * (data->localData[0]->realVars[153] /* pwLine4.is.re variable */) + (data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[152] /* pwLine4.is.im variable */)) * (data->simulationInfo->realParameter[320]);
  TRACE_POP
}
/*
equation index: 930
type: SIMPLE_ASSIGN
pwLine4._Q12 = (pwLine3.vr.im * pwLine4.is.re - pwLine3.vr.re * pwLine4.is.im) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_930(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,930};
  data->localData[0]->realVars[148] /* pwLine4.Q12 variable */ = ((data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[153] /* pwLine4.is.re variable */) - ((data->localData[0]->realVars[145] /* pwLine3.vr.re variable */) * (data->localData[0]->realVars[152] /* pwLine4.is.im variable */))) * (data->simulationInfo->realParameter[320]);
  TRACE_POP
}
/*
equation index: 931
type: SIMPLE_ASSIGN
pwLine1._P21 = ((-pwLine1.vr.re) * pwLine1.ir.re - pwLine1.vr.im * pwLine1.ir.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_931(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,931};
  data->localData[0]->realVars[125] /* pwLine1.P21 variable */ = (((-data->localData[0]->realVars[133] /* pwLine1.vr.re variable */)) * (data->localData[0]->realVars[129] /* pwLine1.ir.re variable */) - ((data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[128] /* pwLine1.ir.im variable */))) * (data->simulationInfo->realParameter[298]);
  TRACE_POP
}
/*
equation index: 932
type: SIMPLE_ASSIGN
pwLine1._Q21 = (pwLine1.vr.re * pwLine1.ir.im - pwLine1.vr.im * pwLine1.ir.re) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_932(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,932};
  data->localData[0]->realVars[127] /* pwLine1.Q21 variable */ = ((data->localData[0]->realVars[133] /* pwLine1.vr.re variable */) * (data->localData[0]->realVars[128] /* pwLine1.ir.im variable */) - ((data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[129] /* pwLine1.ir.re variable */))) * (data->simulationInfo->realParameter[298]);
  TRACE_POP
}
/*
equation index: 933
type: SIMPLE_ASSIGN
GEN2._V = sqrt(pwLine1.vr.re ^ 2.0 + pwLine1.vr.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_933(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,933};
  modelica_real tmp12;
  modelica_real tmp13;
  tmp12 = data->localData[0]->realVars[133] /* pwLine1.vr.re variable */;
  tmp13 = data->localData[0]->realVars[132] /* pwLine1.vr.im variable */;
  data->localData[0]->realVars[40] /* GEN2.V variable */ = sqrt((tmp12 * tmp12) + (tmp13 * tmp13));
  TRACE_POP
}
/*
equation index: 934
type: SIMPLE_ASSIGN
gENCLS._V = GEN2.V
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_934(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,934};
  data->localData[0]->realVars[86] /* gENCLS.V variable */ = data->localData[0]->realVars[40] /* GEN2.V variable */;
  TRACE_POP
}
/*
equation index: 935
type: SIMPLE_ASSIGN
gENCLS._anglev = atan2(pwLine1.vr.im, pwLine1.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_935(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,935};
  data->localData[0]->realVars[87] /* gENCLS.anglev variable */ = atan2(data->localData[0]->realVars[132] /* pwLine1.vr.im variable */, data->localData[0]->realVars[133] /* pwLine1.vr.re variable */);
  TRACE_POP
}
/*
equation index: 936
type: SIMPLE_ASSIGN
GEN2._angle = 57.29577951308232 * gENCLS.anglev
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_936(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,936};
  data->localData[0]->realVars[41] /* GEN2.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[87] /* gENCLS.anglev variable */);
  TRACE_POP
}
/*
equation index: 937
type: SIMPLE_ASSIGN
pwLine4._P21 = ((-pwLine1.vr.re) * pwLine4.ir.re - pwLine1.vr.im * pwLine4.ir.im) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_937(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,937};
  data->localData[0]->realVars[147] /* pwLine4.P21 variable */ = (((-data->localData[0]->realVars[133] /* pwLine1.vr.re variable */)) * (data->localData[0]->realVars[151] /* pwLine4.ir.re variable */) - ((data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[150] /* pwLine4.ir.im variable */))) * (data->simulationInfo->realParameter[320]);
  TRACE_POP
}
/*
equation index: 938
type: SIMPLE_ASSIGN
pwLine4._Q21 = (pwLine1.vr.re * pwLine4.ir.im - pwLine1.vr.im * pwLine4.ir.re) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_938(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,938};
  data->localData[0]->realVars[149] /* pwLine4.Q21 variable */ = ((data->localData[0]->realVars[133] /* pwLine1.vr.re variable */) * (data->localData[0]->realVars[150] /* pwLine4.ir.im variable */) - ((data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[151] /* pwLine4.ir.re variable */))) * (data->simulationInfo->realParameter[320]);
  TRACE_POP
}
/*
equation index: 939
type: SIMPLE_ASSIGN
gENCLS._P = (-pwLine1.vr.re) * gENCLS.p.ir - pwLine1.vr.im * gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_939(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,939};
  data->localData[0]->realVars[84] /* gENCLS.P variable */ = ((-data->localData[0]->realVars[133] /* pwLine1.vr.re variable */)) * (data->localData[0]->realVars[92] /* gENCLS.p.ir variable */) - ((data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[91] /* gENCLS.p.ii variable */));
  TRACE_POP
}
/*
equation index: 940
type: SIMPLE_ASSIGN
gENCLS._Q = pwLine1.vr.re * gENCLS.p.ii - pwLine1.vr.im * gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_940(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,940};
  data->localData[0]->realVars[85] /* gENCLS.Q variable */ = (data->localData[0]->realVars[133] /* pwLine1.vr.re variable */) * (data->localData[0]->realVars[91] /* gENCLS.p.ii variable */) - ((data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[92] /* gENCLS.p.ir variable */));
  TRACE_POP
}
/*
equation index: 945
type: ALGORITHM

  assert(eSST1A.imLimited1.uMax >= eSST1A.imLimited1.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(eSST1A.imLimited1.uMax, 6, 0, true) + ") < uMin (=" + String(eSST1A.imLimited1.uMin, 6, 0, true) + ")");
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_945(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,945};
  modelica_boolean tmp14;
  static const MMC_DEFSTRINGLIT(tmp15,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp16;
  static const MMC_DEFSTRINGLIT(tmp17,11,") < uMin (=");
  modelica_string tmp18;
  static int tmp19 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp14 = GreaterEq(data->simulationInfo->realParameter[164],data->simulationInfo->realParameter[165]);
    if(!tmp14)
    {
      tmp16 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[164], ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp15),tmp16);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp17));
      tmp18 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[165], ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp18);
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
/*
equation index: 944
type: ALGORITHM

  assert(eSST1A.imLimited.uMax >= eSST1A.imLimited.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(eSST1A.imLimited.uMax, 6, 0, true) + ") < uMin (=" + String(eSST1A.imLimited.uMin, 6, 0, true) + ")");
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_944(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,944};
  modelica_boolean tmp20;
  static const MMC_DEFSTRINGLIT(tmp21,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp22;
  static const MMC_DEFSTRINGLIT(tmp23,11,") < uMin (=");
  modelica_string tmp24;
  static int tmp25 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp20 = GreaterEq(data->simulationInfo->realParameter[162],data->simulationInfo->realParameter[163]);
    if(!tmp20)
    {
      tmp22 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[162], ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp21),tmp22);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp23));
      tmp24 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[163], ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp24);
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
equation index: 942
type: WHEN

when {$whenCondition2} then
  reinit(eSST1A._simpleLagLim._state,  eSST1A.simpleLagLim.outMax);
end when;
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_942(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,942};
  if((data->localData[0]->booleanVars[1] /* $whenCondition2 DISCRETE */ && !data->simulationInfo->booleanVarsPre[1] /* $whenCondition2 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[169];
    infoStreamPrint(LOG_EVENTS, 0, "reinit eSST1A.simpleLagLim.state = %g", data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  else if((data->localData[0]->booleanVars[0] /* $whenCondition1 DISCRETE */ && !data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[170];
    infoStreamPrint(LOG_EVENTS, 0, "reinit eSST1A.simpleLagLim.state = %g", data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}
/*
equation index: 941
type: ALGORITHM

  assert(eSST1A.add3.y >= eSST1A.imGain1.y, "Input signals are not consistent: limit1 < limit2");
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_941(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,941};
  modelica_boolean tmp26;
  static const MMC_DEFSTRINGLIT(tmp27,49,"Input signals are not consistent: limit1 < limit2");
  static int tmp28 = 0;
  {
    tmp26 = GreaterEq(data->localData[0]->realVars[66] /* eSST1A.add3.y variable */,data->localData[0]->realVars[76] /* eSST1A.imGain1.y variable */);
    if(!tmp26)
    {
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Nonlinear.mo",116,5,116,82,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neSST1A.add3.y >= eSST1A.imGain1.y", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp27)));
      }
    }
  }
  TRACE_POP
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
  
  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_functionLocalKnownVars(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_751(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_752(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_753(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_754(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_755(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_756(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_757(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_758(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_759(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_760(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_761(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_762(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_763(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_764(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_855(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_856(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_857(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_858(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_859(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_860(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_861(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_862(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_863(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_864(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_865(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_866(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_867(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_868(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_869(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_870(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_871(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_872(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_873(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_874(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_875(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_876(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_877(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_878(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_899(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_900(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_901(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_902(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_903(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_904(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_905(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_906(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_907(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_908(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_909(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_910(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_911(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_912(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_913(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_914(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_915(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_916(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_917(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_918(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_919(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_920(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_921(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_922(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_923(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_924(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_925(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_926(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_927(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_928(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_929(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_930(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_931(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_932(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_933(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_934(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_935(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_936(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_937(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_938(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_939(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_940(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_945(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_944(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_942(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_941(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}


int OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/* forwarded equations */
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_752(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_753(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_754(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_755(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_756(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_757(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_758(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_759(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_760(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_761(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_762(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_763(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_764(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_855(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_856(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_857(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_858(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_859(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_860(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_861(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_862(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_863(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_864(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_865(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_866(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_872(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_873(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_874(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_875(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_876(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_877(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_878(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_899(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_900(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_901(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_902(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_905(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_906(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_907(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_908(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_909(DATA* data, threadData_t *threadData);

static void functionODE_system0(DATA *data, threadData_t *threadData)
{
    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_752(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_753(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_754(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_755(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_756(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_757(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_758(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_759(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_760(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_761(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_762(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_763(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_764(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_855(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_856(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_857(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_858(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_859(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_860(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_861(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_862(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_863(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_864(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_865(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_866(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_872(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_873(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_874(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_875(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_876(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_877(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_878(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_899(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_900(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_901(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_902(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_905(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_906(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_907(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_908(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_909(data, threadData);
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  data->simulationInfo->callStatistics.functionODE++;
  
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_functionLocalKnownVars(data, threadData);
  functionODE_system0(data, threadData);

  
  TRACE_POP
  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char**argv, DATA *data, threadData_t *threadData);

#include "OpenIPSL.Examples.Controls.PSSE.ES.ESST1A_12jac.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESST1A_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_callback = {
   (int (*)(DATA *, threadData_t *, void *)) OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_performSimulation,
   (int (*)(DATA *, threadData_t *, void *)) OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_performQSSSimulation,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_updateContinuousSystem,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_callExternalObjectDestructors,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_initialNonLinearSystem,
   NULL,
   NULL,
   #if !defined(OMC_NO_STATESELECTION)
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_initializeStateSets,
   #else
   NULL,
   #endif
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_initializeDAEmodeData,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_functionODE,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_functionAlgebraics,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_functionDAE,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_functionLocalKnownVars,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_input_function,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_input_function_init,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_input_function_updateStartValues,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_output_function,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_function_storeDelayed,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_updateBoundVariableAttributes,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_functionInitialEquations,
   1, /* useHomotopy - 0: local homotopy (equidistant lambda), 1: global homotopy (equidistant lambda), 2: new global homotopy approach (adaptive lambda), 3: new local homotopy approach (adaptive lambda)*/
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_functionInitialEquations_lambda0,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_functionRemovedInitialEquations,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_updateBoundParameters,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_checkForAsserts,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_function_ZeroCrossingsEquations,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_function_ZeroCrossings,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_function_updateRelations,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_zeroCrossingDescription,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_relationDescription,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_function_initSample,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_INDEX_JAC_A,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_INDEX_JAC_B,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_INDEX_JAC_C,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_INDEX_JAC_D,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_initialAnalyticJacobianA,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_initialAnalyticJacobianB,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_initialAnalyticJacobianC,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_initialAnalyticJacobianD,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_functionJacA_column,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_functionJacB_column,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_functionJacC_column,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_functionJacD_column,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_linear_model_frame,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_linear_model_datarecovery_frame,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_mayer,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_lagrange,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_pickUpBoundsForInputsInOptimization,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_setInputData,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_getTimeGrid,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_symbolicInlineSystem,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_function_initSynchronous,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_function_updateSynchronous,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_function_equationsSynchronous,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_inputNames,
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
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "OpenIPSL.Examples.Controls.PSSE.ES.ESST1A";
  data->modelData->modelFilePrefix = "OpenIPSL.Examples.Controls.PSSE.ES.ESST1A";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "/home/manuelnvro/dev/Gitted/OpenIPSL/OpenIPSL/Examples/Controls/PSSE/ES";
  data->modelData->modelGUID = "{8978867c-ad95-44ed-974e-e680e1fa2a79}";
  #if defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME)
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  #else
  #if defined(_MSC_VER) /* handle joke compilers */
  {
  /* for MSVC we encode a string like char x[] = {'a', 'b', 'c', '\0'} */
  /* because the string constant limit is 65535 bytes */
  static const char contents_init[] =
    #include "OpenIPSL.Examples.Controls.PSSE.ES.ESST1A_init.c"
    ;
  static const char contents_info[] =
    #include "OpenIPSL.Examples.Controls.PSSE.ES.ESST1A_info.c"
    ;
    data->modelData->initXMLData = contents_init;
    data->modelData->modelDataXml.infoXMLData = contents_info;
  }
  #else /* handle real compilers */
  data->modelData->initXMLData =
  #include "OpenIPSL.Examples.Controls.PSSE.ES.ESST1A_init.c"
    ;
  data->modelData->modelDataXml.infoXMLData =
  #include "OpenIPSL.Examples.Controls.PSSE.ES.ESST1A_info.c"
    ;
  #endif /* defined(_MSC_VER) */
  #endif /* defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME) */
  
  data->modelData->nStates = 13;
  data->modelData->nVariablesReal = 154;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesInteger = 0;
  data->modelData->nVariablesBoolean = 2;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 328;
  data->modelData->nParametersInteger = 14;
  data->modelData->nParametersBoolean = 75;
  data->modelData->nParametersString = 0;
  data->modelData->nInputVars = 0;
  data->modelData->nOutputVars = 0;
  
  data->modelData->nAliasReal = 124;
  data->modelData->nAliasInteger = 0;
  data->modelData->nAliasBoolean = 0;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 27;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 23;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  data->modelData->modelDataXml.fileName = "OpenIPSL.Examples.Controls.PSSE.ES.ESST1A_info.json";
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 5;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 1208;
  data->modelData->nMixedSystems = 0;
  data->modelData->nLinearSystems = 0;
  data->modelData->nNonLinearSystems = 4;
  data->modelData->nStateSets = 0;
  data->modelData->nJacobians = 6;
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
  
    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_setupDataStruc(&data, threadData);
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


