#ifndef __incl__ApiFloat_h__
#define __incl__ApiFloat_h__

#include "Python.h"

#include "ApiObject.h"

typedef PyObject *ApiFloat;

extern int ApiFloat_IsInstance(ApiObject object);
extern ApiFloat ApiFloat_New(float value);
extern float ApiFloat_Get(ApiFloat self);

#endif /* __incl__ApiFloat_h__ */
