/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC2A_model.h"
#include "simulation/solver/events.h"

#define prefixedName_performSimulation OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_performSimulation
#define prefixedName_updateContinuousSystem OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_updateContinuousSystem
#include <simulation/solver/perform_simulation.c.inc>

#define prefixedName_performQSSSimulation OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_performQSSSimulation
#include <simulation/solver/perform_qss_simulation.c.inc>

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

int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_data_function(DATA *data, threadData_t *threadData)
{
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

int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_setc_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/*
equation index: 783
type: SIMPLE_ASSIGN
eSAC2A.EFD0 = gENROU.efd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_783(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,783};
  data->localData[0]->realVars[66] /* eSAC2A.EFD0 variable */ = data->simulationInfo->realParameter[299] /* gENROU.efd0 PARAM */;
  TRACE_POP
}
/*
equation index: 784
type: SIMPLE_ASSIGN
$DER.gENCLS.delta = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_784(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,784};
  data->localData[0]->realVars[18] /* der(gENCLS.delta) STATE_DER */ = 0.0;
  TRACE_POP
}
/*
equation index: 785
type: SIMPLE_ASSIGN
$DER.gENCLS.eq = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_785(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,785};
  data->localData[0]->realVars[19] /* der(gENCLS.eq) STATE_DER */ = 0.0;
  TRACE_POP
}
/*
equation index: 786
type: SIMPLE_ASSIGN
gENROU.PSIppd = gENROU.Epq * gENROU.K3d + gENROU.PSIkd * gENROU.K4d
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_786(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,786};
  data->localData[0]->realVars[102] /* gENROU.PSIppd variable */ = (data->localData[0]->realVars[8] /* gENROU.Epq STATE(1) */) * (data->simulationInfo->realParameter[247] /* gENROU.K3d PARAM */) + (data->localData[0]->realVars[9] /* gENROU.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[249] /* gENROU.K4d PARAM */);
  TRACE_POP
}
/*
equation index: 787
type: SIMPLE_ASSIGN
gENROU.PSIppq = gENROU.PSIkq * gENROU.K4q + gENROU.Epd * gENROU.K3q
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_787(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,787};
  data->localData[0]->realVars[103] /* gENROU.PSIppq variable */ = (data->localData[0]->realVars[10] /* gENROU.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[250] /* gENROU.K4q PARAM */) + (data->localData[0]->realVars[7] /* gENROU.Epd STATE(1) */) * (data->simulationInfo->realParameter[248] /* gENROU.K3q PARAM */);
  TRACE_POP
}
/*
equation index: 788
type: SIMPLE_ASSIGN
gENROU.PSIpp = sqrt(gENROU.PSIppd ^ 2.0 + gENROU.PSIppq ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_788(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,788};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[102] /* gENROU.PSIppd variable */;
  tmp1 = data->localData[0]->realVars[103] /* gENROU.PSIppq variable */;
  data->localData[0]->realVars[101] /* gENROU.PSIpp variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 789
type: SIMPLE_ASSIGN
$cse5 = OpenIPSL.NonElectrical.Functions.SE(gENROU.PSIpp, gENROU.S10, gENROU.S12, 1.0, 1.2)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_789(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,789};
  data->localData[0]->realVars[29] /* $cse5 variable */ = omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->localData[0]->realVars[101] /* gENROU.PSIpp variable */, data->simulationInfo->realParameter[269] /* gENROU.S10 PARAM */, data->simulationInfo->realParameter[270] /* gENROU.S12 PARAM */, 1.0, 1.2);
  TRACE_POP
}
/*
equation index: 790
type: SIMPLE_ASSIGN
$DER.gENROU.delta = gENROU.w_b * gENROU.w
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_790(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,790};
  data->localData[0]->realVars[24] /* der(gENROU.delta) STATE_DER */ = (data->simulationInfo->realParameter[313] /* gENROU.w_b PARAM */) * (data->localData[0]->realVars[12] /* gENROU.w STATE(1) */);
  TRACE_POP
}
/*
equation index: 791
type: SIMPLE_ASSIGN
eSAC2A.imLeadLag.TF.x[1] = eSAC2A.imLeadLag.TF.x_scaled[1] / eSAC2A.imLeadLag.TF.a_end
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_791(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,791};
  data->localData[0]->realVars[74] /* eSAC2A.imLeadLag.TF.x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[1] /* eSAC2A.imLeadLag.TF.x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[148] /* eSAC2A.imLeadLag.TF.a_end PARAM */,"eSAC2A.imLeadLag.TF.a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 792
