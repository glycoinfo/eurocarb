#include "memops/general/ApiMap.h"

#include "memops/general/all.h"

/* implementation in terms of Python dict */

int ApiMap_IsInstance(ApiObject object)
{
  return PyDict_Check(object);
}

ApiMap ApiMap_New()
{
  if (!Py_IsInitialized())
    Py_Initialize();

  return PyDict_New();
}

ApiObject ApiMap_GetItem(ApiMap self, char *key)
{
  ApiObject value = PyDict_GetItemString(self, key);
  Py_INCREF(value); /* otherwise Python does not */

  return value;
}

int ApiMap_GetBoolean(ApiMap self, char *key)
{
  int v;
  ApiObject value = ApiMap_GetItem(self, key);
  if (!ApiBoolean_IsInstance(value))
  {
    raiseApiException("value not boolean");
    printRaisedException();
    return 0;
  }

  v = ApiBoolean_Get(value);
  ApiObject_Free(value);

  return v;
}

int ApiMap_GetInt(ApiMap self, char *key)
{
  int v;
  ApiObject value = ApiMap_GetItem(self, key);
  if (!ApiInteger_IsInstance(value))
  {
    raiseApiException("value not integer");
    printRaisedException();
    return 0;
  }

  v = ApiInteger_Get(value);
  ApiObject_Free(value);

  return v;
}

long ApiMap_GetLong(ApiMap self, char *key)
{
  long v;
  ApiObject value = ApiMap_GetItem(self, key);
  if (!ApiLong_IsInstance(value))
  {
    raiseApiException("value not long");
    return 0;
  }

  v = ApiLong_Get(value);
  ApiObject_Free(value);

  return v;
}

float ApiMap_GetFloat(ApiMap self, char *key)
{
  float v;
  ApiObject value = ApiMap_GetItem(self, key);

  if (!ApiFloat_IsInstance(value))
  {
    raiseApiException("value not float");
    printRaisedException();
    return 0;
  }

  v = ApiFloat_Get(value);
  ApiObject_Free(value);

  return v;
}

double ApiMap_GetDouble(ApiMap self, char *key)
{
  double v;
  ApiObject value = ApiMap_GetItem(self, key);
  if (!ApiDouble_IsInstance(value))
  {
    raiseApiException("value not double");
    printRaisedException();
    return 0;
  }

  v = ApiDouble_Get(value);
  ApiObject_Free(value);

  return v;
}

char *ApiMap_GetString(ApiMap self, char *key)
{
  char *v;
  ApiObject value = ApiMap_GetItem(self, key);
  if (!ApiString_IsInstance(value))
  {
    raiseApiException("value not string");
    printRaisedException();
    return NULL;
  }

  v = ApiString_Get(value);
  ApiObject_Free(value);

  return v;
}

ApiObject ApiMap_ObjGetItem(ApiMap self, ApiObject key)
{
  ApiObject value = PyDict_GetItem(self, key);
  Py_INCREF(value); /* otherwise Python does not */

  return value;
}

int ApiMap_ObjGetBoolean(ApiMap self, ApiObject key)
{
  int v;
  ApiObject value = ApiMap_ObjGetItem(self, key);
  if (!ApiBoolean_IsInstance(value))
  {
    raiseApiException("value not boolean");
    printRaisedException();
    return 0;
  }

  v = ApiBoolean_Get(value);
  ApiObject_Free(value);

  return v;
}

int ApiMap_ObjGetInt(ApiMap self, ApiObject key)
{
  int v;
  ApiObject value = ApiMap_ObjGetItem(self, key);
  if (!ApiInteger_IsInstance(value))
  {
    raiseApiException("value not integer");
    printRaisedException();
    return 0;
  }

  v = ApiInteger_Get(value);
  ApiObject_Free(value);

  return v;
}

long ApiMap_ObjGetLong(ApiMap self, ApiObject key)
{
  long v;
  ApiObject value = ApiMap_ObjGetItem(self, key);
  if (!ApiLong_IsInstance(value))
  {
    raiseApiException("value not long");
    return 0;
  }

  v = ApiLong_Get(value);
  ApiObject_Free(value);

  return v;
}

float ApiMap_ObjGetFloat(ApiMap self, ApiObject key)
{
  float v;
  ApiObject value = ApiMap_ObjGetItem(self, key);

  if (!ApiFloat_IsInstance(value))
  {
    raiseApiException("value not float");
    printRaisedException();
    return 0;
  }

  v = ApiFloat_Get(value);
  ApiObject_Free(value);

  return v;
}

