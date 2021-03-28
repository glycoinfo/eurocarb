
#ifndef __incl__ccp_api_general_KeywordDefinition_KeywordDefinition_h__
#define __incl__ccp_api_general_KeywordDefinition_KeywordDefinition_h__

#include "ccp.h"

/*
  
*/

/* package ccp.api.general.KeywordDefinition */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Kwdf_KeywordDefinition self
  @param  Impl_ApplicationData value
**/
extern void *Kwdf_KeywordDefinition_AddApplicationData(Kwdf_KeywordDefinition self, Impl_ApplicationData value);

/**
  Add for 
ccp.general.KeywordDefinition.KeywordDefinition.targetNames

qualified 
names for the CCPN classes that the keyword may be used to describe. If 
empty there are no limitations. Typically keywords are used as part of a 
keyword-value-object combination. targetNames refer to the allowed type 
for the object being described (*not* the object that contains the 
desctription)
  @param  Kwdf_KeywordDefinition self
  @param  ApiString value
**/
extern void *Kwdf_KeywordDefinition_AddTargetName(Kwdf_KeywordDefinition self, ApiString value);

/**
  CheckAllValid for ccp.general.KeywordDefinition.KeywordDefinition
  @param  Kwdf_KeywordDefinition self
  @param  ApiBoolean complete
**/
extern void *Kwdf_KeywordDefinition_CheckAllValid(Kwdf_KeywordDefinition self, ApiBoolean complete);

