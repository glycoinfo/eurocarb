
#ifndef __incl__ccpnmr_api_NameMapping_ResonanceLinkMapping_h__
#define __incl__ccpnmr_api_NameMapping_ResonanceLinkMapping_h__

#include "ccp.h"

/*
  Describes cases where a resonance with a particular external format name has to be copied to other resonances (using their external format name).
*/

/* package ccpnmr.api.NameMapping */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_ResonanceLinkMapping self
  @param  Impl_ApplicationData value
**/
extern void *Nmap_ResonanceLinkMapping_AddApplicationData(Nmap_ResonanceLinkMapping self, Impl_ApplicationData value);

/**
  Add for 
ccpnmr.NameMapping.ResonanceLinkMapping.selectResonanceNames

The 
external format names of the resonances to be copied to (e.g. 
'A.12.HB2','A.12.HB3').
  @param  Nmap_ResonanceLinkMapping self
  @param  ApiString value
**/
extern void *Nmap_ResonanceLinkMapping_AddSelectResonanceName(Nmap_ResonanceLinkMapping self, ApiString value);

/**
  CheckAllValid for ccpnmr.NameMapping.ResonanceLinkMapping
  @param  Nmap_ResonanceLinkMapping self
  @param  ApiBoolean complete
**/
extern void *Nmap_ResonanceLinkMapping_CheckAllValid(Nmap_ResonanceLinkMapping self, ApiBoolean complete);

