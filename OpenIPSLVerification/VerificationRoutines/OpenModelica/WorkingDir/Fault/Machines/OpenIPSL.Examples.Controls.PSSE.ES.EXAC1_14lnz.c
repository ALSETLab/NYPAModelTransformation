/* Linearization */
#include "OpenIPSL.Examples.Controls.PSSE.ES.EXAC1_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

const char *OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_linear_model_frame()
{
  return "model linear_OpenIPSL_Examples_Controls_PSSE_ES_EXAC1\n  parameter Integer n = 13 \"number of states\";\n  parameter Integer p = 0 \"number of inputs\";\n  parameter Integer q = 0 \"number of outputs\";\n"
  "\n"
  "  parameter Real x0[n] = %s;\n"
  "  parameter Real u0[p] = %s;\n"
  "\n"
  "  parameter Real A[n, n] = [%s];\n"
  "  parameter Real B[n, p] = zeros(n, p);%s\n"
  "  parameter Real C[q, n] = zeros(q, n);%s\n"
  "  parameter Real D[q, p] = zeros(q, p);%s\n"
  "\n"
  "  Real x[n](start=x0);\n"
  "  input Real u[p];\n"
  "  output Real y[q];\n"
  "\n"
  "  Real 'x_eXAC1_1.TransducerDelay.state' = x[1];\n""  Real 'x_eXAC1_1.imDerivativeLag.x' = x[2];\n""  Real 'x_eXAC1_1.imLimitedSimpleLag.state' = x[3];\n""  Real 'x_eXAC1_1.leadLag.TF.x_scaled[1]' = x[4];\n""  Real 'x_eXAC1_1.rotatingExciterWithDemagnetizationLimited.sISO.y' = x[5];\n""  Real 'x_gENCLS.delta' = x[6];\n""  Real 'x_gENCLS.eq' = x[7];\n""  Real 'x_gENROE.Epd' = x[8];\n""  Real 'x_gENROE.Epq' = x[9];\n""  Real 'x_gENROE.PSIkd' = x[10];\n""  Real 'x_gENROE.PSIkq' = x[11];\n""  Real 'x_gENROE.delta' = x[12];\n""  Real 'x_gENROE.w' = x[13];\n"
  "equation\n  der(x) = A * x + B * u;\n  y = C * x + D * u;\nend linear_OpenIPSL_Examples_Controls_PSSE_ES_EXAC1;\n";
}
const char *OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_linear_model_datarecovery_frame()
{
  return "model linear_OpenIPSL_Examples_Controls_PSSE_ES_EXAC1\n  parameter Integer n = 13 \"number of states\";\n  parameter Integer p = 0 \"number of inputs\";\n  parameter Integer q = 0 \"number of outputs\";\n  parameter Integer nz = 121 \"data recovery variables\";\n"
  "\n"
  "  parameter Real x0[13] = %s;\n"
  "  parameter Real u0[0] = %s;\n"
  "  parameter Real z0[121] = %s;\n"
  "\n"
  "  parameter Real A[n, n] = [%s];\n"
  "  parameter Real B[n, p] = zeros(n, p);%s\n"
  "  parameter Real C[q, n] = zeros(q, n);%s\n"
  "  parameter Real D[q, p] = zeros(q, p);%s\n"
  "  parameter Real Cz[nz, n] = [%s];\n"
  "  parameter Real Dz[nz, p] = zeros(nz, p);%s\n"
  "\n"
  "  Real x[n](start=x0);\n"
  "  input Real u[p];\n"
  "  output Real y[q];\n"
  "  output Real z[nz];\n"
  "\n"
  "  Real 'x_eXAC1_1.TransducerDelay.state' = x[1];\n""  Real 'x_eXAC1_1.imDerivativeLag.x' = x[2];\n""  Real 'x_eXAC1_1.imLimitedSimpleLag.state' = x[3];\n""  Real 'x_eXAC1_1.leadLag.TF.x_scaled[1]' = x[4];\n""  Real 'x_eXAC1_1.rotatingExciterWithDemagnetizationLimited.sISO.y' = x[5];\n""  Real 'x_gENCLS.delta' = x[6];\n""  Real 'x_gENCLS.eq' = x[7];\n""  Real 'x_gENROE.Epd' = x[8];\n""  Real 'x_gENROE.Epq' = x[9];\n""  Real 'x_gENROE.PSIkd' = x[10];\n""  Real 'x_gENROE.PSIkq' = x[11];\n""  Real 'x_gENROE.delta' = x[12];\n""  Real 'x_gENROE.w' = x[13];\n"
  "  Real 'z_$cse1' = z[1];\n""  Real 'z_$cse2' = z[2];\n""  Real 'z_$cse4' = z[3];\n""  Real 'z_$cse5' = z[4];\n""  Real 'z_$cse6' = z[5];\n""  Real 'z_$cse7' = z[6];\n""  Real 'z_FAULT.V' = z[7];\n""  Real 'z_FAULT.angle' = z[8];\n""  Real 'z_FAULT.p.ii' = z[9];\n""  Real 'z_FAULT.p.ir' = z[10];\n""  Real 'z_GEN1.V' = z[11];\n""  Real 'z_GEN1.angle' = z[12];\n""  Real 'z_GEN1.p.ii' = z[13];\n""  Real 'z_GEN1.p.ir' = z[14];\n""  Real 'z_GEN2.V' = z[15];\n""  Real 'z_GEN2.angle' = z[16];\n""  Real 'z_GEN2.p.ii' = z[17];\n""  Real 'z_GEN2.p.ir' = z[18];\n""  Real 'z_LOAD.V' = z[19];\n""  Real 'z_LOAD.angle' = z[20];\n""  Real 'z_LOAD.p.ii' = z[21];\n""  Real 'z_LOAD.p.ir' = z[22];\n""  Real 'z_constantLoad.P' = z[23];\n""  Real 'z_constantLoad.Q' = z[24];\n""  Real 'z_constantLoad.angle' = z[25];\n""  Real 'z_constantLoad.kI' = z[26];\n""  Real 'z_constantLoad.kP' = z[27];\n""  Real 'z_constantLoad.p.ii' = z[28];\n""  Real 'z_constantLoad.p.ir' = z[29];\n""  Real 'z_constantLoad.v' = z[30];\n""  Real 'z_eXAC1_1.DiffV.u2' = z[31];\n""  Real 'z_eXAC1_1.DiffV.y' = z[32];\n""  Real 'z_eXAC1_1.ECOMP' = z[33];\n""  Real 'z_eXAC1_1.EFD' = z[34];\n""  Real 'z_eXAC1_1.EFD0' = z[35];\n""  Real 'z_eXAC1_1.XADIFD' = z[36];\n""  Real 'z_eXAC1_1.add3_1.u1' = z[37];\n""  Real 'z_eXAC1_1.add3_1.y' = z[38];\n""  Real 'z_eXAC1_1.imDerivativeLag.u' = z[39];\n""  Real 'z_eXAC1_1.imDerivativeLag.y' = z[40];\n""  Real 'z_eXAC1_1.imLimitedSimpleLag.u' = z[41];\n""  Real 'z_eXAC1_1.imLimitedSimpleLag.y' = z[42];\n""  Real 'z_eXAC1_1.leadLag.TF.x[1]' = z[43];\n""  Real 'z_eXAC1_1.leadLag.TF.y' = z[44];\n""  Real 'z_eXAC1_1.rectifierCommutationVoltageDrop.division.u1' = z[45];\n""  Real 'z_eXAC1_1.rectifierCommutationVoltageDrop.division.y' = z[46];\n""  Real 'z_eXAC1_1.rectifierCommutationVoltageDrop.fEX.y' = z[47];\n""  Real 'z_eXAC1_1.rotatingExciterWithDemagnetizationLimited.Sum.u1' = z[48];\n""  Real 'z_eXAC1_1.rotatingExciterWithDemagnetizationLimited.Sum.u2' = z[49];\n""  Real 'z_eXAC1_1.rotatingExciterWithDemagnetizationLimited.VE.u2' = z[50];\n""  Real 'z_eXAC1_1.rotatingExciterWithDemagnetizationLimited.feedback.y' = z[51];\n""  Real 'z_gENCLS.P' = z[52];\n""  Real 'z_gENCLS.Q' = z[53];\n""  Real 'z_gENCLS.V' = z[54];\n""  Real 'z_gENCLS.anglev' = z[55];\n""  Real 'z_gENCLS.id' = z[56];\n""  Real 'z_gENCLS.iq' = z[57];\n""  Real 'z_gENCLS.omega' = z[58];\n""  Real 'z_gENCLS.p.ii' = z[59];\n""  Real 'z_gENCLS.p.ir' = z[60];\n""  Real 'z_gENCLS.vd' = z[61];\n""  Real 'z_gENCLS.vq' = z[62];\n""  Real 'z_gENROE.I' = z[63];\n""  Real 'z_gENROE.P' = z[64];\n""  Real 'z_gENROE.PELEC' = z[65];\n""  Real 'z_gENROE.PSId' = z[66];\n""  Real 'z_gENROE.PSIpp' = z[67];\n""  Real 'z_gENROE.PSIppd' = z[68];\n""  Real 'z_gENROE.PSIppq' = z[69];\n""  Real 'z_gENROE.PSIq' = z[70];\n""  Real 'z_gENROE.Q' = z[71];\n""  Real 'z_gENROE.Te' = z[72];\n""  Real 'z_gENROE.XaqIlq' = z[73];\n""  Real 'z_gENROE.anglei' = z[74];\n""  Real 'z_gENROE.anglev' = z[75];\n""  Real 'z_gENROE.id' = z[76];\n""  Real 'z_gENROE.iq' = z[77];\n""  Real 'z_gENROE.ud' = z[78];\n""  Real 'z_gENROE.uq' = z[79];\n""  Real 'z_pwFault.p.ii' = z[80];\n""  Real 'z_pwFault.p.ir' = z[81];\n""  Real 'z_pwLine.P12' = z[82];\n""  Real 'z_pwLine.P21' = z[83];\n""  Real 'z_pwLine.Q12' = z[84];\n""  Real 'z_pwLine.Q21' = z[85];\n""  Real 'z_pwLine.ir.im' = z[86];\n""  Real 'z_pwLine.ir.re' = z[87];\n""  Real 'z_pwLine.is.im' = z[88];\n""  Real 'z_pwLine.is.re' = z[89];\n""  Real 'z_pwLine.vs.im' = z[90];\n""  Real 'z_pwLine.vs.re' = z[91];\n""  Real 'z_pwLine1.P12' = z[92];\n""  Real 'z_pwLine1.P21' = z[93];\n""  Real 'z_pwLine1.Q12' = z[94];\n""  Real 'z_pwLine1.Q21' = z[95];\n""  Real 'z_pwLine1.ir.im' = z[96];\n""  Real 'z_pwLine1.ir.re' = z[97];\n""  Real 'z_pwLine1.is.im' = z[98];\n""  Real 'z_pwLine1.is.re' = z[99];\n""  Real 'z_pwLine1.vr.im' = z[100];\n""  Real 'z_pwLine1.vr.re' = z[101];\n""  Real 'z_pwLine1.vs.im' = z[102];\n""  Real 'z_pwLine1.vs.re' = z[103];\n""  Real 'z_pwLine3.P12' = z[104];\n""  Real 'z_pwLine3.P21' = z[105];\n""  Real 'z_pwLine3.Q12' = z[106];\n""  Real 'z_pwLine3.Q21' = z[107];\n""  Real 'z_pwLine3.ir.im' = z[108];\n""  Real 'z_pwLine3.ir.re' = z[109];\n""  Real 'z_pwLine3.is.im' = z[110];\n""  Real 'z_pwLine3.is.re' = z[111];\n""  Real 'z_pwLine3.vr.im' = z[112];\n""  Real 'z_pwLine3.vr.re' = z[113];\n""  Real 'z_pwLine4.P12' = z[114];\n""  Real 'z_pwLine4.P21' = z[115];\n""  Real 'z_pwLine4.Q12' = z[116];\n""  Real 'z_pwLine4.Q21' = z[117];\n""  Real 'z_pwLine4.ir.im' = z[118];\n""  Real 'z_pwLine4.ir.re' = z[119];\n""  Real 'z_pwLine4.is.im' = z[120];\n""  Real 'z_pwLine4.is.re' = z[121];\n"
  "equation\n  der(x) = A * x + B * u;\n  y = C * x + D * u;\n  z = Cz * x + Dz * u;\nend linear_OpenIPSL_Examples_Controls_PSSE_ES_EXAC1;\n";
}
#if defined(__cplusplus)
}
#endif

