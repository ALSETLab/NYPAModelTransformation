/* External objects file */
#include "OpenIPSL.Examples.Machines.PSSE.GENSAE_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

void OpenIPSL_Examples_Machines_PSSE_GENSAE_callExternalObjectDestructors(DATA *data, threadData_t *threadData)
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

