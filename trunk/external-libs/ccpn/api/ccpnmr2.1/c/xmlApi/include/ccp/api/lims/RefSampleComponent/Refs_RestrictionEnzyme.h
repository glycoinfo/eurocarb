
#ifndef __incl__ccp_api_lims_RefSampleComponent_RestrictionEnzyme_h__
#define __incl__ccp_api_lims_RefSampleComponent_RestrictionEnzyme_h__

#include "ccp.h"

/*
  This is a subtype of MolComponent. Restriction enzymes are known to cleave nucleic acide sequences at certain positions.
*/

/* package ccp.api.lims.RefSampleComponent */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_RestrictionEnzyme self
  @param  Impl_ApplicationData value
**/
extern void *Refs_RestrictionEnzyme_AddApplicationData(Refs_RestrictionEnzyme self, Impl_ApplicationData value);

/**
  Add for ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_RestrictionEnzyme self
  @param  Expb_BlueprintComponent value
**/
extern void *Refs_RestrictionEnzyme_AddBlueprintComponent(Refs_RestrictionEnzyme self, Expb_BlueprintComponent value);

/**
  Add for ccp.lims.RefSampleComponent.AbstractComponent.categories

List 
of category associated to a component.
  @param  Refs_RestrictionEnzyme self
  @param  Clas_SampleComponentCategory value
**/
extern void *Refs_RestrictionEnzyme_AddCategory(Refs_RestrictionEnzyme self, Clas_SampleComponentCategory value);

/**
  Add for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The Target 
associated other MolComponent that define it
  @param  Refs_RestrictionEnzyme self
  @param  Targ_Target value
**/
extern void *Refs_RestrictionEnzyme_AddNucTarget(Refs_RestrictionEnzyme self, Targ_Target value);

/**
  Add for ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_RestrictionEnzyme self
  @param  Refs_MolCompFeature value
**/
extern void *Refs_RestrictionEnzyme_AddRefMolCompFeature(Refs_RestrictionEnzyme self, Refs_MolCompFeature value);

/**
  Add for ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_RestrictionEnzyme self
  @param  Expb_BlueprintComponent value
**/
extern void *Refs_RestrictionEnzyme_AddRelatedExpBlueprint(Refs_RestrictionEnzyme self, Expb_BlueprintComponent value);

/**
  Add for ccp.lims.RefSampleComponent.AbstractComponent.synonyms

The 
synonyms of the component.
  @param  Refs_RestrictionEnzyme self
  @param  ApiString value
**/
extern void *Refs_RestrictionEnzyme_AddSynonym(Refs_RestrictionEnzyme self, ApiString value);

/**
  CheckAllValid for ccp.lims.RefSampleComponent.RestrictionEnzyme
  @param  Refs_RestrictionEnzyme self
  @param  ApiBoolean complete
**/
extern void *Refs_RestrictionEnzyme_CheckAllValid(Refs_RestrictionEnzyme self, ApiBoolean complete);

