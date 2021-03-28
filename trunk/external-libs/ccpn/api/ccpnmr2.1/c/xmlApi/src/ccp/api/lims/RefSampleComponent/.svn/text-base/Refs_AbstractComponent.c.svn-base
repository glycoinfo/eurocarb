
#include "ccp.h"

/*
  The abstract component is used to define the details which characterise all components, these are name, any synonyms and a CAS number. There are 4 subclasses of abstract component: Molecular component (MolComponent), Cell, Substance and Composite.
*/

/* package ccp.api.lims.RefSampleComponent */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_AbstractComponent self
  @param  Impl_ApplicationData value
**/
void *Refs_AbstractComponent_AddApplicationData(Refs_AbstractComponent self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: method 'addApplicationData' is not callable");
  
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
  @param  Refs_AbstractComponent self
  @param  Clas_SampleComponentCategory value
**/
void *Refs_AbstractComponent_AddCategory(Refs_AbstractComponent self, Clas_SampleComponentCategory value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addCategory");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: cannot find method 'addCategory'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: method 'addCategory' is not callable");
  
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
  @param  Refs_AbstractComponent self
  @param  ApiString value
**/
void *Refs_AbstractComponent_AddSynonym(Refs_AbstractComponent self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addSynonym");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: cannot find method 'addSynonym'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: method 'addSynonym' is not callable");
  
  args = PyTuple_Pack(1, value);
  
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
  @param  Refs_AbstractComponent self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Refs_AbstractComponent_FindAllApplicationData(Refs_AbstractComponent self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: method 'findAllApplicationData' is not callable");
  
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
  @param  Refs_AbstractComponent self
  @returns  all value that satisfy the conditions 
**/
ApiList Refs_AbstractComponent_FindAllApplicationData_keyval0(Refs_AbstractComponent self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_AbstractComponent_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_AbstractComponent self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Refs_AbstractComponent_FindAllApplicationData_keyval1(Refs_AbstractComponent self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_AbstractComponent_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_AbstractComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Refs_AbstractComponent_FindAllApplicationData_keyval2(Refs_AbstractComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_AbstractComponent_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_AbstractComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Refs_AbstractComponent_FindAllApplicationData_keyval3(Refs_AbstractComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_AbstractComponent_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_AbstractComponent self
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
ApiList Refs_AbstractComponent_FindAllApplicationData_keyval4(Refs_AbstractComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_AbstractComponent_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_AbstractComponent self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_AbstractComponent_FindAllCategories(Refs_AbstractComponent self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllCategories");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: cannot find method 'findAllCategories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: method 'findAllCategories' is not callable");
  
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
  @param  Refs_AbstractComponent self
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_AbstractComponent_FindAllCategories_keyval0(Refs_AbstractComponent self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_AbstractComponent_FindAllCategories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_AbstractComponent self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_AbstractComponent_FindAllCategories_keyval1(Refs_AbstractComponent self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_AbstractComponent_FindAllCategories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_AbstractComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_AbstractComponent_FindAllCategories_keyval2(Refs_AbstractComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_AbstractComponent_FindAllCategories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_AbstractComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_AbstractComponent_FindAllCategories_keyval3(Refs_AbstractComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_AbstractComponent_FindAllCategories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_AbstractComponent self
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
ApiSet Refs_AbstractComponent_FindAllCategories_keyval4(Refs_AbstractComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_AbstractComponent_FindAllCategories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_AbstractComponent self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_AbstractComponent_FindAllComponentDbRefs(Refs_AbstractComponent self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllComponentDbRefs");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: cannot find method 'findAllComponentDbRefs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: method 'findAllComponentDbRefs' is not callable");
  
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
  @param  Refs_AbstractComponent self
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_AbstractComponent_FindAllComponentDbRefs_keyval0(Refs_AbstractComponent self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_AbstractComponent_FindAllComponentDbRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_AbstractComponent self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_AbstractComponent_FindAllComponentDbRefs_keyval1(Refs_AbstractComponent self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_AbstractComponent_FindAllComponentDbRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_AbstractComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_AbstractComponent_FindAllComponentDbRefs_keyval2(Refs_AbstractComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_AbstractComponent_FindAllComponentDbRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_AbstractComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_AbstractComponent_FindAllComponentDbRefs_keyval3(Refs_AbstractComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_AbstractComponent_FindAllComponentDbRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_AbstractComponent self
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
ApiSet Refs_AbstractComponent_FindAllComponentDbRefs_keyval4(Refs_AbstractComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_AbstractComponent_FindAllComponentDbRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_AbstractComponent self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_AbstractComponent_FindAllCompositeElements(Refs_AbstractComponent self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllCompositeElements");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: cannot find method 'findAllCompositeElements'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: method 'findAllCompositeElements' is not callable");
  
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
  @param  Refs_AbstractComponent self
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_AbstractComponent_FindAllCompositeElements_keyval0(Refs_AbstractComponent self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_AbstractComponent_FindAllCompositeElements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_AbstractComponent self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_AbstractComponent_FindAllCompositeElements_keyval1(Refs_AbstractComponent self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_AbstractComponent_FindAllCompositeElements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_AbstractComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_AbstractComponent_FindAllCompositeElements_keyval2(Refs_AbstractComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_AbstractComponent_FindAllCompositeElements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_AbstractComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_AbstractComponent_FindAllCompositeElements_keyval3(Refs_AbstractComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_AbstractComponent_FindAllCompositeElements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_AbstractComponent self
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
ApiSet Refs_AbstractComponent_FindAllCompositeElements_keyval4(Refs_AbstractComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_AbstractComponent_FindAllCompositeElements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.RefSampleComponent.AbstractComponent.labels

child 
link to class Label
  @param  Refs_AbstractComponent self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_AbstractComponent_FindAllLabels(Refs_AbstractComponent self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllLabels");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: cannot find method 'findAllLabels'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: method 'findAllLabels' is not callable");
  
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
  @param  Refs_AbstractComponent self
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_AbstractComponent_FindAllLabels_keyval0(Refs_AbstractComponent self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_AbstractComponent_FindAllLabels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.RefSampleComponent.AbstractComponent.labels

child 
link to class Label
  @param  Refs_AbstractComponent self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_AbstractComponent_FindAllLabels_keyval1(Refs_AbstractComponent self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_AbstractComponent_FindAllLabels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.RefSampleComponent.AbstractComponent.labels

child 
link to class Label
  @param  Refs_AbstractComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_AbstractComponent_FindAllLabels_keyval2(Refs_AbstractComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_AbstractComponent_FindAllLabels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.RefSampleComponent.AbstractComponent.labels

child 
link to class Label
  @param  Refs_AbstractComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_AbstractComponent_FindAllLabels_keyval3(Refs_AbstractComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_AbstractComponent_FindAllLabels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.RefSampleComponent.AbstractComponent.labels

child 
link to class Label
  @param  Refs_AbstractComponent self
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
ApiSet Refs_AbstractComponent_FindAllLabels_keyval4(Refs_AbstractComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_AbstractComponent_FindAllLabels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_AbstractComponent self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Refs_AbstractComponent_FindFirstApplicationData(Refs_AbstractComponent self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: method 'findFirstApplicationData' is not callable");
  
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
  @param  Refs_AbstractComponent self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Refs_AbstractComponent_FindFirstApplicationData_keyval0(Refs_AbstractComponent self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_AbstractComponent_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_AbstractComponent self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Refs_AbstractComponent_FindFirstApplicationData_keyval1(Refs_AbstractComponent self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_AbstractComponent_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_AbstractComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Refs_AbstractComponent_FindFirstApplicationData_keyval2(Refs_AbstractComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_AbstractComponent_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_AbstractComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Refs_AbstractComponent_FindFirstApplicationData_keyval3(Refs_AbstractComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_AbstractComponent_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_AbstractComponent self
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
Impl_ApplicationData Refs_AbstractComponent_FindFirstApplicationData_keyval4(Refs_AbstractComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_AbstractComponent_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_AbstractComponent self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Clas_SampleComponentCategory Refs_AbstractComponent_FindFirstCategory(Refs_AbstractComponent self, ApiMap conditions)
{
  
  Clas_SampleComponentCategory obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstCategory");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: cannot find method 'findFirstCategory'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: method 'findFirstCategory' is not callable");
  
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
  @param  Refs_AbstractComponent self
  @returns  the first value that satisfies the conditions 
**/
Clas_SampleComponentCategory Refs_AbstractComponent_FindFirstCategory_keyval0(Refs_AbstractComponent self)
{
  
  Clas_SampleComponentCategory  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_AbstractComponent_FindFirstCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_AbstractComponent self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Clas_SampleComponentCategory Refs_AbstractComponent_FindFirstCategory_keyval1(Refs_AbstractComponent self, char * key, ApiObject value)
{
  
  Clas_SampleComponentCategory  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_AbstractComponent_FindFirstCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_AbstractComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Clas_SampleComponentCategory Refs_AbstractComponent_FindFirstCategory_keyval2(Refs_AbstractComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Clas_SampleComponentCategory  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_AbstractComponent_FindFirstCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_AbstractComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Clas_SampleComponentCategory Refs_AbstractComponent_FindFirstCategory_keyval3(Refs_AbstractComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Clas_SampleComponentCategory  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_AbstractComponent_FindFirstCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_AbstractComponent self
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
Clas_SampleComponentCategory Refs_AbstractComponent_FindFirstCategory_keyval4(Refs_AbstractComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Clas_SampleComponentCategory  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_AbstractComponent_FindFirstCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_AbstractComponent self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Refs_ComponentDbRef Refs_AbstractComponent_FindFirstComponentDbRef(Refs_AbstractComponent self, ApiMap conditions)
{
  
  Refs_ComponentDbRef obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstComponentDbRef");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: cannot find method 'findFirstComponentDbRef'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: method 'findFirstComponentDbRef' is not callable");
  
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
  @param  Refs_AbstractComponent self
  @returns  the first value that satisfies the conditions 
**/
Refs_ComponentDbRef Refs_AbstractComponent_FindFirstComponentDbRef_keyval0(Refs_AbstractComponent self)
{
  
  Refs_ComponentDbRef  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_AbstractComponent_FindFirstComponentDbRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_AbstractComponent self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Refs_ComponentDbRef Refs_AbstractComponent_FindFirstComponentDbRef_keyval1(Refs_AbstractComponent self, char * key, ApiObject value)
{
  
  Refs_ComponentDbRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_AbstractComponent_FindFirstComponentDbRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_AbstractComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Refs_ComponentDbRef Refs_AbstractComponent_FindFirstComponentDbRef_keyval2(Refs_AbstractComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Refs_ComponentDbRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_AbstractComponent_FindFirstComponentDbRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_AbstractComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Refs_ComponentDbRef Refs_AbstractComponent_FindFirstComponentDbRef_keyval3(Refs_AbstractComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Refs_ComponentDbRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_AbstractComponent_FindFirstComponentDbRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_AbstractComponent self
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
Refs_ComponentDbRef Refs_AbstractComponent_FindFirstComponentDbRef_keyval4(Refs_AbstractComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Refs_ComponentDbRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_AbstractComponent_FindFirstComponentDbRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_AbstractComponent self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Refs_CompositeElement Refs_AbstractComponent_FindFirstCompositeElement(Refs_AbstractComponent self, ApiMap conditions)
{
  
  Refs_CompositeElement obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstCompositeElement");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: cannot find method 'findFirstCompositeElement'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: method 'findFirstCompositeElement' is not callable");
  
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
  @param  Refs_AbstractComponent self
  @returns  the first value that satisfies the conditions 
**/
Refs_CompositeElement Refs_AbstractComponent_FindFirstCompositeElement_keyval0(Refs_AbstractComponent self)
{
  
  Refs_CompositeElement  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_AbstractComponent_FindFirstCompositeElement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_AbstractComponent self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Refs_CompositeElement Refs_AbstractComponent_FindFirstCompositeElement_keyval1(Refs_AbstractComponent self, char * key, ApiObject value)
{
  
  Refs_CompositeElement  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_AbstractComponent_FindFirstCompositeElement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_AbstractComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Refs_CompositeElement Refs_AbstractComponent_FindFirstCompositeElement_keyval2(Refs_AbstractComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Refs_CompositeElement  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_AbstractComponent_FindFirstCompositeElement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_AbstractComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Refs_CompositeElement Refs_AbstractComponent_FindFirstCompositeElement_keyval3(Refs_AbstractComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Refs_CompositeElement  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_AbstractComponent_FindFirstCompositeElement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_AbstractComponent self
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
Refs_CompositeElement Refs_AbstractComponent_FindFirstCompositeElement_keyval4(Refs_AbstractComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Refs_CompositeElement  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_AbstractComponent_FindFirstCompositeElement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.labels

child link to 
class Label
  @param  Refs_AbstractComponent self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Refs_Label Refs_AbstractComponent_FindFirstLabel(Refs_AbstractComponent self, ApiMap conditions)
{
  
  Refs_Label obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstLabel");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: cannot find method 'findFirstLabel'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: method 'findFirstLabel' is not callable");
  
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
  @param  Refs_AbstractComponent self
  @returns  the first value that satisfies the conditions 
**/
Refs_Label Refs_AbstractComponent_FindFirstLabel_keyval0(Refs_AbstractComponent self)
{
  
  Refs_Label  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_AbstractComponent_FindFirstLabel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.labels

child link to 
class Label
  @param  Refs_AbstractComponent self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Refs_Label Refs_AbstractComponent_FindFirstLabel_keyval1(Refs_AbstractComponent self, char * key, ApiObject value)
{
  
  Refs_Label  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_AbstractComponent_FindFirstLabel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.labels

child link to 
class Label
  @param  Refs_AbstractComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Refs_Label Refs_AbstractComponent_FindFirstLabel_keyval2(Refs_AbstractComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Refs_Label  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_AbstractComponent_FindFirstLabel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.labels

child link to 
class Label
  @param  Refs_AbstractComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Refs_Label Refs_AbstractComponent_FindFirstLabel_keyval3(Refs_AbstractComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Refs_Label  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_AbstractComponent_FindFirstLabel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.labels

child link to 
class Label
  @param  Refs_AbstractComponent self
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
Refs_Label Refs_AbstractComponent_FindFirstLabel_keyval4(Refs_AbstractComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Refs_Label  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_AbstractComponent_FindFirstLabel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Refs_AbstractComponent self
  @returns   the result
**/
Acco_AccessObject Refs_AbstractComponent_GetAccess(Refs_AbstractComponent self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: method 'getAccess' is not callable");
  
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
  @param  Refs_AbstractComponent self
  @returns   the result
**/
Acco_AccessObject Refs_AbstractComponent_GetActiveAccess(Refs_AbstractComponent self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: method 'getActiveAccess' is not callable");
  
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
  @param  Refs_AbstractComponent self
  @returns   the result
**/
ApiList Refs_AbstractComponent_GetApplicationData(Refs_AbstractComponent self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.lims.RefSampleComponent.AbstractComponent
  @param  Refs_AbstractComponent self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Refs_AbstractComponent Refs_AbstractComponent_GetByKey(Refs_AbstractComponent self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Refs_AbstractComponent obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: method 'getByKey' is not callable");
  
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
  @param  Refs_AbstractComponent self
  @returns   the result
**/
ApiSet Refs_AbstractComponent_GetCategories(Refs_AbstractComponent self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCategories");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: cannot find method 'getCategories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: method 'getCategories' is not callable");
  
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
  @param  Refs_AbstractComponent self
  @returns   the result
**/
ApiString Refs_AbstractComponent_GetClassName(Refs_AbstractComponent self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: method 'getClassName' is not callable");
  
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
  @param  Refs_AbstractComponent self
  @returns   the result
**/
ApiSet Refs_AbstractComponent_GetComponentDbRefs(Refs_AbstractComponent self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getComponentDbRefs");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: cannot find method 'getComponentDbRefs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: method 'getComponentDbRefs' is not callable");
  
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
  @param  Refs_AbstractComponent self
  @returns   the result
**/
ApiSet Refs_AbstractComponent_GetCompositeElements(Refs_AbstractComponent self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCompositeElements");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: cannot find method 'getCompositeElements'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: method 'getCompositeElements' is not callable");
  
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
  @param  Refs_AbstractComponent self
  @returns   the result
**/
ApiString Refs_AbstractComponent_GetDetails(Refs_AbstractComponent self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: method 'getDetails' is not callable");
  
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
  @param  Refs_AbstractComponent self
  @returns   the result
**/
ApiList Refs_AbstractComponent_GetFieldNames(Refs_AbstractComponent self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.lims.RefSampleComponent.AbstractComponent
  @param  Refs_AbstractComponent self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Refs_AbstractComponent_GetFullKey(Refs_AbstractComponent self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: method 'getFullKey' is not callable");
  
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
  @param  Refs_AbstractComponent self
  @returns   the result
**/
ApiBoolean Refs_AbstractComponent_GetInConstructor(Refs_AbstractComponent self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: method 'getInConstructor' is not callable");
  
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
  @param  Refs_AbstractComponent self
  @returns   the result
**/
ApiBoolean Refs_AbstractComponent_GetIsDeleted(Refs_AbstractComponent self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: method 'getIsDeleted' is not callable");
  
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
  @param  Refs_AbstractComponent self
  @returns   the result
**/
ApiSet Refs_AbstractComponent_GetLabels(Refs_AbstractComponent self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLabels");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: cannot find method 'getLabels'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: method 'getLabels' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.lims.RefSampleComponent.AbstractComponent
  @param  Refs_AbstractComponent self
  @returns  Local object key
**/
ApiObject Refs_AbstractComponent_GetLocalKey(Refs_AbstractComponent self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: method 'getLocalKey' is not callable");
  
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
  @param  Refs_AbstractComponent self
  @returns   the result
**/
ApiString Refs_AbstractComponent_GetName(Refs_AbstractComponent self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: method 'getName' is not callable");
  
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
  @param  Refs_AbstractComponent self
  @returns   the result
**/
Taxo_NaturalSource Refs_AbstractComponent_GetNaturalSource(Refs_AbstractComponent self)
{
  
  Taxo_NaturalSource obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNaturalSource");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: cannot find method 'getNaturalSource'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: method 'getNaturalSource' is not callable");
  
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
  @param  Refs_AbstractComponent self
  @returns   the result
**/
ApiString Refs_AbstractComponent_GetPackageName(Refs_AbstractComponent self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: method 'getPackageName' is not callable");
  
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
  @param  Refs_AbstractComponent self
  @returns   the result
**/
ApiString Refs_AbstractComponent_GetPackageShortName(Refs_AbstractComponent self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: method 'getPackageShortName' is not callable");
  
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
  @param  Refs_AbstractComponent self
  @returns   the result
**/
Refs_RefSampleComponentStore Refs_AbstractComponent_GetParent(Refs_AbstractComponent self)
{
  
  Refs_RefSampleComponentStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: method 'getParent' is not callable");
  
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
  @param  Refs_AbstractComponent self
  @returns   the result
**/
ApiString Refs_AbstractComponent_GetQualifiedName(Refs_AbstractComponent self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: method 'getQualifiedName' is not callable");
  
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
  @param  Refs_AbstractComponent self
  @returns   the result
**/
Refs_RefSampleComponentStore Refs_AbstractComponent_GetRefSampleComponentStore(Refs_AbstractComponent self)
{
  
  Refs_RefSampleComponentStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRefSampleComponentStore");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: cannot find method 'getRefSampleComponentStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: method 'getRefSampleComponentStore' is not callable");
  
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
  @param  Refs_AbstractComponent self
  @returns   the result
**/
Impl_MemopsRoot Refs_AbstractComponent_GetRoot(Refs_AbstractComponent self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: method 'getRoot' is not callable");
  
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
  @param  Refs_AbstractComponent self
  @returns   the result
**/
ApiList Refs_AbstractComponent_GetSynonyms(Refs_AbstractComponent self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSynonyms");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: cannot find method 'getSynonyms'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: method 'getSynonyms' is not callable");
  
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
  @param  Refs_AbstractComponent self
  @returns   the result
**/
Impl_TopObject Refs_AbstractComponent_GetTopObject(Refs_AbstractComponent self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.lims.RefSampleComponent.ComponentDbRef
  @param  Refs_AbstractComponent self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Refs_ComponentDbRef Refs_AbstractComponent_NewComponentDbRef(Refs_AbstractComponent self, ApiMap attrlinks)
{
  
  Refs_ComponentDbRef obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newComponentDbRef");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: cannot find method 'newComponentDbRef'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: method 'newComponentDbRef' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.lims.RefSampleComponent.ComponentDbRef
  @param  Refs_AbstractComponent self
  @param  Dbr_Entry dbRef
  @returns  the new object
**/
Refs_ComponentDbRef Refs_AbstractComponent_NewComponentDbRef_reqd(Refs_AbstractComponent self, Dbr_Entry dbRef)
{
  
  Refs_ComponentDbRef  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "dbRef", dbRef);
  
  obj = Refs_AbstractComponent_NewComponentDbRef(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.lims.RefSampleComponent.Label
  @param  Refs_AbstractComponent self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Refs_Label Refs_AbstractComponent_NewLabel(Refs_AbstractComponent self, ApiMap attrlinks)
{
  
  Refs_Label obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newLabel");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: cannot find method 'newLabel'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: method 'newLabel' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.lims.RefSampleComponent.Label
  @param  Refs_AbstractComponent self
  @param  char * labelName
  @param  char * labelType
  @returns  the new object
**/
Refs_Label Refs_AbstractComponent_NewLabel_reqd(Refs_AbstractComponent self, char * labelName, char * labelType)
{
  
  Refs_Label  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__labelName = ApiString_New(labelName);
  ApiString api__labelType = ApiString_New(labelType);

  PyDict_SetItemString(attrlinks, "labelName", api__labelName);
  PyDict_SetItemString(attrlinks, "labelType", api__labelType);
  
  obj = Refs_AbstractComponent_NewLabel(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__labelName);
  Py_DECREF(api__labelType);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_AbstractComponent self
  @param  Impl_ApplicationData value
**/
void *Refs_AbstractComponent_RemoveApplicationData(Refs_AbstractComponent self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: method 'removeApplicationData' is not callable");
  
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
  @param  Refs_AbstractComponent self
  @param  Clas_SampleComponentCategory value
**/
void *Refs_AbstractComponent_RemoveCategory(Refs_AbstractComponent self, Clas_SampleComponentCategory value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeCategory");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: cannot find method 'removeCategory'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: method 'removeCategory' is not callable");
  
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
  @param  Refs_AbstractComponent self
  @param  ApiString value
**/
void *Refs_AbstractComponent_RemoveSynonym(Refs_AbstractComponent self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeSynonym");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: cannot find method 'removeSynonym'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: method 'removeSynonym' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Refs_AbstractComponent self
  @param  Acco_AccessObject value
**/
void *Refs_AbstractComponent_SetAccess(Refs_AbstractComponent self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: method 'setAccess' is not callable");
  
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
  @param  Refs_AbstractComponent self
  @param  ApiList values
**/
void *Refs_AbstractComponent_SetApplicationData(Refs_AbstractComponent self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: method 'setApplicationData' is not callable");
  
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
  @param  Refs_AbstractComponent self
  @param  ApiSet values
**/
void *Refs_AbstractComponent_SetCategories(Refs_AbstractComponent self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCategories");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: cannot find method 'setCategories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: method 'setCategories' is not callable");
  
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
  @param  Refs_AbstractComponent self
  @param  ApiSet values
**/
void *Refs_AbstractComponent_SetCompositeElements(Refs_AbstractComponent self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCompositeElements");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: cannot find method 'setCompositeElements'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: method 'setCompositeElements' is not callable");
  
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
  @param  Refs_AbstractComponent self
  @param  ApiString value
**/
void *Refs_AbstractComponent_SetDetails(Refs_AbstractComponent self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: method 'setDetails' is not callable");
  
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
  @param  Refs_AbstractComponent self
  @param  ApiString value
**/
void *Refs_AbstractComponent_SetName(Refs_AbstractComponent self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: method 'setName' is not callable");
  
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
  @param  Refs_AbstractComponent self
  @param  Taxo_NaturalSource value
**/
void *Refs_AbstractComponent_SetNaturalSource(Refs_AbstractComponent self, Taxo_NaturalSource value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNaturalSource");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: cannot find method 'setNaturalSource'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: method 'setNaturalSource' is not callable");
  
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
  @param  Refs_AbstractComponent self
  @param  ApiList values
**/
void *Refs_AbstractComponent_SetSynonyms(Refs_AbstractComponent self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSynonyms");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: cannot find method 'setSynonyms'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: method 'setSynonyms' is not callable");
  
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
  @param  Refs_AbstractComponent self
  @returns   the result
**/
ApiList Refs_AbstractComponent_SortedCategories(Refs_AbstractComponent self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedCategories");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: cannot find method 'sortedCategories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: method 'sortedCategories' is not callable");
  
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
  @param  Refs_AbstractComponent self
  @returns   the result
**/
ApiList Refs_AbstractComponent_SortedComponentDbRefs(Refs_AbstractComponent self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedComponentDbRefs");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: cannot find method 'sortedComponentDbRefs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: method 'sortedComponentDbRefs' is not callable");
  
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
  @param  Refs_AbstractComponent self
  @returns   the result
**/
ApiList Refs_AbstractComponent_SortedCompositeElements(Refs_AbstractComponent self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedCompositeElements");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: cannot find method 'sortedCompositeElements'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: method 'sortedCompositeElements' is not callable");
  
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
  @param  Refs_AbstractComponent self
  @returns   the result
**/
ApiList Refs_AbstractComponent_SortedLabels(Refs_AbstractComponent self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedLabels");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: cannot find method 'sortedLabels'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.AbstractComponent: method 'sortedLabels' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
