
#ifndef __incl__ccp_api_lims_Experiment_InputSample_h__
#define __incl__ccp_api_lims_Experiment_InputSample_h__

#include "ccp.h"

/*
  This is used to imply several input samples in one experiment and also one input sample in several experiments.
*/

/* package ccp.api.lims.Experiment */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_InputSample self
  @param  Impl_ApplicationData value
**/
extern void *Expe_InputSample_AddApplicationData(Expe_InputSample self, Impl_ApplicationData value);

/**
  CheckAllValid for ccp.lims.Experiment.InputSample
  @param  Expe_InputSample self
  @param  ApiBoolean complete
**/
extern void *Expe_InputSample_CheckAllValid(Expe_InputSample self, ApiBoolean complete);

/**
  CheckValid for ccp.lims.Experiment.InputSample
  @param  Expe_InputSample self
  @param  ApiBoolean complete
**/
extern void *Expe_InputSample_CheckValid(Expe_InputSample self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_InputSample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Expe_InputSample_FindAllApplicationData(Expe_InputSample self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_InputSample self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Expe_InputSample_FindAllApplicationData_keyval0(Expe_InputSample self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_InputSample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Expe_InputSample_FindAllApplicationData_keyval1(Expe_InputSample self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_InputSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Expe_InputSample_FindAllApplicationData_keyval2(Expe_InputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_InputSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Expe_InputSample_FindAllApplicationData_keyval3(Expe_InputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_InputSample self
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
extern ApiList Expe_InputSample_FindAllApplicationData_keyval4(Expe_InputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_InputSample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Expe_InputSample_FindFirstApplicationData(Expe_InputSample self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_InputSample self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Expe_InputSample_FindFirstApplicationData_keyval0(Expe_InputSample self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_InputSample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Expe_InputSample_FindFirstApplicationData_keyval1(Expe_InputSample self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_InputSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Expe_InputSample_FindFirstApplicationData_keyval2(Expe_InputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_InputSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Expe_InputSample_FindFirstApplicationData_keyval3(Expe_InputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_InputSample self
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
extern Impl_ApplicationData Expe_InputSample_FindFirstApplicationData_keyval4(Expe_InputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.lims.Experiment.InputSample
  @param  Expe_InputSample self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Expe_InputSample_Get(Expe_InputSample self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Expe_InputSample self
  @returns   the result
**/
extern Acco_AccessObject Expe_InputSample_GetAccess(Expe_InputSample self);

/**
  Get for ccp.lims.Experiment.InputSample.amount

The amount of the sample 
used by the experiment.
  @param  Expe_InputSample self
  @returns   the result
**/
extern ApiFloat Expe_InputSample_GetAmount(Expe_InputSample self);

/**
  Get for ccp.lims.Experiment.InputSample.amountDisplayUnit

This is the 
unit entered by user and used for display.
  @param  Expe_InputSample self
  @returns   the result
**/
extern ApiString Expe_InputSample_GetAmountDisplayUnit(Expe_InputSample self);

/**
  Get for ccp.lims.Experiment.InputSample.amountUnit

One of the three 
possible units: kg, m3 or number.
  @param  Expe_InputSample self
  @returns   the result
**/
extern ApiString Expe_InputSample_GetAmountUnit(Expe_InputSample self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_InputSample self
  @returns   the result
**/
extern ApiList Expe_InputSample_GetApplicationData(Expe_InputSample self);

/**
  GetByKey for ccp.lims.Experiment.InputSample
  @param  Expe_InputSample self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Expe_InputSample Expe_InputSample_GetByKey(Expe_InputSample self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Expe_InputSample self
  @returns   the result
**/
extern ApiString Expe_InputSample_GetClassName(Expe_InputSample self);

/**
  Get for ccp.lims.Experiment.InputSample.experiment

parent link
  @param  Expe_InputSample self
  @returns   the result
**/
extern Expe_Experiment Expe_InputSample_GetExperiment(Expe_InputSample self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Expe_InputSample self
  @returns   the result
**/
extern ApiList Expe_InputSample_GetFieldNames(Expe_InputSample self);

/**
  GetFullKey for ccp.lims.Experiment.InputSample
  @param  Expe_InputSample self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Expe_InputSample_GetFullKey(Expe_InputSample self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Expe_InputSample self
  @returns   the result
**/
extern ApiBoolean Expe_InputSample_GetInConstructor(Expe_InputSample self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Expe_InputSample self
  @returns   the result
**/
extern ApiBoolean Expe_InputSample_GetIsDeleted(Expe_InputSample self);

/**
  GetLocalKey for ccp.lims.Experiment.InputSample
  @param  Expe_InputSample self
  @returns  Local object key
**/
extern ApiObject Expe_InputSample_GetLocalKey(Expe_InputSample self);

/**
  Get for ccp.lims.Experiment.InputSample.name

The name to display for 
this InputSample.
  @param  Expe_InputSample self
  @returns   the result
**/
extern ApiString Expe_InputSample_GetName(Expe_InputSample self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Expe_InputSample self
  @returns   the result
**/
extern ApiString Expe_InputSample_GetPackageName(Expe_InputSample self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Expe_InputSample self
  @returns   the result
**/
extern ApiString Expe_InputSample_GetPackageShortName(Expe_InputSample self);

/**
  Get for ccp.lims.Experiment.InputSample.parent

link to parent object - 
synonym for experiment
  @param  Expe_InputSample self
  @returns   the result
**/
extern Expe_Experiment Expe_InputSample_GetParent(Expe_InputSample self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Expe_InputSample self
  @returns   the result
**/
extern ApiString Expe_InputSample_GetQualifiedName(Expe_InputSample self);

/**
  Get for ccp.lims.Experiment.InputSample.refInputSample
  @param  Expe_InputSample self
  @returns   the result
**/
extern Prot_RefInputSample Expe_InputSample_GetRefInputSample(Expe_InputSample self);

/**
  Get for ccp.lims.Experiment.InputSample.role

The role of the sample 
that it takes during the experiment or simply its classification number.
  @param  Expe_InputSample self
  @returns   the result
**/
extern ApiString Expe_InputSample_GetRole(Expe_InputSample self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Expe_InputSample self
  @returns   the result
**/
extern Impl_MemopsRoot Expe_InputSample_GetRoot(Expe_InputSample self);

/**
  Get for ccp.lims.Experiment.InputSample.sample

Sample involved as an 
input sample of an experiment.
  @param  Expe_InputSample self
  @returns   the result
**/
extern Sam_Sample Expe_InputSample_GetSample(Expe_InputSample self);

/**
  Get for ccp.lims.Experiment.InputSample.serial

Unique identifier.
  @param  Expe_InputSample self
  @returns   the result
**/
extern ApiInteger Expe_InputSample_GetSerial(Expe_InputSample self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Expe_InputSample self
  @returns   the result
**/
extern Impl_TopObject Expe_InputSample_GetTopObject(Expe_InputSample self);

/**
  Constructor for ccp.lims.Experiment.InputSample
  @param  Expe_Experiment parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Expe_InputSample Expe_InputSample_Init(Expe_Experiment parent, ApiMap attrlinks);

/**
  Constructor for ccp.lims.Experiment.InputSample
  @param  Expe_Experiment parent
  @returns  the new object
**/
extern Expe_InputSample Expe_InputSample_Init_reqd(Expe_Experiment parent);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_InputSample self
  @param  Impl_ApplicationData value
**/
extern void *Expe_InputSample_RemoveApplicationData(Expe_InputSample self, Impl_ApplicationData value);

/**
  SetAttr for ccp.lims.Experiment.InputSample
  @param  Expe_InputSample self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Expe_InputSample_Set(Expe_InputSample self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Expe_InputSample self
  @param  Acco_AccessObject value
**/
extern void *Expe_InputSample_SetAccess(Expe_InputSample self, Acco_AccessObject value);

/**
  Set for ccp.lims.Experiment.InputSample.amount

The amount of the sample 
used by the experiment.
  @param  Expe_InputSample self
  @param  ApiFloat value
**/
extern void *Expe_InputSample_SetAmount(Expe_InputSample self, ApiFloat value);

/**
  Set for ccp.lims.Experiment.InputSample.amountDisplayUnit

This is the 
unit entered by user and used for display.
  @param  Expe_InputSample self
  @param  ApiString value
**/
extern void *Expe_InputSample_SetAmountDisplayUnit(Expe_InputSample self, ApiString value);

/**
  Set for ccp.lims.Experiment.InputSample.amountUnit

One of the three 
possible units: kg, m3 or number.
  @param  Expe_InputSample self
  @param  ApiString value
**/
extern void *Expe_InputSample_SetAmountUnit(Expe_InputSample self, ApiString value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_InputSample self
  @param  ApiList values
**/
extern void *Expe_InputSample_SetApplicationData(Expe_InputSample self, ApiList values);

/**
  Set for ccp.lims.Experiment.InputSample.name

The name to display for 
this InputSample.
  @param  Expe_InputSample self
  @param  ApiString value
**/
extern void *Expe_InputSample_SetName(Expe_InputSample self, ApiString value);

/**
  Set for ccp.lims.Experiment.InputSample.refInputSample
  @param  Expe_InputSample self
  @param  Prot_RefInputSample value
**/
extern void *Expe_InputSample_SetRefInputSample(Expe_InputSample self, Prot_RefInputSample value);

/**
  Set for ccp.lims.Experiment.InputSample.role

The role of the sample 
that it takes during the experiment or simply its classification number.
  @param  Expe_InputSample self
  @param  ApiString value
**/
extern void *Expe_InputSample_SetRole(Expe_InputSample self, ApiString value);

/**
  Set for ccp.lims.Experiment.InputSample.sample

Sample involved as an 
input sample of an experiment.
  @param  Expe_InputSample self
  @param  Sam_Sample value
**/
extern void *Expe_InputSample_SetSample(Expe_InputSample self, Sam_Sample value);

/**
  Set for ccp.lims.Experiment.InputSample.serial

Unique identifier.
  @param  Expe_InputSample self
  @param  ApiInteger value
**/
extern void *Expe_InputSample_SetSerial(Expe_InputSample self, ApiInteger value);

#endif /* __incl__ccp_api_lims_Experiment_InputSample_h__ */
