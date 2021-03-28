
#ifndef __incl__ccp_api_nmr_NmrCalc_Data_h__
#define __incl__ccp_api_nmr_NmrCalc_Data_h__

#include "ccp.h"

/*
  Data used or produced by NMR calculation run
*/

/* package ccp.api.nmr.NmrCalc */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_Data self
  @param  Impl_ApplicationData value
**/
extern void *Calc_Data_AddApplicationData(Calc_Data self, Impl_ApplicationData value);

/**
  Add for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_Data self
  @param  Calc_RunParameter value
**/
extern void *Calc_Data_AddRunParameter(Calc_Data self, Calc_RunParameter value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_Data self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Calc_Data_FindAllApplicationData(Calc_Data self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_Data self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Calc_Data_FindAllApplicationData_keyval0(Calc_Data self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_Data self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Calc_Data_FindAllApplicationData_keyval1(Calc_Data self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_Data self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Calc_Data_FindAllApplicationData_keyval2(Calc_Data self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_Data self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Calc_Data_FindAllApplicationData_keyval3(Calc_Data self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_Data self
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
extern ApiList Calc_Data_FindAllApplicationData_keyval4(Calc_Data self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_Data self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Calc_Data_FindAllRunParameters(Calc_Data self, ApiMap conditions);

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_Data self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Calc_Data_FindAllRunParameters_keyval0(Calc_Data self);

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_Data self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Calc_Data_FindAllRunParameters_keyval1(Calc_Data self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_Data self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Calc_Data_FindAllRunParameters_keyval2(Calc_Data self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_Data self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Calc_Data_FindAllRunParameters_keyval3(Calc_Data self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_Data self
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
extern ApiSet Calc_Data_FindAllRunParameters_keyval4(Calc_Data self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_Data self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Calc_Data_FindFirstApplicationData(Calc_Data self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_Data self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Calc_Data_FindFirstApplicationData_keyval0(Calc_Data self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_Data self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Calc_Data_FindFirstApplicationData_keyval1(Calc_Data self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_Data self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Calc_Data_FindFirstApplicationData_keyval2(Calc_Data self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_Data self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Calc_Data_FindFirstApplicationData_keyval3(Calc_Data self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_Data self
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
extern Impl_ApplicationData Calc_Data_FindFirstApplicationData_keyval4(Calc_Data self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_Data self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Calc_RunParameter Calc_Data_FindFirstRunParameter(Calc_Data self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_Data self
  @returns  the first value that satisfies the conditions 
**/
extern Calc_RunParameter Calc_Data_FindFirstRunParameter_keyval0(Calc_Data self);

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_Data self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Calc_RunParameter Calc_Data_FindFirstRunParameter_keyval1(Calc_Data self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_Data self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Calc_RunParameter Calc_Data_FindFirstRunParameter_keyval2(Calc_Data self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_Data self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Calc_RunParameter Calc_Data_FindFirstRunParameter_keyval3(Calc_Data self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_Data self
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
extern Calc_RunParameter Calc_Data_FindFirstRunParameter_keyval4(Calc_Data self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Calc_Data self
  @returns   the result
**/
extern Acco_AccessObject Calc_Data_GetAccess(Calc_Data self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Calc_Data self
  @returns   the result
**/
extern Acco_AccessObject Calc_Data_GetActiveAccess(Calc_Data self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_Data self
  @returns   the result
**/
extern ApiList Calc_Data_GetApplicationData(Calc_Data self);

/**
  GetByKey for ccp.nmr.NmrCalc.Data
  @param  Calc_Data self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Calc_Data Calc_Data_GetByKey(Calc_Data self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Calc_Data self
  @returns   the result
**/
extern ApiString Calc_Data_GetClassName(Calc_Data self);

/**
  Get for ccp.nmr.NmrCalc.Data.details

Free text, for notes, explanatory 
comments, etc.
  @param  Calc_Data self
  @returns   the result
**/
extern ApiString Calc_Data_GetDetails(Calc_Data self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Calc_Data self
  @returns   the result
**/
extern ApiList Calc_Data_GetFieldNames(Calc_Data self);

/**
  GetFullKey for ccp.nmr.NmrCalc.Data
  @param  Calc_Data self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Calc_Data_GetFullKey(Calc_Data self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Calc_Data self
  @returns   the result
**/
extern ApiBoolean Calc_Data_GetInConstructor(Calc_Data self);

/**
  Get for ccp.nmr.NmrCalc.Data.ioRole

Role of data in calculation (input 
/ output).
  @param  Calc_Data self
  @returns   the result
**/
extern ApiString Calc_Data_GetIoRole(Calc_Data self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Calc_Data self
  @returns   the result
**/
extern ApiBoolean Calc_Data_GetIsDeleted(Calc_Data self);

/**
  GetLocalKey for ccp.nmr.NmrCalc.Data
  @param  Calc_Data self
  @returns  Local object key
**/
extern ApiObject Calc_Data_GetLocalKey(Calc_Data self);

/**
  Get for ccp.nmr.NmrCalc.Data.name

name identifying data
  @param  Calc_Data self
  @returns   the result
**/
extern ApiString Calc_Data_GetName(Calc_Data self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Calc_Data self
  @returns   the result
**/
extern ApiString Calc_Data_GetPackageName(Calc_Data self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Calc_Data self
  @returns   the result
**/
extern ApiString Calc_Data_GetPackageShortName(Calc_Data self);

/**
  Get for ccp.nmr.NmrCalc.Data.parent

link to parent object - synonym for 
run
  @param  Calc_Data self
  @returns   the result
**/
extern Calc_Run Calc_Data_GetParent(Calc_Data self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Calc_Data self
  @returns   the result
**/
extern ApiString Calc_Data_GetQualifiedName(Calc_Data self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Calc_Data self
  @returns   the result
**/
extern Impl_MemopsRoot Calc_Data_GetRoot(Calc_Data self);

/**
  Get for ccp.nmr.NmrCalc.Data.run

parent link
  @param  Calc_Data self
  @returns   the result
**/
extern Calc_Run Calc_Data_GetRun(Calc_Data self);

/**
  Get for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_Data self
  @returns   the result
**/
extern ApiSet Calc_Data_GetRunParameters(Calc_Data self);

/**
  Get for ccp.nmr.NmrCalc.Data.serial

Serial number of object. Serves as 
object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Calc_Data self
  @returns   the result
**/
extern ApiInteger Calc_Data_GetSerial(Calc_Data self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Calc_Data self
  @returns   the result
**/
extern Impl_TopObject Calc_Data_GetTopObject(Calc_Data self);

/**
  Get for ccp.nmr.NmrCalc.Data.weight

Weight given to data
  @param  Calc_Data self
  @returns   the result
**/
extern ApiFloat Calc_Data_GetWeight(Calc_Data self);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_Data self
  @param  Impl_ApplicationData value
**/
extern void *Calc_Data_RemoveApplicationData(Calc_Data self, Impl_ApplicationData value);

/**
  Remove for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_Data self
  @param  Calc_RunParameter value
**/
extern void *Calc_Data_RemoveRunParameter(Calc_Data self, Calc_RunParameter value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Calc_Data self
  @param  Acco_AccessObject value
**/
extern void *Calc_Data_SetAccess(Calc_Data self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_Data self
  @param  ApiList values
**/
extern void *Calc_Data_SetApplicationData(Calc_Data self, ApiList values);

/**
  Set for ccp.nmr.NmrCalc.Data.details

Free text, for notes, explanatory 
comments, etc.
  @param  Calc_Data self
  @param  ApiString value
**/
extern void *Calc_Data_SetDetails(Calc_Data self, ApiString value);

/**
  Set for ccp.nmr.NmrCalc.Data.ioRole

Role of data in calculation (input 
/ output).
  @param  Calc_Data self
  @param  ApiString value
**/
extern void *Calc_Data_SetIoRole(Calc_Data self, ApiString value);

/**
  Set for ccp.nmr.NmrCalc.Data.name

name identifying data
  @param  Calc_Data self
  @param  ApiString value
**/
extern void *Calc_Data_SetName(Calc_Data self, ApiString value);

/**
  Set for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_Data self
  @param  ApiSet values
**/
extern void *Calc_Data_SetRunParameters(Calc_Data self, ApiSet values);

/**
  Set for ccp.nmr.NmrCalc.Data.serial

Serial number of object. Serves as 
object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Calc_Data self
  @param  ApiInteger value
**/
extern void *Calc_Data_SetSerial(Calc_Data self, ApiInteger value);

/**
  Set for ccp.nmr.NmrCalc.Data.weight

Weight given to data
  @param  Calc_Data self
  @param  ApiFloat value
**/
extern void *Calc_Data_SetWeight(Calc_Data self, ApiFloat value);

/**
  Sorted for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_Data self
  @returns   the result
**/
extern ApiList Calc_Data_SortedRunParameters(Calc_Data self);

#endif /* __incl__ccp_api_nmr_NmrCalc_Data_h__ */
