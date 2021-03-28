
#ifndef __incl__ccp_api_lims_Crystallization_ParameterDefinition_h__
#define __incl__ccp_api_lims_Crystallization_ParameterDefinition_h__

#include "ccp.h"

/*
  The list of possible parameters associated with a protocol where the values are associated with an Experiment.
*/

/* package ccp.api.lims.Crystallization */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_ParameterDefinition self
  @param  Impl_ApplicationData value
**/
extern void *Cryz_ParameterDefinition_AddApplicationData(Cryz_ParameterDefinition self, Impl_ApplicationData value);

/**
  Add for ccp.lims.Crystallization.ParameterDefinition.possibleValues

The 
list of possible values for the parameter.
  @param  Cryz_ParameterDefinition self
  @param  ApiString value
**/
extern void *Cryz_ParameterDefinition_AddPossibleValue(Cryz_ParameterDefinition self, ApiString value);

/**
  CheckAllValid for ccp.lims.Crystallization.ParameterDefinition
  @param  Cryz_ParameterDefinition self
  @param  ApiBoolean complete
**/
extern void *Cryz_ParameterDefinition_CheckAllValid(Cryz_ParameterDefinition self, ApiBoolean complete);

/**
  CheckValid for ccp.lims.Crystallization.ParameterDefinition
  @param  Cryz_ParameterDefinition self
  @param  ApiBoolean complete
**/
extern void *Cryz_ParameterDefinition_CheckValid(Cryz_ParameterDefinition self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_ParameterDefinition self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cryz_ParameterDefinition_FindAllApplicationData(Cryz_ParameterDefinition self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_ParameterDefinition self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cryz_ParameterDefinition_FindAllApplicationData_keyval0(Cryz_ParameterDefinition self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_ParameterDefinition self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cryz_ParameterDefinition_FindAllApplicationData_keyval1(Cryz_ParameterDefinition self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_ParameterDefinition self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cryz_ParameterDefinition_FindAllApplicationData_keyval2(Cryz_ParameterDefinition self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_ParameterDefinition self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cryz_ParameterDefinition_FindAllApplicationData_keyval3(Cryz_ParameterDefinition self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_ParameterDefinition self
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
extern ApiList Cryz_ParameterDefinition_FindAllApplicationData_keyval4(Cryz_ParameterDefinition self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.Crystallization.ParameterDefinition.parameters
  @param  Cryz_ParameterDefinition self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cryz_ParameterDefinition_FindAllParameters(Cryz_ParameterDefinition self, ApiMap conditions);

/**
  FindAll for ccp.lims.Crystallization.ParameterDefinition.parameters
  @param  Cryz_ParameterDefinition self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cryz_ParameterDefinition_FindAllParameters_keyval0(Cryz_ParameterDefinition self);

/**
  FindAll for ccp.lims.Crystallization.ParameterDefinition.parameters
  @param  Cryz_ParameterDefinition self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cryz_ParameterDefinition_FindAllParameters_keyval1(Cryz_ParameterDefinition self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.Crystallization.ParameterDefinition.parameters
  @param  Cryz_ParameterDefinition self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cryz_ParameterDefinition_FindAllParameters_keyval2(Cryz_ParameterDefinition self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.Crystallization.ParameterDefinition.parameters
  @param  Cryz_ParameterDefinition self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cryz_ParameterDefinition_FindAllParameters_keyval3(Cryz_ParameterDefinition self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.Crystallization.ParameterDefinition.parameters
  @param  Cryz_ParameterDefinition self
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
extern ApiSet Cryz_ParameterDefinition_FindAllParameters_keyval4(Cryz_ParameterDefinition self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_ParameterDefinition self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Cryz_ParameterDefinition_FindFirstApplicationData(Cryz_ParameterDefinition self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_ParameterDefinition self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Cryz_ParameterDefinition_FindFirstApplicationData_keyval0(Cryz_ParameterDefinition self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_ParameterDefinition self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Cryz_ParameterDefinition_FindFirstApplicationData_keyval1(Cryz_ParameterDefinition self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_ParameterDefinition self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Cryz_ParameterDefinition_FindFirstApplicationData_keyval2(Cryz_ParameterDefinition self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_ParameterDefinition self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Cryz_ParameterDefinition_FindFirstApplicationData_keyval3(Cryz_ParameterDefinition self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_ParameterDefinition self
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
extern Impl_ApplicationData Cryz_ParameterDefinition_FindFirstApplicationData_keyval4(Cryz_ParameterDefinition self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.lims.Crystallization.ParameterDefinition.parameters
  @param  Cryz_ParameterDefinition self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Cryz_Parameter Cryz_ParameterDefinition_FindFirstParameter(Cryz_ParameterDefinition self, ApiMap conditions);

/**
  FindFirst for ccp.lims.Crystallization.ParameterDefinition.parameters
  @param  Cryz_ParameterDefinition self
  @returns  the first value that satisfies the conditions 
**/
extern Cryz_Parameter Cryz_ParameterDefinition_FindFirstParameter_keyval0(Cryz_ParameterDefinition self);

/**
  FindFirst for ccp.lims.Crystallization.ParameterDefinition.parameters
  @param  Cryz_ParameterDefinition self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Cryz_Parameter Cryz_ParameterDefinition_FindFirstParameter_keyval1(Cryz_ParameterDefinition self, char * key, ApiObject value);

/**
  FindFirst for ccp.lims.Crystallization.ParameterDefinition.parameters
  @param  Cryz_ParameterDefinition self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Cryz_Parameter Cryz_ParameterDefinition_FindFirstParameter_keyval2(Cryz_ParameterDefinition self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.lims.Crystallization.ParameterDefinition.parameters
  @param  Cryz_ParameterDefinition self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Cryz_Parameter Cryz_ParameterDefinition_FindFirstParameter_keyval3(Cryz_ParameterDefinition self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.lims.Crystallization.ParameterDefinition.parameters
  @param  Cryz_ParameterDefinition self
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
extern Cryz_Parameter Cryz_ParameterDefinition_FindFirstParameter_keyval4(Cryz_ParameterDefinition self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.lims.Crystallization.ParameterDefinition
  @param  Cryz_ParameterDefinition self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Cryz_ParameterDefinition_Get(Cryz_ParameterDefinition self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Cryz_ParameterDefinition self
  @returns   the result
**/
extern Acco_AccessObject Cryz_ParameterDefinition_GetAccess(Cryz_ParameterDefinition self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Cryz_ParameterDefinition self
  @returns   the result
**/
extern Acco_AccessObject Cryz_ParameterDefinition_GetActiveAccess(Cryz_ParameterDefinition self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_ParameterDefinition self
  @returns   the result
**/
extern ApiList Cryz_ParameterDefinition_GetApplicationData(Cryz_ParameterDefinition self);

/**
  GetByKey for ccp.lims.Crystallization.ParameterDefinition
  @param  Cryz_ParameterDefinition self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Cryz_ParameterDefinition Cryz_ParameterDefinition_GetByKey(Cryz_ParameterDefinition self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Cryz_ParameterDefinition self
  @returns   the result
**/
extern ApiString Cryz_ParameterDefinition_GetClassName(Cryz_ParameterDefinition self);

/**
  Get for 
ccp.lims.Crystallization.ParameterDefinition.crystallizationStore

parent 
link
  @param  Cryz_ParameterDefinition self
  @returns   the result
**/
extern Cryz_CrystallizationStore Cryz_ParameterDefinition_GetCrystallizationStore(Cryz_ParameterDefinition self);

/**
  Get for ccp.lims.Crystallization.ParameterDefinition.defaultValue

The 
default value of the parameter.
  @param  Cryz_ParameterDefinition self
  @returns   the result
**/
extern ApiString Cryz_ParameterDefinition_GetDefaultValue(Cryz_ParameterDefinition self);

/**
  Get for 
ccp.lims.Crystallization.ParameterDefinition.displayUnit

Display unit 
of the parameter.
  @param  Cryz_ParameterDefinition self
  @returns   the result
**/
extern ApiString Cryz_ParameterDefinition_GetDisplayUnit(Cryz_ParameterDefinition self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Cryz_ParameterDefinition self
  @returns   the result
**/
extern ApiList Cryz_ParameterDefinition_GetFieldNames(Cryz_ParameterDefinition self);

/**
  GetFullKey for ccp.lims.Crystallization.ParameterDefinition
  @param  Cryz_ParameterDefinition self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Cryz_ParameterDefinition_GetFullKey(Cryz_ParameterDefinition self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Cryz_ParameterDefinition self
  @returns   the result
**/
extern ApiBoolean Cryz_ParameterDefinition_GetInConstructor(Cryz_ParameterDefinition self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Cryz_ParameterDefinition self
  @returns   the result
**/
extern ApiBoolean Cryz_ParameterDefinition_GetIsDeleted(Cryz_ParameterDefinition self);

/**
  Get for ccp.lims.Crystallization.ParameterDefinition.label

Label of the 
parameter.
  @param  Cryz_ParameterDefinition self
  @returns   the result
**/
extern ApiString Cryz_ParameterDefinition_GetLabel(Cryz_ParameterDefinition self);

/**
  GetLocalKey for ccp.lims.Crystallization.ParameterDefinition
  @param  Cryz_ParameterDefinition self
  @returns  Local object key
**/
extern ApiObject Cryz_ParameterDefinition_GetLocalKey(Cryz_ParameterDefinition self);

/**
  Get for ccp.lims.Crystallization.ParameterDefinition.maxValue

The 
maximum value of the parameter.
  @param  Cryz_ParameterDefinition self
  @returns   the result
**/
extern ApiString Cryz_ParameterDefinition_GetMaxValue(Cryz_ParameterDefinition self);

/**
  Get for ccp.lims.Crystallization.ParameterDefinition.minValue

The 
minimum value of the parameter.
  @param  Cryz_ParameterDefinition self
  @returns   the result
**/
extern ApiString Cryz_ParameterDefinition_GetMinValue(Cryz_ParameterDefinition self);

/**
  Get for ccp.lims.Crystallization.ParameterDefinition.name

The name of 
the parameter.
  @param  Cryz_ParameterDefinition self
  @returns   the result
**/
extern ApiString Cryz_ParameterDefinition_GetName(Cryz_ParameterDefinition self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Cryz_ParameterDefinition self
  @returns   the result
**/
extern ApiString Cryz_ParameterDefinition_GetPackageName(Cryz_ParameterDefinition self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Cryz_ParameterDefinition self
  @returns   the result
**/
extern ApiString Cryz_ParameterDefinition_GetPackageShortName(Cryz_ParameterDefinition self);

/**
  Get for 
ccp.lims.Crystallization.ParameterDefinition.paramType

parameter type 
of parameter (as in Float, String, ...)
  @param  Cryz_ParameterDefinition self
  @returns   the result
**/
extern ApiString Cryz_ParameterDefinition_GetParamType(Cryz_ParameterDefinition self);

/**
  Get for ccp.lims.Crystallization.ParameterDefinition.parameters
  @param  Cryz_ParameterDefinition self
  @returns   the result
**/
extern ApiSet Cryz_ParameterDefinition_GetParameters(Cryz_ParameterDefinition self);

/**
  Get for ccp.lims.Crystallization.ParameterDefinition.parent

link to 
parent object - synonym for crystallizationStore
  @param  Cryz_ParameterDefinition self
  @returns   the result
**/
extern Cryz_CrystallizationStore Cryz_ParameterDefinition_GetParent(Cryz_ParameterDefinition self);

/**
  Get for ccp.lims.Crystallization.ParameterDefinition.possibleValues

The 
list of possible values for the parameter.
  @param  Cryz_ParameterDefinition self
  @returns   the result
**/
extern ApiList Cryz_ParameterDefinition_GetPossibleValues(Cryz_ParameterDefinition self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Cryz_ParameterDefinition self
  @returns   the result
**/
extern ApiString Cryz_ParameterDefinition_GetQualifiedName(Cryz_ParameterDefinition self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Cryz_ParameterDefinition self
  @returns   the result
**/
extern Impl_MemopsRoot Cryz_ParameterDefinition_GetRoot(Cryz_ParameterDefinition self);

/**
  Get for ccp.lims.Crystallization.ParameterDefinition.serial

Unique 
identifier.
  @param  Cryz_ParameterDefinition self
  @returns   the result
**/
extern ApiInteger Cryz_ParameterDefinition_GetSerial(Cryz_ParameterDefinition self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Cryz_ParameterDefinition self
  @returns   the result
**/
extern Impl_TopObject Cryz_ParameterDefinition_GetTopObject(Cryz_ParameterDefinition self);

/**
  Get for ccp.lims.Crystallization.ParameterDefinition.unit

Unit of 
parameter (L, Kg, g/L, s-1, etc.
  @param  Cryz_ParameterDefinition self
  @returns   the result
**/
extern ApiString Cryz_ParameterDefinition_GetUnit(Cryz_ParameterDefinition self);

/**
  Constructor for ccp.lims.Crystallization.ParameterDefinition
  @param  Cryz_CrystallizationStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Cryz_ParameterDefinition Cryz_ParameterDefinition_Init(Cryz_CrystallizationStore parent, ApiMap attrlinks);

/**
  Constructor for ccp.lims.Crystallization.ParameterDefinition
  @param  Cryz_CrystallizationStore parent
  @returns  the new object
**/
extern Cryz_ParameterDefinition Cryz_ParameterDefinition_Init_reqd(Cryz_CrystallizationStore parent);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_ParameterDefinition self
  @param  Impl_ApplicationData value
**/
extern void *Cryz_ParameterDefinition_RemoveApplicationData(Cryz_ParameterDefinition self, Impl_ApplicationData value);

/**
  Remove for 
ccp.lims.Crystallization.ParameterDefinition.possibleValues

The list of 
possible values for the parameter.
  @param  Cryz_ParameterDefinition self
  @param  ApiString value
**/
extern void *Cryz_ParameterDefinition_RemovePossibleValue(Cryz_ParameterDefinition self, ApiString value);

/**
  SetAttr for ccp.lims.Crystallization.ParameterDefinition
  @param  Cryz_ParameterDefinition self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Cryz_ParameterDefinition_Set(Cryz_ParameterDefinition self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Cryz_ParameterDefinition self
  @param  Acco_AccessObject value
**/
extern void *Cryz_ParameterDefinition_SetAccess(Cryz_ParameterDefinition self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_ParameterDefinition self
  @param  ApiList values
**/
extern void *Cryz_ParameterDefinition_SetApplicationData(Cryz_ParameterDefinition self, ApiList values);

/**
  Set for ccp.lims.Crystallization.ParameterDefinition.defaultValue

The 
default value of the parameter.
  @param  Cryz_ParameterDefinition self
  @param  ApiString value
**/
extern void *Cryz_ParameterDefinition_SetDefaultValue(Cryz_ParameterDefinition self, ApiString value);

/**
  Set for 
ccp.lims.Crystallization.ParameterDefinition.displayUnit

Display unit 
of the parameter.
  @param  Cryz_ParameterDefinition self
  @param  ApiString value
**/
extern void *Cryz_ParameterDefinition_SetDisplayUnit(Cryz_ParameterDefinition self, ApiString value);

/**
  Set for ccp.lims.Crystallization.ParameterDefinition.label

Label of the 
parameter.
  @param  Cryz_ParameterDefinition self
  @param  ApiString value
**/
extern void *Cryz_ParameterDefinition_SetLabel(Cryz_ParameterDefinition self, ApiString value);

/**
  Set for ccp.lims.Crystallization.ParameterDefinition.maxValue

The 
maximum value of the parameter.
  @param  Cryz_ParameterDefinition self
  @param  ApiString value
**/
extern void *Cryz_ParameterDefinition_SetMaxValue(Cryz_ParameterDefinition self, ApiString value);

/**
  Set for ccp.lims.Crystallization.ParameterDefinition.minValue

The 
minimum value of the parameter.
  @param  Cryz_ParameterDefinition self
  @param  ApiString value
**/
extern void *Cryz_ParameterDefinition_SetMinValue(Cryz_ParameterDefinition self, ApiString value);

/**
  Set for ccp.lims.Crystallization.ParameterDefinition.name

The name of 
the parameter.
  @param  Cryz_ParameterDefinition self
  @param  ApiString value
**/
extern void *Cryz_ParameterDefinition_SetName(Cryz_ParameterDefinition self, ApiString value);

/**
  Set for 
ccp.lims.Crystallization.ParameterDefinition.paramType

parameter type 
of parameter (as in Float, String, ...)
  @param  Cryz_ParameterDefinition self
  @param  ApiString value
**/
extern void *Cryz_ParameterDefinition_SetParamType(Cryz_ParameterDefinition self, ApiString value);

/**
  Set for ccp.lims.Crystallization.ParameterDefinition.parameters
  @param  Cryz_ParameterDefinition self
  @param  ApiSet values
**/
extern void *Cryz_ParameterDefinition_SetParameters(Cryz_ParameterDefinition self, ApiSet values);

/**
  Set for ccp.lims.Crystallization.ParameterDefinition.possibleValues

The 
list of possible values for the parameter.
  @param  Cryz_ParameterDefinition self
  @param  ApiList values
**/
extern void *Cryz_ParameterDefinition_SetPossibleValues(Cryz_ParameterDefinition self, ApiList values);

/**
  Set for ccp.lims.Crystallization.ParameterDefinition.serial

Unique 
identifier.
  @param  Cryz_ParameterDefinition self
  @param  ApiInteger value
**/
extern void *Cryz_ParameterDefinition_SetSerial(Cryz_ParameterDefinition self, ApiInteger value);

/**
  Set for ccp.lims.Crystallization.ParameterDefinition.unit

Unit of 
parameter (L, Kg, g/L, s-1, etc.
  @param  Cryz_ParameterDefinition self
  @param  ApiString value
**/
extern void *Cryz_ParameterDefinition_SetUnit(Cryz_ParameterDefinition self, ApiString value);

/**
  Sorted for ccp.lims.Crystallization.ParameterDefinition.parameters
  @param  Cryz_ParameterDefinition self
  @returns   the result
**/
extern ApiList Cryz_ParameterDefinition_SortedParameters(Cryz_ParameterDefinition self);

#endif /* __incl__ccp_api_lims_Crystallization_ParameterDefinition_h__ */
