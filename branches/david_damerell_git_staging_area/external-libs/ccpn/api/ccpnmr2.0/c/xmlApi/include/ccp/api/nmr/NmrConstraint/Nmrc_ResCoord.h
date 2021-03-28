
#ifndef __incl__ccp_api_nmr_NmrConstraint_ResCoord_h__
#define __incl__ccp_api_nmr_NmrConstraint_ResCoord_h__

#include "ccp.h"

/*
  Coordinate record for ResStructure. Linked to FIxedResonance.
*/

/* package ccp.api.nmr.NmrConstraint */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ResCoord self
  @param  Impl_ApplicationData value
**/
extern void *Nmrc_ResCoord_AddApplicationData(Nmrc_ResCoord self, Impl_ApplicationData value);

/**
  CheckAllValid for ccp.nmr.NmrConstraint.ResCoord
  @param  Nmrc_ResCoord self
  @param  ApiBoolean complete
**/
extern void *Nmrc_ResCoord_CheckAllValid(Nmrc_ResCoord self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.NmrConstraint.ResCoord
  @param  Nmrc_ResCoord self
  @param  ApiBoolean complete
**/
extern void *Nmrc_ResCoord_CheckValid(Nmrc_ResCoord self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ResCoord self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_ResCoord_FindAllApplicationData(Nmrc_ResCoord self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ResCoord self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_ResCoord_FindAllApplicationData_keyval0(Nmrc_ResCoord self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ResCoord self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_ResCoord_FindAllApplicationData_keyval1(Nmrc_ResCoord self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ResCoord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_ResCoord_FindAllApplicationData_keyval2(Nmrc_ResCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ResCoord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_ResCoord_FindAllApplicationData_keyval3(Nmrc_ResCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ResCoord self
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
extern ApiList Nmrc_ResCoord_FindAllApplicationData_keyval4(Nmrc_ResCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ResCoord self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_ResCoord_FindFirstApplicationData(Nmrc_ResCoord self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ResCoord self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_ResCoord_FindFirstApplicationData_keyval0(Nmrc_ResCoord self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ResCoord self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_ResCoord_FindFirstApplicationData_keyval1(Nmrc_ResCoord self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ResCoord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_ResCoord_FindFirstApplicationData_keyval2(Nmrc_ResCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ResCoord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_ResCoord_FindFirstApplicationData_keyval3(Nmrc_ResCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ResCoord self
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
extern Impl_ApplicationData Nmrc_ResCoord_FindFirstApplicationData_keyval4(Nmrc_ResCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.NmrConstraint.ResCoord
  @param  Nmrc_ResCoord self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Nmrc_ResCoord_Get(Nmrc_ResCoord self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrc_ResCoord self
  @returns   the result
**/
extern Acco_AccessObject Nmrc_ResCoord_GetAccess(Nmrc_ResCoord self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ResCoord self
  @returns   the result
**/
extern ApiList Nmrc_ResCoord_GetApplicationData(Nmrc_ResCoord self);

/**
  GetByKey for ccp.nmr.NmrConstraint.ResCoord
  @param  Nmrc_ResCoord self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Nmrc_ResCoord Nmrc_ResCoord_GetByKey(Nmrc_ResCoord self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Nmrc_ResCoord self
  @returns   the result
**/
extern ApiString Nmrc_ResCoord_GetClassName(Nmrc_ResCoord self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Nmrc_ResCoord self
  @returns   the result
**/
extern ApiList Nmrc_ResCoord_GetFieldNames(Nmrc_ResCoord self);

/**
  GetFullKey for ccp.nmr.NmrConstraint.ResCoord
  @param  Nmrc_ResCoord self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Nmrc_ResCoord_GetFullKey(Nmrc_ResCoord self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Nmrc_ResCoord self
  @returns   the result
**/
extern ApiBoolean Nmrc_ResCoord_GetInConstructor(Nmrc_ResCoord self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Nmrc_ResCoord self
  @returns   the result
**/
extern ApiBoolean Nmrc_ResCoord_GetIsDeleted(Nmrc_ResCoord self);

/**
  GetLocalKey for ccp.nmr.NmrConstraint.ResCoord
  @param  Nmrc_ResCoord self
  @returns  Local object key
**/
extern ApiObject Nmrc_ResCoord_GetLocalKey(Nmrc_ResCoord self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Nmrc_ResCoord self
  @returns   the result
**/
extern ApiString Nmrc_ResCoord_GetPackageName(Nmrc_ResCoord self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Nmrc_ResCoord self
  @returns   the result
**/
extern ApiString Nmrc_ResCoord_GetPackageShortName(Nmrc_ResCoord self);

/**
  Get for ccp.nmr.NmrConstraint.ResCoord.parent

link to parent object - 
synonym for structure
  @param  Nmrc_ResCoord self
  @returns   the result
**/
extern Nmrc_ResStructure Nmrc_ResCoord_GetParent(Nmrc_ResCoord self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Nmrc_ResCoord self
  @returns   the result
**/
extern ApiString Nmrc_ResCoord_GetQualifiedName(Nmrc_ResCoord self);

/**
  Get for ccp.nmr.NmrConstraint.ResCoord.resonance

FixedResonance to 
which ResCoords apply.
  @param  Nmrc_ResCoord self
  @returns   the result
**/
extern Nmrc_FixedResonance Nmrc_ResCoord_GetResonance(Nmrc_ResCoord self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Nmrc_ResCoord self
  @returns   the result
**/
extern Impl_MemopsRoot Nmrc_ResCoord_GetRoot(Nmrc_ResCoord self);

/**
  Get for ccp.nmr.NmrConstraint.ResCoord.structure

parent link
  @param  Nmrc_ResCoord self
  @returns   the result
**/
extern Nmrc_ResStructure Nmrc_ResCoord_GetStructure(Nmrc_ResCoord self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Nmrc_ResCoord self
  @returns   the result
**/
extern Impl_TopObject Nmrc_ResCoord_GetTopObject(Nmrc_ResCoord self);

/**
  Get for ccp.nmr.NmrConstraint.ResCoord.x

X coordinate
  @param  Nmrc_ResCoord self
  @returns   the result
**/
extern ApiFloat Nmrc_ResCoord_GetX(Nmrc_ResCoord self);

/**
  Get for ccp.nmr.NmrConstraint.ResCoord.y

Y coordinate
  @param  Nmrc_ResCoord self
  @returns   the result
**/
extern ApiFloat Nmrc_ResCoord_GetY(Nmrc_ResCoord self);

/**
  Get for ccp.nmr.NmrConstraint.ResCoord.z

Z coordinate
  @param  Nmrc_ResCoord self
  @returns   the result
**/
extern ApiFloat Nmrc_ResCoord_GetZ(Nmrc_ResCoord self);

/**
  Constructor for ccp.nmr.NmrConstraint.ResCoord
  @param  Nmrc_ResStructure parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmrc_ResCoord Nmrc_ResCoord_Init(Nmrc_ResStructure parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.NmrConstraint.ResCoord
  @param  Nmrc_ResStructure parent
  @param  Nmrc_FixedResonance resonance
  @returns  the new object
**/
extern Nmrc_ResCoord Nmrc_ResCoord_Init_reqd(Nmrc_ResStructure parent, Nmrc_FixedResonance resonance);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ResCoord self
  @param  Impl_ApplicationData value
**/
extern void *Nmrc_ResCoord_RemoveApplicationData(Nmrc_ResCoord self, Impl_ApplicationData value);

/**
  SetAttr for ccp.nmr.NmrConstraint.ResCoord
  @param  Nmrc_ResCoord self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Nmrc_ResCoord_Set(Nmrc_ResCoord self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrc_ResCoord self
  @param  Acco_AccessObject value
**/
extern void *Nmrc_ResCoord_SetAccess(Nmrc_ResCoord self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ResCoord self
  @param  ApiList values
**/
extern void *Nmrc_ResCoord_SetApplicationData(Nmrc_ResCoord self, ApiList values);

/**
  Set for ccp.nmr.NmrConstraint.ResCoord.resonance

FixedResonance to 
which ResCoords apply.
  @param  Nmrc_ResCoord self
  @param  Nmrc_FixedResonance value
**/
extern void *Nmrc_ResCoord_SetResonance(Nmrc_ResCoord self, Nmrc_FixedResonance value);

/**
  Set for ccp.nmr.NmrConstraint.ResCoord.x

X coordinate
  @param  Nmrc_ResCoord self
  @param  ApiFloat value
**/
extern void *Nmrc_ResCoord_SetX(Nmrc_ResCoord self, ApiFloat value);

/**
  Set for ccp.nmr.NmrConstraint.ResCoord.y

Y coordinate
  @param  Nmrc_ResCoord self
  @param  ApiFloat value
**/
extern void *Nmrc_ResCoord_SetY(Nmrc_ResCoord self, ApiFloat value);

/**
  Set for ccp.nmr.NmrConstraint.ResCoord.z

Z coordinate
  @param  Nmrc_ResCoord self
  @param  ApiFloat value
**/
extern void *Nmrc_ResCoord_SetZ(Nmrc_ResCoord self, ApiFloat value);

#endif /* __incl__ccp_api_nmr_NmrConstraint_ResCoord_h__ */