/**
  CheckValid for ccpnmr.NameMapping.ResonanceLinkMapping
  @param  Nmap_ResonanceLinkMapping self
  @param  ApiBoolean complete
**/
extern void *Nmap_ResonanceLinkMapping_CheckValid(Nmap_ResonanceLinkMapping self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_ResonanceLinkMapping self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmap_ResonanceLinkMapping_FindAllApplicationData(Nmap_ResonanceLinkMapping self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_ResonanceLinkMapping self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmap_ResonanceLinkMapping_FindAllApplicationData_keyval0(Nmap_ResonanceLinkMapping self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_ResonanceLinkMapping self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmap_ResonanceLinkMapping_FindAllApplicationData_keyval1(Nmap_ResonanceLinkMapping self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_ResonanceLinkMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmap_ResonanceLinkMapping_FindAllApplicationData_keyval2(Nmap_ResonanceLinkMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_ResonanceLinkMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmap_ResonanceLinkMapping_FindAllApplicationData_keyval3(Nmap_ResonanceLinkMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_ResonanceLinkMapping self
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
extern ApiList Nmap_ResonanceLinkMapping_FindAllApplicationData_keyval4(Nmap_ResonanceLinkMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_ResonanceLinkMapping self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmap_ResonanceLinkMapping_FindFirstApplicationData(Nmap_ResonanceLinkMapping self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_ResonanceLinkMapping self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmap_ResonanceLinkMapping_FindFirstApplicationData_keyval0(Nmap_ResonanceLinkMapping self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_ResonanceLinkMapping self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmap_ResonanceLinkMapping_FindFirstApplicationData_keyval1(Nmap_ResonanceLinkMapping self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_ResonanceLinkMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmap_ResonanceLinkMapping_FindFirstApplicationData_keyval2(Nmap_ResonanceLinkMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_ResonanceLinkMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmap_ResonanceLinkMapping_FindFirstApplicationData_keyval3(Nmap_ResonanceLinkMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_ResonanceLinkMapping self
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
extern Impl_ApplicationData Nmap_ResonanceLinkMapping_FindFirstApplicationData_keyval4(Nmap_ResonanceLinkMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccpnmr.NameMapping.ResonanceLinkMapping
  @param  Nmap_ResonanceLinkMapping self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Nmap_ResonanceLinkMapping_Get(Nmap_ResonanceLinkMapping self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmap_ResonanceLinkMapping self
  @returns   the result
**/
extern Acco_AccessObject Nmap_ResonanceLinkMapping_GetAccess(Nmap_ResonanceLinkMapping self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_ResonanceLinkMapping self
  @returns   the result
**/
extern ApiList Nmap_ResonanceLinkMapping_GetApplicationData(Nmap_ResonanceLinkMapping self);

/**
  GetByKey for ccpnmr.NameMapping.ResonanceLinkMapping
  @param  Nmap_ResonanceLinkMapping self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Nmap_ResonanceLinkMapping Nmap_ResonanceLinkMapping_GetByKey(Nmap_ResonanceLinkMapping self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Nmap_ResonanceLinkMapping self
  @returns   the result
**/
extern ApiString Nmap_ResonanceLinkMapping_GetClassName(Nmap_ResonanceLinkMapping self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Nmap_ResonanceLinkMapping self
  @returns   the result
**/
extern ApiList Nmap_ResonanceLinkMapping_GetFieldNames(Nmap_ResonanceLinkMapping self);

/**
  GetFullKey for ccpnmr.NameMapping.ResonanceLinkMapping
  @param  Nmap_ResonanceLinkMapping self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Nmap_ResonanceLinkMapping_GetFullKey(Nmap_ResonanceLinkMapping self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Nmap_ResonanceLinkMapping self
  @returns   the result
**/
extern ApiBoolean Nmap_ResonanceLinkMapping_GetInConstructor(Nmap_ResonanceLinkMapping self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Nmap_ResonanceLinkMapping self
  @returns   the result
**/
extern ApiBoolean Nmap_ResonanceLinkMapping_GetIsDeleted(Nmap_ResonanceLinkMapping self);

/**
  GetLocalKey for ccpnmr.NameMapping.ResonanceLinkMapping
  @param  Nmap_ResonanceLinkMapping self
  @returns  Local object key
**/
extern ApiObject Nmap_ResonanceLinkMapping_GetLocalKey(Nmap_ResonanceLinkMapping self);

/**
  Get for ccpnmr.NameMapping.ResonanceLinkMapping.nameMapping

parent link
  @param  Nmap_ResonanceLinkMapping self
  @returns   the result
**/
extern Nmap_NameMapping Nmap_ResonanceLinkMapping_GetNameMapping(Nmap_ResonanceLinkMapping self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Nmap_ResonanceLinkMapping self
  @returns   the result
**/
extern ApiString Nmap_ResonanceLinkMapping_GetPackageName(Nmap_ResonanceLinkMapping self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Nmap_ResonanceLinkMapping self
  @returns   the result
**/
extern ApiString Nmap_ResonanceLinkMapping_GetPackageShortName(Nmap_ResonanceLinkMapping self);

/**
  Get for ccpnmr.NameMapping.ResonanceLinkMapping.parent

link to parent 
object - synonym for nameMapping
  @param  Nmap_ResonanceLinkMapping self
  @returns   the result
**/
extern Nmap_NameMapping Nmap_ResonanceLinkMapping_GetParent(Nmap_ResonanceLinkMapping self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Nmap_ResonanceLinkMapping self
  @returns   the result
**/
extern ApiString Nmap_ResonanceLinkMapping_GetQualifiedName(Nmap_ResonanceLinkMapping self);

/**
  Get for ccpnmr.NameMapping.ResonanceLinkMapping.resonanceName

The 
external format name of the resonance to be copied (e.g. 'A.12.HB*').
  @param  Nmap_ResonanceLinkMapping self
  @returns   the result
**/
extern ApiString Nmap_ResonanceLinkMapping_GetResonanceName(Nmap_ResonanceLinkMapping self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Nmap_ResonanceLinkMapping self
  @returns   the result
**/
extern Impl_MemopsRoot Nmap_ResonanceLinkMapping_GetRoot(Nmap_ResonanceLinkMapping self);

/**
  Get for 
ccpnmr.NameMapping.ResonanceLinkMapping.selectResonanceNames

The 
external format names of the resonances to be copied to (e.g. 
'A.12.HB2','A.12.HB3').
  @param  Nmap_ResonanceLinkMapping self
  @returns   the result
**/
extern ApiList Nmap_ResonanceLinkMapping_GetSelectResonanceNames(Nmap_ResonanceLinkMapping self);

/**
  Get for ccpnmr.NameMapping.ResonanceLinkMapping.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmap_ResonanceLinkMapping self
  @returns   the result
**/
extern ApiInteger Nmap_ResonanceLinkMapping_GetSerial(Nmap_ResonanceLinkMapping self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Nmap_ResonanceLinkMapping self
  @returns   the result
**/
extern Impl_TopObject Nmap_ResonanceLinkMapping_GetTopObject(Nmap_ResonanceLinkMapping self);

/**
  Constructor for ccpnmr.NameMapping.ResonanceLinkMapping
  @param  Nmap_NameMapping parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmap_ResonanceLinkMapping Nmap_ResonanceLinkMapping_Init(Nmap_NameMapping parent, ApiMap attrlinks);

/**
  Constructor for ccpnmr.NameMapping.ResonanceLinkMapping
  @param  Nmap_NameMapping parent
  @param  char * resonanceName
  @returns  the new object
**/
extern Nmap_ResonanceLinkMapping Nmap_ResonanceLinkMapping_Init_reqd(Nmap_NameMapping parent, char * resonanceName);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_ResonanceLinkMapping self
  @param  Impl_ApplicationData value
**/
extern void *Nmap_ResonanceLinkMapping_RemoveApplicationData(Nmap_ResonanceLinkMapping self, Impl_ApplicationData value);

/**
  Remove for 
ccpnmr.NameMapping.ResonanceLinkMapping.selectResonanceNames

The 
external format names of the resonances to be copied to (e.g. 
'A.12.HB2','A.12.HB3').
  @param  Nmap_ResonanceLinkMapping self
  @param  ApiString value
**/
extern void *Nmap_ResonanceLinkMapping_RemoveSelectResonanceName(Nmap_ResonanceLinkMapping self, ApiString value);

/**
  SetAttr for ccpnmr.NameMapping.ResonanceLinkMapping
  @param  Nmap_ResonanceLinkMapping self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Nmap_ResonanceLinkMapping_Set(Nmap_ResonanceLinkMapping self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmap_ResonanceLinkMapping self
  @param  Acco_AccessObject value
**/
extern void *Nmap_ResonanceLinkMapping_SetAccess(Nmap_ResonanceLinkMapping self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_ResonanceLinkMapping self
  @param  ApiList values
**/
extern void *Nmap_ResonanceLinkMapping_SetApplicationData(Nmap_ResonanceLinkMapping self, ApiList values);

/**
  Set for ccpnmr.NameMapping.ResonanceLinkMapping.resonanceName

The 
external format name of the resonance to be copied (e.g. 'A.12.HB*').
  @param  Nmap_ResonanceLinkMapping self
  @param  ApiString value
**/
extern void *Nmap_ResonanceLinkMapping_SetResonanceName(Nmap_ResonanceLinkMapping self, ApiString value);

/**
  Set for 
ccpnmr.NameMapping.ResonanceLinkMapping.selectResonanceNames

The 
external format names of the resonances to be copied to (e.g. 
'A.12.HB2','A.12.HB3').
  @param  Nmap_ResonanceLinkMapping self
  @param  ApiList values
**/
extern void *Nmap_ResonanceLinkMapping_SetSelectResonanceNames(Nmap_ResonanceLinkMapping self, ApiList values);

/**
  Set for ccpnmr.NameMapping.ResonanceLinkMapping.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmap_ResonanceLinkMapping self
  @param  ApiInteger value
**/
extern void *Nmap_ResonanceLinkMapping_SetSerial(Nmap_ResonanceLinkMapping self, ApiInteger value);

#endif /* __incl__ccpnmr_api_NameMapping_ResonanceLinkMapping_h__ */
