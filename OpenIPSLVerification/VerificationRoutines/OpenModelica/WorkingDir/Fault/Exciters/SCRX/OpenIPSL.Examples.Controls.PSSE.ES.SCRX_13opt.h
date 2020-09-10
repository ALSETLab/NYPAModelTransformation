#if defined(__cplusplus)
  extern "C" {
#endif
  int OpenIPSL_Examples_Controls_PSSE_ES_SCRX_mayer(DATA* data, modelica_real** res, short*);
  int OpenIPSL_Examples_Controls_PSSE_ES_SCRX_lagrange(DATA* data, modelica_real** res, short *, short *);
  int OpenIPSL_Examples_Controls_PSSE_ES_SCRX_pickUpBoundsForInputsInOptimization(DATA* data, modelica_real* min, modelica_real* max, modelica_real*nominal, modelica_boolean *useNominal, char ** name, modelica_real * start, modelica_real * startTimeOpt);
  int OpenIPSL_Examples_Controls_PSSE_ES_SCRX_setInputData(DATA *data, const modelica_boolean file);
  int OpenIPSL_Examples_Controls_PSSE_ES_SCRX_getTimeGrid(DATA *data, modelica_integer * nsi, modelica_real**t);
#if defined(__cplusplus)
}
#endif