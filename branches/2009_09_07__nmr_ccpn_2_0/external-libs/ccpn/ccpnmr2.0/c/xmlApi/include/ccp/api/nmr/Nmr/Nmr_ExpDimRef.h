
#ifndef __incl__ccp_api_nmr_Nmr_ExpDimRef_h__
#define __incl__ccp_api_nmr_Nmr_ExpDimRef_h__

#include "ccp.h"

/*
  This class describes the referencing for values that can appear on an axis in an NMR spectrum. There may be several ExpDimRef for each dim, either because the experiment is the sum of several experiments with differently referenced axes (e.g. 15N/13C HSQC), or because the actual peak position is a linear combination of different contributions with different referencings (J-coupling, reduced-dimensionality, or projection experiments).The kinds of linear combiantion possible are determined by the dimensionScalings;whether the experiment is a sum of several experiments is determined by the groupingNumber. Note that ExpDimRefs are only relevant to an AbstractDataDim if they are linked with a DimensionScaling
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpDimRef self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_ExpDimRef_AddApplicationData(Nmr_ExpDimRef self, Impl_ApplicationData value);

/**
  Add for ccp.nmr.Nmr.ExpDimRef.isotopeCodes

Isotope identification 
strings for isotopes. NB there can be several isotopes for e.g. 
J-coupling or multiple quantum coherence.
  @param  Nmr_ExpDimRef self
  @param  ApiString value
**/
extern void *Nmr_ExpDimRef_AddIsotopeCode(Nmr_ExpDimRef self, ApiString value);

