
#ifndef __incl__ccp_api_nmr_NmrCalc_DerivedListData_h__
#define __incl__ccp_api_nmr_NmrCalc_DerivedListData_h__

#include "ccp.h"

/*
  Nmr.DerivedDataList data
*/

/* package ccp.api.nmr.NmrCalc */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_DerivedListData self
  @param  Impl_ApplicationData value
**/
extern void *Calc_DerivedListData_AddApplicationData(Calc_DerivedListData self, Impl_ApplicationData value);

/**
  Add for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_DerivedListData self
  @param  Calc_RunParameter value
**/
extern void *Calc_DerivedListData_AddRunParameter(Calc_DerivedListData self, Calc_RunParameter value);

/**
  CheckAllValid for ccp.nmr.NmrCalc.DerivedListData
  @param  Calc_DerivedListData self
  @param  ApiBoolean complete
**/
extern void *Calc_DerivedListData_CheckAllValid(Calc_DerivedListData self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.NmrCalc.DerivedListData
  @param  Calc_DerivedListData self
  @param  ApiBoolean complete
**/
extern void *Calc_DerivedListData_CheckValid(Calc_DerivedListData self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_DerivedListData self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Calc_DerivedListData_FindAllApplicationData(Calc_DerivedListData self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_DerivedListData self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Calc_DerivedListData_FindAllApplicationData_keyval0(Calc_DerivedListData self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_DerivedListData self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Calc_DerivedListData_FindAllApplicationData_keyval1(Calc_DerivedListData self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_DerivedListData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Calc_DerivedListData_FindAllApplicationData_keyval2(Calc_DerivedListData self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_DerivedListData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Calc_DerivedListData_FindAllApplicationData_keyval3(Calc_DerivedListData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_DerivedListData self
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
extern ApiList Calc_DerivedListData_FindAllApplicationData_keyval4(Calc_DerivedListData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_DerivedListData self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Calc_DerivedListData_FindAllRunParameters(Calc_DerivedListData self, ApiMap conditions);

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_DerivedListData self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Calc_DerivedListData_FindAllRunParameters_keyval0(Calc_DerivedListData self);

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_DerivedListData self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Calc_DerivedListData_FindAllRunParameters_keyval1(Calc_DerivedListData self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_DerivedListData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Calc_DerivedListData_FindAllRunParameters_keyval2(Calc_DerivedListData self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_DerivedListData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Calc_DerivedListData_FindAllRunParameters_keyval3(Calc_DerivedListData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_DerivedListData self
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
extern ApiSet Calc_DerivedListData_FindAllRunParameters_keyval4(Calc_DerivedListData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_DerivedListData self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Calc_DerivedListData_FindFirstApplicationData(Calc_DerivedListData self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_DerivedListData self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Calc_DerivedListData_FindFirstApplicationData_keyval0(Calc_DerivedListData self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_DerivedListData self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Calc_DerivedListData_FindFirstApplicationData_keyval1(Calc_DerivedListData self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_DerivedListData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Calc_DerivedListData_FindFirstApplicationData_keyval2(Calc_DerivedListData self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_DerivedListData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Calc_DerivedListData_FindFirstApplicationData_keyval3(Calc_DerivedListData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_DerivedListData self
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
extern Impl_ApplicationData Calc_DerivedListData_FindFirstApplicationData_keyval4(Calc_DerivedListData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_DerivedListData self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Calc_RunParameter Calc_DerivedListData_FindFirstRunParameter(Calc_DerivedListData self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_DerivedListData self
  @returns  the first value that satisfies the conditions 
**/
extern Calc_RunParameter Calc_DerivedListData_FindFirstRunParameter_keyval0(Calc_DerivedListData self);

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_DerivedListData self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Calc_RunParameter Calc_DerivedListData_FindFirstRunParameter_keyval1(Calc_DerivedListData self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_DerivedListData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Calc_RunParameter Calc_DerivedListData_FindFirstRunParameter_keyval2(Calc_DerivedListData self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_DerivedListData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Calc_RunParameter Calc_DerivedListData_FindFirstRunParameter_keyval3(Calc_DerivedListData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_DerivedListData self
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
extern Calc_RunParameter Calc_DerivedListData_FindFirstRunParameter_keyval4(Calc_DerivedListData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.NmrCalc.DerivedListData
  @param  Calc_DerivedListData self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Calc_DerivedListData_Get(Calc_DerivedListData self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Calc_DerivedListData self
  @returns   the result
**/
extern Acco_AccessObject Calc_DerivedListData_GetAccess(Calc_DerivedListData self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Calc_DerivedListData self
  @returns   the result
**/
extern Acco_AccessObject Calc_DerivedListData_GetActiveAccess(Calc_DerivedListData self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_DerivedListData self
  @returns   the result
**/
extern ApiList Calc_DerivedListData_GetApplicationData(Calc_DerivedListData self);

/**
  GetByKey for ccp.nmr.NmrCalc.DerivedListData
  @param  Calc_DerivedListData self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Calc_DerivedListData Calc_DerivedListData_GetByKey(Calc_DerivedListData self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Calc_DerivedListData self
  @returns   the result
**/
extern ApiString Calc_DerivedListData_GetClassName(Calc_DerivedListData self);

/**
  getter for derived link derivedDataList
  @param  Calc_DerivedListData self
  @returns   the result
**/
extern Nmr_DerivedDataList Calc_DerivedListData_GetDerivedDataList(Calc_DerivedListData self);

/**
  Get for ccp.nmr.NmrCalc.DerivedListData.derivedDataListSerial

serial of 
Nmr.DerivedDataList - used to derive actual object.
  @param  Calc_DerivedListData self
  @returns   the result
**/
extern ApiInteger Calc_DerivedListData_GetDerivedDataListSerial(Calc_DerivedListData self);

/**
  Get for ccp.nmr.NmrCalc.Data.details

Free text, for notes, explanatory 
comments, etc.
  @param  Calc_DerivedListData self
  @returns   the result
**/
extern ApiString Calc_DerivedListData_GetDetails(Calc_DerivedListData self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Calc_DerivedListData self
  @returns   the result
**/
extern ApiList Calc_DerivedListData_GetFieldNames(Calc_DerivedListData self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Calc_DerivedListData self
  @returns   the result
**/
extern ApiBoolean Calc_DerivedListData_GetInConstructor(Calc_DerivedListData self);

/**
  Get for ccp.nmr.NmrCalc.Data.ioRole

Role of data in calculation (input 
/ output).
  @param  Calc_DerivedListData self
  @returns   the result
**/
extern ApiString Calc_DerivedListData_GetIoRole(Calc_DerivedListData self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Calc_DerivedListData self
  @returns   the result
**/
extern ApiBoolean Calc_DerivedListData_GetIsDeleted(Calc_DerivedListData self);

/**
  Get for ccp.nmr.NmrCalc.Data.name

name identifying data
  @param  Calc_DerivedListData self
  @returns   the result
**/
extern ApiString Calc_DerivedListData_GetName(Calc_DerivedListData self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Calc_DerivedListData self
  @returns   the result
**/
extern ApiString Calc_DerivedListData_GetPackageName(Calc_DerivedListData self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Calc_DerivedListData self
  @returns   the result
**/
extern ApiString Calc_DerivedListData_GetPackageShortName(Calc_DerivedListData self);

/**
  Get for ccp.nmr.NmrCalc.Data.parent

link to parent object - synonym for 
run
  @param  Calc_DerivedListData self
  @returns   the result
**/
extern Calc_Run Calc_DerivedListData_GetParent(Calc_DerivedListData self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Calc_DerivedListData self
  @returns   the result
**/
extern ApiString Calc_DerivedListData_GetQualifiedName(Calc_DerivedListData self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Calc_DerivedListData self
  @returns   the result
**/
extern Impl_MemopsRoot Calc_DerivedListData_GetRoot(Calc_DerivedListData self);

/**
  Get for ccp.nmr.NmrCalc.Data.run

parent link
  @param  Calc_DerivedListData self
  @returns   the result
**/
extern Calc_Run Calc_DerivedListData_GetRun(Calc_DerivedListData self);

/**
  Get for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_DerivedListData self
  @returns   the result
**/
extern ApiSet Calc_DerivedListData_GetRunParameters(Calc_DerivedListData self);

/**
  Get for ccp.nmr.NmrCalc.Data.serial

Serial number of object. Serves as 
object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Calc_DerivedListData self
  @returns   the result
**/
extern ApiInteger Calc_DerivedListData_GetSerial(Calc_DerivedListData self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Calc_DerivedListData self
  @returns   the result
**/
extern Impl_TopObject Calc_DerivedListData_GetTopObject(Calc_DerivedListData self);

/**
  Get for ccp.nmr.NmrCalc.Data.weight

Weight given to data
  @param  Calc_DerivedListData self
  @returns   the result
**/
extern ApiFloat Calc_DerivedListData_GetWeight(Calc_DerivedListData self);

/**
  Constructor for ccp.nmr.NmrCalc.DerivedListData
  @param  Calc_Run parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Calc_DerivedListData Calc_DerivedListData_Init(Calc_Run parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.NmrCalc.DerivedListData
  @param  Calc_Run parent
  @param  ApiInteger derivedDataListSerial
  @returns  the new object
**/
extern Calc_DerivedListData Calc_DerivedListData_Init_reqd(Calc_Run parent, ApiInteger derivedDataListSerial);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_DerivedListData self
  @param  Impl_ApplicationData value
**/
extern void *Calc_DerivedListData_RemoveApplicationData(Calc_DerivedListData self, Impl_ApplicationData value);

/**
  Remove for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_DerivedListData self
  @param  Calc_RunParameter value
**/
extern void *Calc_DerivedListData_RemoveRunParameter(Calc_DerivedListData self, Calc_RunParameter value);

/**
  SetAttr for ccp.nmr.NmrCalc.DerivedListData
  @param  Calc_DerivedListData self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Calc_DerivedListData_Set(Calc_DerivedListData self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Calc_DerivedListData self
  @param  Acco_AccessObject value
**/
extern void *Calc_DerivedListData_SetAccess(Calc_DerivedListData self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_DerivedListData self
  @param  ApiList values
**/
extern void *Calc_DerivedListData_SetApplicationData(Calc_DerivedListData self, ApiList values);

/**
  
  @param  Calc_DerivedListData self
  @param  Nmr_DerivedDataList value
**/
extern void *Calc_DerivedListData_SetDerivedDataList(Calc_DerivedListData self, Nmr_DerivedDataList value);

/**
  Set for ccp.nmr.NmrCalc.DerivedListData.derivedDataListSerial

serial of 
Nmr.DerivedDataList - used to derive actual object.
  @param  Calc_DerivedListData self
  @param  ApiInteger value
**/
extern void *Calc_DerivedListData_SetDerivedDataListSerial(Calc_DerivedListData self, ApiInteger value);

/**
  Set for ccp.nmr.NmrCalc.Data.details

Free text, for notes, explanatory 
comments, etc.
  @param  Calc_DerivedListData self
  @param  ApiString value
**/
extern void *Calc_DerivedListData_SetDetails(Calc_DerivedListData self, ApiString value);

/**
  Set for ccp.nmr.NmrCalc.Data.ioRole

Role of data in calculation (input 
/ output).
  @param  Calc_DerivedListData self
  @param  ApiString value
**/
extern void *Calc_DerivedListData_SetIoRole(Calc_DerivedListData self, ApiString value);

/**
  Set for ccp.nmr.NmrCalc.Data.name

name identifying data
  @param  Calc_DerivedListData self
  @param  ApiString value
**/
extern void *Calc_DerivedListData_SetName(Calc_DerivedListData self, ApiString value);

/**
  Set for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_DerivedListData self
  @param  ApiSet values
**/
extern void *Calc_DerivedListData_SetRunParameters(Calc_DerivedListData self, ApiSet values);

/**
  Set for ccp.nmr.NmrCalc.Data.serial

Serial number of object. Serves as 
object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Calc_DerivedListData self
  @param  ApiInteger value
**/
extern void *Calc_DerivedListData_SetSerial(Calc_DerivedListData self, ApiInteger value);

/**
  Set for ccp.nmr.NmrCalc.Data.weight

Weight given to data
  @param  Calc_DerivedListData self
  @param  ApiFloat value
**/
extern void *Calc_DerivedListData_SetWeight(Calc_DerivedListData self, ApiFloat value);

/**
  Sorted for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_DerivedListData self
  @returns   the result
**/
extern ApiList Calc_DerivedListData_SortedRunParameters(Calc_DerivedListData self);

#endif /* __incl__ccp_api_nmr_NmrCalc_DerivedListData_h__ */
