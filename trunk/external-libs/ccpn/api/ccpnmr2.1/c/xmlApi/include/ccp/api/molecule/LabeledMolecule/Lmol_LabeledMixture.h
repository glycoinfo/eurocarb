
#ifndef __incl__ccp_api_molecule_LabeledMolecule_LabeledMixture_h__
#define __incl__ccp_api_molecule_LabeledMolecule_LabeledMixture_h__

#include "ccp.h"

/*
  Mixture of labeled species.
*/

/* package ccp.api.molecule.LabeledMolecule */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_LabeledMixture self
  @param  Impl_ApplicationData value
**/
extern void *Lmol_LabeledMixture_AddApplicationData(Lmol_LabeledMixture self, Impl_ApplicationData value);

/**
  Add for 
ccp.molecule.LabeledMolecule.LabeledMixture.experiments

Nmr.Experiments 
labeled according to LabeledMixture
  @param  Lmol_LabeledMixture self
  @param  Nmr_Experiment value
**/
extern void *Lmol_LabeledMixture_AddExperiment(Lmol_LabeledMixture self, Nmr_Experiment value);

/**
  Add for 
ccp.molecule.LabeledMolecule.LabeledMixture.molComponents

MolComponents 
labeled according to LabeledMixture
  @param  Lmol_LabeledMixture self
  @param  Refs_MolComponent value
**/
extern void *Lmol_LabeledMixture_AddMolComponent(Lmol_LabeledMixture self, Refs_MolComponent value);

/**
  CheckAllValid for ccp.molecule.LabeledMolecule.LabeledMixture
  @param  Lmol_LabeledMixture self
  @param  ApiBoolean complete
**/
extern void *Lmol_LabeledMixture_CheckAllValid(Lmol_LabeledMixture self, ApiBoolean complete);

