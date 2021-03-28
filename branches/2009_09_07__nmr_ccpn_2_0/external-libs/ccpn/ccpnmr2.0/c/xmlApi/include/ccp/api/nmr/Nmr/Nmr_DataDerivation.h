
#ifndef __incl__ccp_api_nmr_Nmr_DataDerivation_h__
#define __incl__ccp_api_nmr_Nmr_DataDerivation_h__

#include "ccp.h"

/*
  Member of a DataList.
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DataDerivation self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_DataDerivation_AddApplicationData(Nmr_DataDerivation self, Impl_ApplicationData value);

/**
  Add for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_DataDerivation self
  @param  Nmr_AbstractMeasurement value
**/
extern void *Nmr_DataDerivation_AddInputMeasurement(Nmr_DataDerivation self, Nmr_AbstractMeasurement value);

/**
  Add for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a input for 
DataDerivation
  @param  Nmr_DataDerivation self
  @param  Nmr_Peak value
**/
extern void *Nmr_DataDerivation_AddPeak(Nmr_DataDerivation self, Nmr_Peak value);

/**
  Add for ccp.nmr.Nmr.AbstractDataDerivation.peakDims

PeakDim used as 
input for DataDerivation
  @param  Nmr_DataDerivation self
  @param  Nmr_PeakDim value
**/
extern void *Nmr_DataDerivation_AddPeakDim(Nmr_DataDerivation self, Nmr_PeakDim value);

