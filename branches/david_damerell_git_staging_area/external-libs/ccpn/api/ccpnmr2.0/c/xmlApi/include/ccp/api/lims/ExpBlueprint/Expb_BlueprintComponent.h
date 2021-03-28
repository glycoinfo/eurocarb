
#ifndef __incl__ccp_api_lims_ExpBlueprint_BlueprintComponent_h__
#define __incl__ccp_api_lims_ExpBlueprint_BlueprintComponent_h__

#include "ccp.h"

/*
  The contents of the ExpBlueprint.
*/

/* package ccp.api.lims.ExpBlueprint */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_BlueprintComponent self
  @param  Impl_ApplicationData value
**/
extern void *Expb_BlueprintComponent_AddApplicationData(Expb_BlueprintComponent self, Impl_ApplicationData value);

/**
  Add for ccp.lims.ExpBlueprint.BlueprintComponent.sampleComponents
  @param  Expb_BlueprintComponent self
  @param  Sam_SampleComponent value
**/
extern void *Expb_BlueprintComponent_AddSampleComponent(Expb_BlueprintComponent self, Sam_SampleComponent value);

/**
  Add for ccp.lims.ExpBlueprint.BlueprintComponent.trialMolComponents
  @param  Expb_BlueprintComponent self
  @param  Refs_MolComponent value
**/
extern void *Expb_BlueprintComponent_AddTrialMolComponent(Expb_BlueprintComponent self, Refs_MolComponent value);

/**
  CheckAllValid for ccp.lims.ExpBlueprint.BlueprintComponent
  @param  Expb_BlueprintComponent self
  @param  ApiBoolean complete
**/
extern void *Expb_BlueprintComponent_CheckAllValid(Expb_BlueprintComponent self, ApiBoolean complete);

