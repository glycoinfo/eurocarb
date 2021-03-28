
#ifndef __incl__ccp_api_nmr_Nmr_T1Rho_h__
#define __incl__ccp_api_nmr_Nmr_T1Rho_h__

#include "ccp.h"

/*
  T1 rho measurement.
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_T1Rho self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_T1Rho_AddApplicationData(Nmr_T1Rho self, Impl_ApplicationData value);

/**
  Add for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_T1Rho self
  @param  Nmr_AbstractDataDerivation value
**/
extern void *Nmr_T1Rho_AddDataDerivation(Nmr_T1Rho self, Nmr_AbstractDataDerivation value);

/**
  Add for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_T1Rho self
  @param  Vald_NmrMeasurementValidation value
**/
extern void *Nmr_T1Rho_AddNmrMeasurementValidation(Nmr_T1Rho self, Vald_NmrMeasurementValidation value);

/**
  Add for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_T1Rho self
  @param  Nmr_Peak value
**/
extern void *Nmr_T1Rho_AddPeak(Nmr_T1Rho self, Nmr_Peak value);

/**
  Add for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in the 
derivation of the measurement value. The description in the 'method' may 
refer to these peakDims.
  @param  Nmr_T1Rho self
  @param  Nmr_PeakDim value
**/
extern void *Nmr_T1Rho_AddPeakDim(Nmr_T1Rho self, Nmr_PeakDim value);

