
#ifndef __incl__ccp_api_nmr_Nmr_DerivedData_h__
#define __incl__ccp_api_nmr_Nmr_DerivedData_h__

#include "ccp.h"

/*
  A measurement derived from peak data and/or other (non-derived) measurements. It is assigned to one or more Resonances, depending on its type.
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DerivedData self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_DerivedData_AddApplicationData(Nmr_DerivedData self, Impl_ApplicationData value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DerivedData self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_DerivedData_FindAllApplicationData(Nmr_DerivedData self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DerivedData self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_DerivedData_FindAllApplicationData_keyval0(Nmr_DerivedData self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DerivedData self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_DerivedData_FindAllApplicationData_keyval1(Nmr_DerivedData self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DerivedData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_DerivedData_FindAllApplicationData_keyval2(Nmr_DerivedData self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DerivedData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_DerivedData_FindAllApplicationData_keyval3(Nmr_DerivedData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DerivedData self
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
extern ApiList Nmr_DerivedData_FindAllApplicationData_keyval4(Nmr_DerivedData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DerivedData self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_DerivedData_FindFirstApplicationData(Nmr_DerivedData self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DerivedData self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_DerivedData_FindFirstApplicationData_keyval0(Nmr_DerivedData self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DerivedData self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_DerivedData_FindFirstApplicationData_keyval1(Nmr_DerivedData self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DerivedData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_DerivedData_FindFirstApplicationData_keyval2(Nmr_DerivedData self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DerivedData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_DerivedData_FindFirstApplicationData_keyval3(Nmr_DerivedData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DerivedData self
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
extern Impl_ApplicationData Nmr_DerivedData_FindFirstApplicationData_keyval4(Nmr_DerivedData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_DerivedData self
  @returns   the result
**/
extern Acco_AccessObject Nmr_DerivedData_GetAccess(Nmr_DerivedData self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DerivedData self
  @returns   the result
**/
extern ApiList Nmr_DerivedData_GetApplicationData(Nmr_DerivedData self);

/**
  GetByKey for ccp.nmr.Nmr.DerivedData
  @param  Nmr_DerivedData self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Nmr_DerivedData Nmr_DerivedData_GetByKey(Nmr_DerivedData self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Nmr_DerivedData self
  @returns   the result
**/
extern ApiString Nmr_DerivedData_GetClassName(Nmr_DerivedData self);

/**
  Get for ccp.nmr.Nmr.DerivedData.derivation

parent link
  @param  Nmr_DerivedData self
  @returns   the result
**/
extern Nmr_AbstractDataDerivation Nmr_DerivedData_GetDerivation(Nmr_DerivedData self);

/**
  Get for ccp.nmr.Nmr.DerivedData.error

Uncertainty (standard deviation) 
of value
  @param  Nmr_DerivedData self
  @returns   the result
**/
extern ApiFloat Nmr_DerivedData_GetError(Nmr_DerivedData self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Nmr_DerivedData self
  @returns   the result
**/
extern ApiList Nmr_DerivedData_GetFieldNames(Nmr_DerivedData self);

/**
  Get for ccp.nmr.Nmr.DerivedData.figOfMerit

Figure of merit, describing 
the reliability of the value. Between 0.0 (useless) and 1.0 (fully 
reliable, also the default).
  @param  Nmr_DerivedData self
  @returns   the result
**/
extern ApiFloat Nmr_DerivedData_GetFigOfMerit(Nmr_DerivedData self);

/**
  GetFullKey for ccp.nmr.Nmr.DerivedData
  @param  Nmr_DerivedData self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Nmr_DerivedData_GetFullKey(Nmr_DerivedData self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Nmr_DerivedData self
  @returns   the result
**/
extern ApiBoolean Nmr_DerivedData_GetInConstructor(Nmr_DerivedData self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Nmr_DerivedData self
  @returns   the result
**/
extern ApiBoolean Nmr_DerivedData_GetIsDeleted(Nmr_DerivedData self);

/**
  GetLocalKey for ccp.nmr.Nmr.DerivedData
  @param  Nmr_DerivedData self
  @returns  Local object key
**/
extern ApiObject Nmr_DerivedData_GetLocalKey(Nmr_DerivedData self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Nmr_DerivedData self
  @returns   the result
**/
extern ApiString Nmr_DerivedData_GetPackageName(Nmr_DerivedData self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Nmr_DerivedData self
  @returns   the result
**/
extern ApiString Nmr_DerivedData_GetPackageShortName(Nmr_DerivedData self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Nmr_DerivedData self
  @returns   the result
**/
extern ApiString Nmr_DerivedData_GetQualifiedName(Nmr_DerivedData self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Nmr_DerivedData self
  @returns   the result
**/
extern Impl_MemopsRoot Nmr_DerivedData_GetRoot(Nmr_DerivedData self);

/**
  Get for ccp.nmr.Nmr.DerivedData.serial

Serial number of object. Serves 
as object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Nmr_DerivedData self
  @returns   the result
**/
extern ApiInteger Nmr_DerivedData_GetSerial(Nmr_DerivedData self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Nmr_DerivedData self
  @returns   the result
**/
extern Impl_TopObject Nmr_DerivedData_GetTopObject(Nmr_DerivedData self);

/**
  Get for ccp.nmr.Nmr.DerivedData.value

Value of derived measurement.
  @param  Nmr_DerivedData self
  @returns   the result
**/
extern ApiFloat Nmr_DerivedData_GetValue(Nmr_DerivedData self);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DerivedData self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_DerivedData_RemoveApplicationData(Nmr_DerivedData self, Impl_ApplicationData value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_DerivedData self
  @param  Acco_AccessObject value
**/
extern void *Nmr_DerivedData_SetAccess(Nmr_DerivedData self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DerivedData self
  @param  ApiList values
**/
extern void *Nmr_DerivedData_SetApplicationData(Nmr_DerivedData self, ApiList values);

/**
  Set for ccp.nmr.Nmr.DerivedData.error

Uncertainty (standard deviation) 
of value
  @param  Nmr_DerivedData self
  @param  ApiFloat value
**/
extern void *Nmr_DerivedData_SetError(Nmr_DerivedData self, ApiFloat value);

/**
  Set for ccp.nmr.Nmr.DerivedData.figOfMerit

Figure of merit, describing 
the reliability of the value. Between 0.0 (useless) and 1.0 (fully 
reliable, also the default).
  @param  Nmr_DerivedData self
  @param  ApiFloat value
**/
extern void *Nmr_DerivedData_SetFigOfMerit(Nmr_DerivedData self, ApiFloat value);

/**
  Set for ccp.nmr.Nmr.DerivedData.serial

Serial number of object. Serves 
as object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Nmr_DerivedData self
  @param  ApiInteger value
**/
extern void *Nmr_DerivedData_SetSerial(Nmr_DerivedData self, ApiInteger value);

/**
  Set for ccp.nmr.Nmr.DerivedData.value

Value of derived measurement.
  @param  Nmr_DerivedData self
  @param  ApiFloat value
**/
extern void *Nmr_DerivedData_SetValue(Nmr_DerivedData self, ApiFloat value);

#endif /* __incl__ccp_api_nmr_Nmr_DerivedData_h__ */
