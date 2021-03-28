
#ifndef __incl__ccp_api_nmr_NmrCalc_ExternalData_h__
#define __incl__ccp_api_nmr_NmrCalc_ExternalData_h__

#include "ccp.h"

/*
  Unit of data from external file
*/

/* package ccp.api.nmr.NmrCalc */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_ExternalData self
  @param  Impl_ApplicationData value
**/
extern void *Calc_ExternalData_AddApplicationData(Calc_ExternalData self, Impl_ApplicationData value);

/**
  Add for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_ExternalData self
  @param  Calc_RunParameter value
**/
extern void *Calc_ExternalData_AddRunParameter(Calc_ExternalData self, Calc_RunParameter value);

/**
  CheckAllValid for ccp.nmr.NmrCalc.ExternalData
  @param  Calc_ExternalData self
  @param  ApiBoolean complete
**/
extern void *Calc_ExternalData_CheckAllValid(Calc_ExternalData self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.NmrCalc.ExternalData
  @param  Calc_ExternalData self
  @param  ApiBoolean complete
**/
extern void *Calc_ExternalData_CheckValid(Calc_ExternalData self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_ExternalData self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Calc_ExternalData_FindAllApplicationData(Calc_ExternalData self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_ExternalData self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Calc_ExternalData_FindAllApplicationData_keyval0(Calc_ExternalData self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_ExternalData self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Calc_ExternalData_FindAllApplicationData_keyval1(Calc_ExternalData self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_ExternalData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Calc_ExternalData_FindAllApplicationData_keyval2(Calc_ExternalData self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_ExternalData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Calc_ExternalData_FindAllApplicationData_keyval3(Calc_ExternalData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_ExternalData self
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
extern ApiList Calc_ExternalData_FindAllApplicationData_keyval4(Calc_ExternalData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_ExternalData self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Calc_ExternalData_FindAllRunParameters(Calc_ExternalData self, ApiMap conditions);

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_ExternalData self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Calc_ExternalData_FindAllRunParameters_keyval0(Calc_ExternalData self);

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_ExternalData self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Calc_ExternalData_FindAllRunParameters_keyval1(Calc_ExternalData self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_ExternalData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Calc_ExternalData_FindAllRunParameters_keyval2(Calc_ExternalData self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_ExternalData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Calc_ExternalData_FindAllRunParameters_keyval3(Calc_ExternalData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_ExternalData self
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
extern ApiSet Calc_ExternalData_FindAllRunParameters_keyval4(Calc_ExternalData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_ExternalData self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Calc_ExternalData_FindFirstApplicationData(Calc_ExternalData self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_ExternalData self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Calc_ExternalData_FindFirstApplicationData_keyval0(Calc_ExternalData self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_ExternalData self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Calc_ExternalData_FindFirstApplicationData_keyval1(Calc_ExternalData self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_ExternalData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Calc_ExternalData_FindFirstApplicationData_keyval2(Calc_ExternalData self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_ExternalData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Calc_ExternalData_FindFirstApplicationData_keyval3(Calc_ExternalData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_ExternalData self
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
extern Impl_ApplicationData Calc_ExternalData_FindFirstApplicationData_keyval4(Calc_ExternalData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_ExternalData self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Calc_RunParameter Calc_ExternalData_FindFirstRunParameter(Calc_ExternalData self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_ExternalData self
  @returns  the first value that satisfies the conditions 
**/
extern Calc_RunParameter Calc_ExternalData_FindFirstRunParameter_keyval0(Calc_ExternalData self);

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_ExternalData self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Calc_RunParameter Calc_ExternalData_FindFirstRunParameter_keyval1(Calc_ExternalData self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_ExternalData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Calc_RunParameter Calc_ExternalData_FindFirstRunParameter_keyval2(Calc_ExternalData self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_ExternalData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Calc_RunParameter Calc_ExternalData_FindFirstRunParameter_keyval3(Calc_ExternalData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_ExternalData self
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
extern Calc_RunParameter Calc_ExternalData_FindFirstRunParameter_keyval4(Calc_ExternalData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.NmrCalc.ExternalData
  @param  Calc_ExternalData self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Calc_ExternalData_Get(Calc_ExternalData self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Calc_ExternalData self
  @returns   the result
**/
extern Acco_AccessObject Calc_ExternalData_GetAccess(Calc_ExternalData self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Calc_ExternalData self
  @returns   the result
**/
extern Acco_AccessObject Calc_ExternalData_GetActiveAccess(Calc_ExternalData self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_ExternalData self
  @returns   the result
**/
extern ApiList Calc_ExternalData_GetApplicationData(Calc_ExternalData self);

/**
  GetByKey for ccp.nmr.NmrCalc.ExternalData
  @param  Calc_ExternalData self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Calc_ExternalData Calc_ExternalData_GetByKey(Calc_ExternalData self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Calc_ExternalData self
  @returns   the result
**/
extern ApiString Calc_ExternalData_GetClassName(Calc_ExternalData self);

/**
  Get for ccp.nmr.NmrCalc.ExternalData.dataStore

Storage location for 
data file
  @param  Calc_ExternalData self
  @returns   the result
**/
extern Dloc_AbstractDataStore Calc_ExternalData_GetDataStore(Calc_ExternalData self);

/**
  Get for ccp.nmr.NmrCalc.Data.details

Free text, for notes, explanatory 
comments, etc.
  @param  Calc_ExternalData self
  @returns   the result
**/
extern ApiString Calc_ExternalData_GetDetails(Calc_ExternalData self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Calc_ExternalData self
  @returns   the result
**/
extern ApiList Calc_ExternalData_GetFieldNames(Calc_ExternalData self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Calc_ExternalData self
  @returns   the result
**/
extern ApiBoolean Calc_ExternalData_GetInConstructor(Calc_ExternalData self);

/**
  Get for ccp.nmr.NmrCalc.Data.ioRole

Role of data in calculation (input 
/ output).
  @param  Calc_ExternalData self
  @returns   the result
**/
extern ApiString Calc_ExternalData_GetIoRole(Calc_ExternalData self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Calc_ExternalData self
  @returns   the result
**/
extern ApiBoolean Calc_ExternalData_GetIsDeleted(Calc_ExternalData self);

/**
  Get for ccp.nmr.NmrCalc.Data.name

name identifying data
  @param  Calc_ExternalData self
  @returns   the result
**/
extern ApiString Calc_ExternalData_GetName(Calc_ExternalData self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Calc_ExternalData self
  @returns   the result
**/
extern ApiString Calc_ExternalData_GetPackageName(Calc_ExternalData self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Calc_ExternalData self
  @returns   the result
**/
extern ApiString Calc_ExternalData_GetPackageShortName(Calc_ExternalData self);

/**
  Get for ccp.nmr.NmrCalc.Data.parent

link to parent object - synonym for 
run
  @param  Calc_ExternalData self
  @returns   the result
**/
extern Calc_Run Calc_ExternalData_GetParent(Calc_ExternalData self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Calc_ExternalData self
  @returns   the result
**/
extern ApiString Calc_ExternalData_GetQualifiedName(Calc_ExternalData self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Calc_ExternalData self
  @returns   the result
**/
extern Impl_MemopsRoot Calc_ExternalData_GetRoot(Calc_ExternalData self);

/**
  Get for ccp.nmr.NmrCalc.Data.run

parent link
  @param  Calc_ExternalData self
  @returns   the result
**/
extern Calc_Run Calc_ExternalData_GetRun(Calc_ExternalData self);

/**
  Get for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_ExternalData self
  @returns   the result
**/
extern ApiSet Calc_ExternalData_GetRunParameters(Calc_ExternalData self);

/**
  Get for ccp.nmr.NmrCalc.Data.serial

Serial number of object. Serves as 
object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Calc_ExternalData self
  @returns   the result
**/
extern ApiInteger Calc_ExternalData_GetSerial(Calc_ExternalData self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Calc_ExternalData self
  @returns   the result
**/
extern Impl_TopObject Calc_ExternalData_GetTopObject(Calc_ExternalData self);

/**
  Get for ccp.nmr.NmrCalc.Data.weight

Weight given to data
  @param  Calc_ExternalData self
  @returns   the result
**/
extern ApiFloat Calc_ExternalData_GetWeight(Calc_ExternalData self);

/**
  Constructor for ccp.nmr.NmrCalc.ExternalData
  @param  Calc_Run parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Calc_ExternalData Calc_ExternalData_Init(Calc_Run parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.NmrCalc.ExternalData
  @param  Calc_Run parent
  @returns  the new object
**/
extern Calc_ExternalData Calc_ExternalData_Init_reqd(Calc_Run parent);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_ExternalData self
  @param  Impl_ApplicationData value
**/
extern void *Calc_ExternalData_RemoveApplicationData(Calc_ExternalData self, Impl_ApplicationData value);

/**
  Remove for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_ExternalData self
  @param  Calc_RunParameter value
**/
extern void *Calc_ExternalData_RemoveRunParameter(Calc_ExternalData self, Calc_RunParameter value);

/**
  SetAttr for ccp.nmr.NmrCalc.ExternalData
  @param  Calc_ExternalData self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Calc_ExternalData_Set(Calc_ExternalData self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Calc_ExternalData self
  @param  Acco_AccessObject value
**/
extern void *Calc_ExternalData_SetAccess(Calc_ExternalData self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_ExternalData self
  @param  ApiList values
**/
extern void *Calc_ExternalData_SetApplicationData(Calc_ExternalData self, ApiList values);

/**
  Set for ccp.nmr.NmrCalc.ExternalData.dataStore

Storage location for 
data file
  @param  Calc_ExternalData self
  @param  Dloc_AbstractDataStore value
**/
extern void *Calc_ExternalData_SetDataStore(Calc_ExternalData self, Dloc_AbstractDataStore value);

/**
  Set for ccp.nmr.NmrCalc.Data.details

Free text, for notes, explanatory 
comments, etc.
  @param  Calc_ExternalData self
  @param  ApiString value
**/
extern void *Calc_ExternalData_SetDetails(Calc_ExternalData self, ApiString value);

/**
  Set for ccp.nmr.NmrCalc.Data.ioRole

Role of data in calculation (input 
/ output).
  @param  Calc_ExternalData self
  @param  ApiString value
**/
extern void *Calc_ExternalData_SetIoRole(Calc_ExternalData self, ApiString value);

/**
  Set for ccp.nmr.NmrCalc.Data.name

name identifying data
  @param  Calc_ExternalData self
  @param  ApiString value
**/
extern void *Calc_ExternalData_SetName(Calc_ExternalData self, ApiString value);

/**
  Set for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_ExternalData self
  @param  ApiSet values
**/
extern void *Calc_ExternalData_SetRunParameters(Calc_ExternalData self, ApiSet values);

/**
  Set for ccp.nmr.NmrCalc.Data.serial

Serial number of object. Serves as 
object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Calc_ExternalData self
  @param  ApiInteger value
**/
extern void *Calc_ExternalData_SetSerial(Calc_ExternalData self, ApiInteger value);

/**
  Set for ccp.nmr.NmrCalc.Data.weight

Weight given to data
  @param  Calc_ExternalData self
  @param  ApiFloat value
**/
extern void *Calc_ExternalData_SetWeight(Calc_ExternalData self, ApiFloat value);

/**
  Sorted for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_ExternalData self
  @returns   the result
**/
extern ApiList Calc_ExternalData_SortedRunParameters(Calc_ExternalData self);

#endif /* __incl__ccp_api_nmr_NmrCalc_ExternalData_h__ */
