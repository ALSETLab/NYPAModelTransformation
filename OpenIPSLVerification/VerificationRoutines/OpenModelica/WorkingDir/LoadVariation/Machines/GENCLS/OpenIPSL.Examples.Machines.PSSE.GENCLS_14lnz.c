/* Linearization */
#include "OpenIPSL.Examples.Machines.PSSE.GENCLS_model.h"
#if defined(__cplusplus)
extern "C" {
#endif
const char *OpenIPSL_Examples_Machines_PSSE_GENCLS_linear_model_frame()
{
  return "model linear_OpenIPSL_Examples_Machines_PSSE_GENCLS\n  parameter Integer n = 5 \"number of states\";\n  parameter Integer m = 0 \"number of inputs\";\n  parameter Integer p = 0 \"number of outputs\";\n"
  "\n"
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
  "  Real 'x_gENCLS.delta' = x[1];\n""  Real 'x_gENCLS.eq' = x[2];\n""  Real 'x_gENCLS2.delta' = x[3];\n""  Real 'x_gENCLS2.eq' = x[4];\n""  Real 'x_gENCLS2.omega' = x[5];\n"
  "equation\n  der(x) = A * x + B * u;\n  y = C * x + D * u;\nend linear_OpenIPSL_Examples_Machines_PSSE_GENCLS;\n";
}
const char *OpenIPSL_Examples_Machines_PSSE_GENCLS_linear_model_datarecovery_frame()
{
  return "model linear_OpenIPSL_Examples_Machines_PSSE_GENCLS\n  parameter Integer n = 5 \"number of states\";\n  parameter Integer m = 0 \"number of inputs\";\n  parameter Integer p = 0 \"number of outputs\";\n  parameter Integer nz = 90 \"data recovery variables\";\n"
  "\n"
  "  parameter Real x0[5] = %s;\n"
  "  parameter Real u0[0] = %s;\n"
  "  parameter Real z0[90] = %s;\n"
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
  "  Real 'x_gENCLS.delta' = x[1];\n""  Real 'x_gENCLS.eq' = x[2];\n""  Real 'x_gENCLS2.delta' = x[3];\n""  Real 'x_gENCLS2.eq' = x[4];\n""  Real 'x_gENCLS2.omega' = x[5];\n"
  "  Real 'z_$cse10' = z[1];\n""  Real 'z_$cse5' = z[2];\n""  Real 'z_$cse6' = z[3];\n""  Real 'z_$cse8' = z[4];\n""  Real 'z_$cse9' = z[5];\n""  Real 'z_FAULT.V' = z[6];\n""  Real 'z_FAULT.angle' = z[7];\n""  Real 'z_FAULT.p.ii' = z[8];\n""  Real 'z_FAULT.p.ir' = z[9];\n""  Real 'z_GEN1.V' = z[10];\n""  Real 'z_GEN1.angle' = z[11];\n""  Real 'z_GEN1.p.ii' = z[12];\n""  Real 'z_GEN1.p.ir' = z[13];\n""  Real 'z_GEN2.V' = z[14];\n""  Real 'z_GEN2.angle' = z[15];\n""  Real 'z_GEN2.p.ii' = z[16];\n""  Real 'z_GEN2.p.ir' = z[17];\n""  Real 'z_LOAD.V' = z[18];\n""  Real 'z_LOAD.angle' = z[19];\n""  Real 'z_LOAD.p.ii' = z[20];\n""  Real 'z_LOAD.p.ir' = z[21];\n""  Real 'z_constantLoad.P' = z[22];\n""  Real 'z_constantLoad.Q' = z[23];\n""  Real 'z_constantLoad.angle' = z[24];\n""  Real 'z_constantLoad.kI' = z[25];\n""  Real 'z_constantLoad.kP' = z[26];\n""  Real 'z_constantLoad.p.ii' = z[27];\n""  Real 'z_constantLoad.p.ir' = z[28];\n""  Real 'z_constantLoad.v' = z[29];\n""  Real 'z_gENCLS.P' = z[30];\n""  Real 'z_gENCLS.Q' = z[31];\n""  Real 'z_gENCLS.V' = z[32];\n""  Real 'z_gENCLS.anglev' = z[33];\n""  Real 'z_gENCLS.id' = z[34];\n""  Real 'z_gENCLS.iq' = z[35];\n""  Real 'z_gENCLS.omega' = z[36];\n""  Real 'z_gENCLS.p.ii' = z[37];\n""  Real 'z_gENCLS.p.ir' = z[38];\n""  Real 'z_gENCLS.vd' = z[39];\n""  Real 'z_gENCLS.vq' = z[40];\n""  Real 'z_gENCLS2.P' = z[41];\n""  Real 'z_gENCLS2.Q' = z[42];\n""  Real 'z_gENCLS2.V' = z[43];\n""  Real 'z_gENCLS2.anglev' = z[44];\n""  Real 'z_gENCLS2.id' = z[45];\n""  Real 'z_gENCLS2.iq' = z[46];\n""  Real 'z_gENCLS2.vd' = z[47];\n""  Real 'z_gENCLS2.vq' = z[48];\n""  Real 'z_pwFault.p.ii' = z[49];\n""  Real 'z_pwFault.p.ir' = z[50];\n""  Real 'z_pwLine.P12' = z[51];\n""  Real 'z_pwLine.P21' = z[52];\n""  Real 'z_pwLine.Q12' = z[53];\n""  Real 'z_pwLine.Q21' = z[54];\n""  Real 'z_pwLine.ir.im' = z[55];\n""  Real 'z_pwLine.ir.re' = z[56];\n""  Real 'z_pwLine.is.im' = z[57];\n""  Real 'z_pwLine.is.re' = z[58];\n""  Real 'z_pwLine.vs.im' = z[59];\n""  Real 'z_pwLine.vs.re' = z[60];\n""  Real 'z_pwLine1.P12' = z[61];\n""  Real 'z_pwLine1.P21' = z[62];\n""  Real 'z_pwLine1.Q12' = z[63];\n""  Real 'z_pwLine1.Q21' = z[64];\n""  Real 'z_pwLine1.ir.im' = z[65];\n""  Real 'z_pwLine1.ir.re' = z[66];\n""  Real 'z_pwLine1.is.im' = z[67];\n""  Real 'z_pwLine1.is.re' = z[68];\n""  Real 'z_pwLine1.vr.im' = z[69];\n""  Real 'z_pwLine1.vr.re' = z[70];\n""  Real 'z_pwLine1.vs.im' = z[71];\n""  Real 'z_pwLine1.vs.re' = z[72];\n""  Real 'z_pwLine3.P12' = z[73];\n""  Real 'z_pwLine3.P21' = z[74];\n""  Real 'z_pwLine3.Q12' = z[75];\n""  Real 'z_pwLine3.Q21' = z[76];\n""  Real 'z_pwLine3.ir.im' = z[77];\n""  Real 'z_pwLine3.ir.re' = z[78];\n""  Real 'z_pwLine3.is.im' = z[79];\n""  Real 'z_pwLine3.is.re' = z[80];\n""  Real 'z_pwLine3.vr.im' = z[81];\n""  Real 'z_pwLine3.vr.re' = z[82];\n""  Real 'z_pwLine4.P12' = z[83];\n""  Real 'z_pwLine4.P21' = z[84];\n""  Real 'z_pwLine4.Q12' = z[85];\n""  Real 'z_pwLine4.Q21' = z[86];\n""  Real 'z_pwLine4.ir.im' = z[87];\n""  Real 'z_pwLine4.ir.re' = z[88];\n""  Real 'z_pwLine4.is.im' = z[89];\n""  Real 'z_pwLine4.is.re' = z[90];\n"
  "equation\n  der(x) = A * x + B * u;\n  y = C * x + D * u;\n  z = Cz * x + Dz * u;\nend linear_OpenIPSL_Examples_Machines_PSSE_GENCLS;\n";
}
#if defined(__cplusplus)
}
#endif

