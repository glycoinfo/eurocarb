
#ifndef __incl__ccp_api_nmr_Nmr_Shift_h__
#define __incl__ccp_api_nmr_Nmr_Shift_h__

#include "ccp.h"

/*
  Chemical shift measurement.
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Shift self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_Shift_AddApplicationData(Nmr_Shift self, Impl_ApplicationData value);

/**
  Add for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_Shift self
  @param  Nmr_AbstractDataDerivation value
**/
extern void *Nmr_Shift_AddDataDerivation(Nmr_Shift self, Nmr_AbstractDataDerivation value);

/**
  Add for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_Shift self
  @param  Vald_NmrMeasurementValidation value
**/
extern void *Nmr_Shift_AddNmrMeasurementValidation(Nmr_Shift self, Vald_NmrMeasurementValidation value);

/**
  Add for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_Shift self
  @param  Nmr_Peak value
**/
extern void *Nmr_Shift_AddPeak(Nmr_Shift self, Nmr_Peak value);

/**
  Add for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in the 
derivation of the measurement value. The description in the 'method' may 
refer to these peakDims.
  @param  Nmr_Shift self
  @param  Nmr_PeakDim value
**/
extern void *Nmr_Shift_AddPeakDim(Nmr_Shift self, Nmr_PeakDim value);

