/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "OpenIPSL.Examples.Banks.PSSE.CSVGN1_model.h"
#include "simulation/solver/events.h"

#define prefixedName_performSimulation OpenIPSL_Examples_Banks_PSSE_CSVGN1_performSimulation
#define prefixedName_updateContinuousSystem OpenIPSL_Examples_Banks_PSSE_CSVGN1_updateContinuousSystem
#include <simulation/solver/perform_simulation.c.inc>

#define prefixedName_performQSSSimulation OpenIPSL_Examples_Banks_PSSE_CSVGN1_performQSSSimulation
#include <simulation/solver/perform_qss_simulation.c.inc>

/* dummy VARINFO and FILEINFO */
const FILE_INFO dummyFILE_INFO = omc_dummyFileInfo;
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int OpenIPSL_Examples_Banks_PSSE_CSVGN1_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Banks_PSSE_CSVGN1_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Banks_PSSE_CSVGN1_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Banks_PSSE_CSVGN1_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Banks_PSSE_CSVGN1_data_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Banks_PSSE_CSVGN1_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Banks_PSSE_CSVGN1_setc_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/*
equation index: 762
type: SIMPLE_ASSIGN
$DER.gENCLS.delta = 0.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_762(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,762};
  data->localData[0]->realVars[13] /* der(gENCLS.delta) STATE_DER */ = 0.0;
  TRACE_POP
}
/*
equation index: 763
type: SIMPLE_ASSIGN
$DER.gENCLS.eq = 0.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_763(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,763};
  data->localData[0]->realVars[14] /* der(gENCLS.eq) STATE_DER */ = 0.0;
  TRACE_POP
}
/*
equation index: 764
type: SIMPLE_ASSIGN
gENSAL.PSIppd = gENSAL.Epq * gENSAL.K3d + gENSAL.PSIkd * gENSAL.K4d
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_764(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,764};
  data->localData[0]->realVars[97] /* gENSAL.PSIppd variable */ = (data->localData[0]->realVars[5] /* gENSAL.Epq STATE(1) */) * (data->simulationInfo->realParameter[223] /* gENSAL.K3d PARAM */) + (data->localData[0]->realVars[6] /* gENSAL.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[224] /* gENSAL.K4d PARAM */);
  TRACE_POP
}
/*
equation index: 765
type: SIMPLE_ASSIGN
$DER.gENSAL.delta = gENSAL.w_b * gENSAL.w
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_765(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,765};
  data->localData[0]->realVars[18] /* der(gENSAL.delta) STATE_DER */ = (data->simulationInfo->realParameter[279] /* gENSAL.w_b PARAM */) * (data->localData[0]->realVars[9] /* gENSAL.w STATE(1) */);
  TRACE_POP
}
/*
equation index: 766
type: SIMPLE_ASSIGN
cSVGN1.leadLag.TF.x[1] = cSVGN1.leadLag.TF.x_scaled[1] / cSVGN1.leadLag.TF.a_end
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_766(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,766};
  data->localData[0]->realVars[59] /* cSVGN1.leadLag.TF.x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[1] /* cSVGN1.leadLag.TF.x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[97] /* cSVGN1.leadLag.TF.a_end PARAM */,"cSVGN1.leadLag.TF.a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 767
