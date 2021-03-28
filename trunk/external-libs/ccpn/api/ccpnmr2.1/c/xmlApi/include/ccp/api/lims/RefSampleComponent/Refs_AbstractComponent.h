
#ifndef __incl__ccp_api_lims_RefSampleComponent_AbstractComponent_h__
#define __incl__ccp_api_lims_RefSampleComponent_AbstractComponent_h__

#include "ccp.h"

/*
  The abstract component is used to define the details which characterise all components, these are name, any synonyms and a CAS number. There are 4 subclasses of abstract component: Molecular component (MolComponent), Cell, Substance and Composite.
*/

/* package ccp.api.lims.RefSampleComponent */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_AbstractComponent self
  @param  Impl_ApplicationData value
**/
extern void *Refs_AbstractComponent_AddApplicationData(Refs_AbstractComponent self, Impl_ApplicationData value);

/**
  Add for ccp.lims.RefSampleComponent.AbstractComponent.categories

List 
of category associated to a component.
  @param  Refs_AbstractComponent self
  @param  Clas_SampleComponentCategory value
**/
extern void *Refs_AbstractComponent_AddCategory(Refs_AbstractComponent self, Clas_SampleComponentCategory value);

/**
  Add for ccp.lims.RefSampleComponent.AbstractComponent.synonyms

The 
synonyms of the component.
  @param  Refs_AbstractComponent self
  @param  ApiString value
**/
extern void *Refs_AbstractComponent_AddSynonym(Refs_AbstractComponent self, ApiString value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_AbstractComponent self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Refs_AbstractComponent_FindAllApplicationData(Refs_AbstractComponent self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_AbstractComponent self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Refs_AbstractComponent_FindAllApplicationData_keyval0(Refs_AbstractComponent self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_AbstractComponent self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Refs_AbstractComponent_FindAllApplicationData_keyval1(Refs_AbstractComponent self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_AbstractComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Refs_AbstractComponent_FindAllApplicationData_keyval2(Refs_AbstractComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_AbstractComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Refs_AbstractComponent_FindAllApplicationData_keyval3(Refs_AbstractComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_AbstractComponent self
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
extern ApiList Refs_AbstractComponent_FindAllApplicationData_keyval4(Refs_AbstractComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_AbstractComponent self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_AbstractComponent_FindAllCategories(Refs_AbstractComponent self, ApiMap conditions);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_AbstractComponent self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_AbstractComponent_FindAllCategories_keyval0(Refs_AbstractComponent self);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_AbstractComponent self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_AbstractComponent_FindAllCategories_keyval1(Refs_AbstractComponent self, char * key, ApiObject value);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_AbstractComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_AbstractComponent_FindAllCategories_keyval2(Refs_AbstractComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_AbstractComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_AbstractComponent_FindAllCategories_keyval3(Refs_AbstractComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_AbstractComponent self
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
extern ApiSet Refs_AbstractComponent_FindAllCategories_keyval4(Refs_AbstractComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_AbstractComponent self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_AbstractComponent_FindAllComponentDbRefs(Refs_AbstractComponent self, ApiMap conditions);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_AbstractComponent self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_AbstractComponent_FindAllComponentDbRefs_keyval0(Refs_AbstractComponent self);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_AbstractComponent self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_AbstractComponent_FindAllComponentDbRefs_keyval1(Refs_AbstractComponent self, char * key, ApiObject value);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_AbstractComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_AbstractComponent_FindAllComponentDbRefs_keyval2(Refs_AbstractComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_AbstractComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_AbstractComponent_FindAllComponentDbRefs_keyval3(Refs_AbstractComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_AbstractComponent self
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
extern ApiSet Refs_AbstractComponent_FindAllComponentDbRefs_keyval4(Refs_AbstractComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_AbstractComponent self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_AbstractComponent_FindAllCompositeElements(Refs_AbstractComponent self, ApiMap conditions);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_AbstractComponent self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_AbstractComponent_FindAllCompositeElements_keyval0(Refs_AbstractComponent self);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_AbstractComponent self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_AbstractComponent_FindAllCompositeElements_keyval1(Refs_AbstractComponent self, char * key, ApiObject value);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_AbstractComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_AbstractComponent_FindAllCompositeElements_keyval2(Refs_AbstractComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_AbstractComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_AbstractComponent_FindAllCompositeElements_keyval3(Refs_AbstractComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_AbstractComponent self
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
extern ApiSet Refs_AbstractComponent_FindAllCompositeElements_keyval4(Refs_AbstractComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.RefSampleComponent.AbstractComponent.labels

child 
link to class Label
  @param  Refs_AbstractComponent self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_AbstractComponent_FindAllLabels(Refs_AbstractComponent self, ApiMap conditions);

/**
  FindAll for ccp.lims.RefSampleComponent.AbstractComponent.labels

child 
link to class Label
  @param  Refs_AbstractComponent self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_AbstractComponent_FindAllLabels_keyval0(Refs_AbstractComponent self);

/**
  FindAll for ccp.lims.RefSampleComponent.AbstractComponent.labels

child 
link to class Label
  @param  Refs_AbstractComponent self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_AbstractComponent_FindAllLabels_keyval1(Refs_AbstractComponent self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.RefSampleComponent.AbstractComponent.labels

child 
link to class Label
  @param  Refs_AbstractComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_AbstractComponent_FindAllLabels_keyval2(Refs_AbstractComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.RefSampleComponent.AbstractComponent.labels

child 
link to class Label
  @param  Refs_AbstractComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_AbstractComponent_FindAllLabels_keyval3(Refs_AbstractComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.RefSampleComponent.AbstractComponent.labels

child 
link to class Label
  @param  Refs_AbstractComponent self
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
extern ApiSet Refs_AbstractComponent_FindAllLabels_keyval4(Refs_AbstractComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_AbstractComponent self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Refs_AbstractComponent_FindFirstApplicationData(Refs_AbstractComponent self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_AbstractComponent self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Refs_AbstractComponent_FindFirstApplicationData_keyval0(Refs_AbstractComponent self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_AbstractComponent self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Refs_AbstractComponent_FindFirstApplicationData_keyval1(Refs_AbstractComponent self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_AbstractComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Refs_AbstractComponent_FindFirstApplicationData_keyval2(Refs_AbstractComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_AbstractComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Refs_AbstractComponent_FindFirstApplicationData_keyval3(Refs_AbstractComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_AbstractComponent self
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
extern Impl_ApplicationData Refs_AbstractComponent_FindFirstApplicationData_keyval4(Refs_AbstractComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_AbstractComponent self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Clas_SampleComponentCategory Refs_AbstractComponent_FindFirstCategory(Refs_AbstractComponent self, ApiMap conditions);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_AbstractComponent self
  @returns  the first value that satisfies the conditions 
**/
extern Clas_SampleComponentCategory Refs_AbstractComponent_FindFirstCategory_keyval0(Refs_AbstractComponent self);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_AbstractComponent self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Clas_SampleComponentCategory Refs_AbstractComponent_FindFirstCategory_keyval1(Refs_AbstractComponent self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_AbstractComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Clas_SampleComponentCategory Refs_AbstractComponent_FindFirstCategory_keyval2(Refs_AbstractComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_AbstractComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Clas_SampleComponentCategory Refs_AbstractComponent_FindFirstCategory_keyval3(Refs_AbstractComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_AbstractComponent self
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
extern Clas_SampleComponentCategory Refs_AbstractComponent_FindFirstCategory_keyval4(Refs_AbstractComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_AbstractComponent self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Refs_ComponentDbRef Refs_AbstractComponent_FindFirstComponentDbRef(Refs_AbstractComponent self, ApiMap conditions);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_AbstractComponent self
  @returns  the first value that satisfies the conditions 
**/
extern Refs_ComponentDbRef Refs_AbstractComponent_FindFirstComponentDbRef_keyval0(Refs_AbstractComponent self);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_AbstractComponent self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Refs_ComponentDbRef Refs_AbstractComponent_FindFirstComponentDbRef_keyval1(Refs_AbstractComponent self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_AbstractComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Refs_ComponentDbRef Refs_AbstractComponent_FindFirstComponentDbRef_keyval2(Refs_AbstractComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_AbstractComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Refs_ComponentDbRef Refs_AbstractComponent_FindFirstComponentDbRef_keyval3(Refs_AbstractComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_AbstractComponent self
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
extern Refs_ComponentDbRef Refs_AbstractComponent_FindFirstComponentDbRef_keyval4(Refs_AbstractComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_AbstractComponent self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Refs_CompositeElement Refs_AbstractComponent_FindFirstCompositeElement(Refs_AbstractComponent self, ApiMap conditions);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_AbstractComponent self
  @returns  the first value that satisfies the conditions 
**/
extern Refs_CompositeElement Refs_AbstractComponent_FindFirstCompositeElement_keyval0(Refs_AbstractComponent self);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_AbstractComponent self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Refs_CompositeElement Refs_AbstractComponent_FindFirstCompositeElement_keyval1(Refs_AbstractComponent self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_AbstractComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Refs_CompositeElement Refs_AbstractComponent_FindFirstCompositeElement_keyval2(Refs_AbstractComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_AbstractComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Refs_CompositeElement Refs_AbstractComponent_FindFirstCompositeElement_keyval3(Refs_AbstractComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_AbstractComponent self
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
extern Refs_CompositeElement Refs_AbstractComponent_FindFirstCompositeElement_keyval4(Refs_AbstractComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.labels

child link to 
class Label
  @param  Refs_AbstractComponent self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Refs_Label Refs_AbstractComponent_FindFirstLabel(Refs_AbstractComponent self, ApiMap conditions);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.labels

child link to 
class Label
  @param  Refs_AbstractComponent self
  @returns  the first value that satisfies the conditions 
**/
extern Refs_Label Refs_AbstractComponent_FindFirstLabel_keyval0(Refs_AbstractComponent self);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.labels

child link to 
class Label
  @param  Refs_AbstractComponent self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Refs_Label Refs_AbstractComponent_FindFirstLabel_keyval1(Refs_AbstractComponent self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.labels

child link to 
class Label
  @param  Refs_AbstractComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Refs_Label Refs_AbstractComponent_FindFirstLabel_keyval2(Refs_AbstractComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.labels

child link to 
class Label
  @param  Refs_AbstractComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Refs_Label Refs_AbstractComponent_FindFirstLabel_keyval3(Refs_AbstractComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.AbstractComponent.labels

child link to 
class Label
  @param  Refs_AbstractComponent self
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
extern Refs_Label Refs_AbstractComponent_FindFirstLabel_keyval4(Refs_AbstractComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Refs_AbstractComponent self
  @returns   the result
**/
extern Acco_AccessObject Refs_AbstractComponent_GetAccess(Refs_AbstractComponent self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Refs_AbstractComponent self
  @returns   the result
**/
extern Acco_AccessObject Refs_AbstractComponent_GetActiveAccess(Refs_AbstractComponent self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_AbstractComponent self
  @returns   the result
**/
extern ApiList Refs_AbstractComponent_GetApplicationData(Refs_AbstractComponent self);

/**
  GetByKey for ccp.lims.RefSampleComponent.AbstractComponent
  @param  Refs_AbstractComponent self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Refs_AbstractComponent Refs_AbstractComponent_GetByKey(Refs_AbstractComponent self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for ccp.lims.RefSampleComponent.AbstractComponent.categories

List 
of category associated to a component.
  @param  Refs_AbstractComponent self
  @returns   the result
**/
extern ApiSet Refs_AbstractComponent_GetCategories(Refs_AbstractComponent self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Refs_AbstractComponent self
  @returns   the result
**/
extern ApiString Refs_AbstractComponent_GetClassName(Refs_AbstractComponent self);

/**
  Get for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_AbstractComponent self
  @returns   the result
**/
extern ApiSet Refs_AbstractComponent_GetComponentDbRefs(Refs_AbstractComponent self);

/**
  Get for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_AbstractComponent self
  @returns   the result
**/
extern ApiSet Refs_AbstractComponent_GetCompositeElements(Refs_AbstractComponent self);

/**
  Get for ccp.lims.RefSampleComponent.AbstractComponent.details

Detail 
field for comments.
  @param  Refs_AbstractComponent self
  @returns   the result
**/
extern ApiString Refs_AbstractComponent_GetDetails(Refs_AbstractComponent self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Refs_AbstractComponent self
  @returns   the result
**/
extern ApiList Refs_AbstractComponent_GetFieldNames(Refs_AbstractComponent self);

/**
  GetFullKey for ccp.lims.RefSampleComponent.AbstractComponent
  @param  Refs_AbstractComponent self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Refs_AbstractComponent_GetFullKey(Refs_AbstractComponent self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Refs_AbstractComponent self
  @returns   the result
**/
extern ApiBoolean Refs_AbstractComponent_GetInConstructor(Refs_AbstractComponent self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Refs_AbstractComponent self
  @returns   the result
**/
extern ApiBoolean Refs_AbstractComponent_GetIsDeleted(Refs_AbstractComponent self);

/**
  Get for ccp.lims.RefSampleComponent.AbstractComponent.labels

child link 
to class Label
  @param  Refs_AbstractComponent self
  @returns   the result
**/
extern ApiSet Refs_AbstractComponent_GetLabels(Refs_AbstractComponent self);

/**
  GetLocalKey for ccp.lims.RefSampleComponent.AbstractComponent
  @param  Refs_AbstractComponent self
  @returns  Local object key
**/
extern ApiObject Refs_AbstractComponent_GetLocalKey(Refs_AbstractComponent self);

/**
  Get for ccp.lims.RefSampleComponent.AbstractComponent.name

The name of 
the component. Unique identifier.
  @param  Refs_AbstractComponent self
  @returns   the result
**/
extern ApiString Refs_AbstractComponent_GetName(Refs_AbstractComponent self);

/**
  Get for ccp.lims.RefSampleComponent.AbstractComponent.naturalSource

The 
natural source of the component.
  @param  Refs_AbstractComponent self
  @returns   the result
**/
extern Taxo_NaturalSource Refs_AbstractComponent_GetNaturalSource(Refs_AbstractComponent self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Refs_AbstractComponent self
  @returns   the result
**/
extern ApiString Refs_AbstractComponent_GetPackageName(Refs_AbstractComponent self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Refs_AbstractComponent self
  @returns   the result
**/
extern ApiString Refs_AbstractComponent_GetPackageShortName(Refs_AbstractComponent self);

/**
  Get for ccp.lims.RefSampleComponent.AbstractComponent.parent

link to 
parent object - synonym for refSampleComponentStore
  @param  Refs_AbstractComponent self
  @returns   the result
**/
extern Refs_RefSampleComponentStore Refs_AbstractComponent_GetParent(Refs_AbstractComponent self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Refs_AbstractComponent self
  @returns   the result
**/
extern ApiString Refs_AbstractComponent_GetQualifiedName(Refs_AbstractComponent self);

/**
  Get for 
ccp.lims.RefSampleComponent.AbstractComponent.refSampleComponentStore

parent 
link
  @param  Refs_AbstractComponent self
  @returns   the result
**/
extern Refs_RefSampleComponentStore Refs_AbstractComponent_GetRefSampleComponentStore(Refs_AbstractComponent self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Refs_AbstractComponent self
  @returns   the result
**/
extern Impl_MemopsRoot Refs_AbstractComponent_GetRoot(Refs_AbstractComponent self);

/**
  Get for ccp.lims.RefSampleComponent.AbstractComponent.synonyms

The 
synonyms of the component.
  @param  Refs_AbstractComponent self
  @returns   the result
**/
extern ApiList Refs_AbstractComponent_GetSynonyms(Refs_AbstractComponent self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Refs_AbstractComponent self
  @returns   the result
**/
extern Impl_TopObject Refs_AbstractComponent_GetTopObject(Refs_AbstractComponent self);

/**
  Factory function to create ccp.lims.RefSampleComponent.ComponentDbRef
  @param  Refs_AbstractComponent self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Refs_ComponentDbRef Refs_AbstractComponent_NewComponentDbRef(Refs_AbstractComponent self, ApiMap attrlinks);

/**
  Factory function to create ccp.lims.RefSampleComponent.ComponentDbRef
  @param  Refs_AbstractComponent self
  @param  Dbr_Entry dbRef
  @returns  the new object
**/
extern Refs_ComponentDbRef Refs_AbstractComponent_NewComponentDbRef_reqd(Refs_AbstractComponent self, Dbr_Entry dbRef);

/**
  Factory function to create ccp.lims.RefSampleComponent.Label
  @param  Refs_AbstractComponent self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Refs_Label Refs_AbstractComponent_NewLabel(Refs_AbstractComponent self, ApiMap attrlinks);

/**
  Factory function to create ccp.lims.RefSampleComponent.Label
  @param  Refs_AbstractComponent self
  @param  char * labelName
  @param  char * labelType
  @returns  the new object
**/
extern Refs_Label Refs_AbstractComponent_NewLabel_reqd(Refs_AbstractComponent self, char * labelName, char * labelType);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_AbstractComponent self
  @param  Impl_ApplicationData value
**/
extern void *Refs_AbstractComponent_RemoveApplicationData(Refs_AbstractComponent self, Impl_ApplicationData value);

/**
  Remove for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_AbstractComponent self
  @param  Clas_SampleComponentCategory value
**/
extern void *Refs_AbstractComponent_RemoveCategory(Refs_AbstractComponent self, Clas_SampleComponentCategory value);

/**
  Remove for ccp.lims.RefSampleComponent.AbstractComponent.synonyms

The 
synonyms of the component.
  @param  Refs_AbstractComponent self
  @param  ApiString value
**/
extern void *Refs_AbstractComponent_RemoveSynonym(Refs_AbstractComponent self, ApiString value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Refs_AbstractComponent self
  @param  Acco_AccessObject value
**/
extern void *Refs_AbstractComponent_SetAccess(Refs_AbstractComponent self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_AbstractComponent self
  @param  ApiList values
**/
extern void *Refs_AbstractComponent_SetApplicationData(Refs_AbstractComponent self, ApiList values);

/**
  Set for ccp.lims.RefSampleComponent.AbstractComponent.categories

List 
of category associated to a component.
  @param  Refs_AbstractComponent self
  @param  ApiSet values
**/
extern void *Refs_AbstractComponent_SetCategories(Refs_AbstractComponent self, ApiSet values);

/**
  Set for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_AbstractComponent self
  @param  ApiSet values
**/
extern void *Refs_AbstractComponent_SetCompositeElements(Refs_AbstractComponent self, ApiSet values);

/**
  Set for ccp.lims.RefSampleComponent.AbstractComponent.details

Detail 
field for comments.
  @param  Refs_AbstractComponent self
  @param  ApiString value
**/
extern void *Refs_AbstractComponent_SetDetails(Refs_AbstractComponent self, ApiString value);

/**
  Set for ccp.lims.RefSampleComponent.AbstractComponent.name

The name of 
the component. Unique identifier.
  @param  Refs_AbstractComponent self
  @param  ApiString value
**/
extern void *Refs_AbstractComponent_SetName(Refs_AbstractComponent self, ApiString value);

/**
  Set for ccp.lims.RefSampleComponent.AbstractComponent.naturalSource

The 
natural source of the component.
  @param  Refs_AbstractComponent self
  @param  Taxo_NaturalSource value
**/
extern void *Refs_AbstractComponent_SetNaturalSource(Refs_AbstractComponent self, Taxo_NaturalSource value);

/**
  Set for ccp.lims.RefSampleComponent.AbstractComponent.synonyms

The 
synonyms of the component.
  @param  Refs_AbstractComponent self
  @param  ApiList values
**/
extern void *Refs_AbstractComponent_SetSynonyms(Refs_AbstractComponent self, ApiList values);

/**
  Sorted for 
ccp.lims.RefSampleComponent.AbstractComponent.categories

List of 
category associated to a component.
  @param  Refs_AbstractComponent self
  @returns   the result
**/
extern ApiList Refs_AbstractComponent_SortedCategories(Refs_AbstractComponent self);

/**
  Sorted for 
ccp.lims.RefSampleComponent.AbstractComponent.componentDbRefs

child 
link to class ComponentDbRef
  @param  Refs_AbstractComponent self
  @returns   the result
**/
extern ApiList Refs_AbstractComponent_SortedComponentDbRefs(Refs_AbstractComponent self);

/**
  Sorted for 
ccp.lims.RefSampleComponent.AbstractComponent.compositeElements

List of 
element where the component is part of a composite.
  @param  Refs_AbstractComponent self
  @returns   the result
**/
extern ApiList Refs_AbstractComponent_SortedCompositeElements(Refs_AbstractComponent self);

/**
  Sorted for ccp.lims.RefSampleComponent.AbstractComponent.labels

child 
link to class Label
  @param  Refs_AbstractComponent self
  @returns   the result
**/
extern ApiList Refs_AbstractComponent_SortedLabels(Refs_AbstractComponent self);

#endif /* __incl__ccp_api_lims_RefSampleComponent_AbstractComponent_h__ */
