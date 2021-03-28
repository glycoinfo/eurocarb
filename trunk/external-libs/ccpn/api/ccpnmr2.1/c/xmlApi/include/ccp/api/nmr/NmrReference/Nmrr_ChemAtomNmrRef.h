
#ifndef __incl__ccp_api_nmr_NmrReference_ChemAtomNmrRef_h__
#define __incl__ccp_api_nmr_NmrReference_ChemAtomNmrRef_h__

#include "ccp.h"

/*
  Information about refrence chemical shift for a ChemAtom. The information may apply to a ChemAtom in all ChemCompVars (linking and descriptor both 'any'), in some ChemCompVars (either linking or descriptor 'any') or in a specific ChemCompVar (all other cases). Either the meanValue or the randomCoilValue attribute must be set.
*/

/* package ccp.api.nmr.NmrReference */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemAtomNmrRef self
  @param  Impl_ApplicationData value
**/
extern void *Nmrr_ChemAtomNmrRef_AddApplicationData(Nmrr_ChemAtomNmrRef self, Impl_ApplicationData value);

/**
  Add for 
ccp.nmr.NmrReference.ChemAtomNmrRef.chemCompVarNmrRefs

ChemCompNmrRefs 
that contain this ChemAtomNmrRef.
  @param  Nmrr_ChemAtomNmrRef self
  @param  Nmrr_ChemCompVarNmrRef value
**/
extern void *Nmrr_ChemAtomNmrRef_AddChemCompVarNmrRef(Nmrr_ChemAtomNmrRef self, Nmrr_ChemCompVarNmrRef value);

/**
  Modify command for distribution. Specifically entered here to make sure 
command is disabled
  @param  Nmrr_ChemAtomNmrRef self
  @param  ApiFloat value
**/
extern void *Nmrr_ChemAtomNmrRef_AddDistribution(Nmrr_ChemAtomNmrRef self, ApiFloat value);

