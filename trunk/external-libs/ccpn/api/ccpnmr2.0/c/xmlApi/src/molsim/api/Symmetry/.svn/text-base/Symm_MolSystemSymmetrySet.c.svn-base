
#include "ccp.h"

/*
  Set of symmetry operations on a MolSystem
*/

/* package molsim.api.Symmetry */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Symm_MolSystemSymmetrySet self
  @param  Impl_ApplicationData value
**/
void *Symm_MolSystemSymmetrySet_AddApplicationData(Symm_MolSystemSymmetrySet self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for molsim.Symmetry.MolSystemSymmetrySet
  @param  Symm_MolSystemSymmetrySet self
  @param  ApiBoolean complete
**/
void *Symm_MolSystemSymmetrySet_CheckAllValid(Symm_MolSystemSymmetrySet self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for molsim.Symmetry.MolSystemSymmetrySet
  @param  Symm_MolSystemSymmetrySet self
  @param  ApiBoolean complete
**/
void *Symm_MolSystemSymmetrySet_CheckValid(Symm_MolSystemSymmetrySet self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: method 'checkValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Symm_MolSystemSymmetrySet self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Symm_MolSystemSymmetrySet_FindAllActiveRepositories(Symm_MolSystemSymmetrySet self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllActiveRepositories");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: cannot find method 'findAllActiveRepositories'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: method 'findAllActiveRepositories' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Symm_MolSystemSymmetrySet self
  @returns  all value that satisfy the conditions 
**/
ApiList Symm_MolSystemSymmetrySet_FindAllActiveRepositories_keyval0(Symm_MolSystemSymmetrySet self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Symm_MolSystemSymmetrySet_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Symm_MolSystemSymmetrySet self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Symm_MolSystemSymmetrySet_FindAllActiveRepositories_keyval1(Symm_MolSystemSymmetrySet self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Symm_MolSystemSymmetrySet_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Symm_MolSystemSymmetrySet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Symm_MolSystemSymmetrySet_FindAllActiveRepositories_keyval2(Symm_MolSystemSymmetrySet self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Symm_MolSystemSymmetrySet_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Symm_MolSystemSymmetrySet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Symm_MolSystemSymmetrySet_FindAllActiveRepositories_keyval3(Symm_MolSystemSymmetrySet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Symm_MolSystemSymmetrySet_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Symm_MolSystemSymmetrySet self
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
ApiList Symm_MolSystemSymmetrySet_FindAllActiveRepositories_keyval4(Symm_MolSystemSymmetrySet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Symm_MolSystemSymmetrySet_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Symm_MolSystemSymmetrySet self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Symm_MolSystemSymmetrySet_FindAllApplicationData(Symm_MolSystemSymmetrySet self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: method 'findAllApplicationData' is not callable");
  
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
  @param  Symm_MolSystemSymmetrySet self
  @returns  all value that satisfy the conditions 
**/
ApiList Symm_MolSystemSymmetrySet_FindAllApplicationData_keyval0(Symm_MolSystemSymmetrySet self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Symm_MolSystemSymmetrySet_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Symm_MolSystemSymmetrySet self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Symm_MolSystemSymmetrySet_FindAllApplicationData_keyval1(Symm_MolSystemSymmetrySet self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Symm_MolSystemSymmetrySet_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Symm_MolSystemSymmetrySet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Symm_MolSystemSymmetrySet_FindAllApplicationData_keyval2(Symm_MolSystemSymmetrySet self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Symm_MolSystemSymmetrySet_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Symm_MolSystemSymmetrySet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Symm_MolSystemSymmetrySet_FindAllApplicationData_keyval3(Symm_MolSystemSymmetrySet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Symm_MolSystemSymmetrySet_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Symm_MolSystemSymmetrySet self
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
ApiList Symm_MolSystemSymmetrySet_FindAllApplicationData_keyval4(Symm_MolSystemSymmetrySet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Symm_MolSystemSymmetrySet_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.Symmetry.MolSystemSymmetrySet.symmetries

child link 
to class Symmetry
  @param  Symm_MolSystemSymmetrySet self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Symm_MolSystemSymmetrySet_FindAllSymmetries(Symm_MolSystemSymmetrySet self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllSymmetries");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: cannot find method 'findAllSymmetries'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: method 'findAllSymmetries' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for molsim.Symmetry.MolSystemSymmetrySet.symmetries

child link 
to class Symmetry
  @param  Symm_MolSystemSymmetrySet self
  @returns  all value that satisfy the conditions 
**/
ApiSet Symm_MolSystemSymmetrySet_FindAllSymmetries_keyval0(Symm_MolSystemSymmetrySet self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Symm_MolSystemSymmetrySet_FindAllSymmetries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.Symmetry.MolSystemSymmetrySet.symmetries

child link 
to class Symmetry
  @param  Symm_MolSystemSymmetrySet self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Symm_MolSystemSymmetrySet_FindAllSymmetries_keyval1(Symm_MolSystemSymmetrySet self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Symm_MolSystemSymmetrySet_FindAllSymmetries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.Symmetry.MolSystemSymmetrySet.symmetries

child link 
to class Symmetry
  @param  Symm_MolSystemSymmetrySet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Symm_MolSystemSymmetrySet_FindAllSymmetries_keyval2(Symm_MolSystemSymmetrySet self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Symm_MolSystemSymmetrySet_FindAllSymmetries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.Symmetry.MolSystemSymmetrySet.symmetries

child link 
to class Symmetry
  @param  Symm_MolSystemSymmetrySet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Symm_MolSystemSymmetrySet_FindAllSymmetries_keyval3(Symm_MolSystemSymmetrySet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Symm_MolSystemSymmetrySet_FindAllSymmetries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.Symmetry.MolSystemSymmetrySet.symmetries

child link 
to class Symmetry
  @param  Symm_MolSystemSymmetrySet self
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
ApiSet Symm_MolSystemSymmetrySet_FindAllSymmetries_keyval4(Symm_MolSystemSymmetrySet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Symm_MolSystemSymmetrySet_FindAllSymmetries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Symm_MolSystemSymmetrySet self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Symm_MolSystemSymmetrySet_FindFirstActiveRepository(Symm_MolSystemSymmetrySet self, ApiMap conditions)
{
  
  Impl_Repository obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstActiveRepository");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: cannot find method 'findFirstActiveRepository'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: method 'findFirstActiveRepository' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Symm_MolSystemSymmetrySet self
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Symm_MolSystemSymmetrySet_FindFirstActiveRepository_keyval0(Symm_MolSystemSymmetrySet self)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Symm_MolSystemSymmetrySet_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Symm_MolSystemSymmetrySet self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Symm_MolSystemSymmetrySet_FindFirstActiveRepository_keyval1(Symm_MolSystemSymmetrySet self, char * key, ApiObject value)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Symm_MolSystemSymmetrySet_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Symm_MolSystemSymmetrySet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Symm_MolSystemSymmetrySet_FindFirstActiveRepository_keyval2(Symm_MolSystemSymmetrySet self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Symm_MolSystemSymmetrySet_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Symm_MolSystemSymmetrySet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Symm_MolSystemSymmetrySet_FindFirstActiveRepository_keyval3(Symm_MolSystemSymmetrySet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Symm_MolSystemSymmetrySet_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Symm_MolSystemSymmetrySet self
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
Impl_Repository Symm_MolSystemSymmetrySet_FindFirstActiveRepository_keyval4(Symm_MolSystemSymmetrySet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Symm_MolSystemSymmetrySet_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Symm_MolSystemSymmetrySet self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Symm_MolSystemSymmetrySet_FindFirstApplicationData(Symm_MolSystemSymmetrySet self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: method 'findFirstApplicationData' is not callable");
  
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
  @param  Symm_MolSystemSymmetrySet self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Symm_MolSystemSymmetrySet_FindFirstApplicationData_keyval0(Symm_MolSystemSymmetrySet self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Symm_MolSystemSymmetrySet_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Symm_MolSystemSymmetrySet self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Symm_MolSystemSymmetrySet_FindFirstApplicationData_keyval1(Symm_MolSystemSymmetrySet self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Symm_MolSystemSymmetrySet_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Symm_MolSystemSymmetrySet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Symm_MolSystemSymmetrySet_FindFirstApplicationData_keyval2(Symm_MolSystemSymmetrySet self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Symm_MolSystemSymmetrySet_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Symm_MolSystemSymmetrySet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Symm_MolSystemSymmetrySet_FindFirstApplicationData_keyval3(Symm_MolSystemSymmetrySet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Symm_MolSystemSymmetrySet_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Symm_MolSystemSymmetrySet self
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
Impl_ApplicationData Symm_MolSystemSymmetrySet_FindFirstApplicationData_keyval4(Symm_MolSystemSymmetrySet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Symm_MolSystemSymmetrySet_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.Symmetry.MolSystemSymmetrySet.symmetries

child 
link to class Symmetry
  @param  Symm_MolSystemSymmetrySet self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Symm_Symmetry Symm_MolSystemSymmetrySet_FindFirstSymmetries(Symm_MolSystemSymmetrySet self, ApiMap conditions)
{
  
  Symm_Symmetry obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstSymmetries");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: cannot find method 'findFirstSymmetries'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: method 'findFirstSymmetries' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for molsim.Symmetry.MolSystemSymmetrySet.symmetries

child 
link to class Symmetry
  @param  Symm_MolSystemSymmetrySet self
  @returns  the first value that satisfies the conditions 
**/
Symm_Symmetry Symm_MolSystemSymmetrySet_FindFirstSymmetries_keyval0(Symm_MolSystemSymmetrySet self)
{
  
  Symm_Symmetry  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Symm_MolSystemSymmetrySet_FindFirstSymmetries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.Symmetry.MolSystemSymmetrySet.symmetries

child 
link to class Symmetry
  @param  Symm_MolSystemSymmetrySet self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Symm_Symmetry Symm_MolSystemSymmetrySet_FindFirstSymmetries_keyval1(Symm_MolSystemSymmetrySet self, char * key, ApiObject value)
{
  
  Symm_Symmetry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Symm_MolSystemSymmetrySet_FindFirstSymmetries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.Symmetry.MolSystemSymmetrySet.symmetries

child 
link to class Symmetry
  @param  Symm_MolSystemSymmetrySet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Symm_Symmetry Symm_MolSystemSymmetrySet_FindFirstSymmetries_keyval2(Symm_MolSystemSymmetrySet self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Symm_Symmetry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Symm_MolSystemSymmetrySet_FindFirstSymmetries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.Symmetry.MolSystemSymmetrySet.symmetries

child 
link to class Symmetry
  @param  Symm_MolSystemSymmetrySet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Symm_Symmetry Symm_MolSystemSymmetrySet_FindFirstSymmetries_keyval3(Symm_MolSystemSymmetrySet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Symm_Symmetry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Symm_MolSystemSymmetrySet_FindFirstSymmetries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.Symmetry.MolSystemSymmetrySet.symmetries

child 
link to class Symmetry
  @param  Symm_MolSystemSymmetrySet self
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
Symm_Symmetry Symm_MolSystemSymmetrySet_FindFirstSymmetries_keyval4(Symm_MolSystemSymmetrySet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Symm_Symmetry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Symm_MolSystemSymmetrySet_FindFirstSymmetries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for molsim.Symmetry.MolSystemSymmetrySet
  @param  Symm_MolSystemSymmetrySet self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Symm_MolSystemSymmetrySet_Get(Symm_MolSystemSymmetrySet self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Symm_MolSystemSymmetrySet self
  @returns   the result
**/
Acco_AccessObject Symm_MolSystemSymmetrySet_GetAccess(Symm_MolSystemSymmetrySet self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: method 'getAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.TopObject.activeRepositories

Repositories 
on package search path that contains a copy of TopObject
  @param  Symm_MolSystemSymmetrySet self
  @returns   the result
**/
ApiList Symm_MolSystemSymmetrySet_GetActiveRepositories(Symm_MolSystemSymmetrySet self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveRepositories");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: cannot find method 'getActiveRepositories'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: method 'getActiveRepositories' is not callable");
  
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
  @param  Symm_MolSystemSymmetrySet self
  @returns   the result
**/
ApiList Symm_MolSystemSymmetrySet_GetApplicationData(Symm_MolSystemSymmetrySet self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for molsim.Symmetry.MolSystemSymmetrySet
  @param  Symm_MolSystemSymmetrySet self
  @param  Impl_MemopsRoot startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Symm_MolSystemSymmetrySet Symm_MolSystemSymmetrySet_GetByKey(Symm_MolSystemSymmetrySet self, Impl_MemopsRoot startObj, ApiList fullKey)
{
  
  Symm_MolSystemSymmetrySet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: method 'getByKey' is not callable");
  
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
  @param  Symm_MolSystemSymmetrySet self
  @returns   the result
**/
ApiString Symm_MolSystemSymmetrySet_GetClassName(Symm_MolSystemSymmetrySet self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.TopObject.createdBy

user who created 
TopObject.
  @param  Symm_MolSystemSymmetrySet self
  @returns   the result
**/
ApiString Symm_MolSystemSymmetrySet_GetCreatedBy(Symm_MolSystemSymmetrySet self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCreatedBy");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: cannot find method 'getCreatedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: method 'getCreatedBy' is not callable");
  
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
  @param  Symm_MolSystemSymmetrySet self
  @returns   the result
**/
ApiList Symm_MolSystemSymmetrySet_GetFieldNames(Symm_MolSystemSymmetrySet self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for molsim.Symmetry.MolSystemSymmetrySet
  @param  Symm_MolSystemSymmetrySet self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Symm_MolSystemSymmetrySet_GetFullKey(Symm_MolSystemSymmetrySet self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: method 'getFullKey' is not callable");
  
  args = PyTuple_Pack(1, useGuid);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.TopObject.guid

global unique identifier - 
set by implementation.
  @param  Symm_MolSystemSymmetrySet self
  @returns   the result
**/
ApiString Symm_MolSystemSymmetrySet_GetGuid(Symm_MolSystemSymmetrySet self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getGuid");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: cannot find method 'getGuid'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: method 'getGuid' is not callable");
  
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
  @param  Symm_MolSystemSymmetrySet self
  @returns   the result
**/
ApiBoolean Symm_MolSystemSymmetrySet_GetInConstructor(Symm_MolSystemSymmetrySet self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: method 'getInConstructor' is not callable");
  
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
  @param  Symm_MolSystemSymmetrySet self
  @returns   the result
**/
ApiBoolean Symm_MolSystemSymmetrySet_GetIsDeleted(Symm_MolSystemSymmetrySet self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.TopObject.isLoaded

Implementation 
attribute, set automatically. True if the data in the Storage are loaded 
into memory. As data are loaded automatically, this attribute should be 
of interest only for the implementation.
  @param  Symm_MolSystemSymmetrySet self
  @returns   the result
**/
ApiBoolean Symm_MolSystemSymmetrySet_GetIsLoaded(Symm_MolSystemSymmetrySet self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsLoaded");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: cannot find method 'getIsLoaded'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: method 'getIsLoaded' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.TopObject.isModifiable

True if the data 
corresponding to the storage may be modified. If isModifiable is false 
for a given package, attemps to modify the data will raise an error. 
Note that isModifiable can be set to true even if the corresponding file 
is read-only. 

For a Project, this atribute defines whether the 
Implementation package (not the entire project contents) can be 
modified. If the Implementation package is Read-Only, this will prohibit 
many changes in the other packages as well.

This parameter can be 
freely modified by users, so it is not a security feature, but rather a 
protection against accidental changes.
  @param  Symm_MolSystemSymmetrySet self
  @returns   the result
**/
ApiBoolean Symm_MolSystemSymmetrySet_GetIsModifiable(Symm_MolSystemSymmetrySet self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsModifiable");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: cannot find method 'getIsModifiable'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: method 'getIsModifiable' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.TopObject.isModified

Implementation 
attribute. True if the data corresponding to the Storage have been 
modified since being loaded. Serves to indicate which data need to be 
saved.
  @param  Symm_MolSystemSymmetrySet self
  @returns   the result
**/
ApiBoolean Symm_MolSystemSymmetrySet_GetIsModified(Symm_MolSystemSymmetrySet self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsModified");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: cannot find method 'getIsModified'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: method 'getIsModified' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.TopObject.isReading

Implementation 
attribute, set automatically. True if the data corresponding to the 
Storage are in the process of being read. As data loading is handled 
automatically, this attribute should be relevant only for the 
implementation, or possibly for programmers of multithreaded programs. 
Serves to suppress notifiers and validity checking during reading. Note 
that objects are not valid until the data loading is completed.
  @param  Symm_MolSystemSymmetrySet self
  @returns   the result
**/
ApiBoolean Symm_MolSystemSymmetrySet_GetIsReading(Symm_MolSystemSymmetrySet self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsReading");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: cannot find method 'getIsReading'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: method 'getIsReading' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.TopObject.lastUnlockedBy

User who last 
set TopObject.isModifiable to True.  Used to track if data have been 
modified. Provided data have isModifiable set to False, any modification 
in the underlying data will show up on lastUnlockedBy.
  @param  Symm_MolSystemSymmetrySet self
  @returns   the result
**/
ApiString Symm_MolSystemSymmetrySet_GetLastUnlockedBy(Symm_MolSystemSymmetrySet self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLastUnlockedBy");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: cannot find method 'getLastUnlockedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: method 'getLastUnlockedBy' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for molsim.Symmetry.MolSystemSymmetrySet
  @param  Symm_MolSystemSymmetrySet self
  @returns  Local object key
**/
ApiObject Symm_MolSystemSymmetrySet_GetLocalKey(Symm_MolSystemSymmetrySet self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.Symmetry.MolSystemSymmetrySet.memopsRoot

parent link
  @param  Symm_MolSystemSymmetrySet self
  @returns   the result
**/
Impl_MemopsRoot Symm_MolSystemSymmetrySet_GetMemopsRoot(Symm_MolSystemSymmetrySet self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMemopsRoot");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: cannot find method 'getMemopsRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: method 'getMemopsRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.Symmetry.MolSystemSymmetrySet.molSystem

MolSystem that 
symmetry applies to. Part of object key
  @param  Symm_MolSystemSymmetrySet self
  @returns   the result
**/
Mols_MolSystem Symm_MolSystemSymmetrySet_GetMolSystem(Symm_MolSystemSymmetrySet self)
{
  
  Mols_MolSystem obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolSystem");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: cannot find method 'getMolSystem'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: method 'getMolSystem' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.TopObject.packageLocator

Package locator 
relevant for TopObject
  @param  Symm_MolSystemSymmetrySet self
  @returns   the result
**/
Impl_PackageLocator Symm_MolSystemSymmetrySet_GetPackageLocator(Symm_MolSystemSymmetrySet self)
{
  
  Impl_PackageLocator obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageLocator");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: cannot find method 'getPackageLocator'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: method 'getPackageLocator' is not callable");
  
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
  @param  Symm_MolSystemSymmetrySet self
  @returns   the result
**/
ApiString Symm_MolSystemSymmetrySet_GetPackageName(Symm_MolSystemSymmetrySet self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: method 'getPackageName' is not callable");
  
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
  @param  Symm_MolSystemSymmetrySet self
  @returns   the result
**/
ApiString Symm_MolSystemSymmetrySet_GetPackageShortName(Symm_MolSystemSymmetrySet self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.Symmetry.MolSystemSymmetrySet.parent

link to parent 
object - synonym for memopsRoot
  @param  Symm_MolSystemSymmetrySet self
  @returns   the result
**/
Impl_MemopsRoot Symm_MolSystemSymmetrySet_GetParent(Symm_MolSystemSymmetrySet self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: method 'getParent' is not callable");
  
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
  @param  Symm_MolSystemSymmetrySet self
  @returns   the result
**/
ApiString Symm_MolSystemSymmetrySet_GetQualifiedName(Symm_MolSystemSymmetrySet self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: method 'getQualifiedName' is not callable");
  
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
  @param  Symm_MolSystemSymmetrySet self
  @returns   the result
**/
Impl_MemopsRoot Symm_MolSystemSymmetrySet_GetRoot(Symm_MolSystemSymmetrySet self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.Symmetry.MolSystemSymmetrySet.symmetries

child link to 
class Symmetry
  @param  Symm_MolSystemSymmetrySet self
  @returns   the result
**/
ApiSet Symm_MolSystemSymmetrySet_GetSymmetries(Symm_MolSystemSymmetrySet self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSymmetries");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: cannot find method 'getSymmetries'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: method 'getSymmetries' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.Symmetry.MolSystemSymmetrySet.symmetrySetId

Identifier 
of MolSystemSymmetrySet. Used to distinguish between objects that belong 
to the same MolSystem. Part of object key.
  @param  Symm_MolSystemSymmetrySet self
  @returns   the result
**/
ApiInteger Symm_MolSystemSymmetrySet_GetSymmetrySetId(Symm_MolSystemSymmetrySet self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSymmetrySetId");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: cannot find method 'getSymmetrySetId'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: method 'getSymmetrySetId' is not callable");
  
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
  @param  Symm_MolSystemSymmetrySet self
  @returns   the result
**/
Impl_TopObject Symm_MolSystemSymmetrySet_GetTopObject(Symm_MolSystemSymmetrySet self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for molsim.Symmetry.MolSystemSymmetrySet
  @param  Impl_MemopsRoot parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Symm_MolSystemSymmetrySet Symm_MolSystemSymmetrySet_Init(Impl_MemopsRoot parent, ApiMap attrlinks)
{
  
  return Impl_MemopsRoot_NewMolSystemSymmetrySet(parent, attrlinks);
}

/**
  Constructor for molsim.Symmetry.MolSystemSymmetrySet
  @param  Impl_MemopsRoot parent
  @param  Mols_MolSystem molSystem
  @param  ApiInteger symmetrySetId
  @returns  the new object
**/
Symm_MolSystemSymmetrySet Symm_MolSystemSymmetrySet_Init_reqd(Impl_MemopsRoot parent, Mols_MolSystem molSystem, ApiInteger symmetrySetId)
{
  
  Symm_MolSystemSymmetrySet  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "molSystem", molSystem);
  PyDict_SetItemString(attrlinks, "symmetrySetId", symmetrySetId);
  
  obj = Symm_MolSystemSymmetrySet_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create molsim.Symmetry.Symmetry
  @param  Symm_MolSystemSymmetrySet self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Symm_Symmetry Symm_MolSystemSymmetrySet_NewSymmetry(Symm_MolSystemSymmetrySet self, ApiMap attrlinks)
{
  
  Symm_Symmetry obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newSymmetry");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: cannot find method 'newSymmetry'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: method 'newSymmetry' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create molsim.Symmetry.Symmetry
  @param  Symm_MolSystemSymmetrySet self
  @returns  the new object
**/
Symm_Symmetry Symm_MolSystemSymmetrySet_NewSymmetry_reqd(Symm_MolSystemSymmetrySet self)
{
  
  Symm_Symmetry  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Symm_MolSystemSymmetrySet_NewSymmetry(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Symm_MolSystemSymmetrySet self
  @param  Impl_ApplicationData value
**/
void *Symm_MolSystemSymmetrySet_RemoveApplicationData(Symm_MolSystemSymmetrySet self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for molsim.Symmetry.MolSystemSymmetrySet
  @param  Symm_MolSystemSymmetrySet self
  @param  ApiString name
  @param  ApiObject value
**/
void *Symm_MolSystemSymmetrySet_Set(Symm_MolSystemSymmetrySet self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Symm_MolSystemSymmetrySet self
  @param  Acco_AccessObject value
**/
void *Symm_MolSystemSymmetrySet_SetAccess(Symm_MolSystemSymmetrySet self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: method 'setAccess' is not callable");
  
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
  @param  Symm_MolSystemSymmetrySet self
  @param  ApiList values
**/
void *Symm_MolSystemSymmetrySet_SetApplicationData(Symm_MolSystemSymmetrySet self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.TopObject.createdBy

user who created 
TopObject.
  @param  Symm_MolSystemSymmetrySet self
  @param  ApiString value
**/
void *Symm_MolSystemSymmetrySet_SetCreatedBy(Symm_MolSystemSymmetrySet self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCreatedBy");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: cannot find method 'setCreatedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: method 'setCreatedBy' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.TopObject.guid

global unique identifier - 
set by implementation.
  @param  Symm_MolSystemSymmetrySet self
  @param  ApiString value
**/
void *Symm_MolSystemSymmetrySet_SetGuid(Symm_MolSystemSymmetrySet self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setGuid");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: cannot find method 'setGuid'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: method 'setGuid' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.TopObject.isModifiable

True if the data 
corresponding to the storage may be modified. If isModifiable is false 
for a given package, attemps to modify the data will raise an error. 
Note that isModifiable can be set to true even if the corresponding file 
is read-only. 

For a Project, this atribute defines whether the 
Implementation package (not the entire project contents) can be 
modified. If the Implementation package is Read-Only, this will prohibit 
many changes in the other packages as well.

This parameter can be 
freely modified by users, so it is not a security feature, but rather a 
protection against accidental changes.
  @param  Symm_MolSystemSymmetrySet self
  @param  ApiBoolean value
**/
void *Symm_MolSystemSymmetrySet_SetIsModifiable(Symm_MolSystemSymmetrySet self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsModifiable");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: cannot find method 'setIsModifiable'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: method 'setIsModifiable' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.TopObject.lastUnlockedBy

User who last 
set TopObject.isModifiable to True.  Used to track if data have been 
modified. Provided data have isModifiable set to False, any modification 
in the underlying data will show up on lastUnlockedBy.
  @param  Symm_MolSystemSymmetrySet self
  @param  ApiString value
**/
void *Symm_MolSystemSymmetrySet_SetLastUnlockedBy(Symm_MolSystemSymmetrySet self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLastUnlockedBy");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: cannot find method 'setLastUnlockedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: method 'setLastUnlockedBy' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for molsim.Symmetry.MolSystemSymmetrySet.molSystem

MolSystem that 
symmetry applies to. Part of object key
  @param  Symm_MolSystemSymmetrySet self
  @param  Mols_MolSystem value
**/
void *Symm_MolSystemSymmetrySet_SetMolSystem(Symm_MolSystemSymmetrySet self, Mols_MolSystem value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMolSystem");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: cannot find method 'setMolSystem'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: method 'setMolSystem' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for molsim.Symmetry.MolSystemSymmetrySet.symmetrySetId

Identifier 
of MolSystemSymmetrySet. Used to distinguish between objects that belong 
to the same MolSystem. Part of object key.
  @param  Symm_MolSystemSymmetrySet self
  @param  ApiInteger value
**/
void *Symm_MolSystemSymmetrySet_SetSymmetrySetId(Symm_MolSystemSymmetrySet self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSymmetrySetId");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: cannot find method 'setSymmetrySetId'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: method 'setSymmetrySetId' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for molsim.Symmetry.MolSystemSymmetrySet.symmetries

child link 
to class Symmetry
  @param  Symm_MolSystemSymmetrySet self
  @returns   the result
**/
ApiList Symm_MolSystemSymmetrySet_SortedSymmetries(Symm_MolSystemSymmetrySet self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedSymmetries");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: cannot find method 'sortedSymmetries'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.MolSystemSymmetrySet: method 'sortedSymmetries' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
