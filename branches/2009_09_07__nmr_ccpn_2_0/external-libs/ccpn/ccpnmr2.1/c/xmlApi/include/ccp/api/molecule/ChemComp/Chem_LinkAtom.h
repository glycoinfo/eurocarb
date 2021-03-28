
#ifndef __incl__ccp_api_molecule_ChemComp_LinkAtom_h__
#define __incl__ccp_api_molecule_ChemComp_LinkAtom_h__

#include "ccp.h"

/*
   Atom used to specify LinkEnds. Serves as a placeholder for ChemAtoms that are not part of the present ChemComp but of other ChemComps linked to it. As such allows the definition of bonds, Torsions, Stereochemistry etc. involving ChemAtoms from several ChemComps. The key element in the definition of LinkEnds. 
*/

/* package ccp.api.molecule.ChemComp */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_LinkAtom self
  @param  Impl_ApplicationData value
**/
extern void *Chem_LinkAtom_AddApplicationData(Chem_LinkAtom self, Impl_ApplicationData value);

/**
  Add for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  Chem_ChemCompVar value
**/
extern void *Chem_LinkAtom_AddChemCompVar(Chem_LinkAtom self, Chem_ChemCompVar value);

/**
  CheckAllValid for ccp.molecule.ChemComp.LinkAtom
  @param  Chem_LinkAtom self
  @param  ApiBoolean complete
**/
extern void *Chem_LinkAtom_CheckAllValid(Chem_LinkAtom self, ApiBoolean complete);

