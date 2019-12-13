/* Simulation code for OpenIPSL.Examples.Controls.PSSE.ES.EXAC1 generated by the OpenModelica Compiler OpenModelica 1.13.0. */
#if !defined(OpenIPSL_Examples_Controls_PSSE_ES_EXAC1__MODEL_H)
#define OpenIPSL_Examples_Controls_PSSE_ES_EXAC1__MODEL_H

#include "openmodelica.h"
#include "openmodelica_func.h"
#include "simulation_data.h"
#include "simulation/simulation_info_json.h"
#include "simulation/simulation_runtime.h"
#include "util/omc_error.h"
#include "simulation/solver/model_help.h"
#include "simulation/solver/delay.h"
#include "simulation/solver/linearSystem.h"
#include "simulation/solver/nonlinearSystem.h"
#include "simulation/solver/mixedSystem.h"

#if defined(__cplusplus)
extern "C" {
#endif

#include <string.h>

#include "OpenIPSL.Examples.Controls.PSSE.ES.EXAC1_functions.h"

#define Complex_index 0
#define Modelica_Math_atan3_index 1
#define Modelica_SIunits_ComplexPower_index 2
#define OpenIPSL_Electrical_SystemBase_index 3
#define OpenIPSL_Electrical_Controls_PSSE_ES_BaseClasses_invFEX_index 4
#define OpenIPSL_NonElectrical_Functions_SE_index 5
#define OpenIPSL_NonElectrical_Functions_SE__exp_index 6

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_callExternalObjectDestructors(DATA *_data, threadData_t *threadData);
#if !defined(OMC_NUM_NONLINEAR_SYSTEMS) || OMC_NUM_NONLINEAR_SYSTEMS>0
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA *data);
#endif
#if !defined(OMC_NUM_LINEAR_SYSTEMS) || OMC_NUM_LINEAR_SYSTEMS>0
#endif
#if !defined(OMC_NUM_MIXED_SYSTEMS) || OMC_NUM_MIXED_SYSTEMS>0
#endif
#if !defined(OMC_NO_STATESELECTION)
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_initializeStateSets(int nStateSets, STATE_SET_DATA* statesetData, DATA *data);
#endif
extern int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_functionAlgebraics(DATA *data, threadData_t *threadData);
extern int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_function_storeDelayed(DATA *data, threadData_t *threadData);
extern int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_updateBoundVariableAttributes(DATA *data, threadData_t *threadData);
extern int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_functionInitialEquations(DATA *data, threadData_t *threadData);
extern int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData);
extern int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_functionRemovedInitialEquations(DATA *data, threadData_t *threadData);
extern int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_updateBoundParameters(DATA *data, threadData_t *threadData);
extern int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_checkForAsserts(DATA *data, threadData_t *threadData);
extern int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData);
extern int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_function_ZeroCrossings(DATA *data, threadData_t *threadData, double* gout);
extern int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_function_updateRelations(DATA *data, threadData_t *threadData, int evalZeroCross);
extern const char* OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_zeroCrossingDescription(int i, int **out_EquationIndexes);
extern const char* OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_relationDescription(int i);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_function_initSample(DATA *data, threadData_t *threadData);
extern int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_initialAnalyticJacobianG(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
extern int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_initialAnalyticJacobianA(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
extern int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_initialAnalyticJacobianB(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
extern int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_initialAnalyticJacobianC(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
extern int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_initialAnalyticJacobianD(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
extern int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_functionJacG_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
extern int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_functionJacA_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
extern int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_functionJacB_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
extern int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_functionJacC_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
extern int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_functionJacD_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
extern const char* OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_linear_model_frame(void);
extern const char* OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_linear_model_datarecovery_frame(void);
extern int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_mayer(DATA* data, modelica_real** res, short *);
extern int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_lagrange(DATA* data, modelica_real** res, short *, short *);
extern int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_pickUpBoundsForInputsInOptimization(DATA* data, modelica_real* min, modelica_real* max, modelica_real*nominal, modelica_boolean *useNominal, char ** name, modelica_real * start, modelica_real * startTimeOpt);
extern int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_setInputData(DATA *data, const modelica_boolean file);
extern int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_getTimeGrid(DATA *data, modelica_integer * nsi, modelica_real**t);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_function_initSynchronous(DATA * data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_function_updateSynchronous(DATA * data, threadData_t *threadData, long i);
extern int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_function_equationsSynchronous(DATA * data, threadData_t *threadData, long i);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_read_input_fmu(MODEL_DATA* modelData, SIMULATION_INFO* simulationData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_function_savePreSynchronous(DATA *data, threadData_t *threadData);
extern int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_inputNames(DATA* data, char ** names);
extern int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_initializeDAEmodeData(DATA *data, DAEMODE_DATA*);
extern int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_functionLocalKnownVars(DATA*, threadData_t*);
extern int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_symbolicInlineSystem(DATA*, threadData_t*);

#include "OpenIPSL.Examples.Controls.PSSE.ES.EXAC1_literals.h"




#if defined(HPCOM) && !defined(_OPENMP)
  #error "HPCOM requires OpenMP or the results are wrong"
#endif
#if defined(_OPENMP)
  #include <omp.h>
#else
  /* dummy omp defines */
  #define omp_get_max_threads() 1
#endif

#if defined(__cplusplus)
}
#endif

#endif /* !defined(OpenIPSL_Examples_Controls_PSSE_ES_EXAC1__MODEL_H) */


