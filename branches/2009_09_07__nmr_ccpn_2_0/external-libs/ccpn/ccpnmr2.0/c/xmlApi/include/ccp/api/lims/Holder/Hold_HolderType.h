
#ifndef __incl__ccp_api_lims_Holder_HolderType_h__
#define __incl__ccp_api_lims_Holder_HolderType_h__

#include "ccp.h"

/*
  The information to describe a type of holder. A tube uses maxVolume, plate with one sample/well uses HolderTypePosition with no position set rather than A1.
*/

/* package ccp.api.lims.Holder */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderType self
  @param  Impl_ApplicationData value
**/
extern void *Hold_HolderType_AddApplicationData(Hold_HolderType self, Impl_ApplicationData value);

/**
  Add for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_HolderType self
  @param  Clas_HolderCategory value
**/
extern void *Hold_HolderType_AddHolderCategory(Hold_HolderType self, Clas_HolderCategory value);

/**
  CheckAllValid for ccp.lims.Holder.HolderType
  @param  Hold_HolderType self
  @param  ApiBoolean complete
**/
extern void *Hold_HolderType_CheckAllValid(Hold_HolderType self, ApiBoolean complete);

/**
  CheckValid for ccp.lims.Holder.HolderType
  @param  Hold_HolderType self
  @param  ApiBoolean complete
**/
extern void *Hold_HolderType_CheckValid(Hold_HolderType self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderType self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Hold_HolderType_FindAllApplicationData(Hold_HolderType self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderType self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Hold_HolderType_FindAllApplicationData_keyval0(Hold_HolderType self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderType self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Hold_HolderType_FindAllApplicationData_keyval1(Hold_HolderType self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Hold_HolderType_FindAllApplicationData_keyval2(Hold_HolderType self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Hold_HolderType_FindAllApplicationData_keyval3(Hold_HolderType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderType self
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
extern ApiList Hold_HolderType_FindAllApplicationData_keyval4(Hold_HolderType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_HolderType self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Hold_HolderType_FindAllHolderCategories(Hold_HolderType self, ApiMap conditions);

/**
  FindAll for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_HolderType self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Hold_HolderType_FindAllHolderCategories_keyval0(Hold_HolderType self);

/**
  FindAll for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_HolderType self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Hold_HolderType_FindAllHolderCategories_keyval1(Hold_HolderType self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_HolderType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Hold_HolderType_FindAllHolderCategories_keyval2(Hold_HolderType self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_HolderType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Hold_HolderType_FindAllHolderCategories_keyval3(Hold_HolderType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_HolderType self
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
extern ApiSet Hold_HolderType_FindAllHolderCategories_keyval4(Hold_HolderType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.Holder.HolderType.holderTypePositions

child link 
to class HolderTypePosition
  @param  Hold_HolderType self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Hold_HolderType_FindAllHolderTypePositions(Hold_HolderType self, ApiMap conditions);

/**
  FindAll for ccp.lims.Holder.HolderType.holderTypePositions

child link 
to class HolderTypePosition
  @param  Hold_HolderType self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Hold_HolderType_FindAllHolderTypePositions_keyval0(Hold_HolderType self);

/**
  FindAll for ccp.lims.Holder.HolderType.holderTypePositions

child link 
to class HolderTypePosition
  @param  Hold_HolderType self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Hold_HolderType_FindAllHolderTypePositions_keyval1(Hold_HolderType self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.Holder.HolderType.holderTypePositions

child link 
to class HolderTypePosition
  @param  Hold_HolderType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Hold_HolderType_FindAllHolderTypePositions_keyval2(Hold_HolderType self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.Holder.HolderType.holderTypePositions

child link 
to class HolderTypePosition
  @param  Hold_HolderType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Hold_HolderType_FindAllHolderTypePositions_keyval3(Hold_HolderType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.Holder.HolderType.holderTypePositions

child link 
to class HolderTypePosition
  @param  Hold_HolderType self
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
extern ApiSet Hold_HolderType_FindAllHolderTypePositions_keyval4(Hold_HolderType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderType self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Hold_HolderType_FindFirstApplicationData(Hold_HolderType self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderType self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Hold_HolderType_FindFirstApplicationData_keyval0(Hold_HolderType self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderType self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Hold_HolderType_FindFirstApplicationData_keyval1(Hold_HolderType self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Hold_HolderType_FindFirstApplicationData_keyval2(Hold_HolderType self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Hold_HolderType_FindFirstApplicationData_keyval3(Hold_HolderType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderType self
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
extern Impl_ApplicationData Hold_HolderType_FindFirstApplicationData_keyval4(Hold_HolderType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_HolderType self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Clas_HolderCategory Hold_HolderType_FindFirstHolderCategory(Hold_HolderType self, ApiMap conditions);

/**
  FindFirst for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_HolderType self
  @returns  the first value that satisfies the conditions 
**/
extern Clas_HolderCategory Hold_HolderType_FindFirstHolderCategory_keyval0(Hold_HolderType self);

/**
  FindFirst for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_HolderType self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Clas_HolderCategory Hold_HolderType_FindFirstHolderCategory_keyval1(Hold_HolderType self, char * key, ApiObject value);

/**
  FindFirst for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_HolderType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Clas_HolderCategory Hold_HolderType_FindFirstHolderCategory_keyval2(Hold_HolderType self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_HolderType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Clas_HolderCategory Hold_HolderType_FindFirstHolderCategory_keyval3(Hold_HolderType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_HolderType self
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
extern Clas_HolderCategory Hold_HolderType_FindFirstHolderCategory_keyval4(Hold_HolderType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.lims.Holder.HolderType.holderTypePositions

child link 
to class HolderTypePosition
  @param  Hold_HolderType self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Hold_HolderTypePosition Hold_HolderType_FindFirstHolderTypePosition(Hold_HolderType self, ApiMap conditions);

/**
  FindFirst for ccp.lims.Holder.HolderType.holderTypePositions

child link 
to class HolderTypePosition
  @param  Hold_HolderType self
  @returns  the first value that satisfies the conditions 
**/
extern Hold_HolderTypePosition Hold_HolderType_FindFirstHolderTypePosition_keyval0(Hold_HolderType self);

/**
  FindFirst for ccp.lims.Holder.HolderType.holderTypePositions

child link 
to class HolderTypePosition
  @param  Hold_HolderType self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Hold_HolderTypePosition Hold_HolderType_FindFirstHolderTypePosition_keyval1(Hold_HolderType self, char * key, ApiObject value);

/**
  FindFirst for ccp.lims.Holder.HolderType.holderTypePositions

child link 
to class HolderTypePosition
  @param  Hold_HolderType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Hold_HolderTypePosition Hold_HolderType_FindFirstHolderTypePosition_keyval2(Hold_HolderType self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.lims.Holder.HolderType.holderTypePositions

child link 
to class HolderTypePosition
  @param  Hold_HolderType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Hold_HolderTypePosition Hold_HolderType_FindFirstHolderTypePosition_keyval3(Hold_HolderType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.lims.Holder.HolderType.holderTypePositions

child link 
to class HolderTypePosition
  @param  Hold_HolderType self
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
extern Hold_HolderTypePosition Hold_HolderType_FindFirstHolderTypePosition_keyval4(Hold_HolderType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.lims.Holder.HolderType
  @param  Hold_HolderType self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Hold_HolderType_Get(Hold_HolderType self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Hold_HolderType self
  @returns   the result
**/
extern Acco_AccessObject Hold_HolderType_GetAccess(Hold_HolderType self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderType self
  @returns   the result
**/
extern ApiList Hold_HolderType_GetApplicationData(Hold_HolderType self);

/**
  GetByKey for ccp.lims.Holder.HolderType
  @param  Hold_HolderType self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Hold_HolderType Hold_HolderType_GetByKey(Hold_HolderType self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Hold_HolderType self
  @returns   the result
**/
extern ApiString Hold_HolderType_GetClassName(Hold_HolderType self);

/**
  Get for ccp.lims.Holder.AbstractHolderType.details

Detail field for 
comments.
  @param  Hold_HolderType self
  @returns   the result
**/
extern ApiString Hold_HolderType_GetDetails(Hold_HolderType self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Hold_HolderType self
  @returns   the result
**/
extern ApiList Hold_HolderType_GetFieldNames(Hold_HolderType self);

/**
  Get for ccp.lims.Holder.HolderType.holdHolderFlag

Is this holder can 
hold another holder?
  @param  Hold_HolderType self
  @returns   the result
**/
extern ApiBoolean Hold_HolderType_GetHoldHolderFlag(Hold_HolderType self);

/**
  Get for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_HolderType self
  @returns   the result
**/
extern ApiSet Hold_HolderType_GetHolderCategories(Hold_HolderType self);

/**
  Get for ccp.lims.Holder.AbstractHolderType.holderStore

parent link
  @param  Hold_HolderType self
  @returns   the result
**/
extern Hold_HolderStore Hold_HolderType_GetHolderStore(Hold_HolderType self);

/**
  Get for ccp.lims.Holder.HolderType.holderTypePositions

child link to 
class HolderTypePosition
  @param  Hold_HolderType self
  @returns   the result
**/
extern ApiSet Hold_HolderType_GetHolderTypePositions(Hold_HolderType self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Hold_HolderType self
  @returns   the result
**/
extern ApiBoolean Hold_HolderType_GetInConstructor(Hold_HolderType self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Hold_HolderType self
  @returns   the result
**/
extern ApiBoolean Hold_HolderType_GetIsDeleted(Hold_HolderType self);

/**
  Get for ccp.lims.Holder.HolderType.maxColumn

The maximum number of 
columns.
  @param  Hold_HolderType self
  @returns   the result
**/
extern ApiInteger Hold_HolderType_GetMaxColumn(Hold_HolderType self);

/**
  Get for ccp.lims.Holder.HolderType.maxRow

The maximum number of rows.
  @param  Hold_HolderType self
  @returns   the result
**/
extern ApiInteger Hold_HolderType_GetMaxRow(Hold_HolderType self);

/**
  Get for ccp.lims.Holder.HolderType.maxSubPosition

The maximum number of 
sub-positions.
  @param  Hold_HolderType self
  @returns   the result
**/
extern ApiInteger Hold_HolderType_GetMaxSubPosition(Hold_HolderType self);

/**
  Get for ccp.lims.Holder.HolderType.maxVolume

The maximum volume.
  @param  Hold_HolderType self
  @returns   the result
**/
extern ApiFloat Hold_HolderType_GetMaxVolume(Hold_HolderType self);

/**
  Get for ccp.lims.Holder.HolderType.maxVolumeDisplayUnit

The display 
unit of the max volume.
  @param  Hold_HolderType self
  @returns   the result
**/
extern ApiString Hold_HolderType_GetMaxVolumeDisplayUnit(Hold_HolderType self);

/**
  Get for ccp.lims.Holder.AbstractHolderType.name

The reference holder 
name. e.g. '96 Deepweel plate', 'Plate', 'Screen', 'Gel', ...
  @param  Hold_HolderType self
  @returns   the result
**/
extern ApiString Hold_HolderType_GetName(Hold_HolderType self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Hold_HolderType self
  @returns   the result
**/
extern ApiString Hold_HolderType_GetPackageName(Hold_HolderType self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Hold_HolderType self
  @returns   the result
**/
extern ApiString Hold_HolderType_GetPackageShortName(Hold_HolderType self);

/**
  Get for ccp.lims.Holder.AbstractHolderType.parent

link to parent object 
- synonym for holderStore
  @param  Hold_HolderType self
  @returns   the result
**/
extern Hold_HolderStore Hold_HolderType_GetParent(Hold_HolderType self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Hold_HolderType self
  @returns   the result
**/
extern ApiString Hold_HolderType_GetQualifiedName(Hold_HolderType self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Hold_HolderType self
  @returns   the result
**/
extern Impl_MemopsRoot Hold_HolderType_GetRoot(Hold_HolderType self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Hold_HolderType self
  @returns   the result
**/
extern Impl_TopObject Hold_HolderType_GetTopObject(Hold_HolderType self);

/**
  Constructor for ccp.lims.Holder.HolderType
  @param  Hold_HolderStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Hold_HolderType Hold_HolderType_Init(Hold_HolderStore parent, ApiMap attrlinks);

/**
  Constructor for ccp.lims.Holder.HolderType
  @param  Hold_HolderStore parent
  @param  ApiSet holderCategories
  @param  char * name
  @returns  the new object
**/
extern Hold_HolderType Hold_HolderType_Init_reqd(Hold_HolderStore parent, ApiSet holderCategories, char * name);

/**
  Factory function to create ccp.lims.Holder.HolderTypePosition
  @param  Hold_HolderType self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Hold_HolderTypePosition Hold_HolderType_NewHolderTypePosition(Hold_HolderType self, ApiMap attrlinks);

/**
  Factory function to create ccp.lims.Holder.HolderTypePosition
  @param  Hold_HolderType self
  @returns  the new object
**/
extern Hold_HolderTypePosition Hold_HolderType_NewHolderTypePosition_reqd(Hold_HolderType self);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderType self
  @param  Impl_ApplicationData value
**/
extern void *Hold_HolderType_RemoveApplicationData(Hold_HolderType self, Impl_ApplicationData value);

/**
  Remove for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_HolderType self
  @param  Clas_HolderCategory value
**/
extern void *Hold_HolderType_RemoveHolderCategory(Hold_HolderType self, Clas_HolderCategory value);

/**
  SetAttr for ccp.lims.Holder.HolderType
  @param  Hold_HolderType self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Hold_HolderType_Set(Hold_HolderType self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Hold_HolderType self
  @param  Acco_AccessObject value
**/
extern void *Hold_HolderType_SetAccess(Hold_HolderType self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderType self
  @param  ApiList values
**/
extern void *Hold_HolderType_SetApplicationData(Hold_HolderType self, ApiList values);

/**
  Set for ccp.lims.Holder.AbstractHolderType.details

Detail field for 
comments.
  @param  Hold_HolderType self
  @param  ApiString value
**/
extern void *Hold_HolderType_SetDetails(Hold_HolderType self, ApiString value);

/**
  Set for ccp.lims.Holder.HolderType.holdHolderFlag

Is this holder can 
hold another holder?
  @param  Hold_HolderType self
  @param  ApiBoolean value
**/
extern void *Hold_HolderType_SetHoldHolderFlag(Hold_HolderType self, ApiBoolean value);

/**
  Set for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_HolderType self
  @param  ApiSet values
**/
extern void *Hold_HolderType_SetHolderCategories(Hold_HolderType self, ApiSet values);

/**
  Set for ccp.lims.Holder.HolderType.maxColumn

The maximum number of 
columns.
  @param  Hold_HolderType self
  @param  ApiInteger value
**/
extern void *Hold_HolderType_SetMaxColumn(Hold_HolderType self, ApiInteger value);

/**
  Set for ccp.lims.Holder.HolderType.maxRow

The maximum number of rows.
  @param  Hold_HolderType self
  @param  ApiInteger value
**/
extern void *Hold_HolderType_SetMaxRow(Hold_HolderType self, ApiInteger value);

/**
  Set for ccp.lims.Holder.HolderType.maxSubPosition

The maximum number of 
sub-positions.
  @param  Hold_HolderType self
  @param  ApiInteger value
**/
extern void *Hold_HolderType_SetMaxSubPosition(Hold_HolderType self, ApiInteger value);

/**
  Set for ccp.lims.Holder.HolderType.maxVolume

The maximum volume.
  @param  Hold_HolderType self
  @param  ApiFloat value
**/
extern void *Hold_HolderType_SetMaxVolume(Hold_HolderType self, ApiFloat value);

/**
  Set for ccp.lims.Holder.HolderType.maxVolumeDisplayUnit

The display 
unit of the max volume.
  @param  Hold_HolderType self
  @param  ApiString value
**/
extern void *Hold_HolderType_SetMaxVolumeDisplayUnit(Hold_HolderType self, ApiString value);

/**
  Set for ccp.lims.Holder.AbstractHolderType.name

The reference holder 
name. e.g. '96 Deepweel plate', 'Plate', 'Screen', 'Gel', ...
  @param  Hold_HolderType self
  @param  ApiString value
**/
extern void *Hold_HolderType_SetName(Hold_HolderType self, ApiString value);

/**
  Sorted for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_HolderType self
  @returns   the result
**/
extern ApiList Hold_HolderType_SortedHolderCategories(Hold_HolderType self);

/**
  Sorted for ccp.lims.Holder.HolderType.holderTypePositions

child link to 
class HolderTypePosition
  @param  Hold_HolderType self
  @returns   the result
**/
extern ApiList Hold_HolderType_SortedHolderTypePositions(Hold_HolderType self);

#endif /* __incl__ccp_api_lims_Holder_HolderType_h__ */
