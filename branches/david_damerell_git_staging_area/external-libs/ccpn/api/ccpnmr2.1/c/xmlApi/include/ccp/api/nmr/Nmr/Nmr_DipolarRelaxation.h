
#ifndef __incl__ccp_api_nmr_Nmr_DipolarRelaxation_h__
#define __incl__ccp_api_nmr_Nmr_DipolarRelaxation_h__

#include "ccp.h"

/*
  Dipole-dipole relaxation measurement
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DipolarRelaxation self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_DipolarRelaxation_AddApplicationData(Nmr_DipolarRelaxation self, Impl_ApplicationData value);

/**
  Add for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_DipolarRelaxation self
  @param  Nmr_AbstractDataDerivation value
**/
extern void *Nmr_DipolarRelaxation_AddDataDerivation(Nmr_DipolarRelaxation self, Nmr_AbstractDataDerivation value);

/**
  Add for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_DipolarRelaxation self
  @param  Vald_NmrMeasurementValidation value
**/
extern void *Nmr_DipolarRelaxation_AddNmrMeasurementValidation(Nmr_DipolarRelaxation self, Vald_NmrMeasurementValidation value);

/**
  Add for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_DipolarRelaxation self
  @param  Nmr_Peak value
**/
extern void *Nmr_DipolarRelaxation_AddPeak(Nmr_DipolarRelaxation self, Nmr_Peak value);

/**
  Add for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in the 
derivation of the measurement value. The description in the 'method' may 
refer to these peakDims.
  @param  Nmr_DipolarRelaxation self
  @param  Nmr_PeakDim value
**/
extern void *Nmr_DipolarRelaxation_AddPeakDim(Nmr_DipolarRelaxation self, Nmr_PeakDim value);

