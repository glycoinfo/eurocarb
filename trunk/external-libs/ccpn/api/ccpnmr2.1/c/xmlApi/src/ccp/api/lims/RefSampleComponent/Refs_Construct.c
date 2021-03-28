
#include "ccp.h"

/*
  This is a subtype of MolComponent. It is used to summarise information about a construct such as an expression vector plasmid.
*/

/* package ccp.api.lims.RefSampleComponent */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_Construct self
  @param  Impl_ApplicationData value
**/
void *Refs_Construct_AddApplicationData(Refs_Construct self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_Construct self
  @param  Expb_BlueprintComponent value
**/
void *Refs_Construct_AddBlueprintComponent(Refs_Construct self, Expb_BlueprintComponent value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addBlueprintComponent");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'addBlueprintComponent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'addBlueprintComponent' is not callable");
  
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
  @param  Refs_Construct self
  @param  Clas_SampleComponentCategory value
**/
void *Refs_Construct_AddCategory(Refs_Construct self, Clas_SampleComponentCategory value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addCategory");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'addCategory'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'addCategory' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The Target 
associated other MolComponent that define it
  @param  Refs_Construct self
  @param  Targ_Target value
**/
void *Refs_Construct_AddNucTarget(Refs_Construct self, Targ_Target value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addNucTarget");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'addNucTarget'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'addNucTarget' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_Construct self
  @param  Refs_MolCompFeature value
**/
void *Refs_Construct_AddRefMolCompFeature(Refs_Construct self, Refs_MolCompFeature value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addRefMolCompFeature");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'addRefMolCompFeature'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'addRefMolCompFeature' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_Construct self
  @param  Expb_BlueprintComponent value
**/
void *Refs_Construct_AddRelatedExpBlueprint(Refs_Construct self, Expb_BlueprintComponent value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addRelatedExpBlueprint");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'addRelatedExpBlueprint'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'addRelatedExpBlueprint' is not callable");
  
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
  @param  Refs_Construct self
  @param  ApiString value
**/
void *Refs_Construct_AddSynonym(Refs_Construct self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addSynonym");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'addSynonym'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'addSynonym' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.lims.RefSampleComponent.Construct
  @param  Refs_Construct self
  @param  ApiBoolean complete
**/
void *Refs_Construct_CheckAllValid(Refs_Construct self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.lims.RefSampleComponent.Construct
  @param  Refs_Construct self
  @param  ApiBoolean complete
**/
void *Refs_Construct_CheckValid(Refs_Construct self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'checkValid' is not callable");
  
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
  @param  Refs_Construct self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Refs_Construct_FindAllApplicationData(Refs_Construct self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'findAllApplicationData' is not callable");
  
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
  @param  Refs_Construct self
  @returns  all value that satisfy the conditions 
**/
ApiList Refs_Construct_FindAllApplicationData_keyval0(Refs_Construct self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_Construct_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_Construct self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Refs_Construct_FindAllApplicationData_keyval1(Refs_Construct self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_Construct_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Refs_Construct_FindAllApplicationData_keyval2(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_Construct_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Refs_Construct_FindAllApplicationData_keyval3(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_Construct_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_Construct self
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
ApiList Refs_Construct_FindAllApplicationData_keyval4(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_Construct_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_Construct self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Construct_FindAllBlueprintComponents(Refs_Construct self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllBlueprintComponents");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'findAllBlueprintComponents'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'findAllBlueprintComponents' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_Construct self
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Construct_FindAllBlueprintComponents_keyval0(Refs_Construct self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_Construct_FindAllBlueprintComponents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_Construct self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Construct_FindAllBlueprintComponents_keyval1(Refs_Construct self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_Construct_FindAllBlueprintComponents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Construct_FindAllBlueprintComponents_keyval2(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_Construct_FindAllBlueprintComponents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Construct_FindAllBlueprintComponents_keyval3(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_Construct_FindAllBlueprintComponents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_Construct self
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
ApiSet Refs_Construct_FindAllBlueprintComponents_keyval4(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_Construct_FindAllBlueprintComponents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_Construct self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Construct_FindAllCategories(Refs_Construct self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllCategories");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'findAllCategories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'findAllCategories' is not callable");
  
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
  @param  Refs_Construct self
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Construct_FindAllCategories_keyval0(Refs_Construct self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_Construct_FindAllCategories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_Construct self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Construct_FindAllCategories_keyval1(Refs_Construct self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_Construct_FindAllCategories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Construct_FindAllCategories_keyval2(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_Construct_FindAllCategories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Construct_FindAllCategories_keyval3(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_Construct_FindAllCategories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_Construct self
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
ApiSet Refs_Construct_FindAllCategories_keyval4(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_Construct_FindAllCategories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_Construct self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Construct_FindAllComponentDbRefs(Refs_Construct self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllComponentDbRefs");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'findAllComponentDbRefs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'findAllComponentDbRefs' is not callable");
  
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
  @param  Refs_Construct self
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Construct_FindAllComponentDbRefs_keyval0(Refs_Construct self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_Construct_FindAllComponentDbRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_Construct self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Construct_FindAllComponentDbRefs_keyval1(Refs_Construct self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_Construct_FindAllComponentDbRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Construct_FindAllComponentDbRefs_keyval2(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_Construct_FindAllComponentDbRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Construct_FindAllComponentDbRefs_keyval3(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_Construct_FindAllComponentDbRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_Construct self
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
ApiSet Refs_Construct_FindAllComponentDbRefs_keyval4(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_Construct_FindAllComponentDbRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_Construct self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Construct_FindAllCompositeElements(Refs_Construct self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllCompositeElements");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'findAllCompositeElements'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'findAllCompositeElements' is not callable");
  
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
  @param  Refs_Construct self
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Construct_FindAllCompositeElements_keyval0(Refs_Construct self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_Construct_FindAllCompositeElements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_Construct self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Construct_FindAllCompositeElements_keyval1(Refs_Construct self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_Construct_FindAllCompositeElements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Construct_FindAllCompositeElements_keyval2(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_Construct_FindAllCompositeElements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Construct_FindAllCompositeElements_keyval3(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_Construct_FindAllCompositeElements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_Construct self
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
ApiSet Refs_Construct_FindAllCompositeElements_keyval4(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_Construct_FindAllCompositeElements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.RefSampleComponent.AbstractComponent.labels

child 
link to class Label
  @param  Refs_Construct self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Construct_FindAllLabels(Refs_Construct self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllLabels");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'findAllLabels'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'findAllLabels' is not callable");
  
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
  @param  Refs_Construct self
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Construct_FindAllLabels_keyval0(Refs_Construct self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_Construct_FindAllLabels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.RefSampleComponent.AbstractComponent.labels

child 
link to class Label
  @param  Refs_Construct self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Construct_FindAllLabels_keyval1(Refs_Construct self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_Construct_FindAllLabels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.RefSampleComponent.AbstractComponent.labels

child 
link to class Label
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Construct_FindAllLabels_keyval2(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_Construct_FindAllLabels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.RefSampleComponent.AbstractComponent.labels

child 
link to class Label
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Construct_FindAllLabels_keyval3(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_Construct_FindAllLabels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.RefSampleComponent.AbstractComponent.labels

child 
link to class Label
  @param  Refs_Construct self
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
ApiSet Refs_Construct_FindAllLabels_keyval4(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_Construct_FindAllLabels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.molCompFeatures

child link to 
class MolCompFeature
  @param  Refs_Construct self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Construct_FindAllMolCompFeatures(Refs_Construct self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllMolCompFeatures");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'findAllMolCompFeatures'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'findAllMolCompFeatures' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.molCompFeatures

child link to 
class MolCompFeature
  @param  Refs_Construct self
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Construct_FindAllMolCompFeatures_keyval0(Refs_Construct self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_Construct_FindAllMolCompFeatures(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.molCompFeatures

child link to 
class MolCompFeature
  @param  Refs_Construct self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Construct_FindAllMolCompFeatures_keyval1(Refs_Construct self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_Construct_FindAllMolCompFeatures(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.molCompFeatures

child link to 
class MolCompFeature
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Construct_FindAllMolCompFeatures_keyval2(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_Construct_FindAllMolCompFeatures(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.molCompFeatures

child link to 
class MolCompFeature
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Construct_FindAllMolCompFeatures_keyval3(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_Construct_FindAllMolCompFeatures(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.molCompFeatures

child link to 
class MolCompFeature
  @param  Refs_Construct self
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
ApiSet Refs_Construct_FindAllMolCompFeatures_keyval4(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_Construct_FindAllMolCompFeatures(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The 
Target associated other MolComponent that define it
  @param  Refs_Construct self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Construct_FindAllNucTargets(Refs_Construct self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllNucTargets");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'findAllNucTargets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'findAllNucTargets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The 
Target associated other MolComponent that define it
  @param  Refs_Construct self
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Construct_FindAllNucTargets_keyval0(Refs_Construct self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_Construct_FindAllNucTargets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The 
Target associated other MolComponent that define it
  @param  Refs_Construct self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Construct_FindAllNucTargets_keyval1(Refs_Construct self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_Construct_FindAllNucTargets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The 
Target associated other MolComponent that define it
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Construct_FindAllNucTargets_keyval2(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_Construct_FindAllNucTargets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The 
Target associated other MolComponent that define it
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Construct_FindAllNucTargets_keyval3(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_Construct_FindAllNucTargets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The 
Target associated other MolComponent that define it
  @param  Refs_Construct self
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
ApiSet Refs_Construct_FindAllNucTargets_keyval4(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_Construct_FindAllNucTargets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.protTargets

The 
Target associated to the MolComponent that defines it
  @param  Refs_Construct self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Construct_FindAllProtTargets(Refs_Construct self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllProtTargets");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'findAllProtTargets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'findAllProtTargets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.protTargets

The 
Target associated to the MolComponent that defines it
  @param  Refs_Construct self
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Construct_FindAllProtTargets_keyval0(Refs_Construct self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_Construct_FindAllProtTargets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.protTargets

The 
Target associated to the MolComponent that defines it
  @param  Refs_Construct self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Construct_FindAllProtTargets_keyval1(Refs_Construct self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_Construct_FindAllProtTargets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.protTargets

The 
Target associated to the MolComponent that defines it
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Construct_FindAllProtTargets_keyval2(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_Construct_FindAllProtTargets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.protTargets

The 
Target associated to the MolComponent that defines it
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Construct_FindAllProtTargets_keyval3(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_Construct_FindAllProtTargets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.protTargets

The 
Target associated to the MolComponent that defines it
  @param  Refs_Construct self
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
ApiSet Refs_Construct_FindAllProtTargets_keyval4(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_Construct_FindAllProtTargets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_Construct self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Construct_FindAllRefMolCompFeatures(Refs_Construct self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllRefMolCompFeatures");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'findAllRefMolCompFeatures'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'findAllRefMolCompFeatures' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_Construct self
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Construct_FindAllRefMolCompFeatures_keyval0(Refs_Construct self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_Construct_FindAllRefMolCompFeatures(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_Construct self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Construct_FindAllRefMolCompFeatures_keyval1(Refs_Construct self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_Construct_FindAllRefMolCompFeatures(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Construct_FindAllRefMolCompFeatures_keyval2(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_Construct_FindAllRefMolCompFeatures(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Construct_FindAllRefMolCompFeatures_keyval3(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_Construct_FindAllRefMolCompFeatures(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_Construct self
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
ApiSet Refs_Construct_FindAllRefMolCompFeatures_keyval4(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_Construct_FindAllRefMolCompFeatures(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_Construct self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Construct_FindAllRelatedExpBlueprints(Refs_Construct self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllRelatedExpBlueprints");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'findAllRelatedExpBlueprints'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'findAllRelatedExpBlueprints' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_Construct self
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Construct_FindAllRelatedExpBlueprints_keyval0(Refs_Construct self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_Construct_FindAllRelatedExpBlueprints(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_Construct self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Construct_FindAllRelatedExpBlueprints_keyval1(Refs_Construct self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_Construct_FindAllRelatedExpBlueprints(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Construct_FindAllRelatedExpBlueprints_keyval2(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_Construct_FindAllRelatedExpBlueprints(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Construct_FindAllRelatedExpBlueprints_keyval3(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_Construct_FindAllRelatedExpBlueprints(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_Construct self
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
ApiSet Refs_Construct_FindAllRelatedExpBlueprints_keyval4(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_Construct_FindAllRelatedExpBlueprints(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.specificLabelGroups

child link 
to class SpecificLabelGroup
  @param  Refs_Construct self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Construct_FindAllSpecificLabelGroups(Refs_Construct self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllSpecificLabelGroups");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'findAllSpecificLabelGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'findAllSpecificLabelGroups' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.specificLabelGroups

child link 
to class SpecificLabelGroup
  @param  Refs_Construct self
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Construct_FindAllSpecificLabelGroups_keyval0(Refs_Construct self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_Construct_FindAllSpecificLabelGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.specificLabelGroups

child link 
to class SpecificLabelGroup
  @param  Refs_Construct self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Construct_FindAllSpecificLabelGroups_keyval1(Refs_Construct self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_Construct_FindAllSpecificLabelGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.specificLabelGroups

child link 
to class SpecificLabelGroup
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Construct_FindAllSpecificLabelGroups_keyval2(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_Construct_FindAllSpecificLabelGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.specificLabelGroups

child link 
to class SpecificLabelGroup
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_Construct_FindAllSpecificLabelGroups_keyval3(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_Construct_FindAllSpecificLabelGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.specificLabelGroups

child link 
to class SpecificLabelGroup
  @param  Refs_Construct self
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
ApiSet Refs_Construct_FindAllSpecificLabelGroups_keyval4(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_Construct_FindAllSpecificLabelGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_Construct self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Refs_Construct_FindFirstApplicationData(Refs_Construct self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'findFirstApplicationData' is not callable");
  
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
  @param  Refs_Construct self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Refs_Construct_FindFirstApplicationData_keyval0(Refs_Construct self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_Construct_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_Construct self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Refs_Construct_FindFirstApplicationData_keyval1(Refs_Construct self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_Construct_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Refs_Construct_FindFirstApplicationData_keyval2(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_Construct_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Refs_Construct_FindFirstApplicationData_keyval3(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_Construct_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_Construct self
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
Impl_ApplicationData Refs_Construct_FindFirstApplicationData_keyval4(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_Construct_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_Construct self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Expb_BlueprintComponent Refs_Construct_FindFirstBlueprintComponent(Refs_Construct self, ApiMap conditions)
{
  
  Expb_BlueprintComponent obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstBlueprintComponent");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'findFirstBlueprintComponent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'findFirstBlueprintComponent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_Construct self
  @returns  the first value that satisfies the conditions 
**/
Expb_BlueprintComponent Refs_Construct_FindFirstBlueprintComponent_keyval0(Refs_Construct self)
{
  
  Expb_BlueprintComponent  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_Construct_FindFirstBlueprintComponent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_Construct self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Expb_BlueprintComponent Refs_Construct_FindFirstBlueprintComponent_keyval1(Refs_Construct self, char * key, ApiObject value)
{
  
  Expb_BlueprintComponent  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_Construct_FindFirstBlueprintComponent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Expb_BlueprintComponent Refs_Construct_FindFirstBlueprintComponent_keyval2(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Expb_BlueprintComponent  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_Construct_FindFirstBlueprintComponent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Expb_BlueprintComponent Refs_Construct_FindFirstBlueprintComponent_keyval3(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Expb_BlueprintComponent  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_Construct_FindFirstBlueprintComponent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_Construct self
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
Expb_BlueprintComponent Refs_Construct_FindFirstBlueprintComponent_keyval4(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Expb_BlueprintComponent  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_Construct_FindFirstBlueprintComponent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_Construct self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Clas_SampleComponentCategory Refs_Construct_FindFirstCategory(Refs_Construct self, ApiMap conditions)
{
  
  Clas_SampleComponentCategory obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstCategory");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'findFirstCategory'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'findFirstCategory' is not callable");
  
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
  @param  Refs_Construct self
  @returns  the first value that satisfies the conditions 
**/
Clas_SampleComponentCategory Refs_Construct_FindFirstCategory_keyval0(Refs_Construct self)
{
  
  Clas_SampleComponentCategory  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_Construct_FindFirstCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_Construct self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Clas_SampleComponentCategory Refs_Construct_FindFirstCategory_keyval1(Refs_Construct self, char * key, ApiObject value)
{
  
  Clas_SampleComponentCategory  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_Construct_FindFirstCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Clas_SampleComponentCategory Refs_Construct_FindFirstCategory_keyval2(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Clas_SampleComponentCategory  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_Construct_FindFirstCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Clas_SampleComponentCategory Refs_Construct_FindFirstCategory_keyval3(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Clas_SampleComponentCategory  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_Construct_FindFirstCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_Construct self
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
Clas_SampleComponentCategory Refs_Construct_FindFirstCategory_keyval4(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Clas_SampleComponentCategory  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_Construct_FindFirstCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_Construct self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Refs_ComponentDbRef Refs_Construct_FindFirstComponentDbRef(Refs_Construct self, ApiMap conditions)
{
  
  Refs_ComponentDbRef obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstComponentDbRef");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'findFirstComponentDbRef'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'findFirstComponentDbRef' is not callable");
  
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
  @param  Refs_Construct self
  @returns  the first value that satisfies the conditions 
**/
Refs_ComponentDbRef Refs_Construct_FindFirstComponentDbRef_keyval0(Refs_Construct self)
{
  
  Refs_ComponentDbRef  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_Construct_FindFirstComponentDbRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_Construct self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Refs_ComponentDbRef Refs_Construct_FindFirstComponentDbRef_keyval1(Refs_Construct self, char * key, ApiObject value)
{
  
  Refs_ComponentDbRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_Construct_FindFirstComponentDbRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Refs_ComponentDbRef Refs_Construct_FindFirstComponentDbRef_keyval2(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Refs_ComponentDbRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_Construct_FindFirstComponentDbRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Refs_ComponentDbRef Refs_Construct_FindFirstComponentDbRef_keyval3(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Refs_ComponentDbRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_Construct_FindFirstComponentDbRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_Construct self
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
Refs_ComponentDbRef Refs_Construct_FindFirstComponentDbRef_keyval4(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Refs_ComponentDbRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_Construct_FindFirstComponentDbRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_Construct self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Refs_CompositeElement Refs_Construct_FindFirstCompositeElement(Refs_Construct self, ApiMap conditions)
{
  
  Refs_CompositeElement obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstCompositeElement");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'findFirstCompositeElement'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'findFirstCompositeElement' is not callable");
  
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
  @param  Refs_Construct self
  @returns  the first value that satisfies the conditions 
**/
Refs_CompositeElement Refs_Construct_FindFirstCompositeElement_keyval0(Refs_Construct self)
{
  
  Refs_CompositeElement  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_Construct_FindFirstCompositeElement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_Construct self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Refs_CompositeElement Refs_Construct_FindFirstCompositeElement_keyval1(Refs_Construct self, char * key, ApiObject value)
{
  
  Refs_CompositeElement  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_Construct_FindFirstCompositeElement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Refs_CompositeElement Refs_Construct_FindFirstCompositeElement_keyval2(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Refs_CompositeElement  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_Construct_FindFirstCompositeElement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Refs_CompositeElement Refs_Construct_FindFirstCompositeElement_keyval3(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Refs_CompositeElement  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_Construct_FindFirstCompositeElement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_Construct self
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
Refs_CompositeElement Refs_Construct_FindFirstCompositeElement_keyval4(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Refs_CompositeElement  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_Construct_FindFirstCompositeElement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.labels

child link to 
class Label
  @param  Refs_Construct self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Refs_Label Refs_Construct_FindFirstLabel(Refs_Construct self, ApiMap conditions)
{
  
  Refs_Label obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstLabel");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'findFirstLabel'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'findFirstLabel' is not callable");
  
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
  @param  Refs_Construct self
  @returns  the first value that satisfies the conditions 
**/
Refs_Label Refs_Construct_FindFirstLabel_keyval0(Refs_Construct self)
{
  
  Refs_Label  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_Construct_FindFirstLabel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.labels

child link to 
class Label
  @param  Refs_Construct self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Refs_Label Refs_Construct_FindFirstLabel_keyval1(Refs_Construct self, char * key, ApiObject value)
{
  
  Refs_Label  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_Construct_FindFirstLabel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.labels

child link to 
class Label
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Refs_Label Refs_Construct_FindFirstLabel_keyval2(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Refs_Label  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_Construct_FindFirstLabel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.labels

child link to 
class Label
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Refs_Label Refs_Construct_FindFirstLabel_keyval3(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Refs_Label  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_Construct_FindFirstLabel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.labels

child link to 
class Label
  @param  Refs_Construct self
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
Refs_Label Refs_Construct_FindFirstLabel_keyval4(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Refs_Label  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_Construct_FindFirstLabel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.molCompFeatures

child link to 
class MolCompFeature
  @param  Refs_Construct self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Refs_MolCompFeature Refs_Construct_FindFirstMolCompFeature(Refs_Construct self, ApiMap conditions)
{
  
  Refs_MolCompFeature obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstMolCompFeature");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'findFirstMolCompFeature'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'findFirstMolCompFeature' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.molCompFeatures

child link to 
class MolCompFeature
  @param  Refs_Construct self
  @returns  the first value that satisfies the conditions 
**/
Refs_MolCompFeature Refs_Construct_FindFirstMolCompFeature_keyval0(Refs_Construct self)
{
  
  Refs_MolCompFeature  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_Construct_FindFirstMolCompFeature(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.molCompFeatures

child link to 
class MolCompFeature
  @param  Refs_Construct self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Refs_MolCompFeature Refs_Construct_FindFirstMolCompFeature_keyval1(Refs_Construct self, char * key, ApiObject value)
{
  
  Refs_MolCompFeature  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_Construct_FindFirstMolCompFeature(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.molCompFeatures

child link to 
class MolCompFeature
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Refs_MolCompFeature Refs_Construct_FindFirstMolCompFeature_keyval2(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Refs_MolCompFeature  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_Construct_FindFirstMolCompFeature(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.molCompFeatures

child link to 
class MolCompFeature
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Refs_MolCompFeature Refs_Construct_FindFirstMolCompFeature_keyval3(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Refs_MolCompFeature  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_Construct_FindFirstMolCompFeature(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.molCompFeatures

child link to 
class MolCompFeature
  @param  Refs_Construct self
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
Refs_MolCompFeature Refs_Construct_FindFirstMolCompFeature_keyval4(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Refs_MolCompFeature  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_Construct_FindFirstMolCompFeature(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The 
Target associated other MolComponent that define it
  @param  Refs_Construct self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Targ_Target Refs_Construct_FindFirstNucTarget(Refs_Construct self, ApiMap conditions)
{
  
  Targ_Target obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstNucTarget");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'findFirstNucTarget'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'findFirstNucTarget' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The 
Target associated other MolComponent that define it
  @param  Refs_Construct self
  @returns  the first value that satisfies the conditions 
**/
Targ_Target Refs_Construct_FindFirstNucTarget_keyval0(Refs_Construct self)
{
  
  Targ_Target  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_Construct_FindFirstNucTarget(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The 
Target associated other MolComponent that define it
  @param  Refs_Construct self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Targ_Target Refs_Construct_FindFirstNucTarget_keyval1(Refs_Construct self, char * key, ApiObject value)
{
  
  Targ_Target  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_Construct_FindFirstNucTarget(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The 
Target associated other MolComponent that define it
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Targ_Target Refs_Construct_FindFirstNucTarget_keyval2(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Targ_Target  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_Construct_FindFirstNucTarget(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The 
Target associated other MolComponent that define it
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Targ_Target Refs_Construct_FindFirstNucTarget_keyval3(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Targ_Target  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_Construct_FindFirstNucTarget(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The 
Target associated other MolComponent that define it
  @param  Refs_Construct self
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
Targ_Target Refs_Construct_FindFirstNucTarget_keyval4(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Targ_Target  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_Construct_FindFirstNucTarget(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.RefSampleComponent.MolComponent.protTargets

The 
Target associated to the MolComponent that defines it
  @param  Refs_Construct self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Targ_Target Refs_Construct_FindFirstProtTarget(Refs_Construct self, ApiMap conditions)
{
  
  Targ_Target obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstProtTarget");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'findFirstProtTarget'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'findFirstProtTarget' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.RefSampleComponent.MolComponent.protTargets

The 
Target associated to the MolComponent that defines it
  @param  Refs_Construct self
  @returns  the first value that satisfies the conditions 
**/
Targ_Target Refs_Construct_FindFirstProtTarget_keyval0(Refs_Construct self)
{
  
  Targ_Target  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_Construct_FindFirstProtTarget(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.RefSampleComponent.MolComponent.protTargets

The 
Target associated to the MolComponent that defines it
  @param  Refs_Construct self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Targ_Target Refs_Construct_FindFirstProtTarget_keyval1(Refs_Construct self, char * key, ApiObject value)
{
  
  Targ_Target  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_Construct_FindFirstProtTarget(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.RefSampleComponent.MolComponent.protTargets

The 
Target associated to the MolComponent that defines it
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Targ_Target Refs_Construct_FindFirstProtTarget_keyval2(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Targ_Target  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_Construct_FindFirstProtTarget(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.RefSampleComponent.MolComponent.protTargets

The 
Target associated to the MolComponent that defines it
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Targ_Target Refs_Construct_FindFirstProtTarget_keyval3(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Targ_Target  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_Construct_FindFirstProtTarget(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.RefSampleComponent.MolComponent.protTargets

The 
Target associated to the MolComponent that defines it
  @param  Refs_Construct self
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
Targ_Target Refs_Construct_FindFirstProtTarget_keyval4(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Targ_Target  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_Construct_FindFirstProtTarget(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_Construct self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Refs_MolCompFeature Refs_Construct_FindFirstRefMolCompFeature(Refs_Construct self, ApiMap conditions)
{
  
  Refs_MolCompFeature obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstRefMolCompFeature");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'findFirstRefMolCompFeature'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'findFirstRefMolCompFeature' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_Construct self
  @returns  the first value that satisfies the conditions 
**/
Refs_MolCompFeature Refs_Construct_FindFirstRefMolCompFeature_keyval0(Refs_Construct self)
{
  
  Refs_MolCompFeature  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_Construct_FindFirstRefMolCompFeature(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_Construct self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Refs_MolCompFeature Refs_Construct_FindFirstRefMolCompFeature_keyval1(Refs_Construct self, char * key, ApiObject value)
{
  
  Refs_MolCompFeature  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_Construct_FindFirstRefMolCompFeature(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Refs_MolCompFeature Refs_Construct_FindFirstRefMolCompFeature_keyval2(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Refs_MolCompFeature  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_Construct_FindFirstRefMolCompFeature(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Refs_MolCompFeature Refs_Construct_FindFirstRefMolCompFeature_keyval3(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Refs_MolCompFeature  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_Construct_FindFirstRefMolCompFeature(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_Construct self
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
Refs_MolCompFeature Refs_Construct_FindFirstRefMolCompFeature_keyval4(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Refs_MolCompFeature  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_Construct_FindFirstRefMolCompFeature(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_Construct self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Expb_BlueprintComponent Refs_Construct_FindFirstRelatedExpBlueprint(Refs_Construct self, ApiMap conditions)
{
  
  Expb_BlueprintComponent obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstRelatedExpBlueprint");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'findFirstRelatedExpBlueprint'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'findFirstRelatedExpBlueprint' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_Construct self
  @returns  the first value that satisfies the conditions 
**/
Expb_BlueprintComponent Refs_Construct_FindFirstRelatedExpBlueprint_keyval0(Refs_Construct self)
{
  
  Expb_BlueprintComponent  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_Construct_FindFirstRelatedExpBlueprint(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_Construct self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Expb_BlueprintComponent Refs_Construct_FindFirstRelatedExpBlueprint_keyval1(Refs_Construct self, char * key, ApiObject value)
{
  
  Expb_BlueprintComponent  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_Construct_FindFirstRelatedExpBlueprint(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Expb_BlueprintComponent Refs_Construct_FindFirstRelatedExpBlueprint_keyval2(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Expb_BlueprintComponent  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_Construct_FindFirstRelatedExpBlueprint(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Expb_BlueprintComponent Refs_Construct_FindFirstRelatedExpBlueprint_keyval3(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Expb_BlueprintComponent  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_Construct_FindFirstRelatedExpBlueprint(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_Construct self
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
Expb_BlueprintComponent Refs_Construct_FindFirstRelatedExpBlueprint_keyval4(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Expb_BlueprintComponent  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_Construct_FindFirstRelatedExpBlueprint(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.specificLabelGroups

child link 
to class SpecificLabelGroup
  @param  Refs_Construct self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Refs_SpecificLabelGroup Refs_Construct_FindFirstSpecificLabelGroup(Refs_Construct self, ApiMap conditions)
{
  
  Refs_SpecificLabelGroup obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstSpecificLabelGroup");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'findFirstSpecificLabelGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'findFirstSpecificLabelGroup' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.specificLabelGroups

child link 
to class SpecificLabelGroup
  @param  Refs_Construct self
  @returns  the first value that satisfies the conditions 
**/
Refs_SpecificLabelGroup Refs_Construct_FindFirstSpecificLabelGroup_keyval0(Refs_Construct self)
{
  
  Refs_SpecificLabelGroup  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_Construct_FindFirstSpecificLabelGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.specificLabelGroups

child link 
to class SpecificLabelGroup
  @param  Refs_Construct self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Refs_SpecificLabelGroup Refs_Construct_FindFirstSpecificLabelGroup_keyval1(Refs_Construct self, char * key, ApiObject value)
{
  
  Refs_SpecificLabelGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_Construct_FindFirstSpecificLabelGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.specificLabelGroups

child link 
to class SpecificLabelGroup
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Refs_SpecificLabelGroup Refs_Construct_FindFirstSpecificLabelGroup_keyval2(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Refs_SpecificLabelGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_Construct_FindFirstSpecificLabelGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.specificLabelGroups

child link 
to class SpecificLabelGroup
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Refs_SpecificLabelGroup Refs_Construct_FindFirstSpecificLabelGroup_keyval3(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Refs_SpecificLabelGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_Construct_FindFirstSpecificLabelGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.specificLabelGroups

child link 
to class SpecificLabelGroup
  @param  Refs_Construct self
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
Refs_SpecificLabelGroup Refs_Construct_FindFirstSpecificLabelGroup_keyval4(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Refs_SpecificLabelGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_Construct_FindFirstSpecificLabelGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.lims.RefSampleComponent.Construct
  @param  Refs_Construct self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Refs_Construct_Get(Refs_Construct self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Refs_Construct self
  @returns   the result
**/
Acco_AccessObject Refs_Construct_GetAccess(Refs_Construct self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'getAccess' is not callable");
  
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
  @param  Refs_Construct self
  @returns   the result
**/
Acco_AccessObject Refs_Construct_GetActiveAccess(Refs_Construct self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'getActiveAccess' is not callable");
  
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
  @param  Refs_Construct self
  @returns   the result
**/
ApiList Refs_Construct_GetApplicationData(Refs_Construct self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_Construct self
  @returns   the result
**/
ApiSet Refs_Construct_GetBlueprintComponents(Refs_Construct self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getBlueprintComponents");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'getBlueprintComponents'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'getBlueprintComponents' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.lims.RefSampleComponent.Construct
  @param  Refs_Construct self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Refs_Construct Refs_Construct_GetByKey(Refs_Construct self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Refs_Construct obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'getByKey' is not callable");
  
  args = PyTuple_Pack(2, startObj, fullKey);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.MolComponent.casNum

CAS registry 
number (http://www.cas.org/EO/regsys.html).
  @param  Refs_Construct self
  @returns   the result
**/
ApiString Refs_Construct_GetCasNum(Refs_Construct self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCasNum");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'getCasNum'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'getCasNum' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.AbstractComponent.categories

List 
of category associated to a component.
  @param  Refs_Construct self
  @returns   the result
**/
ApiSet Refs_Construct_GetCategories(Refs_Construct self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCategories");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'getCategories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'getCategories' is not callable");
  
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
  @param  Refs_Construct self
  @returns   the result
**/
ApiString Refs_Construct_GetClassName(Refs_Construct self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'getClassName' is not callable");
  
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
  @param  Refs_Construct self
  @returns   the result
**/
ApiSet Refs_Construct_GetComponentDbRefs(Refs_Construct self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getComponentDbRefs");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'getComponentDbRefs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'getComponentDbRefs' is not callable");
  
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
  @param  Refs_Construct self
  @returns   the result
**/
ApiSet Refs_Construct_GetCompositeElements(Refs_Construct self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCompositeElements");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'getCompositeElements'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'getCompositeElements' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.Construct.constructStatus

The 
status of the construct e.g. empty, with target, ...
  @param  Refs_Construct self
  @returns   the result
**/
ApiString Refs_Construct_GetConstructStatus(Refs_Construct self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getConstructStatus");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'getConstructStatus'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'getConstructStatus' is not callable");
  
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
  @param  Refs_Construct self
  @returns   the result
**/
ApiString Refs_Construct_GetDetails(Refs_Construct self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'getDetails' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.MolComponent.empiricalFormula

The 
molecular formula of the molComponent.
  @param  Refs_Construct self
  @returns   the result
**/
ApiString Refs_Construct_GetEmpiricalFormula(Refs_Construct self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getEmpiricalFormula");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'getEmpiricalFormula'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'getEmpiricalFormula' is not callable");
  
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
  @param  Refs_Construct self
  @returns   the result
**/
ApiList Refs_Construct_GetFieldNames(Refs_Construct self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.Construct.function

The Construct 
class is also used to describe vectors and so the function attribute can 
be used to indicate the function of the vector e.g. expression.
  @param  Refs_Construct self
  @returns   the result
**/
ApiString Refs_Construct_GetFunction(Refs_Construct self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFunction");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'getFunction'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'getFunction' is not callable");
  
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
  @param  Refs_Construct self
  @returns   the result
**/
ApiBoolean Refs_Construct_GetInConstructor(Refs_Construct self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'getInConstructor' is not callable");
  
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
  @param  Refs_Construct self
  @returns   the result
**/
ApiBoolean Refs_Construct_GetIsDeleted(Refs_Construct self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.lims.RefSampleComponent.MolComponent.labeledMixture

LabeledMixture 
that describes MolComponent isotope labeling
  @param  Refs_Construct self
  @returns   the result
**/
Lmol_LabeledMixture Refs_Construct_GetLabeledMixture(Refs_Construct self)
{
  
  Lmol_LabeledMixture obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLabeledMixture");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'getLabeledMixture'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'getLabeledMixture' is not callable");
  
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
  @param  Refs_Construct self
  @returns   the result
**/
ApiSet Refs_Construct_GetLabels(Refs_Construct self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLabels");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'getLabels'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'getLabels' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.Construct.markerDetails

Detail 
field for marker information. Precise information should go to a 
MolCompFeature.
  @param  Refs_Construct self
  @returns   the result
**/
ApiString Refs_Construct_GetMarkerDetails(Refs_Construct self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMarkerDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'getMarkerDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'getMarkerDetails' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.MolComponent.molCompFeatures

child 
link to class MolCompFeature
  @param  Refs_Construct self
  @returns   the result
**/
ApiSet Refs_Construct_GetMolCompFeatures(Refs_Construct self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolCompFeatures");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'getMolCompFeatures'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'getMolCompFeatures' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.MolComponent.molType

Type of 
component, on the general lines of biopolymer/polymer/nonpolymer. See 
MolComponentType DataType for details
  @param  Refs_Construct self
  @returns   the result
**/
ApiString Refs_Construct_GetMolType(Refs_Construct self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolType");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'getMolType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'getMolType' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.MolComponent.molecularMass

The 
experimental molecular mass in dalton (Da).
  @param  Refs_Construct self
  @returns   the result
**/
ApiFloat Refs_Construct_GetMolecularMass(Refs_Construct self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolecularMass");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'getMolecularMass'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'getMolecularMass' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.MolComponent.molecule

The molecule 
used to describe the precise topology of the MolComponent.
  @param  Refs_Construct self
  @returns   the result
**/
Mole_Molecule Refs_Construct_GetMolecule(Refs_Construct self)
{
  
  Mole_Molecule obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolecule");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'getMolecule'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'getMolecule' is not callable");
  
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
  @param  Refs_Construct self
  @returns   the result
**/
ApiString Refs_Construct_GetName(Refs_Construct self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'getName' is not callable");
  
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
  @param  Refs_Construct self
  @returns   the result
**/
Taxo_NaturalSource Refs_Construct_GetNaturalSource(Refs_Construct self)
{
  
  Taxo_NaturalSource obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNaturalSource");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'getNaturalSource'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'getNaturalSource' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The Target 
associated other MolComponent that define it
  @param  Refs_Construct self
  @returns   the result
**/
ApiSet Refs_Construct_GetNucTargets(Refs_Construct self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNucTargets");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'getNucTargets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'getNucTargets' is not callable");
  
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
  @param  Refs_Construct self
  @returns   the result
**/
ApiString Refs_Construct_GetPackageName(Refs_Construct self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'getPackageName' is not callable");
  
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
  @param  Refs_Construct self
  @returns   the result
**/
ApiString Refs_Construct_GetPackageShortName(Refs_Construct self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'getPackageShortName' is not callable");
  
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
  @param  Refs_Construct self
  @returns   the result
**/
Refs_RefSampleComponentStore Refs_Construct_GetParent(Refs_Construct self)
{
  
  Refs_RefSampleComponentStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.Construct.promoterDetails

Detail 
field for promoter information. Precise information should go to a 
MolCompFeature.
  @param  Refs_Construct self
  @returns   the result
**/
ApiString Refs_Construct_GetPromoterDetails(Refs_Construct self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPromoterDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'getPromoterDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'getPromoterDetails' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.MolComponent.protTargets

The Target 
associated to the MolComponent that defines it
  @param  Refs_Construct self
  @returns   the result
**/
ApiSet Refs_Construct_GetProtTargets(Refs_Construct self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getProtTargets");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'getProtTargets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'getProtTargets' is not callable");
  
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
  @param  Refs_Construct self
  @returns   the result
**/
ApiString Refs_Construct_GetQualifiedName(Refs_Construct self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_Construct self
  @returns   the result
**/
ApiSet Refs_Construct_GetRefMolCompFeatures(Refs_Construct self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRefMolCompFeatures");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'getRefMolCompFeatures'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'getRefMolCompFeatures' is not callable");
  
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
  @param  Refs_Construct self
  @returns   the result
**/
Refs_RefSampleComponentStore Refs_Construct_GetRefSampleComponentStore(Refs_Construct self)
{
  
  Refs_RefSampleComponentStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRefSampleComponentStore");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'getRefSampleComponentStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'getRefSampleComponentStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_Construct self
  @returns   the result
**/
ApiSet Refs_Construct_GetRelatedExpBlueprints(Refs_Construct self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRelatedExpBlueprints");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'getRelatedExpBlueprints'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'getRelatedExpBlueprints' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.Construct.resistanceDetails

Detail 
field for resistance information. Precise information should go to a 
MolCompFeature.
  @param  Refs_Construct self
  @returns   the result
**/
ApiString Refs_Construct_GetResistanceDetails(Refs_Construct self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getResistanceDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'getResistanceDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'getResistanceDetails' is not callable");
  
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
  @param  Refs_Construct self
  @returns   the result
**/
Impl_MemopsRoot Refs_Construct_GetRoot(Refs_Construct self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.MolComponent.seqDetails
  @param  Refs_Construct self
  @returns   the result
**/
ApiString Refs_Construct_GetSeqDetails(Refs_Construct self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSeqDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'getSeqDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'getSeqDetails' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.MolComponent.seqString
  @param  Refs_Construct self
  @returns   the result
**/
ApiString Refs_Construct_GetSeqString(Refs_Construct self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSeqString");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'getSeqString'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'getSeqString' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.Construct.sequenceType

The type of 
nucleic acid sequence in the construct. Note that to find all the DNA 
molecules it is necessary to search for DNA + cDNA and for RNA, RNA + 
mRNA + tRNA.
  @param  Refs_Construct self
  @returns   the result
**/
ApiString Refs_Construct_GetSequenceType(Refs_Construct self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSequenceType");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'getSequenceType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'getSequenceType' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.lims.RefSampleComponent.MolComponent.specificLabelGroups

child link 
to class SpecificLabelGroup
  @param  Refs_Construct self
  @returns   the result
**/
ApiSet Refs_Construct_GetSpecificLabelGroups(Refs_Construct self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSpecificLabelGroups");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'getSpecificLabelGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'getSpecificLabelGroups' is not callable");
  
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
  @param  Refs_Construct self
  @returns   the result
**/
ApiList Refs_Construct_GetSynonyms(Refs_Construct self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSynonyms");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'getSynonyms'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'getSynonyms' is not callable");
  
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
  @param  Refs_Construct self
  @returns   the result
**/
Impl_TopObject Refs_Construct_GetTopObject(Refs_Construct self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.lims.RefSampleComponent.Construct
  @param  Refs_RefSampleComponentStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Refs_Construct Refs_Construct_Init(Refs_RefSampleComponentStore parent, ApiMap attrlinks)
{
  
  return Refs_RefSampleComponentStore_NewConstruct(parent, attrlinks);
}

/**
  Constructor for ccp.lims.RefSampleComponent.Construct
  @param  Refs_RefSampleComponentStore parent
  @param  char * constructStatus
  @param  char * name
  @returns  the new object
**/
Refs_Construct Refs_Construct_Init_reqd(Refs_RefSampleComponentStore parent, char * constructStatus, char * name)
{
  
  Refs_Construct  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__constructStatus = ApiString_New(constructStatus);
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "constructStatus", api__constructStatus);
  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Refs_Construct_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__constructStatus);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_Construct self
  @param  Impl_ApplicationData value
**/
void *Refs_Construct_RemoveApplicationData(Refs_Construct self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_Construct self
  @param  Expb_BlueprintComponent value
**/
void *Refs_Construct_RemoveBlueprintComponent(Refs_Construct self, Expb_BlueprintComponent value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeBlueprintComponent");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'removeBlueprintComponent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'removeBlueprintComponent' is not callable");
  
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
  @param  Refs_Construct self
  @param  Clas_SampleComponentCategory value
**/
void *Refs_Construct_RemoveCategory(Refs_Construct self, Clas_SampleComponentCategory value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeCategory");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'removeCategory'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'removeCategory' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The 
Target associated other MolComponent that define it
  @param  Refs_Construct self
  @param  Targ_Target value
**/
void *Refs_Construct_RemoveNucTarget(Refs_Construct self, Targ_Target value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeNucTarget");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'removeNucTarget'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'removeNucTarget' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_Construct self
  @param  Refs_MolCompFeature value
**/
void *Refs_Construct_RemoveRefMolCompFeature(Refs_Construct self, Refs_MolCompFeature value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeRefMolCompFeature");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'removeRefMolCompFeature'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'removeRefMolCompFeature' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_Construct self
  @param  Expb_BlueprintComponent value
**/
void *Refs_Construct_RemoveRelatedExpBlueprint(Refs_Construct self, Expb_BlueprintComponent value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeRelatedExpBlueprint");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'removeRelatedExpBlueprint'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'removeRelatedExpBlueprint' is not callable");
  
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
  @param  Refs_Construct self
  @param  ApiString value
**/
void *Refs_Construct_RemoveSynonym(Refs_Construct self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeSynonym");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'removeSynonym'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'removeSynonym' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.lims.RefSampleComponent.Construct
  @param  Refs_Construct self
  @param  ApiString name
  @param  ApiObject value
**/
void *Refs_Construct_Set(Refs_Construct self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Refs_Construct self
  @param  Acco_AccessObject value
**/
void *Refs_Construct_SetAccess(Refs_Construct self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'setAccess' is not callable");
  
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
  @param  Refs_Construct self
  @param  ApiList values
**/
void *Refs_Construct_SetApplicationData(Refs_Construct self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_Construct self
  @param  ApiSet values
**/
void *Refs_Construct_SetBlueprintComponents(Refs_Construct self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setBlueprintComponents");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'setBlueprintComponents'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'setBlueprintComponents' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.RefSampleComponent.MolComponent.casNum

CAS registry 
number (http://www.cas.org/EO/regsys.html).
  @param  Refs_Construct self
  @param  ApiString value
**/
void *Refs_Construct_SetCasNum(Refs_Construct self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCasNum");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'setCasNum'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'setCasNum' is not callable");
  
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
  @param  Refs_Construct self
  @param  ApiSet values
**/
void *Refs_Construct_SetCategories(Refs_Construct self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCategories");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'setCategories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'setCategories' is not callable");
  
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
  @param  Refs_Construct self
  @param  ApiSet values
**/
void *Refs_Construct_SetCompositeElements(Refs_Construct self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCompositeElements");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'setCompositeElements'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'setCompositeElements' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.RefSampleComponent.Construct.constructStatus

The 
status of the construct e.g. empty, with target, ...
  @param  Refs_Construct self
  @param  ApiString value
**/
void *Refs_Construct_SetConstructStatus(Refs_Construct self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setConstructStatus");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'setConstructStatus'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'setConstructStatus' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.RefSampleComponent.AbstractComponent.details

Detail 
field for comments.
  @param  Refs_Construct self
  @param  ApiString value
**/
void *Refs_Construct_SetDetails(Refs_Construct self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.RefSampleComponent.MolComponent.empiricalFormula

The 
molecular formula of the molComponent.
  @param  Refs_Construct self
  @param  ApiString value
**/
void *Refs_Construct_SetEmpiricalFormula(Refs_Construct self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setEmpiricalFormula");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'setEmpiricalFormula'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'setEmpiricalFormula' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.RefSampleComponent.Construct.function

The Construct 
class is also used to describe vectors and so the function attribute can 
be used to indicate the function of the vector e.g. expression.
  @param  Refs_Construct self
  @param  ApiString value
**/
void *Refs_Construct_SetFunction(Refs_Construct self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setFunction");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'setFunction'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'setFunction' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.lims.RefSampleComponent.MolComponent.labeledMixture

LabeledMixture 
that describes MolComponent isotope labeling
  @param  Refs_Construct self
  @param  Lmol_LabeledMixture value
**/
void *Refs_Construct_SetLabeledMixture(Refs_Construct self, Lmol_LabeledMixture value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLabeledMixture");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'setLabeledMixture'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'setLabeledMixture' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.RefSampleComponent.Construct.markerDetails

Detail 
field for marker information. Precise information should go to a 
MolCompFeature.
  @param  Refs_Construct self
  @param  ApiString value
**/
void *Refs_Construct_SetMarkerDetails(Refs_Construct self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMarkerDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'setMarkerDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'setMarkerDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.RefSampleComponent.MolComponent.molType

Type of 
component, on the general lines of biopolymer/polymer/nonpolymer. See 
MolComponentType DataType for details
  @param  Refs_Construct self
  @param  ApiString value
**/
void *Refs_Construct_SetMolType(Refs_Construct self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMolType");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'setMolType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'setMolType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.RefSampleComponent.MolComponent.molecularMass

The 
experimental molecular mass in dalton (Da).
  @param  Refs_Construct self
  @param  ApiFloat value
**/
void *Refs_Construct_SetMolecularMass(Refs_Construct self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMolecularMass");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'setMolecularMass'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'setMolecularMass' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.RefSampleComponent.MolComponent.molecule

The molecule 
used to describe the precise topology of the MolComponent.
  @param  Refs_Construct self
  @param  Mole_Molecule value
**/
void *Refs_Construct_SetMolecule(Refs_Construct self, Mole_Molecule value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMolecule");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'setMolecule'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'setMolecule' is not callable");
  
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
  @param  Refs_Construct self
  @param  ApiString value
**/
void *Refs_Construct_SetName(Refs_Construct self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'setName' is not callable");
  
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
  @param  Refs_Construct self
  @param  Taxo_NaturalSource value
**/
void *Refs_Construct_SetNaturalSource(Refs_Construct self, Taxo_NaturalSource value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNaturalSource");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'setNaturalSource'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'setNaturalSource' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The Target 
associated other MolComponent that define it
  @param  Refs_Construct self
  @param  ApiSet values
**/
void *Refs_Construct_SetNucTargets(Refs_Construct self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNucTargets");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'setNucTargets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'setNucTargets' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.RefSampleComponent.Construct.promoterDetails

Detail 
field for promoter information. Precise information should go to a 
MolCompFeature.
  @param  Refs_Construct self
  @param  ApiString value
**/
void *Refs_Construct_SetPromoterDetails(Refs_Construct self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPromoterDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'setPromoterDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'setPromoterDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.RefSampleComponent.MolComponent.protTargets

The Target 
associated to the MolComponent that defines it
  @param  Refs_Construct self
  @param  ApiSet values
**/
void *Refs_Construct_SetProtTargets(Refs_Construct self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setProtTargets");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'setProtTargets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'setProtTargets' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_Construct self
  @param  ApiSet values
**/
void *Refs_Construct_SetRefMolCompFeatures(Refs_Construct self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRefMolCompFeatures");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'setRefMolCompFeatures'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'setRefMolCompFeatures' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_Construct self
  @param  ApiSet values
**/
void *Refs_Construct_SetRelatedExpBlueprints(Refs_Construct self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRelatedExpBlueprints");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'setRelatedExpBlueprints'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'setRelatedExpBlueprints' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.RefSampleComponent.Construct.resistanceDetails

Detail 
field for resistance information. Precise information should go to a 
MolCompFeature.
  @param  Refs_Construct self
  @param  ApiString value
**/
void *Refs_Construct_SetResistanceDetails(Refs_Construct self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setResistanceDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'setResistanceDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'setResistanceDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.RefSampleComponent.MolComponent.seqDetails
  @param  Refs_Construct self
  @param  ApiString value
**/
void *Refs_Construct_SetSeqDetails(Refs_Construct self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSeqDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'setSeqDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'setSeqDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.RefSampleComponent.MolComponent.seqString
  @param  Refs_Construct self
  @param  ApiString value
**/
void *Refs_Construct_SetSeqString(Refs_Construct self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSeqString");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'setSeqString'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'setSeqString' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.RefSampleComponent.Construct.sequenceType

The type of 
nucleic acid sequence in the construct. Note that to find all the DNA 
molecules it is necessary to search for DNA + cDNA and for RNA, RNA + 
mRNA + tRNA.
  @param  Refs_Construct self
  @param  ApiString value
**/
void *Refs_Construct_SetSequenceType(Refs_Construct self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSequenceType");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'setSequenceType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'setSequenceType' is not callable");
  
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
  @param  Refs_Construct self
  @param  ApiList values
**/
void *Refs_Construct_SetSynonyms(Refs_Construct self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSynonyms");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'setSynonyms'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'setSynonyms' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_Construct self
  @returns   the result
**/
ApiList Refs_Construct_SortedBlueprintComponents(Refs_Construct self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedBlueprintComponents");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'sortedBlueprintComponents'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'sortedBlueprintComponents' is not callable");
  
  args = PyTuple_New(0);
  
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
  @param  Refs_Construct self
  @returns   the result
**/
ApiList Refs_Construct_SortedCategories(Refs_Construct self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedCategories");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'sortedCategories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'sortedCategories' is not callable");
  
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
  @param  Refs_Construct self
  @returns   the result
**/
ApiList Refs_Construct_SortedComponentDbRefs(Refs_Construct self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedComponentDbRefs");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'sortedComponentDbRefs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'sortedComponentDbRefs' is not callable");
  
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
  @param  Refs_Construct self
  @returns   the result
**/
ApiList Refs_Construct_SortedCompositeElements(Refs_Construct self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedCompositeElements");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'sortedCompositeElements'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'sortedCompositeElements' is not callable");
  
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
  @param  Refs_Construct self
  @returns   the result
**/
ApiList Refs_Construct_SortedLabels(Refs_Construct self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedLabels");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'sortedLabels'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'sortedLabels' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.lims.RefSampleComponent.MolComponent.molCompFeatures

child link to 
class MolCompFeature
  @param  Refs_Construct self
  @returns   the result
**/
ApiList Refs_Construct_SortedMolCompFeatures(Refs_Construct self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedMolCompFeatures");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'sortedMolCompFeatures'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'sortedMolCompFeatures' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The 
Target associated other MolComponent that define it
  @param  Refs_Construct self
  @returns   the result
**/
ApiList Refs_Construct_SortedNucTargets(Refs_Construct self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedNucTargets");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'sortedNucTargets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'sortedNucTargets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.RefSampleComponent.MolComponent.protTargets

The 
Target associated to the MolComponent that defines it
  @param  Refs_Construct self
  @returns   the result
**/
ApiList Refs_Construct_SortedProtTargets(Refs_Construct self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedProtTargets");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'sortedProtTargets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'sortedProtTargets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_Construct self
  @returns   the result
**/
ApiList Refs_Construct_SortedRefMolCompFeatures(Refs_Construct self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedRefMolCompFeatures");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'sortedRefMolCompFeatures'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'sortedRefMolCompFeatures' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_Construct self
  @returns   the result
**/
ApiList Refs_Construct_SortedRelatedExpBlueprints(Refs_Construct self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedRelatedExpBlueprints");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'sortedRelatedExpBlueprints'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'sortedRelatedExpBlueprints' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.lims.RefSampleComponent.MolComponent.specificLabelGroups

child link 
to class SpecificLabelGroup
  @param  Refs_Construct self
  @returns   the result
**/
ApiList Refs_Construct_SortedSpecificLabelGroups(Refs_Construct self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedSpecificLabelGroups");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: cannot find method 'sortedSpecificLabelGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.Construct: method 'sortedSpecificLabelGroups' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
