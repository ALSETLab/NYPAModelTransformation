/* External objects file */
#include "OpenIPSL.Examples.Banks.PSSE.CSVGN1_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

void OpenIPSL_Examples_Banks_PSSE_CSVGN1_callExternalObjectDestructors(DATA *data, threadData_t *threadData)
{
  if(data->simulationInfo->extObjs)
  {
    free(data->simulationInfo->extObjs);
    data->simulationInfo->extObjs = 0;
  }
}
#if defined(__cplusplus)
}
#endif

