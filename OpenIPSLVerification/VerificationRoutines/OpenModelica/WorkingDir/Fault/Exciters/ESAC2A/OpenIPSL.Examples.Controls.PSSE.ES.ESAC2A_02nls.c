/* Non Linear Systems */
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC2A_model.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC2A_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* inner equations */

/*
equation index: 904
type: SIMPLE_ASSIGN
eSAC2A._rotatingExciterWithDemagnetization._VE._u2 = OpenIPSL.NonElectrical.Functions.SE(eSAC2A.rectifierCommutationVoltageDrop.V_EX, eSAC2A.rotatingExciterWithDemagnetization.se1.SE1, eSAC2A.rotatingExciterWithDemagnetization.se1.SE2, eSAC2A.rotatingExciterWithDemagnetization.se1.E1, eSAC2A.rotatingExciterWithDemagnetization.se1.E2)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_904(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,904};
  data->localData[0]->realVars[84] /* eSAC2A.rotatingExciterWithDemagnetization.VE.u2 variable */ = omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->localData[0]->realVars[78] /* eSAC2A.rectifierCommutationVoltageDrop.V_EX variable */, data->simulationInfo->realParameter[189] /* eSAC2A.rotatingExciterWithDemagnetization.se1.SE1 PARAM */, data->simulationInfo->realParameter[190] /* eSAC2A.rotatingExciterWithDemagnetization.se1.SE2 PARAM */, data->simulationInfo->realParameter[187] /* eSAC2A.rotatingExciterWithDemagnetization.se1.E1 PARAM */, data->simulationInfo->realParameter[188] /* eSAC2A.rotatingExciterWithDemagnetization.se1.E2 PARAM */);
  TRACE_POP
}
/*
equation index: 905
type: SIMPLE_ASSIGN
eSAC2A._rectifierCommutationVoltageDrop._division._y = eSAC2A.rectifierCommutationVoltageDrop.division.u1 / eSAC2A.rectifierCommutationVoltageDrop.V_EX
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_905(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,905};
  data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */ = DIVISION_SIM(data->localData[0]->realVars[79] /* eSAC2A.rectifierCommutationVoltageDrop.division.u1 variable */,data->localData[0]->realVars[78] /* eSAC2A.rectifierCommutationVoltageDrop.V_EX variable */,"eSAC2A.rectifierCommutationVoltageDrop.V_EX",equationIndexes);
  TRACE_POP
}
/*
equation index: 906
type: SIMPLE_ASSIGN
eSAC2A._rectifierCommutationVoltageDrop._fEX._y = if eSAC2A.rectifierCommutationVoltageDrop.division.y <= 0.0 then 1.0 else if eSAC2A.rectifierCommutationVoltageDrop.division.y > 0.0 and eSAC2A.rectifierCommutationVoltageDrop.division.y <= 0.433 then 1.0 + (-0.577) * eSAC2A.rectifierCommutationVoltageDrop.division.y else if eSAC2A.rectifierCommutationVoltageDrop.division.y > 0.433 and eSAC2A.rectifierCommutationVoltageDrop.division.y < 0.75 then sqrt(0.75 - eSAC2A.rectifierCommutationVoltageDrop.division.y ^ 2.0) else if eSAC2A.rectifierCommutationVoltageDrop.division.y >= 0.75 and eSAC2A.rectifierCommutationVoltageDrop.division.y <= 1.0 then 1.732 * (1.0 - eSAC2A.rectifierCommutationVoltageDrop.division.y) else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_906(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,906};
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
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */, 0.0, 20, LessEq);
  tmp13 = (modelica_boolean)tmp0;
  if(tmp13)
  {
    tmp14 = 1.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp1, data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */, 0.0, 21, Greater);
    RELATIONHYSTERESIS(tmp2, data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */, 0.433, 22, LessEq);
    tmp11 = (modelica_boolean)(tmp1 && tmp2);
    if(tmp11)
    {
      tmp12 = 1.0 + (-0.577) * (data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */);
    }
    else
    {
      RELATIONHYSTERESIS(tmp3, data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */, 0.433, 23, Greater);
      RELATIONHYSTERESIS(tmp4, data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */, 0.75, 24, Less);
      tmp9 = (modelica_boolean)(tmp3 && tmp4);
      if(tmp9)
      {
        tmp5 = data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */;
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
        RELATIONHYSTERESIS(tmp7, data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */, 0.75, 25, GreaterEq);
        RELATIONHYSTERESIS(tmp8, data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */, 1.0, 26, LessEq);
        tmp10 = ((tmp7 && tmp8)?(1.732) * (1.0 - data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */):0.0);
      }
      tmp12 = tmp10;
    }
    tmp14 = tmp12;
  }
  data->localData[0]->realVars[81] /* eSAC2A.rectifierCommutationVoltageDrop.fEX.y variable */ = tmp14;
  TRACE_POP
}
/*
equation index: 907
type: SIMPLE_ASSIGN
eSAC2A._EFD = eSAC2A.rectifierCommutationVoltageDrop.V_EX * eSAC2A.rectifierCommutationVoltageDrop.fEX.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_907(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,907};
  data->localData[0]->realVars[65] /* eSAC2A.EFD variable */ = (data->localData[0]->realVars[78] /* eSAC2A.rectifierCommutationVoltageDrop.V_EX variable */) * (data->localData[0]->realVars[81] /* eSAC2A.rectifierCommutationVoltageDrop.fEX.y variable */);
  TRACE_POP
}
/*
equation index: 908
type: SIMPLE_ASSIGN
eSAC2A._DiffV2._u2 = OpenIPSL.NonElectrical.Functions.SE(eSAC2A.EFD, eSAC2A.se1.SE1, eSAC2A.se1.SE2, eSAC2A.se1.E1, eSAC2A.se1.E2)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_908(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,908};
  data->localData[0]->realVars[59] /* eSAC2A.DiffV2.u2 variable */ = omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->localData[0]->realVars[65] /* eSAC2A.EFD variable */, data->simulationInfo->realParameter[193] /* eSAC2A.se1.SE1 PARAM */, data->simulationInfo->realParameter[194] /* eSAC2A.se1.SE2 PARAM */, data->simulationInfo->realParameter[191] /* eSAC2A.se1.E1 PARAM */, data->simulationInfo->realParameter[192] /* eSAC2A.se1.E2 PARAM */);
  TRACE_POP
}
/*
equation index: 909
type: SIMPLE_ASSIGN
eSAC2A._rotatingExciterWithDemagnetization._Sum._u1 = eSAC2A.rectifierCommutationVoltageDrop.V_EX * eSAC2A.rotatingExciterWithDemagnetization.VE.u2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_909(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,909};
  data->localData[0]->realVars[82] /* eSAC2A.rotatingExciterWithDemagnetization.Sum.u1 variable */ = (data->localData[0]->realVars[78] /* eSAC2A.rectifierCommutationVoltageDrop.V_EX variable */) * (data->localData[0]->realVars[84] /* eSAC2A.rotatingExciterWithDemagnetization.VE.u2 variable */);
  TRACE_POP
}
/*
equation index: 910
type: SIMPLE_ASSIGN
eSAC2A._DiffV2._y = eSAC2A.DiffV2.k1 * eSAC2A.const.k + eSAC2A.DiffV2.k2 * eSAC2A.DiffV2.u2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_910(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,910};
  data->localData[0]->realVars[60] /* eSAC2A.DiffV2.y variable */ = (data->simulationInfo->realParameter[88] /* eSAC2A.DiffV2.k1 PARAM */) * (data->simulationInfo->realParameter[133] /* eSAC2A.const.k PARAM */) + (data->simulationInfo->realParameter[89] /* eSAC2A.DiffV2.k2 PARAM */) * (data->localData[0]->realVars[59] /* eSAC2A.DiffV2.u2 variable */);
  TRACE_POP
}
/*
equation index: 911
type: SIMPLE_ASSIGN
eSAC2A._rotatingExciterWithDemagnetization._sISO._outMax = eSAC2A.DiffV1.y / eSAC2A.DiffV2.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_911(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,911};
  data->localData[0]->realVars[87] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.outMax variable */ = DIVISION_SIM(data->localData[0]->realVars[58] /* eSAC2A.DiffV1.y variable */,data->localData[0]->realVars[60] /* eSAC2A.DiffV2.y variable */,"eSAC2A.DiffV2.y",equationIndexes);
  TRACE_POP
}
/*
equation index: 912
type: SIMPLE_ASSIGN
eSAC2A._rotatingExciterWithDemagnetization._Sum._u2 = eSAC2A.rotatingExciterWithDemagnetization.gain.k * eSAC2A.rectifierCommutationVoltageDrop.V_EX
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_912(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,912};
  data->localData[0]->realVars[83] /* eSAC2A.rotatingExciterWithDemagnetization.Sum.u2 variable */ = (data->simulationInfo->realParameter[183] /* eSAC2A.rotatingExciterWithDemagnetization.gain.k PARAM */) * (data->localData[0]->realVars[78] /* eSAC2A.rectifierCommutationVoltageDrop.V_EX variable */);
  TRACE_POP
}
/*
equation index: 913
type: SIMPLE_ASSIGN
eSAC2A._derivative._u = eSAC2A.rotatingExciterWithDemagnetization.Sum.k1 * eSAC2A.rotatingExciterWithDemagnetization.Sum.u1 + eSAC2A.rotatingExciterWithDemagnetization.Sum.k2 * eSAC2A.rotatingExciterWithDemagnetization.Sum.u2 + eSAC2A.rotatingExciterWithDemagnetization.Sum.k3 * eSAC2A.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_913(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,913};
  data->localData[0]->realVars[69] /* eSAC2A.derivative.u variable */ = (data->simulationInfo->realParameter[179] /* eSAC2A.rotatingExciterWithDemagnetization.Sum.k1 PARAM */) * (data->localData[0]->realVars[82] /* eSAC2A.rotatingExciterWithDemagnetization.Sum.u1 variable */) + (data->simulationInfo->realParameter[180] /* eSAC2A.rotatingExciterWithDemagnetization.Sum.k2 PARAM */) * (data->localData[0]->realVars[83] /* eSAC2A.rotatingExciterWithDemagnetization.Sum.u2 variable */) + (data->simulationInfo->realParameter[181] /* eSAC2A.rotatingExciterWithDemagnetization.Sum.k3 PARAM */) * (data->localData[0]->realVars[67] /* eSAC2A.XADIFD variable */);
  TRACE_POP
}
/*
equation index: 914
type: SIMPLE_ASSIGN
eSAC2A._DiffV3._u1 = eSAC2A.gain.k * eSAC2A.derivative.u
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_914(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,914};
  data->localData[0]->realVars[61] /* eSAC2A.DiffV3.u1 variable */ = (data->simulationInfo->realParameter[139] /* eSAC2A.gain.k PARAM */) * (data->localData[0]->realVars[69] /* eSAC2A.derivative.u variable */);
  TRACE_POP
}
/*
equation index: 915
type: SIMPLE_ASSIGN
eSAC2A._derivative._y = 0.03 * (eSAC2A.derivative.u - eSAC2A.derivative.x) / eSAC2A.derivative.T
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_915(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,915};
  data->localData[0]->realVars[70] /* eSAC2A.derivative.y variable */ = (0.03) * (DIVISION_SIM(data->localData[0]->realVars[69] /* eSAC2A.derivative.u variable */ - data->localData[0]->realVars[0] /* eSAC2A.derivative.x STATE(1) */,data->simulationInfo->realParameter[135] /* eSAC2A.derivative.T PARAM */,"eSAC2A.derivative.T",equationIndexes));
  TRACE_POP
}
/*
equation index: 916
type: SIMPLE_ASSIGN
eSAC2A._add3_1._y = eSAC2A.add3_1.k1 * const.k + eSAC2A.add3_1.k2 * eSAC2A.DiffV.y + eSAC2A.add3_1.k3 * eSAC2A.derivative.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_916(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,916};
  data->localData[0]->realVars[68] /* eSAC2A.add3_1.y variable */ = (data->simulationInfo->realParameter[129] /* eSAC2A.add3_1.k1 PARAM */) * (data->simulationInfo->realParameter[34] /* const.k PARAM */) + (data->simulationInfo->realParameter[130] /* eSAC2A.add3_1.k2 PARAM */) * (data->localData[0]->realVars[57] /* eSAC2A.DiffV.y variable */) + (data->simulationInfo->realParameter[131] /* eSAC2A.add3_1.k3 PARAM */) * (data->localData[0]->realVars[70] /* eSAC2A.derivative.y variable */);
  TRACE_POP
}
/*
equation index: 917
type: SIMPLE_ASSIGN
eSAC2A._imLeadLag._TF._y = (eSAC2A.imLeadLag.TF.bb[2] - eSAC2A.imLeadLag.TF.a[2] * eSAC2A.imLeadLag.TF.d) * eSAC2A.imLeadLag.TF.x[1] + eSAC2A.imLeadLag.TF.d * eSAC2A.add3_1.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_917(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,917};
  data->localData[0]->realVars[74] /* eSAC2A.imLeadLag.TF.y variable */ = (data->simulationInfo->realParameter[152] /* eSAC2A.imLeadLag.TF.bb[2] PARAM */ - ((data->simulationInfo->realParameter[147] /* eSAC2A.imLeadLag.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[153] /* eSAC2A.imLeadLag.TF.d PARAM */))) * (data->localData[0]->realVars[73] /* eSAC2A.imLeadLag.TF.x[1] variable */) + (data->simulationInfo->realParameter[153] /* eSAC2A.imLeadLag.TF.d PARAM */) * (data->localData[0]->realVars[68] /* eSAC2A.add3_1.y variable */);
  TRACE_POP
}
/*
equation index: 918
type: SIMPLE_ASSIGN
eSAC2A._imLeadLag._y = if abs(eSAC2A.imLeadLag.T1 - eSAC2A.imLeadLag.T2) < 1e-15 then eSAC2A.imLeadLag.K * eSAC2A.add3_1.y else eSAC2A.imLeadLag.TF.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_918(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,918};
  modelica_boolean tmp0;
  tmp0 = Less(fabs(data->simulationInfo->realParameter[143] /* eSAC2A.imLeadLag.T1 PARAM */ - data->simulationInfo->realParameter[144] /* eSAC2A.imLeadLag.T2 PARAM */),1e-15);
  data->localData[0]->realVars[75] /* eSAC2A.imLeadLag.y variable */ = (tmp0?(data->simulationInfo->realParameter[142] /* eSAC2A.imLeadLag.K PARAM */) * (data->localData[0]->realVars[68] /* eSAC2A.add3_1.y variable */):data->localData[0]->realVars[74] /* eSAC2A.imLeadLag.TF.y variable */);
  TRACE_POP
}
/*
equation index: 919
type: SIMPLE_ASSIGN
eSAC2A._DiffV3._u2 = if abs(eSAC2A.simpleLagLim.T) <= 1e-15 then max(min(eSAC2A.imLeadLag.y * eSAC2A.simpleLagLim.K, eSAC2A.simpleLagLim.outMax), eSAC2A.simpleLagLim.outMin) else max(min(eSAC2A.simpleLagLim.state, eSAC2A.simpleLagLim.outMax), eSAC2A.simpleLagLim.outMin)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_919(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,919};
  modelica_boolean tmp0;
  tmp0 = LessEq(fabs(data->simulationInfo->realParameter[196] /* eSAC2A.simpleLagLim.T PARAM */),1e-15);
  data->localData[0]->realVars[62] /* eSAC2A.DiffV3.u2 variable */ = (tmp0?fmax(fmin((data->localData[0]->realVars[75] /* eSAC2A.imLeadLag.y variable */) * (data->simulationInfo->realParameter[195] /* eSAC2A.simpleLagLim.K PARAM */),data->simulationInfo->realParameter[199] /* eSAC2A.simpleLagLim.outMax PARAM */),data->simulationInfo->realParameter[200] /* eSAC2A.simpleLagLim.outMin PARAM */):fmax(fmin(data->localData[0]->realVars[4] /* eSAC2A.simpleLagLim.state STATE(1) */,data->simulationInfo->realParameter[199] /* eSAC2A.simpleLagLim.outMax PARAM */),data->simulationInfo->realParameter[200] /* eSAC2A.simpleLagLim.outMin PARAM */));
  TRACE_POP
}
/*
equation index: 920
type: SIMPLE_ASSIGN
eSAC2A._DiffV3._y = eSAC2A.DiffV3.k1 * eSAC2A.DiffV3.u1 + eSAC2A.DiffV3.k2 * eSAC2A.DiffV3.u2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_920(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,920};
  data->localData[0]->realVars[63] /* eSAC2A.DiffV3.y variable */ = (data->simulationInfo->realParameter[91] /* eSAC2A.DiffV3.k1 PARAM */) * (data->localData[0]->realVars[61] /* eSAC2A.DiffV3.u1 variable */) + (data->simulationInfo->realParameter[92] /* eSAC2A.DiffV3.k2 PARAM */) * (data->localData[0]->realVars[62] /* eSAC2A.DiffV3.u2 variable */);
  TRACE_POP
}
/*
equation index: 921
type: SIMPLE_ASSIGN
eSAC2A._gain1._y = eSAC2A.gain1.k * eSAC2A.DiffV3.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_921(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,921};
  data->localData[0]->realVars[71] /* eSAC2A.gain1.y variable */ = (data->simulationInfo->realParameter[140] /* eSAC2A.gain1.k PARAM */) * (data->localData[0]->realVars[63] /* eSAC2A.DiffV3.y variable */);
  TRACE_POP
}
/*
equation index: 922
type: SIMPLE_ASSIGN
eSAC2A._hV_GATE._p = if eSAC2A.gain1.y < const5.k then const5.k else eSAC2A.gain1.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_922(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,922};
  modelica_boolean tmp0;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[71] /* eSAC2A.gain1.y variable */, data->simulationInfo->realParameter[38] /* const5.k PARAM */, 14, Less);
  data->localData[0]->realVars[72] /* eSAC2A.hV_GATE.p variable */ = (tmp0?data->simulationInfo->realParameter[38] /* const5.k PARAM */:data->localData[0]->realVars[71] /* eSAC2A.gain1.y variable */);
  TRACE_POP
}
/*
equation index: 923
type: SIMPLE_ASSIGN
eSAC2A._lV_GATE._p = if const4.k > eSAC2A.hV_GATE.p then eSAC2A.hV_GATE.p else const4.k
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_923(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,923};
  modelica_boolean tmp0;
  RELATIONHYSTERESIS(tmp0, data->simulationInfo->realParameter[36] /* const4.k PARAM */, data->localData[0]->realVars[72] /* eSAC2A.hV_GATE.p variable */, 15, Greater);
  data->localData[0]->realVars[76] /* eSAC2A.lV_GATE.p variable */ = (tmp0?data->localData[0]->realVars[72] /* eSAC2A.hV_GATE.p variable */:data->simulationInfo->realParameter[36] /* const4.k PARAM */);
  TRACE_POP
}
/*
equation index: 924
type: SIMPLE_ASSIGN
eSAC2A._limiter1._y = smooth(0, if eSAC2A.lV_GATE.p > eSAC2A.limiter1.uMax then eSAC2A.limiter1.uMax else if eSAC2A.lV_GATE.p < eSAC2A.limiter1.uMin then eSAC2A.limiter1.uMin else eSAC2A.lV_GATE.p)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_924(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,924};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  tmp0 = Greater(data->localData[0]->realVars[76] /* eSAC2A.lV_GATE.p variable */,data->simulationInfo->realParameter[166] /* eSAC2A.limiter1.uMax PARAM */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->simulationInfo->realParameter[166] /* eSAC2A.limiter1.uMax PARAM */;
  }
  else
  {
    tmp1 = Less(data->localData[0]->realVars[76] /* eSAC2A.lV_GATE.p variable */,data->simulationInfo->realParameter[167] /* eSAC2A.limiter1.uMin PARAM */);
    tmp3 = (tmp1?data->simulationInfo->realParameter[167] /* eSAC2A.limiter1.uMin PARAM */:data->localData[0]->realVars[76] /* eSAC2A.lV_GATE.p variable */);
  }
  data->localData[0]->realVars[77] /* eSAC2A.limiter1.y variable */ = tmp3;
  TRACE_POP
}
/*
equation index: 925
type: SIMPLE_ASSIGN
eSAC2A._rotatingExciterWithDemagnetization._feedback._y = eSAC2A.limiter1.y - eSAC2A.derivative.u
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_925(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,925};
  data->localData[0]->realVars[85] /* eSAC2A.rotatingExciterWithDemagnetization.feedback.y variable */ = data->localData[0]->realVars[77] /* eSAC2A.limiter1.y variable */ - data->localData[0]->realVars[69] /* eSAC2A.derivative.u variable */;
  TRACE_POP
}
/*
equation index: 926
type: ALGORITHM

  eSAC2A.rotatingExciterWithDemagnetization.sISO.initVar := $START.eSAC2A.rotatingExciterWithDemagnetization.sISO.initVar;
  eSAC2A.rotatingExciterWithDemagnetization.sISO.Reinit := pre(eSAC2A.rotatingExciterWithDemagnetization.sISO.Reinit);
  eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachLower := pre(eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachLower);
  eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachUpper := pre(eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachUpper);
  eSAC2A.rotatingExciterWithDemagnetization.sISO.Falling := pre(eSAC2A.rotatingExciterWithDemagnetization.sISO.Falling);
  eSAC2A.rotatingExciterWithDemagnetization.sISO.Rising := pre(eSAC2A.rotatingExciterWithDemagnetization.sISO.Rising);
  if eSAC2A.rotatingExciterWithDemagnetization.feedback.y > 1e-15 then
    eSAC2A.rotatingExciterWithDemagnetization.sISO.Rising := true;
    eSAC2A.rotatingExciterWithDemagnetization.sISO.Falling := false;
  elseif eSAC2A.rotatingExciterWithDemagnetization.feedback.y < -1e-15 then
    eSAC2A.rotatingExciterWithDemagnetization.sISO.Rising := false;
    eSAC2A.rotatingExciterWithDemagnetization.sISO.Falling := true;
  else
    eSAC2A.rotatingExciterWithDemagnetization.sISO.Rising := false;
    eSAC2A.rotatingExciterWithDemagnetization.sISO.Falling := false;
  end if;
  if eSAC2A.rotatingExciterWithDemagnetization.sISO.w > eSAC2A.rotatingExciterWithDemagnetization.sISO.outMax then
    eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachUpper := true;
    eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachLower := false;
  elseif eSAC2A.rotatingExciterWithDemagnetization.sISO.w < eSAC2A.lowLim.k then
    eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachLower := true;
    eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachUpper := false;
  else
    eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachUpper := false;
    eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachLower := false;
  end if;
  if eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachUpper and eSAC2A.rotatingExciterWithDemagnetization.sISO.Falling then
    eSAC2A.rotatingExciterWithDemagnetization.sISO.Reinit := true;
    eSAC2A.rotatingExciterWithDemagnetization.sISO.initVar := eSAC2A.rotatingExciterWithDemagnetization.sISO.outMax;
  elseif eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachLower and eSAC2A.rotatingExciterWithDemagnetization.sISO.Rising then
    eSAC2A.rotatingExciterWithDemagnetization.sISO.Reinit := true;
    eSAC2A.rotatingExciterWithDemagnetization.sISO.initVar := eSAC2A.lowLim.k;
  end if;
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_926(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,926};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  data->localData[0]->realVars[86] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.initVar variable */ = data->modelData->realVarsData[86].attribute /* eSAC2A.rotatingExciterWithDemagnetization.sISO.initVar variable */.start;

  data->localData[0]->booleanVars[6] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.Reinit DISCRETE */ = data->simulationInfo->booleanVarsPre[6] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.Reinit DISCRETE */;

  data->localData[0]->booleanVars[4] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachLower DISCRETE */ = data->simulationInfo->booleanVarsPre[4] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachLower DISCRETE */;

  data->localData[0]->booleanVars[5] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachUpper DISCRETE */ = data->simulationInfo->booleanVarsPre[5] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachUpper DISCRETE */;

  data->localData[0]->booleanVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.Falling DISCRETE */ = data->simulationInfo->booleanVarsPre[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.Falling DISCRETE */;

  data->localData[0]->booleanVars[7] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.Rising DISCRETE */ = data->simulationInfo->booleanVarsPre[7] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.Rising DISCRETE */;

  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[85] /* eSAC2A.rotatingExciterWithDemagnetization.feedback.y variable */, 1e-15, 17, Greater);
  if(tmp0)
  {
    data->localData[0]->booleanVars[7] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.Rising DISCRETE */ = 1;

    data->localData[0]->booleanVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.Falling DISCRETE */ = 0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp1, data->localData[0]->realVars[85] /* eSAC2A.rotatingExciterWithDemagnetization.feedback.y variable */, -1e-15, 16, Less);
    if(tmp1)
    {
      data->localData[0]->booleanVars[7] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.Rising DISCRETE */ = 0;

      data->localData[0]->booleanVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.Falling DISCRETE */ = 1;
    }
    else
    {
      data->localData[0]->booleanVars[7] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.Rising DISCRETE */ = 0;

      data->localData[0]->booleanVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.Falling DISCRETE */ = 0;
    }
  }

  RELATIONHYSTERESIS(tmp2, data->localData[0]->realVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.w STATE(1) */, data->localData[0]->realVars[87] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.outMax variable */, 19, Greater);
  if(tmp2)
  {
    data->localData[0]->booleanVars[5] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachUpper DISCRETE */ = 1;

    data->localData[0]->booleanVars[4] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachLower DISCRETE */ = 0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp3, data->localData[0]->realVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.w STATE(1) */, data->simulationInfo->realParameter[168] /* eSAC2A.lowLim.k PARAM */, 18, Less);
    if(tmp3)
    {
      data->localData[0]->booleanVars[4] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachLower DISCRETE */ = 1;

      data->localData[0]->booleanVars[5] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachUpper DISCRETE */ = 0;
    }
    else
    {
      data->localData[0]->booleanVars[5] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachUpper DISCRETE */ = 0;

      data->localData[0]->booleanVars[4] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachLower DISCRETE */ = 0;
    }
  }

  if((data->localData[0]->booleanVars[5] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachUpper DISCRETE */ && data->localData[0]->booleanVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.Falling DISCRETE */))
  {
    data->localData[0]->booleanVars[6] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.Reinit DISCRETE */ = 1;

    data->localData[0]->realVars[86] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.initVar variable */ = data->localData[0]->realVars[87] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.outMax variable */;
  }
  else
  {
    if((data->localData[0]->booleanVars[4] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachLower DISCRETE */ && data->localData[0]->booleanVars[7] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.Rising DISCRETE */))
    {
      data->localData[0]->booleanVars[6] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.Reinit DISCRETE */ = 1;

      data->localData[0]->realVars[86] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.initVar variable */ = data->simulationInfo->realParameter[168] /* eSAC2A.lowLim.k PARAM */;
    }
  }
  TRACE_POP
}

void residualFunc928(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,928};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[78] /* eSAC2A.rectifierCommutationVoltageDrop.V_EX variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_904(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_905(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_906(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_907(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_908(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_909(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_910(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_911(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_912(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_913(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_914(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_915(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_916(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_917(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_918(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_919(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_920(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_921(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_922(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_923(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_924(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_925(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_926(data, threadData);
  /* body */
  res[0] = (data->localData[0]->booleanVars[5] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachUpper DISCRETE */?data->localData[0]->realVars[87] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.outMax variable */:(data->localData[0]->booleanVars[4] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachLower DISCRETE */?data->simulationInfo->realParameter[168] /* eSAC2A.lowLim.k PARAM */:data->localData[0]->realVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.w STATE(1) */)) - data->localData[0]->realVars[78] /* eSAC2A.rectifierCommutationVoltageDrop.V_EX variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS928(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 1;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[0] = 1;
}
void initializeStaticDataNLS928(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for eSAC2A.rectifierCommutationVoltageDrop.V_EX */
  sysData->nominal[i] = data->modelData->realVarsData[78].attribute /* eSAC2A.rectifierCommutationVoltageDrop.V_EX */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[78].attribute /* eSAC2A.rectifierCommutationVoltageDrop.V_EX */.min;
  sysData->max[i++]   = data->modelData->realVarsData[78].attribute /* eSAC2A.rectifierCommutationVoltageDrop.V_EX */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS928(sysData);
}

void getIterationVarsNLS928(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[78] /* eSAC2A.rectifierCommutationVoltageDrop.V_EX variable */;
}


/* inner equations */

