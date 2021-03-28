
#ifndef __incl__ccp_api_general_DataLocation_MimeTypeDataStore_h__
#define __incl__ccp_api_general_DataLocation_MimeTypeDataStore_h__

#include "ccp.h"

/*
  Data storage pointer for anything with a MimeType (e.g. JPEG or GIF) 
*/

/* package ccp.api.general.DataLocation */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_MimeTypeDataStore self
  @param  Impl_ApplicationData value
**/
extern void *Dloc_MimeTypeDataStore_AddApplicationData(Dloc_MimeTypeDataStore self, Impl_ApplicationData value);

/**
  Add for 
ccp.general.DataLocation.AbstractDataStore.externalDatas

NmrCalc.ExternalData 
objects that point to this file.
  @param  Dloc_MimeTypeDataStore self
  @param  Calc_ExternalData value
**/
extern void *Dloc_MimeTypeDataStore_AddExternalData(Dloc_MimeTypeDataStore self, Calc_ExternalData value);

/**
  CheckAllValid for ccp.general.DataLocation.MimeTypeDataStore
  @param  Dloc_MimeTypeDataStore self
  @param  ApiBoolean complete
**/
extern void *Dloc_MimeTypeDataStore_CheckAllValid(Dloc_MimeTypeDataStore self, ApiBoolean complete);

