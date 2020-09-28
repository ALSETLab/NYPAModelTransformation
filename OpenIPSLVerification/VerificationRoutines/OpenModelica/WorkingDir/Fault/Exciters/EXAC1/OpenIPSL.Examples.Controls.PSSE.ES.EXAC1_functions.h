#ifndef OpenIPSL_Examples_Controls_PSSE_ES_EXAC1__H
#define OpenIPSL_Examples_Controls_PSSE_ES_EXAC1__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#include "simulation/simulation_runtime.h"
#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
  modelica_real _re;
  modelica_real _im;
} Complex;
extern struct record_description Complex__desc;

void Complex_construct_p(threadData_t *threadData, void* v_ths );
#define Complex_construct(td, ths ) Complex_construct_p(td, &ths )
void Complex_copy_p(void* v_src, void* v_dst);
#define Complex_copy(src,dst) Complex_copy_p(&src, &dst)

// This function should eventualy replace the default 'modelica' record constructor funcition
// that omc used to generate, i.e., replace functionBodyRecordConstructor template.
// Complex omc_Complex(threadData_t *threadData , modelica_real in_re, modelica_real in_im);

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each memeber individualy.
// void Complex_copy_to_vars_p(void* v_src , modelica_real* in_re, modelica_real* in_im);
// #define Complex_copy_to_vars(src,...) Complex_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t Complex_array;
#define alloc_Complex_array(dst,ndims,...) generic_array_create(NULL, dst, Complex_construct_p, ndims, sizeof(Complex), __VA_ARGS__)
#define Complex_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, Complex_copy_p, sizeof(Complex))
// This is here unitl we remove all places where this function call is written out instead of the one above.
#define copy_Complex_array_data(src,dst)   generic_array_copy_data(src, &dst, Complex_copy_p, sizeof(Complex))
#define Complex_array_alloc_copy(src,dst)   generic_array_alloc_copy(src, &dst, Complex_copy_p, sizeof(Complex))
#define Complex_array_get(src,ndims,...)         (*(Complex*)(generic_array_get(&src, sizeof(Complex), __VA_ARGS__)))
#define Complex_set(dst,val,...)           generic_array_set(&dst, &val, Complex_copy_p, sizeof(Complex), __VA_ARGS__)

typedef struct {
  modelica_real _S_b;
  modelica_real _fn;
} OpenIPSL_Electrical_SystemBase;
extern struct record_description OpenIPSL_Electrical_SystemBase__desc;

void OpenIPSL_Electrical_SystemBase_construct_p(threadData_t *threadData, void* v_ths );
#define OpenIPSL_Electrical_SystemBase_construct(td, ths ) OpenIPSL_Electrical_SystemBase_construct_p(td, &ths )
void OpenIPSL_Electrical_SystemBase_copy_p(void* v_src, void* v_dst);
#define OpenIPSL_Electrical_SystemBase_copy(src,dst) OpenIPSL_Electrical_SystemBase_copy_p(&src, &dst)

// This function should eventualy replace the default 'modelica' record constructor funcition
// that omc used to generate, i.e., replace functionBodyRecordConstructor template.
// OpenIPSL_Electrical_SystemBase omc_OpenIPSL_Electrical_SystemBase(threadData_t *threadData , modelica_real in_S_b, modelica_real in_fn);

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each memeber individualy.
// void OpenIPSL_Electrical_SystemBase_copy_to_vars_p(void* v_src , modelica_real* in_S_b, modelica_real* in_fn);
// #define OpenIPSL_Electrical_SystemBase_copy_to_vars(src,...) OpenIPSL_Electrical_SystemBase_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t OpenIPSL_Electrical_SystemBase_array;
#define alloc_OpenIPSL_Electrical_SystemBase_array(dst,ndims,...) generic_array_create(NULL, dst, OpenIPSL_Electrical_SystemBase_construct_p, ndims, sizeof(OpenIPSL_Electrical_SystemBase), __VA_ARGS__)
#define OpenIPSL_Electrical_SystemBase_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, OpenIPSL_Electrical_SystemBase_copy_p, sizeof(OpenIPSL_Electrical_SystemBase))
// This is here unitl we remove all places where this function call is written out instead of the one above.
#define copy_OpenIPSL_Electrical_SystemBase_array_data(src,dst)   generic_array_copy_data(src, &dst, OpenIPSL_Electrical_SystemBase_copy_p, sizeof(OpenIPSL_Electrical_SystemBase))
#define OpenIPSL_Electrical_SystemBase_array_alloc_copy(src,dst)   generic_array_alloc_copy(src, &dst, OpenIPSL_Electrical_SystemBase_copy_p, sizeof(OpenIPSL_Electrical_SystemBase))
#define OpenIPSL_Electrical_SystemBase_array_get(src,ndims,...)         (*(OpenIPSL_Electrical_SystemBase*)(generic_array_get(&src, sizeof(OpenIPSL_Electrical_SystemBase), __VA_ARGS__)))
#define OpenIPSL_Electrical_SystemBase_set(dst,val,...)           generic_array_set(&dst, &val, OpenIPSL_Electrical_SystemBase_copy_p, sizeof(OpenIPSL_Electrical_SystemBase), __VA_ARGS__)

