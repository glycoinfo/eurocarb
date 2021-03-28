
#include "ccp.h"

/*
  The information on a laboratory location used for storage.
*/

/* package ccp.api.lims.Location */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Loca_Location self
  @param  Impl_ApplicationData value
**/
void *Loca_Location_AddApplicationData(Loca_Location self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Location.Location: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Location.Location: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.lims.Location.Location.contents

List of sub location 
contained in another location. This is the contents of a Location.
  @param  Loca_Location self
  @param  Loca_Location value
**/
void *Loca_Location_AddContent(Loca_Location self, Loca_Location value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addContent");
  
  if (!method)
    return raiseApiException("ccp.lims.Location.Location: cannot find method 'addContent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Location.Location: method 'addContent' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.lims.Location.Location
  @param  Loca_Location self
  @param  ApiBoolean complete
**/
void *Loca_Location_CheckAllValid(Loca_Location self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Location.Location: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Location.Location: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.lims.Location.Location
  @param  Loca_Location self
  @param  ApiBoolean complete
**/
void *Loca_Location_CheckValid(Loca_Location self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Location.Location: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Location.Location: method 'checkValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Loca_Location self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Loca_Location_FindAllApplicationData(Loca_Location self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Location.Location: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Location.Location: method 'findAllApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Loca_Location self
  @returns  all value that satisfy the conditions 
**/
ApiList Loca_Location_FindAllApplicationData_keyval0(Loca_Location self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Loca_Location_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Loca_Location self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Loca_Location_FindAllApplicationData_keyval1(Loca_Location self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Loca_Location_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Loca_Location self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Loca_Location_FindAllApplicationData_keyval2(Loca_Location self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Loca_Location_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Loca_Location self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Loca_Location_FindAllApplicationData_keyval3(Loca_Location self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Loca_Location_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Loca_Location self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @param  char * key4
  @param  ApiObject value4
  @returns  all value that satisfy the conditions 
**/
ApiList Loca_Location_FindAllApplicationData_keyval4(Loca_Location self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Loca_Location_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Location.Location.contents

List of sub location 
contained in another location. This is the contents of a Location.
  @param  Loca_Location self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Loca_Location_FindAllContents(Loca_Location self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllContents");
  
  if (!method)
    return raiseApiException("ccp.lims.Location.Location: cannot find method 'findAllContents'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Location.Location: method 'findAllContents' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Location.Location.contents

List of sub location 
contained in another location. This is the contents of a Location.
  @param  Loca_Location self
  @returns  all value that satisfy the conditions 
**/
ApiSet Loca_Location_FindAllContents_keyval0(Loca_Location self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Loca_Location_FindAllContents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Location.Location.contents

List of sub location 
contained in another location. This is the contents of a Location.
  @param  Loca_Location self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Loca_Location_FindAllContents_keyval1(Loca_Location self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Loca_Location_FindAllContents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Location.Location.contents

List of sub location 
contained in another location. This is the contents of a Location.
  @param  Loca_Location self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Loca_Location_FindAllContents_keyval2(Loca_Location self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Loca_Location_FindAllContents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Location.Location.contents

List of sub location 
contained in another location. This is the contents of a Location.
  @param  Loca_Location self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Loca_Location_FindAllContents_keyval3(Loca_Location self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Loca_Location_FindAllContents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Location.Location.contents

List of sub location 
contained in another location. This is the contents of a Location.
  @param  Loca_Location self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @param  char * key4
  @param  ApiObject value4
  @returns  all value that satisfy the conditions 
**/
ApiSet Loca_Location_FindAllContents_keyval4(Loca_Location self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Loca_Location_FindAllContents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Location.Location.holderLocations

List over time 
of occupancy for a given location.
  @param  Loca_Location self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Loca_Location_FindAllHolderLocations(Loca_Location self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllHolderLocations");
  
  if (!method)
    return raiseApiException("ccp.lims.Location.Location: cannot find method 'findAllHolderLocations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Location.Location: method 'findAllHolderLocations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Location.Location.holderLocations

List over time 
of occupancy for a given location.
  @param  Loca_Location self
  @returns  all value that satisfy the conditions 
**/
ApiSet Loca_Location_FindAllHolderLocations_keyval0(Loca_Location self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Loca_Location_FindAllHolderLocations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Location.Location.holderLocations

List over time 
of occupancy for a given location.
  @param  Loca_Location self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Loca_Location_FindAllHolderLocations_keyval1(Loca_Location self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Loca_Location_FindAllHolderLocations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Location.Location.holderLocations

List over time 
of occupancy for a given location.
  @param  Loca_Location self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Loca_Location_FindAllHolderLocations_keyval2(Loca_Location self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Loca_Location_FindAllHolderLocations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Location.Location.holderLocations

List over time 
of occupancy for a given location.
  @param  Loca_Location self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Loca_Location_FindAllHolderLocations_keyval3(Loca_Location self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Loca_Location_FindAllHolderLocations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Location.Location.holderLocations

List over time 
of occupancy for a given location.
  @param  Loca_Location self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @param  char * key4
  @param  ApiObject value4
  @returns  all value that satisfy the conditions 
**/
ApiSet Loca_Location_FindAllHolderLocations_keyval4(Loca_Location self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Loca_Location_FindAllHolderLocations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Loca_Location self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Loca_Location_FindFirstApplicationData(Loca_Location self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Location.Location: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Location.Location: method 'findFirstApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Loca_Location self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Loca_Location_FindFirstApplicationData_keyval0(Loca_Location self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Loca_Location_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Loca_Location self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Loca_Location_FindFirstApplicationData_keyval1(Loca_Location self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Loca_Location_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Loca_Location self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Loca_Location_FindFirstApplicationData_keyval2(Loca_Location self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Loca_Location_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Loca_Location self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Loca_Location_FindFirstApplicationData_keyval3(Loca_Location self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Loca_Location_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Loca_Location self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @param  char * key4
  @param  ApiObject value4
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Loca_Location_FindFirstApplicationData_keyval4(Loca_Location self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Loca_Location_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Location.Location.contents

List of sub location 
contained in another location. This is the contents of a Location.
  @param  Loca_Location self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Loca_Location Loca_Location_FindFirstContent(Loca_Location self, ApiMap conditions)
{
  
  Loca_Location obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstContent");
  
  if (!method)
    return raiseApiException("ccp.lims.Location.Location: cannot find method 'findFirstContent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Location.Location: method 'findFirstContent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Location.Location.contents

List of sub location 
contained in another location. This is the contents of a Location.
  @param  Loca_Location self
  @returns  the first value that satisfies the conditions 
**/
Loca_Location Loca_Location_FindFirstContent_keyval0(Loca_Location self)
{
  
  Loca_Location  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Loca_Location_FindFirstContent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Location.Location.contents

List of sub location 
contained in another location. This is the contents of a Location.
  @param  Loca_Location self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Loca_Location Loca_Location_FindFirstContent_keyval1(Loca_Location self, char * key, ApiObject value)
{
  
  Loca_Location  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Loca_Location_FindFirstContent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Location.Location.contents

List of sub location 
contained in another location. This is the contents of a Location.
  @param  Loca_Location self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Loca_Location Loca_Location_FindFirstContent_keyval2(Loca_Location self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Loca_Location  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Loca_Location_FindFirstContent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Location.Location.contents

List of sub location 
contained in another location. This is the contents of a Location.
  @param  Loca_Location self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Loca_Location Loca_Location_FindFirstContent_keyval3(Loca_Location self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Loca_Location  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Loca_Location_FindFirstContent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Location.Location.contents

List of sub location 
contained in another location. This is the contents of a Location.
  @param  Loca_Location self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @param  char * key4
  @param  ApiObject value4
  @returns  the first value that satisfies the conditions 
**/
Loca_Location Loca_Location_FindFirstContent_keyval4(Loca_Location self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Loca_Location  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Loca_Location_FindFirstContent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Location.Location.holderLocations

List over time 
of occupancy for a given location.
  @param  Loca_Location self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Hold_HolderLocation Loca_Location_FindFirstHolderLocation(Loca_Location self, ApiMap conditions)
{
  
  Hold_HolderLocation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstHolderLocation");
  
  if (!method)
    return raiseApiException("ccp.lims.Location.Location: cannot find method 'findFirstHolderLocation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Location.Location: method 'findFirstHolderLocation' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Location.Location.holderLocations

List over time 
of occupancy for a given location.
  @param  Loca_Location self
  @returns  the first value that satisfies the conditions 
**/
Hold_HolderLocation Loca_Location_FindFirstHolderLocation_keyval0(Loca_Location self)
{
  
  Hold_HolderLocation  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Loca_Location_FindFirstHolderLocation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Location.Location.holderLocations

List over time 
of occupancy for a given location.
  @param  Loca_Location self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Hold_HolderLocation Loca_Location_FindFirstHolderLocation_keyval1(Loca_Location self, char * key, ApiObject value)
{
  
  Hold_HolderLocation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Loca_Location_FindFirstHolderLocation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Location.Location.holderLocations

List over time 
of occupancy for a given location.
  @param  Loca_Location self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Hold_HolderLocation Loca_Location_FindFirstHolderLocation_keyval2(Loca_Location self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Hold_HolderLocation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Loca_Location_FindFirstHolderLocation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Location.Location.holderLocations

List over time 
of occupancy for a given location.
  @param  Loca_Location self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Hold_HolderLocation Loca_Location_FindFirstHolderLocation_keyval3(Loca_Location self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Hold_HolderLocation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Loca_Location_FindFirstHolderLocation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Location.Location.holderLocations

List over time 
of occupancy for a given location.
  @param  Loca_Location self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @param  char * key4
  @param  ApiObject value4
  @returns  the first value that satisfies the conditions 
**/
Hold_HolderLocation Loca_Location_FindFirstHolderLocation_keyval4(Loca_Location self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Hold_HolderLocation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Loca_Location_FindFirstHolderLocation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.lims.Location.Location
  @param  Loca_Location self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Loca_Location_Get(Loca_Location self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Loca_Location self
  @returns   the result
**/
Acco_AccessObject Loca_Location_GetAccess(Loca_Location self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Location.Location: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Location.Location: method 'getAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Loca_Location self
  @returns   the result
**/
ApiList Loca_Location_GetApplicationData(Loca_Location self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Location.Location: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Location.Location: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.lims.Location.Location
  @param  Loca_Location self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Loca_Location Loca_Location_GetByKey(Loca_Location self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Loca_Location obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Location.Location: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Location.Location: method 'getByKey' is not callable");
  
  args = PyTuple_Pack(2, startObj, fullKey);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Loca_Location self
  @returns   the result
**/
ApiString Loca_Location_GetClassName(Loca_Location self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.lims.Location.Location: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Location.Location: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Location.Location.contents

List of sub location 
contained in another location. This is the contents of a Location.
  @param  Loca_Location self
  @returns   the result
**/
ApiSet Loca_Location_GetContents(Loca_Location self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getContents");
  
  if (!method)
    return raiseApiException("ccp.lims.Location.Location: cannot find method 'getContents'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Location.Location: method 'getContents' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Loca_Location self
  @returns   the result
**/
ApiList Loca_Location_GetFieldNames(Loca_Location self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.lims.Location.Location: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Location.Location: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.lims.Location.Location
  @param  Loca_Location self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Loca_Location_GetFullKey(Loca_Location self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Location.Location: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Location.Location: method 'getFullKey' is not callable");
  
  args = PyTuple_Pack(1, useGuid);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Location.Location.holderLocations

List over time of 
occupancy for a given location.
  @param  Loca_Location self
  @returns   the result
**/
ApiSet Loca_Location_GetHolderLocations(Loca_Location self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getHolderLocations");
  
  if (!method)
    return raiseApiException("ccp.lims.Location.Location: cannot find method 'getHolderLocations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Location.Location: method 'getHolderLocations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Loca_Location self
  @returns   the result
**/
ApiBoolean Loca_Location_GetInConstructor(Loca_Location self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.lims.Location.Location: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Location.Location: method 'getInConstructor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Loca_Location self
  @returns   the result
**/
ApiBoolean Loca_Location_GetIsDeleted(Loca_Location self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.lims.Location.Location: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Location.Location: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.lims.Location.Location
  @param  Loca_Location self
  @returns  Local object key
**/
ApiObject Loca_Location_GetLocalKey(Loca_Location self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Location.Location: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Location.Location: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Location.Location.location
  @param  Loca_Location self
  @returns   the result
**/
Loca_Location Loca_Location_GetLocation(Loca_Location self)
{
  
  Loca_Location obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocation");
  
  if (!method)
    return raiseApiException("ccp.lims.Location.Location: cannot find method 'getLocation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Location.Location: method 'getLocation' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Location.Location.locationStore

parent link
  @param  Loca_Location self
  @returns   the result
**/
Loca_LocationStore Loca_Location_GetLocationStore(Loca_Location self)
{
  
  Loca_LocationStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocationStore");
  
  if (!method)
    return raiseApiException("ccp.lims.Location.Location: cannot find method 'getLocationStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Location.Location: method 'getLocationStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Location.Location.locationType

The type of the 
location. e.g. 'Building', 'Room', 'Fridge', 'Cupboard', 'Shelves',...
  @param  Loca_Location self
  @returns   the result
**/
ApiString Loca_Location_GetLocationType(Loca_Location self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocationType");
  
  if (!method)
    return raiseApiException("ccp.lims.Location.Location: cannot find method 'getLocationType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Location.Location: method 'getLocationType' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Location.Location.name

The name of the location.
  @param  Loca_Location self
  @returns   the result
**/
ApiString Loca_Location_GetName(Loca_Location self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.lims.Location.Location: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Location.Location: method 'getName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Location.Location.organisation

The organisation to 
which the location belongs.
  @param  Loca_Location self
  @returns   the result
**/
Affi_Organisation Loca_Location_GetOrganisation(Loca_Location self)
{
  
  Affi_Organisation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getOrganisation");
  
  if (!method)
    return raiseApiException("ccp.lims.Location.Location: cannot find method 'getOrganisation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Location.Location: method 'getOrganisation' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Loca_Location self
  @returns   the result
**/
ApiString Loca_Location_GetPackageName(Loca_Location self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.lims.Location.Location: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Location.Location: method 'getPackageName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Loca_Location self
  @returns   the result
**/
ApiString Loca_Location_GetPackageShortName(Loca_Location self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.lims.Location.Location: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Location.Location: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Location.Location.parent

link to parent object - 
synonym for locationStore
  @param  Loca_Location self
  @returns   the result
**/
Loca_LocationStore Loca_Location_GetParent(Loca_Location self)
{
  
  Loca_LocationStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.lims.Location.Location: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Location.Location: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Location.Location.pressure

The pressure of the 
location in pascal (Pa).
  @param  Loca_Location self
  @returns   the result
**/
ApiFloat Loca_Location_GetPressure(Loca_Location self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPressure");
  
  if (!method)
    return raiseApiException("ccp.lims.Location.Location: cannot find method 'getPressure'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Location.Location: method 'getPressure' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Location.Location.pressureDisplayUnit

This is the unit 
entered by user and used for display.
  @param  Loca_Location self
  @returns   the result
**/
ApiString Loca_Location_GetPressureDisplayUnit(Loca_Location self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPressureDisplayUnit");
  
  if (!method)
    return raiseApiException("ccp.lims.Location.Location: cannot find method 'getPressureDisplayUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Location.Location: method 'getPressureDisplayUnit' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Loca_Location self
  @returns   the result
**/
ApiString Loca_Location_GetQualifiedName(Loca_Location self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.lims.Location.Location: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Location.Location: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Loca_Location self
  @returns   the result
**/
Impl_MemopsRoot Loca_Location_GetRoot(Loca_Location self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.lims.Location.Location: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Location.Location: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Location.Location.serial

Unique identifier.
  @param  Loca_Location self
  @returns   the result
**/
ApiInteger Loca_Location_GetSerial(Loca_Location self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.lims.Location.Location: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Location.Location: method 'getSerial' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Location.Location.tempDisplayUnit

This is the unit 
entered by user and used for display.
  @param  Loca_Location self
  @returns   the result
**/
ApiString Loca_Location_GetTempDisplayUnit(Loca_Location self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTempDisplayUnit");
  
  if (!method)
    return raiseApiException("ccp.lims.Location.Location: cannot find method 'getTempDisplayUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Location.Location: method 'getTempDisplayUnit' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Location.Location.temperature

The temperature of the 
location in kelvin (K).
  @param  Loca_Location self
  @returns   the result
**/
ApiFloat Loca_Location_GetTemperature(Loca_Location self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTemperature");
  
  if (!method)
    return raiseApiException("ccp.lims.Location.Location: cannot find method 'getTemperature'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Location.Location: method 'getTemperature' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Loca_Location self
  @returns   the result
**/
Impl_TopObject Loca_Location_GetTopObject(Loca_Location self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.lims.Location.Location: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Location.Location: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.lims.Location.Location
  @param  Loca_LocationStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Loca_Location Loca_Location_Init(Loca_LocationStore parent, ApiMap attrlinks)
{
  
  return Loca_LocationStore_NewLocation(parent, attrlinks);
}

/**
  Constructor for ccp.lims.Location.Location
  @param  Loca_LocationStore parent
  @param  char * name
  @returns  the new object
**/
Loca_Location Loca_Location_Init_reqd(Loca_LocationStore parent, char * name)
{
  
  Loca_Location  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Loca_Location_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Loca_Location self
  @param  Impl_ApplicationData value
**/
void *Loca_Location_RemoveApplicationData(Loca_Location self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Location.Location: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Location.Location: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.lims.Location.Location.contents

List of sub location 
contained in another location. This is the contents of a Location.
  @param  Loca_Location self
  @param  Loca_Location value
**/
void *Loca_Location_RemoveContent(Loca_Location self, Loca_Location value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeContent");
  
  if (!method)
    return raiseApiException("ccp.lims.Location.Location: cannot find method 'removeContent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Location.Location: method 'removeContent' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.lims.Location.Location
  @param  Loca_Location self
  @param  ApiString name
  @param  ApiObject value
**/
void *Loca_Location_Set(Loca_Location self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Loca_Location self
  @param  Acco_AccessObject value
**/
void *Loca_Location_SetAccess(Loca_Location self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Location.Location: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Location.Location: method 'setAccess' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Loca_Location self
  @param  ApiList values
**/
void *Loca_Location_SetApplicationData(Loca_Location self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Location.Location: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Location.Location: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Location.Location.contents

List of sub location 
contained in another location. This is the contents of a Location.
  @param  Loca_Location self
  @param  ApiSet values
**/
void *Loca_Location_SetContents(Loca_Location self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setContents");
  
  if (!method)
    return raiseApiException("ccp.lims.Location.Location: cannot find method 'setContents'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Location.Location: method 'setContents' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Location.Location.holderLocations

List over time of 
occupancy for a given location.
  @param  Loca_Location self
  @param  ApiSet values
**/
void *Loca_Location_SetHolderLocations(Loca_Location self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setHolderLocations");
  
  if (!method)
    return raiseApiException("ccp.lims.Location.Location: cannot find method 'setHolderLocations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Location.Location: method 'setHolderLocations' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Location.Location.location
  @param  Loca_Location self
  @param  Loca_Location value
**/
void *Loca_Location_SetLocation(Loca_Location self, Loca_Location value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLocation");
  
  if (!method)
    return raiseApiException("ccp.lims.Location.Location: cannot find method 'setLocation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Location.Location: method 'setLocation' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Location.Location.locationType

The type of the 
location. e.g. 'Building', 'Room', 'Fridge', 'Cupboard', 'Shelves',...
  @param  Loca_Location self
  @param  ApiString value
**/
void *Loca_Location_SetLocationType(Loca_Location self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLocationType");
  
  if (!method)
    return raiseApiException("ccp.lims.Location.Location: cannot find method 'setLocationType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Location.Location: method 'setLocationType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Location.Location.name

The name of the location.
  @param  Loca_Location self
  @param  ApiString value
**/
void *Loca_Location_SetName(Loca_Location self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.lims.Location.Location: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Location.Location: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Location.Location.organisation

The organisation to 
which the location belongs.
  @param  Loca_Location self
  @param  Affi_Organisation value
**/
void *Loca_Location_SetOrganisation(Loca_Location self, Affi_Organisation value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setOrganisation");
  
  if (!method)
    return raiseApiException("ccp.lims.Location.Location: cannot find method 'setOrganisation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Location.Location: method 'setOrganisation' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Location.Location.pressure

The pressure of the 
location in pascal (Pa).
  @param  Loca_Location self
  @param  ApiFloat value
**/
void *Loca_Location_SetPressure(Loca_Location self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPressure");
  
  if (!method)
    return raiseApiException("ccp.lims.Location.Location: cannot find method 'setPressure'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Location.Location: method 'setPressure' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Location.Location.pressureDisplayUnit

This is the unit 
entered by user and used for display.
  @param  Loca_Location self
  @param  ApiString value
**/
void *Loca_Location_SetPressureDisplayUnit(Loca_Location self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPressureDisplayUnit");
  
  if (!method)
    return raiseApiException("ccp.lims.Location.Location: cannot find method 'setPressureDisplayUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Location.Location: method 'setPressureDisplayUnit' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Location.Location.serial

Unique identifier.
  @param  Loca_Location self
  @param  ApiInteger value
**/
void *Loca_Location_SetSerial(Loca_Location self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.lims.Location.Location: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Location.Location: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Location.Location.tempDisplayUnit

This is the unit 
entered by user and used for display.
  @param  Loca_Location self
  @param  ApiString value
**/
void *Loca_Location_SetTempDisplayUnit(Loca_Location self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setTempDisplayUnit");
  
  if (!method)
    return raiseApiException("ccp.lims.Location.Location: cannot find method 'setTempDisplayUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Location.Location: method 'setTempDisplayUnit' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Location.Location.temperature

The temperature of the 
location in kelvin (K).
  @param  Loca_Location self
  @param  ApiFloat value
**/
void *Loca_Location_SetTemperature(Loca_Location self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setTemperature");
  
  if (!method)
    return raiseApiException("ccp.lims.Location.Location: cannot find method 'setTemperature'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Location.Location: method 'setTemperature' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Location.Location.contents

List of sub location 
contained in another location. This is the contents of a Location.
  @param  Loca_Location self
  @returns   the result
**/
ApiList Loca_Location_SortedContents(Loca_Location self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedContents");
  
  if (!method)
    return raiseApiException("ccp.lims.Location.Location: cannot find method 'sortedContents'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Location.Location: method 'sortedContents' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Location.Location.holderLocations

List over time of 
occupancy for a given location.
  @param  Loca_Location self
  @returns   the result
**/
ApiList Loca_Location_SortedHolderLocations(Loca_Location self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedHolderLocations");
  
  if (!method)
    return raiseApiException("ccp.lims.Location.Location: cannot find method 'sortedHolderLocations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Location.Location: method 'sortedHolderLocations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
