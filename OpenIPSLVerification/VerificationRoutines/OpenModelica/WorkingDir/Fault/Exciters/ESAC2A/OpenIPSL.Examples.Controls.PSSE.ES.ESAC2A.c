/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC2A_model.h"
#include "simulation/solver/events.h"

#define prefixedName_performSimulation OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_performSimulation
#define prefixedName_updateContinuousSystem OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_updateContinuousSystem
#include <simulation/solver/perform_simulation.c>

#define prefixedName_performQSSSimulation OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_performQSSSimulation
#include <simulation/solver/perform_qss_simulation.c>

/* dummy VARINFO and FILEINFO */
const FILE_INFO dummyFILE_INFO = omc_dummyFileInfo;
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/*
equation index: 744
type: SIMPLE_ASSIGN
eSAC2A._EFD0 = generator.efd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_744(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,744};
  data->localData[0]->realVars[63] /* eSAC2A.EFD0 variable */ = data->simulationInfo->realParameter[269];
  TRACE_POP
}
/*
equation index: 745
type: SIMPLE_ASSIGN
der(gENCLS._delta) = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_745(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,745};
  data->localData[0]->realVars[18] /* der(gENCLS.delta) STATE_DER */ = 0.0;
  TRACE_POP
}
/*
equation index: 746
type: SIMPLE_ASSIGN
der(gENCLS._eq) = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_746(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,746};
  data->localData[0]->realVars[19] /* der(gENCLS.eq) STATE_DER */ = 0.0;
  TRACE_POP
}
/*
equation index: 747
type: SIMPLE_ASSIGN
generator._PSIppd = generator.Epq * generator.K3d + generator.PSIkd * generator.K4d
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_747(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,747};
  data->localData[0]->realVars[99] /* generator.PSIppd variable */ = (data->localData[0]->realVars[8] /* generator.Epq STATE(1) */) * (data->simulationInfo->realParameter[219]) + (data->localData[0]->realVars[9] /* generator.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[221]);
  TRACE_POP
}
/*
equation index: 748
type: SIMPLE_ASSIGN
generator._PSIppq = generator.PSIkq * generator.K4q + generator.Epd * generator.K3q
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_748(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,748};
  data->localData[0]->realVars[100] /* generator.PSIppq variable */ = (data->localData[0]->realVars[10] /* generator.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[222]) + (data->localData[0]->realVars[7] /* generator.Epd STATE(1) */) * (data->simulationInfo->realParameter[220]);
  TRACE_POP
}
/*
equation index: 749
type: SIMPLE_ASSIGN
generator._PSIpp = sqrt(generator.PSIppd ^ 2.0 + generator.PSIppq ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_749(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,749};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[99] /* generator.PSIppd variable */;
  tmp1 = data->localData[0]->realVars[100] /* generator.PSIppq variable */;
  data->localData[0]->realVars[98] /* generator.PSIpp variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 750
type: SIMPLE_ASSIGN
$cse5 = OpenIPSL.NonElectrical.Functions.SE(generator.PSIpp, generator.S10, generator.S12, 1.0, 1.2)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_750(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,750};
  data->localData[0]->realVars[29] /* $cse5 variable */ = omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->localData[0]->realVars[98] /* generator.PSIpp variable */, data->simulationInfo->realParameter[239], data->simulationInfo->realParameter[240], 1.0, 1.2);
  TRACE_POP
}
/*
equation index: 751
type: SIMPLE_ASSIGN
der(generator._delta) = generator.w_b * generator.w
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_751(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,751};
  data->localData[0]->realVars[24] /* der(generator.delta) STATE_DER */ = (data->simulationInfo->realParameter[283]) * (data->localData[0]->realVars[12] /* generator.w STATE(1) */);
  TRACE_POP
}
/*
equation index: 752
type: SIMPLE_ASSIGN
eSAC2A._imLeadLag._TF._x[1] = eSAC2A.imLeadLag.TF.x_scaled[1] / eSAC2A.imLeadLag.TF.a_end
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_752(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,752};
  data->localData[0]->realVars[71] /* eSAC2A.imLeadLag.TF.x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[1] /* eSAC2A.imLeadLag.TF.x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[129],"eSAC2A.imLeadLag.TF.a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 753
type: SIMPLE_ASSIGN
eSAC2A._rotatingExciterWithDemagnetization._Sum._u2 = eSAC2A.rotatingExciterWithDemagnetization.gain.k * eSAC2A.rotatingExciterWithDemagnetization.sISO.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_753(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,753};
  data->localData[0]->realVars[80] /* eSAC2A.rotatingExciterWithDemagnetization.Sum.u2 variable */ = (data->simulationInfo->realParameter[159]) * (data->localData[0]->realVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */);
  TRACE_POP
}
/*
equation index: 754
type: SIMPLE_ASSIGN
eSAC2A._rotatingExciterWithDemagnetization._VE._u2 = OpenIPSL.NonElectrical.Functions.SE(eSAC2A.rotatingExciterWithDemagnetization.sISO.y, eSAC2A.rotatingExciterWithDemagnetization.se1.SE1, eSAC2A.rotatingExciterWithDemagnetization.se1.SE2, eSAC2A.rotatingExciterWithDemagnetization.se1.E1, eSAC2A.rotatingExciterWithDemagnetization.se1.E2)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_754(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,754};
  data->localData[0]->realVars[81] /* eSAC2A.rotatingExciterWithDemagnetization.VE.u2 variable */ = omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->localData[0]->realVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */, data->simulationInfo->realParameter[164], data->simulationInfo->realParameter[165], data->simulationInfo->realParameter[162], data->simulationInfo->realParameter[163]);
  TRACE_POP
}
/*
equation index: 755
type: SIMPLE_ASSIGN
eSAC2A._rotatingExciterWithDemagnetization._Sum._u1 = eSAC2A.rotatingExciterWithDemagnetization.sISO.y * eSAC2A.rotatingExciterWithDemagnetization.VE.u2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_755(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,755};
  data->localData[0]->realVars[79] /* eSAC2A.rotatingExciterWithDemagnetization.Sum.u1 variable */ = (data->localData[0]->realVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */) * (data->localData[0]->realVars[81] /* eSAC2A.rotatingExciterWithDemagnetization.VE.u2 variable */);
  TRACE_POP
}
/*
equation index: 756
type: SIMPLE_ASSIGN
$cse7 = cos(generator.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_756(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,756};
  data->localData[0]->realVars[31] /* $cse7 variable */ = cos(data->localData[0]->realVars[11] /* generator.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 757
type: SIMPLE_ASSIGN
$cse6 = sin(generator.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_757(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,757};
  data->localData[0]->realVars[30] /* $cse6 variable */ = sin(data->localData[0]->realVars[11] /* generator.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 758
type: SIMPLE_ASSIGN
$cse2 = cos(gENCLS.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_758(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,758};
  data->localData[0]->realVars[27] /* $cse2 variable */ = cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 759
type: SIMPLE_ASSIGN
$cse1 = sin(gENCLS.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_759(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,759};
  data->localData[0]->realVars[26] /* $cse1 variable */ = sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */);
  TRACE_POP
}
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_760(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_761(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_762(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_763(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_764(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_765(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_766(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_767(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_768(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_769(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_770(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_771(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_772(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_773(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_774(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_775(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_776(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_777(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_778(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_779(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_780(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_781(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_782(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_804(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_803(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_802(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_801(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_800(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_799(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_798(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_797(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_796(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_795(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_794(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_793(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_792(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_791(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_790(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_789(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_788(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_787(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_786(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_785(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_784(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_783(DATA*, threadData_t*);
/*
equation index: 850
indexNonlinear: 4
type: NONLINEAR

vars: {pwLine3._ir._im, pwLine4._is._im, pwLine._ir._re, pwLine1._is._re, constantLoad._p._ii, pwLine1._is._im, pwLine4._is._re, pwLine3._ir._re, pwLine3._is._re, pwLine._ir._im, pwLine1._ir._im, pwLine1._ir._re, gENCLS._iq, gENCLS._id, pwLine1._vr._im, pwLine1._vr._re, generator._id, generator._iq, pwLine1._vs._re, pwLine3._vr._im, pwLine3._vr._re, pwLine1._vs._im}
eqns: {760, 761, 762, 763, 764, 765, 766, 767, 768, 769, 770, 771, 772, 773, 774, 775, 776, 777, 778, 779, 780, 781, 782, 804, 803, 802, 801, 800, 799, 798, 797, 796, 795, 794, 793, 792, 791, 790, 789, 788, 787, 786, 785, 784, 783}
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_850(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,850};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 850 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[0] = data->localData[0]->realVars[139] /* pwLine3.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[1] = data->localData[0]->realVars[151] /* pwLine4.is.im variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[2] = data->localData[0]->realVars[118] /* pwLine.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[3] = data->localData[0]->realVars[130] /* pwLine1.is.re variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[4] = data->localData[0]->realVars[53] /* constantLoad.p.ii variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[5] = data->localData[0]->realVars[129] /* pwLine1.is.im variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[6] = data->localData[0]->realVars[152] /* pwLine4.is.re variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[7] = data->localData[0]->realVars[140] /* pwLine3.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[8] = data->localData[0]->realVars[142] /* pwLine3.is.re variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[9] = data->localData[0]->realVars[117] /* pwLine.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[10] = data->localData[0]->realVars[127] /* pwLine1.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[11] = data->localData[0]->realVars[128] /* pwLine1.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[12] = data->localData[0]->realVars[88] /* gENCLS.iq variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[13] = data->localData[0]->realVars[87] /* gENCLS.id variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[14] = data->localData[0]->realVars[131] /* pwLine1.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[15] = data->localData[0]->realVars[132] /* pwLine1.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[16] = data->localData[0]->realVars[107] /* generator.id variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[17] = data->localData[0]->realVars[108] /* generator.iq variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[18] = data->localData[0]->realVars[134] /* pwLine1.vs.re variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[19] = data->localData[0]->realVars[143] /* pwLine3.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[20] = data->localData[0]->realVars[144] /* pwLine3.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[21] = data->localData[0]->realVars[133] /* pwLine1.vs.im variable */;
  retValue = solve_nonlinear_system(data, threadData, 4);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,850};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 850 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[139] /* pwLine3.ir.im variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[0];
  data->localData[0]->realVars[151] /* pwLine4.is.im variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[1];
  data->localData[0]->realVars[118] /* pwLine.ir.re variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[2];
  data->localData[0]->realVars[130] /* pwLine1.is.re variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[3];
  data->localData[0]->realVars[53] /* constantLoad.p.ii variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[4];
  data->localData[0]->realVars[129] /* pwLine1.is.im variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[5];
  data->localData[0]->realVars[152] /* pwLine4.is.re variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[6];
  data->localData[0]->realVars[140] /* pwLine3.ir.re variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[7];
  data->localData[0]->realVars[142] /* pwLine3.is.re variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[8];
  data->localData[0]->realVars[117] /* pwLine.ir.im variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[9];
  data->localData[0]->realVars[127] /* pwLine1.ir.im variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[10];
  data->localData[0]->realVars[128] /* pwLine1.ir.re variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[11];
  data->localData[0]->realVars[88] /* gENCLS.iq variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[12];
  data->localData[0]->realVars[87] /* gENCLS.id variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[13];
  data->localData[0]->realVars[131] /* pwLine1.vr.im variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[14];
  data->localData[0]->realVars[132] /* pwLine1.vr.re variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[15];
  data->localData[0]->realVars[107] /* generator.id variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[16];
  data->localData[0]->realVars[108] /* generator.iq variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[17];
  data->localData[0]->realVars[134] /* pwLine1.vs.re variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[18];
  data->localData[0]->realVars[143] /* pwLine3.vr.im variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[19];
  data->localData[0]->realVars[144] /* pwLine3.vr.re variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[20];
  data->localData[0]->realVars[133] /* pwLine1.vs.im variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[21];
  TRACE_POP
}
/*
equation index: 851
type: SIMPLE_ASSIGN
der(generator._PSIkd) = (generator.Epq + (generator.Xl - generator.Xpd) * generator.id - generator.PSIkd) / generator.Tppd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_851(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,851};
  data->localData[0]->realVars[22] /* der(generator.PSIkd) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[8] /* generator.Epq STATE(1) */ + (data->simulationInfo->realParameter[250] - data->simulationInfo->realParameter[251]) * (data->localData[0]->realVars[107] /* generator.id variable */) - data->localData[0]->realVars[9] /* generator.PSIkd STATE(1) */,data->simulationInfo->realParameter[243],"generator.Tppd0",equationIndexes);
  TRACE_POP
}
/*
equation index: 852
type: SIMPLE_ASSIGN
eSAC2A._XADIFD = generator.K1d * (generator.Epq + (generator.Xl - generator.Xpd) * generator.id - generator.PSIkd) + generator.Epq + generator.id * (generator.Xd - generator.Xpd) + $cse5 * generator.PSIppd
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_852(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,852};
  data->localData[0]->realVars[64] /* eSAC2A.XADIFD variable */ = (data->simulationInfo->realParameter[215]) * (data->localData[0]->realVars[8] /* generator.Epq STATE(1) */ + (data->simulationInfo->realParameter[250] - data->simulationInfo->realParameter[251]) * (data->localData[0]->realVars[107] /* generator.id variable */) - data->localData[0]->realVars[9] /* generator.PSIkd STATE(1) */) + data->localData[0]->realVars[8] /* generator.Epq STATE(1) */ + (data->localData[0]->realVars[107] /* generator.id variable */) * (data->simulationInfo->realParameter[249] - data->simulationInfo->realParameter[251]) + (data->localData[0]->realVars[29] /* $cse5 variable */) * (data->localData[0]->realVars[99] /* generator.PSIppd variable */);
  TRACE_POP
}
/*
equation index: 853
type: SIMPLE_ASSIGN
eSAC2A._derivative._u = eSAC2A.rotatingExciterWithDemagnetization.Sum.k1 * eSAC2A.rotatingExciterWithDemagnetization.Sum.u1 + eSAC2A.rotatingExciterWithDemagnetization.Sum.k2 * eSAC2A.rotatingExciterWithDemagnetization.Sum.u2 + eSAC2A.rotatingExciterWithDemagnetization.Sum.k3 * eSAC2A.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_853(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,853};
  data->localData[0]->realVars[66] /* eSAC2A.derivative.u variable */ = (data->simulationInfo->realParameter[155]) * (data->localData[0]->realVars[79] /* eSAC2A.rotatingExciterWithDemagnetization.Sum.u1 variable */) + (data->simulationInfo->realParameter[156]) * (data->localData[0]->realVars[80] /* eSAC2A.rotatingExciterWithDemagnetization.Sum.u2 variable */) + (data->simulationInfo->realParameter[157]) * (data->localData[0]->realVars[64] /* eSAC2A.XADIFD variable */);
  TRACE_POP
}
/*
equation index: 854
type: SIMPLE_ASSIGN
der(eSAC2A._derivative._x) = (eSAC2A.derivative.u - eSAC2A.derivative.x) / eSAC2A.derivative.T
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_854(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,854};
  data->localData[0]->realVars[13] /* der(eSAC2A.derivative.x) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[66] /* eSAC2A.derivative.u variable */ - data->localData[0]->realVars[0] /* eSAC2A.derivative.x STATE(1) */,data->simulationInfo->realParameter[119],"eSAC2A.derivative.T",equationIndexes);
  TRACE_POP
}
/*
equation index: 855
type: SIMPLE_ASSIGN
eSAC2A._derivative._y = 0.03 * (eSAC2A.derivative.u - eSAC2A.derivative.x) / eSAC2A.derivative.T
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_855(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,855};
  data->localData[0]->realVars[67] /* eSAC2A.derivative.y variable */ = (0.03) * (DIVISION_SIM(data->localData[0]->realVars[66] /* eSAC2A.derivative.u variable */ - data->localData[0]->realVars[0] /* eSAC2A.derivative.x STATE(1) */,data->simulationInfo->realParameter[119],"eSAC2A.derivative.T",equationIndexes));
  TRACE_POP
}
/*
equation index: 856
type: SIMPLE_ASSIGN
eSAC2A._rectifierCommutationVoltageDrop._division._u1 = eSAC2A.rectifierCommutationVoltageDrop.gain2.k * eSAC2A.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_856(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,856};
  data->localData[0]->realVars[76] /* eSAC2A.rectifierCommutationVoltageDrop.division.u1 variable */ = (data->simulationInfo->realParameter[147]) * (data->localData[0]->realVars[64] /* eSAC2A.XADIFD variable */);
  TRACE_POP
}
/*
equation index: 857
type: SIMPLE_ASSIGN
eSAC2A._rectifierCommutationVoltageDrop._division._y = eSAC2A.rectifierCommutationVoltageDrop.division.u1 / eSAC2A.rotatingExciterWithDemagnetization.sISO.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_857(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,857};
  data->localData[0]->realVars[77] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */ = DIVISION_SIM(data->localData[0]->realVars[76] /* eSAC2A.rectifierCommutationVoltageDrop.division.u1 variable */,data->localData[0]->realVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */,"eSAC2A.rotatingExciterWithDemagnetization.sISO.y",equationIndexes);
  TRACE_POP
}
/*
equation index: 858
type: SIMPLE_ASSIGN
eSAC2A._rectifierCommutationVoltageDrop._fEX._y = if eSAC2A.rectifierCommutationVoltageDrop.division.y <= 0.0 then 1.0 else if eSAC2A.rectifierCommutationVoltageDrop.division.y > 0.0 and eSAC2A.rectifierCommutationVoltageDrop.division.y <= 0.433 then 1.0 + (-0.577) * eSAC2A.rectifierCommutationVoltageDrop.division.y else if eSAC2A.rectifierCommutationVoltageDrop.division.y > 0.433 and eSAC2A.rectifierCommutationVoltageDrop.division.y < 0.75 then sqrt(0.75 - eSAC2A.rectifierCommutationVoltageDrop.division.y ^ 2.0) else if eSAC2A.rectifierCommutationVoltageDrop.division.y >= 0.75 and eSAC2A.rectifierCommutationVoltageDrop.division.y <= 1.0 then 1.732 * (1.0 - eSAC2A.rectifierCommutationVoltageDrop.division.y) else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_858(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,858};
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
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[77] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */, 0.0, 14, LessEq);
  tmp13 = (modelica_boolean)tmp0;
  if(tmp13)
  {
    tmp14 = 1.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp1, data->localData[0]->realVars[77] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */, 0.0, 15, Greater);
    RELATIONHYSTERESIS(tmp2, data->localData[0]->realVars[77] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */, 0.433, 16, LessEq);
    tmp11 = (modelica_boolean)(tmp1 && tmp2);
    if(tmp11)
    {
      tmp12 = 1.0 + (-0.577) * (data->localData[0]->realVars[77] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */);
    }
    else
    {
      RELATIONHYSTERESIS(tmp3, data->localData[0]->realVars[77] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */, 0.433, 17, Greater);
      RELATIONHYSTERESIS(tmp4, data->localData[0]->realVars[77] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */, 0.75, 18, Less);
      tmp9 = (modelica_boolean)(tmp3 && tmp4);
      if(tmp9)
      {
        tmp5 = data->localData[0]->realVars[77] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */;
        tmp6 = 0.75 - ((tmp5 * tmp5));
        if(!(tmp6 >= 0.0))
        {
          FILE_INFO info = {"",0,0,0,0,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(0.75 - eSAC2A.rectifierCommutationVoltageDrop.division.y ^ 2.0) was %g should be >= 0", tmp6);
        }
        tmp10 = sqrt(tmp6);
      }
      else
      {
        RELATIONHYSTERESIS(tmp7, data->localData[0]->realVars[77] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */, 0.75, 19, GreaterEq);
        RELATIONHYSTERESIS(tmp8, data->localData[0]->realVars[77] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */, 1.0, 20, LessEq);
        tmp10 = ((tmp7 && tmp8)?(1.732) * (1.0 - data->localData[0]->realVars[77] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */):0.0);
      }
      tmp12 = tmp10;
    }
    tmp14 = tmp12;
  }
  data->localData[0]->realVars[78] /* eSAC2A.rectifierCommutationVoltageDrop.fEX.y variable */ = tmp14;
  TRACE_POP
}
/*
equation index: 859
type: SIMPLE_ASSIGN
eSAC2A._EFD = eSAC2A.rotatingExciterWithDemagnetization.sISO.y * eSAC2A.rectifierCommutationVoltageDrop.fEX.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_859(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,859};
  data->localData[0]->realVars[62] /* eSAC2A.EFD variable */ = (data->localData[0]->realVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */) * (data->localData[0]->realVars[78] /* eSAC2A.rectifierCommutationVoltageDrop.fEX.y variable */);
  TRACE_POP
}
/*
equation index: 860
type: SIMPLE_ASSIGN
eSAC2A._DiffV2._u2 = OpenIPSL.NonElectrical.Functions.SE(eSAC2A.EFD, eSAC2A.se1.SE1, eSAC2A.se1.SE2, eSAC2A.se1.E1, eSAC2A.se1.E2)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_860(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,860};
  data->localData[0]->realVars[59] /* eSAC2A.DiffV2.u2 variable */ = omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->localData[0]->realVars[62] /* eSAC2A.EFD variable */, data->simulationInfo->realParameter[168], data->simulationInfo->realParameter[169], data->simulationInfo->realParameter[166], data->simulationInfo->realParameter[167]);
  TRACE_POP
}
/*
equation index: 861
type: SIMPLE_ASSIGN
eSAC2A._DiffV2._y = eSAC2A.DiffV2.k1 * eSAC2A.const.k + eSAC2A.DiffV2.k2 * eSAC2A.DiffV2.u2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_861(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,861};
  data->localData[0]->realVars[60] /* eSAC2A.DiffV2.y variable */ = (data->simulationInfo->realParameter[84]) * (data->simulationInfo->realParameter[118]) + (data->simulationInfo->realParameter[85]) * (data->localData[0]->realVars[59] /* eSAC2A.DiffV2.u2 variable */);
  TRACE_POP
}
/*
equation index: 862
type: SIMPLE_ASSIGN
der(generator._Epq) = (eSAC2A.EFD - eSAC2A.XADIFD) / generator.Tpd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_862(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,862};
  data->localData[0]->realVars[21] /* der(generator.Epq) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[62] /* eSAC2A.EFD variable */ - data->localData[0]->realVars[64] /* eSAC2A.XADIFD variable */,data->simulationInfo->realParameter[242],"generator.Tpd0",equationIndexes);
  TRACE_POP
}
/*
equation index: 863
type: SIMPLE_ASSIGN
eSAC2A._DiffV1._y = eSAC2A.DiffV1.k1 * eSAC2A.FEMAX.k + eSAC2A.DiffV1.k2 * eSAC2A.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_863(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,863};
  data->localData[0]->realVars[58] /* eSAC2A.DiffV1.y variable */ = (data->simulationInfo->realParameter[82]) * (data->simulationInfo->realParameter[90]) + (data->simulationInfo->realParameter[83]) * (data->localData[0]->realVars[64] /* eSAC2A.XADIFD variable */);
  TRACE_POP
}
/*
equation index: 864
type: SIMPLE_ASSIGN
eSAC2A._division._y = eSAC2A.DiffV1.y / eSAC2A.DiffV2.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_864(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,864};
  data->localData[0]->realVars[68] /* eSAC2A.division.y variable */ = DIVISION_SIM(data->localData[0]->realVars[58] /* eSAC2A.DiffV1.y variable */,data->localData[0]->realVars[60] /* eSAC2A.DiffV2.y variable */,"eSAC2A.DiffV2.y",equationIndexes);
  TRACE_POP
}
/*
equation index: 865
type: SIMPLE_ASSIGN
der(generator._PSIkq) = (generator.Epd + (generator.Xpq - generator.Xl) * generator.iq - generator.PSIkq) / generator.Tppq0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_865(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,865};
  data->localData[0]->realVars[23] /* der(generator.PSIkq) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[7] /* generator.Epd STATE(1) */ + (data->simulationInfo->realParameter[255] - data->simulationInfo->realParameter[250]) * (data->localData[0]->realVars[108] /* generator.iq variable */) - data->localData[0]->realVars[10] /* generator.PSIkq STATE(1) */,data->simulationInfo->realParameter[244],"generator.Tppq0",equationIndexes);
  TRACE_POP
}
/*
equation index: 866
type: SIMPLE_ASSIGN
generator._XaqIlq = generator.K1q * (generator.Epd + (generator.Xpq - generator.Xl) * generator.iq - generator.PSIkq) + generator.Epd + generator.iq * (generator.Xpq - generator.Xq) + $cse5 * generator.PSIppq * (generator.Xq - generator.Xl) / (generator.Xd - generator.Xl)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_866(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,866};
  data->localData[0]->realVars[104] /* generator.XaqIlq variable */ = (data->simulationInfo->realParameter[216]) * (data->localData[0]->realVars[7] /* generator.Epd STATE(1) */ + (data->simulationInfo->realParameter[255] - data->simulationInfo->realParameter[250]) * (data->localData[0]->realVars[108] /* generator.iq variable */) - data->localData[0]->realVars[10] /* generator.PSIkq STATE(1) */) + data->localData[0]->realVars[7] /* generator.Epd STATE(1) */ + (data->localData[0]->realVars[108] /* generator.iq variable */) * (data->simulationInfo->realParameter[255] - data->simulationInfo->realParameter[256]) + (data->localData[0]->realVars[29] /* $cse5 variable */) * ((data->localData[0]->realVars[100] /* generator.PSIppq variable */) * (DIVISION_SIM(data->simulationInfo->realParameter[256] - data->simulationInfo->realParameter[250],data->simulationInfo->realParameter[249] - data->simulationInfo->realParameter[250],"generator.Xd - generator.Xl",equationIndexes)));
  TRACE_POP
}
/*
equation index: 867
type: SIMPLE_ASSIGN
der(generator._Epd) = (-generator.XaqIlq) / generator.Tpq0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_867(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,867};
  data->localData[0]->realVars[20] /* der(generator.Epd) STATE_DER */ = DIVISION_SIM((-data->localData[0]->realVars[104] /* generator.XaqIlq variable */),data->simulationInfo->realParameter[245],"generator.Tpq0",equationIndexes);
  TRACE_POP
}
/*
equation index: 868
type: SIMPLE_ASSIGN
generator._Te = generator.PSId * generator.iq - generator.PSIq * generator.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_868(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,868};
  data->localData[0]->realVars[103] /* generator.Te variable */ = (data->localData[0]->realVars[97] /* generator.PSId variable */) * (data->localData[0]->realVars[108] /* generator.iq variable */) - ((data->localData[0]->realVars[101] /* generator.PSIq variable */) * (data->localData[0]->realVars[107] /* generator.id variable */));
  TRACE_POP
}
/*
equation index: 869
type: SIMPLE_ASSIGN
der(generator._w) = 0.5 * ((generator.pm0 - generator.D * generator.w) / (1.0 + generator.w) - generator.Te) / generator.H
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_869(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,869};
  data->localData[0]->realVars[25] /* der(generator.w) STATE_DER */ = (0.5) * (DIVISION_SIM(DIVISION_SIM(data->simulationInfo->realParameter[276] - ((data->simulationInfo->realParameter[203]) * (data->localData[0]->realVars[12] /* generator.w STATE(1) */)),1.0 + data->localData[0]->realVars[12] /* generator.w STATE(1) */,"1.0 + generator.w",equationIndexes) - data->localData[0]->realVars[103] /* generator.Te variable */,data->simulationInfo->realParameter[208],"generator.H",equationIndexes));
  TRACE_POP
}
/*
equation index: 870
type: SIMPLE_ASSIGN
generator._I = sqrt(pwLine.is.im ^ 2.0 + pwLine.is.re ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_870(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,870};
  modelica_real tmp15;
  modelica_real tmp16;
  tmp15 = data->localData[0]->realVars[119] /* pwLine.is.im variable */;
  tmp16 = data->localData[0]->realVars[120] /* pwLine.is.re variable */;
  data->localData[0]->realVars[95] /* generator.I variable */ = sqrt((tmp15 * tmp15) + (tmp16 * tmp16));
  TRACE_POP
}
/*
equation index: 871
type: SIMPLE_ASSIGN
generator._anglei = atan2(-pwLine.is.im, -pwLine.is.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_871(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,871};
  data->localData[0]->realVars[105] /* generator.anglei variable */ = atan2((-data->localData[0]->realVars[119] /* pwLine.is.im variable */), (-data->localData[0]->realVars[120] /* pwLine.is.re variable */));
  TRACE_POP
}
/*
equation index: 872
type: SIMPLE_ASSIGN
generator._P = pwLine.vs.im * pwLine.is.im + pwLine.vs.re * pwLine.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_872(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,872};
  data->localData[0]->realVars[96] /* generator.P variable */ = (data->localData[0]->realVars[121] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[119] /* pwLine.is.im variable */) + (data->localData[0]->realVars[122] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[120] /* pwLine.is.re variable */);
  TRACE_POP
}
/*
equation index: 873
type: SIMPLE_ASSIGN
eSAC2A._ECOMP = generator.P / generator.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_873(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,873};
  data->localData[0]->realVars[61] /* eSAC2A.ECOMP variable */ = DIVISION_SIM(data->localData[0]->realVars[96] /* generator.P variable */,data->simulationInfo->realParameter[202],"generator.CoB",equationIndexes);
  TRACE_POP
}
/*
equation index: 874
type: SIMPLE_ASSIGN
der(eSAC2A._imSimpleLag._state) = (eSAC2A.imSimpleLag.K * eSAC2A.ECOMP - eSAC2A.imSimpleLag.state) / eSAC2A.imSimpleLag.T_mod
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_874(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,874};
  data->localData[0]->realVars[15] /* der(eSAC2A.imSimpleLag.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[139]) * (data->localData[0]->realVars[61] /* eSAC2A.ECOMP variable */) - data->localData[0]->realVars[2] /* eSAC2A.imSimpleLag.state STATE(1) */,data->simulationInfo->realParameter[141],"eSAC2A.imSimpleLag.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 875
type: SIMPLE_ASSIGN
eSAC2A._DiffV._u2 = if abs(eSAC2A.imSimpleLag.T) <= 1e-15 then eSAC2A.ECOMP * eSAC2A.imSimpleLag.K else eSAC2A.imSimpleLag.state
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_875(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,875};
  modelica_boolean tmp17;
  tmp17 = LessEq(fabs(data->simulationInfo->realParameter[140]),1e-15);
  data->localData[0]->realVars[56] /* eSAC2A.DiffV.u2 variable */ = (tmp17?(data->localData[0]->realVars[61] /* eSAC2A.ECOMP variable */) * (data->simulationInfo->realParameter[139]):data->localData[0]->realVars[2] /* eSAC2A.imSimpleLag.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 876
type: SIMPLE_ASSIGN
eSAC2A._DiffV._y = eSAC2A.DiffV.k1 * eSAC2A.VoltageReference.k + eSAC2A.DiffV.k2 * eSAC2A.DiffV.u2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_876(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,876};
  data->localData[0]->realVars[57] /* eSAC2A.DiffV.y variable */ = (data->simulationInfo->realParameter[80]) * (data->simulationInfo->realParameter[114]) + (data->simulationInfo->realParameter[81]) * (data->localData[0]->realVars[56] /* eSAC2A.DiffV.u2 variable */);
  TRACE_POP
}
/*
equation index: 877
type: SIMPLE_ASSIGN
eSAC2A._add3_1._y = eSAC2A.add3_1.k1 * const.k + eSAC2A.add3_1.k2 * eSAC2A.DiffV.y + eSAC2A.add3_1.k3 * eSAC2A.derivative.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_877(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,877};
  data->localData[0]->realVars[65] /* eSAC2A.add3_1.y variable */ = (data->simulationInfo->realParameter[115]) * (data->simulationInfo->realParameter[34]) + (data->simulationInfo->realParameter[116]) * (data->localData[0]->realVars[57] /* eSAC2A.DiffV.y variable */) + (data->simulationInfo->realParameter[117]) * (data->localData[0]->realVars[67] /* eSAC2A.derivative.y variable */);
  TRACE_POP
}
/*
equation index: 878
type: SIMPLE_ASSIGN
der(eSAC2A._imLeadLag._TF._x_scaled[1]) = (eSAC2A.imLeadLag.TF.a_end * eSAC2A.add3_1.y - eSAC2A.imLeadLag.TF.a[2] * eSAC2A.imLeadLag.TF.x_scaled[1]) / eSAC2A.imLeadLag.TF.a[1]
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_878(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,878};
  data->localData[0]->realVars[14] /* der(eSAC2A.imLeadLag.TF.x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[129]) * (data->localData[0]->realVars[65] /* eSAC2A.add3_1.y variable */) - ((data->simulationInfo->realParameter[128]) * (data->localData[0]->realVars[1] /* eSAC2A.imLeadLag.TF.x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[127],"eSAC2A.imLeadLag.TF.a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 879
type: SIMPLE_ASSIGN
eSAC2A._imLeadLag._TF._y = (eSAC2A.imLeadLag.TF.bb[2] - eSAC2A.imLeadLag.TF.a[2] * eSAC2A.imLeadLag.TF.d) * eSAC2A.imLeadLag.TF.x[1] + eSAC2A.imLeadLag.TF.d * eSAC2A.add3_1.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_879(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,879};
  data->localData[0]->realVars[72] /* eSAC2A.imLeadLag.TF.y variable */ = (data->simulationInfo->realParameter[133] - ((data->simulationInfo->realParameter[128]) * (data->simulationInfo->realParameter[134]))) * (data->localData[0]->realVars[71] /* eSAC2A.imLeadLag.TF.x[1] variable */) + (data->simulationInfo->realParameter[134]) * (data->localData[0]->realVars[65] /* eSAC2A.add3_1.y variable */);
  TRACE_POP
}
/*
equation index: 880
type: SIMPLE_ASSIGN
eSAC2A._imLeadLag._y = if abs(eSAC2A.imLeadLag.T1 - eSAC2A.imLeadLag.T2) < 1e-15 then eSAC2A.imLeadLag.K * eSAC2A.add3_1.y else eSAC2A.imLeadLag.TF.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_880(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,880};
  modelica_boolean tmp18;
  tmp18 = Less(fabs(data->simulationInfo->realParameter[124] - data->simulationInfo->realParameter[125]),1e-15);
  data->localData[0]->realVars[73] /* eSAC2A.imLeadLag.y variable */ = (tmp18?(data->simulationInfo->realParameter[123]) * (data->localData[0]->realVars[65] /* eSAC2A.add3_1.y variable */):data->localData[0]->realVars[72] /* eSAC2A.imLeadLag.TF.y variable */);
  TRACE_POP
}
/*
equation index: 881
type: SIMPLE_ASSIGN
der(eSAC2A._simpleLagLim._state) = (eSAC2A.simpleLagLim.K * eSAC2A.imLeadLag.y - eSAC2A.simpleLagLim.state) / eSAC2A.simpleLagLim.T_mod
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_881(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,881};
  data->localData[0]->realVars[17] /* der(eSAC2A.simpleLagLim.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[170]) * (data->localData[0]->realVars[73] /* eSAC2A.imLeadLag.y variable */) - data->localData[0]->realVars[4] /* eSAC2A.simpleLagLim.state STATE(1) */,data->simulationInfo->realParameter[172],"eSAC2A.simpleLagLim.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 882
type: SIMPLE_ASSIGN
eSAC2A._hV_GATE._n1 = if abs(eSAC2A.simpleLagLim.T) <= 1e-15 then max(min(eSAC2A.imLeadLag.y * eSAC2A.simpleLagLim.K, eSAC2A.simpleLagLim.outMax), eSAC2A.simpleLagLim.outMin) else max(min(eSAC2A.simpleLagLim.state, eSAC2A.simpleLagLim.outMax), eSAC2A.simpleLagLim.outMin)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_882(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,882};
  modelica_boolean tmp19;
  tmp19 = LessEq(fabs(data->simulationInfo->realParameter[171]),1e-15);
  data->localData[0]->realVars[69] /* eSAC2A.hV_GATE.n1 variable */ = (tmp19?fmax(fmin((data->localData[0]->realVars[73] /* eSAC2A.imLeadLag.y variable */) * (data->simulationInfo->realParameter[170]),data->simulationInfo->realParameter[173]),data->simulationInfo->realParameter[174]):fmax(fmin(data->localData[0]->realVars[4] /* eSAC2A.simpleLagLim.state STATE(1) */,data->simulationInfo->realParameter[173]),data->simulationInfo->realParameter[174]));
  TRACE_POP
}
/*
equation index: 883
type: SIMPLE_ASSIGN
eSAC2A._hV_GATE._p = if eSAC2A.hV_GATE.n1 < const5.k then const5.k else eSAC2A.hV_GATE.n1
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_883(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,883};
  modelica_boolean tmp20;
  RELATIONHYSTERESIS(tmp20, data->localData[0]->realVars[69] /* eSAC2A.hV_GATE.n1 variable */, data->simulationInfo->realParameter[37], 21, Less);
  data->localData[0]->realVars[70] /* eSAC2A.hV_GATE.p variable */ = (tmp20?data->simulationInfo->realParameter[37]:data->localData[0]->realVars[69] /* eSAC2A.hV_GATE.n1 variable */);
  TRACE_POP
}
/*
equation index: 884
type: SIMPLE_ASSIGN
eSAC2A._lV_GATE._p = if const4.k > eSAC2A.hV_GATE.p then eSAC2A.hV_GATE.p else const4.k
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_884(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,884};
  modelica_boolean tmp21;
  RELATIONHYSTERESIS(tmp21, data->simulationInfo->realParameter[36], data->localData[0]->realVars[70] /* eSAC2A.hV_GATE.p variable */, 22, Greater);
  data->localData[0]->realVars[74] /* eSAC2A.lV_GATE.p variable */ = (tmp21?data->localData[0]->realVars[70] /* eSAC2A.hV_GATE.p variable */:data->simulationInfo->realParameter[36]);
  TRACE_POP
}
/*
equation index: 885
type: SIMPLE_ASSIGN
eSAC2A._limiter1._y = smooth(0, if eSAC2A.lV_GATE.p > eSAC2A.limiter1.uMax then eSAC2A.limiter1.uMax else if eSAC2A.lV_GATE.p < eSAC2A.limiter1.uMin then eSAC2A.limiter1.uMin else eSAC2A.lV_GATE.p)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_885(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,885};
  modelica_boolean tmp22;
  modelica_boolean tmp23;
  modelica_boolean tmp24;
  modelica_real tmp25;
  tmp22 = Greater(data->localData[0]->realVars[74] /* eSAC2A.lV_GATE.p variable */,data->simulationInfo->realParameter[143]);
  tmp24 = (modelica_boolean)tmp22;
  if(tmp24)
  {
    tmp25 = data->simulationInfo->realParameter[143];
  }
  else
  {
    tmp23 = Less(data->localData[0]->realVars[74] /* eSAC2A.lV_GATE.p variable */,data->simulationInfo->realParameter[144]);
    tmp25 = (tmp23?data->simulationInfo->realParameter[144]:data->localData[0]->realVars[74] /* eSAC2A.lV_GATE.p variable */);
  }
  data->localData[0]->realVars[75] /* eSAC2A.limiter1.y variable */ = tmp25;
  TRACE_POP
}
/*
equation index: 886
type: SIMPLE_ASSIGN
eSAC2A._rotatingExciterWithDemagnetization._feedback._y = eSAC2A.limiter1.y - eSAC2A.derivative.u
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_886(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,886};
  data->localData[0]->realVars[82] /* eSAC2A.rotatingExciterWithDemagnetization.feedback.y variable */ = data->localData[0]->realVars[75] /* eSAC2A.limiter1.y variable */ - data->localData[0]->realVars[66] /* eSAC2A.derivative.u variable */;
  TRACE_POP
}
/*
equation index: 887
type: SIMPLE_ASSIGN
der(eSAC2A._rotatingExciterWithDemagnetization._sISO._y) = if eSAC2A.rotatingExciterWithDemagnetization.sISO.y >= eSAC2A.division.y and eSAC2A.rotatingExciterWithDemagnetization.feedback.y > 0.0 then 0.0 else if eSAC2A.rotatingExciterWithDemagnetization.sISO.y <= eSAC2A.lowLim.k and eSAC2A.rotatingExciterWithDemagnetization.feedback.y < 0.0 then 0.0 else eSAC2A.rotatingExciterWithDemagnetization.sISO.K * eSAC2A.rotatingExciterWithDemagnetization.feedback.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_887(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,887};
  modelica_boolean tmp26;
  modelica_boolean tmp27;
  modelica_boolean tmp28;
  modelica_boolean tmp29;
  modelica_boolean tmp30;
  modelica_real tmp31;
  RELATIONHYSTERESIS(tmp26, data->localData[0]->realVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */, data->localData[0]->realVars[68] /* eSAC2A.division.y variable */, 23, GreaterEq);
  RELATIONHYSTERESIS(tmp27, data->localData[0]->realVars[82] /* eSAC2A.rotatingExciterWithDemagnetization.feedback.y variable */, 0.0, 24, Greater);
  tmp30 = (modelica_boolean)(tmp26 && tmp27);
  if(tmp30)
  {
    tmp31 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp28, data->localData[0]->realVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */, data->simulationInfo->realParameter[145], 25, LessEq);
    RELATIONHYSTERESIS(tmp29, data->localData[0]->realVars[82] /* eSAC2A.rotatingExciterWithDemagnetization.feedback.y variable */, 0.0, 26, Less);
    tmp31 = ((tmp28 && tmp29)?0.0:(data->simulationInfo->realParameter[160]) * (data->localData[0]->realVars[82] /* eSAC2A.rotatingExciterWithDemagnetization.feedback.y variable */));
  }
  data->localData[0]->realVars[16] /* der(eSAC2A.rotatingExciterWithDemagnetization.sISO.y) STATE_DER */ = tmp31;
  TRACE_POP
}
/*
equation index: 888
type: SIMPLE_ASSIGN
$whenCondition2 = eSAC2A.simpleLagLim.state > eSAC2A.simpleLagLim.outMax and eSAC2A.simpleLagLim.K * eSAC2A.imLeadLag.y - eSAC2A.simpleLagLim.state < 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_888(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,888};
  modelica_boolean tmp32;
  modelica_boolean tmp33;
  RELATIONHYSTERESIS(tmp32, data->localData[0]->realVars[4] /* eSAC2A.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[173], 27, Greater);
  RELATIONHYSTERESIS(tmp33, (data->simulationInfo->realParameter[170]) * (data->localData[0]->realVars[73] /* eSAC2A.imLeadLag.y variable */) - data->localData[0]->realVars[4] /* eSAC2A.simpleLagLim.state STATE(1) */, 0.0, 28, Less);
  data->localData[0]->booleanVars[1] /* $whenCondition2 DISCRETE */ = (tmp32 && tmp33);
  TRACE_POP
}
/*
equation index: 889
type: SIMPLE_ASSIGN
$whenCondition1 = eSAC2A.simpleLagLim.state < eSAC2A.simpleLagLim.outMin and eSAC2A.simpleLagLim.K * eSAC2A.imLeadLag.y - eSAC2A.simpleLagLim.state > 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_889(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,889};
  modelica_boolean tmp34;
  modelica_boolean tmp35;
  RELATIONHYSTERESIS(tmp34, data->localData[0]->realVars[4] /* eSAC2A.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[174], 29, Less);
  RELATIONHYSTERESIS(tmp35, (data->simulationInfo->realParameter[170]) * (data->localData[0]->realVars[73] /* eSAC2A.imLeadLag.y variable */) - data->localData[0]->realVars[4] /* eSAC2A.simpleLagLim.state STATE(1) */, 0.0, 30, Greater);
  data->localData[0]->booleanVars[0] /* $whenCondition1 DISCRETE */ = (tmp34 && tmp35);
  TRACE_POP
}
/*
equation index: 890
type: SIMPLE_ASSIGN
generator._Q = pwLine.vs.im * pwLine.is.re - pwLine.vs.re * pwLine.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_890(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,890};
  data->localData[0]->realVars[102] /* generator.Q variable */ = (data->localData[0]->realVars[121] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[120] /* pwLine.is.re variable */) - ((data->localData[0]->realVars[122] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[119] /* pwLine.is.im variable */));
  TRACE_POP
}
/*
equation index: 891
type: SIMPLE_ASSIGN
generator._ETERM = sqrt(pwLine.vs.re ^ 2.0 + pwLine.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_891(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,891};
  modelica_real tmp36;
  modelica_real tmp37;
  tmp36 = data->localData[0]->realVars[122] /* pwLine.vs.re variable */;
  tmp37 = data->localData[0]->realVars[121] /* pwLine.vs.im variable */;
  data->localData[0]->realVars[94] /* generator.ETERM variable */ = sqrt((tmp36 * tmp36) + (tmp37 * tmp37));
  TRACE_POP
}
/*
equation index: 892
type: SIMPLE_ASSIGN
GEN1._V = generator.ETERM
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_892(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,892};
  data->localData[0]->realVars[36] /* GEN1.V variable */ = data->localData[0]->realVars[94] /* generator.ETERM variable */;
  TRACE_POP
}
/*
equation index: 893
type: SIMPLE_ASSIGN
generator._anglev = atan2(pwLine.vs.im, pwLine.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_893(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,893};
  data->localData[0]->realVars[106] /* generator.anglev variable */ = atan2(data->localData[0]->realVars[121] /* pwLine.vs.im variable */, data->localData[0]->realVars[122] /* pwLine.vs.re variable */);
  TRACE_POP
}
/*
equation index: 894
type: SIMPLE_ASSIGN
GEN1._angle = 57.29577951308232 * generator.anglev
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_894(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,894};
  data->localData[0]->realVars[37] /* GEN1.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[106] /* generator.anglev variable */);
  TRACE_POP
}
/*
equation index: 895
type: SIMPLE_ASSIGN
pwLine._Q12 = (pwLine.vs.im * pwLine.is.re - pwLine.vs.re * pwLine.is.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_895(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,895};
  data->localData[0]->realVars[115] /* pwLine.Q12 variable */ = ((data->localData[0]->realVars[121] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[120] /* pwLine.is.re variable */) - ((data->localData[0]->realVars[122] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[119] /* pwLine.is.im variable */))) * (data->simulationInfo->realParameter[291]);
  TRACE_POP
}
/*
equation index: 896
type: SIMPLE_ASSIGN
pwLine._P12 = (pwLine.vs.re * pwLine.is.re + pwLine.vs.im * pwLine.is.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_896(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,896};
  data->localData[0]->realVars[113] /* pwLine.P12 variable */ = ((data->localData[0]->realVars[122] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[120] /* pwLine.is.re variable */) + (data->localData[0]->realVars[121] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[119] /* pwLine.is.im variable */)) * (data->simulationInfo->realParameter[291]);
  TRACE_POP
}
/*
equation index: 897
type: SIMPLE_ASSIGN
pwLine4._P21 = ((-pwLine1.vr.re) * pwLine4.ir.re - pwLine1.vr.im * pwLine4.ir.im) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_897(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,897};
  data->localData[0]->realVars[146] /* pwLine4.P21 variable */ = (((-data->localData[0]->realVars[132] /* pwLine1.vr.re variable */)) * (data->localData[0]->realVars[150] /* pwLine4.ir.re variable */) - ((data->localData[0]->realVars[131] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[149] /* pwLine4.ir.im variable */))) * (data->simulationInfo->realParameter[324]);
  TRACE_POP
}
/*
equation index: 898
type: SIMPLE_ASSIGN
pwLine4._Q21 = (pwLine1.vr.re * pwLine4.ir.im - pwLine1.vr.im * pwLine4.ir.re) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_898(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,898};
  data->localData[0]->realVars[148] /* pwLine4.Q21 variable */ = ((data->localData[0]->realVars[132] /* pwLine1.vr.re variable */) * (data->localData[0]->realVars[149] /* pwLine4.ir.im variable */) - ((data->localData[0]->realVars[131] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[150] /* pwLine4.ir.re variable */))) * (data->simulationInfo->realParameter[324]);
  TRACE_POP
}
/*
equation index: 899
type: SIMPLE_ASSIGN
GEN2._V = sqrt(pwLine1.vr.re ^ 2.0 + pwLine1.vr.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_899(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,899};
  modelica_real tmp38;
  modelica_real tmp39;
  tmp38 = data->localData[0]->realVars[132] /* pwLine1.vr.re variable */;
  tmp39 = data->localData[0]->realVars[131] /* pwLine1.vr.im variable */;
  data->localData[0]->realVars[40] /* GEN2.V variable */ = sqrt((tmp38 * tmp38) + (tmp39 * tmp39));
  TRACE_POP
}
/*
equation index: 900
type: SIMPLE_ASSIGN
gENCLS._V = GEN2.V
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_900(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,900};
  data->localData[0]->realVars[85] /* gENCLS.V variable */ = data->localData[0]->realVars[40] /* GEN2.V variable */;
  TRACE_POP
}
/*
equation index: 901
type: SIMPLE_ASSIGN
gENCLS._anglev = atan2(pwLine1.vr.im, pwLine1.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_901(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,901};
  data->localData[0]->realVars[86] /* gENCLS.anglev variable */ = atan2(data->localData[0]->realVars[131] /* pwLine1.vr.im variable */, data->localData[0]->realVars[132] /* pwLine1.vr.re variable */);
  TRACE_POP
}
/*
equation index: 902
type: SIMPLE_ASSIGN
GEN2._angle = 57.29577951308232 * gENCLS.anglev
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_902(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,902};
  data->localData[0]->realVars[41] /* GEN2.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[86] /* gENCLS.anglev variable */);
  TRACE_POP
}
/*
equation index: 903
type: SIMPLE_ASSIGN
pwLine3._P21 = ((-pwLine3.vr.re) * pwLine3.ir.re - pwLine3.vr.im * pwLine3.ir.im) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_903(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,903};
  data->localData[0]->realVars[136] /* pwLine3.P21 variable */ = (((-data->localData[0]->realVars[144] /* pwLine3.vr.re variable */)) * (data->localData[0]->realVars[140] /* pwLine3.ir.re variable */) - ((data->localData[0]->realVars[143] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[139] /* pwLine3.ir.im variable */))) * (data->simulationInfo->realParameter[313]);
  TRACE_POP
}
/*
equation index: 904
type: SIMPLE_ASSIGN
pwLine3._Q21 = (pwLine3.vr.re * pwLine3.ir.im - pwLine3.vr.im * pwLine3.ir.re) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_904(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,904};
  data->localData[0]->realVars[138] /* pwLine3.Q21 variable */ = ((data->localData[0]->realVars[144] /* pwLine3.vr.re variable */) * (data->localData[0]->realVars[139] /* pwLine3.ir.im variable */) - ((data->localData[0]->realVars[143] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[140] /* pwLine3.ir.re variable */))) * (data->simulationInfo->realParameter[313]);
  TRACE_POP
}
/*
equation index: 905
type: SIMPLE_ASSIGN
pwLine4._P12 = (pwLine3.vr.re * pwLine4.is.re + pwLine3.vr.im * pwLine4.is.im) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_905(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,905};
  data->localData[0]->realVars[145] /* pwLine4.P12 variable */ = ((data->localData[0]->realVars[144] /* pwLine3.vr.re variable */) * (data->localData[0]->realVars[152] /* pwLine4.is.re variable */) + (data->localData[0]->realVars[143] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[151] /* pwLine4.is.im variable */)) * (data->simulationInfo->realParameter[324]);
  TRACE_POP
}
/*
equation index: 906
type: SIMPLE_ASSIGN
pwLine4._Q12 = (pwLine3.vr.im * pwLine4.is.re - pwLine3.vr.re * pwLine4.is.im) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_906(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,906};
  data->localData[0]->realVars[147] /* pwLine4.Q12 variable */ = ((data->localData[0]->realVars[143] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[152] /* pwLine4.is.re variable */) - ((data->localData[0]->realVars[144] /* pwLine3.vr.re variable */) * (data->localData[0]->realVars[151] /* pwLine4.is.im variable */))) * (data->simulationInfo->realParameter[324]);
  TRACE_POP
}
/*
equation index: 907
type: SIMPLE_ASSIGN
FAULT._V = sqrt(pwLine3.vr.re ^ 2.0 + pwLine3.vr.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_907(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,907};
  modelica_real tmp40;
  modelica_real tmp41;
  tmp40 = data->localData[0]->realVars[144] /* pwLine3.vr.re variable */;
  tmp41 = data->localData[0]->realVars[143] /* pwLine3.vr.im variable */;
  data->localData[0]->realVars[32] /* FAULT.V variable */ = sqrt((tmp40 * tmp40) + (tmp41 * tmp41));
  TRACE_POP
}
/*
equation index: 908
type: SIMPLE_ASSIGN
$cse4 = atan2(pwLine3.vr.im, pwLine3.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_908(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,908};
  data->localData[0]->realVars[28] /* $cse4 variable */ = atan2(data->localData[0]->realVars[143] /* pwLine3.vr.im variable */, data->localData[0]->realVars[144] /* pwLine3.vr.re variable */);
  TRACE_POP
}
/*
equation index: 909
type: SIMPLE_ASSIGN
FAULT._angle = 57.29577951308232 * $cse4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_909(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,909};
  data->localData[0]->realVars[33] /* FAULT.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[28] /* $cse4 variable */);
  TRACE_POP
}
/*
equation index: 910
type: SIMPLE_ASSIGN
LOAD._V = constantLoad.v
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_910(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,910};
  data->localData[0]->realVars[44] /* LOAD.V variable */ = data->localData[0]->realVars[55] /* constantLoad.v variable */;
  TRACE_POP
}
/*
equation index: 911
type: SIMPLE_ASSIGN
pwLine1._P12 = (pwLine1.vs.re * pwLine1.is.re + pwLine1.vs.im * pwLine1.is.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_911(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,911};
  data->localData[0]->realVars[123] /* pwLine1.P12 variable */ = ((data->localData[0]->realVars[134] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[130] /* pwLine1.is.re variable */) + (data->localData[0]->realVars[133] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[129] /* pwLine1.is.im variable */)) * (data->simulationInfo->realParameter[302]);
  TRACE_POP
}
/*
equation index: 912
type: SIMPLE_ASSIGN
pwLine1._Q12 = (pwLine1.vs.im * pwLine1.is.re - pwLine1.vs.re * pwLine1.is.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_912(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,912};
  data->localData[0]->realVars[125] /* pwLine1.Q12 variable */ = ((data->localData[0]->realVars[133] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[130] /* pwLine1.is.re variable */) - ((data->localData[0]->realVars[134] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[129] /* pwLine1.is.im variable */))) * (data->simulationInfo->realParameter[302]);
  TRACE_POP
}
/*
equation index: 913
type: SIMPLE_ASSIGN
pwLine3._P12 = (pwLine1.vs.re * pwLine3.is.re + pwLine1.vs.im * pwLine3.is.im) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_913(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,913};
  data->localData[0]->realVars[135] /* pwLine3.P12 variable */ = ((data->localData[0]->realVars[134] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[142] /* pwLine3.is.re variable */) + (data->localData[0]->realVars[133] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[141] /* pwLine3.is.im variable */)) * (data->simulationInfo->realParameter[313]);
  TRACE_POP
}
/*
equation index: 914
type: SIMPLE_ASSIGN
pwLine3._Q12 = (pwLine1.vs.im * pwLine3.is.re - pwLine1.vs.re * pwLine3.is.im) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_914(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,914};
  data->localData[0]->realVars[137] /* pwLine3.Q12 variable */ = ((data->localData[0]->realVars[133] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[142] /* pwLine3.is.re variable */) - ((data->localData[0]->realVars[134] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[141] /* pwLine3.is.im variable */))) * (data->simulationInfo->realParameter[313]);
  TRACE_POP
}
/*
equation index: 915
type: SIMPLE_ASSIGN
constantLoad._angle = atan2(pwLine1.vs.im, pwLine1.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_915(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,915};
  data->localData[0]->realVars[50] /* constantLoad.angle variable */ = atan2(data->localData[0]->realVars[133] /* pwLine1.vs.im variable */, data->localData[0]->realVars[134] /* pwLine1.vs.re variable */);
  TRACE_POP
}
/*
equation index: 916
type: SIMPLE_ASSIGN
LOAD._angle = 57.29577951308232 * constantLoad.angle
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_916(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,916};
  data->localData[0]->realVars[45] /* LOAD.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[50] /* constantLoad.angle variable */);
  TRACE_POP
}
/*
equation index: 917
type: SIMPLE_ASSIGN
pwLine._Q21 = (pwLine1.vs.re * pwLine.ir.im - pwLine1.vs.im * pwLine.ir.re) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_917(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,917};
  data->localData[0]->realVars[116] /* pwLine.Q21 variable */ = ((data->localData[0]->realVars[134] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[117] /* pwLine.ir.im variable */) - ((data->localData[0]->realVars[133] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[118] /* pwLine.ir.re variable */))) * (data->simulationInfo->realParameter[291]);
  TRACE_POP
}
/*
equation index: 918
type: SIMPLE_ASSIGN
pwLine._P21 = ((-pwLine1.vs.re) * pwLine.ir.re - pwLine1.vs.im * pwLine.ir.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_918(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,918};
  data->localData[0]->realVars[114] /* pwLine.P21 variable */ = (((-data->localData[0]->realVars[134] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[118] /* pwLine.ir.re variable */) - ((data->localData[0]->realVars[133] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[117] /* pwLine.ir.im variable */))) * (data->simulationInfo->realParameter[291]);
  TRACE_POP
}
/*
equation index: 919
type: SIMPLE_ASSIGN
pwLine1._P21 = ((-pwLine1.vr.re) * pwLine1.ir.re - pwLine1.vr.im * pwLine1.ir.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_919(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,919};
  data->localData[0]->realVars[124] /* pwLine1.P21 variable */ = (((-data->localData[0]->realVars[132] /* pwLine1.vr.re variable */)) * (data->localData[0]->realVars[128] /* pwLine1.ir.re variable */) - ((data->localData[0]->realVars[131] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[127] /* pwLine1.ir.im variable */))) * (data->simulationInfo->realParameter[302]);
  TRACE_POP
}
/*
equation index: 920
type: SIMPLE_ASSIGN
pwLine1._Q21 = (pwLine1.vr.re * pwLine1.ir.im - pwLine1.vr.im * pwLine1.ir.re) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_920(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,920};
  data->localData[0]->realVars[126] /* pwLine1.Q21 variable */ = ((data->localData[0]->realVars[132] /* pwLine1.vr.re variable */) * (data->localData[0]->realVars[127] /* pwLine1.ir.im variable */) - ((data->localData[0]->realVars[131] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[128] /* pwLine1.ir.re variable */))) * (data->simulationInfo->realParameter[302]);
  TRACE_POP
}
/*
equation index: 921
type: SIMPLE_ASSIGN
gENCLS._P = (-pwLine1.vr.re) * gENCLS.p.ir - pwLine1.vr.im * gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_921(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,921};
  data->localData[0]->realVars[83] /* gENCLS.P variable */ = ((-data->localData[0]->realVars[132] /* pwLine1.vr.re variable */)) * (data->localData[0]->realVars[91] /* gENCLS.p.ir variable */) - ((data->localData[0]->realVars[131] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[90] /* gENCLS.p.ii variable */));
  TRACE_POP
}
/*
equation index: 922
type: SIMPLE_ASSIGN
gENCLS._Q = pwLine1.vr.re * gENCLS.p.ii - pwLine1.vr.im * gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_922(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,922};
  data->localData[0]->realVars[84] /* gENCLS.Q variable */ = (data->localData[0]->realVars[132] /* pwLine1.vr.re variable */) * (data->localData[0]->realVars[90] /* gENCLS.p.ii variable */) - ((data->localData[0]->realVars[131] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[91] /* gENCLS.p.ir variable */));
  TRACE_POP
}
/*
equation index: 926
type: ALGORITHM

  assert(eSAC2A.limiter1.uMax >= eSAC2A.limiter1.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(eSAC2A.limiter1.uMax, 6, 0, true) + ") < uMin (=" + String(eSAC2A.limiter1.uMin, 6, 0, true) + ")");
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_926(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,926};
  modelica_boolean tmp42;
  static const MMC_DEFSTRINGLIT(tmp43,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp44;
  static const MMC_DEFSTRINGLIT(tmp45,11,") < uMin (=");
  modelica_string tmp46;
  static int tmp47 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp42 = GreaterEq(data->simulationInfo->realParameter[143],data->simulationInfo->realParameter[144]);
    if(!tmp42)
    {
      tmp44 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[143], ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp43),tmp44);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp45));
      tmp46 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[144], ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp46);
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
/*
equation index: 924
type: WHEN

when {$whenCondition2} then
  reinit(eSAC2A._simpleLagLim._state,  eSAC2A.simpleLagLim.outMax);
end when;
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_924(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,924};
  if((data->localData[0]->booleanVars[1] /* $whenCondition2 DISCRETE */ && !data->simulationInfo->booleanVarsPre[1] /* $whenCondition2 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[4] /* eSAC2A.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[173];
    infoStreamPrint(LOG_EVENTS, 0, "reinit eSAC2A.simpleLagLim.state = %g", data->localData[0]->realVars[4] /* eSAC2A.simpleLagLim.state STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  else if((data->localData[0]->booleanVars[0] /* $whenCondition1 DISCRETE */ && !data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[4] /* eSAC2A.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[174];
    infoStreamPrint(LOG_EVENTS, 0, "reinit eSAC2A.simpleLagLim.state = %g", data->localData[0]->realVars[4] /* eSAC2A.simpleLagLim.state STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}
/*
equation index: 923
type: ALGORITHM

  assert(eSAC2A.division.y > eSAC2A.lowLim.k, "Upper limit must be greater than lower limit");
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_923(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,923};
  modelica_boolean tmp48;
  static const MMC_DEFSTRINGLIT(tmp49,44,"Upper limit must be greater than lower limit");
  static int tmp50 = 0;
  {
    tmp48 = Greater(data->localData[0]->realVars[68] /* eSAC2A.division.y variable */,data->simulationInfo->realParameter[145]);
    if(!tmp48)
    {
      {
        FILE_INFO info = {"/home/manuelnvro/dev/Gitted/OpenIPSL/OpenIPSL/NonElectrical/Continuous/IntegratorLimVar.mo",21,3,24,26,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neSAC2A.division.y > eSAC2A.lowLim.k", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp49)));
      }
    }
  }
  TRACE_POP
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
  
  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_functionLocalKnownVars(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_744(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_745(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_746(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_747(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_748(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_749(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_750(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_751(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_752(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_753(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_754(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_755(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_756(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_757(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_758(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_759(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_850(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_851(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_852(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_853(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_854(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_855(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_856(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_857(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_858(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_859(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_860(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_861(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_862(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_863(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_864(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_865(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_866(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_867(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_868(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_869(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_870(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_871(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_872(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_873(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_874(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_875(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_876(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_877(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_878(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_879(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_880(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_881(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_882(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_883(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_884(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_885(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_886(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_887(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_888(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_889(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_890(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_891(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_892(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_893(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_894(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_895(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_896(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_897(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_898(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_899(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_900(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_901(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_902(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_903(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_904(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_905(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_906(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_907(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_908(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_909(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_910(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_911(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_912(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_913(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_914(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_915(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_916(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_917(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_918(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_919(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_920(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_921(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_922(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_926(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_924(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_923(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}


int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/* forwarded equations */
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_745(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_746(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_747(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_748(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_749(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_750(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_751(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_752(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_753(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_754(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_755(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_756(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_757(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_758(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_759(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_850(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_851(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_852(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_853(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_854(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_855(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_856(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_857(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_858(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_859(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_860(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_861(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_862(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_863(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_864(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_865(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_866(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_867(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_868(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_869(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_872(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_873(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_874(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_875(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_876(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_877(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_878(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_879(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_880(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_881(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_882(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_883(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_884(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_885(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_886(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_887(DATA* data, threadData_t *threadData);

static void functionODE_system0(DATA *data, threadData_t *threadData)
{
    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_745(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_746(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_747(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_748(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_749(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_750(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_751(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_752(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_753(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_754(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_755(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_756(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_757(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_758(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_759(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_850(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_851(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_852(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_853(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_854(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_855(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_856(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_857(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_858(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_859(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_860(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_861(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_862(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_863(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_864(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_865(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_866(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_867(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_868(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_869(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_872(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_873(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_874(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_875(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_876(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_877(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_878(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_879(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_880(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_881(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_882(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_883(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_884(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_885(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_886(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_887(data, threadData);
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  data->simulationInfo->callStatistics.functionODE++;
  
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_functionLocalKnownVars(data, threadData);
  functionODE_system0(data, threadData);

  
  TRACE_POP
  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char**argv, DATA *data, threadData_t *threadData);

#include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC2A_12jac.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC2A_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_callback = {
   (int (*)(DATA *, threadData_t *, void *)) OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_performSimulation,
   (int (*)(DATA *, threadData_t *, void *)) OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_performQSSSimulation,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_updateContinuousSystem,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_callExternalObjectDestructors,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_initialNonLinearSystem,
   NULL,
   NULL,
   #if !defined(OMC_NO_STATESELECTION)
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_initializeStateSets,
   #else
   NULL,
   #endif
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_initializeDAEmodeData,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_functionODE,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_functionAlgebraics,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_functionDAE,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_functionLocalKnownVars,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_input_function,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_input_function_init,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_input_function_updateStartValues,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_output_function,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_function_storeDelayed,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_updateBoundVariableAttributes,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_functionInitialEquations,
   1, /* useHomotopy - 0: local homotopy (equidistant lambda), 1: global homotopy (equidistant lambda), 2: new global homotopy approach (adaptive lambda), 3: new local homotopy approach (adaptive lambda)*/
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_functionInitialEquations_lambda0,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_functionRemovedInitialEquations,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_updateBoundParameters,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_checkForAsserts,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_function_ZeroCrossingsEquations,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_function_ZeroCrossings,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_function_updateRelations,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_zeroCrossingDescription,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_relationDescription,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_function_initSample,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_INDEX_JAC_A,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_INDEX_JAC_B,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_INDEX_JAC_C,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_INDEX_JAC_D,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_initialAnalyticJacobianA,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_initialAnalyticJacobianB,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_initialAnalyticJacobianC,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_initialAnalyticJacobianD,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_functionJacA_column,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_functionJacB_column,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_functionJacC_column,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_functionJacD_column,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_linear_model_frame,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_linear_model_datarecovery_frame,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_mayer,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_lagrange,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_pickUpBoundsForInputsInOptimization,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_setInputData,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_getTimeGrid,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_symbolicInlineSystem,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_function_initSynchronous,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_function_updateSynchronous,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_function_equationsSynchronous,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_inputNames,
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
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "OpenIPSL.Examples.Controls.PSSE.ES.ESAC2A";
  data->modelData->modelFilePrefix = "OpenIPSL.Examples.Controls.PSSE.ES.ESAC2A";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "/home/manuelnvro/dev/Gitted/OpenIPSL/OpenIPSL/Examples/Controls/PSSE/ES";
  data->modelData->modelGUID = "{9da3fb15-4e6f-4302-81b7-9df57b9b2c13}";
  #if defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME)
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  #else
  #if defined(_MSC_VER) /* handle joke compilers */
  {
  /* for MSVC we encode a string like char x[] = {'a', 'b', 'c', '\0'} */
  /* because the string constant limit is 65535 bytes */
  static const char contents_init[] =
    #include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC2A_init.c"
    ;
  static const char contents_info[] =
    #include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC2A_info.c"
    ;
    data->modelData->initXMLData = contents_init;
    data->modelData->modelDataXml.infoXMLData = contents_info;
  }
  #else /* handle real compilers */
  data->modelData->initXMLData =
  #include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC2A_init.c"
    ;
  data->modelData->modelDataXml.infoXMLData =
  #include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC2A_info.c"
    ;
  #endif /* defined(_MSC_VER) */
  #endif /* defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME) */
  
  data->modelData->nStates = 13;
  data->modelData->nVariablesReal = 153;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesInteger = 0;
  data->modelData->nVariablesBoolean = 2;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 332;
  data->modelData->nParametersInteger = 10;
  data->modelData->nParametersBoolean = 71;
  data->modelData->nParametersString = 0;
  data->modelData->nInputVars = 0;
  data->modelData->nOutputVars = 0;
  
  data->modelData->nAliasReal = 134;
  data->modelData->nAliasInteger = 0;
  data->modelData->nAliasBoolean = 0;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 30;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 31;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  data->modelData->modelDataXml.fileName = "OpenIPSL.Examples.Controls.PSSE.ES.ESAC2A_info.json";
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 6;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 1184;
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
  
    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_setupDataStruc(&data, threadData);
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


