#include "memops/general/ApiException.h"

void *raiseApiException(char *errorMsg)
{
  PyObject *module = PyImport_ImportModule("memops.general.Implementation"), *moduleDict, *clazz, *s, *args;
  if (!module)
  {
    printf("raiseApiException: could not find module memops.general.Implementation, errorMsg = %s\n", errorMsg);
    return NULL;
  }

  moduleDict = PyModule_GetDict(module);
  if (!moduleDict)
  {
    printf("cannot find dict for memops.api.Implementation, errorMsg = %s\n", errorMsg);
    return NULL;
  }

  clazz = PyDict_GetItemString(moduleDict, "ApiError");
  if (!clazz)
  {
    printf("cannot find memops.general.Implementation.ApiError, errorMsg = %s\n", errorMsg);
    return NULL;
  }

  PyErr_SetString(clazz, errorMsg);

  return NULL;
}

void printRaisedException()
{
  PyErr_Print();
}

ApiString getRaisedExceptionString()
{
#define MAX_ERR_LEN 1000
  char errorMsg[MAX_ERR_LEN+1];
  int n = MAX_ERR_LEN;
  PyObject *exception, *value, *tb, *moduleName, *className, *s1, *s2;
  PyClassObject* exc;
  char *moduleStr = NULL, *classStr = NULL, *valueStr = NULL;

  *errorMsg = 0;
  if (PyErr_Occurred())
  {
    PyErr_Fetch(&exception, &value, &tb);
    if (PyClass_Check(exception))
    {
      exc = (PyClassObject*)exception;
      moduleName = PyDict_GetItemString(exc->cl_dict, "__module__");
      if (moduleName != NULL)
      {
        moduleStr = PyString_AsString(moduleName);
        strncat(errorMsg, moduleStr, n);
        n -= strlen(moduleStr);
        n = n > 0 ? n : 0;

        className = exc->cl_name;
        if (className != NULL)
        {
          strncat(errorMsg, ".", n);
          n--;
          n = n > 0 ? n : 0;
          classStr = PyString_AsString(className);
          strncat(errorMsg, classStr, n);
          n -= strlen(classStr);
          n = n > 0 ? n : 0;
        }
      }
    }

    if (value != Py_None)
    {
      if (*errorMsg)
      {
        strncat(errorMsg, ": ", n);
        n -= 2;
        n = n > 0 ? n : 0;
      }

      s1 = PyObject_Str(value);
      if (s1)
      {
        s2 = PyObject_Repr(s1);
        if (s2)
        {
          valueStr = PyString_AsString(s2);
          strncat(errorMsg, valueStr, n);
          Py_DECREF(s2);
        }

        Py_DECREF(s1);
      }
    }
  }

  return ApiString_New(errorMsg);
}
