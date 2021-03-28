
#ifndef __incl__ccp_api_lims_RefSampleComponent_MolComponent_h__
#define __incl__ccp_api_lims_RefSampleComponent_MolComponent_h__

#include "ccp.h"

/*
  One type of component. A Molecular component (MolComponent) represents a pure component of known melecular structure. This includes most chemicals, proteins, DNA, RNA, DNA/RNA and also enzymes, constructs and primers. Restriction enzymes, primers and constructs are subtypes of MolCOmponent with additional features recorded. NaCl is a MolComponent, so is lysozyme.
*/

/* package ccp.api.lims.RefSampleComponent */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_MolComponent self
  @param  Impl_ApplicationData value
**/
extern void *Refs_MolComponent_AddApplicationData(Refs_MolComponent self, Impl_ApplicationData value);

/**
  Add for ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_MolComponent self
  @param  Expb_BlueprintComponent value
**/
extern void *Refs_MolComponent_AddBlueprintComponent(Refs_MolComponent self, Expb_BlueprintComponent value);

/**
  Add for ccp.lims.RefSampleComponent.AbstractComponent.categories

List 
of category associated to a component.
  @param  Refs_MolComponent self
  @param  Clas_SampleComponentCategory value
**/
extern void *Refs_MolComponent_AddCategory(Refs_MolComponent self, Clas_SampleComponentCategory value);

/**
  Add for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The Target 
associated other MolComponent that define it
  @param  Refs_MolComponent self
  @param  Targ_Target value
**/
extern void *Refs_MolComponent_AddNucTarget(Refs_MolComponent self, Targ_Target value);

/**
  Add for ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_MolComponent self
  @param  Refs_MolCompFeature value
**/
extern void *Refs_MolComponent_AddRefMolCompFeature(Refs_MolComponent self, Refs_MolCompFeature value);

/**
  Add for ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_MolComponent self
  @param  Expb_BlueprintComponent value
**/
extern void *Refs_MolComponent_AddRelatedExpBlueprint(Refs_MolComponent self, Expb_BlueprintComponent value);

/**
  Add for ccp.lims.RefSampleComponent.AbstractComponent.synonyms

The 
synonyms of the component.
  @param  Refs_MolComponent self
  @param  ApiString value
**/
extern void *Refs_MolComponent_AddSynonym(Refs_MolComponent self, ApiString value);

/**
  CheckAllValid for ccp.lims.RefSampleComponent.MolComponent
  @param  Refs_MolComponent self
  @param  ApiBoolean complete
**/
extern void *Refs_MolComponent_CheckAllValid(Refs_MolComponent self, ApiBoolean complete);

