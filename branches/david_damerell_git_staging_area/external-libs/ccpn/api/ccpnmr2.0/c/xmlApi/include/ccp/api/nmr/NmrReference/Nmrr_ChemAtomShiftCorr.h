
#ifndef __incl__ccp_api_nmr_NmrReference_ChemAtomShiftCorr_h__
#define __incl__ccp_api_nmr_NmrReference_ChemAtomShiftCorr_h__

#include "ccp.h"

/*
  Sequence dependent chemical shift correction. The correction is defined as ChemAtomShift.randomCoilValue plus the sum of ChemAtomShiftCorr.value for all relevant ChemAtomShiftCorr. A ChemAtomShiftCorr with e.g. molType='protein', ccpCode='Ala', seqOffset=+1, describes the correction to apply to the atom in the current amino acid (which might be e.g. a Glu)  to correct for the effect of an alanine at relative position +1.
  
  These corrections are specific for a given pair of residue types. The correction for e.g. an Alanine at +1 is mostlly the same for a given atom (e.g. CA) no matter what amino acid it is in. These general corrections are given in the ChemCOmp with ccpCode='Xxx', that serves as an 'Any' residue. Pair-specific corrections are only given if they are differnt from the geneeric ones, or if the current Atom is not present in Xxx.
*/

/* package ccp.api.nmr.NmrReference */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemAtomShiftCorr self
  @param  Impl_ApplicationData value
**/
extern void *Nmrr_ChemAtomShiftCorr_AddApplicationData(Nmrr_ChemAtomShiftCorr self, Impl_ApplicationData value);

