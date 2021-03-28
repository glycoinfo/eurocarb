#include "memops/general/ApiDouble.h"

int ApiDouble_IsInstance(ApiObject object)
{
  return PyFloat_Check(object);
}

ApiDouble ApiDouble_New(double value)
{
  if (!Py_IsInitialized())
    Py_Initialize();

  return PyFloat_FromDouble(value);
}

double ApiDouble_Get(ApiDouble self)
{
  return PyFloat_AsDouble(self);
}
