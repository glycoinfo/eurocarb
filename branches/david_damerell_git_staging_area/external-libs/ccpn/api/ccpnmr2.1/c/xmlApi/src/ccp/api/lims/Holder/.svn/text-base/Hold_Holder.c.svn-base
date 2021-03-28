
#include "ccp.h"

/*
  The information on the holder. It is a plastic labware that cannot be separated like plates, tubes,... that contain one or many sample(s) and that holds the bar code information for example. It can be also used to group holder together.
*/

/* package ccp.api.lims.Holder */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_Holder self
  @param  Impl_ApplicationData value
**/
void *Hold_Holder_AddApplicationData(Hold_Holder self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.lims.Holder.Holder.contents

List of sub holder contained in 
an holder. This is the contents of an holder.
  @param  Hold_Holder self
  @param  Hold_Holder value
**/
void *Hold_Holder_AddContent(Hold_Holder self, Hold_Holder value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addContent");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'addContent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'addContent' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.lims.Holder.Holder.holderCategories
  @param  Hold_Holder self
  @param  Clas_HolderCategory value
**/
void *Hold_Holder_AddHolderCategory(Hold_Holder self, Clas_HolderCategory value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addHolderCategory");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'addHolderCategory'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'addHolderCategory' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.lims.Holder.Holder.samples

List of sample contained in an 
holder.
  @param  Hold_Holder self
  @param  Sam_Sample value
**/
void *Hold_Holder_AddSample(Hold_Holder self, Sam_Sample value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'addSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'addSample' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.lims.Holder.Holder
  @param  Hold_Holder self
  @param  ApiBoolean complete
**/
void *Hold_Holder_CheckAllValid(Hold_Holder self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.lims.Holder.Holder
  @param  Hold_Holder self
  @param  ApiBoolean complete
**/
void *Hold_Holder_CheckValid(Hold_Holder self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'checkValid' is not callable");
  
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
  @param  Hold_Holder self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Hold_Holder_FindAllApplicationData(Hold_Holder self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'findAllApplicationData' is not callable");
  
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
  @param  Hold_Holder self
  @returns  all value that satisfy the conditions 
**/
ApiList Hold_Holder_FindAllApplicationData_keyval0(Hold_Holder self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Hold_Holder_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_Holder self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Hold_Holder_FindAllApplicationData_keyval1(Hold_Holder self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Hold_Holder_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_Holder self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Hold_Holder_FindAllApplicationData_keyval2(Hold_Holder self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Hold_Holder_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_Holder self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Hold_Holder_FindAllApplicationData_keyval3(Hold_Holder self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Hold_Holder_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_Holder self
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
ApiList Hold_Holder_FindAllApplicationData_keyval4(Hold_Holder self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Hold_Holder_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Holder.Holder.contents

List of sub holder 
contained in an holder. This is the contents of an holder.
  @param  Hold_Holder self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Hold_Holder_FindAllContents(Hold_Holder self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllContents");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'findAllContents'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'findAllContents' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Holder.Holder.contents

List of sub holder 
contained in an holder. This is the contents of an holder.
  @param  Hold_Holder self
  @returns  all value that satisfy the conditions 
**/
ApiSet Hold_Holder_FindAllContents_keyval0(Hold_Holder self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Hold_Holder_FindAllContents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Holder.Holder.contents

List of sub holder 
contained in an holder. This is the contents of an holder.
  @param  Hold_Holder self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Hold_Holder_FindAllContents_keyval1(Hold_Holder self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Hold_Holder_FindAllContents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Holder.Holder.contents

List of sub holder 
contained in an holder. This is the contents of an holder.
  @param  Hold_Holder self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Hold_Holder_FindAllContents_keyval2(Hold_Holder self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Hold_Holder_FindAllContents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Holder.Holder.contents

List of sub holder 
contained in an holder. This is the contents of an holder.
  @param  Hold_Holder self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Hold_Holder_FindAllContents_keyval3(Hold_Holder self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Hold_Holder_FindAllContents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Holder.Holder.contents

List of sub holder 
contained in an holder. This is the contents of an holder.
  @param  Hold_Holder self
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
ApiSet Hold_Holder_FindAllContents_keyval4(Hold_Holder self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Hold_Holder_FindAllContents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Holder.Holder.holderCategories
  @param  Hold_Holder self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Hold_Holder_FindAllHolderCategories(Hold_Holder self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllHolderCategories");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'findAllHolderCategories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'findAllHolderCategories' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Holder.Holder.holderCategories
  @param  Hold_Holder self
  @returns  all value that satisfy the conditions 
**/
ApiSet Hold_Holder_FindAllHolderCategories_keyval0(Hold_Holder self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Hold_Holder_FindAllHolderCategories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Holder.Holder.holderCategories
  @param  Hold_Holder self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Hold_Holder_FindAllHolderCategories_keyval1(Hold_Holder self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Hold_Holder_FindAllHolderCategories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Holder.Holder.holderCategories
  @param  Hold_Holder self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Hold_Holder_FindAllHolderCategories_keyval2(Hold_Holder self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Hold_Holder_FindAllHolderCategories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Holder.Holder.holderCategories
  @param  Hold_Holder self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Hold_Holder_FindAllHolderCategories_keyval3(Hold_Holder self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Hold_Holder_FindAllHolderCategories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Holder.Holder.holderCategories
  @param  Hold_Holder self
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
ApiSet Hold_Holder_FindAllHolderCategories_keyval4(Hold_Holder self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Hold_Holder_FindAllHolderCategories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Holder.Holder.holderLocations

child link to class 
HolderLocation
  @param  Hold_Holder self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Hold_Holder_FindAllHolderLocations(Hold_Holder self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllHolderLocations");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'findAllHolderLocations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'findAllHolderLocations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Holder.Holder.holderLocations

child link to class 
HolderLocation
  @param  Hold_Holder self
  @returns  all value that satisfy the conditions 
**/
ApiSet Hold_Holder_FindAllHolderLocations_keyval0(Hold_Holder self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Hold_Holder_FindAllHolderLocations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Holder.Holder.holderLocations

child link to class 
HolderLocation
  @param  Hold_Holder self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Hold_Holder_FindAllHolderLocations_keyval1(Hold_Holder self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Hold_Holder_FindAllHolderLocations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Holder.Holder.holderLocations

child link to class 
HolderLocation
  @param  Hold_Holder self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Hold_Holder_FindAllHolderLocations_keyval2(Hold_Holder self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Hold_Holder_FindAllHolderLocations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Holder.Holder.holderLocations

child link to class 
HolderLocation
  @param  Hold_Holder self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Hold_Holder_FindAllHolderLocations_keyval3(Hold_Holder self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Hold_Holder_FindAllHolderLocations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Holder.Holder.holderLocations

child link to class 
HolderLocation
  @param  Hold_Holder self
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
ApiSet Hold_Holder_FindAllHolderLocations_keyval4(Hold_Holder self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Hold_Holder_FindAllHolderLocations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Holder.Holder.refSamplePositions

child link to 
class RefSamplePosition
  @param  Hold_Holder self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Hold_Holder_FindAllRefSamplePositions(Hold_Holder self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllRefSamplePositions");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'findAllRefSamplePositions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'findAllRefSamplePositions' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Holder.Holder.refSamplePositions

child link to 
class RefSamplePosition
  @param  Hold_Holder self
  @returns  all value that satisfy the conditions 
**/
ApiSet Hold_Holder_FindAllRefSamplePositions_keyval0(Hold_Holder self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Hold_Holder_FindAllRefSamplePositions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Holder.Holder.refSamplePositions

child link to 
class RefSamplePosition
  @param  Hold_Holder self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Hold_Holder_FindAllRefSamplePositions_keyval1(Hold_Holder self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Hold_Holder_FindAllRefSamplePositions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Holder.Holder.refSamplePositions

child link to 
class RefSamplePosition
  @param  Hold_Holder self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Hold_Holder_FindAllRefSamplePositions_keyval2(Hold_Holder self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Hold_Holder_FindAllRefSamplePositions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Holder.Holder.refSamplePositions

child link to 
class RefSamplePosition
  @param  Hold_Holder self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Hold_Holder_FindAllRefSamplePositions_keyval3(Hold_Holder self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Hold_Holder_FindAllRefSamplePositions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Holder.Holder.refSamplePositions

child link to 
class RefSamplePosition
  @param  Hold_Holder self
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
ApiSet Hold_Holder_FindAllRefSamplePositions_keyval4(Hold_Holder self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Hold_Holder_FindAllRefSamplePositions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Holder.Holder.samples

List of sample contained in 
an holder.
  @param  Hold_Holder self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Hold_Holder_FindAllSamples(Hold_Holder self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllSamples");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'findAllSamples'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'findAllSamples' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Holder.Holder.samples

List of sample contained in 
an holder.
  @param  Hold_Holder self
  @returns  all value that satisfy the conditions 
**/
ApiSet Hold_Holder_FindAllSamples_keyval0(Hold_Holder self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Hold_Holder_FindAllSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Holder.Holder.samples

List of sample contained in 
an holder.
  @param  Hold_Holder self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Hold_Holder_FindAllSamples_keyval1(Hold_Holder self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Hold_Holder_FindAllSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Holder.Holder.samples

List of sample contained in 
an holder.
  @param  Hold_Holder self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Hold_Holder_FindAllSamples_keyval2(Hold_Holder self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Hold_Holder_FindAllSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Holder.Holder.samples

List of sample contained in 
an holder.
  @param  Hold_Holder self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Hold_Holder_FindAllSamples_keyval3(Hold_Holder self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Hold_Holder_FindAllSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Holder.Holder.samples

List of sample contained in 
an holder.
  @param  Hold_Holder self
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
ApiSet Hold_Holder_FindAllSamples_keyval4(Hold_Holder self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Hold_Holder_FindAllSamples(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_Holder self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Hold_Holder_FindFirstApplicationData(Hold_Holder self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'findFirstApplicationData' is not callable");
  
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
  @param  Hold_Holder self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Hold_Holder_FindFirstApplicationData_keyval0(Hold_Holder self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Hold_Holder_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_Holder self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Hold_Holder_FindFirstApplicationData_keyval1(Hold_Holder self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Hold_Holder_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_Holder self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Hold_Holder_FindFirstApplicationData_keyval2(Hold_Holder self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Hold_Holder_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_Holder self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Hold_Holder_FindFirstApplicationData_keyval3(Hold_Holder self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Hold_Holder_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_Holder self
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
Impl_ApplicationData Hold_Holder_FindFirstApplicationData_keyval4(Hold_Holder self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Hold_Holder_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Holder.Holder.contents

List of sub holder 
contained in an holder. This is the contents of an holder.
  @param  Hold_Holder self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Hold_Holder Hold_Holder_FindFirstContent(Hold_Holder self, ApiMap conditions)
{
  
  Hold_Holder obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstContent");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'findFirstContent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'findFirstContent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Holder.Holder.contents

List of sub holder 
contained in an holder. This is the contents of an holder.
  @param  Hold_Holder self
  @returns  the first value that satisfies the conditions 
**/
Hold_Holder Hold_Holder_FindFirstContent_keyval0(Hold_Holder self)
{
  
  Hold_Holder  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Hold_Holder_FindFirstContent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Holder.Holder.contents

List of sub holder 
contained in an holder. This is the contents of an holder.
  @param  Hold_Holder self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Hold_Holder Hold_Holder_FindFirstContent_keyval1(Hold_Holder self, char * key, ApiObject value)
{
  
  Hold_Holder  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Hold_Holder_FindFirstContent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Holder.Holder.contents

List of sub holder 
contained in an holder. This is the contents of an holder.
  @param  Hold_Holder self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Hold_Holder Hold_Holder_FindFirstContent_keyval2(Hold_Holder self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Hold_Holder  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Hold_Holder_FindFirstContent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Holder.Holder.contents

List of sub holder 
contained in an holder. This is the contents of an holder.
  @param  Hold_Holder self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Hold_Holder Hold_Holder_FindFirstContent_keyval3(Hold_Holder self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Hold_Holder  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Hold_Holder_FindFirstContent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Holder.Holder.contents

List of sub holder 
contained in an holder. This is the contents of an holder.
  @param  Hold_Holder self
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
Hold_Holder Hold_Holder_FindFirstContent_keyval4(Hold_Holder self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Hold_Holder  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Hold_Holder_FindFirstContent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Holder.Holder.holderCategories
  @param  Hold_Holder self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Clas_HolderCategory Hold_Holder_FindFirstHolderCategory(Hold_Holder self, ApiMap conditions)
{
  
  Clas_HolderCategory obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstHolderCategory");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'findFirstHolderCategory'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'findFirstHolderCategory' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Holder.Holder.holderCategories
  @param  Hold_Holder self
  @returns  the first value that satisfies the conditions 
**/
Clas_HolderCategory Hold_Holder_FindFirstHolderCategory_keyval0(Hold_Holder self)
{
  
  Clas_HolderCategory  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Hold_Holder_FindFirstHolderCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Holder.Holder.holderCategories
  @param  Hold_Holder self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Clas_HolderCategory Hold_Holder_FindFirstHolderCategory_keyval1(Hold_Holder self, char * key, ApiObject value)
{
  
  Clas_HolderCategory  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Hold_Holder_FindFirstHolderCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Holder.Holder.holderCategories
  @param  Hold_Holder self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Clas_HolderCategory Hold_Holder_FindFirstHolderCategory_keyval2(Hold_Holder self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Clas_HolderCategory  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Hold_Holder_FindFirstHolderCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Holder.Holder.holderCategories
  @param  Hold_Holder self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Clas_HolderCategory Hold_Holder_FindFirstHolderCategory_keyval3(Hold_Holder self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Clas_HolderCategory  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Hold_Holder_FindFirstHolderCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Holder.Holder.holderCategories
  @param  Hold_Holder self
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
Clas_HolderCategory Hold_Holder_FindFirstHolderCategory_keyval4(Hold_Holder self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Clas_HolderCategory  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Hold_Holder_FindFirstHolderCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Holder.Holder.holderLocations

child link to 
class HolderLocation
  @param  Hold_Holder self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Hold_HolderLocation Hold_Holder_FindFirstHolderLocation(Hold_Holder self, ApiMap conditions)
{
  
  Hold_HolderLocation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstHolderLocation");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'findFirstHolderLocation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'findFirstHolderLocation' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Holder.Holder.holderLocations

child link to 
class HolderLocation
  @param  Hold_Holder self
  @returns  the first value that satisfies the conditions 
**/
Hold_HolderLocation Hold_Holder_FindFirstHolderLocation_keyval0(Hold_Holder self)
{
  
  Hold_HolderLocation  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Hold_Holder_FindFirstHolderLocation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Holder.Holder.holderLocations

child link to 
class HolderLocation
  @param  Hold_Holder self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Hold_HolderLocation Hold_Holder_FindFirstHolderLocation_keyval1(Hold_Holder self, char * key, ApiObject value)
{
  
  Hold_HolderLocation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Hold_Holder_FindFirstHolderLocation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Holder.Holder.holderLocations

child link to 
class HolderLocation
  @param  Hold_Holder self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Hold_HolderLocation Hold_Holder_FindFirstHolderLocation_keyval2(Hold_Holder self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Hold_HolderLocation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Hold_Holder_FindFirstHolderLocation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Holder.Holder.holderLocations

child link to 
class HolderLocation
  @param  Hold_Holder self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Hold_HolderLocation Hold_Holder_FindFirstHolderLocation_keyval3(Hold_Holder self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Hold_HolderLocation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Hold_Holder_FindFirstHolderLocation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Holder.Holder.holderLocations

child link to 
class HolderLocation
  @param  Hold_Holder self
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
Hold_HolderLocation Hold_Holder_FindFirstHolderLocation_keyval4(Hold_Holder self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Hold_HolderLocation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Hold_Holder_FindFirstHolderLocation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Holder.Holder.refSamplePositions

child link to 
class RefSamplePosition
  @param  Hold_Holder self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Hold_RefSamplePosition Hold_Holder_FindFirstRefSamplePosition(Hold_Holder self, ApiMap conditions)
{
  
  Hold_RefSamplePosition obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstRefSamplePosition");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'findFirstRefSamplePosition'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'findFirstRefSamplePosition' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Holder.Holder.refSamplePositions

child link to 
class RefSamplePosition
  @param  Hold_Holder self
  @returns  the first value that satisfies the conditions 
**/
Hold_RefSamplePosition Hold_Holder_FindFirstRefSamplePosition_keyval0(Hold_Holder self)
{
  
  Hold_RefSamplePosition  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Hold_Holder_FindFirstRefSamplePosition(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Holder.Holder.refSamplePositions

child link to 
class RefSamplePosition
  @param  Hold_Holder self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Hold_RefSamplePosition Hold_Holder_FindFirstRefSamplePosition_keyval1(Hold_Holder self, char * key, ApiObject value)
{
  
  Hold_RefSamplePosition  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Hold_Holder_FindFirstRefSamplePosition(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Holder.Holder.refSamplePositions

child link to 
class RefSamplePosition
  @param  Hold_Holder self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Hold_RefSamplePosition Hold_Holder_FindFirstRefSamplePosition_keyval2(Hold_Holder self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Hold_RefSamplePosition  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Hold_Holder_FindFirstRefSamplePosition(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Holder.Holder.refSamplePositions

child link to 
class RefSamplePosition
  @param  Hold_Holder self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Hold_RefSamplePosition Hold_Holder_FindFirstRefSamplePosition_keyval3(Hold_Holder self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Hold_RefSamplePosition  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Hold_Holder_FindFirstRefSamplePosition(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Holder.Holder.refSamplePositions

child link to 
class RefSamplePosition
  @param  Hold_Holder self
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
Hold_RefSamplePosition Hold_Holder_FindFirstRefSamplePosition_keyval4(Hold_Holder self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Hold_RefSamplePosition  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Hold_Holder_FindFirstRefSamplePosition(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Holder.Holder.samples

List of sample contained 
in an holder.
  @param  Hold_Holder self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Sam_Sample Hold_Holder_FindFirstSample(Hold_Holder self, ApiMap conditions)
{
  
  Sam_Sample obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'findFirstSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'findFirstSample' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Holder.Holder.samples

List of sample contained 
in an holder.
  @param  Hold_Holder self
  @returns  the first value that satisfies the conditions 
**/
Sam_Sample Hold_Holder_FindFirstSample_keyval0(Hold_Holder self)
{
  
  Sam_Sample  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Hold_Holder_FindFirstSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Holder.Holder.samples

List of sample contained 
in an holder.
  @param  Hold_Holder self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Sam_Sample Hold_Holder_FindFirstSample_keyval1(Hold_Holder self, char * key, ApiObject value)
{
  
  Sam_Sample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Hold_Holder_FindFirstSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Holder.Holder.samples

List of sample contained 
in an holder.
  @param  Hold_Holder self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Sam_Sample Hold_Holder_FindFirstSample_keyval2(Hold_Holder self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Sam_Sample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Hold_Holder_FindFirstSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Holder.Holder.samples

List of sample contained 
in an holder.
  @param  Hold_Holder self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Sam_Sample Hold_Holder_FindFirstSample_keyval3(Hold_Holder self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Sam_Sample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Hold_Holder_FindFirstSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Holder.Holder.samples

List of sample contained 
in an holder.
  @param  Hold_Holder self
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
Sam_Sample Hold_Holder_FindFirstSample_keyval4(Hold_Holder self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Sam_Sample  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Hold_Holder_FindFirstSample(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.lims.Holder.Holder
  @param  Hold_Holder self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Hold_Holder_Get(Hold_Holder self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Hold_Holder self
  @returns   the result
**/
Acco_AccessObject Hold_Holder_GetAccess(Hold_Holder self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'getAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Hold_Holder self
  @returns   the result
**/
Acco_AccessObject Hold_Holder_GetActiveAccess(Hold_Holder self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'getActiveAccess' is not callable");
  
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
  @param  Hold_Holder self
  @returns   the result
**/
ApiList Hold_Holder_GetApplicationData(Hold_Holder self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.lims.Holder.Holder
  @param  Hold_Holder self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Hold_Holder Hold_Holder_GetByKey(Hold_Holder self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Hold_Holder obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'getByKey' is not callable");
  
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
  @param  Hold_Holder self
  @returns   the result
**/
ApiString Hold_Holder_GetClassName(Hold_Holder self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Holder.Holder.colPosition

The column position of the 
current holder in the parent holder.
  @param  Hold_Holder self
  @returns   the result
**/
ApiInteger Hold_Holder_GetColPosition(Hold_Holder self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getColPosition");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'getColPosition'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'getColPosition' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Holder.Holder.contents

List of sub holder contained in 
an holder. This is the contents of an holder.
  @param  Hold_Holder self
  @returns   the result
**/
ApiSet Hold_Holder_GetContents(Hold_Holder self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getContents");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'getContents'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'getContents' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Holder.Holder.details

Detail field for comments.
  @param  Hold_Holder self
  @returns   the result
**/
ApiString Hold_Holder_GetDetails(Hold_Holder self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'getDetails' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Holder.Holder.endDate
  @param  Hold_Holder self
  @returns   the result
**/
ApiString Hold_Holder_GetEndDate(Hold_Holder self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getEndDate");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'getEndDate'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'getEndDate' is not callable");
  
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
  @param  Hold_Holder self
  @returns   the result
**/
ApiList Hold_Holder_GetFieldNames(Hold_Holder self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.lims.Holder.Holder
  @param  Hold_Holder self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Hold_Holder_GetFullKey(Hold_Holder self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'getFullKey' is not callable");
  
  args = PyTuple_Pack(1, useGuid);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Holder.Holder.holder

The holder to which the sub 
holders belong.
  @param  Hold_Holder self
  @returns   the result
**/
Hold_Holder Hold_Holder_GetHolder(Hold_Holder self)
{
  
  Hold_Holder obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getHolder");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'getHolder'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'getHolder' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Holder.Holder.holderCategories
  @param  Hold_Holder self
  @returns   the result
**/
ApiSet Hold_Holder_GetHolderCategories(Hold_Holder self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getHolderCategories");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'getHolderCategories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'getHolderCategories' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Holder.Holder.holderLocations

child link to class 
HolderLocation
  @param  Hold_Holder self
  @returns   the result
**/
ApiSet Hold_Holder_GetHolderLocations(Hold_Holder self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getHolderLocations");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'getHolderLocations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'getHolderLocations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Holder.Holder.holderStore

parent link
  @param  Hold_Holder self
  @returns   the result
**/
Hold_HolderStore Hold_Holder_GetHolderStore(Hold_Holder self)
{
  
  Hold_HolderStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getHolderStore");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'getHolderStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'getHolderStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Holder.Holder.holderType

The type of holder associated 
to a holder.
  @param  Hold_Holder self
  @returns   the result
**/
Hold_AbstractHolderType Hold_Holder_GetHolderType(Hold_Holder self)
{
  
  Hold_AbstractHolderType obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getHolderType");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'getHolderType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'getHolderType' is not callable");
  
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
  @param  Hold_Holder self
  @returns   the result
**/
ApiBoolean Hold_Holder_GetInConstructor(Hold_Holder self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'getInConstructor' is not callable");
  
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
  @param  Hold_Holder self
  @returns   the result
**/
ApiBoolean Hold_Holder_GetIsDeleted(Hold_Holder self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.lims.Holder.Holder
  @param  Hold_Holder self
  @returns  Local object key
**/
ApiObject Hold_Holder_GetLocalKey(Hold_Holder self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Holder.Holder.name

The name of the holder or the code 
to identify it. It is the unique identifier.
  @param  Hold_Holder self
  @returns   the result
**/
ApiString Hold_Holder_GetName(Hold_Holder self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'getName' is not callable");
  
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
  @param  Hold_Holder self
  @returns   the result
**/
ApiString Hold_Holder_GetPackageName(Hold_Holder self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'getPackageName' is not callable");
  
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
  @param  Hold_Holder self
  @returns   the result
**/
ApiString Hold_Holder_GetPackageShortName(Hold_Holder self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Holder.Holder.parent

link to parent object - synonym 
for holderStore
  @param  Hold_Holder self
  @returns   the result
**/
Hold_HolderStore Hold_Holder_GetParent(Hold_Holder self)
{
  
  Hold_HolderStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'getParent' is not callable");
  
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
  @param  Hold_Holder self
  @returns   the result
**/
ApiString Hold_Holder_GetQualifiedName(Hold_Holder self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Holder.Holder.refSamplePositions

child link to class 
RefSamplePosition
  @param  Hold_Holder self
  @returns   the result
**/
ApiSet Hold_Holder_GetRefSamplePositions(Hold_Holder self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRefSamplePositions");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'getRefSamplePositions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'getRefSamplePositions' is not callable");
  
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
  @param  Hold_Holder self
  @returns   the result
**/
Impl_MemopsRoot Hold_Holder_GetRoot(Hold_Holder self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Holder.Holder.rowPosition

The row position of the 
current holder in the parent holder.
  @param  Hold_Holder self
  @returns   the result
**/
ApiInteger Hold_Holder_GetRowPosition(Hold_Holder self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRowPosition");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'getRowPosition'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'getRowPosition' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Holder.Holder.samples

List of sample contained in an 
holder.
  @param  Hold_Holder self
  @returns   the result
**/
ApiSet Hold_Holder_GetSamples(Hold_Holder self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSamples");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'getSamples'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'getSamples' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Holder.Holder.startDate
  @param  Hold_Holder self
  @returns   the result
**/
ApiString Hold_Holder_GetStartDate(Hold_Holder self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getStartDate");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'getStartDate'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'getStartDate' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Holder.Holder.subPosition

The sub-position of the 
current holder in the parent holder.
  @param  Hold_Holder self
  @returns   the result
**/
ApiInteger Hold_Holder_GetSubPosition(Hold_Holder self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSubPosition");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'getSubPosition'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'getSubPosition' is not callable");
  
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
  @param  Hold_Holder self
  @returns   the result
**/
Impl_TopObject Hold_Holder_GetTopObject(Hold_Holder self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.lims.Holder.Holder
  @param  Hold_HolderStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Hold_Holder Hold_Holder_Init(Hold_HolderStore parent, ApiMap attrlinks)
{
  
  return Hold_HolderStore_NewHolder(parent, attrlinks);
}

/**
  Constructor for ccp.lims.Holder.Holder
  @param  Hold_HolderStore parent
  @param  ApiSet holderCategories
  @param  char * name
  @returns  the new object
**/
Hold_Holder Hold_Holder_Init_reqd(Hold_HolderStore parent, ApiSet holderCategories, char * name)
{
  
  Hold_Holder  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "holderCategories", holderCategories);
  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Hold_Holder_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Holder.HolderLocation
  @param  Hold_Holder self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Hold_HolderLocation Hold_Holder_NewHolderLocation(Hold_Holder self, ApiMap attrlinks)
{
  
  Hold_HolderLocation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newHolderLocation");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'newHolderLocation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'newHolderLocation' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Holder.HolderLocation
  @param  Hold_Holder self
  @param  Loca_Location location
  @param  char * startDate
  @returns  the new object
**/
Hold_HolderLocation Hold_Holder_NewHolderLocation_reqd(Hold_Holder self, Loca_Location location, char * startDate)
{
  
  Hold_HolderLocation  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__startDate = ApiString_New(startDate);

  PyDict_SetItemString(attrlinks, "location", location);
  PyDict_SetItemString(attrlinks, "startDate", api__startDate);
  
  obj = Hold_Holder_NewHolderLocation(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__startDate);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Holder.RefSamplePosition
  @param  Hold_Holder self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Hold_RefSamplePosition Hold_Holder_NewRefSamplePosition(Hold_Holder self, ApiMap attrlinks)
{
  
  Hold_RefSamplePosition obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newRefSamplePosition");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'newRefSamplePosition'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'newRefSamplePosition' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Holder.RefSamplePosition
  @param  Hold_Holder self
  @returns  the new object
**/
Hold_RefSamplePosition Hold_Holder_NewRefSamplePosition_reqd(Hold_Holder self)
{
  
  Hold_RefSamplePosition  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Hold_Holder_NewRefSamplePosition(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_Holder self
  @param  Impl_ApplicationData value
**/
void *Hold_Holder_RemoveApplicationData(Hold_Holder self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.lims.Holder.Holder.contents

List of sub holder contained 
in an holder. This is the contents of an holder.
  @param  Hold_Holder self
  @param  Hold_Holder value
**/
void *Hold_Holder_RemoveContent(Hold_Holder self, Hold_Holder value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeContent");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'removeContent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'removeContent' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.lims.Holder.Holder.holderCategories
  @param  Hold_Holder self
  @param  Clas_HolderCategory value
**/
void *Hold_Holder_RemoveHolderCategory(Hold_Holder self, Clas_HolderCategory value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeHolderCategory");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'removeHolderCategory'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'removeHolderCategory' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.lims.Holder.Holder.samples

List of sample contained in 
an holder.
  @param  Hold_Holder self
  @param  Sam_Sample value
**/
void *Hold_Holder_RemoveSample(Hold_Holder self, Sam_Sample value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'removeSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'removeSample' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.lims.Holder.Holder
  @param  Hold_Holder self
  @param  ApiString name
  @param  ApiObject value
**/
void *Hold_Holder_Set(Hold_Holder self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Hold_Holder self
  @param  Acco_AccessObject value
**/
void *Hold_Holder_SetAccess(Hold_Holder self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'setAccess' is not callable");
  
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
  @param  Hold_Holder self
  @param  ApiList values
**/
void *Hold_Holder_SetApplicationData(Hold_Holder self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Holder.Holder.colPosition

The column position of the 
current holder in the parent holder.
  @param  Hold_Holder self
  @param  ApiInteger value
**/
void *Hold_Holder_SetColPosition(Hold_Holder self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setColPosition");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'setColPosition'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'setColPosition' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Holder.Holder.contents

List of sub holder contained in 
an holder. This is the contents of an holder.
  @param  Hold_Holder self
  @param  ApiSet values
**/
void *Hold_Holder_SetContents(Hold_Holder self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setContents");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'setContents'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'setContents' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Holder.Holder.details

Detail field for comments.
  @param  Hold_Holder self
  @param  ApiString value
**/
void *Hold_Holder_SetDetails(Hold_Holder self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Holder.Holder.endDate
  @param  Hold_Holder self
  @param  ApiString value
**/
void *Hold_Holder_SetEndDate(Hold_Holder self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setEndDate");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'setEndDate'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'setEndDate' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Holder.Holder.holder

The holder to which the sub 
holders belong.
  @param  Hold_Holder self
  @param  Hold_Holder value
**/
void *Hold_Holder_SetHolder(Hold_Holder self, Hold_Holder value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setHolder");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'setHolder'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'setHolder' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Holder.Holder.holderCategories
  @param  Hold_Holder self
  @param  ApiSet values
**/
void *Hold_Holder_SetHolderCategories(Hold_Holder self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setHolderCategories");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'setHolderCategories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'setHolderCategories' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Holder.Holder.holderType

The type of holder associated 
to a holder.
  @param  Hold_Holder self
  @param  Hold_AbstractHolderType value
**/
void *Hold_Holder_SetHolderType(Hold_Holder self, Hold_AbstractHolderType value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setHolderType");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'setHolderType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'setHolderType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Holder.Holder.name

The name of the holder or the code 
to identify it. It is the unique identifier.
  @param  Hold_Holder self
  @param  ApiString value
**/
void *Hold_Holder_SetName(Hold_Holder self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Holder.Holder.rowPosition

The row position of the 
current holder in the parent holder.
  @param  Hold_Holder self
  @param  ApiInteger value
**/
void *Hold_Holder_SetRowPosition(Hold_Holder self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRowPosition");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'setRowPosition'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'setRowPosition' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Holder.Holder.samples

List of sample contained in an 
holder.
  @param  Hold_Holder self
  @param  ApiSet values
**/
void *Hold_Holder_SetSamples(Hold_Holder self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSamples");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'setSamples'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'setSamples' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Holder.Holder.startDate
  @param  Hold_Holder self
  @param  ApiString value
**/
void *Hold_Holder_SetStartDate(Hold_Holder self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setStartDate");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'setStartDate'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'setStartDate' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Holder.Holder.subPosition

The sub-position of the 
current holder in the parent holder.
  @param  Hold_Holder self
  @param  ApiInteger value
**/
void *Hold_Holder_SetSubPosition(Hold_Holder self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSubPosition");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'setSubPosition'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'setSubPosition' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Holder.Holder.contents

List of sub holder contained 
in an holder. This is the contents of an holder.
  @param  Hold_Holder self
  @returns   the result
**/
ApiList Hold_Holder_SortedContents(Hold_Holder self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedContents");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'sortedContents'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'sortedContents' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Holder.Holder.holderCategories
  @param  Hold_Holder self
  @returns   the result
**/
ApiList Hold_Holder_SortedHolderCategories(Hold_Holder self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedHolderCategories");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'sortedHolderCategories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'sortedHolderCategories' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Holder.Holder.holderLocations

child link to class 
HolderLocation
  @param  Hold_Holder self
  @returns   the result
**/
ApiList Hold_Holder_SortedHolderLocations(Hold_Holder self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedHolderLocations");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'sortedHolderLocations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'sortedHolderLocations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Holder.Holder.refSamplePositions

child link to 
class RefSamplePosition
  @param  Hold_Holder self
  @returns   the result
**/
ApiList Hold_Holder_SortedRefSamplePositions(Hold_Holder self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedRefSamplePositions");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'sortedRefSamplePositions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'sortedRefSamplePositions' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Holder.Holder.samples

List of sample contained in 
an holder.
  @param  Hold_Holder self
  @returns   the result
**/
ApiList Hold_Holder_SortedSamples(Hold_Holder self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedSamples");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.Holder: cannot find method 'sortedSamples'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.Holder: method 'sortedSamples' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
