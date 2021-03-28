
#ifndef __incl__ccp_api_general_DataLocation_DataUrl_h__
#define __incl__ccp_api_general_DataLocation_DataUrl_h__

#include "ccp.h"

/*
  Url descriptor for an absolute data location
*/

/* package ccp.api.general.DataLocation */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_DataUrl self
  @param  Impl_ApplicationData value
**/
extern void *Dloc_DataUrl_AddApplicationData(Dloc_DataUrl self, Impl_ApplicationData value);

/**
  CheckAllValid for ccp.general.DataLocation.DataUrl
  @param  Dloc_DataUrl self
  @param  ApiBoolean complete
**/
extern void *Dloc_DataUrl_CheckAllValid(Dloc_DataUrl self, ApiBoolean complete);

/**
  CheckValid for ccp.general.DataLocation.DataUrl
  @param  Dloc_DataUrl self
  @param  ApiBoolean complete
**/
extern void *Dloc_DataUrl_CheckValid(Dloc_DataUrl self, ApiBoolean complete);

/**
  FindAll for ccp.general.DataLocation.DataUrl.annotations

Annotations 
stored at this Url
  @param  Dloc_DataUrl self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Dloc_DataUrl_FindAllAnnotations(Dloc_DataUrl self, ApiMap conditions);

/**
  FindAll for ccp.general.DataLocation.DataUrl.annotations

Annotations 
stored at this Url
  @param  Dloc_DataUrl self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Dloc_DataUrl_FindAllAnnotations_keyval0(Dloc_DataUrl self);

/**
  FindAll for ccp.general.DataLocation.DataUrl.annotations

Annotations 
stored at this Url
  @param  Dloc_DataUrl self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Dloc_DataUrl_FindAllAnnotations_keyval1(Dloc_DataUrl self, char * key, ApiObject value);

/**
  FindAll for ccp.general.DataLocation.DataUrl.annotations

Annotations 
stored at this Url
  @param  Dloc_DataUrl self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Dloc_DataUrl_FindAllAnnotations_keyval2(Dloc_DataUrl self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.DataLocation.DataUrl.annotations

Annotations 
stored at this Url
  @param  Dloc_DataUrl self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Dloc_DataUrl_FindAllAnnotations_keyval3(Dloc_DataUrl self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.DataLocation.DataUrl.annotations

Annotations 
stored at this Url
  @param  Dloc_DataUrl self
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
extern ApiSet Dloc_DataUrl_FindAllAnnotations_keyval4(Dloc_DataUrl self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_DataUrl self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Dloc_DataUrl_FindAllApplicationData(Dloc_DataUrl self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_DataUrl self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Dloc_DataUrl_FindAllApplicationData_keyval0(Dloc_DataUrl self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_DataUrl self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Dloc_DataUrl_FindAllApplicationData_keyval1(Dloc_DataUrl self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_DataUrl self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Dloc_DataUrl_FindAllApplicationData_keyval2(Dloc_DataUrl self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_DataUrl self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Dloc_DataUrl_FindAllApplicationData_keyval3(Dloc_DataUrl self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_DataUrl self
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
extern ApiList Dloc_DataUrl_FindAllApplicationData_keyval4(Dloc_DataUrl self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.general.DataLocation.DataUrl.dataStores

AbstractDataStores stored 
at this Url
  @param  Dloc_DataUrl self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Dloc_DataUrl_FindAllDataStores(Dloc_DataUrl self, ApiMap conditions);

/**
  FindAll for 
ccp.general.DataLocation.DataUrl.dataStores

AbstractDataStores stored 
at this Url
  @param  Dloc_DataUrl self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Dloc_DataUrl_FindAllDataStores_keyval0(Dloc_DataUrl self);

/**
  FindAll for 
ccp.general.DataLocation.DataUrl.dataStores

AbstractDataStores stored 
at this Url
  @param  Dloc_DataUrl self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Dloc_DataUrl_FindAllDataStores_keyval1(Dloc_DataUrl self, char * key, ApiObject value);

/**
  FindAll for 
ccp.general.DataLocation.DataUrl.dataStores

AbstractDataStores stored 
at this Url
  @param  Dloc_DataUrl self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Dloc_DataUrl_FindAllDataStores_keyval2(Dloc_DataUrl self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.general.DataLocation.DataUrl.dataStores

AbstractDataStores stored 
at this Url
  @param  Dloc_DataUrl self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Dloc_DataUrl_FindAllDataStores_keyval3(Dloc_DataUrl self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.general.DataLocation.DataUrl.dataStores

AbstractDataStores stored 
at this Url
  @param  Dloc_DataUrl self
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
extern ApiSet Dloc_DataUrl_FindAllDataStores_keyval4(Dloc_DataUrl self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.DataLocation.DataUrl.annotations

Annotations 
stored at this Url
  @param  Dloc_DataUrl self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Anno_Annotation Dloc_DataUrl_FindFirstAnnotation(Dloc_DataUrl self, ApiMap conditions);

/**
  FindFirst for ccp.general.DataLocation.DataUrl.annotations

Annotations 
stored at this Url
  @param  Dloc_DataUrl self
  @returns  the first value that satisfies the conditions 
**/
extern Anno_Annotation Dloc_DataUrl_FindFirstAnnotation_keyval0(Dloc_DataUrl self);

