#include "memops/general/Io.h"

#include <stdio.h>

#include "memops/universal/Io.h"
#include "memops/universal/Util.h"

// TBD: remove this restriction
#define  MAXLEN_PROJECT_NAME  200

#define  MODELLING_PACKAGE_NAME  "memops"
#define  IMPLEMENTATION_PACKAGE_NAME  "Implementation"

Impl_MemopsRoot loadProject(char *repositoryPath, char *projectName)
{
  PyObject *args, *fp, *module, *moduleDict, *loadFunc, *project;
  ApiString repPath, projName;

  if (!Py_IsInitialized())
    Py_Initialize();

  module = PyImport_ImportModule("memops.general.Io");
  if (!module)
    return raiseApiException("loadProject: cannot find module memops.general.Io");

  moduleDict = PyModule_GetDict(module);
  if (!moduleDict)
    return raiseApiException("loadProject: cannot find dict for memops.general.Io");

  loadFunc = PyDict_GetItemString(moduleDict, "loadProject");
  if (!loadFunc)
    return raiseApiException("loadProject: cannot find memops.general.Io.loadProject");

  repPath = ApiString_New(repositoryPath);
  if (projectName == NULL)
    projName = ApiObject_None();
  else
    projName = ApiString_New(projectName);

  args = PyTuple_Pack(2, repPath, projName);
  project = PyObject_Call(loadFunc, args, NULL);

  Py_DECREF(repPath);
  Py_DECREF(projName);
  Py_DECREF(args);

  return project;
}
