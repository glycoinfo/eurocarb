
#ifndef __incl__ccp_api_molecule_Molecule_MolResidue_h__
#define __incl__ccp_api_molecule_Molecule_MolResidue_h__

#include "ccp.h"

/*
  Monomer/Residue belonging to a Molecule, e.g. in the sequence for Insulin A-chain as such, as opposed to a specific Insulin A-chain molecule with coordinates.
  
  Note that MolResidues can neither be created nor deleted while their parent Molecule is linked to one or more chains. When creating a Molecule all relevant MolResLinkEnds are created automatically.
  Note also that MolResidues can not be deleted, except as a consequence of deleting their molecule.
  
  It is guaranteed that the serials of molResidues form a continuous range, and that all linear polymer type links are between MolResidues with consecutive serials. The Molesidue.serials must start at one. This constraint is not checked (for technical reasons), but it can only be broken if someone has modified the data bypassing the API.
*/

/* package ccp.api.molecule.Molecule */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MolResidue self
  @param  Impl_ApplicationData value
**/
extern void *Mole_MolResidue_AddApplicationData(Mole_MolResidue self, Impl_ApplicationData value);

/**
  Add for ccp.molecule.Molecule.MolResidue.isotopeLabels

Isotope label 
objects relevant to MolResidue
  @param  Mole_MolResidue self
  @param  Refs_IsotopeLabel value
**/
extern void *Mole_MolResidue_AddIsotopeLabel(Mole_MolResidue self, Refs_IsotopeLabel value);

/**
  CheckAllValid for ccp.molecule.Molecule.MolResidue
  @param  Mole_MolResidue self
  @param  ApiBoolean complete
**/
extern void *Mole_MolResidue_CheckAllValid(Mole_MolResidue self, ApiBoolean complete);