typedef Complex Modelica_SIunits_ComplexPower;
extern struct record_description Modelica_SIunits_ComplexPower__desc;

void Modelica_SIunits_ComplexPower_construct_p(threadData_t *threadData, void* v_ths );
#define Modelica_SIunits_ComplexPower_construct(td, ths ) Modelica_SIunits_ComplexPower_construct_p(td, &ths )
void Modelica_SIunits_ComplexPower_copy_p(void* v_src, void* v_dst);
#define Modelica_SIunits_ComplexPower_copy(src,dst) Modelica_SIunits_ComplexPower_copy_p(&src, &dst)

// This function should eventualy replace the default 'modelica' record constructor funcition
// that omc used to generate, i.e., replace functionBodyRecordConstructor template.
// Modelica_SIunits_ComplexPower omc_Modelica_SIunits_ComplexPower(threadData_t *threadData , modelica_real in_re, modelica_real in_im);

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each memeber individualy.
// void Modelica_SIunits_ComplexPower_copy_to_vars_p(void* v_src , modelica_real* in_re, modelica_real* in_im);
// #define Modelica_SIunits_ComplexPower_copy_to_vars(src,...) Modelica_SIunits_ComplexPower_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t Modelica_SIunits_ComplexPower_array;
#define alloc_Modelica_SIunits_ComplexPower_array(dst,ndims,...) generic_array_create(NULL, dst, Modelica_SIunits_ComplexPower_construct_p, ndims, sizeof(Modelica_SIunits_ComplexPower), __VA_ARGS__)
#define Modelica_SIunits_ComplexPower_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, Modelica_SIunits_ComplexPower_copy_p, sizeof(Modelica_SIunits_ComplexPower))
// This is here unitl we remove all places where this function call is written out instead of the one above.
#define copy_Modelica_SIunits_ComplexPower_array_data(src,dst)   generic_array_copy_data(src, &dst, Modelica_SIunits_ComplexPower_copy_p, sizeof(Modelica_SIunits_ComplexPower))
#define Modelica_SIunits_ComplexPower_array_alloc_copy(src,dst)   generic_array_alloc_copy(src, &dst, Modelica_SIunits_ComplexPower_copy_p, sizeof(Modelica_SIunits_ComplexPower))
#define Modelica_SIunits_ComplexPower_array_get(src,ndims,...)         (*(Modelica_SIunits_ComplexPower*)(generic_array_get(&src, sizeof(Modelica_SIunits_ComplexPower), __VA_ARGS__)))
#define Modelica_SIunits_ComplexPower_set(dst,val,...)           generic_array_set(&dst, &val, Modelica_SIunits_ComplexPower_copy_p, sizeof(Modelica_SIunits_ComplexPower), __VA_ARGS__)

typedef OpenIPSL_Electrical_SystemBase OpenIPSL_Electrical__omcQSystemBase_24SysData;
extern struct record_description OpenIPSL_Electrical__omcQSystemBase_24SysData__desc;

void OpenIPSL_Electrical__omcQSystemBase_24SysData_construct_p(threadData_t *threadData, void* v_ths );
#define OpenIPSL_Electrical__omcQSystemBase_24SysData_construct(td, ths ) OpenIPSL_Electrical__omcQSystemBase_24SysData_construct_p(td, &ths )
void OpenIPSL_Electrical__omcQSystemBase_24SysData_copy_p(void* v_src, void* v_dst);
#define OpenIPSL_Electrical__omcQSystemBase_24SysData_copy(src,dst) OpenIPSL_Electrical__omcQSystemBase_24SysData_copy_p(&src, &dst)