/**
  CheckAllValid for ccp.nmr.Nmr.DataDerivation
  @param  Nmr_DataDerivation self
  @param  ApiBoolean complete
**/
extern void *Nmr_DataDerivation_CheckAllValid(Nmr_DataDerivation self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.Nmr.DataDerivation
  @param  Nmr_DataDerivation self
  @param  ApiBoolean complete
**/
extern void *Nmr_DataDerivation_CheckValid(Nmr_DataDerivation self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DataDerivation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_DataDerivation_FindAllApplicationData(Nmr_DataDerivation self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DataDerivation self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_DataDerivation_FindAllApplicationData_keyval0(Nmr_DataDerivation self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DataDerivation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_DataDerivation_FindAllApplicationData_keyval1(Nmr_DataDerivation self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DataDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_DataDerivation_FindAllApplicationData_keyval2(Nmr_DataDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DataDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_DataDerivation_FindAllApplicationData_keyval3(Nmr_DataDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DataDerivation self
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
extern ApiList Nmr_DataDerivation_FindAllApplicationData_keyval4(Nmr_DataDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.DataDerivation.derivedData

child link to class 
Datum
  @param  Nmr_DataDerivation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_DataDerivation_FindAllDerivedData(Nmr_DataDerivation self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.DataDerivation.derivedData

child link to class 
Datum
  @param  Nmr_DataDerivation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_DataDerivation_FindAllDerivedData_keyval0(Nmr_DataDerivation self);

/**
  FindAll for ccp.nmr.Nmr.DataDerivation.derivedData

child link to class 
Datum
  @param  Nmr_DataDerivation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_DataDerivation_FindAllDerivedData_keyval1(Nmr_DataDerivation self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.DataDerivation.derivedData

child link to class 
Datum
  @param  Nmr_DataDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_DataDerivation_FindAllDerivedData_keyval2(Nmr_DataDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.DataDerivation.derivedData

child link to class 
Datum
  @param  Nmr_DataDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_DataDerivation_FindAllDerivedData_keyval3(Nmr_DataDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.DataDerivation.derivedData

child link to class 
Datum
  @param  Nmr_DataDerivation self
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
extern ApiSet Nmr_DataDerivation_FindAllDerivedData_keyval4(Nmr_DataDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_DataDerivation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_DataDerivation_FindAllInputMeasurements(Nmr_DataDerivation self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_DataDerivation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_DataDerivation_FindAllInputMeasurements_keyval0(Nmr_DataDerivation self);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_DataDerivation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_DataDerivation_FindAllInputMeasurements_keyval1(Nmr_DataDerivation self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_DataDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_DataDerivation_FindAllInputMeasurements_keyval2(Nmr_DataDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_DataDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_DataDerivation_FindAllInputMeasurements_keyval3(Nmr_DataDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_DataDerivation self
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
extern ApiSet Nmr_DataDerivation_FindAllInputMeasurements_keyval4(Nmr_DataDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDerivation.peakDims

PeakDim used as 
input for DataDerivation
  @param  Nmr_DataDerivation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_DataDerivation_FindAllPeakDims(Nmr_DataDerivation self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDerivation.peakDims

PeakDim used as 
input for DataDerivation
  @param  Nmr_DataDerivation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_DataDerivation_FindAllPeakDims_keyval0(Nmr_DataDerivation self);

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDerivation.peakDims

PeakDim used as 
input for DataDerivation
  @param  Nmr_DataDerivation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_DataDerivation_FindAllPeakDims_keyval1(Nmr_DataDerivation self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDerivation.peakDims

PeakDim used as 
input for DataDerivation
  @param  Nmr_DataDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_DataDerivation_FindAllPeakDims_keyval2(Nmr_DataDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDerivation.peakDims

PeakDim used as 
input for DataDerivation
  @param  Nmr_DataDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_DataDerivation_FindAllPeakDims_keyval3(Nmr_DataDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDerivation.peakDims

PeakDim used as 
input for DataDerivation
  @param  Nmr_DataDerivation self
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
extern ApiSet Nmr_DataDerivation_FindAllPeakDims_keyval4(Nmr_DataDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a input 
for DataDerivation
  @param  Nmr_DataDerivation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_DataDerivation_FindAllPeaks(Nmr_DataDerivation self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a input 
for DataDerivation
  @param  Nmr_DataDerivation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_DataDerivation_FindAllPeaks_keyval0(Nmr_DataDerivation self);

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a input 
for DataDerivation
  @param  Nmr_DataDerivation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_DataDerivation_FindAllPeaks_keyval1(Nmr_DataDerivation self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a input 
for DataDerivation
  @param  Nmr_DataDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_DataDerivation_FindAllPeaks_keyval2(Nmr_DataDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a input 
for DataDerivation
  @param  Nmr_DataDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_DataDerivation_FindAllPeaks_keyval3(Nmr_DataDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a input 
for DataDerivation
  @param  Nmr_DataDerivation self
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
extern ApiSet Nmr_DataDerivation_FindAllPeaks_keyval4(Nmr_DataDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DataDerivation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_DataDerivation_FindFirstApplicationData(Nmr_DataDerivation self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DataDerivation self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_DataDerivation_FindFirstApplicationData_keyval0(Nmr_DataDerivation self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DataDerivation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_DataDerivation_FindFirstApplicationData_keyval1(Nmr_DataDerivation self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DataDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_DataDerivation_FindFirstApplicationData_keyval2(Nmr_DataDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DataDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_DataDerivation_FindFirstApplicationData_keyval3(Nmr_DataDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DataDerivation self
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
extern Impl_ApplicationData Nmr_DataDerivation_FindFirstApplicationData_keyval4(Nmr_DataDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.DataDerivation.derivedData

child link to 
class Datum
  @param  Nmr_DataDerivation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Datum Nmr_DataDerivation_FindFirstDerivedData(Nmr_DataDerivation self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.DataDerivation.derivedData

child link to 
class Datum
  @param  Nmr_DataDerivation self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Datum Nmr_DataDerivation_FindFirstDerivedData_keyval0(Nmr_DataDerivation self);

/**
  FindFirst for ccp.nmr.Nmr.DataDerivation.derivedData

child link to 
class Datum
  @param  Nmr_DataDerivation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Datum Nmr_DataDerivation_FindFirstDerivedData_keyval1(Nmr_DataDerivation self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.DataDerivation.derivedData

child link to 
class Datum
  @param  Nmr_DataDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Datum Nmr_DataDerivation_FindFirstDerivedData_keyval2(Nmr_DataDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.DataDerivation.derivedData

child link to 
class Datum
  @param  Nmr_DataDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Datum Nmr_DataDerivation_FindFirstDerivedData_keyval3(Nmr_DataDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.DataDerivation.derivedData

child link to 
class Datum
  @param  Nmr_DataDerivation self
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
extern Nmr_Datum Nmr_DataDerivation_FindFirstDerivedData_keyval4(Nmr_DataDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_DataDerivation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractMeasurement Nmr_DataDerivation_FindFirstInputMeasurement(Nmr_DataDerivation self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_DataDerivation self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractMeasurement Nmr_DataDerivation_FindFirstInputMeasurement_keyval0(Nmr_DataDerivation self);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_DataDerivation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractMeasurement Nmr_DataDerivation_FindFirstInputMeasurement_keyval1(Nmr_DataDerivation self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_DataDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractMeasurement Nmr_DataDerivation_FindFirstInputMeasurement_keyval2(Nmr_DataDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_DataDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractMeasurement Nmr_DataDerivation_FindFirstInputMeasurement_keyval3(Nmr_DataDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_DataDerivation self
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
extern Nmr_AbstractMeasurement Nmr_DataDerivation_FindFirstInputMeasurement_keyval4(Nmr_DataDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a 
input for DataDerivation
  @param  Nmr_DataDerivation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Peak Nmr_DataDerivation_FindFirstPeak(Nmr_DataDerivation self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDerivation.peakDims

PeakDim used 
as input for DataDerivation
  @param  Nmr_DataDerivation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakDim Nmr_DataDerivation_FindFirstPeakDim(Nmr_DataDerivation self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDerivation.peakDims

PeakDim used 
as input for DataDerivation
  @param  Nmr_DataDerivation self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakDim Nmr_DataDerivation_FindFirstPeakDim_keyval0(Nmr_DataDerivation self);

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDerivation.peakDims

PeakDim used 
as input for DataDerivation
  @param  Nmr_DataDerivation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakDim Nmr_DataDerivation_FindFirstPeakDim_keyval1(Nmr_DataDerivation self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDerivation.peakDims

PeakDim used 
as input for DataDerivation
  @param  Nmr_DataDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakDim Nmr_DataDerivation_FindFirstPeakDim_keyval2(Nmr_DataDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDerivation.peakDims

PeakDim used 
as input for DataDerivation
  @param  Nmr_DataDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakDim Nmr_DataDerivation_FindFirstPeakDim_keyval3(Nmr_DataDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDerivation.peakDims

PeakDim used 
as input for DataDerivation
  @param  Nmr_DataDerivation self
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
extern Nmr_PeakDim Nmr_DataDerivation_FindFirstPeakDim_keyval4(Nmr_DataDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a 
input for DataDerivation
  @param  Nmr_DataDerivation self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Peak Nmr_DataDerivation_FindFirstPeak_keyval0(Nmr_DataDerivation self);

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a 
input for DataDerivation
  @param  Nmr_DataDerivation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Peak Nmr_DataDerivation_FindFirstPeak_keyval1(Nmr_DataDerivation self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a 
input for DataDerivation
  @param  Nmr_DataDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Peak Nmr_DataDerivation_FindFirstPeak_keyval2(Nmr_DataDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a 
input for DataDerivation
  @param  Nmr_DataDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Peak Nmr_DataDerivation_FindFirstPeak_keyval3(Nmr_DataDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a 
input for DataDerivation
  @param  Nmr_DataDerivation self
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
extern Nmr_Peak Nmr_DataDerivation_FindFirstPeak_keyval4(Nmr_DataDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.Nmr.DataDerivation
  @param  Nmr_DataDerivation self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Nmr_DataDerivation_Get(Nmr_DataDerivation self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_DataDerivation self
  @returns   the result
**/
extern Acco_AccessObject Nmr_DataDerivation_GetAccess(Nmr_DataDerivation self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DataDerivation self
  @returns   the result
**/
extern ApiList Nmr_DataDerivation_GetApplicationData(Nmr_DataDerivation self);

/**
  GetByKey for ccp.nmr.Nmr.DataDerivation
  @param  Nmr_DataDerivation self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Nmr_DataDerivation Nmr_DataDerivation_GetByKey(Nmr_DataDerivation self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Nmr_DataDerivation self
  @returns   the result
**/
extern ApiString Nmr_DataDerivation_GetClassName(Nmr_DataDerivation self);

/**
  Get for ccp.nmr.Nmr.DataDerivation.derivedData

child link to class 
Datum
  @param  Nmr_DataDerivation self
  @returns   the result
**/
extern ApiSet Nmr_DataDerivation_GetDerivedData(Nmr_DataDerivation self);

/**
  Get for ccp.nmr.Nmr.AbstractDataDerivation.details

Free text, for 
notes, explanatory comments, etc.
  @param  Nmr_DataDerivation self
  @returns   the result
**/
extern ApiString Nmr_DataDerivation_GetDetails(Nmr_DataDerivation self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Nmr_DataDerivation self
  @returns   the result
**/
extern ApiList Nmr_DataDerivation_GetFieldNames(Nmr_DataDerivation self);

/**
  GetFullKey for ccp.nmr.Nmr.DataDerivation
  @param  Nmr_DataDerivation self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Nmr_DataDerivation_GetFullKey(Nmr_DataDerivation self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Nmr_DataDerivation self
  @returns   the result
**/
extern ApiBoolean Nmr_DataDerivation_GetInConstructor(Nmr_DataDerivation self);

/**
  Get for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_DataDerivation self
  @returns   the result
**/
extern ApiSet Nmr_DataDerivation_GetInputMeasurements(Nmr_DataDerivation self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Nmr_DataDerivation self
  @returns   the result
**/
extern ApiBoolean Nmr_DataDerivation_GetIsDeleted(Nmr_DataDerivation self);

/**
  GetLocalKey for ccp.nmr.Nmr.DataDerivation
  @param  Nmr_DataDerivation self
  @returns  Local object key
**/
extern ApiObject Nmr_DataDerivation_GetLocalKey(Nmr_DataDerivation self);

/**
  Get for ccp.nmr.Nmr.AbstractDataDerivation.method

Method used for the 
specific data derivation. Overrides Method of the parent list, if any.
  @param  Nmr_DataDerivation self
  @returns   the result
**/
extern Meth_Method Nmr_DataDerivation_GetMethod(Nmr_DataDerivation self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Nmr_DataDerivation self
  @returns   the result
**/
extern ApiString Nmr_DataDerivation_GetPackageName(Nmr_DataDerivation self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Nmr_DataDerivation self
  @returns   the result
**/
extern ApiString Nmr_DataDerivation_GetPackageShortName(Nmr_DataDerivation self);

/**
  Get for ccp.nmr.Nmr.DataDerivation.parent

link to parent object - 
synonym for parentList
  @param  Nmr_DataDerivation self
  @returns   the result
**/
extern Nmr_DataList Nmr_DataDerivation_GetParent(Nmr_DataDerivation self);

/**
  Get for ccp.nmr.Nmr.DataDerivation.parentList

parent link
  @param  Nmr_DataDerivation self
  @returns   the result
**/
extern Nmr_DataList Nmr_DataDerivation_GetParentList(Nmr_DataDerivation self);

/**
  Get for ccp.nmr.Nmr.AbstractDataDerivation.peakDims

PeakDim used as 
input for DataDerivation
  @param  Nmr_DataDerivation self
  @returns   the result
**/
extern ApiSet Nmr_DataDerivation_GetPeakDims(Nmr_DataDerivation self);

/**
  Get for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a input for 
DataDerivation
  @param  Nmr_DataDerivation self
  @returns   the result
**/
extern ApiSet Nmr_DataDerivation_GetPeaks(Nmr_DataDerivation self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Nmr_DataDerivation self
  @returns   the result
**/
extern ApiString Nmr_DataDerivation_GetQualifiedName(Nmr_DataDerivation self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Nmr_DataDerivation self
  @returns   the result
**/
extern Impl_MemopsRoot Nmr_DataDerivation_GetRoot(Nmr_DataDerivation self);

/**
  Get for ccp.nmr.Nmr.AbstractDataDerivation.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmr_DataDerivation self
  @returns   the result
**/
extern ApiInteger Nmr_DataDerivation_GetSerial(Nmr_DataDerivation self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Nmr_DataDerivation self
  @returns   the result
**/
extern Impl_TopObject Nmr_DataDerivation_GetTopObject(Nmr_DataDerivation self);

/**
  Constructor for ccp.nmr.Nmr.DataDerivation
  @param  Nmr_DataList parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmr_DataDerivation Nmr_DataDerivation_Init(Nmr_DataList parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.Nmr.DataDerivation
  @param  Nmr_DataList parent
  @returns  the new object
**/
extern Nmr_DataDerivation Nmr_DataDerivation_Init_reqd(Nmr_DataList parent);

/**
  Factory function to create ccp.nmr.Nmr.Datum
  @param  Nmr_DataDerivation self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmr_Datum Nmr_DataDerivation_NewDatum(Nmr_DataDerivation self, ApiMap attrlinks);

/**
  Factory function to create ccp.nmr.Nmr.Datum
  @param  Nmr_DataDerivation self
  @returns  the new object
**/
extern Nmr_Datum Nmr_DataDerivation_NewDatum_reqd(Nmr_DataDerivation self);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DataDerivation self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_DataDerivation_RemoveApplicationData(Nmr_DataDerivation self, Impl_ApplicationData value);

/**
  Remove for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_DataDerivation self
  @param  Nmr_AbstractMeasurement value
**/
extern void *Nmr_DataDerivation_RemoveInputMeasurement(Nmr_DataDerivation self, Nmr_AbstractMeasurement value);

/**
  Remove for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a input 
for DataDerivation
  @param  Nmr_DataDerivation self
  @param  Nmr_Peak value
**/
extern void *Nmr_DataDerivation_RemovePeak(Nmr_DataDerivation self, Nmr_Peak value);

/**
  Remove for ccp.nmr.Nmr.AbstractDataDerivation.peakDims

PeakDim used as 
input for DataDerivation
  @param  Nmr_DataDerivation self
  @param  Nmr_PeakDim value
**/
extern void *Nmr_DataDerivation_RemovePeakDim(Nmr_DataDerivation self, Nmr_PeakDim value);

/**
  SetAttr for ccp.nmr.Nmr.DataDerivation
  @param  Nmr_DataDerivation self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Nmr_DataDerivation_Set(Nmr_DataDerivation self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_DataDerivation self
  @param  Acco_AccessObject value
**/
extern void *Nmr_DataDerivation_SetAccess(Nmr_DataDerivation self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DataDerivation self
  @param  ApiList values
**/
extern void *Nmr_DataDerivation_SetApplicationData(Nmr_DataDerivation self, ApiList values);

/**
  Set for ccp.nmr.Nmr.AbstractDataDerivation.details

Free text, for 
notes, explanatory comments, etc.
  @param  Nmr_DataDerivation self
  @param  ApiString value
**/
extern void *Nmr_DataDerivation_SetDetails(Nmr_DataDerivation self, ApiString value);

/**
  Set for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_DataDerivation self
  @param  ApiSet values
**/
extern void *Nmr_DataDerivation_SetInputMeasurements(Nmr_DataDerivation self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.AbstractDataDerivation.method

Method used for the 
specific data derivation. Overrides Method of the parent list, if any.
  @param  Nmr_DataDerivation self
  @param  Meth_Method value
**/
extern void *Nmr_DataDerivation_SetMethod(Nmr_DataDerivation self, Meth_Method value);

/**
  Set for ccp.nmr.Nmr.AbstractDataDerivation.peakDims

PeakDim used as 
input for DataDerivation
  @param  Nmr_DataDerivation self
  @param  ApiSet values
**/
extern void *Nmr_DataDerivation_SetPeakDims(Nmr_DataDerivation self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a input for 
DataDerivation
  @param  Nmr_DataDerivation self
  @param  ApiSet values
**/
extern void *Nmr_DataDerivation_SetPeaks(Nmr_DataDerivation self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.AbstractDataDerivation.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmr_DataDerivation self
  @param  ApiInteger value
**/
extern void *Nmr_DataDerivation_SetSerial(Nmr_DataDerivation self, ApiInteger value);

/**
  Sorted for ccp.nmr.Nmr.DataDerivation.derivedData

child link to class 
Datum
  @param  Nmr_DataDerivation self
  @returns   the result
**/
extern ApiList Nmr_DataDerivation_SortedDerivedData(Nmr_DataDerivation self);

/**
  Sorted for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_DataDerivation self
  @returns   the result
**/
extern ApiList Nmr_DataDerivation_SortedInputMeasurements(Nmr_DataDerivation self);

/**
  Sorted for ccp.nmr.Nmr.AbstractDataDerivation.peakDims

PeakDim used as 
input for DataDerivation
  @param  Nmr_DataDerivation self
  @returns   the result
**/
extern ApiList Nmr_DataDerivation_SortedPeakDims(Nmr_DataDerivation self);

/**
  Sorted for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a input 
for DataDerivation
  @param  Nmr_DataDerivation self
  @returns   the result
**/
extern ApiList Nmr_DataDerivation_SortedPeaks(Nmr_DataDerivation self);

#endif /* __incl__ccp_api_nmr_Nmr_DataDerivation_h__ */
