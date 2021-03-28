#include "memops/general/ApiLong.h"

int ApiLong_IsInstance(ApiObject object)
{
  return PyLong_Check(object);
}

ApiLong ApiLong_New(long value)
{
  if (!Py_IsInitialized())
    Py_Initialize();

  return PyLong_FromLong(value);
}

long ApiLong_Get(ApiLong self)
{
  return PyLong_AsLong(self);
}