type: SIMPLE_ASSIGN
eSAC2A.rotatingExciterWithDemagnetization.Sum.u2 = eSAC2A.rotatingExciterWithDemagnetization.gain.k * eSAC2A.rotatingExciterWithDemagnetization.sISO.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_792(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,792};
  data->localData[0]->realVars[83] /* eSAC2A.rotatingExciterWithDemagnetization.Sum.u2 variable */ = (data->simulationInfo->realParameter[183] /* eSAC2A.rotatingExciterWithDemagnetization.gain.k PARAM */) * (data->localData[0]->realVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */);
  TRACE_POP
}
/*
equation index: 793
type: SIMPLE_ASSIGN
eSAC2A.rotatingExciterWithDemagnetization.VE.u2 = OpenIPSL.NonElectrical.Functions.SE(eSAC2A.rotatingExciterWithDemagnetization.sISO.y, eSAC2A.rotatingExciterWithDemagnetization.se1.SE1, eSAC2A.rotatingExciterWithDemagnetization.se1.SE2, eSAC2A.rotatingExciterWithDemagnetization.se1.E1, eSAC2A.rotatingExciterWithDemagnetization.se1.E2)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_793(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,793};
  data->localData[0]->realVars[84] /* eSAC2A.rotatingExciterWithDemagnetization.VE.u2 variable */ = omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->localData[0]->realVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */, data->simulationInfo->realParameter[190] /* eSAC2A.rotatingExciterWithDemagnetization.se1.SE1 PARAM */, data->simulationInfo->realParameter[191] /* eSAC2A.rotatingExciterWithDemagnetization.se1.SE2 PARAM */, data->simulationInfo->realParameter[188] /* eSAC2A.rotatingExciterWithDemagnetization.se1.E1 PARAM */, data->simulationInfo->realParameter[189] /* eSAC2A.rotatingExciterWithDemagnetization.se1.E2 PARAM */);
  TRACE_POP
}
/*
equation index: 794
type: SIMPLE_ASSIGN
eSAC2A.rotatingExciterWithDemagnetization.Sum.u1 = eSAC2A.rotatingExciterWithDemagnetization.sISO.y * eSAC2A.rotatingExciterWithDemagnetization.VE.u2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_794(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,794};
  data->localData[0]->realVars[82] /* eSAC2A.rotatingExciterWithDemagnetization.Sum.u1 variable */ = (data->localData[0]->realVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */) * (data->localData[0]->realVars[84] /* eSAC2A.rotatingExciterWithDemagnetization.VE.u2 variable */);
  TRACE_POP
}
/*
equation index: 795
type: SIMPLE_ASSIGN
$cse7 = cos(gENROU.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_795(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,795};
  data->localData[0]->realVars[31] /* $cse7 variable */ = cos(data->localData[0]->realVars[11] /* gENROU.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 796
type: SIMPLE_ASSIGN
$cse6 = sin(gENROU.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_796(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,796};
  data->localData[0]->realVars[30] /* $cse6 variable */ = sin(data->localData[0]->realVars[11] /* gENROU.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 797
type: SIMPLE_ASSIGN
$cse2 = cos(gENCLS.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_797(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,797};
  data->localData[0]->realVars[27] /* $cse2 variable */ = cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 798
type: SIMPLE_ASSIGN
$cse1 = sin(gENCLS.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_798(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,798};
  data->localData[0]->realVars[26] /* $cse1 variable */ = sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */);
  TRACE_POP
}
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_799(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_800(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_801(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_802(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_803(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_804(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_805(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_806(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_807(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_808(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_809(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_810(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_811(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_812(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_813(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_814(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_815(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_816(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_817(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_818(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_819(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_820(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_821(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_843(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_842(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_841(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_840(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_839(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_838(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_837(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_836(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_835(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_834(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_833(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_832(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_831(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_830(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_829(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_828(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_827(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_826(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_825(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_824(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_823(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_822(DATA*, threadData_t*);
/*
equation index: 889
indexNonlinear: 4
type: NONLINEAR

vars: {pwLine3.ir.re, pwLine4.is.re, pwLine4.is.im, pwLine3.ir.im, pwLine.ir.im, pwLine3.is.im, pwLine1.is.re, pwLine.ir.re, constantLoad.p.ir, constantLoad.p.ii, pwLine1.ir.re, pwLine4.ir.im, gENCLS.id, gENCLS.iq, pwLine1.vr.re, pwLine1.vr.im, gENROU.iq, gENROU.id, pwLine1.vs.im, pwLine1.vs.re, pwLine3.vr.im, pwLine3.vr.re}
eqns: {799, 800, 801, 802, 803, 804, 805, 806, 807, 808, 809, 810, 811, 812, 813, 814, 815, 816, 817, 818, 819, 820, 821, 843, 842, 841, 840, 839, 838, 837, 836, 835, 834, 833, 832, 831, 830, 829, 828, 827, 826, 825, 824, 823, 822}
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_889(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,889};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 889 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[0] = data->localData[0]->realVars[143] /* pwLine3.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[1] = data->localData[0]->realVars[155] /* pwLine4.is.re variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[2] = data->localData[0]->realVars[154] /* pwLine4.is.im variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[3] = data->localData[0]->realVars[142] /* pwLine3.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[4] = data->localData[0]->realVars[120] /* pwLine.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[5] = data->localData[0]->realVars[144] /* pwLine3.is.im variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[6] = data->localData[0]->realVars[133] /* pwLine1.is.re variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[7] = data->localData[0]->realVars[121] /* pwLine.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[8] = data->localData[0]->realVars[54] /* constantLoad.p.ir variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[9] = data->localData[0]->realVars[53] /* constantLoad.p.ii variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[10] = data->localData[0]->realVars[131] /* pwLine1.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[11] = data->localData[0]->realVars[152] /* pwLine4.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[12] = data->localData[0]->realVars[90] /* gENCLS.id variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[13] = data->localData[0]->realVars[91] /* gENCLS.iq variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[14] = data->localData[0]->realVars[135] /* pwLine1.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[15] = data->localData[0]->realVars[134] /* pwLine1.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[16] = data->localData[0]->realVars[111] /* gENROU.iq variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[17] = data->localData[0]->realVars[110] /* gENROU.id variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[18] = data->localData[0]->realVars[136] /* pwLine1.vs.im variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[19] = data->localData[0]->realVars[137] /* pwLine1.vs.re variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[20] = data->localData[0]->realVars[146] /* pwLine3.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[21] = data->localData[0]->realVars[147] /* pwLine3.vr.re variable */;
  retValue = solve_nonlinear_system(data, threadData, 4);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,889};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 889 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[143] /* pwLine3.ir.re variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[0];
  data->localData[0]->realVars[155] /* pwLine4.is.re variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[1];
  data->localData[0]->realVars[154] /* pwLine4.is.im variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[2];
  data->localData[0]->realVars[142] /* pwLine3.ir.im variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[3];
  data->localData[0]->realVars[120] /* pwLine.ir.im variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[4];
  data->localData[0]->realVars[144] /* pwLine3.is.im variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[5];
  data->localData[0]->realVars[133] /* pwLine1.is.re variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[6];
  data->localData[0]->realVars[121] /* pwLine.ir.re variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[7];
  data->localData[0]->realVars[54] /* constantLoad.p.ir variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[8];
  data->localData[0]->realVars[53] /* constantLoad.p.ii variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[9];
  data->localData[0]->realVars[131] /* pwLine1.ir.re variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[10];
  data->localData[0]->realVars[152] /* pwLine4.ir.im variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[11];
  data->localData[0]->realVars[90] /* gENCLS.id variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[12];
  data->localData[0]->realVars[91] /* gENCLS.iq variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[13];
  data->localData[0]->realVars[135] /* pwLine1.vr.re variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[14];
  data->localData[0]->realVars[134] /* pwLine1.vr.im variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[15];
  data->localData[0]->realVars[111] /* gENROU.iq variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[16];
  data->localData[0]->realVars[110] /* gENROU.id variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[17];
  data->localData[0]->realVars[136] /* pwLine1.vs.im variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[18];
  data->localData[0]->realVars[137] /* pwLine1.vs.re variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[19];
  data->localData[0]->realVars[146] /* pwLine3.vr.im variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[20];
  data->localData[0]->realVars[147] /* pwLine3.vr.re variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[21];
  TRACE_POP
}
/*
equation index: 890
type: SIMPLE_ASSIGN
LOAD.V = constantLoad.v
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_890(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,890};
  data->localData[0]->realVars[44] /* LOAD.V variable */ = data->localData[0]->realVars[55] /* constantLoad.v variable */;
  TRACE_POP
}
/*
equation index: 891
type: SIMPLE_ASSIGN
pwLine4.P12 = (pwLine3.vr.re * pwLine4.is.re + pwLine3.vr.im * pwLine4.is.im) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_891(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,891};
  data->localData[0]->realVars[148] /* pwLine4.P12 variable */ = ((data->localData[0]->realVars[147] /* pwLine3.vr.re variable */) * (data->localData[0]->realVars[155] /* pwLine4.is.re variable */) + (data->localData[0]->realVars[146] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[154] /* pwLine4.is.im variable */)) * (data->simulationInfo->realParameter[354] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 892
type: SIMPLE_ASSIGN
pwLine4.Q12 = (pwLine3.vr.im * pwLine4.is.re - pwLine3.vr.re * pwLine4.is.im) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_892(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,892};
  data->localData[0]->realVars[150] /* pwLine4.Q12 variable */ = ((data->localData[0]->realVars[146] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[155] /* pwLine4.is.re variable */) - ((data->localData[0]->realVars[147] /* pwLine3.vr.re variable */) * (data->localData[0]->realVars[154] /* pwLine4.is.im variable */))) * (data->simulationInfo->realParameter[354] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 893
type: SIMPLE_ASSIGN
FAULT.V = sqrt(pwLine3.vr.re ^ 2.0 + pwLine3.vr.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_893(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,893};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[147] /* pwLine3.vr.re variable */;
  tmp1 = data->localData[0]->realVars[146] /* pwLine3.vr.im variable */;
  data->localData[0]->realVars[32] /* FAULT.V variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 894
type: SIMPLE_ASSIGN
$cse4 = atan2(pwLine3.vr.im, pwLine3.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_894(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,894};
  data->localData[0]->realVars[28] /* $cse4 variable */ = atan2(data->localData[0]->realVars[146] /* pwLine3.vr.im variable */, data->localData[0]->realVars[147] /* pwLine3.vr.re variable */);
  TRACE_POP
}
/*
equation index: 895
type: SIMPLE_ASSIGN
FAULT.angle = 57.29577951308232 * $cse4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_895(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,895};
  data->localData[0]->realVars[33] /* FAULT.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[28] /* $cse4 variable */);
  TRACE_POP
}
/*
equation index: 896
type: SIMPLE_ASSIGN
pwLine3.P21 = ((-pwLine3.vr.re) * pwLine3.ir.re - pwLine3.vr.im * pwLine3.ir.im) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_896(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,896};
  data->localData[0]->realVars[139] /* pwLine3.P21 variable */ = (((-data->localData[0]->realVars[147] /* pwLine3.vr.re variable */)) * (data->localData[0]->realVars[143] /* pwLine3.ir.re variable */) - ((data->localData[0]->realVars[146] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[142] /* pwLine3.ir.im variable */))) * (data->simulationInfo->realParameter[343] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 897
type: SIMPLE_ASSIGN
pwLine3.Q21 = (pwLine3.vr.re * pwLine3.ir.im - pwLine3.vr.im * pwLine3.ir.re) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_897(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,897};
  data->localData[0]->realVars[141] /* pwLine3.Q21 variable */ = ((data->localData[0]->realVars[147] /* pwLine3.vr.re variable */) * (data->localData[0]->realVars[142] /* pwLine3.ir.im variable */) - ((data->localData[0]->realVars[146] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[143] /* pwLine3.ir.re variable */))) * (data->simulationInfo->realParameter[343] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 898
type: SIMPLE_ASSIGN
gENROU.I = sqrt(pwLine.is.im ^ 2.0 + pwLine.is.re ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_898(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,898};
  modelica_real tmp2;
  modelica_real tmp3;
  tmp2 = data->localData[0]->realVars[122] /* pwLine.is.im variable */;
  tmp3 = data->localData[0]->realVars[123] /* pwLine.is.re variable */;
  data->localData[0]->realVars[97] /* gENROU.I variable */ = sqrt((tmp2 * tmp2) + (tmp3 * tmp3));
  TRACE_POP
}
/*
equation index: 899
type: SIMPLE_ASSIGN
gENROU.anglei = atan2(-pwLine.is.im, -pwLine.is.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_899(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,899};
  data->localData[0]->realVars[108] /* gENROU.anglei variable */ = atan2((-data->localData[0]->realVars[122] /* pwLine.is.im variable */), (-data->localData[0]->realVars[123] /* pwLine.is.re variable */));
  TRACE_POP
}
/*
equation index: 900
type: SIMPLE_ASSIGN
$DER.gENROU.PSIkq = (gENROU.Epd + (gENROU.Xpq - gENROU.Xl) * gENROU.iq - gENROU.PSIkq) / gENROU.Tppq0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_900(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,900};
  data->localData[0]->realVars[23] /* der(gENROU.PSIkq) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[7] /* gENROU.Epd STATE(1) */ + (data->simulationInfo->realParameter[285] /* gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[280] /* gENROU.Xl PARAM */) * (data->localData[0]->realVars[111] /* gENROU.iq variable */) - data->localData[0]->realVars[10] /* gENROU.PSIkq STATE(1) */,data->simulationInfo->realParameter[274] /* gENROU.Tppq0 PARAM */,"gENROU.Tppq0",equationIndexes);
  TRACE_POP
}
/*
equation index: 901
type: SIMPLE_ASSIGN
gENROU.XaqIlq = gENROU.K1q * (gENROU.Epd + (gENROU.Xpq - gENROU.Xl) * gENROU.iq - gENROU.PSIkq) + gENROU.Epd + gENROU.iq * (gENROU.Xpq - gENROU.Xq) + $cse5 * gENROU.PSIppq * (gENROU.Xq - gENROU.Xl) / (gENROU.Xd - gENROU.Xl)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_901(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,901};
  data->localData[0]->realVars[107] /* gENROU.XaqIlq variable */ = (data->simulationInfo->realParameter[244] /* gENROU.K1q PARAM */) * (data->localData[0]->realVars[7] /* gENROU.Epd STATE(1) */ + (data->simulationInfo->realParameter[285] /* gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[280] /* gENROU.Xl PARAM */) * (data->localData[0]->realVars[111] /* gENROU.iq variable */) - data->localData[0]->realVars[10] /* gENROU.PSIkq STATE(1) */) + data->localData[0]->realVars[7] /* gENROU.Epd STATE(1) */ + (data->localData[0]->realVars[111] /* gENROU.iq variable */) * (data->simulationInfo->realParameter[285] /* gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[286] /* gENROU.Xq PARAM */) + (data->localData[0]->realVars[29] /* $cse5 variable */) * ((data->localData[0]->realVars[103] /* gENROU.PSIppq variable */) * (DIVISION_SIM(data->simulationInfo->realParameter[286] /* gENROU.Xq PARAM */ - data->simulationInfo->realParameter[280] /* gENROU.Xl PARAM */,data->simulationInfo->realParameter[279] /* gENROU.Xd PARAM */ - data->simulationInfo->realParameter[280] /* gENROU.Xl PARAM */,"gENROU.Xd - gENROU.Xl",equationIndexes)));
  TRACE_POP
}
/*
equation index: 902
type: SIMPLE_ASSIGN
$DER.gENROU.Epd = (-gENROU.XaqIlq) / gENROU.Tpq0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_902(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,902};
  data->localData[0]->realVars[20] /* der(gENROU.Epd) STATE_DER */ = DIVISION_SIM((-data->localData[0]->realVars[107] /* gENROU.XaqIlq variable */),data->simulationInfo->realParameter[275] /* gENROU.Tpq0 PARAM */,"gENROU.Tpq0",equationIndexes);
  TRACE_POP
}
/*
equation index: 903
type: SIMPLE_ASSIGN
$DER.gENROU.PSIkd = (gENROU.Epq + (gENROU.Xl - gENROU.Xpd) * gENROU.id - gENROU.PSIkd) / gENROU.Tppd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_903(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,903};
  data->localData[0]->realVars[22] /* der(gENROU.PSIkd) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[8] /* gENROU.Epq STATE(1) */ + (data->simulationInfo->realParameter[280] /* gENROU.Xl PARAM */ - data->simulationInfo->realParameter[281] /* gENROU.Xpd PARAM */) * (data->localData[0]->realVars[110] /* gENROU.id variable */) - data->localData[0]->realVars[9] /* gENROU.PSIkd STATE(1) */,data->simulationInfo->realParameter[273] /* gENROU.Tppd0 PARAM */,"gENROU.Tppd0",equationIndexes);
  TRACE_POP
}
/*
equation index: 904
type: SIMPLE_ASSIGN
eSAC2A.XADIFD = gENROU.K1d * (gENROU.Epq + (gENROU.Xl - gENROU.Xpd) * gENROU.id - gENROU.PSIkd) + gENROU.Epq + gENROU.id * (gENROU.Xd - gENROU.Xpd) + $cse5 * gENROU.PSIppd
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_904(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,904};
  data->localData[0]->realVars[67] /* eSAC2A.XADIFD variable */ = (data->simulationInfo->realParameter[243] /* gENROU.K1d PARAM */) * (data->localData[0]->realVars[8] /* gENROU.Epq STATE(1) */ + (data->simulationInfo->realParameter[280] /* gENROU.Xl PARAM */ - data->simulationInfo->realParameter[281] /* gENROU.Xpd PARAM */) * (data->localData[0]->realVars[110] /* gENROU.id variable */) - data->localData[0]->realVars[9] /* gENROU.PSIkd STATE(1) */) + data->localData[0]->realVars[8] /* gENROU.Epq STATE(1) */ + (data->localData[0]->realVars[110] /* gENROU.id variable */) * (data->simulationInfo->realParameter[279] /* gENROU.Xd PARAM */ - data->simulationInfo->realParameter[281] /* gENROU.Xpd PARAM */) + (data->localData[0]->realVars[29] /* $cse5 variable */) * (data->localData[0]->realVars[102] /* gENROU.PSIppd variable */);
  TRACE_POP
}
/*
equation index: 905
type: SIMPLE_ASSIGN
eSAC2A.derivative.u = eSAC2A.rotatingExciterWithDemagnetization.Sum.k1 * eSAC2A.rotatingExciterWithDemagnetization.Sum.u1 + eSAC2A.rotatingExciterWithDemagnetization.Sum.k2 * eSAC2A.rotatingExciterWithDemagnetization.Sum.u2 + eSAC2A.rotatingExciterWithDemagnetization.Sum.k3 * eSAC2A.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_905(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,905};
  data->localData[0]->realVars[69] /* eSAC2A.derivative.u variable */ = (data->simulationInfo->realParameter[179] /* eSAC2A.rotatingExciterWithDemagnetization.Sum.k1 PARAM */) * (data->localData[0]->realVars[82] /* eSAC2A.rotatingExciterWithDemagnetization.Sum.u1 variable */) + (data->simulationInfo->realParameter[180] /* eSAC2A.rotatingExciterWithDemagnetization.Sum.k2 PARAM */) * (data->localData[0]->realVars[83] /* eSAC2A.rotatingExciterWithDemagnetization.Sum.u2 variable */) + (data->simulationInfo->realParameter[181] /* eSAC2A.rotatingExciterWithDemagnetization.Sum.k3 PARAM */) * (data->localData[0]->realVars[67] /* eSAC2A.XADIFD variable */);
  TRACE_POP
}
/*
equation index: 906
type: SIMPLE_ASSIGN
$DER.eSAC2A.derivative.x = (eSAC2A.derivative.u - eSAC2A.derivative.x) / eSAC2A.derivative.T
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_906(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,906};
  data->localData[0]->realVars[13] /* der(eSAC2A.derivative.x) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[69] /* eSAC2A.derivative.u variable */ - data->localData[0]->realVars[0] /* eSAC2A.derivative.x STATE(1) */,data->simulationInfo->realParameter[135] /* eSAC2A.derivative.T PARAM */,"eSAC2A.derivative.T",equationIndexes);
  TRACE_POP
}
/*
equation index: 907
type: SIMPLE_ASSIGN
eSAC2A.derivative.y = 0.03 * (eSAC2A.derivative.u - eSAC2A.derivative.x) / eSAC2A.derivative.T
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_907(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,907};
  data->localData[0]->realVars[70] /* eSAC2A.derivative.y variable */ = (0.03) * (DIVISION_SIM(data->localData[0]->realVars[69] /* eSAC2A.derivative.u variable */ - data->localData[0]->realVars[0] /* eSAC2A.derivative.x STATE(1) */,data->simulationInfo->realParameter[135] /* eSAC2A.derivative.T PARAM */,"eSAC2A.derivative.T",equationIndexes));
  TRACE_POP
}
/*
equation index: 908
type: SIMPLE_ASSIGN
eSAC2A.DiffV3.u1 = eSAC2A.gain.k * eSAC2A.derivative.u
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_908(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,908};
  data->localData[0]->realVars[61] /* eSAC2A.DiffV3.u1 variable */ = (data->simulationInfo->realParameter[139] /* eSAC2A.gain.k PARAM */) * (data->localData[0]->realVars[69] /* eSAC2A.derivative.u variable */);
  TRACE_POP
}
/*
equation index: 909
type: SIMPLE_ASSIGN
eSAC2A.rectifierCommutationVoltageDrop.division.u1 = eSAC2A.rectifierCommutationVoltageDrop.gain2.k * eSAC2A.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_909(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,909};
  data->localData[0]->realVars[79] /* eSAC2A.rectifierCommutationVoltageDrop.division.u1 variable */ = (data->simulationInfo->realParameter[171] /* eSAC2A.rectifierCommutationVoltageDrop.gain2.k PARAM */) * (data->localData[0]->realVars[67] /* eSAC2A.XADIFD variable */);
  TRACE_POP
}
/*
equation index: 910
type: SIMPLE_ASSIGN
eSAC2A.rectifierCommutationVoltageDrop.division.y = eSAC2A.rectifierCommutationVoltageDrop.division.u1 / eSAC2A.rotatingExciterWithDemagnetization.sISO.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_910(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,910};
  data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */ = DIVISION_SIM(data->localData[0]->realVars[79] /* eSAC2A.rectifierCommutationVoltageDrop.division.u1 variable */,data->localData[0]->realVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */,"eSAC2A.rotatingExciterWithDemagnetization.sISO.y",equationIndexes);
  TRACE_POP
}
/*
equation index: 911
type: SIMPLE_ASSIGN
eSAC2A.rectifierCommutationVoltageDrop.fEX.y = if eSAC2A.rectifierCommutationVoltageDrop.division.y <= 0.0 then 1.0 else if eSAC2A.rectifierCommutationVoltageDrop.division.y > 0.0 and eSAC2A.rectifierCommutationVoltageDrop.division.y <= 0.433 then 1.0 + (-0.577) * eSAC2A.rectifierCommutationVoltageDrop.division.y else if eSAC2A.rectifierCommutationVoltageDrop.division.y > 0.433 and eSAC2A.rectifierCommutationVoltageDrop.division.y < 0.75 then sqrt(0.75 - eSAC2A.rectifierCommutationVoltageDrop.division.y ^ 2.0) else if eSAC2A.rectifierCommutationVoltageDrop.division.y >= 0.75 and eSAC2A.rectifierCommutationVoltageDrop.division.y <= 1.0 then 1.732 * (1.0 - eSAC2A.rectifierCommutationVoltageDrop.division.y) else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_911(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,911};
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_boolean tmp11;
  modelica_boolean tmp12;
  modelica_boolean tmp13;
  modelica_real tmp14;
  modelica_boolean tmp15;
  modelica_real tmp16;
  modelica_boolean tmp17;
  modelica_real tmp18;
  RELATIONHYSTERESIS(tmp4, data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */, 0.0, 14, LessEq);
  tmp17 = (modelica_boolean)tmp4;
  if(tmp17)
  {
    tmp18 = 1.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp5, data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */, 0.0, 15, Greater);
    RELATIONHYSTERESIS(tmp6, data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */, 0.433, 16, LessEq);
    tmp15 = (modelica_boolean)(tmp5 && tmp6);
    if(tmp15)
    {
      tmp16 = 1.0 + (-0.577) * (data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */);
    }
    else
    {
      RELATIONHYSTERESIS(tmp7, data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */, 0.433, 17, Greater);
      RELATIONHYSTERESIS(tmp8, data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */, 0.75, 18, Less);
      tmp13 = (modelica_boolean)(tmp7 && tmp8);
      if(tmp13)
      {
        tmp9 = data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */;
        tmp10 = 0.75 - ((tmp9 * tmp9));
        if(!(tmp10 >= 0.0))
        {
          FILE_INFO info = {"",0,0,0,0,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(0.75 - eSAC2A.rectifierCommutationVoltageDrop.division.y ^ 2.0) was %g should be >= 0", tmp10);
        }
        tmp14 = sqrt(tmp10);
      }
      else
      {
        RELATIONHYSTERESIS(tmp11, data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */, 0.75, 19, GreaterEq);
        RELATIONHYSTERESIS(tmp12, data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */, 1.0, 20, LessEq);
        tmp14 = ((tmp11 && tmp12)?(1.732) * (1.0 - data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */):0.0);
      }
      tmp16 = tmp14;
    }
    tmp18 = tmp16;
  }
  data->localData[0]->realVars[81] /* eSAC2A.rectifierCommutationVoltageDrop.fEX.y variable */ = tmp18;
  TRACE_POP
}
/*
equation index: 912
type: SIMPLE_ASSIGN
eSAC2A.EFD = eSAC2A.rotatingExciterWithDemagnetization.sISO.y * eSAC2A.rectifierCommutationVoltageDrop.fEX.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_912(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,912};
  data->localData[0]->realVars[65] /* eSAC2A.EFD variable */ = (data->localData[0]->realVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */) * (data->localData[0]->realVars[81] /* eSAC2A.rectifierCommutationVoltageDrop.fEX.y variable */);
  TRACE_POP
}
/*
equation index: 913
type: SIMPLE_ASSIGN
eSAC2A.DiffV2.u2 = OpenIPSL.NonElectrical.Functions.SE(eSAC2A.EFD, eSAC2A.se1.SE1, eSAC2A.se1.SE2, eSAC2A.se1.E1, eSAC2A.se1.E2)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_913(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,913};
  data->localData[0]->realVars[59] /* eSAC2A.DiffV2.u2 variable */ = omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->localData[0]->realVars[65] /* eSAC2A.EFD variable */, data->simulationInfo->realParameter[194] /* eSAC2A.se1.SE1 PARAM */, data->simulationInfo->realParameter[195] /* eSAC2A.se1.SE2 PARAM */, data->simulationInfo->realParameter[192] /* eSAC2A.se1.E1 PARAM */, data->simulationInfo->realParameter[193] /* eSAC2A.se1.E2 PARAM */);
  TRACE_POP
}
/*
equation index: 914
type: SIMPLE_ASSIGN
eSAC2A.DiffV2.y = eSAC2A.DiffV2.k1 * eSAC2A.const.k + eSAC2A.DiffV2.k2 * eSAC2A.DiffV2.u2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_914(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,914};
  data->localData[0]->realVars[60] /* eSAC2A.DiffV2.y variable */ = (data->simulationInfo->realParameter[88] /* eSAC2A.DiffV2.k1 PARAM */) * (data->simulationInfo->realParameter[133] /* eSAC2A.const.k PARAM */) + (data->simulationInfo->realParameter[89] /* eSAC2A.DiffV2.k2 PARAM */) * (data->localData[0]->realVars[59] /* eSAC2A.DiffV2.u2 variable */);
  TRACE_POP
}
/*
equation index: 915
type: SIMPLE_ASSIGN
$DER.gENROU.Epq = (eSAC2A.EFD - eSAC2A.XADIFD) / gENROU.Tpd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_915(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,915};
  data->localData[0]->realVars[21] /* der(gENROU.Epq) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[65] /* eSAC2A.EFD variable */ - data->localData[0]->realVars[67] /* eSAC2A.XADIFD variable */,data->simulationInfo->realParameter[272] /* gENROU.Tpd0 PARAM */,"gENROU.Tpd0",equationIndexes);
  TRACE_POP
}
/*
equation index: 916
type: SIMPLE_ASSIGN
eSAC2A.DiffV1.y = eSAC2A.DiffV1.k1 * eSAC2A.FEMAX.k + eSAC2A.DiffV1.k2 * eSAC2A.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_916(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,916};
  data->localData[0]->realVars[58] /* eSAC2A.DiffV1.y variable */ = (data->simulationInfo->realParameter[85] /* eSAC2A.DiffV1.k1 PARAM */) * (data->simulationInfo->realParameter[97] /* eSAC2A.FEMAX.k PARAM */) + (data->simulationInfo->realParameter[86] /* eSAC2A.DiffV1.k2 PARAM */) * (data->localData[0]->realVars[67] /* eSAC2A.XADIFD variable */);
  TRACE_POP
}
/*
equation index: 917
type: SIMPLE_ASSIGN
eSAC2A.division.y = eSAC2A.DiffV1.y / eSAC2A.DiffV2.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_917(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,917};
  data->localData[0]->realVars[71] /* eSAC2A.division.y variable */ = DIVISION_SIM(data->localData[0]->realVars[58] /* eSAC2A.DiffV1.y variable */,data->localData[0]->realVars[60] /* eSAC2A.DiffV2.y variable */,"eSAC2A.DiffV2.y",equationIndexes);
  TRACE_POP
}
/*
equation index: 918
type: SIMPLE_ASSIGN
gENROU.Te = gENROU.PSId * gENROU.iq - gENROU.PSIq * gENROU.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_918(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,918};
  data->localData[0]->realVars[106] /* gENROU.Te variable */ = (data->localData[0]->realVars[100] /* gENROU.PSId variable */) * (data->localData[0]->realVars[111] /* gENROU.iq variable */) - ((data->localData[0]->realVars[104] /* gENROU.PSIq variable */) * (data->localData[0]->realVars[110] /* gENROU.id variable */));
  TRACE_POP
}
/*
equation index: 919
type: SIMPLE_ASSIGN
$DER.gENROU.w = 0.5 * ((gENROU.pm0 - gENROU.D * gENROU.w) / (1.0 + gENROU.w) - gENROU.Te) / gENROU.H
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_919(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,919};
  data->localData[0]->realVars[25] /* der(gENROU.w) STATE_DER */ = (0.5) * (DIVISION_SIM(DIVISION_SIM(data->simulationInfo->realParameter[306] /* gENROU.pm0 PARAM */ - ((data->simulationInfo->realParameter[230] /* gENROU.D PARAM */) * (data->localData[0]->realVars[12] /* gENROU.w STATE(1) */)),1.0 + data->localData[0]->realVars[12] /* gENROU.w STATE(1) */,"1.0 + gENROU.w",equationIndexes) - data->localData[0]->realVars[106] /* gENROU.Te variable */,data->simulationInfo->realParameter[236] /* gENROU.H PARAM */,"gENROU.H",equationIndexes));
  TRACE_POP
}
/*
equation index: 920
type: SIMPLE_ASSIGN
gENROU.P = pwLine.vs.im * pwLine.is.im + pwLine.vs.re * pwLine.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_920(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,920};
  data->localData[0]->realVars[98] /* gENROU.P variable */ = (data->localData[0]->realVars[124] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[122] /* pwLine.is.im variable */) + (data->localData[0]->realVars[125] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[123] /* pwLine.is.re variable */);
  TRACE_POP
}
/*
equation index: 921
type: SIMPLE_ASSIGN
gENROU.PELEC = gENROU.P / gENROU.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_921(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,921};
  data->localData[0]->realVars[99] /* gENROU.PELEC variable */ = DIVISION_SIM(data->localData[0]->realVars[98] /* gENROU.P variable */,data->simulationInfo->realParameter[229] /* gENROU.CoB PARAM */,"gENROU.CoB",equationIndexes);
  TRACE_POP
}
/*
equation index: 922
type: SIMPLE_ASSIGN
gENROU.Q = pwLine.vs.im * pwLine.is.re - pwLine.vs.re * pwLine.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_922(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,922};
  data->localData[0]->realVars[105] /* gENROU.Q variable */ = (data->localData[0]->realVars[124] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[123] /* pwLine.is.re variable */) - ((data->localData[0]->realVars[125] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[122] /* pwLine.is.im variable */));
  TRACE_POP
}
/*
equation index: 923
type: SIMPLE_ASSIGN
eSAC2A.ECOMP = sqrt(pwLine.vs.re ^ 2.0 + pwLine.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_923(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,923};
  modelica_real tmp19;
  modelica_real tmp20;
  tmp19 = data->localData[0]->realVars[125] /* pwLine.vs.re variable */;
  tmp20 = data->localData[0]->realVars[124] /* pwLine.vs.im variable */;
  data->localData[0]->realVars[64] /* eSAC2A.ECOMP variable */ = sqrt((tmp19 * tmp19) + (tmp20 * tmp20));
  TRACE_POP
}
/*
equation index: 924
type: SIMPLE_ASSIGN
$DER.eSAC2A.imSimpleLag.state = (eSAC2A.imSimpleLag.K * eSAC2A.ECOMP - eSAC2A.imSimpleLag.state) / eSAC2A.imSimpleLag.T_mod
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_924(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,924};
  data->localData[0]->realVars[15] /* der(eSAC2A.imSimpleLag.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[160] /* eSAC2A.imSimpleLag.K PARAM */) * (data->localData[0]->realVars[64] /* eSAC2A.ECOMP variable */) - data->localData[0]->realVars[2] /* eSAC2A.imSimpleLag.state STATE(1) */,data->simulationInfo->realParameter[162] /* eSAC2A.imSimpleLag.T_mod PARAM */,"eSAC2A.imSimpleLag.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 925
type: SIMPLE_ASSIGN
eSAC2A.DiffV.u2 = if abs(eSAC2A.imSimpleLag.T) <= 1e-15 then eSAC2A.ECOMP * eSAC2A.imSimpleLag.K else eSAC2A.imSimpleLag.state
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_925(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,925};
  modelica_boolean tmp21;
  tmp21 = LessEq(fabs(data->simulationInfo->realParameter[161] /* eSAC2A.imSimpleLag.T PARAM */),1e-15);
  data->localData[0]->realVars[56] /* eSAC2A.DiffV.u2 variable */ = (tmp21?(data->localData[0]->realVars[64] /* eSAC2A.ECOMP variable */) * (data->simulationInfo->realParameter[160] /* eSAC2A.imSimpleLag.K PARAM */):data->localData[0]->realVars[2] /* eSAC2A.imSimpleLag.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 926
type: SIMPLE_ASSIGN
eSAC2A.DiffV.y = eSAC2A.DiffV.k1 * eSAC2A.VoltageReference.k + eSAC2A.DiffV.k2 * eSAC2A.DiffV.u2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_926(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,926};
  data->localData[0]->realVars[57] /* eSAC2A.DiffV.y variable */ = (data->simulationInfo->realParameter[82] /* eSAC2A.DiffV.k1 PARAM */) * (data->simulationInfo->realParameter[127] /* eSAC2A.VoltageReference.k PARAM */) + (data->simulationInfo->realParameter[83] /* eSAC2A.DiffV.k2 PARAM */) * (data->localData[0]->realVars[56] /* eSAC2A.DiffV.u2 variable */);
  TRACE_POP
}
/*
equation index: 927
type: SIMPLE_ASSIGN
eSAC2A.add3_1.y = eSAC2A.add3_1.k1 * const.k + eSAC2A.add3_1.k2 * eSAC2A.DiffV.y + eSAC2A.add3_1.k3 * eSAC2A.derivative.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_927(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,927};
  data->localData[0]->realVars[68] /* eSAC2A.add3_1.y variable */ = (data->simulationInfo->realParameter[129] /* eSAC2A.add3_1.k1 PARAM */) * (data->simulationInfo->realParameter[34] /* const.k PARAM */) + (data->simulationInfo->realParameter[130] /* eSAC2A.add3_1.k2 PARAM */) * (data->localData[0]->realVars[57] /* eSAC2A.DiffV.y variable */) + (data->simulationInfo->realParameter[131] /* eSAC2A.add3_1.k3 PARAM */) * (data->localData[0]->realVars[70] /* eSAC2A.derivative.y variable */);
  TRACE_POP
}
/*
equation index: 928
type: SIMPLE_ASSIGN
$DER.eSAC2A.imLeadLag.TF.x_scaled[1] = (eSAC2A.imLeadLag.TF.a_end * eSAC2A.add3_1.y - eSAC2A.imLeadLag.TF.a[2] * eSAC2A.imLeadLag.TF.x_scaled[1]) / eSAC2A.imLeadLag.TF.a[1]
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_928(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,928};
  data->localData[0]->realVars[14] /* der(eSAC2A.imLeadLag.TF.x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[148] /* eSAC2A.imLeadLag.TF.a_end PARAM */) * (data->localData[0]->realVars[68] /* eSAC2A.add3_1.y variable */) - ((data->simulationInfo->realParameter[147] /* eSAC2A.imLeadLag.TF.a[2] PARAM */) * (data->localData[0]->realVars[1] /* eSAC2A.imLeadLag.TF.x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[146] /* eSAC2A.imLeadLag.TF.a[1] PARAM */,"eSAC2A.imLeadLag.TF.a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 929
type: SIMPLE_ASSIGN
eSAC2A.imLeadLag.TF.y = (eSAC2A.imLeadLag.TF.bb[2] - eSAC2A.imLeadLag.TF.a[2] * eSAC2A.imLeadLag.TF.d) * eSAC2A.imLeadLag.TF.x[1] + eSAC2A.imLeadLag.TF.d * eSAC2A.add3_1.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_929(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,929};
  data->localData[0]->realVars[75] /* eSAC2A.imLeadLag.TF.y variable */ = (data->simulationInfo->realParameter[152] /* eSAC2A.imLeadLag.TF.bb[2] PARAM */ - ((data->simulationInfo->realParameter[147] /* eSAC2A.imLeadLag.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[153] /* eSAC2A.imLeadLag.TF.d PARAM */))) * (data->localData[0]->realVars[74] /* eSAC2A.imLeadLag.TF.x[1] variable */) + (data->simulationInfo->realParameter[153] /* eSAC2A.imLeadLag.TF.d PARAM */) * (data->localData[0]->realVars[68] /* eSAC2A.add3_1.y variable */);
  TRACE_POP
}
/*
equation index: 930
type: SIMPLE_ASSIGN
eSAC2A.imLeadLag.y = if abs(eSAC2A.imLeadLag.T1 - eSAC2A.imLeadLag.T2) < 1e-15 then eSAC2A.imLeadLag.K * eSAC2A.add3_1.y else eSAC2A.imLeadLag.TF.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_930(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,930};
  modelica_boolean tmp22;
  tmp22 = Less(fabs(data->simulationInfo->realParameter[143] /* eSAC2A.imLeadLag.T1 PARAM */ - data->simulationInfo->realParameter[144] /* eSAC2A.imLeadLag.T2 PARAM */),1e-15);
  data->localData[0]->realVars[76] /* eSAC2A.imLeadLag.y variable */ = (tmp22?(data->simulationInfo->realParameter[142] /* eSAC2A.imLeadLag.K PARAM */) * (data->localData[0]->realVars[68] /* eSAC2A.add3_1.y variable */):data->localData[0]->realVars[75] /* eSAC2A.imLeadLag.TF.y variable */);
  TRACE_POP
}
/*
equation index: 931
type: SIMPLE_ASSIGN
$DER.eSAC2A.simpleLagLim.state = (eSAC2A.simpleLagLim.K * eSAC2A.imLeadLag.y - eSAC2A.simpleLagLim.state) / eSAC2A.simpleLagLim.T_mod
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_931(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,931};
  data->localData[0]->realVars[17] /* der(eSAC2A.simpleLagLim.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[196] /* eSAC2A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[76] /* eSAC2A.imLeadLag.y variable */) - data->localData[0]->realVars[4] /* eSAC2A.simpleLagLim.state STATE(1) */,data->simulationInfo->realParameter[198] /* eSAC2A.simpleLagLim.T_mod PARAM */,"eSAC2A.simpleLagLim.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 932
type: SIMPLE_ASSIGN
eSAC2A.DiffV3.u2 = if abs(eSAC2A.simpleLagLim.T) <= 1e-15 then max(min(eSAC2A.imLeadLag.y * eSAC2A.simpleLagLim.K, eSAC2A.simpleLagLim.outMax), eSAC2A.simpleLagLim.outMin) else max(min(eSAC2A.simpleLagLim.state, eSAC2A.simpleLagLim.outMax), eSAC2A.simpleLagLim.outMin)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_932(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,932};
  modelica_boolean tmp23;
  tmp23 = LessEq(fabs(data->simulationInfo->realParameter[197] /* eSAC2A.simpleLagLim.T PARAM */),1e-15);
  data->localData[0]->realVars[62] /* eSAC2A.DiffV3.u2 variable */ = (tmp23?fmax(fmin((data->localData[0]->realVars[76] /* eSAC2A.imLeadLag.y variable */) * (data->simulationInfo->realParameter[196] /* eSAC2A.simpleLagLim.K PARAM */),data->simulationInfo->realParameter[200] /* eSAC2A.simpleLagLim.outMax PARAM */),data->simulationInfo->realParameter[201] /* eSAC2A.simpleLagLim.outMin PARAM */):fmax(fmin(data->localData[0]->realVars[4] /* eSAC2A.simpleLagLim.state STATE(1) */,data->simulationInfo->realParameter[200] /* eSAC2A.simpleLagLim.outMax PARAM */),data->simulationInfo->realParameter[201] /* eSAC2A.simpleLagLim.outMin PARAM */));
  TRACE_POP
}
/*
equation index: 933
type: SIMPLE_ASSIGN
eSAC2A.DiffV3.y = eSAC2A.DiffV3.k1 * eSAC2A.DiffV3.u1 + eSAC2A.DiffV3.k2 * eSAC2A.DiffV3.u2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_933(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,933};
  data->localData[0]->realVars[63] /* eSAC2A.DiffV3.y variable */ = (data->simulationInfo->realParameter[91] /* eSAC2A.DiffV3.k1 PARAM */) * (data->localData[0]->realVars[61] /* eSAC2A.DiffV3.u1 variable */) + (data->simulationInfo->realParameter[92] /* eSAC2A.DiffV3.k2 PARAM */) * (data->localData[0]->realVars[62] /* eSAC2A.DiffV3.u2 variable */);
  TRACE_POP
}
/*
equation index: 934
type: SIMPLE_ASSIGN
eSAC2A.gain1.y = eSAC2A.gain1.k * eSAC2A.DiffV3.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_934(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,934};
  data->localData[0]->realVars[72] /* eSAC2A.gain1.y variable */ = (data->simulationInfo->realParameter[140] /* eSAC2A.gain1.k PARAM */) * (data->localData[0]->realVars[63] /* eSAC2A.DiffV3.y variable */);
  TRACE_POP
}
/*
equation index: 935
type: SIMPLE_ASSIGN
eSAC2A.hV_GATE.p = if eSAC2A.gain1.y < const5.k then const5.k else eSAC2A.gain1.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_935(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,935};
  modelica_boolean tmp24;
  RELATIONHYSTERESIS(tmp24, data->localData[0]->realVars[72] /* eSAC2A.gain1.y variable */, data->simulationInfo->realParameter[38] /* const5.k PARAM */, 21, Less);
  data->localData[0]->realVars[73] /* eSAC2A.hV_GATE.p variable */ = (tmp24?data->simulationInfo->realParameter[38] /* const5.k PARAM */:data->localData[0]->realVars[72] /* eSAC2A.gain1.y variable */);
  TRACE_POP
}
/*
equation index: 936
type: SIMPLE_ASSIGN
eSAC2A.lV_GATE.p = if const4.k > eSAC2A.hV_GATE.p then eSAC2A.hV_GATE.p else const4.k
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_936(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,936};
  modelica_boolean tmp25;
  RELATIONHYSTERESIS(tmp25, data->simulationInfo->realParameter[36] /* const4.k PARAM */, data->localData[0]->realVars[73] /* eSAC2A.hV_GATE.p variable */, 22, Greater);
  data->localData[0]->realVars[77] /* eSAC2A.lV_GATE.p variable */ = (tmp25?data->localData[0]->realVars[73] /* eSAC2A.hV_GATE.p variable */:data->simulationInfo->realParameter[36] /* const4.k PARAM */);
  TRACE_POP
}
/*
equation index: 937
type: SIMPLE_ASSIGN
eSAC2A.limiter1.y = smooth(0, if eSAC2A.lV_GATE.p > eSAC2A.limiter1.uMax then eSAC2A.limiter1.uMax else if eSAC2A.lV_GATE.p < eSAC2A.limiter1.uMin then eSAC2A.limiter1.uMin else eSAC2A.lV_GATE.p)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_937(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,937};
  modelica_boolean tmp26;
  modelica_boolean tmp27;
  modelica_boolean tmp28;
  modelica_real tmp29;
  tmp26 = Greater(data->localData[0]->realVars[77] /* eSAC2A.lV_GATE.p variable */,data->simulationInfo->realParameter[166] /* eSAC2A.limiter1.uMax PARAM */);
  tmp28 = (modelica_boolean)tmp26;
  if(tmp28)
  {
    tmp29 = data->simulationInfo->realParameter[166] /* eSAC2A.limiter1.uMax PARAM */;
  }
  else
  {
    tmp27 = Less(data->localData[0]->realVars[77] /* eSAC2A.lV_GATE.p variable */,data->simulationInfo->realParameter[167] /* eSAC2A.limiter1.uMin PARAM */);
    tmp29 = (tmp27?data->simulationInfo->realParameter[167] /* eSAC2A.limiter1.uMin PARAM */:data->localData[0]->realVars[77] /* eSAC2A.lV_GATE.p variable */);
  }
  data->localData[0]->realVars[78] /* eSAC2A.limiter1.y variable */ = tmp29;
  TRACE_POP
}
/*
equation index: 938
type: SIMPLE_ASSIGN
eSAC2A.rotatingExciterWithDemagnetization.feedback.y = eSAC2A.limiter1.y - eSAC2A.derivative.u
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_938(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,938};
  data->localData[0]->realVars[85] /* eSAC2A.rotatingExciterWithDemagnetization.feedback.y variable */ = data->localData[0]->realVars[78] /* eSAC2A.limiter1.y variable */ - data->localData[0]->realVars[69] /* eSAC2A.derivative.u variable */;
  TRACE_POP
}
/*
equation index: 939
type: SIMPLE_ASSIGN
$DER.eSAC2A.rotatingExciterWithDemagnetization.sISO.y = if eSAC2A.rotatingExciterWithDemagnetization.sISO.y >= eSAC2A.division.y and eSAC2A.rotatingExciterWithDemagnetization.feedback.y > 0.0 then 0.0 else if eSAC2A.rotatingExciterWithDemagnetization.sISO.y <= eSAC2A.lowLim.k and eSAC2A.rotatingExciterWithDemagnetization.feedback.y < 0.0 then 0.0 else eSAC2A.rotatingExciterWithDemagnetization.sISO.K * eSAC2A.rotatingExciterWithDemagnetization.feedback.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_939(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,939};
  modelica_boolean tmp30;
  modelica_boolean tmp31;
  modelica_boolean tmp32;
  modelica_boolean tmp33;
  modelica_boolean tmp34;
  modelica_real tmp35;
  RELATIONHYSTERESIS(tmp30, data->localData[0]->realVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */, data->localData[0]->realVars[71] /* eSAC2A.division.y variable */, 23, GreaterEq);
  RELATIONHYSTERESIS(tmp31, data->localData[0]->realVars[85] /* eSAC2A.rotatingExciterWithDemagnetization.feedback.y variable */, 0.0, 24, Greater);
  tmp34 = (modelica_boolean)(tmp30 && tmp31);
  if(tmp34)
  {
    tmp35 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp32, data->localData[0]->realVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */, data->simulationInfo->realParameter[168] /* eSAC2A.lowLim.k PARAM */, 25, LessEq);
    RELATIONHYSTERESIS(tmp33, data->localData[0]->realVars[85] /* eSAC2A.rotatingExciterWithDemagnetization.feedback.y variable */, 0.0, 26, Less);
    tmp35 = ((tmp32 && tmp33)?0.0:(data->simulationInfo->realParameter[185] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.K PARAM */) * (data->localData[0]->realVars[85] /* eSAC2A.rotatingExciterWithDemagnetization.feedback.y variable */));
  }
  data->localData[0]->realVars[16] /* der(eSAC2A.rotatingExciterWithDemagnetization.sISO.y) STATE_DER */ = tmp35;
  TRACE_POP
}
/*
equation index: 940
type: SIMPLE_ASSIGN
$whenCondition2 = eSAC2A.simpleLagLim.state > eSAC2A.simpleLagLim.outMax and eSAC2A.simpleLagLim.K * eSAC2A.imLeadLag.y - eSAC2A.simpleLagLim.state < 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_940(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,940};
  modelica_boolean tmp36;
  modelica_boolean tmp37;
  RELATIONHYSTERESIS(tmp36, data->localData[0]->realVars[4] /* eSAC2A.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[200] /* eSAC2A.simpleLagLim.outMax PARAM */, 27, Greater);
  RELATIONHYSTERESIS(tmp37, (data->simulationInfo->realParameter[196] /* eSAC2A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[76] /* eSAC2A.imLeadLag.y variable */) - data->localData[0]->realVars[4] /* eSAC2A.simpleLagLim.state STATE(1) */, 0.0, 28, Less);
  data->localData[0]->booleanVars[1] /* $whenCondition2 DISCRETE */ = (tmp36 && tmp37);
  TRACE_POP
}
/*
equation index: 941
type: SIMPLE_ASSIGN
$whenCondition1 = eSAC2A.simpleLagLim.state < eSAC2A.simpleLagLim.outMin and eSAC2A.simpleLagLim.K * eSAC2A.imLeadLag.y - eSAC2A.simpleLagLim.state > 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_941(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,941};
  modelica_boolean tmp38;
  modelica_boolean tmp39;
  RELATIONHYSTERESIS(tmp38, data->localData[0]->realVars[4] /* eSAC2A.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[201] /* eSAC2A.simpleLagLim.outMin PARAM */, 29, Less);
  RELATIONHYSTERESIS(tmp39, (data->simulationInfo->realParameter[196] /* eSAC2A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[76] /* eSAC2A.imLeadLag.y variable */) - data->localData[0]->realVars[4] /* eSAC2A.simpleLagLim.state STATE(1) */, 0.0, 30, Greater);
  data->localData[0]->booleanVars[0] /* $whenCondition1 DISCRETE */ = (tmp38 && tmp39);
  TRACE_POP
}
/*
equation index: 942
type: SIMPLE_ASSIGN
GEN1.V = eSAC2A.ECOMP
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_942(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,942};
  data->localData[0]->realVars[36] /* GEN1.V variable */ = data->localData[0]->realVars[64] /* eSAC2A.ECOMP variable */;
  TRACE_POP
}
/*
equation index: 943
type: SIMPLE_ASSIGN
gENROU.anglev = atan2(pwLine.vs.im, pwLine.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_943(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,943};
  data->localData[0]->realVars[109] /* gENROU.anglev variable */ = atan2(data->localData[0]->realVars[124] /* pwLine.vs.im variable */, data->localData[0]->realVars[125] /* pwLine.vs.re variable */);
  TRACE_POP
}
/*
equation index: 944
type: SIMPLE_ASSIGN
GEN1.angle = 57.29577951308232 * gENROU.anglev
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_944(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,944};
  data->localData[0]->realVars[37] /* GEN1.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[109] /* gENROU.anglev variable */);
  TRACE_POP
}
/*
equation index: 945
type: SIMPLE_ASSIGN
pwLine.Q12 = (pwLine.vs.im * pwLine.is.re - pwLine.vs.re * pwLine.is.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_945(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,945};
  data->localData[0]->realVars[118] /* pwLine.Q12 variable */ = ((data->localData[0]->realVars[124] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[123] /* pwLine.is.re variable */) - ((data->localData[0]->realVars[125] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[122] /* pwLine.is.im variable */))) * (data->simulationInfo->realParameter[321] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 946
type: SIMPLE_ASSIGN
pwLine.P12 = (pwLine.vs.re * pwLine.is.re + pwLine.vs.im * pwLine.is.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_946(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,946};
  data->localData[0]->realVars[116] /* pwLine.P12 variable */ = ((data->localData[0]->realVars[125] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[123] /* pwLine.is.re variable */) + (data->localData[0]->realVars[124] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[122] /* pwLine.is.im variable */)) * (data->simulationInfo->realParameter[321] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 947
type: SIMPLE_ASSIGN
pwLine3.P12 = (pwLine1.vs.re * pwLine3.is.re + pwLine1.vs.im * pwLine3.is.im) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_947(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,947};
  data->localData[0]->realVars[138] /* pwLine3.P12 variable */ = ((data->localData[0]->realVars[137] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[145] /* pwLine3.is.re variable */) + (data->localData[0]->realVars[136] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[144] /* pwLine3.is.im variable */)) * (data->simulationInfo->realParameter[343] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 948
type: SIMPLE_ASSIGN
pwLine3.Q12 = (pwLine1.vs.im * pwLine3.is.re - pwLine1.vs.re * pwLine3.is.im) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_948(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,948};
  data->localData[0]->realVars[140] /* pwLine3.Q12 variable */ = ((data->localData[0]->realVars[136] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[145] /* pwLine3.is.re variable */) - ((data->localData[0]->realVars[137] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[144] /* pwLine3.is.im variable */))) * (data->simulationInfo->realParameter[343] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 949
type: SIMPLE_ASSIGN
constantLoad.angle = atan2(pwLine1.vs.im, pwLine1.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_949(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,949};
  data->localData[0]->realVars[50] /* constantLoad.angle variable */ = atan2(data->localData[0]->realVars[136] /* pwLine1.vs.im variable */, data->localData[0]->realVars[137] /* pwLine1.vs.re variable */);
  TRACE_POP
}
/*
equation index: 950
type: SIMPLE_ASSIGN
LOAD.angle = 57.29577951308232 * constantLoad.angle
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_950(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,950};
  data->localData[0]->realVars[45] /* LOAD.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[50] /* constantLoad.angle variable */);
  TRACE_POP
}
/*
equation index: 951
type: SIMPLE_ASSIGN
pwLine.Q21 = (pwLine1.vs.re * pwLine.ir.im - pwLine1.vs.im * pwLine.ir.re) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_951(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,951};
  data->localData[0]->realVars[119] /* pwLine.Q21 variable */ = ((data->localData[0]->realVars[137] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[120] /* pwLine.ir.im variable */) - ((data->localData[0]->realVars[136] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[121] /* pwLine.ir.re variable */))) * (data->simulationInfo->realParameter[321] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 952
type: SIMPLE_ASSIGN
pwLine.P21 = ((-pwLine1.vs.re) * pwLine.ir.re - pwLine1.vs.im * pwLine.ir.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_952(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,952};
  data->localData[0]->realVars[117] /* pwLine.P21 variable */ = (((-data->localData[0]->realVars[137] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[121] /* pwLine.ir.re variable */) - ((data->localData[0]->realVars[136] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[120] /* pwLine.ir.im variable */))) * (data->simulationInfo->realParameter[321] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 953
type: SIMPLE_ASSIGN
pwLine1.P12 = (pwLine1.vs.re * pwLine1.is.re + pwLine1.vs.im * pwLine1.is.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_953(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,953};
  data->localData[0]->realVars[126] /* pwLine1.P12 variable */ = ((data->localData[0]->realVars[137] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[133] /* pwLine1.is.re variable */) + (data->localData[0]->realVars[136] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[132] /* pwLine1.is.im variable */)) * (data->simulationInfo->realParameter[332] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 954
type: SIMPLE_ASSIGN
pwLine1.Q12 = (pwLine1.vs.im * pwLine1.is.re - pwLine1.vs.re * pwLine1.is.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_954(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,954};
  data->localData[0]->realVars[128] /* pwLine1.Q12 variable */ = ((data->localData[0]->realVars[136] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[133] /* pwLine1.is.re variable */) - ((data->localData[0]->realVars[137] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[132] /* pwLine1.is.im variable */))) * (data->simulationInfo->realParameter[332] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 955
type: SIMPLE_ASSIGN
pwLine1.P21 = ((-pwLine1.vr.re) * pwLine1.ir.re - pwLine1.vr.im * pwLine1.ir.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_955(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,955};
  data->localData[0]->realVars[127] /* pwLine1.P21 variable */ = (((-data->localData[0]->realVars[135] /* pwLine1.vr.re variable */)) * (data->localData[0]->realVars[131] /* pwLine1.ir.re variable */) - ((data->localData[0]->realVars[134] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[130] /* pwLine1.ir.im variable */))) * (data->simulationInfo->realParameter[332] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 956
type: SIMPLE_ASSIGN
pwLine1.Q21 = (pwLine1.vr.re * pwLine1.ir.im - pwLine1.vr.im * pwLine1.ir.re) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_956(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,956};
  data->localData[0]->realVars[129] /* pwLine1.Q21 variable */ = ((data->localData[0]->realVars[135] /* pwLine1.vr.re variable */) * (data->localData[0]->realVars[130] /* pwLine1.ir.im variable */) - ((data->localData[0]->realVars[134] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[131] /* pwLine1.ir.re variable */))) * (data->simulationInfo->realParameter[332] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 957
type: SIMPLE_ASSIGN
pwLine4.P21 = ((-pwLine1.vr.re) * pwLine4.ir.re - pwLine1.vr.im * pwLine4.ir.im) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_957(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,957};
  data->localData[0]->realVars[149] /* pwLine4.P21 variable */ = (((-data->localData[0]->realVars[135] /* pwLine1.vr.re variable */)) * (data->localData[0]->realVars[153] /* pwLine4.ir.re variable */) - ((data->localData[0]->realVars[134] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[152] /* pwLine4.ir.im variable */))) * (data->simulationInfo->realParameter[354] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 958
type: SIMPLE_ASSIGN
pwLine4.Q21 = (pwLine1.vr.re * pwLine4.ir.im - pwLine1.vr.im * pwLine4.ir.re) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_958(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,958};
  data->localData[0]->realVars[151] /* pwLine4.Q21 variable */ = ((data->localData[0]->realVars[135] /* pwLine1.vr.re variable */) * (data->localData[0]->realVars[152] /* pwLine4.ir.im variable */) - ((data->localData[0]->realVars[134] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[153] /* pwLine4.ir.re variable */))) * (data->simulationInfo->realParameter[354] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 959
type: SIMPLE_ASSIGN
GEN2.V = sqrt(pwLine1.vr.re ^ 2.0 + pwLine1.vr.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_959(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,959};
  modelica_real tmp40;
  modelica_real tmp41;
  tmp40 = data->localData[0]->realVars[135] /* pwLine1.vr.re variable */;
  tmp41 = data->localData[0]->realVars[134] /* pwLine1.vr.im variable */;
  data->localData[0]->realVars[40] /* GEN2.V variable */ = sqrt((tmp40 * tmp40) + (tmp41 * tmp41));
  TRACE_POP
}
/*
equation index: 960
type: SIMPLE_ASSIGN
gENCLS.V = GEN2.V
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_960(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,960};
  data->localData[0]->realVars[88] /* gENCLS.V variable */ = data->localData[0]->realVars[40] /* GEN2.V variable */;
  TRACE_POP
}
/*
equation index: 961
type: SIMPLE_ASSIGN
gENCLS.anglev = atan2(pwLine1.vr.im, pwLine1.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_961(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,961};
  data->localData[0]->realVars[89] /* gENCLS.anglev variable */ = atan2(data->localData[0]->realVars[134] /* pwLine1.vr.im variable */, data->localData[0]->realVars[135] /* pwLine1.vr.re variable */);
  TRACE_POP
}
/*
equation index: 962
type: SIMPLE_ASSIGN
GEN2.angle = 57.29577951308232 * gENCLS.anglev
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_962(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,962};
  data->localData[0]->realVars[41] /* GEN2.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[89] /* gENCLS.anglev variable */);
  TRACE_POP
}
/*
equation index: 963
type: SIMPLE_ASSIGN
gENCLS.P = (-pwLine1.vr.re) * gENCLS.p.ir - pwLine1.vr.im * gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_963(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,963};
  data->localData[0]->realVars[86] /* gENCLS.P variable */ = ((-data->localData[0]->realVars[135] /* pwLine1.vr.re variable */)) * (data->localData[0]->realVars[94] /* gENCLS.p.ir variable */) - ((data->localData[0]->realVars[134] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[93] /* gENCLS.p.ii variable */));
  TRACE_POP
}
/*
equation index: 964
type: SIMPLE_ASSIGN
gENCLS.Q = pwLine1.vr.re * gENCLS.p.ii - pwLine1.vr.im * gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_964(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,964};
  data->localData[0]->realVars[87] /* gENCLS.Q variable */ = (data->localData[0]->realVars[135] /* pwLine1.vr.re variable */) * (data->localData[0]->realVars[93] /* gENCLS.p.ii variable */) - ((data->localData[0]->realVars[134] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[94] /* gENCLS.p.ir variable */));
  TRACE_POP
}
/*
equation index: 968
type: ALGORITHM

  assert(eSAC2A.limiter1.uMax >= eSAC2A.limiter1.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(eSAC2A.limiter1.uMax, 6, 0, true) + ") < uMin (=" + String(eSAC2A.limiter1.uMin, 6, 0, true) + ")");
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_968(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,968};
  modelica_boolean tmp42;
  static const MMC_DEFSTRINGLIT(tmp43,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp44;
  static const MMC_DEFSTRINGLIT(tmp45,11,") < uMin (=");
  modelica_string tmp46;
  static int tmp47 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp42 = GreaterEq(data->simulationInfo->realParameter[166] /* eSAC2A.limiter1.uMax PARAM */,data->simulationInfo->realParameter[167] /* eSAC2A.limiter1.uMin PARAM */);
    if(!tmp42)
    {
      tmp44 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[166] /* eSAC2A.limiter1.uMax PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp43),tmp44);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp45));
      tmp46 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[167] /* eSAC2A.limiter1.uMin PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
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
equation index: 966
type: WHEN

when {$whenCondition2} then
  reinit(eSAC2A.simpleLagLim.state,  eSAC2A.simpleLagLim.outMax);
end when;
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_966(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,966};
  if((data->localData[0]->booleanVars[1] /* $whenCondition2 DISCRETE */ && !data->simulationInfo->booleanVarsPre[1] /* $whenCondition2 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[4] /* eSAC2A.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[200] /* eSAC2A.simpleLagLim.outMax PARAM */;
    infoStreamPrint(LOG_EVENTS, 0, "reinit eSAC2A.simpleLagLim.state = %g", data->localData[0]->realVars[4] /* eSAC2A.simpleLagLim.state STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  else if((data->localData[0]->booleanVars[0] /* $whenCondition1 DISCRETE */ && !data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[4] /* eSAC2A.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[201] /* eSAC2A.simpleLagLim.outMin PARAM */;
    infoStreamPrint(LOG_EVENTS, 0, "reinit eSAC2A.simpleLagLim.state = %g", data->localData[0]->realVars[4] /* eSAC2A.simpleLagLim.state STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}
/*
equation index: 965
type: ALGORITHM

  assert(eSAC2A.division.y > eSAC2A.lowLim.k, "Upper limit must be greater than lower limit");
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_965(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,965};
  modelica_boolean tmp48;
  static const MMC_DEFSTRINGLIT(tmp49,44,"Upper limit must be greater than lower limit");
  static int tmp50 = 0;
  {
    tmp48 = Greater(data->localData[0]->realVars[71] /* eSAC2A.division.y variable */,data->simulationInfo->realParameter[168] /* eSAC2A.lowLim.k PARAM */);
    if(!tmp48)
    {
      {
        FILE_INFO info = {"/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/OpenIPSL/OpenIPSL/NonElectrical/Continuous/IntegratorLimVar.mo",21,3,24,26,0};
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
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_DAE);
#endif

  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_functionLocalKnownVars(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_783(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_784(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_785(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_786(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_787(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_788(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_789(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_790(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_791(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_792(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_793(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_794(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_795(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_796(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_797(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_798(data, threadData);

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

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_923(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_924(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_925(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_926(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_927(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_928(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_929(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_930(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_931(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_932(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_933(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_934(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_935(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_936(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_937(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_938(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_939(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_940(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_941(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_942(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_943(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_944(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_945(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_946(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_947(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_948(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_949(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_950(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_951(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_952(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_953(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_954(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_955(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_956(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_957(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_958(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_959(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_960(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_961(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_962(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_963(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_964(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_968(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_966(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_965(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_DAE);
#endif
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
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_784(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_785(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_786(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_787(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_788(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_789(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_790(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_791(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_792(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_793(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_794(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_795(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_796(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_797(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_798(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_889(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_900(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_901(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_902(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_903(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_904(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_905(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_906(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_907(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_908(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_909(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_910(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_911(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_912(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_913(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_914(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_915(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_916(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_917(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_918(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_919(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_923(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_924(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_925(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_926(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_927(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_928(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_929(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_930(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_931(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_932(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_933(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_934(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_935(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_936(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_937(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_938(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_939(DATA* data, threadData_t *threadData);

static void functionODE_system0(DATA *data, threadData_t *threadData)
{
    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_784(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_785(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_786(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_787(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_788(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_789(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_790(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_791(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_792(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_793(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_794(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_795(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_796(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_797(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_798(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_889(data, threadData);

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

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_923(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_924(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_925(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_926(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_927(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_928(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_929(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_930(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_931(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_932(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_933(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_934(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_935(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_936(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_937(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_938(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_939(data, threadData);
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_FUNCTION_ODE);
#endif

  
  data->simulationInfo->callStatistics.functionODE++;
  
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_functionLocalKnownVars(data, threadData);
  functionODE_system0(data, threadData);

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_FUNCTION_ODE);
#endif

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
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_data_function,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_output_function,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_setc_function,
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
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_INDEX_JAC_F,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_initialAnalyticJacobianA,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_initialAnalyticJacobianB,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_initialAnalyticJacobianC,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_initialAnalyticJacobianD,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_initialAnalyticJacobianF,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_functionJacA_column,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_functionJacB_column,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_functionJacC_column,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_functionJacD_column,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_functionJacF_column,
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
#define _OMC_LIT_RESOURCE_3_dir_data "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/OpenIPSL/OpenIPSL"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_name,8,_OMC_LIT_RESOURCE_3_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir,124,_OMC_LIT_RESOURCE_3_dir_data);

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
  data->modelData->modelDir = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/OpenIPSL/OpenIPSL/Examples/Controls/PSSE/ES";
  data->modelData->modelGUID = "{5cc755eb-c24a-4d8f-8b5a-4c8aed6922f4}";
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
  data->modelData->nVariablesReal = 156;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesInteger = 0;
  data->modelData->nVariablesBoolean = 2;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 362;
  data->modelData->nParametersInteger = 10;
  data->modelData->nParametersBoolean = 71;
  data->modelData->nParametersString = 0;
  data->modelData->nInputVars = 0;
  data->modelData->nOutputVars = 0;
  
  data->modelData->nAliasReal = 112;
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
  data->modelData->modelDataXml.nFunctions = 7;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 1252;
  data->modelData->nMixedSystems = 0;
  data->modelData->nLinearSystems = 0;
  data->modelData->nNonLinearSystems = 5;
  data->modelData->nStateSets = 0;
  data->modelData->nJacobians = 6;
  data->modelData->nOptimizeConstraints = 0;
  data->modelData->nOptimizeFinalConstraints = 0;
  
  data->modelData->nDelayExpressions = 0;
  
  data->modelData->nClocks = 0;
  data->modelData->nSubClocks = 0;
  
  data->modelData->nSensitivityVars = 0;
  data->modelData->nSensitivityParamVars = 0;
  data->modelData->nSetcVars = 0;
  data->modelData->ndataReconVars = 0;
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


