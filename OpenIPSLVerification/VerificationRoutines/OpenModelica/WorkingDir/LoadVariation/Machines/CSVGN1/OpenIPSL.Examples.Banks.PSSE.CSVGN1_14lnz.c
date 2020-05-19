/* Linearization */
#include "OpenIPSL.Examples.Banks.PSSE.CSVGN1_model.h"
#if defined(__cplusplus)
extern "C" {
#endif
const char *OpenIPSL_Examples_Banks_PSSE_CSVGN1_linear_model_frame()
{
  return "model linear_OpenIPSL_Examples_Banks_PSSE_CSVGN1\n  parameter Integer n = 10 \"number of states\";\n  parameter Integer m = 0 \"number of inputs\";\n  parameter Integer p = 0 \"number of outputs\";\n"
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
  "  Real 'x_cSVGN1.LagLim.state' = x[1];\n""  Real 'x_cSVGN1.leadLag.TF.x_scaled[1]' = x[2];\n""  Real 'x_cSVGN1.leadLagLim.integrator.y' = x[3];\n""  Real 'x_gENCLS.delta' = x[4];\n""  Real 'x_gENCLS.eq' = x[5];\n""  Real 'x_gENSAL.Epq' = x[6];\n""  Real 'x_gENSAL.PSIkd' = x[7];\n""  Real 'x_gENSAL.PSIppq' = x[8];\n""  Real 'x_gENSAL.delta' = x[9];\n""  Real 'x_gENSAL.w' = x[10];\n"
  "equation\n  der(x) = A * x + B * u;\n  y = C * x + D * u;\nend linear_OpenIPSL_Examples_Banks_PSSE_CSVGN1;\n";
}
const char *OpenIPSL_Examples_Banks_PSSE_CSVGN1_linear_model_datarecovery_frame()
{
  return "model linear_OpenIPSL_Examples_Banks_PSSE_CSVGN1\n  parameter Integer n = 10 \"number of states\";\n  parameter Integer m = 0 \"number of inputs\";\n  parameter Integer p = 0 \"number of outputs\";\n  parameter Integer nz = 139 \"data recovery variables\";\n"
  "\n"
  "  parameter Real x0[10] = %s;\n"
  "  parameter Real u0[0] = %s;\n"
  "  parameter Real z0[139] = %s;\n"
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
  "  Real 'x_cSVGN1.LagLim.state' = x[1];\n""  Real 'x_cSVGN1.leadLag.TF.x_scaled[1]' = x[2];\n""  Real 'x_cSVGN1.leadLagLim.integrator.y' = x[3];\n""  Real 'x_gENCLS.delta' = x[4];\n""  Real 'x_gENCLS.eq' = x[5];\n""  Real 'x_gENSAL.Epq' = x[6];\n""  Real 'x_gENSAL.PSIkd' = x[7];\n""  Real 'x_gENSAL.PSIppq' = x[8];\n""  Real 'x_gENSAL.delta' = x[9];\n""  Real 'x_gENSAL.w' = x[10];\n"
  "  Real 'z_$cse1' = z[1];\n""  Real 'z_$cse10' = z[2];\n""  Real 'z_$cse2' = z[3];\n""  Real 'z_$cse4' = z[4];\n""  Real 'z_$cse6' = z[5];\n""  Real 'z_$cse7' = z[6];\n""  Real 'z_$cse8' = z[7];\n""  Real 'z_$cse9' = z[8];\n""  Real 'z_FAULT.V' = z[9];\n""  Real 'z_FAULT.angle' = z[10];\n""  Real 'z_FAULT.p.ii' = z[11];\n""  Real 'z_FAULT.p.ir' = z[12];\n""  Real 'z_GEN1.V' = z[13];\n""  Real 'z_GEN1.angle' = z[14];\n""  Real 'z_GEN1.p.ii' = z[15];\n""  Real 'z_GEN1.p.ir' = z[16];\n""  Real 'z_GEN2.V' = z[17];\n""  Real 'z_GEN2.angle' = z[18];\n""  Real 'z_GEN2.p.ii' = z[19];\n""  Real 'z_GEN2.p.ir' = z[20];\n""  Real 'z_LOAD.V' = z[21];\n""  Real 'z_LOAD.angle' = z[22];\n""  Real 'z_LOAD.p.ii' = z[23];\n""  Real 'z_LOAD.p.ir' = z[24];\n""  Real 'z_SHUNT.angle' = z[25];\n""  Real 'z_SHUNT.p.ii' = z[26];\n""  Real 'z_SHUNT.p.ir' = z[27];\n""  Real 'z_cSVGN1.LagLim.u' = z[28];\n""  Real 'z_cSVGN1.LagLim.y' = z[29];\n""  Real 'z_cSVGN1.P' = z[30];\n""  Real 'z_cSVGN1.Q' = z[31];\n""  Real 'z_cSVGN1.V' = z[32];\n""  Real 'z_cSVGN1.Y' = z[33];\n""  Real 'z_cSVGN1.add.u2' = z[34];\n""  Real 'z_cSVGN1.add1.y' = z[35];\n""  Real 'z_cSVGN1.add2.y' = z[36];\n""  Real 'z_cSVGN1.anglev' = z[37];\n""  Real 'z_cSVGN1.id' = z[38];\n""  Real 'z_cSVGN1.iq' = z[39];\n""  Real 'z_cSVGN1.leadLag.TF.x[1]' = z[40];\n""  Real 'z_cSVGN1.leadLag.TF.y' = z[41];\n""  Real 'z_cSVGN1.leadLag.y' = z[42];\n""  Real 'z_cSVGN1.leadLagLim.add2.u2' = z[43];\n""  Real 'z_cSVGN1.leadLagLim.add2.y' = z[44];\n""  Real 'z_cSVGN1.leadLagLim.add3.y' = z[45];\n""  Real 'z_cSVGN1.leadLagLim.gain.y' = z[46];\n""  Real 'z_cSVGN1.leadLagLim.integrator.local_set' = z[47];\n""  Real 'z_cSVGN1.p.ii' = z[48];\n""  Real 'z_cSVGN1.p.ir' = z[49];\n""  Real 'z_cSVGN1.v' = z[50];\n""  Real 'z_cSVGN1.vd' = z[51];\n""  Real 'z_cSVGN1.vq' = z[52];\n""  Real 'z_constantLoad.P' = z[53];\n""  Real 'z_constantLoad.Q' = z[54];\n""  Real 'z_constantLoad.angle' = z[55];\n""  Real 'z_constantLoad.kI' = z[56];\n""  Real 'z_constantLoad.kP' = z[57];\n""  Real 'z_constantLoad.p.ii' = z[58];\n""  Real 'z_constantLoad.p.ir' = z[59];\n""  Real 'z_constantLoad.v' = z[60];\n""  Real 'z_gENCLS.P' = z[61];\n""  Real 'z_gENCLS.Q' = z[62];\n""  Real 'z_gENCLS.V' = z[63];\n""  Real 'z_gENCLS.anglev' = z[64];\n""  Real 'z_gENCLS.id' = z[65];\n""  Real 'z_gENCLS.iq' = z[66];\n""  Real 'z_gENCLS.omega' = z[67];\n""  Real 'z_gENCLS.p.ii' = z[68];\n""  Real 'z_gENCLS.p.ir' = z[69];\n""  Real 'z_gENCLS.vd' = z[70];\n""  Real 'z_gENCLS.vq' = z[71];\n""  Real 'z_gENSAL.ETERM' = z[72];\n""  Real 'z_gENSAL.I' = z[73];\n""  Real 'z_gENSAL.ISORCE' = z[74];\n""  Real 'z_gENSAL.P' = z[75];\n""  Real 'z_gENSAL.PELEC' = z[76];\n""  Real 'z_gENSAL.PSId' = z[77];\n""  Real 'z_gENSAL.PSIppd' = z[78];\n""  Real 'z_gENSAL.PSIq' = z[79];\n""  Real 'z_gENSAL.Q' = z[80];\n""  Real 'z_gENSAL.Te' = z[81];\n""  Real 'z_gENSAL.anglei' = z[82];\n""  Real 'z_gENSAL.anglev' = z[83];\n""  Real 'z_gENSAL.id' = z[84];\n""  Real 'z_gENSAL.iq' = z[85];\n""  Real 'z_gENSAL.ud' = z[86];\n""  Real 'z_gENSAL.uq' = z[87];\n""  Real 'z_pwFault.p.ii' = z[88];\n""  Real 'z_pwFault.p.ir' = z[89];\n""  Real 'z_pwLine.P12' = z[90];\n""  Real 'z_pwLine.P21' = z[91];\n""  Real 'z_pwLine.Q12' = z[92];\n""  Real 'z_pwLine.Q21' = z[93];\n""  Real 'z_pwLine.ir.im' = z[94];\n""  Real 'z_pwLine.ir.re' = z[95];\n""  Real 'z_pwLine.is.im' = z[96];\n""  Real 'z_pwLine.is.re' = z[97];\n""  Real 'z_pwLine.vs.im' = z[98];\n""  Real 'z_pwLine.vs.re' = z[99];\n""  Real 'z_pwLine1.P12' = z[100];\n""  Real 'z_pwLine1.P21' = z[101];\n""  Real 'z_pwLine1.Q12' = z[102];\n""  Real 'z_pwLine1.Q21' = z[103];\n""  Real 'z_pwLine1.ir.im' = z[104];\n""  Real 'z_pwLine1.ir.re' = z[105];\n""  Real 'z_pwLine1.is.im' = z[106];\n""  Real 'z_pwLine1.is.re' = z[107];\n""  Real 'z_pwLine1.vr.im' = z[108];\n""  Real 'z_pwLine1.vr.re' = z[109];\n""  Real 'z_pwLine1.vs.im' = z[110];\n""  Real 'z_pwLine1.vs.re' = z[111];\n""  Real 'z_pwLine2.P12' = z[112];\n""  Real 'z_pwLine2.P21' = z[113];\n""  Real 'z_pwLine2.Q12' = z[114];\n""  Real 'z_pwLine2.Q21' = z[115];\n""  Real 'z_pwLine2.ir.im' = z[116];\n""  Real 'z_pwLine2.ir.re' = z[117];\n""  Real 'z_pwLine2.is.im' = z[118];\n""  Real 'z_pwLine2.is.re' = z[119];\n""  Real 'z_pwLine2.vr.im' = z[120];\n""  Real 'z_pwLine2.vr.re' = z[121];\n""  Real 'z_pwLine3.P12' = z[122];\n""  Real 'z_pwLine3.P21' = z[123];\n""  Real 'z_pwLine3.Q12' = z[124];\n""  Real 'z_pwLine3.Q21' = z[125];\n""  Real 'z_pwLine3.ir.im' = z[126];\n""  Real 'z_pwLine3.ir.re' = z[127];\n""  Real 'z_pwLine3.is.im' = z[128];\n""  Real 'z_pwLine3.is.re' = z[129];\n""  Real 'z_pwLine3.vr.im' = z[130];\n""  Real 'z_pwLine3.vr.re' = z[131];\n""  Real 'z_pwLine4.P12' = z[132];\n""  Real 'z_pwLine4.P21' = z[133];\n""  Real 'z_pwLine4.Q12' = z[134];\n""  Real 'z_pwLine4.Q21' = z[135];\n""  Real 'z_pwLine4.ir.im' = z[136];\n""  Real 'z_pwLine4.ir.re' = z[137];\n""  Real 'z_pwLine4.is.im' = z[138];\n""  Real 'z_pwLine4.is.re' = z[139];\n"
  "equation\n  der(x) = A * x + B * u;\n  y = C * x + D * u;\n  z = Cz * x + Dz * u;\nend linear_OpenIPSL_Examples_Banks_PSSE_CSVGN1;\n";
}
#if defined(__cplusplus)
}
#endif

