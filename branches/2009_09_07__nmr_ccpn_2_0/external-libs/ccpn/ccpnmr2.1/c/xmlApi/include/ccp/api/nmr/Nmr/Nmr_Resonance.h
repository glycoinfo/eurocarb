
#ifndef __incl__ccp_api_nmr_Nmr_Resonance_h__
#define __incl__ccp_api_nmr_Nmr_Resonance_h__

#include "ccp.h"

/*
  A connection record for assignment. 'Stands for' a single Atom or group of atoms in fast exchange. 
  
  The Resonance holds a central place in the Nmr package, as almost all assignment, of Chemical shifts, Atoms, Constraints, Peaks etc. is done through the intermediary of a Resonance. This allows the relationship between Shifts, Peaks, Constraints, (...) to be described precisely without first assigning the Nmr spectrum, provides a simple mechanism for handling prochiral groups, and in general permits greater flexibility.
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Resonance self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_Resonance_AddApplicationData(Nmr_Resonance self, Impl_ApplicationData value);

/**
  Add for ccp.nmr.Nmr.Resonance.assignNames

Names of AtomSets to which 
Resonance should or could be assigned. Must be in the CCPN (=IUPAC) 
nomenclature. Allows you to fix assignments when you know only the 
residue type (e.g. Leu) not the residue number. Examples (all for Leu): 
('HG'), ('CA'), non-stereospecific ('HB2','HB3') or ('HD1*','HD2*'), 
stereospecific ('HB2') or ('HD1*'), mixed ('HB2','HB3','HG').
  @param  Nmr_Resonance self
  @param  ApiString value
**/
extern void *Nmr_Resonance_AddAssignName(Nmr_Resonance self, ApiString value);

/**
  Add for ccp.nmr.Nmr.Resonance.chainStates

ChainState in which this 
Resonance can be found
  @param  Nmr_Resonance self
  @param  Nmr_ChainState value
**/
extern void *Nmr_Resonance_AddChainState(Nmr_Resonance self, Nmr_ChainState value);

/**
  Add for ccp.nmr.Nmr.Resonance.covalentlyBound

Resonances on both ends 
stand for atoms that are covalently linked.
  @param  Nmr_Resonance self
  @param  Nmr_Resonance value
**/
extern void *Nmr_Resonance_AddCovalentlyBound(Nmr_Resonance self, Nmr_Resonance value);

/**
  Add for ccp.nmr.Nmr.Resonance.datums

Measurements of non-predefined 
type relevant for Resonance
  @param  Nmr_Resonance self
  @param  Nmr_Datum value
**/
extern void *Nmr_Resonance_AddDatum(Nmr_Resonance self, Nmr_Datum value);

