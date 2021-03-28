
#ifndef __incl__ccp_api_nmr_NmrConstraint_ResStructure_h__
#define __incl__ccp_api_nmr_NmrConstraint_ResStructure_h__

#include "ccp.h"

/*
  Molecule Structure with coordinates assigned to Resonances rather than Atoms. Intended for protocols that generate 3D structures without (complete) assignment. 
*/

/* package ccp.api.nmr.NmrConstraint */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ResStructure self
  @param  Impl_ApplicationData value
**/
extern void *Nmrc_ResStructure_AddApplicationData(Nmrc_ResStructure self, Impl_ApplicationData value);

/**
  CheckAllValid for ccp.nmr.NmrConstraint.ResStructure
  @param  Nmrc_ResStructure self
  @param  ApiBoolean complete
**/
extern void *Nmrc_ResStructure_CheckAllValid(Nmrc_ResStructure self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.NmrConstraint.ResStructure
  @param  Nmrc_ResStructure self
  @param  ApiBoolean complete
**/
extern void *Nmrc_ResStructure_CheckValid(Nmrc_ResStructure self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ResStructure self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_ResStructure_FindAllApplicationData(Nmrc_ResStructure self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ResStructure self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_ResStructure_FindAllApplicationData_keyval0(Nmrc_ResStructure self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ResStructure self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_ResStructure_FindAllApplicationData_keyval1(Nmrc_ResStructure self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ResStructure self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_ResStructure_FindAllApplicationData_keyval2(Nmrc_ResStructure self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ResStructure self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_ResStructure_FindAllApplicationData_keyval3(Nmrc_ResStructure self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ResStructure self
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
extern ApiList Nmrc_ResStructure_FindAllApplicationData_keyval4(Nmrc_ResStructure self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.NmrConstraint.ResStructure.coords

child link to 
class ResCoord
  @param  Nmrc_ResStructure self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_ResStructure_FindAllCoords(Nmrc_ResStructure self, ApiMap conditions);

/**
  FindAll for ccp.nmr.NmrConstraint.ResStructure.coords

child link to 
class ResCoord
  @param  Nmrc_ResStructure self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_ResStructure_FindAllCoords_keyval0(Nmrc_ResStructure self);

/**
  FindAll for ccp.nmr.NmrConstraint.ResStructure.coords

child link to 
class ResCoord
  @param  Nmrc_ResStructure self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_ResStructure_FindAllCoords_keyval1(Nmrc_ResStructure self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.NmrConstraint.ResStructure.coords

child link to 
class ResCoord
  @param  Nmrc_ResStructure self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_ResStructure_FindAllCoords_keyval2(Nmrc_ResStructure self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.NmrConstraint.ResStructure.coords

child link to 
class ResCoord
  @param  Nmrc_ResStructure self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_ResStructure_FindAllCoords_keyval3(Nmrc_ResStructure self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.NmrConstraint.ResStructure.coords

child link to 
class ResCoord
  @param  Nmrc_ResStructure self
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
extern ApiSet Nmrc_ResStructure_FindAllCoords_keyval4(Nmrc_ResStructure self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ResStructure self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_ResStructure_FindFirstApplicationData(Nmrc_ResStructure self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ResStructure self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_ResStructure_FindFirstApplicationData_keyval0(Nmrc_ResStructure self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ResStructure self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_ResStructure_FindFirstApplicationData_keyval1(Nmrc_ResStructure self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ResStructure self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_ResStructure_FindFirstApplicationData_keyval2(Nmrc_ResStructure self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ResStructure self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_ResStructure_FindFirstApplicationData_keyval3(Nmrc_ResStructure self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ResStructure self
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
extern Impl_ApplicationData Nmrc_ResStructure_FindFirstApplicationData_keyval4(Nmrc_ResStructure self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.NmrConstraint.ResStructure.coords

child link to 
class ResCoord
  @param  Nmrc_ResStructure self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_ResCoord Nmrc_ResStructure_FindFirstCoord(Nmrc_ResStructure self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.NmrConstraint.ResStructure.coords

child link to 
class ResCoord
  @param  Nmrc_ResStructure self
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_ResCoord Nmrc_ResStructure_FindFirstCoord_keyval0(Nmrc_ResStructure self);

/**
  FindFirst for ccp.nmr.NmrConstraint.ResStructure.coords

child link to 
class ResCoord
  @param  Nmrc_ResStructure self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_ResCoord Nmrc_ResStructure_FindFirstCoord_keyval1(Nmrc_ResStructure self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.NmrConstraint.ResStructure.coords

child link to 
class ResCoord
  @param  Nmrc_ResStructure self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_ResCoord Nmrc_ResStructure_FindFirstCoord_keyval2(Nmrc_ResStructure self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.NmrConstraint.ResStructure.coords

child link to 
class ResCoord
  @param  Nmrc_ResStructure self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_ResCoord Nmrc_ResStructure_FindFirstCoord_keyval3(Nmrc_ResStructure self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.NmrConstraint.ResStructure.coords

child link to 
class ResCoord
  @param  Nmrc_ResStructure self
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
extern Nmrc_ResCoord Nmrc_ResStructure_FindFirstCoord_keyval4(Nmrc_ResStructure self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.NmrConstraint.ResStructure
  @param  Nmrc_ResStructure self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Nmrc_ResStructure_Get(Nmrc_ResStructure self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrc_ResStructure self
  @returns   the result
**/
extern Acco_AccessObject Nmrc_ResStructure_GetAccess(Nmrc_ResStructure self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Nmrc_ResStructure self
  @returns   the result
**/
extern Acco_AccessObject Nmrc_ResStructure_GetActiveAccess(Nmrc_ResStructure self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ResStructure self
  @returns   the result
**/
extern ApiList Nmrc_ResStructure_GetApplicationData(Nmrc_ResStructure self);

/**
  GetByKey for ccp.nmr.NmrConstraint.ResStructure
  @param  Nmrc_ResStructure self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Nmrc_ResStructure Nmrc_ResStructure_GetByKey(Nmrc_ResStructure self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Nmrc_ResStructure self
  @returns   the result
**/
extern ApiString Nmrc_ResStructure_GetClassName(Nmrc_ResStructure self);

/**
  Get for ccp.nmr.NmrConstraint.ResStructure.coords

child link to class 
ResCoord
  @param  Nmrc_ResStructure self
  @returns   the result
**/
extern ApiSet Nmrc_ResStructure_GetCoords(Nmrc_ResStructure self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Nmrc_ResStructure self
  @returns   the result
**/
extern ApiList Nmrc_ResStructure_GetFieldNames(Nmrc_ResStructure self);

/**
  GetFullKey for ccp.nmr.NmrConstraint.ResStructure
  @param  Nmrc_ResStructure self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Nmrc_ResStructure_GetFullKey(Nmrc_ResStructure self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Nmrc_ResStructure self
  @returns   the result
**/
extern ApiBoolean Nmrc_ResStructure_GetInConstructor(Nmrc_ResStructure self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Nmrc_ResStructure self
  @returns   the result
**/
extern ApiBoolean Nmrc_ResStructure_GetIsDeleted(Nmrc_ResStructure self);

/**
  Get for ccp.nmr.NmrConstraint.ResStructure.label

Short identyfying or 
explanatory string,
  @param  Nmrc_ResStructure self
  @returns   the result
**/
extern ApiString Nmrc_ResStructure_GetLabel(Nmrc_ResStructure self);

/**
  GetLocalKey for ccp.nmr.NmrConstraint.ResStructure
  @param  Nmrc_ResStructure self
  @returns  Local object key
**/
extern ApiObject Nmrc_ResStructure_GetLocalKey(Nmrc_ResStructure self);

/**
  Get for ccp.nmr.NmrConstraint.ResStructure.nmrConstraintStore

Structure 
generation run where ResStructures were generated.
  @param  Nmrc_ResStructure self
  @returns   the result
**/
extern Nmrc_NmrConstraintStore Nmrc_ResStructure_GetNmrConstraintStore(Nmrc_ResStructure self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Nmrc_ResStructure self
  @returns   the result
**/
extern ApiString Nmrc_ResStructure_GetPackageName(Nmrc_ResStructure self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Nmrc_ResStructure self
  @returns   the result
**/
extern ApiString Nmrc_ResStructure_GetPackageShortName(Nmrc_ResStructure self);

/**
  Get for ccp.nmr.NmrConstraint.ResStructure.parent

link to parent object 
- synonym for nmrConstraintStore
  @param  Nmrc_ResStructure self
  @returns   the result
**/
extern Nmrc_NmrConstraintStore Nmrc_ResStructure_GetParent(Nmrc_ResStructure self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Nmrc_ResStructure self
  @returns   the result
**/
extern ApiString Nmrc_ResStructure_GetQualifiedName(Nmrc_ResStructure self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Nmrc_ResStructure self
  @returns   the result
**/
extern Impl_MemopsRoot Nmrc_ResStructure_GetRoot(Nmrc_ResStructure self);

/**
  Get for ccp.nmr.NmrConstraint.ResStructure.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmrc_ResStructure self
  @returns   the result
**/
extern ApiInteger Nmrc_ResStructure_GetSerial(Nmrc_ResStructure self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Nmrc_ResStructure self
  @returns   the result
**/
extern Impl_TopObject Nmrc_ResStructure_GetTopObject(Nmrc_ResStructure self);

/**
  Constructor for ccp.nmr.NmrConstraint.ResStructure
  @param  Nmrc_NmrConstraintStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmrc_ResStructure Nmrc_ResStructure_Init(Nmrc_NmrConstraintStore parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.NmrConstraint.ResStructure
  @param  Nmrc_NmrConstraintStore parent
  @returns  the new object
**/
extern Nmrc_ResStructure Nmrc_ResStructure_Init_reqd(Nmrc_NmrConstraintStore parent);

/**
  Factory function to create ccp.nmr.NmrConstraint.ResCoord
  @param  Nmrc_ResStructure self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmrc_ResCoord Nmrc_ResStructure_NewResCoord(Nmrc_ResStructure self, ApiMap attrlinks);

/**
  Factory function to create ccp.nmr.NmrConstraint.ResCoord
  @param  Nmrc_ResStructure self
  @param  Nmrc_FixedResonance resonance
  @returns  the new object
**/
extern Nmrc_ResCoord Nmrc_ResStructure_NewResCoord_reqd(Nmrc_ResStructure self, Nmrc_FixedResonance resonance);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ResStructure self
  @param  Impl_ApplicationData value
**/
extern void *Nmrc_ResStructure_RemoveApplicationData(Nmrc_ResStructure self, Impl_ApplicationData value);

/**
  SetAttr for ccp.nmr.NmrConstraint.ResStructure
  @param  Nmrc_ResStructure self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Nmrc_ResStructure_Set(Nmrc_ResStructure self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrc_ResStructure self
  @param  Acco_AccessObject value
**/
extern void *Nmrc_ResStructure_SetAccess(Nmrc_ResStructure self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ResStructure self
  @param  ApiList values
**/
extern void *Nmrc_ResStructure_SetApplicationData(Nmrc_ResStructure self, ApiList values);

/**
  Set for ccp.nmr.NmrConstraint.ResStructure.label

Short identyfying or 
explanatory string,
  @param  Nmrc_ResStructure self
  @param  ApiString value
**/
extern void *Nmrc_ResStructure_SetLabel(Nmrc_ResStructure self, ApiString value);

/**
  Set for ccp.nmr.NmrConstraint.ResStructure.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmrc_ResStructure self
  @param  ApiInteger value
**/
extern void *Nmrc_ResStructure_SetSerial(Nmrc_ResStructure self, ApiInteger value);

/**
  Sorted for ccp.nmr.NmrConstraint.ResStructure.coords

child link to 
class ResCoord
  @param  Nmrc_ResStructure self
  @returns   the result
**/
extern ApiList Nmrc_ResStructure_SortedCoords(Nmrc_ResStructure self);

#endif /* __incl__ccp_api_nmr_NmrConstraint_ResStructure_h__ */
