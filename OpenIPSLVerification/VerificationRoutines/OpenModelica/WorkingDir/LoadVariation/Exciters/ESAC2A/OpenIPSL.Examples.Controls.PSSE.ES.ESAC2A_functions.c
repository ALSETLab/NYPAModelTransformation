#include "omc_simulation_settings.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC2A_functions.h"
#ifdef __cplusplus
extern "C" {
#endif

#include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC2A_includes.h"


Complex omc_Complex(threadData_t *threadData, modelica_real omc_re, modelica_real omc_im)
{
  Complex tmp1;
  tmp1._re = omc_re;
  tmp1._im = omc_im;
  return tmp1;
}

modelica_metatype boxptr_Complex(threadData_t *threadData, modelica_metatype _re, modelica_metatype _im)
{
  return mmc_mk_box3(3, &Complex__desc, _re, _im);
}

DLLExport
modelica_real omc_Modelica_Math_atan3(threadData_t *threadData, modelica_real _u1, modelica_real _u2, modelica_real _y0)
{
  modelica_real _y;
  modelica_real _pi2;
  modelica_real _w;
  _tailrecursive: OMC_LABEL_UNUSED
  // _y has no default value.
  _pi2 = 6.283185307179586;
  // _w has no default value.
  _w = atan2(_u1, _u2);

  if((_y0 == 0.0))
  {
    _y = _w;
  }
  else
  {
    _y = _w + (6.283185307179586) * (((modelica_real)((modelica_integer)floor(0.5 + (0.1591549430918953) * (_y0 - _w)))));
  }
  _return: OMC_LABEL_UNUSED
  return _y;
}
modelica_metatype boxptr_Modelica_Math_atan3(threadData_t *threadData, modelica_metatype _u1, modelica_metatype _u2, modelica_metatype _y0)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real _y;
  modelica_metatype out_y;
  tmp1 = mmc_unbox_real(_u1);
  tmp2 = mmc_unbox_real(_u2);
  tmp3 = mmc_unbox_real(_y0);
  _y = omc_Modelica_Math_atan3(threadData, tmp1, tmp2, tmp3);
  out_y = mmc_mk_rcon(_y);
  return out_y;
}

Modelica_SIunits_ComplexPower omc_Modelica_SIunits_ComplexPower(threadData_t *threadData, modelica_real omc_re, modelica_real omc_im)
{
  Modelica_SIunits_ComplexPower tmp1;
  tmp1._re = omc_re;
  tmp1._im = omc_im;
  return tmp1;
}

modelica_metatype boxptr_Modelica_SIunits_ComplexPower(threadData_t *threadData, modelica_metatype _re, modelica_metatype _im)
{
  return mmc_mk_box3(3, &Modelica_SIunits_ComplexPower__desc, _re, _im);
}

OpenIPSL_Electrical_SystemBase omc_OpenIPSL_Electrical_SystemBase(threadData_t *threadData, modelica_real omc_S_b, modelica_real omc_fn)
{
  OpenIPSL_Electrical_SystemBase tmp1;
  tmp1._S_b = omc_S_b;
  tmp1._fn = omc_fn;
  return tmp1;
}

modelica_metatype boxptr_OpenIPSL_Electrical_SystemBase(threadData_t *threadData, modelica_metatype _S_b, modelica_metatype _fn)
{
  return mmc_mk_box3(3, &OpenIPSL_Electrical_SystemBase__desc, _S_b, _fn);
}

OpenIPSL_Electrical_D_SystemBase24SysData omc_OpenIPSL_Electrical_D_SystemBase24SysData(threadData_t *threadData, modelica_real omc_S_b, modelica_real omc_fn)
{
  OpenIPSL_Electrical_D_SystemBase24SysData tmp1;
  tmp1._S_b = omc_S_b;
  tmp1._fn = omc_fn;
  return tmp1;
}

modelica_metatype boxptr_OpenIPSL_Electrical_D_SystemBase24SysData(threadData_t *threadData, modelica_metatype _S_b, modelica_metatype _fn)
{
  return mmc_mk_box3(3, &OpenIPSL_Electrical_D_SystemBase24SysData__desc, _S_b, _fn);
}

