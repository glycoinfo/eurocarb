
#include "ccp.h"

/*
  A Substance should be limited to cases that cannot be put under any of the others. Typically: bovine calf serum, light petroleum, wheat germ extract, algal hydrolysate.
*/

/* package ccp.api.lims.RefSampleComponent */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_Substance self
  @param  Impl_ApplicationData value
**/
void *Refs_Substance_AddApplicationData(Refs_Substance self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: method 'addApplicationData' is not callable");
  
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
  @param  Refs_Substance self
  @param  Clas_SampleComponentCategory value
**/
void *Refs_Substance_AddCategory(Refs_Substance self, Clas_SampleComponentCategory value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addCategory");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: cannot find method 'addCategory'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: method 'addCategory' is not callable");
  
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
  @param  Refs_Substance self
  @param  ApiString value
**/
void *Refs_Substance_AddSynonym(Refs_Substance self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addSynonym");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: cannot find method 'addSynonym'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: method 'addSynonym' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.lims.RefSampleComponent.Substance
  @param  Refs_Substance self
  @param  ApiBoolean complete
**/
void *Refs_Substance_CheckAllValid(Refs_Substance self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.lims.RefSampleComponent.Substance
  @param  Refs_Substance self
  @param  ApiBoolean complete
**/
void *Refs_Substance_CheckValid(Refs_Substance self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: method 'checkValid' is not callable");
  
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
  @param  Refs_Substance self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Refs_Substance_FindAllApplicationData(Refs_Substance self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: method 'findAllApplicationData' is not callable");
  
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
  @param  Refs_Substance self
  @returns  all value that satisfy the conditions 
**/
ApiList Refs_Substance_FindAllApplicationData_keyval0(Refs_Substance self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_Substance_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_Substance self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Refs_Substance_FindAllApplicationData_keyval1(Refs_Substance self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_Substance_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_Substance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Refs_Substance_FindAllApplicationData_keyval2(Refs_Substance self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_Substance_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_Substance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Refs_Substance_FindAllApplicationData_keyval3(Refs_Substance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_Substance_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_Substance self
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
ApiList Refs_Substance_FindAllApplicationData_keyval4(Refs_Substance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_Substance_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_Substance self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Substance_FindAllCategories(Refs_Substance self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllCategories");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: cannot find method 'findAllCategories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: method 'findAllCategories' is not callable");
  
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
  @param  Refs_Substance self
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Substance_FindAllCategories_keyval0(Refs_Substance self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_Substance_FindAllCategories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_Substance self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Substance_FindAllCategories_keyval1(Refs_Substance self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_Substance_FindAllCategories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_Substance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Substance_FindAllCategories_keyval2(Refs_Substance self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_Substance_FindAllCategories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_Substance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Substance_FindAllCategories_keyval3(Refs_Substance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_Substance_FindAllCategories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_Substance self
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
ApiSet Refs_Substance_FindAllCategories_keyval4(Refs_Substance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_Substance_FindAllCategories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_Substance self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Substance_FindAllComponentDbRefs(Refs_Substance self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllComponentDbRefs");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: cannot find method 'findAllComponentDbRefs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: method 'findAllComponentDbRefs' is not callable");
  
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
  @param  Refs_Substance self
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Substance_FindAllComponentDbRefs_keyval0(Refs_Substance self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_Substance_FindAllComponentDbRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_Substance self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Substance_FindAllComponentDbRefs_keyval1(Refs_Substance self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_Substance_FindAllComponentDbRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_Substance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Substance_FindAllComponentDbRefs_keyval2(Refs_Substance self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_Substance_FindAllComponentDbRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_Substance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Substance_FindAllComponentDbRefs_keyval3(Refs_Substance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_Substance_FindAllComponentDbRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_Substance self
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
ApiSet Refs_Substance_FindAllComponentDbRefs_keyval4(Refs_Substance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_Substance_FindAllComponentDbRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_Substance self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Substance_FindAllCompositeElements(Refs_Substance self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllCompositeElements");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: cannot find method 'findAllCompositeElements'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: method 'findAllCompositeElements' is not callable");
  
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
  @param  Refs_Substance self
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Substance_FindAllCompositeElements_keyval0(Refs_Substance self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_Substance_FindAllCompositeElements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_Substance self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Substance_FindAllCompositeElements_keyval1(Refs_Substance self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_Substance_FindAllCompositeElements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_Substance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Substance_FindAllCompositeElements_keyval2(Refs_Substance self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_Substance_FindAllCompositeElements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_Substance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Substance_FindAllCompositeElements_keyval3(Refs_Substance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_Substance_FindAllCompositeElements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_Substance self
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
ApiSet Refs_Substance_FindAllCompositeElements_keyval4(Refs_Substance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_Substance_FindAllCompositeElements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.RefSampleComponent.AbstractComponent.labels

child 
link to class Label
  @param  Refs_Substance self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Substance_FindAllLabels(Refs_Substance self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllLabels");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: cannot find method 'findAllLabels'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: method 'findAllLabels' is not callable");
  
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
  @param  Refs_Substance self
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Substance_FindAllLabels_keyval0(Refs_Substance self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_Substance_FindAllLabels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.RefSampleComponent.AbstractComponent.labels

child 
link to class Label
  @param  Refs_Substance self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Substance_FindAllLabels_keyval1(Refs_Substance self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_Substance_FindAllLabels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.RefSampleComponent.AbstractComponent.labels

child 
link to class Label
  @param  Refs_Substance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Substance_FindAllLabels_keyval2(Refs_Substance self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_Substance_FindAllLabels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.RefSampleComponent.AbstractComponent.labels

child 
link to class Label
  @param  Refs_Substance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Substance_FindAllLabels_keyval3(Refs_Substance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_Substance_FindAllLabels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.RefSampleComponent.AbstractComponent.labels

child 
link to class Label
  @param  Refs_Substance self
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
ApiSet Refs_Substance_FindAllLabels_keyval4(Refs_Substance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_Substance_FindAllLabels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_Substance self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Refs_Substance_FindFirstApplicationData(Refs_Substance self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: method 'findFirstApplicationData' is not callable");
  
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
  @param  Refs_Substance self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Refs_Substance_FindFirstApplicationData_keyval0(Refs_Substance self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_Substance_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_Substance self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Refs_Substance_FindFirstApplicationData_keyval1(Refs_Substance self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_Substance_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_Substance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Refs_Substance_FindFirstApplicationData_keyval2(Refs_Substance self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_Substance_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_Substance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Refs_Substance_FindFirstApplicationData_keyval3(Refs_Substance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_Substance_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_Substance self
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
Impl_ApplicationData Refs_Substance_FindFirstApplicationData_keyval4(Refs_Substance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_Substance_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_Substance self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Clas_SampleComponentCategory Refs_Substance_FindFirstCategory(Refs_Substance self, ApiMap conditions)
{
  
  Clas_SampleComponentCategory obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstCategory");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: cannot find method 'findFirstCategory'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: method 'findFirstCategory' is not callable");
  
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
  @param  Refs_Substance self
  @returns  the first value that satisfies the conditions 
**/
Clas_SampleComponentCategory Refs_Substance_FindFirstCategory_keyval0(Refs_Substance self)
{
  
  Clas_SampleComponentCategory  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_Substance_FindFirstCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_Substance self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Clas_SampleComponentCategory Refs_Substance_FindFirstCategory_keyval1(Refs_Substance self, char * key, ApiObject value)
{
  
  Clas_SampleComponentCategory  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_Substance_FindFirstCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_Substance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Clas_SampleComponentCategory Refs_Substance_FindFirstCategory_keyval2(Refs_Substance self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Clas_SampleComponentCategory  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_Substance_FindFirstCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_Substance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Clas_SampleComponentCategory Refs_Substance_FindFirstCategory_keyval3(Refs_Substance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Clas_SampleComponentCategory  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_Substance_FindFirstCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_Substance self
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
Clas_SampleComponentCategory Refs_Substance_FindFirstCategory_keyval4(Refs_Substance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Clas_SampleComponentCategory  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_Substance_FindFirstCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_Substance self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Refs_ComponentDbRef Refs_Substance_FindFirstComponentDbRef(Refs_Substance self, ApiMap conditions)
{
  
  Refs_ComponentDbRef obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstComponentDbRef");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: cannot find method 'findFirstComponentDbRef'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: method 'findFirstComponentDbRef' is not callable");
  
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
  @param  Refs_Substance self
  @returns  the first value that satisfies the conditions 
**/
Refs_ComponentDbRef Refs_Substance_FindFirstComponentDbRef_keyval0(Refs_Substance self)
{
  
  Refs_ComponentDbRef  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_Substance_FindFirstComponentDbRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_Substance self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Refs_ComponentDbRef Refs_Substance_FindFirstComponentDbRef_keyval1(Refs_Substance self, char * key, ApiObject value)
{
  
  Refs_ComponentDbRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_Substance_FindFirstComponentDbRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_Substance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Refs_ComponentDbRef Refs_Substance_FindFirstComponentDbRef_keyval2(Refs_Substance self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Refs_ComponentDbRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_Substance_FindFirstComponentDbRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_Substance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Refs_ComponentDbRef Refs_Substance_FindFirstComponentDbRef_keyval3(Refs_Substance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Refs_ComponentDbRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_Substance_FindFirstComponentDbRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_Substance self
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
Refs_ComponentDbRef Refs_Substance_FindFirstComponentDbRef_keyval4(Refs_Substance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Refs_ComponentDbRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_Substance_FindFirstComponentDbRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_Substance self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Refs_CompositeElement Refs_Substance_FindFirstCompositeElement(Refs_Substance self, ApiMap conditions)
{
  
  Refs_CompositeElement obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstCompositeElement");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: cannot find method 'findFirstCompositeElement'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: method 'findFirstCompositeElement' is not callable");
  
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
  @param  Refs_Substance self
  @returns  the first value that satisfies the conditions 
**/
Refs_CompositeElement Refs_Substance_FindFirstCompositeElement_keyval0(Refs_Substance self)
{
  
  Refs_CompositeElement  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_Substance_FindFirstCompositeElement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_Substance self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Refs_CompositeElement Refs_Substance_FindFirstCompositeElement_keyval1(Refs_Substance self, char * key, ApiObject value)
{
  
  Refs_CompositeElement  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_Substance_FindFirstCompositeElement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_Substance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Refs_CompositeElement Refs_Substance_FindFirstCompositeElement_keyval2(Refs_Substance self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Refs_CompositeElement  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_Substance_FindFirstCompositeElement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_Substance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Refs_CompositeElement Refs_Substance_FindFirstCompositeElement_keyval3(Refs_Substance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Refs_CompositeElement  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_Substance_FindFirstCompositeElement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_Substance self
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
Refs_CompositeElement Refs_Substance_FindFirstCompositeElement_keyval4(Refs_Substance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Refs_CompositeElement  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_Substance_FindFirstCompositeElement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.labels

child link to 
class Label
  @param  Refs_Substance self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Refs_Label Refs_Substance_FindFirstLabel(Refs_Substance self, ApiMap conditions)
{
  
  Refs_Label obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstLabel");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: cannot find method 'findFirstLabel'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: method 'findFirstLabel' is not callable");
  
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
  @param  Refs_Substance self
  @returns  the first value that satisfies the conditions 
**/
Refs_Label Refs_Substance_FindFirstLabel_keyval0(Refs_Substance self)
{
  
  Refs_Label  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_Substance_FindFirstLabel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.labels

child link to 
class Label
  @param  Refs_Substance self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Refs_Label Refs_Substance_FindFirstLabel_keyval1(Refs_Substance self, char * key, ApiObject value)
{
  
  Refs_Label  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_Substance_FindFirstLabel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.labels

child link to 
class Label
  @param  Refs_Substance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Refs_Label Refs_Substance_FindFirstLabel_keyval2(Refs_Substance self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Refs_Label  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_Substance_FindFirstLabel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.labels

child link to 
class Label
  @param  Refs_Substance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Refs_Label Refs_Substance_FindFirstLabel_keyval3(Refs_Substance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Refs_Label  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_Substance_FindFirstLabel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.labels

child link to 
class Label
  @param  Refs_Substance self
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
Refs_Label Refs_Substance_FindFirstLabel_keyval4(Refs_Substance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Refs_Label  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_Substance_FindFirstLabel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.lims.RefSampleComponent.Substance
  @param  Refs_Substance self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Refs_Substance_Get(Refs_Substance self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Refs_Substance self
  @returns   the result
**/
Acco_AccessObject Refs_Substance_GetAccess(Refs_Substance self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: method 'getAccess' is not callable");
  
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
  @param  Refs_Substance self
  @returns   the result
**/
Acco_AccessObject Refs_Substance_GetActiveAccess(Refs_Substance self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: method 'getActiveAccess' is not callable");
  
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
  @param  Refs_Substance self
  @returns   the result
**/
ApiList Refs_Substance_GetApplicationData(Refs_Substance self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.lims.RefSampleComponent.Substance
  @param  Refs_Substance self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Refs_Substance Refs_Substance_GetByKey(Refs_Substance self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Refs_Substance obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: method 'getByKey' is not callable");
  
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
  @param  Refs_Substance self
  @returns   the result
**/
ApiSet Refs_Substance_GetCategories(Refs_Substance self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCategories");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: cannot find method 'getCategories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: method 'getCategories' is not callable");
  
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
  @param  Refs_Substance self
  @returns   the result
**/
ApiString Refs_Substance_GetClassName(Refs_Substance self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: method 'getClassName' is not callable");
  
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
  @param  Refs_Substance self
  @returns   the result
**/
ApiSet Refs_Substance_GetComponentDbRefs(Refs_Substance self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getComponentDbRefs");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: cannot find method 'getComponentDbRefs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: method 'getComponentDbRefs' is not callable");
  
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
  @param  Refs_Substance self
  @returns   the result
**/
ApiSet Refs_Substance_GetCompositeElements(Refs_Substance self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCompositeElements");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: cannot find method 'getCompositeElements'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: method 'getCompositeElements' is not callable");
  
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
  @param  Refs_Substance self
  @returns   the result
**/
ApiString Refs_Substance_GetDetails(Refs_Substance self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: method 'getDetails' is not callable");
  
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
  @param  Refs_Substance self
  @returns   the result
**/
ApiList Refs_Substance_GetFieldNames(Refs_Substance self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: method 'getFieldNames' is not callable");
  
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
  @param  Refs_Substance self
  @returns   the result
**/
ApiBoolean Refs_Substance_GetInConstructor(Refs_Substance self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: method 'getInConstructor' is not callable");
  
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
  @param  Refs_Substance self
  @returns   the result
**/
ApiBoolean Refs_Substance_GetIsDeleted(Refs_Substance self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: method 'getIsDeleted' is not callable");
  
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
  @param  Refs_Substance self
  @returns   the result
**/
ApiSet Refs_Substance_GetLabels(Refs_Substance self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLabels");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: cannot find method 'getLabels'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: method 'getLabels' is not callable");
  
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
  @param  Refs_Substance self
  @returns   the result
**/
ApiString Refs_Substance_GetName(Refs_Substance self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: method 'getName' is not callable");
  
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
  @param  Refs_Substance self
  @returns   the result
**/
Taxo_NaturalSource Refs_Substance_GetNaturalSource(Refs_Substance self)
{
  
  Taxo_NaturalSource obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNaturalSource");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: cannot find method 'getNaturalSource'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: method 'getNaturalSource' is not callable");
  
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
  @param  Refs_Substance self
  @returns   the result
**/
ApiString Refs_Substance_GetPackageName(Refs_Substance self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: method 'getPackageName' is not callable");
  
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
  @param  Refs_Substance self
  @returns   the result
**/
ApiString Refs_Substance_GetPackageShortName(Refs_Substance self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: method 'getPackageShortName' is not callable");
  
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
  @param  Refs_Substance self
  @returns   the result
**/
Refs_RefSampleComponentStore Refs_Substance_GetParent(Refs_Substance self)
{
  
  Refs_RefSampleComponentStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: method 'getParent' is not callable");
  
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
  @param  Refs_Substance self
  @returns   the result
**/
ApiString Refs_Substance_GetQualifiedName(Refs_Substance self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: method 'getQualifiedName' is not callable");
  
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
  @param  Refs_Substance self
  @returns   the result
**/
Refs_RefSampleComponentStore Refs_Substance_GetRefSampleComponentStore(Refs_Substance self)
{
  
  Refs_RefSampleComponentStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRefSampleComponentStore");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: cannot find method 'getRefSampleComponentStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: method 'getRefSampleComponentStore' is not callable");
  
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
  @param  Refs_Substance self
  @returns   the result
**/
Impl_MemopsRoot Refs_Substance_GetRoot(Refs_Substance self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: method 'getRoot' is not callable");
  
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
  @param  Refs_Substance self
  @returns   the result
**/
ApiList Refs_Substance_GetSynonyms(Refs_Substance self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSynonyms");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: cannot find method 'getSynonyms'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: method 'getSynonyms' is not callable");
  
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
  @param  Refs_Substance self
  @returns   the result
**/
Impl_TopObject Refs_Substance_GetTopObject(Refs_Substance self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.lims.RefSampleComponent.Substance
  @param  Refs_RefSampleComponentStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Refs_Substance Refs_Substance_Init(Refs_RefSampleComponentStore parent, ApiMap attrlinks)
{
  
  return Refs_RefSampleComponentStore_NewSubstance(parent, attrlinks);
}

/**
  Constructor for ccp.lims.RefSampleComponent.Substance
  @param  Refs_RefSampleComponentStore parent
  @param  char * name
  @returns  the new object
**/
Refs_Substance Refs_Substance_Init_reqd(Refs_RefSampleComponentStore parent, char * name)
{
  
  Refs_Substance  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Refs_Substance_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_Substance self
  @param  Impl_ApplicationData value
**/
void *Refs_Substance_RemoveApplicationData(Refs_Substance self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: method 'removeApplicationData' is not callable");
  
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
  @param  Refs_Substance self
  @param  Clas_SampleComponentCategory value
**/
void *Refs_Substance_RemoveCategory(Refs_Substance self, Clas_SampleComponentCategory value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeCategory");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: cannot find method 'removeCategory'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: method 'removeCategory' is not callable");
  
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
  @param  Refs_Substance self
  @param  ApiString value
**/
void *Refs_Substance_RemoveSynonym(Refs_Substance self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeSynonym");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: cannot find method 'removeSynonym'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: method 'removeSynonym' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.lims.RefSampleComponent.Substance
  @param  Refs_Substance self
  @param  ApiString name
  @param  ApiObject value
**/
void *Refs_Substance_Set(Refs_Substance self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Refs_Substance self
  @param  Acco_AccessObject value
**/
void *Refs_Substance_SetAccess(Refs_Substance self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: method 'setAccess' is not callable");
  
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
  @param  Refs_Substance self
  @param  ApiList values
**/
void *Refs_Substance_SetApplicationData(Refs_Substance self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.RefSampleComponent.AbstractComponent.categories

List 
of category associated to a component.
  @param  Refs_Substance self
  @param  ApiSet values
**/
void *Refs_Substance_SetCategories(Refs_Substance self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCategories");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: cannot find method 'setCategories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: method 'setCategories' is not callable");
  
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
  @param  Refs_Substance self
  @param  ApiSet values
**/
void *Refs_Substance_SetCompositeElements(Refs_Substance self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCompositeElements");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: cannot find method 'setCompositeElements'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: method 'setCompositeElements' is not callable");
  
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
  @param  Refs_Substance self
  @param  ApiString value
**/
void *Refs_Substance_SetDetails(Refs_Substance self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: method 'setDetails' is not callable");
  
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
  @param  Refs_Substance self
  @param  ApiString value
**/
void *Refs_Substance_SetName(Refs_Substance self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: method 'setName' is not callable");
  
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
  @param  Refs_Substance self
  @param  Taxo_NaturalSource value
**/
void *Refs_Substance_SetNaturalSource(Refs_Substance self, Taxo_NaturalSource value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNaturalSource");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: cannot find method 'setNaturalSource'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: method 'setNaturalSource' is not callable");
  
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
  @param  Refs_Substance self
  @param  ApiList values
**/
void *Refs_Substance_SetSynonyms(Refs_Substance self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSynonyms");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: cannot find method 'setSynonyms'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: method 'setSynonyms' is not callable");
  
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
  @param  Refs_Substance self
  @returns   the result
**/
ApiList Refs_Substance_SortedCategories(Refs_Substance self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedCategories");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: cannot find method 'sortedCategories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: method 'sortedCategories' is not callable");
  
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
  @param  Refs_Substance self
  @returns   the result
**/
ApiList Refs_Substance_SortedComponentDbRefs(Refs_Substance self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedComponentDbRefs");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: cannot find method 'sortedComponentDbRefs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: method 'sortedComponentDbRefs' is not callable");
  
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
  @param  Refs_Substance self
  @returns   the result
**/
ApiList Refs_Substance_SortedCompositeElements(Refs_Substance self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedCompositeElements");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: cannot find method 'sortedCompositeElements'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: method 'sortedCompositeElements' is not callable");
  
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
  @param  Refs_Substance self
  @returns   the result
**/
ApiList Refs_Substance_SortedLabels(Refs_Substance self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedLabels");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: cannot find method 'sortedLabels'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Substance: method 'sortedLabels' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
