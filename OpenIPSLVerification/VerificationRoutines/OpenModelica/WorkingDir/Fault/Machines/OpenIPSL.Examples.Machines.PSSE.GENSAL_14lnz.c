/* Linearization */
#include "OpenIPSL.Examples.Machines.PSSE.GENSAL_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

const char *OpenIPSL_Examples_Machines_PSSE_GENSAL_linear_model_frame()
{
  return "model linear_OpenIPSL_Examples_Machines_PSSE_GENSAL\n  parameter Integer n = 7 \"number of states\";\n  parameter Integer p = 0 \"number of inputs\";\n  parameter Integer q = 0 \"number of outputs\";\n"
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
  "  Real 'x_gENCLS.delta' = x[1];\n""  Real 'x_gENCLS.eq' = x[2];\n""  Real 'x_gENSAL.Epq' = x[3];\n""  Real 'x_gENSAL.PSIkd' = x[4];\n""  Real 'x_gENSAL.PSIppq' = x[5];\n""  Real 'x_gENSAL.delta' = x[6];\n""  Real 'x_gENSAL.w' = x[7];\n"
  "equation\n  der(x) = A * x + B * u;\n  y = C * x + D * u;\nend linear_OpenIPSL_Examples_Machines_PSSE_GENSAL;\n";
}
const char *OpenIPSL_Examples_Machines_PSSE_GENSAL_linear_model_datarecovery_frame()
{
  return "model linear_OpenIPSL_Examples_Machines_PSSE_GENSAL\n  parameter Integer n = 7 \"number of states\";\n  parameter Integer p = 0 \"number of inputs\";\n  parameter Integer q = 0 \"number of outputs\";\n  parameter Integer nz = 99 \"data recovery variables\";\n"
  "\n"
  "  parameter Real x0[7] = %s;\n"
  "  parameter Real u0[0] = %s;\n"
  "  parameter Real z0[99] = %s;\n"
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
  "  Real 'x_gENCLS.delta' = x[1];\n""  Real 'x_gENCLS.eq' = x[2];\n""  Real 'x_gENSAL.Epq' = x[3];\n""  Real 'x_gENSAL.PSIkd' = x[4];\n""  Real 'x_gENSAL.PSIppq' = x[5];\n""  Real 'x_gENSAL.delta' = x[6];\n""  Real 'x_gENSAL.w' = x[7];\n"
  "  Real 'z_$cse1' = z[1];\n""  Real 'z_$cse2' = z[2];\n""  Real 'z_$cse4' = z[3];\n""  Real 'z_$cse5' = z[4];\n""  Real 'z_$cse6' = z[5];\n""  Real 'z_$cse7' = z[6];\n""  Real 'z_FAULT.V' = z[7];\n""  Real 'z_FAULT.angle' = z[8];\n""  Real 'z_FAULT.p.ii' = z[9];\n""  Real 'z_FAULT.p.ir' = z[10];\n""  Real 'z_GEN1.V' = z[11];\n""  Real 'z_GEN1.angle' = z[12];\n""  Real 'z_GEN1.p.ii' = z[13];\n""  Real 'z_GEN1.p.ir' = z[14];\n""  Real 'z_GEN2.V' = z[15];\n""  Real 'z_GEN2.angle' = z[16];\n""  Real 'z_GEN2.p.ii' = z[17];\n""  Real 'z_GEN2.p.ir' = z[18];\n""  Real 'z_LOAD.V' = z[19];\n""  Real 'z_LOAD.angle' = z[20];\n""  Real 'z_LOAD.p.ii' = z[21];\n""  Real 'z_LOAD.p.ir' = z[22];\n""  Real 'z_constantLoad.P' = z[23];\n""  Real 'z_constantLoad.Q' = z[24];\n""  Real 'z_constantLoad.angle' = z[25];\n""  Real 'z_constantLoad.kI' = z[26];\n""  Real 'z_constantLoad.kP' = z[27];\n""  Real 'z_constantLoad.p.ii' = z[28];\n""  Real 'z_constantLoad.p.ir' = z[29];\n""  Real 'z_constantLoad.v' = z[30];\n""  Real 'z_gENCLS.P' = z[31];\n""  Real 'z_gENCLS.Q' = z[32];\n""  Real 'z_gENCLS.V' = z[33];\n""  Real 'z_gENCLS.anglev' = z[34];\n""  Real 'z_gENCLS.id' = z[35];\n""  Real 'z_gENCLS.iq' = z[36];\n""  Real 'z_gENCLS.omega' = z[37];\n""  Real 'z_gENCLS.p.ii' = z[38];\n""  Real 'z_gENCLS.p.ir' = z[39];\n""  Real 'z_gENCLS.vd' = z[40];\n""  Real 'z_gENCLS.vq' = z[41];\n""  Real 'z_gENSAL.ETERM' = z[42];\n""  Real 'z_gENSAL.I' = z[43];\n""  Real 'z_gENSAL.ISORCE' = z[44];\n""  Real 'z_gENSAL.P' = z[45];\n""  Real 'z_gENSAL.PELEC' = z[46];\n""  Real 'z_gENSAL.PSId' = z[47];\n""  Real 'z_gENSAL.PSIppd' = z[48];\n""  Real 'z_gENSAL.PSIq' = z[49];\n""  Real 'z_gENSAL.Q' = z[50];\n""  Real 'z_gENSAL.Te' = z[51];\n""  Real 'z_gENSAL.anglei' = z[52];\n""  Real 'z_gENSAL.anglev' = z[53];\n""  Real 'z_gENSAL.id' = z[54];\n""  Real 'z_gENSAL.iq' = z[55];\n""  Real 'z_gENSAL.ud' = z[56];\n""  Real 'z_gENSAL.uq' = z[57];\n""  Real 'z_pwFault.p.ii' = z[58];\n""  Real 'z_pwFault.p.ir' = z[59];\n""  Real 'z_pwLine.P12' = z[60];\n""  Real 'z_pwLine.P21' = z[61];\n""  Real 'z_pwLine.Q12' = z[62];\n""  Real 'z_pwLine.Q21' = z[63];\n""  Real 'z_pwLine.ir.im' = z[64];\n""  Real 'z_pwLine.ir.re' = z[65];\n""  Real 'z_pwLine.is.im' = z[66];\n""  Real 'z_pwLine.is.re' = z[67];\n""  Real 'z_pwLine.vs.im' = z[68];\n""  Real 'z_pwLine.vs.re' = z[69];\n""  Real 'z_pwLine1.P12' = z[70];\n""  Real 'z_pwLine1.P21' = z[71];\n""  Real 'z_pwLine1.Q12' = z[72];\n""  Real 'z_pwLine1.Q21' = z[73];\n""  Real 'z_pwLine1.ir.im' = z[74];\n""  Real 'z_pwLine1.ir.re' = z[75];\n""  Real 'z_pwLine1.is.im' = z[76];\n""  Real 'z_pwLine1.is.re' = z[77];\n""  Real 'z_pwLine1.vr.im' = z[78];\n""  Real 'z_pwLine1.vr.re' = z[79];\n""  Real 'z_pwLine1.vs.im' = z[80];\n""  Real 'z_pwLine1.vs.re' = z[81];\n""  Real 'z_pwLine3.P12' = z[82];\n""  Real 'z_pwLine3.P21' = z[83];\n""  Real 'z_pwLine3.Q12' = z[84];\n""  Real 'z_pwLine3.Q21' = z[85];\n""  Real 'z_pwLine3.ir.im' = z[86];\n""  Real 'z_pwLine3.ir.re' = z[87];\n""  Real 'z_pwLine3.is.im' = z[88];\n""  Real 'z_pwLine3.is.re' = z[89];\n""  Real 'z_pwLine3.vr.im' = z[90];\n""  Real 'z_pwLine3.vr.re' = z[91];\n""  Real 'z_pwLine4.P12' = z[92];\n""  Real 'z_pwLine4.P21' = z[93];\n""  Real 'z_pwLine4.Q12' = z[94];\n""  Real 'z_pwLine4.Q21' = z[95];\n""  Real 'z_pwLine4.ir.im' = z[96];\n""  Real 'z_pwLine4.ir.re' = z[97];\n""  Real 'z_pwLine4.is.im' = z[98];\n""  Real 'z_pwLine4.is.re' = z[99];\n"
  "equation\n  der(x) = A * x + B * u;\n  y = C * x + D * u;\n  z = Cz * x + Dz * u;\nend linear_OpenIPSL_Examples_Machines_PSSE_GENSAL;\n";
}
#if defined(__cplusplus)
}
#endif