/**
  CheckValid for ccp.general.KeywordDefinition.KeywordDefinition
  @param  Kwdf_KeywordDefinition self
  @param  ApiBoolean complete
**/
extern void *Kwdf_KeywordDefinition_CheckValid(Kwdf_KeywordDefinition self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Kwdf_KeywordDefinition self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Kwdf_KeywordDefinition_FindAllApplicationData(Kwdf_KeywordDefinition self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Kwdf_KeywordDefinition self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Kwdf_KeywordDefinition_FindAllApplicationData_keyval0(Kwdf_KeywordDefinition self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Kwdf_KeywordDefinition self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Kwdf_KeywordDefinition_FindAllApplicationData_keyval1(Kwdf_KeywordDefinition self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Kwdf_KeywordDefinition self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Kwdf_KeywordDefinition_FindAllApplicationData_keyval2(Kwdf_KeywordDefinition self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Kwdf_KeywordDefinition self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Kwdf_KeywordDefinition_FindAllApplicationData_keyval3(Kwdf_KeywordDefinition self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Kwdf_KeywordDefinition self
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
extern ApiList Kwdf_KeywordDefinition_FindAllApplicationData_keyval4(Kwdf_KeywordDefinition self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Kwdf_KeywordDefinition self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Kwdf_KeywordDefinition_FindFirstApplicationData(Kwdf_KeywordDefinition self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Kwdf_KeywordDefinition self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Kwdf_KeywordDefinition_FindFirstApplicationData_keyval0(Kwdf_KeywordDefinition self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Kwdf_KeywordDefinition self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Kwdf_KeywordDefinition_FindFirstApplicationData_keyval1(Kwdf_KeywordDefinition self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Kwdf_KeywordDefinition self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Kwdf_KeywordDefinition_FindFirstApplicationData_keyval2(Kwdf_KeywordDefinition self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Kwdf_KeywordDefinition self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Kwdf_KeywordDefinition_FindFirstApplicationData_keyval3(Kwdf_KeywordDefinition self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Kwdf_KeywordDefinition self
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
extern Impl_ApplicationData Kwdf_KeywordDefinition_FindFirstApplicationData_keyval4(Kwdf_KeywordDefinition self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.general.KeywordDefinition.KeywordDefinition
  @param  Kwdf_KeywordDefinition self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Kwdf_KeywordDefinition_Get(Kwdf_KeywordDefinition self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Kwdf_KeywordDefinition self
  @returns   the result
**/
extern Acco_AccessObject Kwdf_KeywordDefinition_GetAccess(Kwdf_KeywordDefinition self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Kwdf_KeywordDefinition self
  @returns   the result
**/
extern Acco_AccessObject Kwdf_KeywordDefinition_GetActiveAccess(Kwdf_KeywordDefinition self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Kwdf_KeywordDefinition self
  @returns   the result
**/
extern ApiList Kwdf_KeywordDefinition_GetApplicationData(Kwdf_KeywordDefinition self);

/**
  GetByKey for ccp.general.KeywordDefinition.KeywordDefinition
  @param  Kwdf_KeywordDefinition self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Kwdf_KeywordDefinition Kwdf_KeywordDefinition_GetByKey(Kwdf_KeywordDefinition self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Kwdf_KeywordDefinition self
  @returns   the result
**/
extern ApiString Kwdf_KeywordDefinition_GetClassName(Kwdf_KeywordDefinition self);

/**
  Get for 
ccp.general.KeywordDefinition.KeywordDefinition.explanation

Definition, 
examples, etc. to explain the parameter defined by the keyword.
  @param  Kwdf_KeywordDefinition self
  @returns   the result
**/
extern ApiString Kwdf_KeywordDefinition_GetExplanation(Kwdf_KeywordDefinition self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Kwdf_KeywordDefinition self
  @returns   the result
**/
extern ApiList Kwdf_KeywordDefinition_GetFieldNames(Kwdf_KeywordDefinition self);

/**
  GetFullKey for ccp.general.KeywordDefinition.KeywordDefinition
  @param  Kwdf_KeywordDefinition self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Kwdf_KeywordDefinition_GetFullKey(Kwdf_KeywordDefinition self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Kwdf_KeywordDefinition self
  @returns   the result
**/
extern ApiBoolean Kwdf_KeywordDefinition_GetInConstructor(Kwdf_KeywordDefinition self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Kwdf_KeywordDefinition self
  @returns   the result
**/
extern ApiBoolean Kwdf_KeywordDefinition_GetIsDeleted(Kwdf_KeywordDefinition self);

/**
  Get for ccp.general.KeywordDefinition.KeywordDefinition.keyword
  @param  Kwdf_KeywordDefinition self
  @returns   the result
**/
extern ApiString Kwdf_KeywordDefinition_GetKeyword(Kwdf_KeywordDefinition self);

/**
  Get for 
ccp.general.KeywordDefinition.KeywordDefinition.keywordDefinitionStore

parent 
link
  @param  Kwdf_KeywordDefinition self
  @returns   the result
**/
extern Kwdf_KeywordDefinitionStore Kwdf_KeywordDefinition_GetKeywordDefinitionStore(Kwdf_KeywordDefinition self);

/**
  GetLocalKey for ccp.general.KeywordDefinition.KeywordDefinition
  @param  Kwdf_KeywordDefinition self
  @returns  Local object key
**/
extern ApiObject Kwdf_KeywordDefinition_GetLocalKey(Kwdf_KeywordDefinition self);

/**
  Get for ccp.general.KeywordDefinition.KeywordDefinition.name

A 
user-friendly synonym for the keyword
  @param  Kwdf_KeywordDefinition self
  @returns   the result
**/
extern ApiString Kwdf_KeywordDefinition_GetName(Kwdf_KeywordDefinition self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Kwdf_KeywordDefinition self
  @returns   the result
**/
extern ApiString Kwdf_KeywordDefinition_GetPackageName(Kwdf_KeywordDefinition self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Kwdf_KeywordDefinition self
  @returns   the result
**/
extern ApiString Kwdf_KeywordDefinition_GetPackageShortName(Kwdf_KeywordDefinition self);

/**
  Get for ccp.general.KeywordDefinition.KeywordDefinition.parent

link to 
parent object - synonym for keywordDefinitionStore
  @param  Kwdf_KeywordDefinition self
  @returns   the result
**/
extern Kwdf_KeywordDefinitionStore Kwdf_KeywordDefinition_GetParent(Kwdf_KeywordDefinition self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Kwdf_KeywordDefinition self
  @returns   the result
**/
extern ApiString Kwdf_KeywordDefinition_GetQualifiedName(Kwdf_KeywordDefinition self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Kwdf_KeywordDefinition self
  @returns   the result
**/
extern Impl_MemopsRoot Kwdf_KeywordDefinition_GetRoot(Kwdf_KeywordDefinition self);

/**
  Get for 
ccp.general.KeywordDefinition.KeywordDefinition.targetNames

qualified 
names for the CCPN classes that the keyword may be used to describe. If 
empty there are no limitations. Typically keywords are used as part of a 
keyword-value-object combination. targetNames refer to the allowed type 
for the object being described (*not* the object that contains the 
desctription)
  @param  Kwdf_KeywordDefinition self
  @returns   the result
**/
extern ApiSet Kwdf_KeywordDefinition_GetTargetNames(Kwdf_KeywordDefinition self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Kwdf_KeywordDefinition self
  @returns   the result
**/
extern Impl_TopObject Kwdf_KeywordDefinition_GetTopObject(Kwdf_KeywordDefinition self);

/**
  Constructor for ccp.general.KeywordDefinition.KeywordDefinition
  @param  Kwdf_KeywordDefinitionStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Kwdf_KeywordDefinition Kwdf_KeywordDefinition_Init(Kwdf_KeywordDefinitionStore parent, ApiMap attrlinks);

/**
  Constructor for ccp.general.KeywordDefinition.KeywordDefinition
  @param  Kwdf_KeywordDefinitionStore parent
  @param  char * keyword
  @returns  the new object
**/
extern Kwdf_KeywordDefinition Kwdf_KeywordDefinition_Init_reqd(Kwdf_KeywordDefinitionStore parent, char * keyword);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Kwdf_KeywordDefinition self
  @param  Impl_ApplicationData value
**/
extern void *Kwdf_KeywordDefinition_RemoveApplicationData(Kwdf_KeywordDefinition self, Impl_ApplicationData value);

/**
  Remove for 
ccp.general.KeywordDefinition.KeywordDefinition.targetNames

qualified 
names for the CCPN classes that the keyword may be used to describe. If 
empty there are no limitations. Typically keywords are used as part of a 
keyword-value-object combination. targetNames refer to the allowed type 
for the object being described (*not* the object that contains the 
desctription)
  @param  Kwdf_KeywordDefinition self
  @param  ApiString value
**/
extern void *Kwdf_KeywordDefinition_RemoveTargetName(Kwdf_KeywordDefinition self, ApiString value);

/**
  SetAttr for ccp.general.KeywordDefinition.KeywordDefinition
  @param  Kwdf_KeywordDefinition self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Kwdf_KeywordDefinition_Set(Kwdf_KeywordDefinition self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Kwdf_KeywordDefinition self
  @param  Acco_AccessObject value
**/
extern void *Kwdf_KeywordDefinition_SetAccess(Kwdf_KeywordDefinition self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Kwdf_KeywordDefinition self
  @param  ApiList values
**/
extern void *Kwdf_KeywordDefinition_SetApplicationData(Kwdf_KeywordDefinition self, ApiList values);

/**
  Set for 
ccp.general.KeywordDefinition.KeywordDefinition.explanation

Definition, 
examples, etc. to explain the parameter defined by the keyword.
  @param  Kwdf_KeywordDefinition self
  @param  ApiString value
**/
extern void *Kwdf_KeywordDefinition_SetExplanation(Kwdf_KeywordDefinition self, ApiString value);

/**
  Set for ccp.general.KeywordDefinition.KeywordDefinition.keyword
  @param  Kwdf_KeywordDefinition self
  @param  ApiString value
**/
extern void *Kwdf_KeywordDefinition_SetKeyword(Kwdf_KeywordDefinition self, ApiString value);

/**
  Set for ccp.general.KeywordDefinition.KeywordDefinition.name

A 
user-friendly synonym for the keyword
  @param  Kwdf_KeywordDefinition self
  @param  ApiString value
**/
extern void *Kwdf_KeywordDefinition_SetName(Kwdf_KeywordDefinition self, ApiString value);

/**
  Set for 
ccp.general.KeywordDefinition.KeywordDefinition.targetNames

qualified 
names for the CCPN classes that the keyword may be used to describe. If 
empty there are no limitations. Typically keywords are used as part of a 
keyword-value-object combination. targetNames refer to the allowed type 
for the object being described (*not* the object that contains the 
desctription)
  @param  Kwdf_KeywordDefinition self
  @param  ApiSet values
**/
extern void *Kwdf_KeywordDefinition_SetTargetNames(Kwdf_KeywordDefinition self, ApiSet values);

#endif /* __incl__ccp_api_general_KeywordDefinition_KeywordDefinition_h__ */
