/* Jacobians */
static const REAL_ATTRIBUTE dummyREAL_ATTRIBUTE = omc_dummyRealAttribute;
/* Jacobian Variables */
#if defined(__cplusplus)
extern "C" {
#endif
  #define OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_INDEX_JAC_NLSJac51 0
  int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_functionJacNLSJac51_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
  int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_initialAnalyticJacobianNLSJac51(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
#if defined(__cplusplus)
}
#endif
#if defined(__cplusplus)
extern "C" {
#endif
  #define OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_INDEX_JAC_D 1
  int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_functionJacD_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
  int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_initialAnalyticJacobianD(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
#if defined(__cplusplus)
}
#endif
#if defined(__cplusplus)
extern "C" {
#endif
  #define OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_INDEX_JAC_C 2
  int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_functionJacC_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
  int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_initialAnalyticJacobianC(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
#if defined(__cplusplus)
}
#endif
#if defined(__cplusplus)
extern "C" {
#endif
  #define OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_INDEX_JAC_B 3
  int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_functionJacB_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
  int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_initialAnalyticJacobianB(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
#if defined(__cplusplus)
}
#endif
#if defined(__cplusplus)
extern "C" {
#endif
  #define OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_INDEX_JAC_A 4
  int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_functionJacA_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
  int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_initialAnalyticJacobianA(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
#if defined(__cplusplus)
}
#endif


