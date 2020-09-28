/* Linearization */
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC2A_model.h"
#if defined(__cplusplus)
extern "C" {
#endif
const char *OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_linear_model_frame()
{
  return "model linearized_model \"OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A\" \n  parameter Integer n = 13 \"number of states\";\n  parameter Integer m = 0 \"number of inputs\";\n  parameter Integer p = 0 \"number of outputs\";\n"
  "  parameter Real x0[n] = %s;\n"
  "  parameter Real u0[m] = %s;\n"
  "\n"
  "  parameter Real A[n, n] =\n\t[%s];\n\n"
  "  parameter Real B[n, m] = zeros(n, m);%s\n\n"
  "  parameter Real C[p, n] = zeros(p, n);%s\n\n"
  "  parameter Real D[p, m] = zeros(p, m);%s\n\n"
  "\n"
  "  Real x[n](start=x0);\n"
  "  input Real u[m];\n"
  "  output Real y[p];\n"
  "\n"
  "  Real 'x_eSAC2A.derivative.x' = x[1];\n""  Real 'x_eSAC2A.imLeadLag.TF.x_scaled[1]' = x[2];\n""  Real 'x_eSAC2A.imSimpleLag.state' = x[3];\n""  Real 'x_eSAC2A.rotatingExciterWithDemagnetization.sISO.w' = x[4];\n""  Real 'x_eSAC2A.simpleLagLim.state' = x[5];\n""  Real 'x_gENCLS.delta' = x[6];\n""  Real 'x_gENCLS.eq' = x[7];\n""  Real 'x_gENROU.Epd' = x[8];\n""  Real 'x_gENROU.Epq' = x[9];\n""  Real 'x_gENROU.PSIkd' = x[10];\n""  Real 'x_gENROU.PSIkq' = x[11];\n""  Real 'x_gENROU.delta' = x[12];\n""  Real 'x_gENROU.w' = x[13];\n"
  "equation\n  der(x) = A * x + B * u;\n  y = C * x + D * u;\nend linearized_model;\n";
}
const char *OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_linear_model_datarecovery_frame()
{
  return "model linearized_model \"OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A\" \n parameter Integer n = 13 \"number of states\";\n  parameter Integer m = 0 \"number of inputs\";\n  parameter Integer p = 0 \"number of outputs\";\n  parameter Integer nz = 134 \"data recovery variables\";\n"
  "  parameter Real x0[13] = %s;\n"
  "  parameter Real u0[0] = %s;\n"
  "  parameter Real z0[134] = %s;\n"
  "\n"
  "  parameter Real A[n, n] =\n\t[%s];\n\n"
  "  parameter Real B[n, m] = zeros(n, m);%s\n\n"
  "  parameter Real C[p, n] = zeros(p, n);%s\n\n"
  "  parameter Real D[p, m] = zeros(p, m);%s\n\n"
  "  parameter Real Cz[nz, n] =\n\t[%s];\n\n"
  "  parameter Real Dz[nz, m] = zeros(nz, m);%s\n\n"
  "\n"
  "  Real x[n](start=x0);\n"
  "  input Real u[m];\n"
  "  output Real y[p];\n"
  "  output Real z[nz];\n"
  "\n"
  "  Real 'x_eSAC2A.derivative.x' = x[1];\n""  Real 'x_eSAC2A.imLeadLag.TF.x_scaled[1]' = x[2];\n""  Real 'x_eSAC2A.imSimpleLag.state' = x[3];\n""  Real 'x_eSAC2A.rotatingExciterWithDemagnetization.sISO.w' = x[4];\n""  Real 'x_eSAC2A.simpleLagLim.state' = x[5];\n""  Real 'x_gENCLS.delta' = x[6];\n""  Real 'x_gENCLS.eq' = x[7];\n""  Real 'x_gENROU.Epd' = x[8];\n""  Real 'x_gENROU.Epq' = x[9];\n""  Real 'x_gENROU.PSIkd' = x[10];\n""  Real 'x_gENROU.PSIkq' = x[11];\n""  Real 'x_gENROU.delta' = x[12];\n""  Real 'x_gENROU.w' = x[13];\n"
  "  Real 'z_$cse1' = z[1];\n""  Real 'z_$cse2' = z[2];\n""  Real 'z_$cse4' = z[3];\n""  Real 'z_$cse5' = z[4];\n""  Real 'z_$cse6' = z[5];\n""  Real 'z_$cse7' = z[6];\n""  Real 'z_FAULT.V' = z[7];\n""  Real 'z_FAULT.angle' = z[8];\n""  Real 'z_FAULT.p.ii' = z[9];\n""  Real 'z_FAULT.p.ir' = z[10];\n""  Real 'z_GEN1.V' = z[11];\n""  Real 'z_GEN1.angle' = z[12];\n""  Real 'z_GEN1.p.ii' = z[13];\n""  Real 'z_GEN1.p.ir' = z[14];\n""  Real 'z_GEN2.V' = z[15];\n""  Real 'z_GEN2.angle' = z[16];\n""  Real 'z_GEN2.p.ii' = z[17];\n""  Real 'z_GEN2.p.ir' = z[18];\n""  Real 'z_LOAD.V' = z[19];\n""  Real 'z_LOAD.angle' = z[20];\n""  Real 'z_LOAD.p.ii' = z[21];\n""  Real 'z_LOAD.p.ir' = z[22];\n""  Real 'z_constantLoad.P' = z[23];\n""  Real 'z_constantLoad.Q' = z[24];\n""  Real 'z_constantLoad.angle' = z[25];\n""  Real 'z_constantLoad.kI' = z[26];\n""  Real 'z_constantLoad.kP' = z[27];\n""  Real 'z_constantLoad.p.ii' = z[28];\n""  Real 'z_constantLoad.p.ir' = z[29];\n""  Real 'z_constantLoad.v' = z[30];\n""  Real 'z_eSAC2A.DiffV.u2' = z[31];\n""  Real 'z_eSAC2A.DiffV.y' = z[32];\n""  Real 'z_eSAC2A.DiffV1.y' = z[33];\n""  Real 'z_eSAC2A.DiffV2.u2' = z[34];\n""  Real 'z_eSAC2A.DiffV2.y' = z[35];\n""  Real 'z_eSAC2A.DiffV3.u1' = z[36];\n""  Real 'z_eSAC2A.DiffV3.u2' = z[37];\n""  Real 'z_eSAC2A.DiffV3.y' = z[38];\n""  Real 'z_eSAC2A.ECOMP' = z[39];\n""  Real 'z_eSAC2A.EFD' = z[40];\n""  Real 'z_eSAC2A.EFD0' = z[41];\n""  Real 'z_eSAC2A.XADIFD' = z[42];\n""  Real 'z_eSAC2A.add3_1.y' = z[43];\n""  Real 'z_eSAC2A.derivative.u' = z[44];\n""  Real 'z_eSAC2A.derivative.y' = z[45];\n""  Real 'z_eSAC2A.gain1.y' = z[46];\n""  Real 'z_eSAC2A.hV_GATE.p' = z[47];\n""  Real 'z_eSAC2A.imLeadLag.TF.x[1]' = z[48];\n""  Real 'z_eSAC2A.imLeadLag.TF.y' = z[49];\n""  Real 'z_eSAC2A.imLeadLag.y' = z[50];\n""  Real 'z_eSAC2A.lV_GATE.p' = z[51];\n""  Real 'z_eSAC2A.limiter1.y' = z[52];\n""  Real 'z_eSAC2A.rectifierCommutationVoltageDrop.V_EX' = z[53];\n""  Real 'z_eSAC2A.rectifierCommutationVoltageDrop.division.u1' = z[54];\n""  Real 'z_eSAC2A.rectifierCommutationVoltageDrop.division.y' = z[55];\n""  Real 'z_eSAC2A.rectifierCommutationVoltageDrop.fEX.y' = z[56];\n""  Real 'z_eSAC2A.rotatingExciterWithDemagnetization.Sum.u1' = z[57];\n""  Real 'z_eSAC2A.rotatingExciterWithDemagnetization.Sum.u2' = z[58];\n""  Real 'z_eSAC2A.rotatingExciterWithDemagnetization.VE.u2' = z[59];\n""  Real 'z_eSAC2A.rotatingExciterWithDemagnetization.feedback.y' = z[60];\n""  Real 'z_eSAC2A.rotatingExciterWithDemagnetization.sISO.initVar' = z[61];\n""  Real 'z_eSAC2A.rotatingExciterWithDemagnetization.sISO.outMax' = z[62];\n""  Real 'z_eSAC2A.rotatingExciterWithDemagnetization.sISO.outMin' = z[63];\n""  Real 'z_eSAC2A.rotatingExciterWithDemagnetization.sISO.x' = z[64];\n""  Real 'z_gENCLS.P' = z[65];\n""  Real 'z_gENCLS.Q' = z[66];\n""  Real 'z_gENCLS.V' = z[67];\n""  Real 'z_gENCLS.anglev' = z[68];\n""  Real 'z_gENCLS.id' = z[69];\n""  Real 'z_gENCLS.iq' = z[70];\n""  Real 'z_gENCLS.omega' = z[71];\n""  Real 'z_gENCLS.p.ii' = z[72];\n""  Real 'z_gENCLS.p.ir' = z[73];\n""  Real 'z_gENCLS.vd' = z[74];\n""  Real 'z_gENCLS.vq' = z[75];\n""  Real 'z_gENROU.I' = z[76];\n""  Real 'z_gENROU.P' = z[77];\n""  Real 'z_gENROU.PELEC' = z[78];\n""  Real 'z_gENROU.PSId' = z[79];\n""  Real 'z_gENROU.PSIpp' = z[80];\n""  Real 'z_gENROU.PSIppd' = z[81];\n""  Real 'z_gENROU.PSIppq' = z[82];\n""  Real 'z_gENROU.PSIq' = z[83];\n""  Real 'z_gENROU.Q' = z[84];\n""  Real 'z_gENROU.Te' = z[85];\n""  Real 'z_gENROU.XaqIlq' = z[86];\n""  Real 'z_gENROU.anglei' = z[87];\n""  Real 'z_gENROU.anglev' = z[88];\n""  Real 'z_gENROU.id' = z[89];\n""  Real 'z_gENROU.iq' = z[90];\n""  Real 'z_gENROU.ud' = z[91];\n""  Real 'z_gENROU.uq' = z[92];\n""  Real 'z_pwFault.p.ii' = z[93];\n""  Real 'z_pwFault.p.ir' = z[94];\n""  Real 'z_pwLine.P12' = z[95];\n""  Real 'z_pwLine.P21' = z[96];\n""  Real 'z_pwLine.Q12' = z[97];\n""  Real 'z_pwLine.Q21' = z[98];\n""  Real 'z_pwLine.ir.im' = z[99];\n""  Real 'z_pwLine.ir.re' = z[100];\n""  Real 'z_pwLine.is.im' = z[101];\n""  Real 'z_pwLine.is.re' = z[102];\n""  Real 'z_pwLine.vs.im' = z[103];\n""  Real 'z_pwLine.vs.re' = z[104];\n""  Real 'z_pwLine1.P12' = z[105];\n""  Real 'z_pwLine1.P21' = z[106];\n""  Real 'z_pwLine1.Q12' = z[107];\n""  Real 'z_pwLine1.Q21' = z[108];\n""  Real 'z_pwLine1.ir.im' = z[109];\n""  Real 'z_pwLine1.ir.re' = z[110];\n""  Real 'z_pwLine1.is.im' = z[111];\n""  Real 'z_pwLine1.is.re' = z[112];\n""  Real 'z_pwLine1.vr.im' = z[113];\n""  Real 'z_pwLine1.vr.re' = z[114];\n""  Real 'z_pwLine1.vs.im' = z[115];\n""  Real 'z_pwLine1.vs.re' = z[116];\n""  Real 'z_pwLine3.P12' = z[117];\n""  Real 'z_pwLine3.P21' = z[118];\n""  Real 'z_pwLine3.Q12' = z[119];\n""  Real 'z_pwLine3.Q21' = z[120];\n""  Real 'z_pwLine3.ir.im' = z[121];\n""  Real 'z_pwLine3.ir.re' = z[122];\n""  Real 'z_pwLine3.is.im' = z[123];\n""  Real 'z_pwLine3.is.re' = z[124];\n""  Real 'z_pwLine3.vr.im' = z[125];\n""  Real 'z_pwLine3.vr.re' = z[126];\n""  Real 'z_pwLine4.P12' = z[127];\n""  Real 'z_pwLine4.P21' = z[128];\n""  Real 'z_pwLine4.Q12' = z[129];\n""  Real 'z_pwLine4.Q21' = z[130];\n""  Real 'z_pwLine4.ir.im' = z[131];\n""  Real 'z_pwLine4.ir.re' = z[132];\n""  Real 'z_pwLine4.is.im' = z[133];\n""  Real 'z_pwLine4.is.re' = z[134];\n"
  "equation\n  der(x) = A * x + B * u;\n  y = C * x + D * u;\n  z = Cz * x + Dz * u;\nend linearized_model;\n";
}
#if defined(__cplusplus)
}
#endif

