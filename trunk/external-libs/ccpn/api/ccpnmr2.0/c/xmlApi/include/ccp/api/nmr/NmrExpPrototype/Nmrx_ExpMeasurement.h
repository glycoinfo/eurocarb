
#ifndef __incl__ccp_api_nmr_NmrExpPrototype_ExpMeasurement_h__
#define __incl__ccp_api_nmr_NmrExpPrototype_ExpMeasurement_h__

#include "ccp.h"

/*
  Property being measured on a dimension of a multidimensional NMR experiment. Most common are shifts, but coupling constants, multi-quantum magnetisation, time (for relaxation time measurements) and others are possible.
*/

/* package ccp.api.nmr.NmrExpPrototype */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpMeasurement self
  @param  Impl_ApplicationData value
**/
extern void *Nmrx_ExpMeasurement_AddApplicationData(Nmrx_ExpMeasurement self, Impl_ApplicationData value);

/**
  Add for ccp.nmr.NmrExpPrototype.ExpMeasurement.atomSites

AtomSites 
defining Measurement. For shifts a single one, defining which shift is 
being measured. For coupling constants a pair defining the sites 
coupled. For multiple quantum coherences the number apropriate to define 
the MQ coherence. The order of atomSites in the link is significant, as 
it corresponds to the order of Measurement.atomSiteWeights (if set).
  @param  Nmrx_ExpMeasurement self
  @param  Nmrx_AtomSite value
**/
extern void *Nmrx_ExpMeasurement_AddAtomSite(Nmrx_ExpMeasurement self, Nmrx_AtomSite value);

/**
  Add for ccp.nmr.NmrExpPrototype.ExpMeasurement.atomSiteWeights

Weight 
of contribution from atomSites to measurement being made, given in same 
order as the atomSites. Typically +/- 1. Serves to define 
multiple-quantum magnetisation, distinguishing between e.g. three-spin 
triple-quantum magnetisation and three-spin single-quantum 
magnetisation. Has no defined meaning in other cases. If both 
atomSiteWeights and atomSites are set, their length must be the same.
  @param  Nmrx_ExpMeasurement self
  @param  ApiFloat value
**/
extern void *Nmrx_ExpMeasurement_AddAtomSiteWeight(Nmrx_ExpMeasurement self, ApiFloat value);

