
#ifndef __incl__ccpnmr_api_Analysis_ResidueMapping_h__
#define __incl__ccpnmr_api_Analysis_ResidueMapping_h__

#include "ccp.h"

/*
  ResidueMapping - serves to organise AtomSetMappings
*/

/* package ccpnmr.api.Analysis */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_ResidueMapping self
  @param  Impl_ApplicationData value
**/
extern void *Anal_ResidueMapping_AddApplicationData(Anal_ResidueMapping self, Impl_ApplicationData value);

/**
  CheckAllValid for ccpnmr.Analysis.ResidueMapping
  @param  Anal_ResidueMapping self
  @param  ApiBoolean complete
**/
extern void *Anal_ResidueMapping_CheckAllValid(Anal_ResidueMapping self, ApiBoolean complete);

/**
  CheckValid for ccpnmr.Analysis.ResidueMapping
  @param  Anal_ResidueMapping self
  @param  ApiBoolean complete
**/
extern void *Anal_ResidueMapping_CheckValid(Anal_ResidueMapping self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_ResidueMapping self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_ResidueMapping_FindAllApplicationData(Anal_ResidueMapping self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_ResidueMapping self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_ResidueMapping_FindAllApplicationData_keyval0(Anal_ResidueMapping self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_ResidueMapping self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_ResidueMapping_FindAllApplicationData_keyval1(Anal_ResidueMapping self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_ResidueMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_ResidueMapping_FindAllApplicationData_keyval2(Anal_ResidueMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_ResidueMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_ResidueMapping_FindAllApplicationData_keyval3(Anal_ResidueMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_ResidueMapping self
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
extern ApiList Anal_ResidueMapping_FindAllApplicationData_keyval4(Anal_ResidueMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccpnmr.Analysis.ResidueMapping.atomSetMappings

child link 
to class AtomSetMapping
  @param  Anal_ResidueMapping self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_ResidueMapping_FindAllAtomSetMappings(Anal_ResidueMapping self, ApiMap conditions);

/**
  FindAll for ccpnmr.Analysis.ResidueMapping.atomSetMappings

child link 
to class AtomSetMapping
  @param  Anal_ResidueMapping self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_ResidueMapping_FindAllAtomSetMappings_keyval0(Anal_ResidueMapping self);

/**
  FindAll for ccpnmr.Analysis.ResidueMapping.atomSetMappings

child link 
to class AtomSetMapping
  @param  Anal_ResidueMapping self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_ResidueMapping_FindAllAtomSetMappings_keyval1(Anal_ResidueMapping self, char * key, ApiObject value);

/**
  FindAll for ccpnmr.Analysis.ResidueMapping.atomSetMappings

child link 
to class AtomSetMapping
  @param  Anal_ResidueMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_ResidueMapping_FindAllAtomSetMappings_keyval2(Anal_ResidueMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccpnmr.Analysis.ResidueMapping.atomSetMappings

child link 
to class AtomSetMapping
  @param  Anal_ResidueMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_ResidueMapping_FindAllAtomSetMappings_keyval3(Anal_ResidueMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccpnmr.Analysis.ResidueMapping.atomSetMappings

child link 
to class AtomSetMapping
  @param  Anal_ResidueMapping self
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
extern ApiSet Anal_ResidueMapping_FindAllAtomSetMappings_keyval4(Anal_ResidueMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_ResidueMapping self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_ResidueMapping_FindFirstApplicationData(Anal_ResidueMapping self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_ResidueMapping self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_ResidueMapping_FindFirstApplicationData_keyval0(Anal_ResidueMapping self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_ResidueMapping self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_ResidueMapping_FindFirstApplicationData_keyval1(Anal_ResidueMapping self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_ResidueMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_ResidueMapping_FindFirstApplicationData_keyval2(Anal_ResidueMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_ResidueMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_ResidueMapping_FindFirstApplicationData_keyval3(Anal_ResidueMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_ResidueMapping self
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
extern Impl_ApplicationData Anal_ResidueMapping_FindFirstApplicationData_keyval4(Anal_ResidueMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccpnmr.Analysis.ResidueMapping.atomSetMappings

child link 
to class AtomSetMapping
  @param  Anal_ResidueMapping self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Anal_AtomSetMapping Anal_ResidueMapping_FindFirstAtomSetMapping(Anal_ResidueMapping self, ApiMap conditions);

/**
  FindFirst for ccpnmr.Analysis.ResidueMapping.atomSetMappings

child link 
to class AtomSetMapping
  @param  Anal_ResidueMapping self
  @returns  the first value that satisfies the conditions 
**/
extern Anal_AtomSetMapping Anal_ResidueMapping_FindFirstAtomSetMapping_keyval0(Anal_ResidueMapping self);

/**
  FindFirst for ccpnmr.Analysis.ResidueMapping.atomSetMappings

child link 
to class AtomSetMapping
  @param  Anal_ResidueMapping self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Anal_AtomSetMapping Anal_ResidueMapping_FindFirstAtomSetMapping_keyval1(Anal_ResidueMapping self, char * key, ApiObject value);

/**
  FindFirst for ccpnmr.Analysis.ResidueMapping.atomSetMappings

child link 
to class AtomSetMapping
  @param  Anal_ResidueMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Anal_AtomSetMapping Anal_ResidueMapping_FindFirstAtomSetMapping_keyval2(Anal_ResidueMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccpnmr.Analysis.ResidueMapping.atomSetMappings

child link 
to class AtomSetMapping
  @param  Anal_ResidueMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Anal_AtomSetMapping Anal_ResidueMapping_FindFirstAtomSetMapping_keyval3(Anal_ResidueMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccpnmr.Analysis.ResidueMapping.atomSetMappings

child link 
to class AtomSetMapping
  @param  Anal_ResidueMapping self
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
extern Anal_AtomSetMapping Anal_ResidueMapping_FindFirstAtomSetMapping_keyval4(Anal_ResidueMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccpnmr.Analysis.ResidueMapping
  @param  Anal_ResidueMapping self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Anal_ResidueMapping_Get(Anal_ResidueMapping self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_ResidueMapping self
  @returns   the result
**/
extern Acco_AccessObject Anal_ResidueMapping_GetAccess(Anal_ResidueMapping self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Anal_ResidueMapping self
  @returns   the result
**/
extern Acco_AccessObject Anal_ResidueMapping_GetActiveAccess(Anal_ResidueMapping self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_ResidueMapping self
  @returns   the result
**/
extern ApiList Anal_ResidueMapping_GetApplicationData(Anal_ResidueMapping self);

/**
  Get for ccpnmr.Analysis.ResidueMapping.atomSetMappings

child link to 
class AtomSetMapping
  @param  Anal_ResidueMapping self
  @returns   the result
**/
extern ApiSet Anal_ResidueMapping_GetAtomSetMappings(Anal_ResidueMapping self);

/**
  GetByKey for ccpnmr.Analysis.ResidueMapping
  @param  Anal_ResidueMapping self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Anal_ResidueMapping Anal_ResidueMapping_GetByKey(Anal_ResidueMapping self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for ccpnmr.Analysis.ResidueMapping.chainMapping

parent link
  @param  Anal_ResidueMapping self
  @returns   the result
**/
extern Anal_ChainMapping Anal_ResidueMapping_GetChainMapping(Anal_ResidueMapping self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Anal_ResidueMapping self
  @returns   the result
**/
extern ApiString Anal_ResidueMapping_GetClassName(Anal_ResidueMapping self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Anal_ResidueMapping self
  @returns   the result
**/
extern ApiList Anal_ResidueMapping_GetFieldNames(Anal_ResidueMapping self);

/**
  GetFullKey for ccpnmr.Analysis.ResidueMapping
  @param  Anal_ResidueMapping self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Anal_ResidueMapping_GetFullKey(Anal_ResidueMapping self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Anal_ResidueMapping self
  @returns   the result
**/
extern ApiBoolean Anal_ResidueMapping_GetInConstructor(Anal_ResidueMapping self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Anal_ResidueMapping self
  @returns   the result
**/
extern ApiBoolean Anal_ResidueMapping_GetIsDeleted(Anal_ResidueMapping self);

/**
  GetLocalKey for ccpnmr.Analysis.ResidueMapping
  @param  Anal_ResidueMapping self
  @returns  Local object key
**/
extern ApiObject Anal_ResidueMapping_GetLocalKey(Anal_ResidueMapping self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Anal_ResidueMapping self
  @returns   the result
**/
extern ApiString Anal_ResidueMapping_GetPackageName(Anal_ResidueMapping self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Anal_ResidueMapping self
  @returns   the result
**/
extern ApiString Anal_ResidueMapping_GetPackageShortName(Anal_ResidueMapping self);

/**
  Get for ccpnmr.Analysis.ResidueMapping.parent

link to parent object - 
synonym for chainMapping
  @param  Anal_ResidueMapping self
  @returns   the result
**/
extern Anal_ChainMapping Anal_ResidueMapping_GetParent(Anal_ResidueMapping self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Anal_ResidueMapping self
  @returns   the result
**/
extern ApiString Anal_ResidueMapping_GetQualifiedName(Anal_ResidueMapping self);

/**
  getter for derived link residue
  @param  Anal_ResidueMapping self
  @returns   the result
**/
extern Mols_Residue Anal_ResidueMapping_GetResidue(Anal_ResidueMapping self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Anal_ResidueMapping self
  @returns   the result
**/
extern Impl_MemopsRoot Anal_ResidueMapping_GetRoot(Anal_ResidueMapping self);

/**
  Get for ccpnmr.Analysis.ResidueMapping.seqId

key for residue, seqId 
number of residue in chain
  @param  Anal_ResidueMapping self
  @returns   the result
**/
extern ApiInteger Anal_ResidueMapping_GetSeqId(Anal_ResidueMapping self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Anal_ResidueMapping self
  @returns   the result
**/
extern Impl_TopObject Anal_ResidueMapping_GetTopObject(Anal_ResidueMapping self);

/**
  Constructor for ccpnmr.Analysis.ResidueMapping
  @param  Anal_ChainMapping parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Anal_ResidueMapping Anal_ResidueMapping_Init(Anal_ChainMapping parent, ApiMap attrlinks);

/**
  Constructor for ccpnmr.Analysis.ResidueMapping
  @param  Anal_ChainMapping parent
  @param  ApiInteger seqId
  @returns  the new object
**/
extern Anal_ResidueMapping Anal_ResidueMapping_Init_reqd(Anal_ChainMapping parent, ApiInteger seqId);

/**
  Factory function to create ccpnmr.Analysis.AtomSetMapping
  @param  Anal_ResidueMapping self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Anal_AtomSetMapping Anal_ResidueMapping_NewAtomSetMapping(Anal_ResidueMapping self, ApiMap attrlinks);

/**
  Factory function to create ccpnmr.Analysis.AtomSetMapping
  @param  Anal_ResidueMapping self
  @param  char * name
  @returns  the new object
**/
extern Anal_AtomSetMapping Anal_ResidueMapping_NewAtomSetMapping_reqd(Anal_ResidueMapping self, char * name);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_ResidueMapping self
  @param  Impl_ApplicationData value
**/
extern void *Anal_ResidueMapping_RemoveApplicationData(Anal_ResidueMapping self, Impl_ApplicationData value);

/**
  SetAttr for ccpnmr.Analysis.ResidueMapping
  @param  Anal_ResidueMapping self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Anal_ResidueMapping_Set(Anal_ResidueMapping self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_ResidueMapping self
  @param  Acco_AccessObject value
**/
extern void *Anal_ResidueMapping_SetAccess(Anal_ResidueMapping self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_ResidueMapping self
  @param  ApiList values
**/
extern void *Anal_ResidueMapping_SetApplicationData(Anal_ResidueMapping self, ApiList values);

/**
  Set for ccpnmr.Analysis.ResidueMapping.seqId

key for residue, seqId 
number of residue in chain
  @param  Anal_ResidueMapping self
  @param  ApiInteger value
**/
extern void *Anal_ResidueMapping_SetSeqId(Anal_ResidueMapping self, ApiInteger value);

/**
  Sorted for ccpnmr.Analysis.ResidueMapping.atomSetMappings

child link to 
class AtomSetMapping
  @param  Anal_ResidueMapping self
  @returns   the result
**/
extern ApiList Anal_ResidueMapping_SortedAtomSetMappings(Anal_ResidueMapping self);

#endif /* __incl__ccpnmr_api_Analysis_ResidueMapping_h__ */