/**
  FindFirst for ccp.general.DataLocation.DataUrl.annotations

Annotations 
stored at this Url
  @param  Dloc_DataUrl self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Anno_Annotation Dloc_DataUrl_FindFirstAnnotation_keyval1(Dloc_DataUrl self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.DataLocation.DataUrl.annotations

Annotations 
stored at this Url
  @param  Dloc_DataUrl self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Anno_Annotation Dloc_DataUrl_FindFirstAnnotation_keyval2(Dloc_DataUrl self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.DataLocation.DataUrl.annotations

Annotations 
stored at this Url
  @param  Dloc_DataUrl self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Anno_Annotation Dloc_DataUrl_FindFirstAnnotation_keyval3(Dloc_DataUrl self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.DataLocation.DataUrl.annotations

Annotations 
stored at this Url
  @param  Dloc_DataUrl self
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
extern Anno_Annotation Dloc_DataUrl_FindFirstAnnotation_keyval4(Dloc_DataUrl self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_DataUrl self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Dloc_DataUrl_FindFirstApplicationData(Dloc_DataUrl self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_DataUrl self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Dloc_DataUrl_FindFirstApplicationData_keyval0(Dloc_DataUrl self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_DataUrl self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Dloc_DataUrl_FindFirstApplicationData_keyval1(Dloc_DataUrl self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_DataUrl self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Dloc_DataUrl_FindFirstApplicationData_keyval2(Dloc_DataUrl self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_DataUrl self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Dloc_DataUrl_FindFirstApplicationData_keyval3(Dloc_DataUrl self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_DataUrl self
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
extern Impl_ApplicationData Dloc_DataUrl_FindFirstApplicationData_keyval4(Dloc_DataUrl self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.general.DataLocation.DataUrl.dataStores

AbstractDataStores stored 
at this Url
  @param  Dloc_DataUrl self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Dloc_AbstractDataStore Dloc_DataUrl_FindFirstDataStore(Dloc_DataUrl self, ApiMap conditions);

/**
  FindFirst for 
ccp.general.DataLocation.DataUrl.dataStores

AbstractDataStores stored 
at this Url
  @param  Dloc_DataUrl self
  @returns  the first value that satisfies the conditions 
**/
extern Dloc_AbstractDataStore Dloc_DataUrl_FindFirstDataStore_keyval0(Dloc_DataUrl self);