DLLExport
modelica_real omc_OpenIPSL_Electrical_Controls_PSSE_ES_BaseClasses_invFEX(threadData_t *threadData, modelica_real _K_C, modelica_real _Efd0, modelica_real _Ifd0)
{
  modelica_real _VE0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  _tailrecursive: OMC_LABEL_UNUSED
  // _VE0 has no default value.
  if((_Ifd0 <= 0.0))
  {
    _VE0 = _Efd0;
  }
  else
  {
    tmp1 = _Efd0 + (0.577) * ((_K_C) * (_Ifd0));
    if(((_K_C) * ((_Ifd0) / tmp1) <= 0.433))
    {
      _VE0 = _Efd0 + (0.577) * ((_K_C) * (_Ifd0));
    }
    else
    {
      tmp2 = _Efd0;
      tmp3 = (_K_C) * (_Ifd0);
      tmp4 = sqrt((tmp2 * tmp2) + (tmp3 * tmp3));
      tmp5 = _Efd0;
      tmp6 = (_K_C) * (_Ifd0);
      tmp7 = sqrt((tmp5 * tmp5) + (tmp6 * tmp6));
      if((((0.8660254037844387) * ((_K_C) * ((_Ifd0) / tmp4)) > 0.433) && ((0.8660254037844387) * ((_K_C) * ((_Ifd0) / tmp7)) < 0.75)))
      {
        tmp8 = _Efd0;
        tmp9 = (_K_C) * (_Ifd0);
        _VE0 = (1.154700538379251) * (sqrt((tmp8 * tmp8) + (tmp9 * tmp9)));
      }
      else
      {
        _VE0 = (0.5773672055427251) * (_Efd0) + (_K_C) * (_Ifd0);
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _VE0;
}
modelica_metatype boxptr_OpenIPSL_Electrical_Controls_PSSE_ES_BaseClasses_invFEX(threadData_t *threadData, modelica_metatype _K_C, modelica_metatype _Efd0, modelica_metatype _Ifd0)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real _VE0;
  modelica_metatype out_VE0;
  tmp1 = mmc_unbox_real(_K_C);
  tmp2 = mmc_unbox_real(_Efd0);
  tmp3 = mmc_unbox_real(_Ifd0);
  _VE0 = omc_OpenIPSL_Electrical_Controls_PSSE_ES_BaseClasses_invFEX(threadData, tmp1, tmp2, tmp3);
  out_VE0 = mmc_mk_rcon(_VE0);
  return out_VE0;
}

DLLExport
modelica_real omc_OpenIPSL_NonElectrical_Functions_SE(threadData_t *threadData, modelica_real _u, modelica_real _SE1, modelica_real _SE2, modelica_real _E1, modelica_real _E2)
{
  modelica_real _sys;
  modelica_real _a;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  modelica_real _A;
  modelica_real tmp5;
  modelica_real _B;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  _tailrecursive: OMC_LABEL_UNUSED
  // _sys has no default value.
  tmp3 = (modelica_boolean)(_SE2 != 0.0);
  if(tmp3)
  {
    tmp1 = (_E2) * (_SE2);
    tmp2 = (_SE1) * ((_E1) / tmp1);
    if(!(tmp2 >= 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert(threadData, info, "Model error: Argument of sqrt(SE1 * E1 / (E2 * SE2)) was %g should be >= 0", tmp2);
    }
    tmp4 = sqrt(tmp2);
  }
  else
  {
    tmp4 = 0.0;
  }
  _a = tmp4;
  tmp5 = -1.0 + _a;
  _A = _E2 + (_E2 - _E1) / tmp5;
  tmp8 = (modelica_boolean)(fabs(_E1 - _E2) < 1e-15);
  if(tmp8)
  {
    tmp9 = 0.0;
  }
  else
  {
    tmp6 = _E1 - _E2;
    tmp7 = (-1.0 + _a) / tmp6;
    tmp9 = (_SE2) * ((_E2) * ((tmp7 * tmp7)));
  }
  _B = tmp9;
  if(((_SE1 == 0.0) || (_u <= 0.0)))
  {
    _sys = 0.0;
  }
  else
  {
    if((_u <= _A))
    {
      _sys = 0.0;
    }
    else
    {
      tmp10 = _u - _A;
      tmp11 = _u;
      _sys = (_B) * (((tmp10 * tmp10)) / tmp11);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _sys;
}
modelica_metatype boxptr_OpenIPSL_NonElectrical_Functions_SE(threadData_t *threadData, modelica_metatype _u, modelica_metatype _SE1, modelica_metatype _SE2, modelica_metatype _E1, modelica_metatype _E2)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real _sys;
  modelica_metatype out_sys;
  tmp1 = mmc_unbox_real(_u);
  tmp2 = mmc_unbox_real(_SE1);
  tmp3 = mmc_unbox_real(_SE2);
  tmp4 = mmc_unbox_real(_E1);
  tmp5 = mmc_unbox_real(_E2);
  _sys = omc_OpenIPSL_NonElectrical_Functions_SE(threadData, tmp1, tmp2, tmp3, tmp4, tmp5);
  out_sys = mmc_mk_rcon(_sys);
  return out_sys;
}

#ifdef __cplusplus
}
#endif