/**
  CheckAllValid for ccp.nmr.Nmr.T1Rho
  @param  Nmr_T1Rho self
  @param  ApiBoolean complete
**/
extern void *Nmr_T1Rho_CheckAllValid(Nmr_T1Rho self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.Nmr.T1Rho
  @param  Nmr_T1Rho self
  @param  ApiBoolean complete
**/
extern void *Nmr_T1Rho_CheckValid(Nmr_T1Rho self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_T1Rho self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_T1Rho_FindAllApplicationData(Nmr_T1Rho self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_T1Rho self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_T1Rho_FindAllApplicationData_keyval0(Nmr_T1Rho self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_T1Rho self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_T1Rho_FindAllApplicationData_keyval1(Nmr_T1Rho self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_T1Rho self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_T1Rho_FindAllApplicationData_keyval2(Nmr_T1Rho self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_T1Rho self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_T1Rho_FindAllApplicationData_keyval3(Nmr_T1Rho self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_T1Rho self
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
extern ApiList Nmr_T1Rho_FindAllApplicationData_keyval4(Nmr_T1Rho self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_T1Rho self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_T1Rho_FindAllDataDerivations(Nmr_T1Rho self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_T1Rho self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_T1Rho_FindAllDataDerivations_keyval0(Nmr_T1Rho self);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_T1Rho self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_T1Rho_FindAllDataDerivations_keyval1(Nmr_T1Rho self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_T1Rho self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_T1Rho_FindAllDataDerivations_keyval2(Nmr_T1Rho self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_T1Rho self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_T1Rho_FindAllDataDerivations_keyval3(Nmr_T1Rho self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_T1Rho self
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
extern ApiSet Nmr_T1Rho_FindAllDataDerivations_keyval4(Nmr_T1Rho self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_T1Rho self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_T1Rho_FindAllNmrMeasurementValidations(Nmr_T1Rho self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_T1Rho self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_T1Rho_FindAllNmrMeasurementValidations_keyval0(Nmr_T1Rho self);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_T1Rho self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_T1Rho_FindAllNmrMeasurementValidations_keyval1(Nmr_T1Rho self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_T1Rho self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_T1Rho_FindAllNmrMeasurementValidations_keyval2(Nmr_T1Rho self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_T1Rho self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_T1Rho_FindAllNmrMeasurementValidations_keyval3(Nmr_T1Rho self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_T1Rho self
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
extern ApiSet Nmr_T1Rho_FindAllNmrMeasurementValidations_keyval4(Nmr_T1Rho self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_T1Rho self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_T1Rho_FindAllPeakDims(Nmr_T1Rho self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_T1Rho self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_T1Rho_FindAllPeakDims_keyval0(Nmr_T1Rho self);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_T1Rho self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_T1Rho_FindAllPeakDims_keyval1(Nmr_T1Rho self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_T1Rho self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_T1Rho_FindAllPeakDims_keyval2(Nmr_T1Rho self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_T1Rho self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_T1Rho_FindAllPeakDims_keyval3(Nmr_T1Rho self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_T1Rho self
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
extern ApiSet Nmr_T1Rho_FindAllPeakDims_keyval4(Nmr_T1Rho self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_T1Rho self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_T1Rho_FindAllPeaks(Nmr_T1Rho self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_T1Rho self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_T1Rho_FindAllPeaks_keyval0(Nmr_T1Rho self);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_T1Rho self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_T1Rho_FindAllPeaks_keyval1(Nmr_T1Rho self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_T1Rho self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_T1Rho_FindAllPeaks_keyval2(Nmr_T1Rho self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_T1Rho self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_T1Rho_FindAllPeaks_keyval3(Nmr_T1Rho self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_T1Rho self
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
extern ApiSet Nmr_T1Rho_FindAllPeaks_keyval4(Nmr_T1Rho self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_T1Rho self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_T1Rho_FindFirstApplicationData(Nmr_T1Rho self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_T1Rho self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_T1Rho_FindFirstApplicationData_keyval0(Nmr_T1Rho self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_T1Rho self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_T1Rho_FindFirstApplicationData_keyval1(Nmr_T1Rho self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_T1Rho self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_T1Rho_FindFirstApplicationData_keyval2(Nmr_T1Rho self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_T1Rho self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_T1Rho_FindFirstApplicationData_keyval3(Nmr_T1Rho self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_T1Rho self
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
extern Impl_ApplicationData Nmr_T1Rho_FindFirstApplicationData_keyval4(Nmr_T1Rho self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_T1Rho self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractDataDerivation Nmr_T1Rho_FindFirstDataDerivation(Nmr_T1Rho self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_T1Rho self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractDataDerivation Nmr_T1Rho_FindFirstDataDerivation_keyval0(Nmr_T1Rho self);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_T1Rho self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractDataDerivation Nmr_T1Rho_FindFirstDataDerivation_keyval1(Nmr_T1Rho self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_T1Rho self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractDataDerivation Nmr_T1Rho_FindFirstDataDerivation_keyval2(Nmr_T1Rho self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_T1Rho self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractDataDerivation Nmr_T1Rho_FindFirstDataDerivation_keyval3(Nmr_T1Rho self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_T1Rho self
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
extern Nmr_AbstractDataDerivation Nmr_T1Rho_FindFirstDataDerivation_keyval4(Nmr_T1Rho self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_T1Rho self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrMeasurementValidation Nmr_T1Rho_FindFirstNmrMeasurementValidation(Nmr_T1Rho self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_T1Rho self
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrMeasurementValidation Nmr_T1Rho_FindFirstNmrMeasurementValidation_keyval0(Nmr_T1Rho self);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_T1Rho self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrMeasurementValidation Nmr_T1Rho_FindFirstNmrMeasurementValidation_keyval1(Nmr_T1Rho self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_T1Rho self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrMeasurementValidation Nmr_T1Rho_FindFirstNmrMeasurementValidation_keyval2(Nmr_T1Rho self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_T1Rho self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrMeasurementValidation Nmr_T1Rho_FindFirstNmrMeasurementValidation_keyval3(Nmr_T1Rho self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_T1Rho self
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
extern Vald_NmrMeasurementValidation Nmr_T1Rho_FindFirstNmrMeasurementValidation_keyval4(Nmr_T1Rho self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_T1Rho self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Peak Nmr_T1Rho_FindFirstPeak(Nmr_T1Rho self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_T1Rho self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakDim Nmr_T1Rho_FindFirstPeakDim(Nmr_T1Rho self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_T1Rho self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakDim Nmr_T1Rho_FindFirstPeakDim_keyval0(Nmr_T1Rho self);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_T1Rho self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakDim Nmr_T1Rho_FindFirstPeakDim_keyval1(Nmr_T1Rho self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_T1Rho self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakDim Nmr_T1Rho_FindFirstPeakDim_keyval2(Nmr_T1Rho self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_T1Rho self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakDim Nmr_T1Rho_FindFirstPeakDim_keyval3(Nmr_T1Rho self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_T1Rho self
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
extern Nmr_PeakDim Nmr_T1Rho_FindFirstPeakDim_keyval4(Nmr_T1Rho self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_T1Rho self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Peak Nmr_T1Rho_FindFirstPeak_keyval0(Nmr_T1Rho self);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_T1Rho self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Peak Nmr_T1Rho_FindFirstPeak_keyval1(Nmr_T1Rho self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_T1Rho self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Peak Nmr_T1Rho_FindFirstPeak_keyval2(Nmr_T1Rho self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_T1Rho self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Peak Nmr_T1Rho_FindFirstPeak_keyval3(Nmr_T1Rho self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_T1Rho self
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
extern Nmr_Peak Nmr_T1Rho_FindFirstPeak_keyval4(Nmr_T1Rho self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.Nmr.T1Rho
  @param  Nmr_T1Rho self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Nmr_T1Rho_Get(Nmr_T1Rho self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_T1Rho self
  @returns   the result
**/
extern Acco_AccessObject Nmr_T1Rho_GetAccess(Nmr_T1Rho self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_T1Rho self
  @returns   the result
**/
extern ApiList Nmr_T1Rho_GetApplicationData(Nmr_T1Rho self);

/**
  GetByKey for ccp.nmr.Nmr.T1Rho
  @param  Nmr_T1Rho self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Nmr_T1Rho Nmr_T1Rho_GetByKey(Nmr_T1Rho self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Nmr_T1Rho self
  @returns   the result
**/
extern ApiString Nmr_T1Rho_GetClassName(Nmr_T1Rho self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_T1Rho self
  @returns   the result
**/
extern ApiSet Nmr_T1Rho_GetDataDerivations(Nmr_T1Rho self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurement.details

Free text, for notes, 
explanatory comments, etc.
  @param  Nmr_T1Rho self
  @returns   the result
**/
extern ApiString Nmr_T1Rho_GetDetails(Nmr_T1Rho self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurement.error

Error (standard 
deviation) of measurement
  @param  Nmr_T1Rho self
  @returns   the result
**/
extern ApiFloat Nmr_T1Rho_GetError(Nmr_T1Rho self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Nmr_T1Rho self
  @returns   the result
**/
extern ApiList Nmr_T1Rho_GetFieldNames(Nmr_T1Rho self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurement.figOfMerit

Figure of Merit for 
measurement, i.e. a number that describes the reliablity. Goes from 1.0 
(fully reliable, the default), to 0.0 (unreliable).
  @param  Nmr_T1Rho self
  @returns   the result
**/
extern ApiFloat Nmr_T1Rho_GetFigOfMerit(Nmr_T1Rho self);

/**
  GetFullKey for ccp.nmr.Nmr.T1Rho
  @param  Nmr_T1Rho self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Nmr_T1Rho_GetFullKey(Nmr_T1Rho self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Nmr_T1Rho self
  @returns   the result
**/
extern ApiBoolean Nmr_T1Rho_GetInConstructor(Nmr_T1Rho self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Nmr_T1Rho self
  @returns   the result
**/
extern ApiBoolean Nmr_T1Rho_GetIsDeleted(Nmr_T1Rho self);

/**
  GetLocalKey for ccp.nmr.Nmr.T1Rho
  @param  Nmr_T1Rho self
  @returns  Local object key
**/
extern ApiObject Nmr_T1Rho_GetLocalKey(Nmr_T1Rho self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurement.method

Method used to calculate 
this specific measurment value. Overrides MeasurementList.method
  @param  Nmr_T1Rho self
  @returns   the result
**/
extern Meth_Method Nmr_T1Rho_GetMethod(Nmr_T1Rho self);

/**
  Get for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_T1Rho self
  @returns   the result
**/
extern ApiSet Nmr_T1Rho_GetNmrMeasurementValidations(Nmr_T1Rho self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Nmr_T1Rho self
  @returns   the result
**/
extern ApiString Nmr_T1Rho_GetPackageName(Nmr_T1Rho self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Nmr_T1Rho self
  @returns   the result
**/
extern ApiString Nmr_T1Rho_GetPackageShortName(Nmr_T1Rho self);

/**
  Get for ccp.nmr.Nmr.T1Rho.parent

link to parent object - synonym for 
parentList
  @param  Nmr_T1Rho self
  @returns   the result
**/
extern Nmr_T1rhoList Nmr_T1Rho_GetParent(Nmr_T1Rho self);

/**
  Get for ccp.nmr.Nmr.T1Rho.parentList

parent link
  @param  Nmr_T1Rho self
  @returns   the result
**/
extern Nmr_T1rhoList Nmr_T1Rho_GetParentList(Nmr_T1Rho self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in the 
derivation of the measurement value. The description in the 'method' may 
refer to these peakDims.
  @param  Nmr_T1Rho self
  @returns   the result
**/
extern ApiSet Nmr_T1Rho_GetPeakDims(Nmr_T1Rho self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_T1Rho self
  @returns   the result
**/
extern ApiSet Nmr_T1Rho_GetPeaks(Nmr_T1Rho self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Nmr_T1Rho self
  @returns   the result
**/
extern ApiString Nmr_T1Rho_GetQualifiedName(Nmr_T1Rho self);

/**
  Get for ccp.nmr.Nmr.T1Rho.resonance

Resonance that holds T1 rho 
measurements
  @param  Nmr_T1Rho self
  @returns   the result
**/
extern Nmr_Resonance Nmr_T1Rho_GetResonance(Nmr_T1Rho self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Nmr_T1Rho self
  @returns   the result
**/
extern Impl_MemopsRoot Nmr_T1Rho_GetRoot(Nmr_T1Rho self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Nmr_T1Rho self
  @returns   the result
**/
extern Impl_TopObject Nmr_T1Rho_GetTopObject(Nmr_T1Rho self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurement.value

Value of measurement
  @param  Nmr_T1Rho self
  @returns   the result
**/
extern ApiFloat Nmr_T1Rho_GetValue(Nmr_T1Rho self);

/**
  Constructor for ccp.nmr.Nmr.T1Rho
  @param  Nmr_T1rhoList parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmr_T1Rho Nmr_T1Rho_Init(Nmr_T1rhoList parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.Nmr.T1Rho
  @param  Nmr_T1rhoList parent
  @param  Nmr_Resonance resonance
  @param  float value
  @returns  the new object
**/
extern Nmr_T1Rho Nmr_T1Rho_Init_reqd(Nmr_T1rhoList parent, Nmr_Resonance resonance, float value);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_T1Rho self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_T1Rho_RemoveApplicationData(Nmr_T1Rho self, Impl_ApplicationData value);

/**
  Remove for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_T1Rho self
  @param  Nmr_AbstractDataDerivation value
**/
extern void *Nmr_T1Rho_RemoveDataDerivation(Nmr_T1Rho self, Nmr_AbstractDataDerivation value);

/**
  Remove for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_T1Rho self
  @param  Vald_NmrMeasurementValidation value
**/
extern void *Nmr_T1Rho_RemoveNmrMeasurementValidation(Nmr_T1Rho self, Vald_NmrMeasurementValidation value);

/**
  Remove for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_T1Rho self
  @param  Nmr_Peak value
**/
extern void *Nmr_T1Rho_RemovePeak(Nmr_T1Rho self, Nmr_Peak value);

/**
  Remove for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_T1Rho self
  @param  Nmr_PeakDim value
**/
extern void *Nmr_T1Rho_RemovePeakDim(Nmr_T1Rho self, Nmr_PeakDim value);

/**
  SetAttr for ccp.nmr.Nmr.T1Rho
  @param  Nmr_T1Rho self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Nmr_T1Rho_Set(Nmr_T1Rho self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_T1Rho self
  @param  Acco_AccessObject value
**/
extern void *Nmr_T1Rho_SetAccess(Nmr_T1Rho self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_T1Rho self
  @param  ApiList values
**/
extern void *Nmr_T1Rho_SetApplicationData(Nmr_T1Rho self, ApiList values);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_T1Rho self
  @param  ApiSet values
**/
extern void *Nmr_T1Rho_SetDataDerivations(Nmr_T1Rho self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurement.details

Free text, for notes, 
explanatory comments, etc.
  @param  Nmr_T1Rho self
  @param  ApiString value
**/
extern void *Nmr_T1Rho_SetDetails(Nmr_T1Rho self, ApiString value);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurement.error

Error (standard 
deviation) of measurement
  @param  Nmr_T1Rho self
  @param  ApiFloat value
**/
extern void *Nmr_T1Rho_SetError(Nmr_T1Rho self, ApiFloat value);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurement.figOfMerit

Figure of Merit for 
measurement, i.e. a number that describes the reliablity. Goes from 1.0 
(fully reliable, the default), to 0.0 (unreliable).
  @param  Nmr_T1Rho self
  @param  ApiFloat value
**/
extern void *Nmr_T1Rho_SetFigOfMerit(Nmr_T1Rho self, ApiFloat value);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurement.method

Method used to calculate 
this specific measurment value. Overrides MeasurementList.method
  @param  Nmr_T1Rho self
  @param  Meth_Method value
**/
extern void *Nmr_T1Rho_SetMethod(Nmr_T1Rho self, Meth_Method value);

/**
  Set for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_T1Rho self
  @param  ApiSet values
**/
extern void *Nmr_T1Rho_SetNmrMeasurementValidations(Nmr_T1Rho self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in the 
derivation of the measurement value. The description in the 'method' may 
refer to these peakDims.
  @param  Nmr_T1Rho self
  @param  ApiSet values
**/
extern void *Nmr_T1Rho_SetPeakDims(Nmr_T1Rho self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_T1Rho self
  @param  ApiSet values
**/
extern void *Nmr_T1Rho_SetPeaks(Nmr_T1Rho self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.T1Rho.resonance

Resonance that holds T1 rho 
measurements
  @param  Nmr_T1Rho self
  @param  Nmr_Resonance value
**/
extern void *Nmr_T1Rho_SetResonance(Nmr_T1Rho self, Nmr_Resonance value);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurement.value

Value of measurement
  @param  Nmr_T1Rho self
  @param  ApiFloat value
**/
extern void *Nmr_T1Rho_SetValue(Nmr_T1Rho self, ApiFloat value);

/**
  Sorted for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_T1Rho self
  @returns   the result
**/
extern ApiList Nmr_T1Rho_SortedDataDerivations(Nmr_T1Rho self);

/**
  Sorted for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_T1Rho self
  @returns   the result
**/
extern ApiList Nmr_T1Rho_SortedNmrMeasurementValidations(Nmr_T1Rho self);

/**
  Sorted for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_T1Rho self
  @returns   the result
**/
extern ApiList Nmr_T1Rho_SortedPeakDims(Nmr_T1Rho self);

/**
  Sorted for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_T1Rho self
  @returns   the result
**/
extern ApiList Nmr_T1Rho_SortedPeaks(Nmr_T1Rho self);

#endif /* __incl__ccp_api_nmr_Nmr_T1Rho_h__ */
