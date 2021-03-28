
#include "ccp.h"

/*
  Group of specific isotope labels that apply together to an individual molecule. Molecules that are mixtures of isotopomers may have several SpecificLabelGroups. Isotope labeling given in SpecificLabelGroup and IsotopeLabel must be consistent with labeling given in the Label class, as both are valid together.
*/

/* package ccp.api.lims.RefSampleComponent */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_SpecificLabelGroup self
  @param  Impl_ApplicationData value
**/
void *Refs_SpecificLabelGroup_AddApplicationData(Refs_SpecificLabelGroup self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.SpecificLabelGroup: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.SpecificLabelGroup: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.lims.RefSampleComponent.SpecificLabelGroup
  @param  Refs_SpecificLabelGroup self
  @param  ApiBoolean complete
**/
void *Refs_SpecificLabelGroup_CheckAllValid(Refs_SpecificLabelGroup self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.SpecificLabelGroup: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.SpecificLabelGroup: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.lims.RefSampleComponent.SpecificLabelGroup
  @param  Refs_SpecificLabelGroup self
  @param  ApiBoolean complete
**/
void *Refs_SpecificLabelGroup_CheckValid(Refs_SpecificLabelGroup self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.SpecificLabelGroup: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.SpecificLabelGroup: method 'checkValid' is not callable");
  
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
  @param  Refs_SpecificLabelGroup self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Refs_SpecificLabelGroup_FindAllApplicationData(Refs_SpecificLabelGroup self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.SpecificLabelGroup: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.SpecificLabelGroup: method 'findAllApplicationData' is not callable");
  
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
  @param  Refs_SpecificLabelGroup self
  @returns  all value that satisfy the conditions 
**/
ApiList Refs_SpecificLabelGroup_FindAllApplicationData_keyval0(Refs_SpecificLabelGroup self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_SpecificLabelGroup_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_SpecificLabelGroup self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Refs_SpecificLabelGroup_FindAllApplicationData_keyval1(Refs_SpecificLabelGroup self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_SpecificLabelGroup_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_SpecificLabelGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Refs_SpecificLabelGroup_FindAllApplicationData_keyval2(Refs_SpecificLabelGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_SpecificLabelGroup_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_SpecificLabelGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Refs_SpecificLabelGroup_FindAllApplicationData_keyval3(Refs_SpecificLabelGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_SpecificLabelGroup_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_SpecificLabelGroup self
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
ApiList Refs_SpecificLabelGroup_FindAllApplicationData_keyval4(Refs_SpecificLabelGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_SpecificLabelGroup_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.SpecificLabelGroup.isotopeLabels

child link 
to class IsotopeLabel
  @param  Refs_SpecificLabelGroup self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_SpecificLabelGroup_FindAllIsotopeLabels(Refs_SpecificLabelGroup self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllIsotopeLabels");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.SpecificLabelGroup: cannot find method 'findAllIsotopeLabels'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.SpecificLabelGroup: method 'findAllIsotopeLabels' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.SpecificLabelGroup.isotopeLabels

child link 
to class IsotopeLabel
  @param  Refs_SpecificLabelGroup self
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_SpecificLabelGroup_FindAllIsotopeLabels_keyval0(Refs_SpecificLabelGroup self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_SpecificLabelGroup_FindAllIsotopeLabels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.SpecificLabelGroup.isotopeLabels

child link 
to class IsotopeLabel
  @param  Refs_SpecificLabelGroup self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_SpecificLabelGroup_FindAllIsotopeLabels_keyval1(Refs_SpecificLabelGroup self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_SpecificLabelGroup_FindAllIsotopeLabels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.SpecificLabelGroup.isotopeLabels

child link 
to class IsotopeLabel
  @param  Refs_SpecificLabelGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_SpecificLabelGroup_FindAllIsotopeLabels_keyval2(Refs_SpecificLabelGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_SpecificLabelGroup_FindAllIsotopeLabels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.SpecificLabelGroup.isotopeLabels

child link 
to class IsotopeLabel
  @param  Refs_SpecificLabelGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_SpecificLabelGroup_FindAllIsotopeLabels_keyval3(Refs_SpecificLabelGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_SpecificLabelGroup_FindAllIsotopeLabels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.SpecificLabelGroup.isotopeLabels

child link 
to class IsotopeLabel
  @param  Refs_SpecificLabelGroup self
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
ApiSet Refs_SpecificLabelGroup_FindAllIsotopeLabels_keyval4(Refs_SpecificLabelGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_SpecificLabelGroup_FindAllIsotopeLabels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_SpecificLabelGroup self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Refs_SpecificLabelGroup_FindFirstApplicationData(Refs_SpecificLabelGroup self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.SpecificLabelGroup: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.SpecificLabelGroup: method 'findFirstApplicationData' is not callable");
  
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
  @param  Refs_SpecificLabelGroup self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Refs_SpecificLabelGroup_FindFirstApplicationData_keyval0(Refs_SpecificLabelGroup self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_SpecificLabelGroup_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_SpecificLabelGroup self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Refs_SpecificLabelGroup_FindFirstApplicationData_keyval1(Refs_SpecificLabelGroup self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_SpecificLabelGroup_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_SpecificLabelGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Refs_SpecificLabelGroup_FindFirstApplicationData_keyval2(Refs_SpecificLabelGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_SpecificLabelGroup_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_SpecificLabelGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Refs_SpecificLabelGroup_FindFirstApplicationData_keyval3(Refs_SpecificLabelGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_SpecificLabelGroup_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_SpecificLabelGroup self
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
Impl_ApplicationData Refs_SpecificLabelGroup_FindFirstApplicationData_keyval4(Refs_SpecificLabelGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_SpecificLabelGroup_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.SpecificLabelGroup.isotopeLabels

child link 
to class IsotopeLabel
  @param  Refs_SpecificLabelGroup self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Refs_IsotopeLabel Refs_SpecificLabelGroup_FindFirstIsotopeLabel(Refs_SpecificLabelGroup self, ApiMap conditions)
{
  
  Refs_IsotopeLabel obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstIsotopeLabel");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.SpecificLabelGroup: cannot find method 'findFirstIsotopeLabel'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.SpecificLabelGroup: method 'findFirstIsotopeLabel' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.SpecificLabelGroup.isotopeLabels

child link 
to class IsotopeLabel
  @param  Refs_SpecificLabelGroup self
  @returns  the first value that satisfies the conditions 
**/
Refs_IsotopeLabel Refs_SpecificLabelGroup_FindFirstIsotopeLabel_keyval0(Refs_SpecificLabelGroup self)
{
  
  Refs_IsotopeLabel  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_SpecificLabelGroup_FindFirstIsotopeLabel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.SpecificLabelGroup.isotopeLabels

child link 
to class IsotopeLabel
  @param  Refs_SpecificLabelGroup self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Refs_IsotopeLabel Refs_SpecificLabelGroup_FindFirstIsotopeLabel_keyval1(Refs_SpecificLabelGroup self, char * key, ApiObject value)
{
  
  Refs_IsotopeLabel  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_SpecificLabelGroup_FindFirstIsotopeLabel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.SpecificLabelGroup.isotopeLabels

child link 
to class IsotopeLabel
  @param  Refs_SpecificLabelGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Refs_IsotopeLabel Refs_SpecificLabelGroup_FindFirstIsotopeLabel_keyval2(Refs_SpecificLabelGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Refs_IsotopeLabel  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_SpecificLabelGroup_FindFirstIsotopeLabel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.SpecificLabelGroup.isotopeLabels

child link 
to class IsotopeLabel
  @param  Refs_SpecificLabelGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Refs_IsotopeLabel Refs_SpecificLabelGroup_FindFirstIsotopeLabel_keyval3(Refs_SpecificLabelGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Refs_IsotopeLabel  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_SpecificLabelGroup_FindFirstIsotopeLabel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.SpecificLabelGroup.isotopeLabels

child link 
to class IsotopeLabel
  @param  Refs_SpecificLabelGroup self
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
Refs_IsotopeLabel Refs_SpecificLabelGroup_FindFirstIsotopeLabel_keyval4(Refs_SpecificLabelGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Refs_IsotopeLabel  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_SpecificLabelGroup_FindFirstIsotopeLabel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.lims.RefSampleComponent.SpecificLabelGroup
  @param  Refs_SpecificLabelGroup self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Refs_SpecificLabelGroup_Get(Refs_SpecificLabelGroup self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Refs_SpecificLabelGroup self
  @returns   the result
**/
Acco_AccessObject Refs_SpecificLabelGroup_GetAccess(Refs_SpecificLabelGroup self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.SpecificLabelGroup: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.SpecificLabelGroup: method 'getAccess' is not callable");
  
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
  @param  Refs_SpecificLabelGroup self
  @returns   the result
**/
Acco_AccessObject Refs_SpecificLabelGroup_GetActiveAccess(Refs_SpecificLabelGroup self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.SpecificLabelGroup: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.SpecificLabelGroup: method 'getActiveAccess' is not callable");
  
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
  @param  Refs_SpecificLabelGroup self
  @returns   the result
**/
ApiList Refs_SpecificLabelGroup_GetApplicationData(Refs_SpecificLabelGroup self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.SpecificLabelGroup: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.SpecificLabelGroup: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.lims.RefSampleComponent.SpecificLabelGroup
  @param  Refs_SpecificLabelGroup self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Refs_SpecificLabelGroup Refs_SpecificLabelGroup_GetByKey(Refs_SpecificLabelGroup self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Refs_SpecificLabelGroup obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.SpecificLabelGroup: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.SpecificLabelGroup: method 'getByKey' is not callable");
  
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
  @param  Refs_SpecificLabelGroup self
  @returns   the result
**/
ApiString Refs_SpecificLabelGroup_GetClassName(Refs_SpecificLabelGroup self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.SpecificLabelGroup: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.SpecificLabelGroup: method 'getClassName' is not callable");
  
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
  @param  Refs_SpecificLabelGroup self
  @returns   the result
**/
ApiList Refs_SpecificLabelGroup_GetFieldNames(Refs_SpecificLabelGroup self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.SpecificLabelGroup: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.SpecificLabelGroup: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.lims.RefSampleComponent.SpecificLabelGroup.fraction

Fraction of the 
molecules that are labeled with the labeing pattern defined by the 
SpecificLabelGroup. If the fraction attributes of the various 
specificLabelGroups do not add up to 100%, the remainder of the 
molecules in the group are assumed to be at natural abundance.
  @param  Refs_SpecificLabelGroup self
  @returns   the result
**/
ApiFloat Refs_SpecificLabelGroup_GetFraction(Refs_SpecificLabelGroup self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFraction");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.SpecificLabelGroup: cannot find method 'getFraction'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.SpecificLabelGroup: method 'getFraction' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.lims.RefSampleComponent.SpecificLabelGroup
  @param  Refs_SpecificLabelGroup self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Refs_SpecificLabelGroup_GetFullKey(Refs_SpecificLabelGroup self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.SpecificLabelGroup: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.SpecificLabelGroup: method 'getFullKey' is not callable");
  
  args = PyTuple_Pack(1, useGuid);
  
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
  @param  Refs_SpecificLabelGroup self
  @returns   the result
**/
ApiBoolean Refs_SpecificLabelGroup_GetInConstructor(Refs_SpecificLabelGroup self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.SpecificLabelGroup: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.SpecificLabelGroup: method 'getInConstructor' is not callable");
  
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
  @param  Refs_SpecificLabelGroup self
  @returns   the result
**/
ApiBoolean Refs_SpecificLabelGroup_GetIsDeleted(Refs_SpecificLabelGroup self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.SpecificLabelGroup: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.SpecificLabelGroup: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.lims.RefSampleComponent.SpecificLabelGroup.isotopeLabels

child link 
to class IsotopeLabel
  @param  Refs_SpecificLabelGroup self
  @returns   the result
**/
ApiSet Refs_SpecificLabelGroup_GetIsotopeLabels(Refs_SpecificLabelGroup self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsotopeLabels");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.SpecificLabelGroup: cannot find method 'getIsotopeLabels'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.SpecificLabelGroup: method 'getIsotopeLabels' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.lims.RefSampleComponent.SpecificLabelGroup
  @param  Refs_SpecificLabelGroup self
  @returns  Local object key
**/
ApiObject Refs_SpecificLabelGroup_GetLocalKey(Refs_SpecificLabelGroup self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.SpecificLabelGroup: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.SpecificLabelGroup: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.lims.RefSampleComponent.SpecificLabelGroup.molComponent

parent link
  @param  Refs_SpecificLabelGroup self
  @returns   the result
**/
Refs_MolComponent Refs_SpecificLabelGroup_GetMolComponent(Refs_SpecificLabelGroup self)
{
  
  Refs_MolComponent obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolComponent");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.SpecificLabelGroup: cannot find method 'getMolComponent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.SpecificLabelGroup: method 'getMolComponent' is not callable");
  
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
  @param  Refs_SpecificLabelGroup self
  @returns   the result
**/
ApiString Refs_SpecificLabelGroup_GetPackageName(Refs_SpecificLabelGroup self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.SpecificLabelGroup: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.SpecificLabelGroup: method 'getPackageName' is not callable");
  
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
  @param  Refs_SpecificLabelGroup self
  @returns   the result
**/
ApiString Refs_SpecificLabelGroup_GetPackageShortName(Refs_SpecificLabelGroup self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.SpecificLabelGroup: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.SpecificLabelGroup: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.SpecificLabelGroup.parent

link to 
parent object - synonym for molComponent
  @param  Refs_SpecificLabelGroup self
  @returns   the result
**/
Refs_MolComponent Refs_SpecificLabelGroup_GetParent(Refs_SpecificLabelGroup self)
{
  
  Refs_MolComponent obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.SpecificLabelGroup: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.SpecificLabelGroup: method 'getParent' is not callable");
  
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
  @param  Refs_SpecificLabelGroup self
  @returns   the result
**/
ApiString Refs_SpecificLabelGroup_GetQualifiedName(Refs_SpecificLabelGroup self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.SpecificLabelGroup: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.SpecificLabelGroup: method 'getQualifiedName' is not callable");
  
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
  @param  Refs_SpecificLabelGroup self
  @returns   the result
**/
Impl_MemopsRoot Refs_SpecificLabelGroup_GetRoot(Refs_SpecificLabelGroup self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.SpecificLabelGroup: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.SpecificLabelGroup: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.SpecificLabelGroup.serial

Serial 
number of object. Serves as object main key. Serial numbers of deleted 
objects are not re-used. Serial numbers can only be set by the 
implementation. Values are in practice always positive, since negative 
values are interpreted as a signal to set the next free serial
  @param  Refs_SpecificLabelGroup self
  @returns   the result
**/
ApiInteger Refs_SpecificLabelGroup_GetSerial(Refs_SpecificLabelGroup self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.SpecificLabelGroup: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.SpecificLabelGroup: method 'getSerial' is not callable");
  
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
  @param  Refs_SpecificLabelGroup self
  @returns   the result
**/
Impl_TopObject Refs_SpecificLabelGroup_GetTopObject(Refs_SpecificLabelGroup self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.SpecificLabelGroup: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.SpecificLabelGroup: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.lims.RefSampleComponent.SpecificLabelGroup
  @param  Refs_MolComponent parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Refs_SpecificLabelGroup Refs_SpecificLabelGroup_Init(Refs_MolComponent parent, ApiMap attrlinks)
{
  
  return Refs_MolComponent_NewSpecificLabelGroup(parent, attrlinks);
}

/**
  Constructor for ccp.lims.RefSampleComponent.SpecificLabelGroup
  @param  Refs_MolComponent parent
  @returns  the new object
**/
Refs_SpecificLabelGroup Refs_SpecificLabelGroup_Init_reqd(Refs_MolComponent parent)
{
  
  Refs_SpecificLabelGroup  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Refs_SpecificLabelGroup_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.lims.RefSampleComponent.IsotopeLabel
  @param  Refs_SpecificLabelGroup self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Refs_IsotopeLabel Refs_SpecificLabelGroup_NewIsotopeLabel(Refs_SpecificLabelGroup self, ApiMap attrlinks)
{
  
  Refs_IsotopeLabel obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newIsotopeLabel");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.SpecificLabelGroup: cannot find method 'newIsotopeLabel'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.SpecificLabelGroup: method 'newIsotopeLabel' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.lims.RefSampleComponent.IsotopeLabel
  @param  Refs_SpecificLabelGroup self
  @param  char * elementSymbol
  @param  ApiInteger massNumber
  @returns  the new object
**/
Refs_IsotopeLabel Refs_SpecificLabelGroup_NewIsotopeLabel_reqd(Refs_SpecificLabelGroup self, char * elementSymbol, ApiInteger massNumber)
{
  
  Refs_IsotopeLabel  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__elementSymbol = ApiString_New(elementSymbol);

  PyDict_SetItemString(attrlinks, "elementSymbol", api__elementSymbol);
  PyDict_SetItemString(attrlinks, "massNumber", massNumber);
  
  obj = Refs_SpecificLabelGroup_NewIsotopeLabel(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__elementSymbol);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_SpecificLabelGroup self
  @param  Impl_ApplicationData value
**/
void *Refs_SpecificLabelGroup_RemoveApplicationData(Refs_SpecificLabelGroup self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.SpecificLabelGroup: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.SpecificLabelGroup: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.lims.RefSampleComponent.SpecificLabelGroup
  @param  Refs_SpecificLabelGroup self
  @param  ApiString name
  @param  ApiObject value
**/
void *Refs_SpecificLabelGroup_Set(Refs_SpecificLabelGroup self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Refs_SpecificLabelGroup self
  @param  Acco_AccessObject value
**/
void *Refs_SpecificLabelGroup_SetAccess(Refs_SpecificLabelGroup self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.SpecificLabelGroup: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.SpecificLabelGroup: method 'setAccess' is not callable");
  
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
  @param  Refs_SpecificLabelGroup self
  @param  ApiList values
**/
void *Refs_SpecificLabelGroup_SetApplicationData(Refs_SpecificLabelGroup self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.SpecificLabelGroup: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.SpecificLabelGroup: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.lims.RefSampleComponent.SpecificLabelGroup.fraction

Fraction of the 
molecules that are labeled with the labeing pattern defined by the 
SpecificLabelGroup. If the fraction attributes of the various 
specificLabelGroups do not add up to 100%, the remainder of the 
molecules in the group are assumed to be at natural abundance.
  @param  Refs_SpecificLabelGroup self
  @param  ApiFloat value
**/
void *Refs_SpecificLabelGroup_SetFraction(Refs_SpecificLabelGroup self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setFraction");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.SpecificLabelGroup: cannot find method 'setFraction'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.SpecificLabelGroup: method 'setFraction' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.RefSampleComponent.SpecificLabelGroup.serial

Serial 
number of object. Serves as object main key. Serial numbers of deleted 
objects are not re-used. Serial numbers can only be set by the 
implementation. Values are in practice always positive, since negative 
values are interpreted as a signal to set the next free serial
  @param  Refs_SpecificLabelGroup self
  @param  ApiInteger value
**/
void *Refs_SpecificLabelGroup_SetSerial(Refs_SpecificLabelGroup self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.SpecificLabelGroup: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.SpecificLabelGroup: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.lims.RefSampleComponent.SpecificLabelGroup.isotopeLabels

child link 
to class IsotopeLabel
  @param  Refs_SpecificLabelGroup self
  @returns   the result
**/
ApiList Refs_SpecificLabelGroup_SortedIsotopeLabels(Refs_SpecificLabelGroup self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedIsotopeLabels");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.SpecificLabelGroup: cannot find method 'sortedIsotopeLabels'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.SpecificLabelGroup: method 'sortedIsotopeLabels' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
