/* Linearization */
#include "OpenIPSL.Examples.Wind.PSSE.WT4G.WT4G1_model.h"
#if defined(__cplusplus)
extern "C" {
#endif
const char *OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_linear_model_frame()
{
  return "model linearized_model \"OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1\" \n  parameter Integer n = 5 \"number of states\";\n  parameter Integer m = 0 \"number of inputs\";\n  parameter Integer p = 0 \"number of outputs\";\n"
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
  "  Real 'x_gENCLS2_1.delta' = x[1];\n""  Real 'x_gENCLS2_1.eq' = x[2];\n""  Real 'x_wT4G1.K.y' = x[3];\n""  Real 'x_wT4G1.K1.state' = x[4];\n""  Real 'x_wT4G1.K2.state' = x[5];\n"
  "equation\n  der(x) = A * x + B * u;\n  y = C * x + D * u;\nend linearized_model;\n";
}
const char *OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_linear_model_datarecovery_frame()
{
  return "model linearized_model \"OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1\" \n parameter Integer n = 5 \"number of states\";\n  parameter Integer m = 0 \"number of inputs\";\n  parameter Integer p = 0 \"number of outputs\";\n  parameter Integer nz = 74 \"data recovery variables\";\n"
  "  parameter Real x0[5] = %s;\n"
  "  parameter Real u0[0] = %s;\n"
  "  parameter Real z0[74] = %s;\n"
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
  "  Real 'x_gENCLS2_1.delta' = x[1];\n""  Real 'x_gENCLS2_1.eq' = x[2];\n""  Real 'x_wT4G1.K.y' = x[3];\n""  Real 'x_wT4G1.K1.state' = x[4];\n""  Real 'x_wT4G1.K2.state' = x[5];\n"
  "  Real 'z_$cse5' = z[1];\n""  Real 'z_$cse6' = z[2];\n""  Real 'z_$cse7' = z[3];\n""  Real 'z_$cse8' = z[4];\n""  Real 'z_$cse9' = z[5];\n""  Real 'z_FAULT.V' = z[6];\n""  Real 'z_FAULT.angle' = z[7];\n""  Real 'z_FAULT.p.ii' = z[8];\n""  Real 'z_FAULT.p.ir' = z[9];\n""  Real 'z_GEN1.V' = z[10];\n""  Real 'z_GEN1.angle' = z[11];\n""  Real 'z_GEN1.p.ii' = z[12];\n""  Real 'z_GEN1.p.ir' = z[13];\n""  Real 'z_GEN2.V' = z[14];\n""  Real 'z_GEN2.angle' = z[15];\n""  Real 'z_GEN2.p.ii' = z[16];\n""  Real 'z_GEN2.p.ir' = z[17];\n""  Real 'z_gENCLS2_1.P' = z[18];\n""  Real 'z_gENCLS2_1.Q' = z[19];\n""  Real 'z_gENCLS2_1.V' = z[20];\n""  Real 'z_gENCLS2_1.anglev' = z[21];\n""  Real 'z_gENCLS2_1.id' = z[22];\n""  Real 'z_gENCLS2_1.iq' = z[23];\n""  Real 'z_gENCLS2_1.omega' = z[24];\n""  Real 'z_gENCLS2_1.p.ii' = z[25];\n""  Real 'z_gENCLS2_1.p.ir' = z[26];\n""  Real 'z_gENCLS2_1.vd' = z[27];\n""  Real 'z_gENCLS2_1.vq' = z[28];\n""  Real 'z_pwFault.p.ii' = z[29];\n""  Real 'z_pwFault.p.ir' = z[30];\n""  Real 'z_pwLine.P12' = z[31];\n""  Real 'z_pwLine.P21' = z[32];\n""  Real 'z_pwLine.Q12' = z[33];\n""  Real 'z_pwLine.Q21' = z[34];\n""  Real 'z_pwLine.ir.im' = z[35];\n""  Real 'z_pwLine.ir.re' = z[36];\n""  Real 'z_pwLine.is.im' = z[37];\n""  Real 'z_pwLine.is.re' = z[38];\n""  Real 'z_pwLine.vr.im' = z[39];\n""  Real 'z_pwLine.vr.re' = z[40];\n""  Real 'z_pwLine1.P12' = z[41];\n""  Real 'z_pwLine1.P21' = z[42];\n""  Real 'z_pwLine1.Q12' = z[43];\n""  Real 'z_pwLine1.Q21' = z[44];\n""  Real 'z_pwLine1.ir.im' = z[45];\n""  Real 'z_pwLine1.ir.re' = z[46];\n""  Real 'z_pwLine1.is.im' = z[47];\n""  Real 'z_pwLine1.is.re' = z[48];\n""  Real 'z_pwLine1.vs.im' = z[49];\n""  Real 'z_pwLine1.vs.re' = z[50];\n""  Real 'z_pwLine2.P12' = z[51];\n""  Real 'z_pwLine2.P21' = z[52];\n""  Real 'z_pwLine2.Q12' = z[53];\n""  Real 'z_pwLine2.Q21' = z[54];\n""  Real 'z_pwLine2.ir.im' = z[55];\n""  Real 'z_pwLine2.ir.re' = z[56];\n""  Real 'z_pwLine2.is.im' = z[57];\n""  Real 'z_pwLine2.is.re' = z[58];\n""  Real 'z_pwLine2.vs.im' = z[59];\n""  Real 'z_pwLine2.vs.re' = z[60];\n""  Real 'z_wT4G1.Iperr.u2' = z[61];\n""  Real 'z_wT4G1.Iperr.y' = z[62];\n""  Real 'z_wT4G1.Is.im' = z[63];\n""  Real 'z_wT4G1.Is.re' = z[64];\n""  Real 'z_wT4G1.IxL' = z[65];\n""  Real 'z_wT4G1.Iy' = z[66];\n""  Real 'z_wT4G1.IyL' = z[67];\n""  Real 'z_wT4G1.K.u' = z[68];\n""  Real 'z_wT4G1.K2.y' = z[69];\n""  Real 'z_wT4G1.P' = z[70];\n""  Real 'z_wT4G1.Q' = z[71];\n""  Real 'z_wT4G1.V' = z[72];\n""  Real 'z_wT4G1.delta' = z[73];\n""  Real 'z_wT4G1.lVPL.LVPL' = z[74];\n"
  "equation\n  der(x) = A * x + B * u;\n  y = C * x + D * u;\n  z = Cz * x + Dz * u;\nend linearized_model;\n";
}
#if defined(__cplusplus)
}
#endif

