
#ifndef __incl__ccpnmr_api_NameMapping_AtomMapping_h__
#define __incl__ccpnmr_api_NameMapping_AtomMapping_h__

#include "ccp.h"

/*
  Describes the mapping between the atoms in the data model and the atom name strings in an external format
*/

/* package ccpnmr.api.NameMapping */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_AtomMapping self
  @param  Impl_ApplicationData value
**/
extern void *Nmap_AtomMapping_AddApplicationData(Nmap_AtomMapping self, Impl_ApplicationData value);

/**
  CheckAllValid for ccpnmr.NameMapping.AtomMapping
  @param  Nmap_AtomMapping self
  @param  ApiBoolean complete
**/
extern void *Nmap_AtomMapping_CheckAllValid(Nmap_AtomMapping self, ApiBoolean complete);

/**
  CheckValid for ccpnmr.NameMapping.AtomMapping
  @param  Nmap_AtomMapping self
  @param  ApiBoolean complete
**/
extern void *Nmap_AtomMapping_CheckValid(Nmap_AtomMapping self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_AtomMapping self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmap_AtomMapping_FindAllApplicationData(Nmap_AtomMapping self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_AtomMapping self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmap_AtomMapping_FindAllApplicationData_keyval0(Nmap_AtomMapping self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_AtomMapping self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmap_AtomMapping_FindAllApplicationData_keyval1(Nmap_AtomMapping self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_AtomMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmap_AtomMapping_FindAllApplicationData_keyval2(Nmap_AtomMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_AtomMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmap_AtomMapping_FindAllApplicationData_keyval3(Nmap_AtomMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_AtomMapping self
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
extern ApiList Nmap_AtomMapping_FindAllApplicationData_keyval4(Nmap_AtomMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_AtomMapping self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmap_AtomMapping_FindFirstApplicationData(Nmap_AtomMapping self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_AtomMapping self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmap_AtomMapping_FindFirstApplicationData_keyval0(Nmap_AtomMapping self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_AtomMapping self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmap_AtomMapping_FindFirstApplicationData_keyval1(Nmap_AtomMapping self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_AtomMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmap_AtomMapping_FindFirstApplicationData_keyval2(Nmap_AtomMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_AtomMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmap_AtomMapping_FindFirstApplicationData_keyval3(Nmap_AtomMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_AtomMapping self
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
extern Impl_ApplicationData Nmap_AtomMapping_FindFirstApplicationData_keyval4(Nmap_AtomMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccpnmr.NameMapping.AtomMapping
  @param  Nmap_AtomMapping self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Nmap_AtomMapping_Get(Nmap_AtomMapping self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmap_AtomMapping self
  @returns   the result
**/
extern Acco_AccessObject Nmap_AtomMapping_GetAccess(Nmap_AtomMapping self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_AtomMapping self
  @returns   the result
**/
extern ApiList Nmap_AtomMapping_GetApplicationData(Nmap_AtomMapping self);

/**
  GetByKey for ccpnmr.NameMapping.AtomMapping
  @param  Nmap_AtomMapping self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Nmap_AtomMapping Nmap_AtomMapping_GetByKey(Nmap_AtomMapping self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for ccpnmr.NameMapping.AtomMapping.ccpCode

ChemComp.ccpCode. If 
set, the mapping applies to all residues with this ccpCode (combined 
with other mapping specifications in this class).
  @param  Nmap_AtomMapping self
  @returns   the result
**/
extern ApiString Nmap_AtomMapping_GetCcpCode(Nmap_AtomMapping self);

/**
  Get for ccpnmr.NameMapping.AtomMapping.chainCode

Chain.code in the data 
model (the mapping to the chain in the external format is handled by 
ChainMapping). If set, the mapping applies to all chains with this code 
(combined with other mapping specifications in this class).
  @param  Nmap_AtomMapping self
  @returns   the result
**/
extern ApiString Nmap_AtomMapping_GetChainCode(Nmap_AtomMapping self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Nmap_AtomMapping self
  @returns   the result
**/
extern ApiString Nmap_AtomMapping_GetClassName(Nmap_AtomMapping self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Nmap_AtomMapping self
  @returns   the result
**/
extern ApiList Nmap_AtomMapping_GetFieldNames(Nmap_AtomMapping self);

/**
  Get for ccpnmr.NameMapping.AtomMapping.formatName

Atom name in the 
external format
  @param  Nmap_AtomMapping self
  @returns   the result
**/
extern ApiString Nmap_AtomMapping_GetFormatName(Nmap_AtomMapping self);

/**
  GetFullKey for ccpnmr.NameMapping.AtomMapping
  @param  Nmap_AtomMapping self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Nmap_AtomMapping_GetFullKey(Nmap_AtomMapping self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Nmap_AtomMapping self
  @returns   the result
**/
extern ApiBoolean Nmap_AtomMapping_GetInConstructor(Nmap_AtomMapping self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Nmap_AtomMapping self
  @returns   the result
**/
extern ApiBoolean Nmap_AtomMapping_GetIsDeleted(Nmap_AtomMapping self);

/**
  GetLocalKey for ccpnmr.NameMapping.AtomMapping
  @param  Nmap_AtomMapping self
  @returns  Local object key
**/
extern ApiObject Nmap_AtomMapping_GetLocalKey(Nmap_AtomMapping self);

/**
  Get for ccpnmr.NameMapping.AtomMapping.molSystemCode

MolSystem.code in 
the data model. If set, the mapping applies to the molecular system with 
this code (combined with other mapping specifications in this class).
  @param  Nmap_AtomMapping self
  @returns   the result
**/
extern ApiString Nmap_AtomMapping_GetMolSystemCode(Nmap_AtomMapping self);

/**
  Get for ccpnmr.NameMapping.AtomMapping.moleculeName

Molecule.name in 
the data model. If set, the mapping applies to all chains that have a 
molecule with this name (combined with other mapping specifications in 
this class).
  @param  Nmap_AtomMapping self
  @returns   the result
**/
extern ApiString Nmap_AtomMapping_GetMoleculeName(Nmap_AtomMapping self);

/**
  Get for ccpnmr.NameMapping.AtomMapping.name

Atom.name in the data model
  @param  Nmap_AtomMapping self
  @returns   the result
**/
extern ApiString Nmap_AtomMapping_GetName(Nmap_AtomMapping self);

/**
  Get for ccpnmr.NameMapping.AtomMapping.nameMapping

parent link
  @param  Nmap_AtomMapping self
  @returns   the result
**/
extern Nmap_NameMapping Nmap_AtomMapping_GetNameMapping(Nmap_AtomMapping self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Nmap_AtomMapping self
  @returns   the result
**/
extern ApiString Nmap_AtomMapping_GetPackageName(Nmap_AtomMapping self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Nmap_AtomMapping self
  @returns   the result
**/
extern ApiString Nmap_AtomMapping_GetPackageShortName(Nmap_AtomMapping self);

/**
  Get for ccpnmr.NameMapping.AtomMapping.parent

link to parent object - 
synonym for nameMapping
  @param  Nmap_AtomMapping self
  @returns   the result
**/
extern Nmap_NameMapping Nmap_AtomMapping_GetParent(Nmap_AtomMapping self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Nmap_AtomMapping self
  @returns   the result
**/
extern ApiString Nmap_AtomMapping_GetQualifiedName(Nmap_AtomMapping self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Nmap_AtomMapping self
  @returns   the result
**/
extern Impl_MemopsRoot Nmap_AtomMapping_GetRoot(Nmap_AtomMapping self);

/**
  Get for ccpnmr.NameMapping.AtomMapping.seqId

Residue.seqId in the data 
model (the mapping to the chain in the external format is handled by 
ChainMapping). If set, the mapping applies to all residues with this 
seqId (combined with other mapping specifications in this class).
  @param  Nmap_AtomMapping self
  @returns   the result
**/
extern ApiInteger Nmap_AtomMapping_GetSeqId(Nmap_AtomMapping self);

/**
  Get for ccpnmr.NameMapping.AtomMapping.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Nmap_AtomMapping self
  @returns   the result
**/
extern ApiInteger Nmap_AtomMapping_GetSerial(Nmap_AtomMapping self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Nmap_AtomMapping self
  @returns   the result
**/
extern Impl_TopObject Nmap_AtomMapping_GetTopObject(Nmap_AtomMapping self);

/**
  Constructor for ccpnmr.NameMapping.AtomMapping
  @param  Nmap_NameMapping parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmap_AtomMapping Nmap_AtomMapping_Init(Nmap_NameMapping parent, ApiMap attrlinks);

/**
  Constructor for ccpnmr.NameMapping.AtomMapping
  @param  Nmap_NameMapping parent
  @param  char * formatName
  @param  char * name
  @returns  the new object
**/
extern Nmap_AtomMapping Nmap_AtomMapping_Init_reqd(Nmap_NameMapping parent, char * formatName, char * name);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_AtomMapping self
  @param  Impl_ApplicationData value
**/
extern void *Nmap_AtomMapping_RemoveApplicationData(Nmap_AtomMapping self, Impl_ApplicationData value);

/**
  SetAttr for ccpnmr.NameMapping.AtomMapping
  @param  Nmap_AtomMapping self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Nmap_AtomMapping_Set(Nmap_AtomMapping self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmap_AtomMapping self
  @param  Acco_AccessObject value
**/
extern void *Nmap_AtomMapping_SetAccess(Nmap_AtomMapping self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_AtomMapping self
  @param  ApiList values
**/
extern void *Nmap_AtomMapping_SetApplicationData(Nmap_AtomMapping self, ApiList values);

/**
  Set for ccpnmr.NameMapping.AtomMapping.ccpCode

ChemComp.ccpCode. If 
set, the mapping applies to all residues with this ccpCode (combined 
with other mapping specifications in this class).
  @param  Nmap_AtomMapping self
  @param  ApiString value
**/
extern void *Nmap_AtomMapping_SetCcpCode(Nmap_AtomMapping self, ApiString value);

/**
  Set for ccpnmr.NameMapping.AtomMapping.chainCode

Chain.code in the data 
model (the mapping to the chain in the external format is handled by 
ChainMapping). If set, the mapping applies to all chains with this code 
(combined with other mapping specifications in this class).
  @param  Nmap_AtomMapping self
  @param  ApiString value
**/
extern void *Nmap_AtomMapping_SetChainCode(Nmap_AtomMapping self, ApiString value);

/**
  Set for ccpnmr.NameMapping.AtomMapping.formatName

Atom name in the 
external format
  @param  Nmap_AtomMapping self
  @param  ApiString value
**/
extern void *Nmap_AtomMapping_SetFormatName(Nmap_AtomMapping self, ApiString value);

/**
  Set for ccpnmr.NameMapping.AtomMapping.molSystemCode

MolSystem.code in 
the data model. If set, the mapping applies to the molecular system with 
this code (combined with other mapping specifications in this class).
  @param  Nmap_AtomMapping self
  @param  ApiString value
**/
extern void *Nmap_AtomMapping_SetMolSystemCode(Nmap_AtomMapping self, ApiString value);

/**
  Set for ccpnmr.NameMapping.AtomMapping.moleculeName

Molecule.name in 
the data model. If set, the mapping applies to all chains that have a 
molecule with this name (combined with other mapping specifications in 
this class).
  @param  Nmap_AtomMapping self
  @param  ApiString value
**/
extern void *Nmap_AtomMapping_SetMoleculeName(Nmap_AtomMapping self, ApiString value);

/**
  Set for ccpnmr.NameMapping.AtomMapping.name

Atom.name in the data model
  @param  Nmap_AtomMapping self
  @param  ApiString value
**/
extern void *Nmap_AtomMapping_SetName(Nmap_AtomMapping self, ApiString value);

/**
  Set for ccpnmr.NameMapping.AtomMapping.seqId

Residue.seqId in the data 
model (the mapping to the chain in the external format is handled by 
ChainMapping). If set, the mapping applies to all residues with this 
seqId (combined with other mapping specifications in this class).
  @param  Nmap_AtomMapping self
  @param  ApiInteger value
**/
extern void *Nmap_AtomMapping_SetSeqId(Nmap_AtomMapping self, ApiInteger value);

/**
  Set for ccpnmr.NameMapping.AtomMapping.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Nmap_AtomMapping self
  @param  ApiInteger value
**/
extern void *Nmap_AtomMapping_SetSerial(Nmap_AtomMapping self, ApiInteger value);

#endif /* __incl__ccpnmr_api_NameMapping_AtomMapping_h__ */
