
#ifndef __incl__ccp_api_lims_Experiment_Parameter_h__
#define __incl__ccp_api_lims_Experiment_Parameter_h__

#include "ccp.h"

/*
  A run-time parameter (or result) of the parent Experiment.
*/

/* package ccp.api.lims.Experiment */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_Parameter self
  @param  Impl_ApplicationData value
**/
extern void *Expe_Parameter_AddApplicationData(Expe_Parameter self, Impl_ApplicationData value);

/**
  CheckAllValid for ccp.lims.Experiment.Parameter
  @param  Expe_Parameter self
  @param  ApiBoolean complete
**/
extern void *Expe_Parameter_CheckAllValid(Expe_Parameter self, ApiBoolean complete);

/**
  CheckValid for ccp.lims.Experiment.Parameter
  @param  Expe_Parameter self
  @param  ApiBoolean complete
**/
extern void *Expe_Parameter_CheckValid(Expe_Parameter self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_Parameter self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Expe_Parameter_FindAllApplicationData(Expe_Parameter self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_Parameter self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Expe_Parameter_FindAllApplicationData_keyval0(Expe_Parameter self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_Parameter self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Expe_Parameter_FindAllApplicationData_keyval1(Expe_Parameter self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_Parameter self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Expe_Parameter_FindAllApplicationData_keyval2(Expe_Parameter self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_Parameter self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Expe_Parameter_FindAllApplicationData_keyval3(Expe_Parameter self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_Parameter self
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
extern ApiList Expe_Parameter_FindAllApplicationData_keyval4(Expe_Parameter self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_Parameter self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Expe_Parameter_FindFirstApplicationData(Expe_Parameter self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_Parameter self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Expe_Parameter_FindFirstApplicationData_keyval0(Expe_Parameter self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_Parameter self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Expe_Parameter_FindFirstApplicationData_keyval1(Expe_Parameter self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_Parameter self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Expe_Parameter_FindFirstApplicationData_keyval2(Expe_Parameter self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_Parameter self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Expe_Parameter_FindFirstApplicationData_keyval3(Expe_Parameter self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_Parameter self
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
extern Impl_ApplicationData Expe_Parameter_FindFirstApplicationData_keyval4(Expe_Parameter self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.lims.Experiment.Parameter
  @param  Expe_Parameter self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Expe_Parameter_Get(Expe_Parameter self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Expe_Parameter self
  @returns   the result
**/
extern Acco_AccessObject Expe_Parameter_GetAccess(Expe_Parameter self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Expe_Parameter self
  @returns   the result
**/
extern Acco_AccessObject Expe_Parameter_GetActiveAccess(Expe_Parameter self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_Parameter self
  @returns   the result
**/
extern ApiList Expe_Parameter_GetApplicationData(Expe_Parameter self);

/**
  GetByKey for ccp.lims.Experiment.Parameter
  @param  Expe_Parameter self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Expe_Parameter Expe_Parameter_GetByKey(Expe_Parameter self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Expe_Parameter self
  @returns   the result
**/
extern ApiString Expe_Parameter_GetClassName(Expe_Parameter self);

/**
  Get for ccp.lims.Experiment.Parameter.experiment

parent link
  @param  Expe_Parameter self
  @returns   the result
**/
extern Expe_Experiment Expe_Parameter_GetExperiment(Expe_Parameter self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Expe_Parameter self
  @returns   the result
**/
extern ApiList Expe_Parameter_GetFieldNames(Expe_Parameter self);

/**
  GetFullKey for ccp.lims.Experiment.Parameter
  @param  Expe_Parameter self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Expe_Parameter_GetFullKey(Expe_Parameter self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Expe_Parameter self
  @returns   the result
**/
extern ApiBoolean Expe_Parameter_GetInConstructor(Expe_Parameter self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Expe_Parameter self
  @returns   the result
**/
extern ApiBoolean Expe_Parameter_GetIsDeleted(Expe_Parameter self);

/**
  GetLocalKey for ccp.lims.Experiment.Parameter
  @param  Expe_Parameter self
  @returns  Local object key
**/
extern ApiObject Expe_Parameter_GetLocalKey(Expe_Parameter self);

/**
  Get for ccp.lims.Experiment.Parameter.name

The name of this Parameter.
  @param  Expe_Parameter self
  @returns   the result
**/
extern ApiString Expe_Parameter_GetName(Expe_Parameter self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Expe_Parameter self
  @returns   the result
**/
extern ApiString Expe_Parameter_GetPackageName(Expe_Parameter self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Expe_Parameter self
  @returns   the result
**/
extern ApiString Expe_Parameter_GetPackageShortName(Expe_Parameter self);

/**
  Get for ccp.lims.Experiment.Parameter.paramType

The type of this 
Parameter.
  @param  Expe_Parameter self
  @returns   the result
**/
extern ApiString Expe_Parameter_GetParamType(Expe_Parameter self);

/**
  Get for ccp.lims.Experiment.Parameter.parameterDefinition
  @param  Expe_Parameter self
  @returns   the result
**/
extern Prot_ParameterDefinition Expe_Parameter_GetParameterDefinition(Expe_Parameter self);

/**
  Get for ccp.lims.Experiment.Parameter.parent

link to parent object - 
synonym for experiment
  @param  Expe_Parameter self
  @returns   the result
**/
extern Expe_Experiment Expe_Parameter_GetParent(Expe_Parameter self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Expe_Parameter self
  @returns   the result
**/
extern ApiString Expe_Parameter_GetQualifiedName(Expe_Parameter self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Expe_Parameter self
  @returns   the result
**/
extern Impl_MemopsRoot Expe_Parameter_GetRoot(Expe_Parameter self);

/**
  Get for ccp.lims.Experiment.Parameter.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Expe_Parameter self
  @returns   the result
**/
extern ApiInteger Expe_Parameter_GetSerial(Expe_Parameter self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Expe_Parameter self
  @returns   the result
**/
extern Impl_TopObject Expe_Parameter_GetTopObject(Expe_Parameter self);

/**
  Get for ccp.lims.Experiment.Parameter.unit

The unit for this Parameter.
  @param  Expe_Parameter self
  @returns   the result
**/
extern ApiString Expe_Parameter_GetUnit(Expe_Parameter self);

/**
  Get for ccp.lims.Experiment.Parameter.value

The value of this 
Parameter.
  @param  Expe_Parameter self
  @returns   the result
**/
extern ApiString Expe_Parameter_GetValue(Expe_Parameter self);

/**
  Constructor for ccp.lims.Experiment.Parameter
  @param  Expe_Experiment parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Expe_Parameter Expe_Parameter_Init(Expe_Experiment parent, ApiMap attrlinks);

/**
  Constructor for ccp.lims.Experiment.Parameter
  @param  Expe_Experiment parent
  @returns  the new object
**/
extern Expe_Parameter Expe_Parameter_Init_reqd(Expe_Experiment parent);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_Parameter self
  @param  Impl_ApplicationData value
**/
extern void *Expe_Parameter_RemoveApplicationData(Expe_Parameter self, Impl_ApplicationData value);

/**
  SetAttr for ccp.lims.Experiment.Parameter
  @param  Expe_Parameter self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Expe_Parameter_Set(Expe_Parameter self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Expe_Parameter self
  @param  Acco_AccessObject value
**/
extern void *Expe_Parameter_SetAccess(Expe_Parameter self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_Parameter self
  @param  ApiList values
**/
extern void *Expe_Parameter_SetApplicationData(Expe_Parameter self, ApiList values);

/**
  Set for ccp.lims.Experiment.Parameter.name

The name of this Parameter.
  @param  Expe_Parameter self
  @param  ApiString value
**/
extern void *Expe_Parameter_SetName(Expe_Parameter self, ApiString value);

/**
  Set for ccp.lims.Experiment.Parameter.paramType

The type of this 
Parameter.
  @param  Expe_Parameter self
  @param  ApiString value
**/
extern void *Expe_Parameter_SetParamType(Expe_Parameter self, ApiString value);

/**
  Set for ccp.lims.Experiment.Parameter.parameterDefinition
  @param  Expe_Parameter self
  @param  Prot_ParameterDefinition value
**/
extern void *Expe_Parameter_SetParameterDefinition(Expe_Parameter self, Prot_ParameterDefinition value);

/**
  Set for ccp.lims.Experiment.Parameter.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Expe_Parameter self
  @param  ApiInteger value
**/
extern void *Expe_Parameter_SetSerial(Expe_Parameter self, ApiInteger value);

/**
  Set for ccp.lims.Experiment.Parameter.unit

The unit for this Parameter.
  @param  Expe_Parameter self
  @param  ApiString value
**/
extern void *Expe_Parameter_SetUnit(Expe_Parameter self, ApiString value);

/**
  Set for ccp.lims.Experiment.Parameter.value

The value of this 
Parameter.
  @param  Expe_Parameter self
  @param  ApiString value
**/
extern void *Expe_Parameter_SetValue(Expe_Parameter self, ApiString value);

#endif /* __incl__ccp_api_lims_Experiment_Parameter_h__ */
