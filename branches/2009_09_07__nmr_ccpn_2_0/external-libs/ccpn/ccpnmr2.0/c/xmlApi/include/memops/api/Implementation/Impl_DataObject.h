
#ifndef __incl__memops_api_Implementation_DataObject_h__
#define __incl__memops_api_Implementation_DataObject_h__

#include "ccp.h"

/*
  Superclass for non-implementation classes
*/

/* package memops.api.Implementation */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Impl_DataObject self
  @param  Impl_ApplicationData value
**/
extern void *Impl_DataObject_AddApplicationData(Impl_DataObject self, Impl_ApplicationData value);

/**
  FullDelete for memops.Implementation.DataObject
  @param  Impl_DataObject self
**/
extern void *Impl_DataObject_Delete(Impl_DataObject self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Impl_DataObject self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Impl_DataObject_FindAllApplicationData(Impl_DataObject self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Impl_DataObject self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Impl_DataObject_FindAllApplicationData_keyval0(Impl_DataObject self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Impl_DataObject self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Impl_DataObject_FindAllApplicationData_keyval1(Impl_DataObject self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Impl_DataObject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Impl_DataObject_FindAllApplicationData_keyval2(Impl_DataObject self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Impl_DataObject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Impl_DataObject_FindAllApplicationData_keyval3(Impl_DataObject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Impl_DataObject self
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
extern ApiList Impl_DataObject_FindAllApplicationData_keyval4(Impl_DataObject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Impl_DataObject self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Impl_DataObject_FindFirstApplicationData(Impl_DataObject self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Impl_DataObject self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Impl_DataObject_FindFirstApplicationData_keyval0(Impl_DataObject self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Impl_DataObject self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Impl_DataObject_FindFirstApplicationData_keyval1(Impl_DataObject self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Impl_DataObject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Impl_DataObject_FindFirstApplicationData_keyval2(Impl_DataObject self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Impl_DataObject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Impl_DataObject_FindFirstApplicationData_keyval3(Impl_DataObject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Impl_DataObject self
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
extern Impl_ApplicationData Impl_DataObject_FindFirstApplicationData_keyval4(Impl_DataObject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Impl_DataObject self
  @returns   the result
**/
extern Acco_AccessObject Impl_DataObject_GetAccess(Impl_DataObject self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Impl_DataObject self
  @returns   the result
**/
extern ApiList Impl_DataObject_GetApplicationData(Impl_DataObject self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Impl_DataObject self
  @returns   the result
**/
extern ApiString Impl_DataObject_GetClassName(Impl_DataObject self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Impl_DataObject self
  @returns   the result
**/
extern ApiList Impl_DataObject_GetFieldNames(Impl_DataObject self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Impl_DataObject self
  @returns   the result
**/
extern ApiBoolean Impl_DataObject_GetInConstructor(Impl_DataObject self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Impl_DataObject self
  @returns   the result
**/
extern ApiBoolean Impl_DataObject_GetIsDeleted(Impl_DataObject self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Impl_DataObject self
  @returns   the result
**/
extern ApiString Impl_DataObject_GetPackageName(Impl_DataObject self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Impl_DataObject self
  @returns   the result
**/
extern ApiString Impl_DataObject_GetPackageShortName(Impl_DataObject self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Impl_DataObject self
  @returns   the result
**/
extern ApiString Impl_DataObject_GetQualifiedName(Impl_DataObject self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Impl_DataObject self
  @returns   the result
**/
extern Impl_MemopsRoot Impl_DataObject_GetRoot(Impl_DataObject self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Impl_DataObject self
  @returns   the result
**/
extern Impl_TopObject Impl_DataObject_GetTopObject(Impl_DataObject self);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Impl_DataObject self
  @param  Impl_ApplicationData value
**/
extern void *Impl_DataObject_RemoveApplicationData(Impl_DataObject self, Impl_ApplicationData value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Impl_DataObject self
  @param  Acco_AccessObject value
**/
extern void *Impl_DataObject_SetAccess(Impl_DataObject self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Impl_DataObject self
  @param  ApiList values
**/
extern void *Impl_DataObject_SetApplicationData(Impl_DataObject self, ApiList values);

#endif /* __incl__memops_api_Implementation_DataObject_h__ */
