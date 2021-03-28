
#ifndef __incl__molsim_api_Symmetry_Segment_h__
#define __incl__molsim_api_Symmetry_Segment_h__

#include "ccp.h"

/*
  Contiguous stretch of residues that enters into symmetry operation
*/

/* package molsim.api.Symmetry */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Symm_Segment self
  @param  Impl_ApplicationData value
**/
extern void *Symm_Segment_AddApplicationData(Symm_Segment self, Impl_ApplicationData value);

/**
  CheckAllValid for molsim.Symmetry.Segment
  @param  Symm_Segment self
  @param  ApiBoolean complete
**/
extern void *Symm_Segment_CheckAllValid(Symm_Segment self, ApiBoolean complete);

/**
  CheckValid for molsim.Symmetry.Segment
  @param  Symm_Segment self
  @param  ApiBoolean complete
**/
extern void *Symm_Segment_CheckValid(Symm_Segment self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Symm_Segment self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Symm_Segment_FindAllApplicationData(Symm_Segment self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Symm_Segment self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Symm_Segment_FindAllApplicationData_keyval0(Symm_Segment self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Symm_Segment self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Symm_Segment_FindAllApplicationData_keyval1(Symm_Segment self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Symm_Segment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Symm_Segment_FindAllApplicationData_keyval2(Symm_Segment self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Symm_Segment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Symm_Segment_FindAllApplicationData_keyval3(Symm_Segment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Symm_Segment self
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
extern ApiList Symm_Segment_FindAllApplicationData_keyval4(Symm_Segment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for molsim.Symmetry.Segment.residues

Residues that make up 
segment
  @param  Symm_Segment self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Symm_Segment_FindAllResidues(Symm_Segment self, ApiMap conditions);

/**
  FindAll for molsim.Symmetry.Segment.residues

Residues that make up 
segment
  @param  Symm_Segment self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Symm_Segment_FindAllResidues_keyval0(Symm_Segment self);

/**
  FindAll for molsim.Symmetry.Segment.residues

Residues that make up 
segment
  @param  Symm_Segment self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Symm_Segment_FindAllResidues_keyval1(Symm_Segment self, char * key, ApiObject value);

/**
  FindAll for molsim.Symmetry.Segment.residues

Residues that make up 
segment
  @param  Symm_Segment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Symm_Segment_FindAllResidues_keyval2(Symm_Segment self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for molsim.Symmetry.Segment.residues

Residues that make up 
segment
  @param  Symm_Segment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Symm_Segment_FindAllResidues_keyval3(Symm_Segment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for molsim.Symmetry.Segment.residues

Residues that make up 
segment
  @param  Symm_Segment self
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
extern ApiList Symm_Segment_FindAllResidues_keyval4(Symm_Segment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Symm_Segment self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Symm_Segment_FindFirstApplicationData(Symm_Segment self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Symm_Segment self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Symm_Segment_FindFirstApplicationData_keyval0(Symm_Segment self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Symm_Segment self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Symm_Segment_FindFirstApplicationData_keyval1(Symm_Segment self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Symm_Segment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Symm_Segment_FindFirstApplicationData_keyval2(Symm_Segment self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Symm_Segment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Symm_Segment_FindFirstApplicationData_keyval3(Symm_Segment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Symm_Segment self
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
extern Impl_ApplicationData Symm_Segment_FindFirstApplicationData_keyval4(Symm_Segment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for molsim.Symmetry.Segment.residues

Residues that make up 
segment
  @param  Symm_Segment self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Mols_Residue Symm_Segment_FindFirstResidue(Symm_Segment self, ApiMap conditions);

/**
  FindFirst for molsim.Symmetry.Segment.residues

Residues that make up 
segment
  @param  Symm_Segment self
  @returns  the first value that satisfies the conditions 
**/
extern Mols_Residue Symm_Segment_FindFirstResidue_keyval0(Symm_Segment self);

/**
  FindFirst for molsim.Symmetry.Segment.residues

Residues that make up 
segment
  @param  Symm_Segment self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Mols_Residue Symm_Segment_FindFirstResidue_keyval1(Symm_Segment self, char * key, ApiObject value);

/**
  FindFirst for molsim.Symmetry.Segment.residues

Residues that make up 
segment
  @param  Symm_Segment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Mols_Residue Symm_Segment_FindFirstResidue_keyval2(Symm_Segment self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for molsim.Symmetry.Segment.residues

Residues that make up 
segment
  @param  Symm_Segment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Mols_Residue Symm_Segment_FindFirstResidue_keyval3(Symm_Segment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for molsim.Symmetry.Segment.residues

Residues that make up 
segment
  @param  Symm_Segment self
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
extern Mols_Residue Symm_Segment_FindFirstResidue_keyval4(Symm_Segment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for molsim.Symmetry.Segment
  @param  Symm_Segment self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Symm_Segment_Get(Symm_Segment self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Symm_Segment self
  @returns   the result
**/
extern Acco_AccessObject Symm_Segment_GetAccess(Symm_Segment self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Symm_Segment self
  @returns   the result
**/
extern Acco_AccessObject Symm_Segment_GetActiveAccess(Symm_Segment self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Symm_Segment self
  @returns   the result
**/
extern ApiList Symm_Segment_GetApplicationData(Symm_Segment self);

/**
  GetByKey for molsim.Symmetry.Segment
  @param  Symm_Segment self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Symm_Segment Symm_Segment_GetByKey(Symm_Segment self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for molsim.Symmetry.Segment.chainCode

chainCode for chain that 
segment belongs to. Part of class key
  @param  Symm_Segment self
  @returns   the result
**/
extern ApiString Symm_Segment_GetChainCode(Symm_Segment self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Symm_Segment self
  @returns   the result
**/
extern ApiString Symm_Segment_GetClassName(Symm_Segment self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Symm_Segment self
  @returns   the result
**/
extern ApiList Symm_Segment_GetFieldNames(Symm_Segment self);

/**
  Get for molsim.Symmetry.Segment.firstSeqId

seqId of first residue in 
segment. Part of class key
  @param  Symm_Segment self
  @returns   the result
**/
extern ApiInteger Symm_Segment_GetFirstSeqId(Symm_Segment self);

/**
  GetFullKey for molsim.Symmetry.Segment
  @param  Symm_Segment self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Symm_Segment_GetFullKey(Symm_Segment self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Symm_Segment self
  @returns   the result
**/
extern ApiBoolean Symm_Segment_GetInConstructor(Symm_Segment self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Symm_Segment self
  @returns   the result
**/
extern ApiBoolean Symm_Segment_GetIsDeleted(Symm_Segment self);

/**
  GetLocalKey for molsim.Symmetry.Segment
  @param  Symm_Segment self
  @returns  Local object key
**/
extern ApiObject Symm_Segment_GetLocalKey(Symm_Segment self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Symm_Segment self
  @returns   the result
**/
extern ApiString Symm_Segment_GetPackageName(Symm_Segment self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Symm_Segment self
  @returns   the result
**/
extern ApiString Symm_Segment_GetPackageShortName(Symm_Segment self);

/**
  Get for molsim.Symmetry.Segment.parent

link to parent object - synonym 
for symmetry
  @param  Symm_Segment self
  @returns   the result
**/
extern Symm_Symmetry Symm_Segment_GetParent(Symm_Segment self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Symm_Segment self
  @returns   the result
**/
extern ApiString Symm_Segment_GetQualifiedName(Symm_Segment self);

/**
  getter for derived link residues
  @param  Symm_Segment self
  @returns   the result
**/
extern ApiList Symm_Segment_GetResidues(Symm_Segment self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Symm_Segment self
  @returns   the result
**/
extern Impl_MemopsRoot Symm_Segment_GetRoot(Symm_Segment self);

/**
  Get for molsim.Symmetry.Segment.symmetry

parent link
  @param  Symm_Segment self
  @returns   the result
**/
extern Symm_Symmetry Symm_Segment_GetSymmetry(Symm_Segment self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Symm_Segment self
  @returns   the result
**/
extern Impl_TopObject Symm_Segment_GetTopObject(Symm_Segment self);

/**
  Constructor for molsim.Symmetry.Segment
  @param  Symm_Symmetry parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Symm_Segment Symm_Segment_Init(Symm_Symmetry parent, ApiMap attrlinks);

/**
  Constructor for molsim.Symmetry.Segment
  @param  Symm_Symmetry parent
  @param  char * chainCode
  @param  ApiInteger firstSeqId
  @returns  the new object
**/
extern Symm_Segment Symm_Segment_Init_reqd(Symm_Symmetry parent, char * chainCode, ApiInteger firstSeqId);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Symm_Segment self
  @param  Impl_ApplicationData value
**/
extern void *Symm_Segment_RemoveApplicationData(Symm_Segment self, Impl_ApplicationData value);

/**
  SetAttr for molsim.Symmetry.Segment
  @param  Symm_Segment self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Symm_Segment_Set(Symm_Segment self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Symm_Segment self
  @param  Acco_AccessObject value
**/
extern void *Symm_Segment_SetAccess(Symm_Segment self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Symm_Segment self
  @param  ApiList values
**/
extern void *Symm_Segment_SetApplicationData(Symm_Segment self, ApiList values);

/**
  Set for molsim.Symmetry.Segment.chainCode

chainCode for chain that 
segment belongs to. Part of class key
  @param  Symm_Segment self
  @param  ApiString value
**/
extern void *Symm_Segment_SetChainCode(Symm_Segment self, ApiString value);

/**
  Set for molsim.Symmetry.Segment.firstSeqId

seqId of first residue in 
segment. Part of class key
  @param  Symm_Segment self
  @param  ApiInteger value
**/
extern void *Symm_Segment_SetFirstSeqId(Symm_Segment self, ApiInteger value);

#endif /* __incl__molsim_api_Symmetry_Segment_h__ */