/**
  CheckValid for ccp.lims.RefSampleComponent.MolComponent
  @param  Refs_MolComponent self
  @param  ApiBoolean complete
**/
extern void *Refs_MolComponent_CheckValid(Refs_MolComponent self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_MolComponent self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Refs_MolComponent_FindAllApplicationData(Refs_MolComponent self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_MolComponent self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Refs_MolComponent_FindAllApplicationData_keyval0(Refs_MolComponent self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_MolComponent self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Refs_MolComponent_FindAllApplicationData_keyval1(Refs_MolComponent self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_MolComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Refs_MolComponent_FindAllApplicationData_keyval2(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_MolComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Refs_MolComponent_FindAllApplicationData_keyval3(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_MolComponent self
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
extern ApiList Refs_MolComponent_FindAllApplicationData_keyval4(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_MolComponent self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_MolComponent_FindAllBlueprintComponents(Refs_MolComponent self, ApiMap conditions);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_MolComponent self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_MolComponent_FindAllBlueprintComponents_keyval0(Refs_MolComponent self);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_MolComponent self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_MolComponent_FindAllBlueprintComponents_keyval1(Refs_MolComponent self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_MolComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_MolComponent_FindAllBlueprintComponents_keyval2(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_MolComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_MolComponent_FindAllBlueprintComponents_keyval3(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_MolComponent self
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
extern ApiSet Refs_MolComponent_FindAllBlueprintComponents_keyval4(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_MolComponent self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_MolComponent_FindAllCategories(Refs_MolComponent self, ApiMap conditions);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_MolComponent self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_MolComponent_FindAllCategories_keyval0(Refs_MolComponent self);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_MolComponent self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_MolComponent_FindAllCategories_keyval1(Refs_MolComponent self, char * key, ApiObject value);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_MolComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_MolComponent_FindAllCategories_keyval2(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_MolComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_MolComponent_FindAllCategories_keyval3(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_MolComponent self
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
extern ApiSet Refs_MolComponent_FindAllCategories_keyval4(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_MolComponent self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_MolComponent_FindAllComponentDbRefs(Refs_MolComponent self, ApiMap conditions);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_MolComponent self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_MolComponent_FindAllComponentDbRefs_keyval0(Refs_MolComponent self);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_MolComponent self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_MolComponent_FindAllComponentDbRefs_keyval1(Refs_MolComponent self, char * key, ApiObject value);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_MolComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_MolComponent_FindAllComponentDbRefs_keyval2(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_MolComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_MolComponent_FindAllComponentDbRefs_keyval3(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_MolComponent self
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
extern ApiSet Refs_MolComponent_FindAllComponentDbRefs_keyval4(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_MolComponent self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_MolComponent_FindAllCompositeElements(Refs_MolComponent self, ApiMap conditions);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_MolComponent self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_MolComponent_FindAllCompositeElements_keyval0(Refs_MolComponent self);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_MolComponent self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_MolComponent_FindAllCompositeElements_keyval1(Refs_MolComponent self, char * key, ApiObject value);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_MolComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_MolComponent_FindAllCompositeElements_keyval2(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_MolComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_MolComponent_FindAllCompositeElements_keyval3(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_MolComponent self
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
extern ApiSet Refs_MolComponent_FindAllCompositeElements_keyval4(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.RefSampleComponent.AbstractComponent.labels

child 
link to class Label
  @param  Refs_MolComponent self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_MolComponent_FindAllLabels(Refs_MolComponent self, ApiMap conditions);

/**
  FindAll for ccp.lims.RefSampleComponent.AbstractComponent.labels

child 
link to class Label
  @param  Refs_MolComponent self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_MolComponent_FindAllLabels_keyval0(Refs_MolComponent self);

/**
  FindAll for ccp.lims.RefSampleComponent.AbstractComponent.labels

child 
link to class Label
  @param  Refs_MolComponent self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_MolComponent_FindAllLabels_keyval1(Refs_MolComponent self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.RefSampleComponent.AbstractComponent.labels

child 
link to class Label
  @param  Refs_MolComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_MolComponent_FindAllLabels_keyval2(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.RefSampleComponent.AbstractComponent.labels

child 
link to class Label
  @param  Refs_MolComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_MolComponent_FindAllLabels_keyval3(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.RefSampleComponent.AbstractComponent.labels

child 
link to class Label
  @param  Refs_MolComponent self
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
extern ApiSet Refs_MolComponent_FindAllLabels_keyval4(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.molCompFeatures

child link to 
class MolCompFeature
  @param  Refs_MolComponent self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_MolComponent_FindAllMolCompFeatures(Refs_MolComponent self, ApiMap conditions);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.molCompFeatures

child link to 
class MolCompFeature
  @param  Refs_MolComponent self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_MolComponent_FindAllMolCompFeatures_keyval0(Refs_MolComponent self);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.molCompFeatures

child link to 
class MolCompFeature
  @param  Refs_MolComponent self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_MolComponent_FindAllMolCompFeatures_keyval1(Refs_MolComponent self, char * key, ApiObject value);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.molCompFeatures

child link to 
class MolCompFeature
  @param  Refs_MolComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_MolComponent_FindAllMolCompFeatures_keyval2(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.molCompFeatures

child link to 
class MolCompFeature
  @param  Refs_MolComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_MolComponent_FindAllMolCompFeatures_keyval3(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.molCompFeatures

child link to 
class MolCompFeature
  @param  Refs_MolComponent self
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
extern ApiSet Refs_MolComponent_FindAllMolCompFeatures_keyval4(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The 
Target associated other MolComponent that define it
  @param  Refs_MolComponent self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_MolComponent_FindAllNucTargets(Refs_MolComponent self, ApiMap conditions);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The 
Target associated other MolComponent that define it
  @param  Refs_MolComponent self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_MolComponent_FindAllNucTargets_keyval0(Refs_MolComponent self);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The 
Target associated other MolComponent that define it
  @param  Refs_MolComponent self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_MolComponent_FindAllNucTargets_keyval1(Refs_MolComponent self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The 
Target associated other MolComponent that define it
  @param  Refs_MolComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_MolComponent_FindAllNucTargets_keyval2(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The 
Target associated other MolComponent that define it
  @param  Refs_MolComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_MolComponent_FindAllNucTargets_keyval3(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The 
Target associated other MolComponent that define it
  @param  Refs_MolComponent self
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
extern ApiSet Refs_MolComponent_FindAllNucTargets_keyval4(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.protTargets

The 
Target associated to the MolComponent that defines it
  @param  Refs_MolComponent self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_MolComponent_FindAllProtTargets(Refs_MolComponent self, ApiMap conditions);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.protTargets

The 
Target associated to the MolComponent that defines it
  @param  Refs_MolComponent self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_MolComponent_FindAllProtTargets_keyval0(Refs_MolComponent self);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.protTargets

The 
Target associated to the MolComponent that defines it
  @param  Refs_MolComponent self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_MolComponent_FindAllProtTargets_keyval1(Refs_MolComponent self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.protTargets

The 
Target associated to the MolComponent that defines it
  @param  Refs_MolComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_MolComponent_FindAllProtTargets_keyval2(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.protTargets

The 
Target associated to the MolComponent that defines it
  @param  Refs_MolComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_MolComponent_FindAllProtTargets_keyval3(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.protTargets

The 
Target associated to the MolComponent that defines it
  @param  Refs_MolComponent self
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
extern ApiSet Refs_MolComponent_FindAllProtTargets_keyval4(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_MolComponent self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_MolComponent_FindAllRefMolCompFeatures(Refs_MolComponent self, ApiMap conditions);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_MolComponent self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_MolComponent_FindAllRefMolCompFeatures_keyval0(Refs_MolComponent self);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_MolComponent self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_MolComponent_FindAllRefMolCompFeatures_keyval1(Refs_MolComponent self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_MolComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_MolComponent_FindAllRefMolCompFeatures_keyval2(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_MolComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_MolComponent_FindAllRefMolCompFeatures_keyval3(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_MolComponent self
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
extern ApiSet Refs_MolComponent_FindAllRefMolCompFeatures_keyval4(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_MolComponent self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_MolComponent_FindAllRelatedExpBlueprints(Refs_MolComponent self, ApiMap conditions);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_MolComponent self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_MolComponent_FindAllRelatedExpBlueprints_keyval0(Refs_MolComponent self);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_MolComponent self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_MolComponent_FindAllRelatedExpBlueprints_keyval1(Refs_MolComponent self, char * key, ApiObject value);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_MolComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_MolComponent_FindAllRelatedExpBlueprints_keyval2(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_MolComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_MolComponent_FindAllRelatedExpBlueprints_keyval3(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_MolComponent self
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
extern ApiSet Refs_MolComponent_FindAllRelatedExpBlueprints_keyval4(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.specificLabelGroups

child link 
to class SpecificLabelGroup
  @param  Refs_MolComponent self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_MolComponent_FindAllSpecificLabelGroups(Refs_MolComponent self, ApiMap conditions);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.specificLabelGroups

child link 
to class SpecificLabelGroup
  @param  Refs_MolComponent self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_MolComponent_FindAllSpecificLabelGroups_keyval0(Refs_MolComponent self);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.specificLabelGroups

child link 
to class SpecificLabelGroup
  @param  Refs_MolComponent self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_MolComponent_FindAllSpecificLabelGroups_keyval1(Refs_MolComponent self, char * key, ApiObject value);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.specificLabelGroups

child link 
to class SpecificLabelGroup
  @param  Refs_MolComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_MolComponent_FindAllSpecificLabelGroups_keyval2(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.specificLabelGroups

child link 
to class SpecificLabelGroup
  @param  Refs_MolComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_MolComponent_FindAllSpecificLabelGroups_keyval3(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.lims.RefSampleComponent.MolComponent.specificLabelGroups

child link 
to class SpecificLabelGroup
  @param  Refs_MolComponent self
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
extern ApiSet Refs_MolComponent_FindAllSpecificLabelGroups_keyval4(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_MolComponent self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Refs_MolComponent_FindFirstApplicationData(Refs_MolComponent self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_MolComponent self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Refs_MolComponent_FindFirstApplicationData_keyval0(Refs_MolComponent self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_MolComponent self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Refs_MolComponent_FindFirstApplicationData_keyval1(Refs_MolComponent self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_MolComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Refs_MolComponent_FindFirstApplicationData_keyval2(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_MolComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Refs_MolComponent_FindFirstApplicationData_keyval3(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_MolComponent self
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
extern Impl_ApplicationData Refs_MolComponent_FindFirstApplicationData_keyval4(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_MolComponent self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Expb_BlueprintComponent Refs_MolComponent_FindFirstBlueprintComponent(Refs_MolComponent self, ApiMap conditions);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_MolComponent self
  @returns  the first value that satisfies the conditions 
**/
extern Expb_BlueprintComponent Refs_MolComponent_FindFirstBlueprintComponent_keyval0(Refs_MolComponent self);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_MolComponent self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Expb_BlueprintComponent Refs_MolComponent_FindFirstBlueprintComponent_keyval1(Refs_MolComponent self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_MolComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Expb_BlueprintComponent Refs_MolComponent_FindFirstBlueprintComponent_keyval2(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_MolComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Expb_BlueprintComponent Refs_MolComponent_FindFirstBlueprintComponent_keyval3(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_MolComponent self
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
extern Expb_BlueprintComponent Refs_MolComponent_FindFirstBlueprintComponent_keyval4(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_MolComponent self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Clas_SampleComponentCategory Refs_MolComponent_FindFirstCategory(Refs_MolComponent self, ApiMap conditions);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_MolComponent self
  @returns  the first value that satisfies the conditions 
**/
extern Clas_SampleComponentCategory Refs_MolComponent_FindFirstCategory_keyval0(Refs_MolComponent self);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_MolComponent self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Clas_SampleComponentCategory Refs_MolComponent_FindFirstCategory_keyval1(Refs_MolComponent self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_MolComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Clas_SampleComponentCategory Refs_MolComponent_FindFirstCategory_keyval2(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_MolComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Clas_SampleComponentCategory Refs_MolComponent_FindFirstCategory_keyval3(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_MolComponent self
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
extern Clas_SampleComponentCategory Refs_MolComponent_FindFirstCategory_keyval4(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_MolComponent self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Refs_ComponentDbRef Refs_MolComponent_FindFirstComponentDbRef(Refs_MolComponent self, ApiMap conditions);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_MolComponent self
  @returns  the first value that satisfies the conditions 
**/
extern Refs_ComponentDbRef Refs_MolComponent_FindFirstComponentDbRef_keyval0(Refs_MolComponent self);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_MolComponent self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Refs_ComponentDbRef Refs_MolComponent_FindFirstComponentDbRef_keyval1(Refs_MolComponent self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_MolComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Refs_ComponentDbRef Refs_MolComponent_FindFirstComponentDbRef_keyval2(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_MolComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Refs_ComponentDbRef Refs_MolComponent_FindFirstComponentDbRef_keyval3(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_MolComponent self
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
extern Refs_ComponentDbRef Refs_MolComponent_FindFirstComponentDbRef_keyval4(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_MolComponent self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Refs_CompositeElement Refs_MolComponent_FindFirstCompositeElement(Refs_MolComponent self, ApiMap conditions);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_MolComponent self
  @returns  the first value that satisfies the conditions 
**/
extern Refs_CompositeElement Refs_MolComponent_FindFirstCompositeElement_keyval0(Refs_MolComponent self);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_MolComponent self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Refs_CompositeElement Refs_MolComponent_FindFirstCompositeElement_keyval1(Refs_MolComponent self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_MolComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Refs_CompositeElement Refs_MolComponent_FindFirstCompositeElement_keyval2(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_MolComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Refs_CompositeElement Refs_MolComponent_FindFirstCompositeElement_keyval3(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_MolComponent self
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
extern Refs_CompositeElement Refs_MolComponent_FindFirstCompositeElement_keyval4(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.labels

child link to 
class Label
  @param  Refs_MolComponent self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Refs_Label Refs_MolComponent_FindFirstLabel(Refs_MolComponent self, ApiMap conditions);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.labels

child link to 
class Label
  @param  Refs_MolComponent self
  @returns  the first value that satisfies the conditions 
**/
extern Refs_Label Refs_MolComponent_FindFirstLabel_keyval0(Refs_MolComponent self);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.labels

child link to 
class Label
  @param  Refs_MolComponent self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Refs_Label Refs_MolComponent_FindFirstLabel_keyval1(Refs_MolComponent self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.labels

child link to 
class Label
  @param  Refs_MolComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Refs_Label Refs_MolComponent_FindFirstLabel_keyval2(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.labels

child link to 
class Label
  @param  Refs_MolComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Refs_Label Refs_MolComponent_FindFirstLabel_keyval3(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.labels

child link to 
class Label
  @param  Refs_MolComponent self
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
extern Refs_Label Refs_MolComponent_FindFirstLabel_keyval4(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.molCompFeatures

child link to 
class MolCompFeature
  @param  Refs_MolComponent self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Refs_MolCompFeature Refs_MolComponent_FindFirstMolCompFeature(Refs_MolComponent self, ApiMap conditions);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.molCompFeatures

child link to 
class MolCompFeature
  @param  Refs_MolComponent self
  @returns  the first value that satisfies the conditions 
**/
extern Refs_MolCompFeature Refs_MolComponent_FindFirstMolCompFeature_keyval0(Refs_MolComponent self);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.molCompFeatures

child link to 
class MolCompFeature
  @param  Refs_MolComponent self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Refs_MolCompFeature Refs_MolComponent_FindFirstMolCompFeature_keyval1(Refs_MolComponent self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.molCompFeatures

child link to 
class MolCompFeature
  @param  Refs_MolComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Refs_MolCompFeature Refs_MolComponent_FindFirstMolCompFeature_keyval2(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.molCompFeatures

child link to 
class MolCompFeature
  @param  Refs_MolComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Refs_MolCompFeature Refs_MolComponent_FindFirstMolCompFeature_keyval3(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.molCompFeatures

child link to 
class MolCompFeature
  @param  Refs_MolComponent self
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
extern Refs_MolCompFeature Refs_MolComponent_FindFirstMolCompFeature_keyval4(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The 
Target associated other MolComponent that define it
  @param  Refs_MolComponent self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Refs_MolComponent_FindFirstNucTarget(Refs_MolComponent self, ApiMap conditions);

/**
  FindFirst for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The 
Target associated other MolComponent that define it
  @param  Refs_MolComponent self
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Refs_MolComponent_FindFirstNucTarget_keyval0(Refs_MolComponent self);

/**
  FindFirst for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The 
Target associated other MolComponent that define it
  @param  Refs_MolComponent self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Refs_MolComponent_FindFirstNucTarget_keyval1(Refs_MolComponent self, char * key, ApiObject value);

/**
  FindFirst for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The 
Target associated other MolComponent that define it
  @param  Refs_MolComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Refs_MolComponent_FindFirstNucTarget_keyval2(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The 
Target associated other MolComponent that define it
  @param  Refs_MolComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Refs_MolComponent_FindFirstNucTarget_keyval3(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The 
Target associated other MolComponent that define it
  @param  Refs_MolComponent self
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
extern Targ_Target Refs_MolComponent_FindFirstNucTarget_keyval4(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.lims.RefSampleComponent.MolComponent.protTargets

The 
Target associated to the MolComponent that defines it
  @param  Refs_MolComponent self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Refs_MolComponent_FindFirstProtTarget(Refs_MolComponent self, ApiMap conditions);

/**
  FindFirst for ccp.lims.RefSampleComponent.MolComponent.protTargets

The 
Target associated to the MolComponent that defines it
  @param  Refs_MolComponent self
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Refs_MolComponent_FindFirstProtTarget_keyval0(Refs_MolComponent self);

/**
  FindFirst for ccp.lims.RefSampleComponent.MolComponent.protTargets

The 
Target associated to the MolComponent that defines it
  @param  Refs_MolComponent self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Refs_MolComponent_FindFirstProtTarget_keyval1(Refs_MolComponent self, char * key, ApiObject value);

/**
  FindFirst for ccp.lims.RefSampleComponent.MolComponent.protTargets

The 
Target associated to the MolComponent that defines it
  @param  Refs_MolComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Refs_MolComponent_FindFirstProtTarget_keyval2(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.lims.RefSampleComponent.MolComponent.protTargets

The 
Target associated to the MolComponent that defines it
  @param  Refs_MolComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Refs_MolComponent_FindFirstProtTarget_keyval3(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.lims.RefSampleComponent.MolComponent.protTargets

The 
Target associated to the MolComponent that defines it
  @param  Refs_MolComponent self
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
extern Targ_Target Refs_MolComponent_FindFirstProtTarget_keyval4(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_MolComponent self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Refs_MolCompFeature Refs_MolComponent_FindFirstRefMolCompFeature(Refs_MolComponent self, ApiMap conditions);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_MolComponent self
  @returns  the first value that satisfies the conditions 
**/
extern Refs_MolCompFeature Refs_MolComponent_FindFirstRefMolCompFeature_keyval0(Refs_MolComponent self);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_MolComponent self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Refs_MolCompFeature Refs_MolComponent_FindFirstRefMolCompFeature_keyval1(Refs_MolComponent self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_MolComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Refs_MolCompFeature Refs_MolComponent_FindFirstRefMolCompFeature_keyval2(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_MolComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Refs_MolCompFeature Refs_MolComponent_FindFirstRefMolCompFeature_keyval3(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_MolComponent self
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
extern Refs_MolCompFeature Refs_MolComponent_FindFirstRefMolCompFeature_keyval4(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_MolComponent self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Expb_BlueprintComponent Refs_MolComponent_FindFirstRelatedExpBlueprint(Refs_MolComponent self, ApiMap conditions);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_MolComponent self
  @returns  the first value that satisfies the conditions 
**/
extern Expb_BlueprintComponent Refs_MolComponent_FindFirstRelatedExpBlueprint_keyval0(Refs_MolComponent self);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_MolComponent self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Expb_BlueprintComponent Refs_MolComponent_FindFirstRelatedExpBlueprint_keyval1(Refs_MolComponent self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_MolComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Expb_BlueprintComponent Refs_MolComponent_FindFirstRelatedExpBlueprint_keyval2(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_MolComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Expb_BlueprintComponent Refs_MolComponent_FindFirstRelatedExpBlueprint_keyval3(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_MolComponent self
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
extern Expb_BlueprintComponent Refs_MolComponent_FindFirstRelatedExpBlueprint_keyval4(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.specificLabelGroups

child link 
to class SpecificLabelGroup
  @param  Refs_MolComponent self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Refs_SpecificLabelGroup Refs_MolComponent_FindFirstSpecificLabelGroup(Refs_MolComponent self, ApiMap conditions);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.specificLabelGroups

child link 
to class SpecificLabelGroup
  @param  Refs_MolComponent self
  @returns  the first value that satisfies the conditions 
**/
extern Refs_SpecificLabelGroup Refs_MolComponent_FindFirstSpecificLabelGroup_keyval0(Refs_MolComponent self);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.specificLabelGroups

child link 
to class SpecificLabelGroup
  @param  Refs_MolComponent self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Refs_SpecificLabelGroup Refs_MolComponent_FindFirstSpecificLabelGroup_keyval1(Refs_MolComponent self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.specificLabelGroups

child link 
to class SpecificLabelGroup
  @param  Refs_MolComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Refs_SpecificLabelGroup Refs_MolComponent_FindFirstSpecificLabelGroup_keyval2(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.specificLabelGroups

child link 
to class SpecificLabelGroup
  @param  Refs_MolComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Refs_SpecificLabelGroup Refs_MolComponent_FindFirstSpecificLabelGroup_keyval3(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.MolComponent.specificLabelGroups

child link 
to class SpecificLabelGroup
  @param  Refs_MolComponent self
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
extern Refs_SpecificLabelGroup Refs_MolComponent_FindFirstSpecificLabelGroup_keyval4(Refs_MolComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.lims.RefSampleComponent.MolComponent
  @param  Refs_MolComponent self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Refs_MolComponent_Get(Refs_MolComponent self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Refs_MolComponent self
  @returns   the result
**/
extern Acco_AccessObject Refs_MolComponent_GetAccess(Refs_MolComponent self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Refs_MolComponent self
  @returns   the result
**/
extern Acco_AccessObject Refs_MolComponent_GetActiveAccess(Refs_MolComponent self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_MolComponent self
  @returns   the result
**/
extern ApiList Refs_MolComponent_GetApplicationData(Refs_MolComponent self);

/**
  Get for ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_MolComponent self
  @returns   the result
**/
extern ApiSet Refs_MolComponent_GetBlueprintComponents(Refs_MolComponent self);

/**
  GetByKey for ccp.lims.RefSampleComponent.MolComponent
  @param  Refs_MolComponent self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Refs_MolComponent Refs_MolComponent_GetByKey(Refs_MolComponent self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for ccp.lims.RefSampleComponent.MolComponent.casNum

CAS registry 
number (http://www.cas.org/EO/regsys.html).
  @param  Refs_MolComponent self
  @returns   the result
**/
extern ApiString Refs_MolComponent_GetCasNum(Refs_MolComponent self);

/**
  Get for ccp.lims.RefSampleComponent.AbstractComponent.categories

List 
of category associated to a component.
  @param  Refs_MolComponent self
  @returns   the result
**/
extern ApiSet Refs_MolComponent_GetCategories(Refs_MolComponent self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Refs_MolComponent self
  @returns   the result
**/
extern ApiString Refs_MolComponent_GetClassName(Refs_MolComponent self);

/**
  Get for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_MolComponent self
  @returns   the result
**/
extern ApiSet Refs_MolComponent_GetComponentDbRefs(Refs_MolComponent self);

/**
  Get for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_MolComponent self
  @returns   the result
**/
extern ApiSet Refs_MolComponent_GetCompositeElements(Refs_MolComponent self);

/**
  Get for ccp.lims.RefSampleComponent.AbstractComponent.details

Detail 
field for comments.
  @param  Refs_MolComponent self
  @returns   the result
**/
extern ApiString Refs_MolComponent_GetDetails(Refs_MolComponent self);

/**
  Get for ccp.lims.RefSampleComponent.MolComponent.empiricalFormula

The 
molecular formula of the molComponent.
  @param  Refs_MolComponent self
  @returns   the result
**/
extern ApiString Refs_MolComponent_GetEmpiricalFormula(Refs_MolComponent self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Refs_MolComponent self
  @returns   the result
**/
extern ApiList Refs_MolComponent_GetFieldNames(Refs_MolComponent self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Refs_MolComponent self
  @returns   the result
**/
extern ApiBoolean Refs_MolComponent_GetInConstructor(Refs_MolComponent self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Refs_MolComponent self
  @returns   the result
**/
extern ApiBoolean Refs_MolComponent_GetIsDeleted(Refs_MolComponent self);

/**
  Get for 
ccp.lims.RefSampleComponent.MolComponent.labeledMixture

LabeledMixture 
that describes MolComponent isotope labeling
  @param  Refs_MolComponent self
  @returns   the result
**/
extern Lmol_LabeledMixture Refs_MolComponent_GetLabeledMixture(Refs_MolComponent self);

/**
  Get for ccp.lims.RefSampleComponent.AbstractComponent.labels

child link 
to class Label
  @param  Refs_MolComponent self
  @returns   the result
**/
extern ApiSet Refs_MolComponent_GetLabels(Refs_MolComponent self);

/**
  Get for ccp.lims.RefSampleComponent.MolComponent.molCompFeatures

child 
link to class MolCompFeature
  @param  Refs_MolComponent self
  @returns   the result
**/
extern ApiSet Refs_MolComponent_GetMolCompFeatures(Refs_MolComponent self);

/**
  Get for ccp.lims.RefSampleComponent.MolComponent.molType

Type of 
component, on the general lines of biopolymer/polymer/nonpolymer. See 
MolComponentType DataType for details
  @param  Refs_MolComponent self
  @returns   the result
**/
extern ApiString Refs_MolComponent_GetMolType(Refs_MolComponent self);

/**
  Get for ccp.lims.RefSampleComponent.MolComponent.molecularMass

The 
experimental molecular mass in dalton (Da).
  @param  Refs_MolComponent self
  @returns   the result
**/
extern ApiFloat Refs_MolComponent_GetMolecularMass(Refs_MolComponent self);

/**
  Get for ccp.lims.RefSampleComponent.MolComponent.molecule

The molecule 
used to describe the precise topology of the MolComponent.
  @param  Refs_MolComponent self
  @returns   the result
**/
extern Mole_Molecule Refs_MolComponent_GetMolecule(Refs_MolComponent self);

/**
  Get for ccp.lims.RefSampleComponent.AbstractComponent.name

The name of 
the component. Unique identifier.
  @param  Refs_MolComponent self
  @returns   the result
**/
extern ApiString Refs_MolComponent_GetName(Refs_MolComponent self);

/**
  Get for ccp.lims.RefSampleComponent.AbstractComponent.naturalSource

The 
natural source of the component.
  @param  Refs_MolComponent self
  @returns   the result
**/
extern Taxo_NaturalSource Refs_MolComponent_GetNaturalSource(Refs_MolComponent self);

/**
  Get for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The Target 
associated other MolComponent that define it
  @param  Refs_MolComponent self
  @returns   the result
**/
extern ApiSet Refs_MolComponent_GetNucTargets(Refs_MolComponent self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Refs_MolComponent self
  @returns   the result
**/
extern ApiString Refs_MolComponent_GetPackageName(Refs_MolComponent self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Refs_MolComponent self
  @returns   the result
**/
extern ApiString Refs_MolComponent_GetPackageShortName(Refs_MolComponent self);

/**
  Get for ccp.lims.RefSampleComponent.AbstractComponent.parent

link to 
parent object - synonym for refSampleComponentStore
  @param  Refs_MolComponent self
  @returns   the result
**/
extern Refs_RefSampleComponentStore Refs_MolComponent_GetParent(Refs_MolComponent self);

/**
  Get for ccp.lims.RefSampleComponent.MolComponent.protTargets

The Target 
associated to the MolComponent that defines it
  @param  Refs_MolComponent self
  @returns   the result
**/
extern ApiSet Refs_MolComponent_GetProtTargets(Refs_MolComponent self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Refs_MolComponent self
  @returns   the result
**/
extern ApiString Refs_MolComponent_GetQualifiedName(Refs_MolComponent self);

/**
  Get for ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_MolComponent self
  @returns   the result
**/
extern ApiSet Refs_MolComponent_GetRefMolCompFeatures(Refs_MolComponent self);

/**
  Get for 
ccp.lims.RefSampleComponent.AbstractComponent.refSampleComponentStore

parent 
link
  @param  Refs_MolComponent self
  @returns   the result
**/
extern Refs_RefSampleComponentStore Refs_MolComponent_GetRefSampleComponentStore(Refs_MolComponent self);

/**
  Get for ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_MolComponent self
  @returns   the result
**/
extern ApiSet Refs_MolComponent_GetRelatedExpBlueprints(Refs_MolComponent self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Refs_MolComponent self
  @returns   the result
**/
extern Impl_MemopsRoot Refs_MolComponent_GetRoot(Refs_MolComponent self);

/**
  Get for ccp.lims.RefSampleComponent.MolComponent.seqDetails
  @param  Refs_MolComponent self
  @returns   the result
**/
extern ApiString Refs_MolComponent_GetSeqDetails(Refs_MolComponent self);

/**
  Get for ccp.lims.RefSampleComponent.MolComponent.seqString
  @param  Refs_MolComponent self
  @returns   the result
**/
extern ApiString Refs_MolComponent_GetSeqString(Refs_MolComponent self);

/**
  Get for 
ccp.lims.RefSampleComponent.MolComponent.specificLabelGroups

child link 
to class SpecificLabelGroup
  @param  Refs_MolComponent self
  @returns   the result
**/
extern ApiSet Refs_MolComponent_GetSpecificLabelGroups(Refs_MolComponent self);

/**
  Get for ccp.lims.RefSampleComponent.AbstractComponent.synonyms

The 
synonyms of the component.
  @param  Refs_MolComponent self
  @returns   the result
**/
extern ApiList Refs_MolComponent_GetSynonyms(Refs_MolComponent self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Refs_MolComponent self
  @returns   the result
**/
extern Impl_TopObject Refs_MolComponent_GetTopObject(Refs_MolComponent self);

/**
  Constructor for ccp.lims.RefSampleComponent.MolComponent
  @param  Refs_RefSampleComponentStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Refs_MolComponent Refs_MolComponent_Init(Refs_RefSampleComponentStore parent, ApiMap attrlinks);

/**
  Constructor for ccp.lims.RefSampleComponent.MolComponent
  @param  Refs_RefSampleComponentStore parent
  @param  char * name
  @returns  the new object
**/
extern Refs_MolComponent Refs_MolComponent_Init_reqd(Refs_RefSampleComponentStore parent, char * name);

/**
  Factory function to create ccp.lims.RefSampleComponent.MolCompFeature
  @param  Refs_MolComponent self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Refs_MolCompFeature Refs_MolComponent_NewMolCompFeature(Refs_MolComponent self, ApiMap attrlinks);

/**
  Factory function to create ccp.lims.RefSampleComponent.MolCompFeature
  @param  Refs_MolComponent self
  @param  char * featureType
  @param  char * name
  @returns  the new object
**/
extern Refs_MolCompFeature Refs_MolComponent_NewMolCompFeature_reqd(Refs_MolComponent self, char * featureType, char * name);

/**
  Factory function to create 
ccp.lims.RefSampleComponent.SpecificLabelGroup
  @param  Refs_MolComponent self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Refs_SpecificLabelGroup Refs_MolComponent_NewSpecificLabelGroup(Refs_MolComponent self, ApiMap attrlinks);

/**
  Factory function to create 
ccp.lims.RefSampleComponent.SpecificLabelGroup
  @param  Refs_MolComponent self
  @returns  the new object
**/
extern Refs_SpecificLabelGroup Refs_MolComponent_NewSpecificLabelGroup_reqd(Refs_MolComponent self);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_MolComponent self
  @param  Impl_ApplicationData value
**/
extern void *Refs_MolComponent_RemoveApplicationData(Refs_MolComponent self, Impl_ApplicationData value);

/**
  Remove for ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_MolComponent self
  @param  Expb_BlueprintComponent value
**/
extern void *Refs_MolComponent_RemoveBlueprintComponent(Refs_MolComponent self, Expb_BlueprintComponent value);

/**
  Remove for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_MolComponent self
  @param  Clas_SampleComponentCategory value
**/
extern void *Refs_MolComponent_RemoveCategory(Refs_MolComponent self, Clas_SampleComponentCategory value);

/**
  Remove for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The 
Target associated other MolComponent that define it
  @param  Refs_MolComponent self
  @param  Targ_Target value
**/
extern void *Refs_MolComponent_RemoveNucTarget(Refs_MolComponent self, Targ_Target value);

/**
  Remove for ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_MolComponent self
  @param  Refs_MolCompFeature value
**/
extern void *Refs_MolComponent_RemoveRefMolCompFeature(Refs_MolComponent self, Refs_MolCompFeature value);

/**
  Remove for ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_MolComponent self
  @param  Expb_BlueprintComponent value
**/
extern void *Refs_MolComponent_RemoveRelatedExpBlueprint(Refs_MolComponent self, Expb_BlueprintComponent value);

/**
  Remove for ccp.lims.RefSampleComponent.AbstractComponent.synonyms

The 
synonyms of the component.
  @param  Refs_MolComponent self
  @param  ApiString value
**/
extern void *Refs_MolComponent_RemoveSynonym(Refs_MolComponent self, ApiString value);

/**
  SetAttr for ccp.lims.RefSampleComponent.MolComponent
  @param  Refs_MolComponent self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Refs_MolComponent_Set(Refs_MolComponent self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Refs_MolComponent self
  @param  Acco_AccessObject value
**/
extern void *Refs_MolComponent_SetAccess(Refs_MolComponent self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_MolComponent self
  @param  ApiList values
**/
extern void *Refs_MolComponent_SetApplicationData(Refs_MolComponent self, ApiList values);

/**
  Set for ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_MolComponent self
  @param  ApiSet values
**/
extern void *Refs_MolComponent_SetBlueprintComponents(Refs_MolComponent self, ApiSet values);

/**
  Set for ccp.lims.RefSampleComponent.MolComponent.casNum

CAS registry 
number (http://www.cas.org/EO/regsys.html).
  @param  Refs_MolComponent self
  @param  ApiString value
**/
extern void *Refs_MolComponent_SetCasNum(Refs_MolComponent self, ApiString value);

/**
  Set for ccp.lims.RefSampleComponent.AbstractComponent.categories

List 
of category associated to a component.
  @param  Refs_MolComponent self
  @param  ApiSet values
**/
extern void *Refs_MolComponent_SetCategories(Refs_MolComponent self, ApiSet values);

/**
  Set for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_MolComponent self
  @param  ApiSet values
**/
extern void *Refs_MolComponent_SetCompositeElements(Refs_MolComponent self, ApiSet values);

/**
  Set for ccp.lims.RefSampleComponent.AbstractComponent.details

Detail 
field for comments.
  @param  Refs_MolComponent self
  @param  ApiString value
**/
extern void *Refs_MolComponent_SetDetails(Refs_MolComponent self, ApiString value);

/**
  Set for ccp.lims.RefSampleComponent.MolComponent.empiricalFormula

The 
molecular formula of the molComponent.
  @param  Refs_MolComponent self
  @param  ApiString value
**/
extern void *Refs_MolComponent_SetEmpiricalFormula(Refs_MolComponent self, ApiString value);

/**
  Set for 
ccp.lims.RefSampleComponent.MolComponent.labeledMixture

LabeledMixture 
that describes MolComponent isotope labeling
  @param  Refs_MolComponent self
  @param  Lmol_LabeledMixture value
**/
extern void *Refs_MolComponent_SetLabeledMixture(Refs_MolComponent self, Lmol_LabeledMixture value);

/**
  Set for ccp.lims.RefSampleComponent.MolComponent.molType

Type of 
component, on the general lines of biopolymer/polymer/nonpolymer. See 
MolComponentType DataType for details
  @param  Refs_MolComponent self
  @param  ApiString value
**/
extern void *Refs_MolComponent_SetMolType(Refs_MolComponent self, ApiString value);

/**
  Set for ccp.lims.RefSampleComponent.MolComponent.molecularMass

The 
experimental molecular mass in dalton (Da).
  @param  Refs_MolComponent self
  @param  ApiFloat value
**/
extern void *Refs_MolComponent_SetMolecularMass(Refs_MolComponent self, ApiFloat value);

/**
  Set for ccp.lims.RefSampleComponent.MolComponent.molecule

The molecule 
used to describe the precise topology of the MolComponent.
  @param  Refs_MolComponent self
  @param  Mole_Molecule value
**/
extern void *Refs_MolComponent_SetMolecule(Refs_MolComponent self, Mole_Molecule value);

/**
  Set for ccp.lims.RefSampleComponent.AbstractComponent.name

The name of 
the component. Unique identifier.
  @param  Refs_MolComponent self
  @param  ApiString value
**/
extern void *Refs_MolComponent_SetName(Refs_MolComponent self, ApiString value);

/**
  Set for ccp.lims.RefSampleComponent.AbstractComponent.naturalSource

The 
natural source of the component.
  @param  Refs_MolComponent self
  @param  Taxo_NaturalSource value
**/
extern void *Refs_MolComponent_SetNaturalSource(Refs_MolComponent self, Taxo_NaturalSource value);

/**
  Set for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The Target 
associated other MolComponent that define it
  @param  Refs_MolComponent self
  @param  ApiSet values
**/
extern void *Refs_MolComponent_SetNucTargets(Refs_MolComponent self, ApiSet values);

/**
  Set for ccp.lims.RefSampleComponent.MolComponent.protTargets

The Target 
associated to the MolComponent that defines it
  @param  Refs_MolComponent self
  @param  ApiSet values
**/
extern void *Refs_MolComponent_SetProtTargets(Refs_MolComponent self, ApiSet values);

/**
  Set for ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_MolComponent self
  @param  ApiSet values
**/
extern void *Refs_MolComponent_SetRefMolCompFeatures(Refs_MolComponent self, ApiSet values);

/**
  Set for ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_MolComponent self
  @param  ApiSet values
**/
extern void *Refs_MolComponent_SetRelatedExpBlueprints(Refs_MolComponent self, ApiSet values);

/**
  Set for ccp.lims.RefSampleComponent.MolComponent.seqDetails
  @param  Refs_MolComponent self
  @param  ApiString value
**/
extern void *Refs_MolComponent_SetSeqDetails(Refs_MolComponent self, ApiString value);

/**
  Set for ccp.lims.RefSampleComponent.MolComponent.seqString
  @param  Refs_MolComponent self
  @param  ApiString value
**/
extern void *Refs_MolComponent_SetSeqString(Refs_MolComponent self, ApiString value);

/**
  Set for ccp.lims.RefSampleComponent.AbstractComponent.synonyms

The 
synonyms of the component.
  @param  Refs_MolComponent self
  @param  ApiList values
**/
extern void *Refs_MolComponent_SetSynonyms(Refs_MolComponent self, ApiList values);

/**
  Sorted for ccp.lims.RefSampleComponent.MolComponent.blueprintComponents
  @param  Refs_MolComponent self
  @returns   the result
**/
extern ApiList Refs_MolComponent_SortedBlueprintComponents(Refs_MolComponent self);

/**
  Sorted for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_MolComponent self
  @returns   the result
**/
extern ApiList Refs_MolComponent_SortedCategories(Refs_MolComponent self);

/**
  Sorted for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_MolComponent self
  @returns   the result
**/
extern ApiList Refs_MolComponent_SortedComponentDbRefs(Refs_MolComponent self);

/**
  Sorted for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_MolComponent self
  @returns   the result
**/
extern ApiList Refs_MolComponent_SortedCompositeElements(Refs_MolComponent self);

/**
  Sorted for ccp.lims.RefSampleComponent.AbstractComponent.labels

child 
link to class Label
  @param  Refs_MolComponent self
  @returns   the result
**/
extern ApiList Refs_MolComponent_SortedLabels(Refs_MolComponent self);

/**
  Sorted for 
ccp.lims.RefSampleComponent.MolComponent.molCompFeatures

child link to 
class MolCompFeature
  @param  Refs_MolComponent self
  @returns   the result
**/
extern ApiList Refs_MolComponent_SortedMolCompFeatures(Refs_MolComponent self);

/**
  Sorted for ccp.lims.RefSampleComponent.MolComponent.nucTargets

The 
Target associated other MolComponent that define it
  @param  Refs_MolComponent self
  @returns   the result
**/
extern ApiList Refs_MolComponent_SortedNucTargets(Refs_MolComponent self);

/**
  Sorted for ccp.lims.RefSampleComponent.MolComponent.protTargets

The 
Target associated to the MolComponent that defines it
  @param  Refs_MolComponent self
  @returns   the result
**/
extern ApiList Refs_MolComponent_SortedProtTargets(Refs_MolComponent self);

/**
  Sorted for ccp.lims.RefSampleComponent.MolComponent.refMolCompFeatures
  @param  Refs_MolComponent self
  @returns   the result
**/
extern ApiList Refs_MolComponent_SortedRefMolCompFeatures(Refs_MolComponent self);

/**
  Sorted for ccp.lims.RefSampleComponent.MolComponent.relatedExpBlueprints
  @param  Refs_MolComponent self
  @returns   the result
**/
extern ApiList Refs_MolComponent_SortedRelatedExpBlueprints(Refs_MolComponent self);

/**
  Sorted for 
ccp.lims.RefSampleComponent.MolComponent.specificLabelGroups

child link 
to class SpecificLabelGroup
  @param  Refs_MolComponent self
  @returns   the result
**/
extern ApiList Refs_MolComponent_SortedSpecificLabelGroups(Refs_MolComponent self);

#endif /* __incl__ccp_api_lims_RefSampleComponent_MolComponent_h__ */