/*
equation index: 805
type: SIMPLE_ASSIGN
constantLoad._v = sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_805(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,805};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[141] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[140] /* pwLine1.vs.im variable */;
  data->localData[0]->realVars[55] /* constantLoad.v variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 806
type: SIMPLE_ASSIGN
constantLoad._kP = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a0 + constantLoad.a1 * cos(constantLoad.v * constantLoad.wp) + constantLoad.b1 * sin(constantLoad.v * constantLoad.wp) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_806(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,806};
  modelica_boolean tmp0;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[55] /* constantLoad.v variable */, data->simulationInfo->realParameter[41] /* constantLoad.PQBRAK PARAM */, 13, Less);
  data->localData[0]->realVars[52] /* constantLoad.kP variable */ = (tmp0?data->simulationInfo->realParameter[60] /* constantLoad.a0 PARAM */ + (data->simulationInfo->realParameter[61] /* constantLoad.a1 PARAM */) * (cos((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[67] /* constantLoad.b1 PARAM */) * (sin((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))):1.0);
  TRACE_POP
}
/*
equation index: 807
type: SIMPLE_ASSIGN
constantLoad._kI = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (-1.0 + constantLoad.b2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_807(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,807};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_boolean tmp15;
  modelica_real tmp16;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[55] /* constantLoad.v variable */, 0.5, 6, Less);
  tmp15 = (modelica_boolean)tmp0;
  if(tmp15)
  {
    tmp1 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp2 = -1.0 + data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */;
    if(tmp1 < 0.0 && tmp2 != 0.0)
    {
      tmp4 = modf(tmp2, &tmp5);
      
      if(tmp4 > 0.5)
      {
        tmp4 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp4 < -0.5)
      {
        tmp4 += 1.0;
        tmp5 -= 1.0;
      }
      
      if(fabs(tmp4) < 1e-10)
        tmp3 = pow(tmp1, tmp5);
      else
      {
        tmp7 = modf(1.0/tmp2, &tmp6);
        if(tmp7 > 0.5)
        {
          tmp7 -= 1.0;
          tmp6 += 1.0;
        }
        else if(tmp7 < -0.5)
        {
          tmp7 += 1.0;
          tmp6 -= 1.0;
        }
        if(fabs(tmp7) < 1e-10 && ((unsigned long)tmp6 & 1))
        {
          tmp3 = -pow(-tmp1, tmp4)*pow(tmp1, tmp5);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
        }
      }
    }
    else
    {
      tmp3 = pow(tmp1, tmp2);
    }
    if(isnan(tmp3) || isinf(tmp3))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
    }tmp8 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp9 = data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */;
    if(tmp8 < 0.0 && tmp9 != 0.0)
    {
      tmp11 = modf(tmp9, &tmp12);
      
      if(tmp11 > 0.5)
      {
        tmp11 -= 1.0;
        tmp12 += 1.0;
      }
      else if(tmp11 < -0.5)
      {
        tmp11 += 1.0;
        tmp12 -= 1.0;
      }
      
      if(fabs(tmp11) < 1e-10)
        tmp10 = pow(tmp8, tmp12);
      else
      {
        tmp14 = modf(1.0/tmp9, &tmp13);
        if(tmp14 > 0.5)
        {
          tmp14 -= 1.0;
          tmp13 += 1.0;
        }
        else if(tmp14 < -0.5)
        {
          tmp14 += 1.0;
          tmp13 -= 1.0;
        }
        if(fabs(tmp14) < 1e-10 && ((unsigned long)tmp13 & 1))
        {
          tmp10 = -pow(-tmp8, tmp11)*pow(tmp8, tmp12);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp8, tmp9);
        }
      }
    }
    else
    {
      tmp10 = pow(tmp8, tmp9);
    }
    if(isnan(tmp10) || isinf(tmp10))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp8, tmp9);
    }
    tmp16 = (data->simulationInfo->realParameter[62] /* constantLoad.a2 PARAM */) * ((data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */) * ((tmp3) * (exp(((-data->simulationInfo->realParameter[62] /* constantLoad.a2 PARAM */)) * (tmp10)))));
  }
  else
  {
    tmp16 = 1.0;
  }
  data->localData[0]->realVars[51] /* constantLoad.kI variable */ = tmp16;
  TRACE_POP
}
/*
equation index: 808
type: SIMPLE_ASSIGN
constantLoad._Q = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_808(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,808};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */, 7, GreaterEq);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[71] /* constantLoad.d_t PARAM */, 8, LessEq);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[44] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[48] /* constantLoad.S_Y.im PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[46] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[70] /* constantLoad.d_Q PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[44] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[48] /* constantLoad.S_Y.im PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[46] /* constantLoad.S_P.im PARAM */);
  }
  data->localData[0]->realVars[49] /* constantLoad.Q variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 809
type: SIMPLE_ASSIGN
constantLoad._P = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_809(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,809};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */, 7, GreaterEq);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[71] /* constantLoad.d_t PARAM */, 8, LessEq);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[45] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[49] /* constantLoad.S_Y.re PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[47] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[69] /* constantLoad.d_P PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[45] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[49] /* constantLoad.S_Y.re PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[47] /* constantLoad.S_P.re PARAM */);
  }
  data->localData[0]->realVars[48] /* constantLoad.P variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 810
type: SIMPLE_ASSIGN
gENROU._PSIq = (-gENROU.PSIppq) - gENROU.Xppq * gENROU.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_810(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,810};
  data->localData[0]->realVars[108] /* gENROU.PSIq variable */ = (-data->localData[0]->realVars[107] /* gENROU.PSIppq variable */) - ((data->simulationInfo->realParameter[283] /* gENROU.Xppq PARAM */) * (data->localData[0]->realVars[115] /* gENROU.iq variable */));
  TRACE_POP
}
/*
equation index: 811
type: SIMPLE_ASSIGN
pwLine._is._im = ($cse6 * gENROU.iq - $cse7 * gENROU.id) * gENROU.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_811(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,811};
  data->localData[0]->realVars[126] /* pwLine.is.im variable */ = ((data->localData[0]->realVars[30] /* $cse6 variable */) * (data->localData[0]->realVars[115] /* gENROU.iq variable */) - ((data->localData[0]->realVars[31] /* $cse7 variable */) * (data->localData[0]->realVars[114] /* gENROU.id variable */))) * (data->simulationInfo->realParameter[228] /* gENROU.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 812
type: SIMPLE_ASSIGN
pwLine._is._re = ($cse7 * gENROU.iq - (-$cse6) * gENROU.id) * gENROU.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_812(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,812};
  data->localData[0]->realVars[127] /* pwLine.is.re variable */ = ((data->localData[0]->realVars[31] /* $cse7 variable */) * (data->localData[0]->realVars[115] /* gENROU.iq variable */) - (((-data->localData[0]->realVars[30] /* $cse6 variable */)) * (data->localData[0]->realVars[114] /* gENROU.id variable */))) * (data->simulationInfo->realParameter[228] /* gENROU.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 813
type: SIMPLE_ASSIGN
gENROU._ud = (-gENROU.PSIq) - gENROU.R_a * gENROU.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_813(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,813};
  data->localData[0]->realVars[116] /* gENROU.ud variable */ = (-data->localData[0]->realVars[108] /* gENROU.PSIq variable */) - ((data->simulationInfo->realParameter[265] /* gENROU.R_a PARAM */) * (data->localData[0]->realVars[114] /* gENROU.id variable */));
  TRACE_POP
}
/*
equation index: 814
type: SIMPLE_ASSIGN
gENROU._PSId = gENROU.PSIppd - gENROU.Xppd * gENROU.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_814(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,814};
  data->localData[0]->realVars[104] /* gENROU.PSId variable */ = data->localData[0]->realVars[106] /* gENROU.PSIppd variable */ - ((data->simulationInfo->realParameter[282] /* gENROU.Xppd PARAM */) * (data->localData[0]->realVars[114] /* gENROU.id variable */));
  TRACE_POP
}
/*
equation index: 815
type: SIMPLE_ASSIGN
gENROU._uq = gENROU.PSId - gENROU.R_a * gENROU.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_815(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,815};
  data->localData[0]->realVars[117] /* gENROU.uq variable */ = data->localData[0]->realVars[104] /* gENROU.PSId variable */ - ((data->simulationInfo->realParameter[265] /* gENROU.R_a PARAM */) * (data->localData[0]->realVars[115] /* gENROU.iq variable */));
  TRACE_POP
}
/*
equation index: 816
type: SIMPLE_ASSIGN
pwLine._vs._im = $cse6 * gENROU.uq - $cse7 * gENROU.ud
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_816(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,816};
  data->localData[0]->realVars[128] /* pwLine.vs.im variable */ = (data->localData[0]->realVars[30] /* $cse6 variable */) * (data->localData[0]->realVars[117] /* gENROU.uq variable */) - ((data->localData[0]->realVars[31] /* $cse7 variable */) * (data->localData[0]->realVars[116] /* gENROU.ud variable */));
  TRACE_POP
}
/*
equation index: 817
type: SIMPLE_ASSIGN
pwLine._vs._re = $cse6 * gENROU.ud + $cse7 * gENROU.uq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_817(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,817};
  data->localData[0]->realVars[129] /* pwLine.vs.re variable */ = (data->localData[0]->realVars[30] /* $cse6 variable */) * (data->localData[0]->realVars[116] /* gENROU.ud variable */) + (data->localData[0]->realVars[31] /* $cse7 variable */) * (data->localData[0]->realVars[117] /* gENROU.uq variable */);
  TRACE_POP
}
/*
equation index: 818
type: SIMPLE_ASSIGN
gENCLS._p._ir = ((-$cse1) * gENCLS.id - $cse2 * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_818(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,818};
  data->localData[0]->realVars[98] /* gENCLS.p.ir variable */ = (((-data->localData[0]->realVars[26] /* $cse1 variable */)) * (data->localData[0]->realVars[94] /* gENCLS.id variable */) - ((data->localData[0]->realVars[27] /* $cse2 variable */) * (data->localData[0]->realVars[95] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[202] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 819
type: SIMPLE_ASSIGN
gENCLS._p._ii = ($cse2 * gENCLS.id - $cse1 * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_819(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,819};
  data->localData[0]->realVars[97] /* gENCLS.p.ii variable */ = ((data->localData[0]->realVars[27] /* $cse2 variable */) * (data->localData[0]->realVars[94] /* gENCLS.id variable */) - ((data->localData[0]->realVars[26] /* $cse1 variable */) * (data->localData[0]->realVars[95] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[202] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 820
type: SIMPLE_ASSIGN
gENCLS._vd = gENCLS.X_d * gENCLS.iq - gENCLS.R_a * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_820(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,820};
  data->localData[0]->realVars[99] /* gENCLS.vd variable */ = (data->simulationInfo->realParameter[211] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[95] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[208] /* gENCLS.R_a PARAM */) * (data->localData[0]->realVars[94] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 821
type: SIMPLE_ASSIGN
gENCLS._vq = gENCLS.eq + (-gENCLS.R_a) * gENCLS.iq - gENCLS.X_d * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_821(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,821};
  data->localData[0]->realVars[100] /* gENCLS.vq variable */ = data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */ + ((-data->simulationInfo->realParameter[208] /* gENCLS.R_a PARAM */)) * (data->localData[0]->realVars[95] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[211] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[94] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 822
type: SIMPLE_ASSIGN
pwLine4._ir._re = (-pwLine1.ir.re) - gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_822(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,822};
  data->localData[0]->realVars[157] /* pwLine4.ir.re variable */ = (-data->localData[0]->realVars[135] /* pwLine1.ir.re variable */) - data->localData[0]->realVars[98] /* gENCLS.p.ir variable */;
  TRACE_POP
}
/*
equation index: 823
type: SIMPLE_ASSIGN
pwLine1._ir._im = (-pwLine4.ir.im) - gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_823(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,823};
  data->localData[0]->realVars[134] /* pwLine1.ir.im variable */ = (-data->localData[0]->realVars[156] /* pwLine4.ir.im variable */) - data->localData[0]->realVars[97] /* gENCLS.p.ii variable */;
  TRACE_POP
}
/*
equation index: 824
type: SIMPLE_ASSIGN
constantLoad._p._ir = (-pwLine.ir.re) - pwLine1.is.re - pwLine3.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_824(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,824};
  data->localData[0]->realVars[54] /* constantLoad.p.ir variable */ = (-data->localData[0]->realVars[125] /* pwLine.ir.re variable */) - data->localData[0]->realVars[137] /* pwLine1.is.re variable */ - data->localData[0]->realVars[149] /* pwLine3.is.re variable */;
  TRACE_POP
}
/*
equation index: 825
type: SIMPLE_ASSIGN
pwFault._p._ir = (-pwLine3.ir.re) - pwLine4.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_825(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,825};
  data->localData[0]->realVars[119] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[147] /* pwLine3.ir.re variable */) - data->localData[0]->realVars[159] /* pwLine4.is.re variable */;
  TRACE_POP
}
/*
equation index: 826
type: SIMPLE_ASSIGN
pwFault._p._ii = (-pwLine3.ir.im) - pwLine4.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_826(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,826};
  data->localData[0]->realVars[118] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[146] /* pwLine3.ir.im variable */) - data->localData[0]->realVars[158] /* pwLine4.is.im variable */;
  TRACE_POP
}
/*
equation index: 827
type: SIMPLE_ASSIGN
constantLoad._p._ii = (-pwLine.ir.im) - pwLine1.is.im - pwLine3.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_827(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,827};
  data->localData[0]->realVars[53] /* constantLoad.p.ii variable */ = (-data->localData[0]->realVars[124] /* pwLine.ir.im variable */) - data->localData[0]->realVars[136] /* pwLine1.is.im variable */ - data->localData[0]->realVars[148] /* pwLine3.is.im variable */;
  TRACE_POP
}

void residualFunc895(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,895};
  int i;
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  modelica_boolean tmp11;
  modelica_real tmp12;
  modelica_boolean tmp13;
  modelica_real tmp14;
  modelica_boolean tmp15;
  modelica_boolean tmp16;
  modelica_boolean tmp17;
  modelica_boolean tmp18;
  modelica_boolean tmp19;
  modelica_boolean tmp20;
  modelica_boolean tmp21;
  modelica_boolean tmp22;
  modelica_boolean tmp23;
  modelica_boolean tmp24;
  modelica_boolean tmp25;
  modelica_boolean tmp26;
  modelica_boolean tmp27;
  modelica_boolean tmp28;
  modelica_boolean tmp29;
  modelica_boolean tmp30;
  modelica_boolean tmp31;
  modelica_boolean tmp32;
  modelica_boolean tmp33;
  modelica_boolean tmp34;
  modelica_boolean tmp35;
  modelica_boolean tmp36;
  modelica_boolean tmp37;
  modelica_boolean tmp38;
  modelica_boolean tmp39;
  modelica_real tmp40;
  modelica_real tmp41;
  modelica_boolean tmp42;
  modelica_real tmp43;
  modelica_boolean tmp44;
  modelica_real tmp45;
  modelica_boolean tmp46;
  modelica_real tmp47;
  modelica_boolean tmp48;
  modelica_boolean tmp49;
  modelica_boolean tmp50;
  modelica_boolean tmp51;
  modelica_boolean tmp52;
  modelica_boolean tmp53;
  /* iteration variables */
  for (i=0; i<22; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<22; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[136] /* pwLine1.is.im variable */ = xloc[0];
  data->localData[0]->realVars[124] /* pwLine.ir.im variable */ = xloc[1];
  data->localData[0]->realVars[158] /* pwLine4.is.im variable */ = xloc[2];
  data->localData[0]->realVars[146] /* pwLine3.ir.im variable */ = xloc[3];
  data->localData[0]->realVars[159] /* pwLine4.is.re variable */ = xloc[4];
  data->localData[0]->realVars[147] /* pwLine3.ir.re variable */ = xloc[5];
  data->localData[0]->realVars[148] /* pwLine3.is.im variable */ = xloc[6];
  data->localData[0]->realVars[137] /* pwLine1.is.re variable */ = xloc[7];
  data->localData[0]->realVars[149] /* pwLine3.is.re variable */ = xloc[8];
  data->localData[0]->realVars[125] /* pwLine.ir.re variable */ = xloc[9];
  data->localData[0]->realVars[156] /* pwLine4.ir.im variable */ = xloc[10];
  data->localData[0]->realVars[135] /* pwLine1.ir.re variable */ = xloc[11];
  data->localData[0]->realVars[94] /* gENCLS.id variable */ = xloc[12];
  data->localData[0]->realVars[95] /* gENCLS.iq variable */ = xloc[13];
  data->localData[0]->realVars[139] /* pwLine1.vr.re variable */ = xloc[14];
  data->localData[0]->realVars[138] /* pwLine1.vr.im variable */ = xloc[15];
  data->localData[0]->realVars[114] /* gENROU.id variable */ = xloc[16];
  data->localData[0]->realVars[115] /* gENROU.iq variable */ = xloc[17];
  data->localData[0]->realVars[150] /* pwLine3.vr.im variable */ = xloc[18];
  data->localData[0]->realVars[141] /* pwLine1.vs.re variable */ = xloc[19];
  data->localData[0]->realVars[140] /* pwLine1.vs.im variable */ = xloc[20];
  data->localData[0]->realVars[151] /* pwLine3.vr.re variable */ = xloc[21];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_805(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_806(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_807(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_808(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_809(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_810(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_811(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_812(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_813(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_814(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_815(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_816(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_817(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_818(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_819(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_820(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_821(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_822(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_823(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_824(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_825(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_826(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_827(data, threadData);
  /* body */
  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, data->simulationInfo->realParameter[348] /* pwLine3.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->timeValue, data->simulationInfo->realParameter[349] /* pwLine3.t2 PARAM */, 3, Less);
  res[0] = ((tmp0 && tmp1)?data->localData[0]->realVars[148] /* pwLine3.is.im variable */:data->localData[0]->realVars[140] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[150] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[347] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[148] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[141] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[344] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[140] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[345] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[346] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[149] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[140] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[344] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[141] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[345] /* pwLine3.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp2, data->localData[0]->timeValue, data->simulationInfo->realParameter[348] /* pwLine3.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp3, data->localData[0]->timeValue, data->simulationInfo->realParameter[349] /* pwLine3.t2 PARAM */, 3, Less);
  res[1] = ((tmp2 && tmp3)?data->localData[0]->realVars[149] /* pwLine3.is.re variable */:data->localData[0]->realVars[141] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[151] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[347] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[149] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[140] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[344] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[141] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[345] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[346] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[148] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[141] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[344] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[140] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[345] /* pwLine3.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp4, data->localData[0]->timeValue, data->simulationInfo->realParameter[315] /* pwFault.t1 PARAM */, 4, Less);
  tmp13 = (modelica_boolean)tmp4;
  if(tmp13)
  {
    tmp14 = data->localData[0]->realVars[119] /* pwFault.p.ir variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp5, data->localData[0]->timeValue, data->simulationInfo->realParameter[316] /* pwFault.t2 PARAM */, 5, Less);
    tmp11 = (modelica_boolean)(tmp5 && data->simulationInfo->booleanParameter[66] /* pwFault.ground PARAM */);
    if(tmp11)
    {
      tmp12 = data->localData[0]->realVars[150] /* pwLine3.vr.im variable */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp6, data->localData[0]->timeValue, data->simulationInfo->realParameter[316] /* pwFault.t2 PARAM */, 5, Less);
      tmp9 = (modelica_boolean)tmp6;
      if(tmp9)
      {
        tmp7 = data->simulationInfo->realParameter[313] /* pwFault.R PARAM */;
        tmp8 = data->simulationInfo->realParameter[314] /* pwFault.X PARAM */;
        tmp10 = data->localData[0]->realVars[119] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[313] /* pwFault.R PARAM */) * (data->localData[0]->realVars[151] /* pwLine3.vr.re variable */) + (data->simulationInfo->realParameter[314] /* pwFault.X PARAM */) * (data->localData[0]->realVars[150] /* pwLine3.vr.im variable */),(tmp7 * tmp7) + (tmp8 * tmp8),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp10 = data->localData[0]->realVars[119] /* pwFault.p.ir variable */;
      }
      tmp12 = tmp10;
    }
    tmp14 = tmp12;
  }
  res[2] = tmp14;

  RELATIONHYSTERESIS(tmp15, data->localData[0]->timeValue, data->simulationInfo->realParameter[348] /* pwLine3.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp16, data->localData[0]->timeValue, data->simulationInfo->realParameter[349] /* pwLine3.t2 PARAM */, 3, Less);
  res[3] = ((tmp15 && tmp16)?data->localData[0]->realVars[147] /* pwLine3.ir.re variable */:data->localData[0]->realVars[151] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[141] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[347] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[147] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[150] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[344] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[151] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[345] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[346] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[146] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[151] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[344] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[150] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[345] /* pwLine3.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp17, data->localData[0]->timeValue, data->simulationInfo->realParameter[348] /* pwLine3.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp18, data->localData[0]->timeValue, data->simulationInfo->realParameter[349] /* pwLine3.t2 PARAM */, 3, Less);
  res[4] = ((tmp17 && tmp18)?data->localData[0]->realVars[146] /* pwLine3.ir.im variable */:data->localData[0]->realVars[150] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[140] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[347] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[146] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[151] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[344] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[150] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[345] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[346] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[147] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[150] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[344] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[151] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[345] /* pwLine3.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp19, data->localData[0]->timeValue, data->simulationInfo->realParameter[326] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp20, data->localData[0]->timeValue, data->simulationInfo->realParameter[327] /* pwLine.t2 PARAM */, 1, Less);
  res[5] = ((tmp19 && tmp20)?data->localData[0]->realVars[124] /* pwLine.ir.im variable */:data->localData[0]->realVars[140] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[128] /* pwLine.vs.im variable */ - ((data->simulationInfo->realParameter[325] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[124] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[141] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[322] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[140] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[323] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[324] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[125] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[140] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[322] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[141] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[323] /* pwLine.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp21, data->localData[0]->timeValue, data->simulationInfo->realParameter[326] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp22, data->localData[0]->timeValue, data->simulationInfo->realParameter[327] /* pwLine.t2 PARAM */, 1, Less);
  res[6] = ((tmp21 && tmp22)?data->localData[0]->realVars[125] /* pwLine.ir.re variable */:data->localData[0]->realVars[141] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[129] /* pwLine.vs.re variable */ - ((data->simulationInfo->realParameter[325] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[125] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[140] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[322] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[141] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[323] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[324] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[124] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[141] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[322] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[140] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[323] /* pwLine.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp23, data->localData[0]->timeValue, data->simulationInfo->realParameter[326] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp24, data->localData[0]->timeValue, data->simulationInfo->realParameter[327] /* pwLine.t2 PARAM */, 1, Less);
  res[7] = ((tmp23 && tmp24)?data->localData[0]->realVars[126] /* pwLine.is.im variable */:data->localData[0]->realVars[128] /* pwLine.vs.im variable */ - data->localData[0]->realVars[140] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[325] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[126] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[129] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[322] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[128] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[323] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[324] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[127] /* pwLine.is.re variable */ + (data->localData[0]->realVars[128] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[322] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[129] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[323] /* pwLine.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp25, data->localData[0]->timeValue, data->simulationInfo->realParameter[326] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp26, data->localData[0]->timeValue, data->simulationInfo->realParameter[327] /* pwLine.t2 PARAM */, 1, Less);
  res[8] = ((tmp25 && tmp26)?data->localData[0]->realVars[127] /* pwLine.is.re variable */:data->localData[0]->realVars[129] /* pwLine.vs.re variable */ - data->localData[0]->realVars[141] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[325] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[127] /* pwLine.is.re variable */ + (data->localData[0]->realVars[128] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[322] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[129] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[323] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[324] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[126] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[129] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[322] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[128] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[323] /* pwLine.Y.re PARAM */))))));

  res[9] = (data->localData[0]->realVars[140] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[141] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[48] /* constantLoad.P variable */;

  res[10] = (data->localData[0]->realVars[140] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) + ((-data->localData[0]->realVars[141] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[49] /* constantLoad.Q variable */;

  RELATIONHYSTERESIS(tmp27, data->localData[0]->timeValue, data->simulationInfo->realParameter[337] /* pwLine1.t1 PARAM */, 9, GreaterEq);
  RELATIONHYSTERESIS(tmp28, data->localData[0]->timeValue, data->simulationInfo->realParameter[338] /* pwLine1.t2 PARAM */, 10, Less);
  res[11] = ((tmp27 && tmp28)?data->localData[0]->realVars[137] /* pwLine1.is.re variable */:data->localData[0]->realVars[141] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[139] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[336] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[137] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[140] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[333] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[141] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[334] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[335] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[136] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[141] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[333] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[140] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[334] /* pwLine1.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp29, data->localData[0]->timeValue, data->simulationInfo->realParameter[337] /* pwLine1.t1 PARAM */, 9, GreaterEq);
  RELATIONHYSTERESIS(tmp30, data->localData[0]->timeValue, data->simulationInfo->realParameter[338] /* pwLine1.t2 PARAM */, 10, Less);
  res[12] = ((tmp29 && tmp30)?data->localData[0]->realVars[136] /* pwLine1.is.im variable */:data->localData[0]->realVars[140] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[138] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[336] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[136] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[141] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[333] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[140] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[334] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[335] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[137] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[140] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[333] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[141] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[334] /* pwLine1.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp31, data->localData[0]->timeValue, data->simulationInfo->realParameter[337] /* pwLine1.t1 PARAM */, 9, GreaterEq);
  RELATIONHYSTERESIS(tmp32, data->localData[0]->timeValue, data->simulationInfo->realParameter[338] /* pwLine1.t2 PARAM */, 10, Less);
  res[13] = ((tmp31 && tmp32)?data->localData[0]->realVars[134] /* pwLine1.ir.im variable */:data->localData[0]->realVars[138] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[140] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[336] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[134] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[139] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[333] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[138] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[334] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[335] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[135] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[138] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[333] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[139] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[334] /* pwLine1.Y.re PARAM */)))));

  res[14] = (data->localData[0]->realVars[26] /* $cse1 variable */) * (data->localData[0]->realVars[100] /* gENCLS.vq variable */) + ((-data->localData[0]->realVars[27] /* $cse2 variable */)) * (data->localData[0]->realVars[99] /* gENCLS.vd variable */) - data->localData[0]->realVars[138] /* pwLine1.vr.im variable */;

  res[15] = (data->localData[0]->realVars[27] /* $cse2 variable */) * (data->localData[0]->realVars[100] /* gENCLS.vq variable */) + (data->localData[0]->realVars[26] /* $cse1 variable */) * (data->localData[0]->realVars[99] /* gENCLS.vd variable */) - data->localData[0]->realVars[139] /* pwLine1.vr.re variable */;

  RELATIONHYSTERESIS(tmp33, data->localData[0]->timeValue, data->simulationInfo->realParameter[359] /* pwLine4.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp34, data->localData[0]->timeValue, data->simulationInfo->realParameter[360] /* pwLine4.t2 PARAM */, 12, Less);
  res[16] = ((tmp33 && tmp34)?data->localData[0]->realVars[157] /* pwLine4.ir.re variable */:data->localData[0]->realVars[139] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[151] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[358] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[157] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[138] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[355] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[139] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[356] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[357] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[156] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[139] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[355] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[138] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[356] /* pwLine4.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp35, data->localData[0]->timeValue, data->simulationInfo->realParameter[359] /* pwLine4.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp36, data->localData[0]->timeValue, data->simulationInfo->realParameter[360] /* pwLine4.t2 PARAM */, 12, Less);
  res[17] = ((tmp35 && tmp36)?data->localData[0]->realVars[156] /* pwLine4.ir.im variable */:data->localData[0]->realVars[138] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[150] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[358] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[156] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[139] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[355] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[138] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[356] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[357] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[157] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[138] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[355] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[139] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[356] /* pwLine4.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp37, data->localData[0]->timeValue, data->simulationInfo->realParameter[315] /* pwFault.t1 PARAM */, 4, Less);
  tmp46 = (modelica_boolean)tmp37;
  if(tmp46)
  {
    tmp47 = data->localData[0]->realVars[118] /* pwFault.p.ii variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp38, data->localData[0]->timeValue, data->simulationInfo->realParameter[316] /* pwFault.t2 PARAM */, 5, Less);
    tmp44 = (modelica_boolean)(tmp38 && data->simulationInfo->booleanParameter[66] /* pwFault.ground PARAM */);
    if(tmp44)
    {
      tmp45 = data->localData[0]->realVars[151] /* pwLine3.vr.re variable */ - 1e-10;
    }
    else
    {
      RELATIONHYSTERESIS(tmp39, data->localData[0]->timeValue, data->simulationInfo->realParameter[316] /* pwFault.t2 PARAM */, 5, Less);
      tmp42 = (modelica_boolean)tmp39;
      if(tmp42)
      {
        tmp40 = data->simulationInfo->realParameter[314] /* pwFault.X PARAM */;
        tmp41 = data->simulationInfo->realParameter[313] /* pwFault.R PARAM */;
        tmp43 = data->localData[0]->realVars[118] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[313] /* pwFault.R PARAM */) * (data->localData[0]->realVars[150] /* pwLine3.vr.im variable */) - ((data->simulationInfo->realParameter[314] /* pwFault.X PARAM */) * (data->localData[0]->realVars[151] /* pwLine3.vr.re variable */)),(tmp40 * tmp40) + (tmp41 * tmp41),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
      }
      else
      {
        tmp43 = data->localData[0]->realVars[118] /* pwFault.p.ii variable */;
      }
      tmp45 = tmp43;
    }
    tmp47 = tmp45;
  }
  res[18] = tmp47;

  RELATIONHYSTERESIS(tmp48, data->localData[0]->timeValue, data->simulationInfo->realParameter[359] /* pwLine4.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp49, data->localData[0]->timeValue, data->simulationInfo->realParameter[360] /* pwLine4.t2 PARAM */, 12, Less);
  res[19] = ((tmp48 && tmp49)?data->localData[0]->realVars[158] /* pwLine4.is.im variable */:data->localData[0]->realVars[150] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[138] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[358] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[158] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[151] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[355] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[150] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[356] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[357] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[159] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[150] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[355] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[151] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[356] /* pwLine4.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp50, data->localData[0]->timeValue, data->simulationInfo->realParameter[359] /* pwLine4.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp51, data->localData[0]->timeValue, data->simulationInfo->realParameter[360] /* pwLine4.t2 PARAM */, 12, Less);
  res[20] = ((tmp50 && tmp51)?data->localData[0]->realVars[159] /* pwLine4.is.re variable */:data->localData[0]->realVars[151] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[139] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[358] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[159] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[150] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[355] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[151] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[356] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[357] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[158] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[151] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[355] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[150] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[356] /* pwLine4.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp52, data->localData[0]->timeValue, data->simulationInfo->realParameter[337] /* pwLine1.t1 PARAM */, 9, GreaterEq);
  RELATIONHYSTERESIS(tmp53, data->localData[0]->timeValue, data->simulationInfo->realParameter[338] /* pwLine1.t2 PARAM */, 10, Less);
  res[21] = ((tmp52 && tmp53)?data->localData[0]->realVars[135] /* pwLine1.ir.re variable */:data->localData[0]->realVars[139] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[141] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[336] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[135] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[138] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[333] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[139] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[334] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[335] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[134] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[139] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[333] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[138] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[334] /* pwLine1.Y.re PARAM */))))));
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS895(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+22] = {0,4,4,3,3,3,3,4,4,4,4,4,4,6,6,7,7,4,4,8,11,11,8};
  const int rowIndex[116] = {9,10,11,12,5,6,9,10,18,19,20,3,4,18,2,19,20,2,3,4,0,1,9,10,9,10,11,12,0,1,9,10,5,6,9,10,13,16,17,21,13,16,17,21,13,14,15,16,17,21,13,14,15,16,17,21,11,13,15,16,17,20,21,12,13,14,16,17,19,21,5,6,7,8,5,6,7,8,0,2,3,4,17,18,19,20,0,1,3,5,6,8,9,10,11,12,21,0,1,4,5,6,7,9,10,11,12,13,1,2,3,4,16,18,19,20};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((22+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(116*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 116;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(22*sizeof(int));
  inSysData->sparsePattern->maxColors = 10;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (22+1)*sizeof(int));
  
  for(i=2;i<22+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 116*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[21] = 1;
  inSysData->sparsePattern->colorCols[20] = 2;
  inSysData->sparsePattern->colorCols[19] = 3;
  inSysData->sparsePattern->colorCols[18] = 4;
  inSysData->sparsePattern->colorCols[9] = 5;
  inSysData->sparsePattern->colorCols[15] = 5;
  inSysData->sparsePattern->colorCols[8] = 6;
  inSysData->sparsePattern->colorCols[14] = 6;
  inSysData->sparsePattern->colorCols[7] = 7;
  inSysData->sparsePattern->colorCols[13] = 7;
  inSysData->sparsePattern->colorCols[6] = 8;
  inSysData->sparsePattern->colorCols[12] = 8;
  inSysData->sparsePattern->colorCols[17] = 8;
  inSysData->sparsePattern->colorCols[1] = 9;
  inSysData->sparsePattern->colorCols[3] = 9;
  inSysData->sparsePattern->colorCols[4] = 9;
  inSysData->sparsePattern->colorCols[11] = 9;
  inSysData->sparsePattern->colorCols[0] = 10;
  inSysData->sparsePattern->colorCols[2] = 10;
  inSysData->sparsePattern->colorCols[5] = 10;
  inSysData->sparsePattern->colorCols[10] = 10;
  inSysData->sparsePattern->colorCols[16] = 10;
}
void initializeStaticDataNLS895(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for pwLine1.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[136].attribute /* pwLine1.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[136].attribute /* pwLine1.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[136].attribute /* pwLine1.is.im */.max;
  /* static nls data for pwLine.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[124].attribute /* pwLine.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[124].attribute /* pwLine.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[124].attribute /* pwLine.ir.im */.max;
  /* static nls data for pwLine4.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[158].attribute /* pwLine4.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[158].attribute /* pwLine4.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[158].attribute /* pwLine4.is.im */.max;
  /* static nls data for pwLine3.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[146].attribute /* pwLine3.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[146].attribute /* pwLine3.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[146].attribute /* pwLine3.ir.im */.max;
  /* static nls data for pwLine4.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[159].attribute /* pwLine4.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[159].attribute /* pwLine4.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[159].attribute /* pwLine4.is.re */.max;
  /* static nls data for pwLine3.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[147].attribute /* pwLine3.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[147].attribute /* pwLine3.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[147].attribute /* pwLine3.ir.re */.max;
  /* static nls data for pwLine3.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[148].attribute /* pwLine3.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[148].attribute /* pwLine3.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[148].attribute /* pwLine3.is.im */.max;
  /* static nls data for pwLine1.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[137].attribute /* pwLine1.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[137].attribute /* pwLine1.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[137].attribute /* pwLine1.is.re */.max;
  /* static nls data for pwLine3.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[149].attribute /* pwLine3.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[149].attribute /* pwLine3.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[149].attribute /* pwLine3.is.re */.max;
  /* static nls data for pwLine.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[125].attribute /* pwLine.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[125].attribute /* pwLine.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[125].attribute /* pwLine.ir.re */.max;
  /* static nls data for pwLine4.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[156].attribute /* pwLine4.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[156].attribute /* pwLine4.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[156].attribute /* pwLine4.ir.im */.max;
  /* static nls data for pwLine1.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[135].attribute /* pwLine1.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[135].attribute /* pwLine1.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[135].attribute /* pwLine1.ir.re */.max;
  /* static nls data for gENCLS.id */
  sysData->nominal[i] = data->modelData->realVarsData[94].attribute /* gENCLS.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[94].attribute /* gENCLS.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[94].attribute /* gENCLS.id */.max;
  /* static nls data for gENCLS.iq */
  sysData->nominal[i] = data->modelData->realVarsData[95].attribute /* gENCLS.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[95].attribute /* gENCLS.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[95].attribute /* gENCLS.iq */.max;
  /* static nls data for pwLine1.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[139].attribute /* pwLine1.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[139].attribute /* pwLine1.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[139].attribute /* pwLine1.vr.re */.max;
  /* static nls data for pwLine1.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[138].attribute /* pwLine1.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[138].attribute /* pwLine1.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[138].attribute /* pwLine1.vr.im */.max;
  /* static nls data for gENROU.id */
  sysData->nominal[i] = data->modelData->realVarsData[114].attribute /* gENROU.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[114].attribute /* gENROU.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[114].attribute /* gENROU.id */.max;
  /* static nls data for gENROU.iq */
  sysData->nominal[i] = data->modelData->realVarsData[115].attribute /* gENROU.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[115].attribute /* gENROU.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[115].attribute /* gENROU.iq */.max;
  /* static nls data for pwLine3.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[150].attribute /* pwLine3.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[150].attribute /* pwLine3.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[150].attribute /* pwLine3.vr.im */.max;
  /* static nls data for pwLine1.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[141].attribute /* pwLine1.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[141].attribute /* pwLine1.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[141].attribute /* pwLine1.vs.re */.max;
  /* static nls data for pwLine1.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[140].attribute /* pwLine1.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[140].attribute /* pwLine1.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[140].attribute /* pwLine1.vs.im */.max;
  /* static nls data for pwLine3.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[151].attribute /* pwLine3.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[151].attribute /* pwLine3.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[151].attribute /* pwLine3.vr.re */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS895(sysData);
}

void getIterationVarsNLS895(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[136] /* pwLine1.is.im variable */;
  array[1] = data->localData[0]->realVars[124] /* pwLine.ir.im variable */;
  array[2] = data->localData[0]->realVars[158] /* pwLine4.is.im variable */;
  array[3] = data->localData[0]->realVars[146] /* pwLine3.ir.im variable */;
  array[4] = data->localData[0]->realVars[159] /* pwLine4.is.re variable */;
  array[5] = data->localData[0]->realVars[147] /* pwLine3.ir.re variable */;
  array[6] = data->localData[0]->realVars[148] /* pwLine3.is.im variable */;
  array[7] = data->localData[0]->realVars[137] /* pwLine1.is.re variable */;
  array[8] = data->localData[0]->realVars[149] /* pwLine3.is.re variable */;
  array[9] = data->localData[0]->realVars[125] /* pwLine.ir.re variable */;
  array[10] = data->localData[0]->realVars[156] /* pwLine4.ir.im variable */;
  array[11] = data->localData[0]->realVars[135] /* pwLine1.ir.re variable */;
  array[12] = data->localData[0]->realVars[94] /* gENCLS.id variable */;
  array[13] = data->localData[0]->realVars[95] /* gENCLS.iq variable */;
  array[14] = data->localData[0]->realVars[139] /* pwLine1.vr.re variable */;
  array[15] = data->localData[0]->realVars[138] /* pwLine1.vr.im variable */;
  array[16] = data->localData[0]->realVars[114] /* gENROU.id variable */;
  array[17] = data->localData[0]->realVars[115] /* gENROU.iq variable */;
  array[18] = data->localData[0]->realVars[150] /* pwLine3.vr.im variable */;
  array[19] = data->localData[0]->realVars[141] /* pwLine1.vs.re variable */;
  array[20] = data->localData[0]->realVars[140] /* pwLine1.vs.im variable */;
  array[21] = data->localData[0]->realVars[151] /* pwLine3.vr.re variable */;
}


/* inner equations */

/*
equation index: 631
type: SIMPLE_ASSIGN
constantLoad._v = sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_631(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,631};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[141] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[140] /* pwLine1.vs.im variable */;
  data->localData[0]->realVars[55] /* constantLoad.v variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 632
type: SIMPLE_ASSIGN
constantLoad._kP = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a0 + constantLoad.a1 * cos(constantLoad.v * constantLoad.wp) + constantLoad.b1 * sin(constantLoad.v * constantLoad.wp) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_632(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,632};
  modelica_boolean tmp0;
  tmp0 = Less(data->localData[0]->realVars[55] /* constantLoad.v variable */,data->simulationInfo->realParameter[41] /* constantLoad.PQBRAK PARAM */);
  data->localData[0]->realVars[52] /* constantLoad.kP variable */ = (tmp0?data->simulationInfo->realParameter[60] /* constantLoad.a0 PARAM */ + (data->simulationInfo->realParameter[61] /* constantLoad.a1 PARAM */) * (cos((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[67] /* constantLoad.b1 PARAM */) * (sin((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))):1.0);
  TRACE_POP
}
/*
equation index: 633
type: SIMPLE_ASSIGN
constantLoad._kI = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (-1.0 + constantLoad.b2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_633(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,633};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_boolean tmp15;
  modelica_real tmp16;
  tmp0 = Less(data->localData[0]->realVars[55] /* constantLoad.v variable */,0.5);
  tmp15 = (modelica_boolean)tmp0;
  if(tmp15)
  {
    tmp1 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp2 = -1.0 + data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */;
    if(tmp1 < 0.0 && tmp2 != 0.0)
    {
      tmp4 = modf(tmp2, &tmp5);
      
      if(tmp4 > 0.5)
      {
        tmp4 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp4 < -0.5)
      {
        tmp4 += 1.0;
        tmp5 -= 1.0;
      }
      
      if(fabs(tmp4) < 1e-10)
        tmp3 = pow(tmp1, tmp5);
      else
      {
        tmp7 = modf(1.0/tmp2, &tmp6);
        if(tmp7 > 0.5)
        {
          tmp7 -= 1.0;
          tmp6 += 1.0;
        }
        else if(tmp7 < -0.5)
        {
          tmp7 += 1.0;
          tmp6 -= 1.0;
        }
        if(fabs(tmp7) < 1e-10 && ((unsigned long)tmp6 & 1))
        {
          tmp3 = -pow(-tmp1, tmp4)*pow(tmp1, tmp5);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
        }
      }
    }
    else
    {
      tmp3 = pow(tmp1, tmp2);
    }
    if(isnan(tmp3) || isinf(tmp3))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
    }tmp8 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp9 = data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */;
    if(tmp8 < 0.0 && tmp9 != 0.0)
    {
      tmp11 = modf(tmp9, &tmp12);
      
      if(tmp11 > 0.5)
      {
        tmp11 -= 1.0;
        tmp12 += 1.0;
      }
      else if(tmp11 < -0.5)
      {
        tmp11 += 1.0;
        tmp12 -= 1.0;
      }
      
      if(fabs(tmp11) < 1e-10)
        tmp10 = pow(tmp8, tmp12);
      else
      {
        tmp14 = modf(1.0/tmp9, &tmp13);
        if(tmp14 > 0.5)
        {
          tmp14 -= 1.0;
          tmp13 += 1.0;
        }
        else if(tmp14 < -0.5)
        {
          tmp14 += 1.0;
          tmp13 -= 1.0;
        }
        if(fabs(tmp14) < 1e-10 && ((unsigned long)tmp13 & 1))
        {
          tmp10 = -pow(-tmp8, tmp11)*pow(tmp8, tmp12);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp8, tmp9);
        }
      }
    }
    else
    {
      tmp10 = pow(tmp8, tmp9);
    }
    if(isnan(tmp10) || isinf(tmp10))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp8, tmp9);
    }
    tmp16 = (data->simulationInfo->realParameter[62] /* constantLoad.a2 PARAM */) * ((data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */) * ((tmp3) * (exp(((-data->simulationInfo->realParameter[62] /* constantLoad.a2 PARAM */)) * (tmp10)))));
  }
  else
  {
    tmp16 = 1.0;
  }
  data->localData[0]->realVars[51] /* constantLoad.kI variable */ = tmp16;
  TRACE_POP
}
/*
equation index: 634
type: SIMPLE_ASSIGN
constantLoad._Q = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_634(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,634};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */);
  tmp1 = LessEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[71] /* constantLoad.d_t PARAM */);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[44] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[48] /* constantLoad.S_Y.im PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[46] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[70] /* constantLoad.d_Q PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[44] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[48] /* constantLoad.S_Y.im PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[46] /* constantLoad.S_P.im PARAM */);
  }
  data->localData[0]->realVars[49] /* constantLoad.Q variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 635
type: SIMPLE_ASSIGN
constantLoad._P = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_635(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,635};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */);
  tmp1 = LessEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[71] /* constantLoad.d_t PARAM */);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[45] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[49] /* constantLoad.S_Y.re PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[47] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[69] /* constantLoad.d_P PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[45] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[49] /* constantLoad.S_Y.re PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[47] /* constantLoad.S_P.re PARAM */);
  }
  data->localData[0]->realVars[48] /* constantLoad.P variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 636
type: SIMPLE_ASSIGN
eSAC2A._rectifierCommutationVoltageDrop._division._u1 = eSAC2A.rectifierCommutationVoltageDrop.gain2.k * eSAC2A.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_636(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,636};
  data->localData[0]->realVars[79] /* eSAC2A.rectifierCommutationVoltageDrop.division.u1 variable */ = (data->simulationInfo->realParameter[171] /* eSAC2A.rectifierCommutationVoltageDrop.gain2.k PARAM */) * (data->localData[0]->realVars[67] /* eSAC2A.XADIFD variable */);
  TRACE_POP
}
/*
equation index: 637
type: SIMPLE_ASSIGN
eSAC2A._DiffV1._y = eSAC2A.DiffV1.k1 * eSAC2A.FEMAX.k + eSAC2A.DiffV1.k2 * eSAC2A.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_637(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,637};
  data->localData[0]->realVars[58] /* eSAC2A.DiffV1.y variable */ = (data->simulationInfo->realParameter[85] /* eSAC2A.DiffV1.k1 PARAM */) * (data->simulationInfo->realParameter[97] /* eSAC2A.FEMAX.k PARAM */) + (data->simulationInfo->realParameter[86] /* eSAC2A.DiffV1.k2 PARAM */) * (data->localData[0]->realVars[67] /* eSAC2A.XADIFD variable */);
  TRACE_POP
}
/*
equation index: 638
type: SIMPLE_ASSIGN
eSAC2A._EFD = eSAC2A.XADIFD + $DER.gENROU.Epq * gENROU.Tpd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_638(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,638};
  data->localData[0]->realVars[65] /* eSAC2A.EFD variable */ = data->localData[0]->realVars[67] /* eSAC2A.XADIFD variable */ + (data->localData[0]->realVars[21] /* der(gENROU.Epq) STATE_DER */) * (data->simulationInfo->realParameter[271] /* gENROU.Tpd0 PARAM */);
  TRACE_POP
}
/*
equation index: 639
type: SIMPLE_ASSIGN
eSAC2A._DiffV2._u2 = OpenIPSL.NonElectrical.Functions.SE(eSAC2A.EFD, eSAC2A.se1.SE1, eSAC2A.se1.SE2, eSAC2A.se1.E1, eSAC2A.se1.E2)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_639(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,639};
  data->localData[0]->realVars[59] /* eSAC2A.DiffV2.u2 variable */ = omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->localData[0]->realVars[65] /* eSAC2A.EFD variable */, data->simulationInfo->realParameter[193] /* eSAC2A.se1.SE1 PARAM */, data->simulationInfo->realParameter[194] /* eSAC2A.se1.SE2 PARAM */, data->simulationInfo->realParameter[191] /* eSAC2A.se1.E1 PARAM */, data->simulationInfo->realParameter[192] /* eSAC2A.se1.E2 PARAM */);
  TRACE_POP
}
/*
equation index: 640
type: SIMPLE_ASSIGN
eSAC2A._DiffV2._y = eSAC2A.DiffV2.k1 * eSAC2A.const.k + eSAC2A.DiffV2.k2 * eSAC2A.DiffV2.u2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_640(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,640};
  data->localData[0]->realVars[60] /* eSAC2A.DiffV2.y variable */ = (data->simulationInfo->realParameter[88] /* eSAC2A.DiffV2.k1 PARAM */) * (data->simulationInfo->realParameter[133] /* eSAC2A.const.k PARAM */) + (data->simulationInfo->realParameter[89] /* eSAC2A.DiffV2.k2 PARAM */) * (data->localData[0]->realVars[59] /* eSAC2A.DiffV2.u2 variable */);
  TRACE_POP
}
/*
equation index: 641
type: SIMPLE_ASSIGN
eSAC2A._rotatingExciterWithDemagnetization._sISO._outMax = eSAC2A.DiffV1.y / eSAC2A.DiffV2.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_641(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,641};
  data->localData[0]->realVars[87] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.outMax variable */ = DIVISION_SIM(data->localData[0]->realVars[58] /* eSAC2A.DiffV1.y variable */,data->localData[0]->realVars[60] /* eSAC2A.DiffV2.y variable */,"eSAC2A.DiffV2.y",equationIndexes);
  TRACE_POP
}
/*
equation index: 642
type: SIMPLE_ASSIGN
eSAC2A._Ifd0 = eSAC2A.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_642(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,642};
  data->simulationInfo->realParameter[99] /* eSAC2A.Ifd0 PARAM */ = data->localData[0]->realVars[67] /* eSAC2A.XADIFD variable */;
  TRACE_POP
}
/*
equation index: 643
type: SIMPLE_ASSIGN
eSAC2A._VE0 = OpenIPSL.Electrical.Controls.PSSE.ES.BaseClasses.invFEX(eSAC2A.K_C, eSAC2A.Efd0, eSAC2A.Ifd0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_643(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,643};
  data->simulationInfo->realParameter[115] /* eSAC2A.VE0 PARAM */ = omc_OpenIPSL_Electrical_Controls_PSSE_ES_BaseClasses_invFEX(threadData, data->simulationInfo->realParameter[102] /* eSAC2A.K_C PARAM */, data->simulationInfo->realParameter[96] /* eSAC2A.Efd0 PARAM */, data->simulationInfo->realParameter[99] /* eSAC2A.Ifd0 PARAM */);
  TRACE_POP
}
/*
equation index: 644
type: SIMPLE_ASSIGN
eSAC2A._VFE0 = eSAC2A.VE0 * (OpenIPSL.NonElectrical.Functions.SE(eSAC2A.VE0, eSAC2A.S_EE_1, eSAC2A.S_EE_2, eSAC2A.E_1, eSAC2A.E_2) + eSAC2A.K_E) + eSAC2A.Ifd0 * eSAC2A.K_D
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_644(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,644};
  data->simulationInfo->realParameter[116] /* eSAC2A.VFE0 PARAM */ = (data->simulationInfo->realParameter[115] /* eSAC2A.VE0 PARAM */) * (omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->simulationInfo->realParameter[115] /* eSAC2A.VE0 PARAM */, data->simulationInfo->realParameter[107] /* eSAC2A.S_EE_1 PARAM */, data->simulationInfo->realParameter[108] /* eSAC2A.S_EE_2 PARAM */, data->simulationInfo->realParameter[94] /* eSAC2A.E_1 PARAM */, data->simulationInfo->realParameter[95] /* eSAC2A.E_2 PARAM */) + data->simulationInfo->realParameter[104] /* eSAC2A.K_E PARAM */) + (data->simulationInfo->realParameter[99] /* eSAC2A.Ifd0 PARAM */) * (data->simulationInfo->realParameter[103] /* eSAC2A.K_D PARAM */);
  TRACE_POP
}
/*
equation index: 645
type: SIMPLE_ASSIGN
eSAC2A._VR0 = eSAC2A.VFE0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_645(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,645};
  data->simulationInfo->realParameter[119] /* eSAC2A.VR0 PARAM */ = data->simulationInfo->realParameter[116] /* eSAC2A.VFE0 PARAM */;
  TRACE_POP
}
/*
equation index: 646
type: SIMPLE_ASSIGN
eSAC2A._imLeadLag._y_start = eSAC2A.VR0 / eSAC2A.K_A
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_646(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,646};
  data->simulationInfo->realParameter[159] /* eSAC2A.imLeadLag.y_start PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[119] /* eSAC2A.VR0 PARAM */,data->simulationInfo->realParameter[100] /* eSAC2A.K_A PARAM */,"eSAC2A.K_A",equationIndexes);
  TRACE_POP
}
/*
equation index: 647
type: SIMPLE_ASSIGN
eSAC2A._imLeadLag._TF._y_start = eSAC2A.imLeadLag.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_647(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,647};
  data->simulationInfo->realParameter[155] /* eSAC2A.imLeadLag.TF.y_start PARAM */ = data->simulationInfo->realParameter[159] /* eSAC2A.imLeadLag.y_start PARAM */;
  TRACE_POP
}
/*
equation index: 648
type: SIMPLE_ASSIGN
eSAC2A._imLeadLag._TF._y = eSAC2A.imLeadLag.TF.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_648(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,648};
  data->localData[0]->realVars[74] /* eSAC2A.imLeadLag.TF.y variable */ = data->simulationInfo->realParameter[155] /* eSAC2A.imLeadLag.TF.y_start PARAM */;
  TRACE_POP
}
/*
equation index: 649
type: SIMPLE_ASSIGN
eSAC2A._simpleLagLim._y_start = eSAC2A.VR0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_649(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,649};
  data->simulationInfo->realParameter[201] /* eSAC2A.simpleLagLim.y_start PARAM */ = data->simulationInfo->realParameter[119] /* eSAC2A.VR0 PARAM */;
  TRACE_POP
}
/*
equation index: 650
type: SIMPLE_ASSIGN
_omcQuot_245354415254._eSAC2A._DiffV3._u2 = eSAC2A.simpleLagLim.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_650(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,650};
  data->modelData->realVarsData[62].attribute /* eSAC2A.DiffV3.u2 variable */.start = data->simulationInfo->realParameter[201] /* eSAC2A.simpleLagLim.y_start PARAM */;
    data->localData[0]->realVars[62] /* eSAC2A.DiffV3.u2 variable */ = data->modelData->realVarsData[62].attribute /* eSAC2A.DiffV3.u2 variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[62].info /* eSAC2A.DiffV3.u2 */.name, (modelica_real) data->localData[0]->realVars[62] /* eSAC2A.DiffV3.u2 variable */);
  TRACE_POP
}
/*
equation index: 651
type: SIMPLE_ASSIGN
eSAC2A._simpleLagLim._state = eSAC2A.simpleLagLim.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_651(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,651};
  data->localData[0]->realVars[4] /* eSAC2A.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[201] /* eSAC2A.simpleLagLim.y_start PARAM */;
  TRACE_POP
}
/*
equation index: 652
type: SIMPLE_ASSIGN
eSAC2A._rotatingExciterWithDemagnetization._Efd0 = eSAC2A.VE0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_652(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,652};
  data->simulationInfo->realParameter[174] /* eSAC2A.rotatingExciterWithDemagnetization.Efd0 PARAM */ = data->simulationInfo->realParameter[115] /* eSAC2A.VE0 PARAM */;
  TRACE_POP
}
/*
equation index: 653
type: SIMPLE_ASSIGN
eSAC2A._rotatingExciterWithDemagnetization._sISO._y_start = eSAC2A.rotatingExciterWithDemagnetization.Efd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_653(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,653};
  data->simulationInfo->realParameter[186] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.y_start PARAM */ = data->simulationInfo->realParameter[174] /* eSAC2A.rotatingExciterWithDemagnetization.Efd0 PARAM */;
  TRACE_POP
}
/*
equation index: 654
type: SIMPLE_ASSIGN
eSAC2A._rotatingExciterWithDemagnetization._sISO._w = if eSAC2A.rotatingExciterWithDemagnetization.sISO.y_start >= eSAC2A.rotatingExciterWithDemagnetization.sISO.outMax then eSAC2A.rotatingExciterWithDemagnetization.sISO.outMax else if eSAC2A.rotatingExciterWithDemagnetization.sISO.y_start <= eSAC2A.rotatingExciterWithDemagnetization.sISO.outMin then eSAC2A.rotatingExciterWithDemagnetization.sISO.outMin else eSAC2A.rotatingExciterWithDemagnetization.sISO.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_654(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,654};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  tmp0 = GreaterEq(data->simulationInfo->realParameter[186] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.y_start PARAM */,data->localData[0]->realVars[87] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.outMax variable */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->localData[0]->realVars[87] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.outMax variable */;
  }
  else
  {
    tmp1 = LessEq(data->simulationInfo->realParameter[186] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.y_start PARAM */,data->localData[0]->realVars[88] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.outMin variable */);
    tmp3 = (tmp1?data->localData[0]->realVars[88] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.outMin variable */:data->simulationInfo->realParameter[186] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.y_start PARAM */);
  }
  data->localData[0]->realVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.w STATE(1) */ = tmp3;
  TRACE_POP
}
/*
equation index: 655
type: ALGORITHM

  eSAC2A.rotatingExciterWithDemagnetization.sISO.initVar := $START.eSAC2A.rotatingExciterWithDemagnetization.sISO.initVar;
  eSAC2A.rotatingExciterWithDemagnetization.sISO.Reinit := $START.eSAC2A.rotatingExciterWithDemagnetization.sISO.Reinit;
  eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachLower := $START.eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachLower;
  eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachUpper := $START.eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachUpper;
  eSAC2A.rotatingExciterWithDemagnetization.sISO.Falling := $START.eSAC2A.rotatingExciterWithDemagnetization.sISO.Falling;
  eSAC2A.rotatingExciterWithDemagnetization.sISO.Rising := $START.eSAC2A.rotatingExciterWithDemagnetization.sISO.Rising;
  if eSAC2A.rotatingExciterWithDemagnetization.feedback.y > 1e-15 then
    eSAC2A.rotatingExciterWithDemagnetization.sISO.Rising := true;
    eSAC2A.rotatingExciterWithDemagnetization.sISO.Falling := false;
  elseif eSAC2A.rotatingExciterWithDemagnetization.feedback.y < -1e-15 then
    eSAC2A.rotatingExciterWithDemagnetization.sISO.Rising := false;
    eSAC2A.rotatingExciterWithDemagnetization.sISO.Falling := true;
  else
    eSAC2A.rotatingExciterWithDemagnetization.sISO.Rising := false;
    eSAC2A.rotatingExciterWithDemagnetization.sISO.Falling := false;
  end if;
  if eSAC2A.rotatingExciterWithDemagnetization.sISO.w > eSAC2A.rotatingExciterWithDemagnetization.sISO.outMax then
    eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachUpper := true;
    eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachLower := false;
  elseif eSAC2A.rotatingExciterWithDemagnetization.sISO.w < eSAC2A.rotatingExciterWithDemagnetization.sISO.outMin then
    eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachLower := true;
    eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachUpper := false;
  else
    eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachUpper := false;
    eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachLower := false;
  end if;
  if eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachUpper and eSAC2A.rotatingExciterWithDemagnetization.sISO.Falling then
    eSAC2A.rotatingExciterWithDemagnetization.sISO.Reinit := true;
    eSAC2A.rotatingExciterWithDemagnetization.sISO.initVar := eSAC2A.rotatingExciterWithDemagnetization.sISO.outMax;
  elseif eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachLower and eSAC2A.rotatingExciterWithDemagnetization.sISO.Rising then
    eSAC2A.rotatingExciterWithDemagnetization.sISO.Reinit := true;
    eSAC2A.rotatingExciterWithDemagnetization.sISO.initVar := eSAC2A.rotatingExciterWithDemagnetization.sISO.outMin;
  end if;
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_655(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,655};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  data->localData[0]->realVars[86] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.initVar variable */ = data->modelData->realVarsData[86].attribute /* eSAC2A.rotatingExciterWithDemagnetization.sISO.initVar variable */.start;

  data->localData[0]->booleanVars[6] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.Reinit DISCRETE */ = data->modelData->booleanVarsData[6].attribute /* eSAC2A.rotatingExciterWithDemagnetization.sISO.Reinit DISCRETE */.start;

  data->localData[0]->booleanVars[4] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachLower DISCRETE */ = data->modelData->booleanVarsData[4].attribute /* eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachLower DISCRETE */.start;

  data->localData[0]->booleanVars[5] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachUpper DISCRETE */ = data->modelData->booleanVarsData[5].attribute /* eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachUpper DISCRETE */.start;

  data->localData[0]->booleanVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.Falling DISCRETE */ = data->modelData->booleanVarsData[3].attribute /* eSAC2A.rotatingExciterWithDemagnetization.sISO.Falling DISCRETE */.start;

  data->localData[0]->booleanVars[7] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.Rising DISCRETE */ = data->modelData->booleanVarsData[7].attribute /* eSAC2A.rotatingExciterWithDemagnetization.sISO.Rising DISCRETE */.start;

  tmp0 = Greater(data->localData[0]->realVars[85] /* eSAC2A.rotatingExciterWithDemagnetization.feedback.y variable */,1e-15);
  if(tmp0)
  {
    data->localData[0]->booleanVars[7] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.Rising DISCRETE */ = 1;

    data->localData[0]->booleanVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.Falling DISCRETE */ = 0;
  }
  else
  {
    tmp1 = Less(data->localData[0]->realVars[85] /* eSAC2A.rotatingExciterWithDemagnetization.feedback.y variable */,-1e-15);
    if(tmp1)
    {
      data->localData[0]->booleanVars[7] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.Rising DISCRETE */ = 0;

      data->localData[0]->booleanVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.Falling DISCRETE */ = 1;
    }
    else
    {
      data->localData[0]->booleanVars[7] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.Rising DISCRETE */ = 0;

      data->localData[0]->booleanVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.Falling DISCRETE */ = 0;
    }
  }

  tmp2 = Greater(data->localData[0]->realVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.w STATE(1) */,data->localData[0]->realVars[87] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.outMax variable */);
  if(tmp2)
  {
    data->localData[0]->booleanVars[5] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachUpper DISCRETE */ = 1;

    data->localData[0]->booleanVars[4] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachLower DISCRETE */ = 0;
  }
  else
  {
    tmp3 = Less(data->localData[0]->realVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.w STATE(1) */,data->localData[0]->realVars[88] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.outMin variable */);
    if(tmp3)
    {
      data->localData[0]->booleanVars[4] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachLower DISCRETE */ = 1;

      data->localData[0]->booleanVars[5] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachUpper DISCRETE */ = 0;
    }
    else
    {
      data->localData[0]->booleanVars[5] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachUpper DISCRETE */ = 0;

      data->localData[0]->booleanVars[4] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachLower DISCRETE */ = 0;
    }
  }

  if((data->localData[0]->booleanVars[5] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachUpper DISCRETE */ && data->localData[0]->booleanVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.Falling DISCRETE */))
  {
    data->localData[0]->booleanVars[6] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.Reinit DISCRETE */ = 1;

    data->localData[0]->realVars[86] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.initVar variable */ = data->localData[0]->realVars[87] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.outMax variable */;
  }
  else
  {
    if((data->localData[0]->booleanVars[4] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachLower DISCRETE */ && data->localData[0]->booleanVars[7] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.Rising DISCRETE */))
    {
      data->localData[0]->booleanVars[6] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.Reinit DISCRETE */ = 1;

      data->localData[0]->realVars[86] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.initVar variable */ = data->localData[0]->realVars[88] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.outMin variable */;
    }
  }
  TRACE_POP
}
/*
equation index: 656
type: SIMPLE_ASSIGN
eSAC2A._rectifierCommutationVoltageDrop._V_EX = if eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachUpper then eSAC2A.rotatingExciterWithDemagnetization.sISO.outMax else if eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachLower then eSAC2A.rotatingExciterWithDemagnetization.sISO.outMin else eSAC2A.rotatingExciterWithDemagnetization.sISO.w
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_656(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,656};
  data->localData[0]->realVars[78] /* eSAC2A.rectifierCommutationVoltageDrop.V_EX variable */ = (data->localData[0]->booleanVars[5] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachUpper DISCRETE */?data->localData[0]->realVars[87] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.outMax variable */:(data->localData[0]->booleanVars[4] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachLower DISCRETE */?data->localData[0]->realVars[88] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.outMin variable */:data->localData[0]->realVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.w STATE(1) */));
  TRACE_POP
}
/*
equation index: 657
type: SIMPLE_ASSIGN
eSAC2A._rotatingExciterWithDemagnetization._VE._u2 = OpenIPSL.NonElectrical.Functions.SE(eSAC2A.rectifierCommutationVoltageDrop.V_EX, eSAC2A.rotatingExciterWithDemagnetization.se1.SE1, eSAC2A.rotatingExciterWithDemagnetization.se1.SE2, eSAC2A.rotatingExciterWithDemagnetization.se1.E1, eSAC2A.rotatingExciterWithDemagnetization.se1.E2)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_657(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,657};
  data->localData[0]->realVars[84] /* eSAC2A.rotatingExciterWithDemagnetization.VE.u2 variable */ = omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->localData[0]->realVars[78] /* eSAC2A.rectifierCommutationVoltageDrop.V_EX variable */, data->simulationInfo->realParameter[189] /* eSAC2A.rotatingExciterWithDemagnetization.se1.SE1 PARAM */, data->simulationInfo->realParameter[190] /* eSAC2A.rotatingExciterWithDemagnetization.se1.SE2 PARAM */, data->simulationInfo->realParameter[187] /* eSAC2A.rotatingExciterWithDemagnetization.se1.E1 PARAM */, data->simulationInfo->realParameter[188] /* eSAC2A.rotatingExciterWithDemagnetization.se1.E2 PARAM */);
  TRACE_POP
}
/*
equation index: 658
type: SIMPLE_ASSIGN
eSAC2A._rectifierCommutationVoltageDrop._division._y = eSAC2A.rectifierCommutationVoltageDrop.division.u1 / eSAC2A.rectifierCommutationVoltageDrop.V_EX
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_658(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,658};
  data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */ = DIVISION_SIM(data->localData[0]->realVars[79] /* eSAC2A.rectifierCommutationVoltageDrop.division.u1 variable */,data->localData[0]->realVars[78] /* eSAC2A.rectifierCommutationVoltageDrop.V_EX variable */,"eSAC2A.rectifierCommutationVoltageDrop.V_EX",equationIndexes);
  TRACE_POP
}
/*
equation index: 659
type: SIMPLE_ASSIGN
eSAC2A._rectifierCommutationVoltageDrop._fEX._y = if eSAC2A.rectifierCommutationVoltageDrop.division.y <= 0.0 then 1.0 else if eSAC2A.rectifierCommutationVoltageDrop.division.y > 0.0 and eSAC2A.rectifierCommutationVoltageDrop.division.y <= 0.433 then 1.0 + (-0.577) * eSAC2A.rectifierCommutationVoltageDrop.division.y else if eSAC2A.rectifierCommutationVoltageDrop.division.y > 0.433 and eSAC2A.rectifierCommutationVoltageDrop.division.y < 0.75 then sqrt(0.75 - eSAC2A.rectifierCommutationVoltageDrop.division.y ^ 2.0) else if eSAC2A.rectifierCommutationVoltageDrop.division.y >= 0.75 and eSAC2A.rectifierCommutationVoltageDrop.division.y <= 1.0 then 1.732 * (1.0 - eSAC2A.rectifierCommutationVoltageDrop.division.y) else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_659(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,659};
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
  tmp0 = LessEq(data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */,0.0);
  tmp13 = (modelica_boolean)tmp0;
  if(tmp13)
  {
    tmp14 = 1.0;
  }
  else
  {
    tmp1 = Greater(data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */,0.0);
    tmp2 = LessEq(data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */,0.433);
    tmp11 = (modelica_boolean)(tmp1 && tmp2);
    if(tmp11)
    {
      tmp12 = 1.0 + (-0.577) * (data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */);
    }
    else
    {
      tmp3 = Greater(data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */,0.433);
      tmp4 = Less(data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */,0.75);
      tmp9 = (modelica_boolean)(tmp3 && tmp4);
      if(tmp9)
      {
        tmp5 = data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */;
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
        tmp7 = GreaterEq(data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */,0.75);
        tmp8 = LessEq(data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */,1.0);
        tmp10 = ((tmp7 && tmp8)?(1.732) * (1.0 - data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */):0.0);
      }
      tmp12 = tmp10;
    }
    tmp14 = tmp12;
  }
  data->localData[0]->realVars[81] /* eSAC2A.rectifierCommutationVoltageDrop.fEX.y variable */ = tmp14;
  TRACE_POP
}
/*
equation index: 660
type: SIMPLE_ASSIGN
eSAC2A._rotatingExciterWithDemagnetization._Sum._u1 = eSAC2A.rectifierCommutationVoltageDrop.V_EX * eSAC2A.rotatingExciterWithDemagnetization.VE.u2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_660(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,660};
  data->localData[0]->realVars[82] /* eSAC2A.rotatingExciterWithDemagnetization.Sum.u1 variable */ = (data->localData[0]->realVars[78] /* eSAC2A.rectifierCommutationVoltageDrop.V_EX variable */) * (data->localData[0]->realVars[84] /* eSAC2A.rotatingExciterWithDemagnetization.VE.u2 variable */);
  TRACE_POP
}
/*
equation index: 661
type: SIMPLE_ASSIGN
eSAC2A._rotatingExciterWithDemagnetization._Sum._u2 = eSAC2A.rotatingExciterWithDemagnetization.gain.k * eSAC2A.rectifierCommutationVoltageDrop.V_EX
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_661(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,661};
  data->localData[0]->realVars[83] /* eSAC2A.rotatingExciterWithDemagnetization.Sum.u2 variable */ = (data->simulationInfo->realParameter[183] /* eSAC2A.rotatingExciterWithDemagnetization.gain.k PARAM */) * (data->localData[0]->realVars[78] /* eSAC2A.rectifierCommutationVoltageDrop.V_EX variable */);
  TRACE_POP
}
/*
equation index: 662
type: SIMPLE_ASSIGN
eSAC2A._derivative._u = eSAC2A.rotatingExciterWithDemagnetization.Sum.k1 * eSAC2A.rotatingExciterWithDemagnetization.Sum.u1 + eSAC2A.rotatingExciterWithDemagnetization.Sum.k2 * eSAC2A.rotatingExciterWithDemagnetization.Sum.u2 + eSAC2A.rotatingExciterWithDemagnetization.Sum.k3 * eSAC2A.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_662(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,662};
  data->localData[0]->realVars[69] /* eSAC2A.derivative.u variable */ = (data->simulationInfo->realParameter[179] /* eSAC2A.rotatingExciterWithDemagnetization.Sum.k1 PARAM */) * (data->localData[0]->realVars[82] /* eSAC2A.rotatingExciterWithDemagnetization.Sum.u1 variable */) + (data->simulationInfo->realParameter[180] /* eSAC2A.rotatingExciterWithDemagnetization.Sum.k2 PARAM */) * (data->localData[0]->realVars[83] /* eSAC2A.rotatingExciterWithDemagnetization.Sum.u2 variable */) + (data->simulationInfo->realParameter[181] /* eSAC2A.rotatingExciterWithDemagnetization.Sum.k3 PARAM */) * (data->localData[0]->realVars[67] /* eSAC2A.XADIFD variable */);
  TRACE_POP
}
/*
equation index: 663
type: SIMPLE_ASSIGN
eSAC2A._DiffV3._u1 = eSAC2A.gain.k * eSAC2A.derivative.u
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_663(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,663};
  data->localData[0]->realVars[61] /* eSAC2A.DiffV3.u1 variable */ = (data->simulationInfo->realParameter[139] /* eSAC2A.gain.k PARAM */) * (data->localData[0]->realVars[69] /* eSAC2A.derivative.u variable */);
  TRACE_POP
}
/*
equation index: 664
type: SIMPLE_ASSIGN
eSAC2A._limiter1._y = eSAC2A.derivative.u + eSAC2A.rotatingExciterWithDemagnetization.feedback.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_664(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,664};
  data->localData[0]->realVars[77] /* eSAC2A.limiter1.y variable */ = data->localData[0]->realVars[69] /* eSAC2A.derivative.u variable */ + data->localData[0]->realVars[85] /* eSAC2A.rotatingExciterWithDemagnetization.feedback.y variable */;
  TRACE_POP
}
/*
equation index: 665
type: SIMPLE_ASSIGN
eSAC2A._lV_GATE._p = eSAC2A.limiter1.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_665(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,665};
  data->localData[0]->realVars[76] /* eSAC2A.lV_GATE.p variable */ = data->localData[0]->realVars[77] /* eSAC2A.limiter1.y variable */;
  TRACE_POP
}
/*
equation index: 666
type: SIMPLE_ASSIGN
eSAC2A._ECOMP0 = eSAC2A.ECOMP
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_666(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,666};
  data->simulationInfo->realParameter[93] /* eSAC2A.ECOMP0 PARAM */ = data->localData[0]->realVars[64] /* eSAC2A.ECOMP variable */;
  TRACE_POP
}
/*
equation index: 667
type: SIMPLE_ASSIGN
eSAC2A._V_REF = eSAC2A.VR0 / eSAC2A.K_A + eSAC2A.ECOMP0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_667(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,667};
  data->simulationInfo->realParameter[124] /* eSAC2A.V_REF PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[119] /* eSAC2A.VR0 PARAM */,data->simulationInfo->realParameter[100] /* eSAC2A.K_A PARAM */,"eSAC2A.K_A",equationIndexes) + data->simulationInfo->realParameter[93] /* eSAC2A.ECOMP0 PARAM */;
  TRACE_POP
}
/*
equation index: 668
type: SIMPLE_ASSIGN
eSAC2A._VoltageReference._k = eSAC2A.V_REF
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_668(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,668};
  data->simulationInfo->realParameter[127] /* eSAC2A.VoltageReference.k PARAM */ = data->simulationInfo->realParameter[124] /* eSAC2A.V_REF PARAM */;
  TRACE_POP
}
/*
equation index: 669
type: SIMPLE_ASSIGN
eSAC2A._imSimpleLag._y_start = eSAC2A.ECOMP0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_669(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,669};
  data->simulationInfo->realParameter[164] /* eSAC2A.imSimpleLag.y_start PARAM */ = data->simulationInfo->realParameter[93] /* eSAC2A.ECOMP0 PARAM */;
  TRACE_POP
}
/*
equation index: 670
type: SIMPLE_ASSIGN
_omcQuot_245354415254._eSAC2A._DiffV._u2 = eSAC2A.imSimpleLag.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_670(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,670};
  data->modelData->realVarsData[56].attribute /* eSAC2A.DiffV.u2 variable */.start = data->simulationInfo->realParameter[164] /* eSAC2A.imSimpleLag.y_start PARAM */;
    data->localData[0]->realVars[56] /* eSAC2A.DiffV.u2 variable */ = data->modelData->realVarsData[56].attribute /* eSAC2A.DiffV.u2 variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[56].info /* eSAC2A.DiffV.u2 */.name, (modelica_real) data->localData[0]->realVars[56] /* eSAC2A.DiffV.u2 variable */);
  TRACE_POP
}
/*
equation index: 671
type: SIMPLE_ASSIGN
_omcQuot_245354415254._eSAC2A._imSimpleLag._state = eSAC2A.imSimpleLag.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_671(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,671};
  data->modelData->realVarsData[2].attribute /* eSAC2A.imSimpleLag.state STATE(1) */.start = data->simulationInfo->realParameter[164] /* eSAC2A.imSimpleLag.y_start PARAM */;
    data->localData[0]->realVars[2] /* eSAC2A.imSimpleLag.state STATE(1) */ = data->modelData->realVarsData[2].attribute /* eSAC2A.imSimpleLag.state STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[2].info /* eSAC2A.imSimpleLag.state */.name, (modelica_real) data->localData[0]->realVars[2] /* eSAC2A.imSimpleLag.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 672
type: SIMPLE_ASSIGN
eSAC2A._imSimpleLag._state = eSAC2A.imSimpleLag.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_672(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,672};
  data->localData[0]->realVars[2] /* eSAC2A.imSimpleLag.state STATE(1) */ = data->simulationInfo->realParameter[164] /* eSAC2A.imSimpleLag.y_start PARAM */;
  TRACE_POP
}
/*
equation index: 673
type: SIMPLE_ASSIGN
eSAC2A._DiffV._u2 = if abs(eSAC2A.imSimpleLag.T) <= 1e-15 then eSAC2A.ECOMP * eSAC2A.imSimpleLag.K else eSAC2A.imSimpleLag.state
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_673(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,673};
  modelica_boolean tmp0;
  tmp0 = LessEq(fabs(data->simulationInfo->realParameter[161] /* eSAC2A.imSimpleLag.T PARAM */),1e-15);
  data->localData[0]->realVars[56] /* eSAC2A.DiffV.u2 variable */ = (tmp0?(data->localData[0]->realVars[64] /* eSAC2A.ECOMP variable */) * (data->simulationInfo->realParameter[160] /* eSAC2A.imSimpleLag.K PARAM */):data->localData[0]->realVars[2] /* eSAC2A.imSimpleLag.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 674
type: SIMPLE_ASSIGN
eSAC2A._DiffV._y = eSAC2A.DiffV.k1 * eSAC2A.VoltageReference.k + eSAC2A.DiffV.k2 * eSAC2A.DiffV.u2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_674(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,674};
  data->localData[0]->realVars[57] /* eSAC2A.DiffV.y variable */ = (data->simulationInfo->realParameter[82] /* eSAC2A.DiffV.k1 PARAM */) * (data->simulationInfo->realParameter[127] /* eSAC2A.VoltageReference.k PARAM */) + (data->simulationInfo->realParameter[83] /* eSAC2A.DiffV.k2 PARAM */) * (data->localData[0]->realVars[56] /* eSAC2A.DiffV.u2 variable */);
  TRACE_POP
}
/*
equation index: 675
type: SIMPLE_ASSIGN
eSAC2A._add3_1._y = eSAC2A.add3_1.k1 * const.k + eSAC2A.add3_1.k2 * eSAC2A.DiffV.y + eSAC2A.add3_1.k3 * eSAC2A.derivative.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_675(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,675};
  data->localData[0]->realVars[68] /* eSAC2A.add3_1.y variable */ = (data->simulationInfo->realParameter[129] /* eSAC2A.add3_1.k1 PARAM */) * (data->simulationInfo->realParameter[34] /* const.k PARAM */) + (data->simulationInfo->realParameter[130] /* eSAC2A.add3_1.k2 PARAM */) * (data->localData[0]->realVars[57] /* eSAC2A.DiffV.y variable */) + (data->simulationInfo->realParameter[131] /* eSAC2A.add3_1.k3 PARAM */) * (data->localData[0]->realVars[70] /* eSAC2A.derivative.y variable */);
  TRACE_POP
}
/*
equation index: 676
type: SIMPLE_ASSIGN
eSAC2A._imLeadLag._y = if abs(eSAC2A.imLeadLag.T1 - eSAC2A.imLeadLag.T2) < 1e-15 then eSAC2A.imLeadLag.K * eSAC2A.add3_1.y else eSAC2A.imLeadLag.TF.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_676(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,676};
  modelica_boolean tmp0;
  tmp0 = Less(fabs(data->simulationInfo->realParameter[143] /* eSAC2A.imLeadLag.T1 PARAM */ - data->simulationInfo->realParameter[144] /* eSAC2A.imLeadLag.T2 PARAM */),1e-15);
  data->localData[0]->realVars[75] /* eSAC2A.imLeadLag.y variable */ = (tmp0?(data->simulationInfo->realParameter[142] /* eSAC2A.imLeadLag.K PARAM */) * (data->localData[0]->realVars[68] /* eSAC2A.add3_1.y variable */):data->localData[0]->realVars[74] /* eSAC2A.imLeadLag.TF.y variable */);
  TRACE_POP
}
/*
equation index: 677
type: SIMPLE_ASSIGN
eSAC2A._DiffV3._u2 = if abs(eSAC2A.simpleLagLim.T) <= 1e-15 then max(min(eSAC2A.imLeadLag.y * eSAC2A.simpleLagLim.K, eSAC2A.simpleLagLim.outMax), eSAC2A.simpleLagLim.outMin) else max(min(eSAC2A.simpleLagLim.state, eSAC2A.simpleLagLim.outMax), eSAC2A.simpleLagLim.outMin)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_677(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,677};
  modelica_boolean tmp0;
  tmp0 = LessEq(fabs(data->simulationInfo->realParameter[196] /* eSAC2A.simpleLagLim.T PARAM */),1e-15);
  data->localData[0]->realVars[62] /* eSAC2A.DiffV3.u2 variable */ = (tmp0?fmax(fmin((data->localData[0]->realVars[75] /* eSAC2A.imLeadLag.y variable */) * (data->simulationInfo->realParameter[195] /* eSAC2A.simpleLagLim.K PARAM */),data->simulationInfo->realParameter[199] /* eSAC2A.simpleLagLim.outMax PARAM */),data->simulationInfo->realParameter[200] /* eSAC2A.simpleLagLim.outMin PARAM */):fmax(fmin(data->localData[0]->realVars[4] /* eSAC2A.simpleLagLim.state STATE(1) */,data->simulationInfo->realParameter[199] /* eSAC2A.simpleLagLim.outMax PARAM */),data->simulationInfo->realParameter[200] /* eSAC2A.simpleLagLim.outMin PARAM */));
  TRACE_POP
}
/*
equation index: 678
type: SIMPLE_ASSIGN
eSAC2A._DiffV3._y = eSAC2A.DiffV3.k1 * eSAC2A.DiffV3.u1 + eSAC2A.DiffV3.k2 * eSAC2A.DiffV3.u2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_678(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,678};
  data->localData[0]->realVars[63] /* eSAC2A.DiffV3.y variable */ = (data->simulationInfo->realParameter[91] /* eSAC2A.DiffV3.k1 PARAM */) * (data->localData[0]->realVars[61] /* eSAC2A.DiffV3.u1 variable */) + (data->simulationInfo->realParameter[92] /* eSAC2A.DiffV3.k2 PARAM */) * (data->localData[0]->realVars[62] /* eSAC2A.DiffV3.u2 variable */);
  TRACE_POP
}
/*
equation index: 679
type: SIMPLE_ASSIGN
eSAC2A._gain1._y = eSAC2A.gain1.k * eSAC2A.DiffV3.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_679(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,679};
  data->localData[0]->realVars[71] /* eSAC2A.gain1.y variable */ = (data->simulationInfo->realParameter[140] /* eSAC2A.gain1.k PARAM */) * (data->localData[0]->realVars[63] /* eSAC2A.DiffV3.y variable */);
  TRACE_POP
}
/*
equation index: 680
type: SIMPLE_ASSIGN
eSAC2A._hV_GATE._p = if eSAC2A.gain1.y < const5.k then const5.k else eSAC2A.gain1.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_680(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,680};
  modelica_boolean tmp0;
  tmp0 = Less(data->localData[0]->realVars[71] /* eSAC2A.gain1.y variable */,data->simulationInfo->realParameter[38] /* const5.k PARAM */);
  data->localData[0]->realVars[72] /* eSAC2A.hV_GATE.p variable */ = (tmp0?data->simulationInfo->realParameter[38] /* const5.k PARAM */:data->localData[0]->realVars[71] /* eSAC2A.gain1.y variable */);
  TRACE_POP
}
/*
equation index: 681
type: SIMPLE_ASSIGN
pwLine._is._re = (cos(gENROU.delta) * gENROU.iq - (-sin(gENROU.delta)) * gENROU.id) * gENROU.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_681(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,681};
  data->localData[0]->realVars[127] /* pwLine.is.re variable */ = ((cos(data->localData[0]->realVars[11] /* gENROU.delta STATE(1) */)) * (data->localData[0]->realVars[115] /* gENROU.iq variable */) - (((-sin(data->localData[0]->realVars[11] /* gENROU.delta STATE(1) */))) * (data->localData[0]->realVars[114] /* gENROU.id variable */))) * (data->simulationInfo->realParameter[228] /* gENROU.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 682
type: SIMPLE_ASSIGN
pwLine._is._im = (sin(gENROU.delta) * gENROU.iq - cos(gENROU.delta) * gENROU.id) * gENROU.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_682(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,682};
  data->localData[0]->realVars[126] /* pwLine.is.im variable */ = ((sin(data->localData[0]->realVars[11] /* gENROU.delta STATE(1) */)) * (data->localData[0]->realVars[115] /* gENROU.iq variable */) - ((cos(data->localData[0]->realVars[11] /* gENROU.delta STATE(1) */)) * (data->localData[0]->realVars[114] /* gENROU.id variable */))) * (data->simulationInfo->realParameter[228] /* gENROU.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 683
type: SIMPLE_ASSIGN
gENROU._PSIq = (-gENROU.PSIppq) - gENROU.Xppq * gENROU.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_683(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,683};
  data->localData[0]->realVars[108] /* gENROU.PSIq variable */ = (-data->localData[0]->realVars[107] /* gENROU.PSIppq variable */) - ((data->simulationInfo->realParameter[283] /* gENROU.Xppq PARAM */) * (data->localData[0]->realVars[115] /* gENROU.iq variable */));
  TRACE_POP
}
/*
equation index: 684
type: SIMPLE_ASSIGN
gENROU._ud = (-gENROU.PSIq) - gENROU.R_a * gENROU.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_684(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,684};
  data->localData[0]->realVars[116] /* gENROU.ud variable */ = (-data->localData[0]->realVars[108] /* gENROU.PSIq variable */) - ((data->simulationInfo->realParameter[265] /* gENROU.R_a PARAM */) * (data->localData[0]->realVars[114] /* gENROU.id variable */));
  TRACE_POP
}
/*
equation index: 685
type: SIMPLE_ASSIGN
gENROU._PSIpp = sqrt(gENROU.PSIppd ^ 2.0 + gENROU.PSIppq ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_685(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,685};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[106] /* gENROU.PSIppd variable */;
  tmp1 = data->localData[0]->realVars[107] /* gENROU.PSIppq variable */;
  data->localData[0]->realVars[105] /* gENROU.PSIpp variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 686
type: SIMPLE_ASSIGN
gENROU._PSId = gENROU.PSIppd - gENROU.Xppd * gENROU.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_686(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,686};
  data->localData[0]->realVars[104] /* gENROU.PSId variable */ = data->localData[0]->realVars[106] /* gENROU.PSIppd variable */ - ((data->simulationInfo->realParameter[282] /* gENROU.Xppd PARAM */) * (data->localData[0]->realVars[114] /* gENROU.id variable */));
  TRACE_POP
}
/*
equation index: 687
type: SIMPLE_ASSIGN
gENROU._uq = gENROU.PSId - gENROU.R_a * gENROU.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_687(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,687};
  data->localData[0]->realVars[117] /* gENROU.uq variable */ = data->localData[0]->realVars[104] /* gENROU.PSId variable */ - ((data->simulationInfo->realParameter[265] /* gENROU.R_a PARAM */) * (data->localData[0]->realVars[115] /* gENROU.iq variable */));
  TRACE_POP
}
/*
equation index: 688
type: SIMPLE_ASSIGN
gENROU._PSIkd = ((gENROU.Epq + (gENROU.Xl - gENROU.Xpd) * gENROU.id) * gENROU.K1d + gENROU.Epq + gENROU.id * (gENROU.Xd - gENROU.Xpd) + OpenIPSL.NonElectrical.Functions.SE(gENROU.PSIpp, gENROU.S10, gENROU.S12, 1.0, 1.2) * gENROU.PSIppd - eSAC2A.XADIFD) / gENROU.K1d
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_688(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,688};
  data->localData[0]->realVars[9] /* gENROU.PSIkd STATE(1) */ = DIVISION_SIM((data->localData[0]->realVars[8] /* gENROU.Epq STATE(1) */ + (data->simulationInfo->realParameter[279] /* gENROU.Xl PARAM */ - data->simulationInfo->realParameter[280] /* gENROU.Xpd PARAM */) * (data->localData[0]->realVars[114] /* gENROU.id variable */)) * (data->simulationInfo->realParameter[242] /* gENROU.K1d PARAM */) + data->localData[0]->realVars[8] /* gENROU.Epq STATE(1) */ + (data->localData[0]->realVars[114] /* gENROU.id variable */) * (data->simulationInfo->realParameter[278] /* gENROU.Xd PARAM */ - data->simulationInfo->realParameter[280] /* gENROU.Xpd PARAM */) + (omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->localData[0]->realVars[105] /* gENROU.PSIpp variable */, data->simulationInfo->realParameter[268] /* gENROU.S10 PARAM */, data->simulationInfo->realParameter[269] /* gENROU.S12 PARAM */, 1.0, 1.2)) * (data->localData[0]->realVars[106] /* gENROU.PSIppd variable */) - data->localData[0]->realVars[67] /* eSAC2A.XADIFD variable */,data->simulationInfo->realParameter[242] /* gENROU.K1d PARAM */,"gENROU.K1d",equationIndexes);
  TRACE_POP
}
/*
equation index: 689
type: SIMPLE_ASSIGN
gENROU._PSIkq = ((gENROU.Epd + (gENROU.Xpq - gENROU.Xl) * gENROU.iq) * gENROU.K1q + gENROU.Epd + gENROU.iq * (gENROU.Xpq - gENROU.Xq) + OpenIPSL.NonElectrical.Functions.SE(gENROU.PSIpp, gENROU.S10, gENROU.S12, 1.0, 1.2) * gENROU.PSIppq * (gENROU.Xq - gENROU.Xl) / (gENROU.Xd - gENROU.Xl) - gENROU.XaqIlq) / gENROU.K1q
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_689(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,689};
  data->localData[0]->realVars[10] /* gENROU.PSIkq STATE(1) */ = DIVISION_SIM((data->localData[0]->realVars[7] /* gENROU.Epd STATE(1) */ + (data->simulationInfo->realParameter[284] /* gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[279] /* gENROU.Xl PARAM */) * (data->localData[0]->realVars[115] /* gENROU.iq variable */)) * (data->simulationInfo->realParameter[243] /* gENROU.K1q PARAM */) + data->localData[0]->realVars[7] /* gENROU.Epd STATE(1) */ + (data->localData[0]->realVars[115] /* gENROU.iq variable */) * (data->simulationInfo->realParameter[284] /* gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[285] /* gENROU.Xq PARAM */) + (omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->localData[0]->realVars[105] /* gENROU.PSIpp variable */, data->simulationInfo->realParameter[268] /* gENROU.S10 PARAM */, data->simulationInfo->realParameter[269] /* gENROU.S12 PARAM */, 1.0, 1.2)) * ((data->localData[0]->realVars[107] /* gENROU.PSIppq variable */) * (DIVISION_SIM(data->simulationInfo->realParameter[285] /* gENROU.Xq PARAM */ - data->simulationInfo->realParameter[279] /* gENROU.Xl PARAM */,data->simulationInfo->realParameter[278] /* gENROU.Xd PARAM */ - data->simulationInfo->realParameter[279] /* gENROU.Xl PARAM */,"gENROU.Xd - gENROU.Xl",equationIndexes))) - data->localData[0]->realVars[111] /* gENROU.XaqIlq variable */,data->simulationInfo->realParameter[243] /* gENROU.K1q PARAM */,"gENROU.K1q",equationIndexes);
  TRACE_POP
}
/*
equation index: 690
type: SIMPLE_ASSIGN
gENCLS._p._ir = ((-sin(gENCLS.delta)) * gENCLS.id - cos(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_690(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,690};
  data->localData[0]->realVars[98] /* gENCLS.p.ir variable */ = (((-sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[94] /* gENCLS.id variable */) - ((cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[95] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[202] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 691
type: SIMPLE_ASSIGN
gENCLS._p._ii = (cos(gENCLS.delta) * gENCLS.id - sin(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_691(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,691};
  data->localData[0]->realVars[97] /* gENCLS.p.ii variable */ = ((cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[94] /* gENCLS.id variable */) - ((sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[95] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[202] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 692
type: SIMPLE_ASSIGN
gENCLS._vq = gENCLS.eq + (-gENCLS.R_a) * gENCLS.iq - gENCLS.X_d * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_692(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,692};
  data->localData[0]->realVars[100] /* gENCLS.vq variable */ = data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */ + ((-data->simulationInfo->realParameter[208] /* gENCLS.R_a PARAM */)) * (data->localData[0]->realVars[95] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[211] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[94] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 693
type: SIMPLE_ASSIGN
gENCLS._vd = gENCLS.X_d * gENCLS.iq - gENCLS.R_a * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_693(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,693};
  data->localData[0]->realVars[99] /* gENCLS.vd variable */ = (data->simulationInfo->realParameter[211] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[95] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[208] /* gENCLS.R_a PARAM */) * (data->localData[0]->realVars[94] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 694
type: SIMPLE_ASSIGN
pwLine4._ir._im = (-pwLine1.ir.im) - gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_694(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,694};
  data->localData[0]->realVars[156] /* pwLine4.ir.im variable */ = (-data->localData[0]->realVars[134] /* pwLine1.ir.im variable */) - data->localData[0]->realVars[97] /* gENCLS.p.ii variable */;
  TRACE_POP
}
/*
equation index: 695
type: SIMPLE_ASSIGN
pwLine4._ir._re = (-pwLine1.ir.re) - gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_695(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,695};
  data->localData[0]->realVars[157] /* pwLine4.ir.re variable */ = (-data->localData[0]->realVars[135] /* pwLine1.ir.re variable */) - data->localData[0]->realVars[98] /* gENCLS.p.ir variable */;
  TRACE_POP
}
/*
equation index: 696
type: SIMPLE_ASSIGN
pwFault._p._ir = (-pwLine3.ir.re) - pwLine4.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_696(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,696};
  data->localData[0]->realVars[119] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[147] /* pwLine3.ir.re variable */) - data->localData[0]->realVars[159] /* pwLine4.is.re variable */;
  TRACE_POP
}
/*
equation index: 697
type: SIMPLE_ASSIGN
pwFault._p._ii = (-pwLine3.ir.im) - pwLine4.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_697(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,697};
  data->localData[0]->realVars[118] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[146] /* pwLine3.ir.im variable */) - data->localData[0]->realVars[158] /* pwLine4.is.im variable */;
  TRACE_POP
}
/*
equation index: 698
type: SIMPLE_ASSIGN
pwLine3._is._re = (-pwLine.ir.re) - pwLine1.is.re - constantLoad.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_698(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,698};
  data->localData[0]->realVars[149] /* pwLine3.is.re variable */ = (-data->localData[0]->realVars[125] /* pwLine.ir.re variable */) - data->localData[0]->realVars[137] /* pwLine1.is.re variable */ - data->localData[0]->realVars[54] /* constantLoad.p.ir variable */;
  TRACE_POP
}
/*
equation index: 699
type: SIMPLE_ASSIGN
pwLine1._is._im = (-pwLine.ir.im) - pwLine3.is.im - constantLoad.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_699(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,699};
  data->localData[0]->realVars[136] /* pwLine1.is.im variable */ = (-data->localData[0]->realVars[124] /* pwLine.ir.im variable */) - data->localData[0]->realVars[148] /* pwLine3.is.im variable */ - data->localData[0]->realVars[53] /* constantLoad.p.ii variable */;
  TRACE_POP
}

void residualFunc731(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,731};
  int i;
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  modelica_boolean tmp10;
  modelica_real tmp11;
  modelica_boolean tmp12;
  modelica_real tmp13;
  modelica_boolean tmp14;
  modelica_boolean tmp15;
  modelica_boolean tmp16;
  modelica_boolean tmp17;
  modelica_boolean tmp18;
  modelica_boolean tmp19;
  modelica_boolean tmp20;
  modelica_boolean tmp21;
  modelica_boolean tmp22;
  modelica_boolean tmp23;
  modelica_boolean tmp24;
  modelica_boolean tmp25;
  modelica_boolean tmp26;
  modelica_real tmp27;
  modelica_real tmp28;
  modelica_boolean tmp29;
  modelica_real tmp30;
  modelica_boolean tmp31;
  modelica_real tmp32;
  modelica_boolean tmp33;
  modelica_real tmp34;
  modelica_boolean tmp35;
  modelica_boolean tmp36;
  modelica_boolean tmp37;
  modelica_boolean tmp38;
  modelica_boolean tmp39;
  modelica_boolean tmp40;
  modelica_boolean tmp41;
  modelica_boolean tmp42;
  modelica_boolean tmp43;
  modelica_boolean tmp44;
  modelica_boolean tmp45;
  modelica_boolean tmp46;
  modelica_boolean tmp47;
  modelica_boolean tmp48;
  modelica_boolean tmp49;
  modelica_boolean tmp50;
  modelica_boolean tmp51;
  modelica_boolean tmp52;
  modelica_boolean tmp53;
  modelica_boolean tmp54;
  modelica_boolean tmp55;
  modelica_boolean tmp56;
  /* iteration variables */
  for (i=0; i<31; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<31; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[124] /* pwLine.ir.im variable */ = xloc[0];
  data->localData[0]->realVars[148] /* pwLine3.is.im variable */ = xloc[1];
  data->localData[0]->realVars[125] /* pwLine.ir.re variable */ = xloc[2];
  data->localData[0]->realVars[137] /* pwLine1.is.re variable */ = xloc[3];
  data->localData[0]->realVars[54] /* constantLoad.p.ir variable */ = xloc[4];
  data->localData[0]->realVars[53] /* constantLoad.p.ii variable */ = xloc[5];
  data->localData[0]->realVars[146] /* pwLine3.ir.im variable */ = xloc[6];
  data->localData[0]->realVars[158] /* pwLine4.is.im variable */ = xloc[7];
  data->localData[0]->realVars[147] /* pwLine3.ir.re variable */ = xloc[8];
  data->localData[0]->realVars[159] /* pwLine4.is.re variable */ = xloc[9];
  data->localData[0]->realVars[135] /* pwLine1.ir.re variable */ = xloc[10];
  data->localData[0]->realVars[134] /* pwLine1.ir.im variable */ = xloc[11];
  data->localData[0]->realVars[94] /* gENCLS.id variable */ = xloc[12];
  data->localData[0]->realVars[95] /* gENCLS.iq variable */ = xloc[13];
  data->localData[0]->realVars[7] /* gENROU.Epd STATE(1) */ = xloc[14];
  data->localData[0]->realVars[8] /* gENROU.Epq STATE(1) */ = xloc[15];
  data->localData[0]->realVars[106] /* gENROU.PSIppd variable */ = xloc[16];
  data->localData[0]->realVars[107] /* gENROU.PSIppq variable */ = xloc[17];
  data->localData[0]->realVars[114] /* gENROU.id variable */ = xloc[18];
  data->localData[0]->realVars[115] /* gENROU.iq variable */ = xloc[19];
  data->localData[0]->realVars[129] /* pwLine.vs.re variable */ = xloc[20];
  data->localData[0]->realVars[128] /* pwLine.vs.im variable */ = xloc[21];
  data->localData[0]->realVars[138] /* pwLine1.vr.im variable */ = xloc[22];
  data->localData[0]->realVars[139] /* pwLine1.vr.re variable */ = xloc[23];
  data->localData[0]->realVars[64] /* eSAC2A.ECOMP variable */ = xloc[24];
  data->localData[0]->realVars[85] /* eSAC2A.rotatingExciterWithDemagnetization.feedback.y variable */ = xloc[25];
  data->localData[0]->realVars[67] /* eSAC2A.XADIFD variable */ = xloc[26];
  data->localData[0]->realVars[140] /* pwLine1.vs.im variable */ = xloc[27];
  data->localData[0]->realVars[151] /* pwLine3.vr.re variable */ = xloc[28];
  data->localData[0]->realVars[150] /* pwLine3.vr.im variable */ = xloc[29];
  data->localData[0]->realVars[141] /* pwLine1.vs.re variable */ = xloc[30];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_631(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_632(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_633(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_634(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_635(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_636(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_637(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_638(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_639(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_640(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_641(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_642(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_643(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_644(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_645(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_646(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_647(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_648(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_649(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_650(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_651(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_652(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_653(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_654(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_655(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_656(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_657(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_658(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_659(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_660(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_661(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_662(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_663(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_664(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_665(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_666(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_667(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_668(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_669(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_670(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_671(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_672(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_673(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_674(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_675(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_676(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_677(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_678(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_679(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_680(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_681(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_682(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_683(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_684(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_685(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_686(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_687(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_688(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_689(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_690(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_691(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_692(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_693(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_694(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_695(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_696(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_697(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_698(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_699(data, threadData);
  /* body */
  res[0] = (sin(data->localData[0]->realVars[11] /* gENROU.delta STATE(1) */)) * (data->localData[0]->realVars[117] /* gENROU.uq variable */) + ((-cos(data->localData[0]->realVars[11] /* gENROU.delta STATE(1) */))) * (data->localData[0]->realVars[116] /* gENROU.ud variable */) - data->localData[0]->realVars[128] /* pwLine.vs.im variable */;

  res[1] = (data->localData[0]->realVars[78] /* eSAC2A.rectifierCommutationVoltageDrop.V_EX variable */) * (data->localData[0]->realVars[81] /* eSAC2A.rectifierCommutationVoltageDrop.fEX.y variable */) - data->localData[0]->realVars[65] /* eSAC2A.EFD variable */;

  tmp0 = Greater(data->simulationInfo->realParameter[36] /* const4.k PARAM */,data->localData[0]->realVars[72] /* eSAC2A.hV_GATE.p variable */);
  res[2] = (tmp0?data->localData[0]->realVars[72] /* eSAC2A.hV_GATE.p variable */:data->simulationInfo->realParameter[36] /* const4.k PARAM */) - data->localData[0]->realVars[76] /* eSAC2A.lV_GATE.p variable */;

  tmp1 = data->localData[0]->realVars[129] /* pwLine.vs.re variable */;
  tmp2 = data->localData[0]->realVars[128] /* pwLine.vs.im variable */;
  res[3] = sqrt((tmp1 * tmp1) + (tmp2 * tmp2)) - data->localData[0]->realVars[64] /* eSAC2A.ECOMP variable */;

  tmp3 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[315] /* pwFault.t1 PARAM */);
  tmp12 = (modelica_boolean)tmp3;
  if(tmp12)
  {
    tmp13 = data->localData[0]->realVars[119] /* pwFault.p.ir variable */;
  }
  else
  {
    tmp4 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[316] /* pwFault.t2 PARAM */);
    tmp10 = (modelica_boolean)(tmp4 && data->simulationInfo->booleanParameter[66] /* pwFault.ground PARAM */);
    if(tmp10)
    {
      tmp11 = data->localData[0]->realVars[150] /* pwLine3.vr.im variable */;
    }
    else
    {
      tmp5 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[316] /* pwFault.t2 PARAM */);
      tmp8 = (modelica_boolean)tmp5;
      if(tmp8)
      {
        tmp6 = data->simulationInfo->realParameter[313] /* pwFault.R PARAM */;
        tmp7 = data->simulationInfo->realParameter[314] /* pwFault.X PARAM */;
        tmp9 = data->localData[0]->realVars[119] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[313] /* pwFault.R PARAM */) * (data->localData[0]->realVars[151] /* pwLine3.vr.re variable */) + (data->simulationInfo->realParameter[314] /* pwFault.X PARAM */) * (data->localData[0]->realVars[150] /* pwLine3.vr.im variable */),(tmp6 * tmp6) + (tmp7 * tmp7),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp9 = data->localData[0]->realVars[119] /* pwFault.p.ir variable */;
      }
      tmp11 = tmp9;
    }
    tmp13 = tmp11;
  }
  res[4] = tmp13;

  res[5] = (sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[100] /* gENCLS.vq variable */) + ((-cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[99] /* gENCLS.vd variable */) - data->localData[0]->realVars[138] /* pwLine1.vr.im variable */;

  res[6] = (cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[100] /* gENCLS.vq variable */) + (sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[99] /* gENCLS.vd variable */) - data->localData[0]->realVars[139] /* pwLine1.vr.re variable */;

  tmp14 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[359] /* pwLine4.t1 PARAM */);
  tmp15 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[360] /* pwLine4.t2 PARAM */);
  res[7] = ((tmp14 && tmp15)?data->localData[0]->realVars[159] /* pwLine4.is.re variable */:data->localData[0]->realVars[151] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[139] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[358] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[159] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[150] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[355] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[151] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[356] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[357] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[158] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[151] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[355] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[150] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[356] /* pwLine4.Y.re PARAM */))))));

  tmp16 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[359] /* pwLine4.t1 PARAM */);
  tmp17 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[360] /* pwLine4.t2 PARAM */);
  res[8] = ((tmp16 && tmp17)?data->localData[0]->realVars[158] /* pwLine4.is.im variable */:data->localData[0]->realVars[150] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[138] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[358] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[158] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[151] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[355] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[150] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[356] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[357] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[159] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[150] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[355] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[151] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[356] /* pwLine4.Y.re PARAM */)))));

  res[9] = (data->localData[0]->realVars[140] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) + ((-data->localData[0]->realVars[141] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[49] /* constantLoad.Q variable */;

  res[10] = (data->localData[0]->realVars[140] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[141] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[48] /* constantLoad.P variable */;

  tmp18 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[337] /* pwLine1.t1 PARAM */);
  tmp19 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[338] /* pwLine1.t2 PARAM */);
  res[11] = ((tmp18 && tmp19)?data->localData[0]->realVars[137] /* pwLine1.is.re variable */:data->localData[0]->realVars[141] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[139] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[336] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[137] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[140] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[333] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[141] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[334] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[335] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[136] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[141] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[333] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[140] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[334] /* pwLine1.Y.re PARAM */))))));

  tmp20 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[348] /* pwLine3.t1 PARAM */);
  tmp21 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[349] /* pwLine3.t2 PARAM */);
  res[12] = ((tmp20 && tmp21)?data->localData[0]->realVars[149] /* pwLine3.is.re variable */:data->localData[0]->realVars[141] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[151] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[347] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[149] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[140] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[344] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[141] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[345] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[346] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[148] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[141] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[344] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[140] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[345] /* pwLine3.Y.re PARAM */))))));

  tmp22 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[348] /* pwLine3.t1 PARAM */);
  tmp23 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[349] /* pwLine3.t2 PARAM */);
  res[13] = ((tmp22 && tmp23)?data->localData[0]->realVars[148] /* pwLine3.is.im variable */:data->localData[0]->realVars[140] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[150] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[347] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[148] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[141] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[344] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[140] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[345] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[346] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[149] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[140] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[344] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[141] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[345] /* pwLine3.Y.re PARAM */)))));

  tmp24 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[315] /* pwFault.t1 PARAM */);
  tmp33 = (modelica_boolean)tmp24;
  if(tmp33)
  {
    tmp34 = data->localData[0]->realVars[118] /* pwFault.p.ii variable */;
  }
  else
  {
    tmp25 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[316] /* pwFault.t2 PARAM */);
    tmp31 = (modelica_boolean)(tmp25 && data->simulationInfo->booleanParameter[66] /* pwFault.ground PARAM */);
    if(tmp31)
    {
      tmp32 = data->localData[0]->realVars[151] /* pwLine3.vr.re variable */ - 1e-10;
    }
    else
    {
      tmp26 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[316] /* pwFault.t2 PARAM */);
      tmp29 = (modelica_boolean)tmp26;
      if(tmp29)
      {
        tmp27 = data->simulationInfo->realParameter[314] /* pwFault.X PARAM */;
        tmp28 = data->simulationInfo->realParameter[313] /* pwFault.R PARAM */;
        tmp30 = data->localData[0]->realVars[118] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[313] /* pwFault.R PARAM */) * (data->localData[0]->realVars[150] /* pwLine3.vr.im variable */) - ((data->simulationInfo->realParameter[314] /* pwFault.X PARAM */) * (data->localData[0]->realVars[151] /* pwLine3.vr.re variable */)),(tmp27 * tmp27) + (tmp28 * tmp28),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
      }
      else
      {
        tmp30 = data->localData[0]->realVars[118] /* pwFault.p.ii variable */;
      }
      tmp32 = tmp30;
    }
    tmp34 = tmp32;
  }
  res[14] = tmp34;

  tmp35 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[348] /* pwLine3.t1 PARAM */);
  tmp36 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[349] /* pwLine3.t2 PARAM */);
  res[15] = ((tmp35 && tmp36)?data->localData[0]->realVars[147] /* pwLine3.ir.re variable */:data->localData[0]->realVars[151] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[141] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[347] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[147] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[150] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[344] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[151] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[345] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[346] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[146] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[151] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[344] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[150] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[345] /* pwLine3.Y.re PARAM */))))));

  tmp37 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[348] /* pwLine3.t1 PARAM */);
  tmp38 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[349] /* pwLine3.t2 PARAM */);
  res[16] = ((tmp37 && tmp38)?data->localData[0]->realVars[146] /* pwLine3.ir.im variable */:data->localData[0]->realVars[150] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[140] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[347] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[146] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[151] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[344] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[150] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[345] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[346] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[147] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[150] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[344] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[151] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[345] /* pwLine3.Y.re PARAM */)))));

  tmp39 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[359] /* pwLine4.t1 PARAM */);
  tmp40 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[360] /* pwLine4.t2 PARAM */);
  res[17] = ((tmp39 && tmp40)?data->localData[0]->realVars[157] /* pwLine4.ir.re variable */:data->localData[0]->realVars[139] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[151] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[358] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[157] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[138] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[355] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[139] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[356] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[357] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[156] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[139] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[355] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[138] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[356] /* pwLine4.Y.re PARAM */))))));

  tmp41 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[359] /* pwLine4.t1 PARAM */);
  tmp42 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[360] /* pwLine4.t2 PARAM */);
  res[18] = ((tmp41 && tmp42)?data->localData[0]->realVars[156] /* pwLine4.ir.im variable */:data->localData[0]->realVars[138] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[150] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[358] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[156] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[139] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[355] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[138] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[356] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[357] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[157] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[138] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[355] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[139] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[356] /* pwLine4.Y.re PARAM */)))));

  tmp43 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[337] /* pwLine1.t1 PARAM */);
  tmp44 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[338] /* pwLine1.t2 PARAM */);
  res[19] = ((tmp43 && tmp44)?data->localData[0]->realVars[135] /* pwLine1.ir.re variable */:data->localData[0]->realVars[139] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[141] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[336] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[135] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[138] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[333] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[139] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[334] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[335] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[134] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[139] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[333] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[138] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[334] /* pwLine1.Y.re PARAM */))))));

  tmp45 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[337] /* pwLine1.t1 PARAM */);
  tmp46 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[338] /* pwLine1.t2 PARAM */);
  res[20] = ((tmp45 && tmp46)?data->localData[0]->realVars[134] /* pwLine1.ir.im variable */:data->localData[0]->realVars[138] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[140] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[336] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[134] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[139] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[333] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[138] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[334] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[335] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[135] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[138] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[333] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[139] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[334] /* pwLine1.Y.re PARAM */)))));

  tmp47 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[337] /* pwLine1.t1 PARAM */);
  tmp48 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[338] /* pwLine1.t2 PARAM */);
  res[21] = ((tmp47 && tmp48)?data->localData[0]->realVars[136] /* pwLine1.is.im variable */:data->localData[0]->realVars[140] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[138] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[336] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[136] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[141] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[333] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[140] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[334] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[335] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[137] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[140] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[333] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[141] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[334] /* pwLine1.Y.re PARAM */)))));

  tmp49 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[326] /* pwLine.t1 PARAM */);
  tmp50 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[327] /* pwLine.t2 PARAM */);
  res[22] = ((tmp49 && tmp50)?data->localData[0]->realVars[124] /* pwLine.ir.im variable */:data->localData[0]->realVars[140] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[128] /* pwLine.vs.im variable */ - ((data->simulationInfo->realParameter[325] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[124] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[141] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[322] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[140] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[323] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[324] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[125] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[140] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[322] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[141] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[323] /* pwLine.Y.re PARAM */)))));

  tmp51 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[326] /* pwLine.t1 PARAM */);
  tmp52 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[327] /* pwLine.t2 PARAM */);
  res[23] = ((tmp51 && tmp52)?data->localData[0]->realVars[125] /* pwLine.ir.re variable */:data->localData[0]->realVars[141] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[129] /* pwLine.vs.re variable */ - ((data->simulationInfo->realParameter[325] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[125] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[140] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[322] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[141] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[323] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[324] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[124] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[141] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[322] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[140] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[323] /* pwLine.Y.re PARAM */))))));

  tmp53 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[326] /* pwLine.t1 PARAM */);
  tmp54 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[327] /* pwLine.t2 PARAM */);
  res[24] = ((tmp53 && tmp54)?data->localData[0]->realVars[127] /* pwLine.is.re variable */:data->localData[0]->realVars[129] /* pwLine.vs.re variable */ - data->localData[0]->realVars[141] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[325] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[127] /* pwLine.is.re variable */ + (data->localData[0]->realVars[128] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[322] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[129] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[323] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[324] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[126] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[129] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[322] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[128] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[323] /* pwLine.Y.re PARAM */))))));

  tmp55 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[326] /* pwLine.t1 PARAM */);
  tmp56 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[327] /* pwLine.t2 PARAM */);
  res[25] = ((tmp55 && tmp56)?data->localData[0]->realVars[126] /* pwLine.is.im variable */:data->localData[0]->realVars[128] /* pwLine.vs.im variable */ - data->localData[0]->realVars[140] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[325] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[126] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[129] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[322] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[128] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[323] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[324] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[127] /* pwLine.is.re variable */ + (data->localData[0]->realVars[128] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[322] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[129] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[323] /* pwLine.Y.re PARAM */)))));

  res[26] = data->localData[0]->realVars[107] /* gENROU.PSIppq variable */ - ((data->localData[0]->realVars[7] /* gENROU.Epd STATE(1) */) * (data->simulationInfo->realParameter[247] /* gENROU.K3q PARAM */)) - ((data->localData[0]->realVars[10] /* gENROU.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[249] /* gENROU.K4q PARAM */));

  res[27] = data->localData[0]->realVars[7] /* gENROU.Epd STATE(1) */ + (data->simulationInfo->realParameter[284] /* gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[279] /* gENROU.Xl PARAM */) * (data->localData[0]->realVars[115] /* gENROU.iq variable */) + (-data->localData[0]->realVars[10] /* gENROU.PSIkq STATE(1) */) - ((data->localData[0]->realVars[23] /* der(gENROU.PSIkq) STATE_DER */) * (data->simulationInfo->realParameter[273] /* gENROU.Tppq0 PARAM */));

  res[28] = (data->localData[0]->realVars[9] /* gENROU.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[248] /* gENROU.K4d PARAM */) + (data->localData[0]->realVars[8] /* gENROU.Epq STATE(1) */) * (data->simulationInfo->realParameter[246] /* gENROU.K3d PARAM */) - data->localData[0]->realVars[106] /* gENROU.PSIppd variable */;

  res[29] = data->localData[0]->realVars[8] /* gENROU.Epq STATE(1) */ + (data->simulationInfo->realParameter[279] /* gENROU.Xl PARAM */ - data->simulationInfo->realParameter[280] /* gENROU.Xpd PARAM */) * (data->localData[0]->realVars[114] /* gENROU.id variable */) + (-data->localData[0]->realVars[9] /* gENROU.PSIkd STATE(1) */) - ((data->localData[0]->realVars[22] /* der(gENROU.PSIkd) STATE_DER */) * (data->simulationInfo->realParameter[272] /* gENROU.Tppd0 PARAM */));

  res[30] = (cos(data->localData[0]->realVars[11] /* gENROU.delta STATE(1) */)) * (data->localData[0]->realVars[117] /* gENROU.uq variable */) + (sin(data->localData[0]->realVars[11] /* gENROU.delta STATE(1) */)) * (data->localData[0]->realVars[116] /* gENROU.ud variable */) - data->localData[0]->realVars[129] /* pwLine.vs.re variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS731(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+31] = {0,4,4,4,4,4,4,3,3,3,3,4,4,4,4,2,2,6,6,6,6,5,5,7,7,2,2,4,11,8,8,11};
  const int rowIndex[150] = {11,21,22,23,11,12,13,21,12,13,22,23,11,12,13,21,9,10,12,13,9,10,11,21,14,15,16,7,8,14,4,15,16,4,7,8,17,18,19,20,17,18,19,20,5,6,17,18,5,6,17,18,26,27,28,29,0,26,27,28,29,30,0,26,27,28,29,30,0,24,25,28,29,30,0,24,25,26,27,30,3,23,24,25,30,0,3,22,24,25,5,8,17,18,19,20,21,6,7,11,17,18,19,20,2,3,1,2,1,2,28,29,9,10,11,12,13,16,20,21,22,23,25,4,7,8,12,14,15,16,17,4,7,8,13,14,15,16,18,9,10,11,12,13,15,19,21,22,23,24};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((31+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(150*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 150;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(31*sizeof(int));
  inSysData->sparsePattern->maxColors = 10;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (31+1)*sizeof(int));
  
  for(i=2;i<31+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 150*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[30] = 1;
  inSysData->sparsePattern->colorCols[29] = 2;
  inSysData->sparsePattern->colorCols[27] = 3;
  inSysData->sparsePattern->colorCols[21] = 4;
  inSysData->sparsePattern->colorCols[28] = 4;
  inSysData->sparsePattern->colorCols[20] = 5;
  inSysData->sparsePattern->colorCols[23] = 5;
  inSysData->sparsePattern->colorCols[19] = 6;
  inSysData->sparsePattern->colorCols[22] = 6;
  inSysData->sparsePattern->colorCols[26] = 6;
  inSysData->sparsePattern->colorCols[3] = 7;
  inSysData->sparsePattern->colorCols[13] = 7;
  inSysData->sparsePattern->colorCols[18] = 7;
  inSysData->sparsePattern->colorCols[2] = 8;
  inSysData->sparsePattern->colorCols[5] = 8;
  inSysData->sparsePattern->colorCols[12] = 8;
  inSysData->sparsePattern->colorCols[17] = 8;
  inSysData->sparsePattern->colorCols[1] = 9;
  inSysData->sparsePattern->colorCols[7] = 9;
  inSysData->sparsePattern->colorCols[8] = 9;
  inSysData->sparsePattern->colorCols[11] = 9;
  inSysData->sparsePattern->colorCols[16] = 9;
  inSysData->sparsePattern->colorCols[25] = 9;
  inSysData->sparsePattern->colorCols[0] = 10;
  inSysData->sparsePattern->colorCols[4] = 10;
  inSysData->sparsePattern->colorCols[6] = 10;
  inSysData->sparsePattern->colorCols[9] = 10;
  inSysData->sparsePattern->colorCols[10] = 10;
  inSysData->sparsePattern->colorCols[14] = 10;
  inSysData->sparsePattern->colorCols[15] = 10;
  inSysData->sparsePattern->colorCols[24] = 10;
}
void initializeStaticDataNLS731(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for pwLine.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[124].attribute /* pwLine.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[124].attribute /* pwLine.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[124].attribute /* pwLine.ir.im */.max;
  /* static nls data for pwLine3.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[148].attribute /* pwLine3.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[148].attribute /* pwLine3.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[148].attribute /* pwLine3.is.im */.max;
  /* static nls data for pwLine.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[125].attribute /* pwLine.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[125].attribute /* pwLine.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[125].attribute /* pwLine.ir.re */.max;
  /* static nls data for pwLine1.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[137].attribute /* pwLine1.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[137].attribute /* pwLine1.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[137].attribute /* pwLine1.is.re */.max;
  /* static nls data for constantLoad.p.ir */
  sysData->nominal[i] = data->modelData->realVarsData[54].attribute /* constantLoad.p.ir */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[54].attribute /* constantLoad.p.ir */.min;
  sysData->max[i++]   = data->modelData->realVarsData[54].attribute /* constantLoad.p.ir */.max;
  /* static nls data for constantLoad.p.ii */
  sysData->nominal[i] = data->modelData->realVarsData[53].attribute /* constantLoad.p.ii */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[53].attribute /* constantLoad.p.ii */.min;
  sysData->max[i++]   = data->modelData->realVarsData[53].attribute /* constantLoad.p.ii */.max;
  /* static nls data for pwLine3.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[146].attribute /* pwLine3.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[146].attribute /* pwLine3.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[146].attribute /* pwLine3.ir.im */.max;
  /* static nls data for pwLine4.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[158].attribute /* pwLine4.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[158].attribute /* pwLine4.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[158].attribute /* pwLine4.is.im */.max;
  /* static nls data for pwLine3.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[147].attribute /* pwLine3.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[147].attribute /* pwLine3.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[147].attribute /* pwLine3.ir.re */.max;
  /* static nls data for pwLine4.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[159].attribute /* pwLine4.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[159].attribute /* pwLine4.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[159].attribute /* pwLine4.is.re */.max;
  /* static nls data for pwLine1.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[135].attribute /* pwLine1.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[135].attribute /* pwLine1.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[135].attribute /* pwLine1.ir.re */.max;
  /* static nls data for pwLine1.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[134].attribute /* pwLine1.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[134].attribute /* pwLine1.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[134].attribute /* pwLine1.ir.im */.max;
  /* static nls data for gENCLS.id */
  sysData->nominal[i] = data->modelData->realVarsData[94].attribute /* gENCLS.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[94].attribute /* gENCLS.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[94].attribute /* gENCLS.id */.max;
  /* static nls data for gENCLS.iq */
  sysData->nominal[i] = data->modelData->realVarsData[95].attribute /* gENCLS.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[95].attribute /* gENCLS.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[95].attribute /* gENCLS.iq */.max;
  /* static nls data for gENROU.Epd */
  sysData->nominal[i] = data->modelData->realVarsData[7].attribute /* gENROU.Epd */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[7].attribute /* gENROU.Epd */.min;
  sysData->max[i++]   = data->modelData->realVarsData[7].attribute /* gENROU.Epd */.max;
  /* static nls data for gENROU.Epq */
  sysData->nominal[i] = data->modelData->realVarsData[8].attribute /* gENROU.Epq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[8].attribute /* gENROU.Epq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[8].attribute /* gENROU.Epq */.max;
  /* static nls data for gENROU.PSIppd */
  sysData->nominal[i] = data->modelData->realVarsData[106].attribute /* gENROU.PSIppd */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[106].attribute /* gENROU.PSIppd */.min;
  sysData->max[i++]   = data->modelData->realVarsData[106].attribute /* gENROU.PSIppd */.max;
  /* static nls data for gENROU.PSIppq */
  sysData->nominal[i] = data->modelData->realVarsData[107].attribute /* gENROU.PSIppq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[107].attribute /* gENROU.PSIppq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[107].attribute /* gENROU.PSIppq */.max;
  /* static nls data for gENROU.id */
  sysData->nominal[i] = data->modelData->realVarsData[114].attribute /* gENROU.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[114].attribute /* gENROU.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[114].attribute /* gENROU.id */.max;
  /* static nls data for gENROU.iq */
  sysData->nominal[i] = data->modelData->realVarsData[115].attribute /* gENROU.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[115].attribute /* gENROU.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[115].attribute /* gENROU.iq */.max;
  /* static nls data for pwLine.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[129].attribute /* pwLine.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[129].attribute /* pwLine.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[129].attribute /* pwLine.vs.re */.max;
  /* static nls data for pwLine.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[128].attribute /* pwLine.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[128].attribute /* pwLine.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[128].attribute /* pwLine.vs.im */.max;
  /* static nls data for pwLine1.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[138].attribute /* pwLine1.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[138].attribute /* pwLine1.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[138].attribute /* pwLine1.vr.im */.max;
  /* static nls data for pwLine1.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[139].attribute /* pwLine1.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[139].attribute /* pwLine1.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[139].attribute /* pwLine1.vr.re */.max;
  /* static nls data for eSAC2A.ECOMP */
  sysData->nominal[i] = data->modelData->realVarsData[64].attribute /* eSAC2A.ECOMP */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[64].attribute /* eSAC2A.ECOMP */.min;
  sysData->max[i++]   = data->modelData->realVarsData[64].attribute /* eSAC2A.ECOMP */.max;
  /* static nls data for eSAC2A.rotatingExciterWithDemagnetization.feedback.y */
  sysData->nominal[i] = data->modelData->realVarsData[85].attribute /* eSAC2A.rotatingExciterWithDemagnetization.feedback.y */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[85].attribute /* eSAC2A.rotatingExciterWithDemagnetization.feedback.y */.min;
  sysData->max[i++]   = data->modelData->realVarsData[85].attribute /* eSAC2A.rotatingExciterWithDemagnetization.feedback.y */.max;
  /* static nls data for eSAC2A.XADIFD */
  sysData->nominal[i] = data->modelData->realVarsData[67].attribute /* eSAC2A.XADIFD */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[67].attribute /* eSAC2A.XADIFD */.min;
  sysData->max[i++]   = data->modelData->realVarsData[67].attribute /* eSAC2A.XADIFD */.max;
  /* static nls data for pwLine1.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[140].attribute /* pwLine1.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[140].attribute /* pwLine1.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[140].attribute /* pwLine1.vs.im */.max;
  /* static nls data for pwLine3.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[151].attribute /* pwLine3.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[151].attribute /* pwLine3.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[151].attribute /* pwLine3.vr.re */.max;
  /* static nls data for pwLine3.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[150].attribute /* pwLine3.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[150].attribute /* pwLine3.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[150].attribute /* pwLine3.vr.im */.max;
  /* static nls data for pwLine1.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[141].attribute /* pwLine1.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[141].attribute /* pwLine1.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[141].attribute /* pwLine1.vs.re */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS731(sysData);
}

