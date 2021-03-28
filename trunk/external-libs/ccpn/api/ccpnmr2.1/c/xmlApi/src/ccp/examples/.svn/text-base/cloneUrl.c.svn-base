 
#include <stdio.h>
#include <string.h>

#include "ccp.h"
#include "memops/general/Util.h" /* newCcpnProject */

static Impl_MemopsRoot createProject(char *name)
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
  }

  return project;
}

static void cloneUrl(Impl_MemopsRoot project)
{
  Impl_Repository repository = Impl_MemopsRoot_FindFirstRepository_keyval0(project);
  if (repository == NULL)
  {
    printRaisedException();
  }
  else
  {
    Impl_Url url = Impl_Repository_GetUrl(repository);
    printf("url = %x\n", url);

    ApiString api_path = Impl_Url_GetPath(url);
    printf("url path = %s\n", ApiString_Get(api_path));
    ApiObject_Free(api_path);

    ApiMap attrDict = (ApiMap) ApiObject_None();
    Impl_Url url2 = Impl_Url_Clone(url, attrDict);
    ApiObject_Free(attrDict);
    api_path = Impl_Url_GetPath(url2);
    printf("url2 = %x\n", url2);
    printf("url2 path = %s\n", ApiString_Get(api_path));
    ApiObject_Free(api_path);
    ApiObject_Free(url2);

    ApiObject_Free(url);
    ApiObject_Free(repository);
  }
}

int main(int argc, char **argv)
{
  char *name;
  Impl_MemopsRoot project;

  if (argc != 2)
  {
    printf("Need to specify argument: name\n");
    exit(1);
  }

  name = argv[1];
  project = createProject(name);
  cloneUrl(project);
  ApiObject_Free(project);
  
  return 0;
}
