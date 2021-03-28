#include "memops/general/ApiObject.h"

void ApiObject_Free(ApiObject object)
{
  Py_XDECREF(object);
}

int ApiObject_IsInstance(ApiObject object, char *className, char *moduleName)
{
  char *objClassName, *objModuleName;
  PyObject *module;

  if (!object)
    return 0;

  objClassName = object->ob_type->tp_name;
  if (strcmp(className, objClassName))
    return 0;

  module = PyDict_GetItemString(object->ob_type->tp_dict, "__module__");

  if (module)
  {
     objModuleName = PyString_AsString(module);
     if (strcmp(moduleName, objModuleName))
       return 0;
     else
       return 1;
  }
  else
  {
    if (moduleName && *moduleName)
      return 0;
    else
      return 1;
  }
}

int ApiObject_IsNone(ApiObject object)
{
  return object == Py_None;
}

ApiObject ApiObject_None()
{
  Py_INCREF(Py_None);

  return Py_None;
}

int ApiObject_GetRefCount(ApiObject object)
{
  return object->ob_refcnt;
}

