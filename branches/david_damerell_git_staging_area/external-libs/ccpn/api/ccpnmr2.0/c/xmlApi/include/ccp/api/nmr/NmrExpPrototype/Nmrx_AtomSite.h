
#ifndef __incl__ccp_api_nmr_NmrExpPrototype_AtomSite_h__
#define __incl__ccp_api_nmr_NmrExpPrototype_AtomSite_h__

#include "ccp.h"

/*
  An Atom site on the graph of atoms through which magnetisation passes in an experiment. If there is more than one ExpGraph, each AtomSite may be relevant for one or more of these. The AtomSite may be given even if it is never a carrier of magnetisation, for instance to show that coupling to a given nucleus is used for filtering during an experiment.
*/

/* package ccp.api.nmr.NmrExpPrototype */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_AtomSite self
  @param  Impl_ApplicationData value
**/
extern void *Nmrx_AtomSite_AddApplicationData(Nmrx_AtomSite self, Impl_ApplicationData value);

/**
  Add for 
ccp.nmr.NmrExpPrototype.AtomSite.expMeasurements

ExpMeasurements 
involving AtomSite
  @param  Nmrx_AtomSite self
  @param  Nmrx_ExpMeasurement value
**/
extern void *Nmrx_AtomSite_AddExpMeasurement(Nmrx_AtomSite self, Nmrx_ExpMeasurement value);

