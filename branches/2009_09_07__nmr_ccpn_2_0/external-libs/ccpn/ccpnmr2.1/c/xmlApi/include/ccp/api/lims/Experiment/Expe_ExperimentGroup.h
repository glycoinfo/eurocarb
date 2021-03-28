
#ifndef __incl__ccp_api_lims_Experiment_ExperimentGroup_h__
#define __incl__ccp_api_lims_Experiment_ExperimentGroup_h__

#include "ccp.h"

/*
  Group of experiments serving a given purpose.
*/

/* package ccp.api.lims.Experiment */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_ExperimentGroup self
  @param  Impl_ApplicationData value
**/
extern void *Expe_ExperimentGroup_AddApplicationData(Expe_ExperimentGroup self, Impl_ApplicationData value);

/**
  Add for ccp.lims.Experiment.ExperimentGroup.experiments

Experiments 
grouped under the same ExperimentGroup.
  @param  Expe_ExperimentGroup self
  @param  Expe_Experiment value
**/
extern void *Expe_ExperimentGroup_AddExperiment(Expe_ExperimentGroup self, Expe_Experiment value);

/**
  CheckAllValid for ccp.lims.Experiment.ExperimentGroup
  @param  Expe_ExperimentGroup self
  @param  ApiBoolean complete
**/
extern void *Expe_ExperimentGroup_CheckAllValid(Expe_ExperimentGroup self, ApiBoolean complete);

