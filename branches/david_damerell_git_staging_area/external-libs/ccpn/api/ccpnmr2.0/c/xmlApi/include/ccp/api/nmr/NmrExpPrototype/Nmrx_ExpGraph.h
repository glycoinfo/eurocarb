
#ifndef __incl__ccp_api_nmr_NmrExpPrototype_ExpGraph_h__
#define __incl__ccp_api_nmr_NmrExpPrototype_ExpGraph_h__

#include "ccp.h"

/*
  Set of Connected AtomSites, ExpTransfers, ExpSteps and ExpMeasurements that define the allowed magnetisation transfer paths and observables for an NMR experiment. Each ExpGraph, its ExpSteps and ExpTransfers, and the ExpMeasurements and AtomSites these are connected to, effectively define a self-contained NMR experiment. There may be several ExpGraphs that share some, but not all, AtomSites and ExpMeasurementsl, e.g. if you acquire CH and NH 2D HSQC experiments together, or if you have diferent molecule topologies giving rise to peaks of different sign.
*/

/* package ccp.api.nmr.NmrExpPrototype */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpGraph self
  @param  Impl_ApplicationData value
**/
extern void *Nmrx_ExpGraph_AddApplicationData(Nmrx_ExpGraph self, Impl_ApplicationData value);

/**
  CheckAllValid for ccp.nmr.NmrExpPrototype.ExpGraph
  @param  Nmrx_ExpGraph self
  @param  ApiBoolean complete
**/
extern void *Nmrx_ExpGraph_CheckAllValid(Nmrx_ExpGraph self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.NmrExpPrototype.ExpGraph
  @param  Nmrx_ExpGraph self
  @param  ApiBoolean complete
**/
extern void *Nmrx_ExpGraph_CheckValid(Nmrx_ExpGraph self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpGraph self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrx_ExpGraph_FindAllApplicationData(Nmrx_ExpGraph self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpGraph self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrx_ExpGraph_FindAllApplicationData_keyval0(Nmrx_ExpGraph self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpGraph self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrx_ExpGraph_FindAllApplicationData_keyval1(Nmrx_ExpGraph self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpGraph self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrx_ExpGraph_FindAllApplicationData_keyval2(Nmrx_ExpGraph self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpGraph self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrx_ExpGraph_FindAllApplicationData_keyval3(Nmrx_ExpGraph self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpGraph self
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
extern ApiList Nmrx_ExpGraph_FindAllApplicationData_keyval4(Nmrx_ExpGraph self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpGraph.atomSites

AtomSites 
connected to ExpGraph
  @param  Nmrx_ExpGraph self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrx_ExpGraph_FindAllAtomSites(Nmrx_ExpGraph self, ApiMap conditions);

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpGraph.atomSites

AtomSites 
connected to ExpGraph
  @param  Nmrx_ExpGraph self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrx_ExpGraph_FindAllAtomSites_keyval0(Nmrx_ExpGraph self);

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpGraph.atomSites

AtomSites 
connected to ExpGraph
  @param  Nmrx_ExpGraph self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrx_ExpGraph_FindAllAtomSites_keyval1(Nmrx_ExpGraph self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpGraph.atomSites

AtomSites 
connected to ExpGraph
  @param  Nmrx_ExpGraph self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrx_ExpGraph_FindAllAtomSites_keyval2(Nmrx_ExpGraph self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpGraph.atomSites

AtomSites 
connected to ExpGraph
  @param  Nmrx_ExpGraph self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrx_ExpGraph_FindAllAtomSites_keyval3(Nmrx_ExpGraph self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpGraph.atomSites

AtomSites 
connected to ExpGraph
  @param  Nmrx_ExpGraph self
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
extern ApiSet Nmrx_ExpGraph_FindAllAtomSites_keyval4(Nmrx_ExpGraph self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.NmrExpPrototype.ExpGraph.expMeasurements

ExpMeasurements that 
appear in ExpGraph
  @param  Nmrx_ExpGraph self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrx_ExpGraph_FindAllExpMeasurements(Nmrx_ExpGraph self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.NmrExpPrototype.ExpGraph.expMeasurements

ExpMeasurements that 
appear in ExpGraph
  @param  Nmrx_ExpGraph self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrx_ExpGraph_FindAllExpMeasurements_keyval0(Nmrx_ExpGraph self);

/**
  FindAll for 
ccp.nmr.NmrExpPrototype.ExpGraph.expMeasurements

ExpMeasurements that 
appear in ExpGraph
  @param  Nmrx_ExpGraph self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrx_ExpGraph_FindAllExpMeasurements_keyval1(Nmrx_ExpGraph self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.NmrExpPrototype.ExpGraph.expMeasurements

ExpMeasurements that 
appear in ExpGraph
  @param  Nmrx_ExpGraph self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrx_ExpGraph_FindAllExpMeasurements_keyval2(Nmrx_ExpGraph self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.NmrExpPrototype.ExpGraph.expMeasurements

ExpMeasurements that 
appear in ExpGraph
  @param  Nmrx_ExpGraph self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrx_ExpGraph_FindAllExpMeasurements_keyval3(Nmrx_ExpGraph self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.NmrExpPrototype.ExpGraph.expMeasurements

ExpMeasurements that 
appear in ExpGraph
  @param  Nmrx_ExpGraph self
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
extern ApiSet Nmrx_ExpGraph_FindAllExpMeasurements_keyval4(Nmrx_ExpGraph self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpGraph.expSteps

child link to 
class ExpStep
  @param  Nmrx_ExpGraph self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrx_ExpGraph_FindAllExpSteps(Nmrx_ExpGraph self, ApiMap conditions);

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpGraph.expSteps

child link to 
class ExpStep
  @param  Nmrx_ExpGraph self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrx_ExpGraph_FindAllExpSteps_keyval0(Nmrx_ExpGraph self);

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpGraph.expSteps

child link to 
class ExpStep
  @param  Nmrx_ExpGraph self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrx_ExpGraph_FindAllExpSteps_keyval1(Nmrx_ExpGraph self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpGraph.expSteps

child link to 
class ExpStep
  @param  Nmrx_ExpGraph self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrx_ExpGraph_FindAllExpSteps_keyval2(Nmrx_ExpGraph self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpGraph.expSteps

child link to 
class ExpStep
  @param  Nmrx_ExpGraph self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrx_ExpGraph_FindAllExpSteps_keyval3(Nmrx_ExpGraph self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpGraph.expSteps

child link to 
class ExpStep
  @param  Nmrx_ExpGraph self
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
extern ApiSet Nmrx_ExpGraph_FindAllExpSteps_keyval4(Nmrx_ExpGraph self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpGraph.expTransfers

child link to 
class ExpTransfer
  @param  Nmrx_ExpGraph self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrx_ExpGraph_FindAllExpTransfers(Nmrx_ExpGraph self, ApiMap conditions);

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpGraph.expTransfers

child link to 
class ExpTransfer
  @param  Nmrx_ExpGraph self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrx_ExpGraph_FindAllExpTransfers_keyval0(Nmrx_ExpGraph self);

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpGraph.expTransfers

child link to 
class ExpTransfer
  @param  Nmrx_ExpGraph self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrx_ExpGraph_FindAllExpTransfers_keyval1(Nmrx_ExpGraph self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpGraph.expTransfers

child link to 
class ExpTransfer
  @param  Nmrx_ExpGraph self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrx_ExpGraph_FindAllExpTransfers_keyval2(Nmrx_ExpGraph self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpGraph.expTransfers

child link to 
class ExpTransfer
  @param  Nmrx_ExpGraph self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrx_ExpGraph_FindAllExpTransfers_keyval3(Nmrx_ExpGraph self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpGraph.expTransfers

child link to 
class ExpTransfer
  @param  Nmrx_ExpGraph self
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
extern ApiSet Nmrx_ExpGraph_FindAllExpTransfers_keyval4(Nmrx_ExpGraph self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpGraph self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrx_ExpGraph_FindFirstApplicationData(Nmrx_ExpGraph self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpGraph self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrx_ExpGraph_FindFirstApplicationData_keyval0(Nmrx_ExpGraph self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpGraph self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrx_ExpGraph_FindFirstApplicationData_keyval1(Nmrx_ExpGraph self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpGraph self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrx_ExpGraph_FindFirstApplicationData_keyval2(Nmrx_ExpGraph self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpGraph self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrx_ExpGraph_FindFirstApplicationData_keyval3(Nmrx_ExpGraph self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpGraph self
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
extern Impl_ApplicationData Nmrx_ExpGraph_FindFirstApplicationData_keyval4(Nmrx_ExpGraph self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.NmrExpPrototype.ExpGraph.atomSites

AtomSites 
connected to ExpGraph
  @param  Nmrx_ExpGraph self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmrx_AtomSite Nmrx_ExpGraph_FindFirstAtomSite(Nmrx_ExpGraph self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.NmrExpPrototype.ExpGraph.atomSites

AtomSites 
connected to ExpGraph
  @param  Nmrx_ExpGraph self
  @returns  the first value that satisfies the conditions 
**/
extern Nmrx_AtomSite Nmrx_ExpGraph_FindFirstAtomSite_keyval0(Nmrx_ExpGraph self);

/**
  FindFirst for ccp.nmr.NmrExpPrototype.ExpGraph.atomSites

AtomSites 
connected to ExpGraph
  @param  Nmrx_ExpGraph self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmrx_AtomSite Nmrx_ExpGraph_FindFirstAtomSite_keyval1(Nmrx_ExpGraph self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.NmrExpPrototype.ExpGraph.atomSites

AtomSites 
connected to ExpGraph
  @param  Nmrx_ExpGraph self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmrx_AtomSite Nmrx_ExpGraph_FindFirstAtomSite_keyval2(Nmrx_ExpGraph self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.NmrExpPrototype.ExpGraph.atomSites

AtomSites 
connected to ExpGraph
  @param  Nmrx_ExpGraph self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmrx_AtomSite Nmrx_ExpGraph_FindFirstAtomSite_keyval3(Nmrx_ExpGraph self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.NmrExpPrototype.ExpGraph.atomSites

AtomSites 
connected to ExpGraph
  @param  Nmrx_ExpGraph self
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
extern Nmrx_AtomSite Nmrx_ExpGraph_FindFirstAtomSite_keyval4(Nmrx_ExpGraph self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.ExpGraph.expMeasurements

ExpMeasurements that 
appear in ExpGraph
  @param  Nmrx_ExpGraph self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmrx_ExpMeasurement Nmrx_ExpGraph_FindFirstExpMeasurement(Nmrx_ExpGraph self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.ExpGraph.expMeasurements

ExpMeasurements that 
appear in ExpGraph
  @param  Nmrx_ExpGraph self
  @returns  the first value that satisfies the conditions 
**/
extern Nmrx_ExpMeasurement Nmrx_ExpGraph_FindFirstExpMeasurement_keyval0(Nmrx_ExpGraph self);

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.ExpGraph.expMeasurements

ExpMeasurements that 
appear in ExpGraph
  @param  Nmrx_ExpGraph self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmrx_ExpMeasurement Nmrx_ExpGraph_FindFirstExpMeasurement_keyval1(Nmrx_ExpGraph self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.ExpGraph.expMeasurements

ExpMeasurements that 
appear in ExpGraph
  @param  Nmrx_ExpGraph self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmrx_ExpMeasurement Nmrx_ExpGraph_FindFirstExpMeasurement_keyval2(Nmrx_ExpGraph self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.ExpGraph.expMeasurements

ExpMeasurements that 
appear in ExpGraph
  @param  Nmrx_ExpGraph self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmrx_ExpMeasurement Nmrx_ExpGraph_FindFirstExpMeasurement_keyval3(Nmrx_ExpGraph self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.ExpGraph.expMeasurements

ExpMeasurements that 
appear in ExpGraph
  @param  Nmrx_ExpGraph self
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
extern Nmrx_ExpMeasurement Nmrx_ExpGraph_FindFirstExpMeasurement_keyval4(Nmrx_ExpGraph self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.NmrExpPrototype.ExpGraph.expSteps

child link to 
class ExpStep
  @param  Nmrx_ExpGraph self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmrx_ExpStep Nmrx_ExpGraph_FindFirstExpStep(Nmrx_ExpGraph self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.NmrExpPrototype.ExpGraph.expSteps

child link to 
class ExpStep
  @param  Nmrx_ExpGraph self
  @returns  the first value that satisfies the conditions 
**/
extern Nmrx_ExpStep Nmrx_ExpGraph_FindFirstExpStep_keyval0(Nmrx_ExpGraph self);

/**
  FindFirst for ccp.nmr.NmrExpPrototype.ExpGraph.expSteps

child link to 
class ExpStep
  @param  Nmrx_ExpGraph self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmrx_ExpStep Nmrx_ExpGraph_FindFirstExpStep_keyval1(Nmrx_ExpGraph self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.NmrExpPrototype.ExpGraph.expSteps

child link to 
class ExpStep
  @param  Nmrx_ExpGraph self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmrx_ExpStep Nmrx_ExpGraph_FindFirstExpStep_keyval2(Nmrx_ExpGraph self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.NmrExpPrototype.ExpGraph.expSteps

child link to 
class ExpStep
  @param  Nmrx_ExpGraph self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmrx_ExpStep Nmrx_ExpGraph_FindFirstExpStep_keyval3(Nmrx_ExpGraph self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.NmrExpPrototype.ExpGraph.expSteps

child link to 
class ExpStep
  @param  Nmrx_ExpGraph self
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
extern Nmrx_ExpStep Nmrx_ExpGraph_FindFirstExpStep_keyval4(Nmrx_ExpGraph self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.NmrExpPrototype.ExpGraph.expTransfers

child link 
to class ExpTransfer
  @param  Nmrx_ExpGraph self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmrx_ExpTransfer Nmrx_ExpGraph_FindFirstExpTransfer(Nmrx_ExpGraph self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.NmrExpPrototype.ExpGraph.expTransfers

child link 
to class ExpTransfer
  @param  Nmrx_ExpGraph self
  @returns  the first value that satisfies the conditions 
**/
extern Nmrx_ExpTransfer Nmrx_ExpGraph_FindFirstExpTransfer_keyval0(Nmrx_ExpGraph self);

/**
  FindFirst for ccp.nmr.NmrExpPrototype.ExpGraph.expTransfers

child link 
to class ExpTransfer
  @param  Nmrx_ExpGraph self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmrx_ExpTransfer Nmrx_ExpGraph_FindFirstExpTransfer_keyval1(Nmrx_ExpGraph self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.NmrExpPrototype.ExpGraph.expTransfers

child link 
to class ExpTransfer
  @param  Nmrx_ExpGraph self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmrx_ExpTransfer Nmrx_ExpGraph_FindFirstExpTransfer_keyval2(Nmrx_ExpGraph self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.NmrExpPrototype.ExpGraph.expTransfers

child link 
to class ExpTransfer
  @param  Nmrx_ExpGraph self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmrx_ExpTransfer Nmrx_ExpGraph_FindFirstExpTransfer_keyval3(Nmrx_ExpGraph self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.NmrExpPrototype.ExpGraph.expTransfers

child link 
to class ExpTransfer
  @param  Nmrx_ExpGraph self
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
extern Nmrx_ExpTransfer Nmrx_ExpGraph_FindFirstExpTransfer_keyval4(Nmrx_ExpGraph self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.NmrExpPrototype.ExpGraph
  @param  Nmrx_ExpGraph self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Nmrx_ExpGraph_Get(Nmrx_ExpGraph self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrx_ExpGraph self
  @returns   the result
**/
extern Acco_AccessObject Nmrx_ExpGraph_GetAccess(Nmrx_ExpGraph self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpGraph self
  @returns   the result
**/
extern ApiList Nmrx_ExpGraph_GetApplicationData(Nmrx_ExpGraph self);

/**
  getter for derived link atomSites
  @param  Nmrx_ExpGraph self
  @returns   the result
**/
extern ApiSet Nmrx_ExpGraph_GetAtomSites(Nmrx_ExpGraph self);

/**
  GetByKey for ccp.nmr.NmrExpPrototype.ExpGraph
  @param  Nmrx_ExpGraph self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Nmrx_ExpGraph Nmrx_ExpGraph_GetByKey(Nmrx_ExpGraph self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Nmrx_ExpGraph self
  @returns   the result
**/
extern ApiString Nmrx_ExpGraph_GetClassName(Nmrx_ExpGraph self);

/**
  getter for derived link ExpMeasurements
  @param  Nmrx_ExpGraph self
  @returns   the result
**/
extern ApiSet Nmrx_ExpGraph_GetExpMeasurements(Nmrx_ExpGraph self);

/**
  Get for ccp.nmr.NmrExpPrototype.ExpGraph.expSteps

child link to class 
ExpStep
  @param  Nmrx_ExpGraph self
  @returns   the result
**/
extern ApiSet Nmrx_ExpGraph_GetExpSteps(Nmrx_ExpGraph self);

/**
  Get for ccp.nmr.NmrExpPrototype.ExpGraph.expTransfers

child link to 
class ExpTransfer
  @param  Nmrx_ExpGraph self
  @returns   the result
**/
extern ApiSet Nmrx_ExpGraph_GetExpTransfers(Nmrx_ExpGraph self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Nmrx_ExpGraph self
  @returns   the result
**/
extern ApiList Nmrx_ExpGraph_GetFieldNames(Nmrx_ExpGraph self);

/**
  GetFullKey for ccp.nmr.NmrExpPrototype.ExpGraph
  @param  Nmrx_ExpGraph self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Nmrx_ExpGraph_GetFullKey(Nmrx_ExpGraph self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Nmrx_ExpGraph self
  @returns   the result
**/
extern ApiBoolean Nmrx_ExpGraph_GetInConstructor(Nmrx_ExpGraph self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Nmrx_ExpGraph self
  @returns   the result
**/
extern ApiBoolean Nmrx_ExpGraph_GetIsDeleted(Nmrx_ExpGraph self);

/**
  GetLocalKey for ccp.nmr.NmrExpPrototype.ExpGraph
  @param  Nmrx_ExpGraph self
  @returns  Local object key
**/
extern ApiObject Nmrx_ExpGraph_GetLocalKey(Nmrx_ExpGraph self);

/**
  Get for ccp.nmr.NmrExpPrototype.ExpGraph.nmrExpPrototype

parent link
  @param  Nmrx_ExpGraph self
  @returns   the result
**/
extern Nmrx_NmrExpPrototype Nmrx_ExpGraph_GetNmrExpPrototype(Nmrx_ExpGraph self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Nmrx_ExpGraph self
  @returns   the result
**/
extern ApiString Nmrx_ExpGraph_GetPackageName(Nmrx_ExpGraph self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Nmrx_ExpGraph self
  @returns   the result
**/
extern ApiString Nmrx_ExpGraph_GetPackageShortName(Nmrx_ExpGraph self);

/**
  Get for ccp.nmr.NmrExpPrototype.ExpGraph.parent

link to parent object - 
synonym for nmrExpPrototype
  @param  Nmrx_ExpGraph self
  @returns   the result
**/
extern Nmrx_NmrExpPrototype Nmrx_ExpGraph_GetParent(Nmrx_ExpGraph self);

/**
  Get for ccp.nmr.NmrExpPrototype.ExpGraph.peakSign

Sign of crosspeaks 
associated with transfer within ExpGraph. If set, all peaks arising from 
the ExpGraph must have the same sign. Mainly relevant where there are 
several ExpGraphs that give rise to peaks of different sign.
  @param  Nmrx_ExpGraph self
  @returns   the result
**/
extern ApiInteger Nmrx_ExpGraph_GetPeakSign(Nmrx_ExpGraph self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Nmrx_ExpGraph self
  @returns   the result
**/
extern ApiString Nmrx_ExpGraph_GetQualifiedName(Nmrx_ExpGraph self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Nmrx_ExpGraph self
  @returns   the result
**/
extern Impl_MemopsRoot Nmrx_ExpGraph_GetRoot(Nmrx_ExpGraph self);

/**
  Get for ccp.nmr.NmrExpPrototype.ExpGraph.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmrx_ExpGraph self
  @returns   the result
**/
extern ApiInteger Nmrx_ExpGraph_GetSerial(Nmrx_ExpGraph self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Nmrx_ExpGraph self
  @returns   the result
**/
extern Impl_TopObject Nmrx_ExpGraph_GetTopObject(Nmrx_ExpGraph self);

/**
  Constructor for ccp.nmr.NmrExpPrototype.ExpGraph
  @param  Nmrx_NmrExpPrototype parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmrx_ExpGraph Nmrx_ExpGraph_Init(Nmrx_NmrExpPrototype parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.NmrExpPrototype.ExpGraph
  @param  Nmrx_NmrExpPrototype parent
  @returns  the new object
**/
extern Nmrx_ExpGraph Nmrx_ExpGraph_Init_reqd(Nmrx_NmrExpPrototype parent);

/**
  Factory function to create ccp.nmr.NmrExpPrototype.ExpStep
  @param  Nmrx_ExpGraph self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmrx_ExpStep Nmrx_ExpGraph_NewExpStep(Nmrx_ExpGraph self, ApiMap attrlinks);

/**
  Factory function to create ccp.nmr.NmrExpPrototype.ExpStep
  @param  Nmrx_ExpGraph self
  @param  Nmrx_ExpMeasurement expMeasurement
  @param  ApiInteger stepNumber
  @returns  the new object
**/
extern Nmrx_ExpStep Nmrx_ExpGraph_NewExpStep_reqd(Nmrx_ExpGraph self, Nmrx_ExpMeasurement expMeasurement, ApiInteger stepNumber);

/**
  Factory function to create ccp.nmr.NmrExpPrototype.ExpTransfer
  @param  Nmrx_ExpGraph self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmrx_ExpTransfer Nmrx_ExpGraph_NewExpTransfer(Nmrx_ExpGraph self, ApiMap attrlinks);

/**
  Factory function to create ccp.nmr.NmrExpPrototype.ExpTransfer
  @param  Nmrx_ExpGraph self
  @param  ApiSet atomSites
  @returns  the new object
**/
extern Nmrx_ExpTransfer Nmrx_ExpGraph_NewExpTransfer_reqd(Nmrx_ExpGraph self, ApiSet atomSites);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpGraph self
  @param  Impl_ApplicationData value
**/
extern void *Nmrx_ExpGraph_RemoveApplicationData(Nmrx_ExpGraph self, Impl_ApplicationData value);

/**
  SetAttr for ccp.nmr.NmrExpPrototype.ExpGraph
  @param  Nmrx_ExpGraph self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Nmrx_ExpGraph_Set(Nmrx_ExpGraph self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrx_ExpGraph self
  @param  Acco_AccessObject value
**/
extern void *Nmrx_ExpGraph_SetAccess(Nmrx_ExpGraph self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpGraph self
  @param  ApiList values
**/
extern void *Nmrx_ExpGraph_SetApplicationData(Nmrx_ExpGraph self, ApiList values);

/**
  Set for ccp.nmr.NmrExpPrototype.ExpGraph.peakSign

Sign of crosspeaks 
associated with transfer within ExpGraph. If set, all peaks arising from 
the ExpGraph must have the same sign. Mainly relevant where there are 
several ExpGraphs that give rise to peaks of different sign.
  @param  Nmrx_ExpGraph self
  @param  ApiInteger value
**/
extern void *Nmrx_ExpGraph_SetPeakSign(Nmrx_ExpGraph self, ApiInteger value);

/**
  Set for ccp.nmr.NmrExpPrototype.ExpGraph.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmrx_ExpGraph self
  @param  ApiInteger value
**/
extern void *Nmrx_ExpGraph_SetSerial(Nmrx_ExpGraph self, ApiInteger value);

/**
  Sorted for ccp.nmr.NmrExpPrototype.ExpGraph.atomSites

AtomSites 
connected to ExpGraph
  @param  Nmrx_ExpGraph self
  @returns   the result
**/
extern ApiList Nmrx_ExpGraph_SortedAtomSites(Nmrx_ExpGraph self);

/**
  Sorted for 
ccp.nmr.NmrExpPrototype.ExpGraph.expMeasurements

ExpMeasurements that 
appear in ExpGraph
  @param  Nmrx_ExpGraph self
  @returns   the result
**/
extern ApiList Nmrx_ExpGraph_SortedExpMeasurements(Nmrx_ExpGraph self);

/**
  Sorted for ccp.nmr.NmrExpPrototype.ExpGraph.expSteps

child link to 
class ExpStep
  @param  Nmrx_ExpGraph self
  @returns   the result
**/
extern ApiList Nmrx_ExpGraph_SortedExpSteps(Nmrx_ExpGraph self);

/**
  Sorted for ccp.nmr.NmrExpPrototype.ExpGraph.expTransfers

child link to 
class ExpTransfer
  @param  Nmrx_ExpGraph self
  @returns   the result
**/
extern ApiList Nmrx_ExpGraph_SortedExpTransfers(Nmrx_ExpGraph self);

#endif /* __incl__ccp_api_nmr_NmrExpPrototype_ExpGraph_h__ */