/**
  CheckAllValid for ccp.nmr.Nmr.Shift
  @param  Nmr_Shift self
  @param  ApiBoolean complete
**/
extern void *Nmr_Shift_CheckAllValid(Nmr_Shift self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.Nmr.Shift
  @param  Nmr_Shift self
  @param  ApiBoolean complete
**/
extern void *Nmr_Shift_CheckValid(Nmr_Shift self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Shift self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_Shift_FindAllApplicationData(Nmr_Shift self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Shift self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_Shift_FindAllApplicationData_keyval0(Nmr_Shift self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Shift self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_Shift_FindAllApplicationData_keyval1(Nmr_Shift self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Shift self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_Shift_FindAllApplicationData_keyval2(Nmr_Shift self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Shift self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_Shift_FindAllApplicationData_keyval3(Nmr_Shift self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Shift self
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
extern ApiList Nmr_Shift_FindAllApplicationData_keyval4(Nmr_Shift self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_Shift self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Shift_FindAllDataDerivations(Nmr_Shift self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_Shift self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Shift_FindAllDataDerivations_keyval0(Nmr_Shift self);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_Shift self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Shift_FindAllDataDerivations_keyval1(Nmr_Shift self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_Shift self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Shift_FindAllDataDerivations_keyval2(Nmr_Shift self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_Shift self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Shift_FindAllDataDerivations_keyval3(Nmr_Shift self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_Shift self
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
extern ApiSet Nmr_Shift_FindAllDataDerivations_keyval4(Nmr_Shift self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_Shift self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Shift_FindAllNmrMeasurementValidations(Nmr_Shift self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_Shift self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Shift_FindAllNmrMeasurementValidations_keyval0(Nmr_Shift self);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_Shift self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Shift_FindAllNmrMeasurementValidations_keyval1(Nmr_Shift self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_Shift self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Shift_FindAllNmrMeasurementValidations_keyval2(Nmr_Shift self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_Shift self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Shift_FindAllNmrMeasurementValidations_keyval3(Nmr_Shift self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_Shift self
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
extern ApiSet Nmr_Shift_FindAllNmrMeasurementValidations_keyval4(Nmr_Shift self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_Shift self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Shift_FindAllPeakDims(Nmr_Shift self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_Shift self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Shift_FindAllPeakDims_keyval0(Nmr_Shift self);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_Shift self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Shift_FindAllPeakDims_keyval1(Nmr_Shift self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_Shift self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Shift_FindAllPeakDims_keyval2(Nmr_Shift self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_Shift self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Shift_FindAllPeakDims_keyval3(Nmr_Shift self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_Shift self
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
extern ApiSet Nmr_Shift_FindAllPeakDims_keyval4(Nmr_Shift self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_Shift self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Shift_FindAllPeaks(Nmr_Shift self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_Shift self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Shift_FindAllPeaks_keyval0(Nmr_Shift self);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_Shift self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Shift_FindAllPeaks_keyval1(Nmr_Shift self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_Shift self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Shift_FindAllPeaks_keyval2(Nmr_Shift self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_Shift self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Shift_FindAllPeaks_keyval3(Nmr_Shift self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_Shift self
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
extern ApiSet Nmr_Shift_FindAllPeaks_keyval4(Nmr_Shift self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Shift self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_Shift_FindFirstApplicationData(Nmr_Shift self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Shift self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_Shift_FindFirstApplicationData_keyval0(Nmr_Shift self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Shift self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_Shift_FindFirstApplicationData_keyval1(Nmr_Shift self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Shift self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_Shift_FindFirstApplicationData_keyval2(Nmr_Shift self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Shift self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_Shift_FindFirstApplicationData_keyval3(Nmr_Shift self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Shift self
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
extern Impl_ApplicationData Nmr_Shift_FindFirstApplicationData_keyval4(Nmr_Shift self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_Shift self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractDataDerivation Nmr_Shift_FindFirstDataDerivation(Nmr_Shift self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_Shift self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractDataDerivation Nmr_Shift_FindFirstDataDerivation_keyval0(Nmr_Shift self);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_Shift self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractDataDerivation Nmr_Shift_FindFirstDataDerivation_keyval1(Nmr_Shift self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_Shift self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractDataDerivation Nmr_Shift_FindFirstDataDerivation_keyval2(Nmr_Shift self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_Shift self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractDataDerivation Nmr_Shift_FindFirstDataDerivation_keyval3(Nmr_Shift self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_Shift self
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
extern Nmr_AbstractDataDerivation Nmr_Shift_FindFirstDataDerivation_keyval4(Nmr_Shift self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_Shift self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrMeasurementValidation Nmr_Shift_FindFirstNmrMeasurementValidation(Nmr_Shift self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_Shift self
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrMeasurementValidation Nmr_Shift_FindFirstNmrMeasurementValidation_keyval0(Nmr_Shift self);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_Shift self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrMeasurementValidation Nmr_Shift_FindFirstNmrMeasurementValidation_keyval1(Nmr_Shift self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_Shift self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrMeasurementValidation Nmr_Shift_FindFirstNmrMeasurementValidation_keyval2(Nmr_Shift self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_Shift self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrMeasurementValidation Nmr_Shift_FindFirstNmrMeasurementValidation_keyval3(Nmr_Shift self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_Shift self
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
extern Vald_NmrMeasurementValidation Nmr_Shift_FindFirstNmrMeasurementValidation_keyval4(Nmr_Shift self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_Shift self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Peak Nmr_Shift_FindFirstPeak(Nmr_Shift self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_Shift self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakDim Nmr_Shift_FindFirstPeakDim(Nmr_Shift self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_Shift self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakDim Nmr_Shift_FindFirstPeakDim_keyval0(Nmr_Shift self);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_Shift self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakDim Nmr_Shift_FindFirstPeakDim_keyval1(Nmr_Shift self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_Shift self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakDim Nmr_Shift_FindFirstPeakDim_keyval2(Nmr_Shift self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_Shift self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakDim Nmr_Shift_FindFirstPeakDim_keyval3(Nmr_Shift self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_Shift self
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
extern Nmr_PeakDim Nmr_Shift_FindFirstPeakDim_keyval4(Nmr_Shift self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_Shift self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Peak Nmr_Shift_FindFirstPeak_keyval0(Nmr_Shift self);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_Shift self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Peak Nmr_Shift_FindFirstPeak_keyval1(Nmr_Shift self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_Shift self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Peak Nmr_Shift_FindFirstPeak_keyval2(Nmr_Shift self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_Shift self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Peak Nmr_Shift_FindFirstPeak_keyval3(Nmr_Shift self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_Shift self
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
extern Nmr_Peak Nmr_Shift_FindFirstPeak_keyval4(Nmr_Shift self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.Nmr.Shift
  @param  Nmr_Shift self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Nmr_Shift_Get(Nmr_Shift self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_Shift self
  @returns   the result
**/
extern Acco_AccessObject Nmr_Shift_GetAccess(Nmr_Shift self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Nmr_Shift self
  @returns   the result
**/
extern Acco_AccessObject Nmr_Shift_GetActiveAccess(Nmr_Shift self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Shift self
  @returns   the result
**/
extern ApiList Nmr_Shift_GetApplicationData(Nmr_Shift self);

/**
  GetByKey for ccp.nmr.Nmr.Shift
  @param  Nmr_Shift self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Nmr_Shift Nmr_Shift_GetByKey(Nmr_Shift self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Nmr_Shift self
  @returns   the result
**/
extern ApiString Nmr_Shift_GetClassName(Nmr_Shift self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_Shift self
  @returns   the result
**/
extern ApiSet Nmr_Shift_GetDataDerivations(Nmr_Shift self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurement.details

Free text, for notes, 
explanatory comments, etc.
  @param  Nmr_Shift self
  @returns   the result
**/
extern ApiString Nmr_Shift_GetDetails(Nmr_Shift self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurement.error

Error (standard 
deviation) of measurement
  @param  Nmr_Shift self
  @returns   the result
**/
extern ApiFloat Nmr_Shift_GetError(Nmr_Shift self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Nmr_Shift self
  @returns   the result
**/
extern ApiList Nmr_Shift_GetFieldNames(Nmr_Shift self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurement.figOfMerit

Figure of Merit for 
measurement, i.e. a number that describes the reliablity. Goes from 1.0 
(fully reliable, the default), to 0.0 (unreliable).
  @param  Nmr_Shift self
  @returns   the result
**/
extern ApiFloat Nmr_Shift_GetFigOfMerit(Nmr_Shift self);

/**
  GetFullKey for ccp.nmr.Nmr.Shift
  @param  Nmr_Shift self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Nmr_Shift_GetFullKey(Nmr_Shift self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Nmr_Shift self
  @returns   the result
**/
extern ApiBoolean Nmr_Shift_GetInConstructor(Nmr_Shift self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Nmr_Shift self
  @returns   the result
**/
extern ApiBoolean Nmr_Shift_GetIsDeleted(Nmr_Shift self);

/**
  GetLocalKey for ccp.nmr.Nmr.Shift
  @param  Nmr_Shift self
  @returns  Local object key
**/
extern ApiObject Nmr_Shift_GetLocalKey(Nmr_Shift self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurement.method

Method used to calculate 
this specific measurment value. Overrides MeasurementList.method
  @param  Nmr_Shift self
  @returns   the result
**/
extern Meth_Method Nmr_Shift_GetMethod(Nmr_Shift self);

/**
  Get for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_Shift self
  @returns   the result
**/
extern ApiSet Nmr_Shift_GetNmrMeasurementValidations(Nmr_Shift self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Nmr_Shift self
  @returns   the result
**/
extern ApiString Nmr_Shift_GetPackageName(Nmr_Shift self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Nmr_Shift self
  @returns   the result
**/
extern ApiString Nmr_Shift_GetPackageShortName(Nmr_Shift self);

/**
  Get for ccp.nmr.Nmr.Shift.parent

link to parent object - synonym for 
parentList
  @param  Nmr_Shift self
  @returns   the result
**/
extern Nmr_ShiftList Nmr_Shift_GetParent(Nmr_Shift self);

/**
  Get for ccp.nmr.Nmr.Shift.parentList

parent link
  @param  Nmr_Shift self
  @returns   the result
**/
extern Nmr_ShiftList Nmr_Shift_GetParentList(Nmr_Shift self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in the 
derivation of the measurement value. The description in the 'method' may 
refer to these peakDims.
  @param  Nmr_Shift self
  @returns   the result
**/
extern ApiSet Nmr_Shift_GetPeakDims(Nmr_Shift self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_Shift self
  @returns   the result
**/
extern ApiSet Nmr_Shift_GetPeaks(Nmr_Shift self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Nmr_Shift self
  @returns   the result
**/
extern ApiString Nmr_Shift_GetQualifiedName(Nmr_Shift self);

/**
  Get for ccp.nmr.Nmr.Shift.resonance

Resonance that holds the Chemical 
Shift
  @param  Nmr_Shift self
  @returns   the result
**/
extern Nmr_Resonance Nmr_Shift_GetResonance(Nmr_Shift self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Nmr_Shift self
  @returns   the result
**/
extern Impl_MemopsRoot Nmr_Shift_GetRoot(Nmr_Shift self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Nmr_Shift self
  @returns   the result
**/
extern Impl_TopObject Nmr_Shift_GetTopObject(Nmr_Shift self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurement.value

Value of measurement
  @param  Nmr_Shift self
  @returns   the result
**/
extern ApiFloat Nmr_Shift_GetValue(Nmr_Shift self);

/**
  Constructor for ccp.nmr.Nmr.Shift
  @param  Nmr_ShiftList parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmr_Shift Nmr_Shift_Init(Nmr_ShiftList parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.Nmr.Shift
  @param  Nmr_ShiftList parent
  @param  Nmr_Resonance resonance
  @param  float value
  @returns  the new object
**/
extern Nmr_Shift Nmr_Shift_Init_reqd(Nmr_ShiftList parent, Nmr_Resonance resonance, float value);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Shift self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_Shift_RemoveApplicationData(Nmr_Shift self, Impl_ApplicationData value);

/**
  Remove for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_Shift self
  @param  Nmr_AbstractDataDerivation value
**/
extern void *Nmr_Shift_RemoveDataDerivation(Nmr_Shift self, Nmr_AbstractDataDerivation value);

/**
  Remove for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_Shift self
  @param  Vald_NmrMeasurementValidation value
**/
extern void *Nmr_Shift_RemoveNmrMeasurementValidation(Nmr_Shift self, Vald_NmrMeasurementValidation value);

/**
  Remove for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_Shift self
  @param  Nmr_Peak value
**/
extern void *Nmr_Shift_RemovePeak(Nmr_Shift self, Nmr_Peak value);

/**
  Remove for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_Shift self
  @param  Nmr_PeakDim value
**/
extern void *Nmr_Shift_RemovePeakDim(Nmr_Shift self, Nmr_PeakDim value);

/**
  SetAttr for ccp.nmr.Nmr.Shift
  @param  Nmr_Shift self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Nmr_Shift_Set(Nmr_Shift self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_Shift self
  @param  Acco_AccessObject value
**/
extern void *Nmr_Shift_SetAccess(Nmr_Shift self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Shift self
  @param  ApiList values
**/
extern void *Nmr_Shift_SetApplicationData(Nmr_Shift self, ApiList values);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_Shift self
  @param  ApiSet values
**/
extern void *Nmr_Shift_SetDataDerivations(Nmr_Shift self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurement.details

Free text, for notes, 
explanatory comments, etc.
  @param  Nmr_Shift self
  @param  ApiString value
**/
extern void *Nmr_Shift_SetDetails(Nmr_Shift self, ApiString value);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurement.error

Error (standard 
deviation) of measurement
  @param  Nmr_Shift self
  @param  ApiFloat value
**/
extern void *Nmr_Shift_SetError(Nmr_Shift self, ApiFloat value);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurement.figOfMerit

Figure of Merit for 
measurement, i.e. a number that describes the reliablity. Goes from 1.0 
(fully reliable, the default), to 0.0 (unreliable).
  @param  Nmr_Shift self
  @param  ApiFloat value
**/
extern void *Nmr_Shift_SetFigOfMerit(Nmr_Shift self, ApiFloat value);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurement.method

Method used to calculate 
this specific measurment value. Overrides MeasurementList.method
  @param  Nmr_Shift self
  @param  Meth_Method value
**/
extern void *Nmr_Shift_SetMethod(Nmr_Shift self, Meth_Method value);

/**
  Set for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_Shift self
  @param  ApiSet values
**/
extern void *Nmr_Shift_SetNmrMeasurementValidations(Nmr_Shift self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in the 
derivation of the measurement value. The description in the 'method' may 
refer to these peakDims.
  @param  Nmr_Shift self
  @param  ApiSet values
**/
extern void *Nmr_Shift_SetPeakDims(Nmr_Shift self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_Shift self
  @param  ApiSet values
**/
extern void *Nmr_Shift_SetPeaks(Nmr_Shift self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.Shift.resonance

Resonance that holds the Chemical 
Shift
  @param  Nmr_Shift self
  @param  Nmr_Resonance value
**/
extern void *Nmr_Shift_SetResonance(Nmr_Shift self, Nmr_Resonance value);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurement.value

Value of measurement
  @param  Nmr_Shift self
  @param  ApiFloat value
**/
extern void *Nmr_Shift_SetValue(Nmr_Shift self, ApiFloat value);

/**
  Sorted for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_Shift self
  @returns   the result
**/
extern ApiList Nmr_Shift_SortedDataDerivations(Nmr_Shift self);

/**
  Sorted for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_Shift self
  @returns   the result
**/
extern ApiList Nmr_Shift_SortedNmrMeasurementValidations(Nmr_Shift self);

/**
  Sorted for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_Shift self
  @returns   the result
**/
extern ApiList Nmr_Shift_SortedPeakDims(Nmr_Shift self);

/**
  Sorted for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_Shift self
  @returns   the result
**/
extern ApiList Nmr_Shift_SortedPeaks(Nmr_Shift self);

#endif /* __incl__ccp_api_nmr_Nmr_Shift_h__ */
