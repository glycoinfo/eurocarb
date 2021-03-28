 
#include <stdio.h>
#include <string.h>

#include "ccp.h"
#include "memops/universal/Io.h"  /* basename */
#include "memops/general/Io.h" /* loadProject */

static void listExperiments(Nmr_NmrProject nmrProject)
{
  ApiSet experiments = Nmr_NmrProject_GetExperiments(nmrProject);

  if (experiments == NULL)
  {
    printf("experiments = NULL, exception occurred\n");
    printRaisedException();
  }
  else
  {
    int i;
    ApiSetIterator iter = ApiSet_Iterator(experiments);
    PyObject *obj = ApiSetIterator_Next(iter);
    for (i = 0; obj; i++)
    {
      Nmr_Experiment expt = (Nmr_Experiment) obj;
      ApiString name = Nmr_Experiment_GetName(expt);
      printf("expt %d name = %s\n", i, ApiString_Get(name));
      ApiObject_Free(obj);
      ApiObject_Free(name);
      ApiObject_Free(expt);
      obj = ApiSetIterator_Next(iter);
    }
    
    ApiObject_Free(experiments);
  }
}

static void findNmrProject(Impl_MemopsRoot project)
{
  Nmr_NmrProject nmrProject = Impl_MemopsRoot_FindFirstNmrProject_keyval0(project);

  if (nmrProject == NULL)
  {
    printf("nmrProject = NULL, exception occurred\n");
    printRaisedException();
  }
  else if (ApiObject_IsNone(nmrProject))
  {
    printf("nmrProject is None\n");
    ApiObject_Free(nmrProject);
  }
  else
  {
    listExperiments(nmrProject);

    ApiObject_Free(nmrProject);
  }
}

static void listTheExperiments(char *repositoryPath)
{
  char *projectName = NULL;
  Impl_MemopsRoot project = loadProject(repositoryPath, projectName);
  if (project == NULL)
  {
    printf("project = NULL, exception occurred\n");
    printRaisedException();
  }
  else if (ApiObject_IsNone(project))
  {
    printf("project is None\n");
    ApiObject_Free(project);
  }
  else
  {
    findNmrProject(project);

    ApiObject_Free(project);
  }
  free(projectName);
}

int main(int argc, char **argv)
{
  char *name;

  if (argc != 2)
  {
    printf("Need to specify argument: name\n");
    exit(1);
  }

  name = argv[1];
  listTheExperiments(name);
  
  return 1;
}
