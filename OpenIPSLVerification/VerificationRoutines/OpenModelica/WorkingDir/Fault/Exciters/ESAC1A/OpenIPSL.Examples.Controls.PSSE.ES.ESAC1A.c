/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC1A_model.h"
#include "simulation/solver/events.h"

#define prefixedName_performSimulation OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_performSimulation
#define prefixedName_updateContinuousSystem OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_updateContinuousSystem
#include <simulation/solver/perform_simulation.c>

#define prefixedName_performQSSSimulation OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_performQSSSimulation
#include <simulation/solver/perform_qss_simulation.c>

/* dummy VARINFO and FILEINFO */
const FILE_INFO dummyFILE_INFO = omc_dummyFileInfo;
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/*
equation index: 730
type: SIMPLE_ASSIGN
eSAC1A._EFD0 = gENROE.efd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_730(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,730};
  data->localData[0]->realVars[60] /* eSAC1A.EFD0 variable */ = data->simulationInfo->realParameter[258];
  TRACE_POP
}
/*
equation index: 731
type: SIMPLE_ASSIGN
der(gENCLS._delta) = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_731(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,731};
  data->localData[0]->realVars[18] /* der(gENCLS.delta) STATE_DER */ = 0.0;
  TRACE_POP
}
/*
equation index: 732
type: SIMPLE_ASSIGN
der(gENCLS._eq) = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_732(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,732};
  data->localData[0]->realVars[19] /* der(gENCLS.eq) STATE_DER */ = 0.0;
  TRACE_POP
}
/*
equation index: 733
type: SIMPLE_ASSIGN
gENROE._PSIppd = gENROE.Epq * gENROE.K3d + gENROE.PSIkd * gENROE.K4d
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_733(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,733};
  data->localData[0]->realVars[95] /* gENROE.PSIppd variable */ = (data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */) * (data->simulationInfo->realParameter[208]) + (data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[210]);
  TRACE_POP
}
/*
equation index: 734
type: SIMPLE_ASSIGN
gENROE._PSIppq = gENROE.PSIkq * gENROE.K4q + gENROE.Epd * gENROE.K3q
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_734(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,734};
  data->localData[0]->realVars[96] /* gENROE.PSIppq variable */ = (data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[211]) + (data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */) * (data->simulationInfo->realParameter[209]);
  TRACE_POP
}
/*
equation index: 735
type: SIMPLE_ASSIGN
gENROE._PSIpp = sqrt(gENROE.PSIppd ^ 2.0 + gENROE.PSIppq ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_735(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,735};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[95] /* gENROE.PSIppd variable */;
  tmp1 = data->localData[0]->realVars[96] /* gENROE.PSIppq variable */;
  data->localData[0]->realVars[94] /* gENROE.PSIpp variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 736
type: SIMPLE_ASSIGN
$cse5 = OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_736(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,736};
  data->localData[0]->realVars[29] /* $cse5 variable */ = omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[94] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[228], data->simulationInfo->realParameter[229], 1.0, 1.2);
  TRACE_POP
}
/*
equation index: 737
type: SIMPLE_ASSIGN
der(gENROE._delta) = gENROE.w_b * gENROE.w
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_737(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,737};
  data->localData[0]->realVars[24] /* der(gENROE.delta) STATE_DER */ = (data->simulationInfo->realParameter[272]) * (data->localData[0]->realVars[12] /* gENROE.w STATE(1) */);
  TRACE_POP
}
/*
equation index: 738
type: SIMPLE_ASSIGN
eSAC1A._imLeadLag._TF._x[1] = eSAC1A.imLeadLag.TF.x_scaled[1] / eSAC1A.imLeadLag.TF.a_end
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_738(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,738};
  data->localData[0]->realVars[67] /* eSAC1A.imLeadLag.TF.x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[1] /* eSAC1A.imLeadLag.TF.x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[121],"eSAC1A.imLeadLag.TF.a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 739
type: SIMPLE_ASSIGN
eSAC1A._rotatingExciterWithDemagnetization._Sum._u2 = eSAC1A.rotatingExciterWithDemagnetization.gain.k * eSAC1A.rotatingExciterWithDemagnetization.sISO.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_739(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,739};
  data->localData[0]->realVars[76] /* eSAC1A.rotatingExciterWithDemagnetization.Sum.u2 variable */ = (data->simulationInfo->realParameter[150]) * (data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */);
  TRACE_POP
}
/*
equation index: 740
type: SIMPLE_ASSIGN
eSAC1A._rotatingExciterWithDemagnetization._VE._u2 = OpenIPSL.NonElectrical.Functions.SE(eSAC1A.rotatingExciterWithDemagnetization.sISO.y, eSAC1A.rotatingExciterWithDemagnetization.se1.SE1, eSAC1A.rotatingExciterWithDemagnetization.se1.SE2, eSAC1A.rotatingExciterWithDemagnetization.se1.E1, eSAC1A.rotatingExciterWithDemagnetization.se1.E2)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_740(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,740};
  data->localData[0]->realVars[77] /* eSAC1A.rotatingExciterWithDemagnetization.VE.u2 variable */ = omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */, data->simulationInfo->realParameter[157], data->simulationInfo->realParameter[158], data->simulationInfo->realParameter[155], data->simulationInfo->realParameter[156]);
  TRACE_POP
}
/*
equation index: 741
type: SIMPLE_ASSIGN
eSAC1A._rotatingExciterWithDemagnetization._Sum._u1 = eSAC1A.rotatingExciterWithDemagnetization.sISO.y * eSAC1A.rotatingExciterWithDemagnetization.VE.u2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_741(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,741};
  data->localData[0]->realVars[75] /* eSAC1A.rotatingExciterWithDemagnetization.Sum.u1 variable */ = (data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */) * (data->localData[0]->realVars[77] /* eSAC1A.rotatingExciterWithDemagnetization.VE.u2 variable */);
  TRACE_POP
}
/*
equation index: 742
type: SIMPLE_ASSIGN
$cse7 = cos(gENROE.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_742(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,742};
  data->localData[0]->realVars[31] /* $cse7 variable */ = cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 743
