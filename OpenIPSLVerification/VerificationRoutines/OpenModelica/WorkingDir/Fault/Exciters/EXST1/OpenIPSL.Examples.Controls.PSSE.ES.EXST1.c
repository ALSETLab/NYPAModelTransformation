/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "OpenIPSL.Examples.Controls.PSSE.ES.EXST1_model.h"
#include "simulation/solver/events.h"

#define prefixedName_performSimulation OpenIPSL_Examples_Controls_PSSE_ES_EXST1_performSimulation
#define prefixedName_updateContinuousSystem OpenIPSL_Examples_Controls_PSSE_ES_EXST1_updateContinuousSystem
#include <simulation/solver/perform_simulation.c>

#define prefixedName_performQSSSimulation OpenIPSL_Examples_Controls_PSSE_ES_EXST1_performQSSSimulation
#include <simulation/solver/perform_qss_simulation.c>

/* dummy VARINFO and FILEINFO */
const FILE_INFO dummyFILE_INFO = omc_dummyFileInfo;
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/*
equation index: 660
type: SIMPLE_ASSIGN
eXST1_1._EFD0 = gENROE.efd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_660(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,660};
  data->localData[0]->realVars[58] /* eXST1_1.EFD0 variable */ = data->simulationInfo->realParameter[224];
  TRACE_POP
}
/*
equation index: 661
type: SIMPLE_ASSIGN
der(gENCLS._delta) = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_661(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,661};
  data->localData[0]->realVars[16] /* der(gENCLS.delta) STATE_DER */ = 0.0;
  TRACE_POP
}
/*
equation index: 662
type: SIMPLE_ASSIGN
der(gENCLS._eq) = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_662(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,662};
  data->localData[0]->realVars[17] /* der(gENCLS.eq) STATE_DER */ = 0.0;
  TRACE_POP
}
/*
equation index: 663
type: SIMPLE_ASSIGN
gENROE._PSIppd = gENROE.Epq * gENROE.K3d + gENROE.PSIkd * gENROE.K4d
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_663(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,663};
  data->localData[0]->realVars[86] /* gENROE.PSIppd variable */ = (data->localData[0]->realVars[7] /* gENROE.Epq STATE(1) */) * (data->simulationInfo->realParameter[174]) + (data->localData[0]->realVars[8] /* gENROE.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[176]);
  TRACE_POP
}
/*
equation index: 664
type: SIMPLE_ASSIGN
gENROE._PSIppq = gENROE.PSIkq * gENROE.K4q + gENROE.Epd * gENROE.K3q
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_664(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,664};
  data->localData[0]->realVars[87] /* gENROE.PSIppq variable */ = (data->localData[0]->realVars[9] /* gENROE.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[177]) + (data->localData[0]->realVars[6] /* gENROE.Epd STATE(1) */) * (data->simulationInfo->realParameter[175]);
  TRACE_POP
}
/*
equation index: 665
type: SIMPLE_ASSIGN
gENROE._PSIpp = sqrt(gENROE.PSIppd ^ 2.0 + gENROE.PSIppq ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_665(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,665};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[86] /* gENROE.PSIppd variable */;
  tmp1 = data->localData[0]->realVars[87] /* gENROE.PSIppq variable */;
  data->localData[0]->realVars[85] /* gENROE.PSIpp variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 666
type: SIMPLE_ASSIGN
$cse5 = OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_666(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,666};
  data->localData[0]->realVars[27] /* $cse5 variable */ = omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[85] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[194], data->simulationInfo->realParameter[195], 1.0, 1.2);
  TRACE_POP
}
/*
equation index: 667
type: SIMPLE_ASSIGN
der(gENROE._delta) = gENROE.w_b * gENROE.w
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_667(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,667};
  data->localData[0]->realVars[22] /* der(gENROE.delta) STATE_DER */ = (data->simulationInfo->realParameter[238]) * (data->localData[0]->realVars[11] /* gENROE.w STATE(1) */);
  TRACE_POP
}
/*
equation index: 668
type: SIMPLE_ASSIGN
eXST1_1._imLeadLag._TF._x[1] = eXST1_1.imLeadLag.TF.x_scaled[1] / eXST1_1.imLeadLag.TF.a_end
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_668(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,668};
  data->localData[0]->realVars[67] /* eXST1_1.imLeadLag.TF.x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[3] /* eXST1_1.imLeadLag.TF.x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[119],"eXST1_1.imLeadLag.TF.a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 669
type: SIMPLE_ASSIGN
$cse7 = cos(gENROE.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_669(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,669};
  data->localData[0]->realVars[29] /* $cse7 variable */ = cos(data->localData[0]->realVars[10] /* gENROE.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 670
type: SIMPLE_ASSIGN
$cse6 = sin(gENROE.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_670(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,670};
  data->localData[0]->realVars[28] /* $cse6 variable */ = sin(data->localData[0]->realVars[10] /* gENROE.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 671
type: SIMPLE_ASSIGN
$cse2 = cos(gENCLS.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_671(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,671};
  data->localData[0]->realVars[25] /* $cse2 variable */ = cos(data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 672
type: SIMPLE_ASSIGN
$cse1 = sin(gENCLS.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_672(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,672};
  data->localData[0]->realVars[24] /* $cse1 variable */ = sin(data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */);
  TRACE_POP
}
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_673(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_674(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_675(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_676(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_677(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_678(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_679(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_680(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_681(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_682(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_683(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_684(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_685(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_686(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_687(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_688(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_689(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_690(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_691(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_692(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_693(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_694(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_695(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_717(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_716(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_715(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_714(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_713(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_712(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_711(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_710(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_709(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_708(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_707(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_706(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_705(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_704(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_703(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_702(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_701(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_700(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_699(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_698(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_697(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_696(DATA*, threadData_t*);
/*
equation index: 763
indexNonlinear: 2
type: NONLINEAR

vars: {constantLoad._p._ir, pwLine3._is._re, pwLine1._is._im, pwLine3._is._im, pwLine._ir._im, pwLine3._ir._re, pwLine4._is._re, pwLine3._ir._im, pwLine4._is._im, pwLine1._is._re, pwLine1._ir._re, pwLine1._ir._im, gENCLS._id, gENCLS._iq, pwLine1._vr._re, pwLine1._vr._im, gENROE._iq, gENROE._id, pwLine1._vs._im, pwLine1._vs._re, pwLine3._vr._im, pwLine3._vr._re}
eqns: {673, 674, 675, 676, 677, 678, 679, 680, 681, 682, 683, 684, 685, 686, 687, 688, 689, 690, 691, 692, 693, 694, 695, 717, 716, 715, 714, 713, 712, 711, 710, 709, 708, 707, 706, 705, 704, 703, 702, 701, 700, 699, 698, 697, 696}
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_763(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,763};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 763 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[0] = data->localData[0]->realVars[52] /* constantLoad.p.ir variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[1] = data->localData[0]->realVars[129] /* pwLine3.is.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[2] = data->localData[0]->realVars[116] /* pwLine1.is.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[3] = data->localData[0]->realVars[128] /* pwLine3.is.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[4] = data->localData[0]->realVars[104] /* pwLine.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[5] = data->localData[0]->realVars[127] /* pwLine3.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[6] = data->localData[0]->realVars[139] /* pwLine4.is.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[7] = data->localData[0]->realVars[126] /* pwLine3.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[8] = data->localData[0]->realVars[138] /* pwLine4.is.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[9] = data->localData[0]->realVars[117] /* pwLine1.is.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[10] = data->localData[0]->realVars[115] /* pwLine1.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[11] = data->localData[0]->realVars[114] /* pwLine1.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[12] = data->localData[0]->realVars[74] /* gENCLS.id variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[13] = data->localData[0]->realVars[75] /* gENCLS.iq variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[14] = data->localData[0]->realVars[119] /* pwLine1.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[15] = data->localData[0]->realVars[118] /* pwLine1.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[16] = data->localData[0]->realVars[95] /* gENROE.iq variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[17] = data->localData[0]->realVars[94] /* gENROE.id variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[18] = data->localData[0]->realVars[120] /* pwLine1.vs.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[19] = data->localData[0]->realVars[121] /* pwLine1.vs.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[20] = data->localData[0]->realVars[130] /* pwLine3.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[21] = data->localData[0]->realVars[131] /* pwLine3.vr.re variable */;
  retValue = solve_nonlinear_system(data, threadData, 2);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,763};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 763 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[52] /* constantLoad.p.ir variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[0];
  data->localData[0]->realVars[129] /* pwLine3.is.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[1];
  data->localData[0]->realVars[116] /* pwLine1.is.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[2];
  data->localData[0]->realVars[128] /* pwLine3.is.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[3];
  data->localData[0]->realVars[104] /* pwLine.ir.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[4];
  data->localData[0]->realVars[127] /* pwLine3.ir.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[5];
  data->localData[0]->realVars[139] /* pwLine4.is.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[6];
  data->localData[0]->realVars[126] /* pwLine3.ir.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[7];
  data->localData[0]->realVars[138] /* pwLine4.is.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[8];
  data->localData[0]->realVars[117] /* pwLine1.is.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[9];
  data->localData[0]->realVars[115] /* pwLine1.ir.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[10];
  data->localData[0]->realVars[114] /* pwLine1.ir.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[11];
  data->localData[0]->realVars[74] /* gENCLS.id variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[12];
  data->localData[0]->realVars[75] /* gENCLS.iq variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[13];
  data->localData[0]->realVars[119] /* pwLine1.vr.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[14];
  data->localData[0]->realVars[118] /* pwLine1.vr.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[15];
  data->localData[0]->realVars[95] /* gENROE.iq variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[16];
  data->localData[0]->realVars[94] /* gENROE.id variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[17];
  data->localData[0]->realVars[120] /* pwLine1.vs.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[18];
  data->localData[0]->realVars[121] /* pwLine1.vs.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[19];
  data->localData[0]->realVars[130] /* pwLine3.vr.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[20];
  data->localData[0]->realVars[131] /* pwLine3.vr.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[21];
  TRACE_POP
}
/*
equation index: 764
type: SIMPLE_ASSIGN
LOAD._V = constantLoad.v
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_764(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,764};
  data->localData[0]->realVars[42] /* LOAD.V variable */ = data->localData[0]->realVars[53] /* constantLoad.v variable */;
  TRACE_POP
}
/*
equation index: 765
type: SIMPLE_ASSIGN
FAULT._V = sqrt(pwLine3.vr.re ^ 2.0 + pwLine3.vr.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_765(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,765};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[131] /* pwLine3.vr.re variable */;
  tmp1 = data->localData[0]->realVars[130] /* pwLine3.vr.im variable */;
  data->localData[0]->realVars[30] /* FAULT.V variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 766
type: SIMPLE_ASSIGN
$cse4 = atan2(pwLine3.vr.im, pwLine3.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_766(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,766};
  data->localData[0]->realVars[26] /* $cse4 variable */ = atan2(data->localData[0]->realVars[130] /* pwLine3.vr.im variable */, data->localData[0]->realVars[131] /* pwLine3.vr.re variable */);
  TRACE_POP
}
/*
equation index: 767
type: SIMPLE_ASSIGN
FAULT._angle = 57.29577951308232 * $cse4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_767(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,767};
  data->localData[0]->realVars[31] /* FAULT.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[26] /* $cse4 variable */);
  TRACE_POP
}
/*
equation index: 768
type: SIMPLE_ASSIGN
pwLine4._P12 = (pwLine3.vr.re * pwLine4.is.re + pwLine3.vr.im * pwLine4.is.im) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_768(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,768};
  data->localData[0]->realVars[132] /* pwLine4.P12 variable */ = ((data->localData[0]->realVars[131] /* pwLine3.vr.re variable */) * (data->localData[0]->realVars[139] /* pwLine4.is.re variable */) + (data->localData[0]->realVars[130] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[138] /* pwLine4.is.im variable */)) * (data->simulationInfo->realParameter[279]);
  TRACE_POP
}
/*
equation index: 769
type: SIMPLE_ASSIGN
pwLine4._Q12 = (pwLine3.vr.im * pwLine4.is.re - pwLine3.vr.re * pwLine4.is.im) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_769(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,769};
  data->localData[0]->realVars[134] /* pwLine4.Q12 variable */ = ((data->localData[0]->realVars[130] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[139] /* pwLine4.is.re variable */) - ((data->localData[0]->realVars[131] /* pwLine3.vr.re variable */) * (data->localData[0]->realVars[138] /* pwLine4.is.im variable */))) * (data->simulationInfo->realParameter[279]);
  TRACE_POP
}
/*
equation index: 770
type: SIMPLE_ASSIGN
pwLine3._P21 = ((-pwLine3.vr.re) * pwLine3.ir.re - pwLine3.vr.im * pwLine3.ir.im) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_770(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,770};
  data->localData[0]->realVars[123] /* pwLine3.P21 variable */ = (((-data->localData[0]->realVars[131] /* pwLine3.vr.re variable */)) * (data->localData[0]->realVars[127] /* pwLine3.ir.re variable */) - ((data->localData[0]->realVars[130] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[126] /* pwLine3.ir.im variable */))) * (data->simulationInfo->realParameter[268]);
  TRACE_POP
}
/*
equation index: 771
type: SIMPLE_ASSIGN
pwLine3._Q21 = (pwLine3.vr.re * pwLine3.ir.im - pwLine3.vr.im * pwLine3.ir.re) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_771(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,771};
  data->localData[0]->realVars[125] /* pwLine3.Q21 variable */ = ((data->localData[0]->realVars[131] /* pwLine3.vr.re variable */) * (data->localData[0]->realVars[126] /* pwLine3.ir.im variable */) - ((data->localData[0]->realVars[130] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[127] /* pwLine3.ir.re variable */))) * (data->simulationInfo->realParameter[268]);
  TRACE_POP
}
/*
equation index: 772
type: SIMPLE_ASSIGN
der(gENROE._PSIkq) = (gENROE.Epd + (gENROE.Xpq - gENROE.Xl) * gENROE.iq - gENROE.PSIkq) / gENROE.Tppq0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_772(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,772};
  data->localData[0]->realVars[21] /* der(gENROE.PSIkq) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[6] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[210] - data->simulationInfo->realParameter[205]) * (data->localData[0]->realVars[95] /* gENROE.iq variable */) - data->localData[0]->realVars[9] /* gENROE.PSIkq STATE(1) */,data->simulationInfo->realParameter[199],"gENROE.Tppq0",equationIndexes);
  TRACE_POP
}
/*
equation index: 773
type: SIMPLE_ASSIGN
gENROE._XaqIlq = gENROE.K1q * (gENROE.Epd + (gENROE.Xpq - gENROE.Xl) * gENROE.iq - gENROE.PSIkq) + gENROE.Epd + gENROE.iq * (gENROE.Xpq - gENROE.Xq) + $cse5 * gENROE.PSIppq * (gENROE.Xq - gENROE.Xl) / (gENROE.Xd - gENROE.Xl)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_773(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,773};
  data->localData[0]->realVars[91] /* gENROE.XaqIlq variable */ = (data->simulationInfo->realParameter[171]) * (data->localData[0]->realVars[6] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[210] - data->simulationInfo->realParameter[205]) * (data->localData[0]->realVars[95] /* gENROE.iq variable */) - data->localData[0]->realVars[9] /* gENROE.PSIkq STATE(1) */) + data->localData[0]->realVars[6] /* gENROE.Epd STATE(1) */ + (data->localData[0]->realVars[95] /* gENROE.iq variable */) * (data->simulationInfo->realParameter[210] - data->simulationInfo->realParameter[211]) + (data->localData[0]->realVars[27] /* $cse5 variable */) * ((data->localData[0]->realVars[87] /* gENROE.PSIppq variable */) * (DIVISION_SIM(data->simulationInfo->realParameter[211] - data->simulationInfo->realParameter[205],data->simulationInfo->realParameter[204] - data->simulationInfo->realParameter[205],"gENROE.Xd - gENROE.Xl",equationIndexes)));
  TRACE_POP
}
/*
equation index: 774
type: SIMPLE_ASSIGN
der(gENROE._Epd) = (-gENROE.XaqIlq) / gENROE.Tpq0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_774(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,774};
  data->localData[0]->realVars[18] /* der(gENROE.Epd) STATE_DER */ = DIVISION_SIM((-data->localData[0]->realVars[91] /* gENROE.XaqIlq variable */),data->simulationInfo->realParameter[200],"gENROE.Tpq0",equationIndexes);
  TRACE_POP
}
/*
equation index: 775
type: SIMPLE_ASSIGN
gENROE._I = sqrt(pwLine.is.im ^ 2.0 + pwLine.is.re ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_775(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,775};
  modelica_real tmp2;
  modelica_real tmp3;
  tmp2 = data->localData[0]->realVars[106] /* pwLine.is.im variable */;
  tmp3 = data->localData[0]->realVars[107] /* pwLine.is.re variable */;
  data->localData[0]->realVars[81] /* gENROE.I variable */ = sqrt((tmp2 * tmp2) + (tmp3 * tmp3));
  TRACE_POP
}
/*
equation index: 776
type: SIMPLE_ASSIGN
gENROE._anglei = atan2(-pwLine.is.im, -pwLine.is.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_776(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,776};
  data->localData[0]->realVars[92] /* gENROE.anglei variable */ = atan2((-data->localData[0]->realVars[106] /* pwLine.is.im variable */), (-data->localData[0]->realVars[107] /* pwLine.is.re variable */));
  TRACE_POP
}
/*
equation index: 777
type: SIMPLE_ASSIGN
der(gENROE._PSIkd) = (gENROE.Epq + (gENROE.Xl - gENROE.Xpd) * gENROE.id - gENROE.PSIkd) / gENROE.Tppd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_777(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,777};
  data->localData[0]->realVars[20] /* der(gENROE.PSIkd) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[7] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[205] - data->simulationInfo->realParameter[206]) * (data->localData[0]->realVars[94] /* gENROE.id variable */) - data->localData[0]->realVars[8] /* gENROE.PSIkd STATE(1) */,data->simulationInfo->realParameter[198],"gENROE.Tppd0",equationIndexes);
  TRACE_POP
}
/*
equation index: 778
type: SIMPLE_ASSIGN
eXST1_1._XADIFD = gENROE.K1d * (gENROE.Epq + (gENROE.Xl - gENROE.Xpd) * gENROE.id - gENROE.PSIkd) + gENROE.Epq + gENROE.id * (gENROE.Xd - gENROE.Xpd) + $cse5 * gENROE.PSIppd
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_778(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,778};
  data->localData[0]->realVars[63] /* eXST1_1.XADIFD variable */ = (data->simulationInfo->realParameter[170]) * (data->localData[0]->realVars[7] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[205] - data->simulationInfo->realParameter[206]) * (data->localData[0]->realVars[94] /* gENROE.id variable */) - data->localData[0]->realVars[8] /* gENROE.PSIkd STATE(1) */) + data->localData[0]->realVars[7] /* gENROE.Epq STATE(1) */ + (data->localData[0]->realVars[94] /* gENROE.id variable */) * (data->simulationInfo->realParameter[204] - data->simulationInfo->realParameter[206]) + (data->localData[0]->realVars[27] /* $cse5 variable */) * (data->localData[0]->realVars[86] /* gENROE.PSIppd variable */);
  TRACE_POP
}
/*
equation index: 779
type: SIMPLE_ASSIGN
gENROE._Te = gENROE.PSId * gENROE.iq - gENROE.PSIq * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_779(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,779};
  data->localData[0]->realVars[90] /* gENROE.Te variable */ = (data->localData[0]->realVars[84] /* gENROE.PSId variable */) * (data->localData[0]->realVars[95] /* gENROE.iq variable */) - ((data->localData[0]->realVars[88] /* gENROE.PSIq variable */) * (data->localData[0]->realVars[94] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 780
type: SIMPLE_ASSIGN
der(gENROE._w) = 0.5 * ((gENROE.pm0 - gENROE.D * gENROE.w) / (1.0 + gENROE.w) - gENROE.Te) / gENROE.H
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_780(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,780};
  data->localData[0]->realVars[23] /* der(gENROE.w) STATE_DER */ = (0.5) * (DIVISION_SIM(DIVISION_SIM(data->simulationInfo->realParameter[231] - ((data->simulationInfo->realParameter[158]) * (data->localData[0]->realVars[11] /* gENROE.w STATE(1) */)),1.0 + data->localData[0]->realVars[11] /* gENROE.w STATE(1) */,"1.0 + gENROE.w",equationIndexes) - data->localData[0]->realVars[90] /* gENROE.Te variable */,data->simulationInfo->realParameter[163],"gENROE.H",equationIndexes));
  TRACE_POP
}
/*
equation index: 781
type: SIMPLE_ASSIGN
gENROE._P = pwLine.vs.im * pwLine.is.im + pwLine.vs.re * pwLine.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_781(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,781};
  data->localData[0]->realVars[82] /* gENROE.P variable */ = (data->localData[0]->realVars[108] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[106] /* pwLine.is.im variable */) + (data->localData[0]->realVars[109] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[107] /* pwLine.is.re variable */);
  TRACE_POP
}
/*
equation index: 782
type: SIMPLE_ASSIGN
gENROE._PELEC = gENROE.P / gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_782(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,782};
  data->localData[0]->realVars[83] /* gENROE.PELEC variable */ = DIVISION_SIM(data->localData[0]->realVars[82] /* gENROE.P variable */,data->simulationInfo->realParameter[157],"gENROE.CoB",equationIndexes);
  TRACE_POP
}
/*
equation index: 783
type: SIMPLE_ASSIGN
gENROE._Q = pwLine.vs.im * pwLine.is.re - pwLine.vs.re * pwLine.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_783(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,783};
  data->localData[0]->realVars[89] /* gENROE.Q variable */ = (data->localData[0]->realVars[108] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[107] /* pwLine.is.re variable */) - ((data->localData[0]->realVars[109] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[106] /* pwLine.is.im variable */));
  TRACE_POP
}
/*
equation index: 784
type: SIMPLE_ASSIGN
eXST1_1._ECOMP = sqrt(pwLine.vs.re ^ 2.0 + pwLine.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_784(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,784};
  modelica_real tmp4;
  modelica_real tmp5;
  tmp4 = data->localData[0]->realVars[109] /* pwLine.vs.re variable */;
  tmp5 = data->localData[0]->realVars[108] /* pwLine.vs.im variable */;
  data->localData[0]->realVars[56] /* eXST1_1.ECOMP variable */ = sqrt((tmp4 * tmp4) + (tmp5 * tmp5));
  TRACE_POP
}
/*
equation index: 785
type: SIMPLE_ASSIGN
der(eXST1_1._TransducerDelay._state) = (eXST1_1.TransducerDelay.K * eXST1_1.ECOMP - eXST1_1.TransducerDelay.state) / eXST1_1.TransducerDelay.T_mod
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_785(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,785};
  data->localData[0]->realVars[12] /* der(eXST1_1.TransducerDelay.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[92]) * (data->localData[0]->realVars[56] /* eXST1_1.ECOMP variable */) - data->localData[0]->realVars[0] /* eXST1_1.TransducerDelay.state STATE(1) */,data->simulationInfo->realParameter[94],"eXST1_1.TransducerDelay.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 786
type: SIMPLE_ASSIGN
eXST1_1._DiffV._u2 = if abs(eXST1_1.TransducerDelay.T) <= 1e-15 then eXST1_1.ECOMP * eXST1_1.TransducerDelay.K else eXST1_1.TransducerDelay.state
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_786(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,786};
  modelica_boolean tmp6;
  tmp6 = LessEq(fabs(data->simulationInfo->realParameter[93]),1e-15);
  data->localData[0]->realVars[54] /* eXST1_1.DiffV.u2 variable */ = (tmp6?(data->localData[0]->realVars[56] /* eXST1_1.ECOMP variable */) * (data->simulationInfo->realParameter[92]):data->localData[0]->realVars[0] /* eXST1_1.TransducerDelay.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 787
type: SIMPLE_ASSIGN
eXST1_1._DiffV._y = eXST1_1.DiffV.k1 * eXST1_1.VoltageReference.k + eXST1_1.DiffV.k2 * eXST1_1.DiffV.u2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_787(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,787};
  data->localData[0]->realVars[55] /* eXST1_1.DiffV.y variable */ = (data->simulationInfo->realParameter[77]) * (data->simulationInfo->realParameter[105]) + (data->simulationInfo->realParameter[78]) * (data->localData[0]->realVars[54] /* eXST1_1.DiffV.u2 variable */);
  TRACE_POP
}
/*
equation index: 788
type: SIMPLE_ASSIGN
eXST1_1._add3_2._y = eXST1_1.add3_2.k1 * const.k + eXST1_1.add3_2.k2 * eXST1_1.DiffV.y + eXST1_1.add3_2.k3 * eXST1_1.Limiters.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_788(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,788};
  data->localData[0]->realVars[64] /* eXST1_1.add3_2.y variable */ = (data->simulationInfo->realParameter[106]) * (data->simulationInfo->realParameter[34]) + (data->simulationInfo->realParameter[107]) * (data->localData[0]->realVars[55] /* eXST1_1.DiffV.y variable */) + (data->simulationInfo->realParameter[108]) * (data->localData[0]->realVars[61] /* eXST1_1.Limiters.y variable */);
  TRACE_POP
}
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_789(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_790(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_791(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_792(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_793(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_794(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_795(DATA*, threadData_t*);
/*
equation index: 803
indexNonlinear: 3
type: NONLINEAR

vars: {eXST1_1._feedback._y}
eqns: {789, 790, 791, 792, 793, 794, 795}
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_803(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,803};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 803 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[0] = data->localData[0]->realVars[65] /* eXST1_1.feedback.y variable */;
  retValue = solve_nonlinear_system(data, threadData, 3);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,803};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 803 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[65] /* eXST1_1.feedback.y variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[0];
  TRACE_POP
}
/*
equation index: 804
type: SIMPLE_ASSIGN
der(eXST1_1._imDerivativeLag._x) = (eXST1_1.Vm1.y - eXST1_1.imDerivativeLag.x) / eXST1_1.imDerivativeLag.T
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_804(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,804};
  data->localData[0]->realVars[14] /* der(eXST1_1.imDerivativeLag.x) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[62] /* eXST1_1.Vm1.y variable */ - data->localData[0]->realVars[2] /* eXST1_1.imDerivativeLag.x STATE(1) */,data->simulationInfo->realParameter[109],"eXST1_1.imDerivativeLag.T",equationIndexes);
  TRACE_POP
}
/*
equation index: 805
type: SIMPLE_ASSIGN
der(eXST1_1._Vm1._state) = (eXST1_1.Vm1.K * eXST1_1.K_a.y - eXST1_1.Vm1.state) / eXST1_1.Vm1.T_mod
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_805(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,805};
  data->localData[0]->realVars[13] /* der(eXST1_1.Vm1.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[101]) * (data->localData[0]->realVars[60] /* eXST1_1.K_a.y variable */) - data->localData[0]->realVars[1] /* eXST1_1.Vm1.state STATE(1) */,data->simulationInfo->realParameter[103],"eXST1_1.Vm1.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 806
type: SIMPLE_ASSIGN
der(eXST1_1._imLeadLag._TF._x_scaled[1]) = (eXST1_1.imLeadLag.TF.a_end * eXST1_1.imLeadLag.u - eXST1_1.imLeadLag.TF.a[2] * eXST1_1.imLeadLag.TF.x_scaled[1]) / eXST1_1.imLeadLag.TF.a[1]
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_806(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,806};
  data->localData[0]->realVars[15] /* der(eXST1_1.imLeadLag.TF.x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[119]) * (data->localData[0]->realVars[69] /* eXST1_1.imLeadLag.u variable */) - ((data->simulationInfo->realParameter[118]) * (data->localData[0]->realVars[3] /* eXST1_1.imLeadLag.TF.x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[117],"eXST1_1.imLeadLag.TF.a[1]",equationIndexes);
  TRACE_POP
}
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_807(DATA*, threadData_t*);
/*
equation index: 808
indexNonlinear: 4
type: NONLINEAR

vars: {eXST1_1._EFD}
eqns: {807}
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_808(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,808};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 808 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[0] = data->localData[0]->realVars[57] /* eXST1_1.EFD variable */;
  retValue = solve_nonlinear_system(data, threadData, 4);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,808};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 808 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[57] /* eXST1_1.EFD variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[0];
  TRACE_POP
}
/*
equation index: 809
type: SIMPLE_ASSIGN
der(gENROE._Epq) = (eXST1_1.EFD - eXST1_1.XADIFD) / gENROE.Tpd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_809(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,809};
  data->localData[0]->realVars[19] /* der(gENROE.Epq) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[57] /* eXST1_1.EFD variable */ - data->localData[0]->realVars[63] /* eXST1_1.XADIFD variable */,data->simulationInfo->realParameter[197],"gENROE.Tpd0",equationIndexes);
  TRACE_POP
}
/*
equation index: 810
type: SIMPLE_ASSIGN
GEN1._V = eXST1_1.ECOMP
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_810(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,810};
  data->localData[0]->realVars[34] /* GEN1.V variable */ = data->localData[0]->realVars[56] /* eXST1_1.ECOMP variable */;
  TRACE_POP
}
/*
equation index: 811
type: SIMPLE_ASSIGN
gENROE._anglev = atan2(pwLine.vs.im, pwLine.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_811(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,811};
  data->localData[0]->realVars[93] /* gENROE.anglev variable */ = atan2(data->localData[0]->realVars[108] /* pwLine.vs.im variable */, data->localData[0]->realVars[109] /* pwLine.vs.re variable */);
  TRACE_POP
}
/*
equation index: 812
type: SIMPLE_ASSIGN
GEN1._angle = 57.29577951308232 * gENROE.anglev
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_812(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,812};
  data->localData[0]->realVars[35] /* GEN1.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[93] /* gENROE.anglev variable */);
  TRACE_POP
}
/*
equation index: 813
type: SIMPLE_ASSIGN
pwLine._Q12 = (pwLine.vs.im * pwLine.is.re - pwLine.vs.re * pwLine.is.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_813(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,813};
  data->localData[0]->realVars[102] /* pwLine.Q12 variable */ = ((data->localData[0]->realVars[108] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[107] /* pwLine.is.re variable */) - ((data->localData[0]->realVars[109] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[106] /* pwLine.is.im variable */))) * (data->simulationInfo->realParameter[246]);
  TRACE_POP
}
/*
equation index: 814
type: SIMPLE_ASSIGN
pwLine._P12 = (pwLine.vs.re * pwLine.is.re + pwLine.vs.im * pwLine.is.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_814(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,814};
  data->localData[0]->realVars[100] /* pwLine.P12 variable */ = ((data->localData[0]->realVars[109] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[107] /* pwLine.is.re variable */) + (data->localData[0]->realVars[108] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[106] /* pwLine.is.im variable */)) * (data->simulationInfo->realParameter[246]);
  TRACE_POP
}
/*
equation index: 815
type: SIMPLE_ASSIGN
pwLine3._P12 = (pwLine1.vs.re * pwLine3.is.re + pwLine1.vs.im * pwLine3.is.im) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_815(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,815};
  data->localData[0]->realVars[122] /* pwLine3.P12 variable */ = ((data->localData[0]->realVars[121] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[129] /* pwLine3.is.re variable */) + (data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[128] /* pwLine3.is.im variable */)) * (data->simulationInfo->realParameter[268]);
  TRACE_POP
}
/*
equation index: 816
type: SIMPLE_ASSIGN
pwLine3._Q12 = (pwLine1.vs.im * pwLine3.is.re - pwLine1.vs.re * pwLine3.is.im) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_816(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,816};
  data->localData[0]->realVars[124] /* pwLine3.Q12 variable */ = ((data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[129] /* pwLine3.is.re variable */) - ((data->localData[0]->realVars[121] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[128] /* pwLine3.is.im variable */))) * (data->simulationInfo->realParameter[268]);
  TRACE_POP
}
/*
equation index: 817
type: SIMPLE_ASSIGN
constantLoad._angle = atan2(pwLine1.vs.im, pwLine1.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_817(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,817};
  data->localData[0]->realVars[48] /* constantLoad.angle variable */ = atan2(data->localData[0]->realVars[120] /* pwLine1.vs.im variable */, data->localData[0]->realVars[121] /* pwLine1.vs.re variable */);
  TRACE_POP
}
/*
equation index: 818
type: SIMPLE_ASSIGN
LOAD._angle = 57.29577951308232 * constantLoad.angle
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_818(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,818};
  data->localData[0]->realVars[43] /* LOAD.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[48] /* constantLoad.angle variable */);
  TRACE_POP
}
/*
equation index: 819
type: SIMPLE_ASSIGN
pwLine._Q21 = (pwLine1.vs.re * pwLine.ir.im - pwLine1.vs.im * pwLine.ir.re) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_819(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,819};
  data->localData[0]->realVars[103] /* pwLine.Q21 variable */ = ((data->localData[0]->realVars[121] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[104] /* pwLine.ir.im variable */) - ((data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[105] /* pwLine.ir.re variable */))) * (data->simulationInfo->realParameter[246]);
  TRACE_POP
}
/*
equation index: 820
type: SIMPLE_ASSIGN
pwLine._P21 = ((-pwLine1.vs.re) * pwLine.ir.re - pwLine1.vs.im * pwLine.ir.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_820(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,820};
  data->localData[0]->realVars[101] /* pwLine.P21 variable */ = (((-data->localData[0]->realVars[121] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[105] /* pwLine.ir.re variable */) - ((data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[104] /* pwLine.ir.im variable */))) * (data->simulationInfo->realParameter[246]);
  TRACE_POP
}
/*
equation index: 821
type: SIMPLE_ASSIGN
pwLine1._P12 = (pwLine1.vs.re * pwLine1.is.re + pwLine1.vs.im * pwLine1.is.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_821(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,821};
  data->localData[0]->realVars[110] /* pwLine1.P12 variable */ = ((data->localData[0]->realVars[121] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[117] /* pwLine1.is.re variable */) + (data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[116] /* pwLine1.is.im variable */)) * (data->simulationInfo->realParameter[257]);
  TRACE_POP
}
/*
equation index: 822
type: SIMPLE_ASSIGN
pwLine1._Q12 = (pwLine1.vs.im * pwLine1.is.re - pwLine1.vs.re * pwLine1.is.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_822(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,822};
  data->localData[0]->realVars[112] /* pwLine1.Q12 variable */ = ((data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[117] /* pwLine1.is.re variable */) - ((data->localData[0]->realVars[121] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[116] /* pwLine1.is.im variable */))) * (data->simulationInfo->realParameter[257]);
  TRACE_POP
}
/*
equation index: 823
type: SIMPLE_ASSIGN
pwLine1._P21 = ((-pwLine1.vr.re) * pwLine1.ir.re - pwLine1.vr.im * pwLine1.ir.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_823(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,823};
  data->localData[0]->realVars[111] /* pwLine1.P21 variable */ = (((-data->localData[0]->realVars[119] /* pwLine1.vr.re variable */)) * (data->localData[0]->realVars[115] /* pwLine1.ir.re variable */) - ((data->localData[0]->realVars[118] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[114] /* pwLine1.ir.im variable */))) * (data->simulationInfo->realParameter[257]);
  TRACE_POP
}
/*
equation index: 824
type: SIMPLE_ASSIGN
pwLine1._Q21 = (pwLine1.vr.re * pwLine1.ir.im - pwLine1.vr.im * pwLine1.ir.re) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_824(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,824};
  data->localData[0]->realVars[113] /* pwLine1.Q21 variable */ = ((data->localData[0]->realVars[119] /* pwLine1.vr.re variable */) * (data->localData[0]->realVars[114] /* pwLine1.ir.im variable */) - ((data->localData[0]->realVars[118] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[115] /* pwLine1.ir.re variable */))) * (data->simulationInfo->realParameter[257]);
  TRACE_POP
}
/*
equation index: 825
type: SIMPLE_ASSIGN
pwLine4._P21 = ((-pwLine1.vr.re) * pwLine4.ir.re - pwLine1.vr.im * pwLine4.ir.im) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_825(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,825};
  data->localData[0]->realVars[133] /* pwLine4.P21 variable */ = (((-data->localData[0]->realVars[119] /* pwLine1.vr.re variable */)) * (data->localData[0]->realVars[137] /* pwLine4.ir.re variable */) - ((data->localData[0]->realVars[118] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[136] /* pwLine4.ir.im variable */))) * (data->simulationInfo->realParameter[279]);
  TRACE_POP
}
/*
equation index: 826
type: SIMPLE_ASSIGN
pwLine4._Q21 = (pwLine1.vr.re * pwLine4.ir.im - pwLine1.vr.im * pwLine4.ir.re) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_826(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,826};
  data->localData[0]->realVars[135] /* pwLine4.Q21 variable */ = ((data->localData[0]->realVars[119] /* pwLine1.vr.re variable */) * (data->localData[0]->realVars[136] /* pwLine4.ir.im variable */) - ((data->localData[0]->realVars[118] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[137] /* pwLine4.ir.re variable */))) * (data->simulationInfo->realParameter[279]);
  TRACE_POP
}
/*
equation index: 827
type: SIMPLE_ASSIGN
gENCLS._P = (-pwLine1.vr.re) * gENCLS.p.ir - pwLine1.vr.im * gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_827(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,827};
  data->localData[0]->realVars[70] /* gENCLS.P variable */ = ((-data->localData[0]->realVars[119] /* pwLine1.vr.re variable */)) * (data->localData[0]->realVars[78] /* gENCLS.p.ir variable */) - ((data->localData[0]->realVars[118] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[77] /* gENCLS.p.ii variable */));
  TRACE_POP
}
/*
equation index: 828
type: SIMPLE_ASSIGN
gENCLS._Q = pwLine1.vr.re * gENCLS.p.ii - pwLine1.vr.im * gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_828(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,828};
  data->localData[0]->realVars[71] /* gENCLS.Q variable */ = (data->localData[0]->realVars[119] /* pwLine1.vr.re variable */) * (data->localData[0]->realVars[77] /* gENCLS.p.ii variable */) - ((data->localData[0]->realVars[118] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[78] /* gENCLS.p.ir variable */));
  TRACE_POP
}
/*
equation index: 829
type: SIMPLE_ASSIGN
GEN2._V = sqrt(pwLine1.vr.re ^ 2.0 + pwLine1.vr.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_829(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,829};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[119] /* pwLine1.vr.re variable */;
  tmp1 = data->localData[0]->realVars[118] /* pwLine1.vr.im variable */;
  data->localData[0]->realVars[38] /* GEN2.V variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 830
type: SIMPLE_ASSIGN
gENCLS._V = GEN2.V
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_830(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,830};
  data->localData[0]->realVars[72] /* gENCLS.V variable */ = data->localData[0]->realVars[38] /* GEN2.V variable */;
  TRACE_POP
}
/*
equation index: 831
type: SIMPLE_ASSIGN
gENCLS._anglev = atan2(pwLine1.vr.im, pwLine1.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_831(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,831};
  data->localData[0]->realVars[73] /* gENCLS.anglev variable */ = atan2(data->localData[0]->realVars[118] /* pwLine1.vr.im variable */, data->localData[0]->realVars[119] /* pwLine1.vr.re variable */);
  TRACE_POP
}
/*
equation index: 832
type: SIMPLE_ASSIGN
GEN2._angle = 57.29577951308232 * gENCLS.anglev
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_832(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,832};
  data->localData[0]->realVars[39] /* GEN2.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[73] /* gENCLS.anglev variable */);
  TRACE_POP
}
/*
equation index: 833
type: ALGORITHM

  assert(eXST1_1.limiter.uMax >= eXST1_1.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(eXST1_1.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(eXST1_1.limiter.uMin, 6, 0, true) + ")");
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_833(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,833};
  modelica_boolean tmp2;
  static const MMC_DEFSTRINGLIT(tmp3,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp4;
  static const MMC_DEFSTRINGLIT(tmp5,11,") < uMin (=");
  modelica_string tmp6;
  static int tmp7 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp2 = GreaterEq(data->simulationInfo->realParameter[129],data->simulationInfo->realParameter[130]);
    if(!tmp2)
    {
      tmp4 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[129], ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp3),tmp4);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp5));
      tmp6 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[130], ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp6);
      tmpMeta[3] = stringAppend(tmpMeta[2],(modelica_string) mmc_strings_len1[41]);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Nonlinear.mo",19,9,20,65,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neXST1_1.limiter.uMax >= eXST1_1.limiter.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta[3]));
      }
    }
  }
  TRACE_POP
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  
  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_functionLocalKnownVars(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_660(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_661(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_662(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_663(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_664(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_665(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_666(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_667(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_668(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_669(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_670(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_671(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_672(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_763(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_764(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_765(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_766(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_767(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_768(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_769(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_770(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_771(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_772(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_773(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_774(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_775(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_776(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_777(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_778(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_779(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_780(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_781(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_782(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_783(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_784(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_785(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_786(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_787(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_788(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_803(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_804(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_805(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_806(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_808(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_809(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_810(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_811(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_812(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_813(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_814(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_815(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_816(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_817(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_818(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_819(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_820(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_821(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_822(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_823(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_824(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_825(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_826(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_827(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_828(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_829(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_830(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_831(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_832(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_833(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}


int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/* forwarded equations */
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_661(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_662(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_663(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_664(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_665(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_666(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_667(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_668(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_669(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_670(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_671(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_672(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_763(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_772(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_773(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_774(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_777(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_778(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_779(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_780(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_784(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_785(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_786(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_787(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_788(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_803(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_804(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_805(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_806(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_808(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_809(DATA* data, threadData_t *threadData);

static void functionODE_system0(DATA *data, threadData_t *threadData)
{
    OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_661(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_662(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_663(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_664(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_665(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_666(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_667(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_668(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_669(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_670(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_671(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_672(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_763(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_772(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_773(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_774(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_777(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_778(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_779(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_780(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_784(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_785(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_786(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_787(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_788(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_803(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_804(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_805(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_806(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_808(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_809(data, threadData);
}

int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  data->simulationInfo->callStatistics.functionODE++;
  
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_functionLocalKnownVars(data, threadData);
  functionODE_system0(data, threadData);

  
  TRACE_POP
  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char**argv, DATA *data, threadData_t *threadData);

#include "OpenIPSL.Examples.Controls.PSSE.ES.EXST1_12jac.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.EXST1_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks OpenIPSL_Examples_Controls_PSSE_ES_EXST1_callback = {
   (int (*)(DATA *, threadData_t *, void *)) OpenIPSL_Examples_Controls_PSSE_ES_EXST1_performSimulation,
   (int (*)(DATA *, threadData_t *, void *)) OpenIPSL_Examples_Controls_PSSE_ES_EXST1_performQSSSimulation,
   OpenIPSL_Examples_Controls_PSSE_ES_EXST1_updateContinuousSystem,
   OpenIPSL_Examples_Controls_PSSE_ES_EXST1_callExternalObjectDestructors,
   OpenIPSL_Examples_Controls_PSSE_ES_EXST1_initialNonLinearSystem,
   NULL,
   NULL,
   #if !defined(OMC_NO_STATESELECTION)
   OpenIPSL_Examples_Controls_PSSE_ES_EXST1_initializeStateSets,
   #else
   NULL,
   #endif
   OpenIPSL_Examples_Controls_PSSE_ES_EXST1_initializeDAEmodeData,
   OpenIPSL_Examples_Controls_PSSE_ES_EXST1_functionODE,
   OpenIPSL_Examples_Controls_PSSE_ES_EXST1_functionAlgebraics,
   OpenIPSL_Examples_Controls_PSSE_ES_EXST1_functionDAE,
   OpenIPSL_Examples_Controls_PSSE_ES_EXST1_functionLocalKnownVars,
   OpenIPSL_Examples_Controls_PSSE_ES_EXST1_input_function,
   OpenIPSL_Examples_Controls_PSSE_ES_EXST1_input_function_init,
   OpenIPSL_Examples_Controls_PSSE_ES_EXST1_input_function_updateStartValues,
   OpenIPSL_Examples_Controls_PSSE_ES_EXST1_output_function,
   OpenIPSL_Examples_Controls_PSSE_ES_EXST1_function_storeDelayed,
   OpenIPSL_Examples_Controls_PSSE_ES_EXST1_updateBoundVariableAttributes,
   OpenIPSL_Examples_Controls_PSSE_ES_EXST1_functionInitialEquations,
   1, /* useHomotopy - 0: local homotopy (equidistant lambda), 1: global homotopy (equidistant lambda), 2: new global homotopy approach (adaptive lambda), 3: new local homotopy approach (adaptive lambda)*/
   OpenIPSL_Examples_Controls_PSSE_ES_EXST1_functionInitialEquations_lambda0,
   OpenIPSL_Examples_Controls_PSSE_ES_EXST1_functionRemovedInitialEquations,
   OpenIPSL_Examples_Controls_PSSE_ES_EXST1_updateBoundParameters,
   OpenIPSL_Examples_Controls_PSSE_ES_EXST1_checkForAsserts,
   OpenIPSL_Examples_Controls_PSSE_ES_EXST1_function_ZeroCrossingsEquations,
   OpenIPSL_Examples_Controls_PSSE_ES_EXST1_function_ZeroCrossings,
   OpenIPSL_Examples_Controls_PSSE_ES_EXST1_function_updateRelations,
   OpenIPSL_Examples_Controls_PSSE_ES_EXST1_zeroCrossingDescription,
   OpenIPSL_Examples_Controls_PSSE_ES_EXST1_relationDescription,
   OpenIPSL_Examples_Controls_PSSE_ES_EXST1_function_initSample,
   OpenIPSL_Examples_Controls_PSSE_ES_EXST1_INDEX_JAC_A,
   OpenIPSL_Examples_Controls_PSSE_ES_EXST1_INDEX_JAC_B,
   OpenIPSL_Examples_Controls_PSSE_ES_EXST1_INDEX_JAC_C,
   OpenIPSL_Examples_Controls_PSSE_ES_EXST1_INDEX_JAC_D,
   OpenIPSL_Examples_Controls_PSSE_ES_EXST1_initialAnalyticJacobianA,
   OpenIPSL_Examples_Controls_PSSE_ES_EXST1_initialAnalyticJacobianB,
   OpenIPSL_Examples_Controls_PSSE_ES_EXST1_initialAnalyticJacobianC,
   OpenIPSL_Examples_Controls_PSSE_ES_EXST1_initialAnalyticJacobianD,
   OpenIPSL_Examples_Controls_PSSE_ES_EXST1_functionJacA_column,
   OpenIPSL_Examples_Controls_PSSE_ES_EXST1_functionJacB_column,
   OpenIPSL_Examples_Controls_PSSE_ES_EXST1_functionJacC_column,
   OpenIPSL_Examples_Controls_PSSE_ES_EXST1_functionJacD_column,
   OpenIPSL_Examples_Controls_PSSE_ES_EXST1_linear_model_frame,
   OpenIPSL_Examples_Controls_PSSE_ES_EXST1_linear_model_datarecovery_frame,
   OpenIPSL_Examples_Controls_PSSE_ES_EXST1_mayer,
   OpenIPSL_Examples_Controls_PSSE_ES_EXST1_lagrange,
   OpenIPSL_Examples_Controls_PSSE_ES_EXST1_pickUpBoundsForInputsInOptimization,
   OpenIPSL_Examples_Controls_PSSE_ES_EXST1_setInputData,
   OpenIPSL_Examples_Controls_PSSE_ES_EXST1_getTimeGrid,
   OpenIPSL_Examples_Controls_PSSE_ES_EXST1_symbolicInlineSystem,
   OpenIPSL_Examples_Controls_PSSE_ES_EXST1_function_initSynchronous,
   OpenIPSL_Examples_Controls_PSSE_ES_EXST1_function_updateSynchronous,
   OpenIPSL_Examples_Controls_PSSE_ES_EXST1_function_equationsSynchronous,
   OpenIPSL_Examples_Controls_PSSE_ES_EXST1_inputNames,
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
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &OpenIPSL_Examples_Controls_PSSE_ES_EXST1_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "OpenIPSL.Examples.Controls.PSSE.ES.EXST1";
  data->modelData->modelFilePrefix = "OpenIPSL.Examples.Controls.PSSE.ES.EXST1";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "/home/manuelnvro/dev/Gitted/OpenIPSL/OpenIPSL/Examples/Controls/PSSE/ES";
  data->modelData->modelGUID = "{88c8d459-753d-49d6-aa55-6b17c0db3530}";
  #if defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME)
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  #else
  #if defined(_MSC_VER) /* handle joke compilers */
  {
  /* for MSVC we encode a string like char x[] = {'a', 'b', 'c', '\0'} */
  /* because the string constant limit is 65535 bytes */
  static const char contents_init[] =
    #include "OpenIPSL.Examples.Controls.PSSE.ES.EXST1_init.c"
    ;
  static const char contents_info[] =
    #include "OpenIPSL.Examples.Controls.PSSE.ES.EXST1_info.c"
    ;
    data->modelData->initXMLData = contents_init;
    data->modelData->modelDataXml.infoXMLData = contents_info;
  }
  #else /* handle real compilers */
  data->modelData->initXMLData =
  #include "OpenIPSL.Examples.Controls.PSSE.ES.EXST1_init.c"
    ;
  data->modelData->modelDataXml.infoXMLData =
  #include "OpenIPSL.Examples.Controls.PSSE.ES.EXST1_info.c"
    ;
  #endif /* defined(_MSC_VER) */
  #endif /* defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME) */
  
  data->modelData->nStates = 12;
  data->modelData->nVariablesReal = 140;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesInteger = 0;
  data->modelData->nVariablesBoolean = 0;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 287;
  data->modelData->nParametersInteger = 10;
  data->modelData->nParametersBoolean = 71;
  data->modelData->nParametersString = 0;
  data->modelData->nInputVars = 0;
  data->modelData->nOutputVars = 0;
  
  data->modelData->nAliasReal = 95;
  data->modelData->nAliasInteger = 0;
  data->modelData->nAliasBoolean = 0;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 24;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 18;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  data->modelData->modelDataXml.fileName = "OpenIPSL.Examples.Controls.PSSE.ES.EXST1_info.json";
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 5;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 1071;
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
  
    OpenIPSL_Examples_Controls_PSSE_ES_EXST1_setupDataStruc(&data, threadData);
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