/**
  CheckValid for ccp.molecule.ChemComp.LinkAtom
  @param  Chem_LinkAtom self
  @param  ApiBoolean complete
**/
extern void *Chem_LinkAtom_CheckValid(Chem_LinkAtom self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_LinkAtom self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Chem_LinkAtom_FindAllApplicationData(Chem_LinkAtom self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_LinkAtom self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Chem_LinkAtom_FindAllApplicationData_keyval0(Chem_LinkAtom self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_LinkAtom self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Chem_LinkAtom_FindAllApplicationData_keyval1(Chem_LinkAtom self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_LinkAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Chem_LinkAtom_FindAllApplicationData_keyval2(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_LinkAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Chem_LinkAtom_FindAllApplicationData_keyval3(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_LinkAtom self
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
extern ApiList Chem_LinkAtom_FindAllApplicationData_keyval4(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemAngles

ChemAngles involving 
AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_LinkAtom_FindAllChemAngles(Chem_LinkAtom self, ApiMap conditions);

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemAngles

ChemAngles involving 
AbstractChemAtom
  @param  Chem_LinkAtom self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_LinkAtom_FindAllChemAngles_keyval0(Chem_LinkAtom self);

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemAngles

ChemAngles involving 
AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_LinkAtom_FindAllChemAngles_keyval1(Chem_LinkAtom self, char * key, ApiObject value);

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemAngles

ChemAngles involving 
AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_LinkAtom_FindAllChemAngles_keyval2(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemAngles

ChemAngles involving 
AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_LinkAtom_FindAllChemAngles_keyval3(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemAngles

ChemAngles involving 
AbstractChemAtom
  @param  Chem_LinkAtom self
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
extern ApiSet Chem_LinkAtom_FindAllChemAngles_keyval4(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.molecule.ChemComp.AbstractChemAtom.chemBonds

ChemBonds 
involving AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_LinkAtom_FindAllChemBonds(Chem_LinkAtom self, ApiMap conditions);

/**
  FindAll for ccp.molecule.ChemComp.AbstractChemAtom.chemBonds

ChemBonds 
involving AbstractChemAtom
  @param  Chem_LinkAtom self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_LinkAtom_FindAllChemBonds_keyval0(Chem_LinkAtom self);

/**
  FindAll for ccp.molecule.ChemComp.AbstractChemAtom.chemBonds

ChemBonds 
involving AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_LinkAtom_FindAllChemBonds_keyval1(Chem_LinkAtom self, char * key, ApiObject value);

/**
  FindAll for ccp.molecule.ChemComp.AbstractChemAtom.chemBonds

ChemBonds 
involving AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_LinkAtom_FindAllChemBonds_keyval2(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.molecule.ChemComp.AbstractChemAtom.chemBonds

ChemBonds 
involving AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_LinkAtom_FindAllChemBonds_keyval3(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.molecule.ChemComp.AbstractChemAtom.chemBonds

ChemBonds 
involving AbstractChemAtom
  @param  Chem_LinkAtom self
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
extern ApiSet Chem_LinkAtom_FindAllChemBonds_keyval4(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_LinkAtom_FindAllChemCompVars(Chem_LinkAtom self, ApiMap conditions);

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_LinkAtom self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_LinkAtom_FindAllChemCompVars_keyval0(Chem_LinkAtom self);

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_LinkAtom_FindAllChemCompVars_keyval1(Chem_LinkAtom self, char * key, ApiObject value);

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_LinkAtom_FindAllChemCompVars_keyval2(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_LinkAtom_FindAllChemCompVars_keyval3(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_LinkAtom self
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
extern ApiSet Chem_LinkAtom_FindAllChemCompVars_keyval4(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemTorsions

ChemTorsions 
involving AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_LinkAtom_FindAllChemTorsions(Chem_LinkAtom self, ApiMap conditions);

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemTorsions

ChemTorsions 
involving AbstractChemAtom
  @param  Chem_LinkAtom self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_LinkAtom_FindAllChemTorsions_keyval0(Chem_LinkAtom self);

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemTorsions

ChemTorsions 
involving AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_LinkAtom_FindAllChemTorsions_keyval1(Chem_LinkAtom self, char * key, ApiObject value);

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemTorsions

ChemTorsions 
involving AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_LinkAtom_FindAllChemTorsions_keyval2(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemTorsions

ChemTorsions 
involving AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_LinkAtom_FindAllChemTorsions_keyval3(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemTorsions

ChemTorsions 
involving AbstractChemAtom
  @param  Chem_LinkAtom self
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
extern ApiSet Chem_LinkAtom_FindAllChemTorsions_keyval4(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.stereochemistries

StereoChemistry 
objects that involve AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_LinkAtom_FindAllStereochemistries(Chem_LinkAtom self, ApiMap conditions);

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.stereochemistries

StereoChemistry 
objects that involve AbstractChemAtom
  @param  Chem_LinkAtom self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_LinkAtom_FindAllStereochemistries_keyval0(Chem_LinkAtom self);

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.stereochemistries

StereoChemistry 
objects that involve AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_LinkAtom_FindAllStereochemistries_keyval1(Chem_LinkAtom self, char * key, ApiObject value);

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.stereochemistries

StereoChemistry 
objects that involve AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_LinkAtom_FindAllStereochemistries_keyval2(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.stereochemistries

StereoChemistry 
objects that involve AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_LinkAtom_FindAllStereochemistries_keyval3(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.stereochemistries

StereoChemistry 
objects that involve AbstractChemAtom
  @param  Chem_LinkAtom self
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
extern ApiSet Chem_LinkAtom_FindAllStereochemistries_keyval4(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_LinkAtom self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Chem_LinkAtom_FindFirstApplicationData(Chem_LinkAtom self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_LinkAtom self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Chem_LinkAtom_FindFirstApplicationData_keyval0(Chem_LinkAtom self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_LinkAtom self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Chem_LinkAtom_FindFirstApplicationData_keyval1(Chem_LinkAtom self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_LinkAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Chem_LinkAtom_FindFirstApplicationData_keyval2(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_LinkAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Chem_LinkAtom_FindFirstApplicationData_keyval3(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_LinkAtom self
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
extern Impl_ApplicationData Chem_LinkAtom_FindFirstApplicationData_keyval4(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemAngles

ChemAngles involving 
AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemAngle Chem_LinkAtom_FindFirstChemAngle(Chem_LinkAtom self, ApiMap conditions);

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemAngles

ChemAngles involving 
AbstractChemAtom
  @param  Chem_LinkAtom self
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemAngle Chem_LinkAtom_FindFirstChemAngle_keyval0(Chem_LinkAtom self);

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemAngles

ChemAngles involving 
AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemAngle Chem_LinkAtom_FindFirstChemAngle_keyval1(Chem_LinkAtom self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemAngles

ChemAngles involving 
AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemAngle Chem_LinkAtom_FindFirstChemAngle_keyval2(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemAngles

ChemAngles involving 
AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemAngle Chem_LinkAtom_FindFirstChemAngle_keyval3(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemAngles

ChemAngles involving 
AbstractChemAtom
  @param  Chem_LinkAtom self
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
extern Chem_ChemAngle Chem_LinkAtom_FindFirstChemAngle_keyval4(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemBonds

ChemBonds involving 
AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemBond Chem_LinkAtom_FindFirstChemBond(Chem_LinkAtom self, ApiMap conditions);

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemBonds

ChemBonds involving 
AbstractChemAtom
  @param  Chem_LinkAtom self
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemBond Chem_LinkAtom_FindFirstChemBond_keyval0(Chem_LinkAtom self);

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemBonds

ChemBonds involving 
AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemBond Chem_LinkAtom_FindFirstChemBond_keyval1(Chem_LinkAtom self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemBonds

ChemBonds involving 
AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemBond Chem_LinkAtom_FindFirstChemBond_keyval2(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemBonds

ChemBonds involving 
AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemBond Chem_LinkAtom_FindFirstChemBond_keyval3(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemBonds

ChemBonds involving 
AbstractChemAtom
  @param  Chem_LinkAtom self
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
extern Chem_ChemBond Chem_LinkAtom_FindFirstChemBond_keyval4(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemCompVar Chem_LinkAtom_FindFirstChemCompVar(Chem_LinkAtom self, ApiMap conditions);

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_LinkAtom self
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemCompVar Chem_LinkAtom_FindFirstChemCompVar_keyval0(Chem_LinkAtom self);

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemCompVar Chem_LinkAtom_FindFirstChemCompVar_keyval1(Chem_LinkAtom self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemCompVar Chem_LinkAtom_FindFirstChemCompVar_keyval2(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemCompVar Chem_LinkAtom_FindFirstChemCompVar_keyval3(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_LinkAtom self
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
extern Chem_ChemCompVar Chem_LinkAtom_FindFirstChemCompVar_keyval4(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemTorsions

ChemTorsions 
involving AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemTorsion Chem_LinkAtom_FindFirstChemTorsion(Chem_LinkAtom self, ApiMap conditions);

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemTorsions

ChemTorsions 
involving AbstractChemAtom
  @param  Chem_LinkAtom self
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemTorsion Chem_LinkAtom_FindFirstChemTorsion_keyval0(Chem_LinkAtom self);

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemTorsions

ChemTorsions 
involving AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemTorsion Chem_LinkAtom_FindFirstChemTorsion_keyval1(Chem_LinkAtom self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemTorsions

ChemTorsions 
involving AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemTorsion Chem_LinkAtom_FindFirstChemTorsion_keyval2(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemTorsions

ChemTorsions 
involving AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemTorsion Chem_LinkAtom_FindFirstChemTorsion_keyval3(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemTorsions

ChemTorsions 
involving AbstractChemAtom
  @param  Chem_LinkAtom self
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
extern Chem_ChemTorsion Chem_LinkAtom_FindFirstChemTorsion_keyval4(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.stereochemistries

StereoChemistry 
objects that involve AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Chem_Stereochemistry Chem_LinkAtom_FindFirstStereochemistry(Chem_LinkAtom self, ApiMap conditions);

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.stereochemistries

StereoChemistry 
objects that involve AbstractChemAtom
  @param  Chem_LinkAtom self
  @returns  the first value that satisfies the conditions 
**/
extern Chem_Stereochemistry Chem_LinkAtom_FindFirstStereochemistry_keyval0(Chem_LinkAtom self);

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.stereochemistries

StereoChemistry 
objects that involve AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Chem_Stereochemistry Chem_LinkAtom_FindFirstStereochemistry_keyval1(Chem_LinkAtom self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.stereochemistries

StereoChemistry 
objects that involve AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Chem_Stereochemistry Chem_LinkAtom_FindFirstStereochemistry_keyval2(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.stereochemistries

StereoChemistry 
objects that involve AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Chem_Stereochemistry Chem_LinkAtom_FindFirstStereochemistry_keyval3(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.stereochemistries

StereoChemistry 
objects that involve AbstractChemAtom
  @param  Chem_LinkAtom self
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
extern Chem_Stereochemistry Chem_LinkAtom_FindFirstStereochemistry_keyval4(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.molecule.ChemComp.LinkAtom
  @param  Chem_LinkAtom self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Chem_LinkAtom_Get(Chem_LinkAtom self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Chem_LinkAtom self
  @returns   the result
**/
extern Acco_AccessObject Chem_LinkAtom_GetAccess(Chem_LinkAtom self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Chem_LinkAtom self
  @returns   the result
**/
extern Acco_AccessObject Chem_LinkAtom_GetActiveAccess(Chem_LinkAtom self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_LinkAtom self
  @returns   the result
**/
extern ApiList Chem_LinkAtom_GetApplicationData(Chem_LinkAtom self);

/**
  Get for ccp.molecule.ChemComp.LinkAtom.boundLinkEnd

linkEnd with link 
directly bound to LinkAtom
  @param  Chem_LinkAtom self
  @returns   the result
**/
extern Chem_LinkEnd Chem_LinkAtom_GetBoundLinkEnd(Chem_LinkAtom self);

/**
  GetByKey for ccp.molecule.ChemComp.LinkAtom
  @param  Chem_LinkAtom self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Chem_LinkAtom Chem_LinkAtom_GetByKey(Chem_LinkAtom self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for ccp.molecule.ChemComp.AbstractChemAtom.chemAngles

ChemAngles 
involving AbstractChemAtom
  @param  Chem_LinkAtom self
  @returns   the result
**/
extern ApiSet Chem_LinkAtom_GetChemAngles(Chem_LinkAtom self);

/**
  Get for ccp.molecule.ChemComp.AbstractChemAtom.chemBonds

ChemBonds 
involving AbstractChemAtom
  @param  Chem_LinkAtom self
  @returns   the result
**/
extern ApiSet Chem_LinkAtom_GetChemBonds(Chem_LinkAtom self);

/**
  Get for ccp.molecule.ChemComp.AbstractChemAtom.chemComp

parent link
  @param  Chem_LinkAtom self
  @returns   the result
**/
extern Chem_ChemComp Chem_LinkAtom_GetChemComp(Chem_LinkAtom self);

/**
  Get for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_LinkAtom self
  @returns   the result
**/
extern ApiSet Chem_LinkAtom_GetChemCompVars(Chem_LinkAtom self);

/**
  Get for 
ccp.molecule.ChemComp.AbstractChemAtom.chemTorsions

ChemTorsions 
involving AbstractChemAtom
  @param  Chem_LinkAtom self
  @returns   the result
**/
extern ApiSet Chem_LinkAtom_GetChemTorsions(Chem_LinkAtom self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Chem_LinkAtom self
  @returns   the result
**/
extern ApiString Chem_LinkAtom_GetClassName(Chem_LinkAtom self);

/**
  getter for derived attribute elementSymbol
  @param  Chem_LinkAtom self
  @returns   the result
**/
extern ApiString Chem_LinkAtom_GetElementSymbol(Chem_LinkAtom self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Chem_LinkAtom self
  @returns   the result
**/
extern ApiList Chem_LinkAtom_GetFieldNames(Chem_LinkAtom self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Chem_LinkAtom self
  @returns   the result
**/
extern ApiBoolean Chem_LinkAtom_GetInConstructor(Chem_LinkAtom self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Chem_LinkAtom self
  @returns   the result
**/
extern ApiBoolean Chem_LinkAtom_GetIsDeleted(Chem_LinkAtom self);

/**
  Get for ccp.molecule.ChemComp.AbstractChemAtom.name

name of ChemAtom
  @param  Chem_LinkAtom self
  @returns   the result
**/
extern ApiString Chem_LinkAtom_GetName(Chem_LinkAtom self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Chem_LinkAtom self
  @returns   the result
**/
extern ApiString Chem_LinkAtom_GetPackageName(Chem_LinkAtom self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Chem_LinkAtom self
  @returns   the result
**/
extern ApiString Chem_LinkAtom_GetPackageShortName(Chem_LinkAtom self);

/**
  Get for ccp.molecule.ChemComp.AbstractChemAtom.parent

link to parent 
object - synonym for chemComp
  @param  Chem_LinkAtom self
  @returns   the result
**/
extern Chem_ChemComp Chem_LinkAtom_GetParent(Chem_LinkAtom self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Chem_LinkAtom self
  @returns   the result
**/
extern ApiString Chem_LinkAtom_GetQualifiedName(Chem_LinkAtom self);

/**
  Get for ccp.molecule.ChemComp.LinkAtom.remoteLinkEnd

LinkEnd where 
LinkAtom is remoteLinkAtom
  @param  Chem_LinkAtom self
  @returns   the result
**/
extern Chem_LinkEnd Chem_LinkAtom_GetRemoteLinkEnd(Chem_LinkAtom self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Chem_LinkAtom self
  @returns   the result
**/
extern Impl_MemopsRoot Chem_LinkAtom_GetRoot(Chem_LinkAtom self);

/**
  Get for 
ccp.molecule.ChemComp.AbstractChemAtom.stereochemistries

StereoChemistry 
objects that involve AbstractChemAtom
  @param  Chem_LinkAtom self
  @returns   the result
**/
extern ApiSet Chem_LinkAtom_GetStereochemistries(Chem_LinkAtom self);

/**
  Get for ccp.molecule.ChemComp.AbstractChemAtom.subType

Subtype of 
AbstractChemAtom, used to distinguish Atoms with the same names but 
different characteristics, to be used in diferent ChemCompVars.
  @param  Chem_LinkAtom self
  @returns   the result
**/
extern ApiInteger Chem_LinkAtom_GetSubType(Chem_LinkAtom self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Chem_LinkAtom self
  @returns   the result
**/
extern Impl_TopObject Chem_LinkAtom_GetTopObject(Chem_LinkAtom self);

/**
  Constructor for ccp.molecule.ChemComp.LinkAtom
  @param  Chem_ChemComp parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Chem_LinkAtom Chem_LinkAtom_Init(Chem_ChemComp parent, ApiMap attrlinks);

/**
  Constructor for ccp.molecule.ChemComp.LinkAtom
  @param  Chem_ChemComp parent
  @param  char * name
  @returns  the new object
**/
extern Chem_LinkAtom Chem_LinkAtom_Init_reqd(Chem_ChemComp parent, char * name);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_LinkAtom self
  @param  Impl_ApplicationData value
**/
extern void *Chem_LinkAtom_RemoveApplicationData(Chem_LinkAtom self, Impl_ApplicationData value);

/**
  Remove for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  Chem_ChemCompVar value
**/
extern void *Chem_LinkAtom_RemoveChemCompVar(Chem_LinkAtom self, Chem_ChemCompVar value);

/**
  SetAttr for ccp.molecule.ChemComp.LinkAtom
  @param  Chem_LinkAtom self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Chem_LinkAtom_Set(Chem_LinkAtom self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Chem_LinkAtom self
  @param  Acco_AccessObject value
**/
extern void *Chem_LinkAtom_SetAccess(Chem_LinkAtom self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_LinkAtom self
  @param  ApiList values
**/
extern void *Chem_LinkAtom_SetApplicationData(Chem_LinkAtom self, ApiList values);

/**
  Set for ccp.molecule.ChemComp.LinkAtom.boundLinkEnd

linkEnd with link 
directly bound to LinkAtom
  @param  Chem_LinkAtom self
  @param  Chem_LinkEnd value
**/
extern void *Chem_LinkAtom_SetBoundLinkEnd(Chem_LinkAtom self, Chem_LinkEnd value);

/**
  Set for ccp.molecule.ChemComp.AbstractChemAtom.chemAngles

ChemAngles 
involving AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  ApiSet values
**/
extern void *Chem_LinkAtom_SetChemAngles(Chem_LinkAtom self, ApiSet values);

/**
  Set for ccp.molecule.ChemComp.AbstractChemAtom.chemBonds

ChemBonds 
involving AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  ApiSet values
**/
extern void *Chem_LinkAtom_SetChemBonds(Chem_LinkAtom self, ApiSet values);

/**
  Set for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  ApiSet values
**/
extern void *Chem_LinkAtom_SetChemCompVars(Chem_LinkAtom self, ApiSet values);

/**
  Set for 
ccp.molecule.ChemComp.AbstractChemAtom.chemTorsions

ChemTorsions 
involving AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  ApiSet values
**/
extern void *Chem_LinkAtom_SetChemTorsions(Chem_LinkAtom self, ApiSet values);

/**
  Set for ccp.molecule.ChemComp.AbstractChemAtom.name

name of ChemAtom
  @param  Chem_LinkAtom self
  @param  ApiString value
**/
extern void *Chem_LinkAtom_SetName(Chem_LinkAtom self, ApiString value);

/**
  Set for ccp.molecule.ChemComp.LinkAtom.remoteLinkEnd

LinkEnd where 
LinkAtom is remoteLinkAtom
  @param  Chem_LinkAtom self
  @param  Chem_LinkEnd value
**/
extern void *Chem_LinkAtom_SetRemoteLinkEnd(Chem_LinkAtom self, Chem_LinkEnd value);

/**
  Set for 
ccp.molecule.ChemComp.AbstractChemAtom.stereochemistries

StereoChemistry 
objects that involve AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  ApiSet values
**/
extern void *Chem_LinkAtom_SetStereochemistries(Chem_LinkAtom self, ApiSet values);

/**
  Set for ccp.molecule.ChemComp.AbstractChemAtom.subType

Subtype of 
AbstractChemAtom, used to distinguish Atoms with the same names but 
different characteristics, to be used in diferent ChemCompVars.
  @param  Chem_LinkAtom self
  @param  ApiInteger value
**/
extern void *Chem_LinkAtom_SetSubType(Chem_LinkAtom self, ApiInteger value);

/**
  Sorted for ccp.molecule.ChemComp.AbstractChemAtom.chemAngles

ChemAngles 
involving AbstractChemAtom
  @param  Chem_LinkAtom self
  @returns   the result
**/
extern ApiList Chem_LinkAtom_SortedChemAngles(Chem_LinkAtom self);

/**
  Sorted for ccp.molecule.ChemComp.AbstractChemAtom.chemBonds

ChemBonds 
involving AbstractChemAtom
  @param  Chem_LinkAtom self
  @returns   the result
**/
extern ApiList Chem_LinkAtom_SortedChemBonds(Chem_LinkAtom self);

/**
  Sorted for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_LinkAtom self
  @returns   the result
**/
extern ApiList Chem_LinkAtom_SortedChemCompVars(Chem_LinkAtom self);

/**
  Sorted for 
ccp.molecule.ChemComp.AbstractChemAtom.chemTorsions

ChemTorsions 
involving AbstractChemAtom
  @param  Chem_LinkAtom self
  @returns   the result
**/
extern ApiList Chem_LinkAtom_SortedChemTorsions(Chem_LinkAtom self);

/**
  Sorted for 
ccp.molecule.ChemComp.AbstractChemAtom.stereochemistries

StereoChemistry 
objects that involve AbstractChemAtom
  @param  Chem_LinkAtom self
  @returns   the result
**/
extern ApiList Chem_LinkAtom_SortedStereochemistries(Chem_LinkAtom self);

#endif /* __incl__ccp_api_molecule_ChemComp_LinkAtom_h__ */
