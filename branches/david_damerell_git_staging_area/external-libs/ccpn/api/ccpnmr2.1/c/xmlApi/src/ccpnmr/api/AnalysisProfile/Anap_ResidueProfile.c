
#include "ccp.h"

/*
  Profile information for Molecular residues
*/

/* package ccpnmr.api.AnalysisProfile */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_ResidueProfile self
  @param  Impl_ApplicationData value
**/
void *Anap_ResidueProfile_AddApplicationData(Anap_ResidueProfile self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.ResidueProfile: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.ResidueProfile: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccpnmr.AnalysisProfile.ResidueProfile
  @param  Anap_ResidueProfile self
  @param  ApiBoolean complete
**/
void *Anap_ResidueProfile_CheckAllValid(Anap_ResidueProfile self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.ResidueProfile: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.ResidueProfile: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccpnmr.AnalysisProfile.ResidueProfile
  @param  Anap_ResidueProfile self
  @param  ApiBoolean complete
**/
void *Anap_ResidueProfile_CheckValid(Anap_ResidueProfile self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.ResidueProfile: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.ResidueProfile: method 'checkValid' is not callable");
  
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
  @param  Anap_ResidueProfile self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Anap_ResidueProfile_FindAllApplicationData(Anap_ResidueProfile self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.ResidueProfile: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.ResidueProfile: method 'findAllApplicationData' is not callable");
  
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
  @param  Anap_ResidueProfile self
  @returns  all value that satisfy the conditions 
**/
ApiList Anap_ResidueProfile_FindAllApplicationData_keyval0(Anap_ResidueProfile self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anap_ResidueProfile_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_ResidueProfile self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Anap_ResidueProfile_FindAllApplicationData_keyval1(Anap_ResidueProfile self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anap_ResidueProfile_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_ResidueProfile self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Anap_ResidueProfile_FindAllApplicationData_keyval2(Anap_ResidueProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anap_ResidueProfile_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_ResidueProfile self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Anap_ResidueProfile_FindAllApplicationData_keyval3(Anap_ResidueProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anap_ResidueProfile_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_ResidueProfile self
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
ApiList Anap_ResidueProfile_FindAllApplicationData_keyval4(Anap_ResidueProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anap_ResidueProfile_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_ResidueProfile self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anap_ResidueProfile_FindFirstApplicationData(Anap_ResidueProfile self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.ResidueProfile: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.ResidueProfile: method 'findFirstApplicationData' is not callable");
  
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
  @param  Anap_ResidueProfile self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anap_ResidueProfile_FindFirstApplicationData_keyval0(Anap_ResidueProfile self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anap_ResidueProfile_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_ResidueProfile self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anap_ResidueProfile_FindFirstApplicationData_keyval1(Anap_ResidueProfile self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anap_ResidueProfile_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_ResidueProfile self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anap_ResidueProfile_FindFirstApplicationData_keyval2(Anap_ResidueProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anap_ResidueProfile_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_ResidueProfile self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anap_ResidueProfile_FindFirstApplicationData_keyval3(Anap_ResidueProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anap_ResidueProfile_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_ResidueProfile self
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
Impl_ApplicationData Anap_ResidueProfile_FindFirstApplicationData_keyval4(Anap_ResidueProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anap_ResidueProfile_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccpnmr.AnalysisProfile.ResidueProfile
  @param  Anap_ResidueProfile self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Anap_ResidueProfile_Get(Anap_ResidueProfile self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anap_ResidueProfile self
  @returns   the result
**/
Acco_AccessObject Anap_ResidueProfile_GetAccess(Anap_ResidueProfile self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.ResidueProfile: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.ResidueProfile: method 'getAccess' is not callable");
  
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
  @param  Anap_ResidueProfile self
  @returns   the result
**/
Acco_AccessObject Anap_ResidueProfile_GetActiveAccess(Anap_ResidueProfile self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.ResidueProfile: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.ResidueProfile: method 'getActiveAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.AnalysisProfile.ResidueProfile.analysisProfile

parent 
link
  @param  Anap_ResidueProfile self
  @returns   the result
**/
Anap_AnalysisProfile Anap_ResidueProfile_GetAnalysisProfile(Anap_ResidueProfile self)
{
  
  Anap_AnalysisProfile obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAnalysisProfile");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.ResidueProfile: cannot find method 'getAnalysisProfile'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.ResidueProfile: method 'getAnalysisProfile' is not callable");
  
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
  @param  Anap_ResidueProfile self
  @returns   the result
**/
ApiList Anap_ResidueProfile_GetApplicationData(Anap_ResidueProfile self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.ResidueProfile: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.ResidueProfile: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccpnmr.AnalysisProfile.ResidueProfile
  @param  Anap_ResidueProfile self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Anap_ResidueProfile Anap_ResidueProfile_GetByKey(Anap_ResidueProfile self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Anap_ResidueProfile obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.ResidueProfile: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.ResidueProfile: method 'getByKey' is not callable");
  
  args = PyTuple_Pack(2, startObj, fullKey);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.AnalysisProfile.ResidueProfile.ccpCode

ccpCode for 
residue
  @param  Anap_ResidueProfile self
  @returns   the result
**/
ApiString Anap_ResidueProfile_GetCcpCode(Anap_ResidueProfile self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCcpCode");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.ResidueProfile: cannot find method 'getCcpCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.ResidueProfile: method 'getCcpCode' is not callable");
  
  args = PyTuple_New(0);
  
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
  @param  Anap_ResidueProfile self
  @returns   the result
**/
ApiString Anap_ResidueProfile_GetClassName(Anap_ResidueProfile self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.ResidueProfile: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.ResidueProfile: method 'getClassName' is not callable");
  
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
  @param  Anap_ResidueProfile self
  @returns   the result
**/
ApiList Anap_ResidueProfile_GetFieldNames(Anap_ResidueProfile self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.ResidueProfile: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.ResidueProfile: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccpnmr.AnalysisProfile.ResidueProfile
  @param  Anap_ResidueProfile self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Anap_ResidueProfile_GetFullKey(Anap_ResidueProfile self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.ResidueProfile: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.ResidueProfile: method 'getFullKey' is not callable");
  
  args = PyTuple_Pack(1, useGuid);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.AnalysisProfile.ResidueProfile.guiName

Residue name to 
use in graphical interface
  @param  Anap_ResidueProfile self
  @returns   the result
**/
ApiString Anap_ResidueProfile_GetGuiName(Anap_ResidueProfile self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getGuiName");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.ResidueProfile: cannot find method 'getGuiName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.ResidueProfile: method 'getGuiName' is not callable");
  
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
  @param  Anap_ResidueProfile self
  @returns   the result
**/
ApiBoolean Anap_ResidueProfile_GetInConstructor(Anap_ResidueProfile self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.ResidueProfile: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.ResidueProfile: method 'getInConstructor' is not callable");
  
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
  @param  Anap_ResidueProfile self
  @returns   the result
**/
ApiBoolean Anap_ResidueProfile_GetIsDeleted(Anap_ResidueProfile self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.ResidueProfile: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.ResidueProfile: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccpnmr.AnalysisProfile.ResidueProfile
  @param  Anap_ResidueProfile self
  @returns  Local object key
**/
ApiObject Anap_ResidueProfile_GetLocalKey(Anap_ResidueProfile self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.ResidueProfile: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.ResidueProfile: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.AnalysisProfile.ResidueProfile.molType

molType of 
residue
  @param  Anap_ResidueProfile self
  @returns   the result
**/
ApiString Anap_ResidueProfile_GetMolType(Anap_ResidueProfile self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolType");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.ResidueProfile: cannot find method 'getMolType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.ResidueProfile: method 'getMolType' is not callable");
  
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
  @param  Anap_ResidueProfile self
  @returns   the result
**/
ApiString Anap_ResidueProfile_GetPackageName(Anap_ResidueProfile self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.ResidueProfile: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.ResidueProfile: method 'getPackageName' is not callable");
  
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
  @param  Anap_ResidueProfile self
  @returns   the result
**/
ApiString Anap_ResidueProfile_GetPackageShortName(Anap_ResidueProfile self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.ResidueProfile: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.ResidueProfile: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.AnalysisProfile.ResidueProfile.parent

link to parent 
object - synonym for analysisProfile
  @param  Anap_ResidueProfile self
  @returns   the result
**/
Anap_AnalysisProfile Anap_ResidueProfile_GetParent(Anap_ResidueProfile self)
{
  
  Anap_AnalysisProfile obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.ResidueProfile: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.ResidueProfile: method 'getParent' is not callable");
  
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
  @param  Anap_ResidueProfile self
  @returns   the result
**/
ApiString Anap_ResidueProfile_GetQualifiedName(Anap_ResidueProfile self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.ResidueProfile: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.ResidueProfile: method 'getQualifiedName' is not callable");
  
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
  @param  Anap_ResidueProfile self
  @returns   the result
**/
Impl_MemopsRoot Anap_ResidueProfile_GetRoot(Anap_ResidueProfile self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.ResidueProfile: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.ResidueProfile: method 'getRoot' is not callable");
  
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
  @param  Anap_ResidueProfile self
  @returns   the result
**/
Impl_TopObject Anap_ResidueProfile_GetTopObject(Anap_ResidueProfile self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.ResidueProfile: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.ResidueProfile: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccpnmr.AnalysisProfile.ResidueProfile
  @param  Anap_AnalysisProfile parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anap_ResidueProfile Anap_ResidueProfile_Init(Anap_AnalysisProfile parent, ApiMap attrlinks)
{
  
  return Anap_AnalysisProfile_NewResidueProfile(parent, attrlinks);
}

/**
  Constructor for ccpnmr.AnalysisProfile.ResidueProfile
  @param  Anap_AnalysisProfile parent
  @param  char * ccpCode
  @param  char * guiName
  @param  char * molType
  @returns  the new object
**/
Anap_ResidueProfile Anap_ResidueProfile_Init_reqd(Anap_AnalysisProfile parent, char * ccpCode, char * guiName, char * molType)
{
  
  Anap_ResidueProfile  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__ccpCode = ApiString_New(ccpCode);
  ApiString api__guiName = ApiString_New(guiName);
  ApiString api__molType = ApiString_New(molType);

  PyDict_SetItemString(attrlinks, "ccpCode", api__ccpCode);
  PyDict_SetItemString(attrlinks, "guiName", api__guiName);
  PyDict_SetItemString(attrlinks, "molType", api__molType);
  
  obj = Anap_ResidueProfile_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__ccpCode);
  Py_DECREF(api__guiName);
  Py_DECREF(api__molType);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_ResidueProfile self
  @param  Impl_ApplicationData value
**/
void *Anap_ResidueProfile_RemoveApplicationData(Anap_ResidueProfile self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.ResidueProfile: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.ResidueProfile: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccpnmr.AnalysisProfile.ResidueProfile
  @param  Anap_ResidueProfile self
  @param  ApiString name
  @param  ApiObject value
**/
void *Anap_ResidueProfile_Set(Anap_ResidueProfile self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anap_ResidueProfile self
  @param  Acco_AccessObject value
**/
void *Anap_ResidueProfile_SetAccess(Anap_ResidueProfile self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.ResidueProfile: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.ResidueProfile: method 'setAccess' is not callable");
  
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
  @param  Anap_ResidueProfile self
  @param  ApiList values
**/
void *Anap_ResidueProfile_SetApplicationData(Anap_ResidueProfile self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.ResidueProfile: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.ResidueProfile: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.AnalysisProfile.ResidueProfile.ccpCode

ccpCode for 
residue
  @param  Anap_ResidueProfile self
  @param  ApiString value
**/
void *Anap_ResidueProfile_SetCcpCode(Anap_ResidueProfile self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCcpCode");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.ResidueProfile: cannot find method 'setCcpCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.ResidueProfile: method 'setCcpCode' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.AnalysisProfile.ResidueProfile.guiName

Residue name to 
use in graphical interface
  @param  Anap_ResidueProfile self
  @param  ApiString value
**/
void *Anap_ResidueProfile_SetGuiName(Anap_ResidueProfile self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setGuiName");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.ResidueProfile: cannot find method 'setGuiName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.ResidueProfile: method 'setGuiName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.AnalysisProfile.ResidueProfile.molType

molType of 
residue
  @param  Anap_ResidueProfile self
  @param  ApiString value
**/
void *Anap_ResidueProfile_SetMolType(Anap_ResidueProfile self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMolType");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.ResidueProfile: cannot find method 'setMolType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.ResidueProfile: method 'setMolType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
