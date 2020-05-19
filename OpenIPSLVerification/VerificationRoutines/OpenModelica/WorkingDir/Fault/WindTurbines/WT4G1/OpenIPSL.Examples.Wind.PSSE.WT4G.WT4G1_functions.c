#include "omc_simulation_settings.h"
#include "OpenIPSL.Examples.Wind.PSSE.WT4G.WT4G1_functions.h"
#ifdef __cplusplus
extern "C" {
#endif

#include "OpenIPSL.Examples.Wind.PSSE.WT4G.WT4G1_includes.h"


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

#ifdef __cplusplus
}
#endif
