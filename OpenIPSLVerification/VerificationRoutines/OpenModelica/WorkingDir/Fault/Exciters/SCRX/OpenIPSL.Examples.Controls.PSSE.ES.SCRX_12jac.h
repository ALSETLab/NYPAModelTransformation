/* Jacobians */
static const REAL_ATTRIBUTE dummyREAL_ATTRIBUTE = omc_dummyRealAttribute;
/* Jacobian Variables */
#if defined(__cplusplus)
extern "C" {
#endif
  #define OpenIPSL_Examples_Controls_PSSE_ES_SCRX_INDEX_JAC_NLSJac81 0
  int OpenIPSL_Examples_Controls_PSSE_ES_SCRX_functionJacNLSJac81_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
  int OpenIPSL_Examples_Controls_PSSE_ES_SCRX_initialAnalyticJacobianNLSJac81(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
#if defined(__cplusplus)
}
#endif
#if defined(__cplusplus)
extern "C" {
#endif
  #define OpenIPSL_Examples_Controls_PSSE_ES_SCRX_INDEX_JAC_D 1
  int OpenIPSL_Examples_Controls_PSSE_ES_SCRX_functionJacD_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
  int OpenIPSL_Examples_Controls_PSSE_ES_SCRX_initialAnalyticJacobianD(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
#if defined(__cplusplus)
}
#endif
#if defined(__cplusplus)
extern "C" {
#endif
  #define OpenIPSL_Examples_Controls_PSSE_ES_SCRX_INDEX_JAC_C 2
  int OpenIPSL_Examples_Controls_PSSE_ES_SCRX_functionJacC_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
  int OpenIPSL_Examples_Controls_PSSE_ES_SCRX_initialAnalyticJacobianC(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
#if defined(__cplusplus)
}
#endif
#if defined(__cplusplus)
extern "C" {
#endif
  #define OpenIPSL_Examples_Controls_PSSE_ES_SCRX_INDEX_JAC_B 3
  int OpenIPSL_Examples_Controls_PSSE_ES_SCRX_functionJacB_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
  int OpenIPSL_Examples_Controls_PSSE_ES_SCRX_initialAnalyticJacobianB(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
#if defined(__cplusplus)
}
#endif
#if defined(__cplusplus)
extern "C" {
#endif
  #define OpenIPSL_Examples_Controls_PSSE_ES_SCRX_INDEX_JAC_A 4
  int OpenIPSL_Examples_Controls_PSSE_ES_SCRX_functionJacA_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
  int OpenIPSL_Examples_Controls_PSSE_ES_SCRX_initialAnalyticJacobianA(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
#if defined(__cplusplus)
}
#endif