void getIterationVarsNLS731(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[124] /* pwLine.ir.im variable */;
  array[1] = data->localData[0]->realVars[148] /* pwLine3.is.im variable */;
  array[2] = data->localData[0]->realVars[125] /* pwLine.ir.re variable */;
  array[3] = data->localData[0]->realVars[137] /* pwLine1.is.re variable */;
  array[4] = data->localData[0]->realVars[54] /* constantLoad.p.ir variable */;
  array[5] = data->localData[0]->realVars[53] /* constantLoad.p.ii variable */;
  array[6] = data->localData[0]->realVars[146] /* pwLine3.ir.im variable */;
  array[7] = data->localData[0]->realVars[158] /* pwLine4.is.im variable */;
  array[8] = data->localData[0]->realVars[147] /* pwLine3.ir.re variable */;
  array[9] = data->localData[0]->realVars[159] /* pwLine4.is.re variable */;
  array[10] = data->localData[0]->realVars[135] /* pwLine1.ir.re variable */;
  array[11] = data->localData[0]->realVars[134] /* pwLine1.ir.im variable */;
  array[12] = data->localData[0]->realVars[94] /* gENCLS.id variable */;
  array[13] = data->localData[0]->realVars[95] /* gENCLS.iq variable */;
  array[14] = data->localData[0]->realVars[7] /* gENROU.Epd STATE(1) */;
  array[15] = data->localData[0]->realVars[8] /* gENROU.Epq STATE(1) */;
  array[16] = data->localData[0]->realVars[106] /* gENROU.PSIppd variable */;
  array[17] = data->localData[0]->realVars[107] /* gENROU.PSIppq variable */;
  array[18] = data->localData[0]->realVars[114] /* gENROU.id variable */;
  array[19] = data->localData[0]->realVars[115] /* gENROU.iq variable */;
  array[20] = data->localData[0]->realVars[129] /* pwLine.vs.re variable */;
  array[21] = data->localData[0]->realVars[128] /* pwLine.vs.im variable */;
  array[22] = data->localData[0]->realVars[138] /* pwLine1.vr.im variable */;
  array[23] = data->localData[0]->realVars[139] /* pwLine1.vr.re variable */;
  array[24] = data->localData[0]->realVars[64] /* eSAC2A.ECOMP variable */;
  array[25] = data->localData[0]->realVars[85] /* eSAC2A.rotatingExciterWithDemagnetization.feedback.y variable */;
  array[26] = data->localData[0]->realVars[67] /* eSAC2A.XADIFD variable */;
  array[27] = data->localData[0]->realVars[140] /* pwLine1.vs.im variable */;
  array[28] = data->localData[0]->realVars[151] /* pwLine3.vr.re variable */;
  array[29] = data->localData[0]->realVars[150] /* pwLine3.vr.im variable */;
  array[30] = data->localData[0]->realVars[141] /* pwLine1.vs.re variable */;
}


