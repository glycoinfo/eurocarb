
#ifndef __incl__ccp_api_molecule_ChemComp_AbstractChemAtom_h__
#define __incl__ccp_api_molecule_ChemComp_AbstractChemAtom_h__

#include "ccp.h"

/*
  Atom in topology sense. E.g. Arg CB.
  
  The AbstractChemAtoms within a ChemComp comprise all atomds (including link atoms) contained in any form of the ChemComp. The ChemCompVars then select the appropriate subset of AbstractChemAtoms. Bonds, angles, Stereochemistry etc. are relevant only for the ChemCompVars that contain all AbstractChemAtoms involved.
  
  ChemAtom names are (should be) IUPAC and follow from the nature of the ChemComp. LinkAtom names (should) reflect the linkCode of the LinkEnd they are part of; the recommended style is that a LinkEnd with a linkCode 'prev' should have link atoms named 'prev_1' for the LinkAtom partaking in the bond and 'prev_2' for the other LinkAtom.
*/

/* package ccp.api.molecule.ChemComp */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_AbstractChemAtom self
  @param  Impl_ApplicationData value
**/
extern void *Chem_AbstractChemAtom_AddApplicationData(Chem_AbstractChemAtom self, Impl_ApplicationData value);

/**
  Add for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  Chem_ChemCompVar value
**/
extern void *Chem_AbstractChemAtom_AddChemCompVar(Chem_AbstractChemAtom self, Chem_ChemCompVar value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_AbstractChemAtom self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Chem_AbstractChemAtom_FindAllApplicationData(Chem_AbstractChemAtom self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_AbstractChemAtom self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Chem_AbstractChemAtom_FindAllApplicationData_keyval0(Chem_AbstractChemAtom self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_AbstractChemAtom self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Chem_AbstractChemAtom_FindAllApplicationData_keyval1(Chem_AbstractChemAtom self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_AbstractChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Chem_AbstractChemAtom_FindAllApplicationData_keyval2(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_AbstractChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Chem_AbstractChemAtom_FindAllApplicationData_keyval3(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_AbstractChemAtom self
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
extern ApiList Chem_AbstractChemAtom_FindAllApplicationData_keyval4(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemAngles

ChemAngles involving 
AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_AbstractChemAtom_FindAllChemAngles(Chem_AbstractChemAtom self, ApiMap conditions);

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemAngles

ChemAngles involving 
AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_AbstractChemAtom_FindAllChemAngles_keyval0(Chem_AbstractChemAtom self);

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemAngles

ChemAngles involving 
AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_AbstractChemAtom_FindAllChemAngles_keyval1(Chem_AbstractChemAtom self, char * key, ApiObject value);

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemAngles

ChemAngles involving 
AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_AbstractChemAtom_FindAllChemAngles_keyval2(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemAngles

ChemAngles involving 
AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_AbstractChemAtom_FindAllChemAngles_keyval3(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemAngles

ChemAngles involving 
AbstractChemAtom
  @param  Chem_AbstractChemAtom self
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
extern ApiSet Chem_AbstractChemAtom_FindAllChemAngles_keyval4(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.molecule.ChemComp.AbstractChemAtom.chemBonds

ChemBonds 
involving AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_AbstractChemAtom_FindAllChemBonds(Chem_AbstractChemAtom self, ApiMap conditions);

/**
  FindAll for ccp.molecule.ChemComp.AbstractChemAtom.chemBonds

ChemBonds 
involving AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_AbstractChemAtom_FindAllChemBonds_keyval0(Chem_AbstractChemAtom self);

/**
  FindAll for ccp.molecule.ChemComp.AbstractChemAtom.chemBonds

ChemBonds 
involving AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_AbstractChemAtom_FindAllChemBonds_keyval1(Chem_AbstractChemAtom self, char * key, ApiObject value);

/**
  FindAll for ccp.molecule.ChemComp.AbstractChemAtom.chemBonds

ChemBonds 
involving AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_AbstractChemAtom_FindAllChemBonds_keyval2(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.molecule.ChemComp.AbstractChemAtom.chemBonds

ChemBonds 
involving AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_AbstractChemAtom_FindAllChemBonds_keyval3(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.molecule.ChemComp.AbstractChemAtom.chemBonds

ChemBonds 
involving AbstractChemAtom
  @param  Chem_AbstractChemAtom self
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
extern ApiSet Chem_AbstractChemAtom_FindAllChemBonds_keyval4(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_AbstractChemAtom_FindAllChemCompVars(Chem_AbstractChemAtom self, ApiMap conditions);

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_AbstractChemAtom_FindAllChemCompVars_keyval0(Chem_AbstractChemAtom self);

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_AbstractChemAtom_FindAllChemCompVars_keyval1(Chem_AbstractChemAtom self, char * key, ApiObject value);

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_AbstractChemAtom_FindAllChemCompVars_keyval2(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_AbstractChemAtom_FindAllChemCompVars_keyval3(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_AbstractChemAtom self
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
extern ApiSet Chem_AbstractChemAtom_FindAllChemCompVars_keyval4(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemTorsions

ChemTorsions 
involving AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_AbstractChemAtom_FindAllChemTorsions(Chem_AbstractChemAtom self, ApiMap conditions);

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemTorsions

ChemTorsions 
involving AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_AbstractChemAtom_FindAllChemTorsions_keyval0(Chem_AbstractChemAtom self);

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemTorsions

ChemTorsions 
involving AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_AbstractChemAtom_FindAllChemTorsions_keyval1(Chem_AbstractChemAtom self, char * key, ApiObject value);

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemTorsions

ChemTorsions 
involving AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_AbstractChemAtom_FindAllChemTorsions_keyval2(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemTorsions

ChemTorsions 
involving AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_AbstractChemAtom_FindAllChemTorsions_keyval3(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemTorsions

ChemTorsions 
involving AbstractChemAtom
  @param  Chem_AbstractChemAtom self
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
extern ApiSet Chem_AbstractChemAtom_FindAllChemTorsions_keyval4(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.stereochemistries

StereoChemistry 
objects that involve AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_AbstractChemAtom_FindAllStereochemistries(Chem_AbstractChemAtom self, ApiMap conditions);

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.stereochemistries

StereoChemistry 
objects that involve AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_AbstractChemAtom_FindAllStereochemistries_keyval0(Chem_AbstractChemAtom self);

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.stereochemistries

StereoChemistry 
objects that involve AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_AbstractChemAtom_FindAllStereochemistries_keyval1(Chem_AbstractChemAtom self, char * key, ApiObject value);

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.stereochemistries

StereoChemistry 
objects that involve AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_AbstractChemAtom_FindAllStereochemistries_keyval2(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.stereochemistries

StereoChemistry 
objects that involve AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_AbstractChemAtom_FindAllStereochemistries_keyval3(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.stereochemistries

StereoChemistry 
objects that involve AbstractChemAtom
  @param  Chem_AbstractChemAtom self
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
extern ApiSet Chem_AbstractChemAtom_FindAllStereochemistries_keyval4(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_AbstractChemAtom self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Chem_AbstractChemAtom_FindFirstApplicationData(Chem_AbstractChemAtom self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_AbstractChemAtom self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Chem_AbstractChemAtom_FindFirstApplicationData_keyval0(Chem_AbstractChemAtom self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_AbstractChemAtom self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Chem_AbstractChemAtom_FindFirstApplicationData_keyval1(Chem_AbstractChemAtom self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_AbstractChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Chem_AbstractChemAtom_FindFirstApplicationData_keyval2(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_AbstractChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Chem_AbstractChemAtom_FindFirstApplicationData_keyval3(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_AbstractChemAtom self
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
extern Impl_ApplicationData Chem_AbstractChemAtom_FindFirstApplicationData_keyval4(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemAngles

ChemAngles involving 
AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemAngle Chem_AbstractChemAtom_FindFirstChemAngle(Chem_AbstractChemAtom self, ApiMap conditions);

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemAngles

ChemAngles involving 
AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemAngle Chem_AbstractChemAtom_FindFirstChemAngle_keyval0(Chem_AbstractChemAtom self);

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemAngles

ChemAngles involving 
AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemAngle Chem_AbstractChemAtom_FindFirstChemAngle_keyval1(Chem_AbstractChemAtom self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemAngles

ChemAngles involving 
AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemAngle Chem_AbstractChemAtom_FindFirstChemAngle_keyval2(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemAngles

ChemAngles involving 
AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemAngle Chem_AbstractChemAtom_FindFirstChemAngle_keyval3(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemAngles

ChemAngles involving 
AbstractChemAtom
  @param  Chem_AbstractChemAtom self
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
extern Chem_ChemAngle Chem_AbstractChemAtom_FindFirstChemAngle_keyval4(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemBonds

ChemBonds involving 
AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemBond Chem_AbstractChemAtom_FindFirstChemBond(Chem_AbstractChemAtom self, ApiMap conditions);

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemBonds

ChemBonds involving 
AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemBond Chem_AbstractChemAtom_FindFirstChemBond_keyval0(Chem_AbstractChemAtom self);

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemBonds

ChemBonds involving 
AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemBond Chem_AbstractChemAtom_FindFirstChemBond_keyval1(Chem_AbstractChemAtom self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemBonds

ChemBonds involving 
AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemBond Chem_AbstractChemAtom_FindFirstChemBond_keyval2(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemBonds

ChemBonds involving 
AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemBond Chem_AbstractChemAtom_FindFirstChemBond_keyval3(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemBonds

ChemBonds involving 
AbstractChemAtom
  @param  Chem_AbstractChemAtom self
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
extern Chem_ChemBond Chem_AbstractChemAtom_FindFirstChemBond_keyval4(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemCompVar Chem_AbstractChemAtom_FindFirstChemCompVar(Chem_AbstractChemAtom self, ApiMap conditions);

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemCompVar Chem_AbstractChemAtom_FindFirstChemCompVar_keyval0(Chem_AbstractChemAtom self);

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemCompVar Chem_AbstractChemAtom_FindFirstChemCompVar_keyval1(Chem_AbstractChemAtom self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemCompVar Chem_AbstractChemAtom_FindFirstChemCompVar_keyval2(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemCompVar Chem_AbstractChemAtom_FindFirstChemCompVar_keyval3(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_AbstractChemAtom self
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
extern Chem_ChemCompVar Chem_AbstractChemAtom_FindFirstChemCompVar_keyval4(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemTorsions

ChemTorsions 
involving AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemTorsion Chem_AbstractChemAtom_FindFirstChemTorsion(Chem_AbstractChemAtom self, ApiMap conditions);

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemTorsions

ChemTorsions 
involving AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemTorsion Chem_AbstractChemAtom_FindFirstChemTorsion_keyval0(Chem_AbstractChemAtom self);

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemTorsions

ChemTorsions 
involving AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemTorsion Chem_AbstractChemAtom_FindFirstChemTorsion_keyval1(Chem_AbstractChemAtom self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemTorsions

ChemTorsions 
involving AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemTorsion Chem_AbstractChemAtom_FindFirstChemTorsion_keyval2(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemTorsions

ChemTorsions 
involving AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemTorsion Chem_AbstractChemAtom_FindFirstChemTorsion_keyval3(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemTorsions

ChemTorsions 
involving AbstractChemAtom
  @param  Chem_AbstractChemAtom self
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
extern Chem_ChemTorsion Chem_AbstractChemAtom_FindFirstChemTorsion_keyval4(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.stereochemistries

StereoChemistry 
objects that involve AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Chem_Stereochemistry Chem_AbstractChemAtom_FindFirstStereochemistry(Chem_AbstractChemAtom self, ApiMap conditions);

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.stereochemistries

StereoChemistry 
objects that involve AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @returns  the first value that satisfies the conditions 
**/
extern Chem_Stereochemistry Chem_AbstractChemAtom_FindFirstStereochemistry_keyval0(Chem_AbstractChemAtom self);

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.stereochemistries

StereoChemistry 
objects that involve AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Chem_Stereochemistry Chem_AbstractChemAtom_FindFirstStereochemistry_keyval1(Chem_AbstractChemAtom self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.stereochemistries

StereoChemistry 
objects that involve AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Chem_Stereochemistry Chem_AbstractChemAtom_FindFirstStereochemistry_keyval2(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.stereochemistries

StereoChemistry 
objects that involve AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Chem_Stereochemistry Chem_AbstractChemAtom_FindFirstStereochemistry_keyval3(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.stereochemistries

StereoChemistry 
objects that involve AbstractChemAtom
  @param  Chem_AbstractChemAtom self
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
extern Chem_Stereochemistry Chem_AbstractChemAtom_FindFirstStereochemistry_keyval4(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Chem_AbstractChemAtom self
  @returns   the result
**/
extern Acco_AccessObject Chem_AbstractChemAtom_GetAccess(Chem_AbstractChemAtom self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Chem_AbstractChemAtom self
  @returns   the result
**/
extern Acco_AccessObject Chem_AbstractChemAtom_GetActiveAccess(Chem_AbstractChemAtom self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_AbstractChemAtom self
  @returns   the result
**/
extern ApiList Chem_AbstractChemAtom_GetApplicationData(Chem_AbstractChemAtom self);

/**
  GetByKey for ccp.molecule.ChemComp.AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Chem_AbstractChemAtom Chem_AbstractChemAtom_GetByKey(Chem_AbstractChemAtom self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for ccp.molecule.ChemComp.AbstractChemAtom.chemAngles

ChemAngles 
involving AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @returns   the result
**/
extern ApiSet Chem_AbstractChemAtom_GetChemAngles(Chem_AbstractChemAtom self);

/**
  Get for ccp.molecule.ChemComp.AbstractChemAtom.chemBonds

ChemBonds 
involving AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @returns   the result
**/
extern ApiSet Chem_AbstractChemAtom_GetChemBonds(Chem_AbstractChemAtom self);

/**
  Get for ccp.molecule.ChemComp.AbstractChemAtom.chemComp

parent link
  @param  Chem_AbstractChemAtom self
  @returns   the result
**/
extern Chem_ChemComp Chem_AbstractChemAtom_GetChemComp(Chem_AbstractChemAtom self);

/**
  Get for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @returns   the result
**/
extern ApiSet Chem_AbstractChemAtom_GetChemCompVars(Chem_AbstractChemAtom self);

/**
  Get for 
ccp.molecule.ChemComp.AbstractChemAtom.chemTorsions

ChemTorsions 
involving AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @returns   the result
**/
extern ApiSet Chem_AbstractChemAtom_GetChemTorsions(Chem_AbstractChemAtom self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Chem_AbstractChemAtom self
  @returns   the result
**/
extern ApiString Chem_AbstractChemAtom_GetClassName(Chem_AbstractChemAtom self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Chem_AbstractChemAtom self
  @returns   the result
**/
extern ApiList Chem_AbstractChemAtom_GetFieldNames(Chem_AbstractChemAtom self);

/**
  GetFullKey for ccp.molecule.ChemComp.AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Chem_AbstractChemAtom_GetFullKey(Chem_AbstractChemAtom self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Chem_AbstractChemAtom self
  @returns   the result
**/
extern ApiBoolean Chem_AbstractChemAtom_GetInConstructor(Chem_AbstractChemAtom self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Chem_AbstractChemAtom self
  @returns   the result
**/
extern ApiBoolean Chem_AbstractChemAtom_GetIsDeleted(Chem_AbstractChemAtom self);

/**
  GetLocalKey for ccp.molecule.ChemComp.AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @returns  Local object key
**/
extern ApiObject Chem_AbstractChemAtom_GetLocalKey(Chem_AbstractChemAtom self);

/**
  Get for ccp.molecule.ChemComp.AbstractChemAtom.name

name of ChemAtom
  @param  Chem_AbstractChemAtom self
  @returns   the result
**/
extern ApiString Chem_AbstractChemAtom_GetName(Chem_AbstractChemAtom self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Chem_AbstractChemAtom self
  @returns   the result
**/
extern ApiString Chem_AbstractChemAtom_GetPackageName(Chem_AbstractChemAtom self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Chem_AbstractChemAtom self
  @returns   the result
**/
extern ApiString Chem_AbstractChemAtom_GetPackageShortName(Chem_AbstractChemAtom self);

/**
  Get for ccp.molecule.ChemComp.AbstractChemAtom.parent

link to parent 
object - synonym for chemComp
  @param  Chem_AbstractChemAtom self
  @returns   the result
**/
extern Chem_ChemComp Chem_AbstractChemAtom_GetParent(Chem_AbstractChemAtom self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Chem_AbstractChemAtom self
  @returns   the result
**/
extern ApiString Chem_AbstractChemAtom_GetQualifiedName(Chem_AbstractChemAtom self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Chem_AbstractChemAtom self
  @returns   the result
**/
extern Impl_MemopsRoot Chem_AbstractChemAtom_GetRoot(Chem_AbstractChemAtom self);

/**
  Get for 
ccp.molecule.ChemComp.AbstractChemAtom.stereochemistries

StereoChemistry 
objects that involve AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @returns   the result
**/
extern ApiSet Chem_AbstractChemAtom_GetStereochemistries(Chem_AbstractChemAtom self);

/**
  Get for ccp.molecule.ChemComp.AbstractChemAtom.subType

Subtype of 
AbstractChemAtom, used to distinguish Atoms with the same names but 
different characteristics, to be used in diferent ChemCompVars.
  @param  Chem_AbstractChemAtom self
  @returns   the result
**/
extern ApiInteger Chem_AbstractChemAtom_GetSubType(Chem_AbstractChemAtom self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Chem_AbstractChemAtom self
  @returns   the result
**/
extern Impl_TopObject Chem_AbstractChemAtom_GetTopObject(Chem_AbstractChemAtom self);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_AbstractChemAtom self
  @param  Impl_ApplicationData value
**/
extern void *Chem_AbstractChemAtom_RemoveApplicationData(Chem_AbstractChemAtom self, Impl_ApplicationData value);

/**
  Remove for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  Chem_ChemCompVar value
**/
extern void *Chem_AbstractChemAtom_RemoveChemCompVar(Chem_AbstractChemAtom self, Chem_ChemCompVar value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Chem_AbstractChemAtom self
  @param  Acco_AccessObject value
**/
extern void *Chem_AbstractChemAtom_SetAccess(Chem_AbstractChemAtom self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_AbstractChemAtom self
  @param  ApiList values
**/
extern void *Chem_AbstractChemAtom_SetApplicationData(Chem_AbstractChemAtom self, ApiList values);

/**
  Set for ccp.molecule.ChemComp.AbstractChemAtom.chemAngles

ChemAngles 
involving AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  ApiSet values
**/
extern void *Chem_AbstractChemAtom_SetChemAngles(Chem_AbstractChemAtom self, ApiSet values);

/**
  Set for ccp.molecule.ChemComp.AbstractChemAtom.chemBonds

ChemBonds 
involving AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  ApiSet values
**/
extern void *Chem_AbstractChemAtom_SetChemBonds(Chem_AbstractChemAtom self, ApiSet values);

/**
  Set for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  ApiSet values
**/
extern void *Chem_AbstractChemAtom_SetChemCompVars(Chem_AbstractChemAtom self, ApiSet values);

/**
  Set for 
ccp.molecule.ChemComp.AbstractChemAtom.chemTorsions

ChemTorsions 
involving AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  ApiSet values
**/
extern void *Chem_AbstractChemAtom_SetChemTorsions(Chem_AbstractChemAtom self, ApiSet values);

/**
  Set for ccp.molecule.ChemComp.AbstractChemAtom.name

name of ChemAtom
  @param  Chem_AbstractChemAtom self
  @param  ApiString value
**/
extern void *Chem_AbstractChemAtom_SetName(Chem_AbstractChemAtom self, ApiString value);

/**
  Set for 
ccp.molecule.ChemComp.AbstractChemAtom.stereochemistries

StereoChemistry 
objects that involve AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  ApiSet values
**/
extern void *Chem_AbstractChemAtom_SetStereochemistries(Chem_AbstractChemAtom self, ApiSet values);

/**
  Set for ccp.molecule.ChemComp.AbstractChemAtom.subType

Subtype of 
AbstractChemAtom, used to distinguish Atoms with the same names but 
different characteristics, to be used in diferent ChemCompVars.
  @param  Chem_AbstractChemAtom self
  @param  ApiInteger value
**/
extern void *Chem_AbstractChemAtom_SetSubType(Chem_AbstractChemAtom self, ApiInteger value);

/**
  Sorted for ccp.molecule.ChemComp.AbstractChemAtom.chemAngles

ChemAngles 
involving AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @returns   the result
**/
extern ApiList Chem_AbstractChemAtom_SortedChemAngles(Chem_AbstractChemAtom self);

/**
  Sorted for ccp.molecule.ChemComp.AbstractChemAtom.chemBonds

ChemBonds 
involving AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @returns   the result
**/
extern ApiList Chem_AbstractChemAtom_SortedChemBonds(Chem_AbstractChemAtom self);

/**
  Sorted for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @returns   the result
**/
extern ApiList Chem_AbstractChemAtom_SortedChemCompVars(Chem_AbstractChemAtom self);

/**
  Sorted for 
ccp.molecule.ChemComp.AbstractChemAtom.chemTorsions

ChemTorsions 
involving AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @returns   the result
**/
extern ApiList Chem_AbstractChemAtom_SortedChemTorsions(Chem_AbstractChemAtom self);

/**
  Sorted for 
ccp.molecule.ChemComp.AbstractChemAtom.stereochemistries

StereoChemistry 
objects that involve AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @returns   the result
**/
extern ApiList Chem_AbstractChemAtom_SortedStereochemistries(Chem_AbstractChemAtom self);

#endif /* __incl__ccp_api_molecule_ChemComp_AbstractChemAtom_h__ */
