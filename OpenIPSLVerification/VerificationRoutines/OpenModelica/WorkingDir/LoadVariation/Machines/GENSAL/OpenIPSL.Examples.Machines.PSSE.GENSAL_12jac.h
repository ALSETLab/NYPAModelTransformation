/* Jacobians */
static const REAL_ATTRIBUTE dummyREAL_ATTRIBUTE = omc_dummyRealAttribute;
/* Jacobian Variables */
#if defined(__cplusplus)
extern "C" {
#endif
  #define OpenIPSL_Examples_Machines_PSSE_GENSAL_INDEX_JAC_NLSJac3 0
  int OpenIPSL_Examples_Machines_PSSE_GENSAL_functionJacNLSJac3_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
  int OpenIPSL_Examples_Machines_PSSE_GENSAL_initialAnalyticJacobianNLSJac3(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
#if defined(__cplusplus)
}
#endif
#if defined(__cplusplus)
extern "C" {
#endif
  #define OpenIPSL_Examples_Machines_PSSE_GENSAL_INDEX_JAC_F 1
  int OpenIPSL_Examples_Machines_PSSE_GENSAL_functionJacF_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
  int OpenIPSL_Examples_Machines_PSSE_GENSAL_initialAnalyticJacobianF(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
#if defined(__cplusplus)
}
#endif
#if defined(__cplusplus)
extern "C" {
#endif
  #define OpenIPSL_Examples_Machines_PSSE_GENSAL_INDEX_JAC_D 2
  int OpenIPSL_Examples_Machines_PSSE_GENSAL_functionJacD_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
  int OpenIPSL_Examples_Machines_PSSE_GENSAL_initialAnalyticJacobianD(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
#if defined(__cplusplus)
}
#endif
#if defined(__cplusplus)
extern "C" {
#endif
  #define OpenIPSL_Examples_Machines_PSSE_GENSAL_INDEX_JAC_C 3
  int OpenIPSL_Examples_Machines_PSSE_GENSAL_functionJacC_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
  int OpenIPSL_Examples_Machines_PSSE_GENSAL_initialAnalyticJacobianC(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
#if defined(__cplusplus)
}
#endif
#if defined(__cplusplus)
extern "C" {
#endif
  #define OpenIPSL_Examples_Machines_PSSE_GENSAL_INDEX_JAC_B 4
  int OpenIPSL_Examples_Machines_PSSE_GENSAL_functionJacB_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
  int OpenIPSL_Examples_Machines_PSSE_GENSAL_initialAnalyticJacobianB(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
#if defined(__cplusplus)
}
#endif
#if defined(__cplusplus)
extern "C" {
#endif
  #define OpenIPSL_Examples_Machines_PSSE_GENSAL_INDEX_JAC_A 5
  int OpenIPSL_Examples_Machines_PSSE_GENSAL_functionJacA_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
  int OpenIPSL_Examples_Machines_PSSE_GENSAL_initialAnalyticJacobianA(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
#if defined(__cplusplus)
}
#endif


