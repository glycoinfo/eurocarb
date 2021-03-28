
#ifndef __incl__ccp_api_nmr_Nmr_AbstractMeasurement_h__
#define __incl__ccp_api_nmr_Nmr_AbstractMeasurement_h__

#include "ccp.h"

/*
  NMR parameter value (e.g. Chemical Shift, Coupling Constant, TROESY shift, MQ frequency, or in general any measured result associated with one or more Resonances (and through them with Atoms).
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractMeasurement self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_AbstractMeasurement_AddApplicationData(Nmr_AbstractMeasurement self, Impl_ApplicationData value);

/**
  Add for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_AbstractMeasurement self
  @param  Nmr_AbstractDataDerivation value
**/
extern void *Nmr_AbstractMeasurement_AddDataDerivation(Nmr_AbstractMeasurement self, Nmr_AbstractDataDerivation value);

/**
  Add for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_AbstractMeasurement self
  @param  Vald_NmrMeasurementValidation value
**/
extern void *Nmr_AbstractMeasurement_AddNmrMeasurementValidation(Nmr_AbstractMeasurement self, Vald_NmrMeasurementValidation value);

/**
  Add for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_AbstractMeasurement self
  @param  Nmr_Peak value
**/
extern void *Nmr_AbstractMeasurement_AddPeak(Nmr_AbstractMeasurement self, Nmr_Peak value);

