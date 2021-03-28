#ifndef __incl__ApiString_h__
#define __incl__ApiString_h__

#include "Python.h"

#include "ApiObject.h"

typedef PyObject *ApiString;

/* In ApiString_New, function makes own copy of value */
/* In ApiString_Get, function returns pointer to stored value */

extern int ApiString_IsInstance(ApiObject object);
extern ApiString ApiString_New(char * value);
extern char * ApiString_Get(ApiString self);

#endif /* __incl__ApiString_h__ */
