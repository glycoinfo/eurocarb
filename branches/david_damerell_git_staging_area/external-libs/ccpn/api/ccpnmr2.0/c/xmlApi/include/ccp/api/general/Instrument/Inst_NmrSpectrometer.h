
#ifndef __incl__ccp_api_general_Instrument_NmrSpectrometer_h__
#define __incl__ccp_api_general_Instrument_NmrSpectrometer_h__

#include "ccp.h"

/*
  Nmr Spectrometer used for data acquisition during a Project. 
*/

/* package ccp.api.general.Instrument */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_NmrSpectrometer self
  @param  Impl_ApplicationData value
**/
extern void *Inst_NmrSpectrometer_AddApplicationData(Inst_NmrSpectrometer self, Impl_ApplicationData value);

/**
  Add for ccp.general.Instrument.NmrSpectrometer.experiments

Nmr 
Experiments carried out on spectrometer.
  @param  Inst_NmrSpectrometer self
  @param  Nmr_Experiment value
**/
extern void *Inst_NmrSpectrometer_AddExperiment(Inst_NmrSpectrometer self, Nmr_Experiment value);

/**
  CheckAllValid for ccp.general.Instrument.NmrSpectrometer
  @param  Inst_NmrSpectrometer self
  @param  ApiBoolean complete
**/
extern void *Inst_NmrSpectrometer_CheckAllValid(Inst_NmrSpectrometer self, ApiBoolean complete);

