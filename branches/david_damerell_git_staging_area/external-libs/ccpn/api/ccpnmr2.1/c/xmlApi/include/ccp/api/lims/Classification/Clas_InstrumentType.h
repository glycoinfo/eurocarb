
#ifndef __incl__ccp_api_lims_Classification_InstrumentType_h__
#define __incl__ccp_api_lims_Classification_InstrumentType_h__

#include "ccp.h"

/*
  The type of instrument. It is an instrument classification that can be specific to a particular organisation.
*/

/* package ccp.api.lims.Classification */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_InstrumentType self
  @param  Impl_ApplicationData value
**/
extern void *Clas_InstrumentType_AddApplicationData(Clas_InstrumentType self, Impl_ApplicationData value);

/**
  Add for ccp.lims.Classification.InstrumentType.experimentTypes

List of 
experiment type associated to an instrument type.
  @param  Clas_InstrumentType self
  @param  Clas_ExperimentType value
**/
extern void *Clas_InstrumentType_AddExperimentType(Clas_InstrumentType self, Clas_ExperimentType value);

/**
  Add for ccp.lims.Classification.InstrumentType.instruments

List of 
instrument associated to an instrument type.
  @param  Clas_InstrumentType self
  @param  Inst_Instrument value
**/
extern void *Clas_InstrumentType_AddInstrument(Clas_InstrumentType self, Inst_Instrument value);

/**
  Add for ccp.lims.Classification.InstrumentType.procedures

List of 
procedure associated to an instrument type.
  @param  Clas_InstrumentType self
  @param  Prot_Procedure value
**/
extern void *Clas_InstrumentType_AddProcedure(Clas_InstrumentType self, Prot_Procedure value);

/**
  CheckAllValid for ccp.lims.Classification.InstrumentType
  @param  Clas_InstrumentType self
  @param  ApiBoolean complete
**/
extern void *Clas_InstrumentType_CheckAllValid(Clas_InstrumentType self, ApiBoolean complete);