/**
  CheckAllValid for ccp.nmr.Nmr.DipolarRelaxation
  @param  Nmr_DipolarRelaxation self
  @param  ApiBoolean complete
**/
extern void *Nmr_DipolarRelaxation_CheckAllValid(Nmr_DipolarRelaxation self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.Nmr.DipolarRelaxation
  @param  Nmr_DipolarRelaxation self
  @param  ApiBoolean complete
**/
extern void *Nmr_DipolarRelaxation_CheckValid(Nmr_DipolarRelaxation self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DipolarRelaxation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_DipolarRelaxation_FindAllApplicationData(Nmr_DipolarRelaxation self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DipolarRelaxation self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_DipolarRelaxation_FindAllApplicationData_keyval0(Nmr_DipolarRelaxation self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DipolarRelaxation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_DipolarRelaxation_FindAllApplicationData_keyval1(Nmr_DipolarRelaxation self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DipolarRelaxation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_DipolarRelaxation_FindAllApplicationData_keyval2(Nmr_DipolarRelaxation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DipolarRelaxation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_DipolarRelaxation_FindAllApplicationData_keyval3(Nmr_DipolarRelaxation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DipolarRelaxation self
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
extern ApiList Nmr_DipolarRelaxation_FindAllApplicationData_keyval4(Nmr_DipolarRelaxation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_DipolarRelaxation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_DipolarRelaxation_FindAllDataDerivations(Nmr_DipolarRelaxation self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_DipolarRelaxation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_DipolarRelaxation_FindAllDataDerivations_keyval0(Nmr_DipolarRelaxation self);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_DipolarRelaxation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_DipolarRelaxation_FindAllDataDerivations_keyval1(Nmr_DipolarRelaxation self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_DipolarRelaxation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_DipolarRelaxation_FindAllDataDerivations_keyval2(Nmr_DipolarRelaxation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_DipolarRelaxation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_DipolarRelaxation_FindAllDataDerivations_keyval3(Nmr_DipolarRelaxation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_DipolarRelaxation self
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
extern ApiSet Nmr_DipolarRelaxation_FindAllDataDerivations_keyval4(Nmr_DipolarRelaxation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_DipolarRelaxation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_DipolarRelaxation_FindAllNmrMeasurementValidations(Nmr_DipolarRelaxation self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_DipolarRelaxation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_DipolarRelaxation_FindAllNmrMeasurementValidations_keyval0(Nmr_DipolarRelaxation self);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_DipolarRelaxation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_DipolarRelaxation_FindAllNmrMeasurementValidations_keyval1(Nmr_DipolarRelaxation self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_DipolarRelaxation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_DipolarRelaxation_FindAllNmrMeasurementValidations_keyval2(Nmr_DipolarRelaxation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_DipolarRelaxation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_DipolarRelaxation_FindAllNmrMeasurementValidations_keyval3(Nmr_DipolarRelaxation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_DipolarRelaxation self
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
extern ApiSet Nmr_DipolarRelaxation_FindAllNmrMeasurementValidations_keyval4(Nmr_DipolarRelaxation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_DipolarRelaxation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_DipolarRelaxation_FindAllPeakDims(Nmr_DipolarRelaxation self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_DipolarRelaxation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_DipolarRelaxation_FindAllPeakDims_keyval0(Nmr_DipolarRelaxation self);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_DipolarRelaxation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_DipolarRelaxation_FindAllPeakDims_keyval1(Nmr_DipolarRelaxation self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_DipolarRelaxation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_DipolarRelaxation_FindAllPeakDims_keyval2(Nmr_DipolarRelaxation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_DipolarRelaxation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_DipolarRelaxation_FindAllPeakDims_keyval3(Nmr_DipolarRelaxation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_DipolarRelaxation self
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
extern ApiSet Nmr_DipolarRelaxation_FindAllPeakDims_keyval4(Nmr_DipolarRelaxation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_DipolarRelaxation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_DipolarRelaxation_FindAllPeaks(Nmr_DipolarRelaxation self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_DipolarRelaxation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_DipolarRelaxation_FindAllPeaks_keyval0(Nmr_DipolarRelaxation self);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_DipolarRelaxation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_DipolarRelaxation_FindAllPeaks_keyval1(Nmr_DipolarRelaxation self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_DipolarRelaxation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_DipolarRelaxation_FindAllPeaks_keyval2(Nmr_DipolarRelaxation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_DipolarRelaxation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_DipolarRelaxation_FindAllPeaks_keyval3(Nmr_DipolarRelaxation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_DipolarRelaxation self
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
extern ApiSet Nmr_DipolarRelaxation_FindAllPeaks_keyval4(Nmr_DipolarRelaxation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.DipolarRelaxation.resonances

Resonances between 
which dipole-dipole relaxation is measured.
  @param  Nmr_DipolarRelaxation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_DipolarRelaxation_FindAllResonances(Nmr_DipolarRelaxation self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.DipolarRelaxation.resonances

Resonances between 
which dipole-dipole relaxation is measured.
  @param  Nmr_DipolarRelaxation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_DipolarRelaxation_FindAllResonances_keyval0(Nmr_DipolarRelaxation self);

/**
  FindAll for ccp.nmr.Nmr.DipolarRelaxation.resonances

Resonances between 
which dipole-dipole relaxation is measured.
  @param  Nmr_DipolarRelaxation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_DipolarRelaxation_FindAllResonances_keyval1(Nmr_DipolarRelaxation self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.DipolarRelaxation.resonances

Resonances between 
which dipole-dipole relaxation is measured.
  @param  Nmr_DipolarRelaxation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_DipolarRelaxation_FindAllResonances_keyval2(Nmr_DipolarRelaxation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.DipolarRelaxation.resonances

Resonances between 
which dipole-dipole relaxation is measured.
  @param  Nmr_DipolarRelaxation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_DipolarRelaxation_FindAllResonances_keyval3(Nmr_DipolarRelaxation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.DipolarRelaxation.resonances

Resonances between 
which dipole-dipole relaxation is measured.
  @param  Nmr_DipolarRelaxation self
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
extern ApiSet Nmr_DipolarRelaxation_FindAllResonances_keyval4(Nmr_DipolarRelaxation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DipolarRelaxation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_DipolarRelaxation_FindFirstApplicationData(Nmr_DipolarRelaxation self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DipolarRelaxation self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_DipolarRelaxation_FindFirstApplicationData_keyval0(Nmr_DipolarRelaxation self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DipolarRelaxation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_DipolarRelaxation_FindFirstApplicationData_keyval1(Nmr_DipolarRelaxation self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DipolarRelaxation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_DipolarRelaxation_FindFirstApplicationData_keyval2(Nmr_DipolarRelaxation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DipolarRelaxation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_DipolarRelaxation_FindFirstApplicationData_keyval3(Nmr_DipolarRelaxation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DipolarRelaxation self
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
extern Impl_ApplicationData Nmr_DipolarRelaxation_FindFirstApplicationData_keyval4(Nmr_DipolarRelaxation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_DipolarRelaxation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractDataDerivation Nmr_DipolarRelaxation_FindFirstDataDerivation(Nmr_DipolarRelaxation self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_DipolarRelaxation self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractDataDerivation Nmr_DipolarRelaxation_FindFirstDataDerivation_keyval0(Nmr_DipolarRelaxation self);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_DipolarRelaxation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractDataDerivation Nmr_DipolarRelaxation_FindFirstDataDerivation_keyval1(Nmr_DipolarRelaxation self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_DipolarRelaxation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractDataDerivation Nmr_DipolarRelaxation_FindFirstDataDerivation_keyval2(Nmr_DipolarRelaxation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_DipolarRelaxation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractDataDerivation Nmr_DipolarRelaxation_FindFirstDataDerivation_keyval3(Nmr_DipolarRelaxation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_DipolarRelaxation self
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
extern Nmr_AbstractDataDerivation Nmr_DipolarRelaxation_FindFirstDataDerivation_keyval4(Nmr_DipolarRelaxation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_DipolarRelaxation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrMeasurementValidation Nmr_DipolarRelaxation_FindFirstNmrMeasurementValidation(Nmr_DipolarRelaxation self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_DipolarRelaxation self
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrMeasurementValidation Nmr_DipolarRelaxation_FindFirstNmrMeasurementValidation_keyval0(Nmr_DipolarRelaxation self);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_DipolarRelaxation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrMeasurementValidation Nmr_DipolarRelaxation_FindFirstNmrMeasurementValidation_keyval1(Nmr_DipolarRelaxation self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_DipolarRelaxation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrMeasurementValidation Nmr_DipolarRelaxation_FindFirstNmrMeasurementValidation_keyval2(Nmr_DipolarRelaxation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_DipolarRelaxation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrMeasurementValidation Nmr_DipolarRelaxation_FindFirstNmrMeasurementValidation_keyval3(Nmr_DipolarRelaxation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_DipolarRelaxation self
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
extern Vald_NmrMeasurementValidation Nmr_DipolarRelaxation_FindFirstNmrMeasurementValidation_keyval4(Nmr_DipolarRelaxation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_DipolarRelaxation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Peak Nmr_DipolarRelaxation_FindFirstPeak(Nmr_DipolarRelaxation self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_DipolarRelaxation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakDim Nmr_DipolarRelaxation_FindFirstPeakDim(Nmr_DipolarRelaxation self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_DipolarRelaxation self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakDim Nmr_DipolarRelaxation_FindFirstPeakDim_keyval0(Nmr_DipolarRelaxation self);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_DipolarRelaxation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakDim Nmr_DipolarRelaxation_FindFirstPeakDim_keyval1(Nmr_DipolarRelaxation self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_DipolarRelaxation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakDim Nmr_DipolarRelaxation_FindFirstPeakDim_keyval2(Nmr_DipolarRelaxation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_DipolarRelaxation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakDim Nmr_DipolarRelaxation_FindFirstPeakDim_keyval3(Nmr_DipolarRelaxation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_DipolarRelaxation self
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
extern Nmr_PeakDim Nmr_DipolarRelaxation_FindFirstPeakDim_keyval4(Nmr_DipolarRelaxation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_DipolarRelaxation self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Peak Nmr_DipolarRelaxation_FindFirstPeak_keyval0(Nmr_DipolarRelaxation self);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_DipolarRelaxation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Peak Nmr_DipolarRelaxation_FindFirstPeak_keyval1(Nmr_DipolarRelaxation self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_DipolarRelaxation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Peak Nmr_DipolarRelaxation_FindFirstPeak_keyval2(Nmr_DipolarRelaxation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_DipolarRelaxation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Peak Nmr_DipolarRelaxation_FindFirstPeak_keyval3(Nmr_DipolarRelaxation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_DipolarRelaxation self
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
extern Nmr_Peak Nmr_DipolarRelaxation_FindFirstPeak_keyval4(Nmr_DipolarRelaxation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.DipolarRelaxation.resonances

Resonances 
between which dipole-dipole relaxation is measured.
  @param  Nmr_DipolarRelaxation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Resonance Nmr_DipolarRelaxation_FindFirstResonance(Nmr_DipolarRelaxation self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.DipolarRelaxation.resonances

Resonances 
between which dipole-dipole relaxation is measured.
  @param  Nmr_DipolarRelaxation self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Resonance Nmr_DipolarRelaxation_FindFirstResonance_keyval0(Nmr_DipolarRelaxation self);

/**
  FindFirst for ccp.nmr.Nmr.DipolarRelaxation.resonances

Resonances 
between which dipole-dipole relaxation is measured.
  @param  Nmr_DipolarRelaxation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Resonance Nmr_DipolarRelaxation_FindFirstResonance_keyval1(Nmr_DipolarRelaxation self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.DipolarRelaxation.resonances

Resonances 
between which dipole-dipole relaxation is measured.
  @param  Nmr_DipolarRelaxation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Resonance Nmr_DipolarRelaxation_FindFirstResonance_keyval2(Nmr_DipolarRelaxation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.DipolarRelaxation.resonances

Resonances 
between which dipole-dipole relaxation is measured.
  @param  Nmr_DipolarRelaxation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Resonance Nmr_DipolarRelaxation_FindFirstResonance_keyval3(Nmr_DipolarRelaxation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.DipolarRelaxation.resonances

Resonances 
between which dipole-dipole relaxation is measured.
  @param  Nmr_DipolarRelaxation self
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
extern Nmr_Resonance Nmr_DipolarRelaxation_FindFirstResonance_keyval4(Nmr_DipolarRelaxation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.Nmr.DipolarRelaxation
  @param  Nmr_DipolarRelaxation self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Nmr_DipolarRelaxation_Get(Nmr_DipolarRelaxation self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_DipolarRelaxation self
  @returns   the result
**/
extern Acco_AccessObject Nmr_DipolarRelaxation_GetAccess(Nmr_DipolarRelaxation self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Nmr_DipolarRelaxation self
  @returns   the result
**/
extern Acco_AccessObject Nmr_DipolarRelaxation_GetActiveAccess(Nmr_DipolarRelaxation self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DipolarRelaxation self
  @returns   the result
**/
extern ApiList Nmr_DipolarRelaxation_GetApplicationData(Nmr_DipolarRelaxation self);

/**
  GetByKey for ccp.nmr.Nmr.DipolarRelaxation
  @param  Nmr_DipolarRelaxation self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Nmr_DipolarRelaxation Nmr_DipolarRelaxation_GetByKey(Nmr_DipolarRelaxation self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Nmr_DipolarRelaxation self
  @returns   the result
**/
extern ApiString Nmr_DipolarRelaxation_GetClassName(Nmr_DipolarRelaxation self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_DipolarRelaxation self
  @returns   the result
**/
extern ApiSet Nmr_DipolarRelaxation_GetDataDerivations(Nmr_DipolarRelaxation self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurement.details

Free text, for notes, 
explanatory comments, etc.
  @param  Nmr_DipolarRelaxation self
  @returns   the result
**/
extern ApiString Nmr_DipolarRelaxation_GetDetails(Nmr_DipolarRelaxation self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurement.error

Error (standard 
deviation) of measurement
  @param  Nmr_DipolarRelaxation self
  @returns   the result
**/
extern ApiFloat Nmr_DipolarRelaxation_GetError(Nmr_DipolarRelaxation self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Nmr_DipolarRelaxation self
  @returns   the result
**/
extern ApiList Nmr_DipolarRelaxation_GetFieldNames(Nmr_DipolarRelaxation self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurement.figOfMerit

Figure of Merit for 
measurement, i.e. a number that describes the reliablity. Goes from 1.0 
(fully reliable, the default), to 0.0 (unreliable).
  @param  Nmr_DipolarRelaxation self
  @returns   the result
**/
extern ApiFloat Nmr_DipolarRelaxation_GetFigOfMerit(Nmr_DipolarRelaxation self);

/**
  GetFullKey for ccp.nmr.Nmr.DipolarRelaxation
  @param  Nmr_DipolarRelaxation self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Nmr_DipolarRelaxation_GetFullKey(Nmr_DipolarRelaxation self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Nmr_DipolarRelaxation self
  @returns   the result
**/
extern ApiBoolean Nmr_DipolarRelaxation_GetInConstructor(Nmr_DipolarRelaxation self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Nmr_DipolarRelaxation self
  @returns   the result
**/
extern ApiBoolean Nmr_DipolarRelaxation_GetIsDeleted(Nmr_DipolarRelaxation self);

/**
  GetLocalKey for ccp.nmr.Nmr.DipolarRelaxation
  @param  Nmr_DipolarRelaxation self
  @returns  Local object key
**/
extern ApiObject Nmr_DipolarRelaxation_GetLocalKey(Nmr_DipolarRelaxation self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurement.method

Method used to calculate 
this specific measurment value. Overrides MeasurementList.method
  @param  Nmr_DipolarRelaxation self
  @returns   the result
**/
extern Meth_Method Nmr_DipolarRelaxation_GetMethod(Nmr_DipolarRelaxation self);

/**
  Get for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_DipolarRelaxation self
  @returns   the result
**/
extern ApiSet Nmr_DipolarRelaxation_GetNmrMeasurementValidations(Nmr_DipolarRelaxation self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Nmr_DipolarRelaxation self
  @returns   the result
**/
extern ApiString Nmr_DipolarRelaxation_GetPackageName(Nmr_DipolarRelaxation self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Nmr_DipolarRelaxation self
  @returns   the result
**/
extern ApiString Nmr_DipolarRelaxation_GetPackageShortName(Nmr_DipolarRelaxation self);

/**
  Get for ccp.nmr.Nmr.DipolarRelaxation.parent

link to parent object - 
synonym for parentList
  @param  Nmr_DipolarRelaxation self
  @returns   the result
**/
extern Nmr_DipolarRelaxList Nmr_DipolarRelaxation_GetParent(Nmr_DipolarRelaxation self);

/**
  Get for ccp.nmr.Nmr.DipolarRelaxation.parentList

parent link
  @param  Nmr_DipolarRelaxation self
  @returns   the result
**/
extern Nmr_DipolarRelaxList Nmr_DipolarRelaxation_GetParentList(Nmr_DipolarRelaxation self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in the 
derivation of the measurement value. The description in the 'method' may 
refer to these peakDims.
  @param  Nmr_DipolarRelaxation self
  @returns   the result
**/
extern ApiSet Nmr_DipolarRelaxation_GetPeakDims(Nmr_DipolarRelaxation self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_DipolarRelaxation self
  @returns   the result
**/
extern ApiSet Nmr_DipolarRelaxation_GetPeaks(Nmr_DipolarRelaxation self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Nmr_DipolarRelaxation self
  @returns   the result
**/
extern ApiString Nmr_DipolarRelaxation_GetQualifiedName(Nmr_DipolarRelaxation self);

/**
  Get for ccp.nmr.Nmr.DipolarRelaxation.resonances

Resonances between 
which dipole-dipole relaxation is measured.
  @param  Nmr_DipolarRelaxation self
  @returns   the result
**/
extern ApiSet Nmr_DipolarRelaxation_GetResonances(Nmr_DipolarRelaxation self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Nmr_DipolarRelaxation self
  @returns   the result
**/
extern Impl_MemopsRoot Nmr_DipolarRelaxation_GetRoot(Nmr_DipolarRelaxation self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Nmr_DipolarRelaxation self
  @returns   the result
**/
extern Impl_TopObject Nmr_DipolarRelaxation_GetTopObject(Nmr_DipolarRelaxation self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurement.value

Value of measurement
  @param  Nmr_DipolarRelaxation self
  @returns   the result
**/
extern ApiFloat Nmr_DipolarRelaxation_GetValue(Nmr_DipolarRelaxation self);

/**
  Constructor for ccp.nmr.Nmr.DipolarRelaxation
  @param  Nmr_DipolarRelaxList parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmr_DipolarRelaxation Nmr_DipolarRelaxation_Init(Nmr_DipolarRelaxList parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.Nmr.DipolarRelaxation
  @param  Nmr_DipolarRelaxList parent
  @param  ApiSet resonances
  @param  float value
  @returns  the new object
**/
extern Nmr_DipolarRelaxation Nmr_DipolarRelaxation_Init_reqd(Nmr_DipolarRelaxList parent, ApiSet resonances, float value);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DipolarRelaxation self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_DipolarRelaxation_RemoveApplicationData(Nmr_DipolarRelaxation self, Impl_ApplicationData value);

/**
  Remove for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_DipolarRelaxation self
  @param  Nmr_AbstractDataDerivation value
**/
extern void *Nmr_DipolarRelaxation_RemoveDataDerivation(Nmr_DipolarRelaxation self, Nmr_AbstractDataDerivation value);

/**
  Remove for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_DipolarRelaxation self
  @param  Vald_NmrMeasurementValidation value
**/
extern void *Nmr_DipolarRelaxation_RemoveNmrMeasurementValidation(Nmr_DipolarRelaxation self, Vald_NmrMeasurementValidation value);

/**
  Remove for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_DipolarRelaxation self
  @param  Nmr_Peak value
**/
extern void *Nmr_DipolarRelaxation_RemovePeak(Nmr_DipolarRelaxation self, Nmr_Peak value);

/**
  Remove for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_DipolarRelaxation self
  @param  Nmr_PeakDim value
**/
extern void *Nmr_DipolarRelaxation_RemovePeakDim(Nmr_DipolarRelaxation self, Nmr_PeakDim value);

/**
  SetAttr for ccp.nmr.Nmr.DipolarRelaxation
  @param  Nmr_DipolarRelaxation self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Nmr_DipolarRelaxation_Set(Nmr_DipolarRelaxation self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_DipolarRelaxation self
  @param  Acco_AccessObject value
**/
extern void *Nmr_DipolarRelaxation_SetAccess(Nmr_DipolarRelaxation self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DipolarRelaxation self
  @param  ApiList values
**/
extern void *Nmr_DipolarRelaxation_SetApplicationData(Nmr_DipolarRelaxation self, ApiList values);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_DipolarRelaxation self
  @param  ApiSet values
**/
extern void *Nmr_DipolarRelaxation_SetDataDerivations(Nmr_DipolarRelaxation self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurement.details

Free text, for notes, 
explanatory comments, etc.
  @param  Nmr_DipolarRelaxation self
  @param  ApiString value
**/
extern void *Nmr_DipolarRelaxation_SetDetails(Nmr_DipolarRelaxation self, ApiString value);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurement.error

Error (standard 
deviation) of measurement
  @param  Nmr_DipolarRelaxation self
  @param  ApiFloat value
**/
extern void *Nmr_DipolarRelaxation_SetError(Nmr_DipolarRelaxation self, ApiFloat value);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurement.figOfMerit

Figure of Merit for 
measurement, i.e. a number that describes the reliablity. Goes from 1.0 
(fully reliable, the default), to 0.0 (unreliable).
  @param  Nmr_DipolarRelaxation self
  @param  ApiFloat value
**/
extern void *Nmr_DipolarRelaxation_SetFigOfMerit(Nmr_DipolarRelaxation self, ApiFloat value);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurement.method

Method used to calculate 
this specific measurment value. Overrides MeasurementList.method
  @param  Nmr_DipolarRelaxation self
  @param  Meth_Method value
**/
extern void *Nmr_DipolarRelaxation_SetMethod(Nmr_DipolarRelaxation self, Meth_Method value);

/**
  Set for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_DipolarRelaxation self
  @param  ApiSet values
**/
extern void *Nmr_DipolarRelaxation_SetNmrMeasurementValidations(Nmr_DipolarRelaxation self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in the 
derivation of the measurement value. The description in the 'method' may 
refer to these peakDims.
  @param  Nmr_DipolarRelaxation self
  @param  ApiSet values
**/
extern void *Nmr_DipolarRelaxation_SetPeakDims(Nmr_DipolarRelaxation self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_DipolarRelaxation self
  @param  ApiSet values
**/
extern void *Nmr_DipolarRelaxation_SetPeaks(Nmr_DipolarRelaxation self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.DipolarRelaxation.resonances

Resonances between 
which dipole-dipole relaxation is measured.
  @param  Nmr_DipolarRelaxation self
  @param  ApiSet values
**/
extern void *Nmr_DipolarRelaxation_SetResonances(Nmr_DipolarRelaxation self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurement.value

Value of measurement
  @param  Nmr_DipolarRelaxation self
  @param  ApiFloat value
**/
extern void *Nmr_DipolarRelaxation_SetValue(Nmr_DipolarRelaxation self, ApiFloat value);

/**
  Sorted for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_DipolarRelaxation self
  @returns   the result
**/
extern ApiList Nmr_DipolarRelaxation_SortedDataDerivations(Nmr_DipolarRelaxation self);

/**
  Sorted for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_DipolarRelaxation self
  @returns   the result
**/
extern ApiList Nmr_DipolarRelaxation_SortedNmrMeasurementValidations(Nmr_DipolarRelaxation self);

/**
  Sorted for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_DipolarRelaxation self
  @returns   the result
**/
extern ApiList Nmr_DipolarRelaxation_SortedPeakDims(Nmr_DipolarRelaxation self);

/**
  Sorted for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_DipolarRelaxation self
  @returns   the result
**/
extern ApiList Nmr_DipolarRelaxation_SortedPeaks(Nmr_DipolarRelaxation self);

/**
  Sorted for ccp.nmr.Nmr.DipolarRelaxation.resonances

Resonances between 
which dipole-dipole relaxation is measured.
  @param  Nmr_DipolarRelaxation self
  @returns   the result
**/
extern ApiList Nmr_DipolarRelaxation_SortedResonances(Nmr_DipolarRelaxation self);

#endif /* __incl__ccp_api_nmr_Nmr_DipolarRelaxation_h__ */
