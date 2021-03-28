
#ifndef __incl__ccp_api_nmr_Nmr_ShiftReference_h__
#define __incl__ccp_api_nmr_Nmr_ShiftReference_h__

#include "ccp.h"

/*
  Chemical Shift referencing. The reference actually used (not the one quoted against).
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ShiftReference self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_ShiftReference_AddApplicationData(Nmr_ShiftReference self, Impl_ApplicationData value);

/**
  Add for ccp.nmr.Nmr.ShiftReference.experiments

Experiments that use 
ShiftReference
  @param  Nmr_ShiftReference self
  @param  Nmr_Experiment value
**/
extern void *Nmr_ShiftReference_AddExperiment(Nmr_ShiftReference self, Nmr_Experiment value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ShiftReference self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_ShiftReference_FindAllApplicationData(Nmr_ShiftReference self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ShiftReference self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_ShiftReference_FindAllApplicationData_keyval0(Nmr_ShiftReference self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ShiftReference self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_ShiftReference_FindAllApplicationData_keyval1(Nmr_ShiftReference self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ShiftReference self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_ShiftReference_FindAllApplicationData_keyval2(Nmr_ShiftReference self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ShiftReference self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_ShiftReference_FindAllApplicationData_keyval3(Nmr_ShiftReference self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ShiftReference self
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
extern ApiList Nmr_ShiftReference_FindAllApplicationData_keyval4(Nmr_ShiftReference self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.ShiftReference.experiments

Experiments that use 
ShiftReference
  @param  Nmr_ShiftReference self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ShiftReference_FindAllExperiments(Nmr_ShiftReference self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.ShiftReference.experiments

Experiments that use 
ShiftReference
  @param  Nmr_ShiftReference self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ShiftReference_FindAllExperiments_keyval0(Nmr_ShiftReference self);

/**
  FindAll for ccp.nmr.Nmr.ShiftReference.experiments

Experiments that use 
ShiftReference
  @param  Nmr_ShiftReference self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ShiftReference_FindAllExperiments_keyval1(Nmr_ShiftReference self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.ShiftReference.experiments

Experiments that use 
ShiftReference
  @param  Nmr_ShiftReference self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ShiftReference_FindAllExperiments_keyval2(Nmr_ShiftReference self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.ShiftReference.experiments

Experiments that use 
ShiftReference
  @param  Nmr_ShiftReference self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ShiftReference_FindAllExperiments_keyval3(Nmr_ShiftReference self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.ShiftReference.experiments

Experiments that use 
ShiftReference
  @param  Nmr_ShiftReference self
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
extern ApiSet Nmr_ShiftReference_FindAllExperiments_keyval4(Nmr_ShiftReference self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ShiftReference self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_ShiftReference_FindFirstApplicationData(Nmr_ShiftReference self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ShiftReference self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_ShiftReference_FindFirstApplicationData_keyval0(Nmr_ShiftReference self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ShiftReference self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_ShiftReference_FindFirstApplicationData_keyval1(Nmr_ShiftReference self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ShiftReference self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_ShiftReference_FindFirstApplicationData_keyval2(Nmr_ShiftReference self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ShiftReference self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_ShiftReference_FindFirstApplicationData_keyval3(Nmr_ShiftReference self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ShiftReference self
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
extern Impl_ApplicationData Nmr_ShiftReference_FindFirstApplicationData_keyval4(Nmr_ShiftReference self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.ShiftReference.experiments

Experiments that 
use ShiftReference
  @param  Nmr_ShiftReference self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmr_ShiftReference_FindFirstExperiment(Nmr_ShiftReference self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.ShiftReference.experiments

Experiments that 
use ShiftReference
  @param  Nmr_ShiftReference self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmr_ShiftReference_FindFirstExperiment_keyval0(Nmr_ShiftReference self);

/**
  FindFirst for ccp.nmr.Nmr.ShiftReference.experiments

Experiments that 
use ShiftReference
  @param  Nmr_ShiftReference self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmr_ShiftReference_FindFirstExperiment_keyval1(Nmr_ShiftReference self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.ShiftReference.experiments

Experiments that 
use ShiftReference
  @param  Nmr_ShiftReference self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmr_ShiftReference_FindFirstExperiment_keyval2(Nmr_ShiftReference self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.ShiftReference.experiments

Experiments that 
use ShiftReference
  @param  Nmr_ShiftReference self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmr_ShiftReference_FindFirstExperiment_keyval3(Nmr_ShiftReference self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.ShiftReference.experiments

Experiments that 
use ShiftReference
  @param  Nmr_ShiftReference self
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
extern Nmr_Experiment Nmr_ShiftReference_FindFirstExperiment_keyval4(Nmr_ShiftReference self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_ShiftReference self
  @returns   the result
**/
extern Acco_AccessObject Nmr_ShiftReference_GetAccess(Nmr_ShiftReference self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ShiftReference self
  @returns   the result
**/
extern ApiList Nmr_ShiftReference_GetApplicationData(Nmr_ShiftReference self);

/**
  Get for ccp.nmr.Nmr.ShiftReference.atomGroup

String describing the atom 
group from the molecule used for referencing.
  @param  Nmr_ShiftReference self
  @returns   the result
**/
extern ApiString Nmr_ShiftReference_GetAtomGroup(Nmr_ShiftReference self);

/**
  GetByKey for ccp.nmr.Nmr.ShiftReference
  @param  Nmr_ShiftReference self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Nmr_ShiftReference Nmr_ShiftReference_GetByKey(Nmr_ShiftReference self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for ccp.nmr.Nmr.ShiftReference.citation

Citation describing shift 
reference.
  @param  Nmr_ShiftReference self
  @returns   the result
**/
extern Cita_Citation Nmr_ShiftReference_GetCitation(Nmr_ShiftReference self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Nmr_ShiftReference self
  @returns   the result
**/
extern ApiString Nmr_ShiftReference_GetClassName(Nmr_ShiftReference self);

/**
  Get for ccp.nmr.Nmr.ShiftReference.experiments

Experiments that use 
ShiftReference
  @param  Nmr_ShiftReference self
  @returns   the result
**/
extern ApiSet Nmr_ShiftReference_GetExperiments(Nmr_ShiftReference self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Nmr_ShiftReference self
  @returns   the result
**/
extern ApiList Nmr_ShiftReference_GetFieldNames(Nmr_ShiftReference self);

/**
  GetFullKey for ccp.nmr.Nmr.ShiftReference
  @param  Nmr_ShiftReference self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Nmr_ShiftReference_GetFullKey(Nmr_ShiftReference self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Nmr_ShiftReference self
  @returns   the result
**/
extern ApiBoolean Nmr_ShiftReference_GetInConstructor(Nmr_ShiftReference self);

/**
  Get for ccp.nmr.Nmr.ShiftReference.indirectShiftRatio

Ratio between 
nucleus resonance frequency and proton resonance frequency used for 
indirect shift referencing.
  @param  Nmr_ShiftReference self
  @returns   the result
**/
extern ApiDouble Nmr_ShiftReference_GetIndirectShiftRatio(Nmr_ShiftReference self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Nmr_ShiftReference self
  @returns   the result
**/
extern ApiBoolean Nmr_ShiftReference_GetIsDeleted(Nmr_ShiftReference self);

/**
  getter function for derived link Isotope
  @param  Nmr_ShiftReference self
  @returns   the result
**/
extern Chel_Isotope Nmr_ShiftReference_GetIsotope(Nmr_ShiftReference self);

/**
  Get for ccp.nmr.Nmr.ShiftReference.isotopeCode

Isotope code, e.g. '1H', 
'3He','13C','235U' etc.
  @param  Nmr_ShiftReference self
  @returns   the result
**/
extern ApiString Nmr_ShiftReference_GetIsotopeCode(Nmr_ShiftReference self);

/**
  GetLocalKey for ccp.nmr.Nmr.ShiftReference
  @param  Nmr_ShiftReference self
  @returns  Local object key
**/
extern ApiObject Nmr_ShiftReference_GetLocalKey(Nmr_ShiftReference self);

/**
  Get for ccp.nmr.Nmr.ShiftReference.molName

Reference compound. To be 
made into enumeration.
  @param  Nmr_ShiftReference self
  @returns   the result
**/
extern ApiString Nmr_ShiftReference_GetMolName(Nmr_ShiftReference self);

/**
  Get for ccp.nmr.Nmr.ShiftReference.nmrProject

parent link
  @param  Nmr_ShiftReference self
  @returns   the result
**/
extern Nmr_NmrProject Nmr_ShiftReference_GetNmrProject(Nmr_ShiftReference self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Nmr_ShiftReference self
  @returns   the result
**/
extern ApiString Nmr_ShiftReference_GetPackageName(Nmr_ShiftReference self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Nmr_ShiftReference self
  @returns   the result
**/
extern ApiString Nmr_ShiftReference_GetPackageShortName(Nmr_ShiftReference self);

/**
  Get for ccp.nmr.Nmr.ShiftReference.parent

link to parent object - 
synonym for nmrProject
  @param  Nmr_ShiftReference self
  @returns   the result
**/
extern Nmr_NmrProject Nmr_ShiftReference_GetParent(Nmr_ShiftReference self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Nmr_ShiftReference self
  @returns   the result
**/
extern ApiString Nmr_ShiftReference_GetQualifiedName(Nmr_ShiftReference self);

/**
  Get for ccp.nmr.Nmr.ShiftReference.referenceType

Is reference direct or 
indiredct?
  @param  Nmr_ShiftReference self
  @returns   the result
**/
extern ApiString Nmr_ShiftReference_GetReferenceType(Nmr_ShiftReference self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Nmr_ShiftReference self
  @returns   the result
**/
extern Impl_MemopsRoot Nmr_ShiftReference_GetRoot(Nmr_ShiftReference self);

/**
  Get for ccp.nmr.Nmr.ShiftReference.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Nmr_ShiftReference self
  @returns   the result
**/
extern ApiInteger Nmr_ShiftReference_GetSerial(Nmr_ShiftReference self);

/**
  Get for ccp.nmr.Nmr.ShiftReference.shiftRatioCitation

Citation for 
shift ratio used for indirect referencing
  @param  Nmr_ShiftReference self
  @returns   the result
**/
extern Cita_Citation Nmr_ShiftReference_GetShiftRatioCitation(Nmr_ShiftReference self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Nmr_ShiftReference self
  @returns   the result
**/
extern Impl_TopObject Nmr_ShiftReference_GetTopObject(Nmr_ShiftReference self);

/**
  Get for ccp.nmr.Nmr.ShiftReference.unit

Unit of shift reference.
  @param  Nmr_ShiftReference self
  @returns   the result
**/
extern ApiString Nmr_ShiftReference_GetUnit(Nmr_ShiftReference self);

/**
  Get for ccp.nmr.Nmr.ShiftReference.value

Value (frequency) of 
reference.
  @param  Nmr_ShiftReference self
  @returns   the result
**/
extern ApiFloat Nmr_ShiftReference_GetValue(Nmr_ShiftReference self);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ShiftReference self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_ShiftReference_RemoveApplicationData(Nmr_ShiftReference self, Impl_ApplicationData value);

/**
  Remove for ccp.nmr.Nmr.ShiftReference.experiments

Experiments that use 
ShiftReference
  @param  Nmr_ShiftReference self
  @param  Nmr_Experiment value
**/
extern void *Nmr_ShiftReference_RemoveExperiment(Nmr_ShiftReference self, Nmr_Experiment value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_ShiftReference self
  @param  Acco_AccessObject value
**/
extern void *Nmr_ShiftReference_SetAccess(Nmr_ShiftReference self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ShiftReference self
  @param  ApiList values
**/
extern void *Nmr_ShiftReference_SetApplicationData(Nmr_ShiftReference self, ApiList values);

/**
  Set for ccp.nmr.Nmr.ShiftReference.atomGroup

String describing the atom 
group from the molecule used for referencing.
  @param  Nmr_ShiftReference self
  @param  ApiString value
**/
extern void *Nmr_ShiftReference_SetAtomGroup(Nmr_ShiftReference self, ApiString value);

/**
  Set for ccp.nmr.Nmr.ShiftReference.citation

Citation describing shift 
reference.
  @param  Nmr_ShiftReference self
  @param  Cita_Citation value
**/
extern void *Nmr_ShiftReference_SetCitation(Nmr_ShiftReference self, Cita_Citation value);

/**
  Set for ccp.nmr.Nmr.ShiftReference.experiments

Experiments that use 
ShiftReference
  @param  Nmr_ShiftReference self
  @param  ApiSet values
**/
extern void *Nmr_ShiftReference_SetExperiments(Nmr_ShiftReference self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.ShiftReference.indirectShiftRatio

Ratio between 
nucleus resonance frequency and proton resonance frequency used for 
indirect shift referencing.
  @param  Nmr_ShiftReference self
  @param  ApiDouble value
**/
extern void *Nmr_ShiftReference_SetIndirectShiftRatio(Nmr_ShiftReference self, ApiDouble value);

/**
  Set for ccp.nmr.Nmr.ShiftReference.isotopeCode

Isotope code, e.g. '1H', 
'3He','13C','235U' etc.
  @param  Nmr_ShiftReference self
  @param  ApiString value
**/
extern void *Nmr_ShiftReference_SetIsotopeCode(Nmr_ShiftReference self, ApiString value);

/**
  Set for ccp.nmr.Nmr.ShiftReference.molName

Reference compound. To be 
made into enumeration.
  @param  Nmr_ShiftReference self
  @param  ApiString value
**/
extern void *Nmr_ShiftReference_SetMolName(Nmr_ShiftReference self, ApiString value);

/**
  Set for ccp.nmr.Nmr.ShiftReference.referenceType

Is reference direct or 
indiredct?
  @param  Nmr_ShiftReference self
  @param  ApiString value
**/
extern void *Nmr_ShiftReference_SetReferenceType(Nmr_ShiftReference self, ApiString value);

/**
  Set for ccp.nmr.Nmr.ShiftReference.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Nmr_ShiftReference self
  @param  ApiInteger value
**/
extern void *Nmr_ShiftReference_SetSerial(Nmr_ShiftReference self, ApiInteger value);

/**
  Set for ccp.nmr.Nmr.ShiftReference.shiftRatioCitation

Citation for 
shift ratio used for indirect referencing
  @param  Nmr_ShiftReference self
  @param  Cita_Citation value
**/
extern void *Nmr_ShiftReference_SetShiftRatioCitation(Nmr_ShiftReference self, Cita_Citation value);

/**
  Set for ccp.nmr.Nmr.ShiftReference.unit

Unit of shift reference.
  @param  Nmr_ShiftReference self
  @param  ApiString value
**/
extern void *Nmr_ShiftReference_SetUnit(Nmr_ShiftReference self, ApiString value);

/**
  Set for ccp.nmr.Nmr.ShiftReference.value

Value (frequency) of 
reference.
  @param  Nmr_ShiftReference self
  @param  ApiFloat value
**/
extern void *Nmr_ShiftReference_SetValue(Nmr_ShiftReference self, ApiFloat value);

/**
  Sorted for ccp.nmr.Nmr.ShiftReference.experiments

Experiments that use 
ShiftReference
  @param  Nmr_ShiftReference self
  @returns   the result
**/
extern ApiList Nmr_ShiftReference_SortedExperiments(Nmr_ShiftReference self);

#endif /* __incl__ccp_api_nmr_Nmr_ShiftReference_h__ */
