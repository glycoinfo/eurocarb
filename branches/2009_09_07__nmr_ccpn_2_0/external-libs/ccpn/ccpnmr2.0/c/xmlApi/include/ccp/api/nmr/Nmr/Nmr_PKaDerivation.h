
#ifndef __incl__ccp_api_nmr_Nmr_PKaDerivation_h__
#define __incl__ccp_api_nmr_Nmr_PKaDerivation_h__

#include "ccp.h"

/*
  Derivation for set of pKa(s) and associated parameters
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PKaDerivation self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_PKaDerivation_AddApplicationData(Nmr_PKaDerivation self, Impl_ApplicationData value);

/**
  Add for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_PKaDerivation self
  @param  Nmr_AbstractMeasurement value
**/
extern void *Nmr_PKaDerivation_AddInputMeasurement(Nmr_PKaDerivation self, Nmr_AbstractMeasurement value);

/**
  Add for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a input for 
DataDerivation
  @param  Nmr_PKaDerivation self
  @param  Nmr_Peak value
**/
extern void *Nmr_PKaDerivation_AddPeak(Nmr_PKaDerivation self, Nmr_Peak value);

/**
  Add for ccp.nmr.Nmr.AbstractDataDerivation.peakDims

PeakDim used as 
input for DataDerivation
  @param  Nmr_PKaDerivation self
  @param  Nmr_PeakDim value
**/
extern void *Nmr_PKaDerivation_AddPeakDim(Nmr_PKaDerivation self, Nmr_PeakDim value);

