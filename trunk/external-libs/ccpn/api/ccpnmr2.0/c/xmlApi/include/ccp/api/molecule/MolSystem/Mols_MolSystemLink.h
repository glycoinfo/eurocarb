
#ifndef __incl__ccp_api_molecule_MolSystem_MolSystemLink_h__
#define __incl__ccp_api_molecule_MolSystem_MolSystemLink_h__

#include "ccp.h"

/*
  Link between two ChemComps (bulding blocks) not already described in the Molecule description. Intended for intermolecular links, additional crosslinks, or links whose location was not known precisely when describing the Molecule. Disulfide bonds would be a good example for either category. Part of the description of MolSystem level additional links.
*/

/* package ccp.api.molecule.MolSystem */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_MolSystemLink self
  @param  Impl_ApplicationData value
**/
extern void *Mols_MolSystemLink_AddApplicationData(Mols_MolSystemLink self, Impl_ApplicationData value);

/**
  CheckAllValid for ccp.molecule.MolSystem.MolSystemLink
  @param  Mols_MolSystemLink self
  @param  ApiBoolean complete
**/
extern void *Mols_MolSystemLink_CheckAllValid(Mols_MolSystemLink self, ApiBoolean complete);

/**
  CheckValid for ccp.molecule.MolSystem.MolSystemLink
  @param  Mols_MolSystemLink self
  @param  ApiBoolean complete
**/
extern void *Mols_MolSystemLink_CheckValid(Mols_MolSystemLink self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_MolSystemLink self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Mols_MolSystemLink_FindAllApplicationData(Mols_MolSystemLink self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_MolSystemLink self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Mols_MolSystemLink_FindAllApplicationData_keyval0(Mols_MolSystemLink self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_MolSystemLink self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Mols_MolSystemLink_FindAllApplicationData_keyval1(Mols_MolSystemLink self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_MolSystemLink self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Mols_MolSystemLink_FindAllApplicationData_keyval2(Mols_MolSystemLink self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_MolSystemLink self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Mols_MolSystemLink_FindAllApplicationData_keyval3(Mols_MolSystemLink self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_MolSystemLink self
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
extern ApiList Mols_MolSystemLink_FindAllApplicationData_keyval4(Mols_MolSystemLink self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.molecule.MolSystem.MolSystemLink.molSystemLinkEnds

LinkEnds that 
make up the MolSystemLink
  @param  Mols_MolSystemLink self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_MolSystemLink_FindAllMolSystemLinkEnds(Mols_MolSystemLink self, ApiMap conditions);

/**
  FindAll for 
ccp.molecule.MolSystem.MolSystemLink.molSystemLinkEnds

LinkEnds that 
make up the MolSystemLink
  @param  Mols_MolSystemLink self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_MolSystemLink_FindAllMolSystemLinkEnds_keyval0(Mols_MolSystemLink self);

/**
  FindAll for 
ccp.molecule.MolSystem.MolSystemLink.molSystemLinkEnds

LinkEnds that 
make up the MolSystemLink
  @param  Mols_MolSystemLink self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_MolSystemLink_FindAllMolSystemLinkEnds_keyval1(Mols_MolSystemLink self, char * key, ApiObject value);

/**
  FindAll for 
ccp.molecule.MolSystem.MolSystemLink.molSystemLinkEnds

LinkEnds that 
make up the MolSystemLink
  @param  Mols_MolSystemLink self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_MolSystemLink_FindAllMolSystemLinkEnds_keyval2(Mols_MolSystemLink self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.molecule.MolSystem.MolSystemLink.molSystemLinkEnds

LinkEnds that 
make up the MolSystemLink
  @param  Mols_MolSystemLink self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_MolSystemLink_FindAllMolSystemLinkEnds_keyval3(Mols_MolSystemLink self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.molecule.MolSystem.MolSystemLink.molSystemLinkEnds

LinkEnds that 
make up the MolSystemLink
  @param  Mols_MolSystemLink self
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
extern ApiSet Mols_MolSystemLink_FindAllMolSystemLinkEnds_keyval4(Mols_MolSystemLink self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_MolSystemLink self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Mols_MolSystemLink_FindFirstApplicationData(Mols_MolSystemLink self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_MolSystemLink self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Mols_MolSystemLink_FindFirstApplicationData_keyval0(Mols_MolSystemLink self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_MolSystemLink self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Mols_MolSystemLink_FindFirstApplicationData_keyval1(Mols_MolSystemLink self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_MolSystemLink self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Mols_MolSystemLink_FindFirstApplicationData_keyval2(Mols_MolSystemLink self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_MolSystemLink self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Mols_MolSystemLink_FindFirstApplicationData_keyval3(Mols_MolSystemLink self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_MolSystemLink self
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
extern Impl_ApplicationData Mols_MolSystemLink_FindFirstApplicationData_keyval4(Mols_MolSystemLink self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.molecule.MolSystem.MolSystemLink.molSystemLinkEnds

LinkEnds that 
make up the MolSystemLink
  @param  Mols_MolSystemLink self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Mols_MolSystemLinkEnd Mols_MolSystemLink_FindFirstMolSystemLinkEnd(Mols_MolSystemLink self, ApiMap conditions);

/**
  FindFirst for 
ccp.molecule.MolSystem.MolSystemLink.molSystemLinkEnds

LinkEnds that 
make up the MolSystemLink
  @param  Mols_MolSystemLink self
  @returns  the first value that satisfies the conditions 
**/
extern Mols_MolSystemLinkEnd Mols_MolSystemLink_FindFirstMolSystemLinkEnd_keyval0(Mols_MolSystemLink self);

/**
  FindFirst for 
ccp.molecule.MolSystem.MolSystemLink.molSystemLinkEnds

LinkEnds that 
make up the MolSystemLink
  @param  Mols_MolSystemLink self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Mols_MolSystemLinkEnd Mols_MolSystemLink_FindFirstMolSystemLinkEnd_keyval1(Mols_MolSystemLink self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.molecule.MolSystem.MolSystemLink.molSystemLinkEnds

LinkEnds that 
make up the MolSystemLink
  @param  Mols_MolSystemLink self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Mols_MolSystemLinkEnd Mols_MolSystemLink_FindFirstMolSystemLinkEnd_keyval2(Mols_MolSystemLink self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.molecule.MolSystem.MolSystemLink.molSystemLinkEnds

LinkEnds that 
make up the MolSystemLink
  @param  Mols_MolSystemLink self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Mols_MolSystemLinkEnd Mols_MolSystemLink_FindFirstMolSystemLinkEnd_keyval3(Mols_MolSystemLink self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.molecule.MolSystem.MolSystemLink.molSystemLinkEnds

LinkEnds that 
make up the MolSystemLink
  @param  Mols_MolSystemLink self
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
extern Mols_MolSystemLinkEnd Mols_MolSystemLink_FindFirstMolSystemLinkEnd_keyval4(Mols_MolSystemLink self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.molecule.MolSystem.MolSystemLink
  @param  Mols_MolSystemLink self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Mols_MolSystemLink_Get(Mols_MolSystemLink self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Mols_MolSystemLink self
  @returns   the result
**/
extern Acco_AccessObject Mols_MolSystemLink_GetAccess(Mols_MolSystemLink self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_MolSystemLink self
  @returns   the result
**/
extern ApiList Mols_MolSystemLink_GetApplicationData(Mols_MolSystemLink self);

/**
  GetByKey for ccp.molecule.MolSystem.MolSystemLink
  @param  Mols_MolSystemLink self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Mols_MolSystemLink Mols_MolSystemLink_GetByKey(Mols_MolSystemLink self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Mols_MolSystemLink self
  @returns   the result
**/
extern ApiString Mols_MolSystemLink_GetClassName(Mols_MolSystemLink self);

/**
  Get for ccp.molecule.MolSystem.MolSystemLink.dihedralAngle

Approximate 
value in degrees of dihedral angle formed across bond (as defined in the 
ChemComp Link definitions). The value is not precise but serves to 
indicate the conformation of rotationally hindered bonds.
  @param  Mols_MolSystemLink self
  @returns   the result
**/
extern ApiInteger Mols_MolSystemLink_GetDihedralAngle(Mols_MolSystemLink self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Mols_MolSystemLink self
  @returns   the result
**/
extern ApiList Mols_MolSystemLink_GetFieldNames(Mols_MolSystemLink self);

/**
  GetFullKey for ccp.molecule.MolSystem.MolSystemLink
  @param  Mols_MolSystemLink self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Mols_MolSystemLink_GetFullKey(Mols_MolSystemLink self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Mols_MolSystemLink self
  @returns   the result
**/
extern ApiBoolean Mols_MolSystemLink_GetInConstructor(Mols_MolSystemLink self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Mols_MolSystemLink self
  @returns   the result
**/
extern ApiBoolean Mols_MolSystemLink_GetIsDeleted(Mols_MolSystemLink self);

/**
  GetLocalKey for ccp.molecule.MolSystem.MolSystemLink
  @param  Mols_MolSystemLink self
  @returns  Local object key
**/
extern ApiObject Mols_MolSystemLink_GetLocalKey(Mols_MolSystemLink self);

/**
  Get for ccp.molecule.MolSystem.MolSystemLink.molSystem

parent link
  @param  Mols_MolSystemLink self
  @returns   the result
**/
extern Mols_MolSystem Mols_MolSystemLink_GetMolSystem(Mols_MolSystemLink self);

/**
  Get for ccp.molecule.MolSystem.MolSystemLink.molSystemLinkEnds

LinkEnds 
that make up the MolSystemLink
  @param  Mols_MolSystemLink self
  @returns   the result
**/
extern ApiSet Mols_MolSystemLink_GetMolSystemLinkEnds(Mols_MolSystemLink self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Mols_MolSystemLink self
  @returns   the result
**/
extern ApiString Mols_MolSystemLink_GetPackageName(Mols_MolSystemLink self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Mols_MolSystemLink self
  @returns   the result
**/
extern ApiString Mols_MolSystemLink_GetPackageShortName(Mols_MolSystemLink self);

/**
  Get for ccp.molecule.MolSystem.MolSystemLink.parent

link to parent 
object - synonym for molSystem
  @param  Mols_MolSystemLink self
  @returns   the result
**/
extern Mols_MolSystem Mols_MolSystemLink_GetParent(Mols_MolSystemLink self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Mols_MolSystemLink self
  @returns   the result
**/
extern ApiString Mols_MolSystemLink_GetQualifiedName(Mols_MolSystemLink self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Mols_MolSystemLink self
  @returns   the result
**/
extern Impl_MemopsRoot Mols_MolSystemLink_GetRoot(Mols_MolSystemLink self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Mols_MolSystemLink self
  @returns   the result
**/
extern Impl_TopObject Mols_MolSystemLink_GetTopObject(Mols_MolSystemLink self);

/**
  Constructor for ccp.molecule.MolSystem.MolSystemLink
  @param  Mols_MolSystem parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Mols_MolSystemLink Mols_MolSystemLink_Init(Mols_MolSystem parent, ApiMap attrlinks);

/**
  Constructor for ccp.molecule.MolSystem.MolSystemLink
  @param  Mols_MolSystem parent
  @param  ApiSet molSystemLinkEnds
  @returns  the new object
**/
extern Mols_MolSystemLink Mols_MolSystemLink_Init_reqd(Mols_MolSystem parent, ApiSet molSystemLinkEnds);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_MolSystemLink self
  @param  Impl_ApplicationData value
**/
extern void *Mols_MolSystemLink_RemoveApplicationData(Mols_MolSystemLink self, Impl_ApplicationData value);

/**
  SetAttr for ccp.molecule.MolSystem.MolSystemLink
  @param  Mols_MolSystemLink self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Mols_MolSystemLink_Set(Mols_MolSystemLink self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Mols_MolSystemLink self
  @param  Acco_AccessObject value
**/
extern void *Mols_MolSystemLink_SetAccess(Mols_MolSystemLink self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_MolSystemLink self
  @param  ApiList values
**/
extern void *Mols_MolSystemLink_SetApplicationData(Mols_MolSystemLink self, ApiList values);

/**
  Set for ccp.molecule.MolSystem.MolSystemLink.dihedralAngle

Approximate 
value in degrees of dihedral angle formed across bond (as defined in the 
ChemComp Link definitions). The value is not precise but serves to 
indicate the conformation of rotationally hindered bonds.
  @param  Mols_MolSystemLink self
  @param  ApiInteger value
**/
extern void *Mols_MolSystemLink_SetDihedralAngle(Mols_MolSystemLink self, ApiInteger value);

/**
  Set for ccp.molecule.MolSystem.MolSystemLink.molSystemLinkEnds

LinkEnds 
that make up the MolSystemLink
  @param  Mols_MolSystemLink self
  @param  ApiSet values
**/
extern void *Mols_MolSystemLink_SetMolSystemLinkEnds(Mols_MolSystemLink self, ApiSet values);

/**
  Sorted for 
ccp.molecule.MolSystem.MolSystemLink.molSystemLinkEnds

LinkEnds that 
make up the MolSystemLink
  @param  Mols_MolSystemLink self
  @returns   the result
**/
extern ApiList Mols_MolSystemLink_SortedMolSystemLinkEnds(Mols_MolSystemLink self);

#endif /* __incl__ccp_api_molecule_MolSystem_MolSystemLink_h__ */
