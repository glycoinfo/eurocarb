
#ifndef __incl__ccp_api_lims_Holder_PinType_h__
#define __incl__ccp_api_lims_Holder_PinType_h__

#include "ccp.h"

/*
  The type of pin for a crystal container
*/

/* package ccp.api.lims.Holder */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_PinType self
  @param  Impl_ApplicationData value
**/
extern void *Hold_PinType_AddApplicationData(Hold_PinType self, Impl_ApplicationData value);

/**
  Add for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_PinType self
  @param  Clas_HolderCategory value
**/
extern void *Hold_PinType_AddHolderCategory(Hold_PinType self, Clas_HolderCategory value);

/**
  CheckAllValid for ccp.lims.Holder.PinType
  @param  Hold_PinType self
  @param  ApiBoolean complete
**/
extern void *Hold_PinType_CheckAllValid(Hold_PinType self, ApiBoolean complete);

/**
  CheckValid for ccp.lims.Holder.PinType
  @param  Hold_PinType self
  @param  ApiBoolean complete
**/
extern void *Hold_PinType_CheckValid(Hold_PinType self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_PinType self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Hold_PinType_FindAllApplicationData(Hold_PinType self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_PinType self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Hold_PinType_FindAllApplicationData_keyval0(Hold_PinType self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_PinType self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Hold_PinType_FindAllApplicationData_keyval1(Hold_PinType self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_PinType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Hold_PinType_FindAllApplicationData_keyval2(Hold_PinType self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_PinType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Hold_PinType_FindAllApplicationData_keyval3(Hold_PinType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_PinType self
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
extern ApiList Hold_PinType_FindAllApplicationData_keyval4(Hold_PinType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_PinType self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Hold_PinType_FindAllHolderCategories(Hold_PinType self, ApiMap conditions);

/**
  FindAll for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_PinType self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Hold_PinType_FindAllHolderCategories_keyval0(Hold_PinType self);

/**
  FindAll for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_PinType self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Hold_PinType_FindAllHolderCategories_keyval1(Hold_PinType self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_PinType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Hold_PinType_FindAllHolderCategories_keyval2(Hold_PinType self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_PinType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Hold_PinType_FindAllHolderCategories_keyval3(Hold_PinType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_PinType self
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
extern ApiSet Hold_PinType_FindAllHolderCategories_keyval4(Hold_PinType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_PinType self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Hold_PinType_FindFirstApplicationData(Hold_PinType self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_PinType self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Hold_PinType_FindFirstApplicationData_keyval0(Hold_PinType self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_PinType self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Hold_PinType_FindFirstApplicationData_keyval1(Hold_PinType self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_PinType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Hold_PinType_FindFirstApplicationData_keyval2(Hold_PinType self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_PinType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Hold_PinType_FindFirstApplicationData_keyval3(Hold_PinType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_PinType self
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
extern Impl_ApplicationData Hold_PinType_FindFirstApplicationData_keyval4(Hold_PinType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_PinType self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Clas_HolderCategory Hold_PinType_FindFirstHolderCategory(Hold_PinType self, ApiMap conditions);

/**
  FindFirst for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_PinType self
  @returns  the first value that satisfies the conditions 
**/
extern Clas_HolderCategory Hold_PinType_FindFirstHolderCategory_keyval0(Hold_PinType self);

/**
  FindFirst for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_PinType self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Clas_HolderCategory Hold_PinType_FindFirstHolderCategory_keyval1(Hold_PinType self, char * key, ApiObject value);

/**
  FindFirst for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_PinType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Clas_HolderCategory Hold_PinType_FindFirstHolderCategory_keyval2(Hold_PinType self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_PinType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Clas_HolderCategory Hold_PinType_FindFirstHolderCategory_keyval3(Hold_PinType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_PinType self
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
extern Clas_HolderCategory Hold_PinType_FindFirstHolderCategory_keyval4(Hold_PinType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.lims.Holder.PinType
  @param  Hold_PinType self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Hold_PinType_Get(Hold_PinType self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Hold_PinType self
  @returns   the result
**/
extern Acco_AccessObject Hold_PinType_GetAccess(Hold_PinType self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Hold_PinType self
  @returns   the result
**/
extern Acco_AccessObject Hold_PinType_GetActiveAccess(Hold_PinType self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_PinType self
  @returns   the result
**/
extern ApiList Hold_PinType_GetApplicationData(Hold_PinType self);

/**
  GetByKey for ccp.lims.Holder.PinType
  @param  Hold_PinType self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Hold_PinType Hold_PinType_GetByKey(Hold_PinType self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Hold_PinType self
  @returns   the result
**/
extern ApiString Hold_PinType_GetClassName(Hold_PinType self);

/**
  Get for ccp.lims.Holder.AbstractHolderType.details

Detail field for 
comments.
  @param  Hold_PinType self
  @returns   the result
**/
extern ApiString Hold_PinType_GetDetails(Hold_PinType self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Hold_PinType self
  @returns   the result
**/
extern ApiList Hold_PinType_GetFieldNames(Hold_PinType self);

/**
  Get for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_PinType self
  @returns   the result
**/
extern ApiSet Hold_PinType_GetHolderCategories(Hold_PinType self);

/**
  Get for ccp.lims.Holder.AbstractHolderType.holderStore

parent link
  @param  Hold_PinType self
  @returns   the result
**/
extern Hold_HolderStore Hold_PinType_GetHolderStore(Hold_PinType self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Hold_PinType self
  @returns   the result
**/
extern ApiBoolean Hold_PinType_GetInConstructor(Hold_PinType self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Hold_PinType self
  @returns   the result
**/
extern ApiBoolean Hold_PinType_GetIsDeleted(Hold_PinType self);

/**
  Get for ccp.lims.Holder.PinType.length

The length of pin + hat, in 
millimeter.
  @param  Hold_PinType self
  @returns   the result
**/
extern ApiFloat Hold_PinType_GetLength(Hold_PinType self);

/**
  Get for ccp.lims.Holder.PinType.loopLength

The length of the loop 
containing the Crystal, in millimeter.
  @param  Hold_PinType self
  @returns   the result
**/
extern ApiFloat Hold_PinType_GetLoopLength(Hold_PinType self);

/**
  Get for ccp.lims.Holder.PinType.loopType

The type of the loop.
  @param  Hold_PinType self
  @returns   the result
**/
extern ApiString Hold_PinType_GetLoopType(Hold_PinType self);

/**
  Get for ccp.lims.Holder.AbstractHolderType.name

The reference holder 
name. e.g. '96 Deepweel plate', 'Plate', 'Screen', 'Gel', ...
  @param  Hold_PinType self
  @returns   the result
**/
extern ApiString Hold_PinType_GetName(Hold_PinType self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Hold_PinType self
  @returns   the result
**/
extern ApiString Hold_PinType_GetPackageName(Hold_PinType self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Hold_PinType self
  @returns   the result
**/
extern ApiString Hold_PinType_GetPackageShortName(Hold_PinType self);

/**
  Get for ccp.lims.Holder.AbstractHolderType.parent

link to parent object 
- synonym for holderStore
  @param  Hold_PinType self
  @returns   the result
**/
extern Hold_HolderStore Hold_PinType_GetParent(Hold_PinType self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Hold_PinType self
  @returns   the result
**/
extern ApiString Hold_PinType_GetQualifiedName(Hold_PinType self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Hold_PinType self
  @returns   the result
**/
extern Impl_MemopsRoot Hold_PinType_GetRoot(Hold_PinType self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Hold_PinType self
  @returns   the result
**/
extern Impl_TopObject Hold_PinType_GetTopObject(Hold_PinType self);

/**
  Get for ccp.lims.Holder.PinType.wireWidth

The width of the loop wire, 
in micrometer.
  @param  Hold_PinType self
  @returns   the result
**/
extern ApiFloat Hold_PinType_GetWireWidth(Hold_PinType self);

/**
  Constructor for ccp.lims.Holder.PinType
  @param  Hold_HolderStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Hold_PinType Hold_PinType_Init(Hold_HolderStore parent, ApiMap attrlinks);

/**
  Constructor for ccp.lims.Holder.PinType
  @param  Hold_HolderStore parent
  @param  ApiSet holderCategories
  @param  char * name
  @returns  the new object
**/
extern Hold_PinType Hold_PinType_Init_reqd(Hold_HolderStore parent, ApiSet holderCategories, char * name);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_PinType self
  @param  Impl_ApplicationData value
**/
extern void *Hold_PinType_RemoveApplicationData(Hold_PinType self, Impl_ApplicationData value);

/**
  Remove for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_PinType self
  @param  Clas_HolderCategory value
**/
extern void *Hold_PinType_RemoveHolderCategory(Hold_PinType self, Clas_HolderCategory value);

/**
  SetAttr for ccp.lims.Holder.PinType
  @param  Hold_PinType self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Hold_PinType_Set(Hold_PinType self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Hold_PinType self
  @param  Acco_AccessObject value
**/
extern void *Hold_PinType_SetAccess(Hold_PinType self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_PinType self
  @param  ApiList values
**/
extern void *Hold_PinType_SetApplicationData(Hold_PinType self, ApiList values);

/**
  Set for ccp.lims.Holder.AbstractHolderType.details

Detail field for 
comments.
  @param  Hold_PinType self
  @param  ApiString value
**/
extern void *Hold_PinType_SetDetails(Hold_PinType self, ApiString value);

/**
  Set for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_PinType self
  @param  ApiSet values
**/
extern void *Hold_PinType_SetHolderCategories(Hold_PinType self, ApiSet values);

/**
  Set for ccp.lims.Holder.PinType.length

The length of pin + hat, in 
millimeter.
  @param  Hold_PinType self
  @param  ApiFloat value
**/
extern void *Hold_PinType_SetLength(Hold_PinType self, ApiFloat value);

/**
  Set for ccp.lims.Holder.PinType.loopLength

The length of the loop 
containing the Crystal, in millimeter.
  @param  Hold_PinType self
  @param  ApiFloat value
**/
extern void *Hold_PinType_SetLoopLength(Hold_PinType self, ApiFloat value);

/**
  Set for ccp.lims.Holder.PinType.loopType

The type of the loop.
  @param  Hold_PinType self
  @param  ApiString value
**/
extern void *Hold_PinType_SetLoopType(Hold_PinType self, ApiString value);

/**
  Set for ccp.lims.Holder.AbstractHolderType.name

The reference holder 
name. e.g. '96 Deepweel plate', 'Plate', 'Screen', 'Gel', ...
  @param  Hold_PinType self
  @param  ApiString value
**/
extern void *Hold_PinType_SetName(Hold_PinType self, ApiString value);

/**
  Set for ccp.lims.Holder.PinType.wireWidth

The width of the loop wire, 
in micrometer.
  @param  Hold_PinType self
  @param  ApiFloat value
**/
extern void *Hold_PinType_SetWireWidth(Hold_PinType self, ApiFloat value);

/**
  Sorted for ccp.lims.Holder.AbstractHolderType.holderCategories
  @param  Hold_PinType self
  @returns   the result
**/
extern ApiList Hold_PinType_SortedHolderCategories(Hold_PinType self);

#endif /* __incl__ccp_api_lims_Holder_PinType_h__ */
