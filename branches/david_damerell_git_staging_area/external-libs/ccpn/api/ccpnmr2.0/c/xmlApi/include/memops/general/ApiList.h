#ifndef __incl__ApiList_h__
#define __incl__ApiList_h__

#include "Python.h"

#include "ApiObject.h"

typedef PyObject *ApiList;

extern int ApiList_IsInstance(ApiObject object);
extern ApiList ApiList_New();

// returns -1 if self not a set
extern int ApiList_Len(ApiList self);

// return NULL if exception (None if ok)
extern ApiObject ApiList_Get(ApiList self, int ind);
extern ApiObject ApiList_Append(ApiList self, ApiObject value);
extern ApiObject ApiList_RemoveIndex(ApiList self, int ind);
extern ApiObject ApiList_RemoveObject(ApiList self, ApiObject value);

#endif /* __incl__ApiList_h__ */
