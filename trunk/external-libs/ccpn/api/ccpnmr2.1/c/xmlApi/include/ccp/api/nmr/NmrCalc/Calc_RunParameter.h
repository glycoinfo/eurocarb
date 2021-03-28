
#ifndef __incl__ccp_api_nmr_NmrCalc_RunParameter_h__
#define __incl__ccp_api_nmr_NmrCalc_RunParameter_h__

#include "ccp.h"

/*
  
*/

/* package ccp.api.nmr.NmrCalc */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_RunParameter self
  @param  Impl_ApplicationData value
**/
extern void *Calc_RunParameter_AddApplicationData(Calc_RunParameter self, Impl_ApplicationData value);

/**
  CheckAllValid for ccp.nmr.NmrCalc.RunParameter
  @param  Calc_RunParameter self
  @param  ApiBoolean complete
**/
extern void *Calc_RunParameter_CheckAllValid(Calc_RunParameter self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.NmrCalc.RunParameter
  @param  Calc_RunParameter self
  @param  ApiBoolean complete
**/
extern void *Calc_RunParameter_CheckValid(Calc_RunParameter self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_RunParameter self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Calc_RunParameter_FindAllApplicationData(Calc_RunParameter self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_RunParameter self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Calc_RunParameter_FindAllApplicationData_keyval0(Calc_RunParameter self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_RunParameter self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Calc_RunParameter_FindAllApplicationData_keyval1(Calc_RunParameter self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_RunParameter self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Calc_RunParameter_FindAllApplicationData_keyval2(Calc_RunParameter self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_RunParameter self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Calc_RunParameter_FindAllApplicationData_keyval3(Calc_RunParameter self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_RunParameter self
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
extern ApiList Calc_RunParameter_FindAllApplicationData_keyval4(Calc_RunParameter self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_RunParameter self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Calc_RunParameter_FindFirstApplicationData(Calc_RunParameter self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_RunParameter self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Calc_RunParameter_FindFirstApplicationData_keyval0(Calc_RunParameter self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_RunParameter self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Calc_RunParameter_FindFirstApplicationData_keyval1(Calc_RunParameter self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_RunParameter self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Calc_RunParameter_FindFirstApplicationData_keyval2(Calc_RunParameter self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_RunParameter self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Calc_RunParameter_FindFirstApplicationData_keyval3(Calc_RunParameter self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_RunParameter self
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
extern Impl_ApplicationData Calc_RunParameter_FindFirstApplicationData_keyval4(Calc_RunParameter self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.NmrCalc.RunParameter
  @param  Calc_RunParameter self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Calc_RunParameter_Get(Calc_RunParameter self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Calc_RunParameter self
  @returns   the result
**/
extern Acco_AccessObject Calc_RunParameter_GetAccess(Calc_RunParameter self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Calc_RunParameter self
  @returns   the result
**/
extern Acco_AccessObject Calc_RunParameter_GetActiveAccess(Calc_RunParameter self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_RunParameter self
  @returns   the result
**/
extern ApiList Calc_RunParameter_GetApplicationData(Calc_RunParameter self);

/**
  Get for ccp.general.Template.MultiTypeValue.booleanValue

Boolean type 
value
  @param  Calc_RunParameter self
  @returns   the result
**/
extern ApiBoolean Calc_RunParameter_GetBooleanValue(Calc_RunParameter self);

/**
  GetByKey for ccp.nmr.NmrCalc.RunParameter
  @param  Calc_RunParameter self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Calc_RunParameter Calc_RunParameter_GetByKey(Calc_RunParameter self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Calc_RunParameter self
  @returns   the result
**/
extern ApiString Calc_RunParameter_GetClassName(Calc_RunParameter self);

/**
  Get for ccp.nmr.NmrCalc.RunParameter.code

Unique identifier for the 
parameter within the context of the application being run
  @param  Calc_RunParameter self
  @returns   the result
**/
extern ApiString Calc_RunParameter_GetCode(Calc_RunParameter self);

/**
  Get for ccp.nmr.NmrCalc.RunParameter.data

Unit of data that paremeter 
refers to.
  @param  Calc_RunParameter self
  @returns   the result
**/
extern Calc_Data Calc_RunParameter_GetData(Calc_RunParameter self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Calc_RunParameter self
  @returns   the result
**/
extern ApiList Calc_RunParameter_GetFieldNames(Calc_RunParameter self);

/**
  Get for ccp.general.Template.MultiTypeValue.floatValue

Float type value
  @param  Calc_RunParameter self
  @returns   the result
**/
extern ApiFloat Calc_RunParameter_GetFloatValue(Calc_RunParameter self);

/**
  GetFullKey for ccp.nmr.NmrCalc.RunParameter
  @param  Calc_RunParameter self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Calc_RunParameter_GetFullKey(Calc_RunParameter self, ApiBoolean useGuid);

/**
  Get for ccp.nmr.NmrCalc.RunParameter.groupId

Integer, grouping related 
parameters within the context of the application being run
  @param  Calc_RunParameter self
  @returns   the result
**/
extern ApiInteger Calc_RunParameter_GetGroupId(Calc_RunParameter self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Calc_RunParameter self
  @returns   the result
**/
extern ApiBoolean Calc_RunParameter_GetInConstructor(Calc_RunParameter self);

/**
  Get for ccp.general.Template.MultiTypeValue.intValue

Integer type value
  @param  Calc_RunParameter self
  @returns   the result
**/
extern ApiInteger Calc_RunParameter_GetIntValue(Calc_RunParameter self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Calc_RunParameter self
  @returns   the result
**/
extern ApiBoolean Calc_RunParameter_GetIsDeleted(Calc_RunParameter self);

/**
  GetLocalKey for ccp.nmr.NmrCalc.RunParameter
  @param  Calc_RunParameter self
  @returns  Local object key
**/
extern ApiObject Calc_RunParameter_GetLocalKey(Calc_RunParameter self);

/**
  Get for ccp.nmr.NmrCalc.RunParameter.name

Human readable name of 
parameter
  @param  Calc_RunParameter self
  @returns   the result
**/
extern ApiString Calc_RunParameter_GetName(Calc_RunParameter self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Calc_RunParameter self
  @returns   the result
**/
extern ApiString Calc_RunParameter_GetPackageName(Calc_RunParameter self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Calc_RunParameter self
  @returns   the result
**/
extern ApiString Calc_RunParameter_GetPackageShortName(Calc_RunParameter self);

/**
  Get for ccp.nmr.NmrCalc.RunParameter.parent

link to parent object - 
synonym for run
  @param  Calc_RunParameter self
  @returns   the result
**/
extern Calc_Run Calc_RunParameter_GetParent(Calc_RunParameter self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Calc_RunParameter self
  @returns   the result
**/
extern ApiString Calc_RunParameter_GetQualifiedName(Calc_RunParameter self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Calc_RunParameter self
  @returns   the result
**/
extern Impl_MemopsRoot Calc_RunParameter_GetRoot(Calc_RunParameter self);

/**
  Get for ccp.nmr.NmrCalc.RunParameter.run

parent link
  @param  Calc_RunParameter self
  @returns   the result
**/
extern Calc_Run Calc_RunParameter_GetRun(Calc_RunParameter self);

/**
  Get for ccp.nmr.NmrCalc.RunParameter.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Calc_RunParameter self
  @returns   the result
**/
extern ApiInteger Calc_RunParameter_GetSerial(Calc_RunParameter self);

/**
  Get for ccp.general.Template.MultiTypeValue.textValue

Text type value
  @param  Calc_RunParameter self
  @returns   the result
**/
extern ApiString Calc_RunParameter_GetTextValue(Calc_RunParameter self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Calc_RunParameter self
  @returns   the result
**/
extern Impl_TopObject Calc_RunParameter_GetTopObject(Calc_RunParameter self);

/**
  Constructor for ccp.nmr.NmrCalc.RunParameter
  @param  Calc_Run parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Calc_RunParameter Calc_RunParameter_Init(Calc_Run parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.NmrCalc.RunParameter
  @param  Calc_Run parent
  @param  char * code
  @returns  the new object
**/
extern Calc_RunParameter Calc_RunParameter_Init_reqd(Calc_Run parent, char * code);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_RunParameter self
  @param  Impl_ApplicationData value
**/
extern void *Calc_RunParameter_RemoveApplicationData(Calc_RunParameter self, Impl_ApplicationData value);

/**
  SetAttr for ccp.nmr.NmrCalc.RunParameter
  @param  Calc_RunParameter self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Calc_RunParameter_Set(Calc_RunParameter self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Calc_RunParameter self
  @param  Acco_AccessObject value
**/
extern void *Calc_RunParameter_SetAccess(Calc_RunParameter self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_RunParameter self
  @param  ApiList values
**/
extern void *Calc_RunParameter_SetApplicationData(Calc_RunParameter self, ApiList values);

/**
  Set for ccp.general.Template.MultiTypeValue.booleanValue

Boolean type 
value
  @param  Calc_RunParameter self
  @param  ApiBoolean value
**/
extern void *Calc_RunParameter_SetBooleanValue(Calc_RunParameter self, ApiBoolean value);

/**
  Set for ccp.nmr.NmrCalc.RunParameter.code

Unique identifier for the 
parameter within the context of the application being run
  @param  Calc_RunParameter self
  @param  ApiString value
**/
extern void *Calc_RunParameter_SetCode(Calc_RunParameter self, ApiString value);

/**
  Set for ccp.nmr.NmrCalc.RunParameter.data

Unit of data that paremeter 
refers to.
  @param  Calc_RunParameter self
  @param  Calc_Data value
**/
extern void *Calc_RunParameter_SetData(Calc_RunParameter self, Calc_Data value);

/**
  Set for ccp.general.Template.MultiTypeValue.floatValue

Float type value
  @param  Calc_RunParameter self
  @param  ApiFloat value
**/
extern void *Calc_RunParameter_SetFloatValue(Calc_RunParameter self, ApiFloat value);

/**
  Set for ccp.nmr.NmrCalc.RunParameter.groupId

Integer, grouping related 
parameters within the context of the application being run
  @param  Calc_RunParameter self
  @param  ApiInteger value
**/
extern void *Calc_RunParameter_SetGroupId(Calc_RunParameter self, ApiInteger value);

/**
  Set for ccp.general.Template.MultiTypeValue.intValue

Integer type value
  @param  Calc_RunParameter self
  @param  ApiInteger value
**/
extern void *Calc_RunParameter_SetIntValue(Calc_RunParameter self, ApiInteger value);

/**
  Set for ccp.nmr.NmrCalc.RunParameter.name

Human readable name of 
parameter
  @param  Calc_RunParameter self
  @param  ApiString value
**/
extern void *Calc_RunParameter_SetName(Calc_RunParameter self, ApiString value);

/**
  Set for ccp.nmr.NmrCalc.RunParameter.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Calc_RunParameter self
  @param  ApiInteger value
**/
extern void *Calc_RunParameter_SetSerial(Calc_RunParameter self, ApiInteger value);

/**
  Set for ccp.general.Template.MultiTypeValue.textValue

Text type value
  @param  Calc_RunParameter self
  @param  ApiString value
**/
extern void *Calc_RunParameter_SetTextValue(Calc_RunParameter self, ApiString value);

#endif /* __incl__ccp_api_nmr_NmrCalc_RunParameter_h__ */