type: SIMPLE_ASSIGN
cSVGN1.leadLagLim.add2.u2 = cSVGN1.leadLagLim.gain1.k * cSVGN1.leadLagLim.integrator.y
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_767(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,767};
  data->localData[0]->realVars[62] /* cSVGN1.leadLagLim.add2.u2 variable */ = (data->simulationInfo->realParameter[117] /* cSVGN1.leadLagLim.gain1.k PARAM */) * (data->localData[0]->realVars[2] /* cSVGN1.leadLagLim.integrator.y STATE(1) */);
  TRACE_POP
}
/*
equation index: 768
type: SIMPLE_ASSIGN
$cse8 = cos(gENSAL.delta)
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_768(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,768};
  data->localData[0]->realVars[26] /* $cse8 variable */ = cos(data->localData[0]->realVars[8] /* gENSAL.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 769
type: SIMPLE_ASSIGN
$cse7 = sin(gENSAL.delta)
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_769(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,769};
  data->localData[0]->realVars[25] /* $cse7 variable */ = sin(data->localData[0]->realVars[8] /* gENSAL.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 770
type: SIMPLE_ASSIGN
$cse6 = OpenIPSL.NonElectrical.Functions.SE(gENSAL.Epq, gENSAL.S10, gENSAL.S12, 1.0, 1.2)
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_770(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,770};
  data->localData[0]->realVars[24] /* $cse6 variable */ = omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->localData[0]->realVars[5] /* gENSAL.Epq STATE(1) */, data->simulationInfo->realParameter[242] /* gENSAL.S10 PARAM */, data->simulationInfo->realParameter[243] /* gENSAL.S12 PARAM */, 1.0, 1.2);
  TRACE_POP
}
/*
equation index: 771
type: SIMPLE_ASSIGN
$cse2 = cos(gENCLS.delta)
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_771(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,771};
  data->localData[0]->realVars[22] /* $cse2 variable */ = cos(data->localData[0]->realVars[3] /* gENCLS.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 772
type: SIMPLE_ASSIGN
$cse1 = sin(gENCLS.delta)
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_772(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,772};
  data->localData[0]->realVars[20] /* $cse1 variable */ = sin(data->localData[0]->realVars[3] /* gENCLS.delta STATE(1) */);
  TRACE_POP
}
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_773(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_774(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_775(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_776(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_777(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_778(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_779(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_780(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_781(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_782(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_783(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_784(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_785(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_786(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_787(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_788(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_789(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_790(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_791(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_792(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_793(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_794(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_795(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_796(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_797(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_798(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_799(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_800(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_801(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_802(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_803(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_804(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_805(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_806(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_807(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_808(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_809(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_810(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_811(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_812(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_840(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_839(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_838(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_837(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_836(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_835(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_834(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_833(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_832(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_831(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_830(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_829(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_828(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_827(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_826(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_825(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_824(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_823(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_822(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_821(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_820(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_819(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_818(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_817(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_816(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_815(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_814(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_813(DATA*, threadData_t*);
/*
equation index: 909
indexNonlinear: 2
type: NONLINEAR

vars: {pwLine3.ir.im, pwLine4.is.im, pwLine4.is.re, pwLine3.ir.re, pwLine3.is.re, pwLine1.is.re, pwLine3.is.im, pwLine.ir.im, constantLoad.p.ir, pwLine1.is.im, pwLine2.ir.re, pwLine2.ir.im, gENCLS.iq, gENCLS.id, pwLine2.vr.im, pwLine2.vr.re, pwLine2.is.re, pwLine2.is.im, pwLine1.vr.re, cSVGN1.iq, cSVGN1.add2.y, cSVGN1.Y, gENSAL.id, gENSAL.iq, pwLine3.vr.re, pwLine3.vr.im, pwLine1.vs.im, pwLine1.vs.re}
eqns: {773, 774, 775, 776, 777, 778, 779, 780, 781, 782, 783, 784, 785, 786, 787, 788, 789, 790, 791, 792, 793, 794, 795, 796, 797, 798, 799, 800, 801, 802, 803, 804, 805, 806, 807, 808, 809, 810, 811, 812, 840, 839, 838, 837, 836, 835, 834, 833, 832, 831, 830, 829, 828, 827, 826, 825, 824, 823, 822, 821, 820, 819, 818, 817, 816, 815, 814, 813}
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_909(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,909};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 909 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[0] = data->localData[0]->realVars[145] /* pwLine3.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[1] = data->localData[0]->realVars[157] /* pwLine4.is.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[2] = data->localData[0]->realVars[158] /* pwLine4.is.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[3] = data->localData[0]->realVars[146] /* pwLine3.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[4] = data->localData[0]->realVars[148] /* pwLine3.is.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[5] = data->localData[0]->realVars[126] /* pwLine1.is.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[6] = data->localData[0]->realVars[147] /* pwLine3.is.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[7] = data->localData[0]->realVars[113] /* pwLine.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[8] = data->localData[0]->realVars[78] /* constantLoad.p.ir variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[9] = data->localData[0]->realVars[125] /* pwLine1.is.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[10] = data->localData[0]->realVars[136] /* pwLine2.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[11] = data->localData[0]->realVars[135] /* pwLine2.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[12] = data->localData[0]->realVars[85] /* gENCLS.iq variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[13] = data->localData[0]->realVars[84] /* gENCLS.id variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[14] = data->localData[0]->realVars[139] /* pwLine2.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[15] = data->localData[0]->realVars[140] /* pwLine2.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[16] = data->localData[0]->realVars[138] /* pwLine2.is.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[17] = data->localData[0]->realVars[137] /* pwLine2.is.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[18] = data->localData[0]->realVars[128] /* pwLine1.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[19] = data->localData[0]->realVars[58] /* cSVGN1.iq variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[20] = data->localData[0]->realVars[55] /* cSVGN1.add2.y variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[21] = data->localData[0]->realVars[52] /* cSVGN1.Y variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[22] = data->localData[0]->realVars[103] /* gENSAL.id variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[23] = data->localData[0]->realVars[104] /* gENSAL.iq variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[24] = data->localData[0]->realVars[150] /* pwLine3.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[25] = data->localData[0]->realVars[149] /* pwLine3.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[26] = data->localData[0]->realVars[129] /* pwLine1.vs.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[27] = data->localData[0]->realVars[130] /* pwLine1.vs.re variable */;
  retValue = solve_nonlinear_system(data, threadData, 2);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,909};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 909 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[145] /* pwLine3.ir.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[0];
  data->localData[0]->realVars[157] /* pwLine4.is.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[1];
  data->localData[0]->realVars[158] /* pwLine4.is.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[2];
  data->localData[0]->realVars[146] /* pwLine3.ir.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[3];
  data->localData[0]->realVars[148] /* pwLine3.is.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[4];
  data->localData[0]->realVars[126] /* pwLine1.is.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[5];
  data->localData[0]->realVars[147] /* pwLine3.is.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[6];
  data->localData[0]->realVars[113] /* pwLine.ir.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[7];
  data->localData[0]->realVars[78] /* constantLoad.p.ir variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[8];
  data->localData[0]->realVars[125] /* pwLine1.is.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[9];
  data->localData[0]->realVars[136] /* pwLine2.ir.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[10];
  data->localData[0]->realVars[135] /* pwLine2.ir.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[11];
  data->localData[0]->realVars[85] /* gENCLS.iq variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[12];
  data->localData[0]->realVars[84] /* gENCLS.id variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[13];
  data->localData[0]->realVars[139] /* pwLine2.vr.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[14];
  data->localData[0]->realVars[140] /* pwLine2.vr.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[15];
  data->localData[0]->realVars[138] /* pwLine2.is.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[16];
  data->localData[0]->realVars[137] /* pwLine2.is.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[17];
  data->localData[0]->realVars[128] /* pwLine1.vr.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[18];
  data->localData[0]->realVars[58] /* cSVGN1.iq variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[19];
  data->localData[0]->realVars[55] /* cSVGN1.add2.y variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[20];
  data->localData[0]->realVars[52] /* cSVGN1.Y variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[21];
  data->localData[0]->realVars[103] /* gENSAL.id variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[22];
  data->localData[0]->realVars[104] /* gENSAL.iq variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[23];
  data->localData[0]->realVars[150] /* pwLine3.vr.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[24];
  data->localData[0]->realVars[149] /* pwLine3.vr.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[25];
  data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[26];
  data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[27];
  TRACE_POP
}
/*
equation index: 910
type: SIMPLE_ASSIGN
LOAD.V = constantLoad.v
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_910(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,910};
  data->localData[0]->realVars[40] /* LOAD.V variable */ = data->localData[0]->realVars[79] /* constantLoad.v variable */;
  TRACE_POP
}
/*
equation index: 911
type: SIMPLE_ASSIGN
$DER.gENSAL.PSIkd = (gENSAL.Epq + (gENSAL.Xl - gENSAL.Xpd) * gENSAL.id - gENSAL.PSIkd) / gENSAL.Tppd0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_911(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,911};
  data->localData[0]->realVars[16] /* der(gENSAL.PSIkd) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[5] /* gENSAL.Epq STATE(1) */ + (data->simulationInfo->realParameter[252] /* gENSAL.Xl PARAM */ - data->simulationInfo->realParameter[253] /* gENSAL.Xpd PARAM */) * (data->localData[0]->realVars[103] /* gENSAL.id variable */) - data->localData[0]->realVars[6] /* gENSAL.PSIkd STATE(1) */,data->simulationInfo->realParameter[246] /* gENSAL.Tppd0 PARAM */,"gENSAL.Tppd0",equationIndexes);
  TRACE_POP
}
/*
equation index: 912
type: SIMPLE_ASSIGN
gENSAL.ISORCE = gENSAL.K1d * (gENSAL.Epq + (gENSAL.Xl - gENSAL.Xpd) * gENSAL.id - gENSAL.PSIkd) + (gENSAL.Xd - gENSAL.Xpd) * gENSAL.id + (1.0 + $cse6) * gENSAL.Epq
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_912(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,912};
  data->localData[0]->realVars[93] /* gENSAL.ISORCE variable */ = (data->simulationInfo->realParameter[221] /* gENSAL.K1d PARAM */) * (data->localData[0]->realVars[5] /* gENSAL.Epq STATE(1) */ + (data->simulationInfo->realParameter[252] /* gENSAL.Xl PARAM */ - data->simulationInfo->realParameter[253] /* gENSAL.Xpd PARAM */) * (data->localData[0]->realVars[103] /* gENSAL.id variable */) - data->localData[0]->realVars[6] /* gENSAL.PSIkd STATE(1) */) + (data->simulationInfo->realParameter[251] /* gENSAL.Xd PARAM */ - data->simulationInfo->realParameter[253] /* gENSAL.Xpd PARAM */) * (data->localData[0]->realVars[103] /* gENSAL.id variable */) + (1.0 + data->localData[0]->realVars[24] /* $cse6 variable */) * (data->localData[0]->realVars[5] /* gENSAL.Epq STATE(1) */);
  TRACE_POP
}
/*
equation index: 913
type: SIMPLE_ASSIGN
$DER.gENSAL.Epq = (gENSAL.efd0 - gENSAL.ISORCE) / gENSAL.Tpd0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_913(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,913};
  data->localData[0]->realVars[15] /* der(gENSAL.Epq) STATE_DER */ = DIVISION_SIM(data->simulationInfo->realParameter[265] /* gENSAL.efd0 PARAM */ - data->localData[0]->realVars[93] /* gENSAL.ISORCE variable */,data->simulationInfo->realParameter[245] /* gENSAL.Tpd0 PARAM */,"gENSAL.Tpd0",equationIndexes);
  TRACE_POP
}
/*
equation index: 914
type: SIMPLE_ASSIGN
gENSAL.I = sqrt(pwLine.is.im ^ 2.0 + pwLine.is.re ^ 2.0)
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_914(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,914};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[115] /* pwLine.is.im variable */;
  tmp1 = data->localData[0]->realVars[116] /* pwLine.is.re variable */;
  data->localData[0]->realVars[92] /* gENSAL.I variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 915
type: SIMPLE_ASSIGN
gENSAL.anglei = atan2(-pwLine.is.im, -pwLine.is.re)
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_915(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,915};
  data->localData[0]->realVars[101] /* gENSAL.anglei variable */ = atan2((-data->localData[0]->realVars[115] /* pwLine.is.im variable */), (-data->localData[0]->realVars[116] /* pwLine.is.re variable */));
  TRACE_POP
}
/*
equation index: 916
type: SIMPLE_ASSIGN
$DER.gENSAL.PSIppq = ((gENSAL.Xq - gENSAL.Xppq) * gENSAL.iq - gENSAL.PSIppq) / gENSAL.Tppq0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_916(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,916};
  data->localData[0]->realVars[17] /* der(gENSAL.PSIppq) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[256] /* gENSAL.Xq PARAM */ - data->simulationInfo->realParameter[255] /* gENSAL.Xppq PARAM */) * (data->localData[0]->realVars[104] /* gENSAL.iq variable */) - data->localData[0]->realVars[7] /* gENSAL.PSIppq STATE(1) */,data->simulationInfo->realParameter[247] /* gENSAL.Tppq0 PARAM */,"gENSAL.Tppq0",equationIndexes);
  TRACE_POP
}
/*
equation index: 917
type: SIMPLE_ASSIGN
gENSAL.Te = gENSAL.PSId * gENSAL.iq - gENSAL.PSIq * gENSAL.id
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_917(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,917};
  data->localData[0]->realVars[100] /* gENSAL.Te variable */ = (data->localData[0]->realVars[96] /* gENSAL.PSId variable */) * (data->localData[0]->realVars[104] /* gENSAL.iq variable */) - ((data->localData[0]->realVars[98] /* gENSAL.PSIq variable */) * (data->localData[0]->realVars[103] /* gENSAL.id variable */));
  TRACE_POP
}
/*
equation index: 918
type: SIMPLE_ASSIGN
$DER.gENSAL.w = 0.5 * ((gENSAL.pm0 - gENSAL.D * gENSAL.w) / (1.0 + gENSAL.w) - gENSAL.Te) / gENSAL.H
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_918(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,918};
  data->localData[0]->realVars[19] /* der(gENSAL.w) STATE_DER */ = (0.5) * (DIVISION_SIM(DIVISION_SIM(data->simulationInfo->realParameter[272] /* gENSAL.pm0 PARAM */ - ((data->simulationInfo->realParameter[206] /* gENSAL.D PARAM */) * (data->localData[0]->realVars[9] /* gENSAL.w STATE(1) */)),1.0 + data->localData[0]->realVars[9] /* gENSAL.w STATE(1) */,"1.0 + gENSAL.w",equationIndexes) - data->localData[0]->realVars[100] /* gENSAL.Te variable */,data->simulationInfo->realParameter[214] /* gENSAL.H PARAM */,"gENSAL.H",equationIndexes));
  TRACE_POP
}
/*
equation index: 919
type: SIMPLE_ASSIGN
gENSAL.ETERM = sqrt(pwLine.vs.re ^ 2.0 + pwLine.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_919(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,919};
  modelica_real tmp2;
  modelica_real tmp3;
  tmp2 = data->localData[0]->realVars[118] /* pwLine.vs.re variable */;
  tmp3 = data->localData[0]->realVars[117] /* pwLine.vs.im variable */;
  data->localData[0]->realVars[91] /* gENSAL.ETERM variable */ = sqrt((tmp2 * tmp2) + (tmp3 * tmp3));
  TRACE_POP
}
/*
equation index: 920
type: SIMPLE_ASSIGN
GEN1.V = gENSAL.ETERM
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_920(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,920};
  data->localData[0]->realVars[32] /* GEN1.V variable */ = data->localData[0]->realVars[91] /* gENSAL.ETERM variable */;
  TRACE_POP
}
/*
equation index: 921
type: SIMPLE_ASSIGN
gENSAL.anglev = atan2(pwLine.vs.im, pwLine.vs.re)
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_921(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,921};
  data->localData[0]->realVars[102] /* gENSAL.anglev variable */ = atan2(data->localData[0]->realVars[117] /* pwLine.vs.im variable */, data->localData[0]->realVars[118] /* pwLine.vs.re variable */);
  TRACE_POP
}
/*
equation index: 922
type: SIMPLE_ASSIGN
GEN1.angle = 57.29577951308232 * gENSAL.anglev
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_922(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,922};
  data->localData[0]->realVars[33] /* GEN1.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[102] /* gENSAL.anglev variable */);
  TRACE_POP
}
/*
equation index: 923
type: SIMPLE_ASSIGN
gENSAL.P = pwLine.vs.im * pwLine.is.im + pwLine.vs.re * pwLine.is.re
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_923(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,923};
  data->localData[0]->realVars[94] /* gENSAL.P variable */ = (data->localData[0]->realVars[117] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[115] /* pwLine.is.im variable */) + (data->localData[0]->realVars[118] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[116] /* pwLine.is.re variable */);
  TRACE_POP
}
/*
equation index: 924
type: SIMPLE_ASSIGN
gENSAL.PELEC = gENSAL.P / gENSAL.CoB
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_924(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,924};
  data->localData[0]->realVars[95] /* gENSAL.PELEC variable */ = DIVISION_SIM(data->localData[0]->realVars[94] /* gENSAL.P variable */,data->simulationInfo->realParameter[205] /* gENSAL.CoB PARAM */,"gENSAL.CoB",equationIndexes);
  TRACE_POP
}
/*
equation index: 925
type: SIMPLE_ASSIGN
gENSAL.Q = pwLine.vs.im * pwLine.is.re - pwLine.vs.re * pwLine.is.im
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_925(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,925};
  data->localData[0]->realVars[99] /* gENSAL.Q variable */ = (data->localData[0]->realVars[117] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[116] /* pwLine.is.re variable */) - ((data->localData[0]->realVars[118] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[115] /* pwLine.is.im variable */));
  TRACE_POP
}
/*
equation index: 926
type: SIMPLE_ASSIGN
pwLine.Q12 = (pwLine.vs.im * pwLine.is.re - pwLine.vs.re * pwLine.is.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_926(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,926};
  data->localData[0]->realVars[111] /* pwLine.Q12 variable */ = ((data->localData[0]->realVars[117] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[116] /* pwLine.is.re variable */) - ((data->localData[0]->realVars[118] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[115] /* pwLine.is.im variable */))) * (data->simulationInfo->realParameter[287] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 927
type: SIMPLE_ASSIGN
pwLine.P12 = (pwLine.vs.re * pwLine.is.re + pwLine.vs.im * pwLine.is.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_927(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,927};
  data->localData[0]->realVars[109] /* pwLine.P12 variable */ = ((data->localData[0]->realVars[118] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[116] /* pwLine.is.re variable */) + (data->localData[0]->realVars[117] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[115] /* pwLine.is.im variable */)) * (data->simulationInfo->realParameter[287] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 928
type: SIMPLE_ASSIGN
pwLine1.P12 = (pwLine1.vs.re * pwLine1.is.re + pwLine1.vs.im * pwLine1.is.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_928(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,928};
  data->localData[0]->realVars[119] /* pwLine1.P12 variable */ = ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[126] /* pwLine1.is.re variable */) + (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[125] /* pwLine1.is.im variable */)) * (data->simulationInfo->realParameter[298] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 929
type: SIMPLE_ASSIGN
pwLine1.Q12 = (pwLine1.vs.im * pwLine1.is.re - pwLine1.vs.re * pwLine1.is.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_929(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,929};
  data->localData[0]->realVars[121] /* pwLine1.Q12 variable */ = ((data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[126] /* pwLine1.is.re variable */) - ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[125] /* pwLine1.is.im variable */))) * (data->simulationInfo->realParameter[298] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 930
type: SIMPLE_ASSIGN
constantLoad.angle = atan2(pwLine1.vs.im, pwLine1.vs.re)
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_930(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,930};
  data->localData[0]->realVars[74] /* constantLoad.angle variable */ = atan2(data->localData[0]->realVars[129] /* pwLine1.vs.im variable */, data->localData[0]->realVars[130] /* pwLine1.vs.re variable */);
  TRACE_POP
}
/*
equation index: 931
type: SIMPLE_ASSIGN
LOAD.angle = 57.29577951308232 * constantLoad.angle
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_931(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,931};
  data->localData[0]->realVars[41] /* LOAD.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[74] /* constantLoad.angle variable */);
  TRACE_POP
}
/*
equation index: 932
type: SIMPLE_ASSIGN
pwLine.Q21 = (pwLine1.vs.re * pwLine.ir.im - pwLine1.vs.im * pwLine.ir.re) * pwLine.S_b
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_932(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,932};
  data->localData[0]->realVars[112] /* pwLine.Q21 variable */ = ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[113] /* pwLine.ir.im variable */) - ((data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[114] /* pwLine.ir.re variable */))) * (data->simulationInfo->realParameter[287] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 933
type: SIMPLE_ASSIGN
pwLine.P21 = ((-pwLine1.vs.re) * pwLine.ir.re - pwLine1.vs.im * pwLine.ir.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_933(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,933};
  data->localData[0]->realVars[110] /* pwLine.P21 variable */ = (((-data->localData[0]->realVars[130] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[114] /* pwLine.ir.re variable */) - ((data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[113] /* pwLine.ir.im variable */))) * (data->simulationInfo->realParameter[287] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 934
type: SIMPLE_ASSIGN
pwLine3.P12 = (pwLine1.vs.re * pwLine3.is.re + pwLine1.vs.im * pwLine3.is.im) * pwLine3.S_b
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_934(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,934};
  data->localData[0]->realVars[141] /* pwLine3.P12 variable */ = ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[148] /* pwLine3.is.re variable */) + (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[147] /* pwLine3.is.im variable */)) * (data->simulationInfo->realParameter[320] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 935
type: SIMPLE_ASSIGN
pwLine3.Q12 = (pwLine1.vs.im * pwLine3.is.re - pwLine1.vs.re * pwLine3.is.im) * pwLine3.S_b
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_935(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,935};
  data->localData[0]->realVars[143] /* pwLine3.Q12 variable */ = ((data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[148] /* pwLine3.is.re variable */) - ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[147] /* pwLine3.is.im variable */))) * (data->simulationInfo->realParameter[320] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 936
type: SIMPLE_ASSIGN
pwLine3.P21 = ((-pwLine3.vr.re) * pwLine3.ir.re - pwLine3.vr.im * pwLine3.ir.im) * pwLine3.S_b
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_936(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,936};
  data->localData[0]->realVars[142] /* pwLine3.P21 variable */ = (((-data->localData[0]->realVars[150] /* pwLine3.vr.re variable */)) * (data->localData[0]->realVars[146] /* pwLine3.ir.re variable */) - ((data->localData[0]->realVars[149] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[145] /* pwLine3.ir.im variable */))) * (data->simulationInfo->realParameter[320] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 937
type: SIMPLE_ASSIGN
pwLine3.Q21 = (pwLine3.vr.re * pwLine3.ir.im - pwLine3.vr.im * pwLine3.ir.re) * pwLine3.S_b
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_937(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,937};
  data->localData[0]->realVars[144] /* pwLine3.Q21 variable */ = ((data->localData[0]->realVars[150] /* pwLine3.vr.re variable */) * (data->localData[0]->realVars[145] /* pwLine3.ir.im variable */) - ((data->localData[0]->realVars[149] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[146] /* pwLine3.ir.re variable */))) * (data->simulationInfo->realParameter[320] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 938
type: SIMPLE_ASSIGN
pwLine4.P12 = (pwLine3.vr.re * pwLine4.is.re + pwLine3.vr.im * pwLine4.is.im) * pwLine4.S_b
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_938(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,938};
  data->localData[0]->realVars[151] /* pwLine4.P12 variable */ = ((data->localData[0]->realVars[150] /* pwLine3.vr.re variable */) * (data->localData[0]->realVars[158] /* pwLine4.is.re variable */) + (data->localData[0]->realVars[149] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[157] /* pwLine4.is.im variable */)) * (data->simulationInfo->realParameter[331] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 939
type: SIMPLE_ASSIGN
pwLine4.Q12 = (pwLine3.vr.im * pwLine4.is.re - pwLine3.vr.re * pwLine4.is.im) * pwLine4.S_b
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_939(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,939};
  data->localData[0]->realVars[153] /* pwLine4.Q12 variable */ = ((data->localData[0]->realVars[149] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[158] /* pwLine4.is.re variable */) - ((data->localData[0]->realVars[150] /* pwLine3.vr.re variable */) * (data->localData[0]->realVars[157] /* pwLine4.is.im variable */))) * (data->simulationInfo->realParameter[331] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 940
type: SIMPLE_ASSIGN
FAULT.V = sqrt(pwLine3.vr.re ^ 2.0 + pwLine3.vr.im ^ 2.0)
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_940(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,940};
  modelica_real tmp4;
  modelica_real tmp5;
  tmp4 = data->localData[0]->realVars[150] /* pwLine3.vr.re variable */;
  tmp5 = data->localData[0]->realVars[149] /* pwLine3.vr.im variable */;
  data->localData[0]->realVars[28] /* FAULT.V variable */ = sqrt((tmp4 * tmp4) + (tmp5 * tmp5));
  TRACE_POP
}
/*
equation index: 941
type: SIMPLE_ASSIGN
$cse4 = atan2(pwLine3.vr.im, pwLine3.vr.re)
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_941(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,941};
  data->localData[0]->realVars[23] /* $cse4 variable */ = atan2(data->localData[0]->realVars[149] /* pwLine3.vr.im variable */, data->localData[0]->realVars[150] /* pwLine3.vr.re variable */);
  TRACE_POP
}
/*
equation index: 942
type: SIMPLE_ASSIGN
FAULT.angle = 57.29577951308232 * $cse4
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_942(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,942};
  data->localData[0]->realVars[29] /* FAULT.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[23] /* $cse4 variable */);
  TRACE_POP
}
/*
equation index: 943
type: SIMPLE_ASSIGN
pwLine1.P21 = ((-pwLine1.vr.re) * pwLine1.ir.re - pwLine1.vr.im * pwLine1.ir.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_943(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,943};
  data->localData[0]->realVars[120] /* pwLine1.P21 variable */ = (((-data->localData[0]->realVars[128] /* pwLine1.vr.re variable */)) * (data->localData[0]->realVars[124] /* pwLine1.ir.re variable */) - ((data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[123] /* pwLine1.ir.im variable */))) * (data->simulationInfo->realParameter[298] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 944
type: SIMPLE_ASSIGN
pwLine1.Q21 = (pwLine1.vr.re * pwLine1.ir.im - pwLine1.vr.im * pwLine1.ir.re) * pwLine1.S_b
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_944(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,944};
  data->localData[0]->realVars[122] /* pwLine1.Q21 variable */ = ((data->localData[0]->realVars[128] /* pwLine1.vr.re variable */) * (data->localData[0]->realVars[123] /* pwLine1.ir.im variable */) - ((data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[124] /* pwLine1.ir.re variable */))) * (data->simulationInfo->realParameter[298] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 945
type: SIMPLE_ASSIGN
cSVGN1.anglev = atan2(pwLine1.vr.im, pwLine1.vr.re)
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_945(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,945};
  data->localData[0]->realVars[56] /* cSVGN1.anglev variable */ = atan2(data->localData[0]->realVars[127] /* pwLine1.vr.im variable */, data->localData[0]->realVars[128] /* pwLine1.vr.re variable */);
  TRACE_POP
}
/*
equation index: 946
type: SIMPLE_ASSIGN
SHUNT.angle = 57.29577951308232 * cSVGN1.anglev
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_946(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,946};
  data->localData[0]->realVars[44] /* SHUNT.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[56] /* cSVGN1.anglev variable */);
  TRACE_POP
}
/*
equation index: 947
type: SIMPLE_ASSIGN
cSVGN1.v = cSVGN1.V
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_947(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,947};
  data->localData[0]->realVars[69] /* cSVGN1.v variable */ = data->localData[0]->realVars[51] /* cSVGN1.V variable */;
  TRACE_POP
}
/*
equation index: 948
type: SIMPLE_ASSIGN
$DER.cSVGN1.leadLag.TF.x_scaled[1] = (cSVGN1.leadLag.TF.a_end * cSVGN1.add2.y - cSVGN1.leadLag.TF.a[2] * cSVGN1.leadLag.TF.x_scaled[1]) / cSVGN1.leadLag.TF.a[1]
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_948(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,948};
  data->localData[0]->realVars[11] /* der(cSVGN1.leadLag.TF.x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[97] /* cSVGN1.leadLag.TF.a_end PARAM */) * (data->localData[0]->realVars[55] /* cSVGN1.add2.y variable */) - ((data->simulationInfo->realParameter[96] /* cSVGN1.leadLag.TF.a[2] PARAM */) * (data->localData[0]->realVars[1] /* cSVGN1.leadLag.TF.x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[95] /* cSVGN1.leadLag.TF.a[1] PARAM */,"cSVGN1.leadLag.TF.a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 949
type: SIMPLE_ASSIGN
$DER.cSVGN1.LagLim.state = (cSVGN1.LagLim.K * cSVGN1.LagLim.u - cSVGN1.LagLim.state) / cSVGN1.LagLim.T_mod
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_949(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,949};
  data->localData[0]->realVars[10] /* der(cSVGN1.LagLim.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[44] /* cSVGN1.LagLim.K PARAM */) * (data->localData[0]->realVars[47] /* cSVGN1.LagLim.u variable */) - data->localData[0]->realVars[0] /* cSVGN1.LagLim.state STATE(1) */,data->simulationInfo->realParameter[46] /* cSVGN1.LagLim.T_mod PARAM */,"cSVGN1.LagLim.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 950
type: SIMPLE_ASSIGN
cSVGN1.leadLagLim.add3.y = cSVGN1.leadLagLim.add3.k1 * cSVGN1.LagLim.u + cSVGN1.leadLagLim.add3.k2 * cSVGN1.leadLagLim.integrator.y
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_950(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,950};
  data->localData[0]->realVars[64] /* cSVGN1.leadLagLim.add3.y variable */ = (data->simulationInfo->realParameter[114] /* cSVGN1.leadLagLim.add3.k1 PARAM */) * (data->localData[0]->realVars[47] /* cSVGN1.LagLim.u variable */) + (data->simulationInfo->realParameter[115] /* cSVGN1.leadLagLim.add3.k2 PARAM */) * (data->localData[0]->realVars[2] /* cSVGN1.leadLagLim.integrator.y STATE(1) */);
  TRACE_POP
}
/*
equation index: 951
type: SIMPLE_ASSIGN
$DER.cSVGN1.leadLagLim.integrator.y = cSVGN1.leadLagLim.integrator.k * cSVGN1.leadLagLim.add3.y
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_951(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,951};
  data->localData[0]->realVars[12] /* der(cSVGN1.leadLagLim.integrator.y) STATE_DER */ = (data->simulationInfo->realParameter[118] /* cSVGN1.leadLagLim.integrator.k PARAM */) * (data->localData[0]->realVars[64] /* cSVGN1.leadLagLim.add3.y variable */);
  TRACE_POP
}
/*
equation index: 952
type: SIMPLE_ASSIGN
$whenCondition2 = cSVGN1.LagLim.state > cSVGN1.LagLim.outMax and cSVGN1.LagLim.K * cSVGN1.LagLim.u - cSVGN1.LagLim.state < 0.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_952(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,952};
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  RELATIONHYSTERESIS(tmp6, data->localData[0]->realVars[0] /* cSVGN1.LagLim.state STATE(1) */, data->simulationInfo->realParameter[48] /* cSVGN1.LagLim.outMax PARAM */, 16, Greater);
  RELATIONHYSTERESIS(tmp7, (data->simulationInfo->realParameter[44] /* cSVGN1.LagLim.K PARAM */) * (data->localData[0]->realVars[47] /* cSVGN1.LagLim.u variable */) - data->localData[0]->realVars[0] /* cSVGN1.LagLim.state STATE(1) */, 0.0, 17, Less);
  data->localData[0]->booleanVars[1] /* $whenCondition2 DISCRETE */ = (tmp6 && tmp7);
  TRACE_POP
}
/*
equation index: 953
type: SIMPLE_ASSIGN
$whenCondition1 = cSVGN1.LagLim.state < cSVGN1.LagLim.outMin and cSVGN1.LagLim.K * cSVGN1.LagLim.u - cSVGN1.LagLim.state > 0.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_953(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,953};
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  RELATIONHYSTERESIS(tmp8, data->localData[0]->realVars[0] /* cSVGN1.LagLim.state STATE(1) */, data->simulationInfo->realParameter[49] /* cSVGN1.LagLim.outMin PARAM */, 18, Less);
  RELATIONHYSTERESIS(tmp9, (data->simulationInfo->realParameter[44] /* cSVGN1.LagLim.K PARAM */) * (data->localData[0]->realVars[47] /* cSVGN1.LagLim.u variable */) - data->localData[0]->realVars[0] /* cSVGN1.LagLim.state STATE(1) */, 0.0, 19, Greater);
  data->localData[0]->booleanVars[0] /* $whenCondition1 DISCRETE */ = (tmp8 && tmp9);
  TRACE_POP
}
/*
equation index: 954
type: SIMPLE_ASSIGN
cSVGN1.P = (-pwLine1.vr.re) * cSVGN1.p.ir - pwLine1.vr.im * cSVGN1.p.ii
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_954(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,954};
  data->localData[0]->realVars[49] /* cSVGN1.P variable */ = ((-data->localData[0]->realVars[128] /* pwLine1.vr.re variable */)) * (data->localData[0]->realVars[68] /* cSVGN1.p.ir variable */) - ((data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[67] /* cSVGN1.p.ii variable */));
  TRACE_POP
}
/*
equation index: 955
type: SIMPLE_ASSIGN
cSVGN1.Q = pwLine1.vr.re * cSVGN1.p.ii - pwLine1.vr.im * cSVGN1.p.ir
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_955(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,955};
  data->localData[0]->realVars[50] /* cSVGN1.Q variable */ = (data->localData[0]->realVars[128] /* pwLine1.vr.re variable */) * (data->localData[0]->realVars[67] /* cSVGN1.p.ii variable */) - ((data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[68] /* cSVGN1.p.ir variable */));
  TRACE_POP
}
/*
equation index: 956
type: SIMPLE_ASSIGN
pwLine2.P12 = (pwLine1.vr.re * pwLine2.is.re + pwLine1.vr.im * pwLine2.is.im) * pwLine2.S_b
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_956(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,956};
  data->localData[0]->realVars[131] /* pwLine2.P12 variable */ = ((data->localData[0]->realVars[128] /* pwLine1.vr.re variable */) * (data->localData[0]->realVars[138] /* pwLine2.is.re variable */) + (data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[137] /* pwLine2.is.im variable */)) * (data->simulationInfo->realParameter[309] /* pwLine2.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 957
type: SIMPLE_ASSIGN
pwLine2.Q12 = (pwLine1.vr.im * pwLine2.is.re - pwLine1.vr.re * pwLine2.is.im) * pwLine2.S_b
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_957(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,957};
  data->localData[0]->realVars[133] /* pwLine2.Q12 variable */ = ((data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[138] /* pwLine2.is.re variable */) - ((data->localData[0]->realVars[128] /* pwLine1.vr.re variable */) * (data->localData[0]->realVars[137] /* pwLine2.is.im variable */))) * (data->simulationInfo->realParameter[309] /* pwLine2.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 958
type: SIMPLE_ASSIGN
pwLine2.P21 = ((-pwLine2.vr.re) * pwLine2.ir.re - pwLine2.vr.im * pwLine2.ir.im) * pwLine2.S_b
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_958(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,958};
  data->localData[0]->realVars[132] /* pwLine2.P21 variable */ = (((-data->localData[0]->realVars[140] /* pwLine2.vr.re variable */)) * (data->localData[0]->realVars[136] /* pwLine2.ir.re variable */) - ((data->localData[0]->realVars[139] /* pwLine2.vr.im variable */) * (data->localData[0]->realVars[135] /* pwLine2.ir.im variable */))) * (data->simulationInfo->realParameter[309] /* pwLine2.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 959
type: SIMPLE_ASSIGN
pwLine2.Q21 = (pwLine2.vr.re * pwLine2.ir.im - pwLine2.vr.im * pwLine2.ir.re) * pwLine2.S_b
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_959(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,959};
  data->localData[0]->realVars[134] /* pwLine2.Q21 variable */ = ((data->localData[0]->realVars[140] /* pwLine2.vr.re variable */) * (data->localData[0]->realVars[135] /* pwLine2.ir.im variable */) - ((data->localData[0]->realVars[139] /* pwLine2.vr.im variable */) * (data->localData[0]->realVars[136] /* pwLine2.ir.re variable */))) * (data->simulationInfo->realParameter[309] /* pwLine2.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 960
type: SIMPLE_ASSIGN
pwLine4.P21 = ((-pwLine2.vr.re) * pwLine4.ir.re - pwLine2.vr.im * pwLine4.ir.im) * pwLine4.S_b
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_960(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,960};
  data->localData[0]->realVars[152] /* pwLine4.P21 variable */ = (((-data->localData[0]->realVars[140] /* pwLine2.vr.re variable */)) * (data->localData[0]->realVars[156] /* pwLine4.ir.re variable */) - ((data->localData[0]->realVars[139] /* pwLine2.vr.im variable */) * (data->localData[0]->realVars[155] /* pwLine4.ir.im variable */))) * (data->simulationInfo->realParameter[331] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 961
type: SIMPLE_ASSIGN
pwLine4.Q21 = (pwLine2.vr.re * pwLine4.ir.im - pwLine2.vr.im * pwLine4.ir.re) * pwLine4.S_b
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_961(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,961};
  data->localData[0]->realVars[154] /* pwLine4.Q21 variable */ = ((data->localData[0]->realVars[140] /* pwLine2.vr.re variable */) * (data->localData[0]->realVars[155] /* pwLine4.ir.im variable */) - ((data->localData[0]->realVars[139] /* pwLine2.vr.im variable */) * (data->localData[0]->realVars[156] /* pwLine4.ir.re variable */))) * (data->simulationInfo->realParameter[331] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 962
type: SIMPLE_ASSIGN
GEN2.V = sqrt(pwLine2.vr.re ^ 2.0 + pwLine2.vr.im ^ 2.0)
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_962(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,962};
  modelica_real tmp10;
  modelica_real tmp11;
  tmp10 = data->localData[0]->realVars[140] /* pwLine2.vr.re variable */;
  tmp11 = data->localData[0]->realVars[139] /* pwLine2.vr.im variable */;
  data->localData[0]->realVars[36] /* GEN2.V variable */ = sqrt((tmp10 * tmp10) + (tmp11 * tmp11));
  TRACE_POP
}
/*
equation index: 963
type: SIMPLE_ASSIGN
gENCLS.V = GEN2.V
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_963(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,963};
  data->localData[0]->realVars[82] /* gENCLS.V variable */ = data->localData[0]->realVars[36] /* GEN2.V variable */;
  TRACE_POP
}
/*
equation index: 964
type: SIMPLE_ASSIGN
gENCLS.anglev = atan2(pwLine2.vr.im, pwLine2.vr.re)
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_964(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,964};
  data->localData[0]->realVars[83] /* gENCLS.anglev variable */ = atan2(data->localData[0]->realVars[139] /* pwLine2.vr.im variable */, data->localData[0]->realVars[140] /* pwLine2.vr.re variable */);
  TRACE_POP
}
/*
equation index: 965
type: SIMPLE_ASSIGN
GEN2.angle = 57.29577951308232 * gENCLS.anglev
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_965(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,965};
  data->localData[0]->realVars[37] /* GEN2.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[83] /* gENCLS.anglev variable */);
  TRACE_POP
}
/*
equation index: 966
type: SIMPLE_ASSIGN
gENCLS.P = (-pwLine2.vr.re) * gENCLS.p.ir - pwLine2.vr.im * gENCLS.p.ii
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_966(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,966};
  data->localData[0]->realVars[80] /* gENCLS.P variable */ = ((-data->localData[0]->realVars[140] /* pwLine2.vr.re variable */)) * (data->localData[0]->realVars[88] /* gENCLS.p.ir variable */) - ((data->localData[0]->realVars[139] /* pwLine2.vr.im variable */) * (data->localData[0]->realVars[87] /* gENCLS.p.ii variable */));
  TRACE_POP
}
/*
equation index: 967
type: SIMPLE_ASSIGN
gENCLS.Q = pwLine2.vr.re * gENCLS.p.ii - pwLine2.vr.im * gENCLS.p.ir
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_967(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,967};
  data->localData[0]->realVars[81] /* gENCLS.Q variable */ = (data->localData[0]->realVars[140] /* pwLine2.vr.re variable */) * (data->localData[0]->realVars[87] /* gENCLS.p.ii variable */) - ((data->localData[0]->realVars[139] /* pwLine2.vr.im variable */) * (data->localData[0]->realVars[88] /* gENCLS.p.ir variable */));
  TRACE_POP
}
/*
equation index: 970
type: ALGORITHM

  assert(cSVGN1.leadLagLim.limiter.uMax >= cSVGN1.leadLagLim.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(cSVGN1.leadLagLim.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(cSVGN1.leadLagLim.limiter.uMin, 6, 0, true) + ")");
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_970(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,970};
  modelica_boolean tmp12;
  static const MMC_DEFSTRINGLIT(tmp13,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp14;
  static const MMC_DEFSTRINGLIT(tmp15,11,") < uMin (=");
  modelica_string tmp16;
  static int tmp17 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp12 = GreaterEq(data->simulationInfo->realParameter[120] /* cSVGN1.leadLagLim.limiter.uMax PARAM */,data->simulationInfo->realParameter[121] /* cSVGN1.leadLagLim.limiter.uMin PARAM */);
    if(!tmp12)
    {
      tmp14 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[120] /* cSVGN1.leadLagLim.limiter.uMax PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp13),tmp14);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp15));
      tmp16 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[121] /* cSVGN1.leadLagLim.limiter.uMin PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp16);
      tmpMeta[3] = stringAppend(tmpMeta[2],(modelica_string) mmc_strings_len1[41]);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.3/Blocks/Nonlinear.mo",22,9,23,65,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ncSVGN1.leadLagLim.limiter.uMax >= cSVGN1.leadLagLim.limiter.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta[3]));
      }
    }
  }
  TRACE_POP
}
/*
equation index: 968
type: WHEN

when {$whenCondition2} then
  reinit(cSVGN1.LagLim.state,  cSVGN1.LagLim.outMax);
end when;
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_968(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,968};
  if((data->localData[0]->booleanVars[1] /* $whenCondition2 DISCRETE */ && !data->simulationInfo->booleanVarsPre[1] /* $whenCondition2 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[0] /* cSVGN1.LagLim.state STATE(1) */ = data->simulationInfo->realParameter[48] /* cSVGN1.LagLim.outMax PARAM */;
    infoStreamPrint(LOG_EVENTS, 0, "reinit cSVGN1.LagLim.state = %g", data->localData[0]->realVars[0] /* cSVGN1.LagLim.state STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  else if((data->localData[0]->booleanVars[0] /* $whenCondition1 DISCRETE */ && !data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[0] /* cSVGN1.LagLim.state STATE(1) */ = data->simulationInfo->realParameter[49] /* cSVGN1.LagLim.outMin PARAM */;
    infoStreamPrint(LOG_EVENTS, 0, "reinit cSVGN1.LagLim.state = %g", data->localData[0]->realVars[0] /* cSVGN1.LagLim.state STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Banks_PSSE_CSVGN1_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_DAE);
#endif

  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_functionLocalKnownVars(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_762(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_763(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_764(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_765(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_766(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_767(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_768(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_769(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_770(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_771(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_772(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_909(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_910(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_911(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_912(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_913(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_914(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_915(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_916(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_917(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_918(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_919(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_920(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_921(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_922(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_923(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_924(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_925(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_926(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_927(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_928(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_929(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_930(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_931(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_932(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_933(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_934(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_935(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_936(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_937(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_938(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_939(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_940(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_941(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_942(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_943(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_944(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_945(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_946(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_947(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_948(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_949(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_950(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_951(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_952(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_953(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_954(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_955(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_956(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_957(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_958(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_959(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_960(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_961(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_962(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_963(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_964(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_965(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_966(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_967(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_970(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_968(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_DAE);
#endif
  TRACE_POP
  return 0;
}


int OpenIPSL_Examples_Banks_PSSE_CSVGN1_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/* forwarded equations */
extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_762(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_763(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_764(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_765(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_766(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_767(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_768(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_769(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_770(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_771(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_772(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_909(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_911(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_912(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_913(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_916(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_917(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_918(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_948(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_949(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_950(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_951(DATA* data, threadData_t *threadData);

static void functionODE_system0(DATA *data, threadData_t *threadData)
{
    OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_762(data, threadData);

    OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_763(data, threadData);

    OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_764(data, threadData);

    OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_765(data, threadData);

    OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_766(data, threadData);

    OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_767(data, threadData);

    OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_768(data, threadData);

    OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_769(data, threadData);

    OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_770(data, threadData);

    OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_771(data, threadData);

    OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_772(data, threadData);

    OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_909(data, threadData);

    OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_911(data, threadData);

    OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_912(data, threadData);

    OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_913(data, threadData);

    OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_916(data, threadData);

    OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_917(data, threadData);

    OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_918(data, threadData);

    OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_948(data, threadData);

    OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_949(data, threadData);

    OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_950(data, threadData);

    OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_951(data, threadData);
}

int OpenIPSL_Examples_Banks_PSSE_CSVGN1_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_FUNCTION_ODE);
#endif

  
  data->simulationInfo->callStatistics.functionODE++;
  
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_functionLocalKnownVars(data, threadData);
  functionODE_system0(data, threadData);

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_FUNCTION_ODE);
#endif

  TRACE_POP
  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char**argv, DATA *data, threadData_t *threadData);

#include "OpenIPSL.Examples.Banks.PSSE.CSVGN1_12jac.h"
#include "OpenIPSL.Examples.Banks.PSSE.CSVGN1_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks OpenIPSL_Examples_Banks_PSSE_CSVGN1_callback = {
   (int (*)(DATA *, threadData_t *, void *)) OpenIPSL_Examples_Banks_PSSE_CSVGN1_performSimulation,
   (int (*)(DATA *, threadData_t *, void *)) OpenIPSL_Examples_Banks_PSSE_CSVGN1_performQSSSimulation,
   OpenIPSL_Examples_Banks_PSSE_CSVGN1_updateContinuousSystem,
   OpenIPSL_Examples_Banks_PSSE_CSVGN1_callExternalObjectDestructors,
   OpenIPSL_Examples_Banks_PSSE_CSVGN1_initialNonLinearSystem,
   NULL,
   NULL,
   #if !defined(OMC_NO_STATESELECTION)
   OpenIPSL_Examples_Banks_PSSE_CSVGN1_initializeStateSets,
   #else
   NULL,
   #endif
   OpenIPSL_Examples_Banks_PSSE_CSVGN1_initializeDAEmodeData,
   OpenIPSL_Examples_Banks_PSSE_CSVGN1_functionODE,
   OpenIPSL_Examples_Banks_PSSE_CSVGN1_functionAlgebraics,
   OpenIPSL_Examples_Banks_PSSE_CSVGN1_functionDAE,
   OpenIPSL_Examples_Banks_PSSE_CSVGN1_functionLocalKnownVars,
   OpenIPSL_Examples_Banks_PSSE_CSVGN1_input_function,
   OpenIPSL_Examples_Banks_PSSE_CSVGN1_input_function_init,
   OpenIPSL_Examples_Banks_PSSE_CSVGN1_input_function_updateStartValues,
   OpenIPSL_Examples_Banks_PSSE_CSVGN1_data_function,
   OpenIPSL_Examples_Banks_PSSE_CSVGN1_output_function,
   OpenIPSL_Examples_Banks_PSSE_CSVGN1_setc_function,
   OpenIPSL_Examples_Banks_PSSE_CSVGN1_function_storeDelayed,
   OpenIPSL_Examples_Banks_PSSE_CSVGN1_updateBoundVariableAttributes,
   OpenIPSL_Examples_Banks_PSSE_CSVGN1_functionInitialEquations,
   1, /* useHomotopy - 0: local homotopy (equidistant lambda), 1: global homotopy (equidistant lambda), 2: new global homotopy approach (adaptive lambda), 3: new local homotopy approach (adaptive lambda)*/
   OpenIPSL_Examples_Banks_PSSE_CSVGN1_functionInitialEquations_lambda0,
   OpenIPSL_Examples_Banks_PSSE_CSVGN1_functionRemovedInitialEquations,
   OpenIPSL_Examples_Banks_PSSE_CSVGN1_updateBoundParameters,
   OpenIPSL_Examples_Banks_PSSE_CSVGN1_checkForAsserts,
   OpenIPSL_Examples_Banks_PSSE_CSVGN1_function_ZeroCrossingsEquations,
   OpenIPSL_Examples_Banks_PSSE_CSVGN1_function_ZeroCrossings,
   OpenIPSL_Examples_Banks_PSSE_CSVGN1_function_updateRelations,
   OpenIPSL_Examples_Banks_PSSE_CSVGN1_zeroCrossingDescription,
   OpenIPSL_Examples_Banks_PSSE_CSVGN1_relationDescription,
   OpenIPSL_Examples_Banks_PSSE_CSVGN1_function_initSample,
   OpenIPSL_Examples_Banks_PSSE_CSVGN1_INDEX_JAC_A,
   OpenIPSL_Examples_Banks_PSSE_CSVGN1_INDEX_JAC_B,
   OpenIPSL_Examples_Banks_PSSE_CSVGN1_INDEX_JAC_C,
   OpenIPSL_Examples_Banks_PSSE_CSVGN1_INDEX_JAC_D,
   OpenIPSL_Examples_Banks_PSSE_CSVGN1_INDEX_JAC_F,
   OpenIPSL_Examples_Banks_PSSE_CSVGN1_initialAnalyticJacobianA,
   OpenIPSL_Examples_Banks_PSSE_CSVGN1_initialAnalyticJacobianB,
   OpenIPSL_Examples_Banks_PSSE_CSVGN1_initialAnalyticJacobianC,
   OpenIPSL_Examples_Banks_PSSE_CSVGN1_initialAnalyticJacobianD,
   OpenIPSL_Examples_Banks_PSSE_CSVGN1_initialAnalyticJacobianF,
   OpenIPSL_Examples_Banks_PSSE_CSVGN1_functionJacA_column,
   OpenIPSL_Examples_Banks_PSSE_CSVGN1_functionJacB_column,
   OpenIPSL_Examples_Banks_PSSE_CSVGN1_functionJacC_column,
   OpenIPSL_Examples_Banks_PSSE_CSVGN1_functionJacD_column,
   OpenIPSL_Examples_Banks_PSSE_CSVGN1_functionJacF_column,
   OpenIPSL_Examples_Banks_PSSE_CSVGN1_linear_model_frame,
   OpenIPSL_Examples_Banks_PSSE_CSVGN1_linear_model_datarecovery_frame,
   OpenIPSL_Examples_Banks_PSSE_CSVGN1_mayer,
   OpenIPSL_Examples_Banks_PSSE_CSVGN1_lagrange,
   OpenIPSL_Examples_Banks_PSSE_CSVGN1_pickUpBoundsForInputsInOptimization,
   OpenIPSL_Examples_Banks_PSSE_CSVGN1_setInputData,
   OpenIPSL_Examples_Banks_PSSE_CSVGN1_getTimeGrid,
   OpenIPSL_Examples_Banks_PSSE_CSVGN1_symbolicInlineSystem,
   OpenIPSL_Examples_Banks_PSSE_CSVGN1_function_initSynchronous,
   OpenIPSL_Examples_Banks_PSSE_CSVGN1_function_updateSynchronous,
   OpenIPSL_Examples_Banks_PSSE_CSVGN1_function_equationsSynchronous,
   OpenIPSL_Examples_Banks_PSSE_CSVGN1_inputNames,
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
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &OpenIPSL_Examples_Banks_PSSE_CSVGN1_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "OpenIPSL.Examples.Banks.PSSE.CSVGN1";
  data->modelData->modelFilePrefix = "OpenIPSL.Examples.Banks.PSSE.CSVGN1";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/OpenIPSL/OpenIPSL/Examples/Banks/PSSE";
  data->modelData->modelGUID = "{ed87d6cf-b5e9-454a-b1a6-060caacbc33d}";
  #if defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME)
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  #else
  #if defined(_MSC_VER) /* handle joke compilers */
  {
  /* for MSVC we encode a string like char x[] = {'a', 'b', 'c', '\0'} */
  /* because the string constant limit is 65535 bytes */
  static const char contents_init[] =
    #include "OpenIPSL.Examples.Banks.PSSE.CSVGN1_init.c"
    ;
  static const char contents_info[] =
    #include "OpenIPSL.Examples.Banks.PSSE.CSVGN1_info.c"
    ;
    data->modelData->initXMLData = contents_init;
    data->modelData->modelDataXml.infoXMLData = contents_info;
  }
  #else /* handle real compilers */
  data->modelData->initXMLData =
  #include "OpenIPSL.Examples.Banks.PSSE.CSVGN1_init.c"
    ;
  data->modelData->modelDataXml.infoXMLData =
  #include "OpenIPSL.Examples.Banks.PSSE.CSVGN1_info.c"
    ;
  #endif /* defined(_MSC_VER) */
  #endif /* defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME) */
  data->modelData->runTestsuite = 0;
  
  data->modelData->nStates = 10;
  data->modelData->nVariablesReal = 159;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesInteger = 0;
  data->modelData->nVariablesBoolean = 3;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 339;
  data->modelData->nParametersInteger = 12;
  data->modelData->nParametersBoolean = 82;
  data->modelData->nParametersString = 0;
  data->modelData->nInputVars = 0;
  data->modelData->nOutputVars = 0;
  
  data->modelData->nAliasReal = 98;
  data->modelData->nAliasInteger = 0;
  data->modelData->nAliasBoolean = 0;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 27;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 22;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  
  data->modelData->modelDataXml.fileName = "OpenIPSL.Examples.Banks.PSSE.CSVGN1_info.json";
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 6;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 1260;
  data->modelData->nMixedSystems = 0;
  data->modelData->nLinearSystems = 0;
  data->modelData->nNonLinearSystems = 3;
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
  
    OpenIPSL_Examples_Banks_PSSE_CSVGN1_setupDataStruc(&data, threadData);
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