/**
  CheckValid for ccp.lims.ExpBlueprint.BlueprintComponent
  @param  Expb_BlueprintComponent self
  @param  ApiBoolean complete
**/
extern void *Expb_BlueprintComponent_CheckValid(Expb_BlueprintComponent self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_BlueprintComponent self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Expb_BlueprintComponent_FindAllApplicationData(Expb_BlueprintComponent self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_BlueprintComponent self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Expb_BlueprintComponent_FindAllApplicationData_keyval0(Expb_BlueprintComponent self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_BlueprintComponent self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Expb_BlueprintComponent_FindAllApplicationData_keyval1(Expb_BlueprintComponent self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_BlueprintComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Expb_BlueprintComponent_FindAllApplicationData_keyval2(Expb_BlueprintComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_BlueprintComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Expb_BlueprintComponent_FindAllApplicationData_keyval3(Expb_BlueprintComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_BlueprintComponent self
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
extern ApiList Expb_BlueprintComponent_FindAllApplicationData_keyval4(Expb_BlueprintComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.ExpBlueprint.BlueprintComponent.sampleComponents
  @param  Expb_BlueprintComponent self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Expb_BlueprintComponent_FindAllSampleComponents(Expb_BlueprintComponent self, ApiMap conditions);

/**
  FindAll for ccp.lims.ExpBlueprint.BlueprintComponent.sampleComponents
  @param  Expb_BlueprintComponent self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Expb_BlueprintComponent_FindAllSampleComponents_keyval0(Expb_BlueprintComponent self);

/**
  FindAll for ccp.lims.ExpBlueprint.BlueprintComponent.sampleComponents
  @param  Expb_BlueprintComponent self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Expb_BlueprintComponent_FindAllSampleComponents_keyval1(Expb_BlueprintComponent self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.ExpBlueprint.BlueprintComponent.sampleComponents
  @param  Expb_BlueprintComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Expb_BlueprintComponent_FindAllSampleComponents_keyval2(Expb_BlueprintComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.ExpBlueprint.BlueprintComponent.sampleComponents
  @param  Expb_BlueprintComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Expb_BlueprintComponent_FindAllSampleComponents_keyval3(Expb_BlueprintComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.ExpBlueprint.BlueprintComponent.sampleComponents
  @param  Expb_BlueprintComponent self
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
extern ApiSet Expb_BlueprintComponent_FindAllSampleComponents_keyval4(Expb_BlueprintComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.ExpBlueprint.BlueprintComponent.trialMolComponents
  @param  Expb_BlueprintComponent self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Expb_BlueprintComponent_FindAllTrialMolComponents(Expb_BlueprintComponent self, ApiMap conditions);

/**
  FindAll for ccp.lims.ExpBlueprint.BlueprintComponent.trialMolComponents
  @param  Expb_BlueprintComponent self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Expb_BlueprintComponent_FindAllTrialMolComponents_keyval0(Expb_BlueprintComponent self);

/**
  FindAll for ccp.lims.ExpBlueprint.BlueprintComponent.trialMolComponents
  @param  Expb_BlueprintComponent self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Expb_BlueprintComponent_FindAllTrialMolComponents_keyval1(Expb_BlueprintComponent self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.ExpBlueprint.BlueprintComponent.trialMolComponents
  @param  Expb_BlueprintComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Expb_BlueprintComponent_FindAllTrialMolComponents_keyval2(Expb_BlueprintComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.ExpBlueprint.BlueprintComponent.trialMolComponents
  @param  Expb_BlueprintComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Expb_BlueprintComponent_FindAllTrialMolComponents_keyval3(Expb_BlueprintComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.ExpBlueprint.BlueprintComponent.trialMolComponents
  @param  Expb_BlueprintComponent self
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
extern ApiSet Expb_BlueprintComponent_FindAllTrialMolComponents_keyval4(Expb_BlueprintComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_BlueprintComponent self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Expb_BlueprintComponent_FindFirstApplicationData(Expb_BlueprintComponent self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_BlueprintComponent self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Expb_BlueprintComponent_FindFirstApplicationData_keyval0(Expb_BlueprintComponent self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_BlueprintComponent self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Expb_BlueprintComponent_FindFirstApplicationData_keyval1(Expb_BlueprintComponent self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_BlueprintComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Expb_BlueprintComponent_FindFirstApplicationData_keyval2(Expb_BlueprintComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_BlueprintComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Expb_BlueprintComponent_FindFirstApplicationData_keyval3(Expb_BlueprintComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_BlueprintComponent self
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
extern Impl_ApplicationData Expb_BlueprintComponent_FindFirstApplicationData_keyval4(Expb_BlueprintComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.lims.ExpBlueprint.BlueprintComponent.sampleComponents
  @param  Expb_BlueprintComponent self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Sam_SampleComponent Expb_BlueprintComponent_FindFirstSampleComponent(Expb_BlueprintComponent self, ApiMap conditions);

/**
  FindFirst for ccp.lims.ExpBlueprint.BlueprintComponent.sampleComponents
  @param  Expb_BlueprintComponent self
  @returns  the first value that satisfies the conditions 
**/
extern Sam_SampleComponent Expb_BlueprintComponent_FindFirstSampleComponent_keyval0(Expb_BlueprintComponent self);

/**
  FindFirst for ccp.lims.ExpBlueprint.BlueprintComponent.sampleComponents
  @param  Expb_BlueprintComponent self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Sam_SampleComponent Expb_BlueprintComponent_FindFirstSampleComponent_keyval1(Expb_BlueprintComponent self, char * key, ApiObject value);

/**
  FindFirst for ccp.lims.ExpBlueprint.BlueprintComponent.sampleComponents
  @param  Expb_BlueprintComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Sam_SampleComponent Expb_BlueprintComponent_FindFirstSampleComponent_keyval2(Expb_BlueprintComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.lims.ExpBlueprint.BlueprintComponent.sampleComponents
  @param  Expb_BlueprintComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Sam_SampleComponent Expb_BlueprintComponent_FindFirstSampleComponent_keyval3(Expb_BlueprintComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.lims.ExpBlueprint.BlueprintComponent.sampleComponents
  @param  Expb_BlueprintComponent self
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
extern Sam_SampleComponent Expb_BlueprintComponent_FindFirstSampleComponent_keyval4(Expb_BlueprintComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.lims.ExpBlueprint.BlueprintComponent.trialMolComponents
  @param  Expb_BlueprintComponent self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Refs_MolComponent Expb_BlueprintComponent_FindFirstTrialMolComponent(Expb_BlueprintComponent self, ApiMap conditions);

/**
  FindFirst for 
ccp.lims.ExpBlueprint.BlueprintComponent.trialMolComponents
  @param  Expb_BlueprintComponent self
  @returns  the first value that satisfies the conditions 
**/
extern Refs_MolComponent Expb_BlueprintComponent_FindFirstTrialMolComponent_keyval0(Expb_BlueprintComponent self);

/**
  FindFirst for 
ccp.lims.ExpBlueprint.BlueprintComponent.trialMolComponents
  @param  Expb_BlueprintComponent self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Refs_MolComponent Expb_BlueprintComponent_FindFirstTrialMolComponent_keyval1(Expb_BlueprintComponent self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.lims.ExpBlueprint.BlueprintComponent.trialMolComponents
  @param  Expb_BlueprintComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Refs_MolComponent Expb_BlueprintComponent_FindFirstTrialMolComponent_keyval2(Expb_BlueprintComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.lims.ExpBlueprint.BlueprintComponent.trialMolComponents
  @param  Expb_BlueprintComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Refs_MolComponent Expb_BlueprintComponent_FindFirstTrialMolComponent_keyval3(Expb_BlueprintComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.lims.ExpBlueprint.BlueprintComponent.trialMolComponents
  @param  Expb_BlueprintComponent self
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
extern Refs_MolComponent Expb_BlueprintComponent_FindFirstTrialMolComponent_keyval4(Expb_BlueprintComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.lims.ExpBlueprint.BlueprintComponent
  @param  Expb_BlueprintComponent self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Expb_BlueprintComponent_Get(Expb_BlueprintComponent self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Expb_BlueprintComponent self
  @returns   the result
**/
extern Acco_AccessObject Expb_BlueprintComponent_GetAccess(Expb_BlueprintComponent self);

/**
  Get for ccp.lims.ExpBlueprint.BlueprintComponent.alwaysIncluded

Is this 
NonPolyBlueprintComp included all times in the experiments?
  @param  Expb_BlueprintComponent self
  @returns   the result
**/
extern ApiBoolean Expb_BlueprintComponent_GetAlwaysIncluded(Expb_BlueprintComponent self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_BlueprintComponent self
  @returns   the result
**/
extern ApiList Expb_BlueprintComponent_GetApplicationData(Expb_BlueprintComponent self);

/**
  Get for ccp.lims.ExpBlueprint.BlueprintComponent.approxBeginSeqId

The 
approxBeginSeqId is the approximative residue number that gives the 
residue begining position of the domain in the target sequence.
  @param  Expb_BlueprintComponent self
  @returns   the result
**/
extern ApiInteger Expb_BlueprintComponent_GetApproxBeginSeqId(Expb_BlueprintComponent self);

/**
  Get for ccp.lims.ExpBlueprint.BlueprintComponent.approxEndSeqId

The 
approxEndSeqId is the approximative residue number that gives the 
residue ending position of the domain in the target sequence.
  @param  Expb_BlueprintComponent self
  @returns   the result
**/
extern ApiInteger Expb_BlueprintComponent_GetApproxEndSeqId(Expb_BlueprintComponent self);

/**
  GetByKey for ccp.lims.ExpBlueprint.BlueprintComponent
  @param  Expb_BlueprintComponent self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Expb_BlueprintComponent Expb_BlueprintComponent_GetByKey(Expb_BlueprintComponent self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Expb_BlueprintComponent self
  @returns   the result
**/
extern ApiString Expb_BlueprintComponent_GetClassName(Expb_BlueprintComponent self);

/**
  Get for ccp.lims.ExpBlueprint.BlueprintComponent.componentType

Type of 
the blueprint component. e.g. 'PolyBlueprintComp' or 
'NonPolyBlueprintComp'
  @param  Expb_BlueprintComponent self
  @returns   the result
**/
extern ApiString Expb_BlueprintComponent_GetComponentType(Expb_BlueprintComponent self);

/**
  Get for ccp.lims.ExpBlueprint.BlueprintComponent.details

Detail field 
for comments.
  @param  Expb_BlueprintComponent self
  @returns   the result
**/
extern ApiString Expb_BlueprintComponent_GetDetails(Expb_BlueprintComponent self);

/**
  Get for ccp.lims.ExpBlueprint.BlueprintComponent.domain

The name of the 
target domain used to define the BlueprintComponent.
  @param  Expb_BlueprintComponent self
  @returns   the result
**/
extern ApiString Expb_BlueprintComponent_GetDomain(Expb_BlueprintComponent self);

/**
  Get for ccp.lims.ExpBlueprint.BlueprintComponent.expBlueprint

The trial 
to which this component belongs.
  @param  Expb_BlueprintComponent self
  @returns   the result
**/
extern Expb_ExpBlueprint Expb_BlueprintComponent_GetExpBlueprint(Expb_BlueprintComponent self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Expb_BlueprintComponent self
  @returns   the result
**/
extern ApiList Expb_BlueprintComponent_GetFieldNames(Expb_BlueprintComponent self);

/**
  GetFullKey for ccp.lims.ExpBlueprint.BlueprintComponent
  @param  Expb_BlueprintComponent self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Expb_BlueprintComponent_GetFullKey(Expb_BlueprintComponent self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Expb_BlueprintComponent self
  @returns   the result
**/
extern ApiBoolean Expb_BlueprintComponent_GetInConstructor(Expb_BlueprintComponent self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Expb_BlueprintComponent self
  @returns   the result
**/
extern ApiBoolean Expb_BlueprintComponent_GetIsDeleted(Expb_BlueprintComponent self);

/**
  GetLocalKey for ccp.lims.ExpBlueprint.BlueprintComponent
  @param  Expb_BlueprintComponent self
  @returns  Local object key
**/
extern ApiObject Expb_BlueprintComponent_GetLocalKey(Expb_BlueprintComponent self);

/**
  Get for ccp.lims.ExpBlueprint.BlueprintComponent.molComponent
  @param  Expb_BlueprintComponent self
  @returns   the result
**/
extern Refs_MolComponent Expb_BlueprintComponent_GetMolComponent(Expb_BlueprintComponent self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Expb_BlueprintComponent self
  @returns   the result
**/
extern ApiString Expb_BlueprintComponent_GetPackageName(Expb_BlueprintComponent self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Expb_BlueprintComponent self
  @returns   the result
**/
extern ApiString Expb_BlueprintComponent_GetPackageShortName(Expb_BlueprintComponent self);

/**
  Get for ccp.lims.ExpBlueprint.BlueprintComponent.parent

link to parent 
object - synonym for expBlueprint
  @param  Expb_BlueprintComponent self
  @returns   the result
**/
extern Expb_ExpBlueprint Expb_BlueprintComponent_GetParent(Expb_BlueprintComponent self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Expb_BlueprintComponent self
  @returns   the result
**/
extern ApiString Expb_BlueprintComponent_GetQualifiedName(Expb_BlueprintComponent self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Expb_BlueprintComponent self
  @returns   the result
**/
extern Impl_MemopsRoot Expb_BlueprintComponent_GetRoot(Expb_BlueprintComponent self);

/**
  Get for ccp.lims.ExpBlueprint.BlueprintComponent.sampleComponents
  @param  Expb_BlueprintComponent self
  @returns   the result
**/
extern ApiSet Expb_BlueprintComponent_GetSampleComponents(Expb_BlueprintComponent self);

/**
  Get for ccp.lims.ExpBlueprint.BlueprintComponent.serial

Unique 
identifier.
  @param  Expb_BlueprintComponent self
  @returns   the result
**/
extern ApiInteger Expb_BlueprintComponent_GetSerial(Expb_BlueprintComponent self);

/**
  Get for ccp.lims.ExpBlueprint.BlueprintComponent.status

The status of 
the blueprint component.
  @param  Expb_BlueprintComponent self
  @returns   the result
**/
extern ApiString Expb_BlueprintComponent_GetStatus(Expb_BlueprintComponent self);

/**
  Get for ccp.lims.ExpBlueprint.BlueprintComponent.target

The target 
associated to the BlueprintComponent.
  @param  Expb_BlueprintComponent self
  @returns   the result
**/
extern Targ_Target Expb_BlueprintComponent_GetTarget(Expb_BlueprintComponent self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Expb_BlueprintComponent self
  @returns   the result
**/
extern Impl_TopObject Expb_BlueprintComponent_GetTopObject(Expb_BlueprintComponent self);

/**
  Get for ccp.lims.ExpBlueprint.BlueprintComponent.trialMolComponents
  @param  Expb_BlueprintComponent self
  @returns   the result
**/
extern ApiSet Expb_BlueprintComponent_GetTrialMolComponents(Expb_BlueprintComponent self);

/**
  Get for ccp.lims.ExpBlueprint.BlueprintComponent.whyChosen

Details of 
the basis for the selection of this BlueprintComponent.
  @param  Expb_BlueprintComponent self
  @returns   the result
**/
extern ApiString Expb_BlueprintComponent_GetWhyChosen(Expb_BlueprintComponent self);

/**
  Constructor for ccp.lims.ExpBlueprint.BlueprintComponent
  @param  Expb_ExpBlueprint parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Expb_BlueprintComponent Expb_BlueprintComponent_Init(Expb_ExpBlueprint parent, ApiMap attrlinks);

/**
  Constructor for ccp.lims.ExpBlueprint.BlueprintComponent
  @param  Expb_ExpBlueprint parent
  @param  char * componentType
  @param  char * whyChosen
  @returns  the new object
**/
extern Expb_BlueprintComponent Expb_BlueprintComponent_Init_reqd(Expb_ExpBlueprint parent, char * componentType, char * whyChosen);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_BlueprintComponent self
  @param  Impl_ApplicationData value
**/
extern void *Expb_BlueprintComponent_RemoveApplicationData(Expb_BlueprintComponent self, Impl_ApplicationData value);

/**
  Remove for ccp.lims.ExpBlueprint.BlueprintComponent.sampleComponents
  @param  Expb_BlueprintComponent self
  @param  Sam_SampleComponent value
**/
extern void *Expb_BlueprintComponent_RemoveSampleComponent(Expb_BlueprintComponent self, Sam_SampleComponent value);

/**
  Remove for ccp.lims.ExpBlueprint.BlueprintComponent.trialMolComponents
  @param  Expb_BlueprintComponent self
  @param  Refs_MolComponent value
**/
extern void *Expb_BlueprintComponent_RemoveTrialMolComponent(Expb_BlueprintComponent self, Refs_MolComponent value);

/**
  SetAttr for ccp.lims.ExpBlueprint.BlueprintComponent
  @param  Expb_BlueprintComponent self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Expb_BlueprintComponent_Set(Expb_BlueprintComponent self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Expb_BlueprintComponent self
  @param  Acco_AccessObject value
**/
extern void *Expb_BlueprintComponent_SetAccess(Expb_BlueprintComponent self, Acco_AccessObject value);

/**
  Set for ccp.lims.ExpBlueprint.BlueprintComponent.alwaysIncluded

Is this 
NonPolyBlueprintComp included all times in the experiments?
  @param  Expb_BlueprintComponent self
  @param  ApiBoolean value
**/
extern void *Expb_BlueprintComponent_SetAlwaysIncluded(Expb_BlueprintComponent self, ApiBoolean value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_BlueprintComponent self
  @param  ApiList values
**/
extern void *Expb_BlueprintComponent_SetApplicationData(Expb_BlueprintComponent self, ApiList values);

/**
  Set for ccp.lims.ExpBlueprint.BlueprintComponent.approxBeginSeqId

The 
approxBeginSeqId is the approximative residue number that gives the 
residue begining position of the domain in the target sequence.
  @param  Expb_BlueprintComponent self
  @param  ApiInteger value
**/
extern void *Expb_BlueprintComponent_SetApproxBeginSeqId(Expb_BlueprintComponent self, ApiInteger value);

/**
  Set for ccp.lims.ExpBlueprint.BlueprintComponent.approxEndSeqId

The 
approxEndSeqId is the approximative residue number that gives the 
residue ending position of the domain in the target sequence.
  @param  Expb_BlueprintComponent self
  @param  ApiInteger value
**/
extern void *Expb_BlueprintComponent_SetApproxEndSeqId(Expb_BlueprintComponent self, ApiInteger value);

/**
  Set for ccp.lims.ExpBlueprint.BlueprintComponent.componentType

Type of 
the blueprint component. e.g. 'PolyBlueprintComp' or 
'NonPolyBlueprintComp'
  @param  Expb_BlueprintComponent self
  @param  ApiString value
**/
extern void *Expb_BlueprintComponent_SetComponentType(Expb_BlueprintComponent self, ApiString value);

/**
  Set for ccp.lims.ExpBlueprint.BlueprintComponent.details

Detail field 
for comments.
  @param  Expb_BlueprintComponent self
  @param  ApiString value
**/
extern void *Expb_BlueprintComponent_SetDetails(Expb_BlueprintComponent self, ApiString value);

/**
  Set for ccp.lims.ExpBlueprint.BlueprintComponent.domain

The name of the 
target domain used to define the BlueprintComponent.
  @param  Expb_BlueprintComponent self
  @param  ApiString value
**/
extern void *Expb_BlueprintComponent_SetDomain(Expb_BlueprintComponent self, ApiString value);

/**
  Set for ccp.lims.ExpBlueprint.BlueprintComponent.molComponent
  @param  Expb_BlueprintComponent self
  @param  Refs_MolComponent value
**/
extern void *Expb_BlueprintComponent_SetMolComponent(Expb_BlueprintComponent self, Refs_MolComponent value);

/**
  Set for ccp.lims.ExpBlueprint.BlueprintComponent.sampleComponents
  @param  Expb_BlueprintComponent self
  @param  ApiSet values
**/
extern void *Expb_BlueprintComponent_SetSampleComponents(Expb_BlueprintComponent self, ApiSet values);

/**
  Set for ccp.lims.ExpBlueprint.BlueprintComponent.serial

Unique 
identifier.
  @param  Expb_BlueprintComponent self
  @param  ApiInteger value
**/
extern void *Expb_BlueprintComponent_SetSerial(Expb_BlueprintComponent self, ApiInteger value);

/**
  Set for ccp.lims.ExpBlueprint.BlueprintComponent.status

The status of 
the blueprint component.
  @param  Expb_BlueprintComponent self
  @param  ApiString value
**/
extern void *Expb_BlueprintComponent_SetStatus(Expb_BlueprintComponent self, ApiString value);

/**
  Set for ccp.lims.ExpBlueprint.BlueprintComponent.target

The target 
associated to the BlueprintComponent.
  @param  Expb_BlueprintComponent self
  @param  Targ_Target value
**/
extern void *Expb_BlueprintComponent_SetTarget(Expb_BlueprintComponent self, Targ_Target value);

/**
  Set for ccp.lims.ExpBlueprint.BlueprintComponent.trialMolComponents
  @param  Expb_BlueprintComponent self
  @param  ApiSet values
**/
extern void *Expb_BlueprintComponent_SetTrialMolComponents(Expb_BlueprintComponent self, ApiSet values);

/**
  Set for ccp.lims.ExpBlueprint.BlueprintComponent.whyChosen

Details of 
the basis for the selection of this BlueprintComponent.
  @param  Expb_BlueprintComponent self
  @param  ApiString value
**/
extern void *Expb_BlueprintComponent_SetWhyChosen(Expb_BlueprintComponent self, ApiString value);

/**
  Sorted for ccp.lims.ExpBlueprint.BlueprintComponent.sampleComponents
  @param  Expb_BlueprintComponent self
  @returns   the result
**/
extern ApiList Expb_BlueprintComponent_SortedSampleComponents(Expb_BlueprintComponent self);

/**
  Sorted for ccp.lims.ExpBlueprint.BlueprintComponent.trialMolComponents
  @param  Expb_BlueprintComponent self
  @returns   the result
**/
extern ApiList Expb_BlueprintComponent_SortedTrialMolComponents(Expb_BlueprintComponent self);

#endif /* __incl__ccp_api_lims_ExpBlueprint_BlueprintComponent_h__ */
