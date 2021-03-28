
#ifndef __incl__ccp_api_general_Template_MultiTypeValue_h__
#define __incl__ccp_api_general_Template_MultiTypeValue_h__

#include "ccp.h"

/*
  Typed value data
*/

/* package ccp.api.general.Template */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Temp_MultiTypeValue self
  @param  Impl_ApplicationData value
**/
extern void *Temp_MultiTypeValue_AddApplicationData(Temp_MultiTypeValue self, Impl_ApplicationData value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Temp_MultiTypeValue self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Temp_MultiTypeValue_FindAllApplicationData(Temp_MultiTypeValue self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Temp_MultiTypeValue self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Temp_MultiTypeValue_FindAllApplicationData_keyval0(Temp_MultiTypeValue self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Temp_MultiTypeValue self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Temp_MultiTypeValue_FindAllApplicationData_keyval1(Temp_MultiTypeValue self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Temp_MultiTypeValue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Temp_MultiTypeValue_FindAllApplicationData_keyval2(Temp_MultiTypeValue self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Temp_MultiTypeValue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Temp_MultiTypeValue_FindAllApplicationData_keyval3(Temp_MultiTypeValue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Temp_MultiTypeValue self
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
extern ApiList Temp_MultiTypeValue_FindAllApplicationData_keyval4(Temp_MultiTypeValue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Temp_MultiTypeValue self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Temp_MultiTypeValue_FindFirstApplicationData(Temp_MultiTypeValue self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Temp_MultiTypeValue self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Temp_MultiTypeValue_FindFirstApplicationData_keyval0(Temp_MultiTypeValue self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Temp_MultiTypeValue self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Temp_MultiTypeValue_FindFirstApplicationData_keyval1(Temp_MultiTypeValue self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Temp_MultiTypeValue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Temp_MultiTypeValue_FindFirstApplicationData_keyval2(Temp_MultiTypeValue self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Temp_MultiTypeValue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Temp_MultiTypeValue_FindFirstApplicationData_keyval3(Temp_MultiTypeValue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Temp_MultiTypeValue self
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
extern Impl_ApplicationData Temp_MultiTypeValue_FindFirstApplicationData_keyval4(Temp_MultiTypeValue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Temp_MultiTypeValue self
  @returns   the result
**/
extern Acco_AccessObject Temp_MultiTypeValue_GetAccess(Temp_MultiTypeValue self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Temp_MultiTypeValue self
  @returns   the result
**/
extern Acco_AccessObject Temp_MultiTypeValue_GetActiveAccess(Temp_MultiTypeValue self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Temp_MultiTypeValue self
  @returns   the result
**/
extern ApiList Temp_MultiTypeValue_GetApplicationData(Temp_MultiTypeValue self);

/**
  Get for ccp.general.Template.MultiTypeValue.booleanValue

Boolean type 
value
  @param  Temp_MultiTypeValue self
  @returns   the result
**/
extern ApiBoolean Temp_MultiTypeValue_GetBooleanValue(Temp_MultiTypeValue self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Temp_MultiTypeValue self
  @returns   the result
**/
extern ApiString Temp_MultiTypeValue_GetClassName(Temp_MultiTypeValue self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Temp_MultiTypeValue self
  @returns   the result
**/
extern ApiList Temp_MultiTypeValue_GetFieldNames(Temp_MultiTypeValue self);

/**
  Get for ccp.general.Template.MultiTypeValue.floatValue

Float type value
  @param  Temp_MultiTypeValue self
  @returns   the result
**/
extern ApiFloat Temp_MultiTypeValue_GetFloatValue(Temp_MultiTypeValue self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Temp_MultiTypeValue self
  @returns   the result
**/
extern ApiBoolean Temp_MultiTypeValue_GetInConstructor(Temp_MultiTypeValue self);

/**
  Get for ccp.general.Template.MultiTypeValue.intValue

Integer type value
  @param  Temp_MultiTypeValue self
  @returns   the result
**/
extern ApiInteger Temp_MultiTypeValue_GetIntValue(Temp_MultiTypeValue self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Temp_MultiTypeValue self
  @returns   the result
**/
extern ApiBoolean Temp_MultiTypeValue_GetIsDeleted(Temp_MultiTypeValue self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Temp_MultiTypeValue self
  @returns   the result
**/
extern ApiString Temp_MultiTypeValue_GetPackageName(Temp_MultiTypeValue self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Temp_MultiTypeValue self
  @returns   the result
**/
extern ApiString Temp_MultiTypeValue_GetPackageShortName(Temp_MultiTypeValue self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Temp_MultiTypeValue self
  @returns   the result
**/
extern ApiString Temp_MultiTypeValue_GetQualifiedName(Temp_MultiTypeValue self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Temp_MultiTypeValue self
  @returns   the result
**/
extern Impl_MemopsRoot Temp_MultiTypeValue_GetRoot(Temp_MultiTypeValue self);

/**
  Get for ccp.general.Template.MultiTypeValue.textValue

Text type value
  @param  Temp_MultiTypeValue self
  @returns   the result
**/
extern ApiString Temp_MultiTypeValue_GetTextValue(Temp_MultiTypeValue self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Temp_MultiTypeValue self
  @returns   the result
**/
extern Impl_TopObject Temp_MultiTypeValue_GetTopObject(Temp_MultiTypeValue self);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Temp_MultiTypeValue self
  @param  Impl_ApplicationData value
**/
extern void *Temp_MultiTypeValue_RemoveApplicationData(Temp_MultiTypeValue self, Impl_ApplicationData value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Temp_MultiTypeValue self
  @param  Acco_AccessObject value
**/
extern void *Temp_MultiTypeValue_SetAccess(Temp_MultiTypeValue self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Temp_MultiTypeValue self
  @param  ApiList values
**/
extern void *Temp_MultiTypeValue_SetApplicationData(Temp_MultiTypeValue self, ApiList values);

/**
  Set for ccp.general.Template.MultiTypeValue.booleanValue

Boolean type 
value
  @param  Temp_MultiTypeValue self
  @param  ApiBoolean value
**/
extern void *Temp_MultiTypeValue_SetBooleanValue(Temp_MultiTypeValue self, ApiBoolean value);

/**
  Set for ccp.general.Template.MultiTypeValue.floatValue

Float type value
  @param  Temp_MultiTypeValue self
  @param  ApiFloat value
**/
extern void *Temp_MultiTypeValue_SetFloatValue(Temp_MultiTypeValue self, ApiFloat value);

/**
  Set for ccp.general.Template.MultiTypeValue.intValue

Integer type value
  @param  Temp_MultiTypeValue self
  @param  ApiInteger value
**/
extern void *Temp_MultiTypeValue_SetIntValue(Temp_MultiTypeValue self, ApiInteger value);

/**
  Set for ccp.general.Template.MultiTypeValue.textValue

Text type value
  @param  Temp_MultiTypeValue self
  @param  ApiString value
**/
extern void *Temp_MultiTypeValue_SetTextValue(Temp_MultiTypeValue self, ApiString value);

#endif /* __incl__ccp_api_general_Template_MultiTypeValue_h__ */
