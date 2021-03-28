
#ifndef __incl__ccp_api_nmr_Nmr_InternalShiftReference_h__
#define __incl__ccp_api_nmr_Nmr_InternalShiftReference_h__

#include "ccp.h"

/*
  Chemical Shift referencing. The reference actually used (not the one quoted against). Used for references internal to (part of) the sample.
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_InternalShiftReference self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_InternalShiftReference_AddApplicationData(Nmr_InternalShiftReference self, Impl_ApplicationData value);

/**
  Add for ccp.nmr.Nmr.ShiftReference.experiments

Experiments that use 
ShiftReference
  @param  Nmr_InternalShiftReference self
  @param  Nmr_Experiment value
**/
extern void *Nmr_InternalShiftReference_AddExperiment(Nmr_InternalShiftReference self, Nmr_Experiment value);

/**
  CheckAllValid for ccp.nmr.Nmr.InternalShiftReference
  @param  Nmr_InternalShiftReference self
  @param  ApiBoolean complete
**/
extern void *Nmr_InternalShiftReference_CheckAllValid(Nmr_InternalShiftReference self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.Nmr.InternalShiftReference
  @param  Nmr_InternalShiftReference self
  @param  ApiBoolean complete
**/
extern void *Nmr_InternalShiftReference_CheckValid(Nmr_InternalShiftReference self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_InternalShiftReference self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_InternalShiftReference_FindAllApplicationData(Nmr_InternalShiftReference self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_InternalShiftReference self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_InternalShiftReference_FindAllApplicationData_keyval0(Nmr_InternalShiftReference self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_InternalShiftReference self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_InternalShiftReference_FindAllApplicationData_keyval1(Nmr_InternalShiftReference self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_InternalShiftReference self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_InternalShiftReference_FindAllApplicationData_keyval2(Nmr_InternalShiftReference self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_InternalShiftReference self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_InternalShiftReference_FindAllApplicationData_keyval3(Nmr_InternalShiftReference self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_InternalShiftReference self
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
extern ApiList Nmr_InternalShiftReference_FindAllApplicationData_keyval4(Nmr_InternalShiftReference self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.ShiftReference.experiments

Experiments that use 
ShiftReference
  @param  Nmr_InternalShiftReference self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_InternalShiftReference_FindAllExperiments(Nmr_InternalShiftReference self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.ShiftReference.experiments

Experiments that use 
ShiftReference
  @param  Nmr_InternalShiftReference self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_InternalShiftReference_FindAllExperiments_keyval0(Nmr_InternalShiftReference self);

/**
  FindAll for ccp.nmr.Nmr.ShiftReference.experiments

Experiments that use 
ShiftReference
  @param  Nmr_InternalShiftReference self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_InternalShiftReference_FindAllExperiments_keyval1(Nmr_InternalShiftReference self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.ShiftReference.experiments

Experiments that use 
ShiftReference
  @param  Nmr_InternalShiftReference self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_InternalShiftReference_FindAllExperiments_keyval2(Nmr_InternalShiftReference self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.ShiftReference.experiments

Experiments that use 
ShiftReference
  @param  Nmr_InternalShiftReference self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_InternalShiftReference_FindAllExperiments_keyval3(Nmr_InternalShiftReference self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.ShiftReference.experiments

Experiments that use 
ShiftReference
  @param  Nmr_InternalShiftReference self
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
extern ApiSet Nmr_InternalShiftReference_FindAllExperiments_keyval4(Nmr_InternalShiftReference self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_InternalShiftReference self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_InternalShiftReference_FindFirstApplicationData(Nmr_InternalShiftReference self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_InternalShiftReference self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_InternalShiftReference_FindFirstApplicationData_keyval0(Nmr_InternalShiftReference self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_InternalShiftReference self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_InternalShiftReference_FindFirstApplicationData_keyval1(Nmr_InternalShiftReference self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_InternalShiftReference self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_InternalShiftReference_FindFirstApplicationData_keyval2(Nmr_InternalShiftReference self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_InternalShiftReference self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_InternalShiftReference_FindFirstApplicationData_keyval3(Nmr_InternalShiftReference self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_InternalShiftReference self
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
extern Impl_ApplicationData Nmr_InternalShiftReference_FindFirstApplicationData_keyval4(Nmr_InternalShiftReference self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.ShiftReference.experiments

Experiments that 
use ShiftReference
  @param  Nmr_InternalShiftReference self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmr_InternalShiftReference_FindFirstExperiment(Nmr_InternalShiftReference self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.ShiftReference.experiments

Experiments that 
use ShiftReference
  @param  Nmr_InternalShiftReference self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmr_InternalShiftReference_FindFirstExperiment_keyval0(Nmr_InternalShiftReference self);

/**
  FindFirst for ccp.nmr.Nmr.ShiftReference.experiments

Experiments that 
use ShiftReference
  @param  Nmr_InternalShiftReference self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmr_InternalShiftReference_FindFirstExperiment_keyval1(Nmr_InternalShiftReference self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.ShiftReference.experiments

Experiments that 
use ShiftReference
  @param  Nmr_InternalShiftReference self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmr_InternalShiftReference_FindFirstExperiment_keyval2(Nmr_InternalShiftReference self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.ShiftReference.experiments

Experiments that 
use ShiftReference
  @param  Nmr_InternalShiftReference self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmr_InternalShiftReference_FindFirstExperiment_keyval3(Nmr_InternalShiftReference self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.ShiftReference.experiments

Experiments that 
use ShiftReference
  @param  Nmr_InternalShiftReference self
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
extern Nmr_Experiment Nmr_InternalShiftReference_FindFirstExperiment_keyval4(Nmr_InternalShiftReference self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.Nmr.InternalShiftReference
  @param  Nmr_InternalShiftReference self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Nmr_InternalShiftReference_Get(Nmr_InternalShiftReference self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_InternalShiftReference self
  @returns   the result
**/
extern Acco_AccessObject Nmr_InternalShiftReference_GetAccess(Nmr_InternalShiftReference self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_InternalShiftReference self
  @returns   the result
**/
extern ApiList Nmr_InternalShiftReference_GetApplicationData(Nmr_InternalShiftReference self);

/**
  Get for ccp.nmr.Nmr.ShiftReference.atomGroup

String describing the atom 
group from the molecule used for referencing.
  @param  Nmr_InternalShiftReference self
  @returns   the result
**/
extern ApiString Nmr_InternalShiftReference_GetAtomGroup(Nmr_InternalShiftReference self);

/**
  GetByKey for ccp.nmr.Nmr.InternalShiftReference
  @param  Nmr_InternalShiftReference self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Nmr_InternalShiftReference Nmr_InternalShiftReference_GetByKey(Nmr_InternalShiftReference self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for ccp.nmr.Nmr.ShiftReference.citation

Citation describing shift 
reference.
  @param  Nmr_InternalShiftReference self
  @returns   the result
**/
extern Cita_Citation Nmr_InternalShiftReference_GetCitation(Nmr_InternalShiftReference self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Nmr_InternalShiftReference self
  @returns   the result
**/
extern ApiString Nmr_InternalShiftReference_GetClassName(Nmr_InternalShiftReference self);

/**
  Get for ccp.nmr.Nmr.ShiftReference.experiments

Experiments that use 
ShiftReference
  @param  Nmr_InternalShiftReference self
  @returns   the result
**/
extern ApiSet Nmr_InternalShiftReference_GetExperiments(Nmr_InternalShiftReference self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Nmr_InternalShiftReference self
  @returns   the result
**/
extern ApiList Nmr_InternalShiftReference_GetFieldNames(Nmr_InternalShiftReference self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Nmr_InternalShiftReference self
  @returns   the result
**/
extern ApiBoolean Nmr_InternalShiftReference_GetInConstructor(Nmr_InternalShiftReference self);

/**
  Get for ccp.nmr.Nmr.ShiftReference.indirectShiftRatio

Ratio between 
nucleus resonance frequency and proton resonance frequency used for 
indirect shift referencing.
  @param  Nmr_InternalShiftReference self
  @returns   the result
**/
extern ApiDouble Nmr_InternalShiftReference_GetIndirectShiftRatio(Nmr_InternalShiftReference self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Nmr_InternalShiftReference self
  @returns   the result
**/
extern ApiBoolean Nmr_InternalShiftReference_GetIsDeleted(Nmr_InternalShiftReference self);

/**
  Get for ccp.nmr.Nmr.ShiftReference.isotope

Isotope being referenced
  @param  Nmr_InternalShiftReference self
  @returns   the result
**/
extern Chel_Isotope Nmr_InternalShiftReference_GetIsotope(Nmr_InternalShiftReference self);

/**
  Get for ccp.nmr.Nmr.ShiftReference.isotopeCode

Isotope code, e.g. '1H', 
'3He','13C','235U' etc.
  @param  Nmr_InternalShiftReference self
  @returns   the result
**/
extern ApiString Nmr_InternalShiftReference_GetIsotopeCode(Nmr_InternalShiftReference self);

/**
  Get for ccp.nmr.Nmr.ShiftReference.molName

Reference compound. To be 
made into enumeration.
  @param  Nmr_InternalShiftReference self
  @returns   the result
**/
extern ApiString Nmr_InternalShiftReference_GetMolName(Nmr_InternalShiftReference self);

/**
  Get for ccp.nmr.Nmr.ShiftReference.nmrProject

parent link
  @param  Nmr_InternalShiftReference self
  @returns   the result
**/
extern Nmr_NmrProject Nmr_InternalShiftReference_GetNmrProject(Nmr_InternalShiftReference self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Nmr_InternalShiftReference self
  @returns   the result
**/
extern ApiString Nmr_InternalShiftReference_GetPackageName(Nmr_InternalShiftReference self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Nmr_InternalShiftReference self
  @returns   the result
**/
extern ApiString Nmr_InternalShiftReference_GetPackageShortName(Nmr_InternalShiftReference self);

/**
  Get for ccp.nmr.Nmr.ShiftReference.parent

link to parent object - 
synonym for nmrProject
  @param  Nmr_InternalShiftReference self
  @returns   the result
**/
extern Nmr_NmrProject Nmr_InternalShiftReference_GetParent(Nmr_InternalShiftReference self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Nmr_InternalShiftReference self
  @returns   the result
**/
extern ApiString Nmr_InternalShiftReference_GetQualifiedName(Nmr_InternalShiftReference self);

/**
  Get for ccp.nmr.Nmr.ShiftReference.referenceType

Is reference direct or 
indiredct?
  @param  Nmr_InternalShiftReference self
  @returns   the result
**/
extern ApiString Nmr_InternalShiftReference_GetReferenceType(Nmr_InternalShiftReference self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Nmr_InternalShiftReference self
  @returns   the result
**/
extern Impl_MemopsRoot Nmr_InternalShiftReference_GetRoot(Nmr_InternalShiftReference self);

/**
  Get for ccp.nmr.Nmr.ShiftReference.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Nmr_InternalShiftReference self
  @returns   the result
**/
extern ApiInteger Nmr_InternalShiftReference_GetSerial(Nmr_InternalShiftReference self);

/**
  Get for ccp.nmr.Nmr.ShiftReference.shiftRatioCitation

Citation for 
shift ratio used for indirect referencing
  @param  Nmr_InternalShiftReference self
  @returns   the result
**/
extern Cita_Citation Nmr_InternalShiftReference_GetShiftRatioCitation(Nmr_InternalShiftReference self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Nmr_InternalShiftReference self
  @returns   the result
**/
extern Impl_TopObject Nmr_InternalShiftReference_GetTopObject(Nmr_InternalShiftReference self);

/**
  Get for ccp.nmr.Nmr.ShiftReference.unit

Unit of shift reference.
  @param  Nmr_InternalShiftReference self
  @returns   the result
**/
extern ApiString Nmr_InternalShiftReference_GetUnit(Nmr_InternalShiftReference self);

/**
  Get for ccp.nmr.Nmr.ShiftReference.value

Value (frequency) of 
reference.
  @param  Nmr_InternalShiftReference self
  @returns   the result
**/
extern ApiFloat Nmr_InternalShiftReference_GetValue(Nmr_InternalShiftReference self);

/**
  Constructor for ccp.nmr.Nmr.InternalShiftReference
  @param  Nmr_NmrProject parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmr_InternalShiftReference Nmr_InternalShiftReference_Init(Nmr_NmrProject parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.Nmr.InternalShiftReference
  @param  Nmr_NmrProject parent
  @param  char * atomGroup
  @param  char * isotopeCode
  @param  char * molName
  @param  char * referenceType
  @param  float value
  @returns  the new object
**/
extern Nmr_InternalShiftReference Nmr_InternalShiftReference_Init_reqd(Nmr_NmrProject parent, char * atomGroup, char * isotopeCode, char * molName, char * referenceType, float value);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_InternalShiftReference self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_InternalShiftReference_RemoveApplicationData(Nmr_InternalShiftReference self, Impl_ApplicationData value);

/**
  Remove for ccp.nmr.Nmr.ShiftReference.experiments

Experiments that use 
ShiftReference
  @param  Nmr_InternalShiftReference self
  @param  Nmr_Experiment value
**/
extern void *Nmr_InternalShiftReference_RemoveExperiment(Nmr_InternalShiftReference self, Nmr_Experiment value);

/**
  SetAttr for ccp.nmr.Nmr.InternalShiftReference
  @param  Nmr_InternalShiftReference self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Nmr_InternalShiftReference_Set(Nmr_InternalShiftReference self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_InternalShiftReference self
  @param  Acco_AccessObject value
**/
extern void *Nmr_InternalShiftReference_SetAccess(Nmr_InternalShiftReference self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_InternalShiftReference self
  @param  ApiList values
**/
extern void *Nmr_InternalShiftReference_SetApplicationData(Nmr_InternalShiftReference self, ApiList values);

/**
  Set for ccp.nmr.Nmr.ShiftReference.atomGroup

String describing the atom 
group from the molecule used for referencing.
  @param  Nmr_InternalShiftReference self
  @param  ApiString value
**/
extern void *Nmr_InternalShiftReference_SetAtomGroup(Nmr_InternalShiftReference self, ApiString value);

/**
  Set for ccp.nmr.Nmr.ShiftReference.citation

Citation describing shift 
reference.
  @param  Nmr_InternalShiftReference self
  @param  Cita_Citation value
**/
extern void *Nmr_InternalShiftReference_SetCitation(Nmr_InternalShiftReference self, Cita_Citation value);

/**
  Set for ccp.nmr.Nmr.ShiftReference.experiments

Experiments that use 
ShiftReference
  @param  Nmr_InternalShiftReference self
  @param  ApiSet values
**/
extern void *Nmr_InternalShiftReference_SetExperiments(Nmr_InternalShiftReference self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.ShiftReference.indirectShiftRatio

Ratio between 
nucleus resonance frequency and proton resonance frequency used for 
indirect shift referencing.
  @param  Nmr_InternalShiftReference self
  @param  ApiDouble value
**/
extern void *Nmr_InternalShiftReference_SetIndirectShiftRatio(Nmr_InternalShiftReference self, ApiDouble value);

/**
  Set for ccp.nmr.Nmr.ShiftReference.isotopeCode

Isotope code, e.g. '1H', 
'3He','13C','235U' etc.
  @param  Nmr_InternalShiftReference self
  @param  ApiString value
**/
extern void *Nmr_InternalShiftReference_SetIsotopeCode(Nmr_InternalShiftReference self, ApiString value);

/**
  Set for ccp.nmr.Nmr.ShiftReference.molName

Reference compound. To be 
made into enumeration.
  @param  Nmr_InternalShiftReference self
  @param  ApiString value
**/
extern void *Nmr_InternalShiftReference_SetMolName(Nmr_InternalShiftReference self, ApiString value);

/**
  Set for ccp.nmr.Nmr.ShiftReference.referenceType

Is reference direct or 
indiredct?
  @param  Nmr_InternalShiftReference self
  @param  ApiString value
**/
extern void *Nmr_InternalShiftReference_SetReferenceType(Nmr_InternalShiftReference self, ApiString value);

/**
  Set for ccp.nmr.Nmr.ShiftReference.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Nmr_InternalShiftReference self
  @param  ApiInteger value
**/
extern void *Nmr_InternalShiftReference_SetSerial(Nmr_InternalShiftReference self, ApiInteger value);

/**
  Set for ccp.nmr.Nmr.ShiftReference.shiftRatioCitation

Citation for 
shift ratio used for indirect referencing
  @param  Nmr_InternalShiftReference self
  @param  Cita_Citation value
**/
extern void *Nmr_InternalShiftReference_SetShiftRatioCitation(Nmr_InternalShiftReference self, Cita_Citation value);

/**
  Set for ccp.nmr.Nmr.ShiftReference.unit

Unit of shift reference.
  @param  Nmr_InternalShiftReference self
  @param  ApiString value
**/
extern void *Nmr_InternalShiftReference_SetUnit(Nmr_InternalShiftReference self, ApiString value);

/**
  Set for ccp.nmr.Nmr.ShiftReference.value

Value (frequency) of 
reference.
  @param  Nmr_InternalShiftReference self
  @param  ApiFloat value
**/
extern void *Nmr_InternalShiftReference_SetValue(Nmr_InternalShiftReference self, ApiFloat value);

/**
  Sorted for ccp.nmr.Nmr.ShiftReference.experiments

Experiments that use 
ShiftReference
  @param  Nmr_InternalShiftReference self
  @returns   the result
**/
extern ApiList Nmr_InternalShiftReference_SortedExperiments(Nmr_InternalShiftReference self);

#endif /* __incl__ccp_api_nmr_Nmr_InternalShiftReference_h__ */
