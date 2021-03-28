#ifndef __incl__ApiDouble_h__
#define __incl__ApiDouble_h__

#include "Python.h"

#include "ApiObject.h"

typedef PyObject *ApiDouble;

extern int ApiDouble_IsInstance(ApiObject object);
extern ApiDouble ApiDouble_New(double value);
extern double ApiDouble_Get(ApiDouble self);

#endif /* __incl__ApiDouble_h__ */
