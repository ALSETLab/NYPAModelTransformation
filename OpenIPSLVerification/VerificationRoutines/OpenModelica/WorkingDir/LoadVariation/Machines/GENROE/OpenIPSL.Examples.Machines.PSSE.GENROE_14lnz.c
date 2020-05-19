/* Linearization */
#include "OpenIPSL.Examples.Machines.PSSE.GENROE_model.h"
#if defined(__cplusplus)
extern "C" {
#endif
const char *OpenIPSL_Examples_Machines_PSSE_GENROE_linear_model_frame()
{
  return "model linear_OpenIPSL_Examples_Machines_PSSE_GENROE\n  parameter Integer n = 8 \"number of states\";\n  parameter Integer m = 0 \"number of inputs\";\n  parameter Integer p = 0 \"number of outputs\";\n"
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
  "  Real 'x_gENCLS.delta' = x[1];\n""  Real 'x_gENCLS.eq' = x[2];\n""  Real 'x_gENROE.Epd' = x[3];\n""  Real 'x_gENROE.Epq' = x[4];\n""  Real 'x_gENROE.PSIkd' = x[5];\n""  Real 'x_gENROE.PSIkq' = x[6];\n""  Real 'x_gENROE.delta' = x[7];\n""  Real 'x_gENROE.w' = x[8];\n"
  "equation\n  der(x) = A * x + B * u;\n  y = C * x + D * u;\nend linear_OpenIPSL_Examples_Machines_PSSE_GENROE;\n";
}
const char *OpenIPSL_Examples_Machines_PSSE_GENROE_linear_model_datarecovery_frame()
{
  return "model linear_OpenIPSL_Examples_Machines_PSSE_GENROE\n  parameter Integer n = 8 \"number of states\";\n  parameter Integer m = 0 \"number of inputs\";\n  parameter Integer p = 0 \"number of outputs\";\n  parameter Integer nz = 102 \"data recovery variables\";\n"
  "\n"
  "  parameter Real x0[8] = %s;\n"
  "  parameter Real u0[0] = %s;\n"
  "  parameter Real z0[102] = %s;\n"
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
  "  Real 'x_gENCLS.delta' = x[1];\n""  Real 'x_gENCLS.eq' = x[2];\n""  Real 'x_gENROE.Epd' = x[3];\n""  Real 'x_gENROE.Epq' = x[4];\n""  Real 'x_gENROE.PSIkd' = x[5];\n""  Real 'x_gENROE.PSIkq' = x[6];\n""  Real 'x_gENROE.delta' = x[7];\n""  Real 'x_gENROE.w' = x[8];\n"
  "  Real 'z_$cse1' = z[1];\n""  Real 'z_$cse2' = z[2];\n""  Real 'z_$cse4' = z[3];\n""  Real 'z_$cse5' = z[4];\n""  Real 'z_$cse6' = z[5];\n""  Real 'z_$cse7' = z[6];\n""  Real 'z_FAULT.V' = z[7];\n""  Real 'z_FAULT.angle' = z[8];\n""  Real 'z_FAULT.p.ii' = z[9];\n""  Real 'z_FAULT.p.ir' = z[10];\n""  Real 'z_GEN1.V' = z[11];\n""  Real 'z_GEN1.angle' = z[12];\n""  Real 'z_GEN1.p.ii' = z[13];\n""  Real 'z_GEN1.p.ir' = z[14];\n""  Real 'z_GEN2.V' = z[15];\n""  Real 'z_GEN2.angle' = z[16];\n""  Real 'z_GEN2.p.ii' = z[17];\n""  Real 'z_GEN2.p.ir' = z[18];\n""  Real 'z_LOAD.V' = z[19];\n""  Real 'z_LOAD.angle' = z[20];\n""  Real 'z_LOAD.p.ii' = z[21];\n""  Real 'z_LOAD.p.ir' = z[22];\n""  Real 'z_constantLoad.P' = z[23];\n""  Real 'z_constantLoad.Q' = z[24];\n""  Real 'z_constantLoad.angle' = z[25];\n""  Real 'z_constantLoad.kI' = z[26];\n""  Real 'z_constantLoad.kP' = z[27];\n""  Real 'z_constantLoad.p.ii' = z[28];\n""  Real 'z_constantLoad.p.ir' = z[29];\n""  Real 'z_constantLoad.v' = z[30];\n""  Real 'z_gENCLS.P' = z[31];\n""  Real 'z_gENCLS.Q' = z[32];\n""  Real 'z_gENCLS.V' = z[33];\n""  Real 'z_gENCLS.anglev' = z[34];\n""  Real 'z_gENCLS.id' = z[35];\n""  Real 'z_gENCLS.iq' = z[36];\n""  Real 'z_gENCLS.omega' = z[37];\n""  Real 'z_gENCLS.p.ii' = z[38];\n""  Real 'z_gENCLS.p.ir' = z[39];\n""  Real 'z_gENCLS.vd' = z[40];\n""  Real 'z_gENCLS.vq' = z[41];\n""  Real 'z_gENROE.ETERM' = z[42];\n""  Real 'z_gENROE.I' = z[43];\n""  Real 'z_gENROE.ISORCE' = z[44];\n""  Real 'z_gENROE.P' = z[45];\n""  Real 'z_gENROE.PELEC' = z[46];\n""  Real 'z_gENROE.PSId' = z[47];\n""  Real 'z_gENROE.PSIpp' = z[48];\n""  Real 'z_gENROE.PSIppd' = z[49];\n""  Real 'z_gENROE.PSIppq' = z[50];\n""  Real 'z_gENROE.PSIq' = z[51];\n""  Real 'z_gENROE.Q' = z[52];\n""  Real 'z_gENROE.Te' = z[53];\n""  Real 'z_gENROE.XaqIlq' = z[54];\n""  Real 'z_gENROE.anglei' = z[55];\n""  Real 'z_gENROE.anglev' = z[56];\n""  Real 'z_gENROE.id' = z[57];\n""  Real 'z_gENROE.iq' = z[58];\n""  Real 'z_gENROE.ud' = z[59];\n""  Real 'z_gENROE.uq' = z[60];\n""  Real 'z_pwFault.p.ii' = z[61];\n""  Real 'z_pwFault.p.ir' = z[62];\n""  Real 'z_pwLine.P12' = z[63];\n""  Real 'z_pwLine.P21' = z[64];\n""  Real 'z_pwLine.Q12' = z[65];\n""  Real 'z_pwLine.Q21' = z[66];\n""  Real 'z_pwLine.ir.im' = z[67];\n""  Real 'z_pwLine.ir.re' = z[68];\n""  Real 'z_pwLine.is.im' = z[69];\n""  Real 'z_pwLine.is.re' = z[70];\n""  Real 'z_pwLine.vs.im' = z[71];\n""  Real 'z_pwLine.vs.re' = z[72];\n""  Real 'z_pwLine1.P12' = z[73];\n""  Real 'z_pwLine1.P21' = z[74];\n""  Real 'z_pwLine1.Q12' = z[75];\n""  Real 'z_pwLine1.Q21' = z[76];\n""  Real 'z_pwLine1.ir.im' = z[77];\n""  Real 'z_pwLine1.ir.re' = z[78];\n""  Real 'z_pwLine1.is.im' = z[79];\n""  Real 'z_pwLine1.is.re' = z[80];\n""  Real 'z_pwLine1.vr.im' = z[81];\n""  Real 'z_pwLine1.vr.re' = z[82];\n""  Real 'z_pwLine1.vs.im' = z[83];\n""  Real 'z_pwLine1.vs.re' = z[84];\n""  Real 'z_pwLine3.P12' = z[85];\n""  Real 'z_pwLine3.P21' = z[86];\n""  Real 'z_pwLine3.Q12' = z[87];\n""  Real 'z_pwLine3.Q21' = z[88];\n""  Real 'z_pwLine3.ir.im' = z[89];\n""  Real 'z_pwLine3.ir.re' = z[90];\n""  Real 'z_pwLine3.is.im' = z[91];\n""  Real 'z_pwLine3.is.re' = z[92];\n""  Real 'z_pwLine3.vr.im' = z[93];\n""  Real 'z_pwLine3.vr.re' = z[94];\n""  Real 'z_pwLine4.P12' = z[95];\n""  Real 'z_pwLine4.P21' = z[96];\n""  Real 'z_pwLine4.Q12' = z[97];\n""  Real 'z_pwLine4.Q21' = z[98];\n""  Real 'z_pwLine4.ir.im' = z[99];\n""  Real 'z_pwLine4.ir.re' = z[100];\n""  Real 'z_pwLine4.is.im' = z[101];\n""  Real 'z_pwLine4.is.re' = z[102];\n"
  "equation\n  der(x) = A * x + B * u;\n  y = C * x + D * u;\n  z = Cz * x + Dz * u;\nend linear_OpenIPSL_Examples_Machines_PSSE_GENROE;\n";
}
#if defined(__cplusplus)
}
#endif