type: SIMPLE_ASSIGN
$cse6 = sin(gENROE.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_743(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,743};
  data->localData[0]->realVars[30] /* $cse6 variable */ = sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 744
type: SIMPLE_ASSIGN
$cse2 = cos(gENCLS.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_744(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,744};
  data->localData[0]->realVars[27] /* $cse2 variable */ = cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 745
type: SIMPLE_ASSIGN
$cse1 = sin(gENCLS.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_745(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,745};
  data->localData[0]->realVars[26] /* $cse1 variable */ = sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */);
  TRACE_POP
}
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_746(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_747(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_748(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_749(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_750(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_751(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_752(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_753(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_754(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_755(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_756(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_757(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_758(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_759(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_760(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_761(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_762(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_763(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_764(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_765(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_766(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_767(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_768(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_790(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_789(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_788(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_787(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_786(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_785(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_784(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_783(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_782(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_781(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_780(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_779(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_778(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_777(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_776(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_775(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_774(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_773(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_772(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_771(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_770(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_769(DATA*, threadData_t*);
/*
equation index: 836
indexNonlinear: 4
type: NONLINEAR

vars: {pwLine1._is._im, constantLoad._p._ii, pwLine1._is._re, pwLine._ir._re, pwLine3._ir._re, pwLine4._is._re, pwLine3._ir._im, pwLine4._is._im, pwLine3._is._re, pwLine3._is._im, pwLine1._ir._im, pwLine1._ir._re, gENCLS._iq, gENCLS._id, pwLine1._vr._re, pwLine1._vr._im, gENROE._iq, gENROE._id, pwLine1._vs._im, pwLine3._vr._im, pwLine3._vr._re, pwLine1._vs._re}
eqns: {746, 747, 748, 749, 750, 751, 752, 753, 754, 755, 756, 757, 758, 759, 760, 761, 762, 763, 764, 765, 766, 767, 768, 790, 789, 788, 787, 786, 785, 784, 783, 782, 781, 780, 779, 778, 777, 776, 775, 774, 773, 772, 771, 770, 769}
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_836(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,836};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 836 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[0] = data->localData[0]->realVars[125] /* pwLine1.is.im variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[1] = data->localData[0]->realVars[53] /* constantLoad.p.ii variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[2] = data->localData[0]->realVars[126] /* pwLine1.is.re variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[3] = data->localData[0]->realVars[114] /* pwLine.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[4] = data->localData[0]->realVars[136] /* pwLine3.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[5] = data->localData[0]->realVars[148] /* pwLine4.is.re variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[6] = data->localData[0]->realVars[135] /* pwLine3.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[7] = data->localData[0]->realVars[147] /* pwLine4.is.im variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[8] = data->localData[0]->realVars[138] /* pwLine3.is.re variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[9] = data->localData[0]->realVars[137] /* pwLine3.is.im variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[10] = data->localData[0]->realVars[123] /* pwLine1.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[11] = data->localData[0]->realVars[124] /* pwLine1.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[12] = data->localData[0]->realVars[84] /* gENCLS.iq variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[13] = data->localData[0]->realVars[83] /* gENCLS.id variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[14] = data->localData[0]->realVars[128] /* pwLine1.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[15] = data->localData[0]->realVars[127] /* pwLine1.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[16] = data->localData[0]->realVars[104] /* gENROE.iq variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[17] = data->localData[0]->realVars[103] /* gENROE.id variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[18] = data->localData[0]->realVars[129] /* pwLine1.vs.im variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[19] = data->localData[0]->realVars[139] /* pwLine3.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[20] = data->localData[0]->realVars[140] /* pwLine3.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[21] = data->localData[0]->realVars[130] /* pwLine1.vs.re variable */;
  retValue = solve_nonlinear_system(data, threadData, 4);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,836};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 836 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[125] /* pwLine1.is.im variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[0];
  data->localData[0]->realVars[53] /* constantLoad.p.ii variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[1];
  data->localData[0]->realVars[126] /* pwLine1.is.re variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[2];
  data->localData[0]->realVars[114] /* pwLine.ir.re variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[3];
  data->localData[0]->realVars[136] /* pwLine3.ir.re variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[4];
  data->localData[0]->realVars[148] /* pwLine4.is.re variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[5];
  data->localData[0]->realVars[135] /* pwLine3.ir.im variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[6];
  data->localData[0]->realVars[147] /* pwLine4.is.im variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[7];
  data->localData[0]->realVars[138] /* pwLine3.is.re variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[8];
  data->localData[0]->realVars[137] /* pwLine3.is.im variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[9];
  data->localData[0]->realVars[123] /* pwLine1.ir.im variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[10];
  data->localData[0]->realVars[124] /* pwLine1.ir.re variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[11];
  data->localData[0]->realVars[84] /* gENCLS.iq variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[12];
  data->localData[0]->realVars[83] /* gENCLS.id variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[13];
  data->localData[0]->realVars[128] /* pwLine1.vr.re variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[14];
  data->localData[0]->realVars[127] /* pwLine1.vr.im variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[15];
  data->localData[0]->realVars[104] /* gENROE.iq variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[16];
  data->localData[0]->realVars[103] /* gENROE.id variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[17];
  data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[18];
  data->localData[0]->realVars[139] /* pwLine3.vr.im variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[19];
  data->localData[0]->realVars[140] /* pwLine3.vr.re variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[20];
  data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[21];
  TRACE_POP
}
/*
equation index: 837
type: SIMPLE_ASSIGN
LOAD._V = constantLoad.v
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_837(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,837};
  data->localData[0]->realVars[44] /* LOAD.V variable */ = data->localData[0]->realVars[55] /* constantLoad.v variable */;
  TRACE_POP
}
/*
equation index: 838
type: SIMPLE_ASSIGN
pwLine4._P12 = (pwLine3.vr.re * pwLine4.is.re + pwLine3.vr.im * pwLine4.is.im) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_838(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,838};
  data->localData[0]->realVars[141] /* pwLine4.P12 variable */ = ((data->localData[0]->realVars[140] /* pwLine3.vr.re variable */) * (data->localData[0]->realVars[148] /* pwLine4.is.re variable */) + (data->localData[0]->realVars[139] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[147] /* pwLine4.is.im variable */)) * (data->simulationInfo->realParameter[313]);
  TRACE_POP
}
/*
equation index: 839
type: SIMPLE_ASSIGN
pwLine4._Q12 = (pwLine3.vr.im * pwLine4.is.re - pwLine3.vr.re * pwLine4.is.im) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_839(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,839};
  data->localData[0]->realVars[143] /* pwLine4.Q12 variable */ = ((data->localData[0]->realVars[139] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[148] /* pwLine4.is.re variable */) - ((data->localData[0]->realVars[140] /* pwLine3.vr.re variable */) * (data->localData[0]->realVars[147] /* pwLine4.is.im variable */))) * (data->simulationInfo->realParameter[313]);
  TRACE_POP
}
/*
equation index: 840
type: SIMPLE_ASSIGN
FAULT._V = sqrt(pwLine3.vr.re ^ 2.0 + pwLine3.vr.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_840(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,840};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[140] /* pwLine3.vr.re variable */;
  tmp1 = data->localData[0]->realVars[139] /* pwLine3.vr.im variable */;
  data->localData[0]->realVars[32] /* FAULT.V variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 841
type: SIMPLE_ASSIGN
$cse4 = atan2(pwLine3.vr.im, pwLine3.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_841(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,841};
  data->localData[0]->realVars[28] /* $cse4 variable */ = atan2(data->localData[0]->realVars[139] /* pwLine3.vr.im variable */, data->localData[0]->realVars[140] /* pwLine3.vr.re variable */);
  TRACE_POP
}
/*
equation index: 842
type: SIMPLE_ASSIGN
FAULT._angle = 57.29577951308232 * $cse4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_842(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,842};
  data->localData[0]->realVars[33] /* FAULT.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[28] /* $cse4 variable */);
  TRACE_POP
}
/*
equation index: 843
type: SIMPLE_ASSIGN
pwLine3._P21 = ((-pwLine3.vr.re) * pwLine3.ir.re - pwLine3.vr.im * pwLine3.ir.im) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_843(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,843};
  data->localData[0]->realVars[132] /* pwLine3.P21 variable */ = (((-data->localData[0]->realVars[140] /* pwLine3.vr.re variable */)) * (data->localData[0]->realVars[136] /* pwLine3.ir.re variable */) - ((data->localData[0]->realVars[139] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[135] /* pwLine3.ir.im variable */))) * (data->simulationInfo->realParameter[302]);
  TRACE_POP
}
/*
equation index: 844
type: SIMPLE_ASSIGN
pwLine3._Q21 = (pwLine3.vr.re * pwLine3.ir.im - pwLine3.vr.im * pwLine3.ir.re) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_844(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,844};
  data->localData[0]->realVars[134] /* pwLine3.Q21 variable */ = ((data->localData[0]->realVars[140] /* pwLine3.vr.re variable */) * (data->localData[0]->realVars[135] /* pwLine3.ir.im variable */) - ((data->localData[0]->realVars[139] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[136] /* pwLine3.ir.re variable */))) * (data->simulationInfo->realParameter[302]);
  TRACE_POP
}
/*
equation index: 845
type: SIMPLE_ASSIGN
der(gENROE._PSIkq) = (gENROE.Epd + (gENROE.Xpq - gENROE.Xl) * gENROE.iq - gENROE.PSIkq) / gENROE.Tppq0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_845(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,845};
  data->localData[0]->realVars[23] /* der(gENROE.PSIkq) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[244] - data->simulationInfo->realParameter[239]) * (data->localData[0]->realVars[104] /* gENROE.iq variable */) - data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */,data->simulationInfo->realParameter[233],"gENROE.Tppq0",equationIndexes);
  TRACE_POP
}
/*
equation index: 846
type: SIMPLE_ASSIGN
gENROE._XaqIlq = gENROE.K1q * (gENROE.Epd + (gENROE.Xpq - gENROE.Xl) * gENROE.iq - gENROE.PSIkq) + gENROE.Epd + gENROE.iq * (gENROE.Xpq - gENROE.Xq) + $cse5 * gENROE.PSIppq * (gENROE.Xq - gENROE.Xl) / (gENROE.Xd - gENROE.Xl)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_846(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,846};
  data->localData[0]->realVars[100] /* gENROE.XaqIlq variable */ = (data->simulationInfo->realParameter[205]) * (data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[244] - data->simulationInfo->realParameter[239]) * (data->localData[0]->realVars[104] /* gENROE.iq variable */) - data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */) + data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->localData[0]->realVars[104] /* gENROE.iq variable */) * (data->simulationInfo->realParameter[244] - data->simulationInfo->realParameter[245]) + (data->localData[0]->realVars[29] /* $cse5 variable */) * ((data->localData[0]->realVars[96] /* gENROE.PSIppq variable */) * (DIVISION_SIM(data->simulationInfo->realParameter[245] - data->simulationInfo->realParameter[239],data->simulationInfo->realParameter[238] - data->simulationInfo->realParameter[239],"gENROE.Xd - gENROE.Xl",equationIndexes)));
  TRACE_POP
}
/*
equation index: 847
type: SIMPLE_ASSIGN
der(gENROE._Epd) = (-gENROE.XaqIlq) / gENROE.Tpq0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_847(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,847};
  data->localData[0]->realVars[20] /* der(gENROE.Epd) STATE_DER */ = DIVISION_SIM((-data->localData[0]->realVars[100] /* gENROE.XaqIlq variable */),data->simulationInfo->realParameter[234],"gENROE.Tpq0",equationIndexes);
  TRACE_POP
}
/*
equation index: 848
type: SIMPLE_ASSIGN
der(gENROE._PSIkd) = (gENROE.Epq + (gENROE.Xl - gENROE.Xpd) * gENROE.id - gENROE.PSIkd) / gENROE.Tppd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_848(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,848};
  data->localData[0]->realVars[22] /* der(gENROE.PSIkd) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[239] - data->simulationInfo->realParameter[240]) * (data->localData[0]->realVars[103] /* gENROE.id variable */) - data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */,data->simulationInfo->realParameter[232],"gENROE.Tppd0",equationIndexes);
  TRACE_POP
}
/*
equation index: 849
type: SIMPLE_ASSIGN
gENROE._Te = gENROE.PSId * gENROE.iq - gENROE.PSIq * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_849(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,849};
  data->localData[0]->realVars[99] /* gENROE.Te variable */ = (data->localData[0]->realVars[93] /* gENROE.PSId variable */) * (data->localData[0]->realVars[104] /* gENROE.iq variable */) - ((data->localData[0]->realVars[97] /* gENROE.PSIq variable */) * (data->localData[0]->realVars[103] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 850
type: SIMPLE_ASSIGN
der(gENROE._w) = 0.5 * ((gENROE.pm0 - gENROE.D * gENROE.w) / (1.0 + gENROE.w) - gENROE.Te) / gENROE.H
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_850(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,850};
  data->localData[0]->realVars[25] /* der(gENROE.w) STATE_DER */ = (0.5) * (DIVISION_SIM(DIVISION_SIM(data->simulationInfo->realParameter[265] - ((data->simulationInfo->realParameter[192]) * (data->localData[0]->realVars[12] /* gENROE.w STATE(1) */)),1.0 + data->localData[0]->realVars[12] /* gENROE.w STATE(1) */,"1.0 + gENROE.w",equationIndexes) - data->localData[0]->realVars[99] /* gENROE.Te variable */,data->simulationInfo->realParameter[197],"gENROE.H",equationIndexes));
  TRACE_POP
}
/*
equation index: 851
type: SIMPLE_ASSIGN
eSAC1A._XADIFD = gENROE.K1d * (gENROE.Epq + (gENROE.Xl - gENROE.Xpd) * gENROE.id - gENROE.PSIkd) + gENROE.Epq + gENROE.id * (gENROE.Xd - gENROE.Xpd) + $cse5 * gENROE.PSIppd
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_851(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,851};
  data->localData[0]->realVars[61] /* eSAC1A.XADIFD variable */ = (data->simulationInfo->realParameter[204]) * (data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[239] - data->simulationInfo->realParameter[240]) * (data->localData[0]->realVars[103] /* gENROE.id variable */) - data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */) + data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->localData[0]->realVars[103] /* gENROE.id variable */) * (data->simulationInfo->realParameter[238] - data->simulationInfo->realParameter[240]) + (data->localData[0]->realVars[29] /* $cse5 variable */) * (data->localData[0]->realVars[95] /* gENROE.PSIppd variable */);
  TRACE_POP
}
/*
equation index: 852
type: SIMPLE_ASSIGN
eSAC1A._derivative._u = eSAC1A.rotatingExciterWithDemagnetization.Sum.k1 * eSAC1A.rotatingExciterWithDemagnetization.Sum.u1 + eSAC1A.rotatingExciterWithDemagnetization.Sum.k2 * eSAC1A.rotatingExciterWithDemagnetization.Sum.u2 + eSAC1A.rotatingExciterWithDemagnetization.Sum.k3 * eSAC1A.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_852(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,852};
  data->localData[0]->realVars[63] /* eSAC1A.derivative.u variable */ = (data->simulationInfo->realParameter[146]) * (data->localData[0]->realVars[75] /* eSAC1A.rotatingExciterWithDemagnetization.Sum.u1 variable */) + (data->simulationInfo->realParameter[147]) * (data->localData[0]->realVars[76] /* eSAC1A.rotatingExciterWithDemagnetization.Sum.u2 variable */) + (data->simulationInfo->realParameter[148]) * (data->localData[0]->realVars[61] /* eSAC1A.XADIFD variable */);
  TRACE_POP
}
/*
equation index: 853
type: SIMPLE_ASSIGN
der(eSAC1A._derivative._x) = (eSAC1A.derivative.u - eSAC1A.derivative.x) / eSAC1A.derivative.T
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_853(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,853};
  data->localData[0]->realVars[13] /* der(eSAC1A.derivative.x) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[63] /* eSAC1A.derivative.u variable */ - data->localData[0]->realVars[0] /* eSAC1A.derivative.x STATE(1) */,data->simulationInfo->realParameter[111],"eSAC1A.derivative.T",equationIndexes);
  TRACE_POP
}
/*
equation index: 854
type: SIMPLE_ASSIGN
eSAC1A._derivative._y = 0.03 * (eSAC1A.derivative.u - eSAC1A.derivative.x) / eSAC1A.derivative.T
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_854(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,854};
  data->localData[0]->realVars[64] /* eSAC1A.derivative.y variable */ = (0.03) * (DIVISION_SIM(data->localData[0]->realVars[63] /* eSAC1A.derivative.u variable */ - data->localData[0]->realVars[0] /* eSAC1A.derivative.x STATE(1) */,data->simulationInfo->realParameter[111],"eSAC1A.derivative.T",equationIndexes));
  TRACE_POP
}
/*
equation index: 855
type: SIMPLE_ASSIGN
eSAC1A._rectifierCommutationVoltageDrop._division._u1 = eSAC1A.rectifierCommutationVoltageDrop.gain2.k * eSAC1A.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_855(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,855};
  data->localData[0]->realVars[72] /* eSAC1A.rectifierCommutationVoltageDrop.division.u1 variable */ = (data->simulationInfo->realParameter[138]) * (data->localData[0]->realVars[61] /* eSAC1A.XADIFD variable */);
  TRACE_POP
}
/*
equation index: 856
type: SIMPLE_ASSIGN
eSAC1A._rectifierCommutationVoltageDrop._division._y = eSAC1A.rectifierCommutationVoltageDrop.division.u1 / eSAC1A.rotatingExciterWithDemagnetization.sISO.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_856(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,856};
  data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */ = DIVISION_SIM(data->localData[0]->realVars[72] /* eSAC1A.rectifierCommutationVoltageDrop.division.u1 variable */,data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */,"eSAC1A.rotatingExciterWithDemagnetization.sISO.y",equationIndexes);
  TRACE_POP
}
/*
equation index: 857
type: SIMPLE_ASSIGN
eSAC1A._rectifierCommutationVoltageDrop._fEX._y = if eSAC1A.rectifierCommutationVoltageDrop.division.y <= 0.0 then 1.0 else if eSAC1A.rectifierCommutationVoltageDrop.division.y > 0.0 and eSAC1A.rectifierCommutationVoltageDrop.division.y <= 0.433 then 1.0 + (-0.577) * eSAC1A.rectifierCommutationVoltageDrop.division.y else if eSAC1A.rectifierCommutationVoltageDrop.division.y > 0.433 and eSAC1A.rectifierCommutationVoltageDrop.division.y < 0.75 then sqrt(0.75 - eSAC1A.rectifierCommutationVoltageDrop.division.y ^ 2.0) else if eSAC1A.rectifierCommutationVoltageDrop.division.y >= 0.75 and eSAC1A.rectifierCommutationVoltageDrop.division.y <= 1.0 then 1.732 * (1.0 - eSAC1A.rectifierCommutationVoltageDrop.division.y) else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_857(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,857};
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_boolean tmp9;
  modelica_boolean tmp10;
  modelica_boolean tmp11;
  modelica_real tmp12;
  modelica_boolean tmp13;
  modelica_real tmp14;
  modelica_boolean tmp15;
  modelica_real tmp16;
  RELATIONHYSTERESIS(tmp2, data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */, 0.0, 14, LessEq);
  tmp15 = (modelica_boolean)tmp2;
  if(tmp15)
  {
    tmp16 = 1.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp3, data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */, 0.0, 15, Greater);
    RELATIONHYSTERESIS(tmp4, data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */, 0.433, 16, LessEq);
    tmp13 = (modelica_boolean)(tmp3 && tmp4);
    if(tmp13)
    {
      tmp14 = 1.0 + (-0.577) * (data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */);
    }
    else
    {
      RELATIONHYSTERESIS(tmp5, data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */, 0.433, 17, Greater);
      RELATIONHYSTERESIS(tmp6, data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */, 0.75, 18, Less);
      tmp11 = (modelica_boolean)(tmp5 && tmp6);
      if(tmp11)
      {
        tmp7 = data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */;
        tmp8 = 0.75 - ((tmp7 * tmp7));
        if(!(tmp8 >= 0.0))
        {
          FILE_INFO info = {"",0,0,0,0,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(0.75 - eSAC1A.rectifierCommutationVoltageDrop.division.y ^ 2.0) was %g should be >= 0", tmp8);
        }
        tmp12 = sqrt(tmp8);
      }
      else
      {
        RELATIONHYSTERESIS(tmp9, data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */, 0.75, 19, GreaterEq);
        RELATIONHYSTERESIS(tmp10, data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */, 1.0, 20, LessEq);
        tmp12 = ((tmp9 && tmp10)?(1.732) * (1.0 - data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */):0.0);
      }
      tmp14 = tmp12;
    }
    tmp16 = tmp14;
  }
  data->localData[0]->realVars[74] /* eSAC1A.rectifierCommutationVoltageDrop.fEX.y variable */ = tmp16;
  TRACE_POP
}
/*
equation index: 858
type: SIMPLE_ASSIGN
eSAC1A._EFD = eSAC1A.rotatingExciterWithDemagnetization.sISO.y * eSAC1A.rectifierCommutationVoltageDrop.fEX.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_858(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,858};
  data->localData[0]->realVars[59] /* eSAC1A.EFD variable */ = (data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */) * (data->localData[0]->realVars[74] /* eSAC1A.rectifierCommutationVoltageDrop.fEX.y variable */);
  TRACE_POP
}
/*
equation index: 859
type: SIMPLE_ASSIGN
der(gENROE._Epq) = (eSAC1A.EFD - eSAC1A.XADIFD) / gENROE.Tpd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_859(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,859};
  data->localData[0]->realVars[21] /* der(gENROE.Epq) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[59] /* eSAC1A.EFD variable */ - data->localData[0]->realVars[61] /* eSAC1A.XADIFD variable */,data->simulationInfo->realParameter[231],"gENROE.Tpd0",equationIndexes);
  TRACE_POP
}
/*
equation index: 860
type: SIMPLE_ASSIGN
gENROE._I = sqrt(pwLine.is.im ^ 2.0 + pwLine.is.re ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_860(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,860};
  modelica_real tmp17;
  modelica_real tmp18;
  tmp17 = data->localData[0]->realVars[115] /* pwLine.is.im variable */;
  tmp18 = data->localData[0]->realVars[116] /* pwLine.is.re variable */;
  data->localData[0]->realVars[90] /* gENROE.I variable */ = sqrt((tmp17 * tmp17) + (tmp18 * tmp18));
  TRACE_POP
}
/*
equation index: 861
type: SIMPLE_ASSIGN
gENROE._anglei = atan2(-pwLine.is.im, -pwLine.is.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_861(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,861};
  data->localData[0]->realVars[101] /* gENROE.anglei variable */ = atan2((-data->localData[0]->realVars[115] /* pwLine.is.im variable */), (-data->localData[0]->realVars[116] /* pwLine.is.re variable */));
  TRACE_POP
}
/*
equation index: 862
type: SIMPLE_ASSIGN
gENROE._P = pwLine.vs.im * pwLine.is.im + pwLine.vs.re * pwLine.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_862(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,862};
  data->localData[0]->realVars[91] /* gENROE.P variable */ = (data->localData[0]->realVars[117] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[115] /* pwLine.is.im variable */) + (data->localData[0]->realVars[118] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[116] /* pwLine.is.re variable */);
  TRACE_POP
}
/*
equation index: 863
type: SIMPLE_ASSIGN
gENROE._PELEC = gENROE.P / gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_863(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,863};
  data->localData[0]->realVars[92] /* gENROE.PELEC variable */ = DIVISION_SIM(data->localData[0]->realVars[91] /* gENROE.P variable */,data->simulationInfo->realParameter[191],"gENROE.CoB",equationIndexes);
  TRACE_POP
}
/*
equation index: 864
type: SIMPLE_ASSIGN
gENROE._Q = pwLine.vs.im * pwLine.is.re - pwLine.vs.re * pwLine.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_864(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,864};
  data->localData[0]->realVars[98] /* gENROE.Q variable */ = (data->localData[0]->realVars[117] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[116] /* pwLine.is.re variable */) - ((data->localData[0]->realVars[118] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[115] /* pwLine.is.im variable */));
  TRACE_POP
}
/*
equation index: 865
type: SIMPLE_ASSIGN
eSAC1A._ECOMP = sqrt(pwLine.vs.re ^ 2.0 + pwLine.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_865(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,865};
  modelica_real tmp19;
  modelica_real tmp20;
  tmp19 = data->localData[0]->realVars[118] /* pwLine.vs.re variable */;
  tmp20 = data->localData[0]->realVars[117] /* pwLine.vs.im variable */;
  data->localData[0]->realVars[58] /* eSAC1A.ECOMP variable */ = sqrt((tmp19 * tmp19) + (tmp20 * tmp20));
  TRACE_POP
}
/*
equation index: 866
type: SIMPLE_ASSIGN
der(eSAC1A._imSimpleLag._state) = (eSAC1A.imSimpleLag.K * eSAC1A.ECOMP - eSAC1A.imSimpleLag.state) / eSAC1A.imSimpleLag.T_mod
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_866(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,866};
  data->localData[0]->realVars[15] /* der(eSAC1A.imSimpleLag.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[131]) * (data->localData[0]->realVars[58] /* eSAC1A.ECOMP variable */) - data->localData[0]->realVars[2] /* eSAC1A.imSimpleLag.state STATE(1) */,data->simulationInfo->realParameter[133],"eSAC1A.imSimpleLag.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 867
type: SIMPLE_ASSIGN
eSAC1A._DiffV._u2 = if abs(eSAC1A.imSimpleLag.T) <= 1e-15 then eSAC1A.ECOMP * eSAC1A.imSimpleLag.K else eSAC1A.imSimpleLag.state
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_867(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,867};
  modelica_boolean tmp21;
  tmp21 = LessEq(fabs(data->simulationInfo->realParameter[132]),1e-15);
  data->localData[0]->realVars[56] /* eSAC1A.DiffV.u2 variable */ = (tmp21?(data->localData[0]->realVars[58] /* eSAC1A.ECOMP variable */) * (data->simulationInfo->realParameter[131]):data->localData[0]->realVars[2] /* eSAC1A.imSimpleLag.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 868
type: SIMPLE_ASSIGN
eSAC1A._DiffV._y = eSAC1A.DiffV.k1 * eSAC1A.VoltageReference.k + eSAC1A.DiffV.k2 * eSAC1A.DiffV.u2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_868(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,868};
  data->localData[0]->realVars[57] /* eSAC1A.DiffV.y variable */ = (data->simulationInfo->realParameter[79]) * (data->simulationInfo->realParameter[107]) + (data->simulationInfo->realParameter[80]) * (data->localData[0]->realVars[56] /* eSAC1A.DiffV.u2 variable */);
  TRACE_POP
}
/*
equation index: 869
type: SIMPLE_ASSIGN
eSAC1A._add3_1._y = eSAC1A.add3_1.k1 * const.k + eSAC1A.add3_1.k2 * eSAC1A.DiffV.y + eSAC1A.add3_1.k3 * eSAC1A.derivative.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_869(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,869};
  data->localData[0]->realVars[62] /* eSAC1A.add3_1.y variable */ = (data->simulationInfo->realParameter[108]) * (data->simulationInfo->realParameter[34]) + (data->simulationInfo->realParameter[109]) * (data->localData[0]->realVars[57] /* eSAC1A.DiffV.y variable */) + (data->simulationInfo->realParameter[110]) * (data->localData[0]->realVars[64] /* eSAC1A.derivative.y variable */);
  TRACE_POP
}
/*
equation index: 870
type: SIMPLE_ASSIGN
der(eSAC1A._imLeadLag._TF._x_scaled[1]) = (eSAC1A.imLeadLag.TF.a_end * eSAC1A.add3_1.y - eSAC1A.imLeadLag.TF.a[2] * eSAC1A.imLeadLag.TF.x_scaled[1]) / eSAC1A.imLeadLag.TF.a[1]
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_870(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,870};
  data->localData[0]->realVars[14] /* der(eSAC1A.imLeadLag.TF.x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[121]) * (data->localData[0]->realVars[62] /* eSAC1A.add3_1.y variable */) - ((data->simulationInfo->realParameter[120]) * (data->localData[0]->realVars[1] /* eSAC1A.imLeadLag.TF.x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[119],"eSAC1A.imLeadLag.TF.a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 871
type: SIMPLE_ASSIGN
eSAC1A._imLeadLag._TF._y = (eSAC1A.imLeadLag.TF.bb[2] - eSAC1A.imLeadLag.TF.a[2] * eSAC1A.imLeadLag.TF.d) * eSAC1A.imLeadLag.TF.x[1] + eSAC1A.imLeadLag.TF.d * eSAC1A.add3_1.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_871(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,871};
  data->localData[0]->realVars[68] /* eSAC1A.imLeadLag.TF.y variable */ = (data->simulationInfo->realParameter[125] - ((data->simulationInfo->realParameter[120]) * (data->simulationInfo->realParameter[126]))) * (data->localData[0]->realVars[67] /* eSAC1A.imLeadLag.TF.x[1] variable */) + (data->simulationInfo->realParameter[126]) * (data->localData[0]->realVars[62] /* eSAC1A.add3_1.y variable */);
  TRACE_POP
}
/*
equation index: 872
type: SIMPLE_ASSIGN
eSAC1A._imLeadLag._y = if abs(eSAC1A.imLeadLag.T1 - eSAC1A.imLeadLag.T2) < 1e-15 then eSAC1A.imLeadLag.K * eSAC1A.add3_1.y else eSAC1A.imLeadLag.TF.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_872(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,872};
  modelica_boolean tmp22;
  tmp22 = Less(fabs(data->simulationInfo->realParameter[116] - data->simulationInfo->realParameter[117]),1e-15);
  data->localData[0]->realVars[69] /* eSAC1A.imLeadLag.y variable */ = (tmp22?(data->simulationInfo->realParameter[115]) * (data->localData[0]->realVars[62] /* eSAC1A.add3_1.y variable */):data->localData[0]->realVars[68] /* eSAC1A.imLeadLag.TF.y variable */);
  TRACE_POP
}
/*
equation index: 873
type: SIMPLE_ASSIGN
der(eSAC1A._simpleLagLim._state) = (eSAC1A.simpleLagLim.K * eSAC1A.imLeadLag.y - eSAC1A.simpleLagLim.state) / eSAC1A.simpleLagLim.T_mod
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_873(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,873};
  data->localData[0]->realVars[17] /* der(eSAC1A.simpleLagLim.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[159]) * (data->localData[0]->realVars[69] /* eSAC1A.imLeadLag.y variable */) - data->localData[0]->realVars[4] /* eSAC1A.simpleLagLim.state STATE(1) */,data->simulationInfo->realParameter[161],"eSAC1A.simpleLagLim.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 874
type: SIMPLE_ASSIGN
eSAC1A._hV_GATE._n1 = if abs(eSAC1A.simpleLagLim.T) <= 1e-15 then max(min(eSAC1A.imLeadLag.y * eSAC1A.simpleLagLim.K, eSAC1A.simpleLagLim.outMax), eSAC1A.simpleLagLim.outMin) else max(min(eSAC1A.simpleLagLim.state, eSAC1A.simpleLagLim.outMax), eSAC1A.simpleLagLim.outMin)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_874(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,874};
  modelica_boolean tmp23;
  tmp23 = LessEq(fabs(data->simulationInfo->realParameter[160]),1e-15);
  data->localData[0]->realVars[65] /* eSAC1A.hV_GATE.n1 variable */ = (tmp23?fmax(fmin((data->localData[0]->realVars[69] /* eSAC1A.imLeadLag.y variable */) * (data->simulationInfo->realParameter[159]),data->simulationInfo->realParameter[162]),data->simulationInfo->realParameter[163]):fmax(fmin(data->localData[0]->realVars[4] /* eSAC1A.simpleLagLim.state STATE(1) */,data->simulationInfo->realParameter[162]),data->simulationInfo->realParameter[163]));
  TRACE_POP
}
/*
equation index: 875
type: SIMPLE_ASSIGN
eSAC1A._hV_GATE._p = if eSAC1A.hV_GATE.n1 < const1.k then const1.k else eSAC1A.hV_GATE.n1
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_875(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,875};
  modelica_boolean tmp24;
  RELATIONHYSTERESIS(tmp24, data->localData[0]->realVars[65] /* eSAC1A.hV_GATE.n1 variable */, data->simulationInfo->realParameter[35], 21, Less);
  data->localData[0]->realVars[66] /* eSAC1A.hV_GATE.p variable */ = (tmp24?data->simulationInfo->realParameter[35]:data->localData[0]->realVars[65] /* eSAC1A.hV_GATE.n1 variable */);
  TRACE_POP
}
/*
equation index: 876
type: SIMPLE_ASSIGN
eSAC1A._lV_GATE._p = if const2.k > eSAC1A.hV_GATE.p then eSAC1A.hV_GATE.p else const2.k
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_876(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,876};
  modelica_boolean tmp25;
  RELATIONHYSTERESIS(tmp25, data->simulationInfo->realParameter[36], data->localData[0]->realVars[66] /* eSAC1A.hV_GATE.p variable */, 22, Greater);
  data->localData[0]->realVars[70] /* eSAC1A.lV_GATE.p variable */ = (tmp25?data->localData[0]->realVars[66] /* eSAC1A.hV_GATE.p variable */:data->simulationInfo->realParameter[36]);
  TRACE_POP
}
/*
equation index: 877
type: SIMPLE_ASSIGN
eSAC1A._limiter1._y = smooth(0, if eSAC1A.lV_GATE.p > eSAC1A.limiter1.uMax then eSAC1A.limiter1.uMax else if eSAC1A.lV_GATE.p < eSAC1A.limiter1.uMin then eSAC1A.limiter1.uMin else eSAC1A.lV_GATE.p)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_877(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,877};
  modelica_boolean tmp26;
  modelica_boolean tmp27;
  modelica_boolean tmp28;
  modelica_real tmp29;
  tmp26 = Greater(data->localData[0]->realVars[70] /* eSAC1A.lV_GATE.p variable */,data->simulationInfo->realParameter[135]);
  tmp28 = (modelica_boolean)tmp26;
  if(tmp28)
  {
    tmp29 = data->simulationInfo->realParameter[135];
  }
  else
  {
    tmp27 = Less(data->localData[0]->realVars[70] /* eSAC1A.lV_GATE.p variable */,data->simulationInfo->realParameter[136]);
    tmp29 = (tmp27?data->simulationInfo->realParameter[136]:data->localData[0]->realVars[70] /* eSAC1A.lV_GATE.p variable */);
  }
  data->localData[0]->realVars[71] /* eSAC1A.limiter1.y variable */ = tmp29;
  TRACE_POP
}
/*
equation index: 878
type: SIMPLE_ASSIGN
eSAC1A._rotatingExciterWithDemagnetization._feedback._y = eSAC1A.limiter1.y - eSAC1A.derivative.u
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_878(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,878};
  data->localData[0]->realVars[78] /* eSAC1A.rotatingExciterWithDemagnetization.feedback.y variable */ = data->localData[0]->realVars[71] /* eSAC1A.limiter1.y variable */ - data->localData[0]->realVars[63] /* eSAC1A.derivative.u variable */;
  TRACE_POP
}
/*
equation index: 879
type: SIMPLE_ASSIGN
der(eSAC1A._rotatingExciterWithDemagnetization._sISO._y) = if eSAC1A.rotatingExciterWithDemagnetization.sISO.y < eSAC1A.rotatingExciterWithDemagnetization.sISO.outMin and eSAC1A.rotatingExciterWithDemagnetization.sISO.k * eSAC1A.rotatingExciterWithDemagnetization.feedback.y < 0.0 or eSAC1A.rotatingExciterWithDemagnetization.sISO.y > eSAC1A.rotatingExciterWithDemagnetization.sISO.outMax and eSAC1A.rotatingExciterWithDemagnetization.sISO.k * eSAC1A.rotatingExciterWithDemagnetization.feedback.y > 0.0 then 0.0 else eSAC1A.rotatingExciterWithDemagnetization.sISO.k * eSAC1A.rotatingExciterWithDemagnetization.feedback.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_879(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,879};
  modelica_boolean tmp30;
  modelica_boolean tmp31;
  modelica_boolean tmp32;
  modelica_boolean tmp33;
  RELATIONHYSTERESIS(tmp30, data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */, data->simulationInfo->realParameter[153], 23, Less);
  RELATIONHYSTERESIS(tmp31, (data->simulationInfo->realParameter[151]) * (data->localData[0]->realVars[78] /* eSAC1A.rotatingExciterWithDemagnetization.feedback.y variable */), 0.0, 24, Less);
  RELATIONHYSTERESIS(tmp32, data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */, data->simulationInfo->realParameter[152], 25, Greater);
  RELATIONHYSTERESIS(tmp33, (data->simulationInfo->realParameter[151]) * (data->localData[0]->realVars[78] /* eSAC1A.rotatingExciterWithDemagnetization.feedback.y variable */), 0.0, 26, Greater);
  data->localData[0]->realVars[16] /* der(eSAC1A.rotatingExciterWithDemagnetization.sISO.y) STATE_DER */ = (((tmp30 && tmp31) || (tmp32 && tmp33))?0.0:(data->simulationInfo->realParameter[151]) * (data->localData[0]->realVars[78] /* eSAC1A.rotatingExciterWithDemagnetization.feedback.y variable */));
  TRACE_POP
}
/*
equation index: 880
type: SIMPLE_ASSIGN
$whenCondition2 = eSAC1A.simpleLagLim.state > eSAC1A.simpleLagLim.outMax and eSAC1A.simpleLagLim.K * eSAC1A.imLeadLag.y - eSAC1A.simpleLagLim.state < 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_880(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,880};
  modelica_boolean tmp34;
  modelica_boolean tmp35;
  RELATIONHYSTERESIS(tmp34, data->localData[0]->realVars[4] /* eSAC1A.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[162], 27, Greater);
  RELATIONHYSTERESIS(tmp35, (data->simulationInfo->realParameter[159]) * (data->localData[0]->realVars[69] /* eSAC1A.imLeadLag.y variable */) - data->localData[0]->realVars[4] /* eSAC1A.simpleLagLim.state STATE(1) */, 0.0, 28, Less);
  data->localData[0]->booleanVars[1] /* $whenCondition2 DISCRETE */ = (tmp34 && tmp35);
  TRACE_POP
}
/*
equation index: 881
type: SIMPLE_ASSIGN
$whenCondition1 = eSAC1A.simpleLagLim.state < eSAC1A.simpleLagLim.outMin and eSAC1A.simpleLagLim.K * eSAC1A.imLeadLag.y - eSAC1A.simpleLagLim.state > 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_881(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,881};
  modelica_boolean tmp36;
  modelica_boolean tmp37;
  RELATIONHYSTERESIS(tmp36, data->localData[0]->realVars[4] /* eSAC1A.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[163], 29, Less);
  RELATIONHYSTERESIS(tmp37, (data->simulationInfo->realParameter[159]) * (data->localData[0]->realVars[69] /* eSAC1A.imLeadLag.y variable */) - data->localData[0]->realVars[4] /* eSAC1A.simpleLagLim.state STATE(1) */, 0.0, 30, Greater);
  data->localData[0]->booleanVars[0] /* $whenCondition1 DISCRETE */ = (tmp36 && tmp37);
  TRACE_POP
}
/*
equation index: 882
type: SIMPLE_ASSIGN
GEN1._V = eSAC1A.ECOMP
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_882(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,882};
  data->localData[0]->realVars[36] /* GEN1.V variable */ = data->localData[0]->realVars[58] /* eSAC1A.ECOMP variable */;
  TRACE_POP
}
/*
equation index: 883
type: SIMPLE_ASSIGN
gENROE._anglev = atan2(pwLine.vs.im, pwLine.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_883(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,883};
  data->localData[0]->realVars[102] /* gENROE.anglev variable */ = atan2(data->localData[0]->realVars[117] /* pwLine.vs.im variable */, data->localData[0]->realVars[118] /* pwLine.vs.re variable */);
  TRACE_POP
}
/*
equation index: 884
type: SIMPLE_ASSIGN
GEN1._angle = 57.29577951308232 * gENROE.anglev
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_884(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,884};
  data->localData[0]->realVars[37] /* GEN1.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[102] /* gENROE.anglev variable */);
  TRACE_POP
}
/*
equation index: 885
type: SIMPLE_ASSIGN
pwLine._Q12 = (pwLine.vs.im * pwLine.is.re - pwLine.vs.re * pwLine.is.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_885(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,885};
  data->localData[0]->realVars[111] /* pwLine.Q12 variable */ = ((data->localData[0]->realVars[117] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[116] /* pwLine.is.re variable */) - ((data->localData[0]->realVars[118] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[115] /* pwLine.is.im variable */))) * (data->simulationInfo->realParameter[280]);
  TRACE_POP
}
/*
equation index: 886
type: SIMPLE_ASSIGN
pwLine._P12 = (pwLine.vs.re * pwLine.is.re + pwLine.vs.im * pwLine.is.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_886(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,886};
  data->localData[0]->realVars[109] /* pwLine.P12 variable */ = ((data->localData[0]->realVars[118] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[116] /* pwLine.is.re variable */) + (data->localData[0]->realVars[117] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[115] /* pwLine.is.im variable */)) * (data->simulationInfo->realParameter[280]);
  TRACE_POP
}
/*
equation index: 887
type: SIMPLE_ASSIGN
pwLine3._P12 = (pwLine1.vs.re * pwLine3.is.re + pwLine1.vs.im * pwLine3.is.im) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_887(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,887};
  data->localData[0]->realVars[131] /* pwLine3.P12 variable */ = ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[138] /* pwLine3.is.re variable */) + (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[137] /* pwLine3.is.im variable */)) * (data->simulationInfo->realParameter[302]);
  TRACE_POP
}
/*
equation index: 888
type: SIMPLE_ASSIGN
pwLine3._Q12 = (pwLine1.vs.im * pwLine3.is.re - pwLine1.vs.re * pwLine3.is.im) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_888(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,888};
  data->localData[0]->realVars[133] /* pwLine3.Q12 variable */ = ((data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[138] /* pwLine3.is.re variable */) - ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[137] /* pwLine3.is.im variable */))) * (data->simulationInfo->realParameter[302]);
  TRACE_POP
}
/*
equation index: 889
type: SIMPLE_ASSIGN
constantLoad._angle = atan2(pwLine1.vs.im, pwLine1.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_889(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,889};
  data->localData[0]->realVars[50] /* constantLoad.angle variable */ = atan2(data->localData[0]->realVars[129] /* pwLine1.vs.im variable */, data->localData[0]->realVars[130] /* pwLine1.vs.re variable */);
  TRACE_POP
}
/*
equation index: 890
type: SIMPLE_ASSIGN
LOAD._angle = 57.29577951308232 * constantLoad.angle
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_890(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,890};
  data->localData[0]->realVars[45] /* LOAD.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[50] /* constantLoad.angle variable */);
  TRACE_POP
}
/*
equation index: 891
type: SIMPLE_ASSIGN
pwLine._Q21 = (pwLine1.vs.re * pwLine.ir.im - pwLine1.vs.im * pwLine.ir.re) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_891(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,891};
  data->localData[0]->realVars[112] /* pwLine.Q21 variable */ = ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[113] /* pwLine.ir.im variable */) - ((data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[114] /* pwLine.ir.re variable */))) * (data->simulationInfo->realParameter[280]);
  TRACE_POP
}
/*
equation index: 892
type: SIMPLE_ASSIGN
pwLine._P21 = ((-pwLine1.vs.re) * pwLine.ir.re - pwLine1.vs.im * pwLine.ir.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_892(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,892};
  data->localData[0]->realVars[110] /* pwLine.P21 variable */ = (((-data->localData[0]->realVars[130] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[114] /* pwLine.ir.re variable */) - ((data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[113] /* pwLine.ir.im variable */))) * (data->simulationInfo->realParameter[280]);
  TRACE_POP
}
/*
equation index: 893
type: SIMPLE_ASSIGN
pwLine1._P12 = (pwLine1.vs.re * pwLine1.is.re + pwLine1.vs.im * pwLine1.is.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_893(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,893};
  data->localData[0]->realVars[119] /* pwLine1.P12 variable */ = ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[126] /* pwLine1.is.re variable */) + (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[125] /* pwLine1.is.im variable */)) * (data->simulationInfo->realParameter[291]);
  TRACE_POP
}
/*
equation index: 894
type: SIMPLE_ASSIGN
pwLine1._Q12 = (pwLine1.vs.im * pwLine1.is.re - pwLine1.vs.re * pwLine1.is.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_894(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,894};
  data->localData[0]->realVars[121] /* pwLine1.Q12 variable */ = ((data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[126] /* pwLine1.is.re variable */) - ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[125] /* pwLine1.is.im variable */))) * (data->simulationInfo->realParameter[291]);
  TRACE_POP
}
/*
equation index: 895
type: SIMPLE_ASSIGN
pwLine4._P21 = ((-pwLine1.vr.re) * pwLine4.ir.re - pwLine1.vr.im * pwLine4.ir.im) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_895(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,895};
  data->localData[0]->realVars[142] /* pwLine4.P21 variable */ = (((-data->localData[0]->realVars[128] /* pwLine1.vr.re variable */)) * (data->localData[0]->realVars[146] /* pwLine4.ir.re variable */) - ((data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[145] /* pwLine4.ir.im variable */))) * (data->simulationInfo->realParameter[313]);
  TRACE_POP
}
/*
equation index: 896
type: SIMPLE_ASSIGN
pwLine4._Q21 = (pwLine1.vr.re * pwLine4.ir.im - pwLine1.vr.im * pwLine4.ir.re) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_896(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,896};
  data->localData[0]->realVars[144] /* pwLine4.Q21 variable */ = ((data->localData[0]->realVars[128] /* pwLine1.vr.re variable */) * (data->localData[0]->realVars[145] /* pwLine4.ir.im variable */) - ((data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[146] /* pwLine4.ir.re variable */))) * (data->simulationInfo->realParameter[313]);
  TRACE_POP
}
/*
equation index: 897
type: SIMPLE_ASSIGN
GEN2._V = sqrt(pwLine1.vr.re ^ 2.0 + pwLine1.vr.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_897(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,897};
  modelica_real tmp38;
  modelica_real tmp39;
  tmp38 = data->localData[0]->realVars[128] /* pwLine1.vr.re variable */;
  tmp39 = data->localData[0]->realVars[127] /* pwLine1.vr.im variable */;
  data->localData[0]->realVars[40] /* GEN2.V variable */ = sqrt((tmp38 * tmp38) + (tmp39 * tmp39));
  TRACE_POP
}
/*
equation index: 898
type: SIMPLE_ASSIGN
gENCLS._V = GEN2.V
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_898(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,898};
  data->localData[0]->realVars[81] /* gENCLS.V variable */ = data->localData[0]->realVars[40] /* GEN2.V variable */;
  TRACE_POP
}
/*
equation index: 899
type: SIMPLE_ASSIGN
gENCLS._anglev = atan2(pwLine1.vr.im, pwLine1.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_899(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,899};
  data->localData[0]->realVars[82] /* gENCLS.anglev variable */ = atan2(data->localData[0]->realVars[127] /* pwLine1.vr.im variable */, data->localData[0]->realVars[128] /* pwLine1.vr.re variable */);
  TRACE_POP
}
/*
equation index: 900
type: SIMPLE_ASSIGN
GEN2._angle = 57.29577951308232 * gENCLS.anglev
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_900(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,900};
  data->localData[0]->realVars[41] /* GEN2.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[82] /* gENCLS.anglev variable */);
  TRACE_POP
}
/*
equation index: 901
type: SIMPLE_ASSIGN
pwLine1._P21 = ((-pwLine1.vr.re) * pwLine1.ir.re - pwLine1.vr.im * pwLine1.ir.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_901(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,901};
  data->localData[0]->realVars[120] /* pwLine1.P21 variable */ = (((-data->localData[0]->realVars[128] /* pwLine1.vr.re variable */)) * (data->localData[0]->realVars[124] /* pwLine1.ir.re variable */) - ((data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[123] /* pwLine1.ir.im variable */))) * (data->simulationInfo->realParameter[291]);
  TRACE_POP
}
/*
equation index: 902
type: SIMPLE_ASSIGN
pwLine1._Q21 = (pwLine1.vr.re * pwLine1.ir.im - pwLine1.vr.im * pwLine1.ir.re) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_902(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,902};
  data->localData[0]->realVars[122] /* pwLine1.Q21 variable */ = ((data->localData[0]->realVars[128] /* pwLine1.vr.re variable */) * (data->localData[0]->realVars[123] /* pwLine1.ir.im variable */) - ((data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[124] /* pwLine1.ir.re variable */))) * (data->simulationInfo->realParameter[291]);
  TRACE_POP
}
/*
equation index: 903
type: SIMPLE_ASSIGN
gENCLS._P = (-pwLine1.vr.re) * gENCLS.p.ir - pwLine1.vr.im * gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_903(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,903};
  data->localData[0]->realVars[79] /* gENCLS.P variable */ = ((-data->localData[0]->realVars[128] /* pwLine1.vr.re variable */)) * (data->localData[0]->realVars[87] /* gENCLS.p.ir variable */) - ((data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[86] /* gENCLS.p.ii variable */));
  TRACE_POP
}
/*
equation index: 904
type: SIMPLE_ASSIGN
gENCLS._Q = pwLine1.vr.re * gENCLS.p.ii - pwLine1.vr.im * gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_904(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,904};
  data->localData[0]->realVars[80] /* gENCLS.Q variable */ = (data->localData[0]->realVars[128] /* pwLine1.vr.re variable */) * (data->localData[0]->realVars[86] /* gENCLS.p.ii variable */) - ((data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[87] /* gENCLS.p.ir variable */));
  TRACE_POP
}
/*
equation index: 907
type: ALGORITHM

  assert(eSAC1A.limiter1.uMax >= eSAC1A.limiter1.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(eSAC1A.limiter1.uMax, 6, 0, true) + ") < uMin (=" + String(eSAC1A.limiter1.uMin, 6, 0, true) + ")");
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_907(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,907};
  modelica_boolean tmp40;
  static const MMC_DEFSTRINGLIT(tmp41,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp42;
  static const MMC_DEFSTRINGLIT(tmp43,11,") < uMin (=");
  modelica_string tmp44;
  static int tmp45 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp40 = GreaterEq(data->simulationInfo->realParameter[135],data->simulationInfo->realParameter[136]);
    if(!tmp40)
    {
      tmp42 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[135], ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp41),tmp42);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp43));
      tmp44 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[136], ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp44);
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
/*
equation index: 905
type: WHEN

when {$whenCondition2} then
  reinit(eSAC1A._simpleLagLim._state,  eSAC1A.simpleLagLim.outMax);
end when;
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_905(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,905};
  if((data->localData[0]->booleanVars[1] /* $whenCondition2 DISCRETE */ && !data->simulationInfo->booleanVarsPre[1] /* $whenCondition2 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[4] /* eSAC1A.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[162];
    infoStreamPrint(LOG_EVENTS, 0, "reinit eSAC1A.simpleLagLim.state = %g", data->localData[0]->realVars[4] /* eSAC1A.simpleLagLim.state STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  else if((data->localData[0]->booleanVars[0] /* $whenCondition1 DISCRETE */ && !data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[4] /* eSAC1A.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[163];
    infoStreamPrint(LOG_EVENTS, 0, "reinit eSAC1A.simpleLagLim.state = %g", data->localData[0]->realVars[4] /* eSAC1A.simpleLagLim.state STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
  
  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionLocalKnownVars(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_730(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_731(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_732(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_733(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_734(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_735(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_736(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_737(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_738(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_739(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_740(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_741(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_742(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_743(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_744(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_745(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_836(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_837(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_838(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_839(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_840(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_841(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_842(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_843(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_844(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_845(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_846(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_847(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_848(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_849(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_850(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_851(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_852(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_853(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_854(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_855(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_856(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_857(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_858(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_859(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_860(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_861(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_862(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_863(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_864(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_865(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_866(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_867(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_868(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_869(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_870(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_871(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_872(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_873(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_874(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_875(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_876(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_877(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_878(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_879(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_880(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_881(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_882(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_883(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_884(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_885(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_886(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_887(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_888(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_889(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_890(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_891(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_892(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_893(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_894(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_895(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_896(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_897(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_898(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_899(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_900(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_901(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_902(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_903(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_904(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_907(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_905(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}


int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/* forwarded equations */
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_731(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_732(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_733(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_734(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_735(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_736(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_737(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_738(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_739(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_740(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_741(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_742(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_743(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_744(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_745(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_836(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_845(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_846(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_847(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_848(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_849(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_850(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_851(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_852(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_853(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_854(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_855(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_856(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_857(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_858(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_859(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_865(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_866(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_867(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_868(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_869(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_870(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_871(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_872(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_873(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_874(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_875(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_876(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_877(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_878(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_879(DATA* data, threadData_t *threadData);

static void functionODE_system0(DATA *data, threadData_t *threadData)
{
    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_731(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_732(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_733(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_734(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_735(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_736(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_737(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_738(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_739(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_740(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_741(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_742(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_743(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_744(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_745(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_836(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_845(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_846(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_847(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_848(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_849(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_850(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_851(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_852(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_853(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_854(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_855(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_856(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_857(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_858(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_859(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_865(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_866(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_867(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_868(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_869(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_870(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_871(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_872(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_873(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_874(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_875(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_876(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_877(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_878(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_879(data, threadData);
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  data->simulationInfo->callStatistics.functionODE++;
  
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionLocalKnownVars(data, threadData);
  functionODE_system0(data, threadData);

  
  TRACE_POP
  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char**argv, DATA *data, threadData_t *threadData);

#include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC1A_12jac.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC1A_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_callback = {
   (int (*)(DATA *, threadData_t *, void *)) OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_performSimulation,
   (int (*)(DATA *, threadData_t *, void *)) OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_performQSSSimulation,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_updateContinuousSystem,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_callExternalObjectDestructors,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_initialNonLinearSystem,
   NULL,
   NULL,
   #if !defined(OMC_NO_STATESELECTION)
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_initializeStateSets,
   #else
   NULL,
   #endif
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_initializeDAEmodeData,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionODE,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionAlgebraics,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionDAE,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionLocalKnownVars,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_input_function,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_input_function_init,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_input_function_updateStartValues,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_output_function,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_function_storeDelayed,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_updateBoundVariableAttributes,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionInitialEquations,
   1, /* useHomotopy - 0: local homotopy (equidistant lambda), 1: global homotopy (equidistant lambda), 2: new global homotopy approach (adaptive lambda), 3: new local homotopy approach (adaptive lambda)*/
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionInitialEquations_lambda0,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionRemovedInitialEquations,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_updateBoundParameters,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_checkForAsserts,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_function_ZeroCrossingsEquations,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_function_ZeroCrossings,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_function_updateRelations,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_zeroCrossingDescription,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_relationDescription,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_function_initSample,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_INDEX_JAC_A,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_INDEX_JAC_B,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_INDEX_JAC_C,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_INDEX_JAC_D,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_initialAnalyticJacobianA,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_initialAnalyticJacobianB,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_initialAnalyticJacobianC,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_initialAnalyticJacobianD,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionJacA_column,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionJacB_column,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionJacC_column,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionJacD_column,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_linear_model_frame,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_linear_model_datarecovery_frame,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_mayer,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_lagrange,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_pickUpBoundsForInputsInOptimization,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_setInputData,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_getTimeGrid,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_symbolicInlineSystem,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_function_initSynchronous,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_function_updateSynchronous,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_function_equationsSynchronous,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_inputNames,
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
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "OpenIPSL.Examples.Controls.PSSE.ES.ESAC1A";
  data->modelData->modelFilePrefix = "OpenIPSL.Examples.Controls.PSSE.ES.ESAC1A";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "/home/manuelnvro/dev/Gitted/OpenIPSL/OpenIPSL/Examples/Controls/PSSE/ES";
  data->modelData->modelGUID = "{224cf5ee-bf66-4780-805c-d728348dda96}";
  #if defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME)
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  #else
  #if defined(_MSC_VER) /* handle joke compilers */
  {
  /* for MSVC we encode a string like char x[] = {'a', 'b', 'c', '\0'} */
  /* because the string constant limit is 65535 bytes */
  static const char contents_init[] =
    #include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC1A_init.c"
    ;
  static const char contents_info[] =
    #include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC1A_info.c"
    ;
    data->modelData->initXMLData = contents_init;
    data->modelData->modelDataXml.infoXMLData = contents_info;
  }
  #else /* handle real compilers */
  data->modelData->initXMLData =
  #include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC1A_init.c"
    ;
  data->modelData->modelDataXml.infoXMLData =
  #include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC1A_info.c"
    ;
  #endif /* defined(_MSC_VER) */
  #endif /* defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME) */
  
  data->modelData->nStates = 13;
  data->modelData->nVariablesReal = 149;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesInteger = 0;
  data->modelData->nVariablesBoolean = 2;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 321;
  data->modelData->nParametersInteger = 11;
  data->modelData->nParametersBoolean = 73;
  data->modelData->nParametersString = 0;
  data->modelData->nInputVars = 0;
  data->modelData->nOutputVars = 0;
  
  data->modelData->nAliasReal = 119;
  data->modelData->nAliasInteger = 0;
  data->modelData->nAliasBoolean = 0;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 29;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 31;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  data->modelData->modelDataXml.fileName = "OpenIPSL.Examples.Controls.PSSE.ES.ESAC1A_info.json";
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 7;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 1165;
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
  
    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_setupDataStruc(&data, threadData);
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


