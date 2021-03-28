 
#include <stdio.h>
#include <string.h>

#include "ccp.h"
#include "memops/general/Util.h" /* newCcpnProject */

static void saveTheProject(char *name)
{
  Impl_MemopsRoot project = newCcpnProject(name);
  if (project == NULL)
  {
    printRaisedException();
  }
  else
  {
    Impl_MemopsRoot_SaveModified(project);
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
  saveTheProject(name);
  
  return 1;
}