/**
  CheckAllValid for ccp.nmr.Nmr.ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  ApiBoolean complete
**/
extern void *Nmr_ExpDimRef_CheckAllValid(Nmr_ExpDimRef self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.Nmr.ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  ApiBoolean complete
**/
extern void *Nmr_ExpDimRef_CheckValid(Nmr_ExpDimRef self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpDimRef self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_ExpDimRef_FindAllApplicationData(Nmr_ExpDimRef self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpDimRef self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_ExpDimRef_FindAllApplicationData_keyval0(Nmr_ExpDimRef self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpDimRef self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_ExpDimRef_FindAllApplicationData_keyval1(Nmr_ExpDimRef self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_ExpDimRef_FindAllApplicationData_keyval2(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_ExpDimRef_FindAllApplicationData_keyval3(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpDimRef self
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
extern ApiList Nmr_ExpDimRef_FindAllApplicationData_keyval4(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.dataDimRefs

DatDimRefs corresponding 
to ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ExpDimRef_FindAllDataDimRefs(Nmr_ExpDimRef self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.dataDimRefs

DatDimRefs corresponding 
to ExpDimRef
  @param  Nmr_ExpDimRef self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ExpDimRef_FindAllDataDimRefs_keyval0(Nmr_ExpDimRef self);

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.dataDimRefs

DatDimRefs corresponding 
to ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ExpDimRef_FindAllDataDimRefs_keyval1(Nmr_ExpDimRef self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.dataDimRefs

DatDimRefs corresponding 
to ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ExpDimRef_FindAllDataDimRefs_keyval2(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.dataDimRefs

DatDimRefs corresponding 
to ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ExpDimRef_FindAllDataDimRefs_keyval3(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.dataDimRefs

DatDimRefs corresponding 
to ExpDimRef
  @param  Nmr_ExpDimRef self
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
extern ApiSet Nmr_ExpDimRef_FindAllDataDimRefs_keyval4(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.derivedTo

ExpDimRefMappings for 
ExpDimRefs derived from current ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ExpDimRef_FindAllDerivedTo(Nmr_ExpDimRef self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.derivedTo

ExpDimRefMappings for 
ExpDimRefs derived from current ExpDimRef
  @param  Nmr_ExpDimRef self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ExpDimRef_FindAllDerivedTo_keyval0(Nmr_ExpDimRef self);

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.derivedTo

ExpDimRefMappings for 
ExpDimRefs derived from current ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ExpDimRef_FindAllDerivedTo_keyval1(Nmr_ExpDimRef self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.derivedTo

ExpDimRefMappings for 
ExpDimRefs derived from current ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ExpDimRef_FindAllDerivedTo_keyval2(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.derivedTo

ExpDimRefMappings for 
ExpDimRefs derived from current ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ExpDimRef_FindAllDerivedTo_keyval3(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.derivedTo

ExpDimRefMappings for 
ExpDimRefs derived from current ExpDimRef
  @param  Nmr_ExpDimRef self
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
extern ApiSet Nmr_ExpDimRef_FindAllDerivedTo_keyval4(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.dimensionScalings

ScalingFactors that 
apply to ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ExpDimRef_FindAllDimensionScalings(Nmr_ExpDimRef self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.dimensionScalings

ScalingFactors that 
apply to ExpDimRef
  @param  Nmr_ExpDimRef self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ExpDimRef_FindAllDimensionScalings_keyval0(Nmr_ExpDimRef self);

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.dimensionScalings

ScalingFactors that 
apply to ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ExpDimRef_FindAllDimensionScalings_keyval1(Nmr_ExpDimRef self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.dimensionScalings

ScalingFactors that 
apply to ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ExpDimRef_FindAllDimensionScalings_keyval2(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.dimensionScalings

ScalingFactors that 
apply to ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ExpDimRef_FindAllDimensionScalings_keyval3(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.dimensionScalings

ScalingFactors that 
apply to ExpDimRef
  @param  Nmr_ExpDimRef self
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
extern ApiSet Nmr_ExpDimRef_FindAllDimensionScalings_keyval4(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.expDimRefMappings

child link to class 
ExpDimRefMapping
  @param  Nmr_ExpDimRef self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ExpDimRef_FindAllExpDimRefMappings(Nmr_ExpDimRef self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.expDimRefMappings

child link to class 
ExpDimRefMapping
  @param  Nmr_ExpDimRef self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ExpDimRef_FindAllExpDimRefMappings_keyval0(Nmr_ExpDimRef self);

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.expDimRefMappings

child link to class 
ExpDimRefMapping
  @param  Nmr_ExpDimRef self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ExpDimRef_FindAllExpDimRefMappings_keyval1(Nmr_ExpDimRef self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.expDimRefMappings

child link to class 
ExpDimRefMapping
  @param  Nmr_ExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ExpDimRef_FindAllExpDimRefMappings_keyval2(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.expDimRefMappings

child link to class 
ExpDimRefMapping
  @param  Nmr_ExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ExpDimRef_FindAllExpDimRefMappings_keyval3(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.expDimRefMappings

child link to class 
ExpDimRefMapping
  @param  Nmr_ExpDimRef self
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
extern ApiSet Nmr_ExpDimRef_FindAllExpDimRefMappings_keyval4(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.expTransfers

Magentisation transfers 
involving ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ExpDimRef_FindAllExpTransfers(Nmr_ExpDimRef self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.expTransfers

Magentisation transfers 
involving ExpDimRef
  @param  Nmr_ExpDimRef self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ExpDimRef_FindAllExpTransfers_keyval0(Nmr_ExpDimRef self);

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.expTransfers

Magentisation transfers 
involving ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ExpDimRef_FindAllExpTransfers_keyval1(Nmr_ExpDimRef self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.expTransfers

Magentisation transfers 
involving ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ExpDimRef_FindAllExpTransfers_keyval2(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.expTransfers

Magentisation transfers 
involving ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ExpDimRef_FindAllExpTransfers_keyval3(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.expTransfers

Magentisation transfers 
involving ExpDimRef
  @param  Nmr_ExpDimRef self
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
extern ApiSet Nmr_ExpDimRef_FindAllExpTransfers_keyval4(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.isotopes

Isotopes corresponding to 
the ExpDimRef. In the most common case there will be only one Isotope - 
multiple Isotopes can appear where the ExpDimRef describes e.g. coupling 
constants or multiple quantum coherence.
  @param  Nmr_ExpDimRef self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_ExpDimRef_FindAllIsotopes(Nmr_ExpDimRef self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.isotopes

Isotopes corresponding to 
the ExpDimRef. In the most common case there will be only one Isotope - 
multiple Isotopes can appear where the ExpDimRef describes e.g. coupling 
constants or multiple quantum coherence.
  @param  Nmr_ExpDimRef self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_ExpDimRef_FindAllIsotopes_keyval0(Nmr_ExpDimRef self);

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.isotopes

Isotopes corresponding to 
the ExpDimRef. In the most common case there will be only one Isotope - 
multiple Isotopes can appear where the ExpDimRef describes e.g. coupling 
constants or multiple quantum coherence.
  @param  Nmr_ExpDimRef self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_ExpDimRef_FindAllIsotopes_keyval1(Nmr_ExpDimRef self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.isotopes

Isotopes corresponding to 
the ExpDimRef. In the most common case there will be only one Isotope - 
multiple Isotopes can appear where the ExpDimRef describes e.g. coupling 
constants or multiple quantum coherence.
  @param  Nmr_ExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_ExpDimRef_FindAllIsotopes_keyval2(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.isotopes

Isotopes corresponding to 
the ExpDimRef. In the most common case there will be only one Isotope - 
multiple Isotopes can appear where the ExpDimRef describes e.g. coupling 
constants or multiple quantum coherence.
  @param  Nmr_ExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_ExpDimRef_FindAllIsotopes_keyval3(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.ExpDimRef.isotopes

Isotopes corresponding to 
the ExpDimRef. In the most common case there will be only one Isotope - 
multiple Isotopes can appear where the ExpDimRef describes e.g. coupling 
constants or multiple quantum coherence.
  @param  Nmr_ExpDimRef self
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
extern ApiList Nmr_ExpDimRef_FindAllIsotopes_keyval4(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpDimRef self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_ExpDimRef_FindFirstApplicationData(Nmr_ExpDimRef self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpDimRef self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_ExpDimRef_FindFirstApplicationData_keyval0(Nmr_ExpDimRef self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpDimRef self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_ExpDimRef_FindFirstApplicationData_keyval1(Nmr_ExpDimRef self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_ExpDimRef_FindFirstApplicationData_keyval2(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_ExpDimRef_FindFirstApplicationData_keyval3(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpDimRef self
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
extern Impl_ApplicationData Nmr_ExpDimRef_FindFirstApplicationData_keyval4(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.dataDimRefs

DatDimRefs 
corresponding to ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DataDimRef Nmr_ExpDimRef_FindFirstDataDimRef(Nmr_ExpDimRef self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.dataDimRefs

DatDimRefs 
corresponding to ExpDimRef
  @param  Nmr_ExpDimRef self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DataDimRef Nmr_ExpDimRef_FindFirstDataDimRef_keyval0(Nmr_ExpDimRef self);

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.dataDimRefs

DatDimRefs 
corresponding to ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DataDimRef Nmr_ExpDimRef_FindFirstDataDimRef_keyval1(Nmr_ExpDimRef self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.dataDimRefs

DatDimRefs 
corresponding to ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DataDimRef Nmr_ExpDimRef_FindFirstDataDimRef_keyval2(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.dataDimRefs

DatDimRefs 
corresponding to ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DataDimRef Nmr_ExpDimRef_FindFirstDataDimRef_keyval3(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.dataDimRefs

DatDimRefs 
corresponding to ExpDimRef
  @param  Nmr_ExpDimRef self
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
extern Nmr_DataDimRef Nmr_ExpDimRef_FindFirstDataDimRef_keyval4(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.derivedTo

ExpDimRefMappings for 
ExpDimRefs derived from current ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ExpDimRefMapping Nmr_ExpDimRef_FindFirstDerivedTo(Nmr_ExpDimRef self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.derivedTo

ExpDimRefMappings for 
ExpDimRefs derived from current ExpDimRef
  @param  Nmr_ExpDimRef self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ExpDimRefMapping Nmr_ExpDimRef_FindFirstDerivedTo_keyval0(Nmr_ExpDimRef self);

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.derivedTo

ExpDimRefMappings for 
ExpDimRefs derived from current ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ExpDimRefMapping Nmr_ExpDimRef_FindFirstDerivedTo_keyval1(Nmr_ExpDimRef self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.derivedTo

ExpDimRefMappings for 
ExpDimRefs derived from current ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ExpDimRefMapping Nmr_ExpDimRef_FindFirstDerivedTo_keyval2(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.derivedTo

ExpDimRefMappings for 
ExpDimRefs derived from current ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ExpDimRefMapping Nmr_ExpDimRef_FindFirstDerivedTo_keyval3(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.derivedTo

ExpDimRefMappings for 
ExpDimRefs derived from current ExpDimRef
  @param  Nmr_ExpDimRef self
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
extern Nmr_ExpDimRefMapping Nmr_ExpDimRef_FindFirstDerivedTo_keyval4(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.dimensionScalings

ScalingFactors 
that apply to ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DimensionScaling Nmr_ExpDimRef_FindFirstDimensionScaling(Nmr_ExpDimRef self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.dimensionScalings

ScalingFactors 
that apply to ExpDimRef
  @param  Nmr_ExpDimRef self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DimensionScaling Nmr_ExpDimRef_FindFirstDimensionScaling_keyval0(Nmr_ExpDimRef self);

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.dimensionScalings

ScalingFactors 
that apply to ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DimensionScaling Nmr_ExpDimRef_FindFirstDimensionScaling_keyval1(Nmr_ExpDimRef self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.dimensionScalings

ScalingFactors 
that apply to ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DimensionScaling Nmr_ExpDimRef_FindFirstDimensionScaling_keyval2(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.dimensionScalings

ScalingFactors 
that apply to ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DimensionScaling Nmr_ExpDimRef_FindFirstDimensionScaling_keyval3(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.dimensionScalings

ScalingFactors 
that apply to ExpDimRef
  @param  Nmr_ExpDimRef self
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
extern Nmr_DimensionScaling Nmr_ExpDimRef_FindFirstDimensionScaling_keyval4(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.expDimRefMappings

child link to 
class ExpDimRefMapping
  @param  Nmr_ExpDimRef self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ExpDimRefMapping Nmr_ExpDimRef_FindFirstExpDimRefMapping(Nmr_ExpDimRef self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.expDimRefMappings

child link to 
class ExpDimRefMapping
  @param  Nmr_ExpDimRef self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ExpDimRefMapping Nmr_ExpDimRef_FindFirstExpDimRefMapping_keyval0(Nmr_ExpDimRef self);

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.expDimRefMappings

child link to 
class ExpDimRefMapping
  @param  Nmr_ExpDimRef self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ExpDimRefMapping Nmr_ExpDimRef_FindFirstExpDimRefMapping_keyval1(Nmr_ExpDimRef self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.expDimRefMappings

child link to 
class ExpDimRefMapping
  @param  Nmr_ExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ExpDimRefMapping Nmr_ExpDimRef_FindFirstExpDimRefMapping_keyval2(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.expDimRefMappings

child link to 
class ExpDimRefMapping
  @param  Nmr_ExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ExpDimRefMapping Nmr_ExpDimRef_FindFirstExpDimRefMapping_keyval3(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.expDimRefMappings

child link to 
class ExpDimRefMapping
  @param  Nmr_ExpDimRef self
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
extern Nmr_ExpDimRefMapping Nmr_ExpDimRef_FindFirstExpDimRefMapping_keyval4(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.expTransfers

Magentisation 
transfers involving ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ExpTransfer Nmr_ExpDimRef_FindFirstExpTransfer(Nmr_ExpDimRef self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.expTransfers

Magentisation 
transfers involving ExpDimRef
  @param  Nmr_ExpDimRef self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ExpTransfer Nmr_ExpDimRef_FindFirstExpTransfer_keyval0(Nmr_ExpDimRef self);

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.expTransfers

Magentisation 
transfers involving ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ExpTransfer Nmr_ExpDimRef_FindFirstExpTransfer_keyval1(Nmr_ExpDimRef self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.expTransfers

Magentisation 
transfers involving ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ExpTransfer Nmr_ExpDimRef_FindFirstExpTransfer_keyval2(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.expTransfers

Magentisation 
transfers involving ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ExpTransfer Nmr_ExpDimRef_FindFirstExpTransfer_keyval3(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.expTransfers

Magentisation 
transfers involving ExpDimRef
  @param  Nmr_ExpDimRef self
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
extern Nmr_ExpTransfer Nmr_ExpDimRef_FindFirstExpTransfer_keyval4(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.isotopes

Isotopes corresponding to 
the ExpDimRef. In the most common case there will be only one Isotope - 
multiple Isotopes can appear where the ExpDimRef describes e.g. coupling 
constants or multiple quantum coherence.
  @param  Nmr_ExpDimRef self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Chel_Isotope Nmr_ExpDimRef_FindFirstIsotope(Nmr_ExpDimRef self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.isotopes

Isotopes corresponding to 
the ExpDimRef. In the most common case there will be only one Isotope - 
multiple Isotopes can appear where the ExpDimRef describes e.g. coupling 
constants or multiple quantum coherence.
  @param  Nmr_ExpDimRef self
  @returns  the first value that satisfies the conditions 
**/
extern Chel_Isotope Nmr_ExpDimRef_FindFirstIsotope_keyval0(Nmr_ExpDimRef self);

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.isotopes

Isotopes corresponding to 
the ExpDimRef. In the most common case there will be only one Isotope - 
multiple Isotopes can appear where the ExpDimRef describes e.g. coupling 
constants or multiple quantum coherence.
  @param  Nmr_ExpDimRef self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Chel_Isotope Nmr_ExpDimRef_FindFirstIsotope_keyval1(Nmr_ExpDimRef self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.isotopes

Isotopes corresponding to 
the ExpDimRef. In the most common case there will be only one Isotope - 
multiple Isotopes can appear where the ExpDimRef describes e.g. coupling 
constants or multiple quantum coherence.
  @param  Nmr_ExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Chel_Isotope Nmr_ExpDimRef_FindFirstIsotope_keyval2(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.isotopes

Isotopes corresponding to 
the ExpDimRef. In the most common case there will be only one Isotope - 
multiple Isotopes can appear where the ExpDimRef describes e.g. coupling 
constants or multiple quantum coherence.
  @param  Nmr_ExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Chel_Isotope Nmr_ExpDimRef_FindFirstIsotope_keyval3(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.ExpDimRef.isotopes

Isotopes corresponding to 
the ExpDimRef. In the most common case there will be only one Isotope - 
multiple Isotopes can appear where the ExpDimRef describes e.g. coupling 
constants or multiple quantum coherence.
  @param  Nmr_ExpDimRef self
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
extern Chel_Isotope Nmr_ExpDimRef_FindFirstIsotope_keyval4(Nmr_ExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.Nmr.ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Nmr_ExpDimRef_Get(Nmr_ExpDimRef self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
extern Acco_AccessObject Nmr_ExpDimRef_GetAccess(Nmr_ExpDimRef self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
extern ApiList Nmr_ExpDimRef_GetApplicationData(Nmr_ExpDimRef self);

/**
  Get for ccp.nmr.Nmr.ExpDimRef.baseFrequency

The nominal base frequency 
in MHz for the measured frequency. Instrument parameter. The actual 
carrier frequency (sf) can be seen as the sum of a base frequency (this 
attribute) and a relative offset (O1 in Bruker terms - not stored in 
this data model but equal to (sf minus baseFrequency) in Hz). Not 
relevant in all cases (see sf attribute). Should be left blank where not 
relevant, but set equal to sf where no separate baseFrequency is known.
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
extern ApiFloat Nmr_ExpDimRef_GetBaseFrequency(Nmr_ExpDimRef self);

/**
  GetByKey for ccp.nmr.Nmr.ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Nmr_ExpDimRef Nmr_ExpDimRef_GetByKey(Nmr_ExpDimRef self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
extern ApiString Nmr_ExpDimRef_GetClassName(Nmr_ExpDimRef self);

/**
  Get for ccp.nmr.Nmr.ExpDimRef.constantTimePeriod

Total constant-time 
period available; the period over which the relevant coupling constants 
are active rather than the maximum value of the increment (which can be 
calculated from other data). Alternative formulation: the time between 
90 deg pulses, ignoring 180 deg pulses (normal, shaped, or composite). 
Note that this parameter serves for nomal NMR experiments, but may be 
irrelevant in some other cases.
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
extern ApiFloat Nmr_ExpDimRef_GetConstantTimePeriod(Nmr_ExpDimRef self);

/**
  Get for ccp.nmr.Nmr.ExpDimRef.dataDimRefs

DatDimRefs corresponding to 
ExpDimRef
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
extern ApiSet Nmr_ExpDimRef_GetDataDimRefs(Nmr_ExpDimRef self);

/**
  Get for ccp.nmr.Nmr.ExpDimRef.derivedTo

ExpDimRefMappings for 
ExpDimRefs derived from current ExpDimRef
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
extern ApiSet Nmr_ExpDimRef_GetDerivedTo(Nmr_ExpDimRef self);

/**
  Get for ccp.nmr.Nmr.ExpDimRef.dimensionScalings

ScalingFactors that 
apply to ExpDimRef
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
extern ApiSet Nmr_ExpDimRef_GetDimensionScalings(Nmr_ExpDimRef self);

/**
  Get for ccp.nmr.Nmr.ExpDimRef.displayName

Short string e.g. 'H1',' H', 
'CA', 'Ca-1' used for display annotation, for naming decomposition 
shapes, etc. Should be unique within an experiment, but it is up to the 
user to enforce the constraint
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
extern ApiString Nmr_ExpDimRef_GetDisplayName(Nmr_ExpDimRef self);

/**
  Get for ccp.nmr.Nmr.ExpDimRef.expDim

parent link
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
extern Nmr_ExpDim Nmr_ExpDimRef_GetExpDim(Nmr_ExpDimRef self);

/**
  Get for ccp.nmr.Nmr.ExpDimRef.expDimRefMappings

child link to class 
ExpDimRefMapping
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
extern ApiSet Nmr_ExpDimRef_GetExpDimRefMappings(Nmr_ExpDimRef self);

/**
  Get for ccp.nmr.Nmr.ExpDimRef.expTransfers

Magentisation transfers 
involving ExpDimRef
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
extern ApiSet Nmr_ExpDimRef_GetExpTransfers(Nmr_ExpDimRef self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
extern ApiList Nmr_ExpDimRef_GetFieldNames(Nmr_ExpDimRef self);

/**
  GetFullKey for ccp.nmr.Nmr.ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Nmr_ExpDimRef_GetFullKey(Nmr_ExpDimRef self, ApiBoolean useGuid);

/**
  Get for ccp.nmr.Nmr.ExpDimRef.groupingNumber

Divides ExpDimRefs 
belonging to a given ExpDim into mutually exclusive groupings. If a 
PeakDim is connected to several ExpDimRefs (via DataDimRefs and possible 
PeakDimComponents), the ExpDimRefs must all have teh same 
groupingNumber. Only wexperiments that have different kinds of peaks on 
the same axis will use more than one groupingNumber. The only practical 
example seems to be H[{C|N}]_H.NOESY - a 13C HSQC-NOESY and 15N 
HSQC-NOESY acquired together in a single dataset.
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
extern ApiInteger Nmr_ExpDimRef_GetGroupingNumber(Nmr_ExpDimRef self);

/**
  getter for derived attribute hasAliasedFreq
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
extern ApiBoolean Nmr_ExpDimRef_GetHasAliasedFreq(Nmr_ExpDimRef self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
extern ApiBoolean Nmr_ExpDimRef_GetInConstructor(Nmr_ExpDimRef self);

/**
  Get for ccp.nmr.Nmr.ExpDimRef.isAxisReversed

Set to true if the highest 
value on the axis corresponds to the lowest point number, and to false 
otherwise. Most real cases will have isAxisReversed true, as this is how 
ppm axes behave.
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
extern ApiBoolean Nmr_ExpDimRef_GetIsAxisReversed(Nmr_ExpDimRef self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
extern ApiBoolean Nmr_ExpDimRef_GetIsDeleted(Nmr_ExpDimRef self);

/**
  Get for ccp.nmr.Nmr.ExpDimRef.isFolded

Boolean defining whether the 
dimension is folded in the true meaning of the word (default is False, 
which is the case for most experiments in 2003). All regularly sampled 
experiments are in principle aliased (which is a different question).
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
extern ApiBoolean Nmr_ExpDimRef_GetIsFolded(Nmr_ExpDimRef self);

/**
  Get for ccp.nmr.Nmr.ExpDimRef.isotopeCodes

Isotope identification 
strings for isotopes. NB there can be several isotopes for e.g. 
J-coupling or multiple quantum coherence.
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
extern ApiList Nmr_ExpDimRef_GetIsotopeCodes(Nmr_ExpDimRef self);

/**
  get function for derived attribute Isotopes. NB the same isotope can 
appear multiple times in the result.
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
extern ApiList Nmr_ExpDimRef_GetIsotopes(Nmr_ExpDimRef self);

/**
  GetLocalKey for ccp.nmr.Nmr.ExpDimRef
  @param  Nmr_ExpDimRef self
  @returns  Local object key
**/
extern ApiObject Nmr_ExpDimRef_GetLocalKey(Nmr_ExpDimRef self);

/**
  Get for ccp.nmr.Nmr.ExpDimRef.maxAliasedFreq

Describes aliasing - 
maximum value actually possible for the (unaliased) frequency in units 
of ExpDimRef.unit. Note that all Fourier transformed data are by 
definition aliased - the difference lies in which frequency regions may 
contain signals. This attribute serves for normal NMR spectra but may be 
irrelevant in some other cases.
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
extern ApiFloat Nmr_ExpDimRef_GetMaxAliasedFreq(Nmr_ExpDimRef self);

/**
  Get for ccp.nmr.Nmr.ExpDimRef.measurementType

String enum for 
measurement type of the referenced parameter in this dimension. 
Describes the type of measurementList that would hold values measured on 
this axis. enum would include 'None' for e.g. temperature axes.
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
extern ApiString Nmr_ExpDimRef_GetMeasurementType(Nmr_ExpDimRef self);

/**
  Get for ccp.nmr.Nmr.ExpDimRef.minAliasedFreq

Describes aliasing - 
minimum value actually possible for the (unaliased) frequency in units 
of ExpDimRef.unit. Note that all Fourier transformed data are by 
definition aliased - the difference lies in which frequency regions may 
contain signals. This attribute serves for normal NMR spectra but may be 
irrelevant in some other cases.
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
extern ApiFloat Nmr_ExpDimRef_GetMinAliasedFreq(Nmr_ExpDimRef self);

/**
  Get for ccp.nmr.Nmr.ExpDimRef.name

Name of the measurement being 
measured by the ExpDimRef. Equivalent to the 
NmrExpPrototype.AtomSite.name, but does not have to be the same. Serves 
for user-specific names.
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
extern ApiString Nmr_ExpDimRef_GetName(Nmr_ExpDimRef self);

/**
  Get for ccp.nmr.Nmr.ExpDimRef.nominalRefValue

Reference value in 
ExpDimRef.unit for carrier frequency (or 0.0 for splittings), for use in 
DataDimRef. E.g. 4.7ppm for protons in water. This value describes the 
nominal referencing; actual referencing used may include various 
correction factors, internal referencing etc. and is set in the 
individual DataDimRef. This attribute serves for normal NMR spectra but 
may be irrelevant in other cases.
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
extern ApiFloat Nmr_ExpDimRef_GetNominalRefValue(Nmr_ExpDimRef self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
extern ApiString Nmr_ExpDimRef_GetPackageName(Nmr_ExpDimRef self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
extern ApiString Nmr_ExpDimRef_GetPackageShortName(Nmr_ExpDimRef self);

/**
  Get for ccp.nmr.Nmr.ExpDimRef.parent

link to parent object - synonym 
for expDim
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
extern Nmr_ExpDim Nmr_ExpDimRef_GetParent(Nmr_ExpDimRef self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
extern ApiString Nmr_ExpDimRef_GetQualifiedName(Nmr_ExpDimRef self);

/**
  Get for ccp.nmr.Nmr.ExpDimRef.refExpDimRef

Corresponding ExpDimRef for 
RefExperiment
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
extern Nmrx_RefExpDimRef Nmr_ExpDimRef_GetRefExpDimRef(Nmr_ExpDimRef self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
extern Impl_MemopsRoot Nmr_ExpDimRef_GetRoot(Nmr_ExpDimRef self);

/**
  Get for ccp.nmr.Nmr.ExpDimRef.serial

Serial number of object. Serves as 
object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
extern ApiInteger Nmr_ExpDimRef_GetSerial(Nmr_ExpDimRef self);

/**
  Get for ccp.nmr.Nmr.ExpDimRef.sf

Absolute frequency at carrier 
frequency (or at measured frequency 0.0 for splittings) of the spectrum 
in MHz (or dimensionless - see below). Used for conversion between Hz 
and ppm, and for scaling with the magnetic field. By definition 
DataDimRef.valuePerPoint = FreqDataDim.valuePerPoint/ExpDimRef.sf. This 
is also the case for e.g. coupling constant dimensions, where sf then 
becomes a dimensionless scaling factor.
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
extern ApiFloat Nmr_ExpDimRef_GetSf(Nmr_ExpDimRef self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
extern Impl_TopObject Nmr_ExpDimRef_GetTopObject(Nmr_ExpDimRef self);

/**
  Get for ccp.nmr.Nmr.ExpDimRef.unit

Unit used for value in DataDimRefs 
(if any). As DataDimRefs are defined only for FreqDataDims this 
attribute is only relevant for dimensions eventually transformed into 
FreqDataDims, essentially dimensions that are eventually Fourier 
Transformed or similar. Unit will be 'ppm' for most standard NMR 
experiments.
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
extern ApiString Nmr_ExpDimRef_GetUnit(Nmr_ExpDimRef self);

/**
  Get for ccp.nmr.Nmr.ExpDimRef.variableIncrFraction

Describes the 
fraction of the incrementation done by actually incrementing  delays 
rather than by constant time. Defined as (actual time increment)/(total 
increment). Is 0.0 for a pure constant-time experiment and 1.0 for a 
pure variable-time experiment. This parameter serves for normal NMR 
experiments but may be irrelevant in some other cases.
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
extern ApiFloat Nmr_ExpDimRef_GetVariableIncrFraction(Nmr_ExpDimRef self);

/**
  Constructor for ccp.nmr.Nmr.ExpDimRef
  @param  Nmr_ExpDim parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmr_ExpDimRef Nmr_ExpDimRef_Init(Nmr_ExpDim parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.Nmr.ExpDimRef
  @param  Nmr_ExpDim parent
  @param  float sf
  @returns  the new object
**/
extern Nmr_ExpDimRef Nmr_ExpDimRef_Init_reqd(Nmr_ExpDim parent, float sf);

/**
  Factory function to create ccp.nmr.Nmr.ExpDimRefMapping
  @param  Nmr_ExpDimRef self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmr_ExpDimRefMapping Nmr_ExpDimRef_NewExpDimRefMapping(Nmr_ExpDimRef self, ApiMap attrlinks);

/**
  Factory function to create ccp.nmr.Nmr.ExpDimRefMapping
  @param  Nmr_ExpDimRef self
  @param  Nmr_ExpDimRef derivedFrom
  @returns  the new object
**/
extern Nmr_ExpDimRefMapping Nmr_ExpDimRef_NewExpDimRefMapping_reqd(Nmr_ExpDimRef self, Nmr_ExpDimRef derivedFrom);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpDimRef self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_ExpDimRef_RemoveApplicationData(Nmr_ExpDimRef self, Impl_ApplicationData value);

/**
  Remove for ccp.nmr.Nmr.ExpDimRef.isotopeCodes

Isotope identification 
strings for isotopes. NB there can be several isotopes for e.g. 
J-coupling or multiple quantum coherence.
  @param  Nmr_ExpDimRef self
  @param  ApiString value
**/
extern void *Nmr_ExpDimRef_RemoveIsotopeCode(Nmr_ExpDimRef self, ApiString value);

/**
  SetAttr for ccp.nmr.Nmr.ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Nmr_ExpDimRef_Set(Nmr_ExpDimRef self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_ExpDimRef self
  @param  Acco_AccessObject value
**/
extern void *Nmr_ExpDimRef_SetAccess(Nmr_ExpDimRef self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpDimRef self
  @param  ApiList values
**/
extern void *Nmr_ExpDimRef_SetApplicationData(Nmr_ExpDimRef self, ApiList values);

/**
  Set for ccp.nmr.Nmr.ExpDimRef.baseFrequency

The nominal base frequency 
in MHz for the measured frequency. Instrument parameter. The actual 
carrier frequency (sf) can be seen as the sum of a base frequency (this 
attribute) and a relative offset (O1 in Bruker terms - not stored in 
this data model but equal to (sf minus baseFrequency) in Hz). Not 
relevant in all cases (see sf attribute). Should be left blank where not 
relevant, but set equal to sf where no separate baseFrequency is known.
  @param  Nmr_ExpDimRef self
  @param  ApiFloat value
**/
extern void *Nmr_ExpDimRef_SetBaseFrequency(Nmr_ExpDimRef self, ApiFloat value);

/**
  Set for ccp.nmr.Nmr.ExpDimRef.constantTimePeriod

Total constant-time 
period available; the period over which the relevant coupling constants 
are active rather than the maximum value of the increment (which can be 
calculated from other data). Alternative formulation: the time between 
90 deg pulses, ignoring 180 deg pulses (normal, shaped, or composite). 
Note that this parameter serves for nomal NMR experiments, but may be 
irrelevant in some other cases.
  @param  Nmr_ExpDimRef self
  @param  ApiFloat value
**/
extern void *Nmr_ExpDimRef_SetConstantTimePeriod(Nmr_ExpDimRef self, ApiFloat value);

/**
  Set for ccp.nmr.Nmr.ExpDimRef.dataDimRefs

DatDimRefs corresponding to 
ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  ApiSet values
**/
extern void *Nmr_ExpDimRef_SetDataDimRefs(Nmr_ExpDimRef self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.ExpDimRef.derivedTo

ExpDimRefMappings for 
ExpDimRefs derived from current ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  ApiSet values
**/
extern void *Nmr_ExpDimRef_SetDerivedTo(Nmr_ExpDimRef self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.ExpDimRef.dimensionScalings

ScalingFactors that 
apply to ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  ApiSet values
**/
extern void *Nmr_ExpDimRef_SetDimensionScalings(Nmr_ExpDimRef self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.ExpDimRef.displayName

Short string e.g. 'H1',' H', 
'CA', 'Ca-1' used for display annotation, for naming decomposition 
shapes, etc. Should be unique within an experiment, but it is up to the 
user to enforce the constraint
  @param  Nmr_ExpDimRef self
  @param  ApiString value
**/
extern void *Nmr_ExpDimRef_SetDisplayName(Nmr_ExpDimRef self, ApiString value);

/**
  Set for ccp.nmr.Nmr.ExpDimRef.expTransfers

Magentisation transfers 
involving ExpDimRef
  @param  Nmr_ExpDimRef self
  @param  ApiSet values
**/
extern void *Nmr_ExpDimRef_SetExpTransfers(Nmr_ExpDimRef self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.ExpDimRef.groupingNumber

Divides ExpDimRefs 
belonging to a given ExpDim into mutually exclusive groupings. If a 
PeakDim is connected to several ExpDimRefs (via DataDimRefs and possible 
PeakDimComponents), the ExpDimRefs must all have teh same 
groupingNumber. Only wexperiments that have different kinds of peaks on 
the same axis will use more than one groupingNumber. The only practical 
example seems to be H[{C|N}]_H.NOESY - a 13C HSQC-NOESY and 15N 
HSQC-NOESY acquired together in a single dataset.
  @param  Nmr_ExpDimRef self
  @param  ApiInteger value
**/
extern void *Nmr_ExpDimRef_SetGroupingNumber(Nmr_ExpDimRef self, ApiInteger value);

/**
  Set for ccp.nmr.Nmr.ExpDimRef.isAxisReversed

Set to true if the highest 
value on the axis corresponds to the lowest point number, and to false 
otherwise. Most real cases will have isAxisReversed true, as this is how 
ppm axes behave.
  @param  Nmr_ExpDimRef self
  @param  ApiBoolean value
**/
extern void *Nmr_ExpDimRef_SetIsAxisReversed(Nmr_ExpDimRef self, ApiBoolean value);

/**
  Set for ccp.nmr.Nmr.ExpDimRef.isFolded

Boolean defining whether the 
dimension is folded in the true meaning of the word (default is False, 
which is the case for most experiments in 2003). All regularly sampled 
experiments are in principle aliased (which is a different question).
  @param  Nmr_ExpDimRef self
  @param  ApiBoolean value
**/
extern void *Nmr_ExpDimRef_SetIsFolded(Nmr_ExpDimRef self, ApiBoolean value);

/**
  Set for ccp.nmr.Nmr.ExpDimRef.isotopeCodes

Isotope identification 
strings for isotopes. NB there can be several isotopes for e.g. 
J-coupling or multiple quantum coherence.
  @param  Nmr_ExpDimRef self
  @param  ApiList values
**/
extern void *Nmr_ExpDimRef_SetIsotopeCodes(Nmr_ExpDimRef self, ApiList values);

/**
  Set for ccp.nmr.Nmr.ExpDimRef.maxAliasedFreq

Describes aliasing - 
maximum value actually possible for the (unaliased) frequency in units 
of ExpDimRef.unit. Note that all Fourier transformed data are by 
definition aliased - the difference lies in which frequency regions may 
contain signals. This attribute serves for normal NMR spectra but may be 
irrelevant in some other cases.
  @param  Nmr_ExpDimRef self
  @param  ApiFloat value
**/
extern void *Nmr_ExpDimRef_SetMaxAliasedFreq(Nmr_ExpDimRef self, ApiFloat value);

/**
  Set for ccp.nmr.Nmr.ExpDimRef.measurementType

String enum for 
measurement type of the referenced parameter in this dimension. 
Describes the type of measurementList that would hold values measured on 
this axis. enum would include 'None' for e.g. temperature axes.
  @param  Nmr_ExpDimRef self
  @param  ApiString value
**/
extern void *Nmr_ExpDimRef_SetMeasurementType(Nmr_ExpDimRef self, ApiString value);

/**
  Set for ccp.nmr.Nmr.ExpDimRef.minAliasedFreq

Describes aliasing - 
minimum value actually possible for the (unaliased) frequency in units 
of ExpDimRef.unit. Note that all Fourier transformed data are by 
definition aliased - the difference lies in which frequency regions may 
contain signals. This attribute serves for normal NMR spectra but may be 
irrelevant in some other cases.
  @param  Nmr_ExpDimRef self
  @param  ApiFloat value
**/
extern void *Nmr_ExpDimRef_SetMinAliasedFreq(Nmr_ExpDimRef self, ApiFloat value);

/**
  Set for ccp.nmr.Nmr.ExpDimRef.name

Name of the measurement being 
measured by the ExpDimRef. Equivalent to the 
NmrExpPrototype.AtomSite.name, but does not have to be the same. Serves 
for user-specific names.
  @param  Nmr_ExpDimRef self
  @param  ApiString value
**/
extern void *Nmr_ExpDimRef_SetName(Nmr_ExpDimRef self, ApiString value);

/**
  Set for ccp.nmr.Nmr.ExpDimRef.nominalRefValue

Reference value in 
ExpDimRef.unit for carrier frequency (or 0.0 for splittings), for use in 
DataDimRef. E.g. 4.7ppm for protons in water. This value describes the 
nominal referencing; actual referencing used may include various 
correction factors, internal referencing etc. and is set in the 
individual DataDimRef. This attribute serves for normal NMR spectra but 
may be irrelevant in other cases.
  @param  Nmr_ExpDimRef self
  @param  ApiFloat value
**/
extern void *Nmr_ExpDimRef_SetNominalRefValue(Nmr_ExpDimRef self, ApiFloat value);

/**
  Set for ccp.nmr.Nmr.ExpDimRef.refExpDimRef

Corresponding ExpDimRef for 
RefExperiment
  @param  Nmr_ExpDimRef self
  @param  Nmrx_RefExpDimRef value
**/
extern void *Nmr_ExpDimRef_SetRefExpDimRef(Nmr_ExpDimRef self, Nmrx_RefExpDimRef value);

/**
  Set for ccp.nmr.Nmr.ExpDimRef.serial

Serial number of object. Serves as 
object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Nmr_ExpDimRef self
  @param  ApiInteger value
**/
extern void *Nmr_ExpDimRef_SetSerial(Nmr_ExpDimRef self, ApiInteger value);

/**
  Set for ccp.nmr.Nmr.ExpDimRef.sf

Absolute frequency at carrier 
frequency (or at measured frequency 0.0 for splittings) of the spectrum 
in MHz (or dimensionless - see below). Used for conversion between Hz 
and ppm, and for scaling with the magnetic field. By definition 
DataDimRef.valuePerPoint = FreqDataDim.valuePerPoint/ExpDimRef.sf. This 
is also the case for e.g. coupling constant dimensions, where sf then 
becomes a dimensionless scaling factor.
  @param  Nmr_ExpDimRef self
  @param  ApiFloat value
**/
extern void *Nmr_ExpDimRef_SetSf(Nmr_ExpDimRef self, ApiFloat value);

/**
  Set for ccp.nmr.Nmr.ExpDimRef.unit

Unit used for value in DataDimRefs 
(if any). As DataDimRefs are defined only for FreqDataDims this 
attribute is only relevant for dimensions eventually transformed into 
FreqDataDims, essentially dimensions that are eventually Fourier 
Transformed or similar. Unit will be 'ppm' for most standard NMR 
experiments.
  @param  Nmr_ExpDimRef self
  @param  ApiString value
**/
extern void *Nmr_ExpDimRef_SetUnit(Nmr_ExpDimRef self, ApiString value);

/**
  Set for ccp.nmr.Nmr.ExpDimRef.variableIncrFraction

Describes the 
fraction of the incrementation done by actually incrementing  delays 
rather than by constant time. Defined as (actual time increment)/(total 
increment). Is 0.0 for a pure constant-time experiment and 1.0 for a 
pure variable-time experiment. This parameter serves for normal NMR 
experiments but may be irrelevant in some other cases.
  @param  Nmr_ExpDimRef self
  @param  ApiFloat value
**/
extern void *Nmr_ExpDimRef_SetVariableIncrFraction(Nmr_ExpDimRef self, ApiFloat value);

/**
  Sorted for ccp.nmr.Nmr.ExpDimRef.dataDimRefs

DatDimRefs corresponding 
to ExpDimRef
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
extern ApiList Nmr_ExpDimRef_SortedDataDimRefs(Nmr_ExpDimRef self);

/**
  Sorted for ccp.nmr.Nmr.ExpDimRef.derivedTo

ExpDimRefMappings for 
ExpDimRefs derived from current ExpDimRef
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
extern ApiList Nmr_ExpDimRef_SortedDerivedTo(Nmr_ExpDimRef self);

/**
  Sorted for ccp.nmr.Nmr.ExpDimRef.dimensionScalings

ScalingFactors that 
apply to ExpDimRef
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
extern ApiList Nmr_ExpDimRef_SortedDimensionScalings(Nmr_ExpDimRef self);

/**
  Sorted for ccp.nmr.Nmr.ExpDimRef.expDimRefMappings

child link to class 
ExpDimRefMapping
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
extern ApiList Nmr_ExpDimRef_SortedExpDimRefMappings(Nmr_ExpDimRef self);

/**
  Sorted for ccp.nmr.Nmr.ExpDimRef.expTransfers

Magentisation transfers 
involving ExpDimRef
  @param  Nmr_ExpDimRef self
  @returns   the result
**/
extern ApiList Nmr_ExpDimRef_SortedExpTransfers(Nmr_ExpDimRef self);

#endif /* __incl__ccp_api_nmr_Nmr_ExpDimRef_h__ */
