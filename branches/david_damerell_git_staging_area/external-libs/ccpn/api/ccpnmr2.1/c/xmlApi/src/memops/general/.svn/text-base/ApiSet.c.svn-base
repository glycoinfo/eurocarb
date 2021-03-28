#include "memops/general/ApiSet.h"

/* implementation in terms of Python sets */
/* this is very dependent on Python internals, not sure how to do it otherwise */

#define PyModifiableSet_Check(ob) \
        ((ob)->ob_type == &PySet_Type \
          || PyType_IsSubtype((ob)->ob_type, &PySet_Type))

#define ADD_METHOD_INDEX  0
#define REMOVE_METHOD_INDEX  13

int ApiSet_IsInstance(ApiObject object)
{
  return PyAnySet_Check(object);
}

ApiSet ApiSet_New()
{
  PyTypeObject *setType = &PySet_Type;
  PyObject *args = NULL, *kwds = NULL;

  if (!Py_IsInitialized())
    Py_Initialize();

  return setType->tp_new(setType, args, kwds);
}

int ApiSet_Len(ApiSet self)
{
  PyTypeObject *setType = &PySet_Type;

  if (ApiSet_IsInstance(self))
  {
    return setType->tp_as_sequence->sq_length(self);
  }
  else
  {
    raiseApiException("self not a set");
    return -1;
  }
}

int ApiSet_Contains(ApiSet self, ApiObject value)
{
  PyTypeObject *setType = &PySet_Type;

  if (ApiSet_IsInstance(self))
  {
    return setType->tp_as_sequence->sq_contains(self, value);
  }
  else
  {
    raiseApiException("self not a set");
    return -1;
  }
}

ApiObject ApiSet_Add(ApiSet self, ApiObject value)
{
  PyTypeObject *setType = &PySet_Type;
  PyMethodDef method = setType->tp_methods[ADD_METHOD_INDEX];
  PyCFunction set_add = method.ml_meth;
  PyObject *result;

  if (PyModifiableSet_Check(self))
  {
    result = set_add(self, value);
    if (result == NULL)
      raiseApiException("problem adding value to set");
  }
  else
  {
    raiseApiException("self not a modifiable set");
    result = NULL;
  }

  return result;
}

PyObject *ApiSet_Remove(ApiSet self, ApiObject value)
{
  PyTypeObject *setType = &PySet_Type;
  PyMethodDef method = setType->tp_methods[REMOVE_METHOD_INDEX];
  PyCFunction set_remove = method.ml_meth;
  PyObject *result;

  if (PyModifiableSet_Check(self))
  {
    PyObject *result = set_remove(self, value);
    if (result == NULL)
      raiseApiException("value not in set");

    return result;
  }
  else
  {
    raiseApiException("self not a modifiable set");
    return NULL;
  }
}

ApiSetIterator ApiSet_Iterator(ApiSet self)
{
  PyTypeObject *setType = &PySet_Type;

  if (ApiSet_IsInstance(self))
  {
    return setType->tp_iter(self);
  }
  else
  {
    raiseApiException("self not a set");
    return NULL;
  }
}

PyObject *ApiSetIterator_Next(ApiSetIterator self)
{
  /* no way to check type because PySetIter_type is internal to setobject.h */
  return self->ob_type->tp_iternext(self);
}