/**
  CheckValid for ccp.lims.RefSampleComponent.RestrictionEnzyme
  @param  Refs_RestrictionEnzyme self
  @param  ApiBoolean complete
**/
extern void *Refs_RestrictionEnzyme_CheckValid(Refs_RestrictionEnzyme self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_RestrictionEnzyme self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Refs_RestrictionEnzyme_FindAllApplicationData(Refs_RestrictionEnzyme self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_RestrictionEnzyme self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Refs_RestrictionEnzyme_FindAllApplicationData_keyval0(Refs_RestrictionEnzyme self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_RestrictionEnzyme self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Refs_RestrictionEnzyme_FindAllApplicationData_keyval1(Refs_RestrictionEnzyme self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_RestrictionEnzyme self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Refs_RestrictionEnzyme_FindAllApplicationData_keyval2(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_RestrictionEnzyme self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Refs_RestrictionEnzyme_FindAllApplicationData_keyval3(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_RestrictionEnzyme self
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
extern ApiList Refs_RestrictionEnzyme_FindAllApplicationData_keyval4(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_RestrictionEnzyme self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_RestrictionEnzyme_FindAllBlueprintComponents(Refs_RestrictionEnzyme self, ApiMap conditions);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_RestrictionEnzyme self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_RestrictionEnzyme_FindAllBlueprintComponents_keyval0(Refs_RestrictionEnzyme self);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_RestrictionEnzyme self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_RestrictionEnzyme_FindAllBlueprintComponents_keyval1(Refs_RestrictionEnzyme self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_RestrictionEnzyme self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_RestrictionEnzyme_FindAllBlueprintComponents_keyval2(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_RestrictionEnzyme self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_RestrictionEnzyme_FindAllBlueprintComponents_keyval3(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_RestrictionEnzyme self
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
extern ApiSet Refs_RestrictionEnzyme_FindAllBlueprintComponents_keyval4(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_RestrictionEnzyme self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_RestrictionEnzyme_FindAllCategories(Refs_RestrictionEnzyme self, ApiMap conditions);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_RestrictionEnzyme self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_RestrictionEnzyme_FindAllCategories_keyval0(Refs_RestrictionEnzyme self);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_RestrictionEnzyme self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_RestrictionEnzyme_FindAllCategories_keyval1(Refs_RestrictionEnzyme self, char * key, ApiObject value);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_RestrictionEnzyme self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_RestrictionEnzyme_FindAllCategories_keyval2(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_RestrictionEnzyme self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_RestrictionEnzyme_FindAllCategories_keyval3(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_RestrictionEnzyme self
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
extern ApiSet Refs_RestrictionEnzyme_FindAllCategories_keyval4(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_RestrictionEnzyme self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_RestrictionEnzyme_FindAllComponentDbRefs(Refs_RestrictionEnzyme self, ApiMap conditions);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_RestrictionEnzyme self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_RestrictionEnzyme_FindAllComponentDbRefs_keyval0(Refs_RestrictionEnzyme self);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_RestrictionEnzyme self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_RestrictionEnzyme_FindAllComponentDbRefs_keyval1(Refs_RestrictionEnzyme self, char * key, ApiObject value);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_RestrictionEnzyme self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_RestrictionEnzyme_FindAllComponentDbRefs_keyval2(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_RestrictionEnzyme self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_RestrictionEnzyme_FindAllComponentDbRefs_keyval3(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_RestrictionEnzyme self
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
extern ApiSet Refs_RestrictionEnzyme_FindAllComponentDbRefs_keyval4(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_RestrictionEnzyme self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_RestrictionEnzyme_FindAllCompositeElements(Refs_RestrictionEnzyme self, ApiMap conditions);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_RestrictionEnzyme self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_RestrictionEnzyme_FindAllCompositeElements_keyval0(Refs_RestrictionEnzyme self);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_RestrictionEnzyme self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_RestrictionEnzyme_FindAllCompositeElements_keyval1(Refs_RestrictionEnzyme self, char * key, ApiObject value);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_RestrictionEnzyme self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_RestrictionEnzyme_FindAllCompositeElements_keyval2(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_RestrictionEnzyme self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_RestrictionEnzyme_FindAllCompositeElements_keyval3(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_RestrictionEnzyme self
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
extern ApiSet Refs_RestrictionEnzyme_FindAllCompositeElements_keyval4(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.RefSampleComponent.AbstractComponent.labels

child 
link to class Label
  @param  Refs_RestrictionEnzyme self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_RestrictionEnzyme_FindAllLabels(Refs_RestrictionEnzyme self, ApiMap conditions);

/**
  FindAll for ccp.lims.RefSampleComponent.AbstractComponent.labels

child 
link to class Label
  @param  Refs_RestrictionEnzyme self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_RestrictionEnzyme_FindAllLabels_keyval0(Refs_RestrictionEnzyme self);

/**
  FindAll for ccp.lims.RefSampleComponent.AbstractComponent.labels

child 
link to class Label
  @param  Refs_RestrictionEnzyme self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_RestrictionEnzyme_FindAllLabels_keyval1(Refs_RestrictionEnzyme self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.RefSampleComponent.AbstractComponent.labels

child 
link to class Label
  @param  Refs_RestrictionEnzyme self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_RestrictionEnzyme_FindAllLabels_keyval2(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.RefSampleComponent.AbstractComponent.labels

child 
link to class Label
  @param  Refs_RestrictionEnzyme self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_RestrictionEnzyme_FindAllLabels_keyval3(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.RefSampleComponent.AbstractComponent.labels

child 
link to class Label
  @param  Refs_RestrictionEnzyme self
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
extern ApiSet Refs_RestrictionEnzyme_FindAllLabels_keyval4(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.molCompFeatures

child link to 
class MolCompFeature
  @param  Refs_RestrictionEnzyme self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_RestrictionEnzyme_FindAllMolCompFeatures(Refs_RestrictionEnzyme self, ApiMap conditions);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.molCompFeatures

child link to 
class MolCompFeature
  @param  Refs_RestrictionEnzyme self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_RestrictionEnzyme_FindAllMolCompFeatures_keyval0(Refs_RestrictionEnzyme self);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.molCompFeatures

child link to 
class MolCompFeature
  @param  Refs_RestrictionEnzyme self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_RestrictionEnzyme_FindAllMolCompFeatures_keyval1(Refs_RestrictionEnzyme self, char * key, ApiObject value);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.molCompFeatures

child link to 
class MolCompFeature
  @param  Refs_RestrictionEnzyme self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_RestrictionEnzyme_FindAllMolCompFeatures_keyval2(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.molCompFeatures

child link to 
class MolCompFeature
  @param  Refs_RestrictionEnzyme self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_RestrictionEnzyme_FindAllMolCompFeatures_keyval3(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.molCompFeatures

child link to 
class MolCompFeature
  @param  Refs_RestrictionEnzyme self
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
extern ApiSet Refs_RestrictionEnzyme_FindAllMolCompFeatures_keyval4(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The 
Target associated other MolComponent that define it
  @param  Refs_RestrictionEnzyme self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_RestrictionEnzyme_FindAllNucTargets(Refs_RestrictionEnzyme self, ApiMap conditions);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The 
Target associated other MolComponent that define it
  @param  Refs_RestrictionEnzyme self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_RestrictionEnzyme_FindAllNucTargets_keyval0(Refs_RestrictionEnzyme self);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The 
Target associated other MolComponent that define it
  @param  Refs_RestrictionEnzyme self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_RestrictionEnzyme_FindAllNucTargets_keyval1(Refs_RestrictionEnzyme self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The 
Target associated other MolComponent that define it
  @param  Refs_RestrictionEnzyme self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_RestrictionEnzyme_FindAllNucTargets_keyval2(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The 
Target associated other MolComponent that define it
  @param  Refs_RestrictionEnzyme self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_RestrictionEnzyme_FindAllNucTargets_keyval3(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The 
Target associated other MolComponent that define it
  @param  Refs_RestrictionEnzyme self
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
extern ApiSet Refs_RestrictionEnzyme_FindAllNucTargets_keyval4(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.protTargets

The 
Target associated to the MolComponent that defines it
  @param  Refs_RestrictionEnzyme self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_RestrictionEnzyme_FindAllProtTargets(Refs_RestrictionEnzyme self, ApiMap conditions);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.protTargets

The 
Target associated to the MolComponent that defines it
  @param  Refs_RestrictionEnzyme self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_RestrictionEnzyme_FindAllProtTargets_keyval0(Refs_RestrictionEnzyme self);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.protTargets

The 
Target associated to the MolComponent that defines it
  @param  Refs_RestrictionEnzyme self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_RestrictionEnzyme_FindAllProtTargets_keyval1(Refs_RestrictionEnzyme self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.protTargets

The 
Target associated to the MolComponent that defines it
  @param  Refs_RestrictionEnzyme self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_RestrictionEnzyme_FindAllProtTargets_keyval2(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.protTargets

The 
Target associated to the MolComponent that defines it
  @param  Refs_RestrictionEnzyme self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_RestrictionEnzyme_FindAllProtTargets_keyval3(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.protTargets

The 
Target associated to the MolComponent that defines it
  @param  Refs_RestrictionEnzyme self
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
extern ApiSet Refs_RestrictionEnzyme_FindAllProtTargets_keyval4(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_RestrictionEnzyme self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_RestrictionEnzyme_FindAllRefMolCompFeatures(Refs_RestrictionEnzyme self, ApiMap conditions);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_RestrictionEnzyme self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_RestrictionEnzyme_FindAllRefMolCompFeatures_keyval0(Refs_RestrictionEnzyme self);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_RestrictionEnzyme self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_RestrictionEnzyme_FindAllRefMolCompFeatures_keyval1(Refs_RestrictionEnzyme self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_RestrictionEnzyme self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_RestrictionEnzyme_FindAllRefMolCompFeatures_keyval2(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_RestrictionEnzyme self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_RestrictionEnzyme_FindAllRefMolCompFeatures_keyval3(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_RestrictionEnzyme self
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
extern ApiSet Refs_RestrictionEnzyme_FindAllRefMolCompFeatures_keyval4(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_RestrictionEnzyme self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_RestrictionEnzyme_FindAllRelatedExpBlueprints(Refs_RestrictionEnzyme self, ApiMap conditions);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_RestrictionEnzyme self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_RestrictionEnzyme_FindAllRelatedExpBlueprints_keyval0(Refs_RestrictionEnzyme self);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_RestrictionEnzyme self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_RestrictionEnzyme_FindAllRelatedExpBlueprints_keyval1(Refs_RestrictionEnzyme self, char * key, ApiObject value);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_RestrictionEnzyme self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_RestrictionEnzyme_FindAllRelatedExpBlueprints_keyval2(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_RestrictionEnzyme self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_RestrictionEnzyme_FindAllRelatedExpBlueprints_keyval3(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_RestrictionEnzyme self
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
extern ApiSet Refs_RestrictionEnzyme_FindAllRelatedExpBlueprints_keyval4(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.specificLabelGroups

child link 
to class SpecificLabelGroup
  @param  Refs_RestrictionEnzyme self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_RestrictionEnzyme_FindAllSpecificLabelGroups(Refs_RestrictionEnzyme self, ApiMap conditions);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.specificLabelGroups

child link 
to class SpecificLabelGroup
  @param  Refs_RestrictionEnzyme self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_RestrictionEnzyme_FindAllSpecificLabelGroups_keyval0(Refs_RestrictionEnzyme self);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.specificLabelGroups

child link 
to class SpecificLabelGroup
  @param  Refs_RestrictionEnzyme self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_RestrictionEnzyme_FindAllSpecificLabelGroups_keyval1(Refs_RestrictionEnzyme self, char * key, ApiObject value);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.specificLabelGroups

child link 
to class SpecificLabelGroup
  @param  Refs_RestrictionEnzyme self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_RestrictionEnzyme_FindAllSpecificLabelGroups_keyval2(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.specificLabelGroups

child link 
to class SpecificLabelGroup
  @param  Refs_RestrictionEnzyme self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_RestrictionEnzyme_FindAllSpecificLabelGroups_keyval3(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.specificLabelGroups

child link 
to class SpecificLabelGroup
  @param  Refs_RestrictionEnzyme self
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
extern ApiSet Refs_RestrictionEnzyme_FindAllSpecificLabelGroups_keyval4(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_RestrictionEnzyme self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Refs_RestrictionEnzyme_FindFirstApplicationData(Refs_RestrictionEnzyme self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_RestrictionEnzyme self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Refs_RestrictionEnzyme_FindFirstApplicationData_keyval0(Refs_RestrictionEnzyme self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_RestrictionEnzyme self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Refs_RestrictionEnzyme_FindFirstApplicationData_keyval1(Refs_RestrictionEnzyme self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_RestrictionEnzyme self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Refs_RestrictionEnzyme_FindFirstApplicationData_keyval2(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_RestrictionEnzyme self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Refs_RestrictionEnzyme_FindFirstApplicationData_keyval3(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_RestrictionEnzyme self
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
extern Impl_ApplicationData Refs_RestrictionEnzyme_FindFirstApplicationData_keyval4(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_RestrictionEnzyme self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Expb_BlueprintComponent Refs_RestrictionEnzyme_FindFirstBlueprintComponent(Refs_RestrictionEnzyme self, ApiMap conditions);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_RestrictionEnzyme self
  @returns  the first value that satisfies the conditions 
**/
extern Expb_BlueprintComponent Refs_RestrictionEnzyme_FindFirstBlueprintComponent_keyval0(Refs_RestrictionEnzyme self);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_RestrictionEnzyme self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Expb_BlueprintComponent Refs_RestrictionEnzyme_FindFirstBlueprintComponent_keyval1(Refs_RestrictionEnzyme self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_RestrictionEnzyme self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Expb_BlueprintComponent Refs_RestrictionEnzyme_FindFirstBlueprintComponent_keyval2(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_RestrictionEnzyme self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Expb_BlueprintComponent Refs_RestrictionEnzyme_FindFirstBlueprintComponent_keyval3(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_RestrictionEnzyme self
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
extern Expb_BlueprintComponent Refs_RestrictionEnzyme_FindFirstBlueprintComponent_keyval4(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_RestrictionEnzyme self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Clas_SampleComponentCategory Refs_RestrictionEnzyme_FindFirstCategory(Refs_RestrictionEnzyme self, ApiMap conditions);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_RestrictionEnzyme self
  @returns  the first value that satisfies the conditions 
**/
extern Clas_SampleComponentCategory Refs_RestrictionEnzyme_FindFirstCategory_keyval0(Refs_RestrictionEnzyme self);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_RestrictionEnzyme self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Clas_SampleComponentCategory Refs_RestrictionEnzyme_FindFirstCategory_keyval1(Refs_RestrictionEnzyme self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_RestrictionEnzyme self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Clas_SampleComponentCategory Refs_RestrictionEnzyme_FindFirstCategory_keyval2(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_RestrictionEnzyme self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Clas_SampleComponentCategory Refs_RestrictionEnzyme_FindFirstCategory_keyval3(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_RestrictionEnzyme self
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
extern Clas_SampleComponentCategory Refs_RestrictionEnzyme_FindFirstCategory_keyval4(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_RestrictionEnzyme self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Refs_ComponentDbRef Refs_RestrictionEnzyme_FindFirstComponentDbRef(Refs_RestrictionEnzyme self, ApiMap conditions);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_RestrictionEnzyme self
  @returns  the first value that satisfies the conditions 
**/
extern Refs_ComponentDbRef Refs_RestrictionEnzyme_FindFirstComponentDbRef_keyval0(Refs_RestrictionEnzyme self);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_RestrictionEnzyme self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Refs_ComponentDbRef Refs_RestrictionEnzyme_FindFirstComponentDbRef_keyval1(Refs_RestrictionEnzyme self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_RestrictionEnzyme self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Refs_ComponentDbRef Refs_RestrictionEnzyme_FindFirstComponentDbRef_keyval2(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_RestrictionEnzyme self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Refs_ComponentDbRef Refs_RestrictionEnzyme_FindFirstComponentDbRef_keyval3(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_RestrictionEnzyme self
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
extern Refs_ComponentDbRef Refs_RestrictionEnzyme_FindFirstComponentDbRef_keyval4(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_RestrictionEnzyme self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Refs_CompositeElement Refs_RestrictionEnzyme_FindFirstCompositeElement(Refs_RestrictionEnzyme self, ApiMap conditions);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_RestrictionEnzyme self
  @returns  the first value that satisfies the conditions 
**/
extern Refs_CompositeElement Refs_RestrictionEnzyme_FindFirstCompositeElement_keyval0(Refs_RestrictionEnzyme self);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_RestrictionEnzyme self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Refs_CompositeElement Refs_RestrictionEnzyme_FindFirstCompositeElement_keyval1(Refs_RestrictionEnzyme self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_RestrictionEnzyme self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Refs_CompositeElement Refs_RestrictionEnzyme_FindFirstCompositeElement_keyval2(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_RestrictionEnzyme self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Refs_CompositeElement Refs_RestrictionEnzyme_FindFirstCompositeElement_keyval3(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_RestrictionEnzyme self
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
extern Refs_CompositeElement Refs_RestrictionEnzyme_FindFirstCompositeElement_keyval4(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.labels

child link to 
class Label
  @param  Refs_RestrictionEnzyme self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Refs_Label Refs_RestrictionEnzyme_FindFirstLabel(Refs_RestrictionEnzyme self, ApiMap conditions);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.labels

child link to 
class Label
  @param  Refs_RestrictionEnzyme self
  @returns  the first value that satisfies the conditions 
**/
extern Refs_Label Refs_RestrictionEnzyme_FindFirstLabel_keyval0(Refs_RestrictionEnzyme self);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.labels

child link to 
class Label
  @param  Refs_RestrictionEnzyme self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Refs_Label Refs_RestrictionEnzyme_FindFirstLabel_keyval1(Refs_RestrictionEnzyme self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.labels

child link to 
class Label
  @param  Refs_RestrictionEnzyme self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Refs_Label Refs_RestrictionEnzyme_FindFirstLabel_keyval2(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.labels

child link to 
class Label
  @param  Refs_RestrictionEnzyme self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Refs_Label Refs_RestrictionEnzyme_FindFirstLabel_keyval3(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.labels

child link to 
class Label
  @param  Refs_RestrictionEnzyme self
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
extern Refs_Label Refs_RestrictionEnzyme_FindFirstLabel_keyval4(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.molCompFeatures

child link to 
class MolCompFeature
  @param  Refs_RestrictionEnzyme self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Refs_MolCompFeature Refs_RestrictionEnzyme_FindFirstMolCompFeature(Refs_RestrictionEnzyme self, ApiMap conditions);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.molCompFeatures

child link to 
class MolCompFeature
  @param  Refs_RestrictionEnzyme self
  @returns  the first value that satisfies the conditions 
**/
extern Refs_MolCompFeature Refs_RestrictionEnzyme_FindFirstMolCompFeature_keyval0(Refs_RestrictionEnzyme self);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.molCompFeatures

child link to 
class MolCompFeature
  @param  Refs_RestrictionEnzyme self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Refs_MolCompFeature Refs_RestrictionEnzyme_FindFirstMolCompFeature_keyval1(Refs_RestrictionEnzyme self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.molCompFeatures

child link to 
class MolCompFeature
  @param  Refs_RestrictionEnzyme self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Refs_MolCompFeature Refs_RestrictionEnzyme_FindFirstMolCompFeature_keyval2(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.molCompFeatures

child link to 
class MolCompFeature
  @param  Refs_RestrictionEnzyme self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Refs_MolCompFeature Refs_RestrictionEnzyme_FindFirstMolCompFeature_keyval3(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.molCompFeatures

child link to 
class MolCompFeature
  @param  Refs_RestrictionEnzyme self
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
extern Refs_MolCompFeature Refs_RestrictionEnzyme_FindFirstMolCompFeature_keyval4(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The 
Target associated other MolComponent that define it
  @param  Refs_RestrictionEnzyme self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Refs_RestrictionEnzyme_FindFirstNucTarget(Refs_RestrictionEnzyme self, ApiMap conditions);

/**
  FindFirst for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The 
Target associated other MolComponent that define it
  @param  Refs_RestrictionEnzyme self
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Refs_RestrictionEnzyme_FindFirstNucTarget_keyval0(Refs_RestrictionEnzyme self);

/**
  FindFirst for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The 
Target associated other MolComponent that define it
  @param  Refs_RestrictionEnzyme self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Refs_RestrictionEnzyme_FindFirstNucTarget_keyval1(Refs_RestrictionEnzyme self, char * key, ApiObject value);

/**
  FindFirst for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The 
Target associated other MolComponent that define it
  @param  Refs_RestrictionEnzyme self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Refs_RestrictionEnzyme_FindFirstNucTarget_keyval2(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The 
Target associated other MolComponent that define it
  @param  Refs_RestrictionEnzyme self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Refs_RestrictionEnzyme_FindFirstNucTarget_keyval3(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The 
Target associated other MolComponent that define it
  @param  Refs_RestrictionEnzyme self
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
extern Targ_Target Refs_RestrictionEnzyme_FindFirstNucTarget_keyval4(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.lims.RefSampleComponent.MolComponent.protTargets

The 
Target associated to the MolComponent that defines it
  @param  Refs_RestrictionEnzyme self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Refs_RestrictionEnzyme_FindFirstProtTarget(Refs_RestrictionEnzyme self, ApiMap conditions);

/**
  FindFirst for ccp.lims.RefSampleComponent.MolComponent.protTargets

The 
Target associated to the MolComponent that defines it
  @param  Refs_RestrictionEnzyme self
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Refs_RestrictionEnzyme_FindFirstProtTarget_keyval0(Refs_RestrictionEnzyme self);

/**
  FindFirst for ccp.lims.RefSampleComponent.MolComponent.protTargets

The 
Target associated to the MolComponent that defines it
  @param  Refs_RestrictionEnzyme self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Refs_RestrictionEnzyme_FindFirstProtTarget_keyval1(Refs_RestrictionEnzyme self, char * key, ApiObject value);

/**
  FindFirst for ccp.lims.RefSampleComponent.MolComponent.protTargets

The 
Target associated to the MolComponent that defines it
  @param  Refs_RestrictionEnzyme self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Refs_RestrictionEnzyme_FindFirstProtTarget_keyval2(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.lims.RefSampleComponent.MolComponent.protTargets

The 
Target associated to the MolComponent that defines it
  @param  Refs_RestrictionEnzyme self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Refs_RestrictionEnzyme_FindFirstProtTarget_keyval3(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.lims.RefSampleComponent.MolComponent.protTargets

The 
Target associated to the MolComponent that defines it
  @param  Refs_RestrictionEnzyme self
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
extern Targ_Target Refs_RestrictionEnzyme_FindFirstProtTarget_keyval4(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_RestrictionEnzyme self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Refs_MolCompFeature Refs_RestrictionEnzyme_FindFirstRefMolCompFeature(Refs_RestrictionEnzyme self, ApiMap conditions);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_RestrictionEnzyme self
  @returns  the first value that satisfies the conditions 
**/
extern Refs_MolCompFeature Refs_RestrictionEnzyme_FindFirstRefMolCompFeature_keyval0(Refs_RestrictionEnzyme self);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_RestrictionEnzyme self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Refs_MolCompFeature Refs_RestrictionEnzyme_FindFirstRefMolCompFeature_keyval1(Refs_RestrictionEnzyme self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_RestrictionEnzyme self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Refs_MolCompFeature Refs_RestrictionEnzyme_FindFirstRefMolCompFeature_keyval2(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_RestrictionEnzyme self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Refs_MolCompFeature Refs_RestrictionEnzyme_FindFirstRefMolCompFeature_keyval3(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_RestrictionEnzyme self
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
extern Refs_MolCompFeature Refs_RestrictionEnzyme_FindFirstRefMolCompFeature_keyval4(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_RestrictionEnzyme self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Expb_BlueprintComponent Refs_RestrictionEnzyme_FindFirstRelatedExpBlueprint(Refs_RestrictionEnzyme self, ApiMap conditions);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_RestrictionEnzyme self
  @returns  the first value that satisfies the conditions 
**/
extern Expb_BlueprintComponent Refs_RestrictionEnzyme_FindFirstRelatedExpBlueprint_keyval0(Refs_RestrictionEnzyme self);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_RestrictionEnzyme self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Expb_BlueprintComponent Refs_RestrictionEnzyme_FindFirstRelatedExpBlueprint_keyval1(Refs_RestrictionEnzyme self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_RestrictionEnzyme self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Expb_BlueprintComponent Refs_RestrictionEnzyme_FindFirstRelatedExpBlueprint_keyval2(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_RestrictionEnzyme self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Expb_BlueprintComponent Refs_RestrictionEnzyme_FindFirstRelatedExpBlueprint_keyval3(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_RestrictionEnzyme self
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
extern Expb_BlueprintComponent Refs_RestrictionEnzyme_FindFirstRelatedExpBlueprint_keyval4(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.specificLabelGroups

child link 
to class SpecificLabelGroup
  @param  Refs_RestrictionEnzyme self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Refs_SpecificLabelGroup Refs_RestrictionEnzyme_FindFirstSpecificLabelGroup(Refs_RestrictionEnzyme self, ApiMap conditions);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.specificLabelGroups

child link 
to class SpecificLabelGroup
  @param  Refs_RestrictionEnzyme self
  @returns  the first value that satisfies the conditions 
**/
extern Refs_SpecificLabelGroup Refs_RestrictionEnzyme_FindFirstSpecificLabelGroup_keyval0(Refs_RestrictionEnzyme self);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.specificLabelGroups

child link 
to class SpecificLabelGroup
  @param  Refs_RestrictionEnzyme self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Refs_SpecificLabelGroup Refs_RestrictionEnzyme_FindFirstSpecificLabelGroup_keyval1(Refs_RestrictionEnzyme self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.specificLabelGroups

child link 
to class SpecificLabelGroup
  @param  Refs_RestrictionEnzyme self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Refs_SpecificLabelGroup Refs_RestrictionEnzyme_FindFirstSpecificLabelGroup_keyval2(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.specificLabelGroups

child link 
to class SpecificLabelGroup
  @param  Refs_RestrictionEnzyme self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Refs_SpecificLabelGroup Refs_RestrictionEnzyme_FindFirstSpecificLabelGroup_keyval3(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.specificLabelGroups

child link 
to class SpecificLabelGroup
  @param  Refs_RestrictionEnzyme self
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
extern Refs_SpecificLabelGroup Refs_RestrictionEnzyme_FindFirstSpecificLabelGroup_keyval4(Refs_RestrictionEnzyme self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.lims.RefSampleComponent.RestrictionEnzyme
  @param  Refs_RestrictionEnzyme self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Refs_RestrictionEnzyme_Get(Refs_RestrictionEnzyme self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Refs_RestrictionEnzyme self
  @returns   the result
**/
extern Acco_AccessObject Refs_RestrictionEnzyme_GetAccess(Refs_RestrictionEnzyme self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Refs_RestrictionEnzyme self
  @returns   the result
**/
extern Acco_AccessObject Refs_RestrictionEnzyme_GetActiveAccess(Refs_RestrictionEnzyme self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_RestrictionEnzyme self
  @returns   the result
**/
extern ApiList Refs_RestrictionEnzyme_GetApplicationData(Refs_RestrictionEnzyme self);

/**
  Get for ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_RestrictionEnzyme self
  @returns   the result
**/
extern ApiSet Refs_RestrictionEnzyme_GetBlueprintComponents(Refs_RestrictionEnzyme self);

/**
  GetByKey for ccp.lims.RefSampleComponent.RestrictionEnzyme
  @param  Refs_RestrictionEnzyme self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Refs_RestrictionEnzyme Refs_RestrictionEnzyme_GetByKey(Refs_RestrictionEnzyme self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for ccp.lims.RefSampleComponent.MolComponent.casNum

CAS registry 
number (http://www.cas.org/EO/regsys.html).
  @param  Refs_RestrictionEnzyme self
  @returns   the result
**/
extern ApiString Refs_RestrictionEnzyme_GetCasNum(Refs_RestrictionEnzyme self);

/**
  Get for ccp.lims.RefSampleComponent.AbstractComponent.categories

List 
of category associated to a component.
  @param  Refs_RestrictionEnzyme self
  @returns   the result
**/
extern ApiSet Refs_RestrictionEnzyme_GetCategories(Refs_RestrictionEnzyme self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Refs_RestrictionEnzyme self
  @returns   the result
**/
extern ApiString Refs_RestrictionEnzyme_GetClassName(Refs_RestrictionEnzyme self);

/**
  Get for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_RestrictionEnzyme self
  @returns   the result
**/
extern ApiSet Refs_RestrictionEnzyme_GetComponentDbRefs(Refs_RestrictionEnzyme self);

/**
  Get for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_RestrictionEnzyme self
  @returns   the result
**/
extern ApiSet Refs_RestrictionEnzyme_GetCompositeElements(Refs_RestrictionEnzyme self);

/**
  Get for 
ccp.lims.RefSampleComponent.RestrictionEnzyme.cutOffsetCoding

Enzyme 
cut offset on coding strand.
  @param  Refs_RestrictionEnzyme self
  @returns   the result
**/
extern ApiInteger Refs_RestrictionEnzyme_GetCutOffsetCoding(Refs_RestrictionEnzyme self);

/**
  Get for 
ccp.lims.RefSampleComponent.RestrictionEnzyme.cutOffsetNonCoding

Enzyme 
cut offset on non-coding strand.
  @param  Refs_RestrictionEnzyme self
  @returns   the result
**/
extern ApiInteger Refs_RestrictionEnzyme_GetCutOffsetNonCoding(Refs_RestrictionEnzyme self);

/**
  Get for ccp.lims.RefSampleComponent.AbstractComponent.details

Detail 
field for comments.
  @param  Refs_RestrictionEnzyme self
  @returns   the result
**/
extern ApiString Refs_RestrictionEnzyme_GetDetails(Refs_RestrictionEnzyme self);

/**
  Get for ccp.lims.RefSampleComponent.MolComponent.empiricalFormula

The 
molecular formula of the molComponent.
  @param  Refs_RestrictionEnzyme self
  @returns   the result
**/
extern ApiString Refs_RestrictionEnzyme_GetEmpiricalFormula(Refs_RestrictionEnzyme self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Refs_RestrictionEnzyme self
  @returns   the result
**/
extern ApiList Refs_RestrictionEnzyme_GetFieldNames(Refs_RestrictionEnzyme self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Refs_RestrictionEnzyme self
  @returns   the result
**/
extern ApiBoolean Refs_RestrictionEnzyme_GetInConstructor(Refs_RestrictionEnzyme self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Refs_RestrictionEnzyme self
  @returns   the result
**/
extern ApiBoolean Refs_RestrictionEnzyme_GetIsDeleted(Refs_RestrictionEnzyme self);

/**
  Get for 
ccp.lims.RefSampleComponent.MolComponent.labeledMixture

LabeledMixture 
that describes MolComponent isotope labeling
  @param  Refs_RestrictionEnzyme self
  @returns   the result
**/
extern Lmol_LabeledMixture Refs_RestrictionEnzyme_GetLabeledMixture(Refs_RestrictionEnzyme self);

/**
  Get for ccp.lims.RefSampleComponent.AbstractComponent.labels

child link 
to class Label
  @param  Refs_RestrictionEnzyme self
  @returns   the result
**/
extern ApiSet Refs_RestrictionEnzyme_GetLabels(Refs_RestrictionEnzyme self);

/**
  Get for ccp.lims.RefSampleComponent.MolComponent.molCompFeatures

child 
link to class MolCompFeature
  @param  Refs_RestrictionEnzyme self
  @returns   the result
**/
extern ApiSet Refs_RestrictionEnzyme_GetMolCompFeatures(Refs_RestrictionEnzyme self);

/**
  Get for ccp.lims.RefSampleComponent.MolComponent.molType

Type of 
component, on the general lines of biopolymer/polymer/nonpolymer. See 
MolComponentType DataType for details
  @param  Refs_RestrictionEnzyme self
  @returns   the result
**/
extern ApiString Refs_RestrictionEnzyme_GetMolType(Refs_RestrictionEnzyme self);

/**
  Get for ccp.lims.RefSampleComponent.MolComponent.molecularMass

The 
experimental molecular mass in dalton (Da).
  @param  Refs_RestrictionEnzyme self
  @returns   the result
**/
extern ApiFloat Refs_RestrictionEnzyme_GetMolecularMass(Refs_RestrictionEnzyme self);

/**
  Get for ccp.lims.RefSampleComponent.MolComponent.molecule

The molecule 
used to describe the precise topology of the MolComponent.
  @param  Refs_RestrictionEnzyme self
  @returns   the result
**/
extern Mole_Molecule Refs_RestrictionEnzyme_GetMolecule(Refs_RestrictionEnzyme self);

/**
  Get for ccp.lims.RefSampleComponent.AbstractComponent.name

The name of 
the component. Unique identifier.
  @param  Refs_RestrictionEnzyme self
  @returns   the result
**/
extern ApiString Refs_RestrictionEnzyme_GetName(Refs_RestrictionEnzyme self);

/**
  Get for ccp.lims.RefSampleComponent.AbstractComponent.naturalSource

The 
natural source of the component.
  @param  Refs_RestrictionEnzyme self
  @returns   the result
**/
extern Taxo_NaturalSource Refs_RestrictionEnzyme_GetNaturalSource(Refs_RestrictionEnzyme self);

/**
  Get for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The Target 
associated other MolComponent that define it
  @param  Refs_RestrictionEnzyme self
  @returns   the result
**/
extern ApiSet Refs_RestrictionEnzyme_GetNucTargets(Refs_RestrictionEnzyme self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Refs_RestrictionEnzyme self
  @returns   the result
**/
extern ApiString Refs_RestrictionEnzyme_GetPackageName(Refs_RestrictionEnzyme self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Refs_RestrictionEnzyme self
  @returns   the result
**/
extern ApiString Refs_RestrictionEnzyme_GetPackageShortName(Refs_RestrictionEnzyme self);

/**
  Get for ccp.lims.RefSampleComponent.AbstractComponent.parent

link to 
parent object - synonym for refSampleComponentStore
  @param  Refs_RestrictionEnzyme self
  @returns   the result
**/
extern Refs_RefSampleComponentStore Refs_RestrictionEnzyme_GetParent(Refs_RestrictionEnzyme self);

/**
  Get for ccp.lims.RefSampleComponent.MolComponent.protTargets

The Target 
associated to the MolComponent that defines it
  @param  Refs_RestrictionEnzyme self
  @returns   the result
**/
extern ApiSet Refs_RestrictionEnzyme_GetProtTargets(Refs_RestrictionEnzyme self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Refs_RestrictionEnzyme self
  @returns   the result
**/
extern ApiString Refs_RestrictionEnzyme_GetQualifiedName(Refs_RestrictionEnzyme self);

/**
  Get for 
ccp.lims.RefSampleComponent.RestrictionEnzyme.recogSeqCoding

Recognition 
sequence on coding strand.
  @param  Refs_RestrictionEnzyme self
  @returns   the result
**/
extern ApiString Refs_RestrictionEnzyme_GetRecogSeqCoding(Refs_RestrictionEnzyme self);

/**
  Get for 
ccp.lims.RefSampleComponent.RestrictionEnzyme.recogSeqNonCoding

Recognition 
sequence on non-coding strand.
  @param  Refs_RestrictionEnzyme self
  @returns   the result
**/
extern ApiString Refs_RestrictionEnzyme_GetRecogSeqNonCoding(Refs_RestrictionEnzyme self);

/**
  Get for ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_RestrictionEnzyme self
  @returns   the result
**/
extern ApiSet Refs_RestrictionEnzyme_GetRefMolCompFeatures(Refs_RestrictionEnzyme self);

/**
  Get for 
ccp.lims.RefSampleComponent.AbstractComponent.refSampleComponentStore

parent 
link
  @param  Refs_RestrictionEnzyme self
  @returns   the result
**/
extern Refs_RefSampleComponentStore Refs_RestrictionEnzyme_GetRefSampleComponentStore(Refs_RestrictionEnzyme self);

/**
  Get for ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_RestrictionEnzyme self
  @returns   the result
**/
extern ApiSet Refs_RestrictionEnzyme_GetRelatedExpBlueprints(Refs_RestrictionEnzyme self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Refs_RestrictionEnzyme self
  @returns   the result
**/
extern Impl_MemopsRoot Refs_RestrictionEnzyme_GetRoot(Refs_RestrictionEnzyme self);

/**
  Get for ccp.lims.RefSampleComponent.MolComponent.seqDetails
  @param  Refs_RestrictionEnzyme self
  @returns   the result
**/
extern ApiString Refs_RestrictionEnzyme_GetSeqDetails(Refs_RestrictionEnzyme self);

/**
  Get for ccp.lims.RefSampleComponent.MolComponent.seqString
  @param  Refs_RestrictionEnzyme self
  @returns   the result
**/
extern ApiString Refs_RestrictionEnzyme_GetSeqString(Refs_RestrictionEnzyme self);

/**
  Get for 
ccp.lims.RefSampleComponent.MolComponent.specificLabelGroups

child link 
to class SpecificLabelGroup
  @param  Refs_RestrictionEnzyme self
  @returns   the result
**/
extern ApiSet Refs_RestrictionEnzyme_GetSpecificLabelGroups(Refs_RestrictionEnzyme self);

/**
  Get for ccp.lims.RefSampleComponent.AbstractComponent.synonyms

The 
synonyms of the component.
  @param  Refs_RestrictionEnzyme self
  @returns   the result
**/
extern ApiList Refs_RestrictionEnzyme_GetSynonyms(Refs_RestrictionEnzyme self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Refs_RestrictionEnzyme self
  @returns   the result
**/
extern Impl_TopObject Refs_RestrictionEnzyme_GetTopObject(Refs_RestrictionEnzyme self);

/**
  Constructor for ccp.lims.RefSampleComponent.RestrictionEnzyme
  @param  Refs_RefSampleComponentStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Refs_RestrictionEnzyme Refs_RestrictionEnzyme_Init(Refs_RefSampleComponentStore parent, ApiMap attrlinks);

/**
  Constructor for ccp.lims.RefSampleComponent.RestrictionEnzyme
  @param  Refs_RefSampleComponentStore parent
  @param  char * name
  @returns  the new object
**/
extern Refs_RestrictionEnzyme Refs_RestrictionEnzyme_Init_reqd(Refs_RefSampleComponentStore parent, char * name);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_RestrictionEnzyme self
  @param  Impl_ApplicationData value
**/
extern void *Refs_RestrictionEnzyme_RemoveApplicationData(Refs_RestrictionEnzyme self, Impl_ApplicationData value);

/**
  Remove for ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_RestrictionEnzyme self
  @param  Expb_BlueprintComponent value
**/
extern void *Refs_RestrictionEnzyme_RemoveBlueprintComponent(Refs_RestrictionEnzyme self, Expb_BlueprintComponent value);

/**
  Remove for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_RestrictionEnzyme self
  @param  Clas_SampleComponentCategory value
**/
extern void *Refs_RestrictionEnzyme_RemoveCategory(Refs_RestrictionEnzyme self, Clas_SampleComponentCategory value);

/**
  Remove for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The 
Target associated other MolComponent that define it
  @param  Refs_RestrictionEnzyme self
  @param  Targ_Target value
**/
extern void *Refs_RestrictionEnzyme_RemoveNucTarget(Refs_RestrictionEnzyme self, Targ_Target value);

/**
  Remove for ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_RestrictionEnzyme self
  @param  Refs_MolCompFeature value
**/
extern void *Refs_RestrictionEnzyme_RemoveRefMolCompFeature(Refs_RestrictionEnzyme self, Refs_MolCompFeature value);

/**
  Remove for ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_RestrictionEnzyme self
  @param  Expb_BlueprintComponent value
**/
extern void *Refs_RestrictionEnzyme_RemoveRelatedExpBlueprint(Refs_RestrictionEnzyme self, Expb_BlueprintComponent value);

/**
  Remove for ccp.lims.RefSampleComponent.AbstractComponent.synonyms

The 
synonyms of the component.
  @param  Refs_RestrictionEnzyme self
  @param  ApiString value
**/
extern void *Refs_RestrictionEnzyme_RemoveSynonym(Refs_RestrictionEnzyme self, ApiString value);

/**
  SetAttr for ccp.lims.RefSampleComponent.RestrictionEnzyme
  @param  Refs_RestrictionEnzyme self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Refs_RestrictionEnzyme_Set(Refs_RestrictionEnzyme self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Refs_RestrictionEnzyme self
  @param  Acco_AccessObject value
**/
extern void *Refs_RestrictionEnzyme_SetAccess(Refs_RestrictionEnzyme self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_RestrictionEnzyme self
  @param  ApiList values
**/
extern void *Refs_RestrictionEnzyme_SetApplicationData(Refs_RestrictionEnzyme self, ApiList values);

/**
  Set for ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_RestrictionEnzyme self
  @param  ApiSet values
**/
extern void *Refs_RestrictionEnzyme_SetBlueprintComponents(Refs_RestrictionEnzyme self, ApiSet values);

/**
  Set for ccp.lims.RefSampleComponent.MolComponent.casNum

CAS registry 
number (http://www.cas.org/EO/regsys.html).
  @param  Refs_RestrictionEnzyme self
  @param  ApiString value
**/
extern void *Refs_RestrictionEnzyme_SetCasNum(Refs_RestrictionEnzyme self, ApiString value);

/**
  Set for ccp.lims.RefSampleComponent.AbstractComponent.categories

List 
of category associated to a component.
  @param  Refs_RestrictionEnzyme self
  @param  ApiSet values
**/
extern void *Refs_RestrictionEnzyme_SetCategories(Refs_RestrictionEnzyme self, ApiSet values);

/**
  Set for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_RestrictionEnzyme self
  @param  ApiSet values
**/
extern void *Refs_RestrictionEnzyme_SetCompositeElements(Refs_RestrictionEnzyme self, ApiSet values);

/**
  Set for 
ccp.lims.RefSampleComponent.RestrictionEnzyme.cutOffsetCoding

Enzyme 
cut offset on coding strand.
  @param  Refs_RestrictionEnzyme self
  @param  ApiInteger value
**/
extern void *Refs_RestrictionEnzyme_SetCutOffsetCoding(Refs_RestrictionEnzyme self, ApiInteger value);

/**
  Set for 
ccp.lims.RefSampleComponent.RestrictionEnzyme.cutOffsetNonCoding

Enzyme 
cut offset on non-coding strand.
  @param  Refs_RestrictionEnzyme self
  @param  ApiInteger value
**/
extern void *Refs_RestrictionEnzyme_SetCutOffsetNonCoding(Refs_RestrictionEnzyme self, ApiInteger value);

/**
  Set for ccp.lims.RefSampleComponent.AbstractComponent.details

Detail 
field for comments.
  @param  Refs_RestrictionEnzyme self
  @param  ApiString value
**/
extern void *Refs_RestrictionEnzyme_SetDetails(Refs_RestrictionEnzyme self, ApiString value);

/**
  Set for ccp.lims.RefSampleComponent.MolComponent.empiricalFormula

The 
molecular formula of the molComponent.
  @param  Refs_RestrictionEnzyme self
  @param  ApiString value
**/
extern void *Refs_RestrictionEnzyme_SetEmpiricalFormula(Refs_RestrictionEnzyme self, ApiString value);

/**
  Set for 
ccp.lims.RefSampleComponent.MolComponent.labeledMixture

LabeledMixture 
that describes MolComponent isotope labeling
  @param  Refs_RestrictionEnzyme self
  @param  Lmol_LabeledMixture value
**/
extern void *Refs_RestrictionEnzyme_SetLabeledMixture(Refs_RestrictionEnzyme self, Lmol_LabeledMixture value);

/**
  Set for ccp.lims.RefSampleComponent.MolComponent.molType

Type of 
component, on the general lines of biopolymer/polymer/nonpolymer. See 
MolComponentType DataType for details
  @param  Refs_RestrictionEnzyme self
  @param  ApiString value
**/
extern void *Refs_RestrictionEnzyme_SetMolType(Refs_RestrictionEnzyme self, ApiString value);

/**
  Set for ccp.lims.RefSampleComponent.MolComponent.molecularMass

The 
experimental molecular mass in dalton (Da).
  @param  Refs_RestrictionEnzyme self
  @param  ApiFloat value
**/
extern void *Refs_RestrictionEnzyme_SetMolecularMass(Refs_RestrictionEnzyme self, ApiFloat value);

/**
  Set for ccp.lims.RefSampleComponent.MolComponent.molecule

The molecule 
used to describe the precise topology of the MolComponent.
  @param  Refs_RestrictionEnzyme self
  @param  Mole_Molecule value
**/
extern void *Refs_RestrictionEnzyme_SetMolecule(Refs_RestrictionEnzyme self, Mole_Molecule value);

/**
  Set for ccp.lims.RefSampleComponent.AbstractComponent.name

The name of 
the component. Unique identifier.
  @param  Refs_RestrictionEnzyme self
  @param  ApiString value
**/
extern void *Refs_RestrictionEnzyme_SetName(Refs_RestrictionEnzyme self, ApiString value);

/**
  Set for ccp.lims.RefSampleComponent.AbstractComponent.naturalSource

The 
natural source of the component.
  @param  Refs_RestrictionEnzyme self
  @param  Taxo_NaturalSource value
**/
extern void *Refs_RestrictionEnzyme_SetNaturalSource(Refs_RestrictionEnzyme self, Taxo_NaturalSource value);

/**
  Set for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The Target 
associated other MolComponent that define it
  @param  Refs_RestrictionEnzyme self
  @param  ApiSet values
**/
extern void *Refs_RestrictionEnzyme_SetNucTargets(Refs_RestrictionEnzyme self, ApiSet values);

/**
  Set for ccp.lims.RefSampleComponent.MolComponent.protTargets

The Target 
associated to the MolComponent that defines it
  @param  Refs_RestrictionEnzyme self
  @param  ApiSet values
**/
extern void *Refs_RestrictionEnzyme_SetProtTargets(Refs_RestrictionEnzyme self, ApiSet values);

/**
  Set for 
ccp.lims.RefSampleComponent.RestrictionEnzyme.recogSeqCoding

Recognition 
sequence on coding strand.
  @param  Refs_RestrictionEnzyme self
  @param  ApiString value
**/
extern void *Refs_RestrictionEnzyme_SetRecogSeqCoding(Refs_RestrictionEnzyme self, ApiString value);

/**
  Set for 
ccp.lims.RefSampleComponent.RestrictionEnzyme.recogSeqNonCoding

Recognition 
sequence on non-coding strand.
  @param  Refs_RestrictionEnzyme self
  @param  ApiString value
**/
extern void *Refs_RestrictionEnzyme_SetRecogSeqNonCoding(Refs_RestrictionEnzyme self, ApiString value);

/**
  Set for ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_RestrictionEnzyme self
  @param  ApiSet values
**/
extern void *Refs_RestrictionEnzyme_SetRefMolCompFeatures(Refs_RestrictionEnzyme self, ApiSet values);

/**
  Set for ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_RestrictionEnzyme self
  @param  ApiSet values
**/
extern void *Refs_RestrictionEnzyme_SetRelatedExpBlueprints(Refs_RestrictionEnzyme self, ApiSet values);

/**
  Set for ccp.lims.RefSampleComponent.MolComponent.seqDetails
  @param  Refs_RestrictionEnzyme self
  @param  ApiString value
**/
extern void *Refs_RestrictionEnzyme_SetSeqDetails(Refs_RestrictionEnzyme self, ApiString value);

/**
  Set for ccp.lims.RefSampleComponent.MolComponent.seqString
  @param  Refs_RestrictionEnzyme self
  @param  ApiString value
**/
extern void *Refs_RestrictionEnzyme_SetSeqString(Refs_RestrictionEnzyme self, ApiString value);

/**
  Set for ccp.lims.RefSampleComponent.AbstractComponent.synonyms

The 
synonyms of the component.
  @param  Refs_RestrictionEnzyme self
  @param  ApiList values
**/
extern void *Refs_RestrictionEnzyme_SetSynonyms(Refs_RestrictionEnzyme self, ApiList values);

/**
  Sorted for ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_RestrictionEnzyme self
  @returns   the result
**/
extern ApiList Refs_RestrictionEnzyme_SortedBlueprintComponents(Refs_RestrictionEnzyme self);

/**
  Sorted for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_RestrictionEnzyme self
  @returns   the result
**/
extern ApiList Refs_RestrictionEnzyme_SortedCategories(Refs_RestrictionEnzyme self);

/**
  Sorted for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_RestrictionEnzyme self
  @returns   the result
**/
extern ApiList Refs_RestrictionEnzyme_SortedComponentDbRefs(Refs_RestrictionEnzyme self);

/**
  Sorted for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_RestrictionEnzyme self
  @returns   the result
**/
extern ApiList Refs_RestrictionEnzyme_SortedCompositeElements(Refs_RestrictionEnzyme self);

/**
  Sorted for ccp.lims.RefSampleComponent.AbstractComponent.labels

child 
link to class Label
  @param  Refs_RestrictionEnzyme self
  @returns   the result
**/
extern ApiList Refs_RestrictionEnzyme_SortedLabels(Refs_RestrictionEnzyme self);

/**
  Sorted for 
ccp.lims.RefSampleComponent.MolComponent.molCompFeatures

child link to 
class MolCompFeature
  @param  Refs_RestrictionEnzyme self
  @returns   the result
**/
extern ApiList Refs_RestrictionEnzyme_SortedMolCompFeatures(Refs_RestrictionEnzyme self);

/**
  Sorted for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The 
Target associated other MolComponent that define it
  @param  Refs_RestrictionEnzyme self
  @returns   the result
**/
extern ApiList Refs_RestrictionEnzyme_SortedNucTargets(Refs_RestrictionEnzyme self);

/**
  Sorted for ccp.lims.RefSampleComponent.MolComponent.protTargets

The 
Target associated to the MolComponent that defines it
  @param  Refs_RestrictionEnzyme self
  @returns   the result
**/
extern ApiList Refs_RestrictionEnzyme_SortedProtTargets(Refs_RestrictionEnzyme self);

/**
  Sorted for ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_RestrictionEnzyme self
  @returns   the result
**/
extern ApiList Refs_RestrictionEnzyme_SortedRefMolCompFeatures(Refs_RestrictionEnzyme self);

/**
  Sorted for ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_RestrictionEnzyme self
  @returns   the result
**/
extern ApiList Refs_RestrictionEnzyme_SortedRelatedExpBlueprints(Refs_RestrictionEnzyme self);

/**
  Sorted for 
ccp.lims.RefSampleComponent.MolComponent.specificLabelGroups

child link 
to class SpecificLabelGroup
  @param  Refs_RestrictionEnzyme self
  @returns   the result
**/
extern ApiList Refs_RestrictionEnzyme_SortedSpecificLabelGroups(Refs_RestrictionEnzyme self);

#endif /* __incl__ccp_api_lims_RefSampleComponent_RestrictionEnzyme_h__ */
