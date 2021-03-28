
#ifndef __incl__ccp_api_lims_RefSampleComponent_Construct_h__
#define __incl__ccp_api_lims_RefSampleComponent_Construct_h__

#include "ccp.h"

/*
  This is a subtype of MolComponent. It is used to summarise information about a construct such as an expression vector plasmid.
*/

/* package ccp.api.lims.RefSampleComponent */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_Construct self
  @param  Impl_ApplicationData value
**/
extern void *Refs_Construct_AddApplicationData(Refs_Construct self, Impl_ApplicationData value);

/**
  Add for ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_Construct self
  @param  Expb_BlueprintComponent value
**/
extern void *Refs_Construct_AddBlueprintComponent(Refs_Construct self, Expb_BlueprintComponent value);

/**
  Add for ccp.lims.RefSampleComponent.AbstractComponent.categories

List 
of category associated to a component.
  @param  Refs_Construct self
  @param  Clas_SampleComponentCategory value
**/
extern void *Refs_Construct_AddCategory(Refs_Construct self, Clas_SampleComponentCategory value);

/**
  Add for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The Target 
associated other MolComponent that define it
  @param  Refs_Construct self
  @param  Targ_Target value
**/
extern void *Refs_Construct_AddNucTarget(Refs_Construct self, Targ_Target value);

/**
  Add for ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_Construct self
  @param  Refs_MolCompFeature value
**/
extern void *Refs_Construct_AddRefMolCompFeature(Refs_Construct self, Refs_MolCompFeature value);

/**
  Add for ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_Construct self
  @param  Expb_BlueprintComponent value
**/
extern void *Refs_Construct_AddRelatedExpBlueprint(Refs_Construct self, Expb_BlueprintComponent value);

/**
  Add for ccp.lims.RefSampleComponent.AbstractComponent.synonyms

The 
synonyms of the component.
  @param  Refs_Construct self
  @param  ApiString value
**/
extern void *Refs_Construct_AddSynonym(Refs_Construct self, ApiString value);

/**
  CheckAllValid for ccp.lims.RefSampleComponent.Construct
  @param  Refs_Construct self
  @param  ApiBoolean complete
**/
extern void *Refs_Construct_CheckAllValid(Refs_Construct self, ApiBoolean complete);