/**
  CheckValid for ccp.molecule.LabeledMolecule.LabeledMixture
  @param  Lmol_LabeledMixture self
  @param  ApiBoolean complete
**/
extern void *Lmol_LabeledMixture_CheckValid(Lmol_LabeledMixture self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_LabeledMixture self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Lmol_LabeledMixture_FindAllApplicationData(Lmol_LabeledMixture self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_LabeledMixture self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Lmol_LabeledMixture_FindAllApplicationData_keyval0(Lmol_LabeledMixture self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_LabeledMixture self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Lmol_LabeledMixture_FindAllApplicationData_keyval1(Lmol_LabeledMixture self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_LabeledMixture self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Lmol_LabeledMixture_FindAllApplicationData_keyval2(Lmol_LabeledMixture self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_LabeledMixture self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Lmol_LabeledMixture_FindAllApplicationData_keyval3(Lmol_LabeledMixture self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_LabeledMixture self
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
extern ApiList Lmol_LabeledMixture_FindAllApplicationData_keyval4(Lmol_LabeledMixture self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.molecule.LabeledMolecule.LabeledMixture.experiments

Nmr.Experiments 
labeled according to LabeledMixture
  @param  Lmol_LabeledMixture self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Lmol_LabeledMixture_FindAllExperiments(Lmol_LabeledMixture self, ApiMap conditions);

/**
  FindAll for 
ccp.molecule.LabeledMolecule.LabeledMixture.experiments

Nmr.Experiments 
labeled according to LabeledMixture
  @param  Lmol_LabeledMixture self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Lmol_LabeledMixture_FindAllExperiments_keyval0(Lmol_LabeledMixture self);

/**
  FindAll for 
ccp.molecule.LabeledMolecule.LabeledMixture.experiments

Nmr.Experiments 
labeled according to LabeledMixture
  @param  Lmol_LabeledMixture self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Lmol_LabeledMixture_FindAllExperiments_keyval1(Lmol_LabeledMixture self, char * key, ApiObject value);

/**
  FindAll for 
ccp.molecule.LabeledMolecule.LabeledMixture.experiments

Nmr.Experiments 
labeled according to LabeledMixture
  @param  Lmol_LabeledMixture self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Lmol_LabeledMixture_FindAllExperiments_keyval2(Lmol_LabeledMixture self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.molecule.LabeledMolecule.LabeledMixture.experiments

Nmr.Experiments 
labeled according to LabeledMixture
  @param  Lmol_LabeledMixture self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Lmol_LabeledMixture_FindAllExperiments_keyval3(Lmol_LabeledMixture self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.molecule.LabeledMolecule.LabeledMixture.experiments

Nmr.Experiments 
labeled according to LabeledMixture
  @param  Lmol_LabeledMixture self
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
extern ApiSet Lmol_LabeledMixture_FindAllExperiments_keyval4(Lmol_LabeledMixture self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.molecule.LabeledMolecule.LabeledMixture.molComponents

MolComponents 
labeled according to LabeledMixture
  @param  Lmol_LabeledMixture self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Lmol_LabeledMixture_FindAllMolComponents(Lmol_LabeledMixture self, ApiMap conditions);

/**
  FindAll for 
ccp.molecule.LabeledMolecule.LabeledMixture.molComponents

MolComponents 
labeled according to LabeledMixture
  @param  Lmol_LabeledMixture self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Lmol_LabeledMixture_FindAllMolComponents_keyval0(Lmol_LabeledMixture self);

/**
  FindAll for 
ccp.molecule.LabeledMolecule.LabeledMixture.molComponents

MolComponents 
labeled according to LabeledMixture
  @param  Lmol_LabeledMixture self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Lmol_LabeledMixture_FindAllMolComponents_keyval1(Lmol_LabeledMixture self, char * key, ApiObject value);

/**
  FindAll for 
ccp.molecule.LabeledMolecule.LabeledMixture.molComponents

MolComponents 
labeled according to LabeledMixture
  @param  Lmol_LabeledMixture self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Lmol_LabeledMixture_FindAllMolComponents_keyval2(Lmol_LabeledMixture self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.molecule.LabeledMolecule.LabeledMixture.molComponents

MolComponents 
labeled according to LabeledMixture
  @param  Lmol_LabeledMixture self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Lmol_LabeledMixture_FindAllMolComponents_keyval3(Lmol_LabeledMixture self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.molecule.LabeledMolecule.LabeledMixture.molComponents

MolComponents 
labeled according to LabeledMixture
  @param  Lmol_LabeledMixture self
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
extern ApiSet Lmol_LabeledMixture_FindAllMolComponents_keyval4(Lmol_LabeledMixture self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.molecule.LabeledMolecule.LabeledMixture.molLabelFractions

child 
link to class MolLabelFraction
  @param  Lmol_LabeledMixture self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Lmol_LabeledMixture_FindAllMolLabelFractions(Lmol_LabeledMixture self, ApiMap conditions);

/**
  FindAll for 
ccp.molecule.LabeledMolecule.LabeledMixture.molLabelFractions

child 
link to class MolLabelFraction
  @param  Lmol_LabeledMixture self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Lmol_LabeledMixture_FindAllMolLabelFractions_keyval0(Lmol_LabeledMixture self);

/**
  FindAll for 
ccp.molecule.LabeledMolecule.LabeledMixture.molLabelFractions

child 
link to class MolLabelFraction
  @param  Lmol_LabeledMixture self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Lmol_LabeledMixture_FindAllMolLabelFractions_keyval1(Lmol_LabeledMixture self, char * key, ApiObject value);

/**
  FindAll for 
ccp.molecule.LabeledMolecule.LabeledMixture.molLabelFractions

child 
link to class MolLabelFraction
  @param  Lmol_LabeledMixture self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Lmol_LabeledMixture_FindAllMolLabelFractions_keyval2(Lmol_LabeledMixture self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.molecule.LabeledMolecule.LabeledMixture.molLabelFractions

child 
link to class MolLabelFraction
  @param  Lmol_LabeledMixture self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Lmol_LabeledMixture_FindAllMolLabelFractions_keyval3(Lmol_LabeledMixture self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.molecule.LabeledMolecule.LabeledMixture.molLabelFractions

child 
link to class MolLabelFraction
  @param  Lmol_LabeledMixture self
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
extern ApiSet Lmol_LabeledMixture_FindAllMolLabelFractions_keyval4(Lmol_LabeledMixture self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_LabeledMixture self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Lmol_LabeledMixture_FindFirstApplicationData(Lmol_LabeledMixture self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_LabeledMixture self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Lmol_LabeledMixture_FindFirstApplicationData_keyval0(Lmol_LabeledMixture self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_LabeledMixture self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Lmol_LabeledMixture_FindFirstApplicationData_keyval1(Lmol_LabeledMixture self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_LabeledMixture self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Lmol_LabeledMixture_FindFirstApplicationData_keyval2(Lmol_LabeledMixture self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_LabeledMixture self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Lmol_LabeledMixture_FindFirstApplicationData_keyval3(Lmol_LabeledMixture self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_LabeledMixture self
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
extern Impl_ApplicationData Lmol_LabeledMixture_FindFirstApplicationData_keyval4(Lmol_LabeledMixture self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.molecule.LabeledMolecule.LabeledMixture.experiments

Nmr.Experiments 
labeled according to LabeledMixture
  @param  Lmol_LabeledMixture self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Lmol_LabeledMixture_FindFirstExperiment(Lmol_LabeledMixture self, ApiMap conditions);

/**
  FindFirst for 
ccp.molecule.LabeledMolecule.LabeledMixture.experiments

Nmr.Experiments 
labeled according to LabeledMixture
  @param  Lmol_LabeledMixture self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Lmol_LabeledMixture_FindFirstExperiment_keyval0(Lmol_LabeledMixture self);

/**
  FindFirst for 
ccp.molecule.LabeledMolecule.LabeledMixture.experiments

Nmr.Experiments 
labeled according to LabeledMixture
  @param  Lmol_LabeledMixture self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Lmol_LabeledMixture_FindFirstExperiment_keyval1(Lmol_LabeledMixture self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.molecule.LabeledMolecule.LabeledMixture.experiments

Nmr.Experiments 
labeled according to LabeledMixture
  @param  Lmol_LabeledMixture self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Lmol_LabeledMixture_FindFirstExperiment_keyval2(Lmol_LabeledMixture self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.molecule.LabeledMolecule.LabeledMixture.experiments

Nmr.Experiments 
labeled according to LabeledMixture
  @param  Lmol_LabeledMixture self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Lmol_LabeledMixture_FindFirstExperiment_keyval3(Lmol_LabeledMixture self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.molecule.LabeledMolecule.LabeledMixture.experiments

Nmr.Experiments 
labeled according to LabeledMixture
  @param  Lmol_LabeledMixture self
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
extern Nmr_Experiment Lmol_LabeledMixture_FindFirstExperiment_keyval4(Lmol_LabeledMixture self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.molecule.LabeledMolecule.LabeledMixture.molComponents

MolComponents 
labeled according to LabeledMixture
  @param  Lmol_LabeledMixture self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Refs_MolComponent Lmol_LabeledMixture_FindFirstMolComponent(Lmol_LabeledMixture self, ApiMap conditions);

/**
  FindFirst for 
ccp.molecule.LabeledMolecule.LabeledMixture.molComponents

MolComponents 
labeled according to LabeledMixture
  @param  Lmol_LabeledMixture self
  @returns  the first value that satisfies the conditions 
**/
extern Refs_MolComponent Lmol_LabeledMixture_FindFirstMolComponent_keyval0(Lmol_LabeledMixture self);

/**
  FindFirst for 
ccp.molecule.LabeledMolecule.LabeledMixture.molComponents

MolComponents 
labeled according to LabeledMixture
  @param  Lmol_LabeledMixture self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Refs_MolComponent Lmol_LabeledMixture_FindFirstMolComponent_keyval1(Lmol_LabeledMixture self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.molecule.LabeledMolecule.LabeledMixture.molComponents

MolComponents 
labeled according to LabeledMixture
  @param  Lmol_LabeledMixture self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Refs_MolComponent Lmol_LabeledMixture_FindFirstMolComponent_keyval2(Lmol_LabeledMixture self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.molecule.LabeledMolecule.LabeledMixture.molComponents

MolComponents 
labeled according to LabeledMixture
  @param  Lmol_LabeledMixture self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Refs_MolComponent Lmol_LabeledMixture_FindFirstMolComponent_keyval3(Lmol_LabeledMixture self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.molecule.LabeledMolecule.LabeledMixture.molComponents

MolComponents 
labeled according to LabeledMixture
  @param  Lmol_LabeledMixture self
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
extern Refs_MolComponent Lmol_LabeledMixture_FindFirstMolComponent_keyval4(Lmol_LabeledMixture self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.molecule.LabeledMolecule.LabeledMixture.molLabelFractions

child 
link to class MolLabelFraction
  @param  Lmol_LabeledMixture self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Lmol_MolLabelFraction Lmol_LabeledMixture_FindFirstMolLabelFraction(Lmol_LabeledMixture self, ApiMap conditions);

/**
  FindFirst for 
ccp.molecule.LabeledMolecule.LabeledMixture.molLabelFractions

child 
link to class MolLabelFraction
  @param  Lmol_LabeledMixture self
  @returns  the first value that satisfies the conditions 
**/
extern Lmol_MolLabelFraction Lmol_LabeledMixture_FindFirstMolLabelFraction_keyval0(Lmol_LabeledMixture self);

/**
  FindFirst for 
ccp.molecule.LabeledMolecule.LabeledMixture.molLabelFractions

child 
link to class MolLabelFraction
  @param  Lmol_LabeledMixture self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Lmol_MolLabelFraction Lmol_LabeledMixture_FindFirstMolLabelFraction_keyval1(Lmol_LabeledMixture self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.molecule.LabeledMolecule.LabeledMixture.molLabelFractions

child 
link to class MolLabelFraction
  @param  Lmol_LabeledMixture self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Lmol_MolLabelFraction Lmol_LabeledMixture_FindFirstMolLabelFraction_keyval2(Lmol_LabeledMixture self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.molecule.LabeledMolecule.LabeledMixture.molLabelFractions

child 
link to class MolLabelFraction
  @param  Lmol_LabeledMixture self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Lmol_MolLabelFraction Lmol_LabeledMixture_FindFirstMolLabelFraction_keyval3(Lmol_LabeledMixture self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.molecule.LabeledMolecule.LabeledMixture.molLabelFractions

child 
link to class MolLabelFraction
  @param  Lmol_LabeledMixture self
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
extern Lmol_MolLabelFraction Lmol_LabeledMixture_FindFirstMolLabelFraction_keyval4(Lmol_LabeledMixture self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.molecule.LabeledMolecule.LabeledMixture
  @param  Lmol_LabeledMixture self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Lmol_LabeledMixture_Get(Lmol_LabeledMixture self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Lmol_LabeledMixture self
  @returns   the result
**/
extern Acco_AccessObject Lmol_LabeledMixture_GetAccess(Lmol_LabeledMixture self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Lmol_LabeledMixture self
  @returns   the result
**/
extern Acco_AccessObject Lmol_LabeledMixture_GetActiveAccess(Lmol_LabeledMixture self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_LabeledMixture self
  @returns   the result
**/
extern ApiList Lmol_LabeledMixture_GetApplicationData(Lmol_LabeledMixture self);

/**
  Get for 
ccp.molecule.LabeledMolecule.LabeledMixture.averageComposition

Average 
composition of LabeledMixture. The average composition can also be 
derived from the MolLabelFractions, but the averageComposition takes 
precedence in case of conflict.
  @param  Lmol_LabeledMixture self
  @returns   the result
**/
extern Lmol_MolLabel Lmol_LabeledMixture_GetAverageComposition(Lmol_LabeledMixture self);

/**
  GetByKey for ccp.molecule.LabeledMolecule.LabeledMixture
  @param  Lmol_LabeledMixture self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Lmol_LabeledMixture Lmol_LabeledMixture_GetByKey(Lmol_LabeledMixture self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Lmol_LabeledMixture self
  @returns   the result
**/
extern ApiString Lmol_LabeledMixture_GetClassName(Lmol_LabeledMixture self);

/**
  Get for 
ccp.molecule.LabeledMolecule.LabeledMixture.experiments

Nmr.Experiments 
labeled according to LabeledMixture
  @param  Lmol_LabeledMixture self
  @returns   the result
**/
extern ApiSet Lmol_LabeledMixture_GetExperiments(Lmol_LabeledMixture self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Lmol_LabeledMixture self
  @returns   the result
**/
extern ApiList Lmol_LabeledMixture_GetFieldNames(Lmol_LabeledMixture self);

/**
  GetFullKey for ccp.molecule.LabeledMolecule.LabeledMixture
  @param  Lmol_LabeledMixture self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Lmol_LabeledMixture_GetFullKey(Lmol_LabeledMixture self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Lmol_LabeledMixture self
  @returns   the result
**/
extern ApiBoolean Lmol_LabeledMixture_GetInConstructor(Lmol_LabeledMixture self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Lmol_LabeledMixture self
  @returns   the result
**/
extern ApiBoolean Lmol_LabeledMixture_GetIsDeleted(Lmol_LabeledMixture self);

/**
  Get for 
ccp.molecule.LabeledMolecule.LabeledMixture.labeledMolecule

parent link
  @param  Lmol_LabeledMixture self
  @returns   the result
**/
extern Lmol_LabeledMolecule Lmol_LabeledMixture_GetLabeledMolecule(Lmol_LabeledMixture self);

/**
  GetLocalKey for ccp.molecule.LabeledMolecule.LabeledMixture
  @param  Lmol_LabeledMixture self
  @returns  Local object key
**/
extern ApiObject Lmol_LabeledMixture_GetLocalKey(Lmol_LabeledMixture self);

/**
  Get for 
ccp.molecule.LabeledMolecule.LabeledMixture.molComponents

MolComponents 
labeled according to LabeledMixture
  @param  Lmol_LabeledMixture self
  @returns   the result
**/
extern ApiSet Lmol_LabeledMixture_GetMolComponents(Lmol_LabeledMixture self);

/**
  Get for 
ccp.molecule.LabeledMolecule.LabeledMixture.molLabelFractions

child 
link to class MolLabelFraction
  @param  Lmol_LabeledMixture self
  @returns   the result
**/
extern ApiSet Lmol_LabeledMixture_GetMolLabelFractions(Lmol_LabeledMixture self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Lmol_LabeledMixture self
  @returns   the result
**/
extern ApiString Lmol_LabeledMixture_GetPackageName(Lmol_LabeledMixture self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Lmol_LabeledMixture self
  @returns   the result
**/
extern ApiString Lmol_LabeledMixture_GetPackageShortName(Lmol_LabeledMixture self);

/**
  Get for ccp.molecule.LabeledMolecule.LabeledMixture.parent

link to 
parent object - synonym for labeledMolecule
  @param  Lmol_LabeledMixture self
  @returns   the result
**/
extern Lmol_LabeledMolecule Lmol_LabeledMixture_GetParent(Lmol_LabeledMixture self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Lmol_LabeledMixture self
  @returns   the result
**/
extern ApiString Lmol_LabeledMixture_GetQualifiedName(Lmol_LabeledMixture self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Lmol_LabeledMixture self
  @returns   the result
**/
extern Impl_MemopsRoot Lmol_LabeledMixture_GetRoot(Lmol_LabeledMixture self);

/**
  Get for ccp.molecule.LabeledMolecule.LabeledMixture.serial

Serial 
number of object. Serves as object main key. Serial numbers of deleted 
objects are not re-used. Serial numbers can only be set by the 
implementation. Values are in practice always positive, since negative 
values are interpreted as a signal to set the next free serial
  @param  Lmol_LabeledMixture self
  @returns   the result
**/
extern ApiInteger Lmol_LabeledMixture_GetSerial(Lmol_LabeledMixture self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Lmol_LabeledMixture self
  @returns   the result
**/
extern Impl_TopObject Lmol_LabeledMixture_GetTopObject(Lmol_LabeledMixture self);

/**
  Constructor for ccp.molecule.LabeledMolecule.LabeledMixture
  @param  Lmol_LabeledMolecule parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Lmol_LabeledMixture Lmol_LabeledMixture_Init(Lmol_LabeledMolecule parent, ApiMap attrlinks);

/**
  Constructor for ccp.molecule.LabeledMolecule.LabeledMixture
  @param  Lmol_LabeledMolecule parent
  @returns  the new object
**/
extern Lmol_LabeledMixture Lmol_LabeledMixture_Init_reqd(Lmol_LabeledMolecule parent);

/**
  Factory function to create ccp.molecule.LabeledMolecule.MolLabelFraction
  @param  Lmol_LabeledMixture self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Lmol_MolLabelFraction Lmol_LabeledMixture_NewMolLabelFraction(Lmol_LabeledMixture self, ApiMap attrlinks);

/**
  Factory function to create ccp.molecule.LabeledMolecule.MolLabelFraction
  @param  Lmol_LabeledMixture self
  @param  Lmol_MolLabel molLabel
  @returns  the new object
**/
extern Lmol_MolLabelFraction Lmol_LabeledMixture_NewMolLabelFraction_reqd(Lmol_LabeledMixture self, Lmol_MolLabel molLabel);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_LabeledMixture self
  @param  Impl_ApplicationData value
**/
extern void *Lmol_LabeledMixture_RemoveApplicationData(Lmol_LabeledMixture self, Impl_ApplicationData value);

/**
  Remove for 
ccp.molecule.LabeledMolecule.LabeledMixture.experiments

Nmr.Experiments 
labeled according to LabeledMixture
  @param  Lmol_LabeledMixture self
  @param  Nmr_Experiment value
**/
extern void *Lmol_LabeledMixture_RemoveExperiment(Lmol_LabeledMixture self, Nmr_Experiment value);

/**
  Remove for 
ccp.molecule.LabeledMolecule.LabeledMixture.molComponents

MolComponents 
labeled according to LabeledMixture
  @param  Lmol_LabeledMixture self
  @param  Refs_MolComponent value
**/
extern void *Lmol_LabeledMixture_RemoveMolComponent(Lmol_LabeledMixture self, Refs_MolComponent value);

/**
  SetAttr for ccp.molecule.LabeledMolecule.LabeledMixture
  @param  Lmol_LabeledMixture self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Lmol_LabeledMixture_Set(Lmol_LabeledMixture self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Lmol_LabeledMixture self
  @param  Acco_AccessObject value
**/
extern void *Lmol_LabeledMixture_SetAccess(Lmol_LabeledMixture self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_LabeledMixture self
  @param  ApiList values
**/
extern void *Lmol_LabeledMixture_SetApplicationData(Lmol_LabeledMixture self, ApiList values);

/**
  Set for 
ccp.molecule.LabeledMolecule.LabeledMixture.averageComposition

Average 
composition of LabeledMixture. The average composition can also be 
derived from the MolLabelFractions, but the averageComposition takes 
precedence in case of conflict.
  @param  Lmol_LabeledMixture self
  @param  Lmol_MolLabel value
**/
extern void *Lmol_LabeledMixture_SetAverageComposition(Lmol_LabeledMixture self, Lmol_MolLabel value);

/**
  Set for 
ccp.molecule.LabeledMolecule.LabeledMixture.experiments

Nmr.Experiments 
labeled according to LabeledMixture
  @param  Lmol_LabeledMixture self
  @param  ApiSet values
**/
extern void *Lmol_LabeledMixture_SetExperiments(Lmol_LabeledMixture self, ApiSet values);

/**
  Set for 
ccp.molecule.LabeledMolecule.LabeledMixture.molComponents

MolComponents 
labeled according to LabeledMixture
  @param  Lmol_LabeledMixture self
  @param  ApiSet values
**/
extern void *Lmol_LabeledMixture_SetMolComponents(Lmol_LabeledMixture self, ApiSet values);

/**
  Set for ccp.molecule.LabeledMolecule.LabeledMixture.serial

Serial 
number of object. Serves as object main key. Serial numbers of deleted 
objects are not re-used. Serial numbers can only be set by the 
implementation. Values are in practice always positive, since negative 
values are interpreted as a signal to set the next free serial
  @param  Lmol_LabeledMixture self
  @param  ApiInteger value
**/
extern void *Lmol_LabeledMixture_SetSerial(Lmol_LabeledMixture self, ApiInteger value);

/**
  Sorted for 
ccp.molecule.LabeledMolecule.LabeledMixture.experiments

Nmr.Experiments 
labeled according to LabeledMixture
  @param  Lmol_LabeledMixture self
  @returns   the result
**/
extern ApiList Lmol_LabeledMixture_SortedExperiments(Lmol_LabeledMixture self);

/**
  Sorted for 
ccp.molecule.LabeledMolecule.LabeledMixture.molComponents

MolComponents 
labeled according to LabeledMixture
  @param  Lmol_LabeledMixture self
  @returns   the result
**/
extern ApiList Lmol_LabeledMixture_SortedMolComponents(Lmol_LabeledMixture self);

/**
  Sorted for 
ccp.molecule.LabeledMolecule.LabeledMixture.molLabelFractions

child 
link to class MolLabelFraction
  @param  Lmol_LabeledMixture self
  @returns   the result
**/
extern ApiList Lmol_LabeledMixture_SortedMolLabelFractions(Lmol_LabeledMixture self);

#endif /* __incl__ccp_api_molecule_LabeledMolecule_LabeledMixture_h__ */
