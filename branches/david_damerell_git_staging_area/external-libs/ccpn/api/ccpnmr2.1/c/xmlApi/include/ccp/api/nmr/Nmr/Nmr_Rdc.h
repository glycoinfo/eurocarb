
#ifndef __incl__ccp_api_nmr_Nmr_Rdc_h__
#define __incl__ccp_api_nmr_Nmr_Rdc_h__

#include "ccp.h"

/*
  Reduced dipolar coupling measurement.
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Rdc self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_Rdc_AddApplicationData(Nmr_Rdc self, Impl_ApplicationData value);

/**
  Add for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_Rdc self
  @param  Nmr_AbstractDataDerivation value
**/
extern void *Nmr_Rdc_AddDataDerivation(Nmr_Rdc self, Nmr_AbstractDataDerivation value);

/**
  Add for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_Rdc self
  @param  Vald_NmrMeasurementValidation value
**/
extern void *Nmr_Rdc_AddNmrMeasurementValidation(Nmr_Rdc self, Vald_NmrMeasurementValidation value);

/**
  Add for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_Rdc self
  @param  Nmr_Peak value
**/
extern void *Nmr_Rdc_AddPeak(Nmr_Rdc self, Nmr_Peak value);

/**
  Add for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in the 
derivation of the measurement value. The description in the 'method' may 
refer to these peakDims.
  @param  Nmr_Rdc self
  @param  Nmr_PeakDim value
**/
extern void *Nmr_Rdc_AddPeakDim(Nmr_Rdc self, Nmr_PeakDim value);

