
#ifndef __incl__ccpnmr_api_NameMapping_NameMapping_h__
#define __incl__ccpnmr_api_NameMapping_NameMapping_h__

#include "ccp.h"

/*
  This class groups all mappings between an external file format and the data model. It is used by the FormatConverter software.
*/

/* package ccpnmr.api.NameMapping */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_NameMapping self
  @param  Impl_ApplicationData value
**/
extern void *Nmap_NameMapping_AddApplicationData(Nmap_NameMapping self, Impl_ApplicationData value);

/**
  CheckAllValid for ccpnmr.NameMapping.NameMapping
  @param  Nmap_NameMapping self
  @param  ApiBoolean complete
**/
extern void *Nmap_NameMapping_CheckAllValid(Nmap_NameMapping self, ApiBoolean complete);

/**
  CheckValid for ccpnmr.NameMapping.NameMapping
  @param  Nmap_NameMapping self
  @param  ApiBoolean complete
**/
extern void *Nmap_NameMapping_CheckValid(Nmap_NameMapping self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_NameMapping self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmap_NameMapping_FindAllApplicationData(Nmap_NameMapping self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_NameMapping self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmap_NameMapping_FindAllApplicationData_keyval0(Nmap_NameMapping self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_NameMapping self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmap_NameMapping_FindAllApplicationData_keyval1(Nmap_NameMapping self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_NameMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmap_NameMapping_FindAllApplicationData_keyval2(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_NameMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmap_NameMapping_FindAllApplicationData_keyval3(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_NameMapping self
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
extern ApiList Nmap_NameMapping_FindAllApplicationData_keyval4(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccpnmr.NameMapping.NameMapping.atomMappings

child link to 
class AtomMapping
  @param  Nmap_NameMapping self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmap_NameMapping_FindAllAtomMappings(Nmap_NameMapping self, ApiMap conditions);

/**
  FindAll for ccpnmr.NameMapping.NameMapping.atomMappings

child link to 
class AtomMapping
  @param  Nmap_NameMapping self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmap_NameMapping_FindAllAtomMappings_keyval0(Nmap_NameMapping self);

/**
  FindAll for ccpnmr.NameMapping.NameMapping.atomMappings

child link to 
class AtomMapping
  @param  Nmap_NameMapping self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmap_NameMapping_FindAllAtomMappings_keyval1(Nmap_NameMapping self, char * key, ApiObject value);

/**
  FindAll for ccpnmr.NameMapping.NameMapping.atomMappings

child link to 
class AtomMapping
  @param  Nmap_NameMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmap_NameMapping_FindAllAtomMappings_keyval2(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccpnmr.NameMapping.NameMapping.atomMappings

child link to 
class AtomMapping
  @param  Nmap_NameMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmap_NameMapping_FindAllAtomMappings_keyval3(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccpnmr.NameMapping.NameMapping.atomMappings

child link to 
class AtomMapping
  @param  Nmap_NameMapping self
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
extern ApiSet Nmap_NameMapping_FindAllAtomMappings_keyval4(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccpnmr.NameMapping.NameMapping.chainMappings

child link to 
class ChainMapping
  @param  Nmap_NameMapping self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmap_NameMapping_FindAllChainMappings(Nmap_NameMapping self, ApiMap conditions);

/**
  FindAll for ccpnmr.NameMapping.NameMapping.chainMappings

child link to 
class ChainMapping
  @param  Nmap_NameMapping self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmap_NameMapping_FindAllChainMappings_keyval0(Nmap_NameMapping self);

/**
  FindAll for ccpnmr.NameMapping.NameMapping.chainMappings

child link to 
class ChainMapping
  @param  Nmap_NameMapping self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmap_NameMapping_FindAllChainMappings_keyval1(Nmap_NameMapping self, char * key, ApiObject value);

/**
  FindAll for ccpnmr.NameMapping.NameMapping.chainMappings

child link to 
class ChainMapping
  @param  Nmap_NameMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmap_NameMapping_FindAllChainMappings_keyval2(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccpnmr.NameMapping.NameMapping.chainMappings

child link to 
class ChainMapping
  @param  Nmap_NameMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmap_NameMapping_FindAllChainMappings_keyval3(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccpnmr.NameMapping.NameMapping.chainMappings

child link to 
class ChainMapping
  @param  Nmap_NameMapping self
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
extern ApiSet Nmap_NameMapping_FindAllChainMappings_keyval4(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccpnmr.NameMapping.NameMapping.moleculeMappings

child link 
to class MoleculeMapping
  @param  Nmap_NameMapping self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmap_NameMapping_FindAllMoleculeMappings(Nmap_NameMapping self, ApiMap conditions);

/**
  FindAll for ccpnmr.NameMapping.NameMapping.moleculeMappings

child link 
to class MoleculeMapping
  @param  Nmap_NameMapping self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmap_NameMapping_FindAllMoleculeMappings_keyval0(Nmap_NameMapping self);

/**
  FindAll for ccpnmr.NameMapping.NameMapping.moleculeMappings

child link 
to class MoleculeMapping
  @param  Nmap_NameMapping self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmap_NameMapping_FindAllMoleculeMappings_keyval1(Nmap_NameMapping self, char * key, ApiObject value);

/**
  FindAll for ccpnmr.NameMapping.NameMapping.moleculeMappings

child link 
to class MoleculeMapping
  @param  Nmap_NameMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmap_NameMapping_FindAllMoleculeMappings_keyval2(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccpnmr.NameMapping.NameMapping.moleculeMappings

child link 
to class MoleculeMapping
  @param  Nmap_NameMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmap_NameMapping_FindAllMoleculeMappings_keyval3(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccpnmr.NameMapping.NameMapping.moleculeMappings

child link 
to class MoleculeMapping
  @param  Nmap_NameMapping self
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
extern ApiSet Nmap_NameMapping_FindAllMoleculeMappings_keyval4(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccpnmr.NameMapping.NameMapping.resLinkMappings

child link 
to class ResonanceLinkMapping
  @param  Nmap_NameMapping self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmap_NameMapping_FindAllResLinkMappings(Nmap_NameMapping self, ApiMap conditions);

/**
  FindAll for ccpnmr.NameMapping.NameMapping.resLinkMappings

child link 
to class ResonanceLinkMapping
  @param  Nmap_NameMapping self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmap_NameMapping_FindAllResLinkMappings_keyval0(Nmap_NameMapping self);

/**
  FindAll for ccpnmr.NameMapping.NameMapping.resLinkMappings

child link 
to class ResonanceLinkMapping
  @param  Nmap_NameMapping self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmap_NameMapping_FindAllResLinkMappings_keyval1(Nmap_NameMapping self, char * key, ApiObject value);

/**
  FindAll for ccpnmr.NameMapping.NameMapping.resLinkMappings

child link 
to class ResonanceLinkMapping
  @param  Nmap_NameMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmap_NameMapping_FindAllResLinkMappings_keyval2(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccpnmr.NameMapping.NameMapping.resLinkMappings

child link 
to class ResonanceLinkMapping
  @param  Nmap_NameMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmap_NameMapping_FindAllResLinkMappings_keyval3(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccpnmr.NameMapping.NameMapping.resLinkMappings

child link 
to class ResonanceLinkMapping
  @param  Nmap_NameMapping self
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
extern ApiSet Nmap_NameMapping_FindAllResLinkMappings_keyval4(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccpnmr.NameMapping.NameMapping.resStatusMappings

child link 
to class ResonanceStatusMapping
  @param  Nmap_NameMapping self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmap_NameMapping_FindAllResStatusMappings(Nmap_NameMapping self, ApiMap conditions);

/**
  FindAll for ccpnmr.NameMapping.NameMapping.resStatusMappings

child link 
to class ResonanceStatusMapping
  @param  Nmap_NameMapping self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmap_NameMapping_FindAllResStatusMappings_keyval0(Nmap_NameMapping self);

/**
  FindAll for ccpnmr.NameMapping.NameMapping.resStatusMappings

child link 
to class ResonanceStatusMapping
  @param  Nmap_NameMapping self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmap_NameMapping_FindAllResStatusMappings_keyval1(Nmap_NameMapping self, char * key, ApiObject value);

/**
  FindAll for ccpnmr.NameMapping.NameMapping.resStatusMappings

child link 
to class ResonanceStatusMapping
  @param  Nmap_NameMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmap_NameMapping_FindAllResStatusMappings_keyval2(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccpnmr.NameMapping.NameMapping.resStatusMappings

child link 
to class ResonanceStatusMapping
  @param  Nmap_NameMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmap_NameMapping_FindAllResStatusMappings_keyval3(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccpnmr.NameMapping.NameMapping.resStatusMappings

child link 
to class ResonanceStatusMapping
  @param  Nmap_NameMapping self
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
extern ApiSet Nmap_NameMapping_FindAllResStatusMappings_keyval4(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_NameMapping self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmap_NameMapping_FindFirstApplicationData(Nmap_NameMapping self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_NameMapping self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmap_NameMapping_FindFirstApplicationData_keyval0(Nmap_NameMapping self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_NameMapping self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmap_NameMapping_FindFirstApplicationData_keyval1(Nmap_NameMapping self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_NameMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmap_NameMapping_FindFirstApplicationData_keyval2(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_NameMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmap_NameMapping_FindFirstApplicationData_keyval3(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_NameMapping self
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
extern Impl_ApplicationData Nmap_NameMapping_FindFirstApplicationData_keyval4(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccpnmr.NameMapping.NameMapping.atomMappings

child link to 
class AtomMapping
  @param  Nmap_NameMapping self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmap_AtomMapping Nmap_NameMapping_FindFirstAtomMapping(Nmap_NameMapping self, ApiMap conditions);

/**
  FindFirst for ccpnmr.NameMapping.NameMapping.atomMappings

child link to 
class AtomMapping
  @param  Nmap_NameMapping self
  @returns  the first value that satisfies the conditions 
**/
extern Nmap_AtomMapping Nmap_NameMapping_FindFirstAtomMapping_keyval0(Nmap_NameMapping self);

/**
  FindFirst for ccpnmr.NameMapping.NameMapping.atomMappings

child link to 
class AtomMapping
  @param  Nmap_NameMapping self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmap_AtomMapping Nmap_NameMapping_FindFirstAtomMapping_keyval1(Nmap_NameMapping self, char * key, ApiObject value);

/**
  FindFirst for ccpnmr.NameMapping.NameMapping.atomMappings

child link to 
class AtomMapping
  @param  Nmap_NameMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmap_AtomMapping Nmap_NameMapping_FindFirstAtomMapping_keyval2(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccpnmr.NameMapping.NameMapping.atomMappings

child link to 
class AtomMapping
  @param  Nmap_NameMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmap_AtomMapping Nmap_NameMapping_FindFirstAtomMapping_keyval3(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccpnmr.NameMapping.NameMapping.atomMappings

child link to 
class AtomMapping
  @param  Nmap_NameMapping self
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
extern Nmap_AtomMapping Nmap_NameMapping_FindFirstAtomMapping_keyval4(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccpnmr.NameMapping.NameMapping.chainMappings

child link 
to class ChainMapping
  @param  Nmap_NameMapping self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmap_ChainMapping Nmap_NameMapping_FindFirstChainMapping(Nmap_NameMapping self, ApiMap conditions);

/**
  FindFirst for ccpnmr.NameMapping.NameMapping.chainMappings

child link 
to class ChainMapping
  @param  Nmap_NameMapping self
  @returns  the first value that satisfies the conditions 
**/
extern Nmap_ChainMapping Nmap_NameMapping_FindFirstChainMapping_keyval0(Nmap_NameMapping self);

/**
  FindFirst for ccpnmr.NameMapping.NameMapping.chainMappings

child link 
to class ChainMapping
  @param  Nmap_NameMapping self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmap_ChainMapping Nmap_NameMapping_FindFirstChainMapping_keyval1(Nmap_NameMapping self, char * key, ApiObject value);

/**
  FindFirst for ccpnmr.NameMapping.NameMapping.chainMappings

child link 
to class ChainMapping
  @param  Nmap_NameMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmap_ChainMapping Nmap_NameMapping_FindFirstChainMapping_keyval2(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccpnmr.NameMapping.NameMapping.chainMappings

child link 
to class ChainMapping
  @param  Nmap_NameMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmap_ChainMapping Nmap_NameMapping_FindFirstChainMapping_keyval3(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccpnmr.NameMapping.NameMapping.chainMappings

child link 
to class ChainMapping
  @param  Nmap_NameMapping self
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
extern Nmap_ChainMapping Nmap_NameMapping_FindFirstChainMapping_keyval4(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccpnmr.NameMapping.NameMapping.moleculeMappings

child 
link to class MoleculeMapping
  @param  Nmap_NameMapping self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmap_MoleculeMapping Nmap_NameMapping_FindFirstMoleculeMapping(Nmap_NameMapping self, ApiMap conditions);

/**
  FindFirst for ccpnmr.NameMapping.NameMapping.moleculeMappings

child 
link to class MoleculeMapping
  @param  Nmap_NameMapping self
  @returns  the first value that satisfies the conditions 
**/
extern Nmap_MoleculeMapping Nmap_NameMapping_FindFirstMoleculeMapping_keyval0(Nmap_NameMapping self);

/**
  FindFirst for ccpnmr.NameMapping.NameMapping.moleculeMappings

child 
link to class MoleculeMapping
  @param  Nmap_NameMapping self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmap_MoleculeMapping Nmap_NameMapping_FindFirstMoleculeMapping_keyval1(Nmap_NameMapping self, char * key, ApiObject value);

/**
  FindFirst for ccpnmr.NameMapping.NameMapping.moleculeMappings

child 
link to class MoleculeMapping
  @param  Nmap_NameMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmap_MoleculeMapping Nmap_NameMapping_FindFirstMoleculeMapping_keyval2(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccpnmr.NameMapping.NameMapping.moleculeMappings

child 
link to class MoleculeMapping
  @param  Nmap_NameMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmap_MoleculeMapping Nmap_NameMapping_FindFirstMoleculeMapping_keyval3(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccpnmr.NameMapping.NameMapping.moleculeMappings

child 
link to class MoleculeMapping
  @param  Nmap_NameMapping self
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
extern Nmap_MoleculeMapping Nmap_NameMapping_FindFirstMoleculeMapping_keyval4(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccpnmr.NameMapping.NameMapping.resLinkMappings

child link 
to class ResonanceLinkMapping
  @param  Nmap_NameMapping self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmap_ResonanceLinkMapping Nmap_NameMapping_FindFirstResLinkMapping(Nmap_NameMapping self, ApiMap conditions);

/**
  FindFirst for ccpnmr.NameMapping.NameMapping.resLinkMappings

child link 
to class ResonanceLinkMapping
  @param  Nmap_NameMapping self
  @returns  the first value that satisfies the conditions 
**/
extern Nmap_ResonanceLinkMapping Nmap_NameMapping_FindFirstResLinkMapping_keyval0(Nmap_NameMapping self);

/**
  FindFirst for ccpnmr.NameMapping.NameMapping.resLinkMappings

child link 
to class ResonanceLinkMapping
  @param  Nmap_NameMapping self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmap_ResonanceLinkMapping Nmap_NameMapping_FindFirstResLinkMapping_keyval1(Nmap_NameMapping self, char * key, ApiObject value);

/**
  FindFirst for ccpnmr.NameMapping.NameMapping.resLinkMappings

child link 
to class ResonanceLinkMapping
  @param  Nmap_NameMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmap_ResonanceLinkMapping Nmap_NameMapping_FindFirstResLinkMapping_keyval2(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccpnmr.NameMapping.NameMapping.resLinkMappings

child link 
to class ResonanceLinkMapping
  @param  Nmap_NameMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmap_ResonanceLinkMapping Nmap_NameMapping_FindFirstResLinkMapping_keyval3(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccpnmr.NameMapping.NameMapping.resLinkMappings

child link 
to class ResonanceLinkMapping
  @param  Nmap_NameMapping self
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
extern Nmap_ResonanceLinkMapping Nmap_NameMapping_FindFirstResLinkMapping_keyval4(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccpnmr.NameMapping.NameMapping.resStatusMappings

child 
link to class ResonanceStatusMapping
  @param  Nmap_NameMapping self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmap_ResonanceStatusMapping Nmap_NameMapping_FindFirstResStatusMapping(Nmap_NameMapping self, ApiMap conditions);

/**
  FindFirst for ccpnmr.NameMapping.NameMapping.resStatusMappings

child 
link to class ResonanceStatusMapping
  @param  Nmap_NameMapping self
  @returns  the first value that satisfies the conditions 
**/
extern Nmap_ResonanceStatusMapping Nmap_NameMapping_FindFirstResStatusMapping_keyval0(Nmap_NameMapping self);

/**
  FindFirst for ccpnmr.NameMapping.NameMapping.resStatusMappings

child 
link to class ResonanceStatusMapping
  @param  Nmap_NameMapping self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmap_ResonanceStatusMapping Nmap_NameMapping_FindFirstResStatusMapping_keyval1(Nmap_NameMapping self, char * key, ApiObject value);

/**
  FindFirst for ccpnmr.NameMapping.NameMapping.resStatusMappings

child 
link to class ResonanceStatusMapping
  @param  Nmap_NameMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmap_ResonanceStatusMapping Nmap_NameMapping_FindFirstResStatusMapping_keyval2(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccpnmr.NameMapping.NameMapping.resStatusMappings

child 
link to class ResonanceStatusMapping
  @param  Nmap_NameMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmap_ResonanceStatusMapping Nmap_NameMapping_FindFirstResStatusMapping_keyval3(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccpnmr.NameMapping.NameMapping.resStatusMappings

child 
link to class ResonanceStatusMapping
  @param  Nmap_NameMapping self
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
extern Nmap_ResonanceStatusMapping Nmap_NameMapping_FindFirstResStatusMapping_keyval4(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccpnmr.NameMapping.NameMapping
  @param  Nmap_NameMapping self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Nmap_NameMapping_Get(Nmap_NameMapping self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmap_NameMapping self
  @returns   the result
**/
extern Acco_AccessObject Nmap_NameMapping_GetAccess(Nmap_NameMapping self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Nmap_NameMapping self
  @returns   the result
**/
extern Acco_AccessObject Nmap_NameMapping_GetActiveAccess(Nmap_NameMapping self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_NameMapping self
  @returns   the result
**/
extern ApiList Nmap_NameMapping_GetApplicationData(Nmap_NameMapping self);

/**
  Get for ccpnmr.NameMapping.NameMapping.atomMappings

child link to class 
AtomMapping
  @param  Nmap_NameMapping self
  @returns   the result
**/
extern ApiSet Nmap_NameMapping_GetAtomMappings(Nmap_NameMapping self);

/**
  GetByKey for ccpnmr.NameMapping.NameMapping
  @param  Nmap_NameMapping self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Nmap_NameMapping Nmap_NameMapping_GetByKey(Nmap_NameMapping self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for ccpnmr.NameMapping.NameMapping.chainMappings

child link to 
class ChainMapping
  @param  Nmap_NameMapping self
  @returns   the result
**/
extern ApiSet Nmap_NameMapping_GetChainMappings(Nmap_NameMapping self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Nmap_NameMapping self
  @returns   the result
**/
extern ApiString Nmap_NameMapping_GetClassName(Nmap_NameMapping self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Nmap_NameMapping self
  @returns   the result
**/
extern ApiList Nmap_NameMapping_GetFieldNames(Nmap_NameMapping self);

/**
  Get for ccpnmr.NameMapping.NameMapping.formatName

The name of the 
external format (e.g. XEASY, NmrView, ..)
  @param  Nmap_NameMapping self
  @returns   the result
**/
extern ApiString Nmap_NameMapping_GetFormatName(Nmap_NameMapping self);

/**
  GetFullKey for ccpnmr.NameMapping.NameMapping
  @param  Nmap_NameMapping self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Nmap_NameMapping_GetFullKey(Nmap_NameMapping self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Nmap_NameMapping self
  @returns   the result
**/
extern ApiBoolean Nmap_NameMapping_GetInConstructor(Nmap_NameMapping self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Nmap_NameMapping self
  @returns   the result
**/
extern ApiBoolean Nmap_NameMapping_GetIsDeleted(Nmap_NameMapping self);

/**
  Get for ccpnmr.NameMapping.NameMapping.isOriginalImport

Flag that has 
to be set when this mapping was created when importing a file.
  @param  Nmap_NameMapping self
  @returns   the result
**/
extern ApiBoolean Nmap_NameMapping_GetIsOriginalImport(Nmap_NameMapping self);

/**
  GetLocalKey for ccpnmr.NameMapping.NameMapping
  @param  Nmap_NameMapping self
  @returns  Local object key
**/
extern ApiObject Nmap_NameMapping_GetLocalKey(Nmap_NameMapping self);

/**
  Get for ccpnmr.NameMapping.NameMapping.moleculeMappings

child link to 
class MoleculeMapping
  @param  Nmap_NameMapping self
  @returns   the result
**/
extern ApiSet Nmap_NameMapping_GetMoleculeMappings(Nmap_NameMapping self);

/**
  Get for ccpnmr.NameMapping.NameMapping.nameMappingStore

parent link
  @param  Nmap_NameMapping self
  @returns   the result
**/
extern Nmap_NameMappingStore Nmap_NameMapping_GetNameMappingStore(Nmap_NameMapping self);

/**
  Get for ccpnmr.NameMapping.NameMapping.namingSystem

The naming system 
used in this particular mapping (e.g. IUPAC, PDB, ...). This can be 
different from the formatName - for example an NMR-STAR file might 
contain only X-PLOR author names in some cases.
  @param  Nmap_NameMapping self
  @returns   the result
**/
extern ApiString Nmap_NameMapping_GetNamingSystem(Nmap_NameMapping self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Nmap_NameMapping self
  @returns   the result
**/
extern ApiString Nmap_NameMapping_GetPackageName(Nmap_NameMapping self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Nmap_NameMapping self
  @returns   the result
**/
extern ApiString Nmap_NameMapping_GetPackageShortName(Nmap_NameMapping self);

/**
  Get for ccpnmr.NameMapping.NameMapping.parent

link to parent object - 
synonym for nameMappingStore
  @param  Nmap_NameMapping self
  @returns   the result
**/
extern Nmap_NameMappingStore Nmap_NameMapping_GetParent(Nmap_NameMapping self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Nmap_NameMapping self
  @returns   the result
**/
extern ApiString Nmap_NameMapping_GetQualifiedName(Nmap_NameMapping self);

/**
  Get for ccpnmr.NameMapping.NameMapping.resLinkMappings

child link to 
class ResonanceLinkMapping
  @param  Nmap_NameMapping self
  @returns   the result
**/
extern ApiSet Nmap_NameMapping_GetResLinkMappings(Nmap_NameMapping self);

/**
  Get for ccpnmr.NameMapping.NameMapping.resStatusMappings

child link to 
class ResonanceStatusMapping
  @param  Nmap_NameMapping self
  @returns   the result
**/
extern ApiSet Nmap_NameMapping_GetResStatusMappings(Nmap_NameMapping self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Nmap_NameMapping self
  @returns   the result
**/
extern Impl_MemopsRoot Nmap_NameMapping_GetRoot(Nmap_NameMapping self);

/**
  Get for ccpnmr.NameMapping.NameMapping.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Nmap_NameMapping self
  @returns   the result
**/
extern ApiInteger Nmap_NameMapping_GetSerial(Nmap_NameMapping self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Nmap_NameMapping self
  @returns   the result
**/
extern Impl_TopObject Nmap_NameMapping_GetTopObject(Nmap_NameMapping self);

/**
  Constructor for ccpnmr.NameMapping.NameMapping
  @param  Nmap_NameMappingStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmap_NameMapping Nmap_NameMapping_Init(Nmap_NameMappingStore parent, ApiMap attrlinks);

/**
  Constructor for ccpnmr.NameMapping.NameMapping
  @param  Nmap_NameMappingStore parent
  @param  char * formatName
  @param  char * namingSystem
  @returns  the new object
**/
extern Nmap_NameMapping Nmap_NameMapping_Init_reqd(Nmap_NameMappingStore parent, char * formatName, char * namingSystem);

/**
  Factory function to create ccpnmr.NameMapping.AtomMapping
  @param  Nmap_NameMapping self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmap_AtomMapping Nmap_NameMapping_NewAtomMapping(Nmap_NameMapping self, ApiMap attrlinks);

/**
  Factory function to create ccpnmr.NameMapping.AtomMapping
  @param  Nmap_NameMapping self
  @param  char * formatName
  @param  char * name
  @returns  the new object
**/
extern Nmap_AtomMapping Nmap_NameMapping_NewAtomMapping_reqd(Nmap_NameMapping self, char * formatName, char * name);

/**
  Factory function to create ccpnmr.NameMapping.ChainMapping
  @param  Nmap_NameMapping self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmap_ChainMapping Nmap_NameMapping_NewChainMapping(Nmap_NameMapping self, ApiMap attrlinks);

/**
  Factory function to create ccpnmr.NameMapping.ChainMapping
  @param  Nmap_NameMapping self
  @param  char * chainCode
  @param  char * formatChainCode
  @param  ApiInteger formatFirstSeqCode
  @returns  the new object
**/
extern Nmap_ChainMapping Nmap_NameMapping_NewChainMapping_reqd(Nmap_NameMapping self, char * chainCode, char * formatChainCode, ApiInteger formatFirstSeqCode);

/**
  Factory function to create ccpnmr.NameMapping.MoleculeMapping
  @param  Nmap_NameMapping self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmap_MoleculeMapping Nmap_NameMapping_NewMoleculeMapping(Nmap_NameMapping self, ApiMap attrlinks);

/**
  Factory function to create ccpnmr.NameMapping.MoleculeMapping
  @param  Nmap_NameMapping self
  @param  char * formatName
  @param  char * name
  @returns  the new object
**/
extern Nmap_MoleculeMapping Nmap_NameMapping_NewMoleculeMapping_reqd(Nmap_NameMapping self, char * formatName, char * name);

/**
  Factory function to create ccpnmr.NameMapping.ResonanceLinkMapping
  @param  Nmap_NameMapping self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmap_ResonanceLinkMapping Nmap_NameMapping_NewResonanceLinkMapping(Nmap_NameMapping self, ApiMap attrlinks);

/**
  Factory function to create ccpnmr.NameMapping.ResonanceLinkMapping
  @param  Nmap_NameMapping self
  @param  char * resonanceName
  @returns  the new object
**/
extern Nmap_ResonanceLinkMapping Nmap_NameMapping_NewResonanceLinkMapping_reqd(Nmap_NameMapping self, char * resonanceName);

/**
  Factory function to create ccpnmr.NameMapping.ResonanceStatusMapping
  @param  Nmap_NameMapping self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmap_ResonanceStatusMapping Nmap_NameMapping_NewResonanceStatusMapping(Nmap_NameMapping self, ApiMap attrlinks);

/**
  Factory function to create ccpnmr.NameMapping.ResonanceStatusMapping
  @param  Nmap_NameMapping self
  @param  char * resonanceName
  @returns  the new object
**/
extern Nmap_ResonanceStatusMapping Nmap_NameMapping_NewResonanceStatusMapping_reqd(Nmap_NameMapping self, char * resonanceName);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_NameMapping self
  @param  Impl_ApplicationData value
**/
extern void *Nmap_NameMapping_RemoveApplicationData(Nmap_NameMapping self, Impl_ApplicationData value);

/**
  SetAttr for ccpnmr.NameMapping.NameMapping
  @param  Nmap_NameMapping self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Nmap_NameMapping_Set(Nmap_NameMapping self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmap_NameMapping self
  @param  Acco_AccessObject value
**/
extern void *Nmap_NameMapping_SetAccess(Nmap_NameMapping self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_NameMapping self
  @param  ApiList values
**/
extern void *Nmap_NameMapping_SetApplicationData(Nmap_NameMapping self, ApiList values);

/**
  Set for ccpnmr.NameMapping.NameMapping.formatName

The name of the 
external format (e.g. XEASY, NmrView, ..)
  @param  Nmap_NameMapping self
  @param  ApiString value
**/
extern void *Nmap_NameMapping_SetFormatName(Nmap_NameMapping self, ApiString value);

/**
  Set for ccpnmr.NameMapping.NameMapping.isOriginalImport

Flag that has 
to be set when this mapping was created when importing a file.
  @param  Nmap_NameMapping self
  @param  ApiBoolean value
**/
extern void *Nmap_NameMapping_SetIsOriginalImport(Nmap_NameMapping self, ApiBoolean value);

/**
  Set for ccpnmr.NameMapping.NameMapping.namingSystem

The naming system 
used in this particular mapping (e.g. IUPAC, PDB, ...). This can be 
different from the formatName - for example an NMR-STAR file might 
contain only X-PLOR author names in some cases.
  @param  Nmap_NameMapping self
  @param  ApiString value
**/
extern void *Nmap_NameMapping_SetNamingSystem(Nmap_NameMapping self, ApiString value);

/**
  Set for ccpnmr.NameMapping.NameMapping.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Nmap_NameMapping self
  @param  ApiInteger value
**/
extern void *Nmap_NameMapping_SetSerial(Nmap_NameMapping self, ApiInteger value);

/**
  Sorted for ccpnmr.NameMapping.NameMapping.atomMappings

child link to 
class AtomMapping
  @param  Nmap_NameMapping self
  @returns   the result
**/
extern ApiList Nmap_NameMapping_SortedAtomMappings(Nmap_NameMapping self);

/**
  Sorted for ccpnmr.NameMapping.NameMapping.chainMappings

child link to 
class ChainMapping
  @param  Nmap_NameMapping self
  @returns   the result
**/
extern ApiList Nmap_NameMapping_SortedChainMappings(Nmap_NameMapping self);

/**
  Sorted for ccpnmr.NameMapping.NameMapping.moleculeMappings

child link 
to class MoleculeMapping
  @param  Nmap_NameMapping self
  @returns   the result
**/
extern ApiList Nmap_NameMapping_SortedMoleculeMappings(Nmap_NameMapping self);

/**
  Sorted for ccpnmr.NameMapping.NameMapping.resLinkMappings

child link to 
class ResonanceLinkMapping
  @param  Nmap_NameMapping self
  @returns   the result
**/
extern ApiList Nmap_NameMapping_SortedResLinkMappings(Nmap_NameMapping self);

/**
  Sorted for ccpnmr.NameMapping.NameMapping.resStatusMappings

child link 
to class ResonanceStatusMapping
  @param  Nmap_NameMapping self
  @returns   the result
**/
extern ApiList Nmap_NameMapping_SortedResStatusMappings(Nmap_NameMapping self);

#endif /* __incl__ccpnmr_api_NameMapping_NameMapping_h__ */
