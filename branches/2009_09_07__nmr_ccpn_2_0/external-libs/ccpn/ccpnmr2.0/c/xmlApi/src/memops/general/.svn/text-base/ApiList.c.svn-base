#include "memops/general/ApiList.h"

/* implementation in terms of Python lists/tuples */

int ApiList_IsInstance(ApiObject object)
{
  return PyList_Check(object) || PyTuple_Check(object);
}

ApiList ApiList_New()
{
  if (!Py_IsInitialized())
    Py_Initialize();

  return PyList_New(0);
}

int ApiList_Len(ApiList self)
{
  if (PyList_Check(self))
  {
    return PyList_Size(self);
  }
  else if (PyTuple_Check(self))
  {
    return PyTuple_Size(self);
  }
  else
  {
    raiseApiException("self not a list or tuple");
    return -1;
  }
}

ApiObject ApiList_Get(ApiList self, int ind)
{
  ApiObject object;

  if (PyList_Check(self))
    object = PyList_GetItem(self, ind);
  else if (PyTuple_Check(self))
    object = PyTuple_GetItem(self, ind);
  else
    object = NULL;

  /* Python does not increment reference for these calls */
  /* Use XINCREF instead of INCREF because that handles NULL */
  Py_XINCREF(object);

  return object;
}

ApiObject ApiList_Append(ApiList self, ApiObject value)
{
  int result;

  if (PyList_Check(self))
  {
    result = PyList_Append(self, value);
    if (result == -1)
      raiseApiException("problem appending value to list");
  }
  else
  {
    raiseApiException("self not a list");
    result = -1;
  }

  if (result == -1)
    return NULL;
  else
    return ApiObject_None();
}

ApiObject ApiList_RemoveIndex(ApiList self, int ind)
{
  int result;

  if (PyList_Check(self))
  {
    if ((ind < 0) || (ind >= PyList_Size(self)))
    {
      raiseApiException("index out of range");
      result = -1;
    }
    else
    {
      result = PySequence_DelItem(self, ind);
    }
  }
  else
  {
    raiseApiException("self not a list");
    result = -1;
  }

  if (result == -1)
    return NULL;
  else
    return ApiObject_None();
}

ApiObject ApiList_RemoveObject(ApiList self, ApiObject value)
{
  int ind, result;

  if (PyList_Check(self))
  {
    ind = PySequence_Index(self, value);
    if (ind < 0)
    {
      raiseApiException("value not in list");
      result = -1;
    }
    else
    {
      result = PySequence_DelItem(self, ind);
    }
  }
  else
  {
    raiseApiException("self not a list");
    result = -1;
  }

  if (result == -1)
    return NULL;
  else
    return ApiObject_None();
}

