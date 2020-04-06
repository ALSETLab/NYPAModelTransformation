#ifndef OpenIPSL_Examples_Controls_PSSE_ES_IEEET1__H
#define OpenIPSL_Examples_Controls_PSSE_ES_IEEET1__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#include "simulation/simulation_runtime.h"
#ifdef __cplusplus
extern "C" {
#endif

typedef struct Complex_s {
  modelica_real _im;
  modelica_real _re;
} Complex;
typedef base_array_t Complex_array;
extern struct record_description Complex__desc;

typedef struct OpenIPSL_Electrical_SystemBase_s {
  modelica_real _S_b;
  modelica_real _fn;
} OpenIPSL_Electrical_SystemBase;
typedef base_array_t OpenIPSL_Electrical_SystemBase_array;
extern struct record_description OpenIPSL_Electrical_SystemBase__desc;

typedef Complex Modelica_SIunits_ComplexPower;
typedef base_array_t Modelica_SIunits_ComplexPower_array;
extern struct record_description Modelica_SIunits_ComplexPower__desc;

DLLExport
Complex omc_Complex (threadData_t *threadData, modelica_real omc_re, modelica_real omc_im);

DLLExport
modelica_metatype boxptr_Complex(threadData_t *threadData, modelica_metatype _re, modelica_metatype _im);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Complex,2,0) {(void*) boxptr_Complex,0}};
#define boxvar_Complex MMC_REFSTRUCTLIT(boxvar_lit_Complex)


DLLExport
modelica_real omc_Modelica_Math_atan3(threadData_t *threadData, modelica_real _u1, modelica_real _u2, modelica_real _y0);
DLLExport
modelica_metatype boxptr_Modelica_Math_atan3(threadData_t *threadData, modelica_metatype _u1, modelica_metatype _u2, modelica_metatype _y0);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Math_atan3,2,0) {(void*) boxptr_Modelica_Math_atan3,0}};
#define boxvar_Modelica_Math_atan3 MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Math_atan3)


DLLExport
Modelica_SIunits_ComplexPower omc_Modelica_SIunits_ComplexPower (threadData_t *threadData, modelica_real omc_re, modelica_real omc_im);

DLLExport
modelica_metatype boxptr_Modelica_SIunits_ComplexPower(threadData_t *threadData, modelica_metatype _re, modelica_metatype _im);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_SIunits_ComplexPower,2,0) {(void*) boxptr_Modelica_SIunits_ComplexPower,0}};
#define boxvar_Modelica_SIunits_ComplexPower MMC_REFSTRUCTLIT(boxvar_lit_Modelica_SIunits_ComplexPower)


DLLExport
OpenIPSL_Electrical_SystemBase omc_OpenIPSL_Electrical_SystemBase (threadData_t *threadData, modelica_real omc_S_b, modelica_real omc_fn);

DLLExport
modelica_metatype boxptr_OpenIPSL_Electrical_SystemBase(threadData_t *threadData, modelica_metatype _S_b, modelica_metatype _fn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OpenIPSL_Electrical_SystemBase,2,0) {(void*) boxptr_OpenIPSL_Electrical_SystemBase,0}};
#define boxvar_OpenIPSL_Electrical_SystemBase MMC_REFSTRUCTLIT(boxvar_lit_OpenIPSL_Electrical_SystemBase)


DLLExport
modelica_real omc_OpenIPSL_Electrical_Controls_PSSE_ES_BaseClasses_calculate__dc__exciter__params(threadData_t *threadData, modelica_real _V_RMAX_init, modelica_real _V_RMIN_init, modelica_real _K_E_init, modelica_real _E_2, modelica_real _S_EE_2, modelica_real _Efd0, modelica_real _SE_Efd0, modelica_real *out_V_RMIN, modelica_real *out_K_E);
DLLExport
modelica_metatype boxptr_OpenIPSL_Electrical_Controls_PSSE_ES_BaseClasses_calculate__dc__exciter__params(threadData_t *threadData, modelica_metatype _V_RMAX_init, modelica_metatype _V_RMIN_init, modelica_metatype _K_E_init, modelica_metatype _E_2, modelica_metatype _S_EE_2, modelica_metatype _Efd0, modelica_metatype _SE_Efd0, modelica_metatype *out_V_RMIN, modelica_metatype *out_K_E);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OpenIPSL_Electrical_Controls_PSSE_ES_BaseClasses_calculate__dc__exciter__params,2,0) {(void*) boxptr_OpenIPSL_Electrical_Controls_PSSE_ES_BaseClasses_calculate__dc__exciter__params,0}};
#define boxvar_OpenIPSL_Electrical_Controls_PSSE_ES_BaseClasses_calculate__dc__exciter__params MMC_REFSTRUCTLIT(boxvar_lit_OpenIPSL_Electrical_Controls_PSSE_ES_BaseClasses_calculate__dc__exciter__params)


DLLExport
modelica_real omc_OpenIPSL_NonElectrical_Functions_SE(threadData_t *threadData, modelica_real _u, modelica_real _SE1, modelica_real _SE2, modelica_real _E1, modelica_real _E2);
DLLExport
modelica_metatype boxptr_OpenIPSL_NonElectrical_Functions_SE(threadData_t *threadData, modelica_metatype _u, modelica_metatype _SE1, modelica_metatype _SE2, modelica_metatype _E1, modelica_metatype _E2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OpenIPSL_NonElectrical_Functions_SE,2,0) {(void*) boxptr_OpenIPSL_NonElectrical_Functions_SE,0}};
#define boxvar_OpenIPSL_NonElectrical_Functions_SE MMC_REFSTRUCTLIT(boxvar_lit_OpenIPSL_NonElectrical_Functions_SE)


DLLExport
modelica_real omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData_t *threadData, modelica_real _u, modelica_real _S_EE_1, modelica_real _S_EE_2, modelica_real _E_1, modelica_real _E_2);
DLLExport
modelica_metatype boxptr_OpenIPSL_NonElectrical_Functions_SE__exp(threadData_t *threadData, modelica_metatype _u, modelica_metatype _S_EE_1, modelica_metatype _S_EE_2, modelica_metatype _E_1, modelica_metatype _E_2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OpenIPSL_NonElectrical_Functions_SE__exp,2,0) {(void*) boxptr_OpenIPSL_NonElectrical_Functions_SE__exp,0}};
#define boxvar_OpenIPSL_NonElectrical_Functions_SE__exp MMC_REFSTRUCTLIT(boxvar_lit_OpenIPSL_NonElectrical_Functions_SE__exp)
#include "OpenIPSL.Examples.Controls.PSSE.ES.IEEET1_model.h"


#ifdef __cplusplus
}
#endif
#endif

