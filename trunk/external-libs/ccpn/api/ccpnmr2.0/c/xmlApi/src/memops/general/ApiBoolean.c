#include "memops/general/ApiBoolean.h"

static ApiBoolean ApiBoolean_TRUE = NULL;
static ApiBoolean ApiBoolean_FALSE = NULL;

int ApiBoolean_IsInstance(ApiObject object)
{
  return PyBool_Check(object);
}

ApiBoolean ApiBoolean_New(int value)
{
  if (!Py_IsInitialized())
    Py_Initialize();

  return PyBool_FromLong((long) value);
}

ApiBoolean ApiBoolean_True()
{
  if (!ApiBoolean_TRUE)
    ApiBoolean_TRUE = ApiBoolean_New(1);

  return ApiBoolean_TRUE;
}

ApiBoolean ApiBoolean_False()
{
  if (!ApiBoolean_FALSE)
    ApiBoolean_FALSE = ApiBoolean_New(0);

  return ApiBoolean_FALSE;
}

int ApiBoolean_Get(ApiBoolean self)
{
  if (self == Py_True)
    return 1;
  else
    return 0;
}