/**
  CheckValid for ccp.lims.RefSampleComponent.Construct
  @param  Refs_Construct self
  @param  ApiBoolean complete
**/
extern void *Refs_Construct_CheckValid(Refs_Construct self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_Construct self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Refs_Construct_FindAllApplicationData(Refs_Construct self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_Construct self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Refs_Construct_FindAllApplicationData_keyval0(Refs_Construct self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_Construct self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Refs_Construct_FindAllApplicationData_keyval1(Refs_Construct self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Refs_Construct_FindAllApplicationData_keyval2(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Refs_Construct_FindAllApplicationData_keyval3(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_Construct self
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
extern ApiList Refs_Construct_FindAllApplicationData_keyval4(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_Construct self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Construct_FindAllBlueprintComponents(Refs_Construct self, ApiMap conditions);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_Construct self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Construct_FindAllBlueprintComponents_keyval0(Refs_Construct self);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_Construct self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Construct_FindAllBlueprintComponents_keyval1(Refs_Construct self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Construct_FindAllBlueprintComponents_keyval2(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Construct_FindAllBlueprintComponents_keyval3(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_Construct self
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
extern ApiSet Refs_Construct_FindAllBlueprintComponents_keyval4(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_Construct self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Construct_FindAllCategories(Refs_Construct self, ApiMap conditions);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_Construct self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Construct_FindAllCategories_keyval0(Refs_Construct self);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_Construct self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Construct_FindAllCategories_keyval1(Refs_Construct self, char * key, ApiObject value);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Construct_FindAllCategories_keyval2(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Construct_FindAllCategories_keyval3(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_Construct self
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
extern ApiSet Refs_Construct_FindAllCategories_keyval4(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_Construct self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Construct_FindAllComponentDbRefs(Refs_Construct self, ApiMap conditions);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_Construct self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Construct_FindAllComponentDbRefs_keyval0(Refs_Construct self);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_Construct self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Construct_FindAllComponentDbRefs_keyval1(Refs_Construct self, char * key, ApiObject value);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Construct_FindAllComponentDbRefs_keyval2(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Construct_FindAllComponentDbRefs_keyval3(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_Construct self
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
extern ApiSet Refs_Construct_FindAllComponentDbRefs_keyval4(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_Construct self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Construct_FindAllCompositeElements(Refs_Construct self, ApiMap conditions);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_Construct self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Construct_FindAllCompositeElements_keyval0(Refs_Construct self);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_Construct self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Construct_FindAllCompositeElements_keyval1(Refs_Construct self, char * key, ApiObject value);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Construct_FindAllCompositeElements_keyval2(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Construct_FindAllCompositeElements_keyval3(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_Construct self
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
extern ApiSet Refs_Construct_FindAllCompositeElements_keyval4(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.RefSampleComponent.AbstractComponent.labels

child 
link to class Label
  @param  Refs_Construct self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Construct_FindAllLabels(Refs_Construct self, ApiMap conditions);

/**
  FindAll for ccp.lims.RefSampleComponent.AbstractComponent.labels

child 
link to class Label
  @param  Refs_Construct self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Construct_FindAllLabels_keyval0(Refs_Construct self);

/**
  FindAll for ccp.lims.RefSampleComponent.AbstractComponent.labels

child 
link to class Label
  @param  Refs_Construct self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Construct_FindAllLabels_keyval1(Refs_Construct self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.RefSampleComponent.AbstractComponent.labels

child 
link to class Label
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Construct_FindAllLabels_keyval2(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.RefSampleComponent.AbstractComponent.labels

child 
link to class Label
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Construct_FindAllLabels_keyval3(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.RefSampleComponent.AbstractComponent.labels

child 
link to class Label
  @param  Refs_Construct self
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
extern ApiSet Refs_Construct_FindAllLabels_keyval4(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.molCompFeatures

child link to 
class MolCompFeature
  @param  Refs_Construct self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Construct_FindAllMolCompFeatures(Refs_Construct self, ApiMap conditions);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.molCompFeatures

child link to 
class MolCompFeature
  @param  Refs_Construct self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Construct_FindAllMolCompFeatures_keyval0(Refs_Construct self);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.molCompFeatures

child link to 
class MolCompFeature
  @param  Refs_Construct self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Construct_FindAllMolCompFeatures_keyval1(Refs_Construct self, char * key, ApiObject value);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.molCompFeatures

child link to 
class MolCompFeature
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Construct_FindAllMolCompFeatures_keyval2(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.molCompFeatures

child link to 
class MolCompFeature
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Construct_FindAllMolCompFeatures_keyval3(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.molCompFeatures

child link to 
class MolCompFeature
  @param  Refs_Construct self
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
extern ApiSet Refs_Construct_FindAllMolCompFeatures_keyval4(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The 
Target associated other MolComponent that define it
  @param  Refs_Construct self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Construct_FindAllNucTargets(Refs_Construct self, ApiMap conditions);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The 
Target associated other MolComponent that define it
  @param  Refs_Construct self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Construct_FindAllNucTargets_keyval0(Refs_Construct self);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The 
Target associated other MolComponent that define it
  @param  Refs_Construct self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Construct_FindAllNucTargets_keyval1(Refs_Construct self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The 
Target associated other MolComponent that define it
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Construct_FindAllNucTargets_keyval2(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The 
Target associated other MolComponent that define it
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Construct_FindAllNucTargets_keyval3(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The 
Target associated other MolComponent that define it
  @param  Refs_Construct self
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
extern ApiSet Refs_Construct_FindAllNucTargets_keyval4(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.protTargets

The 
Target associated to the MolComponent that defines it
  @param  Refs_Construct self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Construct_FindAllProtTargets(Refs_Construct self, ApiMap conditions);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.protTargets

The 
Target associated to the MolComponent that defines it
  @param  Refs_Construct self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Construct_FindAllProtTargets_keyval0(Refs_Construct self);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.protTargets

The 
Target associated to the MolComponent that defines it
  @param  Refs_Construct self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Construct_FindAllProtTargets_keyval1(Refs_Construct self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.protTargets

The 
Target associated to the MolComponent that defines it
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Construct_FindAllProtTargets_keyval2(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.protTargets

The 
Target associated to the MolComponent that defines it
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Construct_FindAllProtTargets_keyval3(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.protTargets

The 
Target associated to the MolComponent that defines it
  @param  Refs_Construct self
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
extern ApiSet Refs_Construct_FindAllProtTargets_keyval4(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_Construct self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Construct_FindAllRefMolCompFeatures(Refs_Construct self, ApiMap conditions);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_Construct self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Construct_FindAllRefMolCompFeatures_keyval0(Refs_Construct self);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_Construct self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Construct_FindAllRefMolCompFeatures_keyval1(Refs_Construct self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Construct_FindAllRefMolCompFeatures_keyval2(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Construct_FindAllRefMolCompFeatures_keyval3(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_Construct self
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
extern ApiSet Refs_Construct_FindAllRefMolCompFeatures_keyval4(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_Construct self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Construct_FindAllRelatedExpBlueprints(Refs_Construct self, ApiMap conditions);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_Construct self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Construct_FindAllRelatedExpBlueprints_keyval0(Refs_Construct self);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_Construct self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Construct_FindAllRelatedExpBlueprints_keyval1(Refs_Construct self, char * key, ApiObject value);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Construct_FindAllRelatedExpBlueprints_keyval2(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Construct_FindAllRelatedExpBlueprints_keyval3(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_Construct self
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
extern ApiSet Refs_Construct_FindAllRelatedExpBlueprints_keyval4(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.specificLabelGroups

child link 
to class SpecificLabelGroup
  @param  Refs_Construct self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Construct_FindAllSpecificLabelGroups(Refs_Construct self, ApiMap conditions);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.specificLabelGroups

child link 
to class SpecificLabelGroup
  @param  Refs_Construct self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Construct_FindAllSpecificLabelGroups_keyval0(Refs_Construct self);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.specificLabelGroups

child link 
to class SpecificLabelGroup
  @param  Refs_Construct self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Construct_FindAllSpecificLabelGroups_keyval1(Refs_Construct self, char * key, ApiObject value);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.specificLabelGroups

child link 
to class SpecificLabelGroup
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Construct_FindAllSpecificLabelGroups_keyval2(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.specificLabelGroups

child link 
to class SpecificLabelGroup
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_Construct_FindAllSpecificLabelGroups_keyval3(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.specificLabelGroups

child link 
to class SpecificLabelGroup
  @param  Refs_Construct self
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
extern ApiSet Refs_Construct_FindAllSpecificLabelGroups_keyval4(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_Construct self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Refs_Construct_FindFirstApplicationData(Refs_Construct self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_Construct self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Refs_Construct_FindFirstApplicationData_keyval0(Refs_Construct self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_Construct self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Refs_Construct_FindFirstApplicationData_keyval1(Refs_Construct self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Refs_Construct_FindFirstApplicationData_keyval2(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Refs_Construct_FindFirstApplicationData_keyval3(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_Construct self
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
extern Impl_ApplicationData Refs_Construct_FindFirstApplicationData_keyval4(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_Construct self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Expb_BlueprintComponent Refs_Construct_FindFirstBlueprintComponent(Refs_Construct self, ApiMap conditions);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_Construct self
  @returns  the first value that satisfies the conditions 
**/
extern Expb_BlueprintComponent Refs_Construct_FindFirstBlueprintComponent_keyval0(Refs_Construct self);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_Construct self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Expb_BlueprintComponent Refs_Construct_FindFirstBlueprintComponent_keyval1(Refs_Construct self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Expb_BlueprintComponent Refs_Construct_FindFirstBlueprintComponent_keyval2(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Expb_BlueprintComponent Refs_Construct_FindFirstBlueprintComponent_keyval3(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_Construct self
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
extern Expb_BlueprintComponent Refs_Construct_FindFirstBlueprintComponent_keyval4(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_Construct self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Clas_SampleComponentCategory Refs_Construct_FindFirstCategory(Refs_Construct self, ApiMap conditions);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_Construct self
  @returns  the first value that satisfies the conditions 
**/
extern Clas_SampleComponentCategory Refs_Construct_FindFirstCategory_keyval0(Refs_Construct self);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_Construct self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Clas_SampleComponentCategory Refs_Construct_FindFirstCategory_keyval1(Refs_Construct self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Clas_SampleComponentCategory Refs_Construct_FindFirstCategory_keyval2(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Clas_SampleComponentCategory Refs_Construct_FindFirstCategory_keyval3(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_Construct self
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
extern Clas_SampleComponentCategory Refs_Construct_FindFirstCategory_keyval4(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_Construct self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Refs_ComponentDbRef Refs_Construct_FindFirstComponentDbRef(Refs_Construct self, ApiMap conditions);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_Construct self
  @returns  the first value that satisfies the conditions 
**/
extern Refs_ComponentDbRef Refs_Construct_FindFirstComponentDbRef_keyval0(Refs_Construct self);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_Construct self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Refs_ComponentDbRef Refs_Construct_FindFirstComponentDbRef_keyval1(Refs_Construct self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Refs_ComponentDbRef Refs_Construct_FindFirstComponentDbRef_keyval2(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Refs_ComponentDbRef Refs_Construct_FindFirstComponentDbRef_keyval3(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_Construct self
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
extern Refs_ComponentDbRef Refs_Construct_FindFirstComponentDbRef_keyval4(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_Construct self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Refs_CompositeElement Refs_Construct_FindFirstCompositeElement(Refs_Construct self, ApiMap conditions);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_Construct self
  @returns  the first value that satisfies the conditions 
**/
extern Refs_CompositeElement Refs_Construct_FindFirstCompositeElement_keyval0(Refs_Construct self);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_Construct self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Refs_CompositeElement Refs_Construct_FindFirstCompositeElement_keyval1(Refs_Construct self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Refs_CompositeElement Refs_Construct_FindFirstCompositeElement_keyval2(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Refs_CompositeElement Refs_Construct_FindFirstCompositeElement_keyval3(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_Construct self
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
extern Refs_CompositeElement Refs_Construct_FindFirstCompositeElement_keyval4(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.labels

child link to 
class Label
  @param  Refs_Construct self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Refs_Label Refs_Construct_FindFirstLabel(Refs_Construct self, ApiMap conditions);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.labels

child link to 
class Label
  @param  Refs_Construct self
  @returns  the first value that satisfies the conditions 
**/
extern Refs_Label Refs_Construct_FindFirstLabel_keyval0(Refs_Construct self);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.labels

child link to 
class Label
  @param  Refs_Construct self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Refs_Label Refs_Construct_FindFirstLabel_keyval1(Refs_Construct self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.labels

child link to 
class Label
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Refs_Label Refs_Construct_FindFirstLabel_keyval2(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.labels

child link to 
class Label
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Refs_Label Refs_Construct_FindFirstLabel_keyval3(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.labels

child link to 
class Label
  @param  Refs_Construct self
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
extern Refs_Label Refs_Construct_FindFirstLabel_keyval4(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.molCompFeatures

child link to 
class MolCompFeature
  @param  Refs_Construct self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Refs_MolCompFeature Refs_Construct_FindFirstMolCompFeature(Refs_Construct self, ApiMap conditions);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.molCompFeatures

child link to 
class MolCompFeature
  @param  Refs_Construct self
  @returns  the first value that satisfies the conditions 
**/
extern Refs_MolCompFeature Refs_Construct_FindFirstMolCompFeature_keyval0(Refs_Construct self);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.molCompFeatures

child link to 
class MolCompFeature
  @param  Refs_Construct self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Refs_MolCompFeature Refs_Construct_FindFirstMolCompFeature_keyval1(Refs_Construct self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.molCompFeatures

child link to 
class MolCompFeature
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Refs_MolCompFeature Refs_Construct_FindFirstMolCompFeature_keyval2(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.molCompFeatures

child link to 
class MolCompFeature
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Refs_MolCompFeature Refs_Construct_FindFirstMolCompFeature_keyval3(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.molCompFeatures

child link to 
class MolCompFeature
  @param  Refs_Construct self
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
extern Refs_MolCompFeature Refs_Construct_FindFirstMolCompFeature_keyval4(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The 
Target associated other MolComponent that define it
  @param  Refs_Construct self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Refs_Construct_FindFirstNucTarget(Refs_Construct self, ApiMap conditions);

/**
  FindFirst for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The 
Target associated other MolComponent that define it
  @param  Refs_Construct self
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Refs_Construct_FindFirstNucTarget_keyval0(Refs_Construct self);

/**
  FindFirst for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The 
Target associated other MolComponent that define it
  @param  Refs_Construct self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Refs_Construct_FindFirstNucTarget_keyval1(Refs_Construct self, char * key, ApiObject value);

/**
  FindFirst for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The 
Target associated other MolComponent that define it
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Refs_Construct_FindFirstNucTarget_keyval2(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The 
Target associated other MolComponent that define it
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Refs_Construct_FindFirstNucTarget_keyval3(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The 
Target associated other MolComponent that define it
  @param  Refs_Construct self
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
extern Targ_Target Refs_Construct_FindFirstNucTarget_keyval4(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.lims.RefSampleComponent.MolComponent.protTargets

The 
Target associated to the MolComponent that defines it
  @param  Refs_Construct self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Refs_Construct_FindFirstProtTarget(Refs_Construct self, ApiMap conditions);

/**
  FindFirst for ccp.lims.RefSampleComponent.MolComponent.protTargets

The 
Target associated to the MolComponent that defines it
  @param  Refs_Construct self
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Refs_Construct_FindFirstProtTarget_keyval0(Refs_Construct self);

/**
  FindFirst for ccp.lims.RefSampleComponent.MolComponent.protTargets

The 
Target associated to the MolComponent that defines it
  @param  Refs_Construct self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Refs_Construct_FindFirstProtTarget_keyval1(Refs_Construct self, char * key, ApiObject value);

/**
  FindFirst for ccp.lims.RefSampleComponent.MolComponent.protTargets

The 
Target associated to the MolComponent that defines it
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Refs_Construct_FindFirstProtTarget_keyval2(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.lims.RefSampleComponent.MolComponent.protTargets

The 
Target associated to the MolComponent that defines it
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Refs_Construct_FindFirstProtTarget_keyval3(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.lims.RefSampleComponent.MolComponent.protTargets

The 
Target associated to the MolComponent that defines it
  @param  Refs_Construct self
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
extern Targ_Target Refs_Construct_FindFirstProtTarget_keyval4(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_Construct self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Refs_MolCompFeature Refs_Construct_FindFirstRefMolCompFeature(Refs_Construct self, ApiMap conditions);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_Construct self
  @returns  the first value that satisfies the conditions 
**/
extern Refs_MolCompFeature Refs_Construct_FindFirstRefMolCompFeature_keyval0(Refs_Construct self);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_Construct self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Refs_MolCompFeature Refs_Construct_FindFirstRefMolCompFeature_keyval1(Refs_Construct self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Refs_MolCompFeature Refs_Construct_FindFirstRefMolCompFeature_keyval2(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Refs_MolCompFeature Refs_Construct_FindFirstRefMolCompFeature_keyval3(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_Construct self
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
extern Refs_MolCompFeature Refs_Construct_FindFirstRefMolCompFeature_keyval4(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_Construct self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Expb_BlueprintComponent Refs_Construct_FindFirstRelatedExpBlueprint(Refs_Construct self, ApiMap conditions);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_Construct self
  @returns  the first value that satisfies the conditions 
**/
extern Expb_BlueprintComponent Refs_Construct_FindFirstRelatedExpBlueprint_keyval0(Refs_Construct self);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_Construct self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Expb_BlueprintComponent Refs_Construct_FindFirstRelatedExpBlueprint_keyval1(Refs_Construct self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Expb_BlueprintComponent Refs_Construct_FindFirstRelatedExpBlueprint_keyval2(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Expb_BlueprintComponent Refs_Construct_FindFirstRelatedExpBlueprint_keyval3(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_Construct self
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
extern Expb_BlueprintComponent Refs_Construct_FindFirstRelatedExpBlueprint_keyval4(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.specificLabelGroups

child link 
to class SpecificLabelGroup
  @param  Refs_Construct self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Refs_SpecificLabelGroup Refs_Construct_FindFirstSpecificLabelGroup(Refs_Construct self, ApiMap conditions);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.specificLabelGroups

child link 
to class SpecificLabelGroup
  @param  Refs_Construct self
  @returns  the first value that satisfies the conditions 
**/
extern Refs_SpecificLabelGroup Refs_Construct_FindFirstSpecificLabelGroup_keyval0(Refs_Construct self);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.specificLabelGroups

child link 
to class SpecificLabelGroup
  @param  Refs_Construct self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Refs_SpecificLabelGroup Refs_Construct_FindFirstSpecificLabelGroup_keyval1(Refs_Construct self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.specificLabelGroups

child link 
to class SpecificLabelGroup
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Refs_SpecificLabelGroup Refs_Construct_FindFirstSpecificLabelGroup_keyval2(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.specificLabelGroups

child link 
to class SpecificLabelGroup
  @param  Refs_Construct self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Refs_SpecificLabelGroup Refs_Construct_FindFirstSpecificLabelGroup_keyval3(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.specificLabelGroups

child link 
to class SpecificLabelGroup
  @param  Refs_Construct self
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
extern Refs_SpecificLabelGroup Refs_Construct_FindFirstSpecificLabelGroup_keyval4(Refs_Construct self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.lims.RefSampleComponent.Construct
  @param  Refs_Construct self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Refs_Construct_Get(Refs_Construct self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Refs_Construct self
  @returns   the result
**/
extern Acco_AccessObject Refs_Construct_GetAccess(Refs_Construct self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Refs_Construct self
  @returns   the result
**/
extern Acco_AccessObject Refs_Construct_GetActiveAccess(Refs_Construct self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_Construct self
  @returns   the result
**/
extern ApiList Refs_Construct_GetApplicationData(Refs_Construct self);

/**
  Get for ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_Construct self
  @returns   the result
**/
extern ApiSet Refs_Construct_GetBlueprintComponents(Refs_Construct self);

/**
  GetByKey for ccp.lims.RefSampleComponent.Construct
  @param  Refs_Construct self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Refs_Construct Refs_Construct_GetByKey(Refs_Construct self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for ccp.lims.RefSampleComponent.MolComponent.casNum

CAS registry 
number (http://www.cas.org/EO/regsys.html).
  @param  Refs_Construct self
  @returns   the result
**/
extern ApiString Refs_Construct_GetCasNum(Refs_Construct self);

/**
  Get for ccp.lims.RefSampleComponent.AbstractComponent.categories

List 
of category associated to a component.
  @param  Refs_Construct self
  @returns   the result
**/
extern ApiSet Refs_Construct_GetCategories(Refs_Construct self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Refs_Construct self
  @returns   the result
**/
extern ApiString Refs_Construct_GetClassName(Refs_Construct self);

/**
  Get for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_Construct self
  @returns   the result
**/
extern ApiSet Refs_Construct_GetComponentDbRefs(Refs_Construct self);

/**
  Get for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_Construct self
  @returns   the result
**/
extern ApiSet Refs_Construct_GetCompositeElements(Refs_Construct self);

/**
  Get for ccp.lims.RefSampleComponent.Construct.constructStatus

The 
status of the construct e.g. empty, with target, ...
  @param  Refs_Construct self
  @returns   the result
**/
extern ApiString Refs_Construct_GetConstructStatus(Refs_Construct self);

/**
  Get for ccp.lims.RefSampleComponent.AbstractComponent.details

Detail 
field for comments.
  @param  Refs_Construct self
  @returns   the result
**/
extern ApiString Refs_Construct_GetDetails(Refs_Construct self);

/**
  Get for ccp.lims.RefSampleComponent.MolComponent.empiricalFormula

The 
molecular formula of the molComponent.
  @param  Refs_Construct self
  @returns   the result
**/
extern ApiString Refs_Construct_GetEmpiricalFormula(Refs_Construct self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Refs_Construct self
  @returns   the result
**/
extern ApiList Refs_Construct_GetFieldNames(Refs_Construct self);

/**
  Get for ccp.lims.RefSampleComponent.Construct.function

The Construct 
class is also used to describe vectors and so the function attribute can 
be used to indicate the function of the vector e.g. expression.
  @param  Refs_Construct self
  @returns   the result
**/
extern ApiString Refs_Construct_GetFunction(Refs_Construct self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Refs_Construct self
  @returns   the result
**/
extern ApiBoolean Refs_Construct_GetInConstructor(Refs_Construct self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Refs_Construct self
  @returns   the result
**/
extern ApiBoolean Refs_Construct_GetIsDeleted(Refs_Construct self);

/**
  Get for 
ccp.lims.RefSampleComponent.MolComponent.labeledMixture

LabeledMixture 
that describes MolComponent isotope labeling
  @param  Refs_Construct self
  @returns   the result
**/
extern Lmol_LabeledMixture Refs_Construct_GetLabeledMixture(Refs_Construct self);

/**
  Get for ccp.lims.RefSampleComponent.AbstractComponent.labels

child link 
to class Label
  @param  Refs_Construct self
  @returns   the result
**/
extern ApiSet Refs_Construct_GetLabels(Refs_Construct self);

/**
  Get for ccp.lims.RefSampleComponent.Construct.markerDetails

Detail 
field for marker information. Precise information should go to a 
MolCompFeature.
  @param  Refs_Construct self
  @returns   the result
**/
extern ApiString Refs_Construct_GetMarkerDetails(Refs_Construct self);

/**
  Get for ccp.lims.RefSampleComponent.MolComponent.molCompFeatures

child 
link to class MolCompFeature
  @param  Refs_Construct self
  @returns   the result
**/
extern ApiSet Refs_Construct_GetMolCompFeatures(Refs_Construct self);

/**
  Get for ccp.lims.RefSampleComponent.MolComponent.molType

Type of 
component, on the general lines of biopolymer/polymer/nonpolymer. See 
MolComponentType DataType for details
  @param  Refs_Construct self
  @returns   the result
**/
extern ApiString Refs_Construct_GetMolType(Refs_Construct self);

/**
  Get for ccp.lims.RefSampleComponent.MolComponent.molecularMass

The 
experimental molecular mass in dalton (Da).
  @param  Refs_Construct self
  @returns   the result
**/
extern ApiFloat Refs_Construct_GetMolecularMass(Refs_Construct self);

/**
  Get for ccp.lims.RefSampleComponent.MolComponent.molecule

The molecule 
used to describe the precise topology of the MolComponent.
  @param  Refs_Construct self
  @returns   the result
**/
extern Mole_Molecule Refs_Construct_GetMolecule(Refs_Construct self);

/**
  Get for ccp.lims.RefSampleComponent.AbstractComponent.name

The name of 
the component. Unique identifier.
  @param  Refs_Construct self
  @returns   the result
**/
extern ApiString Refs_Construct_GetName(Refs_Construct self);

/**
  Get for ccp.lims.RefSampleComponent.AbstractComponent.naturalSource

The 
natural source of the component.
  @param  Refs_Construct self
  @returns   the result
**/
extern Taxo_NaturalSource Refs_Construct_GetNaturalSource(Refs_Construct self);

/**
  Get for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The Target 
associated other MolComponent that define it
  @param  Refs_Construct self
  @returns   the result
**/
extern ApiSet Refs_Construct_GetNucTargets(Refs_Construct self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Refs_Construct self
  @returns   the result
**/
extern ApiString Refs_Construct_GetPackageName(Refs_Construct self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Refs_Construct self
  @returns   the result
**/
extern ApiString Refs_Construct_GetPackageShortName(Refs_Construct self);

/**
  Get for ccp.lims.RefSampleComponent.AbstractComponent.parent

link to 
parent object - synonym for refSampleComponentStore
  @param  Refs_Construct self
  @returns   the result
**/
extern Refs_RefSampleComponentStore Refs_Construct_GetParent(Refs_Construct self);

/**
  Get for ccp.lims.RefSampleComponent.Construct.promoterDetails

Detail 
field for promoter information. Precise information should go to a 
MolCompFeature.
  @param  Refs_Construct self
  @returns   the result
**/
extern ApiString Refs_Construct_GetPromoterDetails(Refs_Construct self);

/**
  Get for ccp.lims.RefSampleComponent.MolComponent.protTargets

The Target 
associated to the MolComponent that defines it
  @param  Refs_Construct self
  @returns   the result
**/
extern ApiSet Refs_Construct_GetProtTargets(Refs_Construct self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Refs_Construct self
  @returns   the result
**/
extern ApiString Refs_Construct_GetQualifiedName(Refs_Construct self);

/**
  Get for ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_Construct self
  @returns   the result
**/
extern ApiSet Refs_Construct_GetRefMolCompFeatures(Refs_Construct self);

/**
  Get for 
ccp.lims.RefSampleComponent.AbstractComponent.refSampleComponentStore

parent 
link
  @param  Refs_Construct self
  @returns   the result
**/
extern Refs_RefSampleComponentStore Refs_Construct_GetRefSampleComponentStore(Refs_Construct self);

/**
  Get for ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_Construct self
  @returns   the result
**/
extern ApiSet Refs_Construct_GetRelatedExpBlueprints(Refs_Construct self);

/**
  Get for ccp.lims.RefSampleComponent.Construct.resistanceDetails

Detail 
field for resistance information. Precise information should go to a 
MolCompFeature.
  @param  Refs_Construct self
  @returns   the result
**/
extern ApiString Refs_Construct_GetResistanceDetails(Refs_Construct self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Refs_Construct self
  @returns   the result
**/
extern Impl_MemopsRoot Refs_Construct_GetRoot(Refs_Construct self);

/**
  Get for ccp.lims.RefSampleComponent.MolComponent.seqDetails
  @param  Refs_Construct self
  @returns   the result
**/
extern ApiString Refs_Construct_GetSeqDetails(Refs_Construct self);

/**
  Get for ccp.lims.RefSampleComponent.MolComponent.seqString
  @param  Refs_Construct self
  @returns   the result
**/
extern ApiString Refs_Construct_GetSeqString(Refs_Construct self);

/**
  Get for ccp.lims.RefSampleComponent.Construct.sequenceType

The type of 
nucleic acid sequence in the construct. Note that to find all the DNA 
molecules it is necessary to search for DNA + cDNA and for RNA, RNA + 
mRNA + tRNA.
  @param  Refs_Construct self
  @returns   the result
**/
extern ApiString Refs_Construct_GetSequenceType(Refs_Construct self);

/**
  Get for 
ccp.lims.RefSampleComponent.MolComponent.specificLabelGroups

child link 
to class SpecificLabelGroup
  @param  Refs_Construct self
  @returns   the result
**/
extern ApiSet Refs_Construct_GetSpecificLabelGroups(Refs_Construct self);

/**
  Get for ccp.lims.RefSampleComponent.AbstractComponent.synonyms

The 
synonyms of the component.
  @param  Refs_Construct self
  @returns   the result
**/
extern ApiList Refs_Construct_GetSynonyms(Refs_Construct self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Refs_Construct self
  @returns   the result
**/
extern Impl_TopObject Refs_Construct_GetTopObject(Refs_Construct self);

/**
  Constructor for ccp.lims.RefSampleComponent.Construct
  @param  Refs_RefSampleComponentStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Refs_Construct Refs_Construct_Init(Refs_RefSampleComponentStore parent, ApiMap attrlinks);

/**
  Constructor for ccp.lims.RefSampleComponent.Construct
  @param  Refs_RefSampleComponentStore parent
  @param  char * constructStatus
  @param  char * name
  @returns  the new object
**/
extern Refs_Construct Refs_Construct_Init_reqd(Refs_RefSampleComponentStore parent, char * constructStatus, char * name);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_Construct self
  @param  Impl_ApplicationData value
**/
extern void *Refs_Construct_RemoveApplicationData(Refs_Construct self, Impl_ApplicationData value);

/**
  Remove for ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_Construct self
  @param  Expb_BlueprintComponent value
**/
extern void *Refs_Construct_RemoveBlueprintComponent(Refs_Construct self, Expb_BlueprintComponent value);

/**
  Remove for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_Construct self
  @param  Clas_SampleComponentCategory value
**/
extern void *Refs_Construct_RemoveCategory(Refs_Construct self, Clas_SampleComponentCategory value);

/**
  Remove for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The 
Target associated other MolComponent that define it
  @param  Refs_Construct self
  @param  Targ_Target value
**/
extern void *Refs_Construct_RemoveNucTarget(Refs_Construct self, Targ_Target value);

/**
  Remove for ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_Construct self
  @param  Refs_MolCompFeature value
**/
extern void *Refs_Construct_RemoveRefMolCompFeature(Refs_Construct self, Refs_MolCompFeature value);

/**
  Remove for ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_Construct self
  @param  Expb_BlueprintComponent value
**/
extern void *Refs_Construct_RemoveRelatedExpBlueprint(Refs_Construct self, Expb_BlueprintComponent value);

/**
  Remove for ccp.lims.RefSampleComponent.AbstractComponent.synonyms

The 
synonyms of the component.
  @param  Refs_Construct self
  @param  ApiString value
**/
extern void *Refs_Construct_RemoveSynonym(Refs_Construct self, ApiString value);

/**
  SetAttr for ccp.lims.RefSampleComponent.Construct
  @param  Refs_Construct self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Refs_Construct_Set(Refs_Construct self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Refs_Construct self
  @param  Acco_AccessObject value
**/
extern void *Refs_Construct_SetAccess(Refs_Construct self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_Construct self
  @param  ApiList values
**/
extern void *Refs_Construct_SetApplicationData(Refs_Construct self, ApiList values);

/**
  Set for ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_Construct self
  @param  ApiSet values
**/
extern void *Refs_Construct_SetBlueprintComponents(Refs_Construct self, ApiSet values);

/**
  Set for ccp.lims.RefSampleComponent.MolComponent.casNum

CAS registry 
number (http://www.cas.org/EO/regsys.html).
  @param  Refs_Construct self
  @param  ApiString value
**/
extern void *Refs_Construct_SetCasNum(Refs_Construct self, ApiString value);

/**
  Set for ccp.lims.RefSampleComponent.AbstractComponent.categories

List 
of category associated to a component.
  @param  Refs_Construct self
  @param  ApiSet values
**/
extern void *Refs_Construct_SetCategories(Refs_Construct self, ApiSet values);

/**
  Set for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_Construct self
  @param  ApiSet values
**/
extern void *Refs_Construct_SetCompositeElements(Refs_Construct self, ApiSet values);

/**
  Set for ccp.lims.RefSampleComponent.Construct.constructStatus

The 
status of the construct e.g. empty, with target, ...
  @param  Refs_Construct self
  @param  ApiString value
**/
extern void *Refs_Construct_SetConstructStatus(Refs_Construct self, ApiString value);

/**
  Set for ccp.lims.RefSampleComponent.AbstractComponent.details

Detail 
field for comments.
  @param  Refs_Construct self
  @param  ApiString value
**/
extern void *Refs_Construct_SetDetails(Refs_Construct self, ApiString value);

/**
  Set for ccp.lims.RefSampleComponent.MolComponent.empiricalFormula

The 
molecular formula of the molComponent.
  @param  Refs_Construct self
  @param  ApiString value
**/
extern void *Refs_Construct_SetEmpiricalFormula(Refs_Construct self, ApiString value);

/**
  Set for ccp.lims.RefSampleComponent.Construct.function

The Construct 
class is also used to describe vectors and so the function attribute can 
be used to indicate the function of the vector e.g. expression.
  @param  Refs_Construct self
  @param  ApiString value
**/
extern void *Refs_Construct_SetFunction(Refs_Construct self, ApiString value);

/**
  Set for 
ccp.lims.RefSampleComponent.MolComponent.labeledMixture

LabeledMixture 
that describes MolComponent isotope labeling
  @param  Refs_Construct self
  @param  Lmol_LabeledMixture value
**/
extern void *Refs_Construct_SetLabeledMixture(Refs_Construct self, Lmol_LabeledMixture value);

/**
  Set for ccp.lims.RefSampleComponent.Construct.markerDetails

Detail 
field for marker information. Precise information should go to a 
MolCompFeature.
  @param  Refs_Construct self
  @param  ApiString value
**/
extern void *Refs_Construct_SetMarkerDetails(Refs_Construct self, ApiString value);

/**
  Set for ccp.lims.RefSampleComponent.MolComponent.molType

Type of 
component, on the general lines of biopolymer/polymer/nonpolymer. See 
MolComponentType DataType for details
  @param  Refs_Construct self
  @param  ApiString value
**/
extern void *Refs_Construct_SetMolType(Refs_Construct self, ApiString value);

/**
  Set for ccp.lims.RefSampleComponent.MolComponent.molecularMass

The 
experimental molecular mass in dalton (Da).
  @param  Refs_Construct self
  @param  ApiFloat value
**/
extern void *Refs_Construct_SetMolecularMass(Refs_Construct self, ApiFloat value);

/**
  Set for ccp.lims.RefSampleComponent.MolComponent.molecule

The molecule 
used to describe the precise topology of the MolComponent.
  @param  Refs_Construct self
  @param  Mole_Molecule value
**/
extern void *Refs_Construct_SetMolecule(Refs_Construct self, Mole_Molecule value);

/**
  Set for ccp.lims.RefSampleComponent.AbstractComponent.name

The name of 
the component. Unique identifier.
  @param  Refs_Construct self
  @param  ApiString value
**/
extern void *Refs_Construct_SetName(Refs_Construct self, ApiString value);

/**
  Set for ccp.lims.RefSampleComponent.AbstractComponent.naturalSource

The 
natural source of the component.
  @param  Refs_Construct self
  @param  Taxo_NaturalSource value
**/
extern void *Refs_Construct_SetNaturalSource(Refs_Construct self, Taxo_NaturalSource value);

/**
  Set for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The Target 
associated other MolComponent that define it
  @param  Refs_Construct self
  @param  ApiSet values
**/
extern void *Refs_Construct_SetNucTargets(Refs_Construct self, ApiSet values);

/**
  Set for ccp.lims.RefSampleComponent.Construct.promoterDetails

Detail 
field for promoter information. Precise information should go to a 
MolCompFeature.
  @param  Refs_Construct self
  @param  ApiString value
**/
extern void *Refs_Construct_SetPromoterDetails(Refs_Construct self, ApiString value);

/**
  Set for ccp.lims.RefSampleComponent.MolComponent.protTargets

The Target 
associated to the MolComponent that defines it
  @param  Refs_Construct self
  @param  ApiSet values
**/
extern void *Refs_Construct_SetProtTargets(Refs_Construct self, ApiSet values);

/**
  Set for ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_Construct self
  @param  ApiSet values
**/
extern void *Refs_Construct_SetRefMolCompFeatures(Refs_Construct self, ApiSet values);

/**
  Set for ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_Construct self
  @param  ApiSet values
**/
extern void *Refs_Construct_SetRelatedExpBlueprints(Refs_Construct self, ApiSet values);

/**
  Set for ccp.lims.RefSampleComponent.Construct.resistanceDetails

Detail 
field for resistance information. Precise information should go to a 
MolCompFeature.
  @param  Refs_Construct self
  @param  ApiString value
**/
extern void *Refs_Construct_SetResistanceDetails(Refs_Construct self, ApiString value);

/**
  Set for ccp.lims.RefSampleComponent.MolComponent.seqDetails
  @param  Refs_Construct self
  @param  ApiString value
**/
extern void *Refs_Construct_SetSeqDetails(Refs_Construct self, ApiString value);

/**
  Set for ccp.lims.RefSampleComponent.MolComponent.seqString
  @param  Refs_Construct self
  @param  ApiString value
**/
extern void *Refs_Construct_SetSeqString(Refs_Construct self, ApiString value);

/**
  Set for ccp.lims.RefSampleComponent.Construct.sequenceType

The type of 
nucleic acid sequence in the construct. Note that to find all the DNA 
molecules it is necessary to search for DNA + cDNA and for RNA, RNA + 
mRNA + tRNA.
  @param  Refs_Construct self
  @param  ApiString value
**/
extern void *Refs_Construct_SetSequenceType(Refs_Construct self, ApiString value);

/**
  Set for ccp.lims.RefSampleComponent.AbstractComponent.synonyms

The 
synonyms of the component.
  @param  Refs_Construct self
  @param  ApiList values
**/
extern void *Refs_Construct_SetSynonyms(Refs_Construct self, ApiList values);

/**
  Sorted for ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_Construct self
  @returns   the result
**/
extern ApiList Refs_Construct_SortedBlueprintComponents(Refs_Construct self);

/**
  Sorted for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_Construct self
  @returns   the result
**/
extern ApiList Refs_Construct_SortedCategories(Refs_Construct self);

/**
  Sorted for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_Construct self
  @returns   the result
**/
extern ApiList Refs_Construct_SortedComponentDbRefs(Refs_Construct self);

/**
  Sorted for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_Construct self
  @returns   the result
**/
extern ApiList Refs_Construct_SortedCompositeElements(Refs_Construct self);

/**
  Sorted for ccp.lims.RefSampleComponent.AbstractComponent.labels

child 
link to class Label
  @param  Refs_Construct self
  @returns   the result
**/
extern ApiList Refs_Construct_SortedLabels(Refs_Construct self);

/**
  Sorted for 
ccp.lims.RefSampleComponent.MolComponent.molCompFeatures

child link to 
class MolCompFeature
  @param  Refs_Construct self
  @returns   the result
**/
extern ApiList Refs_Construct_SortedMolCompFeatures(Refs_Construct self);

/**
  Sorted for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The 
Target associated other MolComponent that define it
  @param  Refs_Construct self
  @returns   the result
**/
extern ApiList Refs_Construct_SortedNucTargets(Refs_Construct self);

/**
  Sorted for ccp.lims.RefSampleComponent.MolComponent.protTargets

The 
Target associated to the MolComponent that defines it
  @param  Refs_Construct self
  @returns   the result
**/
extern ApiList Refs_Construct_SortedProtTargets(Refs_Construct self);

/**
  Sorted for ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_Construct self
  @returns   the result
**/
extern ApiList Refs_Construct_SortedRefMolCompFeatures(Refs_Construct self);

/**
  Sorted for ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_Construct self
  @returns   the result
**/
extern ApiList Refs_Construct_SortedRelatedExpBlueprints(Refs_Construct self);

/**
  Sorted for 
ccp.lims.RefSampleComponent.MolComponent.specificLabelGroups

child link 
to class SpecificLabelGroup
  @param  Refs_Construct self
  @returns   the result
**/
extern ApiList Refs_Construct_SortedSpecificLabelGroups(Refs_Construct self);

#endif /* __incl__ccp_api_lims_RefSampleComponent_Construct_h__ */