/**
  CheckAllValid for ccp.nmr.NmrExpPrototype.ExpMeasurement
  @param  Nmrx_ExpMeasurement self
  @param  ApiBoolean complete
**/
extern void *Nmrx_ExpMeasurement_CheckAllValid(Nmrx_ExpMeasurement self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.NmrExpPrototype.ExpMeasurement
  @param  Nmrx_ExpMeasurement self
  @param  ApiBoolean complete
**/
extern void *Nmrx_ExpMeasurement_CheckValid(Nmrx_ExpMeasurement self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpMeasurement self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrx_ExpMeasurement_FindAllApplicationData(Nmrx_ExpMeasurement self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpMeasurement self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrx_ExpMeasurement_FindAllApplicationData_keyval0(Nmrx_ExpMeasurement self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpMeasurement self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrx_ExpMeasurement_FindAllApplicationData_keyval1(Nmrx_ExpMeasurement self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpMeasurement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrx_ExpMeasurement_FindAllApplicationData_keyval2(Nmrx_ExpMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpMeasurement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrx_ExpMeasurement_FindAllApplicationData_keyval3(Nmrx_ExpMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpMeasurement self
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
extern ApiList Nmrx_ExpMeasurement_FindAllApplicationData_keyval4(Nmrx_ExpMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpMeasurement.atomSites

AtomSites 
defining Measurement. For shifts a single one, defining which shift is 
being measured. For coupling constants a pair defining the sites 
coupled. For multiple quantum coherences the number apropriate to define 
the MQ coherence. The order of atomSites in the link is significant, as 
it corresponds to the order of Measurement.atomSiteWeights (if set).
  @param  Nmrx_ExpMeasurement self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrx_ExpMeasurement_FindAllAtomSites(Nmrx_ExpMeasurement self, ApiMap conditions);

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpMeasurement.atomSites

AtomSites 
defining Measurement. For shifts a single one, defining which shift is 
being measured. For coupling constants a pair defining the sites 
coupled. For multiple quantum coherences the number apropriate to define 
the MQ coherence. The order of atomSites in the link is significant, as 
it corresponds to the order of Measurement.atomSiteWeights (if set).
  @param  Nmrx_ExpMeasurement self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrx_ExpMeasurement_FindAllAtomSites_keyval0(Nmrx_ExpMeasurement self);

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpMeasurement.atomSites

AtomSites 
defining Measurement. For shifts a single one, defining which shift is 
being measured. For coupling constants a pair defining the sites 
coupled. For multiple quantum coherences the number apropriate to define 
the MQ coherence. The order of atomSites in the link is significant, as 
it corresponds to the order of Measurement.atomSiteWeights (if set).
  @param  Nmrx_ExpMeasurement self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrx_ExpMeasurement_FindAllAtomSites_keyval1(Nmrx_ExpMeasurement self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpMeasurement.atomSites

AtomSites 
defining Measurement. For shifts a single one, defining which shift is 
being measured. For coupling constants a pair defining the sites 
coupled. For multiple quantum coherences the number apropriate to define 
the MQ coherence. The order of atomSites in the link is significant, as 
it corresponds to the order of Measurement.atomSiteWeights (if set).
  @param  Nmrx_ExpMeasurement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrx_ExpMeasurement_FindAllAtomSites_keyval2(Nmrx_ExpMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpMeasurement.atomSites

AtomSites 
defining Measurement. For shifts a single one, defining which shift is 
being measured. For coupling constants a pair defining the sites 
coupled. For multiple quantum coherences the number apropriate to define 
the MQ coherence. The order of atomSites in the link is significant, as 
it corresponds to the order of Measurement.atomSiteWeights (if set).
  @param  Nmrx_ExpMeasurement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrx_ExpMeasurement_FindAllAtomSites_keyval3(Nmrx_ExpMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpMeasurement.atomSites

AtomSites 
defining Measurement. For shifts a single one, defining which shift is 
being measured. For coupling constants a pair defining the sites 
coupled. For multiple quantum coherences the number apropriate to define 
the MQ coherence. The order of atomSites in the link is significant, as 
it corresponds to the order of Measurement.atomSiteWeights (if set).
  @param  Nmrx_ExpMeasurement self
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
extern ApiList Nmrx_ExpMeasurement_FindAllAtomSites_keyval4(Nmrx_ExpMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpMeasurement.expGraphs

ExpGraphs 
where ExpMeasurement appears
  @param  Nmrx_ExpMeasurement self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrx_ExpMeasurement_FindAllExpGraphs(Nmrx_ExpMeasurement self, ApiMap conditions);

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpMeasurement.expGraphs

ExpGraphs 
where ExpMeasurement appears
  @param  Nmrx_ExpMeasurement self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrx_ExpMeasurement_FindAllExpGraphs_keyval0(Nmrx_ExpMeasurement self);

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpMeasurement.expGraphs

ExpGraphs 
where ExpMeasurement appears
  @param  Nmrx_ExpMeasurement self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrx_ExpMeasurement_FindAllExpGraphs_keyval1(Nmrx_ExpMeasurement self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpMeasurement.expGraphs

ExpGraphs 
where ExpMeasurement appears
  @param  Nmrx_ExpMeasurement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrx_ExpMeasurement_FindAllExpGraphs_keyval2(Nmrx_ExpMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpMeasurement.expGraphs

ExpGraphs 
where ExpMeasurement appears
  @param  Nmrx_ExpMeasurement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrx_ExpMeasurement_FindAllExpGraphs_keyval3(Nmrx_ExpMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpMeasurement.expGraphs

ExpGraphs 
where ExpMeasurement appears
  @param  Nmrx_ExpMeasurement self
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
extern ApiSet Nmrx_ExpMeasurement_FindAllExpGraphs_keyval4(Nmrx_ExpMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpMeasurement.expSteps

ExpSteps 
where ExpMeasurement is being accessed. In a completed NmrExpPrototype 
all ExpMeasurements must be involved in at least one ExpStep.
  @param  Nmrx_ExpMeasurement self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrx_ExpMeasurement_FindAllExpSteps(Nmrx_ExpMeasurement self, ApiMap conditions);

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpMeasurement.expSteps

ExpSteps 
where ExpMeasurement is being accessed. In a completed NmrExpPrototype 
all ExpMeasurements must be involved in at least one ExpStep.
  @param  Nmrx_ExpMeasurement self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrx_ExpMeasurement_FindAllExpSteps_keyval0(Nmrx_ExpMeasurement self);

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpMeasurement.expSteps

ExpSteps 
where ExpMeasurement is being accessed. In a completed NmrExpPrototype 
all ExpMeasurements must be involved in at least one ExpStep.
  @param  Nmrx_ExpMeasurement self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrx_ExpMeasurement_FindAllExpSteps_keyval1(Nmrx_ExpMeasurement self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpMeasurement.expSteps

ExpSteps 
where ExpMeasurement is being accessed. In a completed NmrExpPrototype 
all ExpMeasurements must be involved in at least one ExpStep.
  @param  Nmrx_ExpMeasurement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrx_ExpMeasurement_FindAllExpSteps_keyval2(Nmrx_ExpMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpMeasurement.expSteps

ExpSteps 
where ExpMeasurement is being accessed. In a completed NmrExpPrototype 
all ExpMeasurements must be involved in at least one ExpStep.
  @param  Nmrx_ExpMeasurement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrx_ExpMeasurement_FindAllExpSteps_keyval3(Nmrx_ExpMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpMeasurement.expSteps

ExpSteps 
where ExpMeasurement is being accessed. In a completed NmrExpPrototype 
all ExpMeasurements must be involved in at least one ExpStep.
  @param  Nmrx_ExpMeasurement self
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
extern ApiSet Nmrx_ExpMeasurement_FindAllExpSteps_keyval4(Nmrx_ExpMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.NmrExpPrototype.ExpMeasurement.refExpDimRefs

RefExpDimRefs that 
pertain to the ExpMeasurement.
  @param  Nmrx_ExpMeasurement self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrx_ExpMeasurement_FindAllRefExpDimRefs(Nmrx_ExpMeasurement self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.NmrExpPrototype.ExpMeasurement.refExpDimRefs

RefExpDimRefs that 
pertain to the ExpMeasurement.
  @param  Nmrx_ExpMeasurement self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrx_ExpMeasurement_FindAllRefExpDimRefs_keyval0(Nmrx_ExpMeasurement self);

/**
  FindAll for 
ccp.nmr.NmrExpPrototype.ExpMeasurement.refExpDimRefs

RefExpDimRefs that 
pertain to the ExpMeasurement.
  @param  Nmrx_ExpMeasurement self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrx_ExpMeasurement_FindAllRefExpDimRefs_keyval1(Nmrx_ExpMeasurement self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.NmrExpPrototype.ExpMeasurement.refExpDimRefs

RefExpDimRefs that 
pertain to the ExpMeasurement.
  @param  Nmrx_ExpMeasurement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrx_ExpMeasurement_FindAllRefExpDimRefs_keyval2(Nmrx_ExpMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.NmrExpPrototype.ExpMeasurement.refExpDimRefs

RefExpDimRefs that 
pertain to the ExpMeasurement.
  @param  Nmrx_ExpMeasurement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrx_ExpMeasurement_FindAllRefExpDimRefs_keyval3(Nmrx_ExpMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.NmrExpPrototype.ExpMeasurement.refExpDimRefs

RefExpDimRefs that 
pertain to the ExpMeasurement.
  @param  Nmrx_ExpMeasurement self
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
extern ApiSet Nmrx_ExpMeasurement_FindAllRefExpDimRefs_keyval4(Nmrx_ExpMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpMeasurement self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrx_ExpMeasurement_FindFirstApplicationData(Nmrx_ExpMeasurement self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpMeasurement self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrx_ExpMeasurement_FindFirstApplicationData_keyval0(Nmrx_ExpMeasurement self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpMeasurement self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrx_ExpMeasurement_FindFirstApplicationData_keyval1(Nmrx_ExpMeasurement self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpMeasurement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrx_ExpMeasurement_FindFirstApplicationData_keyval2(Nmrx_ExpMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpMeasurement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrx_ExpMeasurement_FindFirstApplicationData_keyval3(Nmrx_ExpMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpMeasurement self
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
extern Impl_ApplicationData Nmrx_ExpMeasurement_FindFirstApplicationData_keyval4(Nmrx_ExpMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.ExpMeasurement.atomSites

AtomSites defining 
Measurement. For shifts a single one, defining which shift is being 
measured. For coupling constants a pair defining the sites coupled. For 
multiple quantum coherences the number apropriate to define the MQ 
coherence. The order of atomSites in the link is significant, as it 
corresponds to the order of Measurement.atomSiteWeights (if set).
  @param  Nmrx_ExpMeasurement self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmrx_AtomSite Nmrx_ExpMeasurement_FindFirstAtomSite(Nmrx_ExpMeasurement self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.ExpMeasurement.atomSites

AtomSites defining 
Measurement. For shifts a single one, defining which shift is being 
measured. For coupling constants a pair defining the sites coupled. For 
multiple quantum coherences the number apropriate to define the MQ 
coherence. The order of atomSites in the link is significant, as it 
corresponds to the order of Measurement.atomSiteWeights (if set).
  @param  Nmrx_ExpMeasurement self
  @returns  the first value that satisfies the conditions 
**/
extern Nmrx_AtomSite Nmrx_ExpMeasurement_FindFirstAtomSite_keyval0(Nmrx_ExpMeasurement self);

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.ExpMeasurement.atomSites

AtomSites defining 
Measurement. For shifts a single one, defining which shift is being 
measured. For coupling constants a pair defining the sites coupled. For 
multiple quantum coherences the number apropriate to define the MQ 
coherence. The order of atomSites in the link is significant, as it 
corresponds to the order of Measurement.atomSiteWeights (if set).
  @param  Nmrx_ExpMeasurement self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmrx_AtomSite Nmrx_ExpMeasurement_FindFirstAtomSite_keyval1(Nmrx_ExpMeasurement self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.ExpMeasurement.atomSites

AtomSites defining 
Measurement. For shifts a single one, defining which shift is being 
measured. For coupling constants a pair defining the sites coupled. For 
multiple quantum coherences the number apropriate to define the MQ 
coherence. The order of atomSites in the link is significant, as it 
corresponds to the order of Measurement.atomSiteWeights (if set).
  @param  Nmrx_ExpMeasurement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmrx_AtomSite Nmrx_ExpMeasurement_FindFirstAtomSite_keyval2(Nmrx_ExpMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.ExpMeasurement.atomSites

AtomSites defining 
Measurement. For shifts a single one, defining which shift is being 
measured. For coupling constants a pair defining the sites coupled. For 
multiple quantum coherences the number apropriate to define the MQ 
coherence. The order of atomSites in the link is significant, as it 
corresponds to the order of Measurement.atomSiteWeights (if set).
  @param  Nmrx_ExpMeasurement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmrx_AtomSite Nmrx_ExpMeasurement_FindFirstAtomSite_keyval3(Nmrx_ExpMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.ExpMeasurement.atomSites

AtomSites defining 
Measurement. For shifts a single one, defining which shift is being 
measured. For coupling constants a pair defining the sites coupled. For 
multiple quantum coherences the number apropriate to define the MQ 
coherence. The order of atomSites in the link is significant, as it 
corresponds to the order of Measurement.atomSiteWeights (if set).
  @param  Nmrx_ExpMeasurement self
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
extern Nmrx_AtomSite Nmrx_ExpMeasurement_FindFirstAtomSite_keyval4(Nmrx_ExpMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.ExpMeasurement.expGraphs

ExpGraphs where 
ExpMeasurement appears
  @param  Nmrx_ExpMeasurement self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmrx_ExpGraph Nmrx_ExpMeasurement_FindFirstExpGraph(Nmrx_ExpMeasurement self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.ExpMeasurement.expGraphs

ExpGraphs where 
ExpMeasurement appears
  @param  Nmrx_ExpMeasurement self
  @returns  the first value that satisfies the conditions 
**/
extern Nmrx_ExpGraph Nmrx_ExpMeasurement_FindFirstExpGraph_keyval0(Nmrx_ExpMeasurement self);

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.ExpMeasurement.expGraphs

ExpGraphs where 
ExpMeasurement appears
  @param  Nmrx_ExpMeasurement self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmrx_ExpGraph Nmrx_ExpMeasurement_FindFirstExpGraph_keyval1(Nmrx_ExpMeasurement self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.ExpMeasurement.expGraphs

ExpGraphs where 
ExpMeasurement appears
  @param  Nmrx_ExpMeasurement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmrx_ExpGraph Nmrx_ExpMeasurement_FindFirstExpGraph_keyval2(Nmrx_ExpMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.ExpMeasurement.expGraphs

ExpGraphs where 
ExpMeasurement appears
  @param  Nmrx_ExpMeasurement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmrx_ExpGraph Nmrx_ExpMeasurement_FindFirstExpGraph_keyval3(Nmrx_ExpMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.ExpMeasurement.expGraphs

ExpGraphs where 
ExpMeasurement appears
  @param  Nmrx_ExpMeasurement self
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
extern Nmrx_ExpGraph Nmrx_ExpMeasurement_FindFirstExpGraph_keyval4(Nmrx_ExpMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.NmrExpPrototype.ExpMeasurement.expSteps

ExpSteps 
where ExpMeasurement is being accessed. In a completed NmrExpPrototype 
all ExpMeasurements must be involved in at least one ExpStep.
  @param  Nmrx_ExpMeasurement self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmrx_ExpStep Nmrx_ExpMeasurement_FindFirstExpStep(Nmrx_ExpMeasurement self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.NmrExpPrototype.ExpMeasurement.expSteps

ExpSteps 
where ExpMeasurement is being accessed. In a completed NmrExpPrototype 
all ExpMeasurements must be involved in at least one ExpStep.
  @param  Nmrx_ExpMeasurement self
  @returns  the first value that satisfies the conditions 
**/
extern Nmrx_ExpStep Nmrx_ExpMeasurement_FindFirstExpStep_keyval0(Nmrx_ExpMeasurement self);

/**
  FindFirst for ccp.nmr.NmrExpPrototype.ExpMeasurement.expSteps

ExpSteps 
where ExpMeasurement is being accessed. In a completed NmrExpPrototype 
all ExpMeasurements must be involved in at least one ExpStep.
  @param  Nmrx_ExpMeasurement self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmrx_ExpStep Nmrx_ExpMeasurement_FindFirstExpStep_keyval1(Nmrx_ExpMeasurement self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.NmrExpPrototype.ExpMeasurement.expSteps

ExpSteps 
where ExpMeasurement is being accessed. In a completed NmrExpPrototype 
all ExpMeasurements must be involved in at least one ExpStep.
  @param  Nmrx_ExpMeasurement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmrx_ExpStep Nmrx_ExpMeasurement_FindFirstExpStep_keyval2(Nmrx_ExpMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.NmrExpPrototype.ExpMeasurement.expSteps

ExpSteps 
where ExpMeasurement is being accessed. In a completed NmrExpPrototype 
all ExpMeasurements must be involved in at least one ExpStep.
  @param  Nmrx_ExpMeasurement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmrx_ExpStep Nmrx_ExpMeasurement_FindFirstExpStep_keyval3(Nmrx_ExpMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.NmrExpPrototype.ExpMeasurement.expSteps

ExpSteps 
where ExpMeasurement is being accessed. In a completed NmrExpPrototype 
all ExpMeasurements must be involved in at least one ExpStep.
  @param  Nmrx_ExpMeasurement self
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
extern Nmrx_ExpStep Nmrx_ExpMeasurement_FindFirstExpStep_keyval4(Nmrx_ExpMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.ExpMeasurement.refExpDimRefs

RefExpDimRefs that 
pertain to the ExpMeasurement.
  @param  Nmrx_ExpMeasurement self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmrx_RefExpDimRef Nmrx_ExpMeasurement_FindFirstRefExpDimRef(Nmrx_ExpMeasurement self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.ExpMeasurement.refExpDimRefs

RefExpDimRefs that 
pertain to the ExpMeasurement.
  @param  Nmrx_ExpMeasurement self
  @returns  the first value that satisfies the conditions 
**/
extern Nmrx_RefExpDimRef Nmrx_ExpMeasurement_FindFirstRefExpDimRef_keyval0(Nmrx_ExpMeasurement self);

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.ExpMeasurement.refExpDimRefs

RefExpDimRefs that 
pertain to the ExpMeasurement.
  @param  Nmrx_ExpMeasurement self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmrx_RefExpDimRef Nmrx_ExpMeasurement_FindFirstRefExpDimRef_keyval1(Nmrx_ExpMeasurement self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.ExpMeasurement.refExpDimRefs

RefExpDimRefs that 
pertain to the ExpMeasurement.
  @param  Nmrx_ExpMeasurement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmrx_RefExpDimRef Nmrx_ExpMeasurement_FindFirstRefExpDimRef_keyval2(Nmrx_ExpMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.ExpMeasurement.refExpDimRefs

RefExpDimRefs that 
pertain to the ExpMeasurement.
  @param  Nmrx_ExpMeasurement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmrx_RefExpDimRef Nmrx_ExpMeasurement_FindFirstRefExpDimRef_keyval3(Nmrx_ExpMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.ExpMeasurement.refExpDimRefs

RefExpDimRefs that 
pertain to the ExpMeasurement.
  @param  Nmrx_ExpMeasurement self
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
extern Nmrx_RefExpDimRef Nmrx_ExpMeasurement_FindFirstRefExpDimRef_keyval4(Nmrx_ExpMeasurement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.NmrExpPrototype.ExpMeasurement
  @param  Nmrx_ExpMeasurement self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Nmrx_ExpMeasurement_Get(Nmrx_ExpMeasurement self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrx_ExpMeasurement self
  @returns   the result
**/
extern Acco_AccessObject Nmrx_ExpMeasurement_GetAccess(Nmrx_ExpMeasurement self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpMeasurement self
  @returns   the result
**/
extern ApiList Nmrx_ExpMeasurement_GetApplicationData(Nmrx_ExpMeasurement self);

/**
  Get for ccp.nmr.NmrExpPrototype.ExpMeasurement.atomSiteWeights

Weight 
of contribution from atomSites to measurement being made, given in same 
order as the atomSites. Typically +/- 1. Serves to define 
multiple-quantum magnetisation, distinguishing between e.g. three-spin 
triple-quantum magnetisation and three-spin single-quantum 
magnetisation. Has no defined meaning in other cases. If both 
atomSiteWeights and atomSites are set, their length must be the same.
  @param  Nmrx_ExpMeasurement self
  @returns   the result
**/
extern ApiList Nmrx_ExpMeasurement_GetAtomSiteWeights(Nmrx_ExpMeasurement self);

/**
  Get for ccp.nmr.NmrExpPrototype.ExpMeasurement.atomSites

AtomSites 
defining Measurement. For shifts a single one, defining which shift is 
being measured. For coupling constants a pair defining the sites 
coupled. For multiple quantum coherences the number apropriate to define 
the MQ coherence. The order of atomSites in the link is significant, as 
it corresponds to the order of Measurement.atomSiteWeights (if set).
  @param  Nmrx_ExpMeasurement self
  @returns   the result
**/
extern ApiList Nmrx_ExpMeasurement_GetAtomSites(Nmrx_ExpMeasurement self);

/**
  GetByKey for ccp.nmr.NmrExpPrototype.ExpMeasurement
  @param  Nmrx_ExpMeasurement self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Nmrx_ExpMeasurement Nmrx_ExpMeasurement_GetByKey(Nmrx_ExpMeasurement self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Nmrx_ExpMeasurement self
  @returns   the result
**/
extern ApiString Nmrx_ExpMeasurement_GetClassName(Nmrx_ExpMeasurement self);

/**
  getter for derived link expGraphs
  @param  Nmrx_ExpMeasurement self
  @returns   the result
**/
extern ApiSet Nmrx_ExpMeasurement_GetExpGraphs(Nmrx_ExpMeasurement self);

/**
  Get for ccp.nmr.NmrExpPrototype.ExpMeasurement.expSteps

ExpSteps where 
ExpMeasurement is being accessed. In a completed NmrExpPrototype all 
ExpMeasurements must be involved in at least one ExpStep.
  @param  Nmrx_ExpMeasurement self
  @returns   the result
**/
extern ApiSet Nmrx_ExpMeasurement_GetExpSteps(Nmrx_ExpMeasurement self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Nmrx_ExpMeasurement self
  @returns   the result
**/
extern ApiList Nmrx_ExpMeasurement_GetFieldNames(Nmrx_ExpMeasurement self);

/**
  GetFullKey for ccp.nmr.NmrExpPrototype.ExpMeasurement
  @param  Nmrx_ExpMeasurement self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Nmrx_ExpMeasurement_GetFullKey(Nmrx_ExpMeasurement self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Nmrx_ExpMeasurement self
  @returns   the result
**/
extern ApiBoolean Nmrx_ExpMeasurement_GetInConstructor(Nmrx_ExpMeasurement self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Nmrx_ExpMeasurement self
  @returns   the result
**/
extern ApiBoolean Nmrx_ExpMeasurement_GetIsDeleted(Nmrx_ExpMeasurement self);

/**
  GetLocalKey for ccp.nmr.NmrExpPrototype.ExpMeasurement
  @param  Nmrx_ExpMeasurement self
  @returns  Local object key
**/
extern ApiObject Nmrx_ExpMeasurement_GetLocalKey(Nmrx_ExpMeasurement self);

/**
  Get for ccp.nmr.NmrExpPrototype.ExpMeasurement.measurementType

Property 
being measured. Typically chemical shift, but could be e.g. J-coupling 
or multiple quantum magnetisation.
  @param  Nmrx_ExpMeasurement self
  @returns   the result
**/
extern ApiString Nmrx_ExpMeasurement_GetMeasurementType(Nmrx_ExpMeasurement self);

/**
  Get for ccp.nmr.NmrExpPrototype.ExpMeasurement.nmrExpPrototype

parent 
link
  @param  Nmrx_ExpMeasurement self
  @returns   the result
**/
extern Nmrx_NmrExpPrototype Nmrx_ExpMeasurement_GetNmrExpPrototype(Nmrx_ExpMeasurement self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Nmrx_ExpMeasurement self
  @returns   the result
**/
extern ApiString Nmrx_ExpMeasurement_GetPackageName(Nmrx_ExpMeasurement self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Nmrx_ExpMeasurement self
  @returns   the result
**/
extern ApiString Nmrx_ExpMeasurement_GetPackageShortName(Nmrx_ExpMeasurement self);

/**
  Get for ccp.nmr.NmrExpPrototype.ExpMeasurement.parent

link to parent 
object - synonym for nmrExpPrototype
  @param  Nmrx_ExpMeasurement self
  @returns   the result
**/
extern Nmrx_NmrExpPrototype Nmrx_ExpMeasurement_GetParent(Nmrx_ExpMeasurement self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Nmrx_ExpMeasurement self
  @returns   the result
**/
extern ApiString Nmrx_ExpMeasurement_GetQualifiedName(Nmrx_ExpMeasurement self);

/**
  Get for 
ccp.nmr.NmrExpPrototype.ExpMeasurement.refExpDimRefs

RefExpDimRefs that 
pertain to the ExpMeasurement.
  @param  Nmrx_ExpMeasurement self
  @returns   the result
**/
extern ApiSet Nmrx_ExpMeasurement_GetRefExpDimRefs(Nmrx_ExpMeasurement self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Nmrx_ExpMeasurement self
  @returns   the result
**/
extern Impl_MemopsRoot Nmrx_ExpMeasurement_GetRoot(Nmrx_ExpMeasurement self);

/**
  Get for ccp.nmr.NmrExpPrototype.ExpMeasurement.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmrx_ExpMeasurement self
  @returns   the result
**/
extern ApiInteger Nmrx_ExpMeasurement_GetSerial(Nmrx_ExpMeasurement self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Nmrx_ExpMeasurement self
  @returns   the result
**/
extern Impl_TopObject Nmrx_ExpMeasurement_GetTopObject(Nmrx_ExpMeasurement self);

/**
  Constructor for ccp.nmr.NmrExpPrototype.ExpMeasurement
  @param  Nmrx_NmrExpPrototype parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmrx_ExpMeasurement Nmrx_ExpMeasurement_Init(Nmrx_NmrExpPrototype parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.NmrExpPrototype.ExpMeasurement
  @param  Nmrx_NmrExpPrototype parent
  @returns  the new object
**/
extern Nmrx_ExpMeasurement Nmrx_ExpMeasurement_Init_reqd(Nmrx_NmrExpPrototype parent);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpMeasurement self
  @param  Impl_ApplicationData value
**/
extern void *Nmrx_ExpMeasurement_RemoveApplicationData(Nmrx_ExpMeasurement self, Impl_ApplicationData value);

/**
  Remove for ccp.nmr.NmrExpPrototype.ExpMeasurement.atomSites

AtomSites 
defining Measurement. For shifts a single one, defining which shift is 
being measured. For coupling constants a pair defining the sites 
coupled. For multiple quantum coherences the number apropriate to define 
the MQ coherence. The order of atomSites in the link is significant, as 
it corresponds to the order of Measurement.atomSiteWeights (if set).
  @param  Nmrx_ExpMeasurement self
  @param  Nmrx_AtomSite value
**/
extern void *Nmrx_ExpMeasurement_RemoveAtomSite(Nmrx_ExpMeasurement self, Nmrx_AtomSite value);

/**
  Remove for 
ccp.nmr.NmrExpPrototype.ExpMeasurement.atomSiteWeights

Weight of 
contribution from atomSites to measurement being made, given in same 
order as the atomSites. Typically +/- 1. Serves to define 
multiple-quantum magnetisation, distinguishing between e.g. three-spin 
triple-quantum magnetisation and three-spin single-quantum 
magnetisation. Has no defined meaning in other cases. If both 
atomSiteWeights and atomSites are set, their length must be the same.
  @param  Nmrx_ExpMeasurement self
  @param  ApiFloat value
**/
extern void *Nmrx_ExpMeasurement_RemoveAtomSiteWeight(Nmrx_ExpMeasurement self, ApiFloat value);

/**
  SetAttr for ccp.nmr.NmrExpPrototype.ExpMeasurement
  @param  Nmrx_ExpMeasurement self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Nmrx_ExpMeasurement_Set(Nmrx_ExpMeasurement self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrx_ExpMeasurement self
  @param  Acco_AccessObject value
**/
extern void *Nmrx_ExpMeasurement_SetAccess(Nmrx_ExpMeasurement self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpMeasurement self
  @param  ApiList values
**/
extern void *Nmrx_ExpMeasurement_SetApplicationData(Nmrx_ExpMeasurement self, ApiList values);

/**
  Set for ccp.nmr.NmrExpPrototype.ExpMeasurement.atomSiteWeights

Weight 
of contribution from atomSites to measurement being made, given in same 
order as the atomSites. Typically +/- 1. Serves to define 
multiple-quantum magnetisation, distinguishing between e.g. three-spin 
triple-quantum magnetisation and three-spin single-quantum 
magnetisation. Has no defined meaning in other cases. If both 
atomSiteWeights and atomSites are set, their length must be the same.
  @param  Nmrx_ExpMeasurement self
  @param  ApiList values
**/
extern void *Nmrx_ExpMeasurement_SetAtomSiteWeights(Nmrx_ExpMeasurement self, ApiList values);

/**
  Set for ccp.nmr.NmrExpPrototype.ExpMeasurement.atomSites

AtomSites 
defining Measurement. For shifts a single one, defining which shift is 
being measured. For coupling constants a pair defining the sites 
coupled. For multiple quantum coherences the number apropriate to define 
the MQ coherence. The order of atomSites in the link is significant, as 
it corresponds to the order of Measurement.atomSiteWeights (if set).
  @param  Nmrx_ExpMeasurement self
  @param  ApiList values
**/
extern void *Nmrx_ExpMeasurement_SetAtomSites(Nmrx_ExpMeasurement self, ApiList values);

/**
  Set for ccp.nmr.NmrExpPrototype.ExpMeasurement.expSteps

ExpSteps where 
ExpMeasurement is being accessed. In a completed NmrExpPrototype all 
ExpMeasurements must be involved in at least one ExpStep.
  @param  Nmrx_ExpMeasurement self
  @param  ApiSet values
**/
extern void *Nmrx_ExpMeasurement_SetExpSteps(Nmrx_ExpMeasurement self, ApiSet values);

/**
  Set for ccp.nmr.NmrExpPrototype.ExpMeasurement.measurementType

Property 
being measured. Typically chemical shift, but could be e.g. J-coupling 
or multiple quantum magnetisation.
  @param  Nmrx_ExpMeasurement self
  @param  ApiString value
**/
extern void *Nmrx_ExpMeasurement_SetMeasurementType(Nmrx_ExpMeasurement self, ApiString value);

/**
  Set for 
ccp.nmr.NmrExpPrototype.ExpMeasurement.refExpDimRefs

RefExpDimRefs that 
pertain to the ExpMeasurement.
  @param  Nmrx_ExpMeasurement self
  @param  ApiSet values
**/
extern void *Nmrx_ExpMeasurement_SetRefExpDimRefs(Nmrx_ExpMeasurement self, ApiSet values);

/**
  Set for ccp.nmr.NmrExpPrototype.ExpMeasurement.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmrx_ExpMeasurement self
  @param  ApiInteger value
**/
extern void *Nmrx_ExpMeasurement_SetSerial(Nmrx_ExpMeasurement self, ApiInteger value);

/**
  Sorted for ccp.nmr.NmrExpPrototype.ExpMeasurement.expGraphs

ExpGraphs 
where ExpMeasurement appears
  @param  Nmrx_ExpMeasurement self
  @returns   the result
**/
extern ApiList Nmrx_ExpMeasurement_SortedExpGraphs(Nmrx_ExpMeasurement self);

/**
  Sorted for ccp.nmr.NmrExpPrototype.ExpMeasurement.expSteps

ExpSteps 
where ExpMeasurement is being accessed. In a completed NmrExpPrototype 
all ExpMeasurements must be involved in at least one ExpStep.
  @param  Nmrx_ExpMeasurement self
  @returns   the result
**/
extern ApiList Nmrx_ExpMeasurement_SortedExpSteps(Nmrx_ExpMeasurement self);

/**
  Sorted for 
ccp.nmr.NmrExpPrototype.ExpMeasurement.refExpDimRefs

RefExpDimRefs that 
pertain to the ExpMeasurement.
  @param  Nmrx_ExpMeasurement self
  @returns   the result
**/
extern ApiList Nmrx_ExpMeasurement_SortedRefExpDimRefs(Nmrx_ExpMeasurement self);

#endif /* __incl__ccp_api_nmr_NmrExpPrototype_ExpMeasurement_h__ */