// This function should eventualy replace the default 'modelica' record constructor funcition
// that omc used to generate, i.e., replace functionBodyRecordConstructor template.
// OpenIPSL_Electrical__omcQSystemBase_24SysData omc_OpenIPSL_Electrical__omcQSystemBase_24SysData(threadData_t *threadData , modelica_real in_S_b, modelica_real in_fn);

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each memeber individualy.
// void OpenIPSL_Electrical__omcQSystemBase_24SysData_copy_to_vars_p(void* v_src , modelica_real* in_S_b, modelica_real* in_fn);
// #define OpenIPSL_Electrical__omcQSystemBase_24SysData_copy_to_vars(src,...) OpenIPSL_Electrical__omcQSystemBase_24SysData_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t OpenIPSL_Electrical__omcQSystemBase_24SysData_array;
#define alloc_OpenIPSL_Electrical__omcQSystemBase_24SysData_array(dst,ndims,...) generic_array_create(NULL, dst, OpenIPSL_Electrical__omcQSystemBase_24SysData_construct_p, ndims, sizeof(OpenIPSL_Electrical__omcQSystemBase_24SysData), __VA_ARGS__)
#define OpenIPSL_Electrical__omcQSystemBase_24SysData_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, OpenIPSL_Electrical__omcQSystemBase_24SysData_copy_p, sizeof(OpenIPSL_Electrical__omcQSystemBase_24SysData))
// This is here unitl we remove all places where this function call is written out instead of the one above.
#define copy_OpenIPSL_Electrical__omcQSystemBase_24SysData_array_data(src,dst)   generic_array_copy_data(src, &dst, OpenIPSL_Electrical__omcQSystemBase_24SysData_copy_p, sizeof(OpenIPSL_Electrical__omcQSystemBase_24SysData))
#define OpenIPSL_Electrical__omcQSystemBase_24SysData_array_alloc_copy(src,dst)   generic_array_alloc_copy(src, &dst, OpenIPSL_Electrical__omcQSystemBase_24SysData_copy_p, sizeof(OpenIPSL_Electrical__omcQSystemBase_24SysData))
#define OpenIPSL_Electrical__omcQSystemBase_24SysData_array_get(src,ndims,...)         (*(OpenIPSL_Electrical__omcQSystemBase_24SysData*)(generic_array_get(&src, sizeof(OpenIPSL_Electrical__omcQSystemBase_24SysData), __VA_ARGS__)))
#define OpenIPSL_Electrical__omcQSystemBase_24SysData_set(dst,val,...)           generic_array_set(&dst, &val, OpenIPSL_Electrical__omcQSystemBase_24SysData_copy_p, sizeof(OpenIPSL_Electrical__omcQSystemBase_24SysData), __VA_ARGS__)

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
OpenIPSL_Electrical__omcQSystemBase_24SysData omc_OpenIPSL_Electrical__omcQSystemBase_24SysData (threadData_t *threadData, modelica_real omc_S_b, modelica_real omc_fn);

DLLExport
modelica_metatype boxptr_OpenIPSL_Electrical__omcQSystemBase_24SysData(threadData_t *threadData, modelica_metatype _S_b, modelica_metatype _fn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OpenIPSL_Electrical__omcQSystemBase_24SysData,2,0) {(void*) boxptr_OpenIPSL_Electrical__omcQSystemBase_24SysData,0}};
#define boxvar_OpenIPSL_Electrical__omcQSystemBase_24SysData MMC_REFSTRUCTLIT(boxvar_lit_OpenIPSL_Electrical__omcQSystemBase_24SysData)


DLLExport
modelica_real omc_OpenIPSL_Electrical_Controls_PSSE_ES_BaseClasses_invFEX(threadData_t *threadData, modelica_real _K_C, modelica_real _Efd0, modelica_real _Ifd0);
DLLExport
modelica_metatype boxptr_OpenIPSL_Electrical_Controls_PSSE_ES_BaseClasses_invFEX(threadData_t *threadData, modelica_metatype _K_C, modelica_metatype _Efd0, modelica_metatype _Ifd0);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OpenIPSL_Electrical_Controls_PSSE_ES_BaseClasses_invFEX,2,0) {(void*) boxptr_OpenIPSL_Electrical_Controls_PSSE_ES_BaseClasses_invFEX,0}};
#define boxvar_OpenIPSL_Electrical_Controls_PSSE_ES_BaseClasses_invFEX MMC_REFSTRUCTLIT(boxvar_lit_OpenIPSL_Electrical_Controls_PSSE_ES_BaseClasses_invFEX)


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
#include "OpenIPSL.Examples.Controls.PSSE.ES.EXAC1_model.h"


#ifdef __cplusplus
}
#endif
#endif