/**
  CheckValid for ccp.general.Instrument.NmrSpectrometer
  @param  Inst_NmrSpectrometer self
  @param  ApiBoolean complete
**/
extern void *Inst_NmrSpectrometer_CheckValid(Inst_NmrSpectrometer self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_NmrSpectrometer self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Inst_NmrSpectrometer_FindAllApplicationData(Inst_NmrSpectrometer self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_NmrSpectrometer self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Inst_NmrSpectrometer_FindAllApplicationData_keyval0(Inst_NmrSpectrometer self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_NmrSpectrometer self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Inst_NmrSpectrometer_FindAllApplicationData_keyval1(Inst_NmrSpectrometer self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_NmrSpectrometer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Inst_NmrSpectrometer_FindAllApplicationData_keyval2(Inst_NmrSpectrometer self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_NmrSpectrometer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Inst_NmrSpectrometer_FindAllApplicationData_keyval3(Inst_NmrSpectrometer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_NmrSpectrometer self
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
extern ApiList Inst_NmrSpectrometer_FindAllApplicationData_keyval4(Inst_NmrSpectrometer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Instrument.NmrSpectrometer.citations

Citations 
describing Nmr Spectrometer.
  @param  Inst_NmrSpectrometer self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Inst_NmrSpectrometer_FindAllCitations(Inst_NmrSpectrometer self, ApiMap conditions);

/**
  FindAll for ccp.general.Instrument.NmrSpectrometer.citations

Citations 
describing Nmr Spectrometer.
  @param  Inst_NmrSpectrometer self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Inst_NmrSpectrometer_FindAllCitations_keyval0(Inst_NmrSpectrometer self);

/**
  FindAll for ccp.general.Instrument.NmrSpectrometer.citations

Citations 
describing Nmr Spectrometer.
  @param  Inst_NmrSpectrometer self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Inst_NmrSpectrometer_FindAllCitations_keyval1(Inst_NmrSpectrometer self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Instrument.NmrSpectrometer.citations

Citations 
describing Nmr Spectrometer.
  @param  Inst_NmrSpectrometer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Inst_NmrSpectrometer_FindAllCitations_keyval2(Inst_NmrSpectrometer self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Instrument.NmrSpectrometer.citations

Citations 
describing Nmr Spectrometer.
  @param  Inst_NmrSpectrometer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Inst_NmrSpectrometer_FindAllCitations_keyval3(Inst_NmrSpectrometer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Instrument.NmrSpectrometer.citations

Citations 
describing Nmr Spectrometer.
  @param  Inst_NmrSpectrometer self
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
extern ApiSet Inst_NmrSpectrometer_FindAllCitations_keyval4(Inst_NmrSpectrometer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Instrument.NmrSpectrometer.experiments

Nmr 
Experiments carried out on spectrometer.
  @param  Inst_NmrSpectrometer self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Inst_NmrSpectrometer_FindAllExperiments(Inst_NmrSpectrometer self, ApiMap conditions);

/**
  FindAll for ccp.general.Instrument.NmrSpectrometer.experiments

Nmr 
Experiments carried out on spectrometer.
  @param  Inst_NmrSpectrometer self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Inst_NmrSpectrometer_FindAllExperiments_keyval0(Inst_NmrSpectrometer self);

/**
  FindAll for ccp.general.Instrument.NmrSpectrometer.experiments

Nmr 
Experiments carried out on spectrometer.
  @param  Inst_NmrSpectrometer self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Inst_NmrSpectrometer_FindAllExperiments_keyval1(Inst_NmrSpectrometer self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Instrument.NmrSpectrometer.experiments

Nmr 
Experiments carried out on spectrometer.
  @param  Inst_NmrSpectrometer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Inst_NmrSpectrometer_FindAllExperiments_keyval2(Inst_NmrSpectrometer self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Instrument.NmrSpectrometer.experiments

Nmr 
Experiments carried out on spectrometer.
  @param  Inst_NmrSpectrometer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Inst_NmrSpectrometer_FindAllExperiments_keyval3(Inst_NmrSpectrometer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Instrument.NmrSpectrometer.experiments

Nmr 
Experiments carried out on spectrometer.
  @param  Inst_NmrSpectrometer self
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
extern ApiSet Inst_NmrSpectrometer_FindAllExperiments_keyval4(Inst_NmrSpectrometer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_NmrSpectrometer self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Inst_NmrSpectrometer_FindFirstApplicationData(Inst_NmrSpectrometer self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_NmrSpectrometer self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Inst_NmrSpectrometer_FindFirstApplicationData_keyval0(Inst_NmrSpectrometer self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_NmrSpectrometer self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Inst_NmrSpectrometer_FindFirstApplicationData_keyval1(Inst_NmrSpectrometer self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_NmrSpectrometer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Inst_NmrSpectrometer_FindFirstApplicationData_keyval2(Inst_NmrSpectrometer self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_NmrSpectrometer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Inst_NmrSpectrometer_FindFirstApplicationData_keyval3(Inst_NmrSpectrometer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_NmrSpectrometer self
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
extern Impl_ApplicationData Inst_NmrSpectrometer_FindFirstApplicationData_keyval4(Inst_NmrSpectrometer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.general.Instrument.NmrSpectrometer.citations

Citations describing 
Nmr Spectrometer.
  @param  Inst_NmrSpectrometer self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Cita_Citation Inst_NmrSpectrometer_FindFirstCitation(Inst_NmrSpectrometer self, ApiMap conditions);

/**
  FindFirst for 
ccp.general.Instrument.NmrSpectrometer.citations

Citations describing 
Nmr Spectrometer.
  @param  Inst_NmrSpectrometer self
  @returns  the first value that satisfies the conditions 
**/
extern Cita_Citation Inst_NmrSpectrometer_FindFirstCitation_keyval0(Inst_NmrSpectrometer self);

/**
  FindFirst for 
ccp.general.Instrument.NmrSpectrometer.citations

Citations describing 
Nmr Spectrometer.
  @param  Inst_NmrSpectrometer self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Cita_Citation Inst_NmrSpectrometer_FindFirstCitation_keyval1(Inst_NmrSpectrometer self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.general.Instrument.NmrSpectrometer.citations

Citations describing 
Nmr Spectrometer.
  @param  Inst_NmrSpectrometer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Cita_Citation Inst_NmrSpectrometer_FindFirstCitation_keyval2(Inst_NmrSpectrometer self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.general.Instrument.NmrSpectrometer.citations

Citations describing 
Nmr Spectrometer.
  @param  Inst_NmrSpectrometer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Cita_Citation Inst_NmrSpectrometer_FindFirstCitation_keyval3(Inst_NmrSpectrometer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.general.Instrument.NmrSpectrometer.citations

Citations describing 
Nmr Spectrometer.
  @param  Inst_NmrSpectrometer self
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
extern Cita_Citation Inst_NmrSpectrometer_FindFirstCitation_keyval4(Inst_NmrSpectrometer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Instrument.NmrSpectrometer.experiments

Nmr 
Experiments carried out on spectrometer.
  @param  Inst_NmrSpectrometer self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Inst_NmrSpectrometer_FindFirstExperiment(Inst_NmrSpectrometer self, ApiMap conditions);

/**
  FindFirst for ccp.general.Instrument.NmrSpectrometer.experiments

Nmr 
Experiments carried out on spectrometer.
  @param  Inst_NmrSpectrometer self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Inst_NmrSpectrometer_FindFirstExperiment_keyval0(Inst_NmrSpectrometer self);

/**
  FindFirst for ccp.general.Instrument.NmrSpectrometer.experiments

Nmr 
Experiments carried out on spectrometer.
  @param  Inst_NmrSpectrometer self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Inst_NmrSpectrometer_FindFirstExperiment_keyval1(Inst_NmrSpectrometer self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Instrument.NmrSpectrometer.experiments

Nmr 
Experiments carried out on spectrometer.
  @param  Inst_NmrSpectrometer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Inst_NmrSpectrometer_FindFirstExperiment_keyval2(Inst_NmrSpectrometer self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Instrument.NmrSpectrometer.experiments

Nmr 
Experiments carried out on spectrometer.
  @param  Inst_NmrSpectrometer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Inst_NmrSpectrometer_FindFirstExperiment_keyval3(Inst_NmrSpectrometer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Instrument.NmrSpectrometer.experiments

Nmr 
Experiments carried out on spectrometer.
  @param  Inst_NmrSpectrometer self
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
extern Nmr_Experiment Inst_NmrSpectrometer_FindFirstExperiment_keyval4(Inst_NmrSpectrometer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.general.Instrument.NmrSpectrometer
  @param  Inst_NmrSpectrometer self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Inst_NmrSpectrometer_Get(Inst_NmrSpectrometer self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Inst_NmrSpectrometer self
  @returns   the result
**/
extern Acco_AccessObject Inst_NmrSpectrometer_GetAccess(Inst_NmrSpectrometer self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_NmrSpectrometer self
  @returns   the result
**/
extern ApiList Inst_NmrSpectrometer_GetApplicationData(Inst_NmrSpectrometer self);

/**
  GetByKey for ccp.general.Instrument.NmrSpectrometer
  @param  Inst_NmrSpectrometer self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Inst_NmrSpectrometer Inst_NmrSpectrometer_GetByKey(Inst_NmrSpectrometer self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for ccp.general.Instrument.NmrSpectrometer.citations

Citations 
describing Nmr Spectrometer.
  @param  Inst_NmrSpectrometer self
  @returns   the result
**/
extern ApiSet Inst_NmrSpectrometer_GetCitations(Inst_NmrSpectrometer self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Inst_NmrSpectrometer self
  @returns   the result
**/
extern ApiString Inst_NmrSpectrometer_GetClassName(Inst_NmrSpectrometer self);

/**
  Get for ccp.general.Instrument.AbstractInstrument.contactPerson

This is 
the contact person in the company.
  @param  Inst_NmrSpectrometer self
  @returns   the result
**/
extern Affi_Person Inst_NmrSpectrometer_GetContactPerson(Inst_NmrSpectrometer self);

/**
  Get for ccp.general.Instrument.AbstractInstrument.details

Free text, 
for notes, explanatory comments, etc.
  @param  Inst_NmrSpectrometer self
  @returns   the result
**/
extern ApiString Inst_NmrSpectrometer_GetDetails(Inst_NmrSpectrometer self);

/**
  Get for ccp.general.Instrument.NmrSpectrometer.experiments

Nmr 
Experiments carried out on spectrometer.
  @param  Inst_NmrSpectrometer self
  @returns   the result
**/
extern ApiSet Inst_NmrSpectrometer_GetExperiments(Inst_NmrSpectrometer self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Inst_NmrSpectrometer self
  @returns   the result
**/
extern ApiList Inst_NmrSpectrometer_GetFieldNames(Inst_NmrSpectrometer self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Inst_NmrSpectrometer self
  @returns   the result
**/
extern ApiBoolean Inst_NmrSpectrometer_GetInConstructor(Inst_NmrSpectrometer self);

/**
  Get for 
ccp.general.Instrument.AbstractInstrument.instrumentStore

parent link
  @param  Inst_NmrSpectrometer self
  @returns   the result
**/
extern Inst_InstrumentStore Inst_NmrSpectrometer_GetInstrumentStore(Inst_NmrSpectrometer self);

/**
  Get for 
ccp.general.Instrument.NmrSpectrometer.instrumentType

Instrument type - 
must be left as the default 'NmrSpectrometer'
  @param  Inst_NmrSpectrometer self
  @returns   the result
**/
extern ApiString Inst_NmrSpectrometer_GetInstrumentType(Inst_NmrSpectrometer self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Inst_NmrSpectrometer self
  @returns   the result
**/
extern ApiBoolean Inst_NmrSpectrometer_GetIsDeleted(Inst_NmrSpectrometer self);

/**
  Get for ccp.general.Instrument.AbstractInstrument.manufacturer

The name 
of the manufacturer of the instrument.
  @param  Inst_NmrSpectrometer self
  @returns   the result
**/
extern Affi_Organisation Inst_NmrSpectrometer_GetManufacturer(Inst_NmrSpectrometer self);

/**
  Get for ccp.general.Instrument.AbstractInstrument.model

The model of 
the instrument.
  @param  Inst_NmrSpectrometer self
  @returns   the result
**/
extern ApiString Inst_NmrSpectrometer_GetModel(Inst_NmrSpectrometer self);

/**
  Get for ccp.general.Instrument.AbstractInstrument.name

The name of the 
instrument.
  @param  Inst_NmrSpectrometer self
  @returns   the result
**/
extern ApiString Inst_NmrSpectrometer_GetName(Inst_NmrSpectrometer self);

/**
  Get for ccp.general.Instrument.NmrSpectrometer.nominalFreq

Nominal 
rounded-off spectrometer frequency in MHz protons, given as a string.
  @param  Inst_NmrSpectrometer self
  @returns   the result
**/
extern ApiString Inst_NmrSpectrometer_GetNominalFreq(Inst_NmrSpectrometer self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Inst_NmrSpectrometer self
  @returns   the result
**/
extern ApiString Inst_NmrSpectrometer_GetPackageName(Inst_NmrSpectrometer self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Inst_NmrSpectrometer self
  @returns   the result
**/
extern ApiString Inst_NmrSpectrometer_GetPackageShortName(Inst_NmrSpectrometer self);

/**
  Get for ccp.general.Instrument.AbstractInstrument.parent

link to parent 
object - synonym for instrumentStore
  @param  Inst_NmrSpectrometer self
  @returns   the result
**/
extern Inst_InstrumentStore Inst_NmrSpectrometer_GetParent(Inst_NmrSpectrometer self);

/**
  Get for ccp.general.Instrument.NmrSpectrometer.protonFreq

Actual magnet 
field strength expressed as the proton resonance frequency in MHz. e.g. 
'500.013'.
  @param  Inst_NmrSpectrometer self
  @returns   the result
**/
extern ApiFloat Inst_NmrSpectrometer_GetProtonFreq(Inst_NmrSpectrometer self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Inst_NmrSpectrometer self
  @returns   the result
**/
extern ApiString Inst_NmrSpectrometer_GetQualifiedName(Inst_NmrSpectrometer self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Inst_NmrSpectrometer self
  @returns   the result
**/
extern Impl_MemopsRoot Inst_NmrSpectrometer_GetRoot(Inst_NmrSpectrometer self);

/**
  Get for ccp.general.Instrument.AbstractInstrument.serial

Serial number 
of object. Serves as object main key. Serial numbers of deleted objects 
are not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Inst_NmrSpectrometer self
  @returns   the result
**/
extern ApiInteger Inst_NmrSpectrometer_GetSerial(Inst_NmrSpectrometer self);

/**
  Get for 
ccp.general.Instrument.AbstractInstrument.serialNumber

Instrument 
'serial number'. A string that uniquely identifies a given instrument.
  @param  Inst_NmrSpectrometer self
  @returns   the result
**/
extern ApiString Inst_NmrSpectrometer_GetSerialNumber(Inst_NmrSpectrometer self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Inst_NmrSpectrometer self
  @returns   the result
**/
extern Impl_TopObject Inst_NmrSpectrometer_GetTopObject(Inst_NmrSpectrometer self);

/**
  Constructor for ccp.general.Instrument.NmrSpectrometer
  @param  Inst_InstrumentStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Inst_NmrSpectrometer Inst_NmrSpectrometer_Init(Inst_InstrumentStore parent, ApiMap attrlinks);

/**
  Constructor for ccp.general.Instrument.NmrSpectrometer
  @param  Inst_InstrumentStore parent
  @param  char * name
  @returns  the new object
**/
extern Inst_NmrSpectrometer Inst_NmrSpectrometer_Init_reqd(Inst_InstrumentStore parent, char * name);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_NmrSpectrometer self
  @param  Impl_ApplicationData value
**/
extern void *Inst_NmrSpectrometer_RemoveApplicationData(Inst_NmrSpectrometer self, Impl_ApplicationData value);

/**
  Remove for ccp.general.Instrument.NmrSpectrometer.experiments

Nmr 
Experiments carried out on spectrometer.
  @param  Inst_NmrSpectrometer self
  @param  Nmr_Experiment value
**/
extern void *Inst_NmrSpectrometer_RemoveExperiment(Inst_NmrSpectrometer self, Nmr_Experiment value);

/**
  SetAttr for ccp.general.Instrument.NmrSpectrometer
  @param  Inst_NmrSpectrometer self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Inst_NmrSpectrometer_Set(Inst_NmrSpectrometer self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Inst_NmrSpectrometer self
  @param  Acco_AccessObject value
**/
extern void *Inst_NmrSpectrometer_SetAccess(Inst_NmrSpectrometer self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_NmrSpectrometer self
  @param  ApiList values
**/
extern void *Inst_NmrSpectrometer_SetApplicationData(Inst_NmrSpectrometer self, ApiList values);

/**
  Set for ccp.general.Instrument.NmrSpectrometer.citations

Citations 
describing Nmr Spectrometer.
  @param  Inst_NmrSpectrometer self
  @param  ApiSet values
**/
extern void *Inst_NmrSpectrometer_SetCitations(Inst_NmrSpectrometer self, ApiSet values);

/**
  Set for ccp.general.Instrument.AbstractInstrument.contactPerson

This is 
the contact person in the company.
  @param  Inst_NmrSpectrometer self
  @param  Affi_Person value
**/
extern void *Inst_NmrSpectrometer_SetContactPerson(Inst_NmrSpectrometer self, Affi_Person value);

/**
  Set for ccp.general.Instrument.AbstractInstrument.details

Free text, 
for notes, explanatory comments, etc.
  @param  Inst_NmrSpectrometer self
  @param  ApiString value
**/
extern void *Inst_NmrSpectrometer_SetDetails(Inst_NmrSpectrometer self, ApiString value);

/**
  Set for ccp.general.Instrument.NmrSpectrometer.experiments

Nmr 
Experiments carried out on spectrometer.
  @param  Inst_NmrSpectrometer self
  @param  ApiSet values
**/
extern void *Inst_NmrSpectrometer_SetExperiments(Inst_NmrSpectrometer self, ApiSet values);

/**
  Set for 
ccp.general.Instrument.NmrSpectrometer.instrumentType

Instrument type - 
must be left as the default 'NmrSpectrometer'
  @param  Inst_NmrSpectrometer self
  @param  ApiString value
**/
extern void *Inst_NmrSpectrometer_SetInstrumentType(Inst_NmrSpectrometer self, ApiString value);

/**
  Set for ccp.general.Instrument.AbstractInstrument.manufacturer

The name 
of the manufacturer of the instrument.
  @param  Inst_NmrSpectrometer self
  @param  Affi_Organisation value
**/
extern void *Inst_NmrSpectrometer_SetManufacturer(Inst_NmrSpectrometer self, Affi_Organisation value);

/**
  Set for ccp.general.Instrument.AbstractInstrument.model

The model of 
the instrument.
  @param  Inst_NmrSpectrometer self
  @param  ApiString value
**/
extern void *Inst_NmrSpectrometer_SetModel(Inst_NmrSpectrometer self, ApiString value);

/**
  Set for ccp.general.Instrument.AbstractInstrument.name

The name of the 
instrument.
  @param  Inst_NmrSpectrometer self
  @param  ApiString value
**/
extern void *Inst_NmrSpectrometer_SetName(Inst_NmrSpectrometer self, ApiString value);

/**
  Set for ccp.general.Instrument.NmrSpectrometer.nominalFreq

Nominal 
rounded-off spectrometer frequency in MHz protons, given as a string.
  @param  Inst_NmrSpectrometer self
  @param  ApiString value
**/
extern void *Inst_NmrSpectrometer_SetNominalFreq(Inst_NmrSpectrometer self, ApiString value);

/**
  Set for ccp.general.Instrument.NmrSpectrometer.protonFreq

Actual magnet 
field strength expressed as the proton resonance frequency in MHz. e.g. 
'500.013'.
  @param  Inst_NmrSpectrometer self
  @param  ApiFloat value
**/
extern void *Inst_NmrSpectrometer_SetProtonFreq(Inst_NmrSpectrometer self, ApiFloat value);

/**
  Set for ccp.general.Instrument.AbstractInstrument.serial

Serial number 
of object. Serves as object main key. Serial numbers of deleted objects 
are not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Inst_NmrSpectrometer self
  @param  ApiInteger value
**/
extern void *Inst_NmrSpectrometer_SetSerial(Inst_NmrSpectrometer self, ApiInteger value);

/**
  Set for 
ccp.general.Instrument.AbstractInstrument.serialNumber

Instrument 
'serial number'. A string that uniquely identifies a given instrument.
  @param  Inst_NmrSpectrometer self
  @param  ApiString value
**/
extern void *Inst_NmrSpectrometer_SetSerialNumber(Inst_NmrSpectrometer self, ApiString value);

/**
  Sorted for ccp.general.Instrument.NmrSpectrometer.citations

Citations 
describing Nmr Spectrometer.
  @param  Inst_NmrSpectrometer self
  @returns   the result
**/
extern ApiList Inst_NmrSpectrometer_SortedCitations(Inst_NmrSpectrometer self);

/**
  Sorted for ccp.general.Instrument.NmrSpectrometer.experiments

Nmr 
Experiments carried out on spectrometer.
  @param  Inst_NmrSpectrometer self
  @returns   the result
**/
extern ApiList Inst_NmrSpectrometer_SortedExperiments(Inst_NmrSpectrometer self);

#endif /* __incl__ccp_api_general_Instrument_NmrSpectrometer_h__ */
