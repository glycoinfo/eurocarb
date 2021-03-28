
#ifndef __incl__ccp_api_nmr_NmrReference_ChemCompNmrRef_h__
#define __incl__ccp_api_nmr_NmrReference_ChemCompNmrRef_h__

#include "ccp.h"

/*
  NMR reference information for a given ChemComp as presented from a given source. 
*/

/* package ccp.api.nmr.NmrReference */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemCompNmrRef self
  @param  Impl_ApplicationData value
**/
extern void *Nmrr_ChemCompNmrRef_AddApplicationData(Nmrr_ChemCompNmrRef self, Impl_ApplicationData value);

/**
  CheckAllValid for ccp.nmr.NmrReference.ChemCompNmrRef
  @param  Nmrr_ChemCompNmrRef self
  @param  ApiBoolean complete
**/
extern void *Nmrr_ChemCompNmrRef_CheckAllValid(Nmrr_ChemCompNmrRef self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.NmrReference.ChemCompNmrRef
  @param  Nmrr_ChemCompNmrRef self
  @param  ApiBoolean complete
**/
extern void *Nmrr_ChemCompNmrRef_CheckValid(Nmrr_ChemCompNmrRef self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemCompNmrRef self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrr_ChemCompNmrRef_FindAllApplicationData(Nmrr_ChemCompNmrRef self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemCompNmrRef self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrr_ChemCompNmrRef_FindAllApplicationData_keyval0(Nmrr_ChemCompNmrRef self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemCompNmrRef self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrr_ChemCompNmrRef_FindAllApplicationData_keyval1(Nmrr_ChemCompNmrRef self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemCompNmrRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrr_ChemCompNmrRef_FindAllApplicationData_keyval2(Nmrr_ChemCompNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemCompNmrRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrr_ChemCompNmrRef_FindAllApplicationData_keyval3(Nmrr_ChemCompNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemCompNmrRef self
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
extern ApiList Nmrr_ChemCompNmrRef_FindAllApplicationData_keyval4(Nmrr_ChemCompNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.NmrReference.ChemCompNmrRef.chemAtomNmrRefs

child 
link to class ChemAtomNmrRef
  @param  Nmrr_ChemCompNmrRef self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrr_ChemCompNmrRef_FindAllChemAtomNmrRefs(Nmrr_ChemCompNmrRef self, ApiMap conditions);

/**
  FindAll for ccp.nmr.NmrReference.ChemCompNmrRef.chemAtomNmrRefs

child 
link to class ChemAtomNmrRef
  @param  Nmrr_ChemCompNmrRef self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrr_ChemCompNmrRef_FindAllChemAtomNmrRefs_keyval0(Nmrr_ChemCompNmrRef self);

/**
  FindAll for ccp.nmr.NmrReference.ChemCompNmrRef.chemAtomNmrRefs

child 
link to class ChemAtomNmrRef
  @param  Nmrr_ChemCompNmrRef self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrr_ChemCompNmrRef_FindAllChemAtomNmrRefs_keyval1(Nmrr_ChemCompNmrRef self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.NmrReference.ChemCompNmrRef.chemAtomNmrRefs

child 
link to class ChemAtomNmrRef
  @param  Nmrr_ChemCompNmrRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrr_ChemCompNmrRef_FindAllChemAtomNmrRefs_keyval2(Nmrr_ChemCompNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.NmrReference.ChemCompNmrRef.chemAtomNmrRefs

child 
link to class ChemAtomNmrRef
  @param  Nmrr_ChemCompNmrRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrr_ChemCompNmrRef_FindAllChemAtomNmrRefs_keyval3(Nmrr_ChemCompNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.NmrReference.ChemCompNmrRef.chemAtomNmrRefs

child 
link to class ChemAtomNmrRef
  @param  Nmrr_ChemCompNmrRef self
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
extern ApiSet Nmrr_ChemCompNmrRef_FindAllChemAtomNmrRefs_keyval4(Nmrr_ChemCompNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.NmrReference.ChemCompNmrRef.chemCompVarNmrRefs

child link to 
class ChemCompVarNmrRef
  @param  Nmrr_ChemCompNmrRef self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrr_ChemCompNmrRef_FindAllChemCompVarNmrRefs(Nmrr_ChemCompNmrRef self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.NmrReference.ChemCompNmrRef.chemCompVarNmrRefs

child link to 
class ChemCompVarNmrRef
  @param  Nmrr_ChemCompNmrRef self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrr_ChemCompNmrRef_FindAllChemCompVarNmrRefs_keyval0(Nmrr_ChemCompNmrRef self);

/**
  FindAll for 
ccp.nmr.NmrReference.ChemCompNmrRef.chemCompVarNmrRefs

child link to 
class ChemCompVarNmrRef
  @param  Nmrr_ChemCompNmrRef self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrr_ChemCompNmrRef_FindAllChemCompVarNmrRefs_keyval1(Nmrr_ChemCompNmrRef self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.NmrReference.ChemCompNmrRef.chemCompVarNmrRefs

child link to 
class ChemCompVarNmrRef
  @param  Nmrr_ChemCompNmrRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrr_ChemCompNmrRef_FindAllChemCompVarNmrRefs_keyval2(Nmrr_ChemCompNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.NmrReference.ChemCompNmrRef.chemCompVarNmrRefs

child link to 
class ChemCompVarNmrRef
  @param  Nmrr_ChemCompNmrRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrr_ChemCompNmrRef_FindAllChemCompVarNmrRefs_keyval3(Nmrr_ChemCompNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.NmrReference.ChemCompNmrRef.chemCompVarNmrRefs

child link to 
class ChemCompVarNmrRef
  @param  Nmrr_ChemCompNmrRef self
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
extern ApiSet Nmrr_ChemCompNmrRef_FindAllChemCompVarNmrRefs_keyval4(Nmrr_ChemCompNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemCompNmrRef self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrr_ChemCompNmrRef_FindFirstApplicationData(Nmrr_ChemCompNmrRef self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemCompNmrRef self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrr_ChemCompNmrRef_FindFirstApplicationData_keyval0(Nmrr_ChemCompNmrRef self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemCompNmrRef self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrr_ChemCompNmrRef_FindFirstApplicationData_keyval1(Nmrr_ChemCompNmrRef self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemCompNmrRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrr_ChemCompNmrRef_FindFirstApplicationData_keyval2(Nmrr_ChemCompNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemCompNmrRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrr_ChemCompNmrRef_FindFirstApplicationData_keyval3(Nmrr_ChemCompNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemCompNmrRef self
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
extern Impl_ApplicationData Nmrr_ChemCompNmrRef_FindFirstApplicationData_keyval4(Nmrr_ChemCompNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.NmrReference.ChemCompNmrRef.chemAtomNmrRefs

child 
link to class ChemAtomNmrRef
  @param  Nmrr_ChemCompNmrRef self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmrr_ChemAtomNmrRef Nmrr_ChemCompNmrRef_FindFirstChemAtomNmrRef(Nmrr_ChemCompNmrRef self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.NmrReference.ChemCompNmrRef.chemAtomNmrRefs

child 
link to class ChemAtomNmrRef
  @param  Nmrr_ChemCompNmrRef self
  @returns  the first value that satisfies the conditions 
**/
extern Nmrr_ChemAtomNmrRef Nmrr_ChemCompNmrRef_FindFirstChemAtomNmrRef_keyval0(Nmrr_ChemCompNmrRef self);

/**
  FindFirst for ccp.nmr.NmrReference.ChemCompNmrRef.chemAtomNmrRefs

child 
link to class ChemAtomNmrRef
  @param  Nmrr_ChemCompNmrRef self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmrr_ChemAtomNmrRef Nmrr_ChemCompNmrRef_FindFirstChemAtomNmrRef_keyval1(Nmrr_ChemCompNmrRef self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.NmrReference.ChemCompNmrRef.chemAtomNmrRefs

child 
link to class ChemAtomNmrRef
  @param  Nmrr_ChemCompNmrRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmrr_ChemAtomNmrRef Nmrr_ChemCompNmrRef_FindFirstChemAtomNmrRef_keyval2(Nmrr_ChemCompNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.NmrReference.ChemCompNmrRef.chemAtomNmrRefs

child 
link to class ChemAtomNmrRef
  @param  Nmrr_ChemCompNmrRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmrr_ChemAtomNmrRef Nmrr_ChemCompNmrRef_FindFirstChemAtomNmrRef_keyval3(Nmrr_ChemCompNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.NmrReference.ChemCompNmrRef.chemAtomNmrRefs

child 
link to class ChemAtomNmrRef
  @param  Nmrr_ChemCompNmrRef self
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
extern Nmrr_ChemAtomNmrRef Nmrr_ChemCompNmrRef_FindFirstChemAtomNmrRef_keyval4(Nmrr_ChemCompNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.NmrReference.ChemCompNmrRef.chemCompVarNmrRefs

child link to 
class ChemCompVarNmrRef
  @param  Nmrr_ChemCompNmrRef self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmrr_ChemCompVarNmrRef Nmrr_ChemCompNmrRef_FindFirstChemCompVarNmrRef(Nmrr_ChemCompNmrRef self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrReference.ChemCompNmrRef.chemCompVarNmrRefs

child link to 
class ChemCompVarNmrRef
  @param  Nmrr_ChemCompNmrRef self
  @returns  the first value that satisfies the conditions 
**/
extern Nmrr_ChemCompVarNmrRef Nmrr_ChemCompNmrRef_FindFirstChemCompVarNmrRef_keyval0(Nmrr_ChemCompNmrRef self);

/**
  FindFirst for 
ccp.nmr.NmrReference.ChemCompNmrRef.chemCompVarNmrRefs

child link to 
class ChemCompVarNmrRef
  @param  Nmrr_ChemCompNmrRef self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmrr_ChemCompVarNmrRef Nmrr_ChemCompNmrRef_FindFirstChemCompVarNmrRef_keyval1(Nmrr_ChemCompNmrRef self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.NmrReference.ChemCompNmrRef.chemCompVarNmrRefs

child link to 
class ChemCompVarNmrRef
  @param  Nmrr_ChemCompNmrRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmrr_ChemCompVarNmrRef Nmrr_ChemCompNmrRef_FindFirstChemCompVarNmrRef_keyval2(Nmrr_ChemCompNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.NmrReference.ChemCompNmrRef.chemCompVarNmrRefs

child link to 
class ChemCompVarNmrRef
  @param  Nmrr_ChemCompNmrRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmrr_ChemCompVarNmrRef Nmrr_ChemCompNmrRef_FindFirstChemCompVarNmrRef_keyval3(Nmrr_ChemCompNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.NmrReference.ChemCompNmrRef.chemCompVarNmrRefs

child link to 
class ChemCompVarNmrRef
  @param  Nmrr_ChemCompNmrRef self
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
extern Nmrr_ChemCompVarNmrRef Nmrr_ChemCompNmrRef_FindFirstChemCompVarNmrRef_keyval4(Nmrr_ChemCompNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.NmrReference.ChemCompNmrRef
  @param  Nmrr_ChemCompNmrRef self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Nmrr_ChemCompNmrRef_Get(Nmrr_ChemCompNmrRef self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrr_ChemCompNmrRef self
  @returns   the result
**/
extern Acco_AccessObject Nmrr_ChemCompNmrRef_GetAccess(Nmrr_ChemCompNmrRef self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemCompNmrRef self
  @returns   the result
**/
extern ApiList Nmrr_ChemCompNmrRef_GetApplicationData(Nmrr_ChemCompNmrRef self);

/**
  GetByKey for ccp.nmr.NmrReference.ChemCompNmrRef
  @param  Nmrr_ChemCompNmrRef self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Nmrr_ChemCompNmrRef Nmrr_ChemCompNmrRef_GetByKey(Nmrr_ChemCompNmrRef self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for ccp.nmr.NmrReference.ChemCompNmrRef.chemAtomNmrRefs

child link 
to class ChemAtomNmrRef
  @param  Nmrr_ChemCompNmrRef self
  @returns   the result
**/
extern ApiSet Nmrr_ChemCompNmrRef_GetChemAtomNmrRefs(Nmrr_ChemCompNmrRef self);

/**
  Get for ccp.nmr.NmrReference.ChemCompNmrRef.chemCompVarNmrRefs

child 
link to class ChemCompVarNmrRef
  @param  Nmrr_ChemCompNmrRef self
  @returns   the result
**/
extern ApiSet Nmrr_ChemCompNmrRef_GetChemCompVarNmrRefs(Nmrr_ChemCompNmrRef self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Nmrr_ChemCompNmrRef self
  @returns   the result
**/
extern ApiString Nmrr_ChemCompNmrRef_GetClassName(Nmrr_ChemCompNmrRef self);

/**
  Get for ccp.nmr.NmrReference.ChemCompNmrRef.details

Free text, for 
notes, explanatory comments, etc.
  @param  Nmrr_ChemCompNmrRef self
  @returns   the result
**/
extern ApiString Nmrr_ChemCompNmrRef_GetDetails(Nmrr_ChemCompNmrRef self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Nmrr_ChemCompNmrRef self
  @returns   the result
**/
extern ApiList Nmrr_ChemCompNmrRef_GetFieldNames(Nmrr_ChemCompNmrRef self);

/**
  GetFullKey for ccp.nmr.NmrReference.ChemCompNmrRef
  @param  Nmrr_ChemCompNmrRef self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Nmrr_ChemCompNmrRef_GetFullKey(Nmrr_ChemCompNmrRef self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Nmrr_ChemCompNmrRef self
  @returns   the result
**/
extern ApiBoolean Nmrr_ChemCompNmrRef_GetInConstructor(Nmrr_ChemCompNmrRef self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Nmrr_ChemCompNmrRef self
  @returns   the result
**/
extern ApiBoolean Nmrr_ChemCompNmrRef_GetIsDeleted(Nmrr_ChemCompNmrRef self);

/**
  GetLocalKey for ccp.nmr.NmrReference.ChemCompNmrRef
  @param  Nmrr_ChemCompNmrRef self
  @returns  Local object key
**/
extern ApiObject Nmrr_ChemCompNmrRef_GetLocalKey(Nmrr_ChemCompNmrRef self);

/**
  Get for ccp.nmr.NmrReference.ChemCompNmrRef.nmrReferenceStore

parent 
link
  @param  Nmrr_ChemCompNmrRef self
  @returns   the result
**/
extern Nmrr_NmrReferenceStore Nmrr_ChemCompNmrRef_GetNmrReferenceStore(Nmrr_ChemCompNmrRef self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Nmrr_ChemCompNmrRef self
  @returns   the result
**/
extern ApiString Nmrr_ChemCompNmrRef_GetPackageName(Nmrr_ChemCompNmrRef self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Nmrr_ChemCompNmrRef self
  @returns   the result
**/
extern ApiString Nmrr_ChemCompNmrRef_GetPackageShortName(Nmrr_ChemCompNmrRef self);

/**
  Get for ccp.nmr.NmrReference.ChemCompNmrRef.parent

link to parent 
object - synonym for nmrReferenceStore
  @param  Nmrr_ChemCompNmrRef self
  @returns   the result
**/
extern Nmrr_NmrReferenceStore Nmrr_ChemCompNmrRef_GetParent(Nmrr_ChemCompNmrRef self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Nmrr_ChemCompNmrRef self
  @returns   the result
**/
extern ApiString Nmrr_ChemCompNmrRef_GetQualifiedName(Nmrr_ChemCompNmrRef self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Nmrr_ChemCompNmrRef self
  @returns   the result
**/
extern Impl_MemopsRoot Nmrr_ChemCompNmrRef_GetRoot(Nmrr_ChemCompNmrRef self);

/**
  Get for ccp.nmr.NmrReference.ChemCompNmrRef.sourceName

Name of the 
source for the reference data. Serves as the key for the class. Serves 
to distinguish NMR reference data from different sources, in case 
different programs want to keep their own.
  @param  Nmrr_ChemCompNmrRef self
  @returns   the result
**/
extern ApiString Nmrr_ChemCompNmrRef_GetSourceName(Nmrr_ChemCompNmrRef self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Nmrr_ChemCompNmrRef self
  @returns   the result
**/
extern Impl_TopObject Nmrr_ChemCompNmrRef_GetTopObject(Nmrr_ChemCompNmrRef self);

/**
  Constructor for ccp.nmr.NmrReference.ChemCompNmrRef
  @param  Nmrr_NmrReferenceStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmrr_ChemCompNmrRef Nmrr_ChemCompNmrRef_Init(Nmrr_NmrReferenceStore parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.NmrReference.ChemCompNmrRef
  @param  Nmrr_NmrReferenceStore parent
  @param  char * sourceName
  @returns  the new object
**/
extern Nmrr_ChemCompNmrRef Nmrr_ChemCompNmrRef_Init_reqd(Nmrr_NmrReferenceStore parent, char * sourceName);

/**
  Factory function to create ccp.nmr.NmrReference.ChemAtomNmrRef
  @param  Nmrr_ChemCompNmrRef self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmrr_ChemAtomNmrRef Nmrr_ChemCompNmrRef_NewChemAtomNmrRef(Nmrr_ChemCompNmrRef self, ApiMap attrlinks);

/**
  Factory function to create ccp.nmr.NmrReference.ChemAtomNmrRef
  @param  Nmrr_ChemCompNmrRef self
  @param  ApiSet chemCompVarNmrRefs
  @param  char * name
  @returns  the new object
**/
extern Nmrr_ChemAtomNmrRef Nmrr_ChemCompNmrRef_NewChemAtomNmrRef_reqd(Nmrr_ChemCompNmrRef self, ApiSet chemCompVarNmrRefs, char * name);

/**
  Factory function to create ccp.nmr.NmrReference.ChemCompVarNmrRef
  @param  Nmrr_ChemCompNmrRef self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmrr_ChemCompVarNmrRef Nmrr_ChemCompNmrRef_NewChemCompVarNmrRef(Nmrr_ChemCompNmrRef self, ApiMap attrlinks);

/**
  Factory function to create ccp.nmr.NmrReference.ChemCompVarNmrRef
  @param  Nmrr_ChemCompNmrRef self
  @returns  the new object
**/
extern Nmrr_ChemCompVarNmrRef Nmrr_ChemCompNmrRef_NewChemCompVarNmrRef_reqd(Nmrr_ChemCompNmrRef self);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemCompNmrRef self
  @param  Impl_ApplicationData value
**/
extern void *Nmrr_ChemCompNmrRef_RemoveApplicationData(Nmrr_ChemCompNmrRef self, Impl_ApplicationData value);

/**
  SetAttr for ccp.nmr.NmrReference.ChemCompNmrRef
  @param  Nmrr_ChemCompNmrRef self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Nmrr_ChemCompNmrRef_Set(Nmrr_ChemCompNmrRef self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrr_ChemCompNmrRef self
  @param  Acco_AccessObject value
**/
extern void *Nmrr_ChemCompNmrRef_SetAccess(Nmrr_ChemCompNmrRef self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemCompNmrRef self
  @param  ApiList values
**/
extern void *Nmrr_ChemCompNmrRef_SetApplicationData(Nmrr_ChemCompNmrRef self, ApiList values);

/**
  Set for ccp.nmr.NmrReference.ChemCompNmrRef.details

Free text, for 
notes, explanatory comments, etc.
  @param  Nmrr_ChemCompNmrRef self
  @param  ApiString value
**/
extern void *Nmrr_ChemCompNmrRef_SetDetails(Nmrr_ChemCompNmrRef self, ApiString value);

/**
  Set for ccp.nmr.NmrReference.ChemCompNmrRef.sourceName

Name of the 
source for the reference data. Serves as the key for the class. Serves 
to distinguish NMR reference data from different sources, in case 
different programs want to keep their own.
  @param  Nmrr_ChemCompNmrRef self
  @param  ApiString value
**/
extern void *Nmrr_ChemCompNmrRef_SetSourceName(Nmrr_ChemCompNmrRef self, ApiString value);

/**
  Sorted for ccp.nmr.NmrReference.ChemCompNmrRef.chemAtomNmrRefs

child 
link to class ChemAtomNmrRef
  @param  Nmrr_ChemCompNmrRef self
  @returns   the result
**/
extern ApiList Nmrr_ChemCompNmrRef_SortedChemAtomNmrRefs(Nmrr_ChemCompNmrRef self);

/**
  Sorted for ccp.nmr.NmrReference.ChemCompNmrRef.chemCompVarNmrRefs

child 
link to class ChemCompVarNmrRef
  @param  Nmrr_ChemCompNmrRef self
  @returns   the result
**/
extern ApiList Nmrr_ChemCompNmrRef_SortedChemCompVarNmrRefs(Nmrr_ChemCompNmrRef self);

#endif /* __incl__ccp_api_nmr_NmrReference_ChemCompNmrRef_h__ */
