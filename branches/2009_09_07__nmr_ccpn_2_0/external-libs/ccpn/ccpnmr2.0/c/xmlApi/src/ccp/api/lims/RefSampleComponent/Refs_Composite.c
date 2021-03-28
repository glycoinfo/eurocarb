
#include "ccp.h"

/*
  Composite is a subclass of AbstractComponent. It is a non-covalent complex of any kind. E.g. A DNA duplex, a micelle, possibly containing other molecules. A protein with an inhibitor bound. A cell containing plasmids.
*/

/* package ccp.api.lims.RefSampleComponent */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_Composite self
  @param  Impl_ApplicationData value
**/
void *Refs_Composite_AddApplicationData(Refs_Composite self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.lims.RefSampleComponent.AbstractComponent.categories

List 
of category associated to a component.
  @param  Refs_Composite self
  @param  Clas_SampleComponentCategory value
**/
void *Refs_Composite_AddCategory(Refs_Composite self, Clas_SampleComponentCategory value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addCategory");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: cannot find method 'addCategory'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: method 'addCategory' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.lims.RefSampleComponent.AbstractComponent.synonyms

The 
synonyms of the component.
  @param  Refs_Composite self
  @param  ApiString value
**/
void *Refs_Composite_AddSynonym(Refs_Composite self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addSynonym");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: cannot find method 'addSynonym'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: method 'addSynonym' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.lims.RefSampleComponent.Composite
  @param  Refs_Composite self
  @param  ApiBoolean complete
**/
void *Refs_Composite_CheckAllValid(Refs_Composite self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.lims.RefSampleComponent.Composite
  @param  Refs_Composite self
  @param  ApiBoolean complete
**/
void *Refs_Composite_CheckValid(Refs_Composite self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: method 'checkValid' is not callable");
  
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
  @param  Refs_Composite self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Refs_Composite_FindAllApplicationData(Refs_Composite self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: method 'findAllApplicationData' is not callable");
  
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
  @param  Refs_Composite self
  @returns  all value that satisfy the conditions 
**/
ApiList Refs_Composite_FindAllApplicationData_keyval0(Refs_Composite self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_Composite_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_Composite self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Refs_Composite_FindAllApplicationData_keyval1(Refs_Composite self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_Composite_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_Composite self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Refs_Composite_FindAllApplicationData_keyval2(Refs_Composite self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_Composite_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_Composite self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Refs_Composite_FindAllApplicationData_keyval3(Refs_Composite self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_Composite_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_Composite self
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
ApiList Refs_Composite_FindAllApplicationData_keyval4(Refs_Composite self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_Composite_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_Composite self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Composite_FindAllCategories(Refs_Composite self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllCategories");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: cannot find method 'findAllCategories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: method 'findAllCategories' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_Composite self
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Composite_FindAllCategories_keyval0(Refs_Composite self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_Composite_FindAllCategories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_Composite self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Composite_FindAllCategories_keyval1(Refs_Composite self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_Composite_FindAllCategories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_Composite self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Composite_FindAllCategories_keyval2(Refs_Composite self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_Composite_FindAllCategories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_Composite self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Composite_FindAllCategories_keyval3(Refs_Composite self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_Composite_FindAllCategories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_Composite self
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
ApiSet Refs_Composite_FindAllCategories_keyval4(Refs_Composite self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_Composite_FindAllCategories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_Composite self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Composite_FindAllComponentDbRefs(Refs_Composite self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllComponentDbRefs");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: cannot find method 'findAllComponentDbRefs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: method 'findAllComponentDbRefs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_Composite self
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Composite_FindAllComponentDbRefs_keyval0(Refs_Composite self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_Composite_FindAllComponentDbRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_Composite self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Composite_FindAllComponentDbRefs_keyval1(Refs_Composite self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_Composite_FindAllComponentDbRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_Composite self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Composite_FindAllComponentDbRefs_keyval2(Refs_Composite self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_Composite_FindAllComponentDbRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_Composite self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Composite_FindAllComponentDbRefs_keyval3(Refs_Composite self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_Composite_FindAllComponentDbRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_Composite self
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
ApiSet Refs_Composite_FindAllComponentDbRefs_keyval4(Refs_Composite self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_Composite_FindAllComponentDbRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_Composite self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Composite_FindAllCompositeElements(Refs_Composite self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllCompositeElements");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: cannot find method 'findAllCompositeElements'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: method 'findAllCompositeElements' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_Composite self
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Composite_FindAllCompositeElements_keyval0(Refs_Composite self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_Composite_FindAllCompositeElements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_Composite self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Composite_FindAllCompositeElements_keyval1(Refs_Composite self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_Composite_FindAllCompositeElements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_Composite self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Composite_FindAllCompositeElements_keyval2(Refs_Composite self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_Composite_FindAllCompositeElements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_Composite self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Composite_FindAllCompositeElements_keyval3(Refs_Composite self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_Composite_FindAllCompositeElements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_Composite self
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
ApiSet Refs_Composite_FindAllCompositeElements_keyval4(Refs_Composite self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_Composite_FindAllCompositeElements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.RefSampleComponent.Composite.elements

child link 
to class CompositeElement
  @param  Refs_Composite self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Composite_FindAllElements(Refs_Composite self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllElements");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: cannot find method 'findAllElements'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: method 'findAllElements' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.RefSampleComponent.Composite.elements

child link 
to class CompositeElement
  @param  Refs_Composite self
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Composite_FindAllElements_keyval0(Refs_Composite self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_Composite_FindAllElements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.RefSampleComponent.Composite.elements

child link 
to class CompositeElement
  @param  Refs_Composite self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Composite_FindAllElements_keyval1(Refs_Composite self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_Composite_FindAllElements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.RefSampleComponent.Composite.elements

child link 
to class CompositeElement
  @param  Refs_Composite self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Composite_FindAllElements_keyval2(Refs_Composite self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_Composite_FindAllElements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.RefSampleComponent.Composite.elements

child link 
to class CompositeElement
  @param  Refs_Composite self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Composite_FindAllElements_keyval3(Refs_Composite self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_Composite_FindAllElements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.RefSampleComponent.Composite.elements

child link 
to class CompositeElement
  @param  Refs_Composite self
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
ApiSet Refs_Composite_FindAllElements_keyval4(Refs_Composite self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_Composite_FindAllElements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.RefSampleComponent.Composite.interactions

child 
link to class CompositeInteraction
  @param  Refs_Composite self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Composite_FindAllInteractions(Refs_Composite self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllInteractions");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: cannot find method 'findAllInteractions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: method 'findAllInteractions' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.RefSampleComponent.Composite.interactions

child 
link to class CompositeInteraction
  @param  Refs_Composite self
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Composite_FindAllInteractions_keyval0(Refs_Composite self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_Composite_FindAllInteractions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.RefSampleComponent.Composite.interactions

child 
link to class CompositeInteraction
  @param  Refs_Composite self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Composite_FindAllInteractions_keyval1(Refs_Composite self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_Composite_FindAllInteractions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.RefSampleComponent.Composite.interactions

child 
link to class CompositeInteraction
  @param  Refs_Composite self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Composite_FindAllInteractions_keyval2(Refs_Composite self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_Composite_FindAllInteractions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.RefSampleComponent.Composite.interactions

child 
link to class CompositeInteraction
  @param  Refs_Composite self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Composite_FindAllInteractions_keyval3(Refs_Composite self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_Composite_FindAllInteractions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.RefSampleComponent.Composite.interactions

child 
link to class CompositeInteraction
  @param  Refs_Composite self
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
ApiSet Refs_Composite_FindAllInteractions_keyval4(Refs_Composite self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_Composite_FindAllInteractions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.RefSampleComponent.AbstractComponent.labels

child 
link to class Label
  @param  Refs_Composite self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Composite_FindAllLabels(Refs_Composite self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllLabels");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: cannot find method 'findAllLabels'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: method 'findAllLabels' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.RefSampleComponent.AbstractComponent.labels

child 
link to class Label
  @param  Refs_Composite self
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Composite_FindAllLabels_keyval0(Refs_Composite self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_Composite_FindAllLabels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.RefSampleComponent.AbstractComponent.labels

child 
link to class Label
  @param  Refs_Composite self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Composite_FindAllLabels_keyval1(Refs_Composite self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_Composite_FindAllLabels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.RefSampleComponent.AbstractComponent.labels

child 
link to class Label
  @param  Refs_Composite self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Composite_FindAllLabels_keyval2(Refs_Composite self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_Composite_FindAllLabels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.RefSampleComponent.AbstractComponent.labels

child 
link to class Label
  @param  Refs_Composite self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Composite_FindAllLabels_keyval3(Refs_Composite self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_Composite_FindAllLabels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.RefSampleComponent.AbstractComponent.labels

child 
link to class Label
  @param  Refs_Composite self
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
ApiSet Refs_Composite_FindAllLabels_keyval4(Refs_Composite self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_Composite_FindAllLabels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_Composite self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Refs_Composite_FindFirstApplicationData(Refs_Composite self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: method 'findFirstApplicationData' is not callable");
  
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
  @param  Refs_Composite self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Refs_Composite_FindFirstApplicationData_keyval0(Refs_Composite self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_Composite_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_Composite self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Refs_Composite_FindFirstApplicationData_keyval1(Refs_Composite self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_Composite_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_Composite self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Refs_Composite_FindFirstApplicationData_keyval2(Refs_Composite self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_Composite_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_Composite self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Refs_Composite_FindFirstApplicationData_keyval3(Refs_Composite self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_Composite_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_Composite self
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
Impl_ApplicationData Refs_Composite_FindFirstApplicationData_keyval4(Refs_Composite self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_Composite_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_Composite self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Clas_SampleComponentCategory Refs_Composite_FindFirstCategory(Refs_Composite self, ApiMap conditions)
{
  
  Clas_SampleComponentCategory obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstCategory");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: cannot find method 'findFirstCategory'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: method 'findFirstCategory' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_Composite self
  @returns  the first value that satisfies the conditions 
**/
Clas_SampleComponentCategory Refs_Composite_FindFirstCategory_keyval0(Refs_Composite self)
{
  
  Clas_SampleComponentCategory  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_Composite_FindFirstCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_Composite self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Clas_SampleComponentCategory Refs_Composite_FindFirstCategory_keyval1(Refs_Composite self, char * key, ApiObject value)
{
  
  Clas_SampleComponentCategory  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_Composite_FindFirstCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_Composite self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Clas_SampleComponentCategory Refs_Composite_FindFirstCategory_keyval2(Refs_Composite self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Clas_SampleComponentCategory  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_Composite_FindFirstCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_Composite self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Clas_SampleComponentCategory Refs_Composite_FindFirstCategory_keyval3(Refs_Composite self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Clas_SampleComponentCategory  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_Composite_FindFirstCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_Composite self
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
Clas_SampleComponentCategory Refs_Composite_FindFirstCategory_keyval4(Refs_Composite self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Clas_SampleComponentCategory  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_Composite_FindFirstCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_Composite self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Refs_ComponentDbRef Refs_Composite_FindFirstComponentDbRef(Refs_Composite self, ApiMap conditions)
{
  
  Refs_ComponentDbRef obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstComponentDbRef");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: cannot find method 'findFirstComponentDbRef'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: method 'findFirstComponentDbRef' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_Composite self
  @returns  the first value that satisfies the conditions 
**/
Refs_ComponentDbRef Refs_Composite_FindFirstComponentDbRef_keyval0(Refs_Composite self)
{
  
  Refs_ComponentDbRef  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_Composite_FindFirstComponentDbRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_Composite self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Refs_ComponentDbRef Refs_Composite_FindFirstComponentDbRef_keyval1(Refs_Composite self, char * key, ApiObject value)
{
  
  Refs_ComponentDbRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_Composite_FindFirstComponentDbRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_Composite self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Refs_ComponentDbRef Refs_Composite_FindFirstComponentDbRef_keyval2(Refs_Composite self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Refs_ComponentDbRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_Composite_FindFirstComponentDbRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_Composite self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Refs_ComponentDbRef Refs_Composite_FindFirstComponentDbRef_keyval3(Refs_Composite self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Refs_ComponentDbRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_Composite_FindFirstComponentDbRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_Composite self
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
Refs_ComponentDbRef Refs_Composite_FindFirstComponentDbRef_keyval4(Refs_Composite self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Refs_ComponentDbRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_Composite_FindFirstComponentDbRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_Composite self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Refs_CompositeElement Refs_Composite_FindFirstCompositeElement(Refs_Composite self, ApiMap conditions)
{
  
  Refs_CompositeElement obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstCompositeElement");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: cannot find method 'findFirstCompositeElement'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: method 'findFirstCompositeElement' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_Composite self
  @returns  the first value that satisfies the conditions 
**/
Refs_CompositeElement Refs_Composite_FindFirstCompositeElement_keyval0(Refs_Composite self)
{
  
  Refs_CompositeElement  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_Composite_FindFirstCompositeElement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_Composite self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Refs_CompositeElement Refs_Composite_FindFirstCompositeElement_keyval1(Refs_Composite self, char * key, ApiObject value)
{
  
  Refs_CompositeElement  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_Composite_FindFirstCompositeElement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_Composite self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Refs_CompositeElement Refs_Composite_FindFirstCompositeElement_keyval2(Refs_Composite self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Refs_CompositeElement  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_Composite_FindFirstCompositeElement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_Composite self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Refs_CompositeElement Refs_Composite_FindFirstCompositeElement_keyval3(Refs_Composite self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Refs_CompositeElement  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_Composite_FindFirstCompositeElement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_Composite self
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
Refs_CompositeElement Refs_Composite_FindFirstCompositeElement_keyval4(Refs_Composite self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Refs_CompositeElement  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_Composite_FindFirstCompositeElement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.RefSampleComponent.Composite.elements

child link 
to class CompositeElement
  @param  Refs_Composite self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Refs_CompositeElement Refs_Composite_FindFirstElement(Refs_Composite self, ApiMap conditions)
{
  
  Refs_CompositeElement obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstElement");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: cannot find method 'findFirstElement'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: method 'findFirstElement' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.RefSampleComponent.Composite.elements

child link 
to class CompositeElement
  @param  Refs_Composite self
  @returns  the first value that satisfies the conditions 
**/
Refs_CompositeElement Refs_Composite_FindFirstElement_keyval0(Refs_Composite self)
{
  
  Refs_CompositeElement  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_Composite_FindFirstElement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.RefSampleComponent.Composite.elements

child link 
to class CompositeElement
  @param  Refs_Composite self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Refs_CompositeElement Refs_Composite_FindFirstElement_keyval1(Refs_Composite self, char * key, ApiObject value)
{
  
  Refs_CompositeElement  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_Composite_FindFirstElement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.RefSampleComponent.Composite.elements

child link 
to class CompositeElement
  @param  Refs_Composite self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Refs_CompositeElement Refs_Composite_FindFirstElement_keyval2(Refs_Composite self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Refs_CompositeElement  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_Composite_FindFirstElement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.RefSampleComponent.Composite.elements

child link 
to class CompositeElement
  @param  Refs_Composite self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Refs_CompositeElement Refs_Composite_FindFirstElement_keyval3(Refs_Composite self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Refs_CompositeElement  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_Composite_FindFirstElement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.RefSampleComponent.Composite.elements

child link 
to class CompositeElement
  @param  Refs_Composite self
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
Refs_CompositeElement Refs_Composite_FindFirstElement_keyval4(Refs_Composite self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Refs_CompositeElement  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_Composite_FindFirstElement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.RefSampleComponent.Composite.interactions

child 
link to class CompositeInteraction
  @param  Refs_Composite self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Refs_CompositeInteraction Refs_Composite_FindFirstInteraction(Refs_Composite self, ApiMap conditions)
{
  
  Refs_CompositeInteraction obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstInteraction");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: cannot find method 'findFirstInteraction'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: method 'findFirstInteraction' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.RefSampleComponent.Composite.interactions

child 
link to class CompositeInteraction
  @param  Refs_Composite self
  @returns  the first value that satisfies the conditions 
**/
Refs_CompositeInteraction Refs_Composite_FindFirstInteraction_keyval0(Refs_Composite self)
{
  
  Refs_CompositeInteraction  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_Composite_FindFirstInteraction(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.RefSampleComponent.Composite.interactions

child 
link to class CompositeInteraction
  @param  Refs_Composite self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Refs_CompositeInteraction Refs_Composite_FindFirstInteraction_keyval1(Refs_Composite self, char * key, ApiObject value)
{
  
  Refs_CompositeInteraction  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_Composite_FindFirstInteraction(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.RefSampleComponent.Composite.interactions

child 
link to class CompositeInteraction
  @param  Refs_Composite self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Refs_CompositeInteraction Refs_Composite_FindFirstInteraction_keyval2(Refs_Composite self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Refs_CompositeInteraction  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_Composite_FindFirstInteraction(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.RefSampleComponent.Composite.interactions

child 
link to class CompositeInteraction
  @param  Refs_Composite self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Refs_CompositeInteraction Refs_Composite_FindFirstInteraction_keyval3(Refs_Composite self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Refs_CompositeInteraction  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_Composite_FindFirstInteraction(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.RefSampleComponent.Composite.interactions

child 
link to class CompositeInteraction
  @param  Refs_Composite self
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
Refs_CompositeInteraction Refs_Composite_FindFirstInteraction_keyval4(Refs_Composite self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Refs_CompositeInteraction  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_Composite_FindFirstInteraction(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.labels

child link to 
class Label
  @param  Refs_Composite self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Refs_Label Refs_Composite_FindFirstLabel(Refs_Composite self, ApiMap conditions)
{
  
  Refs_Label obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstLabel");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: cannot find method 'findFirstLabel'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: method 'findFirstLabel' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.labels

child link to 
class Label
  @param  Refs_Composite self
  @returns  the first value that satisfies the conditions 
**/
Refs_Label Refs_Composite_FindFirstLabel_keyval0(Refs_Composite self)
{
  
  Refs_Label  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_Composite_FindFirstLabel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.labels

child link to 
class Label
  @param  Refs_Composite self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Refs_Label Refs_Composite_FindFirstLabel_keyval1(Refs_Composite self, char * key, ApiObject value)
{
  
  Refs_Label  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_Composite_FindFirstLabel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.labels

child link to 
class Label
  @param  Refs_Composite self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Refs_Label Refs_Composite_FindFirstLabel_keyval2(Refs_Composite self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Refs_Label  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_Composite_FindFirstLabel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.labels

child link to 
class Label
  @param  Refs_Composite self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Refs_Label Refs_Composite_FindFirstLabel_keyval3(Refs_Composite self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Refs_Label  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_Composite_FindFirstLabel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.labels

child link to 
class Label
  @param  Refs_Composite self
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
Refs_Label Refs_Composite_FindFirstLabel_keyval4(Refs_Composite self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Refs_Label  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_Composite_FindFirstLabel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.lims.RefSampleComponent.Composite
  @param  Refs_Composite self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Refs_Composite_Get(Refs_Composite self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Refs_Composite self
  @returns   the result
**/
Acco_AccessObject Refs_Composite_GetAccess(Refs_Composite self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: method 'getAccess' is not callable");
  
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
  @param  Refs_Composite self
  @returns   the result
**/
ApiList Refs_Composite_GetApplicationData(Refs_Composite self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.Composite.assessmentMethod

The 
assessment Method used to determine the composite.
  @param  Refs_Composite self
  @returns   the result
**/
ApiString Refs_Composite_GetAssessmentMethod(Refs_Composite self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAssessmentMethod");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: cannot find method 'getAssessmentMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: method 'getAssessmentMethod' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.lims.RefSampleComponent.Composite
  @param  Refs_Composite self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Refs_Composite Refs_Composite_GetByKey(Refs_Composite self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Refs_Composite obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: method 'getByKey' is not callable");
  
  args = PyTuple_Pack(2, startObj, fullKey);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.AbstractComponent.categories

List 
of category associated to a component.
  @param  Refs_Composite self
  @returns   the result
**/
ApiSet Refs_Composite_GetCategories(Refs_Composite self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCategories");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: cannot find method 'getCategories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: method 'getCategories' is not callable");
  
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
  @param  Refs_Composite self
  @returns   the result
**/
ApiString Refs_Composite_GetClassName(Refs_Composite self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_Composite self
  @returns   the result
**/
ApiSet Refs_Composite_GetComponentDbRefs(Refs_Composite self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getComponentDbRefs");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: cannot find method 'getComponentDbRefs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: method 'getComponentDbRefs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_Composite self
  @returns   the result
**/
ApiSet Refs_Composite_GetCompositeElements(Refs_Composite self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCompositeElements");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: cannot find method 'getCompositeElements'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: method 'getCompositeElements' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.AbstractComponent.details

Detail 
field for comments.
  @param  Refs_Composite self
  @returns   the result
**/
ApiString Refs_Composite_GetDetails(Refs_Composite self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: method 'getDetails' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.Composite.elements

child link to 
class CompositeElement
  @param  Refs_Composite self
  @returns   the result
**/
ApiSet Refs_Composite_GetElements(Refs_Composite self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getElements");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: cannot find method 'getElements'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: method 'getElements' is not callable");
  
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
  @param  Refs_Composite self
  @returns   the result
**/
ApiList Refs_Composite_GetFieldNames(Refs_Composite self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: method 'getFieldNames' is not callable");
  
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
  @param  Refs_Composite self
  @returns   the result
**/
ApiBoolean Refs_Composite_GetInConstructor(Refs_Composite self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: method 'getInConstructor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.Composite.interactions

child link 
to class CompositeInteraction
  @param  Refs_Composite self
  @returns   the result
**/
ApiSet Refs_Composite_GetInteractions(Refs_Composite self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInteractions");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: cannot find method 'getInteractions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: method 'getInteractions' is not callable");
  
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
  @param  Refs_Composite self
  @returns   the result
**/
ApiBoolean Refs_Composite_GetIsDeleted(Refs_Composite self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.AbstractComponent.labels

child link 
to class Label
  @param  Refs_Composite self
  @returns   the result
**/
ApiSet Refs_Composite_GetLabels(Refs_Composite self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLabels");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: cannot find method 'getLabels'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: method 'getLabels' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.Composite.molecularMass

The 
experimental molecular mass in dalton (Da).
  @param  Refs_Composite self
  @returns   the result
**/
ApiFloat Refs_Composite_GetMolecularMass(Refs_Composite self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolecularMass");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: cannot find method 'getMolecularMass'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: method 'getMolecularMass' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.Composite.molecularMassMethod

The 
method used to determine the experimental molecular mass.
  @param  Refs_Composite self
  @returns   the result
**/
ApiString Refs_Composite_GetMolecularMassMethod(Refs_Composite self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolecularMassMethod");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: cannot find method 'getMolecularMassMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: method 'getMolecularMassMethod' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.AbstractComponent.name

The name of 
the component. Unique identifier.
  @param  Refs_Composite self
  @returns   the result
**/
ApiString Refs_Composite_GetName(Refs_Composite self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: method 'getName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.AbstractComponent.naturalSource

The 
natural source of the component.
  @param  Refs_Composite self
  @returns   the result
**/
Taxo_NaturalSource Refs_Composite_GetNaturalSource(Refs_Composite self)
{
  
  Taxo_NaturalSource obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNaturalSource");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: cannot find method 'getNaturalSource'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: method 'getNaturalSource' is not callable");
  
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
  @param  Refs_Composite self
  @returns   the result
**/
ApiString Refs_Composite_GetPackageName(Refs_Composite self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: method 'getPackageName' is not callable");
  
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
  @param  Refs_Composite self
  @returns   the result
**/
ApiString Refs_Composite_GetPackageShortName(Refs_Composite self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.AbstractComponent.parent

link to 
parent object - synonym for refSampleComponentStore
  @param  Refs_Composite self
  @returns   the result
**/
Refs_RefSampleComponentStore Refs_Composite_GetParent(Refs_Composite self)
{
  
  Refs_RefSampleComponentStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: method 'getParent' is not callable");
  
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
  @param  Refs_Composite self
  @returns   the result
**/
ApiString Refs_Composite_GetQualifiedName(Refs_Composite self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.lims.RefSampleComponent.AbstractComponent.refSampleComponentStore

parent 
link
  @param  Refs_Composite self
  @returns   the result
**/
Refs_RefSampleComponentStore Refs_Composite_GetRefSampleComponentStore(Refs_Composite self)
{
  
  Refs_RefSampleComponentStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRefSampleComponentStore");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: cannot find method 'getRefSampleComponentStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: method 'getRefSampleComponentStore' is not callable");
  
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
  @param  Refs_Composite self
  @returns   the result
**/
Impl_MemopsRoot Refs_Composite_GetRoot(Refs_Composite self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.AbstractComponent.synonyms

The 
synonyms of the component.
  @param  Refs_Composite self
  @returns   the result
**/
ApiList Refs_Composite_GetSynonyms(Refs_Composite self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSynonyms");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: cannot find method 'getSynonyms'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: method 'getSynonyms' is not callable");
  
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
  @param  Refs_Composite self
  @returns   the result
**/
Impl_TopObject Refs_Composite_GetTopObject(Refs_Composite self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.lims.RefSampleComponent.Composite
  @param  Refs_RefSampleComponentStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Refs_Composite Refs_Composite_Init(Refs_RefSampleComponentStore parent, ApiMap attrlinks)
{
  
  return Refs_RefSampleComponentStore_NewComposite(parent, attrlinks);
}

/**
  Constructor for ccp.lims.RefSampleComponent.Composite
  @param  Refs_RefSampleComponentStore parent
  @param  char * name
  @returns  the new object
**/
Refs_Composite Refs_Composite_Init_reqd(Refs_RefSampleComponentStore parent, char * name)
{
  
  Refs_Composite  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Refs_Composite_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.lims.RefSampleComponent.CompositeElement
  @param  Refs_Composite self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Refs_CompositeElement Refs_Composite_NewCompositeElement(Refs_Composite self, ApiMap attrlinks)
{
  
  Refs_CompositeElement obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newCompositeElement");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: cannot find method 'newCompositeElement'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: method 'newCompositeElement' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.lims.RefSampleComponent.CompositeElement
  @param  Refs_Composite self
  @param  Refs_AbstractComponent component
  @returns  the new object
**/
Refs_CompositeElement Refs_Composite_NewCompositeElement_reqd(Refs_Composite self, Refs_AbstractComponent component)
{
  
  Refs_CompositeElement  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "component", component);
  
  obj = Refs_Composite_NewCompositeElement(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create 
ccp.lims.RefSampleComponent.CompositeInteraction
  @param  Refs_Composite self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Refs_CompositeInteraction Refs_Composite_NewCompositeInteraction(Refs_Composite self, ApiMap attrlinks)
{
  
  Refs_CompositeInteraction obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newCompositeInteraction");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: cannot find method 'newCompositeInteraction'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: method 'newCompositeInteraction' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create 
ccp.lims.RefSampleComponent.CompositeInteraction
  @param  Refs_Composite self
  @param  ApiSet elements
  @param  char * interactionType
  @returns  the new object
**/
Refs_CompositeInteraction Refs_Composite_NewCompositeInteraction_reqd(Refs_Composite self, ApiSet elements, char * interactionType)
{
  
  Refs_CompositeInteraction  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__interactionType = ApiString_New(interactionType);

  PyDict_SetItemString(attrlinks, "elements", elements);
  PyDict_SetItemString(attrlinks, "interactionType", api__interactionType);
  
  obj = Refs_Composite_NewCompositeInteraction(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__interactionType);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_Composite self
  @param  Impl_ApplicationData value
**/
void *Refs_Composite_RemoveApplicationData(Refs_Composite self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_Composite self
  @param  Clas_SampleComponentCategory value
**/
void *Refs_Composite_RemoveCategory(Refs_Composite self, Clas_SampleComponentCategory value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeCategory");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: cannot find method 'removeCategory'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: method 'removeCategory' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.lims.RefSampleComponent.AbstractComponent.synonyms

The 
synonyms of the component.
  @param  Refs_Composite self
  @param  ApiString value
**/
void *Refs_Composite_RemoveSynonym(Refs_Composite self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeSynonym");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: cannot find method 'removeSynonym'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: method 'removeSynonym' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.lims.RefSampleComponent.Composite
  @param  Refs_Composite self
  @param  ApiString name
  @param  ApiObject value
**/
void *Refs_Composite_Set(Refs_Composite self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Refs_Composite self
  @param  Acco_AccessObject value
**/
void *Refs_Composite_SetAccess(Refs_Composite self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: method 'setAccess' is not callable");
  
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
  @param  Refs_Composite self
  @param  ApiList values
**/
void *Refs_Composite_SetApplicationData(Refs_Composite self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.RefSampleComponent.Composite.assessmentMethod

The 
assessment Method used to determine the composite.
  @param  Refs_Composite self
  @param  ApiString value
**/
void *Refs_Composite_SetAssessmentMethod(Refs_Composite self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAssessmentMethod");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: cannot find method 'setAssessmentMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: method 'setAssessmentMethod' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.RefSampleComponent.AbstractComponent.categories

List 
of category associated to a component.
  @param  Refs_Composite self
  @param  ApiSet values
**/
void *Refs_Composite_SetCategories(Refs_Composite self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCategories");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: cannot find method 'setCategories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: method 'setCategories' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_Composite self
  @param  ApiSet values
**/
void *Refs_Composite_SetCompositeElements(Refs_Composite self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCompositeElements");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: cannot find method 'setCompositeElements'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: method 'setCompositeElements' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.RefSampleComponent.AbstractComponent.details

Detail 
field for comments.
  @param  Refs_Composite self
  @param  ApiString value
**/
void *Refs_Composite_SetDetails(Refs_Composite self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.RefSampleComponent.Composite.molecularMass

The 
experimental molecular mass in dalton (Da).
  @param  Refs_Composite self
  @param  ApiFloat value
**/
void *Refs_Composite_SetMolecularMass(Refs_Composite self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMolecularMass");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: cannot find method 'setMolecularMass'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: method 'setMolecularMass' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.RefSampleComponent.Composite.molecularMassMethod

The 
method used to determine the experimental molecular mass.
  @param  Refs_Composite self
  @param  ApiString value
**/
void *Refs_Composite_SetMolecularMassMethod(Refs_Composite self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMolecularMassMethod");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: cannot find method 'setMolecularMassMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: method 'setMolecularMassMethod' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.RefSampleComponent.AbstractComponent.name

The name of 
the component. Unique identifier.
  @param  Refs_Composite self
  @param  ApiString value
**/
void *Refs_Composite_SetName(Refs_Composite self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.RefSampleComponent.AbstractComponent.naturalSource

The 
natural source of the component.
  @param  Refs_Composite self
  @param  Taxo_NaturalSource value
**/
void *Refs_Composite_SetNaturalSource(Refs_Composite self, Taxo_NaturalSource value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNaturalSource");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: cannot find method 'setNaturalSource'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: method 'setNaturalSource' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.RefSampleComponent.AbstractComponent.synonyms

The 
synonyms of the component.
  @param  Refs_Composite self
  @param  ApiList values
**/
void *Refs_Composite_SetSynonyms(Refs_Composite self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSynonyms");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: cannot find method 'setSynonyms'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: method 'setSynonyms' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_Composite self
  @returns   the result
**/
ApiList Refs_Composite_SortedCategories(Refs_Composite self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedCategories");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: cannot find method 'sortedCategories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: method 'sortedCategories' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_Composite self
  @returns   the result
**/
ApiList Refs_Composite_SortedComponentDbRefs(Refs_Composite self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedComponentDbRefs");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: cannot find method 'sortedComponentDbRefs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: method 'sortedComponentDbRefs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_Composite self
  @returns   the result
**/
ApiList Refs_Composite_SortedCompositeElements(Refs_Composite self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedCompositeElements");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: cannot find method 'sortedCompositeElements'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: method 'sortedCompositeElements' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.RefSampleComponent.Composite.elements

child link to 
class CompositeElement
  @param  Refs_Composite self
  @returns   the result
**/
ApiList Refs_Composite_SortedElements(Refs_Composite self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedElements");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: cannot find method 'sortedElements'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: method 'sortedElements' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.RefSampleComponent.Composite.interactions

child 
link to class CompositeInteraction
  @param  Refs_Composite self
  @returns   the result
**/
ApiList Refs_Composite_SortedInteractions(Refs_Composite self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedInteractions");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: cannot find method 'sortedInteractions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: method 'sortedInteractions' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.RefSampleComponent.AbstractComponent.labels

child 
link to class Label
  @param  Refs_Composite self
  @returns   the result
**/
ApiList Refs_Composite_SortedLabels(Refs_Composite self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedLabels");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: cannot find method 'sortedLabels'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Composite: method 'sortedLabels' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
