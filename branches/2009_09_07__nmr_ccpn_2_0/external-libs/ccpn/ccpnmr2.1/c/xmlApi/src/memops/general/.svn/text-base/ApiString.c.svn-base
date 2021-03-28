#include "memops/general/ApiString.h"

int ApiString_IsInstance(ApiObject object)
{
  return PyString_Check(object);
}

ApiString ApiString_New(char * value)
{
  if (!Py_IsInitialized())
    Py_Initialize();

  return PyString_FromString(value);
}

char * ApiString_Get(ApiString self)
{
  return PyString_AsString(self);
}