/**
  CheckAllValid for ccp.nmr.Nmr.Resonance
  @param  Nmr_Resonance self
  @param  ApiBoolean complete
**/
extern void *Nmr_Resonance_CheckAllValid(Nmr_Resonance self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.Nmr.Resonance
  @param  Nmr_Resonance self
  @param  ApiBoolean complete
**/
extern void *Nmr_Resonance_CheckValid(Nmr_Resonance self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_Resonance_FindAllApplicationData(Nmr_Resonance self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Resonance self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_Resonance_FindAllApplicationData_keyval0(Nmr_Resonance self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_Resonance_FindAllApplicationData_keyval1(Nmr_Resonance self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_Resonance_FindAllApplicationData_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_Resonance_FindAllApplicationData_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Resonance self
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
extern ApiList Nmr_Resonance_FindAllApplicationData_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.Resonance.chainStates

ChainState in which this 
Resonance can be found
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllChainStates(Nmr_Resonance self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.Resonance.chainStates

ChainState in which this 
Resonance can be found
  @param  Nmr_Resonance self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllChainStates_keyval0(Nmr_Resonance self);

/**
  FindAll for ccp.nmr.Nmr.Resonance.chainStates

ChainState in which this 
Resonance can be found
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllChainStates_keyval1(Nmr_Resonance self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.Resonance.chainStates

ChainState in which this 
Resonance can be found
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllChainStates_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.Resonance.chainStates

ChainState in which this 
Resonance can be found
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllChainStates_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.Resonance.chainStates

ChainState in which this 
Resonance can be found
  @param  Nmr_Resonance self
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
extern ApiSet Nmr_Resonance_FindAllChainStates_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.Resonance.covalentlyBound

Resonances on both 
ends stand for atoms that are covalently linked.
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllCovalentlyBound(Nmr_Resonance self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.Resonance.covalentlyBound

Resonances on both 
ends stand for atoms that are covalently linked.
  @param  Nmr_Resonance self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllCovalentlyBound_keyval0(Nmr_Resonance self);

/**
  FindAll for ccp.nmr.Nmr.Resonance.covalentlyBound

Resonances on both 
ends stand for atoms that are covalently linked.
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllCovalentlyBound_keyval1(Nmr_Resonance self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.Resonance.covalentlyBound

Resonances on both 
ends stand for atoms that are covalently linked.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllCovalentlyBound_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.Resonance.covalentlyBound

Resonances on both 
ends stand for atoms that are covalently linked.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllCovalentlyBound_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.Resonance.covalentlyBound

Resonances on both 
ends stand for atoms that are covalently linked.
  @param  Nmr_Resonance self
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
extern ApiSet Nmr_Resonance_FindAllCovalentlyBound_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.Resonance.datums

Measurements of non-predefined 
type relevant for Resonance
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllDatums(Nmr_Resonance self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.Resonance.datums

Measurements of non-predefined 
type relevant for Resonance
  @param  Nmr_Resonance self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllDatums_keyval0(Nmr_Resonance self);

/**
  FindAll for ccp.nmr.Nmr.Resonance.datums

Measurements of non-predefined 
type relevant for Resonance
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllDatums_keyval1(Nmr_Resonance self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.Resonance.datums

Measurements of non-predefined 
type relevant for Resonance
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllDatums_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.Resonance.datums

Measurements of non-predefined 
type relevant for Resonance
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllDatums_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.Resonance.datums

Measurements of non-predefined 
type relevant for Resonance
  @param  Nmr_Resonance self
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
extern ApiSet Nmr_Resonance_FindAllDatums_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.Resonance.dipolarRelaxations

Dipole-dipole 
relaxation measurements involving resonance.
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllDipolarRelaxations(Nmr_Resonance self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.Resonance.dipolarRelaxations

Dipole-dipole 
relaxation measurements involving resonance.
  @param  Nmr_Resonance self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllDipolarRelaxations_keyval0(Nmr_Resonance self);

/**
  FindAll for ccp.nmr.Nmr.Resonance.dipolarRelaxations

Dipole-dipole 
relaxation measurements involving resonance.
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllDipolarRelaxations_keyval1(Nmr_Resonance self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.Resonance.dipolarRelaxations

Dipole-dipole 
relaxation measurements involving resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllDipolarRelaxations_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.Resonance.dipolarRelaxations

Dipole-dipole 
relaxation measurements involving resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllDipolarRelaxations_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.Resonance.dipolarRelaxations

Dipole-dipole 
relaxation measurements involving resonance.
  @param  Nmr_Resonance self
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
extern ApiSet Nmr_Resonance_FindAllDipolarRelaxations_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.Resonance.hExchProtections

Hydrogen exchange 
rate protection factor measurements for resonance.
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllHExchProtections(Nmr_Resonance self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.Resonance.hExchProtections

Hydrogen exchange 
rate protection factor measurements for resonance.
  @param  Nmr_Resonance self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllHExchProtections_keyval0(Nmr_Resonance self);

/**
  FindAll for ccp.nmr.Nmr.Resonance.hExchProtections

Hydrogen exchange 
rate protection factor measurements for resonance.
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllHExchProtections_keyval1(Nmr_Resonance self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.Resonance.hExchProtections

Hydrogen exchange 
rate protection factor measurements for resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllHExchProtections_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.Resonance.hExchProtections

Hydrogen exchange 
rate protection factor measurements for resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllHExchProtections_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.Resonance.hExchProtections

Hydrogen exchange 
rate protection factor measurements for resonance.
  @param  Nmr_Resonance self
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
extern ApiSet Nmr_Resonance_FindAllHExchProtections_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.Resonance.hExchRates

Hydrogen exchange rate 
measurements for resonance.
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllHExchRates(Nmr_Resonance self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.Resonance.hExchRates

Hydrogen exchange rate 
measurements for resonance.
  @param  Nmr_Resonance self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllHExchRates_keyval0(Nmr_Resonance self);

/**
  FindAll for ccp.nmr.Nmr.Resonance.hExchRates

Hydrogen exchange rate 
measurements for resonance.
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllHExchRates_keyval1(Nmr_Resonance self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.Resonance.hExchRates

Hydrogen exchange rate 
measurements for resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllHExchRates_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.Resonance.hExchRates

Hydrogen exchange rate 
measurements for resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllHExchRates_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.Resonance.hExchRates

Hydrogen exchange rate 
measurements for resonance.
  @param  Nmr_Resonance self
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
extern ApiSet Nmr_Resonance_FindAllHExchRates_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.Resonance.isotropicS2s

Isotropic order 
parameter values that apply to reonance.
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllIsotropicS2s(Nmr_Resonance self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.Resonance.isotropicS2s

Isotropic order 
parameter values that apply to reonance.
  @param  Nmr_Resonance self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllIsotropicS2s_keyval0(Nmr_Resonance self);

/**
  FindAll for ccp.nmr.Nmr.Resonance.isotropicS2s

Isotropic order 
parameter values that apply to reonance.
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllIsotropicS2s_keyval1(Nmr_Resonance self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.Resonance.isotropicS2s

Isotropic order 
parameter values that apply to reonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllIsotropicS2s_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.Resonance.isotropicS2s

Isotropic order 
parameter values that apply to reonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllIsotropicS2s_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.Resonance.isotropicS2s

Isotropic order 
parameter values that apply to reonance.
  @param  Nmr_Resonance self
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
extern ApiSet Nmr_Resonance_FindAllIsotropicS2s_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.Resonance.jCouplings

J coupling measurements 
for resonance
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllJCouplings(Nmr_Resonance self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.Resonance.jCouplings

J coupling measurements 
for resonance
  @param  Nmr_Resonance self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllJCouplings_keyval0(Nmr_Resonance self);

/**
  FindAll for ccp.nmr.Nmr.Resonance.jCouplings

J coupling measurements 
for resonance
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllJCouplings_keyval1(Nmr_Resonance self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.Resonance.jCouplings

J coupling measurements 
for resonance
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllJCouplings_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.Resonance.jCouplings

J coupling measurements 
for resonance
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllJCouplings_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.Resonance.jCouplings

J coupling measurements 
for resonance
  @param  Nmr_Resonance self
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
extern ApiSet Nmr_Resonance_FindAllJCouplings_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.Resonance.noes

Homonuclear NOEs in which 
Resonance is involved
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllNoes(Nmr_Resonance self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.Resonance.noes

Homonuclear NOEs in which 
Resonance is involved
  @param  Nmr_Resonance self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllNoes_keyval0(Nmr_Resonance self);

/**
  FindAll for ccp.nmr.Nmr.Resonance.noes

Homonuclear NOEs in which 
Resonance is involved
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllNoes_keyval1(Nmr_Resonance self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.Resonance.noes

Homonuclear NOEs in which 
Resonance is involved
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllNoes_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.Resonance.noes

Homonuclear NOEs in which 
Resonance is involved
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllNoes_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.Resonance.noes

Homonuclear NOEs in which 
Resonance is involved
  @param  Nmr_Resonance self
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
extern ApiSet Nmr_Resonance_FindAllNoes_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.Resonance.peakDimContribNs

PeakDimContribNs 
assigned to Resonance
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllPeakDimContribNs(Nmr_Resonance self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.Resonance.peakDimContribNs

PeakDimContribNs 
assigned to Resonance
  @param  Nmr_Resonance self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllPeakDimContribNs_keyval0(Nmr_Resonance self);

/**
  FindAll for ccp.nmr.Nmr.Resonance.peakDimContribNs

PeakDimContribNs 
assigned to Resonance
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllPeakDimContribNs_keyval1(Nmr_Resonance self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.Resonance.peakDimContribNs

PeakDimContribNs 
assigned to Resonance
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllPeakDimContribNs_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.Resonance.peakDimContribNs

PeakDimContribNs 
assigned to Resonance
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllPeakDimContribNs_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.Resonance.peakDimContribNs

PeakDimContribNs 
assigned to Resonance
  @param  Nmr_Resonance self
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
extern ApiSet Nmr_Resonance_FindAllPeakDimContribNs_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.Resonance.peakDimContribs

PeakDimContribs 
assigned to Resonance
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllPeakDimContribs(Nmr_Resonance self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.Resonance.peakDimContribs

PeakDimContribs 
assigned to Resonance
  @param  Nmr_Resonance self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllPeakDimContribs_keyval0(Nmr_Resonance self);

/**
  FindAll for ccp.nmr.Nmr.Resonance.peakDimContribs

PeakDimContribs 
assigned to Resonance
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllPeakDimContribs_keyval1(Nmr_Resonance self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.Resonance.peakDimContribs

PeakDimContribs 
assigned to Resonance
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllPeakDimContribs_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.Resonance.peakDimContribs

PeakDimContribs 
assigned to Resonance
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllPeakDimContribs_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.Resonance.peakDimContribs

PeakDimContribs 
assigned to Resonance
  @param  Nmr_Resonance self
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
extern ApiSet Nmr_Resonance_FindAllPeakDimContribs_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.Resonance.pkas

pKa values associated with 
Resonance
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllPkas(Nmr_Resonance self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.Resonance.pkas

pKa values associated with 
Resonance
  @param  Nmr_Resonance self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllPkas_keyval0(Nmr_Resonance self);

/**
  FindAll for ccp.nmr.Nmr.Resonance.pkas

pKa values associated with 
Resonance
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllPkas_keyval1(Nmr_Resonance self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.Resonance.pkas

pKa values associated with 
Resonance
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllPkas_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.Resonance.pkas

pKa values associated with 
Resonance
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllPkas_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.Resonance.pkas

pKa values associated with 
Resonance
  @param  Nmr_Resonance self
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
extern ApiSet Nmr_Resonance_FindAllPkas_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.Resonance.rdcs

Reduced dipolar coupling 
measurements involving resonance.
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllRdcs(Nmr_Resonance self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.Resonance.rdcs

Reduced dipolar coupling 
measurements involving resonance.
  @param  Nmr_Resonance self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllRdcs_keyval0(Nmr_Resonance self);

/**
  FindAll for ccp.nmr.Nmr.Resonance.rdcs

Reduced dipolar coupling 
measurements involving resonance.
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllRdcs_keyval1(Nmr_Resonance self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.Resonance.rdcs

Reduced dipolar coupling 
measurements involving resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllRdcs_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.Resonance.rdcs

Reduced dipolar coupling 
measurements involving resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllRdcs_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.Resonance.rdcs

Reduced dipolar coupling 
measurements involving resonance.
  @param  Nmr_Resonance self
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
extern ApiSet Nmr_Resonance_FindAllRdcs_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.Resonance.resonanceProbs

ResonanceProbs 
connecting to ResonanceGroups to which this Resonace probably belongs.
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllResonanceProbs(Nmr_Resonance self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.Resonance.resonanceProbs

ResonanceProbs 
connecting to ResonanceGroups to which this Resonace probably belongs.
  @param  Nmr_Resonance self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllResonanceProbs_keyval0(Nmr_Resonance self);

/**
  FindAll for ccp.nmr.Nmr.Resonance.resonanceProbs

ResonanceProbs 
connecting to ResonanceGroups to which this Resonace probably belongs.
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllResonanceProbs_keyval1(Nmr_Resonance self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.Resonance.resonanceProbs

ResonanceProbs 
connecting to ResonanceGroups to which this Resonace probably belongs.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllResonanceProbs_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.Resonance.resonanceProbs

ResonanceProbs 
connecting to ResonanceGroups to which this Resonace probably belongs.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllResonanceProbs_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.Resonance.resonanceProbs

ResonanceProbs 
connecting to ResonanceGroups to which this Resonace probably belongs.
  @param  Nmr_Resonance self
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
extern ApiSet Nmr_Resonance_FindAllResonanceProbs_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.Resonance.shiftAnisotropies

Chemical shift 
anisotropies for resonance.
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllShiftAnisotropies(Nmr_Resonance self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.Resonance.shiftAnisotropies

Chemical shift 
anisotropies for resonance.
  @param  Nmr_Resonance self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllShiftAnisotropies_keyval0(Nmr_Resonance self);

/**
  FindAll for ccp.nmr.Nmr.Resonance.shiftAnisotropies

Chemical shift 
anisotropies for resonance.
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllShiftAnisotropies_keyval1(Nmr_Resonance self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.Resonance.shiftAnisotropies

Chemical shift 
anisotropies for resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllShiftAnisotropies_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.Resonance.shiftAnisotropies

Chemical shift 
anisotropies for resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllShiftAnisotropies_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.Resonance.shiftAnisotropies

Chemical shift 
anisotropies for resonance.
  @param  Nmr_Resonance self
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
extern ApiSet Nmr_Resonance_FindAllShiftAnisotropies_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.Resonance.shiftDifferences

Chemical SHift 
Differences for resonance.
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllShiftDifferences(Nmr_Resonance self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.Resonance.shiftDifferences

Chemical SHift 
Differences for resonance.
  @param  Nmr_Resonance self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllShiftDifferences_keyval0(Nmr_Resonance self);

/**
  FindAll for ccp.nmr.Nmr.Resonance.shiftDifferences

Chemical SHift 
Differences for resonance.
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllShiftDifferences_keyval1(Nmr_Resonance self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.Resonance.shiftDifferences

Chemical SHift 
Differences for resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllShiftDifferences_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.Resonance.shiftDifferences

Chemical SHift 
Differences for resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllShiftDifferences_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.Resonance.shiftDifferences

Chemical SHift 
Differences for resonance.
  @param  Nmr_Resonance self
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
extern ApiSet Nmr_Resonance_FindAllShiftDifferences_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.Resonance.shifts

Chemical shifts for resonance
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllShifts(Nmr_Resonance self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.Resonance.shifts

Chemical shifts for resonance
  @param  Nmr_Resonance self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllShifts_keyval0(Nmr_Resonance self);

/**
  FindAll for ccp.nmr.Nmr.Resonance.shifts

Chemical shifts for resonance
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllShifts_keyval1(Nmr_Resonance self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.Resonance.shifts

Chemical shifts for resonance
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllShifts_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.Resonance.shifts

Chemical shifts for resonance
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllShifts_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.Resonance.shifts

Chemical shifts for resonance
  @param  Nmr_Resonance self
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
extern ApiSet Nmr_Resonance_FindAllShifts_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.Resonance.spectralDensities

Spectral density 
measurements relevant to Resonance.
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllSpectralDensities(Nmr_Resonance self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.Resonance.spectralDensities

Spectral density 
measurements relevant to Resonance.
  @param  Nmr_Resonance self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllSpectralDensities_keyval0(Nmr_Resonance self);

/**
  FindAll for ccp.nmr.Nmr.Resonance.spectralDensities

Spectral density 
measurements relevant to Resonance.
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllSpectralDensities_keyval1(Nmr_Resonance self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.Resonance.spectralDensities

Spectral density 
measurements relevant to Resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllSpectralDensities_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.Resonance.spectralDensities

Spectral density 
measurements relevant to Resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllSpectralDensities_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.Resonance.spectralDensities

Spectral density 
measurements relevant to Resonance.
  @param  Nmr_Resonance self
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
extern ApiSet Nmr_Resonance_FindAllSpectralDensities_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.Resonance.t1Rhos

T1 rho measurements for 
resonance
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllT1Rhos(Nmr_Resonance self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.Resonance.t1Rhos

T1 rho measurements for 
resonance
  @param  Nmr_Resonance self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllT1Rhos_keyval0(Nmr_Resonance self);

/**
  FindAll for ccp.nmr.Nmr.Resonance.t1Rhos

T1 rho measurements for 
resonance
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllT1Rhos_keyval1(Nmr_Resonance self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.Resonance.t1Rhos

T1 rho measurements for 
resonance
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllT1Rhos_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.Resonance.t1Rhos

T1 rho measurements for 
resonance
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllT1Rhos_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.Resonance.t1Rhos

T1 rho measurements for 
resonance
  @param  Nmr_Resonance self
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
extern ApiSet Nmr_Resonance_FindAllT1Rhos_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.Resonance.t1s

T1 relaxation values for 
resonance.
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllT1s(Nmr_Resonance self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.Resonance.t1s

T1 relaxation values for 
resonance.
  @param  Nmr_Resonance self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllT1s_keyval0(Nmr_Resonance self);

/**
  FindAll for ccp.nmr.Nmr.Resonance.t1s

T1 relaxation values for 
resonance.
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllT1s_keyval1(Nmr_Resonance self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.Resonance.t1s

T1 relaxation values for 
resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllT1s_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.Resonance.t1s

T1 relaxation values for 
resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllT1s_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.Resonance.t1s

T1 relaxation values for 
resonance.
  @param  Nmr_Resonance self
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
extern ApiSet Nmr_Resonance_FindAllT1s_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.Resonance.t2s

T2 relaxation measurements for 
resonance.
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllT2s(Nmr_Resonance self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.Resonance.t2s

T2 relaxation measurements for 
resonance.
  @param  Nmr_Resonance self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllT2s_keyval0(Nmr_Resonance self);

/**
  FindAll for ccp.nmr.Nmr.Resonance.t2s

T2 relaxation measurements for 
resonance.
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllT2s_keyval1(Nmr_Resonance self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.Resonance.t2s

T2 relaxation measurements for 
resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllT2s_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.Resonance.t2s

T2 relaxation measurements for 
resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Resonance_FindAllT2s_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.Resonance.t2s

T2 relaxation measurements for 
resonance.
  @param  Nmr_Resonance self
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
extern ApiSet Nmr_Resonance_FindAllT2s_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_Resonance_FindFirstApplicationData(Nmr_Resonance self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Resonance self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_Resonance_FindFirstApplicationData_keyval0(Nmr_Resonance self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_Resonance_FindFirstApplicationData_keyval1(Nmr_Resonance self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_Resonance_FindFirstApplicationData_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_Resonance_FindFirstApplicationData_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Resonance self
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
extern Impl_ApplicationData Nmr_Resonance_FindFirstApplicationData_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.chainStates

ChainState in which 
this Resonance can be found
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ChainState Nmr_Resonance_FindFirstChainState(Nmr_Resonance self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.chainStates

ChainState in which 
this Resonance can be found
  @param  Nmr_Resonance self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ChainState Nmr_Resonance_FindFirstChainState_keyval0(Nmr_Resonance self);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.chainStates

ChainState in which 
this Resonance can be found
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ChainState Nmr_Resonance_FindFirstChainState_keyval1(Nmr_Resonance self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.chainStates

ChainState in which 
this Resonance can be found
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ChainState Nmr_Resonance_FindFirstChainState_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.chainStates

ChainState in which 
this Resonance can be found
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ChainState Nmr_Resonance_FindFirstChainState_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.chainStates

ChainState in which 
this Resonance can be found
  @param  Nmr_Resonance self
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
extern Nmr_ChainState Nmr_Resonance_FindFirstChainState_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.covalentlyBound

Resonances on both 
ends stand for atoms that are covalently linked.
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Resonance Nmr_Resonance_FindFirstCovalentlyBound(Nmr_Resonance self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.covalentlyBound

Resonances on both 
ends stand for atoms that are covalently linked.
  @param  Nmr_Resonance self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Resonance Nmr_Resonance_FindFirstCovalentlyBound_keyval0(Nmr_Resonance self);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.covalentlyBound

Resonances on both 
ends stand for atoms that are covalently linked.
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Resonance Nmr_Resonance_FindFirstCovalentlyBound_keyval1(Nmr_Resonance self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.covalentlyBound

Resonances on both 
ends stand for atoms that are covalently linked.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Resonance Nmr_Resonance_FindFirstCovalentlyBound_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.covalentlyBound

Resonances on both 
ends stand for atoms that are covalently linked.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Resonance Nmr_Resonance_FindFirstCovalentlyBound_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.covalentlyBound

Resonances on both 
ends stand for atoms that are covalently linked.
  @param  Nmr_Resonance self
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
extern Nmr_Resonance Nmr_Resonance_FindFirstCovalentlyBound_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.datums

Measurements of 
non-predefined type relevant for Resonance
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Datum Nmr_Resonance_FindFirstDatum(Nmr_Resonance self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.datums

Measurements of 
non-predefined type relevant for Resonance
  @param  Nmr_Resonance self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Datum Nmr_Resonance_FindFirstDatum_keyval0(Nmr_Resonance self);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.datums

Measurements of 
non-predefined type relevant for Resonance
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Datum Nmr_Resonance_FindFirstDatum_keyval1(Nmr_Resonance self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.datums

Measurements of 
non-predefined type relevant for Resonance
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Datum Nmr_Resonance_FindFirstDatum_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.datums

Measurements of 
non-predefined type relevant for Resonance
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Datum Nmr_Resonance_FindFirstDatum_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.datums

Measurements of 
non-predefined type relevant for Resonance
  @param  Nmr_Resonance self
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
extern Nmr_Datum Nmr_Resonance_FindFirstDatum_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.dipolarRelaxations

Dipole-dipole 
relaxation measurements involving resonance.
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DipolarRelaxation Nmr_Resonance_FindFirstDipolarRelaxation(Nmr_Resonance self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.dipolarRelaxations

Dipole-dipole 
relaxation measurements involving resonance.
  @param  Nmr_Resonance self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DipolarRelaxation Nmr_Resonance_FindFirstDipolarRelaxation_keyval0(Nmr_Resonance self);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.dipolarRelaxations

Dipole-dipole 
relaxation measurements involving resonance.
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DipolarRelaxation Nmr_Resonance_FindFirstDipolarRelaxation_keyval1(Nmr_Resonance self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.dipolarRelaxations

Dipole-dipole 
relaxation measurements involving resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DipolarRelaxation Nmr_Resonance_FindFirstDipolarRelaxation_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.dipolarRelaxations

Dipole-dipole 
relaxation measurements involving resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DipolarRelaxation Nmr_Resonance_FindFirstDipolarRelaxation_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.dipolarRelaxations

Dipole-dipole 
relaxation measurements involving resonance.
  @param  Nmr_Resonance self
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
extern Nmr_DipolarRelaxation Nmr_Resonance_FindFirstDipolarRelaxation_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.hExchProtections

Hydrogen exchange 
rate protection factor measurements for resonance.
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_HExchProtection Nmr_Resonance_FindFirstHExchProtection(Nmr_Resonance self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.hExchProtections

Hydrogen exchange 
rate protection factor measurements for resonance.
  @param  Nmr_Resonance self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_HExchProtection Nmr_Resonance_FindFirstHExchProtection_keyval0(Nmr_Resonance self);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.hExchProtections

Hydrogen exchange 
rate protection factor measurements for resonance.
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_HExchProtection Nmr_Resonance_FindFirstHExchProtection_keyval1(Nmr_Resonance self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.hExchProtections

Hydrogen exchange 
rate protection factor measurements for resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_HExchProtection Nmr_Resonance_FindFirstHExchProtection_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.hExchProtections

Hydrogen exchange 
rate protection factor measurements for resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_HExchProtection Nmr_Resonance_FindFirstHExchProtection_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.hExchProtections

Hydrogen exchange 
rate protection factor measurements for resonance.
  @param  Nmr_Resonance self
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
extern Nmr_HExchProtection Nmr_Resonance_FindFirstHExchProtection_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.hExchRates

Hydrogen exchange rate 
measurements for resonance.
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_HExchRate Nmr_Resonance_FindFirstHExchRate(Nmr_Resonance self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.hExchRates

Hydrogen exchange rate 
measurements for resonance.
  @param  Nmr_Resonance self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_HExchRate Nmr_Resonance_FindFirstHExchRate_keyval0(Nmr_Resonance self);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.hExchRates

Hydrogen exchange rate 
measurements for resonance.
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_HExchRate Nmr_Resonance_FindFirstHExchRate_keyval1(Nmr_Resonance self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.hExchRates

Hydrogen exchange rate 
measurements for resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_HExchRate Nmr_Resonance_FindFirstHExchRate_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.hExchRates

Hydrogen exchange rate 
measurements for resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_HExchRate Nmr_Resonance_FindFirstHExchRate_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.hExchRates

Hydrogen exchange rate 
measurements for resonance.
  @param  Nmr_Resonance self
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
extern Nmr_HExchRate Nmr_Resonance_FindFirstHExchRate_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.isotropicS2s

Isotropic order 
parameter values that apply to reonance.
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_IsotropicS2 Nmr_Resonance_FindFirstIsotropicS2(Nmr_Resonance self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.isotropicS2s

Isotropic order 
parameter values that apply to reonance.
  @param  Nmr_Resonance self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_IsotropicS2 Nmr_Resonance_FindFirstIsotropicS2_keyval0(Nmr_Resonance self);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.isotropicS2s

Isotropic order 
parameter values that apply to reonance.
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_IsotropicS2 Nmr_Resonance_FindFirstIsotropicS2_keyval1(Nmr_Resonance self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.isotropicS2s

Isotropic order 
parameter values that apply to reonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_IsotropicS2 Nmr_Resonance_FindFirstIsotropicS2_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.isotropicS2s

Isotropic order 
parameter values that apply to reonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_IsotropicS2 Nmr_Resonance_FindFirstIsotropicS2_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.isotropicS2s

Isotropic order 
parameter values that apply to reonance.
  @param  Nmr_Resonance self
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
extern Nmr_IsotropicS2 Nmr_Resonance_FindFirstIsotropicS2_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.jCouplings

J coupling measurements 
for resonance
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_JCoupling Nmr_Resonance_FindFirstJCoupling(Nmr_Resonance self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.jCouplings

J coupling measurements 
for resonance
  @param  Nmr_Resonance self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_JCoupling Nmr_Resonance_FindFirstJCoupling_keyval0(Nmr_Resonance self);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.jCouplings

J coupling measurements 
for resonance
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_JCoupling Nmr_Resonance_FindFirstJCoupling_keyval1(Nmr_Resonance self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.jCouplings

J coupling measurements 
for resonance
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_JCoupling Nmr_Resonance_FindFirstJCoupling_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.jCouplings

J coupling measurements 
for resonance
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_JCoupling Nmr_Resonance_FindFirstJCoupling_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.jCouplings

J coupling measurements 
for resonance
  @param  Nmr_Resonance self
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
extern Nmr_JCoupling Nmr_Resonance_FindFirstJCoupling_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.noes

Homonuclear NOEs in which 
Resonance is involved
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Noe Nmr_Resonance_FindFirstNoe(Nmr_Resonance self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.noes

Homonuclear NOEs in which 
Resonance is involved
  @param  Nmr_Resonance self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Noe Nmr_Resonance_FindFirstNoe_keyval0(Nmr_Resonance self);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.noes

Homonuclear NOEs in which 
Resonance is involved
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Noe Nmr_Resonance_FindFirstNoe_keyval1(Nmr_Resonance self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.noes

Homonuclear NOEs in which 
Resonance is involved
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Noe Nmr_Resonance_FindFirstNoe_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.noes

Homonuclear NOEs in which 
Resonance is involved
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Noe Nmr_Resonance_FindFirstNoe_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.noes

Homonuclear NOEs in which 
Resonance is involved
  @param  Nmr_Resonance self
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
extern Nmr_Noe Nmr_Resonance_FindFirstNoe_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.peakDimContribs

PeakDimContribs 
assigned to Resonance
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakDimContrib Nmr_Resonance_FindFirstPeakDimContrib(Nmr_Resonance self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.peakDimContribNs

PeakDimContribNs 
assigned to Resonance
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakDimContribN Nmr_Resonance_FindFirstPeakDimContribN(Nmr_Resonance self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.peakDimContribNs

PeakDimContribNs 
assigned to Resonance
  @param  Nmr_Resonance self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakDimContribN Nmr_Resonance_FindFirstPeakDimContribN_keyval0(Nmr_Resonance self);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.peakDimContribNs

PeakDimContribNs 
assigned to Resonance
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakDimContribN Nmr_Resonance_FindFirstPeakDimContribN_keyval1(Nmr_Resonance self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.peakDimContribNs

PeakDimContribNs 
assigned to Resonance
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakDimContribN Nmr_Resonance_FindFirstPeakDimContribN_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.peakDimContribNs

PeakDimContribNs 
assigned to Resonance
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakDimContribN Nmr_Resonance_FindFirstPeakDimContribN_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.peakDimContribNs

PeakDimContribNs 
assigned to Resonance
  @param  Nmr_Resonance self
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
extern Nmr_PeakDimContribN Nmr_Resonance_FindFirstPeakDimContribN_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.peakDimContribs

PeakDimContribs 
assigned to Resonance
  @param  Nmr_Resonance self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakDimContrib Nmr_Resonance_FindFirstPeakDimContrib_keyval0(Nmr_Resonance self);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.peakDimContribs

PeakDimContribs 
assigned to Resonance
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakDimContrib Nmr_Resonance_FindFirstPeakDimContrib_keyval1(Nmr_Resonance self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.peakDimContribs

PeakDimContribs 
assigned to Resonance
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakDimContrib Nmr_Resonance_FindFirstPeakDimContrib_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.peakDimContribs

PeakDimContribs 
assigned to Resonance
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakDimContrib Nmr_Resonance_FindFirstPeakDimContrib_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.peakDimContribs

PeakDimContribs 
assigned to Resonance
  @param  Nmr_Resonance self
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
extern Nmr_PeakDimContrib Nmr_Resonance_FindFirstPeakDimContrib_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.pkas

pKa values associated with 
Resonance
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Pka Nmr_Resonance_FindFirstPka(Nmr_Resonance self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.pkas

pKa values associated with 
Resonance
  @param  Nmr_Resonance self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Pka Nmr_Resonance_FindFirstPka_keyval0(Nmr_Resonance self);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.pkas

pKa values associated with 
Resonance
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Pka Nmr_Resonance_FindFirstPka_keyval1(Nmr_Resonance self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.pkas

pKa values associated with 
Resonance
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Pka Nmr_Resonance_FindFirstPka_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.pkas

pKa values associated with 
Resonance
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Pka Nmr_Resonance_FindFirstPka_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.pkas

pKa values associated with 
Resonance
  @param  Nmr_Resonance self
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
extern Nmr_Pka Nmr_Resonance_FindFirstPka_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.rdcs

Reduced dipolar coupling 
measurements involving resonance.
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Rdc Nmr_Resonance_FindFirstRdc(Nmr_Resonance self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.rdcs

Reduced dipolar coupling 
measurements involving resonance.
  @param  Nmr_Resonance self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Rdc Nmr_Resonance_FindFirstRdc_keyval0(Nmr_Resonance self);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.rdcs

Reduced dipolar coupling 
measurements involving resonance.
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Rdc Nmr_Resonance_FindFirstRdc_keyval1(Nmr_Resonance self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.rdcs

Reduced dipolar coupling 
measurements involving resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Rdc Nmr_Resonance_FindFirstRdc_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.rdcs

Reduced dipolar coupling 
measurements involving resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Rdc Nmr_Resonance_FindFirstRdc_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.rdcs

Reduced dipolar coupling 
measurements involving resonance.
  @param  Nmr_Resonance self
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
extern Nmr_Rdc Nmr_Resonance_FindFirstRdc_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.resonanceProbs

ResonanceProbs 
connecting to ResonanceGroups to which this Resonace probably belongs.
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ResonanceProb Nmr_Resonance_FindFirstResonanceProb(Nmr_Resonance self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.resonanceProbs

ResonanceProbs 
connecting to ResonanceGroups to which this Resonace probably belongs.
  @param  Nmr_Resonance self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ResonanceProb Nmr_Resonance_FindFirstResonanceProb_keyval0(Nmr_Resonance self);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.resonanceProbs

ResonanceProbs 
connecting to ResonanceGroups to which this Resonace probably belongs.
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ResonanceProb Nmr_Resonance_FindFirstResonanceProb_keyval1(Nmr_Resonance self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.resonanceProbs

ResonanceProbs 
connecting to ResonanceGroups to which this Resonace probably belongs.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ResonanceProb Nmr_Resonance_FindFirstResonanceProb_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.resonanceProbs

ResonanceProbs 
connecting to ResonanceGroups to which this Resonace probably belongs.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ResonanceProb Nmr_Resonance_FindFirstResonanceProb_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.resonanceProbs

ResonanceProbs 
connecting to ResonanceGroups to which this Resonace probably belongs.
  @param  Nmr_Resonance self
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
extern Nmr_ResonanceProb Nmr_Resonance_FindFirstResonanceProb_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.shifts

Chemical shifts for 
resonance
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Shift Nmr_Resonance_FindFirstShift(Nmr_Resonance self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.shiftAnisotropies

Chemical shift 
anisotropies for resonance.
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ShiftAnisotropy Nmr_Resonance_FindFirstShiftAnisotropy(Nmr_Resonance self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.shiftAnisotropies

Chemical shift 
anisotropies for resonance.
  @param  Nmr_Resonance self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ShiftAnisotropy Nmr_Resonance_FindFirstShiftAnisotropy_keyval0(Nmr_Resonance self);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.shiftAnisotropies

Chemical shift 
anisotropies for resonance.
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ShiftAnisotropy Nmr_Resonance_FindFirstShiftAnisotropy_keyval1(Nmr_Resonance self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.shiftAnisotropies

Chemical shift 
anisotropies for resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ShiftAnisotropy Nmr_Resonance_FindFirstShiftAnisotropy_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.shiftAnisotropies

Chemical shift 
anisotropies for resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ShiftAnisotropy Nmr_Resonance_FindFirstShiftAnisotropy_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.shiftAnisotropies

Chemical shift 
anisotropies for resonance.
  @param  Nmr_Resonance self
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
extern Nmr_ShiftAnisotropy Nmr_Resonance_FindFirstShiftAnisotropy_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.shiftDifferences

Chemical SHift 
Differences for resonance.
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ShiftDifference Nmr_Resonance_FindFirstShiftDifference(Nmr_Resonance self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.shiftDifferences

Chemical SHift 
Differences for resonance.
  @param  Nmr_Resonance self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ShiftDifference Nmr_Resonance_FindFirstShiftDifference_keyval0(Nmr_Resonance self);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.shiftDifferences

Chemical SHift 
Differences for resonance.
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ShiftDifference Nmr_Resonance_FindFirstShiftDifference_keyval1(Nmr_Resonance self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.shiftDifferences

Chemical SHift 
Differences for resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ShiftDifference Nmr_Resonance_FindFirstShiftDifference_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.shiftDifferences

Chemical SHift 
Differences for resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ShiftDifference Nmr_Resonance_FindFirstShiftDifference_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.shiftDifferences

Chemical SHift 
Differences for resonance.
  @param  Nmr_Resonance self
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
extern Nmr_ShiftDifference Nmr_Resonance_FindFirstShiftDifference_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.shifts

Chemical shifts for 
resonance
  @param  Nmr_Resonance self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Shift Nmr_Resonance_FindFirstShift_keyval0(Nmr_Resonance self);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.shifts

Chemical shifts for 
resonance
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Shift Nmr_Resonance_FindFirstShift_keyval1(Nmr_Resonance self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.shifts

Chemical shifts for 
resonance
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Shift Nmr_Resonance_FindFirstShift_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.shifts

Chemical shifts for 
resonance
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Shift Nmr_Resonance_FindFirstShift_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.shifts

Chemical shifts for 
resonance
  @param  Nmr_Resonance self
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
extern Nmr_Shift Nmr_Resonance_FindFirstShift_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.spectralDensities

Spectral density 
measurements relevant to Resonance.
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_SpectralDensity Nmr_Resonance_FindFirstSpectralDensity(Nmr_Resonance self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.spectralDensities

Spectral density 
measurements relevant to Resonance.
  @param  Nmr_Resonance self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_SpectralDensity Nmr_Resonance_FindFirstSpectralDensity_keyval0(Nmr_Resonance self);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.spectralDensities

Spectral density 
measurements relevant to Resonance.
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_SpectralDensity Nmr_Resonance_FindFirstSpectralDensity_keyval1(Nmr_Resonance self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.spectralDensities

Spectral density 
measurements relevant to Resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_SpectralDensity Nmr_Resonance_FindFirstSpectralDensity_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.spectralDensities

Spectral density 
measurements relevant to Resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_SpectralDensity Nmr_Resonance_FindFirstSpectralDensity_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.spectralDensities

Spectral density 
measurements relevant to Resonance.
  @param  Nmr_Resonance self
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
extern Nmr_SpectralDensity Nmr_Resonance_FindFirstSpectralDensity_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.t1s

T1 relaxation values for 
resonance.
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_T1 Nmr_Resonance_FindFirstT1(Nmr_Resonance self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.t1Rhos

T1 rho measurements for 
resonance
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_T1Rho Nmr_Resonance_FindFirstT1Rho(Nmr_Resonance self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.t1Rhos

T1 rho measurements for 
resonance
  @param  Nmr_Resonance self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_T1Rho Nmr_Resonance_FindFirstT1Rho_keyval0(Nmr_Resonance self);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.t1Rhos

T1 rho measurements for 
resonance
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_T1Rho Nmr_Resonance_FindFirstT1Rho_keyval1(Nmr_Resonance self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.t1Rhos

T1 rho measurements for 
resonance
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_T1Rho Nmr_Resonance_FindFirstT1Rho_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.t1Rhos

T1 rho measurements for 
resonance
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_T1Rho Nmr_Resonance_FindFirstT1Rho_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.t1Rhos

T1 rho measurements for 
resonance
  @param  Nmr_Resonance self
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
extern Nmr_T1Rho Nmr_Resonance_FindFirstT1Rho_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.t1s

T1 relaxation values for 
resonance.
  @param  Nmr_Resonance self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_T1 Nmr_Resonance_FindFirstT1_keyval0(Nmr_Resonance self);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.t1s

T1 relaxation values for 
resonance.
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_T1 Nmr_Resonance_FindFirstT1_keyval1(Nmr_Resonance self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.t1s

T1 relaxation values for 
resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_T1 Nmr_Resonance_FindFirstT1_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.t1s

T1 relaxation values for 
resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_T1 Nmr_Resonance_FindFirstT1_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.t1s

T1 relaxation values for 
resonance.
  @param  Nmr_Resonance self
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
extern Nmr_T1 Nmr_Resonance_FindFirstT1_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.t2s

T2 relaxation measurements for 
resonance.
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_T2 Nmr_Resonance_FindFirstT2(Nmr_Resonance self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.t2s

T2 relaxation measurements for 
resonance.
  @param  Nmr_Resonance self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_T2 Nmr_Resonance_FindFirstT2_keyval0(Nmr_Resonance self);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.t2s

T2 relaxation measurements for 
resonance.
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_T2 Nmr_Resonance_FindFirstT2_keyval1(Nmr_Resonance self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.t2s

T2 relaxation measurements for 
resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_T2 Nmr_Resonance_FindFirstT2_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.t2s

T2 relaxation measurements for 
resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_T2 Nmr_Resonance_FindFirstT2_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.Resonance.t2s

T2 relaxation measurements for 
resonance.
  @param  Nmr_Resonance self
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
extern Nmr_T2 Nmr_Resonance_FindFirstT2_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.Nmr.Resonance
  @param  Nmr_Resonance self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Nmr_Resonance_Get(Nmr_Resonance self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_Resonance self
  @returns   the result
**/
extern Acco_AccessObject Nmr_Resonance_GetAccess(Nmr_Resonance self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Nmr_Resonance self
  @returns   the result
**/
extern Acco_AccessObject Nmr_Resonance_GetActiveAccess(Nmr_Resonance self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Resonance self
  @returns   the result
**/
extern ApiList Nmr_Resonance_GetApplicationData(Nmr_Resonance self);

/**
  Get for ccp.nmr.Nmr.Resonance.assignNames

Names of AtomSets to which 
Resonance should or could be assigned. Must be in the CCPN (=IUPAC) 
nomenclature. Allows you to fix assignments when you know only the 
residue type (e.g. Leu) not the residue number. Examples (all for Leu): 
('HG'), ('CA'), non-stereospecific ('HB2','HB3') or ('HD1*','HD2*'), 
stereospecific ('HB2') or ('HD1*'), mixed ('HB2','HB3','HG').
  @param  Nmr_Resonance self
  @returns   the result
**/
extern ApiList Nmr_Resonance_GetAssignNames(Nmr_Resonance self);

/**
  GetByKey for ccp.nmr.Nmr.Resonance
  @param  Nmr_Resonance self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Nmr_Resonance Nmr_Resonance_GetByKey(Nmr_Resonance self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for ccp.nmr.Nmr.Resonance.chainStates

ChainState in which this 
Resonance can be found
  @param  Nmr_Resonance self
  @returns   the result
**/
extern ApiSet Nmr_Resonance_GetChainStates(Nmr_Resonance self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Nmr_Resonance self
  @returns   the result
**/
extern ApiString Nmr_Resonance_GetClassName(Nmr_Resonance self);

/**
  Get for ccp.nmr.Nmr.Resonance.covalentlyBound

Resonances on both ends 
stand for atoms that are covalently linked.
  @param  Nmr_Resonance self
  @returns   the result
**/
extern ApiSet Nmr_Resonance_GetCovalentlyBound(Nmr_Resonance self);

/**
  Get for ccp.nmr.Nmr.Resonance.datums

Measurements of non-predefined 
type relevant for Resonance
  @param  Nmr_Resonance self
  @returns   the result
**/
extern ApiSet Nmr_Resonance_GetDatums(Nmr_Resonance self);

/**
  Get for ccp.nmr.Nmr.Resonance.details

Free text, for notes, explanatory 
comments, etc.
  @param  Nmr_Resonance self
  @returns   the result
**/
extern ApiString Nmr_Resonance_GetDetails(Nmr_Resonance self);

/**
  Get for ccp.nmr.Nmr.Resonance.dipolarRelaxations

Dipole-dipole 
relaxation measurements involving resonance.
  @param  Nmr_Resonance self
  @returns   the result
**/
extern ApiSet Nmr_Resonance_GetDipolarRelaxations(Nmr_Resonance self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Nmr_Resonance self
  @returns   the result
**/
extern ApiList Nmr_Resonance_GetFieldNames(Nmr_Resonance self);

/**
  GetFullKey for ccp.nmr.Nmr.Resonance
  @param  Nmr_Resonance self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Nmr_Resonance_GetFullKey(Nmr_Resonance self, ApiBoolean useGuid);

/**
  Get for ccp.nmr.Nmr.Resonance.hExchProtections

Hydrogen exchange rate 
protection factor measurements for resonance.
  @param  Nmr_Resonance self
  @returns   the result
**/
extern ApiSet Nmr_Resonance_GetHExchProtections(Nmr_Resonance self);

/**
  Get for ccp.nmr.Nmr.Resonance.hExchRates

Hydrogen exchange rate 
measurements for resonance.
  @param  Nmr_Resonance self
  @returns   the result
**/
extern ApiSet Nmr_Resonance_GetHExchRates(Nmr_Resonance self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Nmr_Resonance self
  @returns   the result
**/
extern ApiBoolean Nmr_Resonance_GetInConstructor(Nmr_Resonance self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Nmr_Resonance self
  @returns   the result
**/
extern ApiBoolean Nmr_Resonance_GetIsDeleted(Nmr_Resonance self);

/**
  get function for derived link isotope
  @param  Nmr_Resonance self
  @returns   the result
**/
extern Chel_Isotope Nmr_Resonance_GetIsotope(Nmr_Resonance self);

/**
  Get for ccp.nmr.Nmr.Resonance.isotopeCode

Isotope code for the 
resonance. E.g. '1H', '13C', '2H', '235U'
  @param  Nmr_Resonance self
  @returns   the result
**/
extern ApiString Nmr_Resonance_GetIsotopeCode(Nmr_Resonance self);

/**
  Get for ccp.nmr.Nmr.Resonance.isotropicS2s

Isotropic order parameter 
values that apply to reonance.
  @param  Nmr_Resonance self
  @returns   the result
**/
extern ApiSet Nmr_Resonance_GetIsotropicS2s(Nmr_Resonance self);

/**
  Get for ccp.nmr.Nmr.Resonance.jCouplings

J coupling measurements for 
resonance
  @param  Nmr_Resonance self
  @returns   the result
**/
extern ApiSet Nmr_Resonance_GetJCouplings(Nmr_Resonance self);

/**
  GetLocalKey for ccp.nmr.Nmr.Resonance
  @param  Nmr_Resonance self
  @returns  Local object key
**/
extern ApiObject Nmr_Resonance_GetLocalKey(Nmr_Resonance self);

/**
  Get for ccp.nmr.Nmr.Resonance.name

Name of Resonance. It is recommended 
to set it to the assignName (q.v.) if known, but the name can be set 
freely.
  @param  Nmr_Resonance self
  @returns   the result
**/
extern ApiString Nmr_Resonance_GetName(Nmr_Resonance self);

/**
  Get for ccp.nmr.Nmr.Resonance.nmrProject

parent link
  @param  Nmr_Resonance self
  @returns   the result
**/
extern Nmr_NmrProject Nmr_Resonance_GetNmrProject(Nmr_Resonance self);

/**
  Get for ccp.nmr.Nmr.Resonance.noes

Homonuclear NOEs in which Resonance 
is involved
  @param  Nmr_Resonance self
  @returns   the result
**/
extern ApiSet Nmr_Resonance_GetNoes(Nmr_Resonance self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Nmr_Resonance self
  @returns   the result
**/
extern ApiString Nmr_Resonance_GetPackageName(Nmr_Resonance self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Nmr_Resonance self
  @returns   the result
**/
extern ApiString Nmr_Resonance_GetPackageShortName(Nmr_Resonance self);

/**
  Get for ccp.nmr.Nmr.Resonance.parent

link to parent object - synonym 
for nmrProject
  @param  Nmr_Resonance self
  @returns   the result
**/
extern Nmr_NmrProject Nmr_Resonance_GetParent(Nmr_Resonance self);

/**
  Get for ccp.nmr.Nmr.Resonance.peakDimContribNs

PeakDimContribNs 
assigned to Resonance
  @param  Nmr_Resonance self
  @returns   the result
**/
extern ApiSet Nmr_Resonance_GetPeakDimContribNs(Nmr_Resonance self);

/**
  Get for ccp.nmr.Nmr.Resonance.peakDimContribs

PeakDimContribs assigned 
to Resonance
  @param  Nmr_Resonance self
  @returns   the result
**/
extern ApiSet Nmr_Resonance_GetPeakDimContribs(Nmr_Resonance self);

/**
  Get for ccp.nmr.Nmr.Resonance.pkas

pKa values associated with Resonance
  @param  Nmr_Resonance self
  @returns   the result
**/
extern ApiSet Nmr_Resonance_GetPkas(Nmr_Resonance self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Nmr_Resonance self
  @returns   the result
**/
extern ApiString Nmr_Resonance_GetQualifiedName(Nmr_Resonance self);

/**
  Get for ccp.nmr.Nmr.Resonance.rdcs

Reduced dipolar coupling 
measurements involving resonance.
  @param  Nmr_Resonance self
  @returns   the result
**/
extern ApiSet Nmr_Resonance_GetRdcs(Nmr_Resonance self);

/**
  Get for ccp.nmr.Nmr.Resonance.resonanceGroup

ResonanceGroup to which 
Resonance definitely belongs
  @param  Nmr_Resonance self
  @returns   the result
**/
extern Nmr_ResonanceGroup Nmr_Resonance_GetResonanceGroup(Nmr_Resonance self);

/**
  Get for ccp.nmr.Nmr.Resonance.resonanceProbs

ResonanceProbs connecting 
to ResonanceGroups to which this Resonace probably belongs.
  @param  Nmr_Resonance self
  @returns   the result
**/
extern ApiSet Nmr_Resonance_GetResonanceProbs(Nmr_Resonance self);

/**
  Get for ccp.nmr.Nmr.Resonance.resonanceSet

ResonanceSet to which 
Resonance belongs. Part of assignment of Resonance to Atoms.
  @param  Nmr_Resonance self
  @returns   the result
**/
extern Nmr_ResonanceSet Nmr_Resonance_GetResonanceSet(Nmr_Resonance self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Nmr_Resonance self
  @returns   the result
**/
extern Impl_MemopsRoot Nmr_Resonance_GetRoot(Nmr_Resonance self);

/**
  Get for ccp.nmr.Nmr.Resonance.serial

Serial number of object. Serves as 
object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Nmr_Resonance self
  @returns   the result
**/
extern ApiInteger Nmr_Resonance_GetSerial(Nmr_Resonance self);

/**
  Get for ccp.nmr.Nmr.Resonance.shiftAnisotropies

Chemical shift 
anisotropies for resonance.
  @param  Nmr_Resonance self
  @returns   the result
**/
extern ApiSet Nmr_Resonance_GetShiftAnisotropies(Nmr_Resonance self);

/**
  Get for ccp.nmr.Nmr.Resonance.shiftDifferences

Chemical SHift 
Differences for resonance.
  @param  Nmr_Resonance self
  @returns   the result
**/
extern ApiSet Nmr_Resonance_GetShiftDifferences(Nmr_Resonance self);

/**
  Get for ccp.nmr.Nmr.Resonance.shifts

Chemical shifts for resonance
  @param  Nmr_Resonance self
  @returns   the result
**/
extern ApiSet Nmr_Resonance_GetShifts(Nmr_Resonance self);

/**
  Get for ccp.nmr.Nmr.Resonance.spectralDensities

Spectral density 
measurements relevant to Resonance.
  @param  Nmr_Resonance self
  @returns   the result
**/
extern ApiSet Nmr_Resonance_GetSpectralDensities(Nmr_Resonance self);

/**
  Get for ccp.nmr.Nmr.Resonance.t1Rhos

T1 rho measurements for resonance
  @param  Nmr_Resonance self
  @returns   the result
**/
extern ApiSet Nmr_Resonance_GetT1Rhos(Nmr_Resonance self);

/**
  Get for ccp.nmr.Nmr.Resonance.t1s

T1 relaxation values for resonance.
  @param  Nmr_Resonance self
  @returns   the result
**/
extern ApiSet Nmr_Resonance_GetT1s(Nmr_Resonance self);

/**
  Get for ccp.nmr.Nmr.Resonance.t2s

T2 relaxation measurements for 
resonance.
  @param  Nmr_Resonance self
  @returns   the result
**/
extern ApiSet Nmr_Resonance_GetT2s(Nmr_Resonance self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Nmr_Resonance self
  @returns   the result
**/
extern Impl_TopObject Nmr_Resonance_GetTopObject(Nmr_Resonance self);

/**
  Constructor for ccp.nmr.Nmr.Resonance
  @param  Nmr_NmrProject parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmr_Resonance Nmr_Resonance_Init(Nmr_NmrProject parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.Nmr.Resonance
  @param  Nmr_NmrProject parent
  @param  char * isotopeCode
  @returns  the new object
**/
extern Nmr_Resonance Nmr_Resonance_Init_reqd(Nmr_NmrProject parent, char * isotopeCode);

/**
  Factory function to create ccp.nmr.Nmr.ResonanceProb
  @param  Nmr_Resonance self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmr_ResonanceProb Nmr_Resonance_NewResonanceProb(Nmr_Resonance self, ApiMap attrlinks);

/**
  Factory function to create ccp.nmr.Nmr.ResonanceProb
  @param  Nmr_Resonance self
  @param  Nmr_ResonanceGroup possibility
  @returns  the new object
**/
extern Nmr_ResonanceProb Nmr_Resonance_NewResonanceProb_reqd(Nmr_Resonance self, Nmr_ResonanceGroup possibility);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Resonance self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_Resonance_RemoveApplicationData(Nmr_Resonance self, Impl_ApplicationData value);

/**
  Remove for ccp.nmr.Nmr.Resonance.assignNames

Names of AtomSets to which 
Resonance should or could be assigned. Must be in the CCPN (=IUPAC) 
nomenclature. Allows you to fix assignments when you know only the 
residue type (e.g. Leu) not the residue number. Examples (all for Leu): 
('HG'), ('CA'), non-stereospecific ('HB2','HB3') or ('HD1*','HD2*'), 
stereospecific ('HB2') or ('HD1*'), mixed ('HB2','HB3','HG').
  @param  Nmr_Resonance self
  @param  ApiString value
**/
extern void *Nmr_Resonance_RemoveAssignName(Nmr_Resonance self, ApiString value);

/**
  Remove for ccp.nmr.Nmr.Resonance.chainStates

ChainState in which this 
Resonance can be found
  @param  Nmr_Resonance self
  @param  Nmr_ChainState value
**/
extern void *Nmr_Resonance_RemoveChainState(Nmr_Resonance self, Nmr_ChainState value);

/**
  Remove for ccp.nmr.Nmr.Resonance.covalentlyBound

Resonances on both 
ends stand for atoms that are covalently linked.
  @param  Nmr_Resonance self
  @param  Nmr_Resonance value
**/
extern void *Nmr_Resonance_RemoveCovalentlyBound(Nmr_Resonance self, Nmr_Resonance value);

/**
  Remove for ccp.nmr.Nmr.Resonance.datums

Measurements of non-predefined 
type relevant for Resonance
  @param  Nmr_Resonance self
  @param  Nmr_Datum value
**/
extern void *Nmr_Resonance_RemoveDatum(Nmr_Resonance self, Nmr_Datum value);

/**
  SetAttr for ccp.nmr.Nmr.Resonance
  @param  Nmr_Resonance self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Nmr_Resonance_Set(Nmr_Resonance self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_Resonance self
  @param  Acco_AccessObject value
**/
extern void *Nmr_Resonance_SetAccess(Nmr_Resonance self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Resonance self
  @param  ApiList values
**/
extern void *Nmr_Resonance_SetApplicationData(Nmr_Resonance self, ApiList values);

/**
  Set for ccp.nmr.Nmr.Resonance.assignNames

Names of AtomSets to which 
Resonance should or could be assigned. Must be in the CCPN (=IUPAC) 
nomenclature. Allows you to fix assignments when you know only the 
residue type (e.g. Leu) not the residue number. Examples (all for Leu): 
('HG'), ('CA'), non-stereospecific ('HB2','HB3') or ('HD1*','HD2*'), 
stereospecific ('HB2') or ('HD1*'), mixed ('HB2','HB3','HG').
  @param  Nmr_Resonance self
  @param  ApiList values
**/
extern void *Nmr_Resonance_SetAssignNames(Nmr_Resonance self, ApiList values);

/**
  Set for ccp.nmr.Nmr.Resonance.chainStates

ChainState in which this 
Resonance can be found
  @param  Nmr_Resonance self
  @param  ApiSet values
**/
extern void *Nmr_Resonance_SetChainStates(Nmr_Resonance self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.Resonance.covalentlyBound

Resonances on both ends 
stand for atoms that are covalently linked.
  @param  Nmr_Resonance self
  @param  ApiSet values
**/
extern void *Nmr_Resonance_SetCovalentlyBound(Nmr_Resonance self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.Resonance.datums

Measurements of non-predefined 
type relevant for Resonance
  @param  Nmr_Resonance self
  @param  ApiSet values
**/
extern void *Nmr_Resonance_SetDatums(Nmr_Resonance self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.Resonance.details

Free text, for notes, explanatory 
comments, etc.
  @param  Nmr_Resonance self
  @param  ApiString value
**/
extern void *Nmr_Resonance_SetDetails(Nmr_Resonance self, ApiString value);

/**
  Set for ccp.nmr.Nmr.Resonance.dipolarRelaxations

Dipole-dipole 
relaxation measurements involving resonance.
  @param  Nmr_Resonance self
  @param  ApiSet values
**/
extern void *Nmr_Resonance_SetDipolarRelaxations(Nmr_Resonance self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.Resonance.hExchProtections

Hydrogen exchange rate 
protection factor measurements for resonance.
  @param  Nmr_Resonance self
  @param  ApiSet values
**/
extern void *Nmr_Resonance_SetHExchProtections(Nmr_Resonance self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.Resonance.hExchRates

Hydrogen exchange rate 
measurements for resonance.
  @param  Nmr_Resonance self
  @param  ApiSet values
**/
extern void *Nmr_Resonance_SetHExchRates(Nmr_Resonance self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.Resonance.isotopeCode

Isotope code for the 
resonance. E.g. '1H', '13C', '2H', '235U'
  @param  Nmr_Resonance self
  @param  ApiString value
**/
extern void *Nmr_Resonance_SetIsotopeCode(Nmr_Resonance self, ApiString value);

/**
  Set for ccp.nmr.Nmr.Resonance.isotropicS2s

Isotropic order parameter 
values that apply to reonance.
  @param  Nmr_Resonance self
  @param  ApiSet values
**/
extern void *Nmr_Resonance_SetIsotropicS2s(Nmr_Resonance self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.Resonance.jCouplings

J coupling measurements for 
resonance
  @param  Nmr_Resonance self
  @param  ApiSet values
**/
extern void *Nmr_Resonance_SetJCouplings(Nmr_Resonance self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.Resonance.name

Name of Resonance. It is recommended 
to set it to the assignName (q.v.) if known, but the name can be set 
freely.
  @param  Nmr_Resonance self
  @param  ApiString value
**/
extern void *Nmr_Resonance_SetName(Nmr_Resonance self, ApiString value);

/**
  Set for ccp.nmr.Nmr.Resonance.noes

Homonuclear NOEs in which Resonance 
is involved
  @param  Nmr_Resonance self
  @param  ApiSet values
**/
extern void *Nmr_Resonance_SetNoes(Nmr_Resonance self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.Resonance.peakDimContribNs

PeakDimContribNs 
assigned to Resonance
  @param  Nmr_Resonance self
  @param  ApiSet values
**/
extern void *Nmr_Resonance_SetPeakDimContribNs(Nmr_Resonance self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.Resonance.peakDimContribs

PeakDimContribs assigned 
to Resonance
  @param  Nmr_Resonance self
  @param  ApiSet values
**/
extern void *Nmr_Resonance_SetPeakDimContribs(Nmr_Resonance self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.Resonance.pkas

pKa values associated with Resonance
  @param  Nmr_Resonance self
  @param  ApiSet values
**/
extern void *Nmr_Resonance_SetPkas(Nmr_Resonance self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.Resonance.rdcs

Reduced dipolar coupling 
measurements involving resonance.
  @param  Nmr_Resonance self
  @param  ApiSet values
**/
extern void *Nmr_Resonance_SetRdcs(Nmr_Resonance self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.Resonance.resonanceGroup

ResonanceGroup to which 
Resonance definitely belongs
  @param  Nmr_Resonance self
  @param  Nmr_ResonanceGroup value
**/
extern void *Nmr_Resonance_SetResonanceGroup(Nmr_Resonance self, Nmr_ResonanceGroup value);

/**
  Set for ccp.nmr.Nmr.Resonance.resonanceSet

ResonanceSet to which 
Resonance belongs. Part of assignment of Resonance to Atoms.
  @param  Nmr_Resonance self
  @param  Nmr_ResonanceSet value
**/
extern void *Nmr_Resonance_SetResonanceSet(Nmr_Resonance self, Nmr_ResonanceSet value);

/**
  Set for ccp.nmr.Nmr.Resonance.serial

Serial number of object. Serves as 
object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Nmr_Resonance self
  @param  ApiInteger value
**/
extern void *Nmr_Resonance_SetSerial(Nmr_Resonance self, ApiInteger value);

/**
  Set for ccp.nmr.Nmr.Resonance.shiftAnisotropies

Chemical shift 
anisotropies for resonance.
  @param  Nmr_Resonance self
  @param  ApiSet values
**/
extern void *Nmr_Resonance_SetShiftAnisotropies(Nmr_Resonance self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.Resonance.shiftDifferences

Chemical SHift 
Differences for resonance.
  @param  Nmr_Resonance self
  @param  ApiSet values
**/
extern void *Nmr_Resonance_SetShiftDifferences(Nmr_Resonance self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.Resonance.shifts

Chemical shifts for resonance
  @param  Nmr_Resonance self
  @param  ApiSet values
**/
extern void *Nmr_Resonance_SetShifts(Nmr_Resonance self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.Resonance.spectralDensities

Spectral density 
measurements relevant to Resonance.
  @param  Nmr_Resonance self
  @param  ApiSet values
**/
extern void *Nmr_Resonance_SetSpectralDensities(Nmr_Resonance self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.Resonance.t1Rhos

T1 rho measurements for resonance
  @param  Nmr_Resonance self
  @param  ApiSet values
**/
extern void *Nmr_Resonance_SetT1Rhos(Nmr_Resonance self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.Resonance.t1s

T1 relaxation values for resonance.
  @param  Nmr_Resonance self
  @param  ApiSet values
**/
extern void *Nmr_Resonance_SetT1s(Nmr_Resonance self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.Resonance.t2s

T2 relaxation measurements for 
resonance.
  @param  Nmr_Resonance self
  @param  ApiSet values
**/
extern void *Nmr_Resonance_SetT2s(Nmr_Resonance self, ApiSet values);

/**
  Sorted for ccp.nmr.Nmr.Resonance.chainStates

ChainState in which this 
Resonance can be found
  @param  Nmr_Resonance self
  @returns   the result
**/
extern ApiList Nmr_Resonance_SortedChainStates(Nmr_Resonance self);

/**
  Sorted for ccp.nmr.Nmr.Resonance.covalentlyBound

Resonances on both 
ends stand for atoms that are covalently linked.
  @param  Nmr_Resonance self
  @returns   the result
**/
extern ApiList Nmr_Resonance_SortedCovalentlyBound(Nmr_Resonance self);

/**
  Sorted for ccp.nmr.Nmr.Resonance.datums

Measurements of non-predefined 
type relevant for Resonance
  @param  Nmr_Resonance self
  @returns   the result
**/
extern ApiList Nmr_Resonance_SortedDatums(Nmr_Resonance self);

/**
  Sorted for ccp.nmr.Nmr.Resonance.dipolarRelaxations

Dipole-dipole 
relaxation measurements involving resonance.
  @param  Nmr_Resonance self
  @returns   the result
**/
extern ApiList Nmr_Resonance_SortedDipolarRelaxations(Nmr_Resonance self);

/**
  Sorted for ccp.nmr.Nmr.Resonance.hExchProtections

Hydrogen exchange 
rate protection factor measurements for resonance.
  @param  Nmr_Resonance self
  @returns   the result
**/
extern ApiList Nmr_Resonance_SortedHExchProtections(Nmr_Resonance self);

/**
  Sorted for ccp.nmr.Nmr.Resonance.hExchRates

Hydrogen exchange rate 
measurements for resonance.
  @param  Nmr_Resonance self
  @returns   the result
**/
extern ApiList Nmr_Resonance_SortedHExchRates(Nmr_Resonance self);

/**
  Sorted for ccp.nmr.Nmr.Resonance.isotropicS2s

Isotropic order parameter 
values that apply to reonance.
  @param  Nmr_Resonance self
  @returns   the result
**/
extern ApiList Nmr_Resonance_SortedIsotropicS2s(Nmr_Resonance self);

/**
  Sorted for ccp.nmr.Nmr.Resonance.jCouplings

J coupling measurements for 
resonance
  @param  Nmr_Resonance self
  @returns   the result
**/
extern ApiList Nmr_Resonance_SortedJCouplings(Nmr_Resonance self);

/**
  Sorted for ccp.nmr.Nmr.Resonance.noes

Homonuclear NOEs in which 
Resonance is involved
  @param  Nmr_Resonance self
  @returns   the result
**/
extern ApiList Nmr_Resonance_SortedNoes(Nmr_Resonance self);

/**
  Sorted for ccp.nmr.Nmr.Resonance.peakDimContribNs

PeakDimContribNs 
assigned to Resonance
  @param  Nmr_Resonance self
  @returns   the result
**/
extern ApiList Nmr_Resonance_SortedPeakDimContribNs(Nmr_Resonance self);

/**
  Sorted for ccp.nmr.Nmr.Resonance.peakDimContribs

PeakDimContribs 
assigned to Resonance
  @param  Nmr_Resonance self
  @returns   the result
**/
extern ApiList Nmr_Resonance_SortedPeakDimContribs(Nmr_Resonance self);

/**
  Sorted for ccp.nmr.Nmr.Resonance.pkas

pKa values associated with 
Resonance
  @param  Nmr_Resonance self
  @returns   the result
**/
extern ApiList Nmr_Resonance_SortedPkas(Nmr_Resonance self);

/**
  Sorted for ccp.nmr.Nmr.Resonance.rdcs

Reduced dipolar coupling 
measurements involving resonance.
  @param  Nmr_Resonance self
  @returns   the result
**/
extern ApiList Nmr_Resonance_SortedRdcs(Nmr_Resonance self);

/**
  Sorted for ccp.nmr.Nmr.Resonance.resonanceProbs

ResonanceProbs 
connecting to ResonanceGroups to which this Resonace probably belongs.
  @param  Nmr_Resonance self
  @returns   the result
**/
extern ApiList Nmr_Resonance_SortedResonanceProbs(Nmr_Resonance self);

/**
  Sorted for ccp.nmr.Nmr.Resonance.shiftAnisotropies

Chemical shift 
anisotropies for resonance.
  @param  Nmr_Resonance self
  @returns   the result
**/
extern ApiList Nmr_Resonance_SortedShiftAnisotropies(Nmr_Resonance self);

/**
  Sorted for ccp.nmr.Nmr.Resonance.shiftDifferences

Chemical SHift 
Differences for resonance.
  @param  Nmr_Resonance self
  @returns   the result
**/
extern ApiList Nmr_Resonance_SortedShiftDifferences(Nmr_Resonance self);

/**
  Sorted for ccp.nmr.Nmr.Resonance.shifts

Chemical shifts for resonance
  @param  Nmr_Resonance self
  @returns   the result
**/
extern ApiList Nmr_Resonance_SortedShifts(Nmr_Resonance self);

/**
  Sorted for ccp.nmr.Nmr.Resonance.spectralDensities

Spectral density 
measurements relevant to Resonance.
  @param  Nmr_Resonance self
  @returns   the result
**/
extern ApiList Nmr_Resonance_SortedSpectralDensities(Nmr_Resonance self);

/**
  Sorted for ccp.nmr.Nmr.Resonance.t1Rhos

T1 rho measurements for 
resonance
  @param  Nmr_Resonance self
  @returns   the result
**/
extern ApiList Nmr_Resonance_SortedT1Rhos(Nmr_Resonance self);

/**
  Sorted for ccp.nmr.Nmr.Resonance.t1s

T1 relaxation values for 
resonance.
  @param  Nmr_Resonance self
  @returns   the result
**/
extern ApiList Nmr_Resonance_SortedT1s(Nmr_Resonance self);

/**
  Sorted for ccp.nmr.Nmr.Resonance.t2s

T2 relaxation measurements for 
resonance.
  @param  Nmr_Resonance self
  @returns   the result
**/
extern ApiList Nmr_Resonance_SortedT2s(Nmr_Resonance self);

#endif /* __incl__ccp_api_nmr_Nmr_Resonance_h__ */
