#ifndef __incl__ApiBoolean_h__
#define __incl__ApiBoolean_h__

#include "Python.h"

#include "ApiObject.h"

typedef PyObject *ApiBoolean;

extern int ApiBoolean_IsInstance(ApiObject object);
extern ApiBoolean ApiBoolean_New(int value);
extern ApiBoolean ApiBoolean_True();
extern ApiBoolean ApiBoolean_False();
extern int ApiBoolean_Get(ApiBoolean self);

#endif /* __incl__ApiBoolean_h__ */
