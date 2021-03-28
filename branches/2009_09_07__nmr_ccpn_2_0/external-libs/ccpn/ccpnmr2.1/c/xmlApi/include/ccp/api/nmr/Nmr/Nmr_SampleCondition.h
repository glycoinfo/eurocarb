
#ifndef __incl__ccp_api_nmr_Nmr_SampleCondition_h__
#define __incl__ccp_api_nmr_Nmr_SampleCondition_h__

#include "ccp.h"

/*
  Individual sample condition that applies to a sample during a specific experiment. Because of the many possible conditions, type and unit can be set freely.
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SampleCondition self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_SampleCondition_AddApplicationData(Nmr_SampleCondition self, Impl_ApplicationData value);

/**
  CheckAllValid for ccp.nmr.Nmr.SampleCondition
  @param  Nmr_SampleCondition self
  @param  ApiBoolean complete
**/
extern void *Nmr_SampleCondition_CheckAllValid(Nmr_SampleCondition self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.Nmr.SampleCondition
  @param  Nmr_SampleCondition self
  @param  ApiBoolean complete
**/
extern void *Nmr_SampleCondition_CheckValid(Nmr_SampleCondition self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SampleCondition self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_SampleCondition_FindAllApplicationData(Nmr_SampleCondition self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SampleCondition self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_SampleCondition_FindAllApplicationData_keyval0(Nmr_SampleCondition self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SampleCondition self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_SampleCondition_FindAllApplicationData_keyval1(Nmr_SampleCondition self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SampleCondition self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_SampleCondition_FindAllApplicationData_keyval2(Nmr_SampleCondition self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SampleCondition self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_SampleCondition_FindAllApplicationData_keyval3(Nmr_SampleCondition self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SampleCondition self
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
extern ApiList Nmr_SampleCondition_FindAllApplicationData_keyval4(Nmr_SampleCondition self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SampleCondition self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_SampleCondition_FindFirstApplicationData(Nmr_SampleCondition self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SampleCondition self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_SampleCondition_FindFirstApplicationData_keyval0(Nmr_SampleCondition self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SampleCondition self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_SampleCondition_FindFirstApplicationData_keyval1(Nmr_SampleCondition self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SampleCondition self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_SampleCondition_FindFirstApplicationData_keyval2(Nmr_SampleCondition self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SampleCondition self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_SampleCondition_FindFirstApplicationData_keyval3(Nmr_SampleCondition self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SampleCondition self
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
extern Impl_ApplicationData Nmr_SampleCondition_FindFirstApplicationData_keyval4(Nmr_SampleCondition self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.Nmr.SampleCondition
  @param  Nmr_SampleCondition self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Nmr_SampleCondition_Get(Nmr_SampleCondition self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_SampleCondition self
  @returns   the result
**/
extern Acco_AccessObject Nmr_SampleCondition_GetAccess(Nmr_SampleCondition self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Nmr_SampleCondition self
  @returns   the result
**/
extern Acco_AccessObject Nmr_SampleCondition_GetActiveAccess(Nmr_SampleCondition self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SampleCondition self
  @returns   the result
**/
extern ApiList Nmr_SampleCondition_GetApplicationData(Nmr_SampleCondition self);

/**
  GetByKey for ccp.nmr.Nmr.SampleCondition
  @param  Nmr_SampleCondition self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Nmr_SampleCondition Nmr_SampleCondition_GetByKey(Nmr_SampleCondition self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Nmr_SampleCondition self
  @returns   the result
**/
extern ApiString Nmr_SampleCondition_GetClassName(Nmr_SampleCondition self);

/**
  Get for ccp.nmr.Nmr.SampleCondition.condition

Sample condition Type. 
Open enumeration.
  @param  Nmr_SampleCondition self
  @returns   the result
**/
extern ApiString Nmr_SampleCondition_GetCondition(Nmr_SampleCondition self);

/**
  Get for ccp.nmr.Nmr.SampleCondition.error

Estimated standard deviation 
(error) on sample condition value.
  @param  Nmr_SampleCondition self
  @returns   the result
**/
extern ApiFloat Nmr_SampleCondition_GetError(Nmr_SampleCondition self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Nmr_SampleCondition self
  @returns   the result
**/
extern ApiList Nmr_SampleCondition_GetFieldNames(Nmr_SampleCondition self);

/**
  GetFullKey for ccp.nmr.Nmr.SampleCondition
  @param  Nmr_SampleCondition self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Nmr_SampleCondition_GetFullKey(Nmr_SampleCondition self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Nmr_SampleCondition self
  @returns   the result
**/
extern ApiBoolean Nmr_SampleCondition_GetInConstructor(Nmr_SampleCondition self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Nmr_SampleCondition self
  @returns   the result
**/
extern ApiBoolean Nmr_SampleCondition_GetIsDeleted(Nmr_SampleCondition self);

/**
  GetLocalKey for ccp.nmr.Nmr.SampleCondition
  @param  Nmr_SampleCondition self
  @returns  Local object key
**/
extern ApiObject Nmr_SampleCondition_GetLocalKey(Nmr_SampleCondition self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Nmr_SampleCondition self
  @returns   the result
**/
extern ApiString Nmr_SampleCondition_GetPackageName(Nmr_SampleCondition self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Nmr_SampleCondition self
  @returns   the result
**/
extern ApiString Nmr_SampleCondition_GetPackageShortName(Nmr_SampleCondition self);

/**
  Get for ccp.nmr.Nmr.SampleCondition.parent

link to parent object - 
synonym for sampleConditionSet
  @param  Nmr_SampleCondition self
  @returns   the result
**/
extern Nmr_SampleConditionSet Nmr_SampleCondition_GetParent(Nmr_SampleCondition self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Nmr_SampleCondition self
  @returns   the result
**/
extern ApiString Nmr_SampleCondition_GetQualifiedName(Nmr_SampleCondition self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Nmr_SampleCondition self
  @returns   the result
**/
extern Impl_MemopsRoot Nmr_SampleCondition_GetRoot(Nmr_SampleCondition self);

/**
  Get for ccp.nmr.Nmr.SampleCondition.sampleConditionSet

parent link
  @param  Nmr_SampleCondition self
  @returns   the result
**/
extern Nmr_SampleConditionSet Nmr_SampleCondition_GetSampleConditionSet(Nmr_SampleCondition self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Nmr_SampleCondition self
  @returns   the result
**/
extern Impl_TopObject Nmr_SampleCondition_GetTopObject(Nmr_SampleCondition self);

/**
  Get for ccp.nmr.Nmr.SampleCondition.unit

Measuring unit for sample 
condition
  @param  Nmr_SampleCondition self
  @returns   the result
**/
extern ApiString Nmr_SampleCondition_GetUnit(Nmr_SampleCondition self);

/**
  Get for ccp.nmr.Nmr.SampleCondition.value

value of sample condition. 
Note that only floating point numbers are allowed.
  @param  Nmr_SampleCondition self
  @returns   the result
**/
extern ApiFloat Nmr_SampleCondition_GetValue(Nmr_SampleCondition self);

/**
  Constructor for ccp.nmr.Nmr.SampleCondition
  @param  Nmr_SampleConditionSet parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmr_SampleCondition Nmr_SampleCondition_Init(Nmr_SampleConditionSet parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.Nmr.SampleCondition
  @param  Nmr_SampleConditionSet parent
  @param  char * condition
  @returns  the new object
**/
extern Nmr_SampleCondition Nmr_SampleCondition_Init_reqd(Nmr_SampleConditionSet parent, char * condition);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SampleCondition self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_SampleCondition_RemoveApplicationData(Nmr_SampleCondition self, Impl_ApplicationData value);

/**
  SetAttr for ccp.nmr.Nmr.SampleCondition
  @param  Nmr_SampleCondition self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Nmr_SampleCondition_Set(Nmr_SampleCondition self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_SampleCondition self
  @param  Acco_AccessObject value
**/
extern void *Nmr_SampleCondition_SetAccess(Nmr_SampleCondition self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SampleCondition self
  @param  ApiList values
**/
extern void *Nmr_SampleCondition_SetApplicationData(Nmr_SampleCondition self, ApiList values);

/**
  Set for ccp.nmr.Nmr.SampleCondition.condition

Sample condition Type. 
Open enumeration.
  @param  Nmr_SampleCondition self
  @param  ApiString value
**/
extern void *Nmr_SampleCondition_SetCondition(Nmr_SampleCondition self, ApiString value);

/**
  Set for ccp.nmr.Nmr.SampleCondition.error

Estimated standard deviation 
(error) on sample condition value.
  @param  Nmr_SampleCondition self
  @param  ApiFloat value
**/
extern void *Nmr_SampleCondition_SetError(Nmr_SampleCondition self, ApiFloat value);

/**
  Set for ccp.nmr.Nmr.SampleCondition.unit

Measuring unit for sample 
condition
  @param  Nmr_SampleCondition self
  @param  ApiString value
**/
extern void *Nmr_SampleCondition_SetUnit(Nmr_SampleCondition self, ApiString value);

/**
  Set for ccp.nmr.Nmr.SampleCondition.value

value of sample condition. 
Note that only floating point numbers are allowed.
  @param  Nmr_SampleCondition self
  @param  ApiFloat value
**/
extern void *Nmr_SampleCondition_SetValue(Nmr_SampleCondition self, ApiFloat value);

#endif /* __incl__ccp_api_nmr_Nmr_SampleCondition_h__ */