/* inner equations */

/*
equation index: 24
type: SIMPLE_ASSIGN
constantLoad._v = sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_24(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,24};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[141] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[140] /* pwLine1.vs.im variable */;
  data->localData[0]->realVars[55] /* constantLoad.v variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 25
type: SIMPLE_ASSIGN
constantLoad._kP = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a0 + constantLoad.a1 * cos(constantLoad.v * constantLoad.wp) + constantLoad.b1 * sin(constantLoad.v * constantLoad.wp) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_25(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,25};
  modelica_boolean tmp0;
  tmp0 = Less(data->localData[0]->realVars[55] /* constantLoad.v variable */,data->simulationInfo->realParameter[41] /* constantLoad.PQBRAK PARAM */);
  data->localData[0]->realVars[52] /* constantLoad.kP variable */ = (tmp0?data->simulationInfo->realParameter[60] /* constantLoad.a0 PARAM */ + (data->simulationInfo->realParameter[61] /* constantLoad.a1 PARAM */) * (cos((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[67] /* constantLoad.b1 PARAM */) * (sin((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))):1.0);
  TRACE_POP
}
/*
equation index: 26
type: SIMPLE_ASSIGN
constantLoad._kI = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (-1.0 + constantLoad.b2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_26(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,26};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_boolean tmp15;
  modelica_real tmp16;
  tmp0 = Less(data->localData[0]->realVars[55] /* constantLoad.v variable */,0.5);
  tmp15 = (modelica_boolean)tmp0;
  if(tmp15)
  {
    tmp1 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp2 = -1.0 + data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */;
    if(tmp1 < 0.0 && tmp2 != 0.0)
    {
      tmp4 = modf(tmp2, &tmp5);
      
      if(tmp4 > 0.5)
      {
        tmp4 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp4 < -0.5)
      {
        tmp4 += 1.0;
        tmp5 -= 1.0;
      }
      
      if(fabs(tmp4) < 1e-10)
        tmp3 = pow(tmp1, tmp5);
      else
      {
        tmp7 = modf(1.0/tmp2, &tmp6);
        if(tmp7 > 0.5)
        {
          tmp7 -= 1.0;
          tmp6 += 1.0;
        }
        else if(tmp7 < -0.5)
        {
          tmp7 += 1.0;
          tmp6 -= 1.0;
        }
        if(fabs(tmp7) < 1e-10 && ((unsigned long)tmp6 & 1))
        {
          tmp3 = -pow(-tmp1, tmp4)*pow(tmp1, tmp5);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
        }
      }
    }
    else
    {
      tmp3 = pow(tmp1, tmp2);
    }
    if(isnan(tmp3) || isinf(tmp3))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
    }tmp8 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp9 = data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */;
    if(tmp8 < 0.0 && tmp9 != 0.0)
    {
      tmp11 = modf(tmp9, &tmp12);
      
      if(tmp11 > 0.5)
      {
        tmp11 -= 1.0;
        tmp12 += 1.0;
      }
      else if(tmp11 < -0.5)
      {
        tmp11 += 1.0;
        tmp12 -= 1.0;
      }
      
      if(fabs(tmp11) < 1e-10)
        tmp10 = pow(tmp8, tmp12);
      else
      {
        tmp14 = modf(1.0/tmp9, &tmp13);
        if(tmp14 > 0.5)
        {
          tmp14 -= 1.0;
          tmp13 += 1.0;
        }
        else if(tmp14 < -0.5)
        {
          tmp14 += 1.0;
          tmp13 -= 1.0;
        }
        if(fabs(tmp14) < 1e-10 && ((unsigned long)tmp13 & 1))
        {
          tmp10 = -pow(-tmp8, tmp11)*pow(tmp8, tmp12);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp8, tmp9);
        }
      }
    }
    else
    {
      tmp10 = pow(tmp8, tmp9);
    }
    if(isnan(tmp10) || isinf(tmp10))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp8, tmp9);
    }
    tmp16 = (data->simulationInfo->realParameter[62] /* constantLoad.a2 PARAM */) * ((data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */) * ((tmp3) * (exp(((-data->simulationInfo->realParameter[62] /* constantLoad.a2 PARAM */)) * (tmp10)))));
  }
  else
  {
    tmp16 = 1.0;
  }
  data->localData[0]->realVars[51] /* constantLoad.kI variable */ = tmp16;
  TRACE_POP
}
/*
equation index: 27
type: SIMPLE_ASSIGN
constantLoad._Q = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_27(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,27};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */);
  tmp1 = LessEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[71] /* constantLoad.d_t PARAM */);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[44] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[48] /* constantLoad.S_Y.im PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[46] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[70] /* constantLoad.d_Q PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[44] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[48] /* constantLoad.S_Y.im PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[46] /* constantLoad.S_P.im PARAM */);
  }
  data->localData[0]->realVars[49] /* constantLoad.Q variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 28
type: SIMPLE_ASSIGN
constantLoad._P = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_28(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,28};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */);
  tmp1 = LessEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[71] /* constantLoad.d_t PARAM */);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[45] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[49] /* constantLoad.S_Y.re PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[47] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[69] /* constantLoad.d_P PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[45] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[49] /* constantLoad.S_Y.re PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[47] /* constantLoad.S_P.re PARAM */);
  }
  data->localData[0]->realVars[48] /* constantLoad.P variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 29
type: SIMPLE_ASSIGN
eSAC2A._rectifierCommutationVoltageDrop._division._u1 = eSAC2A.rectifierCommutationVoltageDrop.gain2.k * eSAC2A.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_29(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,29};
  data->localData[0]->realVars[79] /* eSAC2A.rectifierCommutationVoltageDrop.division.u1 variable */ = (data->simulationInfo->realParameter[171] /* eSAC2A.rectifierCommutationVoltageDrop.gain2.k PARAM */) * (data->localData[0]->realVars[67] /* eSAC2A.XADIFD variable */);
  TRACE_POP
}
/*
equation index: 30
type: SIMPLE_ASSIGN
eSAC2A._DiffV1._y = eSAC2A.DiffV1.k1 * eSAC2A.FEMAX.k + eSAC2A.DiffV1.k2 * eSAC2A.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_30(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,30};
  data->localData[0]->realVars[58] /* eSAC2A.DiffV1.y variable */ = (data->simulationInfo->realParameter[85] /* eSAC2A.DiffV1.k1 PARAM */) * (data->simulationInfo->realParameter[97] /* eSAC2A.FEMAX.k PARAM */) + (data->simulationInfo->realParameter[86] /* eSAC2A.DiffV1.k2 PARAM */) * (data->localData[0]->realVars[67] /* eSAC2A.XADIFD variable */);
  TRACE_POP
}
/*
equation index: 31
type: SIMPLE_ASSIGN
eSAC2A._EFD = eSAC2A.XADIFD + $DER.gENROU.Epq * gENROU.Tpd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_31(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,31};
  data->localData[0]->realVars[65] /* eSAC2A.EFD variable */ = data->localData[0]->realVars[67] /* eSAC2A.XADIFD variable */ + (data->localData[0]->realVars[21] /* der(gENROU.Epq) STATE_DER */) * (data->simulationInfo->realParameter[271] /* gENROU.Tpd0 PARAM */);
  TRACE_POP
}
/*
equation index: 32
type: SIMPLE_ASSIGN
eSAC2A._DiffV2._u2 = OpenIPSL.NonElectrical.Functions.SE(eSAC2A.EFD, eSAC2A.se1.SE1, eSAC2A.se1.SE2, eSAC2A.se1.E1, eSAC2A.se1.E2)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_32(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,32};
  data->localData[0]->realVars[59] /* eSAC2A.DiffV2.u2 variable */ = omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->localData[0]->realVars[65] /* eSAC2A.EFD variable */, data->simulationInfo->realParameter[193] /* eSAC2A.se1.SE1 PARAM */, data->simulationInfo->realParameter[194] /* eSAC2A.se1.SE2 PARAM */, data->simulationInfo->realParameter[191] /* eSAC2A.se1.E1 PARAM */, data->simulationInfo->realParameter[192] /* eSAC2A.se1.E2 PARAM */);
  TRACE_POP
}
/*
equation index: 33
type: SIMPLE_ASSIGN
eSAC2A._DiffV2._y = eSAC2A.DiffV2.k1 * eSAC2A.const.k + eSAC2A.DiffV2.k2 * eSAC2A.DiffV2.u2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_33(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,33};
  data->localData[0]->realVars[60] /* eSAC2A.DiffV2.y variable */ = (data->simulationInfo->realParameter[88] /* eSAC2A.DiffV2.k1 PARAM */) * (data->simulationInfo->realParameter[133] /* eSAC2A.const.k PARAM */) + (data->simulationInfo->realParameter[89] /* eSAC2A.DiffV2.k2 PARAM */) * (data->localData[0]->realVars[59] /* eSAC2A.DiffV2.u2 variable */);
  TRACE_POP
}
/*
equation index: 34
type: SIMPLE_ASSIGN
eSAC2A._rotatingExciterWithDemagnetization._sISO._outMax = eSAC2A.DiffV1.y / eSAC2A.DiffV2.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_34(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,34};
  data->localData[0]->realVars[87] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.outMax variable */ = DIVISION_SIM(data->localData[0]->realVars[58] /* eSAC2A.DiffV1.y variable */,data->localData[0]->realVars[60] /* eSAC2A.DiffV2.y variable */,"eSAC2A.DiffV2.y",equationIndexes);
  TRACE_POP
}
/*
equation index: 35
type: SIMPLE_ASSIGN
eSAC2A._Ifd0 = eSAC2A.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_35(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,35};
  data->simulationInfo->realParameter[99] /* eSAC2A.Ifd0 PARAM */ = data->localData[0]->realVars[67] /* eSAC2A.XADIFD variable */;
  TRACE_POP
}
/*
equation index: 36
type: SIMPLE_ASSIGN
eSAC2A._VE0 = OpenIPSL.Electrical.Controls.PSSE.ES.BaseClasses.invFEX(eSAC2A.K_C, eSAC2A.Efd0, eSAC2A.Ifd0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_36(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,36};
  data->simulationInfo->realParameter[115] /* eSAC2A.VE0 PARAM */ = omc_OpenIPSL_Electrical_Controls_PSSE_ES_BaseClasses_invFEX(threadData, data->simulationInfo->realParameter[102] /* eSAC2A.K_C PARAM */, data->simulationInfo->realParameter[96] /* eSAC2A.Efd0 PARAM */, data->simulationInfo->realParameter[99] /* eSAC2A.Ifd0 PARAM */);
  TRACE_POP
}
/*
equation index: 37
type: SIMPLE_ASSIGN
eSAC2A._VFE0 = eSAC2A.VE0 * (OpenIPSL.NonElectrical.Functions.SE(eSAC2A.VE0, eSAC2A.S_EE_1, eSAC2A.S_EE_2, eSAC2A.E_1, eSAC2A.E_2) + eSAC2A.K_E) + eSAC2A.Ifd0 * eSAC2A.K_D
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_37(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,37};
  data->simulationInfo->realParameter[116] /* eSAC2A.VFE0 PARAM */ = (data->simulationInfo->realParameter[115] /* eSAC2A.VE0 PARAM */) * (omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->simulationInfo->realParameter[115] /* eSAC2A.VE0 PARAM */, data->simulationInfo->realParameter[107] /* eSAC2A.S_EE_1 PARAM */, data->simulationInfo->realParameter[108] /* eSAC2A.S_EE_2 PARAM */, data->simulationInfo->realParameter[94] /* eSAC2A.E_1 PARAM */, data->simulationInfo->realParameter[95] /* eSAC2A.E_2 PARAM */) + data->simulationInfo->realParameter[104] /* eSAC2A.K_E PARAM */) + (data->simulationInfo->realParameter[99] /* eSAC2A.Ifd0 PARAM */) * (data->simulationInfo->realParameter[103] /* eSAC2A.K_D PARAM */);
  TRACE_POP
}
/*
equation index: 38
type: SIMPLE_ASSIGN
eSAC2A._VR0 = eSAC2A.VFE0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_38(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,38};
  data->simulationInfo->realParameter[119] /* eSAC2A.VR0 PARAM */ = data->simulationInfo->realParameter[116] /* eSAC2A.VFE0 PARAM */;
  TRACE_POP
}
/*
equation index: 39
type: SIMPLE_ASSIGN
eSAC2A._imLeadLag._y_start = eSAC2A.VR0 / eSAC2A.K_A
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_39(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,39};
  data->simulationInfo->realParameter[159] /* eSAC2A.imLeadLag.y_start PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[119] /* eSAC2A.VR0 PARAM */,data->simulationInfo->realParameter[100] /* eSAC2A.K_A PARAM */,"eSAC2A.K_A",equationIndexes);
  TRACE_POP
}
/*
equation index: 40
type: SIMPLE_ASSIGN
eSAC2A._imLeadLag._TF._y_start = eSAC2A.imLeadLag.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_40(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,40};
  data->simulationInfo->realParameter[155] /* eSAC2A.imLeadLag.TF.y_start PARAM */ = data->simulationInfo->realParameter[159] /* eSAC2A.imLeadLag.y_start PARAM */;
  TRACE_POP
}
/*
equation index: 41
type: SIMPLE_ASSIGN
eSAC2A._imLeadLag._TF._y = eSAC2A.imLeadLag.TF.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_41(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,41};
  data->localData[0]->realVars[74] /* eSAC2A.imLeadLag.TF.y variable */ = data->simulationInfo->realParameter[155] /* eSAC2A.imLeadLag.TF.y_start PARAM */;
  TRACE_POP
}
/*
equation index: 42
type: SIMPLE_ASSIGN
eSAC2A._simpleLagLim._y_start = eSAC2A.VR0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_42(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,42};
  data->simulationInfo->realParameter[201] /* eSAC2A.simpleLagLim.y_start PARAM */ = data->simulationInfo->realParameter[119] /* eSAC2A.VR0 PARAM */;
  TRACE_POP
}
/*
equation index: 43
type: SIMPLE_ASSIGN
_omcQuot_245354415254._eSAC2A._DiffV3._u2 = eSAC2A.simpleLagLim.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_43(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,43};
  data->modelData->realVarsData[62].attribute /* eSAC2A.DiffV3.u2 variable */.start = data->simulationInfo->realParameter[201] /* eSAC2A.simpleLagLim.y_start PARAM */;
    data->localData[0]->realVars[62] /* eSAC2A.DiffV3.u2 variable */ = data->modelData->realVarsData[62].attribute /* eSAC2A.DiffV3.u2 variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[62].info /* eSAC2A.DiffV3.u2 */.name, (modelica_real) data->localData[0]->realVars[62] /* eSAC2A.DiffV3.u2 variable */);
  TRACE_POP
}
/*
equation index: 44
type: SIMPLE_ASSIGN
eSAC2A._simpleLagLim._state = eSAC2A.simpleLagLim.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_44(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,44};
  data->localData[0]->realVars[4] /* eSAC2A.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[201] /* eSAC2A.simpleLagLim.y_start PARAM */;
  TRACE_POP
}
/*
equation index: 45
type: SIMPLE_ASSIGN
eSAC2A._rotatingExciterWithDemagnetization._Efd0 = eSAC2A.VE0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_45(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,45};
  data->simulationInfo->realParameter[174] /* eSAC2A.rotatingExciterWithDemagnetization.Efd0 PARAM */ = data->simulationInfo->realParameter[115] /* eSAC2A.VE0 PARAM */;
  TRACE_POP
}
/*
equation index: 46
type: SIMPLE_ASSIGN
eSAC2A._rotatingExciterWithDemagnetization._sISO._y_start = eSAC2A.rotatingExciterWithDemagnetization.Efd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_46(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,46};
  data->simulationInfo->realParameter[186] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.y_start PARAM */ = data->simulationInfo->realParameter[174] /* eSAC2A.rotatingExciterWithDemagnetization.Efd0 PARAM */;
  TRACE_POP
}
/*
equation index: 47
type: SIMPLE_ASSIGN
eSAC2A._rotatingExciterWithDemagnetization._sISO._w = if eSAC2A.rotatingExciterWithDemagnetization.sISO.y_start >= eSAC2A.rotatingExciterWithDemagnetization.sISO.outMax then eSAC2A.rotatingExciterWithDemagnetization.sISO.outMax else if eSAC2A.rotatingExciterWithDemagnetization.sISO.y_start <= eSAC2A.rotatingExciterWithDemagnetization.sISO.outMin then eSAC2A.rotatingExciterWithDemagnetization.sISO.outMin else eSAC2A.rotatingExciterWithDemagnetization.sISO.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_47(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,47};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  tmp0 = GreaterEq(data->simulationInfo->realParameter[186] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.y_start PARAM */,data->localData[0]->realVars[87] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.outMax variable */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->localData[0]->realVars[87] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.outMax variable */;
  }
  else
  {
    tmp1 = LessEq(data->simulationInfo->realParameter[186] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.y_start PARAM */,data->localData[0]->realVars[88] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.outMin variable */);
    tmp3 = (tmp1?data->localData[0]->realVars[88] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.outMin variable */:data->simulationInfo->realParameter[186] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.y_start PARAM */);
  }
  data->localData[0]->realVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.w STATE(1) */ = tmp3;
  TRACE_POP
}
/*
equation index: 48
type: ALGORITHM

  eSAC2A.rotatingExciterWithDemagnetization.sISO.initVar := $START.eSAC2A.rotatingExciterWithDemagnetization.sISO.initVar;
  eSAC2A.rotatingExciterWithDemagnetization.sISO.Reinit := $START.eSAC2A.rotatingExciterWithDemagnetization.sISO.Reinit;
  eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachLower := $START.eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachLower;
  eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachUpper := $START.eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachUpper;
  eSAC2A.rotatingExciterWithDemagnetization.sISO.Falling := $START.eSAC2A.rotatingExciterWithDemagnetization.sISO.Falling;
  eSAC2A.rotatingExciterWithDemagnetization.sISO.Rising := $START.eSAC2A.rotatingExciterWithDemagnetization.sISO.Rising;
  if eSAC2A.rotatingExciterWithDemagnetization.feedback.y > 1e-15 then
    eSAC2A.rotatingExciterWithDemagnetization.sISO.Rising := true;
    eSAC2A.rotatingExciterWithDemagnetization.sISO.Falling := false;
  elseif eSAC2A.rotatingExciterWithDemagnetization.feedback.y < -1e-15 then
    eSAC2A.rotatingExciterWithDemagnetization.sISO.Rising := false;
    eSAC2A.rotatingExciterWithDemagnetization.sISO.Falling := true;
  else
    eSAC2A.rotatingExciterWithDemagnetization.sISO.Rising := false;
    eSAC2A.rotatingExciterWithDemagnetization.sISO.Falling := false;
  end if;
  if eSAC2A.rotatingExciterWithDemagnetization.sISO.w > eSAC2A.rotatingExciterWithDemagnetization.sISO.outMax then
    eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachUpper := true;
    eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachLower := false;
  elseif eSAC2A.rotatingExciterWithDemagnetization.sISO.w < eSAC2A.rotatingExciterWithDemagnetization.sISO.outMin then
    eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachLower := true;
    eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachUpper := false;
  else
    eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachUpper := false;
    eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachLower := false;
  end if;
  if eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachUpper and eSAC2A.rotatingExciterWithDemagnetization.sISO.Falling then
    eSAC2A.rotatingExciterWithDemagnetization.sISO.Reinit := true;
    eSAC2A.rotatingExciterWithDemagnetization.sISO.initVar := eSAC2A.rotatingExciterWithDemagnetization.sISO.outMax;
  elseif eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachLower and eSAC2A.rotatingExciterWithDemagnetization.sISO.Rising then
    eSAC2A.rotatingExciterWithDemagnetization.sISO.Reinit := true;
    eSAC2A.rotatingExciterWithDemagnetization.sISO.initVar := eSAC2A.rotatingExciterWithDemagnetization.sISO.outMin;
  end if;
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_48(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,48};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  data->localData[0]->realVars[86] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.initVar variable */ = data->modelData->realVarsData[86].attribute /* eSAC2A.rotatingExciterWithDemagnetization.sISO.initVar variable */.start;

  data->localData[0]->booleanVars[6] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.Reinit DISCRETE */ = data->modelData->booleanVarsData[6].attribute /* eSAC2A.rotatingExciterWithDemagnetization.sISO.Reinit DISCRETE */.start;

  data->localData[0]->booleanVars[4] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachLower DISCRETE */ = data->modelData->booleanVarsData[4].attribute /* eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachLower DISCRETE */.start;

  data->localData[0]->booleanVars[5] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachUpper DISCRETE */ = data->modelData->booleanVarsData[5].attribute /* eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachUpper DISCRETE */.start;

  data->localData[0]->booleanVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.Falling DISCRETE */ = data->modelData->booleanVarsData[3].attribute /* eSAC2A.rotatingExciterWithDemagnetization.sISO.Falling DISCRETE */.start;

  data->localData[0]->booleanVars[7] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.Rising DISCRETE */ = data->modelData->booleanVarsData[7].attribute /* eSAC2A.rotatingExciterWithDemagnetization.sISO.Rising DISCRETE */.start;

  tmp0 = Greater(data->localData[0]->realVars[85] /* eSAC2A.rotatingExciterWithDemagnetization.feedback.y variable */,1e-15);
  if(tmp0)
  {
    data->localData[0]->booleanVars[7] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.Rising DISCRETE */ = 1;

    data->localData[0]->booleanVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.Falling DISCRETE */ = 0;
  }
  else
  {
    tmp1 = Less(data->localData[0]->realVars[85] /* eSAC2A.rotatingExciterWithDemagnetization.feedback.y variable */,-1e-15);
    if(tmp1)
    {
      data->localData[0]->booleanVars[7] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.Rising DISCRETE */ = 0;

      data->localData[0]->booleanVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.Falling DISCRETE */ = 1;
    }
    else
    {
      data->localData[0]->booleanVars[7] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.Rising DISCRETE */ = 0;

      data->localData[0]->booleanVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.Falling DISCRETE */ = 0;
    }
  }

  tmp2 = Greater(data->localData[0]->realVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.w STATE(1) */,data->localData[0]->realVars[87] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.outMax variable */);
  if(tmp2)
  {
    data->localData[0]->booleanVars[5] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachUpper DISCRETE */ = 1;

    data->localData[0]->booleanVars[4] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachLower DISCRETE */ = 0;
  }
  else
  {
    tmp3 = Less(data->localData[0]->realVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.w STATE(1) */,data->localData[0]->realVars[88] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.outMin variable */);
    if(tmp3)
    {
      data->localData[0]->booleanVars[4] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachLower DISCRETE */ = 1;

      data->localData[0]->booleanVars[5] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachUpper DISCRETE */ = 0;
    }
    else
    {
      data->localData[0]->booleanVars[5] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachUpper DISCRETE */ = 0;

      data->localData[0]->booleanVars[4] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachLower DISCRETE */ = 0;
    }
  }

  if((data->localData[0]->booleanVars[5] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachUpper DISCRETE */ && data->localData[0]->booleanVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.Falling DISCRETE */))
  {
    data->localData[0]->booleanVars[6] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.Reinit DISCRETE */ = 1;

    data->localData[0]->realVars[86] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.initVar variable */ = data->localData[0]->realVars[87] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.outMax variable */;
  }
  else
  {
    if((data->localData[0]->booleanVars[4] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachLower DISCRETE */ && data->localData[0]->booleanVars[7] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.Rising DISCRETE */))
    {
      data->localData[0]->booleanVars[6] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.Reinit DISCRETE */ = 1;

      data->localData[0]->realVars[86] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.initVar variable */ = data->localData[0]->realVars[88] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.outMin variable */;
    }
  }
  TRACE_POP
}
/*
equation index: 49
type: SIMPLE_ASSIGN
eSAC2A._rectifierCommutationVoltageDrop._V_EX = if eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachUpper then eSAC2A.rotatingExciterWithDemagnetization.sISO.outMax else if eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachLower then eSAC2A.rotatingExciterWithDemagnetization.sISO.outMin else eSAC2A.rotatingExciterWithDemagnetization.sISO.w
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_49(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,49};
  data->localData[0]->realVars[78] /* eSAC2A.rectifierCommutationVoltageDrop.V_EX variable */ = (data->localData[0]->booleanVars[5] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachUpper DISCRETE */?data->localData[0]->realVars[87] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.outMax variable */:(data->localData[0]->booleanVars[4] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachLower DISCRETE */?data->localData[0]->realVars[88] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.outMin variable */:data->localData[0]->realVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.w STATE(1) */));
  TRACE_POP
}
/*
equation index: 50
type: SIMPLE_ASSIGN
eSAC2A._rotatingExciterWithDemagnetization._VE._u2 = OpenIPSL.NonElectrical.Functions.SE(eSAC2A.rectifierCommutationVoltageDrop.V_EX, eSAC2A.rotatingExciterWithDemagnetization.se1.SE1, eSAC2A.rotatingExciterWithDemagnetization.se1.SE2, eSAC2A.rotatingExciterWithDemagnetization.se1.E1, eSAC2A.rotatingExciterWithDemagnetization.se1.E2)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_50(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,50};
  data->localData[0]->realVars[84] /* eSAC2A.rotatingExciterWithDemagnetization.VE.u2 variable */ = omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->localData[0]->realVars[78] /* eSAC2A.rectifierCommutationVoltageDrop.V_EX variable */, data->simulationInfo->realParameter[189] /* eSAC2A.rotatingExciterWithDemagnetization.se1.SE1 PARAM */, data->simulationInfo->realParameter[190] /* eSAC2A.rotatingExciterWithDemagnetization.se1.SE2 PARAM */, data->simulationInfo->realParameter[187] /* eSAC2A.rotatingExciterWithDemagnetization.se1.E1 PARAM */, data->simulationInfo->realParameter[188] /* eSAC2A.rotatingExciterWithDemagnetization.se1.E2 PARAM */);
  TRACE_POP
}
/*
equation index: 51
type: SIMPLE_ASSIGN
eSAC2A._rectifierCommutationVoltageDrop._division._y = eSAC2A.rectifierCommutationVoltageDrop.division.u1 / eSAC2A.rectifierCommutationVoltageDrop.V_EX
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_51(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,51};
  data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */ = DIVISION_SIM(data->localData[0]->realVars[79] /* eSAC2A.rectifierCommutationVoltageDrop.division.u1 variable */,data->localData[0]->realVars[78] /* eSAC2A.rectifierCommutationVoltageDrop.V_EX variable */,"eSAC2A.rectifierCommutationVoltageDrop.V_EX",equationIndexes);
  TRACE_POP
}
/*
equation index: 52
type: SIMPLE_ASSIGN
eSAC2A._rectifierCommutationVoltageDrop._fEX._y = if eSAC2A.rectifierCommutationVoltageDrop.division.y <= 0.0 then 1.0 else if eSAC2A.rectifierCommutationVoltageDrop.division.y > 0.0 and eSAC2A.rectifierCommutationVoltageDrop.division.y <= 0.433 then 1.0 + (-0.577) * eSAC2A.rectifierCommutationVoltageDrop.division.y else if eSAC2A.rectifierCommutationVoltageDrop.division.y > 0.433 and eSAC2A.rectifierCommutationVoltageDrop.division.y < 0.75 then sqrt(0.75 - eSAC2A.rectifierCommutationVoltageDrop.division.y ^ 2.0) else if eSAC2A.rectifierCommutationVoltageDrop.division.y >= 0.75 and eSAC2A.rectifierCommutationVoltageDrop.division.y <= 1.0 then 1.732 * (1.0 - eSAC2A.rectifierCommutationVoltageDrop.division.y) else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_52(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,52};
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
  tmp0 = LessEq(data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */,0.0);
  tmp13 = (modelica_boolean)tmp0;
  if(tmp13)
  {
    tmp14 = 1.0;
  }
  else
  {
    tmp1 = Greater(data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */,0.0);
    tmp2 = LessEq(data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */,0.433);
    tmp11 = (modelica_boolean)(tmp1 && tmp2);
    if(tmp11)
    {
      tmp12 = 1.0 + (-0.577) * (data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */);
    }
    else
    {
      tmp3 = Greater(data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */,0.433);
      tmp4 = Less(data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */,0.75);
      tmp9 = (modelica_boolean)(tmp3 && tmp4);
      if(tmp9)
      {
        tmp5 = data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */;
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
        tmp7 = GreaterEq(data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */,0.75);
        tmp8 = LessEq(data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */,1.0);
        tmp10 = ((tmp7 && tmp8)?(1.732) * (1.0 - data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */):0.0);
      }
      tmp12 = tmp10;
    }
    tmp14 = tmp12;
  }
  data->localData[0]->realVars[81] /* eSAC2A.rectifierCommutationVoltageDrop.fEX.y variable */ = tmp14;
  TRACE_POP
}
/*
equation index: 53
type: SIMPLE_ASSIGN
eSAC2A._rotatingExciterWithDemagnetization._Sum._u1 = eSAC2A.rectifierCommutationVoltageDrop.V_EX * eSAC2A.rotatingExciterWithDemagnetization.VE.u2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_53(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,53};
  data->localData[0]->realVars[82] /* eSAC2A.rotatingExciterWithDemagnetization.Sum.u1 variable */ = (data->localData[0]->realVars[78] /* eSAC2A.rectifierCommutationVoltageDrop.V_EX variable */) * (data->localData[0]->realVars[84] /* eSAC2A.rotatingExciterWithDemagnetization.VE.u2 variable */);
  TRACE_POP
}
/*
equation index: 54
type: SIMPLE_ASSIGN
eSAC2A._rotatingExciterWithDemagnetization._Sum._u2 = eSAC2A.rotatingExciterWithDemagnetization.gain.k * eSAC2A.rectifierCommutationVoltageDrop.V_EX
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_54(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,54};
  data->localData[0]->realVars[83] /* eSAC2A.rotatingExciterWithDemagnetization.Sum.u2 variable */ = (data->simulationInfo->realParameter[183] /* eSAC2A.rotatingExciterWithDemagnetization.gain.k PARAM */) * (data->localData[0]->realVars[78] /* eSAC2A.rectifierCommutationVoltageDrop.V_EX variable */);
  TRACE_POP
}
/*
equation index: 55
type: SIMPLE_ASSIGN
eSAC2A._derivative._u = eSAC2A.rotatingExciterWithDemagnetization.Sum.k1 * eSAC2A.rotatingExciterWithDemagnetization.Sum.u1 + eSAC2A.rotatingExciterWithDemagnetization.Sum.k2 * eSAC2A.rotatingExciterWithDemagnetization.Sum.u2 + eSAC2A.rotatingExciterWithDemagnetization.Sum.k3 * eSAC2A.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_55(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,55};
  data->localData[0]->realVars[69] /* eSAC2A.derivative.u variable */ = (data->simulationInfo->realParameter[179] /* eSAC2A.rotatingExciterWithDemagnetization.Sum.k1 PARAM */) * (data->localData[0]->realVars[82] /* eSAC2A.rotatingExciterWithDemagnetization.Sum.u1 variable */) + (data->simulationInfo->realParameter[180] /* eSAC2A.rotatingExciterWithDemagnetization.Sum.k2 PARAM */) * (data->localData[0]->realVars[83] /* eSAC2A.rotatingExciterWithDemagnetization.Sum.u2 variable */) + (data->simulationInfo->realParameter[181] /* eSAC2A.rotatingExciterWithDemagnetization.Sum.k3 PARAM */) * (data->localData[0]->realVars[67] /* eSAC2A.XADIFD variable */);
  TRACE_POP
}
/*
equation index: 56
type: SIMPLE_ASSIGN
eSAC2A._DiffV3._u1 = eSAC2A.gain.k * eSAC2A.derivative.u
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_56(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,56};
  data->localData[0]->realVars[61] /* eSAC2A.DiffV3.u1 variable */ = (data->simulationInfo->realParameter[139] /* eSAC2A.gain.k PARAM */) * (data->localData[0]->realVars[69] /* eSAC2A.derivative.u variable */);
  TRACE_POP
}
/*
equation index: 57
type: SIMPLE_ASSIGN
eSAC2A._limiter1._y = eSAC2A.derivative.u + eSAC2A.rotatingExciterWithDemagnetization.feedback.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_57(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,57};
  data->localData[0]->realVars[77] /* eSAC2A.limiter1.y variable */ = data->localData[0]->realVars[69] /* eSAC2A.derivative.u variable */ + data->localData[0]->realVars[85] /* eSAC2A.rotatingExciterWithDemagnetization.feedback.y variable */;
  TRACE_POP
}
/*
equation index: 58
type: SIMPLE_ASSIGN
eSAC2A._ECOMP0 = eSAC2A.ECOMP
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_58(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,58};
  data->simulationInfo->realParameter[93] /* eSAC2A.ECOMP0 PARAM */ = data->localData[0]->realVars[64] /* eSAC2A.ECOMP variable */;
  TRACE_POP
}
/*
equation index: 59
type: SIMPLE_ASSIGN
eSAC2A._V_REF = eSAC2A.VR0 / eSAC2A.K_A + eSAC2A.ECOMP0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_59(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,59};
  data->simulationInfo->realParameter[124] /* eSAC2A.V_REF PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[119] /* eSAC2A.VR0 PARAM */,data->simulationInfo->realParameter[100] /* eSAC2A.K_A PARAM */,"eSAC2A.K_A",equationIndexes) + data->simulationInfo->realParameter[93] /* eSAC2A.ECOMP0 PARAM */;
  TRACE_POP
}
/*
equation index: 60
type: SIMPLE_ASSIGN
eSAC2A._VoltageReference._k = eSAC2A.V_REF
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_60(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,60};
  data->simulationInfo->realParameter[127] /* eSAC2A.VoltageReference.k PARAM */ = data->simulationInfo->realParameter[124] /* eSAC2A.V_REF PARAM */;
  TRACE_POP
}
/*
equation index: 61
type: SIMPLE_ASSIGN
eSAC2A._imSimpleLag._y_start = eSAC2A.ECOMP0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_61(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,61};
  data->simulationInfo->realParameter[164] /* eSAC2A.imSimpleLag.y_start PARAM */ = data->simulationInfo->realParameter[93] /* eSAC2A.ECOMP0 PARAM */;
  TRACE_POP
}
/*
equation index: 62
type: SIMPLE_ASSIGN
_omcQuot_245354415254._eSAC2A._DiffV._u2 = eSAC2A.imSimpleLag.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_62(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,62};
  data->modelData->realVarsData[56].attribute /* eSAC2A.DiffV.u2 variable */.start = data->simulationInfo->realParameter[164] /* eSAC2A.imSimpleLag.y_start PARAM */;
    data->localData[0]->realVars[56] /* eSAC2A.DiffV.u2 variable */ = data->modelData->realVarsData[56].attribute /* eSAC2A.DiffV.u2 variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[56].info /* eSAC2A.DiffV.u2 */.name, (modelica_real) data->localData[0]->realVars[56] /* eSAC2A.DiffV.u2 variable */);
  TRACE_POP
}
/*
equation index: 63
type: SIMPLE_ASSIGN
_omcQuot_245354415254._eSAC2A._imSimpleLag._state = eSAC2A.imSimpleLag.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_63(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,63};
  data->modelData->realVarsData[2].attribute /* eSAC2A.imSimpleLag.state STATE(1) */.start = data->simulationInfo->realParameter[164] /* eSAC2A.imSimpleLag.y_start PARAM */;
    data->localData[0]->realVars[2] /* eSAC2A.imSimpleLag.state STATE(1) */ = data->modelData->realVarsData[2].attribute /* eSAC2A.imSimpleLag.state STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[2].info /* eSAC2A.imSimpleLag.state */.name, (modelica_real) data->localData[0]->realVars[2] /* eSAC2A.imSimpleLag.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 64
type: SIMPLE_ASSIGN
eSAC2A._imSimpleLag._state = eSAC2A.imSimpleLag.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_64(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,64};
  data->localData[0]->realVars[2] /* eSAC2A.imSimpleLag.state STATE(1) */ = data->simulationInfo->realParameter[164] /* eSAC2A.imSimpleLag.y_start PARAM */;
  TRACE_POP
}
/*
equation index: 65
type: SIMPLE_ASSIGN
eSAC2A._DiffV._u2 = if abs(eSAC2A.imSimpleLag.T) <= 1e-15 then eSAC2A.ECOMP * eSAC2A.imSimpleLag.K else eSAC2A.imSimpleLag.state
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_65(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,65};
  modelica_boolean tmp0;
  tmp0 = LessEq(fabs(data->simulationInfo->realParameter[161] /* eSAC2A.imSimpleLag.T PARAM */),1e-15);
  data->localData[0]->realVars[56] /* eSAC2A.DiffV.u2 variable */ = (tmp0?(data->localData[0]->realVars[64] /* eSAC2A.ECOMP variable */) * (data->simulationInfo->realParameter[160] /* eSAC2A.imSimpleLag.K PARAM */):data->localData[0]->realVars[2] /* eSAC2A.imSimpleLag.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 66
type: SIMPLE_ASSIGN
eSAC2A._DiffV._y = eSAC2A.DiffV.k1 * eSAC2A.VoltageReference.k + eSAC2A.DiffV.k2 * eSAC2A.DiffV.u2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_66(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,66};
  data->localData[0]->realVars[57] /* eSAC2A.DiffV.y variable */ = (data->simulationInfo->realParameter[82] /* eSAC2A.DiffV.k1 PARAM */) * (data->simulationInfo->realParameter[127] /* eSAC2A.VoltageReference.k PARAM */) + (data->simulationInfo->realParameter[83] /* eSAC2A.DiffV.k2 PARAM */) * (data->localData[0]->realVars[56] /* eSAC2A.DiffV.u2 variable */);
  TRACE_POP
}
/*
equation index: 67
type: SIMPLE_ASSIGN
eSAC2A._add3_1._y = eSAC2A.add3_1.k1 * const.k + eSAC2A.add3_1.k2 * eSAC2A.DiffV.y + eSAC2A.add3_1.k3 * eSAC2A.derivative.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_67(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,67};
  data->localData[0]->realVars[68] /* eSAC2A.add3_1.y variable */ = (data->simulationInfo->realParameter[129] /* eSAC2A.add3_1.k1 PARAM */) * (data->simulationInfo->realParameter[34] /* const.k PARAM */) + (data->simulationInfo->realParameter[130] /* eSAC2A.add3_1.k2 PARAM */) * (data->localData[0]->realVars[57] /* eSAC2A.DiffV.y variable */) + (data->simulationInfo->realParameter[131] /* eSAC2A.add3_1.k3 PARAM */) * (data->localData[0]->realVars[70] /* eSAC2A.derivative.y variable */);
  TRACE_POP
}
/*
equation index: 68
type: SIMPLE_ASSIGN
eSAC2A._imLeadLag._y = if abs(eSAC2A.imLeadLag.T1 - eSAC2A.imLeadLag.T2) < 1e-15 then eSAC2A.imLeadLag.K * eSAC2A.add3_1.y else eSAC2A.imLeadLag.TF.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_68(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,68};
  modelica_boolean tmp0;
  tmp0 = Less(fabs(data->simulationInfo->realParameter[143] /* eSAC2A.imLeadLag.T1 PARAM */ - data->simulationInfo->realParameter[144] /* eSAC2A.imLeadLag.T2 PARAM */),1e-15);
  data->localData[0]->realVars[75] /* eSAC2A.imLeadLag.y variable */ = (tmp0?(data->simulationInfo->realParameter[142] /* eSAC2A.imLeadLag.K PARAM */) * (data->localData[0]->realVars[68] /* eSAC2A.add3_1.y variable */):data->localData[0]->realVars[74] /* eSAC2A.imLeadLag.TF.y variable */);
  TRACE_POP
}
/*
equation index: 69
type: SIMPLE_ASSIGN
eSAC2A._DiffV3._u2 = if abs(eSAC2A.simpleLagLim.T) <= 1e-15 then max(min(eSAC2A.imLeadLag.y * eSAC2A.simpleLagLim.K, eSAC2A.simpleLagLim.outMax), eSAC2A.simpleLagLim.outMin) else max(min(eSAC2A.simpleLagLim.state, eSAC2A.simpleLagLim.outMax), eSAC2A.simpleLagLim.outMin)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_69(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,69};
  modelica_boolean tmp0;
  tmp0 = LessEq(fabs(data->simulationInfo->realParameter[196] /* eSAC2A.simpleLagLim.T PARAM */),1e-15);
  data->localData[0]->realVars[62] /* eSAC2A.DiffV3.u2 variable */ = (tmp0?fmax(fmin((data->localData[0]->realVars[75] /* eSAC2A.imLeadLag.y variable */) * (data->simulationInfo->realParameter[195] /* eSAC2A.simpleLagLim.K PARAM */),data->simulationInfo->realParameter[199] /* eSAC2A.simpleLagLim.outMax PARAM */),data->simulationInfo->realParameter[200] /* eSAC2A.simpleLagLim.outMin PARAM */):fmax(fmin(data->localData[0]->realVars[4] /* eSAC2A.simpleLagLim.state STATE(1) */,data->simulationInfo->realParameter[199] /* eSAC2A.simpleLagLim.outMax PARAM */),data->simulationInfo->realParameter[200] /* eSAC2A.simpleLagLim.outMin PARAM */));
  TRACE_POP
}
/*
equation index: 70
type: SIMPLE_ASSIGN
eSAC2A._DiffV3._y = eSAC2A.DiffV3.k1 * eSAC2A.DiffV3.u1 + eSAC2A.DiffV3.k2 * eSAC2A.DiffV3.u2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_70(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,70};
  data->localData[0]->realVars[63] /* eSAC2A.DiffV3.y variable */ = (data->simulationInfo->realParameter[91] /* eSAC2A.DiffV3.k1 PARAM */) * (data->localData[0]->realVars[61] /* eSAC2A.DiffV3.u1 variable */) + (data->simulationInfo->realParameter[92] /* eSAC2A.DiffV3.k2 PARAM */) * (data->localData[0]->realVars[62] /* eSAC2A.DiffV3.u2 variable */);
  TRACE_POP
}
/*
equation index: 71
type: SIMPLE_ASSIGN
eSAC2A._gain1._y = eSAC2A.gain1.k * eSAC2A.DiffV3.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_71(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,71};
  data->localData[0]->realVars[71] /* eSAC2A.gain1.y variable */ = (data->simulationInfo->realParameter[140] /* eSAC2A.gain1.k PARAM */) * (data->localData[0]->realVars[63] /* eSAC2A.DiffV3.y variable */);
  TRACE_POP
}
/*
equation index: 72
type: SIMPLE_ASSIGN
eSAC2A._hV_GATE._p = if eSAC2A.gain1.y < const5.k then const5.k else eSAC2A.gain1.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_72(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,72};
  modelica_boolean tmp0;
  tmp0 = Less(data->localData[0]->realVars[71] /* eSAC2A.gain1.y variable */,data->simulationInfo->realParameter[38] /* const5.k PARAM */);
  data->localData[0]->realVars[72] /* eSAC2A.hV_GATE.p variable */ = (tmp0?data->simulationInfo->realParameter[38] /* const5.k PARAM */:data->localData[0]->realVars[71] /* eSAC2A.gain1.y variable */);
  TRACE_POP
}
/*
equation index: 73
type: SIMPLE_ASSIGN
eSAC2A._lV_GATE._p = if const4.k > eSAC2A.hV_GATE.p then eSAC2A.hV_GATE.p else const4.k
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_73(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,73};
  modelica_boolean tmp0;
  tmp0 = Greater(data->simulationInfo->realParameter[36] /* const4.k PARAM */,data->localData[0]->realVars[72] /* eSAC2A.hV_GATE.p variable */);
  data->localData[0]->realVars[76] /* eSAC2A.lV_GATE.p variable */ = (tmp0?data->localData[0]->realVars[72] /* eSAC2A.hV_GATE.p variable */:data->simulationInfo->realParameter[36] /* const4.k PARAM */);
  TRACE_POP
}
/*
equation index: 74
type: SIMPLE_ASSIGN
pwLine._is._re = (cos(gENROU.delta) * gENROU.iq - (-sin(gENROU.delta)) * gENROU.id) * gENROU.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_74(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,74};
  data->localData[0]->realVars[127] /* pwLine.is.re variable */ = ((cos(data->localData[0]->realVars[11] /* gENROU.delta STATE(1) */)) * (data->localData[0]->realVars[115] /* gENROU.iq variable */) - (((-sin(data->localData[0]->realVars[11] /* gENROU.delta STATE(1) */))) * (data->localData[0]->realVars[114] /* gENROU.id variable */))) * (data->simulationInfo->realParameter[228] /* gENROU.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 75
type: SIMPLE_ASSIGN
pwLine._is._im = (sin(gENROU.delta) * gENROU.iq - cos(gENROU.delta) * gENROU.id) * gENROU.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_75(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,75};
  data->localData[0]->realVars[126] /* pwLine.is.im variable */ = ((sin(data->localData[0]->realVars[11] /* gENROU.delta STATE(1) */)) * (data->localData[0]->realVars[115] /* gENROU.iq variable */) - ((cos(data->localData[0]->realVars[11] /* gENROU.delta STATE(1) */)) * (data->localData[0]->realVars[114] /* gENROU.id variable */))) * (data->simulationInfo->realParameter[228] /* gENROU.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 76
type: SIMPLE_ASSIGN
gENROU._PSIq = (-gENROU.PSIppq) - gENROU.Xppq * gENROU.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_76(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,76};
  data->localData[0]->realVars[108] /* gENROU.PSIq variable */ = (-data->localData[0]->realVars[107] /* gENROU.PSIppq variable */) - ((data->simulationInfo->realParameter[283] /* gENROU.Xppq PARAM */) * (data->localData[0]->realVars[115] /* gENROU.iq variable */));
  TRACE_POP
}
/*
equation index: 77
type: SIMPLE_ASSIGN
gENROU._ud = (-gENROU.PSIq) - gENROU.R_a * gENROU.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_77(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,77};
  data->localData[0]->realVars[116] /* gENROU.ud variable */ = (-data->localData[0]->realVars[108] /* gENROU.PSIq variable */) - ((data->simulationInfo->realParameter[265] /* gENROU.R_a PARAM */) * (data->localData[0]->realVars[114] /* gENROU.id variable */));
  TRACE_POP
}
/*
equation index: 78
type: SIMPLE_ASSIGN
gENROU._PSIpp = sqrt(gENROU.PSIppd ^ 2.0 + gENROU.PSIppq ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_78(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,78};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[106] /* gENROU.PSIppd variable */;
  tmp1 = data->localData[0]->realVars[107] /* gENROU.PSIppq variable */;
  data->localData[0]->realVars[105] /* gENROU.PSIpp variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 79
type: SIMPLE_ASSIGN
gENROU._PSId = gENROU.PSIppd - gENROU.Xppd * gENROU.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_79(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,79};
  data->localData[0]->realVars[104] /* gENROU.PSId variable */ = data->localData[0]->realVars[106] /* gENROU.PSIppd variable */ - ((data->simulationInfo->realParameter[282] /* gENROU.Xppd PARAM */) * (data->localData[0]->realVars[114] /* gENROU.id variable */));
  TRACE_POP
}
/*
equation index: 80
type: SIMPLE_ASSIGN
gENROU._uq = gENROU.PSId - gENROU.R_a * gENROU.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_80(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,80};
  data->localData[0]->realVars[117] /* gENROU.uq variable */ = data->localData[0]->realVars[104] /* gENROU.PSId variable */ - ((data->simulationInfo->realParameter[265] /* gENROU.R_a PARAM */) * (data->localData[0]->realVars[115] /* gENROU.iq variable */));
  TRACE_POP
}
/*
equation index: 81
type: SIMPLE_ASSIGN
gENROU._PSIkd = ((gENROU.Epq + (gENROU.Xl - gENROU.Xpd) * gENROU.id) * gENROU.K1d + gENROU.Epq + gENROU.id * (gENROU.Xd - gENROU.Xpd) + OpenIPSL.NonElectrical.Functions.SE(gENROU.PSIpp, gENROU.S10, gENROU.S12, 1.0, 1.2) * gENROU.PSIppd - eSAC2A.XADIFD) / gENROU.K1d
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_81(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,81};
  data->localData[0]->realVars[9] /* gENROU.PSIkd STATE(1) */ = DIVISION_SIM((data->localData[0]->realVars[8] /* gENROU.Epq STATE(1) */ + (data->simulationInfo->realParameter[279] /* gENROU.Xl PARAM */ - data->simulationInfo->realParameter[280] /* gENROU.Xpd PARAM */) * (data->localData[0]->realVars[114] /* gENROU.id variable */)) * (data->simulationInfo->realParameter[242] /* gENROU.K1d PARAM */) + data->localData[0]->realVars[8] /* gENROU.Epq STATE(1) */ + (data->localData[0]->realVars[114] /* gENROU.id variable */) * (data->simulationInfo->realParameter[278] /* gENROU.Xd PARAM */ - data->simulationInfo->realParameter[280] /* gENROU.Xpd PARAM */) + (omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->localData[0]->realVars[105] /* gENROU.PSIpp variable */, data->simulationInfo->realParameter[268] /* gENROU.S10 PARAM */, data->simulationInfo->realParameter[269] /* gENROU.S12 PARAM */, 1.0, 1.2)) * (data->localData[0]->realVars[106] /* gENROU.PSIppd variable */) - data->localData[0]->realVars[67] /* eSAC2A.XADIFD variable */,data->simulationInfo->realParameter[242] /* gENROU.K1d PARAM */,"gENROU.K1d",equationIndexes);
  TRACE_POP
}
/*
equation index: 82
type: SIMPLE_ASSIGN
gENROU._PSIkq = ((gENROU.Epd + (gENROU.Xpq - gENROU.Xl) * gENROU.iq) * gENROU.K1q + gENROU.Epd + gENROU.iq * (gENROU.Xpq - gENROU.Xq) + OpenIPSL.NonElectrical.Functions.SE(gENROU.PSIpp, gENROU.S10, gENROU.S12, 1.0, 1.2) * gENROU.PSIppq * (gENROU.Xq - gENROU.Xl) / (gENROU.Xd - gENROU.Xl) - gENROU.XaqIlq) / gENROU.K1q
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_82(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,82};
  data->localData[0]->realVars[10] /* gENROU.PSIkq STATE(1) */ = DIVISION_SIM((data->localData[0]->realVars[7] /* gENROU.Epd STATE(1) */ + (data->simulationInfo->realParameter[284] /* gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[279] /* gENROU.Xl PARAM */) * (data->localData[0]->realVars[115] /* gENROU.iq variable */)) * (data->simulationInfo->realParameter[243] /* gENROU.K1q PARAM */) + data->localData[0]->realVars[7] /* gENROU.Epd STATE(1) */ + (data->localData[0]->realVars[115] /* gENROU.iq variable */) * (data->simulationInfo->realParameter[284] /* gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[285] /* gENROU.Xq PARAM */) + (omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->localData[0]->realVars[105] /* gENROU.PSIpp variable */, data->simulationInfo->realParameter[268] /* gENROU.S10 PARAM */, data->simulationInfo->realParameter[269] /* gENROU.S12 PARAM */, 1.0, 1.2)) * ((data->localData[0]->realVars[107] /* gENROU.PSIppq variable */) * (DIVISION_SIM(data->simulationInfo->realParameter[285] /* gENROU.Xq PARAM */ - data->simulationInfo->realParameter[279] /* gENROU.Xl PARAM */,data->simulationInfo->realParameter[278] /* gENROU.Xd PARAM */ - data->simulationInfo->realParameter[279] /* gENROU.Xl PARAM */,"gENROU.Xd - gENROU.Xl",equationIndexes))) - data->localData[0]->realVars[111] /* gENROU.XaqIlq variable */,data->simulationInfo->realParameter[243] /* gENROU.K1q PARAM */,"gENROU.K1q",equationIndexes);
  TRACE_POP
}
/*
equation index: 83
type: SIMPLE_ASSIGN
gENCLS._p._ir = ((-sin(gENCLS.delta)) * gENCLS.id - cos(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_83(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,83};
  data->localData[0]->realVars[98] /* gENCLS.p.ir variable */ = (((-sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[94] /* gENCLS.id variable */) - ((cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[95] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[202] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 84
type: SIMPLE_ASSIGN
gENCLS._p._ii = (cos(gENCLS.delta) * gENCLS.id - sin(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_84(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,84};
  data->localData[0]->realVars[97] /* gENCLS.p.ii variable */ = ((cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[94] /* gENCLS.id variable */) - ((sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[95] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[202] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 85
type: SIMPLE_ASSIGN
gENCLS._vq = gENCLS.eq + (-gENCLS.R_a) * gENCLS.iq - gENCLS.X_d * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_85(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,85};
  data->localData[0]->realVars[100] /* gENCLS.vq variable */ = data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */ + ((-data->simulationInfo->realParameter[208] /* gENCLS.R_a PARAM */)) * (data->localData[0]->realVars[95] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[211] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[94] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 86
type: SIMPLE_ASSIGN
gENCLS._vd = gENCLS.X_d * gENCLS.iq - gENCLS.R_a * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_86(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,86};
  data->localData[0]->realVars[99] /* gENCLS.vd variable */ = (data->simulationInfo->realParameter[211] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[95] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[208] /* gENCLS.R_a PARAM */) * (data->localData[0]->realVars[94] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 87
type: SIMPLE_ASSIGN
pwLine4._ir._im = (-pwLine1.ir.im) - gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_87(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,87};
  data->localData[0]->realVars[156] /* pwLine4.ir.im variable */ = (-data->localData[0]->realVars[134] /* pwLine1.ir.im variable */) - data->localData[0]->realVars[97] /* gENCLS.p.ii variable */;
  TRACE_POP
}
/*
equation index: 88
type: SIMPLE_ASSIGN
pwLine4._ir._re = (-pwLine1.ir.re) - gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_88(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,88};
  data->localData[0]->realVars[157] /* pwLine4.ir.re variable */ = (-data->localData[0]->realVars[135] /* pwLine1.ir.re variable */) - data->localData[0]->realVars[98] /* gENCLS.p.ir variable */;
  TRACE_POP
}
/*
equation index: 89
type: SIMPLE_ASSIGN
pwFault._p._ir = (-pwLine3.ir.re) - pwLine4.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_89(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,89};
  data->localData[0]->realVars[119] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[147] /* pwLine3.ir.re variable */) - data->localData[0]->realVars[159] /* pwLine4.is.re variable */;
  TRACE_POP
}
/*
equation index: 90
type: SIMPLE_ASSIGN
pwFault._p._ii = (-pwLine3.ir.im) - pwLine4.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_90(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,90};
  data->localData[0]->realVars[118] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[146] /* pwLine3.ir.im variable */) - data->localData[0]->realVars[158] /* pwLine4.is.im variable */;
  TRACE_POP
}
/*
equation index: 91
type: SIMPLE_ASSIGN
pwLine3._is._re = (-pwLine.ir.re) - pwLine1.is.re - constantLoad.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_91(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,91};
  data->localData[0]->realVars[149] /* pwLine3.is.re variable */ = (-data->localData[0]->realVars[125] /* pwLine.ir.re variable */) - data->localData[0]->realVars[137] /* pwLine1.is.re variable */ - data->localData[0]->realVars[54] /* constantLoad.p.ir variable */;
  TRACE_POP
}
/*
equation index: 92
type: SIMPLE_ASSIGN
pwLine1._is._im = (-pwLine.ir.im) - pwLine3.is.im - constantLoad.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_92(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,92};
  data->localData[0]->realVars[136] /* pwLine1.is.im variable */ = (-data->localData[0]->realVars[124] /* pwLine.ir.im variable */) - data->localData[0]->realVars[148] /* pwLine3.is.im variable */ - data->localData[0]->realVars[53] /* constantLoad.p.ii variable */;
  TRACE_POP
}

void residualFunc124(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,124};
  int i;
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_boolean tmp11;
  modelica_real tmp12;
  modelica_boolean tmp13;
  modelica_real tmp14;
  modelica_boolean tmp15;
  modelica_real tmp16;
  modelica_boolean tmp17;
  modelica_boolean tmp18;
  modelica_boolean tmp19;
  modelica_boolean tmp20;
  modelica_boolean tmp21;
  modelica_boolean tmp22;
  modelica_boolean tmp23;
  modelica_boolean tmp24;
  modelica_boolean tmp25;
  modelica_boolean tmp26;
  modelica_boolean tmp27;
  modelica_boolean tmp28;
  modelica_boolean tmp29;
  modelica_real tmp30;
  modelica_real tmp31;
  modelica_boolean tmp32;
  modelica_real tmp33;
  modelica_boolean tmp34;
  modelica_real tmp35;
  modelica_boolean tmp36;
  modelica_real tmp37;
  modelica_boolean tmp38;
  modelica_boolean tmp39;
  modelica_boolean tmp40;
  modelica_boolean tmp41;
  modelica_boolean tmp42;
  modelica_boolean tmp43;
  modelica_boolean tmp44;
  modelica_boolean tmp45;
  modelica_boolean tmp46;
  modelica_boolean tmp47;
  modelica_boolean tmp48;
  modelica_boolean tmp49;
  modelica_boolean tmp50;
  modelica_boolean tmp51;
  modelica_boolean tmp52;
  modelica_boolean tmp53;
  modelica_boolean tmp54;
  modelica_boolean tmp55;
  modelica_boolean tmp56;
  modelica_boolean tmp57;
  modelica_boolean tmp58;
  modelica_boolean tmp59;
  /* iteration variables */
  for (i=0; i<31; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<31; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[124] /* pwLine.ir.im variable */ = xloc[0];
  data->localData[0]->realVars[148] /* pwLine3.is.im variable */ = xloc[1];
  data->localData[0]->realVars[125] /* pwLine.ir.re variable */ = xloc[2];
  data->localData[0]->realVars[137] /* pwLine1.is.re variable */ = xloc[3];
  data->localData[0]->realVars[54] /* constantLoad.p.ir variable */ = xloc[4];
  data->localData[0]->realVars[53] /* constantLoad.p.ii variable */ = xloc[5];
  data->localData[0]->realVars[146] /* pwLine3.ir.im variable */ = xloc[6];
  data->localData[0]->realVars[158] /* pwLine4.is.im variable */ = xloc[7];
  data->localData[0]->realVars[147] /* pwLine3.ir.re variable */ = xloc[8];
  data->localData[0]->realVars[159] /* pwLine4.is.re variable */ = xloc[9];
  data->localData[0]->realVars[135] /* pwLine1.ir.re variable */ = xloc[10];
  data->localData[0]->realVars[134] /* pwLine1.ir.im variable */ = xloc[11];
  data->localData[0]->realVars[94] /* gENCLS.id variable */ = xloc[12];
  data->localData[0]->realVars[95] /* gENCLS.iq variable */ = xloc[13];
  data->localData[0]->realVars[7] /* gENROU.Epd STATE(1) */ = xloc[14];
  data->localData[0]->realVars[8] /* gENROU.Epq STATE(1) */ = xloc[15];
  data->localData[0]->realVars[106] /* gENROU.PSIppd variable */ = xloc[16];
  data->localData[0]->realVars[107] /* gENROU.PSIppq variable */ = xloc[17];
  data->localData[0]->realVars[114] /* gENROU.id variable */ = xloc[18];
  data->localData[0]->realVars[115] /* gENROU.iq variable */ = xloc[19];
  data->localData[0]->realVars[129] /* pwLine.vs.re variable */ = xloc[20];
  data->localData[0]->realVars[128] /* pwLine.vs.im variable */ = xloc[21];
  data->localData[0]->realVars[138] /* pwLine1.vr.im variable */ = xloc[22];
  data->localData[0]->realVars[139] /* pwLine1.vr.re variable */ = xloc[23];
  data->localData[0]->realVars[64] /* eSAC2A.ECOMP variable */ = xloc[24];
  data->localData[0]->realVars[85] /* eSAC2A.rotatingExciterWithDemagnetization.feedback.y variable */ = xloc[25];
  data->localData[0]->realVars[67] /* eSAC2A.XADIFD variable */ = xloc[26];
  data->localData[0]->realVars[140] /* pwLine1.vs.im variable */ = xloc[27];
  data->localData[0]->realVars[151] /* pwLine3.vr.re variable */ = xloc[28];
  data->localData[0]->realVars[150] /* pwLine3.vr.im variable */ = xloc[29];
  data->localData[0]->realVars[141] /* pwLine1.vs.re variable */ = xloc[30];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_24(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_25(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_26(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_27(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_28(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_29(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_30(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_31(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_32(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_33(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_34(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_35(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_36(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_37(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_38(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_39(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_40(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_41(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_42(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_43(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_44(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_45(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_46(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_47(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_48(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_49(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_50(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_51(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_52(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_53(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_54(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_55(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_56(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_57(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_58(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_59(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_60(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_61(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_62(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_63(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_64(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_65(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_66(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_67(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_68(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_69(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_70(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_71(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_72(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_73(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_74(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_75(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_76(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_77(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_78(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_79(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_80(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_81(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_82(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_83(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_84(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_85(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_86(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_87(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_88(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_89(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_90(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_91(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_92(data, threadData);
  /* body */
  res[0] = (sin(data->localData[0]->realVars[11] /* gENROU.delta STATE(1) */)) * (data->localData[0]->realVars[117] /* gENROU.uq variable */) + ((-cos(data->localData[0]->realVars[11] /* gENROU.delta STATE(1) */))) * (data->localData[0]->realVars[116] /* gENROU.ud variable */) - data->localData[0]->realVars[128] /* pwLine.vs.im variable */;

  res[1] = (data->localData[0]->realVars[78] /* eSAC2A.rectifierCommutationVoltageDrop.V_EX variable */) * (data->localData[0]->realVars[81] /* eSAC2A.rectifierCommutationVoltageDrop.fEX.y variable */) - data->localData[0]->realVars[65] /* eSAC2A.EFD variable */;

  tmp0 = Greater(data->localData[0]->realVars[76] /* eSAC2A.lV_GATE.p variable */,data->simulationInfo->realParameter[166] /* eSAC2A.limiter1.uMax PARAM */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->simulationInfo->realParameter[166] /* eSAC2A.limiter1.uMax PARAM */;
  }
  else
  {
    tmp1 = Less(data->localData[0]->realVars[76] /* eSAC2A.lV_GATE.p variable */,data->simulationInfo->realParameter[167] /* eSAC2A.limiter1.uMin PARAM */);
    tmp3 = (tmp1?data->simulationInfo->realParameter[167] /* eSAC2A.limiter1.uMin PARAM */:data->localData[0]->realVars[76] /* eSAC2A.lV_GATE.p variable */);
  }
  res[2] = homotopy(tmp3, data->localData[0]->realVars[76] /* eSAC2A.lV_GATE.p variable */) - data->localData[0]->realVars[77] /* eSAC2A.limiter1.y variable */;

  tmp4 = data->localData[0]->realVars[129] /* pwLine.vs.re variable */;
  tmp5 = data->localData[0]->realVars[128] /* pwLine.vs.im variable */;
  res[3] = sqrt((tmp4 * tmp4) + (tmp5 * tmp5)) - data->localData[0]->realVars[64] /* eSAC2A.ECOMP variable */;

  tmp6 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[315] /* pwFault.t1 PARAM */);
  tmp15 = (modelica_boolean)tmp6;
  if(tmp15)
  {
    tmp16 = data->localData[0]->realVars[119] /* pwFault.p.ir variable */;
  }
  else
  {
    tmp7 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[316] /* pwFault.t2 PARAM */);
    tmp13 = (modelica_boolean)(tmp7 && data->simulationInfo->booleanParameter[66] /* pwFault.ground PARAM */);
    if(tmp13)
    {
      tmp14 = data->localData[0]->realVars[150] /* pwLine3.vr.im variable */;
    }
    else
    {
      tmp8 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[316] /* pwFault.t2 PARAM */);
      tmp11 = (modelica_boolean)tmp8;
      if(tmp11)
      {
        tmp9 = data->simulationInfo->realParameter[313] /* pwFault.R PARAM */;
        tmp10 = data->simulationInfo->realParameter[314] /* pwFault.X PARAM */;
        tmp12 = data->localData[0]->realVars[119] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[313] /* pwFault.R PARAM */) * (data->localData[0]->realVars[151] /* pwLine3.vr.re variable */) + (data->simulationInfo->realParameter[314] /* pwFault.X PARAM */) * (data->localData[0]->realVars[150] /* pwLine3.vr.im variable */),(tmp9 * tmp9) + (tmp10 * tmp10),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp12 = data->localData[0]->realVars[119] /* pwFault.p.ir variable */;
      }
      tmp14 = tmp12;
    }
    tmp16 = tmp14;
  }
  res[4] = tmp16;

  res[5] = (sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[100] /* gENCLS.vq variable */) + ((-cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[99] /* gENCLS.vd variable */) - data->localData[0]->realVars[138] /* pwLine1.vr.im variable */;

  res[6] = (cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[100] /* gENCLS.vq variable */) + (sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[99] /* gENCLS.vd variable */) - data->localData[0]->realVars[139] /* pwLine1.vr.re variable */;

  tmp17 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[359] /* pwLine4.t1 PARAM */);
  tmp18 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[360] /* pwLine4.t2 PARAM */);
  res[7] = ((tmp17 && tmp18)?data->localData[0]->realVars[159] /* pwLine4.is.re variable */:data->localData[0]->realVars[151] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[139] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[358] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[159] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[150] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[355] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[151] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[356] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[357] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[158] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[151] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[355] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[150] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[356] /* pwLine4.Y.re PARAM */))))));

  tmp19 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[359] /* pwLine4.t1 PARAM */);
  tmp20 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[360] /* pwLine4.t2 PARAM */);
  res[8] = ((tmp19 && tmp20)?data->localData[0]->realVars[158] /* pwLine4.is.im variable */:data->localData[0]->realVars[150] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[138] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[358] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[158] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[151] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[355] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[150] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[356] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[357] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[159] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[150] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[355] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[151] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[356] /* pwLine4.Y.re PARAM */)))));

  res[9] = (data->localData[0]->realVars[140] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) + ((-data->localData[0]->realVars[141] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[49] /* constantLoad.Q variable */;

  res[10] = (data->localData[0]->realVars[140] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[141] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[48] /* constantLoad.P variable */;

  tmp21 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[337] /* pwLine1.t1 PARAM */);
  tmp22 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[338] /* pwLine1.t2 PARAM */);
  res[11] = ((tmp21 && tmp22)?data->localData[0]->realVars[137] /* pwLine1.is.re variable */:data->localData[0]->realVars[141] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[139] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[336] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[137] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[140] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[333] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[141] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[334] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[335] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[136] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[141] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[333] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[140] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[334] /* pwLine1.Y.re PARAM */))))));

  tmp23 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[348] /* pwLine3.t1 PARAM */);
  tmp24 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[349] /* pwLine3.t2 PARAM */);
  res[12] = ((tmp23 && tmp24)?data->localData[0]->realVars[149] /* pwLine3.is.re variable */:data->localData[0]->realVars[141] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[151] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[347] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[149] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[140] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[344] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[141] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[345] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[346] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[148] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[141] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[344] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[140] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[345] /* pwLine3.Y.re PARAM */))))));

  tmp25 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[348] /* pwLine3.t1 PARAM */);
  tmp26 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[349] /* pwLine3.t2 PARAM */);
  res[13] = ((tmp25 && tmp26)?data->localData[0]->realVars[148] /* pwLine3.is.im variable */:data->localData[0]->realVars[140] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[150] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[347] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[148] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[141] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[344] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[140] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[345] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[346] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[149] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[140] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[344] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[141] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[345] /* pwLine3.Y.re PARAM */)))));

  tmp27 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[315] /* pwFault.t1 PARAM */);
  tmp36 = (modelica_boolean)tmp27;
  if(tmp36)
  {
    tmp37 = data->localData[0]->realVars[118] /* pwFault.p.ii variable */;
  }
  else
  {
    tmp28 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[316] /* pwFault.t2 PARAM */);
    tmp34 = (modelica_boolean)(tmp28 && data->simulationInfo->booleanParameter[66] /* pwFault.ground PARAM */);
    if(tmp34)
    {
      tmp35 = data->localData[0]->realVars[151] /* pwLine3.vr.re variable */ - 1e-10;
    }
    else
    {
      tmp29 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[316] /* pwFault.t2 PARAM */);
      tmp32 = (modelica_boolean)tmp29;
      if(tmp32)
      {
        tmp30 = data->simulationInfo->realParameter[314] /* pwFault.X PARAM */;
        tmp31 = data->simulationInfo->realParameter[313] /* pwFault.R PARAM */;
        tmp33 = data->localData[0]->realVars[118] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[313] /* pwFault.R PARAM */) * (data->localData[0]->realVars[150] /* pwLine3.vr.im variable */) - ((data->simulationInfo->realParameter[314] /* pwFault.X PARAM */) * (data->localData[0]->realVars[151] /* pwLine3.vr.re variable */)),(tmp30 * tmp30) + (tmp31 * tmp31),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
      }
      else
      {
        tmp33 = data->localData[0]->realVars[118] /* pwFault.p.ii variable */;
      }
      tmp35 = tmp33;
    }
    tmp37 = tmp35;
  }
  res[14] = tmp37;

  tmp38 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[348] /* pwLine3.t1 PARAM */);
  tmp39 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[349] /* pwLine3.t2 PARAM */);
  res[15] = ((tmp38 && tmp39)?data->localData[0]->realVars[147] /* pwLine3.ir.re variable */:data->localData[0]->realVars[151] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[141] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[347] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[147] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[150] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[344] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[151] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[345] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[346] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[146] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[151] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[344] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[150] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[345] /* pwLine3.Y.re PARAM */))))));

  tmp40 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[348] /* pwLine3.t1 PARAM */);
  tmp41 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[349] /* pwLine3.t2 PARAM */);
  res[16] = ((tmp40 && tmp41)?data->localData[0]->realVars[146] /* pwLine3.ir.im variable */:data->localData[0]->realVars[150] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[140] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[347] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[146] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[151] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[344] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[150] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[345] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[346] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[147] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[150] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[344] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[151] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[345] /* pwLine3.Y.re PARAM */)))));

  tmp42 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[359] /* pwLine4.t1 PARAM */);
  tmp43 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[360] /* pwLine4.t2 PARAM */);
  res[17] = ((tmp42 && tmp43)?data->localData[0]->realVars[157] /* pwLine4.ir.re variable */:data->localData[0]->realVars[139] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[151] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[358] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[157] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[138] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[355] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[139] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[356] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[357] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[156] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[139] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[355] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[138] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[356] /* pwLine4.Y.re PARAM */))))));

  tmp44 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[359] /* pwLine4.t1 PARAM */);
  tmp45 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[360] /* pwLine4.t2 PARAM */);
  res[18] = ((tmp44 && tmp45)?data->localData[0]->realVars[156] /* pwLine4.ir.im variable */:data->localData[0]->realVars[138] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[150] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[358] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[156] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[139] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[355] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[138] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[356] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[357] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[157] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[138] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[355] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[139] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[356] /* pwLine4.Y.re PARAM */)))));

  tmp46 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[337] /* pwLine1.t1 PARAM */);
  tmp47 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[338] /* pwLine1.t2 PARAM */);
  res[19] = ((tmp46 && tmp47)?data->localData[0]->realVars[135] /* pwLine1.ir.re variable */:data->localData[0]->realVars[139] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[141] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[336] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[135] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[138] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[333] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[139] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[334] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[335] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[134] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[139] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[333] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[138] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[334] /* pwLine1.Y.re PARAM */))))));

  tmp48 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[337] /* pwLine1.t1 PARAM */);
  tmp49 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[338] /* pwLine1.t2 PARAM */);
  res[20] = ((tmp48 && tmp49)?data->localData[0]->realVars[134] /* pwLine1.ir.im variable */:data->localData[0]->realVars[138] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[140] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[336] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[134] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[139] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[333] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[138] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[334] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[335] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[135] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[138] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[333] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[139] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[334] /* pwLine1.Y.re PARAM */)))));

  tmp50 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[337] /* pwLine1.t1 PARAM */);
  tmp51 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[338] /* pwLine1.t2 PARAM */);
  res[21] = ((tmp50 && tmp51)?data->localData[0]->realVars[136] /* pwLine1.is.im variable */:data->localData[0]->realVars[140] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[138] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[336] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[136] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[141] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[333] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[140] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[334] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[335] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[137] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[140] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[333] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[141] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[334] /* pwLine1.Y.re PARAM */)))));

  tmp52 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[326] /* pwLine.t1 PARAM */);
  tmp53 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[327] /* pwLine.t2 PARAM */);
  res[22] = ((tmp52 && tmp53)?data->localData[0]->realVars[124] /* pwLine.ir.im variable */:data->localData[0]->realVars[140] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[128] /* pwLine.vs.im variable */ - ((data->simulationInfo->realParameter[325] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[124] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[141] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[322] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[140] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[323] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[324] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[125] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[140] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[322] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[141] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[323] /* pwLine.Y.re PARAM */)))));

  tmp54 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[326] /* pwLine.t1 PARAM */);
  tmp55 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[327] /* pwLine.t2 PARAM */);
  res[23] = ((tmp54 && tmp55)?data->localData[0]->realVars[125] /* pwLine.ir.re variable */:data->localData[0]->realVars[141] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[129] /* pwLine.vs.re variable */ - ((data->simulationInfo->realParameter[325] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[125] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[140] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[322] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[141] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[323] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[324] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[124] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[141] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[322] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[140] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[323] /* pwLine.Y.re PARAM */))))));

  tmp56 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[326] /* pwLine.t1 PARAM */);
  tmp57 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[327] /* pwLine.t2 PARAM */);
  res[24] = ((tmp56 && tmp57)?data->localData[0]->realVars[127] /* pwLine.is.re variable */:data->localData[0]->realVars[129] /* pwLine.vs.re variable */ - data->localData[0]->realVars[141] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[325] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[127] /* pwLine.is.re variable */ + (data->localData[0]->realVars[128] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[322] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[129] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[323] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[324] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[126] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[129] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[322] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[128] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[323] /* pwLine.Y.re PARAM */))))));

  tmp58 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[326] /* pwLine.t1 PARAM */);
  tmp59 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[327] /* pwLine.t2 PARAM */);
  res[25] = ((tmp58 && tmp59)?data->localData[0]->realVars[126] /* pwLine.is.im variable */:data->localData[0]->realVars[128] /* pwLine.vs.im variable */ - data->localData[0]->realVars[140] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[325] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[126] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[129] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[322] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[128] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[323] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[324] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[127] /* pwLine.is.re variable */ + (data->localData[0]->realVars[128] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[322] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[129] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[323] /* pwLine.Y.re PARAM */)))));

  res[26] = data->localData[0]->realVars[107] /* gENROU.PSIppq variable */ - ((data->localData[0]->realVars[7] /* gENROU.Epd STATE(1) */) * (data->simulationInfo->realParameter[247] /* gENROU.K3q PARAM */)) - ((data->localData[0]->realVars[10] /* gENROU.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[249] /* gENROU.K4q PARAM */));

  res[27] = data->localData[0]->realVars[7] /* gENROU.Epd STATE(1) */ + (data->simulationInfo->realParameter[284] /* gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[279] /* gENROU.Xl PARAM */) * (data->localData[0]->realVars[115] /* gENROU.iq variable */) + (-data->localData[0]->realVars[10] /* gENROU.PSIkq STATE(1) */) - ((data->localData[0]->realVars[23] /* der(gENROU.PSIkq) STATE_DER */) * (data->simulationInfo->realParameter[273] /* gENROU.Tppq0 PARAM */));

  res[28] = (data->localData[0]->realVars[9] /* gENROU.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[248] /* gENROU.K4d PARAM */) + (data->localData[0]->realVars[8] /* gENROU.Epq STATE(1) */) * (data->simulationInfo->realParameter[246] /* gENROU.K3d PARAM */) - data->localData[0]->realVars[106] /* gENROU.PSIppd variable */;

  res[29] = data->localData[0]->realVars[8] /* gENROU.Epq STATE(1) */ + (data->simulationInfo->realParameter[279] /* gENROU.Xl PARAM */ - data->simulationInfo->realParameter[280] /* gENROU.Xpd PARAM */) * (data->localData[0]->realVars[114] /* gENROU.id variable */) + (-data->localData[0]->realVars[9] /* gENROU.PSIkd STATE(1) */) - ((data->localData[0]->realVars[22] /* der(gENROU.PSIkd) STATE_DER */) * (data->simulationInfo->realParameter[272] /* gENROU.Tppd0 PARAM */));

  res[30] = (cos(data->localData[0]->realVars[11] /* gENROU.delta STATE(1) */)) * (data->localData[0]->realVars[117] /* gENROU.uq variable */) + (sin(data->localData[0]->realVars[11] /* gENROU.delta STATE(1) */)) * (data->localData[0]->realVars[116] /* gENROU.ud variable */) - data->localData[0]->realVars[129] /* pwLine.vs.re variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS124(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+31] = {0,4,4,4,4,4,4,3,3,3,3,4,4,4,4,2,2,6,6,6,6,5,5,7,7,2,2,4,11,8,8,11};
  const int rowIndex[150] = {11,21,22,23,11,12,13,21,12,13,22,23,11,12,13,21,9,10,12,13,9,10,11,21,14,15,16,7,8,14,4,15,16,4,7,8,17,18,19,20,17,18,19,20,5,6,17,18,5,6,17,18,26,27,28,29,0,26,27,28,29,30,0,26,27,28,29,30,0,24,25,28,29,30,0,24,25,26,27,30,3,23,24,25,30,0,3,22,24,25,5,8,17,18,19,20,21,6,7,11,17,18,19,20,2,3,1,2,1,2,28,29,9,10,11,12,13,16,20,21,22,23,25,4,7,8,12,14,15,16,17,4,7,8,13,14,15,16,18,9,10,11,12,13,15,19,21,22,23,24};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((31+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(150*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 150;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(31*sizeof(int));
  inSysData->sparsePattern->maxColors = 10;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (31+1)*sizeof(int));
  
  for(i=2;i<31+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 150*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[30] = 1;
  inSysData->sparsePattern->colorCols[29] = 2;
  inSysData->sparsePattern->colorCols[27] = 3;
  inSysData->sparsePattern->colorCols[21] = 4;
  inSysData->sparsePattern->colorCols[28] = 4;
  inSysData->sparsePattern->colorCols[20] = 5;
  inSysData->sparsePattern->colorCols[23] = 5;
  inSysData->sparsePattern->colorCols[19] = 6;
  inSysData->sparsePattern->colorCols[22] = 6;
  inSysData->sparsePattern->colorCols[26] = 6;
  inSysData->sparsePattern->colorCols[3] = 7;
  inSysData->sparsePattern->colorCols[13] = 7;
  inSysData->sparsePattern->colorCols[18] = 7;
  inSysData->sparsePattern->colorCols[2] = 8;
  inSysData->sparsePattern->colorCols[5] = 8;
  inSysData->sparsePattern->colorCols[12] = 8;
  inSysData->sparsePattern->colorCols[17] = 8;
  inSysData->sparsePattern->colorCols[1] = 9;
  inSysData->sparsePattern->colorCols[7] = 9;
  inSysData->sparsePattern->colorCols[8] = 9;
  inSysData->sparsePattern->colorCols[11] = 9;
  inSysData->sparsePattern->colorCols[16] = 9;
  inSysData->sparsePattern->colorCols[25] = 9;
  inSysData->sparsePattern->colorCols[0] = 10;
  inSysData->sparsePattern->colorCols[4] = 10;
  inSysData->sparsePattern->colorCols[6] = 10;
  inSysData->sparsePattern->colorCols[9] = 10;
  inSysData->sparsePattern->colorCols[10] = 10;
  inSysData->sparsePattern->colorCols[14] = 10;
  inSysData->sparsePattern->colorCols[15] = 10;
  inSysData->sparsePattern->colorCols[24] = 10;
}
void initializeStaticDataNLS124(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for pwLine.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[124].attribute /* pwLine.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[124].attribute /* pwLine.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[124].attribute /* pwLine.ir.im */.max;
  /* static nls data for pwLine3.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[148].attribute /* pwLine3.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[148].attribute /* pwLine3.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[148].attribute /* pwLine3.is.im */.max;
  /* static nls data for pwLine.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[125].attribute /* pwLine.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[125].attribute /* pwLine.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[125].attribute /* pwLine.ir.re */.max;
  /* static nls data for pwLine1.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[137].attribute /* pwLine1.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[137].attribute /* pwLine1.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[137].attribute /* pwLine1.is.re */.max;
  /* static nls data for constantLoad.p.ir */
  sysData->nominal[i] = data->modelData->realVarsData[54].attribute /* constantLoad.p.ir */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[54].attribute /* constantLoad.p.ir */.min;
  sysData->max[i++]   = data->modelData->realVarsData[54].attribute /* constantLoad.p.ir */.max;
  /* static nls data for constantLoad.p.ii */
  sysData->nominal[i] = data->modelData->realVarsData[53].attribute /* constantLoad.p.ii */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[53].attribute /* constantLoad.p.ii */.min;
  sysData->max[i++]   = data->modelData->realVarsData[53].attribute /* constantLoad.p.ii */.max;
  /* static nls data for pwLine3.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[146].attribute /* pwLine3.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[146].attribute /* pwLine3.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[146].attribute /* pwLine3.ir.im */.max;
  /* static nls data for pwLine4.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[158].attribute /* pwLine4.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[158].attribute /* pwLine4.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[158].attribute /* pwLine4.is.im */.max;
  /* static nls data for pwLine3.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[147].attribute /* pwLine3.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[147].attribute /* pwLine3.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[147].attribute /* pwLine3.ir.re */.max;
  /* static nls data for pwLine4.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[159].attribute /* pwLine4.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[159].attribute /* pwLine4.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[159].attribute /* pwLine4.is.re */.max;
  /* static nls data for pwLine1.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[135].attribute /* pwLine1.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[135].attribute /* pwLine1.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[135].attribute /* pwLine1.ir.re */.max;
  /* static nls data for pwLine1.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[134].attribute /* pwLine1.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[134].attribute /* pwLine1.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[134].attribute /* pwLine1.ir.im */.max;
  /* static nls data for gENCLS.id */
  sysData->nominal[i] = data->modelData->realVarsData[94].attribute /* gENCLS.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[94].attribute /* gENCLS.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[94].attribute /* gENCLS.id */.max;
  /* static nls data for gENCLS.iq */
  sysData->nominal[i] = data->modelData->realVarsData[95].attribute /* gENCLS.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[95].attribute /* gENCLS.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[95].attribute /* gENCLS.iq */.max;
  /* static nls data for gENROU.Epd */
  sysData->nominal[i] = data->modelData->realVarsData[7].attribute /* gENROU.Epd */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[7].attribute /* gENROU.Epd */.min;
  sysData->max[i++]   = data->modelData->realVarsData[7].attribute /* gENROU.Epd */.max;
  /* static nls data for gENROU.Epq */
  sysData->nominal[i] = data->modelData->realVarsData[8].attribute /* gENROU.Epq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[8].attribute /* gENROU.Epq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[8].attribute /* gENROU.Epq */.max;
  /* static nls data for gENROU.PSIppd */
  sysData->nominal[i] = data->modelData->realVarsData[106].attribute /* gENROU.PSIppd */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[106].attribute /* gENROU.PSIppd */.min;
  sysData->max[i++]   = data->modelData->realVarsData[106].attribute /* gENROU.PSIppd */.max;
  /* static nls data for gENROU.PSIppq */
  sysData->nominal[i] = data->modelData->realVarsData[107].attribute /* gENROU.PSIppq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[107].attribute /* gENROU.PSIppq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[107].attribute /* gENROU.PSIppq */.max;
  /* static nls data for gENROU.id */
  sysData->nominal[i] = data->modelData->realVarsData[114].attribute /* gENROU.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[114].attribute /* gENROU.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[114].attribute /* gENROU.id */.max;
  /* static nls data for gENROU.iq */
  sysData->nominal[i] = data->modelData->realVarsData[115].attribute /* gENROU.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[115].attribute /* gENROU.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[115].attribute /* gENROU.iq */.max;
  /* static nls data for pwLine.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[129].attribute /* pwLine.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[129].attribute /* pwLine.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[129].attribute /* pwLine.vs.re */.max;
  /* static nls data for pwLine.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[128].attribute /* pwLine.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[128].attribute /* pwLine.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[128].attribute /* pwLine.vs.im */.max;
  /* static nls data for pwLine1.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[138].attribute /* pwLine1.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[138].attribute /* pwLine1.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[138].attribute /* pwLine1.vr.im */.max;
  /* static nls data for pwLine1.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[139].attribute /* pwLine1.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[139].attribute /* pwLine1.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[139].attribute /* pwLine1.vr.re */.max;
  /* static nls data for eSAC2A.ECOMP */
  sysData->nominal[i] = data->modelData->realVarsData[64].attribute /* eSAC2A.ECOMP */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[64].attribute /* eSAC2A.ECOMP */.min;
  sysData->max[i++]   = data->modelData->realVarsData[64].attribute /* eSAC2A.ECOMP */.max;
  /* static nls data for eSAC2A.rotatingExciterWithDemagnetization.feedback.y */
  sysData->nominal[i] = data->modelData->realVarsData[85].attribute /* eSAC2A.rotatingExciterWithDemagnetization.feedback.y */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[85].attribute /* eSAC2A.rotatingExciterWithDemagnetization.feedback.y */.min;
  sysData->max[i++]   = data->modelData->realVarsData[85].attribute /* eSAC2A.rotatingExciterWithDemagnetization.feedback.y */.max;
  /* static nls data for eSAC2A.XADIFD */
  sysData->nominal[i] = data->modelData->realVarsData[67].attribute /* eSAC2A.XADIFD */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[67].attribute /* eSAC2A.XADIFD */.min;
  sysData->max[i++]   = data->modelData->realVarsData[67].attribute /* eSAC2A.XADIFD */.max;
  /* static nls data for pwLine1.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[140].attribute /* pwLine1.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[140].attribute /* pwLine1.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[140].attribute /* pwLine1.vs.im */.max;
  /* static nls data for pwLine3.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[151].attribute /* pwLine3.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[151].attribute /* pwLine3.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[151].attribute /* pwLine3.vr.re */.max;
  /* static nls data for pwLine3.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[150].attribute /* pwLine3.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[150].attribute /* pwLine3.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[150].attribute /* pwLine3.vr.im */.max;
  /* static nls data for pwLine1.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[141].attribute /* pwLine1.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[141].attribute /* pwLine1.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[141].attribute /* pwLine1.vs.re */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS124(sysData);
}