/**
  CheckAllValid for ccp.nmr.Nmr.PKaDerivation
  @param  Nmr_PKaDerivation self
  @param  ApiBoolean complete
**/
extern void *Nmr_PKaDerivation_CheckAllValid(Nmr_PKaDerivation self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.Nmr.PKaDerivation
  @param  Nmr_PKaDerivation self
  @param  ApiBoolean complete
**/
extern void *Nmr_PKaDerivation_CheckValid(Nmr_PKaDerivation self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PKaDerivation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_PKaDerivation_FindAllApplicationData(Nmr_PKaDerivation self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PKaDerivation self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_PKaDerivation_FindAllApplicationData_keyval0(Nmr_PKaDerivation self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PKaDerivation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_PKaDerivation_FindAllApplicationData_keyval1(Nmr_PKaDerivation self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PKaDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_PKaDerivation_FindAllApplicationData_keyval2(Nmr_PKaDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PKaDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_PKaDerivation_FindAllApplicationData_keyval3(Nmr_PKaDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PKaDerivation self
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
extern ApiList Nmr_PKaDerivation_FindAllApplicationData_keyval4(Nmr_PKaDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.PKaDerivation.derivedData

child link to class 
Pka
  @param  Nmr_PKaDerivation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_PKaDerivation_FindAllDerivedData(Nmr_PKaDerivation self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.PKaDerivation.derivedData

child link to class 
Pka
  @param  Nmr_PKaDerivation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_PKaDerivation_FindAllDerivedData_keyval0(Nmr_PKaDerivation self);

/**
  FindAll for ccp.nmr.Nmr.PKaDerivation.derivedData

child link to class 
Pka
  @param  Nmr_PKaDerivation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_PKaDerivation_FindAllDerivedData_keyval1(Nmr_PKaDerivation self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.PKaDerivation.derivedData

child link to class 
Pka
  @param  Nmr_PKaDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_PKaDerivation_FindAllDerivedData_keyval2(Nmr_PKaDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.PKaDerivation.derivedData

child link to class 
Pka
  @param  Nmr_PKaDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_PKaDerivation_FindAllDerivedData_keyval3(Nmr_PKaDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.PKaDerivation.derivedData

child link to class 
Pka
  @param  Nmr_PKaDerivation self
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
extern ApiSet Nmr_PKaDerivation_FindAllDerivedData_keyval4(Nmr_PKaDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_PKaDerivation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_PKaDerivation_FindAllInputMeasurements(Nmr_PKaDerivation self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_PKaDerivation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_PKaDerivation_FindAllInputMeasurements_keyval0(Nmr_PKaDerivation self);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_PKaDerivation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_PKaDerivation_FindAllInputMeasurements_keyval1(Nmr_PKaDerivation self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_PKaDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_PKaDerivation_FindAllInputMeasurements_keyval2(Nmr_PKaDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_PKaDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_PKaDerivation_FindAllInputMeasurements_keyval3(Nmr_PKaDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_PKaDerivation self
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
extern ApiSet Nmr_PKaDerivation_FindAllInputMeasurements_keyval4(Nmr_PKaDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDerivation.peakDims

PeakDim used as 
input for DataDerivation
  @param  Nmr_PKaDerivation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_PKaDerivation_FindAllPeakDims(Nmr_PKaDerivation self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDerivation.peakDims

PeakDim used as 
input for DataDerivation
  @param  Nmr_PKaDerivation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_PKaDerivation_FindAllPeakDims_keyval0(Nmr_PKaDerivation self);

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDerivation.peakDims

PeakDim used as 
input for DataDerivation
  @param  Nmr_PKaDerivation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_PKaDerivation_FindAllPeakDims_keyval1(Nmr_PKaDerivation self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDerivation.peakDims

PeakDim used as 
input for DataDerivation
  @param  Nmr_PKaDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_PKaDerivation_FindAllPeakDims_keyval2(Nmr_PKaDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDerivation.peakDims

PeakDim used as 
input for DataDerivation
  @param  Nmr_PKaDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_PKaDerivation_FindAllPeakDims_keyval3(Nmr_PKaDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDerivation.peakDims

PeakDim used as 
input for DataDerivation
  @param  Nmr_PKaDerivation self
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
extern ApiSet Nmr_PKaDerivation_FindAllPeakDims_keyval4(Nmr_PKaDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a input 
for DataDerivation
  @param  Nmr_PKaDerivation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_PKaDerivation_FindAllPeaks(Nmr_PKaDerivation self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a input 
for DataDerivation
  @param  Nmr_PKaDerivation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_PKaDerivation_FindAllPeaks_keyval0(Nmr_PKaDerivation self);

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a input 
for DataDerivation
  @param  Nmr_PKaDerivation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_PKaDerivation_FindAllPeaks_keyval1(Nmr_PKaDerivation self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a input 
for DataDerivation
  @param  Nmr_PKaDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_PKaDerivation_FindAllPeaks_keyval2(Nmr_PKaDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a input 
for DataDerivation
  @param  Nmr_PKaDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_PKaDerivation_FindAllPeaks_keyval3(Nmr_PKaDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a input 
for DataDerivation
  @param  Nmr_PKaDerivation self
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
extern ApiSet Nmr_PKaDerivation_FindAllPeaks_keyval4(Nmr_PKaDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PKaDerivation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_PKaDerivation_FindFirstApplicationData(Nmr_PKaDerivation self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PKaDerivation self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_PKaDerivation_FindFirstApplicationData_keyval0(Nmr_PKaDerivation self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PKaDerivation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_PKaDerivation_FindFirstApplicationData_keyval1(Nmr_PKaDerivation self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PKaDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_PKaDerivation_FindFirstApplicationData_keyval2(Nmr_PKaDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PKaDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_PKaDerivation_FindFirstApplicationData_keyval3(Nmr_PKaDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PKaDerivation self
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
extern Impl_ApplicationData Nmr_PKaDerivation_FindFirstApplicationData_keyval4(Nmr_PKaDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.PKaDerivation.derivedData

child link to class 
Pka
  @param  Nmr_PKaDerivation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Pka Nmr_PKaDerivation_FindFirstDerivedData(Nmr_PKaDerivation self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.PKaDerivation.derivedData

child link to class 
Pka
  @param  Nmr_PKaDerivation self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Pka Nmr_PKaDerivation_FindFirstDerivedData_keyval0(Nmr_PKaDerivation self);

/**
  FindFirst for ccp.nmr.Nmr.PKaDerivation.derivedData

child link to class 
Pka
  @param  Nmr_PKaDerivation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Pka Nmr_PKaDerivation_FindFirstDerivedData_keyval1(Nmr_PKaDerivation self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.PKaDerivation.derivedData

child link to class 
Pka
  @param  Nmr_PKaDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Pka Nmr_PKaDerivation_FindFirstDerivedData_keyval2(Nmr_PKaDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.PKaDerivation.derivedData

child link to class 
Pka
  @param  Nmr_PKaDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Pka Nmr_PKaDerivation_FindFirstDerivedData_keyval3(Nmr_PKaDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.PKaDerivation.derivedData

child link to class 
Pka
  @param  Nmr_PKaDerivation self
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
extern Nmr_Pka Nmr_PKaDerivation_FindFirstDerivedData_keyval4(Nmr_PKaDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_PKaDerivation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractMeasurement Nmr_PKaDerivation_FindFirstInputMeasurement(Nmr_PKaDerivation self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_PKaDerivation self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractMeasurement Nmr_PKaDerivation_FindFirstInputMeasurement_keyval0(Nmr_PKaDerivation self);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_PKaDerivation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractMeasurement Nmr_PKaDerivation_FindFirstInputMeasurement_keyval1(Nmr_PKaDerivation self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_PKaDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractMeasurement Nmr_PKaDerivation_FindFirstInputMeasurement_keyval2(Nmr_PKaDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_PKaDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractMeasurement Nmr_PKaDerivation_FindFirstInputMeasurement_keyval3(Nmr_PKaDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_PKaDerivation self
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
extern Nmr_AbstractMeasurement Nmr_PKaDerivation_FindFirstInputMeasurement_keyval4(Nmr_PKaDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a 
input for DataDerivation
  @param  Nmr_PKaDerivation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Peak Nmr_PKaDerivation_FindFirstPeak(Nmr_PKaDerivation self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDerivation.peakDims

PeakDim used 
as input for DataDerivation
  @param  Nmr_PKaDerivation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakDim Nmr_PKaDerivation_FindFirstPeakDim(Nmr_PKaDerivation self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDerivation.peakDims

PeakDim used 
as input for DataDerivation
  @param  Nmr_PKaDerivation self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakDim Nmr_PKaDerivation_FindFirstPeakDim_keyval0(Nmr_PKaDerivation self);

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDerivation.peakDims

PeakDim used 
as input for DataDerivation
  @param  Nmr_PKaDerivation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakDim Nmr_PKaDerivation_FindFirstPeakDim_keyval1(Nmr_PKaDerivation self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDerivation.peakDims

PeakDim used 
as input for DataDerivation
  @param  Nmr_PKaDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakDim Nmr_PKaDerivation_FindFirstPeakDim_keyval2(Nmr_PKaDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDerivation.peakDims

PeakDim used 
as input for DataDerivation
  @param  Nmr_PKaDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakDim Nmr_PKaDerivation_FindFirstPeakDim_keyval3(Nmr_PKaDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDerivation.peakDims

PeakDim used 
as input for DataDerivation
  @param  Nmr_PKaDerivation self
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
extern Nmr_PeakDim Nmr_PKaDerivation_FindFirstPeakDim_keyval4(Nmr_PKaDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a 
input for DataDerivation
  @param  Nmr_PKaDerivation self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Peak Nmr_PKaDerivation_FindFirstPeak_keyval0(Nmr_PKaDerivation self);

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a 
input for DataDerivation
  @param  Nmr_PKaDerivation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Peak Nmr_PKaDerivation_FindFirstPeak_keyval1(Nmr_PKaDerivation self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a 
input for DataDerivation
  @param  Nmr_PKaDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Peak Nmr_PKaDerivation_FindFirstPeak_keyval2(Nmr_PKaDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a 
input for DataDerivation
  @param  Nmr_PKaDerivation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Peak Nmr_PKaDerivation_FindFirstPeak_keyval3(Nmr_PKaDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a 
input for DataDerivation
  @param  Nmr_PKaDerivation self
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
extern Nmr_Peak Nmr_PKaDerivation_FindFirstPeak_keyval4(Nmr_PKaDerivation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.Nmr.PKaDerivation
  @param  Nmr_PKaDerivation self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Nmr_PKaDerivation_Get(Nmr_PKaDerivation self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_PKaDerivation self
  @returns   the result
**/
extern Acco_AccessObject Nmr_PKaDerivation_GetAccess(Nmr_PKaDerivation self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PKaDerivation self
  @returns   the result
**/
extern ApiList Nmr_PKaDerivation_GetApplicationData(Nmr_PKaDerivation self);

/**
  GetByKey for ccp.nmr.Nmr.PKaDerivation
  @param  Nmr_PKaDerivation self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Nmr_PKaDerivation Nmr_PKaDerivation_GetByKey(Nmr_PKaDerivation self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Nmr_PKaDerivation self
  @returns   the result
**/
extern ApiString Nmr_PKaDerivation_GetClassName(Nmr_PKaDerivation self);

/**
  Get for ccp.nmr.Nmr.PKaDerivation.derivedData

child link to class Pka
  @param  Nmr_PKaDerivation self
  @returns   the result
**/
extern ApiSet Nmr_PKaDerivation_GetDerivedData(Nmr_PKaDerivation self);

/**
  Get for ccp.nmr.Nmr.AbstractDataDerivation.details

Free text, for 
notes, explanatory comments, etc.
  @param  Nmr_PKaDerivation self
  @returns   the result
**/
extern ApiString Nmr_PKaDerivation_GetDetails(Nmr_PKaDerivation self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Nmr_PKaDerivation self
  @returns   the result
**/
extern ApiList Nmr_PKaDerivation_GetFieldNames(Nmr_PKaDerivation self);

/**
  GetFullKey for ccp.nmr.Nmr.PKaDerivation
  @param  Nmr_PKaDerivation self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Nmr_PKaDerivation_GetFullKey(Nmr_PKaDerivation self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Nmr_PKaDerivation self
  @returns   the result
**/
extern ApiBoolean Nmr_PKaDerivation_GetInConstructor(Nmr_PKaDerivation self);

/**
  Get for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_PKaDerivation self
  @returns   the result
**/
extern ApiSet Nmr_PKaDerivation_GetInputMeasurements(Nmr_PKaDerivation self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Nmr_PKaDerivation self
  @returns   the result
**/
extern ApiBoolean Nmr_PKaDerivation_GetIsDeleted(Nmr_PKaDerivation self);

/**
  GetLocalKey for ccp.nmr.Nmr.PKaDerivation
  @param  Nmr_PKaDerivation self
  @returns  Local object key
**/
extern ApiObject Nmr_PKaDerivation_GetLocalKey(Nmr_PKaDerivation self);

/**
  Get for ccp.nmr.Nmr.AbstractDataDerivation.method

Method used for the 
specific data derivation. Overrides Method of the parent list, if any.
  @param  Nmr_PKaDerivation self
  @returns   the result
**/
extern Meth_Method Nmr_PKaDerivation_GetMethod(Nmr_PKaDerivation self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Nmr_PKaDerivation self
  @returns   the result
**/
extern ApiString Nmr_PKaDerivation_GetPackageName(Nmr_PKaDerivation self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Nmr_PKaDerivation self
  @returns   the result
**/
extern ApiString Nmr_PKaDerivation_GetPackageShortName(Nmr_PKaDerivation self);

/**
  Get for ccp.nmr.Nmr.PKaDerivation.parent

link to parent object - 
synonym for parentList
  @param  Nmr_PKaDerivation self
  @returns   the result
**/
extern Nmr_PkaList Nmr_PKaDerivation_GetParent(Nmr_PKaDerivation self);

/**
  Get for ccp.nmr.Nmr.PKaDerivation.parentList

parent link
  @param  Nmr_PKaDerivation self
  @returns   the result
**/
extern Nmr_PkaList Nmr_PKaDerivation_GetParentList(Nmr_PKaDerivation self);

/**
  Get for ccp.nmr.Nmr.AbstractDataDerivation.peakDims

PeakDim used as 
input for DataDerivation
  @param  Nmr_PKaDerivation self
  @returns   the result
**/
extern ApiSet Nmr_PKaDerivation_GetPeakDims(Nmr_PKaDerivation self);

/**
  Get for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a input for 
DataDerivation
  @param  Nmr_PKaDerivation self
  @returns   the result
**/
extern ApiSet Nmr_PKaDerivation_GetPeaks(Nmr_PKaDerivation self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Nmr_PKaDerivation self
  @returns   the result
**/
extern ApiString Nmr_PKaDerivation_GetQualifiedName(Nmr_PKaDerivation self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Nmr_PKaDerivation self
  @returns   the result
**/
extern Impl_MemopsRoot Nmr_PKaDerivation_GetRoot(Nmr_PKaDerivation self);

/**
  Get for ccp.nmr.Nmr.AbstractDataDerivation.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmr_PKaDerivation self
  @returns   the result
**/
extern ApiInteger Nmr_PKaDerivation_GetSerial(Nmr_PKaDerivation self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Nmr_PKaDerivation self
  @returns   the result
**/
extern Impl_TopObject Nmr_PKaDerivation_GetTopObject(Nmr_PKaDerivation self);

/**
  Constructor for ccp.nmr.Nmr.PKaDerivation
  @param  Nmr_PkaList parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmr_PKaDerivation Nmr_PKaDerivation_Init(Nmr_PkaList parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.Nmr.PKaDerivation
  @param  Nmr_PkaList parent
  @returns  the new object
**/
extern Nmr_PKaDerivation Nmr_PKaDerivation_Init_reqd(Nmr_PkaList parent);

/**
  Factory function to create ccp.nmr.Nmr.Pka
  @param  Nmr_PKaDerivation self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmr_Pka Nmr_PKaDerivation_NewPka(Nmr_PKaDerivation self, ApiMap attrlinks);

/**
  Factory function to create ccp.nmr.Nmr.Pka
  @param  Nmr_PKaDerivation self
  @param  Nmr_Resonance resonance
  @returns  the new object
**/
extern Nmr_Pka Nmr_PKaDerivation_NewPka_reqd(Nmr_PKaDerivation self, Nmr_Resonance resonance);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PKaDerivation self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_PKaDerivation_RemoveApplicationData(Nmr_PKaDerivation self, Impl_ApplicationData value);

/**
  Remove for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_PKaDerivation self
  @param  Nmr_AbstractMeasurement value
**/
extern void *Nmr_PKaDerivation_RemoveInputMeasurement(Nmr_PKaDerivation self, Nmr_AbstractMeasurement value);

/**
  Remove for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a input 
for DataDerivation
  @param  Nmr_PKaDerivation self
  @param  Nmr_Peak value
**/
extern void *Nmr_PKaDerivation_RemovePeak(Nmr_PKaDerivation self, Nmr_Peak value);

/**
  Remove for ccp.nmr.Nmr.AbstractDataDerivation.peakDims

PeakDim used as 
input for DataDerivation
  @param  Nmr_PKaDerivation self
  @param  Nmr_PeakDim value
**/
extern void *Nmr_PKaDerivation_RemovePeakDim(Nmr_PKaDerivation self, Nmr_PeakDim value);

/**
  SetAttr for ccp.nmr.Nmr.PKaDerivation
  @param  Nmr_PKaDerivation self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Nmr_PKaDerivation_Set(Nmr_PKaDerivation self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_PKaDerivation self
  @param  Acco_AccessObject value
**/
extern void *Nmr_PKaDerivation_SetAccess(Nmr_PKaDerivation self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PKaDerivation self
  @param  ApiList values
**/
extern void *Nmr_PKaDerivation_SetApplicationData(Nmr_PKaDerivation self, ApiList values);

/**
  Set for ccp.nmr.Nmr.AbstractDataDerivation.details

Free text, for 
notes, explanatory comments, etc.
  @param  Nmr_PKaDerivation self
  @param  ApiString value
**/
extern void *Nmr_PKaDerivation_SetDetails(Nmr_PKaDerivation self, ApiString value);

/**
  Set for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_PKaDerivation self
  @param  ApiSet values
**/
extern void *Nmr_PKaDerivation_SetInputMeasurements(Nmr_PKaDerivation self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.AbstractDataDerivation.method

Method used for the 
specific data derivation. Overrides Method of the parent list, if any.
  @param  Nmr_PKaDerivation self
  @param  Meth_Method value
**/
extern void *Nmr_PKaDerivation_SetMethod(Nmr_PKaDerivation self, Meth_Method value);

/**
  Set for ccp.nmr.Nmr.AbstractDataDerivation.peakDims

PeakDim used as 
input for DataDerivation
  @param  Nmr_PKaDerivation self
  @param  ApiSet values
**/
extern void *Nmr_PKaDerivation_SetPeakDims(Nmr_PKaDerivation self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a input for 
DataDerivation
  @param  Nmr_PKaDerivation self
  @param  ApiSet values
**/
extern void *Nmr_PKaDerivation_SetPeaks(Nmr_PKaDerivation self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.AbstractDataDerivation.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmr_PKaDerivation self
  @param  ApiInteger value
**/
extern void *Nmr_PKaDerivation_SetSerial(Nmr_PKaDerivation self, ApiInteger value);

/**
  Sorted for ccp.nmr.Nmr.PKaDerivation.derivedData

child link to class 
Pka
  @param  Nmr_PKaDerivation self
  @returns   the result
**/
extern ApiList Nmr_PKaDerivation_SortedDerivedData(Nmr_PKaDerivation self);

/**
  Sorted for 
ccp.nmr.Nmr.AbstractDataDerivation.inputMeasurements

Measurements used 
as input for this particular data derivation.
  @param  Nmr_PKaDerivation self
  @returns   the result
**/
extern ApiList Nmr_PKaDerivation_SortedInputMeasurements(Nmr_PKaDerivation self);

/**
  Sorted for ccp.nmr.Nmr.AbstractDataDerivation.peakDims

PeakDim used as 
input for DataDerivation
  @param  Nmr_PKaDerivation self
  @returns   the result
**/
extern ApiList Nmr_PKaDerivation_SortedPeakDims(Nmr_PKaDerivation self);

/**
  Sorted for ccp.nmr.Nmr.AbstractDataDerivation.peaks

Peaks used a input 
for DataDerivation
  @param  Nmr_PKaDerivation self
  @returns   the result
**/
extern ApiList Nmr_PKaDerivation_SortedPeaks(Nmr_PKaDerivation self);

#endif /* __incl__ccp_api_nmr_Nmr_PKaDerivation_h__ */
