#if defined(__cplusplus)
  extern "C" {
#endif
  int OpenIPSL_Examples_Machines_PSSE_GENROE_mayer(DATA* data, modelica_real** res, short*);
  int OpenIPSL_Examples_Machines_PSSE_GENROE_lagrange(DATA* data, modelica_real** res, short *, short *);
  int OpenIPSL_Examples_Machines_PSSE_GENROE_pickUpBoundsForInputsInOptimization(DATA* data, modelica_real* min, modelica_real* max, modelica_real*nominal, modelica_boolean *useNominal, char ** name, modelica_real * start, modelica_real * startTimeOpt);
  int OpenIPSL_Examples_Machines_PSSE_GENROE_setInputData(DATA *data, const modelica_boolean file);
  int OpenIPSL_Examples_Machines_PSSE_GENROE_getTimeGrid(DATA *data, modelica_integer * nsi, modelica_real**t);
#if defined(__cplusplus)
}
#endif