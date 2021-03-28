
#ifndef __incl__ccp_api_nmr_Nmr_ResidueProb_h__
#define __incl__ccp_api_nmr_Nmr_ResidueProb_h__

#include "ccp.h"

/*
  Connecting record, expressing the probability that a SpinSystem corresponds to specific Residue in a chain
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ResidueProb self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_ResidueProb_AddApplicationData(Nmr_ResidueProb self, Impl_ApplicationData value);

/**
  CheckAllValid for ccp.nmr.Nmr.ResidueProb
  @param  Nmr_ResidueProb self
  @param  ApiBoolean complete
**/
extern void *Nmr_ResidueProb_CheckAllValid(Nmr_ResidueProb self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.Nmr.ResidueProb
  @param  Nmr_ResidueProb self
  @param  ApiBoolean complete
**/
extern void *Nmr_ResidueProb_CheckValid(Nmr_ResidueProb self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ResidueProb self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_ResidueProb_FindAllApplicationData(Nmr_ResidueProb self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ResidueProb self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_ResidueProb_FindAllApplicationData_keyval0(Nmr_ResidueProb self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ResidueProb self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_ResidueProb_FindAllApplicationData_keyval1(Nmr_ResidueProb self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ResidueProb self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_ResidueProb_FindAllApplicationData_keyval2(Nmr_ResidueProb self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ResidueProb self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_ResidueProb_FindAllApplicationData_keyval3(Nmr_ResidueProb self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ResidueProb self
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
extern ApiList Nmr_ResidueProb_FindAllApplicationData_keyval4(Nmr_ResidueProb self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ResidueProb self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_ResidueProb_FindFirstApplicationData(Nmr_ResidueProb self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ResidueProb self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_ResidueProb_FindFirstApplicationData_keyval0(Nmr_ResidueProb self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ResidueProb self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_ResidueProb_FindFirstApplicationData_keyval1(Nmr_ResidueProb self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ResidueProb self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_ResidueProb_FindFirstApplicationData_keyval2(Nmr_ResidueProb self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ResidueProb self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_ResidueProb_FindFirstApplicationData_keyval3(Nmr_ResidueProb self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ResidueProb self
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
extern Impl_ApplicationData Nmr_ResidueProb_FindFirstApplicationData_keyval4(Nmr_ResidueProb self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.Nmr.ResidueProb
  @param  Nmr_ResidueProb self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Nmr_ResidueProb_Get(Nmr_ResidueProb self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_ResidueProb self
  @returns   the result
**/
extern Acco_AccessObject Nmr_ResidueProb_GetAccess(Nmr_ResidueProb self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ResidueProb self
  @returns   the result
**/
extern ApiList Nmr_ResidueProb_GetApplicationData(Nmr_ResidueProb self);

/**
  GetByKey for ccp.nmr.Nmr.ResidueProb
  @param  Nmr_ResidueProb self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Nmr_ResidueProb Nmr_ResidueProb_GetByKey(Nmr_ResidueProb self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Nmr_ResidueProb self
  @returns   the result
**/
extern ApiString Nmr_ResidueProb_GetClassName(Nmr_ResidueProb self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Nmr_ResidueProb self
  @returns   the result
**/
extern ApiList Nmr_ResidueProb_GetFieldNames(Nmr_ResidueProb self);

/**
  GetFullKey for ccp.nmr.Nmr.ResidueProb
  @param  Nmr_ResidueProb self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Nmr_ResidueProb_GetFullKey(Nmr_ResidueProb self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Nmr_ResidueProb self
  @returns   the result
**/
extern ApiBoolean Nmr_ResidueProb_GetInConstructor(Nmr_ResidueProb self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Nmr_ResidueProb self
  @returns   the result
**/
extern ApiBoolean Nmr_ResidueProb_GetIsDeleted(Nmr_ResidueProb self);

/**
  GetLocalKey for ccp.nmr.Nmr.ResidueProb
  @param  Nmr_ResidueProb self
  @returns  Local object key
**/
extern ApiObject Nmr_ResidueProb_GetLocalKey(Nmr_ResidueProb self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Nmr_ResidueProb self
  @returns   the result
**/
extern ApiString Nmr_ResidueProb_GetPackageName(Nmr_ResidueProb self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Nmr_ResidueProb self
  @returns   the result
**/
extern ApiString Nmr_ResidueProb_GetPackageShortName(Nmr_ResidueProb self);

/**
  Get for ccp.nmr.Nmr.ResidueProb.parent

link to parent object - synonym 
for resonanceGroup
  @param  Nmr_ResidueProb self
  @returns   the result
**/
extern Nmr_ResonanceGroup Nmr_ResidueProb_GetParent(Nmr_ResidueProb self);

/**
  Get for ccp.nmr.Nmr.ResidueProb.possibility

Residue that the 
ResonanceGroup has a probability of corresponding to.
  @param  Nmr_ResidueProb self
  @returns   the result
**/
extern Mols_Residue Nmr_ResidueProb_GetPossibility(Nmr_ResidueProb self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Nmr_ResidueProb self
  @returns   the result
**/
extern ApiString Nmr_ResidueProb_GetQualifiedName(Nmr_ResidueProb self);

/**
  Get for ccp.nmr.Nmr.ResidueProb.resonanceGroup

ResonanceGroup whose 
probable residue identity is being described.
  @param  Nmr_ResidueProb self
  @returns   the result
**/
extern Nmr_ResonanceGroup Nmr_ResidueProb_GetResonanceGroup(Nmr_ResidueProb self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Nmr_ResidueProb self
  @returns   the result
**/
extern Impl_MemopsRoot Nmr_ResidueProb_GetRoot(Nmr_ResidueProb self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Nmr_ResidueProb self
  @returns   the result
**/
extern Impl_TopObject Nmr_ResidueProb_GetTopObject(Nmr_ResidueProb self);

/**
  Get for ccp.general.Template.AbstractProbability.weight

weight (= 
non-normalised probability) that the parent is associated with this 
particular possibility.
  @param  Nmr_ResidueProb self
  @returns   the result
**/
extern ApiFloat Nmr_ResidueProb_GetWeight(Nmr_ResidueProb self);

/**
  Constructor for ccp.nmr.Nmr.ResidueProb
  @param  Nmr_ResonanceGroup parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmr_ResidueProb Nmr_ResidueProb_Init(Nmr_ResonanceGroup parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.Nmr.ResidueProb
  @param  Nmr_ResonanceGroup parent
  @param  Mols_Residue possibility
  @returns  the new object
**/
extern Nmr_ResidueProb Nmr_ResidueProb_Init_reqd(Nmr_ResonanceGroup parent, Mols_Residue possibility);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ResidueProb self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_ResidueProb_RemoveApplicationData(Nmr_ResidueProb self, Impl_ApplicationData value);

/**
  SetAttr for ccp.nmr.Nmr.ResidueProb
  @param  Nmr_ResidueProb self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Nmr_ResidueProb_Set(Nmr_ResidueProb self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_ResidueProb self
  @param  Acco_AccessObject value
**/
extern void *Nmr_ResidueProb_SetAccess(Nmr_ResidueProb self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ResidueProb self
  @param  ApiList values
**/
extern void *Nmr_ResidueProb_SetApplicationData(Nmr_ResidueProb self, ApiList values);

/**
  Set for ccp.nmr.Nmr.ResidueProb.possibility

Residue that the 
ResonanceGroup has a probability of corresponding to.
  @param  Nmr_ResidueProb self
  @param  Mols_Residue value
**/
extern void *Nmr_ResidueProb_SetPossibility(Nmr_ResidueProb self, Mols_Residue value);

/**
  Set for ccp.general.Template.AbstractProbability.weight

weight (= 
non-normalised probability) that the parent is associated with this 
particular possibility.
  @param  Nmr_ResidueProb self
  @param  ApiFloat value
**/
extern void *Nmr_ResidueProb_SetWeight(Nmr_ResidueProb self, ApiFloat value);

#endif /* __incl__ccp_api_nmr_Nmr_ResidueProb_h__ */
