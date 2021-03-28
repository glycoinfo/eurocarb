 
#include <stdio.h>
#include <string.h>

#include "ccp.h"
#include "memops/general/Util.h" /* newCcpnProject */

static void createProject(char *name)
{
  Impl_MemopsRoot project = newCcpnProject(name);
  if (project == NULL)
  {
    printRaisedException();
  }
  else
  {
    ApiString api_name = Impl_MemopsRoot_GetName(project);
    printf("name = %s\n", ApiString_Get(api_name));
    ApiObject_Free(api_name);
    ApiObject_Free(project);
  }
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
  createProject(name);
  
  return 0;
}
