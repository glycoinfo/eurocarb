
#ifndef __incl__ccp_api_lims_RefSampleComponent_Primer_h__
#define __incl__ccp_api_lims_RefSampleComponent_Primer_h__

#include "ccp.h"

/*
  This is a subtype of MolComponent. A specific oligonucleotide or primer such as a PCR-primer used to amplify nucleic acid fragments.
*/

/* package ccp.api.lims.RefSampleComponent */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_Primer self
  @param  Impl_ApplicationData value
**/
extern void *Refs_Primer_AddApplicationData(Refs_Primer self, Impl_ApplicationData value);

/**
  Add for ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_Primer self
  @param  Expb_BlueprintComponent value
**/
extern void *Refs_Primer_AddBlueprintComponent(Refs_Primer self, Expb_BlueprintComponent value);

/**
  Add for ccp.lims.RefSampleComponent.AbstractComponent.categories

List 
of category associated to a component.
  @param  Refs_Primer self
  @param  Clas_SampleComponentCategory value
**/
extern void *Refs_Primer_AddCategory(Refs_Primer self, Clas_SampleComponentCategory value);

/**
  Add for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The Target 
associated other MolComponent that define it
  @param  Refs_Primer self
  @param  Targ_Target value
**/
extern void *Refs_Primer_AddNucTarget(Refs_Primer self, Targ_Target value);

/**
  Add for ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_Primer self
  @param  Refs_MolCompFeature value
**/
extern void *Refs_Primer_AddRefMolCompFeature(Refs_Primer self, Refs_MolCompFeature value);

/**
  Add for ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_Primer self
  @param  Expb_BlueprintComponent value
**/
extern void *Refs_Primer_AddRelatedExpBlueprint(Refs_Primer self, Expb_BlueprintComponent value);

/**
  Add for ccp.lims.RefSampleComponent.AbstractComponent.synonyms

The 
synonyms of the component.
  @param  Refs_Primer self
  @param  ApiString value
**/
extern void *Refs_Primer_AddSynonym(Refs_Primer self, ApiString value);

/**
  CheckAllValid for ccp.lims.RefSampleComponent.Primer
  @param  Refs_Primer self
  @param  ApiBoolean complete
**/
extern void *Refs_Primer_CheckAllValid(Refs_Primer self, ApiBoolean complete);

