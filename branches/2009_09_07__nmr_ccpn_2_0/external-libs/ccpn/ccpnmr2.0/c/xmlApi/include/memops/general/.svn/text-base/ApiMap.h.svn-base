#ifndef __incl__ApiMap_h__
#define __incl__ApiMap_h__

#include "Python.h"

#include "ApiObject.h"

typedef PyObject *ApiMap;

extern int ApiMap_IsInstance(ApiObject object);
extern ApiMap ApiMap_New();

extern ApiObject ApiMap_GetItem(ApiMap self, char *key);
extern int ApiMap_GetBoolean(ApiMap self, char *key);
extern int ApiMap_GetInt(ApiMap self, char *key);
extern long ApiMap_GetLong(ApiMap self, char *key);
extern float ApiMap_GetFloat(ApiMap self, char *key);
extern double ApiMap_GetDouble(ApiMap self, char *key);
/* caller does not own memory and it might get freed on you */
extern char *ApiMap_GetString(ApiMap self, char *key);

extern ApiObject ApiMap_ObjGetItem(ApiMap self, ApiObject key);
extern int ApiMap_ObjGetBoolean(ApiMap self, ApiObject key);
extern int ApiMap_ObjGetInt(ApiMap self, ApiObject key);
extern long ApiMap_ObjGetLong(ApiMap self, ApiObject key);
extern float ApiMap_ObjGetFloat(ApiMap self, ApiObject key);
extern double ApiMap_ObjGetDouble(ApiMap self, ApiObject key);
/* caller does not own memory and it might get freed on you */
extern char *ApiMap_ObjGetString(ApiMap self, ApiObject key);

extern int ApiMap_SetItem(ApiMap self, char *key, ApiObject value);
extern int ApiMap_SetTrue(ApiMap self, char *key);
extern int ApiMap_SetFalse(ApiMap self, char *key);
extern int ApiMap_SetBoolean(ApiMap self, char *key, int value);
extern int ApiMap_SetInt(ApiMap self, char *key, int value);
extern int ApiMap_SetLong(ApiMap self, char *key, long value);
extern int ApiMap_SetFloat(ApiMap self, char *key, float value);
extern int ApiMap_SetDouble(ApiMap self, char *key, double value);
extern int ApiMap_SetString(ApiMap self, char *key,  char *value);

extern int ApiMap_ObjSetItem(ApiMap self, ApiObject key, ApiObject value);
extern int ApiMap_ObjSetTrue(ApiMap self, ApiObject key);
extern int ApiMap_ObjSetFalse(ApiMap self, ApiObject key);
extern int ApiMap_ObjSetBoolean(ApiMap self, ApiObject key, int value);
extern int ApiMap_ObjSetInt(ApiMap self, ApiObject key, int value);
extern int ApiMap_ObjSetLong(ApiMap self, ApiObject key, long value);
extern int ApiMap_ObjSetFloat(ApiMap self, ApiObject key, float value);
extern int ApiMap_ObjSetDouble(ApiMap self, ApiObject key, double value);
extern int ApiMap_ObjSetString(ApiMap self, ApiObject key,  char *value);

#endif /* __incl__ApiMap_h__ */