double ApiMap_ObjGetDouble(ApiMap self, ApiObject key)
{
  double v;
  ApiObject value = ApiMap_ObjGetItem(self, key);
  if (!ApiDouble_IsInstance(value))
  {
    raiseApiException("value not double");
    printRaisedException();
    return 0;
  }

  v = ApiDouble_Get(value);
  ApiObject_Free(value);

  return v;
}

char *ApiMap_ObjGetString(ApiMap self, ApiObject key)
{
  char *v;
  ApiObject value = ApiMap_ObjGetItem(self, key);
  if (!ApiString_IsInstance(value))
  {
    raiseApiException("value not string");
    printRaisedException();
    return NULL;
  }

  v = ApiString_Get(value);
  ApiObject_Free(value);

  return v;
}

int ApiMap_SetItem(ApiMap self, char *key, ApiObject value)
{
  return PyDict_SetItemString(self, key, value);
}

int ApiMap_SetTrue(ApiMap self, char *key)
{
  return ApiMap_SetItem(self, key, ApiBoolean_True());
}

int ApiMap_SetFalse(ApiMap self, char *key)
{
  return ApiMap_SetItem(self, key, ApiBoolean_False());
}

#define API_MAP_SET_BODY() { \
  if (v) { \
    int result = ApiMap_SetItem(self, key, v); \
    ApiObject_Free(v); \
    return result; \
  } else { \
    return 0; \
  } }

int ApiMap_SetBoolean(ApiMap self, char *key, int value)
{
  ApiBoolean v = ApiBoolean_New(value);
  API_MAP_SET_BODY();
}

int ApiMap_SetInt(ApiMap self, char *key, int value)
{
  ApiInteger v = ApiInteger_New(value);
  API_MAP_SET_BODY();
}

int ApiMap_SetLong(ApiMap self, char *key, long value)
{
  ApiLong v = ApiLong_New(value);
  API_MAP_SET_BODY();
}

int ApiMap_SetFloat(ApiMap self, char *key, float value)
{
  ApiFloat v = ApiFloat_New(value);
  API_MAP_SET_BODY();
}

int ApiMap_SetDouble(ApiMap self, char *key, double value)
{
  ApiDouble v = ApiDouble_New(value);
  API_MAP_SET_BODY();
}

int ApiMap_SetString(ApiMap self, char *key, char * value)
{
  ApiString v = ApiString_New(value);
  API_MAP_SET_BODY();
}

int ApiMap_ObjSetItem(ApiMap self, ApiObject key, ApiObject value)
{
  return PyDict_SetItem(self, key, value);
}

int ApiMap_ObjSetTrue(ApiMap self, ApiObject key)
{
  return ApiMap_ObjSetItem(self, key, ApiBoolean_True());
}

int ApiMap_ObjSetFalse(ApiMap self, ApiObject key)
{
  return ApiMap_ObjSetItem(self, key, ApiBoolean_False());
}

#define API_MAP_OBJ_SET_BODY() { \
  if (v) { \
    int result = ApiMap_ObjSetItem(self, key, v); \
    ApiObject_Free(v); \
    return result; \
  } else { \
    return 0; \
  } }

int ApiMap_ObjSetBoolean(ApiMap self, ApiObject key, int value)
{
  ApiBoolean v = ApiBoolean_New(value);
  API_MAP_OBJ_SET_BODY();
}

int ApiMap_ObjSetInt(ApiMap self, ApiObject key, int value)
{
  ApiInteger v = ApiInteger_New(value);
  API_MAP_OBJ_SET_BODY();
}

int ApiMap_ObjSetLong(ApiMap self, ApiObject key, long value)
{
  ApiLong v = ApiLong_New(value);
  API_MAP_OBJ_SET_BODY();
}

int ApiMap_ObjSetFloat(ApiMap self, ApiObject key, float value)
{
  ApiFloat v = ApiFloat_New(value);
  API_MAP_OBJ_SET_BODY();
}

int ApiMap_ObjSetDouble(ApiMap self, ApiObject key, double value)
{
  ApiDouble v = ApiDouble_New(value);
  API_MAP_OBJ_SET_BODY();
}

int ApiMap_ObjSetString(ApiMap self, ApiObject key, char * value)
{
  ApiString v = ApiString_New(value);
  API_MAP_OBJ_SET_BODY();
}

