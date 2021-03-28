 
#include <stdio.h>
#include <string.h>

#include "ccp.h"
#include "memops/universal/Io.h"  /* basename */
#include "memops/general/Io.h" /* loadProject */

static void loadTheProject(char *repositoryPath)
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
    ApiString api_name = Impl_MemopsRoot_GetName(project);
    printf("name = %s\n", ApiString_Get(api_name));
    ApiObject_Free(api_name);
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
  loadTheProject(name);
  
  return 1;
}