/**
  CheckValid for ccp.lims.RefSampleComponent.Primer
  @param  Refs_Primer self
  @param  ApiBoolean complete
**/
extern void *Refs_Primer_CheckValid(Refs_Primer self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_Primer self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Refs_Primer_FindAllApplicationData(Refs_Primer self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_Primer self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Refs_Primer_FindAllApplicationData_keyval0(Refs_Primer self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_Primer self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Refs_Primer_FindAllApplicationData_keyval1(Refs_Primer self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_Primer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Refs_Primer_FindAllApplicationData_keyval2(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_Primer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Refs_Primer_FindAllApplicationData_keyval3(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_Primer self
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
extern ApiList Refs_Primer_FindAllApplicationData_keyval4(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_Primer self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Primer_FindAllBlueprintComponents(Refs_Primer self, ApiMap conditions);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_Primer self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Primer_FindAllBlueprintComponents_keyval0(Refs_Primer self);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_Primer self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Primer_FindAllBlueprintComponents_keyval1(Refs_Primer self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_Primer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Primer_FindAllBlueprintComponents_keyval2(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_Primer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Primer_FindAllBlueprintComponents_keyval3(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_Primer self
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
extern ApiSet Refs_Primer_FindAllBlueprintComponents_keyval4(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_Primer self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Primer_FindAllCategories(Refs_Primer self, ApiMap conditions);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_Primer self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Primer_FindAllCategories_keyval0(Refs_Primer self);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_Primer self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Primer_FindAllCategories_keyval1(Refs_Primer self, char * key, ApiObject value);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_Primer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Primer_FindAllCategories_keyval2(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_Primer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Primer_FindAllCategories_keyval3(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_Primer self
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
extern ApiSet Refs_Primer_FindAllCategories_keyval4(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_Primer self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Primer_FindAllComponentDbRefs(Refs_Primer self, ApiMap conditions);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_Primer self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Primer_FindAllComponentDbRefs_keyval0(Refs_Primer self);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_Primer self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Primer_FindAllComponentDbRefs_keyval1(Refs_Primer self, char * key, ApiObject value);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_Primer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Primer_FindAllComponentDbRefs_keyval2(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_Primer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Primer_FindAllComponentDbRefs_keyval3(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_Primer self
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
extern ApiSet Refs_Primer_FindAllComponentDbRefs_keyval4(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_Primer self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Primer_FindAllCompositeElements(Refs_Primer self, ApiMap conditions);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_Primer self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Primer_FindAllCompositeElements_keyval0(Refs_Primer self);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_Primer self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Primer_FindAllCompositeElements_keyval1(Refs_Primer self, char * key, ApiObject value);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_Primer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Primer_FindAllCompositeElements_keyval2(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_Primer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Primer_FindAllCompositeElements_keyval3(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_Primer self
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
extern ApiSet Refs_Primer_FindAllCompositeElements_keyval4(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.RefSampleComponent.AbstractComponent.labels

child 
link to class Label
  @param  Refs_Primer self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Primer_FindAllLabels(Refs_Primer self, ApiMap conditions);

/**
  FindAll for ccp.lims.RefSampleComponent.AbstractComponent.labels

child 
link to class Label
  @param  Refs_Primer self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Primer_FindAllLabels_keyval0(Refs_Primer self);

/**
  FindAll for ccp.lims.RefSampleComponent.AbstractComponent.labels

child 
link to class Label
  @param  Refs_Primer self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Primer_FindAllLabels_keyval1(Refs_Primer self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.RefSampleComponent.AbstractComponent.labels

child 
link to class Label
  @param  Refs_Primer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Primer_FindAllLabels_keyval2(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.RefSampleComponent.AbstractComponent.labels

child 
link to class Label
  @param  Refs_Primer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Primer_FindAllLabels_keyval3(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.RefSampleComponent.AbstractComponent.labels

child 
link to class Label
  @param  Refs_Primer self
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
extern ApiSet Refs_Primer_FindAllLabels_keyval4(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.molCompFeatures

child link to 
class MolCompFeature
  @param  Refs_Primer self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Primer_FindAllMolCompFeatures(Refs_Primer self, ApiMap conditions);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.molCompFeatures

child link to 
class MolCompFeature
  @param  Refs_Primer self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Primer_FindAllMolCompFeatures_keyval0(Refs_Primer self);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.molCompFeatures

child link to 
class MolCompFeature
  @param  Refs_Primer self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Primer_FindAllMolCompFeatures_keyval1(Refs_Primer self, char * key, ApiObject value);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.molCompFeatures

child link to 
class MolCompFeature
  @param  Refs_Primer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Primer_FindAllMolCompFeatures_keyval2(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.molCompFeatures

child link to 
class MolCompFeature
  @param  Refs_Primer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Primer_FindAllMolCompFeatures_keyval3(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.molCompFeatures

child link to 
class MolCompFeature
  @param  Refs_Primer self
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
extern ApiSet Refs_Primer_FindAllMolCompFeatures_keyval4(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The 
Target associated other MolComponent that define it
  @param  Refs_Primer self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Primer_FindAllNucTargets(Refs_Primer self, ApiMap conditions);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The 
Target associated other MolComponent that define it
  @param  Refs_Primer self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Primer_FindAllNucTargets_keyval0(Refs_Primer self);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The 
Target associated other MolComponent that define it
  @param  Refs_Primer self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Primer_FindAllNucTargets_keyval1(Refs_Primer self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The 
Target associated other MolComponent that define it
  @param  Refs_Primer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Primer_FindAllNucTargets_keyval2(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The 
Target associated other MolComponent that define it
  @param  Refs_Primer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Primer_FindAllNucTargets_keyval3(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The 
Target associated other MolComponent that define it
  @param  Refs_Primer self
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
extern ApiSet Refs_Primer_FindAllNucTargets_keyval4(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.protTargets

The 
Target associated to the MolComponent that defines it
  @param  Refs_Primer self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Primer_FindAllProtTargets(Refs_Primer self, ApiMap conditions);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.protTargets

The 
Target associated to the MolComponent that defines it
  @param  Refs_Primer self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Primer_FindAllProtTargets_keyval0(Refs_Primer self);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.protTargets

The 
Target associated to the MolComponent that defines it
  @param  Refs_Primer self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Primer_FindAllProtTargets_keyval1(Refs_Primer self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.protTargets

The 
Target associated to the MolComponent that defines it
  @param  Refs_Primer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Primer_FindAllProtTargets_keyval2(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.protTargets

The 
Target associated to the MolComponent that defines it
  @param  Refs_Primer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Primer_FindAllProtTargets_keyval3(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.protTargets

The 
Target associated to the MolComponent that defines it
  @param  Refs_Primer self
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
extern ApiSet Refs_Primer_FindAllProtTargets_keyval4(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_Primer self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Primer_FindAllRefMolCompFeatures(Refs_Primer self, ApiMap conditions);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_Primer self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Primer_FindAllRefMolCompFeatures_keyval0(Refs_Primer self);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_Primer self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Primer_FindAllRefMolCompFeatures_keyval1(Refs_Primer self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_Primer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Primer_FindAllRefMolCompFeatures_keyval2(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_Primer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Primer_FindAllRefMolCompFeatures_keyval3(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_Primer self
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
extern ApiSet Refs_Primer_FindAllRefMolCompFeatures_keyval4(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_Primer self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Primer_FindAllRelatedExpBlueprints(Refs_Primer self, ApiMap conditions);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_Primer self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Primer_FindAllRelatedExpBlueprints_keyval0(Refs_Primer self);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_Primer self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Primer_FindAllRelatedExpBlueprints_keyval1(Refs_Primer self, char * key, ApiObject value);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_Primer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Primer_FindAllRelatedExpBlueprints_keyval2(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_Primer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Primer_FindAllRelatedExpBlueprints_keyval3(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_Primer self
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
extern ApiSet Refs_Primer_FindAllRelatedExpBlueprints_keyval4(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.specificLabelGroups

child link 
to class SpecificLabelGroup
  @param  Refs_Primer self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Primer_FindAllSpecificLabelGroups(Refs_Primer self, ApiMap conditions);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.specificLabelGroups

child link 
to class SpecificLabelGroup
  @param  Refs_Primer self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Primer_FindAllSpecificLabelGroups_keyval0(Refs_Primer self);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.specificLabelGroups

child link 
to class SpecificLabelGroup
  @param  Refs_Primer self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Primer_FindAllSpecificLabelGroups_keyval1(Refs_Primer self, char * key, ApiObject value);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.specificLabelGroups

child link 
to class SpecificLabelGroup
  @param  Refs_Primer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Primer_FindAllSpecificLabelGroups_keyval2(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.specificLabelGroups

child link 
to class SpecificLabelGroup
  @param  Refs_Primer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Primer_FindAllSpecificLabelGroups_keyval3(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.specificLabelGroups

child link 
to class SpecificLabelGroup
  @param  Refs_Primer self
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
extern ApiSet Refs_Primer_FindAllSpecificLabelGroups_keyval4(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_Primer self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Refs_Primer_FindFirstApplicationData(Refs_Primer self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_Primer self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Refs_Primer_FindFirstApplicationData_keyval0(Refs_Primer self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_Primer self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Refs_Primer_FindFirstApplicationData_keyval1(Refs_Primer self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_Primer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Refs_Primer_FindFirstApplicationData_keyval2(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_Primer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Refs_Primer_FindFirstApplicationData_keyval3(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_Primer self
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
extern Impl_ApplicationData Refs_Primer_FindFirstApplicationData_keyval4(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_Primer self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Expb_BlueprintComponent Refs_Primer_FindFirstBlueprintComponent(Refs_Primer self, ApiMap conditions);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_Primer self
  @returns  the first value that satisfies the conditions 
**/
extern Expb_BlueprintComponent Refs_Primer_FindFirstBlueprintComponent_keyval0(Refs_Primer self);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_Primer self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Expb_BlueprintComponent Refs_Primer_FindFirstBlueprintComponent_keyval1(Refs_Primer self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_Primer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Expb_BlueprintComponent Refs_Primer_FindFirstBlueprintComponent_keyval2(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_Primer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Expb_BlueprintComponent Refs_Primer_FindFirstBlueprintComponent_keyval3(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_Primer self
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
extern Expb_BlueprintComponent Refs_Primer_FindFirstBlueprintComponent_keyval4(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_Primer self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Clas_SampleComponentCategory Refs_Primer_FindFirstCategory(Refs_Primer self, ApiMap conditions);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_Primer self
  @returns  the first value that satisfies the conditions 
**/
extern Clas_SampleComponentCategory Refs_Primer_FindFirstCategory_keyval0(Refs_Primer self);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_Primer self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Clas_SampleComponentCategory Refs_Primer_FindFirstCategory_keyval1(Refs_Primer self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_Primer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Clas_SampleComponentCategory Refs_Primer_FindFirstCategory_keyval2(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_Primer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Clas_SampleComponentCategory Refs_Primer_FindFirstCategory_keyval3(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_Primer self
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
extern Clas_SampleComponentCategory Refs_Primer_FindFirstCategory_keyval4(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_Primer self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Refs_ComponentDbRef Refs_Primer_FindFirstComponentDbRef(Refs_Primer self, ApiMap conditions);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_Primer self
  @returns  the first value that satisfies the conditions 
**/
extern Refs_ComponentDbRef Refs_Primer_FindFirstComponentDbRef_keyval0(Refs_Primer self);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_Primer self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Refs_ComponentDbRef Refs_Primer_FindFirstComponentDbRef_keyval1(Refs_Primer self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_Primer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Refs_ComponentDbRef Refs_Primer_FindFirstComponentDbRef_keyval2(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_Primer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Refs_ComponentDbRef Refs_Primer_FindFirstComponentDbRef_keyval3(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_Primer self
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
extern Refs_ComponentDbRef Refs_Primer_FindFirstComponentDbRef_keyval4(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_Primer self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Refs_CompositeElement Refs_Primer_FindFirstCompositeElement(Refs_Primer self, ApiMap conditions);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_Primer self
  @returns  the first value that satisfies the conditions 
**/
extern Refs_CompositeElement Refs_Primer_FindFirstCompositeElement_keyval0(Refs_Primer self);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_Primer self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Refs_CompositeElement Refs_Primer_FindFirstCompositeElement_keyval1(Refs_Primer self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_Primer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Refs_CompositeElement Refs_Primer_FindFirstCompositeElement_keyval2(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_Primer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Refs_CompositeElement Refs_Primer_FindFirstCompositeElement_keyval3(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_Primer self
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
extern Refs_CompositeElement Refs_Primer_FindFirstCompositeElement_keyval4(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.labels

child link to 
class Label
  @param  Refs_Primer self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Refs_Label Refs_Primer_FindFirstLabel(Refs_Primer self, ApiMap conditions);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.labels

child link to 
class Label
  @param  Refs_Primer self
  @returns  the first value that satisfies the conditions 
**/
extern Refs_Label Refs_Primer_FindFirstLabel_keyval0(Refs_Primer self);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.labels

child link to 
class Label
  @param  Refs_Primer self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Refs_Label Refs_Primer_FindFirstLabel_keyval1(Refs_Primer self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.labels

child link to 
class Label
  @param  Refs_Primer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Refs_Label Refs_Primer_FindFirstLabel_keyval2(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.labels

child link to 
class Label
  @param  Refs_Primer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Refs_Label Refs_Primer_FindFirstLabel_keyval3(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.labels

child link to 
class Label
  @param  Refs_Primer self
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
extern Refs_Label Refs_Primer_FindFirstLabel_keyval4(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.molCompFeatures

child link to 
class MolCompFeature
  @param  Refs_Primer self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Refs_MolCompFeature Refs_Primer_FindFirstMolCompFeature(Refs_Primer self, ApiMap conditions);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.molCompFeatures

child link to 
class MolCompFeature
  @param  Refs_Primer self
  @returns  the first value that satisfies the conditions 
**/
extern Refs_MolCompFeature Refs_Primer_FindFirstMolCompFeature_keyval0(Refs_Primer self);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.molCompFeatures

child link to 
class MolCompFeature
  @param  Refs_Primer self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Refs_MolCompFeature Refs_Primer_FindFirstMolCompFeature_keyval1(Refs_Primer self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.molCompFeatures

child link to 
class MolCompFeature
  @param  Refs_Primer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Refs_MolCompFeature Refs_Primer_FindFirstMolCompFeature_keyval2(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.molCompFeatures

child link to 
class MolCompFeature
  @param  Refs_Primer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Refs_MolCompFeature Refs_Primer_FindFirstMolCompFeature_keyval3(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.molCompFeatures

child link to 
class MolCompFeature
  @param  Refs_Primer self
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
extern Refs_MolCompFeature Refs_Primer_FindFirstMolCompFeature_keyval4(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The 
Target associated other MolComponent that define it
  @param  Refs_Primer self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Refs_Primer_FindFirstNucTarget(Refs_Primer self, ApiMap conditions);

/**
  FindFirst for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The 
Target associated other MolComponent that define it
  @param  Refs_Primer self
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Refs_Primer_FindFirstNucTarget_keyval0(Refs_Primer self);

/**
  FindFirst for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The 
Target associated other MolComponent that define it
  @param  Refs_Primer self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Refs_Primer_FindFirstNucTarget_keyval1(Refs_Primer self, char * key, ApiObject value);

/**
  FindFirst for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The 
Target associated other MolComponent that define it
  @param  Refs_Primer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Refs_Primer_FindFirstNucTarget_keyval2(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The 
Target associated other MolComponent that define it
  @param  Refs_Primer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Refs_Primer_FindFirstNucTarget_keyval3(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The 
Target associated other MolComponent that define it
  @param  Refs_Primer self
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
extern Targ_Target Refs_Primer_FindFirstNucTarget_keyval4(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.lims.RefSampleComponent.MolComponent.protTargets

The 
Target associated to the MolComponent that defines it
  @param  Refs_Primer self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Refs_Primer_FindFirstProtTarget(Refs_Primer self, ApiMap conditions);

/**
  FindFirst for ccp.lims.RefSampleComponent.MolComponent.protTargets

The 
Target associated to the MolComponent that defines it
  @param  Refs_Primer self
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Refs_Primer_FindFirstProtTarget_keyval0(Refs_Primer self);

/**
  FindFirst for ccp.lims.RefSampleComponent.MolComponent.protTargets

The 
Target associated to the MolComponent that defines it
  @param  Refs_Primer self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Refs_Primer_FindFirstProtTarget_keyval1(Refs_Primer self, char * key, ApiObject value);

/**
  FindFirst for ccp.lims.RefSampleComponent.MolComponent.protTargets

The 
Target associated to the MolComponent that defines it
  @param  Refs_Primer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Refs_Primer_FindFirstProtTarget_keyval2(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.lims.RefSampleComponent.MolComponent.protTargets

The 
Target associated to the MolComponent that defines it
  @param  Refs_Primer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Refs_Primer_FindFirstProtTarget_keyval3(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.lims.RefSampleComponent.MolComponent.protTargets

The 
Target associated to the MolComponent that defines it
  @param  Refs_Primer self
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
extern Targ_Target Refs_Primer_FindFirstProtTarget_keyval4(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_Primer self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Refs_MolCompFeature Refs_Primer_FindFirstRefMolCompFeature(Refs_Primer self, ApiMap conditions);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_Primer self
  @returns  the first value that satisfies the conditions 
**/
extern Refs_MolCompFeature Refs_Primer_FindFirstRefMolCompFeature_keyval0(Refs_Primer self);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_Primer self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Refs_MolCompFeature Refs_Primer_FindFirstRefMolCompFeature_keyval1(Refs_Primer self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_Primer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Refs_MolCompFeature Refs_Primer_FindFirstRefMolCompFeature_keyval2(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_Primer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Refs_MolCompFeature Refs_Primer_FindFirstRefMolCompFeature_keyval3(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_Primer self
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
extern Refs_MolCompFeature Refs_Primer_FindFirstRefMolCompFeature_keyval4(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_Primer self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Expb_BlueprintComponent Refs_Primer_FindFirstRelatedExpBlueprint(Refs_Primer self, ApiMap conditions);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_Primer self
  @returns  the first value that satisfies the conditions 
**/
extern Expb_BlueprintComponent Refs_Primer_FindFirstRelatedExpBlueprint_keyval0(Refs_Primer self);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_Primer self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Expb_BlueprintComponent Refs_Primer_FindFirstRelatedExpBlueprint_keyval1(Refs_Primer self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_Primer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Expb_BlueprintComponent Refs_Primer_FindFirstRelatedExpBlueprint_keyval2(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_Primer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Expb_BlueprintComponent Refs_Primer_FindFirstRelatedExpBlueprint_keyval3(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_Primer self
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
extern Expb_BlueprintComponent Refs_Primer_FindFirstRelatedExpBlueprint_keyval4(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.specificLabelGroups

child link 
to class SpecificLabelGroup
  @param  Refs_Primer self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Refs_SpecificLabelGroup Refs_Primer_FindFirstSpecificLabelGroup(Refs_Primer self, ApiMap conditions);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.specificLabelGroups

child link 
to class SpecificLabelGroup
  @param  Refs_Primer self
  @returns  the first value that satisfies the conditions 
**/
extern Refs_SpecificLabelGroup Refs_Primer_FindFirstSpecificLabelGroup_keyval0(Refs_Primer self);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.specificLabelGroups

child link 
to class SpecificLabelGroup
  @param  Refs_Primer self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Refs_SpecificLabelGroup Refs_Primer_FindFirstSpecificLabelGroup_keyval1(Refs_Primer self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.specificLabelGroups

child link 
to class SpecificLabelGroup
  @param  Refs_Primer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Refs_SpecificLabelGroup Refs_Primer_FindFirstSpecificLabelGroup_keyval2(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.specificLabelGroups

child link 
to class SpecificLabelGroup
  @param  Refs_Primer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Refs_SpecificLabelGroup Refs_Primer_FindFirstSpecificLabelGroup_keyval3(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.specificLabelGroups

child link 
to class SpecificLabelGroup
  @param  Refs_Primer self
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
extern Refs_SpecificLabelGroup Refs_Primer_FindFirstSpecificLabelGroup_keyval4(Refs_Primer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.lims.RefSampleComponent.Primer
  @param  Refs_Primer self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Refs_Primer_Get(Refs_Primer self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Refs_Primer self
  @returns   the result
**/
extern Acco_AccessObject Refs_Primer_GetAccess(Refs_Primer self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_Primer self
  @returns   the result
**/
extern ApiList Refs_Primer_GetApplicationData(Refs_Primer self);

/**
  Get for ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_Primer self
  @returns   the result
**/
extern ApiSet Refs_Primer_GetBlueprintComponents(Refs_Primer self);

/**
  GetByKey for ccp.lims.RefSampleComponent.Primer
  @param  Refs_Primer self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Refs_Primer Refs_Primer_GetByKey(Refs_Primer self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for ccp.lims.RefSampleComponent.MolComponent.casNum

CAS registry 
number (http://www.cas.org/EO/regsys.html).
  @param  Refs_Primer self
  @returns   the result
**/
extern ApiString Refs_Primer_GetCasNum(Refs_Primer self);

/**
  Get for ccp.lims.RefSampleComponent.AbstractComponent.categories

List 
of category associated to a component.
  @param  Refs_Primer self
  @returns   the result
**/
extern ApiSet Refs_Primer_GetCategories(Refs_Primer self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Refs_Primer self
  @returns   the result
**/
extern ApiString Refs_Primer_GetClassName(Refs_Primer self);

/**
  Get for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_Primer self
  @returns   the result
**/
extern ApiSet Refs_Primer_GetComponentDbRefs(Refs_Primer self);

/**
  Get for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_Primer self
  @returns   the result
**/
extern ApiSet Refs_Primer_GetCompositeElements(Refs_Primer self);

/**
  Get for ccp.lims.RefSampleComponent.AbstractComponent.details

Detail 
field for comments.
  @param  Refs_Primer self
  @returns   the result
**/
extern ApiString Refs_Primer_GetDetails(Refs_Primer self);

/**
  Get for ccp.lims.RefSampleComponent.Primer.direction

Which direction? 
5' or 3'.
  @param  Refs_Primer self
  @returns   the result
**/
extern ApiString Refs_Primer_GetDirection(Refs_Primer self);

/**
  Get for ccp.lims.RefSampleComponent.MolComponent.empiricalFormula

The 
molecular formula of the molComponent.
  @param  Refs_Primer self
  @returns   the result
**/
extern ApiString Refs_Primer_GetEmpiricalFormula(Refs_Primer self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Refs_Primer self
  @returns   the result
**/
extern ApiList Refs_Primer_GetFieldNames(Refs_Primer self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Refs_Primer self
  @returns   the result
**/
extern ApiBoolean Refs_Primer_GetInConstructor(Refs_Primer self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Refs_Primer self
  @returns   the result
**/
extern ApiBoolean Refs_Primer_GetIsDeleted(Refs_Primer self);

/**
  Get for ccp.lims.RefSampleComponent.Primer.isUniversal

Is universal for 
all polymer molecules?
  @param  Refs_Primer self
  @returns   the result
**/
extern ApiBoolean Refs_Primer_GetIsUniversal(Refs_Primer self);

/**
  Get for 
ccp.lims.RefSampleComponent.MolComponent.labeledMixture

LabeledMixture 
that describes MolComponent isotope labeling
  @param  Refs_Primer self
  @returns   the result
**/
extern Lmol_LabeledMixture Refs_Primer_GetLabeledMixture(Refs_Primer self);

/**
  Get for ccp.lims.RefSampleComponent.AbstractComponent.labels

child link 
to class Label
  @param  Refs_Primer self
  @returns   the result
**/
extern ApiSet Refs_Primer_GetLabels(Refs_Primer self);

/**
  Get for ccp.lims.RefSampleComponent.Primer.meltingTemperature

The 
melting temperature at which this primer is used.
  @param  Refs_Primer self
  @returns   the result
**/
extern ApiFloat Refs_Primer_GetMeltingTemperature(Refs_Primer self);

/**
  Get for ccp.lims.RefSampleComponent.MolComponent.molCompFeatures

child 
link to class MolCompFeature
  @param  Refs_Primer self
  @returns   the result
**/
extern ApiSet Refs_Primer_GetMolCompFeatures(Refs_Primer self);

/**
  Get for ccp.lims.RefSampleComponent.MolComponent.molType

Type of 
component, on the general lines of biopolymer/polymer/nonpolymer. See 
MolComponentType DataType for details
  @param  Refs_Primer self
  @returns   the result
**/
extern ApiString Refs_Primer_GetMolType(Refs_Primer self);

/**
  Get for ccp.lims.RefSampleComponent.MolComponent.molecularMass

The 
experimental molecular mass in dalton (Da).
  @param  Refs_Primer self
  @returns   the result
**/
extern ApiFloat Refs_Primer_GetMolecularMass(Refs_Primer self);

/**
  Get for ccp.lims.RefSampleComponent.MolComponent.molecule

The molecule 
used to describe the precise topology of the MolComponent.
  @param  Refs_Primer self
  @returns   the result
**/
extern Mole_Molecule Refs_Primer_GetMolecule(Refs_Primer self);

/**
  Get for ccp.lims.RefSampleComponent.AbstractComponent.name

The name of 
the component. Unique identifier.
  @param  Refs_Primer self
  @returns   the result
**/
extern ApiString Refs_Primer_GetName(Refs_Primer self);

/**
  Get for ccp.lims.RefSampleComponent.AbstractComponent.naturalSource

The 
natural source of the component.
  @param  Refs_Primer self
  @returns   the result
**/
extern Taxo_NaturalSource Refs_Primer_GetNaturalSource(Refs_Primer self);

/**
  Get for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The Target 
associated other MolComponent that define it
  @param  Refs_Primer self
  @returns   the result
**/
extern ApiSet Refs_Primer_GetNucTargets(Refs_Primer self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Refs_Primer self
  @returns   the result
**/
extern ApiString Refs_Primer_GetPackageName(Refs_Primer self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Refs_Primer self
  @returns   the result
**/
extern ApiString Refs_Primer_GetPackageShortName(Refs_Primer self);

/**
  Get for ccp.lims.RefSampleComponent.AbstractComponent.parent

link to 
parent object - synonym for refSampleComponentStore
  @param  Refs_Primer self
  @returns   the result
**/
extern Refs_RefSampleComponentStore Refs_Primer_GetParent(Refs_Primer self);

/**
  Get for ccp.lims.RefSampleComponent.MolComponent.protTargets

The Target 
associated to the MolComponent that defines it
  @param  Refs_Primer self
  @returns   the result
**/
extern ApiSet Refs_Primer_GetProtTargets(Refs_Primer self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Refs_Primer self
  @returns   the result
**/
extern ApiString Refs_Primer_GetQualifiedName(Refs_Primer self);

/**
  Get for ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_Primer self
  @returns   the result
**/
extern ApiSet Refs_Primer_GetRefMolCompFeatures(Refs_Primer self);

/**
  Get for 
ccp.lims.RefSampleComponent.AbstractComponent.refSampleComponentStore

parent 
link
  @param  Refs_Primer self
  @returns   the result
**/
extern Refs_RefSampleComponentStore Refs_Primer_GetRefSampleComponentStore(Refs_Primer self);

/**
  Get for ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_Primer self
  @returns   the result
**/
extern ApiSet Refs_Primer_GetRelatedExpBlueprints(Refs_Primer self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Refs_Primer self
  @returns   the result
**/
extern Impl_MemopsRoot Refs_Primer_GetRoot(Refs_Primer self);

/**
  Get for ccp.lims.RefSampleComponent.MolComponent.seqDetails
  @param  Refs_Primer self
  @returns   the result
**/
extern ApiString Refs_Primer_GetSeqDetails(Refs_Primer self);

/**
  Get for ccp.lims.RefSampleComponent.MolComponent.seqString
  @param  Refs_Primer self
  @returns   the result
**/
extern ApiString Refs_Primer_GetSeqString(Refs_Primer self);

/**
  Get for 
ccp.lims.RefSampleComponent.MolComponent.specificLabelGroups

child link 
to class SpecificLabelGroup
  @param  Refs_Primer self
  @returns   the result
**/
extern ApiSet Refs_Primer_GetSpecificLabelGroups(Refs_Primer self);

/**
  Get for ccp.lims.RefSampleComponent.AbstractComponent.synonyms

The 
synonyms of the component.
  @param  Refs_Primer self
  @returns   the result
**/
extern ApiList Refs_Primer_GetSynonyms(Refs_Primer self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Refs_Primer self
  @returns   the result
**/
extern Impl_TopObject Refs_Primer_GetTopObject(Refs_Primer self);

/**
  Constructor for ccp.lims.RefSampleComponent.Primer
  @param  Refs_RefSampleComponentStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Refs_Primer Refs_Primer_Init(Refs_RefSampleComponentStore parent, ApiMap attrlinks);

/**
  Constructor for ccp.lims.RefSampleComponent.Primer
  @param  Refs_RefSampleComponentStore parent
  @param  char * direction
  @param  int isUniversal
  @param  char * name
  @returns  the new object
**/
extern Refs_Primer Refs_Primer_Init_reqd(Refs_RefSampleComponentStore parent, char * direction, int isUniversal, char * name);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_Primer self
  @param  Impl_ApplicationData value
**/
extern void *Refs_Primer_RemoveApplicationData(Refs_Primer self, Impl_ApplicationData value);

/**
  Remove for ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_Primer self
  @param  Expb_BlueprintComponent value
**/
extern void *Refs_Primer_RemoveBlueprintComponent(Refs_Primer self, Expb_BlueprintComponent value);

/**
  Remove for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_Primer self
  @param  Clas_SampleComponentCategory value
**/
extern void *Refs_Primer_RemoveCategory(Refs_Primer self, Clas_SampleComponentCategory value);

/**
  Remove for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The 
Target associated other MolComponent that define it
  @param  Refs_Primer self
  @param  Targ_Target value
**/
extern void *Refs_Primer_RemoveNucTarget(Refs_Primer self, Targ_Target value);

/**
  Remove for ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_Primer self
  @param  Refs_MolCompFeature value
**/
extern void *Refs_Primer_RemoveRefMolCompFeature(Refs_Primer self, Refs_MolCompFeature value);

/**
  Remove for ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_Primer self
  @param  Expb_BlueprintComponent value
**/
extern void *Refs_Primer_RemoveRelatedExpBlueprint(Refs_Primer self, Expb_BlueprintComponent value);

/**
  Remove for ccp.lims.RefSampleComponent.AbstractComponent.synonyms

The 
synonyms of the component.
  @param  Refs_Primer self
  @param  ApiString value
**/
extern void *Refs_Primer_RemoveSynonym(Refs_Primer self, ApiString value);

/**
  SetAttr for ccp.lims.RefSampleComponent.Primer
  @param  Refs_Primer self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Refs_Primer_Set(Refs_Primer self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Refs_Primer self
  @param  Acco_AccessObject value
**/
extern void *Refs_Primer_SetAccess(Refs_Primer self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_Primer self
  @param  ApiList values
**/
extern void *Refs_Primer_SetApplicationData(Refs_Primer self, ApiList values);

/**
  Set for ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_Primer self
  @param  ApiSet values
**/
extern void *Refs_Primer_SetBlueprintComponents(Refs_Primer self, ApiSet values);

/**
  Set for ccp.lims.RefSampleComponent.MolComponent.casNum

CAS registry 
number (http://www.cas.org/EO/regsys.html).
  @param  Refs_Primer self
  @param  ApiString value
**/
extern void *Refs_Primer_SetCasNum(Refs_Primer self, ApiString value);

/**
  Set for ccp.lims.RefSampleComponent.AbstractComponent.categories

List 
of category associated to a component.
  @param  Refs_Primer self
  @param  ApiSet values
**/
extern void *Refs_Primer_SetCategories(Refs_Primer self, ApiSet values);

/**
  Set for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_Primer self
  @param  ApiSet values
**/
extern void *Refs_Primer_SetCompositeElements(Refs_Primer self, ApiSet values);

/**
  Set for ccp.lims.RefSampleComponent.AbstractComponent.details

Detail 
field for comments.
  @param  Refs_Primer self
  @param  ApiString value
**/
extern void *Refs_Primer_SetDetails(Refs_Primer self, ApiString value);

/**
  Set for ccp.lims.RefSampleComponent.Primer.direction

Which direction? 
5' or 3'.
  @param  Refs_Primer self
  @param  ApiString value
**/
extern void *Refs_Primer_SetDirection(Refs_Primer self, ApiString value);

/**
  Set for ccp.lims.RefSampleComponent.MolComponent.empiricalFormula

The 
molecular formula of the molComponent.
  @param  Refs_Primer self
  @param  ApiString value
**/
extern void *Refs_Primer_SetEmpiricalFormula(Refs_Primer self, ApiString value);

/**
  Set for ccp.lims.RefSampleComponent.Primer.isUniversal

Is universal for 
all polymer molecules?
  @param  Refs_Primer self
  @param  ApiBoolean value
**/
extern void *Refs_Primer_SetIsUniversal(Refs_Primer self, ApiBoolean value);

/**
  Set for 
ccp.lims.RefSampleComponent.MolComponent.labeledMixture

LabeledMixture 
that describes MolComponent isotope labeling
  @param  Refs_Primer self
  @param  Lmol_LabeledMixture value
**/
extern void *Refs_Primer_SetLabeledMixture(Refs_Primer self, Lmol_LabeledMixture value);

/**
  Set for ccp.lims.RefSampleComponent.Primer.meltingTemperature

The 
melting temperature at which this primer is used.
  @param  Refs_Primer self
  @param  ApiFloat value
**/
extern void *Refs_Primer_SetMeltingTemperature(Refs_Primer self, ApiFloat value);

/**
  Set for ccp.lims.RefSampleComponent.MolComponent.molType

Type of 
component, on the general lines of biopolymer/polymer/nonpolymer. See 
MolComponentType DataType for details
  @param  Refs_Primer self
  @param  ApiString value
**/
extern void *Refs_Primer_SetMolType(Refs_Primer self, ApiString value);

/**
  Set for ccp.lims.RefSampleComponent.MolComponent.molecularMass

The 
experimental molecular mass in dalton (Da).
  @param  Refs_Primer self
  @param  ApiFloat value
**/
extern void *Refs_Primer_SetMolecularMass(Refs_Primer self, ApiFloat value);

/**
  Set for ccp.lims.RefSampleComponent.MolComponent.molecule

The molecule 
used to describe the precise topology of the MolComponent.
  @param  Refs_Primer self
  @param  Mole_Molecule value
**/
extern void *Refs_Primer_SetMolecule(Refs_Primer self, Mole_Molecule value);

/**
  Set for ccp.lims.RefSampleComponent.AbstractComponent.name

The name of 
the component. Unique identifier.
  @param  Refs_Primer self
  @param  ApiString value
**/
extern void *Refs_Primer_SetName(Refs_Primer self, ApiString value);

/**
  Set for ccp.lims.RefSampleComponent.AbstractComponent.naturalSource

The 
natural source of the component.
  @param  Refs_Primer self
  @param  Taxo_NaturalSource value
**/
extern void *Refs_Primer_SetNaturalSource(Refs_Primer self, Taxo_NaturalSource value);

/**
  Set for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The Target 
associated other MolComponent that define it
  @param  Refs_Primer self
  @param  ApiSet values
**/
extern void *Refs_Primer_SetNucTargets(Refs_Primer self, ApiSet values);

/**
  Set for ccp.lims.RefSampleComponent.MolComponent.protTargets

The Target 
associated to the MolComponent that defines it
  @param  Refs_Primer self
  @param  ApiSet values
**/
extern void *Refs_Primer_SetProtTargets(Refs_Primer self, ApiSet values);

/**
  Set for ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_Primer self
  @param  ApiSet values
**/
extern void *Refs_Primer_SetRefMolCompFeatures(Refs_Primer self, ApiSet values);

/**
  Set for ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_Primer self
  @param  ApiSet values
**/
extern void *Refs_Primer_SetRelatedExpBlueprints(Refs_Primer self, ApiSet values);

/**
  Set for ccp.lims.RefSampleComponent.MolComponent.seqDetails
  @param  Refs_Primer self
  @param  ApiString value
**/
extern void *Refs_Primer_SetSeqDetails(Refs_Primer self, ApiString value);

/**
  Set for ccp.lims.RefSampleComponent.MolComponent.seqString
  @param  Refs_Primer self
  @param  ApiString value
**/
extern void *Refs_Primer_SetSeqString(Refs_Primer self, ApiString value);

/**
  Set for ccp.lims.RefSampleComponent.AbstractComponent.synonyms

The 
synonyms of the component.
  @param  Refs_Primer self
  @param  ApiList values
**/
extern void *Refs_Primer_SetSynonyms(Refs_Primer self, ApiList values);

/**
  Sorted for ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_Primer self
  @returns   the result
**/
extern ApiList Refs_Primer_SortedBlueprintComponents(Refs_Primer self);

/**
  Sorted for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_Primer self
  @returns   the result
**/
extern ApiList Refs_Primer_SortedCategories(Refs_Primer self);

/**
  Sorted for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_Primer self
  @returns   the result
**/
extern ApiList Refs_Primer_SortedComponentDbRefs(Refs_Primer self);

/**
  Sorted for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_Primer self
  @returns   the result
**/
extern ApiList Refs_Primer_SortedCompositeElements(Refs_Primer self);

/**
  Sorted for ccp.lims.RefSampleComponent.AbstractComponent.labels

child 
link to class Label
  @param  Refs_Primer self
  @returns   the result
**/
extern ApiList Refs_Primer_SortedLabels(Refs_Primer self);

/**
  Sorted for 
ccp.lims.RefSampleComponent.MolComponent.molCompFeatures

child link to 
class MolCompFeature
  @param  Refs_Primer self
  @returns   the result
**/
extern ApiList Refs_Primer_SortedMolCompFeatures(Refs_Primer self);

/**
  Sorted for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The 
Target associated other MolComponent that define it
  @param  Refs_Primer self
  @returns   the result
**/
extern ApiList Refs_Primer_SortedNucTargets(Refs_Primer self);

/**
  Sorted for ccp.lims.RefSampleComponent.MolComponent.protTargets

The 
Target associated to the MolComponent that defines it
  @param  Refs_Primer self
  @returns   the result
**/
extern ApiList Refs_Primer_SortedProtTargets(Refs_Primer self);

/**
  Sorted for ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_Primer self
  @returns   the result
**/
extern ApiList Refs_Primer_SortedRefMolCompFeatures(Refs_Primer self);

/**
  Sorted for ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_Primer self
  @returns   the result
**/
extern ApiList Refs_Primer_SortedRelatedExpBlueprints(Refs_Primer self);

/**
  Sorted for 
ccp.lims.RefSampleComponent.MolComponent.specificLabelGroups

child link 
to class SpecificLabelGroup
  @param  Refs_Primer self
  @returns   the result
**/
extern ApiList Refs_Primer_SortedSpecificLabelGroups(Refs_Primer self);

#endif /* __incl__ccp_api_lims_RefSampleComponent_Primer_h__ */
