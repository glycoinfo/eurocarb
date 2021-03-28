
#ifndef __incl__ccp_api_molecule_MolSystem_ChainFragment_h__
#define __incl__ccp_api_molecule_MolSystem_ChainFragment_h__

#include "ccp.h"

/*
  Fragment of Chain with defined MolType for all residues. ChainFragments are generated automatically by the Chain initialiser function. See documentation of Chain.createChainFragments for a description of the normal way of dividing a Chain in ChainFragments.
*/

/* package ccp.api.molecule.MolSystem */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_ChainFragment self
  @param  Impl_ApplicationData value
**/
extern void *Mols_ChainFragment_AddApplicationData(Mols_ChainFragment self, Impl_ApplicationData value);

/**
  CheckAllValid for ccp.molecule.MolSystem.ChainFragment
  @param  Mols_ChainFragment self
  @param  ApiBoolean complete
**/
extern void *Mols_ChainFragment_CheckAllValid(Mols_ChainFragment self, ApiBoolean complete);

/**
  CheckValid for ccp.molecule.MolSystem.ChainFragment
  @param  Mols_ChainFragment self
  @param  ApiBoolean complete
**/
extern void *Mols_ChainFragment_CheckValid(Mols_ChainFragment self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_ChainFragment self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Mols_ChainFragment_FindAllApplicationData(Mols_ChainFragment self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_ChainFragment self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Mols_ChainFragment_FindAllApplicationData_keyval0(Mols_ChainFragment self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_ChainFragment self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Mols_ChainFragment_FindAllApplicationData_keyval1(Mols_ChainFragment self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_ChainFragment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Mols_ChainFragment_FindAllApplicationData_keyval2(Mols_ChainFragment self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_ChainFragment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Mols_ChainFragment_FindAllApplicationData_keyval3(Mols_ChainFragment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_ChainFragment self
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
extern ApiList Mols_ChainFragment_FindAllApplicationData_keyval4(Mols_ChainFragment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.molecule.MolSystem.ChainFragment.residues

residues 
making up ChainFragment
  @param  Mols_ChainFragment self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Mols_ChainFragment_FindAllResidues(Mols_ChainFragment self, ApiMap conditions);

/**
  FindAll for ccp.molecule.MolSystem.ChainFragment.residues

residues 
making up ChainFragment
  @param  Mols_ChainFragment self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Mols_ChainFragment_FindAllResidues_keyval0(Mols_ChainFragment self);

/**
  FindAll for ccp.molecule.MolSystem.ChainFragment.residues

residues 
making up ChainFragment
  @param  Mols_ChainFragment self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Mols_ChainFragment_FindAllResidues_keyval1(Mols_ChainFragment self, char * key, ApiObject value);

/**
  FindAll for ccp.molecule.MolSystem.ChainFragment.residues

residues 
making up ChainFragment
  @param  Mols_ChainFragment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Mols_ChainFragment_FindAllResidues_keyval2(Mols_ChainFragment self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.molecule.MolSystem.ChainFragment.residues

residues 
making up ChainFragment
  @param  Mols_ChainFragment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Mols_ChainFragment_FindAllResidues_keyval3(Mols_ChainFragment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.molecule.MolSystem.ChainFragment.residues

residues 
making up ChainFragment
  @param  Mols_ChainFragment self
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
extern ApiList Mols_ChainFragment_FindAllResidues_keyval4(Mols_ChainFragment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_ChainFragment self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Mols_ChainFragment_FindFirstApplicationData(Mols_ChainFragment self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_ChainFragment self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Mols_ChainFragment_FindFirstApplicationData_keyval0(Mols_ChainFragment self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_ChainFragment self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Mols_ChainFragment_FindFirstApplicationData_keyval1(Mols_ChainFragment self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_ChainFragment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Mols_ChainFragment_FindFirstApplicationData_keyval2(Mols_ChainFragment self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_ChainFragment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Mols_ChainFragment_FindFirstApplicationData_keyval3(Mols_ChainFragment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_ChainFragment self
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
extern Impl_ApplicationData Mols_ChainFragment_FindFirstApplicationData_keyval4(Mols_ChainFragment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.molecule.MolSystem.ChainFragment.residues

residues 
making up ChainFragment
  @param  Mols_ChainFragment self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Mols_Residue Mols_ChainFragment_FindFirstResidue(Mols_ChainFragment self, ApiMap conditions);

/**
  FindFirst for ccp.molecule.MolSystem.ChainFragment.residues

residues 
making up ChainFragment
  @param  Mols_ChainFragment self
  @returns  the first value that satisfies the conditions 
**/
extern Mols_Residue Mols_ChainFragment_FindFirstResidue_keyval0(Mols_ChainFragment self);

/**
  FindFirst for ccp.molecule.MolSystem.ChainFragment.residues

residues 
making up ChainFragment
  @param  Mols_ChainFragment self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Mols_Residue Mols_ChainFragment_FindFirstResidue_keyval1(Mols_ChainFragment self, char * key, ApiObject value);

/**
  FindFirst for ccp.molecule.MolSystem.ChainFragment.residues

residues 
making up ChainFragment
  @param  Mols_ChainFragment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Mols_Residue Mols_ChainFragment_FindFirstResidue_keyval2(Mols_ChainFragment self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.molecule.MolSystem.ChainFragment.residues

residues 
making up ChainFragment
  @param  Mols_ChainFragment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Mols_Residue Mols_ChainFragment_FindFirstResidue_keyval3(Mols_ChainFragment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.molecule.MolSystem.ChainFragment.residues

residues 
making up ChainFragment
  @param  Mols_ChainFragment self
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
extern Mols_Residue Mols_ChainFragment_FindFirstResidue_keyval4(Mols_ChainFragment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.molecule.MolSystem.ChainFragment
  @param  Mols_ChainFragment self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Mols_ChainFragment_Get(Mols_ChainFragment self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Mols_ChainFragment self
  @returns   the result
**/
extern Acco_AccessObject Mols_ChainFragment_GetAccess(Mols_ChainFragment self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Mols_ChainFragment self
  @returns   the result
**/
extern Acco_AccessObject Mols_ChainFragment_GetActiveAccess(Mols_ChainFragment self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_ChainFragment self
  @returns   the result
**/
extern ApiList Mols_ChainFragment_GetApplicationData(Mols_ChainFragment self);

/**
  GetByKey for ccp.molecule.MolSystem.ChainFragment
  @param  Mols_ChainFragment self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Mols_ChainFragment Mols_ChainFragment_GetByKey(Mols_ChainFragment self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for ccp.molecule.MolSystem.ChainFragment.chain

parent link
  @param  Mols_ChainFragment self
  @returns   the result
**/
extern Mols_Chain Mols_ChainFragment_GetChain(Mols_ChainFragment self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Mols_ChainFragment self
  @returns   the result
**/
extern ApiString Mols_ChainFragment_GetClassName(Mols_ChainFragment self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Mols_ChainFragment self
  @returns   the result
**/
extern ApiList Mols_ChainFragment_GetFieldNames(Mols_ChainFragment self);

/**
  GetFullKey for ccp.molecule.MolSystem.ChainFragment
  @param  Mols_ChainFragment self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Mols_ChainFragment_GetFullKey(Mols_ChainFragment self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Mols_ChainFragment self
  @returns   the result
**/
extern ApiBoolean Mols_ChainFragment_GetInConstructor(Mols_ChainFragment self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Mols_ChainFragment self
  @returns   the result
**/
extern ApiBoolean Mols_ChainFragment_GetIsDeleted(Mols_ChainFragment self);

/**
  Get for ccp.molecule.MolSystem.ChainFragment.isLinearPolymer

Is 
ChainFragment a linear polymer? Implies that each residue, in the order 
given in the residues link, is linked to the next one by a link of 
linear polymer type (linkEnds 'next','prev').
  @param  Mols_ChainFragment self
  @returns   the result
**/
extern ApiBoolean Mols_ChainFragment_GetIsLinearPolymer(Mols_ChainFragment self);

/**
  GetLocalKey for ccp.molecule.MolSystem.ChainFragment
  @param  Mols_ChainFragment self
  @returns  Local object key
**/
extern ApiObject Mols_ChainFragment_GetLocalKey(Mols_ChainFragment self);

/**
  Get for ccp.molecule.MolSystem.ChainFragment.molType

molType of 
residues in ChainFragment. Must apply to all residues
  @param  Mols_ChainFragment self
  @returns   the result
**/
extern ApiString Mols_ChainFragment_GetMolType(Mols_ChainFragment self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Mols_ChainFragment self
  @returns   the result
**/
extern ApiString Mols_ChainFragment_GetPackageName(Mols_ChainFragment self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Mols_ChainFragment self
  @returns   the result
**/
extern ApiString Mols_ChainFragment_GetPackageShortName(Mols_ChainFragment self);

/**
  Get for ccp.molecule.MolSystem.ChainFragment.parent

link to parent 
object - synonym for chain
  @param  Mols_ChainFragment self
  @returns   the result
**/
extern Mols_Chain Mols_ChainFragment_GetParent(Mols_ChainFragment self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Mols_ChainFragment self
  @returns   the result
**/
extern ApiString Mols_ChainFragment_GetQualifiedName(Mols_ChainFragment self);

/**
  Get for ccp.molecule.MolSystem.ChainFragment.residues

residues making 
up ChainFragment
  @param  Mols_ChainFragment self
  @returns   the result
**/
extern ApiList Mols_ChainFragment_GetResidues(Mols_ChainFragment self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Mols_ChainFragment self
  @returns   the result
**/
extern Impl_MemopsRoot Mols_ChainFragment_GetRoot(Mols_ChainFragment self);

/**
  Get for ccp.molecule.MolSystem.ChainFragment.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Mols_ChainFragment self
  @returns   the result
**/
extern ApiInteger Mols_ChainFragment_GetSerial(Mols_ChainFragment self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Mols_ChainFragment self
  @returns   the result
**/
extern Impl_TopObject Mols_ChainFragment_GetTopObject(Mols_ChainFragment self);

/**
  Constructor for ccp.molecule.MolSystem.ChainFragment
  @param  Mols_Chain parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Mols_ChainFragment Mols_ChainFragment_Init(Mols_Chain parent, ApiMap attrlinks);

/**
  Constructor for ccp.molecule.MolSystem.ChainFragment
  @param  Mols_Chain parent
  @param  int isLinearPolymer
  @param  char * molType
  @returns  the new object
**/
extern Mols_ChainFragment Mols_ChainFragment_Init_reqd(Mols_Chain parent, int isLinearPolymer, char * molType);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_ChainFragment self
  @param  Impl_ApplicationData value
**/
extern void *Mols_ChainFragment_RemoveApplicationData(Mols_ChainFragment self, Impl_ApplicationData value);

/**
  SetAttr for ccp.molecule.MolSystem.ChainFragment
  @param  Mols_ChainFragment self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Mols_ChainFragment_Set(Mols_ChainFragment self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Mols_ChainFragment self
  @param  Acco_AccessObject value
**/
extern void *Mols_ChainFragment_SetAccess(Mols_ChainFragment self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_ChainFragment self
  @param  ApiList values
**/
extern void *Mols_ChainFragment_SetApplicationData(Mols_ChainFragment self, ApiList values);

/**
  Set for ccp.molecule.MolSystem.ChainFragment.isLinearPolymer

Is 
ChainFragment a linear polymer? Implies that each residue, in the order 
given in the residues link, is linked to the next one by a link of 
linear polymer type (linkEnds 'next','prev').
  @param  Mols_ChainFragment self
  @param  ApiBoolean value
**/
extern void *Mols_ChainFragment_SetIsLinearPolymer(Mols_ChainFragment self, ApiBoolean value);

/**
  Set for ccp.molecule.MolSystem.ChainFragment.molType

molType of 
residues in ChainFragment. Must apply to all residues
  @param  Mols_ChainFragment self
  @param  ApiString value
**/
extern void *Mols_ChainFragment_SetMolType(Mols_ChainFragment self, ApiString value);

/**
  Set for ccp.molecule.MolSystem.ChainFragment.residues

residues making 
up ChainFragment
  @param  Mols_ChainFragment self
  @param  ApiList values
**/
extern void *Mols_ChainFragment_SetResidues(Mols_ChainFragment self, ApiList values);

/**
  Set for ccp.molecule.MolSystem.ChainFragment.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Mols_ChainFragment self
  @param  ApiInteger value
**/
extern void *Mols_ChainFragment_SetSerial(Mols_ChainFragment self, ApiInteger value);

#endif /* __incl__ccp_api_molecule_MolSystem_ChainFragment_h__ */