/**
  FindFirst for 
ccp.general.DataLocation.DataUrl.dataStores

AbstractDataStores stored 
at this Url
  @param  Dloc_DataUrl self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Dloc_AbstractDataStore Dloc_DataUrl_FindFirstDataStore_keyval1(Dloc_DataUrl self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.general.DataLocation.DataUrl.dataStores

AbstractDataStores stored 
at this Url
  @param  Dloc_DataUrl self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Dloc_AbstractDataStore Dloc_DataUrl_FindFirstDataStore_keyval2(Dloc_DataUrl self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.general.DataLocation.DataUrl.dataStores

AbstractDataStores stored 
at this Url
  @param  Dloc_DataUrl self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Dloc_AbstractDataStore Dloc_DataUrl_FindFirstDataStore_keyval3(Dloc_DataUrl self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.general.DataLocation.DataUrl.dataStores

AbstractDataStores stored 
at this Url
  @param  Dloc_DataUrl self
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
extern Dloc_AbstractDataStore Dloc_DataUrl_FindFirstDataStore_keyval4(Dloc_DataUrl self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.general.DataLocation.DataUrl
  @param  Dloc_DataUrl self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Dloc_DataUrl_Get(Dloc_DataUrl self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Dloc_DataUrl self
  @returns   the result
**/
extern Acco_AccessObject Dloc_DataUrl_GetAccess(Dloc_DataUrl self);

