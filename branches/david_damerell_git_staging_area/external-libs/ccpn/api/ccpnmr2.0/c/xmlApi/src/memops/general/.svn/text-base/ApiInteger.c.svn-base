#include "memops/general/ApiInteger.h"

int ApiInteger_IsInstance(ApiObject object)
{
  return PyInt_Check(object);
}

ApiInteger ApiInteger_New(int value)
{
  if (!Py_IsInitialized())
    Py_Initialize();

  return PyInt_FromLong((long) value);
}

int ApiInteger_Get(ApiInteger self)
{
  return (int) PyInt_AsLong(self);
}
