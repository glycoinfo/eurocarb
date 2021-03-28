
#ifndef __incl__ccp_api_molecule_MolSystem_MolSystemLinkEnd_h__
#define __incl__ccp_api_molecule_MolSystem_MolSystemLinkEnd_h__

#include "ccp.h"

/*
  LinkEnd, equivalent to ChemComp.LinkEnd. Part of the description of MolSystem level additional links. Note that the MolSeqLinkEnds defined in the Molecule corresponding to this Chain are also valid for the Chain, so that both need to be considered when describing the topology of the MolSystem
*/

/* package ccp.api.molecule.MolSystem */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_MolSystemLinkEnd self
  @param  Impl_ApplicationData value
**/
extern void *Mols_MolSystemLinkEnd_AddApplicationData(Mols_MolSystemLinkEnd self, Impl_ApplicationData value);

/**
  CheckAllValid for ccp.molecule.MolSystem.MolSystemLinkEnd
  @param  Mols_MolSystemLinkEnd self
  @param  ApiBoolean complete
**/
extern void *Mols_MolSystemLinkEnd_CheckAllValid(Mols_MolSystemLinkEnd self, ApiBoolean complete);

/**
  CheckValid for ccp.molecule.MolSystem.MolSystemLinkEnd
  @param  Mols_MolSystemLinkEnd self
  @param  ApiBoolean complete
**/
extern void *Mols_MolSystemLinkEnd_CheckValid(Mols_MolSystemLinkEnd self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_MolSystemLinkEnd self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Mols_MolSystemLinkEnd_FindAllApplicationData(Mols_MolSystemLinkEnd self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_MolSystemLinkEnd self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Mols_MolSystemLinkEnd_FindAllApplicationData_keyval0(Mols_MolSystemLinkEnd self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_MolSystemLinkEnd self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Mols_MolSystemLinkEnd_FindAllApplicationData_keyval1(Mols_MolSystemLinkEnd self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_MolSystemLinkEnd self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Mols_MolSystemLinkEnd_FindAllApplicationData_keyval2(Mols_MolSystemLinkEnd self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_MolSystemLinkEnd self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Mols_MolSystemLinkEnd_FindAllApplicationData_keyval3(Mols_MolSystemLinkEnd self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_MolSystemLinkEnd self
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
extern ApiList Mols_MolSystemLinkEnd_FindAllApplicationData_keyval4(Mols_MolSystemLinkEnd self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_MolSystemLinkEnd self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Mols_MolSystemLinkEnd_FindFirstApplicationData(Mols_MolSystemLinkEnd self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_MolSystemLinkEnd self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Mols_MolSystemLinkEnd_FindFirstApplicationData_keyval0(Mols_MolSystemLinkEnd self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_MolSystemLinkEnd self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Mols_MolSystemLinkEnd_FindFirstApplicationData_keyval1(Mols_MolSystemLinkEnd self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_MolSystemLinkEnd self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Mols_MolSystemLinkEnd_FindFirstApplicationData_keyval2(Mols_MolSystemLinkEnd self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_MolSystemLinkEnd self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Mols_MolSystemLinkEnd_FindFirstApplicationData_keyval3(Mols_MolSystemLinkEnd self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_MolSystemLinkEnd self
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
extern Impl_ApplicationData Mols_MolSystemLinkEnd_FindFirstApplicationData_keyval4(Mols_MolSystemLinkEnd self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.molecule.MolSystem.MolSystemLinkEnd
  @param  Mols_MolSystemLinkEnd self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Mols_MolSystemLinkEnd_Get(Mols_MolSystemLinkEnd self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Mols_MolSystemLinkEnd self
  @returns   the result
**/
extern Acco_AccessObject Mols_MolSystemLinkEnd_GetAccess(Mols_MolSystemLinkEnd self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Mols_MolSystemLinkEnd self
  @returns   the result
**/
extern Acco_AccessObject Mols_MolSystemLinkEnd_GetActiveAccess(Mols_MolSystemLinkEnd self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_MolSystemLinkEnd self
  @returns   the result
**/
extern ApiList Mols_MolSystemLinkEnd_GetApplicationData(Mols_MolSystemLinkEnd self);

/**
  GetByKey for ccp.molecule.MolSystem.MolSystemLinkEnd
  @param  Mols_MolSystemLinkEnd self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Mols_MolSystemLinkEnd Mols_MolSystemLinkEnd_GetByKey(Mols_MolSystemLinkEnd self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Mols_MolSystemLinkEnd self
  @returns   the result
**/
extern ApiString Mols_MolSystemLinkEnd_GetClassName(Mols_MolSystemLinkEnd self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Mols_MolSystemLinkEnd self
  @returns   the result
**/
extern ApiList Mols_MolSystemLinkEnd_GetFieldNames(Mols_MolSystemLinkEnd self);

/**
  GetFullKey for ccp.molecule.MolSystem.MolSystemLinkEnd
  @param  Mols_MolSystemLinkEnd self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Mols_MolSystemLinkEnd_GetFullKey(Mols_MolSystemLinkEnd self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Mols_MolSystemLinkEnd self
  @returns   the result
**/
extern ApiBoolean Mols_MolSystemLinkEnd_GetInConstructor(Mols_MolSystemLinkEnd self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Mols_MolSystemLinkEnd self
  @returns   the result
**/
extern ApiBoolean Mols_MolSystemLinkEnd_GetIsDeleted(Mols_MolSystemLinkEnd self);

/**
  Get for ccp.molecule.MolSystem.MolSystemLinkEnd.linkCode

Link Code 
identifying Link End for Residue. Part of Key for the derived link 
'linkEnd'.
  @param  Mols_MolSystemLinkEnd self
  @returns   the result
**/
extern ApiString Mols_MolSystemLinkEnd_GetLinkCode(Mols_MolSystemLinkEnd self);

/**
  getter for derived link linkEnd
  @param  Mols_MolSystemLinkEnd self
  @returns   the result
**/
extern Chem_LinkEnd Mols_MolSystemLinkEnd_GetLinkEnd(Mols_MolSystemLinkEnd self);

/**
  GetLocalKey for ccp.molecule.MolSystem.MolSystemLinkEnd
  @param  Mols_MolSystemLinkEnd self
  @returns  Local object key
**/
extern ApiObject Mols_MolSystemLinkEnd_GetLocalKey(Mols_MolSystemLinkEnd self);

/**
  Get for ccp.molecule.MolSystem.MolSystemLinkEnd.molSystemLink

Link made 
up from the two LinkEnds.
  @param  Mols_MolSystemLinkEnd self
  @returns   the result
**/
extern Mols_MolSystemLink Mols_MolSystemLinkEnd_GetMolSystemLink(Mols_MolSystemLinkEnd self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Mols_MolSystemLinkEnd self
  @returns   the result
**/
extern ApiString Mols_MolSystemLinkEnd_GetPackageName(Mols_MolSystemLinkEnd self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Mols_MolSystemLinkEnd self
  @returns   the result
**/
extern ApiString Mols_MolSystemLinkEnd_GetPackageShortName(Mols_MolSystemLinkEnd self);

/**
  Get for ccp.molecule.MolSystem.MolSystemLinkEnd.parent

link to parent 
object - synonym for residue
  @param  Mols_MolSystemLinkEnd self
  @returns   the result
**/
extern Mols_Residue Mols_MolSystemLinkEnd_GetParent(Mols_MolSystemLinkEnd self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Mols_MolSystemLinkEnd self
  @returns   the result
**/
extern ApiString Mols_MolSystemLinkEnd_GetQualifiedName(Mols_MolSystemLinkEnd self);

/**
  Get for ccp.molecule.MolSystem.MolSystemLinkEnd.residue

parent link
  @param  Mols_MolSystemLinkEnd self
  @returns   the result
**/
extern Mols_Residue Mols_MolSystemLinkEnd_GetResidue(Mols_MolSystemLinkEnd self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Mols_MolSystemLinkEnd self
  @returns   the result
**/
extern Impl_MemopsRoot Mols_MolSystemLinkEnd_GetRoot(Mols_MolSystemLinkEnd self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Mols_MolSystemLinkEnd self
  @returns   the result
**/
extern Impl_TopObject Mols_MolSystemLinkEnd_GetTopObject(Mols_MolSystemLinkEnd self);

/**
  Constructor for ccp.molecule.MolSystem.MolSystemLinkEnd
  @param  Mols_Residue parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Mols_MolSystemLinkEnd Mols_MolSystemLinkEnd_Init(Mols_Residue parent, ApiMap attrlinks);

/**
  Constructor for ccp.molecule.MolSystem.MolSystemLinkEnd
  @param  Mols_Residue parent
  @param  char * linkCode
  @returns  the new object
**/
extern Mols_MolSystemLinkEnd Mols_MolSystemLinkEnd_Init_reqd(Mols_Residue parent, char * linkCode);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_MolSystemLinkEnd self
  @param  Impl_ApplicationData value
**/
extern void *Mols_MolSystemLinkEnd_RemoveApplicationData(Mols_MolSystemLinkEnd self, Impl_ApplicationData value);

/**
  SetAttr for ccp.molecule.MolSystem.MolSystemLinkEnd
  @param  Mols_MolSystemLinkEnd self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Mols_MolSystemLinkEnd_Set(Mols_MolSystemLinkEnd self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Mols_MolSystemLinkEnd self
  @param  Acco_AccessObject value
**/
extern void *Mols_MolSystemLinkEnd_SetAccess(Mols_MolSystemLinkEnd self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_MolSystemLinkEnd self
  @param  ApiList values
**/
extern void *Mols_MolSystemLinkEnd_SetApplicationData(Mols_MolSystemLinkEnd self, ApiList values);

/**
  Set for ccp.molecule.MolSystem.MolSystemLinkEnd.linkCode

Link Code 
identifying Link End for Residue. Part of Key for the derived link 
'linkEnd'.
  @param  Mols_MolSystemLinkEnd self
  @param  ApiString value
**/
extern void *Mols_MolSystemLinkEnd_SetLinkCode(Mols_MolSystemLinkEnd self, ApiString value);

/**
  Set for ccp.molecule.MolSystem.MolSystemLinkEnd.molSystemLink

Link made 
up from the two LinkEnds.
  @param  Mols_MolSystemLinkEnd self
  @param  Mols_MolSystemLink value
**/
extern void *Mols_MolSystemLinkEnd_SetMolSystemLink(Mols_MolSystemLinkEnd self, Mols_MolSystemLink value);

#endif /* __incl__ccp_api_molecule_MolSystem_MolSystemLinkEnd_h__ */