/**
  CheckValid for ccp.lims.Experiment.ExperimentGroup
  @param  Expe_ExperimentGroup self
  @param  ApiBoolean complete
**/
extern void *Expe_ExperimentGroup_CheckValid(Expe_ExperimentGroup self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_ExperimentGroup self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Expe_ExperimentGroup_FindAllApplicationData(Expe_ExperimentGroup self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_ExperimentGroup self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Expe_ExperimentGroup_FindAllApplicationData_keyval0(Expe_ExperimentGroup self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_ExperimentGroup self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Expe_ExperimentGroup_FindAllApplicationData_keyval1(Expe_ExperimentGroup self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_ExperimentGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Expe_ExperimentGroup_FindAllApplicationData_keyval2(Expe_ExperimentGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_ExperimentGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Expe_ExperimentGroup_FindAllApplicationData_keyval3(Expe_ExperimentGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_ExperimentGroup self
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
extern ApiList Expe_ExperimentGroup_FindAllApplicationData_keyval4(Expe_ExperimentGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.Experiment.ExperimentGroup.experiments

Experiments 
grouped under the same ExperimentGroup.
  @param  Expe_ExperimentGroup self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Expe_ExperimentGroup_FindAllExperiments(Expe_ExperimentGroup self, ApiMap conditions);

/**
  FindAll for ccp.lims.Experiment.ExperimentGroup.experiments

Experiments 
grouped under the same ExperimentGroup.
  @param  Expe_ExperimentGroup self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Expe_ExperimentGroup_FindAllExperiments_keyval0(Expe_ExperimentGroup self);

/**
  FindAll for ccp.lims.Experiment.ExperimentGroup.experiments

Experiments 
grouped under the same ExperimentGroup.
  @param  Expe_ExperimentGroup self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Expe_ExperimentGroup_FindAllExperiments_keyval1(Expe_ExperimentGroup self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.Experiment.ExperimentGroup.experiments

Experiments 
grouped under the same ExperimentGroup.
  @param  Expe_ExperimentGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Expe_ExperimentGroup_FindAllExperiments_keyval2(Expe_ExperimentGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.Experiment.ExperimentGroup.experiments

Experiments 
grouped under the same ExperimentGroup.
  @param  Expe_ExperimentGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Expe_ExperimentGroup_FindAllExperiments_keyval3(Expe_ExperimentGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.Experiment.ExperimentGroup.experiments

Experiments 
grouped under the same ExperimentGroup.
  @param  Expe_ExperimentGroup self
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
extern ApiSet Expe_ExperimentGroup_FindAllExperiments_keyval4(Expe_ExperimentGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_ExperimentGroup self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Expe_ExperimentGroup_FindFirstApplicationData(Expe_ExperimentGroup self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_ExperimentGroup self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Expe_ExperimentGroup_FindFirstApplicationData_keyval0(Expe_ExperimentGroup self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_ExperimentGroup self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Expe_ExperimentGroup_FindFirstApplicationData_keyval1(Expe_ExperimentGroup self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_ExperimentGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Expe_ExperimentGroup_FindFirstApplicationData_keyval2(Expe_ExperimentGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_ExperimentGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Expe_ExperimentGroup_FindFirstApplicationData_keyval3(Expe_ExperimentGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_ExperimentGroup self
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
extern Impl_ApplicationData Expe_ExperimentGroup_FindFirstApplicationData_keyval4(Expe_ExperimentGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.lims.Experiment.ExperimentGroup.experiments

Experiments grouped 
under the same ExperimentGroup.
  @param  Expe_ExperimentGroup self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Expe_Experiment Expe_ExperimentGroup_FindFirstExperiment(Expe_ExperimentGroup self, ApiMap conditions);

/**
  FindFirst for 
ccp.lims.Experiment.ExperimentGroup.experiments

Experiments grouped 
under the same ExperimentGroup.
  @param  Expe_ExperimentGroup self
  @returns  the first value that satisfies the conditions 
**/
extern Expe_Experiment Expe_ExperimentGroup_FindFirstExperiment_keyval0(Expe_ExperimentGroup self);

/**
  FindFirst for 
ccp.lims.Experiment.ExperimentGroup.experiments

Experiments grouped 
under the same ExperimentGroup.
  @param  Expe_ExperimentGroup self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Expe_Experiment Expe_ExperimentGroup_FindFirstExperiment_keyval1(Expe_ExperimentGroup self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.lims.Experiment.ExperimentGroup.experiments

Experiments grouped 
under the same ExperimentGroup.
  @param  Expe_ExperimentGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Expe_Experiment Expe_ExperimentGroup_FindFirstExperiment_keyval2(Expe_ExperimentGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.lims.Experiment.ExperimentGroup.experiments

Experiments grouped 
under the same ExperimentGroup.
  @param  Expe_ExperimentGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Expe_Experiment Expe_ExperimentGroup_FindFirstExperiment_keyval3(Expe_ExperimentGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.lims.Experiment.ExperimentGroup.experiments

Experiments grouped 
under the same ExperimentGroup.
  @param  Expe_ExperimentGroup self
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
extern Expe_Experiment Expe_ExperimentGroup_FindFirstExperiment_keyval4(Expe_ExperimentGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.lims.Experiment.ExperimentGroup
  @param  Expe_ExperimentGroup self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Expe_ExperimentGroup_Get(Expe_ExperimentGroup self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Expe_ExperimentGroup self
  @returns   the result
**/
extern Acco_AccessObject Expe_ExperimentGroup_GetAccess(Expe_ExperimentGroup self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Expe_ExperimentGroup self
  @returns   the result
**/
extern Acco_AccessObject Expe_ExperimentGroup_GetActiveAccess(Expe_ExperimentGroup self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_ExperimentGroup self
  @returns   the result
**/
extern ApiList Expe_ExperimentGroup_GetApplicationData(Expe_ExperimentGroup self);

/**
  GetByKey for ccp.lims.Experiment.ExperimentGroup
  @param  Expe_ExperimentGroup self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Expe_ExperimentGroup Expe_ExperimentGroup_GetByKey(Expe_ExperimentGroup self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Expe_ExperimentGroup self
  @returns   the result
**/
extern ApiString Expe_ExperimentGroup_GetClassName(Expe_ExperimentGroup self);

/**
  Get for ccp.lims.Experiment.ExperimentGroup.details

Detail field for 
comments.
  @param  Expe_ExperimentGroup self
  @returns   the result
**/
extern ApiString Expe_ExperimentGroup_GetDetails(Expe_ExperimentGroup self);

/**
  Get for ccp.lims.Experiment.ExperimentGroup.endDate

The end date of the 
experiment step.
  @param  Expe_ExperimentGroup self
  @returns   the result
**/
extern ApiString Expe_ExperimentGroup_GetEndDate(Expe_ExperimentGroup self);

/**
  Get for ccp.lims.Experiment.ExperimentGroup.experimentStore

parent link
  @param  Expe_ExperimentGroup self
  @returns   the result
**/
extern Expe_ExperimentStore Expe_ExperimentGroup_GetExperimentStore(Expe_ExperimentGroup self);

/**
  Get for ccp.lims.Experiment.ExperimentGroup.experiments

Experiments 
grouped under the same ExperimentGroup.
  @param  Expe_ExperimentGroup self
  @returns   the result
**/
extern ApiSet Expe_ExperimentGroup_GetExperiments(Expe_ExperimentGroup self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Expe_ExperimentGroup self
  @returns   the result
**/
extern ApiList Expe_ExperimentGroup_GetFieldNames(Expe_ExperimentGroup self);

/**
  GetFullKey for ccp.lims.Experiment.ExperimentGroup
  @param  Expe_ExperimentGroup self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Expe_ExperimentGroup_GetFullKey(Expe_ExperimentGroup self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Expe_ExperimentGroup self
  @returns   the result
**/
extern ApiBoolean Expe_ExperimentGroup_GetInConstructor(Expe_ExperimentGroup self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Expe_ExperimentGroup self
  @returns   the result
**/
extern ApiBoolean Expe_ExperimentGroup_GetIsDeleted(Expe_ExperimentGroup self);

/**
  GetLocalKey for ccp.lims.Experiment.ExperimentGroup
  @param  Expe_ExperimentGroup self
  @returns  Local object key
**/
extern ApiObject Expe_ExperimentGroup_GetLocalKey(Expe_ExperimentGroup self);

/**
  Get for ccp.lims.Experiment.ExperimentGroup.name

The name of the group 
of experiment. e.g. 'cloning', 'expression',...
  @param  Expe_ExperimentGroup self
  @returns   the result
**/
extern ApiString Expe_ExperimentGroup_GetName(Expe_ExperimentGroup self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Expe_ExperimentGroup self
  @returns   the result
**/
extern ApiString Expe_ExperimentGroup_GetPackageName(Expe_ExperimentGroup self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Expe_ExperimentGroup self
  @returns   the result
**/
extern ApiString Expe_ExperimentGroup_GetPackageShortName(Expe_ExperimentGroup self);

/**
  Get for ccp.lims.Experiment.ExperimentGroup.parent

link to parent 
object - synonym for experimentStore
  @param  Expe_ExperimentGroup self
  @returns   the result
**/
extern Expe_ExperimentStore Expe_ExperimentGroup_GetParent(Expe_ExperimentGroup self);

/**
  Get for ccp.lims.Experiment.ExperimentGroup.purpose

The purpose of the 
experiment group.
  @param  Expe_ExperimentGroup self
  @returns   the result
**/
extern ApiString Expe_ExperimentGroup_GetPurpose(Expe_ExperimentGroup self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Expe_ExperimentGroup self
  @returns   the result
**/
extern ApiString Expe_ExperimentGroup_GetQualifiedName(Expe_ExperimentGroup self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Expe_ExperimentGroup self
  @returns   the result
**/
extern Impl_MemopsRoot Expe_ExperimentGroup_GetRoot(Expe_ExperimentGroup self);

/**
  Get for ccp.lims.Experiment.ExperimentGroup.serial

Unique identifier.
  @param  Expe_ExperimentGroup self
  @returns   the result
**/
extern ApiInteger Expe_ExperimentGroup_GetSerial(Expe_ExperimentGroup self);

/**
  Get for ccp.lims.Experiment.ExperimentGroup.startDate

The start date of 
the experiment group step (e.g. '2003-12-25', '2003-12-25:09:00').
  @param  Expe_ExperimentGroup self
  @returns   the result
**/
extern ApiString Expe_ExperimentGroup_GetStartDate(Expe_ExperimentGroup self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Expe_ExperimentGroup self
  @returns   the result
**/
extern Impl_TopObject Expe_ExperimentGroup_GetTopObject(Expe_ExperimentGroup self);

/**
  Constructor for ccp.lims.Experiment.ExperimentGroup
  @param  Expe_ExperimentStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Expe_ExperimentGroup Expe_ExperimentGroup_Init(Expe_ExperimentStore parent, ApiMap attrlinks);

/**
  Constructor for ccp.lims.Experiment.ExperimentGroup
  @param  Expe_ExperimentStore parent
  @param  char * name
  @param  char * purpose
  @returns  the new object
**/
extern Expe_ExperimentGroup Expe_ExperimentGroup_Init_reqd(Expe_ExperimentStore parent, char * name, char * purpose);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_ExperimentGroup self
  @param  Impl_ApplicationData value
**/
extern void *Expe_ExperimentGroup_RemoveApplicationData(Expe_ExperimentGroup self, Impl_ApplicationData value);

/**
  Remove for ccp.lims.Experiment.ExperimentGroup.experiments

Experiments 
grouped under the same ExperimentGroup.
  @param  Expe_ExperimentGroup self
  @param  Expe_Experiment value
**/
extern void *Expe_ExperimentGroup_RemoveExperiment(Expe_ExperimentGroup self, Expe_Experiment value);

/**
  SetAttr for ccp.lims.Experiment.ExperimentGroup
  @param  Expe_ExperimentGroup self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Expe_ExperimentGroup_Set(Expe_ExperimentGroup self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Expe_ExperimentGroup self
  @param  Acco_AccessObject value
**/
extern void *Expe_ExperimentGroup_SetAccess(Expe_ExperimentGroup self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_ExperimentGroup self
  @param  ApiList values
**/
extern void *Expe_ExperimentGroup_SetApplicationData(Expe_ExperimentGroup self, ApiList values);

/**
  Set for ccp.lims.Experiment.ExperimentGroup.details

Detail field for 
comments.
  @param  Expe_ExperimentGroup self
  @param  ApiString value
**/
extern void *Expe_ExperimentGroup_SetDetails(Expe_ExperimentGroup self, ApiString value);

/**
  Set for ccp.lims.Experiment.ExperimentGroup.endDate

The end date of the 
experiment step.
  @param  Expe_ExperimentGroup self
  @param  ApiString value
**/
extern void *Expe_ExperimentGroup_SetEndDate(Expe_ExperimentGroup self, ApiString value);

/**
  Set for ccp.lims.Experiment.ExperimentGroup.experiments

Experiments 
grouped under the same ExperimentGroup.
  @param  Expe_ExperimentGroup self
  @param  ApiSet values
**/
extern void *Expe_ExperimentGroup_SetExperiments(Expe_ExperimentGroup self, ApiSet values);

/**
  Set for ccp.lims.Experiment.ExperimentGroup.name

The name of the group 
of experiment. e.g. 'cloning', 'expression',...
  @param  Expe_ExperimentGroup self
  @param  ApiString value
**/
extern void *Expe_ExperimentGroup_SetName(Expe_ExperimentGroup self, ApiString value);

/**
  Set for ccp.lims.Experiment.ExperimentGroup.purpose

The purpose of the 
experiment group.
  @param  Expe_ExperimentGroup self
  @param  ApiString value
**/
extern void *Expe_ExperimentGroup_SetPurpose(Expe_ExperimentGroup self, ApiString value);

/**
  Set for ccp.lims.Experiment.ExperimentGroup.serial

Unique identifier.
  @param  Expe_ExperimentGroup self
  @param  ApiInteger value
**/
extern void *Expe_ExperimentGroup_SetSerial(Expe_ExperimentGroup self, ApiInteger value);

/**
  Set for ccp.lims.Experiment.ExperimentGroup.startDate

The start date of 
the experiment group step (e.g. '2003-12-25', '2003-12-25:09:00').
  @param  Expe_ExperimentGroup self
  @param  ApiString value
**/
extern void *Expe_ExperimentGroup_SetStartDate(Expe_ExperimentGroup self, ApiString value);

/**
  Sorted for ccp.lims.Experiment.ExperimentGroup.experiments

Experiments 
grouped under the same ExperimentGroup.
  @param  Expe_ExperimentGroup self
  @returns   the result
**/
extern ApiList Expe_ExperimentGroup_SortedExperiments(Expe_ExperimentGroup self);

#endif /* __incl__ccp_api_lims_Experiment_ExperimentGroup_h__ */