/**
  CheckAllValid for ccp.nmr.NmrReference.ChemAtomNmrRef
  @param  Nmrr_ChemAtomNmrRef self
  @param  ApiBoolean complete
**/
extern void *Nmrr_ChemAtomNmrRef_CheckAllValid(Nmrr_ChemAtomNmrRef self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.NmrReference.ChemAtomNmrRef
  @param  Nmrr_ChemAtomNmrRef self
  @param  ApiBoolean complete
**/
extern void *Nmrr_ChemAtomNmrRef_CheckValid(Nmrr_ChemAtomNmrRef self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemAtomNmrRef self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrr_ChemAtomNmrRef_FindAllApplicationData(Nmrr_ChemAtomNmrRef self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemAtomNmrRef self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrr_ChemAtomNmrRef_FindAllApplicationData_keyval0(Nmrr_ChemAtomNmrRef self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemAtomNmrRef self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrr_ChemAtomNmrRef_FindAllApplicationData_keyval1(Nmrr_ChemAtomNmrRef self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemAtomNmrRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrr_ChemAtomNmrRef_FindAllApplicationData_keyval2(Nmrr_ChemAtomNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemAtomNmrRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrr_ChemAtomNmrRef_FindAllApplicationData_keyval3(Nmrr_ChemAtomNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemAtomNmrRef self
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
extern ApiList Nmrr_ChemAtomNmrRef_FindAllApplicationData_keyval4(Nmrr_ChemAtomNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.NmrReference.ChemAtomNmrRef.chemAtomShiftCorrs

child link to 
class ChemAtomShiftCorr
  @param  Nmrr_ChemAtomNmrRef self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrr_ChemAtomNmrRef_FindAllChemAtomShiftCorrs(Nmrr_ChemAtomNmrRef self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.NmrReference.ChemAtomNmrRef.chemAtomShiftCorrs

child link to 
class ChemAtomShiftCorr
  @param  Nmrr_ChemAtomNmrRef self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrr_ChemAtomNmrRef_FindAllChemAtomShiftCorrs_keyval0(Nmrr_ChemAtomNmrRef self);

/**
  FindAll for 
ccp.nmr.NmrReference.ChemAtomNmrRef.chemAtomShiftCorrs

child link to 
class ChemAtomShiftCorr
  @param  Nmrr_ChemAtomNmrRef self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrr_ChemAtomNmrRef_FindAllChemAtomShiftCorrs_keyval1(Nmrr_ChemAtomNmrRef self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.NmrReference.ChemAtomNmrRef.chemAtomShiftCorrs

child link to 
class ChemAtomShiftCorr
  @param  Nmrr_ChemAtomNmrRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrr_ChemAtomNmrRef_FindAllChemAtomShiftCorrs_keyval2(Nmrr_ChemAtomNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.NmrReference.ChemAtomNmrRef.chemAtomShiftCorrs

child link to 
class ChemAtomShiftCorr
  @param  Nmrr_ChemAtomNmrRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrr_ChemAtomNmrRef_FindAllChemAtomShiftCorrs_keyval3(Nmrr_ChemAtomNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.NmrReference.ChemAtomNmrRef.chemAtomShiftCorrs

child link to 
class ChemAtomShiftCorr
  @param  Nmrr_ChemAtomNmrRef self
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
extern ApiSet Nmrr_ChemAtomNmrRef_FindAllChemAtomShiftCorrs_keyval4(Nmrr_ChemAtomNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.NmrReference.ChemAtomNmrRef.chemAtoms

ChemAtom to 
which reference information applies.
  @param  Nmrr_ChemAtomNmrRef self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrr_ChemAtomNmrRef_FindAllChemAtoms(Nmrr_ChemAtomNmrRef self, ApiMap conditions);

/**
  FindAll for ccp.nmr.NmrReference.ChemAtomNmrRef.chemAtoms

ChemAtom to 
which reference information applies.
  @param  Nmrr_ChemAtomNmrRef self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrr_ChemAtomNmrRef_FindAllChemAtoms_keyval0(Nmrr_ChemAtomNmrRef self);

/**
  FindAll for ccp.nmr.NmrReference.ChemAtomNmrRef.chemAtoms

ChemAtom to 
which reference information applies.
  @param  Nmrr_ChemAtomNmrRef self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrr_ChemAtomNmrRef_FindAllChemAtoms_keyval1(Nmrr_ChemAtomNmrRef self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.NmrReference.ChemAtomNmrRef.chemAtoms

ChemAtom to 
which reference information applies.
  @param  Nmrr_ChemAtomNmrRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrr_ChemAtomNmrRef_FindAllChemAtoms_keyval2(Nmrr_ChemAtomNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.NmrReference.ChemAtomNmrRef.chemAtoms

ChemAtom to 
which reference information applies.
  @param  Nmrr_ChemAtomNmrRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrr_ChemAtomNmrRef_FindAllChemAtoms_keyval3(Nmrr_ChemAtomNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.NmrReference.ChemAtomNmrRef.chemAtoms

ChemAtom to 
which reference information applies.
  @param  Nmrr_ChemAtomNmrRef self
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
extern ApiSet Nmrr_ChemAtomNmrRef_FindAllChemAtoms_keyval4(Nmrr_ChemAtomNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.NmrReference.ChemAtomNmrRef.chemCompVarNmrRefs

ChemCompNmrRefs 
that contain this ChemAtomNmrRef.
  @param  Nmrr_ChemAtomNmrRef self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrr_ChemAtomNmrRef_FindAllChemCompVarNmrRefs(Nmrr_ChemAtomNmrRef self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.NmrReference.ChemAtomNmrRef.chemCompVarNmrRefs

ChemCompNmrRefs 
that contain this ChemAtomNmrRef.
  @param  Nmrr_ChemAtomNmrRef self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrr_ChemAtomNmrRef_FindAllChemCompVarNmrRefs_keyval0(Nmrr_ChemAtomNmrRef self);

/**
  FindAll for 
ccp.nmr.NmrReference.ChemAtomNmrRef.chemCompVarNmrRefs

ChemCompNmrRefs 
that contain this ChemAtomNmrRef.
  @param  Nmrr_ChemAtomNmrRef self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrr_ChemAtomNmrRef_FindAllChemCompVarNmrRefs_keyval1(Nmrr_ChemAtomNmrRef self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.NmrReference.ChemAtomNmrRef.chemCompVarNmrRefs

ChemCompNmrRefs 
that contain this ChemAtomNmrRef.
  @param  Nmrr_ChemAtomNmrRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrr_ChemAtomNmrRef_FindAllChemCompVarNmrRefs_keyval2(Nmrr_ChemAtomNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.NmrReference.ChemAtomNmrRef.chemCompVarNmrRefs

ChemCompNmrRefs 
that contain this ChemAtomNmrRef.
  @param  Nmrr_ChemAtomNmrRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrr_ChemAtomNmrRef_FindAllChemCompVarNmrRefs_keyval3(Nmrr_ChemAtomNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.NmrReference.ChemAtomNmrRef.chemCompVarNmrRefs

ChemCompNmrRefs 
that contain this ChemAtomNmrRef.
  @param  Nmrr_ChemAtomNmrRef self
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
extern ApiSet Nmrr_ChemAtomNmrRef_FindAllChemCompVarNmrRefs_keyval4(Nmrr_ChemAtomNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemAtomNmrRef self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrr_ChemAtomNmrRef_FindFirstApplicationData(Nmrr_ChemAtomNmrRef self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemAtomNmrRef self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrr_ChemAtomNmrRef_FindFirstApplicationData_keyval0(Nmrr_ChemAtomNmrRef self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemAtomNmrRef self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrr_ChemAtomNmrRef_FindFirstApplicationData_keyval1(Nmrr_ChemAtomNmrRef self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemAtomNmrRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrr_ChemAtomNmrRef_FindFirstApplicationData_keyval2(Nmrr_ChemAtomNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemAtomNmrRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrr_ChemAtomNmrRef_FindFirstApplicationData_keyval3(Nmrr_ChemAtomNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemAtomNmrRef self
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
extern Impl_ApplicationData Nmrr_ChemAtomNmrRef_FindFirstApplicationData_keyval4(Nmrr_ChemAtomNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.NmrReference.ChemAtomNmrRef.chemAtoms

ChemAtom to 
which reference information applies.
  @param  Nmrr_ChemAtomNmrRef self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Chem_AbstractChemAtom Nmrr_ChemAtomNmrRef_FindFirstChemAtom(Nmrr_ChemAtomNmrRef self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrReference.ChemAtomNmrRef.chemAtomShiftCorrs

child link to 
class ChemAtomShiftCorr
  @param  Nmrr_ChemAtomNmrRef self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmrr_ChemAtomShiftCorr Nmrr_ChemAtomNmrRef_FindFirstChemAtomShiftCorr(Nmrr_ChemAtomNmrRef self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrReference.ChemAtomNmrRef.chemAtomShiftCorrs

child link to 
class ChemAtomShiftCorr
  @param  Nmrr_ChemAtomNmrRef self
  @returns  the first value that satisfies the conditions 
**/
extern Nmrr_ChemAtomShiftCorr Nmrr_ChemAtomNmrRef_FindFirstChemAtomShiftCorr_keyval0(Nmrr_ChemAtomNmrRef self);

/**
  FindFirst for 
ccp.nmr.NmrReference.ChemAtomNmrRef.chemAtomShiftCorrs

child link to 
class ChemAtomShiftCorr
  @param  Nmrr_ChemAtomNmrRef self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmrr_ChemAtomShiftCorr Nmrr_ChemAtomNmrRef_FindFirstChemAtomShiftCorr_keyval1(Nmrr_ChemAtomNmrRef self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.NmrReference.ChemAtomNmrRef.chemAtomShiftCorrs

child link to 
class ChemAtomShiftCorr
  @param  Nmrr_ChemAtomNmrRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmrr_ChemAtomShiftCorr Nmrr_ChemAtomNmrRef_FindFirstChemAtomShiftCorr_keyval2(Nmrr_ChemAtomNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.NmrReference.ChemAtomNmrRef.chemAtomShiftCorrs

child link to 
class ChemAtomShiftCorr
  @param  Nmrr_ChemAtomNmrRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmrr_ChemAtomShiftCorr Nmrr_ChemAtomNmrRef_FindFirstChemAtomShiftCorr_keyval3(Nmrr_ChemAtomNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.NmrReference.ChemAtomNmrRef.chemAtomShiftCorrs

child link to 
class ChemAtomShiftCorr
  @param  Nmrr_ChemAtomNmrRef self
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
extern Nmrr_ChemAtomShiftCorr Nmrr_ChemAtomNmrRef_FindFirstChemAtomShiftCorr_keyval4(Nmrr_ChemAtomNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.NmrReference.ChemAtomNmrRef.chemAtoms

ChemAtom to 
which reference information applies.
  @param  Nmrr_ChemAtomNmrRef self
  @returns  the first value that satisfies the conditions 
**/
extern Chem_AbstractChemAtom Nmrr_ChemAtomNmrRef_FindFirstChemAtom_keyval0(Nmrr_ChemAtomNmrRef self);

/**
  FindFirst for ccp.nmr.NmrReference.ChemAtomNmrRef.chemAtoms

ChemAtom to 
which reference information applies.
  @param  Nmrr_ChemAtomNmrRef self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Chem_AbstractChemAtom Nmrr_ChemAtomNmrRef_FindFirstChemAtom_keyval1(Nmrr_ChemAtomNmrRef self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.NmrReference.ChemAtomNmrRef.chemAtoms

ChemAtom to 
which reference information applies.
  @param  Nmrr_ChemAtomNmrRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Chem_AbstractChemAtom Nmrr_ChemAtomNmrRef_FindFirstChemAtom_keyval2(Nmrr_ChemAtomNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.NmrReference.ChemAtomNmrRef.chemAtoms

ChemAtom to 
which reference information applies.
  @param  Nmrr_ChemAtomNmrRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Chem_AbstractChemAtom Nmrr_ChemAtomNmrRef_FindFirstChemAtom_keyval3(Nmrr_ChemAtomNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.NmrReference.ChemAtomNmrRef.chemAtoms

ChemAtom to 
which reference information applies.
  @param  Nmrr_ChemAtomNmrRef self
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
extern Chem_AbstractChemAtom Nmrr_ChemAtomNmrRef_FindFirstChemAtom_keyval4(Nmrr_ChemAtomNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.NmrReference.ChemAtomNmrRef.chemCompVarNmrRefs

ChemCompNmrRefs 
that contain this ChemAtomNmrRef.
  @param  Nmrr_ChemAtomNmrRef self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmrr_ChemCompVarNmrRef Nmrr_ChemAtomNmrRef_FindFirstChemCompVarNmrRef(Nmrr_ChemAtomNmrRef self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrReference.ChemAtomNmrRef.chemCompVarNmrRefs

ChemCompNmrRefs 
that contain this ChemAtomNmrRef.
  @param  Nmrr_ChemAtomNmrRef self
  @returns  the first value that satisfies the conditions 
**/
extern Nmrr_ChemCompVarNmrRef Nmrr_ChemAtomNmrRef_FindFirstChemCompVarNmrRef_keyval0(Nmrr_ChemAtomNmrRef self);

/**
  FindFirst for 
ccp.nmr.NmrReference.ChemAtomNmrRef.chemCompVarNmrRefs

ChemCompNmrRefs 
that contain this ChemAtomNmrRef.
  @param  Nmrr_ChemAtomNmrRef self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmrr_ChemCompVarNmrRef Nmrr_ChemAtomNmrRef_FindFirstChemCompVarNmrRef_keyval1(Nmrr_ChemAtomNmrRef self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.NmrReference.ChemAtomNmrRef.chemCompVarNmrRefs

ChemCompNmrRefs 
that contain this ChemAtomNmrRef.
  @param  Nmrr_ChemAtomNmrRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmrr_ChemCompVarNmrRef Nmrr_ChemAtomNmrRef_FindFirstChemCompVarNmrRef_keyval2(Nmrr_ChemAtomNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.NmrReference.ChemAtomNmrRef.chemCompVarNmrRefs

ChemCompNmrRefs 
that contain this ChemAtomNmrRef.
  @param  Nmrr_ChemAtomNmrRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmrr_ChemCompVarNmrRef Nmrr_ChemAtomNmrRef_FindFirstChemCompVarNmrRef_keyval3(Nmrr_ChemAtomNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.NmrReference.ChemAtomNmrRef.chemCompVarNmrRefs

ChemCompNmrRefs 
that contain this ChemAtomNmrRef.
  @param  Nmrr_ChemAtomNmrRef self
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
extern Nmrr_ChemCompVarNmrRef Nmrr_ChemAtomNmrRef_FindFirstChemCompVarNmrRef_keyval4(Nmrr_ChemAtomNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.NmrReference.ChemAtomNmrRef
  @param  Nmrr_ChemAtomNmrRef self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Nmrr_ChemAtomNmrRef_Get(Nmrr_ChemAtomNmrRef self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrr_ChemAtomNmrRef self
  @returns   the result
**/
extern Acco_AccessObject Nmrr_ChemAtomNmrRef_GetAccess(Nmrr_ChemAtomNmrRef self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Nmrr_ChemAtomNmrRef self
  @returns   the result
**/
extern Acco_AccessObject Nmrr_ChemAtomNmrRef_GetActiveAccess(Nmrr_ChemAtomNmrRef self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemAtomNmrRef self
  @returns   the result
**/
extern ApiList Nmrr_ChemAtomNmrRef_GetApplicationData(Nmrr_ChemAtomNmrRef self);

/**
  GetByKey for ccp.nmr.NmrReference.ChemAtomNmrRef
  @param  Nmrr_ChemAtomNmrRef self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Nmrr_ChemAtomNmrRef Nmrr_ChemAtomNmrRef_GetByKey(Nmrr_ChemAtomNmrRef self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for ccp.nmr.NmrReference.ChemAtomNmrRef.chemAtomShiftCorrs

child 
link to class ChemAtomShiftCorr
  @param  Nmrr_ChemAtomNmrRef self
  @returns   the result
**/
extern ApiSet Nmrr_ChemAtomNmrRef_GetChemAtomShiftCorrs(Nmrr_ChemAtomNmrRef self);

/**
  getter for derived link chemAtoms
  @param  Nmrr_ChemAtomNmrRef self
  @returns   the result
**/
extern ApiSet Nmrr_ChemAtomNmrRef_GetChemAtoms(Nmrr_ChemAtomNmrRef self);

/**
  Get for ccp.nmr.NmrReference.ChemAtomNmrRef.chemCompNmrRef

parent link
  @param  Nmrr_ChemAtomNmrRef self
  @returns   the result
**/
extern Nmrr_ChemCompNmrRef Nmrr_ChemAtomNmrRef_GetChemCompNmrRef(Nmrr_ChemAtomNmrRef self);

/**
  Get for 
ccp.nmr.NmrReference.ChemAtomNmrRef.chemCompVarNmrRefs

ChemCompNmrRefs 
that contain this ChemAtomNmrRef.
  @param  Nmrr_ChemAtomNmrRef self
  @returns   the result
**/
extern ApiSet Nmrr_ChemAtomNmrRef_GetChemCompVarNmrRefs(Nmrr_ChemAtomNmrRef self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Nmrr_ChemAtomNmrRef self
  @returns   the result
**/
extern ApiString Nmrr_ChemAtomNmrRef_GetClassName(Nmrr_ChemAtomNmrRef self);

/**
  Get for ccp.nmr.NmrReference.ChemAtomNmrRef.distribution

histogram of 
frequency distribution. Normalised - must sum to 1.0. The shifts to 
which the individual points belong are defined so that point i collects 
the  shifts from 
refValue + valuePerPoint*( i-refPoint) to refValue + 
valuePerPoint*( i+1-refPoint).
  @param  Nmrr_ChemAtomNmrRef self
  @returns   the result
**/
extern ApiList Nmrr_ChemAtomNmrRef_GetDistribution(Nmrr_ChemAtomNmrRef self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Nmrr_ChemAtomNmrRef self
  @returns   the result
**/
extern ApiList Nmrr_ChemAtomNmrRef_GetFieldNames(Nmrr_ChemAtomNmrRef self);

/**
  GetFullKey for ccp.nmr.NmrReference.ChemAtomNmrRef
  @param  Nmrr_ChemAtomNmrRef self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Nmrr_ChemAtomNmrRef_GetFullKey(Nmrr_ChemAtomNmrRef self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Nmrr_ChemAtomNmrRef self
  @returns   the result
**/
extern ApiBoolean Nmrr_ChemAtomNmrRef_GetInConstructor(Nmrr_ChemAtomNmrRef self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Nmrr_ChemAtomNmrRef self
  @returns   the result
**/
extern ApiBoolean Nmrr_ChemAtomNmrRef_GetIsDeleted(Nmrr_ChemAtomNmrRef self);

/**
  GetLocalKey for ccp.nmr.NmrReference.ChemAtomNmrRef
  @param  Nmrr_ChemAtomNmrRef self
  @returns  Local object key
**/
extern ApiObject Nmrr_ChemAtomNmrRef_GetLocalKey(Nmrr_ChemAtomNmrRef self);

/**
  Get for ccp.nmr.NmrReference.ChemAtomNmrRef.meanValue

Average predicted 
chemical shift value (in ppm)
  @param  Nmrr_ChemAtomNmrRef self
  @returns   the result
**/
extern ApiFloat Nmrr_ChemAtomNmrRef_GetMeanValue(Nmrr_ChemAtomNmrRef self);

/**
  Get for ccp.nmr.NmrReference.ChemAtomNmrRef.name

Name of ChemAtom. Part 
of key for object.
  @param  Nmrr_ChemAtomNmrRef self
  @returns   the result
**/
extern ApiString Nmrr_ChemAtomNmrRef_GetName(Nmrr_ChemAtomNmrRef self);

/**
  getter for derived attribute numPoints
  @param  Nmrr_ChemAtomNmrRef self
  @returns   the result
**/
extern ApiInteger Nmrr_ChemAtomNmrRef_GetNumPoints(Nmrr_ChemAtomNmrRef self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Nmrr_ChemAtomNmrRef self
  @returns   the result
**/
extern ApiString Nmrr_ChemAtomNmrRef_GetPackageName(Nmrr_ChemAtomNmrRef self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Nmrr_ChemAtomNmrRef self
  @returns   the result
**/
extern ApiString Nmrr_ChemAtomNmrRef_GetPackageShortName(Nmrr_ChemAtomNmrRef self);

/**
  Get for ccp.nmr.NmrReference.ChemAtomNmrRef.parent

link to parent 
object - synonym for chemCompNmrRef
  @param  Nmrr_ChemAtomNmrRef self
  @returns   the result
**/
extern Nmrr_ChemCompNmrRef Nmrr_ChemAtomNmrRef_GetParent(Nmrr_ChemAtomNmrRef self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Nmrr_ChemAtomNmrRef self
  @returns   the result
**/
extern ApiString Nmrr_ChemAtomNmrRef_GetQualifiedName(Nmrr_ChemAtomNmrRef self);

/**
  Get for ccp.nmr.NmrReference.ChemAtomNmrRef.randomCoilValue

Chemical 
shift for random coil conformation. Need not be the same as the mean 
value over the known distribution.
  @param  Nmrr_ChemAtomNmrRef self
  @returns   the result
**/
extern ApiFloat Nmrr_ChemAtomNmrRef_GetRandomCoilValue(Nmrr_ChemAtomNmrRef self);

/**
  Get for ccp.nmr.NmrReference.ChemAtomNmrRef.refPoint

Reference point 
number (in floating point, first point is 0.0) for referencing chemical 
shift axis of distribution.
  @param  Nmrr_ChemAtomNmrRef self
  @returns   the result
**/
extern ApiFloat Nmrr_ChemAtomNmrRef_GetRefPoint(Nmrr_ChemAtomNmrRef self);

/**
  Get for ccp.nmr.NmrReference.ChemAtomNmrRef.refValue

Reference value 
(in ppm) for setting chemical shift axis of distribution.
  @param  Nmrr_ChemAtomNmrRef self
  @returns   the result
**/
extern ApiFloat Nmrr_ChemAtomNmrRef_GetRefValue(Nmrr_ChemAtomNmrRef self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Nmrr_ChemAtomNmrRef self
  @returns   the result
**/
extern Impl_MemopsRoot Nmrr_ChemAtomNmrRef_GetRoot(Nmrr_ChemAtomNmrRef self);

/**
  Get for ccp.nmr.NmrReference.ChemAtomNmrRef.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmrr_ChemAtomNmrRef self
  @returns   the result
**/
extern ApiInteger Nmrr_ChemAtomNmrRef_GetSerial(Nmrr_ChemAtomNmrRef self);

/**
  Get for ccp.nmr.NmrReference.ChemAtomNmrRef.stdDev

Standard deviation 
(in ppm) over the chemical shift distribution
  @param  Nmrr_ChemAtomNmrRef self
  @returns   the result
**/
extern ApiFloat Nmrr_ChemAtomNmrRef_GetStdDev(Nmrr_ChemAtomNmrRef self);

/**
  Get for ccp.nmr.NmrReference.ChemAtomNmrRef.subType

subType of ChemAtom 
referred to.
  @param  Nmrr_ChemAtomNmrRef self
  @returns   the result
**/
extern ApiInteger Nmrr_ChemAtomNmrRef_GetSubType(Nmrr_ChemAtomNmrRef self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Nmrr_ChemAtomNmrRef self
  @returns   the result
**/
extern Impl_TopObject Nmrr_ChemAtomNmrRef_GetTopObject(Nmrr_ChemAtomNmrRef self);

/**
  Get for ccp.nmr.NmrReference.ChemAtomNmrRef.valuePerPoint

The value per 
point on the histogram axis, equivalent to the width of a column.
  @param  Nmrr_ChemAtomNmrRef self
  @returns   the result
**/
extern ApiFloat Nmrr_ChemAtomNmrRef_GetValuePerPoint(Nmrr_ChemAtomNmrRef self);

/**
  Constructor for ccp.nmr.NmrReference.ChemAtomNmrRef
  @param  Nmrr_ChemCompNmrRef parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmrr_ChemAtomNmrRef Nmrr_ChemAtomNmrRef_Init(Nmrr_ChemCompNmrRef parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.NmrReference.ChemAtomNmrRef
  @param  Nmrr_ChemCompNmrRef parent
  @param  ApiSet chemCompVarNmrRefs
  @param  char * name
  @returns  the new object
**/
extern Nmrr_ChemAtomNmrRef Nmrr_ChemAtomNmrRef_Init_reqd(Nmrr_ChemCompNmrRef parent, ApiSet chemCompVarNmrRefs, char * name);

/**
  Factory function to create ccp.nmr.NmrReference.ChemAtomShiftCorr
  @param  Nmrr_ChemAtomNmrRef self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmrr_ChemAtomShiftCorr Nmrr_ChemAtomNmrRef_NewChemAtomShiftCorr(Nmrr_ChemAtomNmrRef self, ApiMap attrlinks);

/**
  Factory function to create ccp.nmr.NmrReference.ChemAtomShiftCorr
  @param  Nmrr_ChemAtomNmrRef self
  @param  char * ccpCode
  @param  char * molType
  @param  ApiInteger seqOffset
  @returns  the new object
**/
extern Nmrr_ChemAtomShiftCorr Nmrr_ChemAtomNmrRef_NewChemAtomShiftCorr_reqd(Nmrr_ChemAtomNmrRef self, char * ccpCode, char * molType, ApiInteger seqOffset);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemAtomNmrRef self
  @param  Impl_ApplicationData value
**/
extern void *Nmrr_ChemAtomNmrRef_RemoveApplicationData(Nmrr_ChemAtomNmrRef self, Impl_ApplicationData value);

/**
  Remove for 
ccp.nmr.NmrReference.ChemAtomNmrRef.chemCompVarNmrRefs

ChemCompNmrRefs 
that contain this ChemAtomNmrRef.
  @param  Nmrr_ChemAtomNmrRef self
  @param  Nmrr_ChemCompVarNmrRef value
**/
extern void *Nmrr_ChemAtomNmrRef_RemoveChemCompVarNmrRef(Nmrr_ChemAtomNmrRef self, Nmrr_ChemCompVarNmrRef value);

/**
  Modify command for distribution. Specifically entered here to make sure 
command is disabled
  @param  Nmrr_ChemAtomNmrRef self
  @param  ApiFloat value
**/
extern void *Nmrr_ChemAtomNmrRef_RemoveDistribution(Nmrr_ChemAtomNmrRef self, ApiFloat value);

/**
  SetAttr for ccp.nmr.NmrReference.ChemAtomNmrRef
  @param  Nmrr_ChemAtomNmrRef self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Nmrr_ChemAtomNmrRef_Set(Nmrr_ChemAtomNmrRef self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrr_ChemAtomNmrRef self
  @param  Acco_AccessObject value
**/
extern void *Nmrr_ChemAtomNmrRef_SetAccess(Nmrr_ChemAtomNmrRef self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemAtomNmrRef self
  @param  ApiList values
**/
extern void *Nmrr_ChemAtomNmrRef_SetApplicationData(Nmrr_ChemAtomNmrRef self, ApiList values);

/**
  Set for 
ccp.nmr.NmrReference.ChemAtomNmrRef.chemCompVarNmrRefs

ChemCompNmrRefs 
that contain this ChemAtomNmrRef.
  @param  Nmrr_ChemAtomNmrRef self
  @param  ApiSet values
**/
extern void *Nmrr_ChemAtomNmrRef_SetChemCompVarNmrRefs(Nmrr_ChemAtomNmrRef self, ApiSet values);

/**
  Set for ccp.nmr.NmrReference.ChemAtomNmrRef.distribution

histogram of 
frequency distribution. Normalised - must sum to 1.0. The shifts to 
which the individual points belong are defined so that point i collects 
the  shifts from 
refValue + valuePerPoint*( i-refPoint) to refValue + 
valuePerPoint*( i+1-refPoint).
  @param  Nmrr_ChemAtomNmrRef self
  @param  ApiList values
**/
extern void *Nmrr_ChemAtomNmrRef_SetDistribution(Nmrr_ChemAtomNmrRef self, ApiList values);

/**
  Set for ccp.nmr.NmrReference.ChemAtomNmrRef.meanValue

Average predicted 
chemical shift value (in ppm)
  @param  Nmrr_ChemAtomNmrRef self
  @param  ApiFloat value
**/
extern void *Nmrr_ChemAtomNmrRef_SetMeanValue(Nmrr_ChemAtomNmrRef self, ApiFloat value);

/**
  Set for ccp.nmr.NmrReference.ChemAtomNmrRef.name

Name of ChemAtom. Part 
of key for object.
  @param  Nmrr_ChemAtomNmrRef self
  @param  ApiString value
**/
extern void *Nmrr_ChemAtomNmrRef_SetName(Nmrr_ChemAtomNmrRef self, ApiString value);

/**
  Set for ccp.nmr.NmrReference.ChemAtomNmrRef.randomCoilValue

Chemical 
shift for random coil conformation. Need not be the same as the mean 
value over the known distribution.
  @param  Nmrr_ChemAtomNmrRef self
  @param  ApiFloat value
**/
extern void *Nmrr_ChemAtomNmrRef_SetRandomCoilValue(Nmrr_ChemAtomNmrRef self, ApiFloat value);

/**
  Set for ccp.nmr.NmrReference.ChemAtomNmrRef.refPoint

Reference point 
number (in floating point, first point is 0.0) for referencing chemical 
shift axis of distribution.
  @param  Nmrr_ChemAtomNmrRef self
  @param  ApiFloat value
**/
extern void *Nmrr_ChemAtomNmrRef_SetRefPoint(Nmrr_ChemAtomNmrRef self, ApiFloat value);

/**
  Set for ccp.nmr.NmrReference.ChemAtomNmrRef.refValue

Reference value 
(in ppm) for setting chemical shift axis of distribution.
  @param  Nmrr_ChemAtomNmrRef self
  @param  ApiFloat value
**/
extern void *Nmrr_ChemAtomNmrRef_SetRefValue(Nmrr_ChemAtomNmrRef self, ApiFloat value);

/**
  Set for ccp.nmr.NmrReference.ChemAtomNmrRef.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmrr_ChemAtomNmrRef self
  @param  ApiInteger value
**/
extern void *Nmrr_ChemAtomNmrRef_SetSerial(Nmrr_ChemAtomNmrRef self, ApiInteger value);

/**
  Set for ccp.nmr.NmrReference.ChemAtomNmrRef.stdDev

Standard deviation 
(in ppm) over the chemical shift distribution
  @param  Nmrr_ChemAtomNmrRef self
  @param  ApiFloat value
**/
extern void *Nmrr_ChemAtomNmrRef_SetStdDev(Nmrr_ChemAtomNmrRef self, ApiFloat value);

/**
  Set for ccp.nmr.NmrReference.ChemAtomNmrRef.subType

subType of ChemAtom 
referred to.
  @param  Nmrr_ChemAtomNmrRef self
  @param  ApiInteger value
**/
extern void *Nmrr_ChemAtomNmrRef_SetSubType(Nmrr_ChemAtomNmrRef self, ApiInteger value);

/**
  Set for ccp.nmr.NmrReference.ChemAtomNmrRef.valuePerPoint

The value per 
point on the histogram axis, equivalent to the width of a column.
  @param  Nmrr_ChemAtomNmrRef self
  @param  ApiFloat value
**/
extern void *Nmrr_ChemAtomNmrRef_SetValuePerPoint(Nmrr_ChemAtomNmrRef self, ApiFloat value);

/**
  Sorted for ccp.nmr.NmrReference.ChemAtomNmrRef.chemAtomShiftCorrs

child 
link to class ChemAtomShiftCorr
  @param  Nmrr_ChemAtomNmrRef self
  @returns   the result
**/
extern ApiList Nmrr_ChemAtomNmrRef_SortedChemAtomShiftCorrs(Nmrr_ChemAtomNmrRef self);

/**
  Sorted for ccp.nmr.NmrReference.ChemAtomNmrRef.chemAtoms

ChemAtom to 
which reference information applies.
  @param  Nmrr_ChemAtomNmrRef self
  @returns   the result
**/
extern ApiList Nmrr_ChemAtomNmrRef_SortedChemAtoms(Nmrr_ChemAtomNmrRef self);

/**
  Sorted for 
ccp.nmr.NmrReference.ChemAtomNmrRef.chemCompVarNmrRefs

ChemCompNmrRefs 
that contain this ChemAtomNmrRef.
  @param  Nmrr_ChemAtomNmrRef self
  @returns   the result
**/
extern ApiList Nmrr_ChemAtomNmrRef_SortedChemCompVarNmrRefs(Nmrr_ChemAtomNmrRef self);

#endif /* __incl__ccp_api_nmr_NmrReference_ChemAtomNmrRef_h__ */
