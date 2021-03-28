#ifndef __incl__ApiSet_h__
#define __incl__ApiSet_h__

#include "Python.h"

#include "ApiBoolean.h"
#include "ApiObject.h"

typedef PyObject *ApiSet;

extern int ApiSet_IsInstance(ApiObject object);
extern ApiSet ApiSet_New();

// returns -1 if self not a set
extern int ApiSet_Len(ApiSet self);

// returns -1 if self not a set
extern int ApiSet_Contains(ApiSet self, ApiObject value);

// return NULL if exception (None if ok)
extern ApiObject ApiSet_Add(ApiSet self, ApiObject value);
extern ApiObject ApiSet_Remove(ApiSet self, ApiObject value);


typedef PyObject *ApiSetIterator;

extern ApiSetIterator ApiSet_Iterator(ApiSet self);
extern PyObject *ApiSetIterator_Next(ApiSetIterator self);

#endif /* __incl__ApiSet_h__ */