/**
  CheckAllValid for ccp.nmr.NmrExpPrototype.AtomSite
  @param  Nmrx_AtomSite self
  @param  ApiBoolean complete
**/
extern void *Nmrx_AtomSite_CheckAllValid(Nmrx_AtomSite self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.NmrExpPrototype.AtomSite
  @param  Nmrx_AtomSite self
  @param  ApiBoolean complete
**/
extern void *Nmrx_AtomSite_CheckValid(Nmrx_AtomSite self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_AtomSite self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrx_AtomSite_FindAllApplicationData(Nmrx_AtomSite self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_AtomSite self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrx_AtomSite_FindAllApplicationData_keyval0(Nmrx_AtomSite self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_AtomSite self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrx_AtomSite_FindAllApplicationData_keyval1(Nmrx_AtomSite self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_AtomSite self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrx_AtomSite_FindAllApplicationData_keyval2(Nmrx_AtomSite self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_AtomSite self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrx_AtomSite_FindAllApplicationData_keyval3(Nmrx_AtomSite self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_AtomSite self
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
extern ApiList Nmrx_AtomSite_FindAllApplicationData_keyval4(Nmrx_AtomSite self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.NmrExpPrototype.AtomSite.expGraphs

ExpGraphs whre 
AtomSite appears
  @param  Nmrx_AtomSite self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrx_AtomSite_FindAllExpGraphs(Nmrx_AtomSite self, ApiMap conditions);

/**
  FindAll for ccp.nmr.NmrExpPrototype.AtomSite.expGraphs

ExpGraphs whre 
AtomSite appears
  @param  Nmrx_AtomSite self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrx_AtomSite_FindAllExpGraphs_keyval0(Nmrx_AtomSite self);

/**
  FindAll for ccp.nmr.NmrExpPrototype.AtomSite.expGraphs

ExpGraphs whre 
AtomSite appears
  @param  Nmrx_AtomSite self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrx_AtomSite_FindAllExpGraphs_keyval1(Nmrx_AtomSite self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.NmrExpPrototype.AtomSite.expGraphs

ExpGraphs whre 
AtomSite appears
  @param  Nmrx_AtomSite self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrx_AtomSite_FindAllExpGraphs_keyval2(Nmrx_AtomSite self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.NmrExpPrototype.AtomSite.expGraphs

ExpGraphs whre 
AtomSite appears
  @param  Nmrx_AtomSite self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrx_AtomSite_FindAllExpGraphs_keyval3(Nmrx_AtomSite self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.NmrExpPrototype.AtomSite.expGraphs

ExpGraphs whre 
AtomSite appears
  @param  Nmrx_AtomSite self
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
extern ApiSet Nmrx_AtomSite_FindAllExpGraphs_keyval4(Nmrx_AtomSite self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.NmrExpPrototype.AtomSite.expMeasurements

ExpMeasurements 
involving AtomSite
  @param  Nmrx_AtomSite self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrx_AtomSite_FindAllExpMeasurements(Nmrx_AtomSite self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.NmrExpPrototype.AtomSite.expMeasurements

ExpMeasurements 
involving AtomSite
  @param  Nmrx_AtomSite self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrx_AtomSite_FindAllExpMeasurements_keyval0(Nmrx_AtomSite self);

/**
  FindAll for 
ccp.nmr.NmrExpPrototype.AtomSite.expMeasurements

ExpMeasurements 
involving AtomSite
  @param  Nmrx_AtomSite self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrx_AtomSite_FindAllExpMeasurements_keyval1(Nmrx_AtomSite self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.NmrExpPrototype.AtomSite.expMeasurements

ExpMeasurements 
involving AtomSite
  @param  Nmrx_AtomSite self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrx_AtomSite_FindAllExpMeasurements_keyval2(Nmrx_AtomSite self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.NmrExpPrototype.AtomSite.expMeasurements

ExpMeasurements 
involving AtomSite
  @param  Nmrx_AtomSite self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrx_AtomSite_FindAllExpMeasurements_keyval3(Nmrx_AtomSite self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.NmrExpPrototype.AtomSite.expMeasurements

ExpMeasurements 
involving AtomSite
  @param  Nmrx_AtomSite self
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
extern ApiSet Nmrx_AtomSite_FindAllExpMeasurements_keyval4(Nmrx_AtomSite self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.NmrExpPrototype.AtomSite.expTransfers

Magnetisation 
transfer (non-directional) connecting two AtomSites
  @param  Nmrx_AtomSite self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrx_AtomSite_FindAllExpTransfers(Nmrx_AtomSite self, ApiMap conditions);

/**
  FindAll for ccp.nmr.NmrExpPrototype.AtomSite.expTransfers

Magnetisation 
transfer (non-directional) connecting two AtomSites
  @param  Nmrx_AtomSite self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrx_AtomSite_FindAllExpTransfers_keyval0(Nmrx_AtomSite self);

/**
  FindAll for ccp.nmr.NmrExpPrototype.AtomSite.expTransfers

Magnetisation 
transfer (non-directional) connecting two AtomSites
  @param  Nmrx_AtomSite self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrx_AtomSite_FindAllExpTransfers_keyval1(Nmrx_AtomSite self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.NmrExpPrototype.AtomSite.expTransfers

Magnetisation 
transfer (non-directional) connecting two AtomSites
  @param  Nmrx_AtomSite self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrx_AtomSite_FindAllExpTransfers_keyval2(Nmrx_AtomSite self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.NmrExpPrototype.AtomSite.expTransfers

Magnetisation 
transfer (non-directional) connecting two AtomSites
  @param  Nmrx_AtomSite self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrx_AtomSite_FindAllExpTransfers_keyval3(Nmrx_AtomSite self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.NmrExpPrototype.AtomSite.expTransfers

Magnetisation 
transfer (non-directional) connecting two AtomSites
  @param  Nmrx_AtomSite self
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
extern ApiSet Nmrx_AtomSite_FindAllExpTransfers_keyval4(Nmrx_AtomSite self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_AtomSite self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrx_AtomSite_FindFirstApplicationData(Nmrx_AtomSite self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_AtomSite self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrx_AtomSite_FindFirstApplicationData_keyval0(Nmrx_AtomSite self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_AtomSite self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrx_AtomSite_FindFirstApplicationData_keyval1(Nmrx_AtomSite self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_AtomSite self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrx_AtomSite_FindFirstApplicationData_keyval2(Nmrx_AtomSite self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_AtomSite self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrx_AtomSite_FindFirstApplicationData_keyval3(Nmrx_AtomSite self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_AtomSite self
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
extern Impl_ApplicationData Nmrx_AtomSite_FindFirstApplicationData_keyval4(Nmrx_AtomSite self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.NmrExpPrototype.AtomSite.expGraphs

ExpGraphs whre 
AtomSite appears
  @param  Nmrx_AtomSite self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmrx_ExpGraph Nmrx_AtomSite_FindFirstExpGraph(Nmrx_AtomSite self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.NmrExpPrototype.AtomSite.expGraphs

ExpGraphs whre 
AtomSite appears
  @param  Nmrx_AtomSite self
  @returns  the first value that satisfies the conditions 
**/
extern Nmrx_ExpGraph Nmrx_AtomSite_FindFirstExpGraph_keyval0(Nmrx_AtomSite self);

/**
  FindFirst for ccp.nmr.NmrExpPrototype.AtomSite.expGraphs

ExpGraphs whre 
AtomSite appears
  @param  Nmrx_AtomSite self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmrx_ExpGraph Nmrx_AtomSite_FindFirstExpGraph_keyval1(Nmrx_AtomSite self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.NmrExpPrototype.AtomSite.expGraphs

ExpGraphs whre 
AtomSite appears
  @param  Nmrx_AtomSite self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmrx_ExpGraph Nmrx_AtomSite_FindFirstExpGraph_keyval2(Nmrx_AtomSite self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.NmrExpPrototype.AtomSite.expGraphs

ExpGraphs whre 
AtomSite appears
  @param  Nmrx_AtomSite self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmrx_ExpGraph Nmrx_AtomSite_FindFirstExpGraph_keyval3(Nmrx_AtomSite self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.NmrExpPrototype.AtomSite.expGraphs

ExpGraphs whre 
AtomSite appears
  @param  Nmrx_AtomSite self
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
extern Nmrx_ExpGraph Nmrx_AtomSite_FindFirstExpGraph_keyval4(Nmrx_AtomSite self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.AtomSite.expMeasurements

ExpMeasurements 
involving AtomSite
  @param  Nmrx_AtomSite self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmrx_ExpMeasurement Nmrx_AtomSite_FindFirstExpMeasurement(Nmrx_AtomSite self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.AtomSite.expMeasurements

ExpMeasurements 
involving AtomSite
  @param  Nmrx_AtomSite self
  @returns  the first value that satisfies the conditions 
**/
extern Nmrx_ExpMeasurement Nmrx_AtomSite_FindFirstExpMeasurement_keyval0(Nmrx_AtomSite self);

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.AtomSite.expMeasurements

ExpMeasurements 
involving AtomSite
  @param  Nmrx_AtomSite self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmrx_ExpMeasurement Nmrx_AtomSite_FindFirstExpMeasurement_keyval1(Nmrx_AtomSite self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.AtomSite.expMeasurements

ExpMeasurements 
involving AtomSite
  @param  Nmrx_AtomSite self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmrx_ExpMeasurement Nmrx_AtomSite_FindFirstExpMeasurement_keyval2(Nmrx_AtomSite self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.AtomSite.expMeasurements

ExpMeasurements 
involving AtomSite
  @param  Nmrx_AtomSite self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmrx_ExpMeasurement Nmrx_AtomSite_FindFirstExpMeasurement_keyval3(Nmrx_AtomSite self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.AtomSite.expMeasurements

ExpMeasurements 
involving AtomSite
  @param  Nmrx_AtomSite self
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
extern Nmrx_ExpMeasurement Nmrx_AtomSite_FindFirstExpMeasurement_keyval4(Nmrx_AtomSite self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.AtomSite.expTransfers

Magnetisation transfer 
(non-directional) connecting two AtomSites
  @param  Nmrx_AtomSite self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmrx_ExpTransfer Nmrx_AtomSite_FindFirstExpTransfer(Nmrx_AtomSite self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.AtomSite.expTransfers

Magnetisation transfer 
(non-directional) connecting two AtomSites
  @param  Nmrx_AtomSite self
  @returns  the first value that satisfies the conditions 
**/
extern Nmrx_ExpTransfer Nmrx_AtomSite_FindFirstExpTransfer_keyval0(Nmrx_AtomSite self);

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.AtomSite.expTransfers

Magnetisation transfer 
(non-directional) connecting two AtomSites
  @param  Nmrx_AtomSite self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmrx_ExpTransfer Nmrx_AtomSite_FindFirstExpTransfer_keyval1(Nmrx_AtomSite self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.AtomSite.expTransfers

Magnetisation transfer 
(non-directional) connecting two AtomSites
  @param  Nmrx_AtomSite self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmrx_ExpTransfer Nmrx_AtomSite_FindFirstExpTransfer_keyval2(Nmrx_AtomSite self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.AtomSite.expTransfers

Magnetisation transfer 
(non-directional) connecting two AtomSites
  @param  Nmrx_AtomSite self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmrx_ExpTransfer Nmrx_AtomSite_FindFirstExpTransfer_keyval3(Nmrx_AtomSite self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.AtomSite.expTransfers

Magnetisation transfer 
(non-directional) connecting two AtomSites
  @param  Nmrx_AtomSite self
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
extern Nmrx_ExpTransfer Nmrx_AtomSite_FindFirstExpTransfer_keyval4(Nmrx_AtomSite self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.NmrExpPrototype.AtomSite
  @param  Nmrx_AtomSite self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Nmrx_AtomSite_Get(Nmrx_AtomSite self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrx_AtomSite self
  @returns   the result
**/
extern Acco_AccessObject Nmrx_AtomSite_GetAccess(Nmrx_AtomSite self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_AtomSite self
  @returns   the result
**/
extern ApiList Nmrx_AtomSite_GetApplicationData(Nmrx_AtomSite self);

/**
  GetByKey for ccp.nmr.NmrExpPrototype.AtomSite
  @param  Nmrx_AtomSite self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Nmrx_AtomSite Nmrx_AtomSite_GetByKey(Nmrx_AtomSite self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Nmrx_AtomSite self
  @returns   the result
**/
extern ApiString Nmrx_AtomSite_GetClassName(Nmrx_AtomSite self);

/**
  getter for derived link expGraphs
  @param  Nmrx_AtomSite self
  @returns   the result
**/
extern ApiSet Nmrx_AtomSite_GetExpGraphs(Nmrx_AtomSite self);

/**
  Get for 
ccp.nmr.NmrExpPrototype.AtomSite.expMeasurements

ExpMeasurements 
involving AtomSite
  @param  Nmrx_AtomSite self
  @returns   the result
**/
extern ApiSet Nmrx_AtomSite_GetExpMeasurements(Nmrx_AtomSite self);

/**
  Get for ccp.nmr.NmrExpPrototype.AtomSite.expTransfers

Magnetisation 
transfer (non-directional) connecting two AtomSites
  @param  Nmrx_AtomSite self
  @returns   the result
**/
extern ApiSet Nmrx_AtomSite_GetExpTransfers(Nmrx_AtomSite self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Nmrx_AtomSite self
  @returns   the result
**/
extern ApiList Nmrx_AtomSite_GetFieldNames(Nmrx_AtomSite self);

/**
  GetFullKey for ccp.nmr.NmrExpPrototype.AtomSite
  @param  Nmrx_AtomSite self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Nmrx_AtomSite_GetFullKey(Nmrx_AtomSite self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Nmrx_AtomSite self
  @returns   the result
**/
extern ApiBoolean Nmrx_AtomSite_GetInConstructor(Nmrx_AtomSite self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Nmrx_AtomSite self
  @returns   the result
**/
extern ApiBoolean Nmrx_AtomSite_GetIsDeleted(Nmrx_AtomSite self);

/**
  getter for derived link isotopes
  @param  Nmrx_AtomSite self
  @returns   the result
**/
extern Chel_Isotope Nmrx_AtomSite_GetIsotope(Nmrx_AtomSite self);

/**
  Get for ccp.nmr.NmrExpPrototype.AtomSite.isotopeCode

Isotope code for 
Isotope making up the ExpAtomSite
  @param  Nmrx_AtomSite self
  @returns   the result
**/
extern ApiString Nmrx_AtomSite_GetIsotopeCode(Nmrx_AtomSite self);

/**
  GetLocalKey for ccp.nmr.NmrExpPrototype.AtomSite
  @param  Nmrx_AtomSite self
  @returns  Local object key
**/
extern ApiObject Nmrx_AtomSite_GetLocalKey(Nmrx_AtomSite self);

/**
  Get for ccp.nmr.NmrExpPrototype.AtomSite.maxNumber

Maximum number of 
occurrences of atom corresponding to atomSite. maxNumber 2 would mena no 
more than two atoms could appear in this position. If, for instance a 
carbon atomSite has a J coupling transfer to a proton AtomSite with 
maxNumber=2, it means that this ExpGraph will give no observable result 
for CH3 groups. May be set to zero, which indicates that no atoms of 
this type are allowed.
  @param  Nmrx_AtomSite self
  @returns   the result
**/
extern ApiInteger Nmrx_AtomSite_GetMaxNumber(Nmrx_AtomSite self);

/**
  Get for ccp.nmr.NmrExpPrototype.AtomSite.maxShift

maximum value of 
shift allowed for AtomSite, in ppm. Is not set in normal cases. Together 
with minShift serves to distinguish frequency-selective sites. For some 
common cases it is recommended to use standard limits :
Aliphatic 
carbon: <90ppm
Aromatic carbon: 90-150ppm
CO carbon: > 150ppm
CA (for 
proteins): 40-90ppm
  @param  Nmrx_AtomSite self
  @returns   the result
**/
extern ApiFloat Nmrx_AtomSite_GetMaxShift(Nmrx_AtomSite self);

/**
  Get for ccp.nmr.NmrExpPrototype.AtomSite.minNumber

Minimum number of 
occurrences of atom corresponding to atomSite. MinNumber two wiould mean 
at least two atoms. If, for instance a carbon atomSite has a J coupling 
transfer to a proton AtomSite with minNumber=2, it means that this 
ExpGraph will give observable results only for CH2 and  CH3 groups.
  @param  Nmrx_AtomSite self
  @returns   the result
**/
extern ApiInteger Nmrx_AtomSite_GetMinNumber(Nmrx_AtomSite self);

/**
  Get for ccp.nmr.NmrExpPrototype.AtomSite.minShift

minimum value of 
shift allowed for AtomSite, in ppm. Is not set in normal cases. Together 
with maxShift serves to distinguish frequency-selective sites. The most 
common use is for distinguishing CO, aliphatic carbon, and 'just' 
carbon.
Aliphatic carbon: <90ppm
Aromatic carbon: 90-150ppm
CO carbon: > 
150ppm
CA (for proteins): 40-90ppm
  @param  Nmrx_AtomSite self
  @returns   the result
**/
extern ApiFloat Nmrx_AtomSite_GetMinShift(Nmrx_AtomSite self);

/**
  Get for ccp.nmr.NmrExpPrototype.AtomSite.name

A short string to be used 
in generating experiment names. If the attribute is not set, the nucleus 
symbol should be used. Examples of names would be 'CO', 'CA', for e.g. 
HNCOCA.Note that the name does not have to match with protein or any 
other naming conventions (proteins use 'C', where we might use 'CO').
  @param  Nmrx_AtomSite self
  @returns   the result
**/
extern ApiString Nmrx_AtomSite_GetName(Nmrx_AtomSite self);

/**
  Get for ccp.nmr.NmrExpPrototype.AtomSite.nmrExpPrototype

parent link
  @param  Nmrx_AtomSite self
  @returns   the result
**/
extern Nmrx_NmrExpPrototype Nmrx_AtomSite_GetNmrExpPrototype(Nmrx_AtomSite self);

/**
  Get for ccp.nmr.NmrExpPrototype.AtomSite.numberStep

Integer step 
between allowed number of occurrences of atoms corresponding to this 
atomSite. If, for instance a carbon atomSite has a J coupling transfer 
to a proton AtomSite with minNumber=1 and numberStep = 2, there must be 
1, 3, 5, ... atoms corresponding to the AtomSite. Uased for instance to 
indicate 'carbon coupled to an odd number of protons', where you would 
have a carbon AtomSite, with a JCoupling ExpTransfer to a proton 
AtomSite witn minNumber 1 and numberStep 2.
  @param  Nmrx_AtomSite self
  @returns   the result
**/
extern ApiInteger Nmrx_AtomSite_GetNumberStep(Nmrx_AtomSite self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Nmrx_AtomSite self
  @returns   the result
**/
extern ApiString Nmrx_AtomSite_GetPackageName(Nmrx_AtomSite self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Nmrx_AtomSite self
  @returns   the result
**/
extern ApiString Nmrx_AtomSite_GetPackageShortName(Nmrx_AtomSite self);

/**
  Get for ccp.nmr.NmrExpPrototype.AtomSite.parent

link to parent object - 
synonym for nmrExpPrototype
  @param  Nmrx_AtomSite self
  @returns   the result
**/
extern Nmrx_NmrExpPrototype Nmrx_AtomSite_GetParent(Nmrx_AtomSite self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Nmrx_AtomSite self
  @returns   the result
**/
extern ApiString Nmrx_AtomSite_GetQualifiedName(Nmrx_AtomSite self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Nmrx_AtomSite self
  @returns   the result
**/
extern Impl_MemopsRoot Nmrx_AtomSite_GetRoot(Nmrx_AtomSite self);

/**
  Get for ccp.nmr.NmrExpPrototype.AtomSite.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmrx_AtomSite self
  @returns   the result
**/
extern ApiInteger Nmrx_AtomSite_GetSerial(Nmrx_AtomSite self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Nmrx_AtomSite self
  @returns   the result
**/
extern Impl_TopObject Nmrx_AtomSite_GetTopObject(Nmrx_AtomSite self);

/**
  Constructor for ccp.nmr.NmrExpPrototype.AtomSite
  @param  Nmrx_NmrExpPrototype parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmrx_AtomSite Nmrx_AtomSite_Init(Nmrx_NmrExpPrototype parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.NmrExpPrototype.AtomSite
  @param  Nmrx_NmrExpPrototype parent
  @param  char * isotopeCode
  @returns  the new object
**/
extern Nmrx_AtomSite Nmrx_AtomSite_Init_reqd(Nmrx_NmrExpPrototype parent, char * isotopeCode);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_AtomSite self
  @param  Impl_ApplicationData value
**/
extern void *Nmrx_AtomSite_RemoveApplicationData(Nmrx_AtomSite self, Impl_ApplicationData value);

/**
  Remove for 
ccp.nmr.NmrExpPrototype.AtomSite.expMeasurements

ExpMeasurements 
involving AtomSite
  @param  Nmrx_AtomSite self
  @param  Nmrx_ExpMeasurement value
**/
extern void *Nmrx_AtomSite_RemoveExpMeasurement(Nmrx_AtomSite self, Nmrx_ExpMeasurement value);

/**
  SetAttr for ccp.nmr.NmrExpPrototype.AtomSite
  @param  Nmrx_AtomSite self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Nmrx_AtomSite_Set(Nmrx_AtomSite self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrx_AtomSite self
  @param  Acco_AccessObject value
**/
extern void *Nmrx_AtomSite_SetAccess(Nmrx_AtomSite self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_AtomSite self
  @param  ApiList values
**/
extern void *Nmrx_AtomSite_SetApplicationData(Nmrx_AtomSite self, ApiList values);

/**
  Set for 
ccp.nmr.NmrExpPrototype.AtomSite.expMeasurements

ExpMeasurements 
involving AtomSite
  @param  Nmrx_AtomSite self
  @param  ApiSet values
**/
extern void *Nmrx_AtomSite_SetExpMeasurements(Nmrx_AtomSite self, ApiSet values);

/**
  Set for ccp.nmr.NmrExpPrototype.AtomSite.expTransfers

Magnetisation 
transfer (non-directional) connecting two AtomSites
  @param  Nmrx_AtomSite self
  @param  ApiSet values
**/
extern void *Nmrx_AtomSite_SetExpTransfers(Nmrx_AtomSite self, ApiSet values);

/**
  Set for ccp.nmr.NmrExpPrototype.AtomSite.isotopeCode

Isotope code for 
Isotope making up the ExpAtomSite
  @param  Nmrx_AtomSite self
  @param  ApiString value
**/
extern void *Nmrx_AtomSite_SetIsotopeCode(Nmrx_AtomSite self, ApiString value);

/**
  Set for ccp.nmr.NmrExpPrototype.AtomSite.maxNumber

Maximum number of 
occurrences of atom corresponding to atomSite. maxNumber 2 would mena no 
more than two atoms could appear in this position. If, for instance a 
carbon atomSite has a J coupling transfer to a proton AtomSite with 
maxNumber=2, it means that this ExpGraph will give no observable result 
for CH3 groups. May be set to zero, which indicates that no atoms of 
this type are allowed.
  @param  Nmrx_AtomSite self
  @param  ApiInteger value
**/
extern void *Nmrx_AtomSite_SetMaxNumber(Nmrx_AtomSite self, ApiInteger value);

/**
  Set for ccp.nmr.NmrExpPrototype.AtomSite.maxShift

maximum value of 
shift allowed for AtomSite, in ppm. Is not set in normal cases. Together 
with minShift serves to distinguish frequency-selective sites. For some 
common cases it is recommended to use standard limits :
Aliphatic 
carbon: <90ppm
Aromatic carbon: 90-150ppm
CO carbon: > 150ppm
CA (for 
proteins): 40-90ppm
  @param  Nmrx_AtomSite self
  @param  ApiFloat value
**/
extern void *Nmrx_AtomSite_SetMaxShift(Nmrx_AtomSite self, ApiFloat value);

/**
  Set for ccp.nmr.NmrExpPrototype.AtomSite.minNumber

Minimum number of 
occurrences of atom corresponding to atomSite. MinNumber two wiould mean 
at least two atoms. If, for instance a carbon atomSite has a J coupling 
transfer to a proton AtomSite with minNumber=2, it means that this 
ExpGraph will give observable results only for CH2 and  CH3 groups.
  @param  Nmrx_AtomSite self
  @param  ApiInteger value
**/
extern void *Nmrx_AtomSite_SetMinNumber(Nmrx_AtomSite self, ApiInteger value);

/**
  Set for ccp.nmr.NmrExpPrototype.AtomSite.minShift

minimum value of 
shift allowed for AtomSite, in ppm. Is not set in normal cases. Together 
with maxShift serves to distinguish frequency-selective sites. The most 
common use is for distinguishing CO, aliphatic carbon, and 'just' 
carbon.
Aliphatic carbon: <90ppm
Aromatic carbon: 90-150ppm
CO carbon: > 
150ppm
CA (for proteins): 40-90ppm
  @param  Nmrx_AtomSite self
  @param  ApiFloat value
**/
extern void *Nmrx_AtomSite_SetMinShift(Nmrx_AtomSite self, ApiFloat value);

/**
  Set for ccp.nmr.NmrExpPrototype.AtomSite.name

A short string to be used 
in generating experiment names. If the attribute is not set, the nucleus 
symbol should be used. Examples of names would be 'CO', 'CA', for e.g. 
HNCOCA.Note that the name does not have to match with protein or any 
other naming conventions (proteins use 'C', where we might use 'CO').
  @param  Nmrx_AtomSite self
  @param  ApiString value
**/
extern void *Nmrx_AtomSite_SetName(Nmrx_AtomSite self, ApiString value);

/**
  Set for ccp.nmr.NmrExpPrototype.AtomSite.numberStep

Integer step 
between allowed number of occurrences of atoms corresponding to this 
atomSite. If, for instance a carbon atomSite has a J coupling transfer 
to a proton AtomSite with minNumber=1 and numberStep = 2, there must be 
1, 3, 5, ... atoms corresponding to the AtomSite. Uased for instance to 
indicate 'carbon coupled to an odd number of protons', where you would 
have a carbon AtomSite, with a JCoupling ExpTransfer to a proton 
AtomSite witn minNumber 1 and numberStep 2.
  @param  Nmrx_AtomSite self
  @param  ApiInteger value
**/
extern void *Nmrx_AtomSite_SetNumberStep(Nmrx_AtomSite self, ApiInteger value);

/**
  Set for ccp.nmr.NmrExpPrototype.AtomSite.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmrx_AtomSite self
  @param  ApiInteger value
**/
extern void *Nmrx_AtomSite_SetSerial(Nmrx_AtomSite self, ApiInteger value);

/**
  Sorted for ccp.nmr.NmrExpPrototype.AtomSite.expGraphs

ExpGraphs whre 
AtomSite appears
  @param  Nmrx_AtomSite self
  @returns   the result
**/
extern ApiList Nmrx_AtomSite_SortedExpGraphs(Nmrx_AtomSite self);

/**
  Sorted for 
ccp.nmr.NmrExpPrototype.AtomSite.expMeasurements

ExpMeasurements 
involving AtomSite
  @param  Nmrx_AtomSite self
  @returns   the result
**/
extern ApiList Nmrx_AtomSite_SortedExpMeasurements(Nmrx_AtomSite self);

/**
  Sorted for ccp.nmr.NmrExpPrototype.AtomSite.expTransfers

Magnetisation 
transfer (non-directional) connecting two AtomSites
  @param  Nmrx_AtomSite self
  @returns   the result
**/
extern ApiList Nmrx_AtomSite_SortedExpTransfers(Nmrx_AtomSite self);

#endif /* __incl__ccp_api_nmr_NmrExpPrototype_AtomSite_h__ */