void getIterationVarsNLS124(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[124] /* pwLine.ir.im variable */;
  array[1] = data->localData[0]->realVars[148] /* pwLine3.is.im variable */;
  array[2] = data->localData[0]->realVars[125] /* pwLine.ir.re variable */;
  array[3] = data->localData[0]->realVars[137] /* pwLine1.is.re variable */;
  array[4] = data->localData[0]->realVars[54] /* constantLoad.p.ir variable */;
  array[5] = data->localData[0]->realVars[53] /* constantLoad.p.ii variable */;
  array[6] = data->localData[0]->realVars[146] /* pwLine3.ir.im variable */;
  array[7] = data->localData[0]->realVars[158] /* pwLine4.is.im variable */;
  array[8] = data->localData[0]->realVars[147] /* pwLine3.ir.re variable */;
  array[9] = data->localData[0]->realVars[159] /* pwLine4.is.re variable */;
  array[10] = data->localData[0]->realVars[135] /* pwLine1.ir.re variable */;
  array[11] = data->localData[0]->realVars[134] /* pwLine1.ir.im variable */;
  array[12] = data->localData[0]->realVars[94] /* gENCLS.id variable */;
  array[13] = data->localData[0]->realVars[95] /* gENCLS.iq variable */;
  array[14] = data->localData[0]->realVars[7] /* gENROU.Epd STATE(1) */;
  array[15] = data->localData[0]->realVars[8] /* gENROU.Epq STATE(1) */;
  array[16] = data->localData[0]->realVars[106] /* gENROU.PSIppd variable */;
  array[17] = data->localData[0]->realVars[107] /* gENROU.PSIppq variable */;
  array[18] = data->localData[0]->realVars[114] /* gENROU.id variable */;
  array[19] = data->localData[0]->realVars[115] /* gENROU.iq variable */;
  array[20] = data->localData[0]->realVars[129] /* pwLine.vs.re variable */;
  array[21] = data->localData[0]->realVars[128] /* pwLine.vs.im variable */;
  array[22] = data->localData[0]->realVars[138] /* pwLine1.vr.im variable */;
  array[23] = data->localData[0]->realVars[139] /* pwLine1.vr.re variable */;
  array[24] = data->localData[0]->realVars[64] /* eSAC2A.ECOMP variable */;
  array[25] = data->localData[0]->realVars[85] /* eSAC2A.rotatingExciterWithDemagnetization.feedback.y variable */;
  array[26] = data->localData[0]->realVars[67] /* eSAC2A.XADIFD variable */;
  array[27] = data->localData[0]->realVars[140] /* pwLine1.vs.im variable */;
  array[28] = data->localData[0]->realVars[151] /* pwLine3.vr.re variable */;
  array[29] = data->localData[0]->realVars[150] /* pwLine3.vr.im variable */;
  array[30] = data->localData[0]->realVars[141] /* pwLine1.vs.re variable */;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize non-linear systems */
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA* nonLinearSystemData)
{
  
  nonLinearSystemData[3].equationIndex = 928;
  nonLinearSystemData[3].size = 1;
  nonLinearSystemData[3].homotopySupport = 0;
  nonLinearSystemData[3].mixedSystem = 1;
  nonLinearSystemData[3].residualFunc = residualFunc928;
  nonLinearSystemData[3].strictTearingFunctionCall = NULL;
  nonLinearSystemData[3].analyticalJacobianColumn = NULL;
  nonLinearSystemData[3].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[3].jacobianIndex = -1;
  nonLinearSystemData[3].initializeStaticNLSData = initializeStaticDataNLS928;
  nonLinearSystemData[3].getIterationVars = getIterationVarsNLS928;
  nonLinearSystemData[3].checkConstraints = NULL;
  
  
  nonLinearSystemData[2].equationIndex = 895;
  nonLinearSystemData[2].size = 22;
  nonLinearSystemData[2].homotopySupport = 0;
  nonLinearSystemData[2].mixedSystem = 1;
  nonLinearSystemData[2].residualFunc = residualFunc895;
  nonLinearSystemData[2].strictTearingFunctionCall = NULL;
  nonLinearSystemData[2].analyticalJacobianColumn = OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_functionJacNLSJac2_column;
  nonLinearSystemData[2].initialAnalyticalJacobian = OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_initialAnalyticJacobianNLSJac2;
  nonLinearSystemData[2].jacobianIndex = 0 /*jacInx*/;
  nonLinearSystemData[2].initializeStaticNLSData = initializeStaticDataNLS895;
  nonLinearSystemData[2].getIterationVars = getIterationVarsNLS895;
  nonLinearSystemData[2].checkConstraints = NULL;
  
  
  nonLinearSystemData[1].equationIndex = 731;
  nonLinearSystemData[1].size = 31;
  nonLinearSystemData[1].homotopySupport = 0;
  nonLinearSystemData[1].mixedSystem = 1;
  nonLinearSystemData[1].residualFunc = residualFunc731;
  nonLinearSystemData[1].strictTearingFunctionCall = NULL;
  nonLinearSystemData[1].analyticalJacobianColumn = NULL;
  nonLinearSystemData[1].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[1].jacobianIndex = -1;
  nonLinearSystemData[1].initializeStaticNLSData = initializeStaticDataNLS731;
  nonLinearSystemData[1].getIterationVars = getIterationVarsNLS731;
  nonLinearSystemData[1].checkConstraints = NULL;
  
  
  nonLinearSystemData[0].equationIndex = 124;
  nonLinearSystemData[0].size = 31;
  nonLinearSystemData[0].homotopySupport = 1;
  nonLinearSystemData[0].mixedSystem = 1;
  nonLinearSystemData[0].residualFunc = residualFunc124;
  nonLinearSystemData[0].strictTearingFunctionCall = NULL;
  nonLinearSystemData[0].analyticalJacobianColumn = NULL;
  nonLinearSystemData[0].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[0].jacobianIndex = -1;
  nonLinearSystemData[0].initializeStaticNLSData = initializeStaticDataNLS124;
  nonLinearSystemData[0].getIterationVars = getIterationVarsNLS124;
  nonLinearSystemData[0].checkConstraints = NULL;
}

#if defined(__cplusplus)
}
#endif

