
#ifndef __incl__ccp_api_general_DataLocation_ComponentShape_h__
#define __incl__ccp_api_general_DataLocation_ComponentShape_h__

#include "ccp.h"

/*
  Descriptor for the individual shapes that are multiplied together to reconstruct a component.
*/

/* package ccp.api.general.DataLocation */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_ComponentShape self
  @param  Impl_ApplicationData value
**/
extern void *Dloc_ComponentShape_AddApplicationData(Dloc_ComponentShape self, Impl_ApplicationData value);

/**
  CheckAllValid for ccp.general.DataLocation.ComponentShape
  @param  Dloc_ComponentShape self
  @param  ApiBoolean complete
**/
extern void *Dloc_ComponentShape_CheckAllValid(Dloc_ComponentShape self, ApiBoolean complete);

/**
  CheckValid for ccp.general.DataLocation.ComponentShape
  @param  Dloc_ComponentShape self
  @param  ApiBoolean complete
**/
extern void *Dloc_ComponentShape_CheckValid(Dloc_ComponentShape self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_ComponentShape self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Dloc_ComponentShape_FindAllApplicationData(Dloc_ComponentShape self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_ComponentShape self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Dloc_ComponentShape_FindAllApplicationData_keyval0(Dloc_ComponentShape self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_ComponentShape self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Dloc_ComponentShape_FindAllApplicationData_keyval1(Dloc_ComponentShape self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_ComponentShape self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Dloc_ComponentShape_FindAllApplicationData_keyval2(Dloc_ComponentShape self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_ComponentShape self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Dloc_ComponentShape_FindAllApplicationData_keyval3(Dloc_ComponentShape self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_ComponentShape self
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
extern ApiList Dloc_ComponentShape_FindAllApplicationData_keyval4(Dloc_ComponentShape self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_ComponentShape self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Dloc_ComponentShape_FindFirstApplicationData(Dloc_ComponentShape self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_ComponentShape self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Dloc_ComponentShape_FindFirstApplicationData_keyval0(Dloc_ComponentShape self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_ComponentShape self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Dloc_ComponentShape_FindFirstApplicationData_keyval1(Dloc_ComponentShape self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_ComponentShape self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Dloc_ComponentShape_FindFirstApplicationData_keyval2(Dloc_ComponentShape self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_ComponentShape self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Dloc_ComponentShape_FindFirstApplicationData_keyval3(Dloc_ComponentShape self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_ComponentShape self
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
extern Impl_ApplicationData Dloc_ComponentShape_FindFirstApplicationData_keyval4(Dloc_ComponentShape self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.general.DataLocation.ComponentShape
  @param  Dloc_ComponentShape self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Dloc_ComponentShape_Get(Dloc_ComponentShape self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Dloc_ComponentShape self
  @returns   the result
**/
extern Acco_AccessObject Dloc_ComponentShape_GetAccess(Dloc_ComponentShape self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_ComponentShape self
  @returns   the result
**/
extern ApiList Dloc_ComponentShape_GetApplicationData(Dloc_ComponentShape self);

/**
  GetByKey for ccp.general.DataLocation.ComponentShape
  @param  Dloc_ComponentShape self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Dloc_ComponentShape Dloc_ComponentShape_GetByKey(Dloc_ComponentShape self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Dloc_ComponentShape self
  @returns   the result
**/
extern ApiString Dloc_ComponentShape_GetClassName(Dloc_ComponentShape self);

/**
  Get for ccp.general.DataLocation.ComponentShape.dims

Dimension indices 
(starting at zero) for dimensions described by shape. If there is more 
than one dim, the first in the array is the fastest varying index in the 
shape.
  @param  Dloc_ComponentShape self
  @returns   the result
**/
extern ApiList Dloc_ComponentShape_GetDims(Dloc_ComponentShape self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Dloc_ComponentShape self
  @returns   the result
**/
extern ApiList Dloc_ComponentShape_GetFieldNames(Dloc_ComponentShape self);

/**
  GetFullKey for ccp.general.DataLocation.ComponentShape
  @param  Dloc_ComponentShape self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Dloc_ComponentShape_GetFullKey(Dloc_ComponentShape self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Dloc_ComponentShape self
  @returns   the result
**/
extern ApiBoolean Dloc_ComponentShape_GetInConstructor(Dloc_ComponentShape self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Dloc_ComponentShape self
  @returns   the result
**/
extern ApiBoolean Dloc_ComponentShape_GetIsDeleted(Dloc_ComponentShape self);

/**
  GetLocalKey for ccp.general.DataLocation.ComponentShape
  @param  Dloc_ComponentShape self
  @returns  Local object key
**/
extern ApiObject Dloc_ComponentShape_GetLocalKey(Dloc_ComponentShape self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Dloc_ComponentShape self
  @returns   the result
**/
extern ApiString Dloc_ComponentShape_GetPackageName(Dloc_ComponentShape self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Dloc_ComponentShape self
  @returns   the result
**/
extern ApiString Dloc_ComponentShape_GetPackageShortName(Dloc_ComponentShape self);

/**
  Get for ccp.general.DataLocation.ComponentShape.parent

link to parent 
object - synonym for shapeMatrix
  @param  Dloc_ComponentShape self
  @returns   the result
**/
extern Dloc_ShapeMatrix Dloc_ComponentShape_GetParent(Dloc_ComponentShape self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Dloc_ComponentShape self
  @returns   the result
**/
extern ApiString Dloc_ComponentShape_GetQualifiedName(Dloc_ComponentShape self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Dloc_ComponentShape self
  @returns   the result
**/
extern Impl_MemopsRoot Dloc_ComponentShape_GetRoot(Dloc_ComponentShape self);

/**
  Get for ccp.general.DataLocation.ComponentShape.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Dloc_ComponentShape self
  @returns   the result
**/
extern ApiInteger Dloc_ComponentShape_GetSerial(Dloc_ComponentShape self);

/**
  Get for ccp.general.DataLocation.ComponentShape.shapeMatrix

parent link
  @param  Dloc_ComponentShape self
  @returns   the result
**/
extern Dloc_ShapeMatrix Dloc_ComponentShape_GetShapeMatrix(Dloc_ComponentShape self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Dloc_ComponentShape self
  @returns   the result
**/
extern Impl_TopObject Dloc_ComponentShape_GetTopObject(Dloc_ComponentShape self);

/**
  Constructor for ccp.general.DataLocation.ComponentShape
  @param  Dloc_ShapeMatrix parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Dloc_ComponentShape Dloc_ComponentShape_Init(Dloc_ShapeMatrix parent, ApiMap attrlinks);

/**
  Constructor for ccp.general.DataLocation.ComponentShape
  @param  Dloc_ShapeMatrix parent
  @returns  the new object
**/
extern Dloc_ComponentShape Dloc_ComponentShape_Init_reqd(Dloc_ShapeMatrix parent);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_ComponentShape self
  @param  Impl_ApplicationData value
**/
extern void *Dloc_ComponentShape_RemoveApplicationData(Dloc_ComponentShape self, Impl_ApplicationData value);

/**
  SetAttr for ccp.general.DataLocation.ComponentShape
  @param  Dloc_ComponentShape self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Dloc_ComponentShape_Set(Dloc_ComponentShape self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Dloc_ComponentShape self
  @param  Acco_AccessObject value
**/
extern void *Dloc_ComponentShape_SetAccess(Dloc_ComponentShape self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_ComponentShape self
  @param  ApiList values
**/
extern void *Dloc_ComponentShape_SetApplicationData(Dloc_ComponentShape self, ApiList values);

/**
  Set for ccp.general.DataLocation.ComponentShape.dims

Dimension indices 
(starting at zero) for dimensions described by shape. If there is more 
than one dim, the first in the array is the fastest varying index in the 
shape.
  @param  Dloc_ComponentShape self
  @param  ApiList values
**/
extern void *Dloc_ComponentShape_SetDims(Dloc_ComponentShape self, ApiList values);

/**
  Set for ccp.general.DataLocation.ComponentShape.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Dloc_ComponentShape self
  @param  ApiInteger value
**/
extern void *Dloc_ComponentShape_SetSerial(Dloc_ComponentShape self, ApiInteger value);

#endif /* __incl__ccp_api_general_DataLocation_ComponentShape_h__ */
