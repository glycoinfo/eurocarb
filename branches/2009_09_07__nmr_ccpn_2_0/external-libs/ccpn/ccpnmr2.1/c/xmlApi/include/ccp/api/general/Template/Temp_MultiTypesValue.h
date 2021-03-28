
#ifndef __incl__ccp_api_general_Template_MultiTypesValue_h__
#define __incl__ccp_api_general_Template_MultiTypesValue_h__

#include "ccp.h"

/*
  
*/

/* package ccp.api.general.Template */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Temp_MultiTypesValue self
  @param  Impl_ApplicationData value
**/
extern void *Temp_MultiTypesValue_AddApplicationData(Temp_MultiTypesValue self, Impl_ApplicationData value);

/**
  Add for ccp.general.Template.MultiTypesValue.intValues

Int values list
  @param  Temp_MultiTypesValue self
  @param  ApiInteger value
**/
extern void *Temp_MultiTypesValue_AddIntValue(Temp_MultiTypesValue self, ApiInteger value);

/**
  Add for ccp.general.Template.MultiTypesValue.textValues

text values (NB 
type Line)
  @param  Temp_MultiTypesValue self
  @param  ApiString value
**/
extern void *Temp_MultiTypesValue_AddTextValue(Temp_MultiTypesValue self, ApiString value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Temp_MultiTypesValue self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Temp_MultiTypesValue_FindAllApplicationData(Temp_MultiTypesValue self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Temp_MultiTypesValue self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Temp_MultiTypesValue_FindAllApplicationData_keyval0(Temp_MultiTypesValue self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Temp_MultiTypesValue self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Temp_MultiTypesValue_FindAllApplicationData_keyval1(Temp_MultiTypesValue self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Temp_MultiTypesValue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Temp_MultiTypesValue_FindAllApplicationData_keyval2(Temp_MultiTypesValue self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Temp_MultiTypesValue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Temp_MultiTypesValue_FindAllApplicationData_keyval3(Temp_MultiTypesValue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Temp_MultiTypesValue self
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
extern ApiList Temp_MultiTypesValue_FindAllApplicationData_keyval4(Temp_MultiTypesValue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Temp_MultiTypesValue self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Temp_MultiTypesValue_FindFirstApplicationData(Temp_MultiTypesValue self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Temp_MultiTypesValue self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Temp_MultiTypesValue_FindFirstApplicationData_keyval0(Temp_MultiTypesValue self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Temp_MultiTypesValue self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Temp_MultiTypesValue_FindFirstApplicationData_keyval1(Temp_MultiTypesValue self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Temp_MultiTypesValue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Temp_MultiTypesValue_FindFirstApplicationData_keyval2(Temp_MultiTypesValue self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Temp_MultiTypesValue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Temp_MultiTypesValue_FindFirstApplicationData_keyval3(Temp_MultiTypesValue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Temp_MultiTypesValue self
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
extern Impl_ApplicationData Temp_MultiTypesValue_FindFirstApplicationData_keyval4(Temp_MultiTypesValue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Temp_MultiTypesValue self
  @returns   the result
**/
extern Acco_AccessObject Temp_MultiTypesValue_GetAccess(Temp_MultiTypesValue self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Temp_MultiTypesValue self
  @returns   the result
**/
extern Acco_AccessObject Temp_MultiTypesValue_GetActiveAccess(Temp_MultiTypesValue self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Temp_MultiTypesValue self
  @returns   the result
**/
extern ApiList Temp_MultiTypesValue_GetApplicationData(Temp_MultiTypesValue self);

/**
  Get for ccp.general.Template.MultiTypesValue.boolValues

Boolean values 
list
  @param  Temp_MultiTypesValue self
  @returns   the result
**/
extern ApiBoolean Temp_MultiTypesValue_GetBoolValues(Temp_MultiTypesValue self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Temp_MultiTypesValue self
  @returns   the result
**/
extern ApiString Temp_MultiTypesValue_GetClassName(Temp_MultiTypesValue self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Temp_MultiTypesValue self
  @returns   the result
**/
extern ApiList Temp_MultiTypesValue_GetFieldNames(Temp_MultiTypesValue self);

/**
  Get for ccp.general.Template.MultiTypesValue.floatValues

float values 
list
  @param  Temp_MultiTypesValue self
  @returns   the result
**/
extern ApiFloat Temp_MultiTypesValue_GetFloatValues(Temp_MultiTypesValue self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Temp_MultiTypesValue self
  @returns   the result
**/
extern ApiBoolean Temp_MultiTypesValue_GetInConstructor(Temp_MultiTypesValue self);

/**
  Get for ccp.general.Template.MultiTypesValue.intValues

Int values list
  @param  Temp_MultiTypesValue self
  @returns   the result
**/
extern ApiList Temp_MultiTypesValue_GetIntValues(Temp_MultiTypesValue self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Temp_MultiTypesValue self
  @returns   the result
**/
extern ApiBoolean Temp_MultiTypesValue_GetIsDeleted(Temp_MultiTypesValue self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Temp_MultiTypesValue self
  @returns   the result
**/
extern ApiString Temp_MultiTypesValue_GetPackageName(Temp_MultiTypesValue self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Temp_MultiTypesValue self
  @returns   the result
**/
extern ApiString Temp_MultiTypesValue_GetPackageShortName(Temp_MultiTypesValue self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Temp_MultiTypesValue self
  @returns   the result
**/
extern ApiString Temp_MultiTypesValue_GetQualifiedName(Temp_MultiTypesValue self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Temp_MultiTypesValue self
  @returns   the result
**/
extern Impl_MemopsRoot Temp_MultiTypesValue_GetRoot(Temp_MultiTypesValue self);

/**
  Get for ccp.general.Template.MultiTypesValue.textValues

text values (NB 
type Line)
  @param  Temp_MultiTypesValue self
  @returns   the result
**/
extern ApiList Temp_MultiTypesValue_GetTextValues(Temp_MultiTypesValue self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Temp_MultiTypesValue self
  @returns   the result
**/
extern Impl_TopObject Temp_MultiTypesValue_GetTopObject(Temp_MultiTypesValue self);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Temp_MultiTypesValue self
  @param  Impl_ApplicationData value
**/
extern void *Temp_MultiTypesValue_RemoveApplicationData(Temp_MultiTypesValue self, Impl_ApplicationData value);

/**
  Remove for ccp.general.Template.MultiTypesValue.intValues

Int values 
list
  @param  Temp_MultiTypesValue self
  @param  ApiInteger value
**/
extern void *Temp_MultiTypesValue_RemoveIntValue(Temp_MultiTypesValue self, ApiInteger value);

/**
  Remove for ccp.general.Template.MultiTypesValue.textValues

text values 
(NB type Line)
  @param  Temp_MultiTypesValue self
  @param  ApiString value
**/
extern void *Temp_MultiTypesValue_RemoveTextValue(Temp_MultiTypesValue self, ApiString value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Temp_MultiTypesValue self
  @param  Acco_AccessObject value
**/
extern void *Temp_MultiTypesValue_SetAccess(Temp_MultiTypesValue self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Temp_MultiTypesValue self
  @param  ApiList values
**/
extern void *Temp_MultiTypesValue_SetApplicationData(Temp_MultiTypesValue self, ApiList values);

/**
  Set for ccp.general.Template.MultiTypesValue.boolValues

Boolean values 
list
  @param  Temp_MultiTypesValue self
  @param  ApiBoolean value
**/
extern void *Temp_MultiTypesValue_SetBoolValues(Temp_MultiTypesValue self, ApiBoolean value);

/**
  Set for ccp.general.Template.MultiTypesValue.floatValues

float values 
list
  @param  Temp_MultiTypesValue self
  @param  ApiFloat value
**/
extern void *Temp_MultiTypesValue_SetFloatValues(Temp_MultiTypesValue self, ApiFloat value);

/**
  Set for ccp.general.Template.MultiTypesValue.intValues

Int values list
  @param  Temp_MultiTypesValue self
  @param  ApiList values
**/
extern void *Temp_MultiTypesValue_SetIntValues(Temp_MultiTypesValue self, ApiList values);

/**
  Set for ccp.general.Template.MultiTypesValue.textValues

text values (NB 
type Line)
  @param  Temp_MultiTypesValue self
  @param  ApiList values
**/
extern void *Temp_MultiTypesValue_SetTextValues(Temp_MultiTypesValue self, ApiList values);

#endif /* __incl__ccp_api_general_Template_MultiTypesValue_h__ */
