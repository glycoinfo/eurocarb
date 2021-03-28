
#ifndef __incl__ccp_api_general_Instrument_NmrProbe_h__
#define __incl__ccp_api_general_Instrument_NmrProbe_h__

#include "ccp.h"

/*
  NMR probe used. 
*/

/* package ccp.api.general.Instrument */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_NmrProbe self
  @param  Impl_ApplicationData value
**/
extern void *Inst_NmrProbe_AddApplicationData(Inst_NmrProbe self, Impl_ApplicationData value);

/**
  Add for ccp.general.Instrument.NmrProbe.experiments

Experiments 
acquired with probe.
  @param  Inst_NmrProbe self
  @param  Nmr_Experiment value
**/
extern void *Inst_NmrProbe_AddExperiment(Inst_NmrProbe self, Nmr_Experiment value);

/**
  CheckAllValid for ccp.general.Instrument.NmrProbe
  @param  Inst_NmrProbe self
  @param  ApiBoolean complete
**/
extern void *Inst_NmrProbe_CheckAllValid(Inst_NmrProbe self, ApiBoolean complete);

/**
  CheckValid for ccp.general.Instrument.NmrProbe
  @param  Inst_NmrProbe self
  @param  ApiBoolean complete
**/
extern void *Inst_NmrProbe_CheckValid(Inst_NmrProbe self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_NmrProbe self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Inst_NmrProbe_FindAllApplicationData(Inst_NmrProbe self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_NmrProbe self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Inst_NmrProbe_FindAllApplicationData_keyval0(Inst_NmrProbe self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_NmrProbe self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Inst_NmrProbe_FindAllApplicationData_keyval1(Inst_NmrProbe self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_NmrProbe self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Inst_NmrProbe_FindAllApplicationData_keyval2(Inst_NmrProbe self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_NmrProbe self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Inst_NmrProbe_FindAllApplicationData_keyval3(Inst_NmrProbe self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_NmrProbe self
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
extern ApiList Inst_NmrProbe_FindAllApplicationData_keyval4(Inst_NmrProbe self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Instrument.NmrProbe.citations

Citations 
describing Nmr Probe
  @param  Inst_NmrProbe self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Inst_NmrProbe_FindAllCitations(Inst_NmrProbe self, ApiMap conditions);

/**
  FindAll for ccp.general.Instrument.NmrProbe.citations

Citations 
describing Nmr Probe
  @param  Inst_NmrProbe self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Inst_NmrProbe_FindAllCitations_keyval0(Inst_NmrProbe self);

/**
  FindAll for ccp.general.Instrument.NmrProbe.citations

Citations 
describing Nmr Probe
  @param  Inst_NmrProbe self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Inst_NmrProbe_FindAllCitations_keyval1(Inst_NmrProbe self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Instrument.NmrProbe.citations

Citations 
describing Nmr Probe
  @param  Inst_NmrProbe self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Inst_NmrProbe_FindAllCitations_keyval2(Inst_NmrProbe self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Instrument.NmrProbe.citations

Citations 
describing Nmr Probe
  @param  Inst_NmrProbe self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Inst_NmrProbe_FindAllCitations_keyval3(Inst_NmrProbe self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Instrument.NmrProbe.citations

Citations 
describing Nmr Probe
  @param  Inst_NmrProbe self
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
extern ApiSet Inst_NmrProbe_FindAllCitations_keyval4(Inst_NmrProbe self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Instrument.NmrProbe.experiments

Experiments 
acquired with probe.
  @param  Inst_NmrProbe self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Inst_NmrProbe_FindAllExperiments(Inst_NmrProbe self, ApiMap conditions);

/**
  FindAll for ccp.general.Instrument.NmrProbe.experiments

Experiments 
acquired with probe.
  @param  Inst_NmrProbe self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Inst_NmrProbe_FindAllExperiments_keyval0(Inst_NmrProbe self);

/**
  FindAll for ccp.general.Instrument.NmrProbe.experiments

Experiments 
acquired with probe.
  @param  Inst_NmrProbe self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Inst_NmrProbe_FindAllExperiments_keyval1(Inst_NmrProbe self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Instrument.NmrProbe.experiments

Experiments 
acquired with probe.
  @param  Inst_NmrProbe self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Inst_NmrProbe_FindAllExperiments_keyval2(Inst_NmrProbe self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Instrument.NmrProbe.experiments

Experiments 
acquired with probe.
  @param  Inst_NmrProbe self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Inst_NmrProbe_FindAllExperiments_keyval3(Inst_NmrProbe self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Instrument.NmrProbe.experiments

Experiments 
acquired with probe.
  @param  Inst_NmrProbe self
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
extern ApiSet Inst_NmrProbe_FindAllExperiments_keyval4(Inst_NmrProbe self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_NmrProbe self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Inst_NmrProbe_FindFirstApplicationData(Inst_NmrProbe self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_NmrProbe self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Inst_NmrProbe_FindFirstApplicationData_keyval0(Inst_NmrProbe self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_NmrProbe self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Inst_NmrProbe_FindFirstApplicationData_keyval1(Inst_NmrProbe self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_NmrProbe self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Inst_NmrProbe_FindFirstApplicationData_keyval2(Inst_NmrProbe self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_NmrProbe self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Inst_NmrProbe_FindFirstApplicationData_keyval3(Inst_NmrProbe self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_NmrProbe self
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
extern Impl_ApplicationData Inst_NmrProbe_FindFirstApplicationData_keyval4(Inst_NmrProbe self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Instrument.NmrProbe.citations

Citations 
describing Nmr Probe
  @param  Inst_NmrProbe self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Cita_Citation Inst_NmrProbe_FindFirstCitation(Inst_NmrProbe self, ApiMap conditions);

/**
  FindFirst for ccp.general.Instrument.NmrProbe.citations

Citations 
describing Nmr Probe
  @param  Inst_NmrProbe self
  @returns  the first value that satisfies the conditions 
**/
extern Cita_Citation Inst_NmrProbe_FindFirstCitation_keyval0(Inst_NmrProbe self);

/**
  FindFirst for ccp.general.Instrument.NmrProbe.citations

Citations 
describing Nmr Probe
  @param  Inst_NmrProbe self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Cita_Citation Inst_NmrProbe_FindFirstCitation_keyval1(Inst_NmrProbe self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Instrument.NmrProbe.citations

Citations 
describing Nmr Probe
  @param  Inst_NmrProbe self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Cita_Citation Inst_NmrProbe_FindFirstCitation_keyval2(Inst_NmrProbe self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Instrument.NmrProbe.citations

Citations 
describing Nmr Probe
  @param  Inst_NmrProbe self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Cita_Citation Inst_NmrProbe_FindFirstCitation_keyval3(Inst_NmrProbe self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Instrument.NmrProbe.citations

Citations 
describing Nmr Probe
  @param  Inst_NmrProbe self
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
extern Cita_Citation Inst_NmrProbe_FindFirstCitation_keyval4(Inst_NmrProbe self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Instrument.NmrProbe.experiments

Experiments 
acquired with probe.
  @param  Inst_NmrProbe self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Inst_NmrProbe_FindFirstExperiment(Inst_NmrProbe self, ApiMap conditions);

/**
  FindFirst for ccp.general.Instrument.NmrProbe.experiments

Experiments 
acquired with probe.
  @param  Inst_NmrProbe self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Inst_NmrProbe_FindFirstExperiment_keyval0(Inst_NmrProbe self);

/**
  FindFirst for ccp.general.Instrument.NmrProbe.experiments

Experiments 
acquired with probe.
  @param  Inst_NmrProbe self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Inst_NmrProbe_FindFirstExperiment_keyval1(Inst_NmrProbe self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Instrument.NmrProbe.experiments

Experiments 
acquired with probe.
  @param  Inst_NmrProbe self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Inst_NmrProbe_FindFirstExperiment_keyval2(Inst_NmrProbe self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Instrument.NmrProbe.experiments

Experiments 
acquired with probe.
  @param  Inst_NmrProbe self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Inst_NmrProbe_FindFirstExperiment_keyval3(Inst_NmrProbe self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Instrument.NmrProbe.experiments

Experiments 
acquired with probe.
  @param  Inst_NmrProbe self
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
extern Nmr_Experiment Inst_NmrProbe_FindFirstExperiment_keyval4(Inst_NmrProbe self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.general.Instrument.NmrProbe
  @param  Inst_NmrProbe self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Inst_NmrProbe_Get(Inst_NmrProbe self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Inst_NmrProbe self
  @returns   the result
**/
extern Acco_AccessObject Inst_NmrProbe_GetAccess(Inst_NmrProbe self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Inst_NmrProbe self
  @returns   the result
**/
extern Acco_AccessObject Inst_NmrProbe_GetActiveAccess(Inst_NmrProbe self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_NmrProbe self
  @returns   the result
**/
extern ApiList Inst_NmrProbe_GetApplicationData(Inst_NmrProbe self);

/**
  GetByKey for ccp.general.Instrument.NmrProbe
  @param  Inst_NmrProbe self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Inst_NmrProbe Inst_NmrProbe_GetByKey(Inst_NmrProbe self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for ccp.general.Instrument.NmrProbe.citations

Citations describing 
Nmr Probe
  @param  Inst_NmrProbe self
  @returns   the result
**/
extern ApiSet Inst_NmrProbe_GetCitations(Inst_NmrProbe self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Inst_NmrProbe self
  @returns   the result
**/
extern ApiString Inst_NmrProbe_GetClassName(Inst_NmrProbe self);

/**
  Get for ccp.general.Instrument.AbstractInstrument.contactPerson

This is 
the contact person in the company.
  @param  Inst_NmrProbe self
  @returns   the result
**/
extern Affi_Person Inst_NmrProbe_GetContactPerson(Inst_NmrProbe self);

/**
  Get for ccp.general.Instrument.AbstractInstrument.details

Free text, 
for notes, explanatory comments, etc.
  @param  Inst_NmrProbe self
  @returns   the result
**/
extern ApiString Inst_NmrProbe_GetDetails(Inst_NmrProbe self);

/**
  Get for ccp.general.Instrument.NmrProbe.diameter

Probe diameter in cm.
  @param  Inst_NmrProbe self
  @returns   the result
**/
extern ApiFloat Inst_NmrProbe_GetDiameter(Inst_NmrProbe self);

/**
  Get for ccp.general.Instrument.NmrProbe.experiments

Experiments 
acquired with probe.
  @param  Inst_NmrProbe self
  @returns   the result
**/
extern ApiSet Inst_NmrProbe_GetExperiments(Inst_NmrProbe self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Inst_NmrProbe self
  @returns   the result
**/
extern ApiList Inst_NmrProbe_GetFieldNames(Inst_NmrProbe self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Inst_NmrProbe self
  @returns   the result
**/
extern ApiBoolean Inst_NmrProbe_GetInConstructor(Inst_NmrProbe self);

/**
  Get for 
ccp.general.Instrument.AbstractInstrument.instrumentStore

parent link
  @param  Inst_NmrProbe self
  @returns   the result
**/
extern Inst_InstrumentStore Inst_NmrProbe_GetInstrumentStore(Inst_NmrProbe self);

/**
  Get for ccp.general.Instrument.NmrProbe.instrumentType

Instrument type 
- must be left as the default 'NmrProbe'
  @param  Inst_NmrProbe self
  @returns   the result
**/
extern ApiString Inst_NmrProbe_GetInstrumentType(Inst_NmrProbe self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Inst_NmrProbe self
  @returns   the result
**/
extern ApiBoolean Inst_NmrProbe_GetIsDeleted(Inst_NmrProbe self);

/**
  Get for ccp.general.Instrument.AbstractInstrument.manufacturer

The name 
of the manufacturer of the instrument.
  @param  Inst_NmrProbe self
  @returns   the result
**/
extern Affi_Organisation Inst_NmrProbe_GetManufacturer(Inst_NmrProbe self);

/**
  Get for ccp.general.Instrument.AbstractInstrument.model

The model of 
the instrument.
  @param  Inst_NmrProbe self
  @returns   the result
**/
extern ApiString Inst_NmrProbe_GetModel(Inst_NmrProbe self);

/**
  Get for ccp.general.Instrument.AbstractInstrument.name

The name of the 
instrument.
  @param  Inst_NmrProbe self
  @returns   the result
**/
extern ApiString Inst_NmrProbe_GetName(Inst_NmrProbe self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Inst_NmrProbe self
  @returns   the result
**/
extern ApiString Inst_NmrProbe_GetPackageName(Inst_NmrProbe self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Inst_NmrProbe self
  @returns   the result
**/
extern ApiString Inst_NmrProbe_GetPackageShortName(Inst_NmrProbe self);

/**
  Get for ccp.general.Instrument.AbstractInstrument.parent

link to parent 
object - synonym for instrumentStore
  @param  Inst_NmrProbe self
  @returns   the result
**/
extern Inst_InstrumentStore Inst_NmrProbe_GetParent(Inst_NmrProbe self);

/**
  Get for ccp.general.Instrument.NmrProbe.probeType

Probe type.
  @param  Inst_NmrProbe self
  @returns   the result
**/
extern ApiString Inst_NmrProbe_GetProbeType(Inst_NmrProbe self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Inst_NmrProbe self
  @returns   the result
**/
extern ApiString Inst_NmrProbe_GetQualifiedName(Inst_NmrProbe self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Inst_NmrProbe self
  @returns   the result
**/
extern Impl_MemopsRoot Inst_NmrProbe_GetRoot(Inst_NmrProbe self);

/**
  Get for ccp.general.Instrument.AbstractInstrument.serial

Serial number 
of object. Serves as object main key. Serial numbers of deleted objects 
are not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Inst_NmrProbe self
  @returns   the result
**/
extern ApiInteger Inst_NmrProbe_GetSerial(Inst_NmrProbe self);

/**
  Get for 
ccp.general.Instrument.AbstractInstrument.serialNumber

Instrument 
'serial number'. A string that uniquely identifies a given instrument.
  @param  Inst_NmrProbe self
  @returns   the result
**/
extern ApiString Inst_NmrProbe_GetSerialNumber(Inst_NmrProbe self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Inst_NmrProbe self
  @returns   the result
**/
extern Impl_TopObject Inst_NmrProbe_GetTopObject(Inst_NmrProbe self);

/**
  Constructor for ccp.general.Instrument.NmrProbe
  @param  Inst_InstrumentStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Inst_NmrProbe Inst_NmrProbe_Init(Inst_InstrumentStore parent, ApiMap attrlinks);

/**
  Constructor for ccp.general.Instrument.NmrProbe
  @param  Inst_InstrumentStore parent
  @param  char * name
  @returns  the new object
**/
extern Inst_NmrProbe Inst_NmrProbe_Init_reqd(Inst_InstrumentStore parent, char * name);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_NmrProbe self
  @param  Impl_ApplicationData value
**/
extern void *Inst_NmrProbe_RemoveApplicationData(Inst_NmrProbe self, Impl_ApplicationData value);

/**
  Remove for ccp.general.Instrument.NmrProbe.experiments

Experiments 
acquired with probe.
  @param  Inst_NmrProbe self
  @param  Nmr_Experiment value
**/
extern void *Inst_NmrProbe_RemoveExperiment(Inst_NmrProbe self, Nmr_Experiment value);

/**
  SetAttr for ccp.general.Instrument.NmrProbe
  @param  Inst_NmrProbe self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Inst_NmrProbe_Set(Inst_NmrProbe self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Inst_NmrProbe self
  @param  Acco_AccessObject value
**/
extern void *Inst_NmrProbe_SetAccess(Inst_NmrProbe self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_NmrProbe self
  @param  ApiList values
**/
extern void *Inst_NmrProbe_SetApplicationData(Inst_NmrProbe self, ApiList values);

/**
  Set for ccp.general.Instrument.NmrProbe.citations

Citations describing 
Nmr Probe
  @param  Inst_NmrProbe self
  @param  ApiSet values
**/
extern void *Inst_NmrProbe_SetCitations(Inst_NmrProbe self, ApiSet values);

/**
  Set for ccp.general.Instrument.AbstractInstrument.contactPerson

This is 
the contact person in the company.
  @param  Inst_NmrProbe self
  @param  Affi_Person value
**/
extern void *Inst_NmrProbe_SetContactPerson(Inst_NmrProbe self, Affi_Person value);

/**
  Set for ccp.general.Instrument.AbstractInstrument.details

Free text, 
for notes, explanatory comments, etc.
  @param  Inst_NmrProbe self
  @param  ApiString value
**/
extern void *Inst_NmrProbe_SetDetails(Inst_NmrProbe self, ApiString value);

/**
  Set for ccp.general.Instrument.NmrProbe.diameter

Probe diameter in cm.
  @param  Inst_NmrProbe self
  @param  ApiFloat value
**/
extern void *Inst_NmrProbe_SetDiameter(Inst_NmrProbe self, ApiFloat value);

/**
  Set for ccp.general.Instrument.NmrProbe.experiments

Experiments 
acquired with probe.
  @param  Inst_NmrProbe self
  @param  ApiSet values
**/
extern void *Inst_NmrProbe_SetExperiments(Inst_NmrProbe self, ApiSet values);

/**
  Set for ccp.general.Instrument.NmrProbe.instrumentType

Instrument type 
- must be left as the default 'NmrProbe'
  @param  Inst_NmrProbe self
  @param  ApiString value
**/
extern void *Inst_NmrProbe_SetInstrumentType(Inst_NmrProbe self, ApiString value);

/**
  Set for ccp.general.Instrument.AbstractInstrument.manufacturer

The name 
of the manufacturer of the instrument.
  @param  Inst_NmrProbe self
  @param  Affi_Organisation value
**/
extern void *Inst_NmrProbe_SetManufacturer(Inst_NmrProbe self, Affi_Organisation value);

/**
  Set for ccp.general.Instrument.AbstractInstrument.model

The model of 
the instrument.
  @param  Inst_NmrProbe self
  @param  ApiString value
**/
extern void *Inst_NmrProbe_SetModel(Inst_NmrProbe self, ApiString value);

/**
  Set for ccp.general.Instrument.AbstractInstrument.name

The name of the 
instrument.
  @param  Inst_NmrProbe self
  @param  ApiString value
**/
extern void *Inst_NmrProbe_SetName(Inst_NmrProbe self, ApiString value);

/**
  Set for ccp.general.Instrument.NmrProbe.probeType

Probe type.
  @param  Inst_NmrProbe self
  @param  ApiString value
**/
extern void *Inst_NmrProbe_SetProbeType(Inst_NmrProbe self, ApiString value);

/**
  Set for ccp.general.Instrument.AbstractInstrument.serial

Serial number 
of object. Serves as object main key. Serial numbers of deleted objects 
are not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Inst_NmrProbe self
  @param  ApiInteger value
**/
extern void *Inst_NmrProbe_SetSerial(Inst_NmrProbe self, ApiInteger value);

/**
  Set for 
ccp.general.Instrument.AbstractInstrument.serialNumber

Instrument 
'serial number'. A string that uniquely identifies a given instrument.
  @param  Inst_NmrProbe self
  @param  ApiString value
**/
extern void *Inst_NmrProbe_SetSerialNumber(Inst_NmrProbe self, ApiString value);

/**
  Sorted for ccp.general.Instrument.NmrProbe.citations

Citations 
describing Nmr Probe
  @param  Inst_NmrProbe self
  @returns   the result
**/
extern ApiList Inst_NmrProbe_SortedCitations(Inst_NmrProbe self);

/**
  Sorted for ccp.general.Instrument.NmrProbe.experiments

Experiments 
acquired with probe.
  @param  Inst_NmrProbe self
  @returns   the result
**/
extern ApiList Inst_NmrProbe_SortedExperiments(Inst_NmrProbe self);

#endif /* __incl__ccp_api_general_Instrument_NmrProbe_h__ */
