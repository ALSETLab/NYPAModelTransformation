/* External objects file */
#include "OpenIPSL.Examples.Controls.PSSE.PSS.PSS2A_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_callExternalObjectDestructors(DATA *data, threadData_t *threadData)
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

