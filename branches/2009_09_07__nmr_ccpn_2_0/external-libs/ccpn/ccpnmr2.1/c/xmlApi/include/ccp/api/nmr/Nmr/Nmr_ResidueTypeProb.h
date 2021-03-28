
#ifndef __incl__ccp_api_nmr_Nmr_ResidueTypeProb_h__
#define __incl__ccp_api_nmr_Nmr_ResidueTypeProb_h__

#include "ccp.h"

/*
  Connecting record, expressing the probability that a SpinSystem corresponds to a ChemComp
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ResidueTypeProb self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_ResidueTypeProb_AddApplicationData(Nmr_ResidueTypeProb self, Impl_ApplicationData value);

/**
  CheckAllValid for ccp.nmr.Nmr.ResidueTypeProb
  @param  Nmr_ResidueTypeProb self
  @param  ApiBoolean complete
**/
extern void *Nmr_ResidueTypeProb_CheckAllValid(Nmr_ResidueTypeProb self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.Nmr.ResidueTypeProb
  @param  Nmr_ResidueTypeProb self
  @param  ApiBoolean complete
**/
extern void *Nmr_ResidueTypeProb_CheckValid(Nmr_ResidueTypeProb self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ResidueTypeProb self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_ResidueTypeProb_FindAllApplicationData(Nmr_ResidueTypeProb self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ResidueTypeProb self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_ResidueTypeProb_FindAllApplicationData_keyval0(Nmr_ResidueTypeProb self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ResidueTypeProb self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_ResidueTypeProb_FindAllApplicationData_keyval1(Nmr_ResidueTypeProb self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ResidueTypeProb self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_ResidueTypeProb_FindAllApplicationData_keyval2(Nmr_ResidueTypeProb self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ResidueTypeProb self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_ResidueTypeProb_FindAllApplicationData_keyval3(Nmr_ResidueTypeProb self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ResidueTypeProb self
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
extern ApiList Nmr_ResidueTypeProb_FindAllApplicationData_keyval4(Nmr_ResidueTypeProb self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ResidueTypeProb self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_ResidueTypeProb_FindFirstApplicationData(Nmr_ResidueTypeProb self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ResidueTypeProb self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_ResidueTypeProb_FindFirstApplicationData_keyval0(Nmr_ResidueTypeProb self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ResidueTypeProb self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_ResidueTypeProb_FindFirstApplicationData_keyval1(Nmr_ResidueTypeProb self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ResidueTypeProb self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_ResidueTypeProb_FindFirstApplicationData_keyval2(Nmr_ResidueTypeProb self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ResidueTypeProb self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_ResidueTypeProb_FindFirstApplicationData_keyval3(Nmr_ResidueTypeProb self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ResidueTypeProb self
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
extern Impl_ApplicationData Nmr_ResidueTypeProb_FindFirstApplicationData_keyval4(Nmr_ResidueTypeProb self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.Nmr.ResidueTypeProb
  @param  Nmr_ResidueTypeProb self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Nmr_ResidueTypeProb_Get(Nmr_ResidueTypeProb self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_ResidueTypeProb self
  @returns   the result
**/
extern Acco_AccessObject Nmr_ResidueTypeProb_GetAccess(Nmr_ResidueTypeProb self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Nmr_ResidueTypeProb self
  @returns   the result
**/
extern Acco_AccessObject Nmr_ResidueTypeProb_GetActiveAccess(Nmr_ResidueTypeProb self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ResidueTypeProb self
  @returns   the result
**/
extern ApiList Nmr_ResidueTypeProb_GetApplicationData(Nmr_ResidueTypeProb self);

/**
  GetByKey for ccp.nmr.Nmr.ResidueTypeProb
  @param  Nmr_ResidueTypeProb self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Nmr_ResidueTypeProb Nmr_ResidueTypeProb_GetByKey(Nmr_ResidueTypeProb self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Nmr_ResidueTypeProb self
  @returns   the result
**/
extern ApiString Nmr_ResidueTypeProb_GetClassName(Nmr_ResidueTypeProb self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Nmr_ResidueTypeProb self
  @returns   the result
**/
extern ApiList Nmr_ResidueTypeProb_GetFieldNames(Nmr_ResidueTypeProb self);

/**
  GetFullKey for ccp.nmr.Nmr.ResidueTypeProb
  @param  Nmr_ResidueTypeProb self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Nmr_ResidueTypeProb_GetFullKey(Nmr_ResidueTypeProb self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Nmr_ResidueTypeProb self
  @returns   the result
**/
extern ApiBoolean Nmr_ResidueTypeProb_GetInConstructor(Nmr_ResidueTypeProb self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Nmr_ResidueTypeProb self
  @returns   the result
**/
extern ApiBoolean Nmr_ResidueTypeProb_GetIsDeleted(Nmr_ResidueTypeProb self);

/**
  GetLocalKey for ccp.nmr.Nmr.ResidueTypeProb
  @param  Nmr_ResidueTypeProb self
  @returns  Local object key
**/
extern ApiObject Nmr_ResidueTypeProb_GetLocalKey(Nmr_ResidueTypeProb self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Nmr_ResidueTypeProb self
  @returns   the result
**/
extern ApiString Nmr_ResidueTypeProb_GetPackageName(Nmr_ResidueTypeProb self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Nmr_ResidueTypeProb self
  @returns   the result
**/
extern ApiString Nmr_ResidueTypeProb_GetPackageShortName(Nmr_ResidueTypeProb self);

/**
  Get for ccp.nmr.Nmr.ResidueTypeProb.parent

link to parent object - 
synonym for resonanceGroup
  @param  Nmr_ResidueTypeProb self
  @returns   the result
**/
extern Nmr_ResonanceGroup Nmr_ResidueTypeProb_GetParent(Nmr_ResidueTypeProb self);

/**
  Get for ccp.nmr.Nmr.ResidueTypeProb.possibility

ChemComp that the 
ResonanceGroup has a probability of corresponding to.
  @param  Nmr_ResidueTypeProb self
  @returns   the result
**/
extern Chem_ChemComp Nmr_ResidueTypeProb_GetPossibility(Nmr_ResidueTypeProb self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Nmr_ResidueTypeProb self
  @returns   the result
**/
extern ApiString Nmr_ResidueTypeProb_GetQualifiedName(Nmr_ResidueTypeProb self);

/**
  Get for ccp.nmr.Nmr.ResidueTypeProb.resonanceGroup

ResonanceGroup whose 
type probability is described.
  @param  Nmr_ResidueTypeProb self
  @returns   the result
**/
extern Nmr_ResonanceGroup Nmr_ResidueTypeProb_GetResonanceGroup(Nmr_ResidueTypeProb self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Nmr_ResidueTypeProb self
  @returns   the result
**/
extern Impl_MemopsRoot Nmr_ResidueTypeProb_GetRoot(Nmr_ResidueTypeProb self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Nmr_ResidueTypeProb self
  @returns   the result
**/
extern Impl_TopObject Nmr_ResidueTypeProb_GetTopObject(Nmr_ResidueTypeProb self);

/**
  Get for ccp.general.Template.AbstractProbability.weight

weight (= 
non-normalised probability) that the parent is associated with this 
particular possibility.
  @param  Nmr_ResidueTypeProb self
  @returns   the result
**/
extern ApiFloat Nmr_ResidueTypeProb_GetWeight(Nmr_ResidueTypeProb self);

/**
  Constructor for ccp.nmr.Nmr.ResidueTypeProb
  @param  Nmr_ResonanceGroup parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmr_ResidueTypeProb Nmr_ResidueTypeProb_Init(Nmr_ResonanceGroup parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.Nmr.ResidueTypeProb
  @param  Nmr_ResonanceGroup parent
  @param  Chem_ChemComp possibility
  @returns  the new object
**/
extern Nmr_ResidueTypeProb Nmr_ResidueTypeProb_Init_reqd(Nmr_ResonanceGroup parent, Chem_ChemComp possibility);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ResidueTypeProb self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_ResidueTypeProb_RemoveApplicationData(Nmr_ResidueTypeProb self, Impl_ApplicationData value);

/**
  SetAttr for ccp.nmr.Nmr.ResidueTypeProb
  @param  Nmr_ResidueTypeProb self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Nmr_ResidueTypeProb_Set(Nmr_ResidueTypeProb self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_ResidueTypeProb self
  @param  Acco_AccessObject value
**/
extern void *Nmr_ResidueTypeProb_SetAccess(Nmr_ResidueTypeProb self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ResidueTypeProb self
  @param  ApiList values
**/
extern void *Nmr_ResidueTypeProb_SetApplicationData(Nmr_ResidueTypeProb self, ApiList values);

/**
  Set for ccp.nmr.Nmr.ResidueTypeProb.possibility

ChemComp that the 
ResonanceGroup has a probability of corresponding to.
  @param  Nmr_ResidueTypeProb self
  @param  Chem_ChemComp value
**/
extern void *Nmr_ResidueTypeProb_SetPossibility(Nmr_ResidueTypeProb self, Chem_ChemComp value);

/**
  Set for ccp.general.Template.AbstractProbability.weight

weight (= 
non-normalised probability) that the parent is associated with this 
particular possibility.
  @param  Nmr_ResidueTypeProb self
  @param  ApiFloat value
**/
extern void *Nmr_ResidueTypeProb_SetWeight(Nmr_ResidueTypeProb self, ApiFloat value);

#endif /* __incl__ccp_api_nmr_Nmr_ResidueTypeProb_h__ */
