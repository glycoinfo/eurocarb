#include "memops/general/ApiFloat.h"

int ApiFloat_IsInstance(ApiObject object)
{
  return PyFloat_Check(object);
}

ApiFloat ApiFloat_New(float value)
{
  if (!Py_IsInitialized())
    Py_Initialize();

  return PyFloat_FromDouble((double) value);
}

float ApiFloat_Get(ApiFloat self)
{
  return (float) PyFloat_AsDouble(self);
}
