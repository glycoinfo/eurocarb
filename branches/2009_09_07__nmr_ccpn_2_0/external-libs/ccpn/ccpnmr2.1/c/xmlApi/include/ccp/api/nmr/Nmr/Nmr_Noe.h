
#ifndef __incl__ccp_api_nmr_Nmr_Noe_h__
#define __incl__ccp_api_nmr_Nmr_Noe_h__

#include "ccp.h"

/*
  NOE intensity measurement
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Noe self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_Noe_AddApplicationData(Nmr_Noe self, Impl_ApplicationData value);

/**
  Add for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_Noe self
  @param  Nmr_AbstractDataDerivation value
**/
extern void *Nmr_Noe_AddDataDerivation(Nmr_Noe self, Nmr_AbstractDataDerivation value);

/**
  Add for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_Noe self
  @param  Vald_NmrMeasurementValidation value
**/
extern void *Nmr_Noe_AddNmrMeasurementValidation(Nmr_Noe self, Vald_NmrMeasurementValidation value);

/**
  Add for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_Noe self
  @param  Nmr_Peak value
**/
extern void *Nmr_Noe_AddPeak(Nmr_Noe self, Nmr_Peak value);

/**
  Add for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in the 
derivation of the measurement value. The description in the 'method' may 
refer to these peakDims.
  @param  Nmr_Noe self
  @param  Nmr_PeakDim value
**/
extern void *Nmr_Noe_AddPeakDim(Nmr_Noe self, Nmr_PeakDim value);

