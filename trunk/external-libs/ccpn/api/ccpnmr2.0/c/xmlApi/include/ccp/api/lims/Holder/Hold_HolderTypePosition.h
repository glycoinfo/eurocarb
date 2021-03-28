
#ifndef __incl__ccp_api_lims_Holder_HolderTypePosition_h__
#define __incl__ccp_api_lims_Holder_HolderTypePosition_h__

#include "ccp.h"

/*
  Description of the position in a certain holder type.
*/

/* package ccp.api.lims.Holder */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderTypePosition self
  @param  Impl_ApplicationData value
**/
extern void *Hold_HolderTypePosition_AddApplicationData(Hold_HolderTypePosition self, Impl_ApplicationData value);

/**
  CheckAllValid for ccp.lims.Holder.HolderTypePosition
  @param  Hold_HolderTypePosition self
  @param  ApiBoolean complete
**/
extern void *Hold_HolderTypePosition_CheckAllValid(Hold_HolderTypePosition self, ApiBoolean complete);

/**
  CheckValid for ccp.lims.Holder.HolderTypePosition
  @param  Hold_HolderTypePosition self
  @param  ApiBoolean complete
**/
extern void *Hold_HolderTypePosition_CheckValid(Hold_HolderTypePosition self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderTypePosition self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Hold_HolderTypePosition_FindAllApplicationData(Hold_HolderTypePosition self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderTypePosition self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Hold_HolderTypePosition_FindAllApplicationData_keyval0(Hold_HolderTypePosition self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderTypePosition self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Hold_HolderTypePosition_FindAllApplicationData_keyval1(Hold_HolderTypePosition self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderTypePosition self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Hold_HolderTypePosition_FindAllApplicationData_keyval2(Hold_HolderTypePosition self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderTypePosition self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Hold_HolderTypePosition_FindAllApplicationData_keyval3(Hold_HolderTypePosition self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderTypePosition self
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
extern ApiList Hold_HolderTypePosition_FindAllApplicationData_keyval4(Hold_HolderTypePosition self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderTypePosition self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Hold_HolderTypePosition_FindFirstApplicationData(Hold_HolderTypePosition self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderTypePosition self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Hold_HolderTypePosition_FindFirstApplicationData_keyval0(Hold_HolderTypePosition self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderTypePosition self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Hold_HolderTypePosition_FindFirstApplicationData_keyval1(Hold_HolderTypePosition self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderTypePosition self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Hold_HolderTypePosition_FindFirstApplicationData_keyval2(Hold_HolderTypePosition self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderTypePosition self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Hold_HolderTypePosition_FindFirstApplicationData_keyval3(Hold_HolderTypePosition self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderTypePosition self
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
extern Impl_ApplicationData Hold_HolderTypePosition_FindFirstApplicationData_keyval4(Hold_HolderTypePosition self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.lims.Holder.HolderTypePosition
  @param  Hold_HolderTypePosition self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Hold_HolderTypePosition_Get(Hold_HolderTypePosition self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Hold_HolderTypePosition self
  @returns   the result
**/
extern Acco_AccessObject Hold_HolderTypePosition_GetAccess(Hold_HolderTypePosition self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderTypePosition self
  @returns   the result
**/
extern ApiList Hold_HolderTypePosition_GetApplicationData(Hold_HolderTypePosition self);

/**
  GetByKey for ccp.lims.Holder.HolderTypePosition
  @param  Hold_HolderTypePosition self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Hold_HolderTypePosition Hold_HolderTypePosition_GetByKey(Hold_HolderTypePosition self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Hold_HolderTypePosition self
  @returns   the result
**/
extern ApiString Hold_HolderTypePosition_GetClassName(Hold_HolderTypePosition self);

/**
  Get for ccp.lims.Holder.HolderTypePosition.colPosition

The column 
position in the holder type.
  @param  Hold_HolderTypePosition self
  @returns   the result
**/
extern ApiInteger Hold_HolderTypePosition_GetColPosition(Hold_HolderTypePosition self);

/**
  Get for ccp.lims.Holder.HolderTypePosition.details

Free text, for 
notes, explanatory comments, etc.
  @param  Hold_HolderTypePosition self
  @returns   the result
**/
extern ApiString Hold_HolderTypePosition_GetDetails(Hold_HolderTypePosition self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Hold_HolderTypePosition self
  @returns   the result
**/
extern ApiList Hold_HolderTypePosition_GetFieldNames(Hold_HolderTypePosition self);

/**
  GetFullKey for ccp.lims.Holder.HolderTypePosition
  @param  Hold_HolderTypePosition self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Hold_HolderTypePosition_GetFullKey(Hold_HolderTypePosition self, ApiBoolean useGuid);

/**
  Get for ccp.lims.Holder.HolderTypePosition.holderType

parent link
  @param  Hold_HolderTypePosition self
  @returns   the result
**/
extern Hold_HolderType Hold_HolderTypePosition_GetHolderType(Hold_HolderTypePosition self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Hold_HolderTypePosition self
  @returns   the result
**/
extern ApiBoolean Hold_HolderTypePosition_GetInConstructor(Hold_HolderTypePosition self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Hold_HolderTypePosition self
  @returns   the result
**/
extern ApiBoolean Hold_HolderTypePosition_GetIsDeleted(Hold_HolderTypePosition self);

/**
  GetLocalKey for ccp.lims.Holder.HolderTypePosition
  @param  Hold_HolderTypePosition self
  @returns  Local object key
**/
extern ApiObject Hold_HolderTypePosition_GetLocalKey(Hold_HolderTypePosition self);

/**
  Get for ccp.lims.Holder.HolderTypePosition.maxVolume

The maximum 
volume.
  @param  Hold_HolderTypePosition self
  @returns   the result
**/
extern ApiFloat Hold_HolderTypePosition_GetMaxVolume(Hold_HolderTypePosition self);

/**
  Get for ccp.lims.Holder.HolderTypePosition.maxVolumeDiplayUnit

The 
display unit of the max volume.
  @param  Hold_HolderTypePosition self
  @returns   the result
**/
extern ApiString Hold_HolderTypePosition_GetMaxVolumeDiplayUnit(Hold_HolderTypePosition self);

/**
  Get for ccp.lims.Holder.HolderTypePosition.name

The name of the 
position in holder could be reservoir, well,...
  @param  Hold_HolderTypePosition self
  @returns   the result
**/
extern ApiString Hold_HolderTypePosition_GetName(Hold_HolderTypePosition self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Hold_HolderTypePosition self
  @returns   the result
**/
extern ApiString Hold_HolderTypePosition_GetPackageName(Hold_HolderTypePosition self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Hold_HolderTypePosition self
  @returns   the result
**/
extern ApiString Hold_HolderTypePosition_GetPackageShortName(Hold_HolderTypePosition self);

/**
  Get for ccp.lims.Holder.HolderTypePosition.parent

link to parent object 
- synonym for holderType
  @param  Hold_HolderTypePosition self
  @returns   the result
**/
extern Hold_HolderType Hold_HolderTypePosition_GetParent(Hold_HolderTypePosition self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Hold_HolderTypePosition self
  @returns   the result
**/
extern ApiString Hold_HolderTypePosition_GetQualifiedName(Hold_HolderTypePosition self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Hold_HolderTypePosition self
  @returns   the result
**/
extern Impl_MemopsRoot Hold_HolderTypePosition_GetRoot(Hold_HolderTypePosition self);

/**
  Get for ccp.lims.Holder.HolderTypePosition.rowPosition

The row position 
in the holder type.
  @param  Hold_HolderTypePosition self
  @returns   the result
**/
extern ApiInteger Hold_HolderTypePosition_GetRowPosition(Hold_HolderTypePosition self);

/**
  Get for ccp.lims.Holder.HolderTypePosition.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Hold_HolderTypePosition self
  @returns   the result
**/
extern ApiInteger Hold_HolderTypePosition_GetSerial(Hold_HolderTypePosition self);

/**
  Get for ccp.lims.Holder.HolderTypePosition.subPosition

The sub-position 
in the holder type.
  @param  Hold_HolderTypePosition self
  @returns   the result
**/
extern ApiInteger Hold_HolderTypePosition_GetSubPosition(Hold_HolderTypePosition self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Hold_HolderTypePosition self
  @returns   the result
**/
extern Impl_TopObject Hold_HolderTypePosition_GetTopObject(Hold_HolderTypePosition self);

/**
  Constructor for ccp.lims.Holder.HolderTypePosition
  @param  Hold_HolderType parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Hold_HolderTypePosition Hold_HolderTypePosition_Init(Hold_HolderType parent, ApiMap attrlinks);

/**
  Constructor for ccp.lims.Holder.HolderTypePosition
  @param  Hold_HolderType parent
  @returns  the new object
**/
extern Hold_HolderTypePosition Hold_HolderTypePosition_Init_reqd(Hold_HolderType parent);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderTypePosition self
  @param  Impl_ApplicationData value
**/
extern void *Hold_HolderTypePosition_RemoveApplicationData(Hold_HolderTypePosition self, Impl_ApplicationData value);

/**
  SetAttr for ccp.lims.Holder.HolderTypePosition
  @param  Hold_HolderTypePosition self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Hold_HolderTypePosition_Set(Hold_HolderTypePosition self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Hold_HolderTypePosition self
  @param  Acco_AccessObject value
**/
extern void *Hold_HolderTypePosition_SetAccess(Hold_HolderTypePosition self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderTypePosition self
  @param  ApiList values
**/
extern void *Hold_HolderTypePosition_SetApplicationData(Hold_HolderTypePosition self, ApiList values);

/**
  Set for ccp.lims.Holder.HolderTypePosition.colPosition

The column 
position in the holder type.
  @param  Hold_HolderTypePosition self
  @param  ApiInteger value
**/
extern void *Hold_HolderTypePosition_SetColPosition(Hold_HolderTypePosition self, ApiInteger value);

/**
  Set for ccp.lims.Holder.HolderTypePosition.details

Free text, for 
notes, explanatory comments, etc.
  @param  Hold_HolderTypePosition self
  @param  ApiString value
**/
extern void *Hold_HolderTypePosition_SetDetails(Hold_HolderTypePosition self, ApiString value);

/**
  Set for ccp.lims.Holder.HolderTypePosition.maxVolume

The maximum 
volume.
  @param  Hold_HolderTypePosition self
  @param  ApiFloat value
**/
extern void *Hold_HolderTypePosition_SetMaxVolume(Hold_HolderTypePosition self, ApiFloat value);

/**
  Set for ccp.lims.Holder.HolderTypePosition.maxVolumeDiplayUnit

The 
display unit of the max volume.
  @param  Hold_HolderTypePosition self
  @param  ApiString value
**/
extern void *Hold_HolderTypePosition_SetMaxVolumeDiplayUnit(Hold_HolderTypePosition self, ApiString value);

/**
  Set for ccp.lims.Holder.HolderTypePosition.name

The name of the 
position in holder could be reservoir, well,...
  @param  Hold_HolderTypePosition self
  @param  ApiString value
**/
extern void *Hold_HolderTypePosition_SetName(Hold_HolderTypePosition self, ApiString value);

/**
  Set for ccp.lims.Holder.HolderTypePosition.rowPosition

The row position 
in the holder type.
  @param  Hold_HolderTypePosition self
  @param  ApiInteger value
**/
extern void *Hold_HolderTypePosition_SetRowPosition(Hold_HolderTypePosition self, ApiInteger value);

/**
  Set for ccp.lims.Holder.HolderTypePosition.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Hold_HolderTypePosition self
  @param  ApiInteger value
**/
extern void *Hold_HolderTypePosition_SetSerial(Hold_HolderTypePosition self, ApiInteger value);

/**
  Set for ccp.lims.Holder.HolderTypePosition.subPosition

The sub-position 
in the holder type.
  @param  Hold_HolderTypePosition self
  @param  ApiInteger value
**/
extern void *Hold_HolderTypePosition_SetSubPosition(Hold_HolderTypePosition self, ApiInteger value);

#endif /* __incl__ccp_api_lims_Holder_HolderTypePosition_h__ */
