#include "memops/general/Util.h"

#include "ccp.h"

Impl_MemopsRoot newCcpnProject(char *projectName)
{

  ApiMap map = ApiMap_New();
  ApiMap_SetString(map, "name", projectName);
  
  Impl_MemopsRoot project = Impl_MemopsRoot_Init(map);
  
  ApiObject_Free(map);

  return project;
}

int getGlobalObjectCount()
{
  PyObject *module, *moduleDict, *args, *func, *result;
  int count;

  module = PyImport_ImportModule("gc");
  if (!module)
  {
    raiseApiException("getGlobalObjectCount: cannot find module gc");
    return -1;
  }

  moduleDict = PyModule_GetDict(module);
  if (!moduleDict)
  {
    raiseApiException("getGlobalObjectCount: cannot find dict for gc");
    return -1;
  }

  func = PyDict_GetItemString(moduleDict, "get_objects");
  if (!func)
  {
    raiseApiException("getGlobalObjectCount: cannot find gc.get_objects");
    return -1;
  }

  args = PyTuple_Pack(0);
  result = PyObject_Call(func, args, NULL);
  if (!result)
  {
    raiseApiException("getGlobalObjectCount: call to gc.get_objects failed");
    return -1;
  }

  count = PyList_Size(result);

  Py_DECREF(result);
  Py_DECREF(args);

  return count;
}

int garbageCollect()
{
  PyObject *module, *moduleDict, *args, *func, *result;
  int count;

  module = PyImport_ImportModule("gc");
  if (!module)
  {
    raiseApiException("garbageCollect: cannot find module gc");
    return -1;
  }

  moduleDict = PyModule_GetDict(module);
  if (!moduleDict)
  {
    raiseApiException("garbageCollect: cannot find dict for gc");
    return -1;
  }

  func = PyDict_GetItemString(moduleDict, "collect");
  if (!func)
  {
    raiseApiException("garbageCollect: cannot find gc.collect");
    return -1;
  }

  args = PyTuple_Pack(0);
  result = PyObject_Call(func, args, NULL);
  if (!result)
  {
    raiseApiException("garbageCollect: call to gc.collect failed");
    return -1;
  }

  count = PyInt_AsLong(result);

  Py_DECREF(result);
  Py_DECREF(args);

  return count;
}

static PyObject *getModuleFunction(char *moduleName, char *functionName, char *error_msg)
{
  PyObject *module, *moduleDict, *func;

  if (!Py_IsInitialized())
    Py_Initialize();

  module = PyImport_ImportModule(moduleName);
  if (!module)
  {
    sprintf(error_msg, "cannot find module %s", moduleName);
    return raiseApiException(error_msg);
  }

  moduleDict = PyModule_GetDict(module);
  if (!moduleDict)
  {
    sprintf(error_msg, "cannot find dict for module %s", moduleName);
    return raiseApiException(error_msg);
  }

  func = PyDict_GetItemString(moduleDict, functionName);
  if (!func)
  {
    sprintf(error_msg, "cannot find function %s in module %s", functionName, moduleName);
    return raiseApiException(error_msg);
  }

  return func;
}

static PyObject *packTuple(ApiObject args[])
{
  int i, n;
  PyObject *argsTuple;

  for (n = 0; args[n]; n++)
    ;

  argsTuple = PyTuple_New(n);
  for (i = 0; i < n; i++)
    {
      PyTuple_SET_ITEM(argsTuple, i, args[i]);
      Py_INCREF(args[i]);
    }

  return argsTuple;
}

static PyObject *packDict(char *keywords[], ApiObject values[])
{
  int i;
  ApiMap map = ApiMap_New();

  for (i = 0; keywords[i]; i++)
    ApiMap_SetItem(map, keywords[i], values[i]);

  return map;
}

ApiObject callModuleFunction(char *moduleName, char *functionName, ApiObject args[])
{
  char error_msg[200];
  PyObject *argsTuple, *func, *result;

  func = getModuleFunction(moduleName, functionName, error_msg);
  if (!func)
    return NULL;

  argsTuple = packTuple(args);

  result = PyObject_Call(func, argsTuple, NULL);

  Py_DECREF(argsTuple);

  return result;
}

ApiObject callModuleFunctionWithKeywords(char *moduleName, char *functionName,
			ApiObject args[], char *keywords[], ApiObject values[])
{
  char error_msg[200];
  PyObject *argsTuple, *kwDict, *func, *result;

  func = getModuleFunction(moduleName, functionName, error_msg);
  if (!func)
    return NULL;

  argsTuple = packTuple(args);
  kwDict = packDict(keywords, values);

  result = PyObject_Call(func, argsTuple, kwDict);

  Py_DECREF(argsTuple);
  Py_DECREF(kwDict);

  return result;
}