/**
  CheckValid for ccp.lims.Classification.InstrumentType
  @param  Clas_InstrumentType self
  @param  ApiBoolean complete
**/
extern void *Clas_InstrumentType_CheckValid(Clas_InstrumentType self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_InstrumentType self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Clas_InstrumentType_FindAllApplicationData(Clas_InstrumentType self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_InstrumentType self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Clas_InstrumentType_FindAllApplicationData_keyval0(Clas_InstrumentType self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_InstrumentType self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Clas_InstrumentType_FindAllApplicationData_keyval1(Clas_InstrumentType self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_InstrumentType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Clas_InstrumentType_FindAllApplicationData_keyval2(Clas_InstrumentType self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_InstrumentType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Clas_InstrumentType_FindAllApplicationData_keyval3(Clas_InstrumentType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_InstrumentType self
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
extern ApiList Clas_InstrumentType_FindAllApplicationData_keyval4(Clas_InstrumentType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.Classification.InstrumentType.experimentTypes

List 
of experiment type associated to an instrument type.
  @param  Clas_InstrumentType self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Clas_InstrumentType_FindAllExperimentTypes(Clas_InstrumentType self, ApiMap conditions);

/**
  FindAll for ccp.lims.Classification.InstrumentType.experimentTypes

List 
of experiment type associated to an instrument type.
  @param  Clas_InstrumentType self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Clas_InstrumentType_FindAllExperimentTypes_keyval0(Clas_InstrumentType self);

/**
  FindAll for ccp.lims.Classification.InstrumentType.experimentTypes

List 
of experiment type associated to an instrument type.
  @param  Clas_InstrumentType self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Clas_InstrumentType_FindAllExperimentTypes_keyval1(Clas_InstrumentType self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.Classification.InstrumentType.experimentTypes

List 
of experiment type associated to an instrument type.
  @param  Clas_InstrumentType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Clas_InstrumentType_FindAllExperimentTypes_keyval2(Clas_InstrumentType self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.Classification.InstrumentType.experimentTypes

List 
of experiment type associated to an instrument type.
  @param  Clas_InstrumentType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Clas_InstrumentType_FindAllExperimentTypes_keyval3(Clas_InstrumentType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.Classification.InstrumentType.experimentTypes

List 
of experiment type associated to an instrument type.
  @param  Clas_InstrumentType self
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
extern ApiSet Clas_InstrumentType_FindAllExperimentTypes_keyval4(Clas_InstrumentType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.Classification.InstrumentType.instruments

List of 
instrument associated to an instrument type.
  @param  Clas_InstrumentType self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Clas_InstrumentType_FindAllInstruments(Clas_InstrumentType self, ApiMap conditions);

/**
  FindAll for ccp.lims.Classification.InstrumentType.instruments

List of 
instrument associated to an instrument type.
  @param  Clas_InstrumentType self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Clas_InstrumentType_FindAllInstruments_keyval0(Clas_InstrumentType self);

/**
  FindAll for ccp.lims.Classification.InstrumentType.instruments

List of 
instrument associated to an instrument type.
  @param  Clas_InstrumentType self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Clas_InstrumentType_FindAllInstruments_keyval1(Clas_InstrumentType self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.Classification.InstrumentType.instruments

List of 
instrument associated to an instrument type.
  @param  Clas_InstrumentType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Clas_InstrumentType_FindAllInstruments_keyval2(Clas_InstrumentType self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.Classification.InstrumentType.instruments

List of 
instrument associated to an instrument type.
  @param  Clas_InstrumentType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Clas_InstrumentType_FindAllInstruments_keyval3(Clas_InstrumentType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.Classification.InstrumentType.instruments

List of 
instrument associated to an instrument type.
  @param  Clas_InstrumentType self
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
extern ApiSet Clas_InstrumentType_FindAllInstruments_keyval4(Clas_InstrumentType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.Classification.InstrumentType.procedures

List of 
procedure associated to an instrument type.
  @param  Clas_InstrumentType self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Clas_InstrumentType_FindAllProcedures(Clas_InstrumentType self, ApiMap conditions);

/**
  FindAll for ccp.lims.Classification.InstrumentType.procedures

List of 
procedure associated to an instrument type.
  @param  Clas_InstrumentType self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Clas_InstrumentType_FindAllProcedures_keyval0(Clas_InstrumentType self);

/**
  FindAll for ccp.lims.Classification.InstrumentType.procedures

List of 
procedure associated to an instrument type.
  @param  Clas_InstrumentType self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Clas_InstrumentType_FindAllProcedures_keyval1(Clas_InstrumentType self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.Classification.InstrumentType.procedures

List of 
procedure associated to an instrument type.
  @param  Clas_InstrumentType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Clas_InstrumentType_FindAllProcedures_keyval2(Clas_InstrumentType self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.Classification.InstrumentType.procedures

List of 
procedure associated to an instrument type.
  @param  Clas_InstrumentType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Clas_InstrumentType_FindAllProcedures_keyval3(Clas_InstrumentType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.Classification.InstrumentType.procedures

List of 
procedure associated to an instrument type.
  @param  Clas_InstrumentType self
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
extern ApiSet Clas_InstrumentType_FindAllProcedures_keyval4(Clas_InstrumentType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_InstrumentType self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Clas_InstrumentType_FindFirstApplicationData(Clas_InstrumentType self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_InstrumentType self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Clas_InstrumentType_FindFirstApplicationData_keyval0(Clas_InstrumentType self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_InstrumentType self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Clas_InstrumentType_FindFirstApplicationData_keyval1(Clas_InstrumentType self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_InstrumentType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Clas_InstrumentType_FindFirstApplicationData_keyval2(Clas_InstrumentType self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_InstrumentType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Clas_InstrumentType_FindFirstApplicationData_keyval3(Clas_InstrumentType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_InstrumentType self
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
extern Impl_ApplicationData Clas_InstrumentType_FindFirstApplicationData_keyval4(Clas_InstrumentType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.lims.Classification.InstrumentType.experimentTypes

List of 
experiment type associated to an instrument type.
  @param  Clas_InstrumentType self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Clas_ExperimentType Clas_InstrumentType_FindFirstExperimentType(Clas_InstrumentType self, ApiMap conditions);

/**
  FindFirst for 
ccp.lims.Classification.InstrumentType.experimentTypes

List of 
experiment type associated to an instrument type.
  @param  Clas_InstrumentType self
  @returns  the first value that satisfies the conditions 
**/
extern Clas_ExperimentType Clas_InstrumentType_FindFirstExperimentType_keyval0(Clas_InstrumentType self);

/**
  FindFirst for 
ccp.lims.Classification.InstrumentType.experimentTypes

List of 
experiment type associated to an instrument type.
  @param  Clas_InstrumentType self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Clas_ExperimentType Clas_InstrumentType_FindFirstExperimentType_keyval1(Clas_InstrumentType self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.lims.Classification.InstrumentType.experimentTypes

List of 
experiment type associated to an instrument type.
  @param  Clas_InstrumentType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Clas_ExperimentType Clas_InstrumentType_FindFirstExperimentType_keyval2(Clas_InstrumentType self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.lims.Classification.InstrumentType.experimentTypes

List of 
experiment type associated to an instrument type.
  @param  Clas_InstrumentType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Clas_ExperimentType Clas_InstrumentType_FindFirstExperimentType_keyval3(Clas_InstrumentType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.lims.Classification.InstrumentType.experimentTypes

List of 
experiment type associated to an instrument type.
  @param  Clas_InstrumentType self
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
extern Clas_ExperimentType Clas_InstrumentType_FindFirstExperimentType_keyval4(Clas_InstrumentType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.lims.Classification.InstrumentType.instruments

List 
of instrument associated to an instrument type.
  @param  Clas_InstrumentType self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Inst_Instrument Clas_InstrumentType_FindFirstInstrument(Clas_InstrumentType self, ApiMap conditions);

/**
  FindFirst for ccp.lims.Classification.InstrumentType.instruments

List 
of instrument associated to an instrument type.
  @param  Clas_InstrumentType self
  @returns  the first value that satisfies the conditions 
**/
extern Inst_Instrument Clas_InstrumentType_FindFirstInstrument_keyval0(Clas_InstrumentType self);

/**
  FindFirst for ccp.lims.Classification.InstrumentType.instruments

List 
of instrument associated to an instrument type.
  @param  Clas_InstrumentType self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Inst_Instrument Clas_InstrumentType_FindFirstInstrument_keyval1(Clas_InstrumentType self, char * key, ApiObject value);

/**
  FindFirst for ccp.lims.Classification.InstrumentType.instruments

List 
of instrument associated to an instrument type.
  @param  Clas_InstrumentType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Inst_Instrument Clas_InstrumentType_FindFirstInstrument_keyval2(Clas_InstrumentType self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.lims.Classification.InstrumentType.instruments

List 
of instrument associated to an instrument type.
  @param  Clas_InstrumentType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Inst_Instrument Clas_InstrumentType_FindFirstInstrument_keyval3(Clas_InstrumentType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.lims.Classification.InstrumentType.instruments

List 
of instrument associated to an instrument type.
  @param  Clas_InstrumentType self
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
extern Inst_Instrument Clas_InstrumentType_FindFirstInstrument_keyval4(Clas_InstrumentType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.lims.Classification.InstrumentType.procedures

List of 
procedure associated to an instrument type.
  @param  Clas_InstrumentType self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Prot_Procedure Clas_InstrumentType_FindFirstProcedure(Clas_InstrumentType self, ApiMap conditions);

/**
  FindFirst for ccp.lims.Classification.InstrumentType.procedures

List of 
procedure associated to an instrument type.
  @param  Clas_InstrumentType self
  @returns  the first value that satisfies the conditions 
**/
extern Prot_Procedure Clas_InstrumentType_FindFirstProcedure_keyval0(Clas_InstrumentType self);

/**
  FindFirst for ccp.lims.Classification.InstrumentType.procedures

List of 
procedure associated to an instrument type.
  @param  Clas_InstrumentType self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Prot_Procedure Clas_InstrumentType_FindFirstProcedure_keyval1(Clas_InstrumentType self, char * key, ApiObject value);

/**
  FindFirst for ccp.lims.Classification.InstrumentType.procedures

List of 
procedure associated to an instrument type.
  @param  Clas_InstrumentType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Prot_Procedure Clas_InstrumentType_FindFirstProcedure_keyval2(Clas_InstrumentType self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.lims.Classification.InstrumentType.procedures

List of 
procedure associated to an instrument type.
  @param  Clas_InstrumentType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Prot_Procedure Clas_InstrumentType_FindFirstProcedure_keyval3(Clas_InstrumentType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.lims.Classification.InstrumentType.procedures

List of 
procedure associated to an instrument type.
  @param  Clas_InstrumentType self
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
extern Prot_Procedure Clas_InstrumentType_FindFirstProcedure_keyval4(Clas_InstrumentType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.lims.Classification.InstrumentType
  @param  Clas_InstrumentType self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Clas_InstrumentType_Get(Clas_InstrumentType self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Clas_InstrumentType self
  @returns   the result
**/
extern Acco_AccessObject Clas_InstrumentType_GetAccess(Clas_InstrumentType self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Clas_InstrumentType self
  @returns   the result
**/
extern Acco_AccessObject Clas_InstrumentType_GetActiveAccess(Clas_InstrumentType self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_InstrumentType self
  @returns   the result
**/
extern ApiList Clas_InstrumentType_GetApplicationData(Clas_InstrumentType self);

/**
  GetByKey for ccp.lims.Classification.InstrumentType
  @param  Clas_InstrumentType self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Clas_InstrumentType Clas_InstrumentType_GetByKey(Clas_InstrumentType self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Clas_InstrumentType self
  @returns   the result
**/
extern ApiString Clas_InstrumentType_GetClassName(Clas_InstrumentType self);

/**
  Get for ccp.lims.Classification.InstrumentType.classification

parent 
link
  @param  Clas_InstrumentType self
  @returns   the result
**/
extern Clas_Classification Clas_InstrumentType_GetClassification(Clas_InstrumentType self);

/**
  Get for ccp.lims.Classification.AbstractCategory.details

Free text, for 
notes, explanatory comments, etc.
  @param  Clas_InstrumentType self
  @returns   the result
**/
extern ApiString Clas_InstrumentType_GetDetails(Clas_InstrumentType self);

/**
  Get for ccp.lims.Classification.InstrumentType.experimentTypes

List of 
experiment type associated to an instrument type.
  @param  Clas_InstrumentType self
  @returns   the result
**/
extern ApiSet Clas_InstrumentType_GetExperimentTypes(Clas_InstrumentType self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Clas_InstrumentType self
  @returns   the result
**/
extern ApiList Clas_InstrumentType_GetFieldNames(Clas_InstrumentType self);

/**
  GetFullKey for ccp.lims.Classification.InstrumentType
  @param  Clas_InstrumentType self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Clas_InstrumentType_GetFullKey(Clas_InstrumentType self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Clas_InstrumentType self
  @returns   the result
**/
extern ApiBoolean Clas_InstrumentType_GetInConstructor(Clas_InstrumentType self);

/**
  Get for ccp.lims.Classification.InstrumentType.instruments

List of 
instrument associated to an instrument type.
  @param  Clas_InstrumentType self
  @returns   the result
**/
extern ApiSet Clas_InstrumentType_GetInstruments(Clas_InstrumentType self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Clas_InstrumentType self
  @returns   the result
**/
extern ApiBoolean Clas_InstrumentType_GetIsDeleted(Clas_InstrumentType self);

/**
  GetLocalKey for ccp.lims.Classification.InstrumentType
  @param  Clas_InstrumentType self
  @returns  Local object key
**/
extern ApiObject Clas_InstrumentType_GetLocalKey(Clas_InstrumentType self);

/**
  Get for ccp.lims.Classification.AbstractCategory.name

Name of category
  @param  Clas_InstrumentType self
  @returns   the result
**/
extern ApiString Clas_InstrumentType_GetName(Clas_InstrumentType self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Clas_InstrumentType self
  @returns   the result
**/
extern ApiString Clas_InstrumentType_GetPackageName(Clas_InstrumentType self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Clas_InstrumentType self
  @returns   the result
**/
extern ApiString Clas_InstrumentType_GetPackageShortName(Clas_InstrumentType self);

/**
  Get for ccp.lims.Classification.InstrumentType.parent

link to parent 
object - synonym for classification
  @param  Clas_InstrumentType self
  @returns   the result
**/
extern Clas_Classification Clas_InstrumentType_GetParent(Clas_InstrumentType self);

/**
  Get for ccp.lims.Classification.InstrumentType.procedures

List of 
procedure associated to an instrument type.
  @param  Clas_InstrumentType self
  @returns   the result
**/
extern ApiSet Clas_InstrumentType_GetProcedures(Clas_InstrumentType self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Clas_InstrumentType self
  @returns   the result
**/
extern ApiString Clas_InstrumentType_GetQualifiedName(Clas_InstrumentType self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Clas_InstrumentType self
  @returns   the result
**/
extern Impl_MemopsRoot Clas_InstrumentType_GetRoot(Clas_InstrumentType self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Clas_InstrumentType self
  @returns   the result
**/
extern Impl_TopObject Clas_InstrumentType_GetTopObject(Clas_InstrumentType self);

/**
  Constructor for ccp.lims.Classification.InstrumentType
  @param  Clas_Classification parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Clas_InstrumentType Clas_InstrumentType_Init(Clas_Classification parent, ApiMap attrlinks);

/**
  Constructor for ccp.lims.Classification.InstrumentType
  @param  Clas_Classification parent
  @param  char * name
  @returns  the new object
**/
extern Clas_InstrumentType Clas_InstrumentType_Init_reqd(Clas_Classification parent, char * name);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_InstrumentType self
  @param  Impl_ApplicationData value
**/
extern void *Clas_InstrumentType_RemoveApplicationData(Clas_InstrumentType self, Impl_ApplicationData value);

/**
  Remove for ccp.lims.Classification.InstrumentType.experimentTypes

List 
of experiment type associated to an instrument type.
  @param  Clas_InstrumentType self
  @param  Clas_ExperimentType value
**/
extern void *Clas_InstrumentType_RemoveExperimentType(Clas_InstrumentType self, Clas_ExperimentType value);

/**
  Remove for ccp.lims.Classification.InstrumentType.instruments

List of 
instrument associated to an instrument type.
  @param  Clas_InstrumentType self
  @param  Inst_Instrument value
**/
extern void *Clas_InstrumentType_RemoveInstrument(Clas_InstrumentType self, Inst_Instrument value);

/**
  Remove for ccp.lims.Classification.InstrumentType.procedures

List of 
procedure associated to an instrument type.
  @param  Clas_InstrumentType self
  @param  Prot_Procedure value
**/
extern void *Clas_InstrumentType_RemoveProcedure(Clas_InstrumentType self, Prot_Procedure value);

/**
  SetAttr for ccp.lims.Classification.InstrumentType
  @param  Clas_InstrumentType self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Clas_InstrumentType_Set(Clas_InstrumentType self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Clas_InstrumentType self
  @param  Acco_AccessObject value
**/
extern void *Clas_InstrumentType_SetAccess(Clas_InstrumentType self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_InstrumentType self
  @param  ApiList values
**/
extern void *Clas_InstrumentType_SetApplicationData(Clas_InstrumentType self, ApiList values);

/**
  Set for ccp.lims.Classification.AbstractCategory.details

Free text, for 
notes, explanatory comments, etc.
  @param  Clas_InstrumentType self
  @param  ApiString value
**/
extern void *Clas_InstrumentType_SetDetails(Clas_InstrumentType self, ApiString value);

/**
  Set for ccp.lims.Classification.InstrumentType.experimentTypes

List of 
experiment type associated to an instrument type.
  @param  Clas_InstrumentType self
  @param  ApiSet values
**/
extern void *Clas_InstrumentType_SetExperimentTypes(Clas_InstrumentType self, ApiSet values);

/**
  Set for ccp.lims.Classification.InstrumentType.instruments

List of 
instrument associated to an instrument type.
  @param  Clas_InstrumentType self
  @param  ApiSet values
**/
extern void *Clas_InstrumentType_SetInstruments(Clas_InstrumentType self, ApiSet values);

/**
  Set for ccp.lims.Classification.AbstractCategory.name

Name of category
  @param  Clas_InstrumentType self
  @param  ApiString value
**/
extern void *Clas_InstrumentType_SetName(Clas_InstrumentType self, ApiString value);

/**
  Set for ccp.lims.Classification.InstrumentType.procedures

List of 
procedure associated to an instrument type.
  @param  Clas_InstrumentType self
  @param  ApiSet values
**/
extern void *Clas_InstrumentType_SetProcedures(Clas_InstrumentType self, ApiSet values);

/**
  Sorted for ccp.lims.Classification.InstrumentType.experimentTypes

List 
of experiment type associated to an instrument type.
  @param  Clas_InstrumentType self
  @returns   the result
**/
extern ApiList Clas_InstrumentType_SortedExperimentTypes(Clas_InstrumentType self);

/**
  Sorted for ccp.lims.Classification.InstrumentType.instruments

List of 
instrument associated to an instrument type.
  @param  Clas_InstrumentType self
  @returns   the result
**/
extern ApiList Clas_InstrumentType_SortedInstruments(Clas_InstrumentType self);

/**
  Sorted for ccp.lims.Classification.InstrumentType.procedures

List of 
procedure associated to an instrument type.
  @param  Clas_InstrumentType self
  @returns   the result
**/
extern ApiList Clas_InstrumentType_SortedProcedures(Clas_InstrumentType self);

#endif /* __incl__ccp_api_lims_Classification_InstrumentType_h__ */