/**
  CheckAllValid for ccp.nmr.Nmr.Noe
  @param  Nmr_Noe self
  @param  ApiBoolean complete
**/
extern void *Nmr_Noe_CheckAllValid(Nmr_Noe self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.Nmr.Noe
  @param  Nmr_Noe self
  @param  ApiBoolean complete
**/
extern void *Nmr_Noe_CheckValid(Nmr_Noe self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Noe self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_Noe_FindAllApplicationData(Nmr_Noe self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Noe self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_Noe_FindAllApplicationData_keyval0(Nmr_Noe self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Noe self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_Noe_FindAllApplicationData_keyval1(Nmr_Noe self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Noe self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_Noe_FindAllApplicationData_keyval2(Nmr_Noe self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Noe self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_Noe_FindAllApplicationData_keyval3(Nmr_Noe self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Noe self
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
extern ApiList Nmr_Noe_FindAllApplicationData_keyval4(Nmr_Noe self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_Noe self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Noe_FindAllDataDerivations(Nmr_Noe self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_Noe self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Noe_FindAllDataDerivations_keyval0(Nmr_Noe self);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_Noe self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Noe_FindAllDataDerivations_keyval1(Nmr_Noe self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_Noe self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Noe_FindAllDataDerivations_keyval2(Nmr_Noe self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_Noe self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Noe_FindAllDataDerivations_keyval3(Nmr_Noe self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_Noe self
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
extern ApiSet Nmr_Noe_FindAllDataDerivations_keyval4(Nmr_Noe self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_Noe self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Noe_FindAllNmrMeasurementValidations(Nmr_Noe self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_Noe self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Noe_FindAllNmrMeasurementValidations_keyval0(Nmr_Noe self);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_Noe self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Noe_FindAllNmrMeasurementValidations_keyval1(Nmr_Noe self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_Noe self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Noe_FindAllNmrMeasurementValidations_keyval2(Nmr_Noe self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_Noe self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Noe_FindAllNmrMeasurementValidations_keyval3(Nmr_Noe self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_Noe self
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
extern ApiSet Nmr_Noe_FindAllNmrMeasurementValidations_keyval4(Nmr_Noe self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_Noe self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Noe_FindAllPeakDims(Nmr_Noe self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_Noe self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Noe_FindAllPeakDims_keyval0(Nmr_Noe self);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_Noe self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Noe_FindAllPeakDims_keyval1(Nmr_Noe self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_Noe self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Noe_FindAllPeakDims_keyval2(Nmr_Noe self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_Noe self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Noe_FindAllPeakDims_keyval3(Nmr_Noe self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_Noe self
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
extern ApiSet Nmr_Noe_FindAllPeakDims_keyval4(Nmr_Noe self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_Noe self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Noe_FindAllPeaks(Nmr_Noe self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_Noe self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Noe_FindAllPeaks_keyval0(Nmr_Noe self);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_Noe self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Noe_FindAllPeaks_keyval1(Nmr_Noe self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_Noe self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Noe_FindAllPeaks_keyval2(Nmr_Noe self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_Noe self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Noe_FindAllPeaks_keyval3(Nmr_Noe self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_Noe self
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
extern ApiSet Nmr_Noe_FindAllPeaks_keyval4(Nmr_Noe self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.Noe.resonances

Resonances bwtween which NOE is 
measured.
  @param  Nmr_Noe self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Noe_FindAllResonances(Nmr_Noe self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.Noe.resonances

Resonances bwtween which NOE is 
measured.
  @param  Nmr_Noe self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Noe_FindAllResonances_keyval0(Nmr_Noe self);

/**
  FindAll for ccp.nmr.Nmr.Noe.resonances

Resonances bwtween which NOE is 
measured.
  @param  Nmr_Noe self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Noe_FindAllResonances_keyval1(Nmr_Noe self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.Noe.resonances

Resonances bwtween which NOE is 
measured.
  @param  Nmr_Noe self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Noe_FindAllResonances_keyval2(Nmr_Noe self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.Noe.resonances

Resonances bwtween which NOE is 
measured.
  @param  Nmr_Noe self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Noe_FindAllResonances_keyval3(Nmr_Noe self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.Noe.resonances

Resonances bwtween which NOE is 
measured.
  @param  Nmr_Noe self
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
extern ApiSet Nmr_Noe_FindAllResonances_keyval4(Nmr_Noe self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Noe self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_Noe_FindFirstApplicationData(Nmr_Noe self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Noe self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_Noe_FindFirstApplicationData_keyval0(Nmr_Noe self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Noe self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_Noe_FindFirstApplicationData_keyval1(Nmr_Noe self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Noe self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_Noe_FindFirstApplicationData_keyval2(Nmr_Noe self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Noe self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_Noe_FindFirstApplicationData_keyval3(Nmr_Noe self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Noe self
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
extern Impl_ApplicationData Nmr_Noe_FindFirstApplicationData_keyval4(Nmr_Noe self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_Noe self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractDataDerivation Nmr_Noe_FindFirstDataDerivation(Nmr_Noe self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_Noe self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractDataDerivation Nmr_Noe_FindFirstDataDerivation_keyval0(Nmr_Noe self);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_Noe self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractDataDerivation Nmr_Noe_FindFirstDataDerivation_keyval1(Nmr_Noe self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_Noe self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractDataDerivation Nmr_Noe_FindFirstDataDerivation_keyval2(Nmr_Noe self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_Noe self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractDataDerivation Nmr_Noe_FindFirstDataDerivation_keyval3(Nmr_Noe self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_Noe self
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
extern Nmr_AbstractDataDerivation Nmr_Noe_FindFirstDataDerivation_keyval4(Nmr_Noe self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_Noe self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrMeasurementValidation Nmr_Noe_FindFirstNmrMeasurementValidation(Nmr_Noe self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_Noe self
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrMeasurementValidation Nmr_Noe_FindFirstNmrMeasurementValidation_keyval0(Nmr_Noe self);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_Noe self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrMeasurementValidation Nmr_Noe_FindFirstNmrMeasurementValidation_keyval1(Nmr_Noe self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_Noe self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrMeasurementValidation Nmr_Noe_FindFirstNmrMeasurementValidation_keyval2(Nmr_Noe self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_Noe self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrMeasurementValidation Nmr_Noe_FindFirstNmrMeasurementValidation_keyval3(Nmr_Noe self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_Noe self
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
extern Vald_NmrMeasurementValidation Nmr_Noe_FindFirstNmrMeasurementValidation_keyval4(Nmr_Noe self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_Noe self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Peak Nmr_Noe_FindFirstPeak(Nmr_Noe self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_Noe self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakDim Nmr_Noe_FindFirstPeakDim(Nmr_Noe self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_Noe self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakDim Nmr_Noe_FindFirstPeakDim_keyval0(Nmr_Noe self);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_Noe self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakDim Nmr_Noe_FindFirstPeakDim_keyval1(Nmr_Noe self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_Noe self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakDim Nmr_Noe_FindFirstPeakDim_keyval2(Nmr_Noe self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_Noe self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakDim Nmr_Noe_FindFirstPeakDim_keyval3(Nmr_Noe self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_Noe self
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
extern Nmr_PeakDim Nmr_Noe_FindFirstPeakDim_keyval4(Nmr_Noe self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_Noe self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Peak Nmr_Noe_FindFirstPeak_keyval0(Nmr_Noe self);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_Noe self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Peak Nmr_Noe_FindFirstPeak_keyval1(Nmr_Noe self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_Noe self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Peak Nmr_Noe_FindFirstPeak_keyval2(Nmr_Noe self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_Noe self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Peak Nmr_Noe_FindFirstPeak_keyval3(Nmr_Noe self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_Noe self
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
extern Nmr_Peak Nmr_Noe_FindFirstPeak_keyval4(Nmr_Noe self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.Noe.resonances

Resonances bwtween which NOE 
is measured.
  @param  Nmr_Noe self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Resonance Nmr_Noe_FindFirstResonance(Nmr_Noe self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.Noe.resonances

Resonances bwtween which NOE 
is measured.
  @param  Nmr_Noe self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Resonance Nmr_Noe_FindFirstResonance_keyval0(Nmr_Noe self);

/**
  FindFirst for ccp.nmr.Nmr.Noe.resonances

Resonances bwtween which NOE 
is measured.
  @param  Nmr_Noe self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Resonance Nmr_Noe_FindFirstResonance_keyval1(Nmr_Noe self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.Noe.resonances

Resonances bwtween which NOE 
is measured.
  @param  Nmr_Noe self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Resonance Nmr_Noe_FindFirstResonance_keyval2(Nmr_Noe self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.Noe.resonances

Resonances bwtween which NOE 
is measured.
  @param  Nmr_Noe self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Resonance Nmr_Noe_FindFirstResonance_keyval3(Nmr_Noe self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.Noe.resonances

Resonances bwtween which NOE 
is measured.
  @param  Nmr_Noe self
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
extern Nmr_Resonance Nmr_Noe_FindFirstResonance_keyval4(Nmr_Noe self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.Nmr.Noe
  @param  Nmr_Noe self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Nmr_Noe_Get(Nmr_Noe self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_Noe self
  @returns   the result
**/
extern Acco_AccessObject Nmr_Noe_GetAccess(Nmr_Noe self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Nmr_Noe self
  @returns   the result
**/
extern Acco_AccessObject Nmr_Noe_GetActiveAccess(Nmr_Noe self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Noe self
  @returns   the result
**/
extern ApiList Nmr_Noe_GetApplicationData(Nmr_Noe self);

/**
  GetByKey for ccp.nmr.Nmr.Noe
  @param  Nmr_Noe self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Nmr_Noe Nmr_Noe_GetByKey(Nmr_Noe self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Nmr_Noe self
  @returns   the result
**/
extern ApiString Nmr_Noe_GetClassName(Nmr_Noe self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_Noe self
  @returns   the result
**/
extern ApiSet Nmr_Noe_GetDataDerivations(Nmr_Noe self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurement.details

Free text, for notes, 
explanatory comments, etc.
  @param  Nmr_Noe self
  @returns   the result
**/
extern ApiString Nmr_Noe_GetDetails(Nmr_Noe self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurement.error

Error (standard 
deviation) of measurement
  @param  Nmr_Noe self
  @returns   the result
**/
extern ApiFloat Nmr_Noe_GetError(Nmr_Noe self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Nmr_Noe self
  @returns   the result
**/
extern ApiList Nmr_Noe_GetFieldNames(Nmr_Noe self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurement.figOfMerit

Figure of Merit for 
measurement, i.e. a number that describes the reliablity. Goes from 1.0 
(fully reliable, the default), to 0.0 (unreliable).
  @param  Nmr_Noe self
  @returns   the result
**/
extern ApiFloat Nmr_Noe_GetFigOfMerit(Nmr_Noe self);

/**
  GetFullKey for ccp.nmr.Nmr.Noe
  @param  Nmr_Noe self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Nmr_Noe_GetFullKey(Nmr_Noe self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Nmr_Noe self
  @returns   the result
**/
extern ApiBoolean Nmr_Noe_GetInConstructor(Nmr_Noe self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Nmr_Noe self
  @returns   the result
**/
extern ApiBoolean Nmr_Noe_GetIsDeleted(Nmr_Noe self);

/**
  GetLocalKey for ccp.nmr.Nmr.Noe
  @param  Nmr_Noe self
  @returns  Local object key
**/
extern ApiObject Nmr_Noe_GetLocalKey(Nmr_Noe self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurement.method

Method used to calculate 
this specific measurment value. Overrides MeasurementList.method
  @param  Nmr_Noe self
  @returns   the result
**/
extern Meth_Method Nmr_Noe_GetMethod(Nmr_Noe self);

/**
  Get for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_Noe self
  @returns   the result
**/
extern ApiSet Nmr_Noe_GetNmrMeasurementValidations(Nmr_Noe self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Nmr_Noe self
  @returns   the result
**/
extern ApiString Nmr_Noe_GetPackageName(Nmr_Noe self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Nmr_Noe self
  @returns   the result
**/
extern ApiString Nmr_Noe_GetPackageShortName(Nmr_Noe self);

/**
  Get for ccp.nmr.Nmr.Noe.parent

link to parent object - synonym for 
parentList
  @param  Nmr_Noe self
  @returns   the result
**/
extern Nmr_NoeList Nmr_Noe_GetParent(Nmr_Noe self);

/**
  Get for ccp.nmr.Nmr.Noe.parentList

parent link
  @param  Nmr_Noe self
  @returns   the result
**/
extern Nmr_NoeList Nmr_Noe_GetParentList(Nmr_Noe self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in the 
derivation of the measurement value. The description in the 'method' may 
refer to these peakDims.
  @param  Nmr_Noe self
  @returns   the result
**/
extern ApiSet Nmr_Noe_GetPeakDims(Nmr_Noe self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_Noe self
  @returns   the result
**/
extern ApiSet Nmr_Noe_GetPeaks(Nmr_Noe self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Nmr_Noe self
  @returns   the result
**/
extern ApiString Nmr_Noe_GetQualifiedName(Nmr_Noe self);

/**
  Get for ccp.nmr.Nmr.Noe.resonances

Resonances bwtween which NOE is 
measured.
  @param  Nmr_Noe self
  @returns   the result
**/
extern ApiSet Nmr_Noe_GetResonances(Nmr_Noe self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Nmr_Noe self
  @returns   the result
**/
extern Impl_MemopsRoot Nmr_Noe_GetRoot(Nmr_Noe self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Nmr_Noe self
  @returns   the result
**/
extern Impl_TopObject Nmr_Noe_GetTopObject(Nmr_Noe self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurement.value

Value of measurement
  @param  Nmr_Noe self
  @returns   the result
**/
extern ApiFloat Nmr_Noe_GetValue(Nmr_Noe self);

/**
  Constructor for ccp.nmr.Nmr.Noe
  @param  Nmr_NoeList parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmr_Noe Nmr_Noe_Init(Nmr_NoeList parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.Nmr.Noe
  @param  Nmr_NoeList parent
  @param  ApiSet resonances
  @param  float value
  @returns  the new object
**/
extern Nmr_Noe Nmr_Noe_Init_reqd(Nmr_NoeList parent, ApiSet resonances, float value);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Noe self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_Noe_RemoveApplicationData(Nmr_Noe self, Impl_ApplicationData value);

/**
  Remove for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_Noe self
  @param  Nmr_AbstractDataDerivation value
**/
extern void *Nmr_Noe_RemoveDataDerivation(Nmr_Noe self, Nmr_AbstractDataDerivation value);

/**
  Remove for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_Noe self
  @param  Vald_NmrMeasurementValidation value
**/
extern void *Nmr_Noe_RemoveNmrMeasurementValidation(Nmr_Noe self, Vald_NmrMeasurementValidation value);

/**
  Remove for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_Noe self
  @param  Nmr_Peak value
**/
extern void *Nmr_Noe_RemovePeak(Nmr_Noe self, Nmr_Peak value);

/**
  Remove for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_Noe self
  @param  Nmr_PeakDim value
**/
extern void *Nmr_Noe_RemovePeakDim(Nmr_Noe self, Nmr_PeakDim value);

/**
  SetAttr for ccp.nmr.Nmr.Noe
  @param  Nmr_Noe self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Nmr_Noe_Set(Nmr_Noe self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_Noe self
  @param  Acco_AccessObject value
**/
extern void *Nmr_Noe_SetAccess(Nmr_Noe self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Noe self
  @param  ApiList values
**/
extern void *Nmr_Noe_SetApplicationData(Nmr_Noe self, ApiList values);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_Noe self
  @param  ApiSet values
**/
extern void *Nmr_Noe_SetDataDerivations(Nmr_Noe self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurement.details

Free text, for notes, 
explanatory comments, etc.
  @param  Nmr_Noe self
  @param  ApiString value
**/
extern void *Nmr_Noe_SetDetails(Nmr_Noe self, ApiString value);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurement.error

Error (standard 
deviation) of measurement
  @param  Nmr_Noe self
  @param  ApiFloat value
**/
extern void *Nmr_Noe_SetError(Nmr_Noe self, ApiFloat value);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurement.figOfMerit

Figure of Merit for 
measurement, i.e. a number that describes the reliablity. Goes from 1.0 
(fully reliable, the default), to 0.0 (unreliable).
  @param  Nmr_Noe self
  @param  ApiFloat value
**/
extern void *Nmr_Noe_SetFigOfMerit(Nmr_Noe self, ApiFloat value);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurement.method

Method used to calculate 
this specific measurment value. Overrides MeasurementList.method
  @param  Nmr_Noe self
  @param  Meth_Method value
**/
extern void *Nmr_Noe_SetMethod(Nmr_Noe self, Meth_Method value);

/**
  Set for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_Noe self
  @param  ApiSet values
**/
extern void *Nmr_Noe_SetNmrMeasurementValidations(Nmr_Noe self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in the 
derivation of the measurement value. The description in the 'method' may 
refer to these peakDims.
  @param  Nmr_Noe self
  @param  ApiSet values
**/
extern void *Nmr_Noe_SetPeakDims(Nmr_Noe self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_Noe self
  @param  ApiSet values
**/
extern void *Nmr_Noe_SetPeaks(Nmr_Noe self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.Noe.resonances

Resonances bwtween which NOE is 
measured.
  @param  Nmr_Noe self
  @param  ApiSet values
**/
extern void *Nmr_Noe_SetResonances(Nmr_Noe self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurement.value

Value of measurement
  @param  Nmr_Noe self
  @param  ApiFloat value
**/
extern void *Nmr_Noe_SetValue(Nmr_Noe self, ApiFloat value);

/**
  Sorted for ccp.nmr.Nmr.AbstractMeasurement.dataDerivations

Data 
Derivations where Measurement is used.
  @param  Nmr_Noe self
  @returns   the result
**/
extern ApiList Nmr_Noe_SortedDataDerivations(Nmr_Noe self);

/**
  Sorted for 
ccp.nmr.Nmr.AbstractMeasurement.nmrMeasurementValidations

Validation 
results that include AbstractMeasurement
  @param  Nmr_Noe self
  @returns   the result
**/
extern ApiList Nmr_Noe_SortedNmrMeasurementValidations(Nmr_Noe self);

/**
  Sorted for ccp.nmr.Nmr.AbstractMeasurement.peakDims

PeakDims used in 
the derivation of the measurement value. The description in the 'method' 
may refer to these peakDims.
  @param  Nmr_Noe self
  @returns   the result
**/
extern ApiList Nmr_Noe_SortedPeakDims(Nmr_Noe self);

/**
  Sorted for ccp.nmr.Nmr.AbstractMeasurement.peaks

Peaks used in the 
derivation of the measurement value. The description in the Method may 
refer to these peaks.
  @param  Nmr_Noe self
  @returns   the result
**/
extern ApiList Nmr_Noe_SortedPeaks(Nmr_Noe self);

/**
  Sorted for ccp.nmr.Nmr.Noe.resonances

Resonances bwtween which NOE is 
measured.
  @param  Nmr_Noe self
  @returns   the result
**/
extern ApiList Nmr_Noe_SortedResonances(Nmr_Noe self);

#endif /* __incl__ccp_api_nmr_Nmr_Noe_h__ */
