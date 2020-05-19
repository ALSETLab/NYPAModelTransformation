/* Jacobians */
static const REAL_ATTRIBUTE dummyREAL_ATTRIBUTE = omc_dummyRealAttribute;
/* Jacobian Variables */
#if defined(__cplusplus)
extern "C" {
#endif
  #define OpenIPSL_Examples_Machines_PSSE_GENROU_INDEX_JAC_NLSJac1 0
  int OpenIPSL_Examples_Machines_PSSE_GENROU_functionJacNLSJac1_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
  int OpenIPSL_Examples_Machines_PSSE_GENROU_initialAnalyticJacobianNLSJac1(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
#if defined(__cplusplus)
}
#endif
#if defined(__cplusplus)
extern "C" {
#endif
  #define OpenIPSL_Examples_Machines_PSSE_GENROU_INDEX_JAC_F 1
  int OpenIPSL_Examples_Machines_PSSE_GENROU_functionJacF_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
  int OpenIPSL_Examples_Machines_PSSE_GENROU_initialAnalyticJacobianF(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
#if defined(__cplusplus)
}
#endif
#if defined(__cplusplus)
extern "C" {
#endif
  #define OpenIPSL_Examples_Machines_PSSE_GENROU_INDEX_JAC_D 2
  int OpenIPSL_Examples_Machines_PSSE_GENROU_functionJacD_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
  int OpenIPSL_Examples_Machines_PSSE_GENROU_initialAnalyticJacobianD(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
#if defined(__cplusplus)
}
#endif
#if defined(__cplusplus)
extern "C" {
#endif
  #define OpenIPSL_Examples_Machines_PSSE_GENROU_INDEX_JAC_C 3
  int OpenIPSL_Examples_Machines_PSSE_GENROU_functionJacC_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
  int OpenIPSL_Examples_Machines_PSSE_GENROU_initialAnalyticJacobianC(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
#if defined(__cplusplus)
}
#endif
#if defined(__cplusplus)
extern "C" {
#endif
  #define OpenIPSL_Examples_Machines_PSSE_GENROU_INDEX_JAC_B 4
  int OpenIPSL_Examples_Machines_PSSE_GENROU_functionJacB_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
  int OpenIPSL_Examples_Machines_PSSE_GENROU_initialAnalyticJacobianB(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
#if defined(__cplusplus)
}
#endif
#if defined(__cplusplus)
extern "C" {
#endif
  #define OpenIPSL_Examples_Machines_PSSE_GENROU_INDEX_JAC_A 5
  int OpenIPSL_Examples_Machines_PSSE_GENROU_functionJacA_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
  int OpenIPSL_Examples_Machines_PSSE_GENROU_initialAnalyticJacobianA(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
#if defined(__cplusplus)
}
#endif