/**
  CheckValid for ccp.general.DataLocation.MimeTypeDataStore
  @param  Dloc_MimeTypeDataStore self
  @param  ApiBoolean complete
**/
extern void *Dloc_MimeTypeDataStore_CheckValid(Dloc_MimeTypeDataStore self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_MimeTypeDataStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Dloc_MimeTypeDataStore_FindAllApplicationData(Dloc_MimeTypeDataStore self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_MimeTypeDataStore self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Dloc_MimeTypeDataStore_FindAllApplicationData_keyval0(Dloc_MimeTypeDataStore self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_MimeTypeDataStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Dloc_MimeTypeDataStore_FindAllApplicationData_keyval1(Dloc_MimeTypeDataStore self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_MimeTypeDataStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Dloc_MimeTypeDataStore_FindAllApplicationData_keyval2(Dloc_MimeTypeDataStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_MimeTypeDataStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Dloc_MimeTypeDataStore_FindAllApplicationData_keyval3(Dloc_MimeTypeDataStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_MimeTypeDataStore self
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
extern ApiList Dloc_MimeTypeDataStore_FindAllApplicationData_keyval4(Dloc_MimeTypeDataStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.general.DataLocation.AbstractDataStore.externalDatas

NmrCalc.ExternalData 
objects that point to this file.
  @param  Dloc_MimeTypeDataStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Dloc_MimeTypeDataStore_FindAllExternalDatas(Dloc_MimeTypeDataStore self, ApiMap conditions);

/**
  FindAll for 
ccp.general.DataLocation.AbstractDataStore.externalDatas

NmrCalc.ExternalData 
objects that point to this file.
  @param  Dloc_MimeTypeDataStore self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Dloc_MimeTypeDataStore_FindAllExternalDatas_keyval0(Dloc_MimeTypeDataStore self);

/**
  FindAll for 
ccp.general.DataLocation.AbstractDataStore.externalDatas

NmrCalc.ExternalData 
objects that point to this file.
  @param  Dloc_MimeTypeDataStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Dloc_MimeTypeDataStore_FindAllExternalDatas_keyval1(Dloc_MimeTypeDataStore self, char * key, ApiObject value);

/**
  FindAll for 
ccp.general.DataLocation.AbstractDataStore.externalDatas

NmrCalc.ExternalData 
objects that point to this file.
  @param  Dloc_MimeTypeDataStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Dloc_MimeTypeDataStore_FindAllExternalDatas_keyval2(Dloc_MimeTypeDataStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.general.DataLocation.AbstractDataStore.externalDatas

NmrCalc.ExternalData 
objects that point to this file.
  @param  Dloc_MimeTypeDataStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Dloc_MimeTypeDataStore_FindAllExternalDatas_keyval3(Dloc_MimeTypeDataStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.general.DataLocation.AbstractDataStore.externalDatas

NmrCalc.ExternalData 
objects that point to this file.
  @param  Dloc_MimeTypeDataStore self
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
extern ApiSet Dloc_MimeTypeDataStore_FindAllExternalDatas_keyval4(Dloc_MimeTypeDataStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_MimeTypeDataStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Dloc_MimeTypeDataStore_FindFirstApplicationData(Dloc_MimeTypeDataStore self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_MimeTypeDataStore self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Dloc_MimeTypeDataStore_FindFirstApplicationData_keyval0(Dloc_MimeTypeDataStore self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_MimeTypeDataStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Dloc_MimeTypeDataStore_FindFirstApplicationData_keyval1(Dloc_MimeTypeDataStore self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_MimeTypeDataStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Dloc_MimeTypeDataStore_FindFirstApplicationData_keyval2(Dloc_MimeTypeDataStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_MimeTypeDataStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Dloc_MimeTypeDataStore_FindFirstApplicationData_keyval3(Dloc_MimeTypeDataStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_MimeTypeDataStore self
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
extern Impl_ApplicationData Dloc_MimeTypeDataStore_FindFirstApplicationData_keyval4(Dloc_MimeTypeDataStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.general.DataLocation.AbstractDataStore.externalDatas

NmrCalc.ExternalData 
objects that point to this file.
  @param  Dloc_MimeTypeDataStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Calc_ExternalData Dloc_MimeTypeDataStore_FindFirstExternalData(Dloc_MimeTypeDataStore self, ApiMap conditions);

/**
  FindFirst for 
ccp.general.DataLocation.AbstractDataStore.externalDatas

NmrCalc.ExternalData 
objects that point to this file.
  @param  Dloc_MimeTypeDataStore self
  @returns  the first value that satisfies the conditions 
**/
extern Calc_ExternalData Dloc_MimeTypeDataStore_FindFirstExternalData_keyval0(Dloc_MimeTypeDataStore self);

/**
  FindFirst for 
ccp.general.DataLocation.AbstractDataStore.externalDatas

NmrCalc.ExternalData 
objects that point to this file.
  @param  Dloc_MimeTypeDataStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Calc_ExternalData Dloc_MimeTypeDataStore_FindFirstExternalData_keyval1(Dloc_MimeTypeDataStore self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.general.DataLocation.AbstractDataStore.externalDatas

NmrCalc.ExternalData 
objects that point to this file.
  @param  Dloc_MimeTypeDataStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Calc_ExternalData Dloc_MimeTypeDataStore_FindFirstExternalData_keyval2(Dloc_MimeTypeDataStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.general.DataLocation.AbstractDataStore.externalDatas

NmrCalc.ExternalData 
objects that point to this file.
  @param  Dloc_MimeTypeDataStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Calc_ExternalData Dloc_MimeTypeDataStore_FindFirstExternalData_keyval3(Dloc_MimeTypeDataStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.general.DataLocation.AbstractDataStore.externalDatas

NmrCalc.ExternalData 
objects that point to this file.
  @param  Dloc_MimeTypeDataStore self
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
extern Calc_ExternalData Dloc_MimeTypeDataStore_FindFirstExternalData_keyval4(Dloc_MimeTypeDataStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.general.DataLocation.MimeTypeDataStore
  @param  Dloc_MimeTypeDataStore self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Dloc_MimeTypeDataStore_Get(Dloc_MimeTypeDataStore self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Dloc_MimeTypeDataStore self
  @returns   the result
**/
extern Acco_AccessObject Dloc_MimeTypeDataStore_GetAccess(Dloc_MimeTypeDataStore self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Dloc_MimeTypeDataStore self
  @returns   the result
**/
extern Acco_AccessObject Dloc_MimeTypeDataStore_GetActiveAccess(Dloc_MimeTypeDataStore self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_MimeTypeDataStore self
  @returns   the result
**/
extern ApiList Dloc_MimeTypeDataStore_GetApplicationData(Dloc_MimeTypeDataStore self);

/**
  GetByKey for ccp.general.DataLocation.MimeTypeDataStore
  @param  Dloc_MimeTypeDataStore self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Dloc_MimeTypeDataStore Dloc_MimeTypeDataStore_GetByKey(Dloc_MimeTypeDataStore self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Dloc_MimeTypeDataStore self
  @returns   the result
**/
extern ApiString Dloc_MimeTypeDataStore_GetClassName(Dloc_MimeTypeDataStore self);

/**
  Get for 
ccp.general.DataLocation.AbstractDataStore.dataLocationStore

parent 
link
  @param  Dloc_MimeTypeDataStore self
  @returns   the result
**/
extern Dloc_DataLocationStore Dloc_MimeTypeDataStore_GetDataLocationStore(Dloc_MimeTypeDataStore self);

/**
  Get for ccp.general.DataLocation.AbstractDataStore.dataUrl

DataUrl 
under which AbstractDataStore is stored
  @param  Dloc_MimeTypeDataStore self
  @returns   the result
**/
extern Dloc_DataUrl Dloc_MimeTypeDataStore_GetDataUrl(Dloc_MimeTypeDataStore self);

/**
  Get for ccp.general.DataLocation.AbstractDataStore.details

Free text, 
for notes, explanatory comments, etc.
  @param  Dloc_MimeTypeDataStore self
  @returns   the result
**/
extern ApiString Dloc_MimeTypeDataStore_GetDetails(Dloc_MimeTypeDataStore self);

/**
  Get for 
ccp.general.DataLocation.AbstractDataStore.externalDatas

NmrCalc.ExternalData 
objects that point to this file.
  @param  Dloc_MimeTypeDataStore self
  @returns   the result
**/
extern ApiSet Dloc_MimeTypeDataStore_GetExternalDatas(Dloc_MimeTypeDataStore self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Dloc_MimeTypeDataStore self
  @returns   the result
**/
extern ApiList Dloc_MimeTypeDataStore_GetFieldNames(Dloc_MimeTypeDataStore self);

/**
  Get for ccp.general.DataLocation.AbstractDataStore.fullPath

Full path 
to data
  @param  Dloc_MimeTypeDataStore self
  @returns   the result
**/
extern ApiString Dloc_MimeTypeDataStore_GetFullPath(Dloc_MimeTypeDataStore self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Dloc_MimeTypeDataStore self
  @returns   the result
**/
extern ApiBoolean Dloc_MimeTypeDataStore_GetInConstructor(Dloc_MimeTypeDataStore self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Dloc_MimeTypeDataStore self
  @returns   the result
**/
extern ApiBoolean Dloc_MimeTypeDataStore_GetIsDeleted(Dloc_MimeTypeDataStore self);

/**
  Get for ccp.general.DataLocation.MimeTypeDataStore.mimeType

mime type 
of datasource
  @param  Dloc_MimeTypeDataStore self
  @returns   the result
**/
extern ApiString Dloc_MimeTypeDataStore_GetMimeType(Dloc_MimeTypeDataStore self);

/**
  Get for 
ccp.general.DataLocation.MimeTypeDataStore.nmrDataSourceImage

ccp.nmr.Nmr.DataSourceImage 
stored in this DataStore
  @param  Dloc_MimeTypeDataStore self
  @returns   the result
**/
extern Nmr_DataSourceImage Dloc_MimeTypeDataStore_GetNmrDataSourceImage(Dloc_MimeTypeDataStore self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Dloc_MimeTypeDataStore self
  @returns   the result
**/
extern ApiString Dloc_MimeTypeDataStore_GetPackageName(Dloc_MimeTypeDataStore self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Dloc_MimeTypeDataStore self
  @returns   the result
**/
extern ApiString Dloc_MimeTypeDataStore_GetPackageShortName(Dloc_MimeTypeDataStore self);

/**
  Get for ccp.general.DataLocation.AbstractDataStore.parent

link to 
parent object - synonym for dataLocationStore
  @param  Dloc_MimeTypeDataStore self
  @returns   the result
**/
extern Dloc_DataLocationStore Dloc_MimeTypeDataStore_GetParent(Dloc_MimeTypeDataStore self);

/**
  Get for ccp.general.DataLocation.AbstractDataStore.path

Path relative 
to dataUrl.url.
  @param  Dloc_MimeTypeDataStore self
  @returns   the result
**/
extern ApiString Dloc_MimeTypeDataStore_GetPath(Dloc_MimeTypeDataStore self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Dloc_MimeTypeDataStore self
  @returns   the result
**/
extern ApiString Dloc_MimeTypeDataStore_GetQualifiedName(Dloc_MimeTypeDataStore self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Dloc_MimeTypeDataStore self
  @returns   the result
**/
extern Impl_MemopsRoot Dloc_MimeTypeDataStore_GetRoot(Dloc_MimeTypeDataStore self);

/**
  Get for ccp.general.DataLocation.AbstractDataStore.serial

Serial number 
of object. Serves as object main key. Serial numbers of deleted objects 
are not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Dloc_MimeTypeDataStore self
  @returns   the result
**/
extern ApiInteger Dloc_MimeTypeDataStore_GetSerial(Dloc_MimeTypeDataStore self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Dloc_MimeTypeDataStore self
  @returns   the result
**/
extern Impl_TopObject Dloc_MimeTypeDataStore_GetTopObject(Dloc_MimeTypeDataStore self);

/**
  Constructor for ccp.general.DataLocation.MimeTypeDataStore
  @param  Dloc_DataLocationStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Dloc_MimeTypeDataStore Dloc_MimeTypeDataStore_Init(Dloc_DataLocationStore parent, ApiMap attrlinks);

/**
  Constructor for ccp.general.DataLocation.MimeTypeDataStore
  @param  Dloc_DataLocationStore parent
  @param  Dloc_DataUrl dataUrl
  @param  char * mimeType
  @param  char * path
  @returns  the new object
**/
extern Dloc_MimeTypeDataStore Dloc_MimeTypeDataStore_Init_reqd(Dloc_DataLocationStore parent, Dloc_DataUrl dataUrl, char * mimeType, char * path);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_MimeTypeDataStore self
  @param  Impl_ApplicationData value
**/
extern void *Dloc_MimeTypeDataStore_RemoveApplicationData(Dloc_MimeTypeDataStore self, Impl_ApplicationData value);

/**
  Remove for 
ccp.general.DataLocation.AbstractDataStore.externalDatas

NmrCalc.ExternalData 
objects that point to this file.
  @param  Dloc_MimeTypeDataStore self
  @param  Calc_ExternalData value
**/
extern void *Dloc_MimeTypeDataStore_RemoveExternalData(Dloc_MimeTypeDataStore self, Calc_ExternalData value);

/**
  SetAttr for ccp.general.DataLocation.MimeTypeDataStore
  @param  Dloc_MimeTypeDataStore self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Dloc_MimeTypeDataStore_Set(Dloc_MimeTypeDataStore self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Dloc_MimeTypeDataStore self
  @param  Acco_AccessObject value
**/
extern void *Dloc_MimeTypeDataStore_SetAccess(Dloc_MimeTypeDataStore self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_MimeTypeDataStore self
  @param  ApiList values
**/
extern void *Dloc_MimeTypeDataStore_SetApplicationData(Dloc_MimeTypeDataStore self, ApiList values);

/**
  Set for ccp.general.DataLocation.AbstractDataStore.dataUrl

DataUrl 
under which AbstractDataStore is stored
  @param  Dloc_MimeTypeDataStore self
  @param  Dloc_DataUrl value
**/
extern void *Dloc_MimeTypeDataStore_SetDataUrl(Dloc_MimeTypeDataStore self, Dloc_DataUrl value);

/**
  Set for ccp.general.DataLocation.AbstractDataStore.details

Free text, 
for notes, explanatory comments, etc.
  @param  Dloc_MimeTypeDataStore self
  @param  ApiString value
**/
extern void *Dloc_MimeTypeDataStore_SetDetails(Dloc_MimeTypeDataStore self, ApiString value);

/**
  Set for 
ccp.general.DataLocation.AbstractDataStore.externalDatas

NmrCalc.ExternalData 
objects that point to this file.
  @param  Dloc_MimeTypeDataStore self
  @param  ApiSet values
**/
extern void *Dloc_MimeTypeDataStore_SetExternalDatas(Dloc_MimeTypeDataStore self, ApiSet values);

/**
  Set for ccp.general.DataLocation.MimeTypeDataStore.mimeType

mime type 
of datasource
  @param  Dloc_MimeTypeDataStore self
  @param  ApiString value
**/
extern void *Dloc_MimeTypeDataStore_SetMimeType(Dloc_MimeTypeDataStore self, ApiString value);

/**
  Set for 
ccp.general.DataLocation.MimeTypeDataStore.nmrDataSourceImage

ccp.nmr.Nmr.DataSourceImage 
stored in this DataStore
  @param  Dloc_MimeTypeDataStore self
  @param  Nmr_DataSourceImage value
**/
extern void *Dloc_MimeTypeDataStore_SetNmrDataSourceImage(Dloc_MimeTypeDataStore self, Nmr_DataSourceImage value);

/**
  Set for ccp.general.DataLocation.AbstractDataStore.path

Path relative 
to dataUrl.url.
  @param  Dloc_MimeTypeDataStore self
  @param  ApiString value
**/
extern void *Dloc_MimeTypeDataStore_SetPath(Dloc_MimeTypeDataStore self, ApiString value);

/**
  Set for ccp.general.DataLocation.AbstractDataStore.serial

Serial number 
of object. Serves as object main key. Serial numbers of deleted objects 
are not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Dloc_MimeTypeDataStore self
  @param  ApiInteger value
**/
extern void *Dloc_MimeTypeDataStore_SetSerial(Dloc_MimeTypeDataStore self, ApiInteger value);

/**
  Sorted for 
ccp.general.DataLocation.AbstractDataStore.externalDatas

NmrCalc.ExternalData 
objects that point to this file.
  @param  Dloc_MimeTypeDataStore self
  @returns   the result
**/
extern ApiList Dloc_MimeTypeDataStore_SortedExternalDatas(Dloc_MimeTypeDataStore self);

#endif /* __incl__ccp_api_general_DataLocation_MimeTypeDataStore_h__ */
