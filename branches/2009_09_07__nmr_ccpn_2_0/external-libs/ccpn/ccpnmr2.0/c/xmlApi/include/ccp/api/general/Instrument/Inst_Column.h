
#ifndef __incl__ccp_api_general_Instrument_Column_h__
#define __incl__ccp_api_general_Instrument_Column_h__

#include "ccp.h"

/*
  The column instrument.
*/

/* package ccp.api.general.Instrument */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_Column self
  @param  Impl_ApplicationData value
**/
extern void *Inst_Column_AddApplicationData(Inst_Column self, Impl_ApplicationData value);

/**
  Add for ccp.general.Instrument.Instrument.experiments

Experiments 
carried out using Instrument.
  @param  Inst_Column self
  @param  Expe_Experiment value
**/
extern void *Inst_Column_AddExperiment(Inst_Column self, Expe_Experiment value);

/**
  Add for ccp.general.Instrument.Instrument.instrumentTypes

List of 
instrument type associated to an instrument.
  @param  Inst_Column self
  @param  Clas_InstrumentType value
**/
extern void *Inst_Column_AddInstrumentType(Inst_Column self, Clas_InstrumentType value);

/**
  Add for ccp.general.Instrument.Instrument.methods

Methods implemented 
on a given instrument.
  @param  Inst_Column self
  @param  Meth_Method value
**/
extern void *Inst_Column_AddMethod(Inst_Column self, Meth_Method value);

/**
  CheckAllValid for ccp.general.Instrument.Column
  @param  Inst_Column self
  @param  ApiBoolean complete
**/
extern void *Inst_Column_CheckAllValid(Inst_Column self, ApiBoolean complete);