/**
  Add for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in the 
derivation of the measurement value. The description in the 'method' may 
refer to these peakDims.
  @param  Nmr_AbstractMeasurement self
  @param  Nmr_PeakDim value
**/
extern void *Nmr_AbstractMeasurement_AddPeakDim(Nmr_AbstractMeasurement self, Nmr_PeakDim value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractMeasurement self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_AbstractMeasurement_FindAllApplicationData(Nmr_AbstractMeasurement self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractMeasurement self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_AbstractMeasurement_FindAllApplicationData_keyval0(Nmr_AbstractMeasurement self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractMeasurement self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_AbstractMeasurement_FindAllApplicationData_keyval1(Nmr_AbstractMeasurement self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractMeasurement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_AbstractMeasurement_FindAllApplicationData_keyval2(Nmr_AbstractMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractMeasurement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_AbstractMeasurement_FindAllApplicationData_keyval3(Nmr_AbstractMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractMeasurement self
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
extern ApiList Nmr_AbstractMeasurement_FindAllApplicationData_keyval4(Nmr_AbstractMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_AbstractMeasurement self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_AbstractMeasurement_FindAllDataDerivations(Nmr_AbstractMeasurement self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_AbstractMeasurement self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_AbstractMeasurement_FindAllDataDerivations_keyval0(Nmr_AbstractMeasurement self);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_AbstractMeasurement self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_AbstractMeasurement_FindAllDataDerivations_keyval1(Nmr_AbstractMeasurement self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_AbstractMeasurement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_AbstractMeasurement_FindAllDataDerivations_keyval2(Nmr_AbstractMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_AbstractMeasurement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_AbstractMeasurement_FindAllDataDerivations_keyval3(Nmr_AbstractMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_AbstractMeasurement self
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
extern ApiSet Nmr_AbstractMeasurement_FindAllDataDerivations_keyval4(Nmr_AbstractMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_AbstractMeasurement self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_AbstractMeasurement_FindAllNmrMeasurementValidations(Nmr_AbstractMeasurement self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_AbstractMeasurement self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_AbstractMeasurement_FindAllNmrMeasurementValidations_keyval0(Nmr_AbstractMeasurement self);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_AbstractMeasurement self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_AbstractMeasurement_FindAllNmrMeasurementValidations_keyval1(Nmr_AbstractMeasurement self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_AbstractMeasurement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_AbstractMeasurement_FindAllNmrMeasurementValidations_keyval2(Nmr_AbstractMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_AbstractMeasurement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_AbstractMeasurement_FindAllNmrMeasurementValidations_keyval3(Nmr_AbstractMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_AbstractMeasurement self
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
extern ApiSet Nmr_AbstractMeasurement_FindAllNmrMeasurementValidations_keyval4(Nmr_AbstractMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_AbstractMeasurement self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_AbstractMeasurement_FindAllPeakDims(Nmr_AbstractMeasurement self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_AbstractMeasurement self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_AbstractMeasurement_FindAllPeakDims_keyval0(Nmr_AbstractMeasurement self);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_AbstractMeasurement self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_AbstractMeasurement_FindAllPeakDims_keyval1(Nmr_AbstractMeasurement self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_AbstractMeasurement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_AbstractMeasurement_FindAllPeakDims_keyval2(Nmr_AbstractMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_AbstractMeasurement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_AbstractMeasurement_FindAllPeakDims_keyval3(Nmr_AbstractMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_AbstractMeasurement self
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
extern ApiSet Nmr_AbstractMeasurement_FindAllPeakDims_keyval4(Nmr_AbstractMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_AbstractMeasurement self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_AbstractMeasurement_FindAllPeaks(Nmr_AbstractMeasurement self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_AbstractMeasurement self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_AbstractMeasurement_FindAllPeaks_keyval0(Nmr_AbstractMeasurement self);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_AbstractMeasurement self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_AbstractMeasurement_FindAllPeaks_keyval1(Nmr_AbstractMeasurement self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_AbstractMeasurement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_AbstractMeasurement_FindAllPeaks_keyval2(Nmr_AbstractMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_AbstractMeasurement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_AbstractMeasurement_FindAllPeaks_keyval3(Nmr_AbstractMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_AbstractMeasurement self
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
extern ApiSet Nmr_AbstractMeasurement_FindAllPeaks_keyval4(Nmr_AbstractMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractMeasurement self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_AbstractMeasurement_FindFirstApplicationData(Nmr_AbstractMeasurement self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractMeasurement self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_AbstractMeasurement_FindFirstApplicationData_keyval0(Nmr_AbstractMeasurement self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractMeasurement self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_AbstractMeasurement_FindFirstApplicationData_keyval1(Nmr_AbstractMeasurement self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractMeasurement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_AbstractMeasurement_FindFirstApplicationData_keyval2(Nmr_AbstractMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractMeasurement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_AbstractMeasurement_FindFirstApplicationData_keyval3(Nmr_AbstractMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractMeasurement self
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
extern Impl_ApplicationData Nmr_AbstractMeasurement_FindFirstApplicationData_keyval4(Nmr_AbstractMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_AbstractMeasurement self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractDataDerivation Nmr_AbstractMeasurement_FindFirstDataDerivation(Nmr_AbstractMeasurement self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_AbstractMeasurement self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractDataDerivation Nmr_AbstractMeasurement_FindFirstDataDerivation_keyval0(Nmr_AbstractMeasurement self);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_AbstractMeasurement self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractDataDerivation Nmr_AbstractMeasurement_FindFirstDataDerivation_keyval1(Nmr_AbstractMeasurement self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_AbstractMeasurement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractDataDerivation Nmr_AbstractMeasurement_FindFirstDataDerivation_keyval2(Nmr_AbstractMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_AbstractMeasurement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractDataDerivation Nmr_AbstractMeasurement_FindFirstDataDerivation_keyval3(Nmr_AbstractMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_AbstractMeasurement self
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
extern Nmr_AbstractDataDerivation Nmr_AbstractMeasurement_FindFirstDataDerivation_keyval4(Nmr_AbstractMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_AbstractMeasurement self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrMeasurementValidation Nmr_AbstractMeasurement_FindFirstNmrMeasurementValidation(Nmr_AbstractMeasurement self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_AbstractMeasurement self
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrMeasurementValidation Nmr_AbstractMeasurement_FindFirstNmrMeasurementValidation_keyval0(Nmr_AbstractMeasurement self);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_AbstractMeasurement self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrMeasurementValidation Nmr_AbstractMeasurement_FindFirstNmrMeasurementValidation_keyval1(Nmr_AbstractMeasurement self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_AbstractMeasurement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrMeasurementValidation Nmr_AbstractMeasurement_FindFirstNmrMeasurementValidation_keyval2(Nmr_AbstractMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_AbstractMeasurement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrMeasurementValidation Nmr_AbstractMeasurement_FindFirstNmrMeasurementValidation_keyval3(Nmr_AbstractMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_AbstractMeasurement self
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
extern Vald_NmrMeasurementValidation Nmr_AbstractMeasurement_FindFirstNmrMeasurementValidation_keyval4(Nmr_AbstractMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_AbstractMeasurement self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Peak Nmr_AbstractMeasurement_FindFirstPeak(Nmr_AbstractMeasurement self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_AbstractMeasurement self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakDim Nmr_AbstractMeasurement_FindFirstPeakDim(Nmr_AbstractMeasurement self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_AbstractMeasurement self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakDim Nmr_AbstractMeasurement_FindFirstPeakDim_keyval0(Nmr_AbstractMeasurement self);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_AbstractMeasurement self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakDim Nmr_AbstractMeasurement_FindFirstPeakDim_keyval1(Nmr_AbstractMeasurement self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_AbstractMeasurement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakDim Nmr_AbstractMeasurement_FindFirstPeakDim_keyval2(Nmr_AbstractMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_AbstractMeasurement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakDim Nmr_AbstractMeasurement_FindFirstPeakDim_keyval3(Nmr_AbstractMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_AbstractMeasurement self
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
extern Nmr_PeakDim Nmr_AbstractMeasurement_FindFirstPeakDim_keyval4(Nmr_AbstractMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_AbstractMeasurement self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Peak Nmr_AbstractMeasurement_FindFirstPeak_keyval0(Nmr_AbstractMeasurement self);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_AbstractMeasurement self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Peak Nmr_AbstractMeasurement_FindFirstPeak_keyval1(Nmr_AbstractMeasurement self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_AbstractMeasurement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Peak Nmr_AbstractMeasurement_FindFirstPeak_keyval2(Nmr_AbstractMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_AbstractMeasurement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Peak Nmr_AbstractMeasurement_FindFirstPeak_keyval3(Nmr_AbstractMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_AbstractMeasurement self
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
extern Nmr_Peak Nmr_AbstractMeasurement_FindFirstPeak_keyval4(Nmr_AbstractMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_AbstractMeasurement self
  @returns   the result
**/
extern Acco_AccessObject Nmr_AbstractMeasurement_GetAccess(Nmr_AbstractMeasurement self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractMeasurement self
  @returns   the result
**/
extern ApiList Nmr_AbstractMeasurement_GetApplicationData(Nmr_AbstractMeasurement self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Nmr_AbstractMeasurement self
  @returns   the result
**/
extern ApiString Nmr_AbstractMeasurement_GetClassName(Nmr_AbstractMeasurement self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_AbstractMeasurement self
  @returns   the result
**/
extern ApiSet Nmr_AbstractMeasurement_GetDataDerivations(Nmr_AbstractMeasurement self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurement.details

Free text, for notes, 
explanatory comments, etc.
  @param  Nmr_AbstractMeasurement self
  @returns   the result
**/
extern ApiString Nmr_AbstractMeasurement_GetDetails(Nmr_AbstractMeasurement self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurement.error

Error (standard 
deviation) of measurement
  @param  Nmr_AbstractMeasurement self
  @returns   the result
**/
extern ApiFloat Nmr_AbstractMeasurement_GetError(Nmr_AbstractMeasurement self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Nmr_AbstractMeasurement self
  @returns   the result
**/
extern ApiList Nmr_AbstractMeasurement_GetFieldNames(Nmr_AbstractMeasurement self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurement.figOfMerit

Figure of Merit for 
measurement, i.e. a number that describes the reliablity. Goes from 1.0 
(fully reliable, the default), to 0.0 (unreliable).
  @param  Nmr_AbstractMeasurement self
  @returns   the result
**/
extern ApiFloat Nmr_AbstractMeasurement_GetFigOfMerit(Nmr_AbstractMeasurement self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Nmr_AbstractMeasurement self
  @returns   the result
**/
extern ApiBoolean Nmr_AbstractMeasurement_GetInConstructor(Nmr_AbstractMeasurement self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Nmr_AbstractMeasurement self
  @returns   the result
**/
extern ApiBoolean Nmr_AbstractMeasurement_GetIsDeleted(Nmr_AbstractMeasurement self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurement.method

Method used to calculate 
this specific measurment value. Overrides MeasurementList.method
  @param  Nmr_AbstractMeasurement self
  @returns   the result
**/
extern Meth_Method Nmr_AbstractMeasurement_GetMethod(Nmr_AbstractMeasurement self);

/**
  Get for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_AbstractMeasurement self
  @returns   the result
**/
extern ApiSet Nmr_AbstractMeasurement_GetNmrMeasurementValidations(Nmr_AbstractMeasurement self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Nmr_AbstractMeasurement self
  @returns   the result
**/
extern ApiString Nmr_AbstractMeasurement_GetPackageName(Nmr_AbstractMeasurement self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Nmr_AbstractMeasurement self
  @returns   the result
**/
extern ApiString Nmr_AbstractMeasurement_GetPackageShortName(Nmr_AbstractMeasurement self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurement.parentList

parent link
  @param  Nmr_AbstractMeasurement self
  @returns   the result
**/
extern Nmr_AbstractMeasurementList Nmr_AbstractMeasurement_GetParentList(Nmr_AbstractMeasurement self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in the 
derivation of the measurement value. The description in the 'method' may 
refer to these peakDims.
  @param  Nmr_AbstractMeasurement self
  @returns   the result
**/
extern ApiSet Nmr_AbstractMeasurement_GetPeakDims(Nmr_AbstractMeasurement self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_AbstractMeasurement self
  @returns   the result
**/
extern ApiSet Nmr_AbstractMeasurement_GetPeaks(Nmr_AbstractMeasurement self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Nmr_AbstractMeasurement self
  @returns   the result
**/
extern ApiString Nmr_AbstractMeasurement_GetQualifiedName(Nmr_AbstractMeasurement self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Nmr_AbstractMeasurement self
  @returns   the result
**/
extern Impl_MemopsRoot Nmr_AbstractMeasurement_GetRoot(Nmr_AbstractMeasurement self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Nmr_AbstractMeasurement self
  @returns   the result
**/
extern Impl_TopObject Nmr_AbstractMeasurement_GetTopObject(Nmr_AbstractMeasurement self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurement.value

Value of measurement
  @param  Nmr_AbstractMeasurement self
  @returns   the result
**/
extern ApiFloat Nmr_AbstractMeasurement_GetValue(Nmr_AbstractMeasurement self);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractMeasurement self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_AbstractMeasurement_RemoveApplicationData(Nmr_AbstractMeasurement self, Impl_ApplicationData value);

/**
  Remove for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_AbstractMeasurement self
  @param  Nmr_AbstractDataDerivation value
**/
extern void *Nmr_AbstractMeasurement_RemoveDataDerivation(Nmr_AbstractMeasurement self, Nmr_AbstractDataDerivation value);

/**
  Remove for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_AbstractMeasurement self
  @param  Vald_NmrMeasurementValidation value
**/
extern void *Nmr_AbstractMeasurement_RemoveNmrMeasurementValidation(Nmr_AbstractMeasurement self, Vald_NmrMeasurementValidation value);

/**
  Remove for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_AbstractMeasurement self
  @param  Nmr_Peak value
**/
extern void *Nmr_AbstractMeasurement_RemovePeak(Nmr_AbstractMeasurement self, Nmr_Peak value);

/**
  Remove for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_AbstractMeasurement self
  @param  Nmr_PeakDim value
**/
extern void *Nmr_AbstractMeasurement_RemovePeakDim(Nmr_AbstractMeasurement self, Nmr_PeakDim value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_AbstractMeasurement self
  @param  Acco_AccessObject value
**/
extern void *Nmr_AbstractMeasurement_SetAccess(Nmr_AbstractMeasurement self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractMeasurement self
  @param  ApiList values
**/
extern void *Nmr_AbstractMeasurement_SetApplicationData(Nmr_AbstractMeasurement self, ApiList values);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_AbstractMeasurement self
  @param  ApiSet values
**/
extern void *Nmr_AbstractMeasurement_SetDataDerivations(Nmr_AbstractMeasurement self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurement.details

Free text, for notes, 
explanatory comments, etc.
  @param  Nmr_AbstractMeasurement self
  @param  ApiString value
**/
extern void *Nmr_AbstractMeasurement_SetDetails(Nmr_AbstractMeasurement self, ApiString value);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurement.error

Error (standard 
deviation) of measurement
  @param  Nmr_AbstractMeasurement self
  @param  ApiFloat value
**/
extern void *Nmr_AbstractMeasurement_SetError(Nmr_AbstractMeasurement self, ApiFloat value);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurement.figOfMerit

Figure of Merit for 
measurement, i.e. a number that describes the reliablity. Goes from 1.0 
(fully reliable, the default), to 0.0 (unreliable).
  @param  Nmr_AbstractMeasurement self
  @param  ApiFloat value
**/
extern void *Nmr_AbstractMeasurement_SetFigOfMerit(Nmr_AbstractMeasurement self, ApiFloat value);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurement.method

Method used to calculate 
this specific measurment value. Overrides MeasurementList.method
  @param  Nmr_AbstractMeasurement self
  @param  Meth_Method value
**/
extern void *Nmr_AbstractMeasurement_SetMethod(Nmr_AbstractMeasurement self, Meth_Method value);

/**
  Set for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_AbstractMeasurement self
  @param  ApiSet values
**/
extern void *Nmr_AbstractMeasurement_SetNmrMeasurementValidations(Nmr_AbstractMeasurement self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in the 
derivation of the measurement value. The description in the 'method' may 
refer to these peakDims.
  @param  Nmr_AbstractMeasurement self
  @param  ApiSet values
**/
extern void *Nmr_AbstractMeasurement_SetPeakDims(Nmr_AbstractMeasurement self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_AbstractMeasurement self
  @param  ApiSet values
**/
extern void *Nmr_AbstractMeasurement_SetPeaks(Nmr_AbstractMeasurement self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurement.value

Value of measurement
  @param  Nmr_AbstractMeasurement self
  @param  ApiFloat value
**/
extern void *Nmr_AbstractMeasurement_SetValue(Nmr_AbstractMeasurement self, ApiFloat value);

/**
  Sorted for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_AbstractMeasurement self
  @returns   the result
**/
extern ApiList Nmr_AbstractMeasurement_SortedDataDerivations(Nmr_AbstractMeasurement self);

/**
  Sorted for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_AbstractMeasurement self
  @returns   the result
**/
extern ApiList Nmr_AbstractMeasurement_SortedNmrMeasurementValidations(Nmr_AbstractMeasurement self);

/**
  Sorted for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_AbstractMeasurement self
  @returns   the result
**/
extern ApiList Nmr_AbstractMeasurement_SortedPeakDims(Nmr_AbstractMeasurement self);

/**
  Sorted for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_AbstractMeasurement self
  @returns   the result
**/
extern ApiList Nmr_AbstractMeasurement_SortedPeaks(Nmr_AbstractMeasurement self);

#endif /* __incl__ccp_api_nmr_Nmr_AbstractMeasurement_h__ */
