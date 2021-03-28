#ifndef __incl__ApiObject_h__
#define __incl__ApiObject_h__

#include "Python.h"

typedef PyObject *ApiObject;

#define  API_OBJECT_FREE(object) \
	 {   ApiObject_Free(object);  object = NULL;   }

extern void ApiObject_Free(ApiObject object);
extern int ApiObject_IsInstance(ApiObject object, char *className, char *moduleName);

// is object None?
extern int ApiObject_IsNone(ApiObject object);

// returns None Object
extern ApiObject ApiObject_None();

// return reference count for object
extern int ApiObject_GetRefCount(ApiObject object);

#endif /* __incl__ApiObject_h__ */