/**
  Get for ccp.general.DataLocation.DataUrl.annotations

Annotations stored 
at this Url
  @param  Dloc_DataUrl self
  @returns   the result
**/
extern ApiSet Dloc_DataUrl_GetAnnotations(Dloc_DataUrl self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_DataUrl self
  @returns   the result
**/
extern ApiList Dloc_DataUrl_GetApplicationData(Dloc_DataUrl self);

/**
  GetByKey for ccp.general.DataLocation.DataUrl
  @param  Dloc_DataUrl self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Dloc_DataUrl Dloc_DataUrl_GetByKey(Dloc_DataUrl self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Dloc_DataUrl self
  @returns   the result
**/
extern ApiString Dloc_DataUrl_GetClassName(Dloc_DataUrl self);

/**
  Get for ccp.general.DataLocation.DataUrl.dataLocationStore

parent link
  @param  Dloc_DataUrl self
  @returns   the result
**/
extern Dloc_DataLocationStore Dloc_DataUrl_GetDataLocationStore(Dloc_DataUrl self);

/**
  Get for ccp.general.DataLocation.DataUrl.dataStores

AbstractDataStores 
stored at this Url
  @param  Dloc_DataUrl self
  @returns   the result
**/
extern ApiSet Dloc_DataUrl_GetDataStores(Dloc_DataUrl self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Dloc_DataUrl self
  @returns   the result
**/
extern ApiList Dloc_DataUrl_GetFieldNames(Dloc_DataUrl self);

/**
  GetFullKey for ccp.general.DataLocation.DataUrl
  @param  Dloc_DataUrl self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Dloc_DataUrl_GetFullKey(Dloc_DataUrl self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Dloc_DataUrl self
  @returns   the result
**/
extern ApiBoolean Dloc_DataUrl_GetInConstructor(Dloc_DataUrl self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Dloc_DataUrl self
  @returns   the result
**/
extern ApiBoolean Dloc_DataUrl_GetIsDeleted(Dloc_DataUrl self);

/**
  GetLocalKey for ccp.general.DataLocation.DataUrl
  @param  Dloc_DataUrl self
  @returns  Local object key
**/
extern ApiObject Dloc_DataUrl_GetLocalKey(Dloc_DataUrl self);

/**
  Get for ccp.general.DataLocation.DataUrl.name

Name of DataUrl, to help 
distinguish to users
  @param  Dloc_DataUrl self
  @returns   the result
**/
extern ApiString Dloc_DataUrl_GetName(Dloc_DataUrl self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Dloc_DataUrl self
  @returns   the result
**/
extern ApiString Dloc_DataUrl_GetPackageName(Dloc_DataUrl self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Dloc_DataUrl self
  @returns   the result
**/
extern ApiString Dloc_DataUrl_GetPackageShortName(Dloc_DataUrl self);

/**
  Get for ccp.general.DataLocation.DataUrl.parent

link to parent object - 
synonym for dataLocationStore
  @param  Dloc_DataUrl self
  @returns   the result
**/
extern Dloc_DataLocationStore Dloc_DataUrl_GetParent(Dloc_DataUrl self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Dloc_DataUrl self
  @returns   the result
**/
extern ApiString Dloc_DataUrl_GetQualifiedName(Dloc_DataUrl self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Dloc_DataUrl self
  @returns   the result
**/
extern Impl_MemopsRoot Dloc_DataUrl_GetRoot(Dloc_DataUrl self);

/**
  Get for ccp.general.DataLocation.DataUrl.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Dloc_DataUrl self
  @returns   the result
**/
extern ApiInteger Dloc_DataUrl_GetSerial(Dloc_DataUrl self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Dloc_DataUrl self
  @returns   the result
**/
extern Impl_TopObject Dloc_DataUrl_GetTopObject(Dloc_DataUrl self);

/**
  Get for ccp.general.DataLocation.DataUrl.url

Description of url.
  @param  Dloc_DataUrl self
  @returns   the result
**/
extern Impl_Url Dloc_DataUrl_GetUrl(Dloc_DataUrl self);

/**
  Constructor for ccp.general.DataLocation.DataUrl
  @param  Dloc_DataLocationStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Dloc_DataUrl Dloc_DataUrl_Init(Dloc_DataLocationStore parent, ApiMap attrlinks);

/**
  Constructor for ccp.general.DataLocation.DataUrl
  @param  Dloc_DataLocationStore parent
  @param  Impl_Url url
  @returns  the new object
**/
extern Dloc_DataUrl Dloc_DataUrl_Init_reqd(Dloc_DataLocationStore parent, Impl_Url url);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_DataUrl self
  @param  Impl_ApplicationData value
**/
extern void *Dloc_DataUrl_RemoveApplicationData(Dloc_DataUrl self, Impl_ApplicationData value);

/**
  SetAttr for ccp.general.DataLocation.DataUrl
  @param  Dloc_DataUrl self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Dloc_DataUrl_Set(Dloc_DataUrl self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Dloc_DataUrl self
  @param  Acco_AccessObject value
**/
extern void *Dloc_DataUrl_SetAccess(Dloc_DataUrl self, Acco_AccessObject value);

/**
  Set for ccp.general.DataLocation.DataUrl.annotations

Annotations stored 
at this Url
  @param  Dloc_DataUrl self
  @param  ApiSet values
**/
extern void *Dloc_DataUrl_SetAnnotations(Dloc_DataUrl self, ApiSet values);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_DataUrl self
  @param  ApiList values
**/
extern void *Dloc_DataUrl_SetApplicationData(Dloc_DataUrl self, ApiList values);

/**
  Set for ccp.general.DataLocation.DataUrl.dataStores

AbstractDataStores 
stored at this Url
  @param  Dloc_DataUrl self
  @param  ApiSet values
**/
extern void *Dloc_DataUrl_SetDataStores(Dloc_DataUrl self, ApiSet values);

/**
  Set for ccp.general.DataLocation.DataUrl.name

Name of DataUrl, to help 
distinguish to users
  @param  Dloc_DataUrl self
  @param  ApiString value
**/
extern void *Dloc_DataUrl_SetName(Dloc_DataUrl self, ApiString value);

/**
  Set for ccp.general.DataLocation.DataUrl.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Dloc_DataUrl self
  @param  ApiInteger value
**/
extern void *Dloc_DataUrl_SetSerial(Dloc_DataUrl self, ApiInteger value);

/**
  Set for ccp.general.DataLocation.DataUrl.url

Description of url.
  @param  Dloc_DataUrl self
  @param  Impl_Url value
**/
extern void *Dloc_DataUrl_SetUrl(Dloc_DataUrl self, Impl_Url value);

/**
  Sorted for ccp.general.DataLocation.DataUrl.annotations

Annotations 
stored at this Url
  @param  Dloc_DataUrl self
  @returns   the result
**/
extern ApiList Dloc_DataUrl_SortedAnnotations(Dloc_DataUrl self);

/**
  Sorted for 
ccp.general.DataLocation.DataUrl.dataStores

AbstractDataStores stored 
at this Url
  @param  Dloc_DataUrl self
  @returns   the result
**/
extern ApiList Dloc_DataUrl_SortedDataStores(Dloc_DataUrl self);

#endif /* __incl__ccp_api_general_DataLocation_DataUrl_h__ */