/**
  CheckAllValid for ccp.nmr.Nmr.Rdc
  @param  Nmr_Rdc self
  @param  ApiBoolean complete
**/
extern void *Nmr_Rdc_CheckAllValid(Nmr_Rdc self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.Nmr.Rdc
  @param  Nmr_Rdc self
  @param  ApiBoolean complete
**/
extern void *Nmr_Rdc_CheckValid(Nmr_Rdc self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Rdc self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_Rdc_FindAllApplicationData(Nmr_Rdc self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Rdc self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_Rdc_FindAllApplicationData_keyval0(Nmr_Rdc self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Rdc self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_Rdc_FindAllApplicationData_keyval1(Nmr_Rdc self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Rdc self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_Rdc_FindAllApplicationData_keyval2(Nmr_Rdc self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Rdc self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_Rdc_FindAllApplicationData_keyval3(Nmr_Rdc self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Rdc self
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
extern ApiList Nmr_Rdc_FindAllApplicationData_keyval4(Nmr_Rdc self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_Rdc self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Rdc_FindAllDataDerivations(Nmr_Rdc self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_Rdc self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Rdc_FindAllDataDerivations_keyval0(Nmr_Rdc self);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_Rdc self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Rdc_FindAllDataDerivations_keyval1(Nmr_Rdc self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_Rdc self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Rdc_FindAllDataDerivations_keyval2(Nmr_Rdc self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_Rdc self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Rdc_FindAllDataDerivations_keyval3(Nmr_Rdc self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_Rdc self
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
extern ApiSet Nmr_Rdc_FindAllDataDerivations_keyval4(Nmr_Rdc self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_Rdc self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Rdc_FindAllNmrMeasurementValidations(Nmr_Rdc self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_Rdc self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Rdc_FindAllNmrMeasurementValidations_keyval0(Nmr_Rdc self);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_Rdc self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Rdc_FindAllNmrMeasurementValidations_keyval1(Nmr_Rdc self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_Rdc self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Rdc_FindAllNmrMeasurementValidations_keyval2(Nmr_Rdc self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_Rdc self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Rdc_FindAllNmrMeasurementValidations_keyval3(Nmr_Rdc self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_Rdc self
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
extern ApiSet Nmr_Rdc_FindAllNmrMeasurementValidations_keyval4(Nmr_Rdc self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_Rdc self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Rdc_FindAllPeakDims(Nmr_Rdc self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_Rdc self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Rdc_FindAllPeakDims_keyval0(Nmr_Rdc self);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_Rdc self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Rdc_FindAllPeakDims_keyval1(Nmr_Rdc self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_Rdc self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Rdc_FindAllPeakDims_keyval2(Nmr_Rdc self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_Rdc self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Rdc_FindAllPeakDims_keyval3(Nmr_Rdc self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_Rdc self
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
extern ApiSet Nmr_Rdc_FindAllPeakDims_keyval4(Nmr_Rdc self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_Rdc self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Rdc_FindAllPeaks(Nmr_Rdc self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_Rdc self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Rdc_FindAllPeaks_keyval0(Nmr_Rdc self);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_Rdc self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Rdc_FindAllPeaks_keyval1(Nmr_Rdc self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_Rdc self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Rdc_FindAllPeaks_keyval2(Nmr_Rdc self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_Rdc self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Rdc_FindAllPeaks_keyval3(Nmr_Rdc self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_Rdc self
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
extern ApiSet Nmr_Rdc_FindAllPeaks_keyval4(Nmr_Rdc self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.Rdc.resonances

Resonances between which the 
reduced dipolar coupling appears.
  @param  Nmr_Rdc self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Rdc_FindAllResonances(Nmr_Rdc self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.Rdc.resonances

Resonances between which the 
reduced dipolar coupling appears.
  @param  Nmr_Rdc self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Rdc_FindAllResonances_keyval0(Nmr_Rdc self);

/**
  FindAll for ccp.nmr.Nmr.Rdc.resonances

Resonances between which the 
reduced dipolar coupling appears.
  @param  Nmr_Rdc self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Rdc_FindAllResonances_keyval1(Nmr_Rdc self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.Rdc.resonances

Resonances between which the 
reduced dipolar coupling appears.
  @param  Nmr_Rdc self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Rdc_FindAllResonances_keyval2(Nmr_Rdc self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.Rdc.resonances

Resonances between which the 
reduced dipolar coupling appears.
  @param  Nmr_Rdc self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Rdc_FindAllResonances_keyval3(Nmr_Rdc self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.Rdc.resonances

Resonances between which the 
reduced dipolar coupling appears.
  @param  Nmr_Rdc self
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
extern ApiSet Nmr_Rdc_FindAllResonances_keyval4(Nmr_Rdc self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Rdc self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_Rdc_FindFirstApplicationData(Nmr_Rdc self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Rdc self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_Rdc_FindFirstApplicationData_keyval0(Nmr_Rdc self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Rdc self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_Rdc_FindFirstApplicationData_keyval1(Nmr_Rdc self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Rdc self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_Rdc_FindFirstApplicationData_keyval2(Nmr_Rdc self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Rdc self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_Rdc_FindFirstApplicationData_keyval3(Nmr_Rdc self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Rdc self
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
extern Impl_ApplicationData Nmr_Rdc_FindFirstApplicationData_keyval4(Nmr_Rdc self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_Rdc self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractDataDerivation Nmr_Rdc_FindFirstDataDerivation(Nmr_Rdc self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_Rdc self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractDataDerivation Nmr_Rdc_FindFirstDataDerivation_keyval0(Nmr_Rdc self);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_Rdc self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractDataDerivation Nmr_Rdc_FindFirstDataDerivation_keyval1(Nmr_Rdc self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_Rdc self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractDataDerivation Nmr_Rdc_FindFirstDataDerivation_keyval2(Nmr_Rdc self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_Rdc self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractDataDerivation Nmr_Rdc_FindFirstDataDerivation_keyval3(Nmr_Rdc self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_Rdc self
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
extern Nmr_AbstractDataDerivation Nmr_Rdc_FindFirstDataDerivation_keyval4(Nmr_Rdc self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_Rdc self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrMeasurementValidation Nmr_Rdc_FindFirstNmrMeasurementValidation(Nmr_Rdc self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_Rdc self
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrMeasurementValidation Nmr_Rdc_FindFirstNmrMeasurementValidation_keyval0(Nmr_Rdc self);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_Rdc self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrMeasurementValidation Nmr_Rdc_FindFirstNmrMeasurementValidation_keyval1(Nmr_Rdc self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_Rdc self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrMeasurementValidation Nmr_Rdc_FindFirstNmrMeasurementValidation_keyval2(Nmr_Rdc self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_Rdc self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrMeasurementValidation Nmr_Rdc_FindFirstNmrMeasurementValidation_keyval3(Nmr_Rdc self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_Rdc self
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
extern Vald_NmrMeasurementValidation Nmr_Rdc_FindFirstNmrMeasurementValidation_keyval4(Nmr_Rdc self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_Rdc self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Peak Nmr_Rdc_FindFirstPeak(Nmr_Rdc self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_Rdc self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakDim Nmr_Rdc_FindFirstPeakDim(Nmr_Rdc self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_Rdc self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakDim Nmr_Rdc_FindFirstPeakDim_keyval0(Nmr_Rdc self);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_Rdc self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakDim Nmr_Rdc_FindFirstPeakDim_keyval1(Nmr_Rdc self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_Rdc self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakDim Nmr_Rdc_FindFirstPeakDim_keyval2(Nmr_Rdc self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_Rdc self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakDim Nmr_Rdc_FindFirstPeakDim_keyval3(Nmr_Rdc self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_Rdc self
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
extern Nmr_PeakDim Nmr_Rdc_FindFirstPeakDim_keyval4(Nmr_Rdc self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_Rdc self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Peak Nmr_Rdc_FindFirstPeak_keyval0(Nmr_Rdc self);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_Rdc self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Peak Nmr_Rdc_FindFirstPeak_keyval1(Nmr_Rdc self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_Rdc self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Peak Nmr_Rdc_FindFirstPeak_keyval2(Nmr_Rdc self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_Rdc self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Peak Nmr_Rdc_FindFirstPeak_keyval3(Nmr_Rdc self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_Rdc self
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
extern Nmr_Peak Nmr_Rdc_FindFirstPeak_keyval4(Nmr_Rdc self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.Rdc.resonances

Resonances between which the 
reduced dipolar coupling appears.
  @param  Nmr_Rdc self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Resonance Nmr_Rdc_FindFirstResonance(Nmr_Rdc self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.Rdc.resonances

Resonances between which the 
reduced dipolar coupling appears.
  @param  Nmr_Rdc self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Resonance Nmr_Rdc_FindFirstResonance_keyval0(Nmr_Rdc self);

/**
  FindFirst for ccp.nmr.Nmr.Rdc.resonances

Resonances between which the 
reduced dipolar coupling appears.
  @param  Nmr_Rdc self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Resonance Nmr_Rdc_FindFirstResonance_keyval1(Nmr_Rdc self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.Rdc.resonances

Resonances between which the 
reduced dipolar coupling appears.
  @param  Nmr_Rdc self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Resonance Nmr_Rdc_FindFirstResonance_keyval2(Nmr_Rdc self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.Rdc.resonances

Resonances between which the 
reduced dipolar coupling appears.
  @param  Nmr_Rdc self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Resonance Nmr_Rdc_FindFirstResonance_keyval3(Nmr_Rdc self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.Rdc.resonances

Resonances between which the 
reduced dipolar coupling appears.
  @param  Nmr_Rdc self
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
extern Nmr_Resonance Nmr_Rdc_FindFirstResonance_keyval4(Nmr_Rdc self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.Nmr.Rdc
  @param  Nmr_Rdc self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Nmr_Rdc_Get(Nmr_Rdc self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_Rdc self
  @returns   the result
**/
extern Acco_AccessObject Nmr_Rdc_GetAccess(Nmr_Rdc self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Nmr_Rdc self
  @returns   the result
**/
extern Acco_AccessObject Nmr_Rdc_GetActiveAccess(Nmr_Rdc self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Rdc self
  @returns   the result
**/
extern ApiList Nmr_Rdc_GetApplicationData(Nmr_Rdc self);

/**
  GetByKey for ccp.nmr.Nmr.Rdc
  @param  Nmr_Rdc self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Nmr_Rdc Nmr_Rdc_GetByKey(Nmr_Rdc self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Nmr_Rdc self
  @returns   the result
**/
extern ApiString Nmr_Rdc_GetClassName(Nmr_Rdc self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_Rdc self
  @returns   the result
**/
extern ApiSet Nmr_Rdc_GetDataDerivations(Nmr_Rdc self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurement.details

Free text, for notes, 
explanatory comments, etc.
  @param  Nmr_Rdc self
  @returns   the result
**/
extern ApiString Nmr_Rdc_GetDetails(Nmr_Rdc self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurement.error

Error (standard 
deviation) of measurement
  @param  Nmr_Rdc self
  @returns   the result
**/
extern ApiFloat Nmr_Rdc_GetError(Nmr_Rdc self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Nmr_Rdc self
  @returns   the result
**/
extern ApiList Nmr_Rdc_GetFieldNames(Nmr_Rdc self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurement.figOfMerit

Figure of Merit for 
measurement, i.e. a number that describes the reliablity. Goes from 1.0 
(fully reliable, the default), to 0.0 (unreliable).
  @param  Nmr_Rdc self
  @returns   the result
**/
extern ApiFloat Nmr_Rdc_GetFigOfMerit(Nmr_Rdc self);

/**
  GetFullKey for ccp.nmr.Nmr.Rdc
  @param  Nmr_Rdc self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Nmr_Rdc_GetFullKey(Nmr_Rdc self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Nmr_Rdc self
  @returns   the result
**/
extern ApiBoolean Nmr_Rdc_GetInConstructor(Nmr_Rdc self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Nmr_Rdc self
  @returns   the result
**/
extern ApiBoolean Nmr_Rdc_GetIsDeleted(Nmr_Rdc self);

/**
  GetLocalKey for ccp.nmr.Nmr.Rdc
  @param  Nmr_Rdc self
  @returns  Local object key
**/
extern ApiObject Nmr_Rdc_GetLocalKey(Nmr_Rdc self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurement.method

Method used to calculate 
this specific measurment value. Overrides MeasurementList.method
  @param  Nmr_Rdc self
  @returns   the result
**/
extern Meth_Method Nmr_Rdc_GetMethod(Nmr_Rdc self);

/**
  Get for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_Rdc self
  @returns   the result
**/
extern ApiSet Nmr_Rdc_GetNmrMeasurementValidations(Nmr_Rdc self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Nmr_Rdc self
  @returns   the result
**/
extern ApiString Nmr_Rdc_GetPackageName(Nmr_Rdc self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Nmr_Rdc self
  @returns   the result
**/
extern ApiString Nmr_Rdc_GetPackageShortName(Nmr_Rdc self);

/**
  Get for ccp.nmr.Nmr.Rdc.parent

link to parent object - synonym for 
parentList
  @param  Nmr_Rdc self
  @returns   the result
**/
extern Nmr_RdcList Nmr_Rdc_GetParent(Nmr_Rdc self);

/**
  Get for ccp.nmr.Nmr.Rdc.parentList

parent link
  @param  Nmr_Rdc self
  @returns   the result
**/
extern Nmr_RdcList Nmr_Rdc_GetParentList(Nmr_Rdc self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in the 
derivation of the measurement value. The description in the 'method' may 
refer to these peakDims.
  @param  Nmr_Rdc self
  @returns   the result
**/
extern ApiSet Nmr_Rdc_GetPeakDims(Nmr_Rdc self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_Rdc self
  @returns   the result
**/
extern ApiSet Nmr_Rdc_GetPeaks(Nmr_Rdc self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Nmr_Rdc self
  @returns   the result
**/
extern ApiString Nmr_Rdc_GetQualifiedName(Nmr_Rdc self);

/**
  Get for ccp.nmr.Nmr.Rdc.resonances

Resonances between which the reduced 
dipolar coupling appears.
  @param  Nmr_Rdc self
  @returns   the result
**/
extern ApiSet Nmr_Rdc_GetResonances(Nmr_Rdc self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Nmr_Rdc self
  @returns   the result
**/
extern Impl_MemopsRoot Nmr_Rdc_GetRoot(Nmr_Rdc self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Nmr_Rdc self
  @returns   the result
**/
extern Impl_TopObject Nmr_Rdc_GetTopObject(Nmr_Rdc self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurement.value

Value of measurement
  @param  Nmr_Rdc self
  @returns   the result
**/
extern ApiFloat Nmr_Rdc_GetValue(Nmr_Rdc self);

/**
  Constructor for ccp.nmr.Nmr.Rdc
  @param  Nmr_RdcList parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmr_Rdc Nmr_Rdc_Init(Nmr_RdcList parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.Nmr.Rdc
  @param  Nmr_RdcList parent
  @param  ApiSet resonances
  @param  float value
  @returns  the new object
**/
extern Nmr_Rdc Nmr_Rdc_Init_reqd(Nmr_RdcList parent, ApiSet resonances, float value);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Rdc self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_Rdc_RemoveApplicationData(Nmr_Rdc self, Impl_ApplicationData value);

/**
  Remove for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_Rdc self
  @param  Nmr_AbstractDataDerivation value
**/
extern void *Nmr_Rdc_RemoveDataDerivation(Nmr_Rdc self, Nmr_AbstractDataDerivation value);

/**
  Remove for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_Rdc self
  @param  Vald_NmrMeasurementValidation value
**/
extern void *Nmr_Rdc_RemoveNmrMeasurementValidation(Nmr_Rdc self, Vald_NmrMeasurementValidation value);

/**
  Remove for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_Rdc self
  @param  Nmr_Peak value
**/
extern void *Nmr_Rdc_RemovePeak(Nmr_Rdc self, Nmr_Peak value);

/**
  Remove for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_Rdc self
  @param  Nmr_PeakDim value
**/
extern void *Nmr_Rdc_RemovePeakDim(Nmr_Rdc self, Nmr_PeakDim value);

/**
  SetAttr for ccp.nmr.Nmr.Rdc
  @param  Nmr_Rdc self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Nmr_Rdc_Set(Nmr_Rdc self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_Rdc self
  @param  Acco_AccessObject value
**/
extern void *Nmr_Rdc_SetAccess(Nmr_Rdc self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Rdc self
  @param  ApiList values
**/
extern void *Nmr_Rdc_SetApplicationData(Nmr_Rdc self, ApiList values);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_Rdc self
  @param  ApiSet values
**/
extern void *Nmr_Rdc_SetDataDerivations(Nmr_Rdc self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurement.details

Free text, for notes, 
explanatory comments, etc.
  @param  Nmr_Rdc self
  @param  ApiString value
**/
extern void *Nmr_Rdc_SetDetails(Nmr_Rdc self, ApiString value);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurement.error

Error (standard 
deviation) of measurement
  @param  Nmr_Rdc self
  @param  ApiFloat value
**/
extern void *Nmr_Rdc_SetError(Nmr_Rdc self, ApiFloat value);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurement.figOfMerit

Figure of Merit for 
measurement, i.e. a number that describes the reliablity. Goes from 1.0 
(fully reliable, the default), to 0.0 (unreliable).
  @param  Nmr_Rdc self
  @param  ApiFloat value
**/
extern void *Nmr_Rdc_SetFigOfMerit(Nmr_Rdc self, ApiFloat value);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurement.method

Method used to calculate 
this specific measurment value. Overrides MeasurementList.method
  @param  Nmr_Rdc self
  @param  Meth_Method value
**/
extern void *Nmr_Rdc_SetMethod(Nmr_Rdc self, Meth_Method value);

/**
  Set for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_Rdc self
  @param  ApiSet values
**/
extern void *Nmr_Rdc_SetNmrMeasurementValidations(Nmr_Rdc self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in the 
derivation of the measurement value. The description in the 'method' may 
refer to these peakDims.
  @param  Nmr_Rdc self
  @param  ApiSet values
**/
extern void *Nmr_Rdc_SetPeakDims(Nmr_Rdc self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_Rdc self
  @param  ApiSet values
**/
extern void *Nmr_Rdc_SetPeaks(Nmr_Rdc self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.Rdc.resonances

Resonances between which the reduced 
dipolar coupling appears.
  @param  Nmr_Rdc self
  @param  ApiSet values
**/
extern void *Nmr_Rdc_SetResonances(Nmr_Rdc self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurement.value

Value of measurement
  @param  Nmr_Rdc self
  @param  ApiFloat value
**/
extern void *Nmr_Rdc_SetValue(Nmr_Rdc self, ApiFloat value);

/**
  Sorted for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_Rdc self
  @returns   the result
**/
extern ApiList Nmr_Rdc_SortedDataDerivations(Nmr_Rdc self);

/**
  Sorted for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_Rdc self
  @returns   the result
**/
extern ApiList Nmr_Rdc_SortedNmrMeasurementValidations(Nmr_Rdc self);

/**
  Sorted for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_Rdc self
  @returns   the result
**/
extern ApiList Nmr_Rdc_SortedPeakDims(Nmr_Rdc self);

/**
  Sorted for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_Rdc self
  @returns   the result
**/
extern ApiList Nmr_Rdc_SortedPeaks(Nmr_Rdc self);

/**
  Sorted for ccp.nmr.Nmr.Rdc.resonances

Resonances between which the 
reduced dipolar coupling appears.
  @param  Nmr_Rdc self
  @returns   the result
**/
extern ApiList Nmr_Rdc_SortedResonances(Nmr_Rdc self);

#endif /* __incl__ccp_api_nmr_Nmr_Rdc_h__ */