/**
  CheckValid for ccp.molecule.Molecule.MolResidue
  @param  Mole_MolResidue self
  @param  ApiBoolean complete
**/
extern void *Mole_MolResidue_CheckValid(Mole_MolResidue self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MolResidue self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Mole_MolResidue_FindAllApplicationData(Mole_MolResidue self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MolResidue self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Mole_MolResidue_FindAllApplicationData_keyval0(Mole_MolResidue self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MolResidue self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Mole_MolResidue_FindAllApplicationData_keyval1(Mole_MolResidue self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MolResidue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Mole_MolResidue_FindAllApplicationData_keyval2(Mole_MolResidue self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MolResidue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Mole_MolResidue_FindAllApplicationData_keyval3(Mole_MolResidue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MolResidue self
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
extern ApiList Mole_MolResidue_FindAllApplicationData_keyval4(Mole_MolResidue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.molecule.Molecule.MolResidue.isotopeLabels

Isotope 
label objects relevant to MolResidue
  @param  Mole_MolResidue self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mole_MolResidue_FindAllIsotopeLabels(Mole_MolResidue self, ApiMap conditions);

/**
  FindAll for ccp.molecule.Molecule.MolResidue.isotopeLabels

Isotope 
label objects relevant to MolResidue
  @param  Mole_MolResidue self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mole_MolResidue_FindAllIsotopeLabels_keyval0(Mole_MolResidue self);

/**
  FindAll for ccp.molecule.Molecule.MolResidue.isotopeLabels

Isotope 
label objects relevant to MolResidue
  @param  Mole_MolResidue self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mole_MolResidue_FindAllIsotopeLabels_keyval1(Mole_MolResidue self, char * key, ApiObject value);

/**
  FindAll for ccp.molecule.Molecule.MolResidue.isotopeLabels

Isotope 
label objects relevant to MolResidue
  @param  Mole_MolResidue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mole_MolResidue_FindAllIsotopeLabels_keyval2(Mole_MolResidue self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.molecule.Molecule.MolResidue.isotopeLabels

Isotope 
label objects relevant to MolResidue
  @param  Mole_MolResidue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mole_MolResidue_FindAllIsotopeLabels_keyval3(Mole_MolResidue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.molecule.Molecule.MolResidue.isotopeLabels

Isotope 
label objects relevant to MolResidue
  @param  Mole_MolResidue self
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
extern ApiSet Mole_MolResidue_FindAllIsotopeLabels_keyval4(Mole_MolResidue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.molecule.Molecule.MolResidue.molFeatures

The MolFeature 
associated to a MolResidue.
  @param  Mole_MolResidue self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mole_MolResidue_FindAllMolFeatures(Mole_MolResidue self, ApiMap conditions);

/**
  FindAll for ccp.molecule.Molecule.MolResidue.molFeatures

The MolFeature 
associated to a MolResidue.
  @param  Mole_MolResidue self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mole_MolResidue_FindAllMolFeatures_keyval0(Mole_MolResidue self);

/**
  FindAll for ccp.molecule.Molecule.MolResidue.molFeatures

The MolFeature 
associated to a MolResidue.
  @param  Mole_MolResidue self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mole_MolResidue_FindAllMolFeatures_keyval1(Mole_MolResidue self, char * key, ApiObject value);

/**
  FindAll for ccp.molecule.Molecule.MolResidue.molFeatures

The MolFeature 
associated to a MolResidue.
  @param  Mole_MolResidue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mole_MolResidue_FindAllMolFeatures_keyval2(Mole_MolResidue self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.molecule.Molecule.MolResidue.molFeatures

The MolFeature 
associated to a MolResidue.
  @param  Mole_MolResidue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mole_MolResidue_FindAllMolFeatures_keyval3(Mole_MolResidue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.molecule.Molecule.MolResidue.molFeatures

The MolFeature 
associated to a MolResidue.
  @param  Mole_MolResidue self
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
extern ApiSet Mole_MolResidue_FindAllMolFeatures_keyval4(Mole_MolResidue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.molecule.Molecule.MolResidue.molResLinkEnds

child link 
to class MolResLinkEnd
  @param  Mole_MolResidue self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mole_MolResidue_FindAllMolResLinkEnds(Mole_MolResidue self, ApiMap conditions);

/**
  FindAll for ccp.molecule.Molecule.MolResidue.molResLinkEnds

child link 
to class MolResLinkEnd
  @param  Mole_MolResidue self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mole_MolResidue_FindAllMolResLinkEnds_keyval0(Mole_MolResidue self);

/**
  FindAll for ccp.molecule.Molecule.MolResidue.molResLinkEnds

child link 
to class MolResLinkEnd
  @param  Mole_MolResidue self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mole_MolResidue_FindAllMolResLinkEnds_keyval1(Mole_MolResidue self, char * key, ApiObject value);

/**
  FindAll for ccp.molecule.Molecule.MolResidue.molResLinkEnds

child link 
to class MolResLinkEnd
  @param  Mole_MolResidue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mole_MolResidue_FindAllMolResLinkEnds_keyval2(Mole_MolResidue self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.molecule.Molecule.MolResidue.molResLinkEnds

child link 
to class MolResLinkEnd
  @param  Mole_MolResidue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mole_MolResidue_FindAllMolResLinkEnds_keyval3(Mole_MolResidue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.molecule.Molecule.MolResidue.molResLinkEnds

child link 
to class MolResLinkEnd
  @param  Mole_MolResidue self
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
extern ApiSet Mole_MolResidue_FindAllMolResLinkEnds_keyval4(Mole_MolResidue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MolResidue self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Mole_MolResidue_FindFirstApplicationData(Mole_MolResidue self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MolResidue self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Mole_MolResidue_FindFirstApplicationData_keyval0(Mole_MolResidue self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MolResidue self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Mole_MolResidue_FindFirstApplicationData_keyval1(Mole_MolResidue self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MolResidue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Mole_MolResidue_FindFirstApplicationData_keyval2(Mole_MolResidue self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MolResidue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Mole_MolResidue_FindFirstApplicationData_keyval3(Mole_MolResidue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MolResidue self
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
extern Impl_ApplicationData Mole_MolResidue_FindFirstApplicationData_keyval4(Mole_MolResidue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.molecule.Molecule.MolResidue.isotopeLabels

Isotope 
label objects relevant to MolResidue
  @param  Mole_MolResidue self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Refs_IsotopeLabel Mole_MolResidue_FindFirstIsotopeLabel(Mole_MolResidue self, ApiMap conditions);

/**
  FindFirst for ccp.molecule.Molecule.MolResidue.isotopeLabels

Isotope 
label objects relevant to MolResidue
  @param  Mole_MolResidue self
  @returns  the first value that satisfies the conditions 
**/
extern Refs_IsotopeLabel Mole_MolResidue_FindFirstIsotopeLabel_keyval0(Mole_MolResidue self);

/**
  FindFirst for ccp.molecule.Molecule.MolResidue.isotopeLabels

Isotope 
label objects relevant to MolResidue
  @param  Mole_MolResidue self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Refs_IsotopeLabel Mole_MolResidue_FindFirstIsotopeLabel_keyval1(Mole_MolResidue self, char * key, ApiObject value);

/**
  FindFirst for ccp.molecule.Molecule.MolResidue.isotopeLabels

Isotope 
label objects relevant to MolResidue
  @param  Mole_MolResidue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Refs_IsotopeLabel Mole_MolResidue_FindFirstIsotopeLabel_keyval2(Mole_MolResidue self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.molecule.Molecule.MolResidue.isotopeLabels

Isotope 
label objects relevant to MolResidue
  @param  Mole_MolResidue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Refs_IsotopeLabel Mole_MolResidue_FindFirstIsotopeLabel_keyval3(Mole_MolResidue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.molecule.Molecule.MolResidue.isotopeLabels

Isotope 
label objects relevant to MolResidue
  @param  Mole_MolResidue self
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
extern Refs_IsotopeLabel Mole_MolResidue_FindFirstIsotopeLabel_keyval4(Mole_MolResidue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.molecule.Molecule.MolResidue.molFeatures

The 
MolFeature associated to a MolResidue.
  @param  Mole_MolResidue self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Anno_MolFeature Mole_MolResidue_FindFirstMolFeature(Mole_MolResidue self, ApiMap conditions);

/**
  FindFirst for ccp.molecule.Molecule.MolResidue.molFeatures

The 
MolFeature associated to a MolResidue.
  @param  Mole_MolResidue self
  @returns  the first value that satisfies the conditions 
**/
extern Anno_MolFeature Mole_MolResidue_FindFirstMolFeature_keyval0(Mole_MolResidue self);

/**
  FindFirst for ccp.molecule.Molecule.MolResidue.molFeatures

The 
MolFeature associated to a MolResidue.
  @param  Mole_MolResidue self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Anno_MolFeature Mole_MolResidue_FindFirstMolFeature_keyval1(Mole_MolResidue self, char * key, ApiObject value);

/**
  FindFirst for ccp.molecule.Molecule.MolResidue.molFeatures

The 
MolFeature associated to a MolResidue.
  @param  Mole_MolResidue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Anno_MolFeature Mole_MolResidue_FindFirstMolFeature_keyval2(Mole_MolResidue self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.molecule.Molecule.MolResidue.molFeatures

The 
MolFeature associated to a MolResidue.
  @param  Mole_MolResidue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Anno_MolFeature Mole_MolResidue_FindFirstMolFeature_keyval3(Mole_MolResidue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.molecule.Molecule.MolResidue.molFeatures

The 
MolFeature associated to a MolResidue.
  @param  Mole_MolResidue self
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
extern Anno_MolFeature Mole_MolResidue_FindFirstMolFeature_keyval4(Mole_MolResidue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.molecule.Molecule.MolResidue.molResLinkEnds

child 
link to class MolResLinkEnd
  @param  Mole_MolResidue self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Mole_MolResLinkEnd Mole_MolResidue_FindFirstMolResLinkEnd(Mole_MolResidue self, ApiMap conditions);

/**
  FindFirst for ccp.molecule.Molecule.MolResidue.molResLinkEnds

child 
link to class MolResLinkEnd
  @param  Mole_MolResidue self
  @returns  the first value that satisfies the conditions 
**/
extern Mole_MolResLinkEnd Mole_MolResidue_FindFirstMolResLinkEnd_keyval0(Mole_MolResidue self);

/**
  FindFirst for ccp.molecule.Molecule.MolResidue.molResLinkEnds

child 
link to class MolResLinkEnd
  @param  Mole_MolResidue self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Mole_MolResLinkEnd Mole_MolResidue_FindFirstMolResLinkEnd_keyval1(Mole_MolResidue self, char * key, ApiObject value);

/**
  FindFirst for ccp.molecule.Molecule.MolResidue.molResLinkEnds

child 
link to class MolResLinkEnd
  @param  Mole_MolResidue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Mole_MolResLinkEnd Mole_MolResidue_FindFirstMolResLinkEnd_keyval2(Mole_MolResidue self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.molecule.Molecule.MolResidue.molResLinkEnds

child 
link to class MolResLinkEnd
  @param  Mole_MolResidue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Mole_MolResLinkEnd Mole_MolResidue_FindFirstMolResLinkEnd_keyval3(Mole_MolResidue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.molecule.Molecule.MolResidue.molResLinkEnds

child 
link to class MolResLinkEnd
  @param  Mole_MolResidue self
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
extern Mole_MolResLinkEnd Mole_MolResidue_FindFirstMolResLinkEnd_keyval4(Mole_MolResidue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.molecule.Molecule.MolResidue
  @param  Mole_MolResidue self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Mole_MolResidue_Get(Mole_MolResidue self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Mole_MolResidue self
  @returns   the result
**/
extern Acco_AccessObject Mole_MolResidue_GetAccess(Mole_MolResidue self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MolResidue self
  @returns   the result
**/
extern ApiList Mole_MolResidue_GetApplicationData(Mole_MolResidue self);

/**
  GetByKey for ccp.molecule.Molecule.MolResidue
  @param  Mole_MolResidue self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Mole_MolResidue Mole_MolResidue_GetByKey(Mole_MolResidue self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  getter for derived attribute ccpCode
  @param  Mole_MolResidue self
  @returns   the result
**/
extern ApiString Mole_MolResidue_GetCcpCode(Mole_MolResidue self);

/**
  Get for ccp.molecule.Molecule.MolResidue.chemComp

ChemComp that 
describes the type of the MolResidue
  @param  Mole_MolResidue self
  @returns   the result
**/
extern Chem_ChemComp Mole_MolResidue_GetChemComp(Mole_MolResidue self);

/**
  getter for derived link chemCompVar
  @param  Mole_MolResidue self
  @returns   the result
**/
extern Chem_ChemCompVar Mole_MolResidue_GetChemCompVar(Mole_MolResidue self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Mole_MolResidue self
  @returns   the result
**/
extern ApiString Mole_MolResidue_GetClassName(Mole_MolResidue self);

/**
  Get for ccp.molecule.Molecule.MolResidue.descriptor

ChemComp descriptor 
- part of ChemCompVar key. Describes topological variant (e,g, 
protonation state) of ChemCompVar. For Polymer-type ChemComps (those 
that have 'next' or 'prev' LinkEnds) also describes non-polymer part of 
substitution pattern.
  @param  Mole_MolResidue self
  @returns   the result
**/
extern ApiString Mole_MolResidue_GetDescriptor(Mole_MolResidue self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Mole_MolResidue self
  @returns   the result
**/
extern ApiList Mole_MolResidue_GetFieldNames(Mole_MolResidue self);

/**
  GetFullKey for ccp.molecule.Molecule.MolResidue
  @param  Mole_MolResidue self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Mole_MolResidue_GetFullKey(Mole_MolResidue self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Mole_MolResidue self
  @returns   the result
**/
extern ApiBoolean Mole_MolResidue_GetInConstructor(Mole_MolResidue self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Mole_MolResidue self
  @returns   the result
**/
extern ApiBoolean Mole_MolResidue_GetIsDeleted(Mole_MolResidue self);

/**
  Get for ccp.molecule.Molecule.MolResidue.isotopeLabels

Isotope label 
objects relevant to MolResidue
  @param  Mole_MolResidue self
  @returns   the result
**/
extern ApiSet Mole_MolResidue_GetIsotopeLabels(Mole_MolResidue self);

/**
  Get for ccp.molecule.Molecule.MolResidue.linking

Residue linking code. 
For polymers distinguishes between terminal (start), terminal (end) and 
internal residues. For nonpolymers defines substitution pattern. Part of 
key for ChemCompVar. May be modified after sequence definition.
  @param  Mole_MolResidue self
  @returns   the result
**/
extern ApiString Mole_MolResidue_GetLinking(Mole_MolResidue self);

/**
  GetLocalKey for ccp.molecule.Molecule.MolResidue
  @param  Mole_MolResidue self
  @returns  Local object key
**/
extern ApiObject Mole_MolResidue_GetLocalKey(Mole_MolResidue self);

/**
  Get for ccp.molecule.Molecule.MolResidue.molFeatures

The MolFeature 
associated to a MolResidue.
  @param  Mole_MolResidue self
  @returns   the result
**/
extern ApiSet Mole_MolResidue_GetMolFeatures(Mole_MolResidue self);

/**
  Get for ccp.molecule.Molecule.MolResidue.molResLinkEnds

child link to 
class MolResLinkEnd
  @param  Mole_MolResidue self
  @returns   the result
**/
extern ApiSet Mole_MolResidue_GetMolResLinkEnds(Mole_MolResidue self);

/**
  Get for ccp.molecule.Molecule.MolResidue.molSeqFragment

MolSeqFragment 
delimited by MolResidue
  @param  Mole_MolResidue self
  @returns   the result
**/
extern Mole_MolSeqFragment Mole_MolResidue_GetMolSeqFragment(Mole_MolResidue self);

/**
  getter for derived attribute molType
  @param  Mole_MolResidue self
  @returns   the result
**/
extern ApiString Mole_MolResidue_GetMolType(Mole_MolResidue self);

/**
  Get for ccp.molecule.Molecule.MolResidue.molecule

parent link
  @param  Mole_MolResidue self
  @returns   the result
**/
extern Mole_Molecule Mole_MolResidue_GetMolecule(Mole_MolResidue self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Mole_MolResidue self
  @returns   the result
**/
extern ApiString Mole_MolResidue_GetPackageName(Mole_MolResidue self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Mole_MolResidue self
  @returns   the result
**/
extern ApiString Mole_MolResidue_GetPackageShortName(Mole_MolResidue self);

/**
  Get for ccp.molecule.Molecule.MolResidue.parent

link to parent object - 
synonym for molecule
  @param  Mole_MolResidue self
  @returns   the result
**/
extern Mole_Molecule Mole_MolResidue_GetParent(Mole_MolResidue self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Mole_MolResidue self
  @returns   the result
**/
extern ApiString Mole_MolResidue_GetQualifiedName(Mole_MolResidue self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Mole_MolResidue self
  @returns   the result
**/
extern Impl_MemopsRoot Mole_MolResidue_GetRoot(Mole_MolResidue self);

/**
  Get for ccp.molecule.Molecule.MolResidue.seqCode

The seqCode is the 
residue number given by the user. For linear polymers normally used to 
give the position of the residue in the molecule sequence.
  @param  Mole_MolResidue self
  @returns   the result
**/
extern ApiInteger Mole_MolResidue_GetSeqCode(Mole_MolResidue self);

/**
  Get for ccp.molecule.Molecule.MolResidue.seqInsertCode

Sequence insert 
code - entered by user. Serves to distinguish residues that the user 
prefers to give the same seqCode. Defaults to a single space.
  @param  Mole_MolResidue self
  @returns   the result
**/
extern ApiString Mole_MolResidue_GetSeqInsertCode(Mole_MolResidue self);

/**
  Get for ccp.molecule.Molecule.MolResidue.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Mole_MolResidue self
  @returns   the result
**/
extern ApiInteger Mole_MolResidue_GetSerial(Mole_MolResidue self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Mole_MolResidue self
  @returns   the result
**/
extern Impl_TopObject Mole_MolResidue_GetTopObject(Mole_MolResidue self);

/**
  Constructor for ccp.molecule.Molecule.MolResidue
  @param  Mole_Molecule parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Mole_MolResidue Mole_MolResidue_Init(Mole_Molecule parent, ApiMap attrlinks);

/**
  Constructor for ccp.molecule.Molecule.MolResidue
  @param  Mole_Molecule parent
  @param  Chem_ChemComp chemComp
  @param  char * descriptor
  @param  char * linking
  @param  ApiInteger seqCode
  @returns  the new object
**/
extern Mole_MolResidue Mole_MolResidue_Init_reqd(Mole_Molecule parent, Chem_ChemComp chemComp, char * descriptor, char * linking, ApiInteger seqCode);

/**
  Factory function to create ccp.molecule.Molecule.MolResLinkEnd
  @param  Mole_MolResidue self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Mole_MolResLinkEnd Mole_MolResidue_NewMolResLinkEnd(Mole_MolResidue self, ApiMap attrlinks);

/**
  Factory function to create ccp.molecule.Molecule.MolResLinkEnd
  @param  Mole_MolResidue self
  @param  char * linkCode
  @returns  the new object
**/
extern Mole_MolResLinkEnd Mole_MolResidue_NewMolResLinkEnd_reqd(Mole_MolResidue self, char * linkCode);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MolResidue self
  @param  Impl_ApplicationData value
**/
extern void *Mole_MolResidue_RemoveApplicationData(Mole_MolResidue self, Impl_ApplicationData value);

/**
  Remove for ccp.molecule.Molecule.MolResidue.isotopeLabels

Isotope label 
objects relevant to MolResidue
  @param  Mole_MolResidue self
  @param  Refs_IsotopeLabel value
**/
extern void *Mole_MolResidue_RemoveIsotopeLabel(Mole_MolResidue self, Refs_IsotopeLabel value);

/**
  SetAttr for ccp.molecule.Molecule.MolResidue
  @param  Mole_MolResidue self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Mole_MolResidue_Set(Mole_MolResidue self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Mole_MolResidue self
  @param  Acco_AccessObject value
**/
extern void *Mole_MolResidue_SetAccess(Mole_MolResidue self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MolResidue self
  @param  ApiList values
**/
extern void *Mole_MolResidue_SetApplicationData(Mole_MolResidue self, ApiList values);

/**
  Set for ccp.molecule.Molecule.MolResidue.chemComp

ChemComp that 
describes the type of the MolResidue
  @param  Mole_MolResidue self
  @param  Chem_ChemComp value
**/
extern void *Mole_MolResidue_SetChemComp(Mole_MolResidue self, Chem_ChemComp value);

/**
  setter for settable, derived link chemCompVar. NB needed also for 
backward compatibility with release 1.0b1
  @param  Mole_MolResidue self
  @param  Chem_ChemCompVar value
**/
extern void *Mole_MolResidue_SetChemCompVar(Mole_MolResidue self, Chem_ChemCompVar value);

/**
  Set for ccp.molecule.Molecule.MolResidue.descriptor

ChemComp descriptor 
- part of ChemCompVar key. Describes topological variant (e,g, 
protonation state) of ChemCompVar. For Polymer-type ChemComps (those 
that have 'next' or 'prev' LinkEnds) also describes non-polymer part of 
substitution pattern.
  @param  Mole_MolResidue self
  @param  ApiString value
**/
extern void *Mole_MolResidue_SetDescriptor(Mole_MolResidue self, ApiString value);

/**
  Set for ccp.molecule.Molecule.MolResidue.isotopeLabels

Isotope label 
objects relevant to MolResidue
  @param  Mole_MolResidue self
  @param  ApiSet values
**/
extern void *Mole_MolResidue_SetIsotopeLabels(Mole_MolResidue self, ApiSet values);

/**
  Set for ccp.molecule.Molecule.MolResidue.linking

Residue linking code. 
For polymers distinguishes between terminal (start), terminal (end) and 
internal residues. For nonpolymers defines substitution pattern. Part of 
key for ChemCompVar. May be modified after sequence definition.
  @param  Mole_MolResidue self
  @param  ApiString value
**/
extern void *Mole_MolResidue_SetLinking(Mole_MolResidue self, ApiString value);

/**
  Set for ccp.molecule.Molecule.MolResidue.molFeatures

The MolFeature 
associated to a MolResidue.
  @param  Mole_MolResidue self
  @param  ApiSet values
**/
extern void *Mole_MolResidue_SetMolFeatures(Mole_MolResidue self, ApiSet values);

/**
  Set for ccp.molecule.Molecule.MolResidue.molSeqFragment

MolSeqFragment 
delimited by MolResidue
  @param  Mole_MolResidue self
  @param  Mole_MolSeqFragment value
**/
extern void *Mole_MolResidue_SetMolSeqFragment(Mole_MolResidue self, Mole_MolSeqFragment value);

/**
  Set for ccp.molecule.Molecule.MolResidue.seqCode

The seqCode is the 
residue number given by the user. For linear polymers normally used to 
give the position of the residue in the molecule sequence.
  @param  Mole_MolResidue self
  @param  ApiInteger value
**/
extern void *Mole_MolResidue_SetSeqCode(Mole_MolResidue self, ApiInteger value);

/**
  Set for ccp.molecule.Molecule.MolResidue.seqInsertCode

Sequence insert 
code - entered by user. Serves to distinguish residues that the user 
prefers to give the same seqCode. Defaults to a single space.
  @param  Mole_MolResidue self
  @param  ApiString value
**/
extern void *Mole_MolResidue_SetSeqInsertCode(Mole_MolResidue self, ApiString value);

/**
  Set for ccp.molecule.Molecule.MolResidue.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Mole_MolResidue self
  @param  ApiInteger value
**/
extern void *Mole_MolResidue_SetSerial(Mole_MolResidue self, ApiInteger value);

/**
  Sorted for ccp.molecule.Molecule.MolResidue.isotopeLabels

Isotope label 
objects relevant to MolResidue
  @param  Mole_MolResidue self
  @returns   the result
**/
extern ApiList Mole_MolResidue_SortedIsotopeLabels(Mole_MolResidue self);

/**
  Sorted for ccp.molecule.Molecule.MolResidue.molFeatures

The MolFeature 
associated to a MolResidue.
  @param  Mole_MolResidue self
  @returns   the result
**/
extern ApiList Mole_MolResidue_SortedMolFeatures(Mole_MolResidue self);

/**
  Sorted for ccp.molecule.Molecule.MolResidue.molResLinkEnds

child link 
to class MolResLinkEnd
  @param  Mole_MolResidue self
  @returns   the result
**/
extern ApiList Mole_MolResidue_SortedMolResLinkEnds(Mole_MolResidue self);

#endif /* __incl__ccp_api_molecule_Molecule_MolResidue_h__ */