/**
  CheckValid for ccp.general.Instrument.Column
  @param  Inst_Column self
  @param  ApiBoolean complete
**/
extern void *Inst_Column_CheckValid(Inst_Column self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_Column self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Inst_Column_FindAllApplicationData(Inst_Column self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_Column self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Inst_Column_FindAllApplicationData_keyval0(Inst_Column self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_Column self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Inst_Column_FindAllApplicationData_keyval1(Inst_Column self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_Column self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Inst_Column_FindAllApplicationData_keyval2(Inst_Column self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_Column self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Inst_Column_FindAllApplicationData_keyval3(Inst_Column self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_Column self
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
extern ApiList Inst_Column_FindAllApplicationData_keyval4(Inst_Column self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Instrument.Instrument.experiments

Experiments 
carried out using Instrument.
  @param  Inst_Column self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Inst_Column_FindAllExperiments(Inst_Column self, ApiMap conditions);

/**
  FindAll for ccp.general.Instrument.Instrument.experiments

Experiments 
carried out using Instrument.
  @param  Inst_Column self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Inst_Column_FindAllExperiments_keyval0(Inst_Column self);

/**
  FindAll for ccp.general.Instrument.Instrument.experiments

Experiments 
carried out using Instrument.
  @param  Inst_Column self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Inst_Column_FindAllExperiments_keyval1(Inst_Column self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Instrument.Instrument.experiments

Experiments 
carried out using Instrument.
  @param  Inst_Column self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Inst_Column_FindAllExperiments_keyval2(Inst_Column self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Instrument.Instrument.experiments

Experiments 
carried out using Instrument.
  @param  Inst_Column self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Inst_Column_FindAllExperiments_keyval3(Inst_Column self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Instrument.Instrument.experiments

Experiments 
carried out using Instrument.
  @param  Inst_Column self
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
extern ApiSet Inst_Column_FindAllExperiments_keyval4(Inst_Column self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Instrument.Instrument.instrumentTypes

List of 
instrument type associated to an instrument.
  @param  Inst_Column self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Inst_Column_FindAllInstrumentTypes(Inst_Column self, ApiMap conditions);

/**
  FindAll for ccp.general.Instrument.Instrument.instrumentTypes

List of 
instrument type associated to an instrument.
  @param  Inst_Column self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Inst_Column_FindAllInstrumentTypes_keyval0(Inst_Column self);

/**
  FindAll for ccp.general.Instrument.Instrument.instrumentTypes

List of 
instrument type associated to an instrument.
  @param  Inst_Column self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Inst_Column_FindAllInstrumentTypes_keyval1(Inst_Column self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Instrument.Instrument.instrumentTypes

List of 
instrument type associated to an instrument.
  @param  Inst_Column self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Inst_Column_FindAllInstrumentTypes_keyval2(Inst_Column self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Instrument.Instrument.instrumentTypes

List of 
instrument type associated to an instrument.
  @param  Inst_Column self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Inst_Column_FindAllInstrumentTypes_keyval3(Inst_Column self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Instrument.Instrument.instrumentTypes

List of 
instrument type associated to an instrument.
  @param  Inst_Column self
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
extern ApiSet Inst_Column_FindAllInstrumentTypes_keyval4(Inst_Column self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Instrument.Instrument.methods

Methods 
implemented on a given instrument.
  @param  Inst_Column self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Inst_Column_FindAllMethods(Inst_Column self, ApiMap conditions);

/**
  FindAll for ccp.general.Instrument.Instrument.methods

Methods 
implemented on a given instrument.
  @param  Inst_Column self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Inst_Column_FindAllMethods_keyval0(Inst_Column self);

/**
  FindAll for ccp.general.Instrument.Instrument.methods

Methods 
implemented on a given instrument.
  @param  Inst_Column self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Inst_Column_FindAllMethods_keyval1(Inst_Column self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Instrument.Instrument.methods

Methods 
implemented on a given instrument.
  @param  Inst_Column self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Inst_Column_FindAllMethods_keyval2(Inst_Column self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Instrument.Instrument.methods

Methods 
implemented on a given instrument.
  @param  Inst_Column self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Inst_Column_FindAllMethods_keyval3(Inst_Column self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Instrument.Instrument.methods

Methods 
implemented on a given instrument.
  @param  Inst_Column self
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
extern ApiSet Inst_Column_FindAllMethods_keyval4(Inst_Column self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_Column self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Inst_Column_FindFirstApplicationData(Inst_Column self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_Column self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Inst_Column_FindFirstApplicationData_keyval0(Inst_Column self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_Column self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Inst_Column_FindFirstApplicationData_keyval1(Inst_Column self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_Column self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Inst_Column_FindFirstApplicationData_keyval2(Inst_Column self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_Column self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Inst_Column_FindFirstApplicationData_keyval3(Inst_Column self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_Column self
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
extern Impl_ApplicationData Inst_Column_FindFirstApplicationData_keyval4(Inst_Column self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Instrument.Instrument.experiments

Experiments 
carried out using Instrument.
  @param  Inst_Column self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Expe_Experiment Inst_Column_FindFirstExperiment(Inst_Column self, ApiMap conditions);

/**
  FindFirst for ccp.general.Instrument.Instrument.experiments

Experiments 
carried out using Instrument.
  @param  Inst_Column self
  @returns  the first value that satisfies the conditions 
**/
extern Expe_Experiment Inst_Column_FindFirstExperiment_keyval0(Inst_Column self);

/**
  FindFirst for ccp.general.Instrument.Instrument.experiments

Experiments 
carried out using Instrument.
  @param  Inst_Column self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Expe_Experiment Inst_Column_FindFirstExperiment_keyval1(Inst_Column self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Instrument.Instrument.experiments

Experiments 
carried out using Instrument.
  @param  Inst_Column self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Expe_Experiment Inst_Column_FindFirstExperiment_keyval2(Inst_Column self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Instrument.Instrument.experiments

Experiments 
carried out using Instrument.
  @param  Inst_Column self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Expe_Experiment Inst_Column_FindFirstExperiment_keyval3(Inst_Column self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Instrument.Instrument.experiments

Experiments 
carried out using Instrument.
  @param  Inst_Column self
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
extern Expe_Experiment Inst_Column_FindFirstExperiment_keyval4(Inst_Column self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Instrument.Instrument.instrumentTypes

List of 
instrument type associated to an instrument.
  @param  Inst_Column self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Clas_InstrumentType Inst_Column_FindFirstInstrumentType(Inst_Column self, ApiMap conditions);

/**
  FindFirst for ccp.general.Instrument.Instrument.instrumentTypes

List of 
instrument type associated to an instrument.
  @param  Inst_Column self
  @returns  the first value that satisfies the conditions 
**/
extern Clas_InstrumentType Inst_Column_FindFirstInstrumentType_keyval0(Inst_Column self);

/**
  FindFirst for ccp.general.Instrument.Instrument.instrumentTypes

List of 
instrument type associated to an instrument.
  @param  Inst_Column self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Clas_InstrumentType Inst_Column_FindFirstInstrumentType_keyval1(Inst_Column self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Instrument.Instrument.instrumentTypes

List of 
instrument type associated to an instrument.
  @param  Inst_Column self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Clas_InstrumentType Inst_Column_FindFirstInstrumentType_keyval2(Inst_Column self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Instrument.Instrument.instrumentTypes

List of 
instrument type associated to an instrument.
  @param  Inst_Column self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Clas_InstrumentType Inst_Column_FindFirstInstrumentType_keyval3(Inst_Column self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Instrument.Instrument.instrumentTypes

List of 
instrument type associated to an instrument.
  @param  Inst_Column self
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
extern Clas_InstrumentType Inst_Column_FindFirstInstrumentType_keyval4(Inst_Column self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Instrument.Instrument.methods

Methods 
implemented on a given instrument.
  @param  Inst_Column self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Meth_Method Inst_Column_FindFirstMethod(Inst_Column self, ApiMap conditions);

/**
  FindFirst for ccp.general.Instrument.Instrument.methods

Methods 
implemented on a given instrument.
  @param  Inst_Column self
  @returns  the first value that satisfies the conditions 
**/
extern Meth_Method Inst_Column_FindFirstMethod_keyval0(Inst_Column self);

/**
  FindFirst for ccp.general.Instrument.Instrument.methods

Methods 
implemented on a given instrument.
  @param  Inst_Column self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Meth_Method Inst_Column_FindFirstMethod_keyval1(Inst_Column self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Instrument.Instrument.methods

Methods 
implemented on a given instrument.
  @param  Inst_Column self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Meth_Method Inst_Column_FindFirstMethod_keyval2(Inst_Column self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Instrument.Instrument.methods

Methods 
implemented on a given instrument.
  @param  Inst_Column self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Meth_Method Inst_Column_FindFirstMethod_keyval3(Inst_Column self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Instrument.Instrument.methods

Methods 
implemented on a given instrument.
  @param  Inst_Column self
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
extern Meth_Method Inst_Column_FindFirstMethod_keyval4(Inst_Column self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.general.Instrument.Column
  @param  Inst_Column self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Inst_Column_Get(Inst_Column self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Inst_Column self
  @returns   the result
**/
extern Acco_AccessObject Inst_Column_GetAccess(Inst_Column self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_Column self
  @returns   the result
**/
extern ApiList Inst_Column_GetApplicationData(Inst_Column self);

/**
  GetByKey for ccp.general.Instrument.Column
  @param  Inst_Column self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Inst_Column Inst_Column_GetByKey(Inst_Column self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Inst_Column self
  @returns   the result
**/
extern ApiString Inst_Column_GetClassName(Inst_Column self);

/**
  Get for ccp.general.Instrument.Column.columnType

The type of the 
column.
  @param  Inst_Column self
  @returns   the result
**/
extern ApiString Inst_Column_GetColumnType(Inst_Column self);

/**
  Get for ccp.general.Instrument.AbstractInstrument.contactPerson

This is 
the contact person in the company.
  @param  Inst_Column self
  @returns   the result
**/
extern Affi_Person Inst_Column_GetContactPerson(Inst_Column self);

/**
  Get for ccp.general.Instrument.AbstractInstrument.details

Free text, 
for notes, explanatory comments, etc.
  @param  Inst_Column self
  @returns   the result
**/
extern ApiString Inst_Column_GetDetails(Inst_Column self);

/**
  Get for ccp.general.Instrument.Instrument.experiments

Experiments 
carried out using Instrument.
  @param  Inst_Column self
  @returns   the result
**/
extern ApiSet Inst_Column_GetExperiments(Inst_Column self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Inst_Column self
  @returns   the result
**/
extern ApiList Inst_Column_GetFieldNames(Inst_Column self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Inst_Column self
  @returns   the result
**/
extern ApiBoolean Inst_Column_GetInConstructor(Inst_Column self);

/**
  Get for 
ccp.general.Instrument.AbstractInstrument.instrumentStore

parent link
  @param  Inst_Column self
  @returns   the result
**/
extern Inst_InstrumentStore Inst_Column_GetInstrumentStore(Inst_Column self);

/**
  Get for ccp.general.Instrument.Instrument.instrumentType

The type of 
the instrument. Should be an open enumeration.
  @param  Inst_Column self
  @returns   the result
**/
extern ApiString Inst_Column_GetInstrumentType(Inst_Column self);

/**
  Get for ccp.general.Instrument.Instrument.instrumentTypes

List of 
instrument type associated to an instrument.
  @param  Inst_Column self
  @returns   the result
**/
extern ApiSet Inst_Column_GetInstrumentTypes(Inst_Column self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Inst_Column self
  @returns   the result
**/
extern ApiBoolean Inst_Column_GetIsDeleted(Inst_Column self);

/**
  Get for ccp.general.Instrument.Column.loadingMethod

The method used to 
load the sample into the column e.g. injected (HPLC), gravity, ...
  @param  Inst_Column self
  @returns   the result
**/
extern Meth_Method Inst_Column_GetLoadingMethod(Inst_Column self);

/**
  Get for ccp.general.Instrument.AbstractInstrument.manufacturer

The name 
of the manufacturer of the instrument.
  @param  Inst_Column self
  @returns   the result
**/
extern Affi_Organisation Inst_Column_GetManufacturer(Inst_Column self);

/**
  Get for ccp.general.Instrument.Instrument.methods

Methods implemented 
on a given instrument.
  @param  Inst_Column self
  @returns   the result
**/
extern ApiSet Inst_Column_GetMethods(Inst_Column self);

/**
  Get for ccp.general.Instrument.AbstractInstrument.model

The model of 
the instrument.
  @param  Inst_Column self
  @returns   the result
**/
extern ApiString Inst_Column_GetModel(Inst_Column self);

/**
  Get for ccp.general.Instrument.AbstractInstrument.name

The name of the 
instrument.
  @param  Inst_Column self
  @returns   the result
**/
extern ApiString Inst_Column_GetName(Inst_Column self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Inst_Column self
  @returns   the result
**/
extern ApiString Inst_Column_GetPackageName(Inst_Column self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Inst_Column self
  @returns   the result
**/
extern ApiString Inst_Column_GetPackageShortName(Inst_Column self);

/**
  Get for ccp.general.Instrument.AbstractInstrument.parent

link to parent 
object - synonym for instrumentStore
  @param  Inst_Column self
  @returns   the result
**/
extern Inst_InstrumentStore Inst_Column_GetParent(Inst_Column self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Inst_Column self
  @returns   the result
**/
extern ApiString Inst_Column_GetQualifiedName(Inst_Column self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Inst_Column self
  @returns   the result
**/
extern Impl_MemopsRoot Inst_Column_GetRoot(Inst_Column self);

/**
  Get for ccp.general.Instrument.AbstractInstrument.serial

Serial number 
of object. Serves as object main key. Serial numbers of deleted objects 
are not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Inst_Column self
  @returns   the result
**/
extern ApiInteger Inst_Column_GetSerial(Inst_Column self);

/**
  Get for 
ccp.general.Instrument.AbstractInstrument.serialNumber

Instrument 
'serial number'. A string that uniquely identifies a given instrument.
  @param  Inst_Column self
  @returns   the result
**/
extern ApiString Inst_Column_GetSerialNumber(Inst_Column self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Inst_Column self
  @returns   the result
**/
extern Impl_TopObject Inst_Column_GetTopObject(Inst_Column self);

/**
  Get for ccp.general.Instrument.Column.volume

The volume of the column 
in m3.
  @param  Inst_Column self
  @returns   the result
**/
extern ApiFloat Inst_Column_GetVolume(Inst_Column self);

/**
  Get for ccp.general.Instrument.Column.volumeDisplayUnit

This is the 
unit entered by user and used for display.
  @param  Inst_Column self
  @returns   the result
**/
extern ApiString Inst_Column_GetVolumeDisplayUnit(Inst_Column self);

/**
  Constructor for ccp.general.Instrument.Column
  @param  Inst_InstrumentStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Inst_Column Inst_Column_Init(Inst_InstrumentStore parent, ApiMap attrlinks);

/**
  Constructor for ccp.general.Instrument.Column
  @param  Inst_InstrumentStore parent
  @param  char * name
  @returns  the new object
**/
extern Inst_Column Inst_Column_Init_reqd(Inst_InstrumentStore parent, char * name);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_Column self
  @param  Impl_ApplicationData value
**/
extern void *Inst_Column_RemoveApplicationData(Inst_Column self, Impl_ApplicationData value);

/**
  Remove for ccp.general.Instrument.Instrument.experiments

Experiments 
carried out using Instrument.
  @param  Inst_Column self
  @param  Expe_Experiment value
**/
extern void *Inst_Column_RemoveExperiment(Inst_Column self, Expe_Experiment value);

/**
  Remove for ccp.general.Instrument.Instrument.instrumentTypes

List of 
instrument type associated to an instrument.
  @param  Inst_Column self
  @param  Clas_InstrumentType value
**/
extern void *Inst_Column_RemoveInstrumentType(Inst_Column self, Clas_InstrumentType value);

/**
  Remove for ccp.general.Instrument.Instrument.methods

Methods 
implemented on a given instrument.
  @param  Inst_Column self
  @param  Meth_Method value
**/
extern void *Inst_Column_RemoveMethod(Inst_Column self, Meth_Method value);

/**
  SetAttr for ccp.general.Instrument.Column
  @param  Inst_Column self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Inst_Column_Set(Inst_Column self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Inst_Column self
  @param  Acco_AccessObject value
**/
extern void *Inst_Column_SetAccess(Inst_Column self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_Column self
  @param  ApiList values
**/
extern void *Inst_Column_SetApplicationData(Inst_Column self, ApiList values);

/**
  Set for ccp.general.Instrument.Column.columnType

The type of the 
column.
  @param  Inst_Column self
  @param  ApiString value
**/
extern void *Inst_Column_SetColumnType(Inst_Column self, ApiString value);

/**
  Set for ccp.general.Instrument.AbstractInstrument.contactPerson

This is 
the contact person in the company.
  @param  Inst_Column self
  @param  Affi_Person value
**/
extern void *Inst_Column_SetContactPerson(Inst_Column self, Affi_Person value);

/**
  Set for ccp.general.Instrument.AbstractInstrument.details

Free text, 
for notes, explanatory comments, etc.
  @param  Inst_Column self
  @param  ApiString value
**/
extern void *Inst_Column_SetDetails(Inst_Column self, ApiString value);

/**
  Set for ccp.general.Instrument.Instrument.experiments

Experiments 
carried out using Instrument.
  @param  Inst_Column self
  @param  ApiSet values
**/
extern void *Inst_Column_SetExperiments(Inst_Column self, ApiSet values);

/**
  Set for ccp.general.Instrument.Instrument.instrumentType

The type of 
the instrument. Should be an open enumeration.
  @param  Inst_Column self
  @param  ApiString value
**/
extern void *Inst_Column_SetInstrumentType(Inst_Column self, ApiString value);

/**
  Set for ccp.general.Instrument.Instrument.instrumentTypes

List of 
instrument type associated to an instrument.
  @param  Inst_Column self
  @param  ApiSet values
**/
extern void *Inst_Column_SetInstrumentTypes(Inst_Column self, ApiSet values);

/**
  Set for ccp.general.Instrument.Column.loadingMethod

The method used to 
load the sample into the column e.g. injected (HPLC), gravity, ...
  @param  Inst_Column self
  @param  Meth_Method value
**/
extern void *Inst_Column_SetLoadingMethod(Inst_Column self, Meth_Method value);

/**
  Set for ccp.general.Instrument.AbstractInstrument.manufacturer

The name 
of the manufacturer of the instrument.
  @param  Inst_Column self
  @param  Affi_Organisation value
**/
extern void *Inst_Column_SetManufacturer(Inst_Column self, Affi_Organisation value);

/**
  Set for ccp.general.Instrument.Instrument.methods

Methods implemented 
on a given instrument.
  @param  Inst_Column self
  @param  ApiSet values
**/
extern void *Inst_Column_SetMethods(Inst_Column self, ApiSet values);

/**
  Set for ccp.general.Instrument.AbstractInstrument.model

The model of 
the instrument.
  @param  Inst_Column self
  @param  ApiString value
**/
extern void *Inst_Column_SetModel(Inst_Column self, ApiString value);

/**
  Set for ccp.general.Instrument.AbstractInstrument.name

The name of the 
instrument.
  @param  Inst_Column self
  @param  ApiString value
**/
extern void *Inst_Column_SetName(Inst_Column self, ApiString value);

/**
  Set for ccp.general.Instrument.AbstractInstrument.serial

Serial number 
of object. Serves as object main key. Serial numbers of deleted objects 
are not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Inst_Column self
  @param  ApiInteger value
**/
extern void *Inst_Column_SetSerial(Inst_Column self, ApiInteger value);

/**
  Set for 
ccp.general.Instrument.AbstractInstrument.serialNumber

Instrument 
'serial number'. A string that uniquely identifies a given instrument.
  @param  Inst_Column self
  @param  ApiString value
**/
extern void *Inst_Column_SetSerialNumber(Inst_Column self, ApiString value);

/**
  Set for ccp.general.Instrument.Column.volume

The volume of the column 
in m3.
  @param  Inst_Column self
  @param  ApiFloat value
**/
extern void *Inst_Column_SetVolume(Inst_Column self, ApiFloat value);

/**
  Set for ccp.general.Instrument.Column.volumeDisplayUnit

This is the 
unit entered by user and used for display.
  @param  Inst_Column self
  @param  ApiString value
**/
extern void *Inst_Column_SetVolumeDisplayUnit(Inst_Column self, ApiString value);

/**
  Sorted for ccp.general.Instrument.Instrument.experiments

Experiments 
carried out using Instrument.
  @param  Inst_Column self
  @returns   the result
**/
extern ApiList Inst_Column_SortedExperiments(Inst_Column self);

/**
  Sorted for ccp.general.Instrument.Instrument.instrumentTypes

List of 
instrument type associated to an instrument.
  @param  Inst_Column self
  @returns   the result
**/
extern ApiList Inst_Column_SortedInstrumentTypes(Inst_Column self);

/**
  Sorted for ccp.general.Instrument.Instrument.methods

Methods 
implemented on a given instrument.
  @param  Inst_Column self
  @returns   the result
**/
extern ApiList Inst_Column_SortedMethods(Inst_Column self);

#endif /* __incl__ccp_api_general_Instrument_Column_h__ */