/**
  CheckAllValid for ccp.nmr.NmrReference.ChemAtomShiftCorr
  @param  Nmrr_ChemAtomShiftCorr self
  @param  ApiBoolean complete
**/
extern void *Nmrr_ChemAtomShiftCorr_CheckAllValid(Nmrr_ChemAtomShiftCorr self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.NmrReference.ChemAtomShiftCorr
  @param  Nmrr_ChemAtomShiftCorr self
  @param  ApiBoolean complete
**/
extern void *Nmrr_ChemAtomShiftCorr_CheckValid(Nmrr_ChemAtomShiftCorr self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemAtomShiftCorr self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrr_ChemAtomShiftCorr_FindAllApplicationData(Nmrr_ChemAtomShiftCorr self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemAtomShiftCorr self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrr_ChemAtomShiftCorr_FindAllApplicationData_keyval0(Nmrr_ChemAtomShiftCorr self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemAtomShiftCorr self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrr_ChemAtomShiftCorr_FindAllApplicationData_keyval1(Nmrr_ChemAtomShiftCorr self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemAtomShiftCorr self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrr_ChemAtomShiftCorr_FindAllApplicationData_keyval2(Nmrr_ChemAtomShiftCorr self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemAtomShiftCorr self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrr_ChemAtomShiftCorr_FindAllApplicationData_keyval3(Nmrr_ChemAtomShiftCorr self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemAtomShiftCorr self
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
extern ApiList Nmrr_ChemAtomShiftCorr_FindAllApplicationData_keyval4(Nmrr_ChemAtomShiftCorr self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemAtomShiftCorr self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrr_ChemAtomShiftCorr_FindFirstApplicationData(Nmrr_ChemAtomShiftCorr self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemAtomShiftCorr self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrr_ChemAtomShiftCorr_FindFirstApplicationData_keyval0(Nmrr_ChemAtomShiftCorr self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemAtomShiftCorr self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrr_ChemAtomShiftCorr_FindFirstApplicationData_keyval1(Nmrr_ChemAtomShiftCorr self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemAtomShiftCorr self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrr_ChemAtomShiftCorr_FindFirstApplicationData_keyval2(Nmrr_ChemAtomShiftCorr self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemAtomShiftCorr self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrr_ChemAtomShiftCorr_FindFirstApplicationData_keyval3(Nmrr_ChemAtomShiftCorr self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemAtomShiftCorr self
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
extern Impl_ApplicationData Nmrr_ChemAtomShiftCorr_FindFirstApplicationData_keyval4(Nmrr_ChemAtomShiftCorr self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.NmrReference.ChemAtomShiftCorr
  @param  Nmrr_ChemAtomShiftCorr self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Nmrr_ChemAtomShiftCorr_Get(Nmrr_ChemAtomShiftCorr self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrr_ChemAtomShiftCorr self
  @returns   the result
**/
extern Acco_AccessObject Nmrr_ChemAtomShiftCorr_GetAccess(Nmrr_ChemAtomShiftCorr self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemAtomShiftCorr self
  @returns   the result
**/
extern ApiList Nmrr_ChemAtomShiftCorr_GetApplicationData(Nmrr_ChemAtomShiftCorr self);

/**
  GetByKey for ccp.nmr.NmrReference.ChemAtomShiftCorr
  @param  Nmrr_ChemAtomShiftCorr self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Nmrr_ChemAtomShiftCorr Nmrr_ChemAtomShiftCorr_GetByKey(Nmrr_ChemAtomShiftCorr self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for ccp.nmr.NmrReference.ChemAtomShiftCorr.ccpCode

ccpCode of 
residue being corrected for
  @param  Nmrr_ChemAtomShiftCorr self
  @returns   the result
**/
extern ApiString Nmrr_ChemAtomShiftCorr_GetCcpCode(Nmrr_ChemAtomShiftCorr self);

/**
  Get for ccp.nmr.NmrReference.ChemAtomShiftCorr.chemAtomNmrRef

parent 
link
  @param  Nmrr_ChemAtomShiftCorr self
  @returns   the result
**/
extern Nmrr_ChemAtomNmrRef Nmrr_ChemAtomShiftCorr_GetChemAtomNmrRef(Nmrr_ChemAtomShiftCorr self);

/**
  getter for derived link chemComp
  @param  Nmrr_ChemAtomShiftCorr self
  @returns   the result
**/
extern Chem_ChemComp Nmrr_ChemAtomShiftCorr_GetChemComp(Nmrr_ChemAtomShiftCorr self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Nmrr_ChemAtomShiftCorr self
  @returns   the result
**/
extern ApiString Nmrr_ChemAtomShiftCorr_GetClassName(Nmrr_ChemAtomShiftCorr self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Nmrr_ChemAtomShiftCorr self
  @returns   the result
**/
extern ApiList Nmrr_ChemAtomShiftCorr_GetFieldNames(Nmrr_ChemAtomShiftCorr self);

/**
  GetFullKey for ccp.nmr.NmrReference.ChemAtomShiftCorr
  @param  Nmrr_ChemAtomShiftCorr self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Nmrr_ChemAtomShiftCorr_GetFullKey(Nmrr_ChemAtomShiftCorr self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Nmrr_ChemAtomShiftCorr self
  @returns   the result
**/
extern ApiBoolean Nmrr_ChemAtomShiftCorr_GetInConstructor(Nmrr_ChemAtomShiftCorr self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Nmrr_ChemAtomShiftCorr self
  @returns   the result
**/
extern ApiBoolean Nmrr_ChemAtomShiftCorr_GetIsDeleted(Nmrr_ChemAtomShiftCorr self);

/**
  GetLocalKey for ccp.nmr.NmrReference.ChemAtomShiftCorr
  @param  Nmrr_ChemAtomShiftCorr self
  @returns  Local object key
**/
extern ApiObject Nmrr_ChemAtomShiftCorr_GetLocalKey(Nmrr_ChemAtomShiftCorr self);

/**
  Get for ccp.nmr.NmrReference.ChemAtomShiftCorr.molType

molType of 
residue being corrected for
  @param  Nmrr_ChemAtomShiftCorr self
  @returns   the result
**/
extern ApiString Nmrr_ChemAtomShiftCorr_GetMolType(Nmrr_ChemAtomShiftCorr self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Nmrr_ChemAtomShiftCorr self
  @returns   the result
**/
extern ApiString Nmrr_ChemAtomShiftCorr_GetPackageName(Nmrr_ChemAtomShiftCorr self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Nmrr_ChemAtomShiftCorr self
  @returns   the result
**/
extern ApiString Nmrr_ChemAtomShiftCorr_GetPackageShortName(Nmrr_ChemAtomShiftCorr self);

/**
  Get for ccp.nmr.NmrReference.ChemAtomShiftCorr.parent

link to parent 
object - synonym for chemAtomNmrRef
  @param  Nmrr_ChemAtomShiftCorr self
  @returns   the result
**/
extern Nmrr_ChemAtomNmrRef Nmrr_ChemAtomShiftCorr_GetParent(Nmrr_ChemAtomShiftCorr self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Nmrr_ChemAtomShiftCorr self
  @returns   the result
**/
extern ApiString Nmrr_ChemAtomShiftCorr_GetQualifiedName(Nmrr_ChemAtomShiftCorr self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Nmrr_ChemAtomShiftCorr self
  @returns   the result
**/
extern Impl_MemopsRoot Nmrr_ChemAtomShiftCorr_GetRoot(Nmrr_ChemAtomShiftCorr self);

/**
  Get for ccp.nmr.NmrReference.ChemAtomShiftCorr.seqOffset

Sequence 
offset of residue being corrected for
  @param  Nmrr_ChemAtomShiftCorr self
  @returns   the result
**/
extern ApiInteger Nmrr_ChemAtomShiftCorr_GetSeqOffset(Nmrr_ChemAtomShiftCorr self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Nmrr_ChemAtomShiftCorr self
  @returns   the result
**/
extern Impl_TopObject Nmrr_ChemAtomShiftCorr_GetTopObject(Nmrr_ChemAtomShiftCorr self);

/**
  Get for ccp.nmr.NmrReference.ChemAtomShiftCorr.value

Value of chemical 
shift sequence correction
  @param  Nmrr_ChemAtomShiftCorr self
  @returns   the result
**/
extern ApiFloat Nmrr_ChemAtomShiftCorr_GetValue(Nmrr_ChemAtomShiftCorr self);

/**
  Constructor for ccp.nmr.NmrReference.ChemAtomShiftCorr
  @param  Nmrr_ChemAtomNmrRef parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmrr_ChemAtomShiftCorr Nmrr_ChemAtomShiftCorr_Init(Nmrr_ChemAtomNmrRef parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.NmrReference.ChemAtomShiftCorr
  @param  Nmrr_ChemAtomNmrRef parent
  @param  char * ccpCode
  @param  char * molType
  @param  ApiInteger seqOffset
  @returns  the new object
**/
extern Nmrr_ChemAtomShiftCorr Nmrr_ChemAtomShiftCorr_Init_reqd(Nmrr_ChemAtomNmrRef parent, char * ccpCode, char * molType, ApiInteger seqOffset);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemAtomShiftCorr self
  @param  Impl_ApplicationData value
**/
extern void *Nmrr_ChemAtomShiftCorr_RemoveApplicationData(Nmrr_ChemAtomShiftCorr self, Impl_ApplicationData value);

/**
  SetAttr for ccp.nmr.NmrReference.ChemAtomShiftCorr
  @param  Nmrr_ChemAtomShiftCorr self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Nmrr_ChemAtomShiftCorr_Set(Nmrr_ChemAtomShiftCorr self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrr_ChemAtomShiftCorr self
  @param  Acco_AccessObject value
**/
extern void *Nmrr_ChemAtomShiftCorr_SetAccess(Nmrr_ChemAtomShiftCorr self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemAtomShiftCorr self
  @param  ApiList values
**/
extern void *Nmrr_ChemAtomShiftCorr_SetApplicationData(Nmrr_ChemAtomShiftCorr self, ApiList values);

/**
  Set for ccp.nmr.NmrReference.ChemAtomShiftCorr.ccpCode

ccpCode of 
residue being corrected for
  @param  Nmrr_ChemAtomShiftCorr self
  @param  ApiString value
**/
extern void *Nmrr_ChemAtomShiftCorr_SetCcpCode(Nmrr_ChemAtomShiftCorr self, ApiString value);

/**
  Set for ccp.nmr.NmrReference.ChemAtomShiftCorr.molType

molType of 
residue being corrected for
  @param  Nmrr_ChemAtomShiftCorr self
  @param  ApiString value
**/
extern void *Nmrr_ChemAtomShiftCorr_SetMolType(Nmrr_ChemAtomShiftCorr self, ApiString value);

/**
  Set for ccp.nmr.NmrReference.ChemAtomShiftCorr.seqOffset

Sequence 
offset of residue being corrected for
  @param  Nmrr_ChemAtomShiftCorr self
  @param  ApiInteger value
**/
extern void *Nmrr_ChemAtomShiftCorr_SetSeqOffset(Nmrr_ChemAtomShiftCorr self, ApiInteger value);

/**
  Set for ccp.nmr.NmrReference.ChemAtomShiftCorr.value

Value of chemical 
shift sequence correction
  @param  Nmrr_ChemAtomShiftCorr self
  @param  ApiFloat value
**/
extern void *Nmrr_ChemAtomShiftCorr_SetValue(Nmrr_ChemAtomShiftCorr self, ApiFloat value);

#endif /* __incl__ccp_api_nmr_NmrReference_ChemAtomShiftCorr_h__ */
