
#ifndef __incl__ccp_api_nmr_NmrCalc_PeakListData_h__
#define __incl__ccp_api_nmr_NmrCalc_PeakListData_h__

#include "ccp.h"

/*
  Nmr PeakList data
*/

/* package ccp.api.nmr.NmrCalc */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_PeakListData self
  @param  Impl_ApplicationData value
**/
extern void *Calc_PeakListData_AddApplicationData(Calc_PeakListData self, Impl_ApplicationData value);

/**
  Add for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_PeakListData self
  @param  Calc_RunParameter value
**/
extern void *Calc_PeakListData_AddRunParameter(Calc_PeakListData self, Calc_RunParameter value);

/**
  CheckAllValid for ccp.nmr.NmrCalc.PeakListData
  @param  Calc_PeakListData self
  @param  ApiBoolean complete
**/
extern void *Calc_PeakListData_CheckAllValid(Calc_PeakListData self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.NmrCalc.PeakListData
  @param  Calc_PeakListData self
  @param  ApiBoolean complete
**/
extern void *Calc_PeakListData_CheckValid(Calc_PeakListData self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_PeakListData self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Calc_PeakListData_FindAllApplicationData(Calc_PeakListData self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_PeakListData self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Calc_PeakListData_FindAllApplicationData_keyval0(Calc_PeakListData self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_PeakListData self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Calc_PeakListData_FindAllApplicationData_keyval1(Calc_PeakListData self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_PeakListData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Calc_PeakListData_FindAllApplicationData_keyval2(Calc_PeakListData self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_PeakListData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Calc_PeakListData_FindAllApplicationData_keyval3(Calc_PeakListData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_PeakListData self
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
extern ApiList Calc_PeakListData_FindAllApplicationData_keyval4(Calc_PeakListData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_PeakListData self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Calc_PeakListData_FindAllRunParameters(Calc_PeakListData self, ApiMap conditions);

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_PeakListData self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Calc_PeakListData_FindAllRunParameters_keyval0(Calc_PeakListData self);

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_PeakListData self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Calc_PeakListData_FindAllRunParameters_keyval1(Calc_PeakListData self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_PeakListData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Calc_PeakListData_FindAllRunParameters_keyval2(Calc_PeakListData self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_PeakListData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Calc_PeakListData_FindAllRunParameters_keyval3(Calc_PeakListData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_PeakListData self
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
extern ApiSet Calc_PeakListData_FindAllRunParameters_keyval4(Calc_PeakListData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_PeakListData self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Calc_PeakListData_FindFirstApplicationData(Calc_PeakListData self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_PeakListData self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Calc_PeakListData_FindFirstApplicationData_keyval0(Calc_PeakListData self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_PeakListData self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Calc_PeakListData_FindFirstApplicationData_keyval1(Calc_PeakListData self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_PeakListData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Calc_PeakListData_FindFirstApplicationData_keyval2(Calc_PeakListData self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_PeakListData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Calc_PeakListData_FindFirstApplicationData_keyval3(Calc_PeakListData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_PeakListData self
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
extern Impl_ApplicationData Calc_PeakListData_FindFirstApplicationData_keyval4(Calc_PeakListData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_PeakListData self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Calc_RunParameter Calc_PeakListData_FindFirstRunParameter(Calc_PeakListData self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_PeakListData self
  @returns  the first value that satisfies the conditions 
**/
extern Calc_RunParameter Calc_PeakListData_FindFirstRunParameter_keyval0(Calc_PeakListData self);

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_PeakListData self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Calc_RunParameter Calc_PeakListData_FindFirstRunParameter_keyval1(Calc_PeakListData self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_PeakListData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Calc_RunParameter Calc_PeakListData_FindFirstRunParameter_keyval2(Calc_PeakListData self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_PeakListData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Calc_RunParameter Calc_PeakListData_FindFirstRunParameter_keyval3(Calc_PeakListData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_PeakListData self
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
extern Calc_RunParameter Calc_PeakListData_FindFirstRunParameter_keyval4(Calc_PeakListData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.NmrCalc.PeakListData
  @param  Calc_PeakListData self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Calc_PeakListData_Get(Calc_PeakListData self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Calc_PeakListData self
  @returns   the result
**/
extern Acco_AccessObject Calc_PeakListData_GetAccess(Calc_PeakListData self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Calc_PeakListData self
  @returns   the result
**/
extern Acco_AccessObject Calc_PeakListData_GetActiveAccess(Calc_PeakListData self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_PeakListData self
  @returns   the result
**/
extern ApiList Calc_PeakListData_GetApplicationData(Calc_PeakListData self);

/**
  GetByKey for ccp.nmr.NmrCalc.PeakListData
  @param  Calc_PeakListData self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Calc_PeakListData Calc_PeakListData_GetByKey(Calc_PeakListData self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Calc_PeakListData self
  @returns   the result
**/
extern ApiString Calc_PeakListData_GetClassName(Calc_PeakListData self);

/**
  getter for derived link dataSource
  @param  Calc_PeakListData self
  @returns   the result
**/
extern Nmr_DataSource Calc_PeakListData_GetDataSource(Calc_PeakListData self);

/**
  Get for ccp.nmr.NmrCalc.PeakListData.dataSourceSerial

serial for 
Nmr.DataSource holding data - used to derive actual object.
  @param  Calc_PeakListData self
  @returns   the result
**/
extern ApiInteger Calc_PeakListData_GetDataSourceSerial(Calc_PeakListData self);

/**
  Get for ccp.nmr.NmrCalc.Data.details

Free text, for notes, explanatory 
comments, etc.
  @param  Calc_PeakListData self
  @returns   the result
**/
extern ApiString Calc_PeakListData_GetDetails(Calc_PeakListData self);

/**
  Get for ccp.nmr.NmrCalc.PeakListData.experimentSerial

serial for 
Nmr.Experiment holding data - used to derive actual object.
  @param  Calc_PeakListData self
  @returns   the result
**/
extern ApiInteger Calc_PeakListData_GetExperimentSerial(Calc_PeakListData self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Calc_PeakListData self
  @returns   the result
**/
extern ApiList Calc_PeakListData_GetFieldNames(Calc_PeakListData self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Calc_PeakListData self
  @returns   the result
**/
extern ApiBoolean Calc_PeakListData_GetInConstructor(Calc_PeakListData self);

/**
  Get for ccp.nmr.NmrCalc.Data.ioRole

Role of data in calculation (input 
/ output).
  @param  Calc_PeakListData self
  @returns   the result
**/
extern ApiString Calc_PeakListData_GetIoRole(Calc_PeakListData self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Calc_PeakListData self
  @returns   the result
**/
extern ApiBoolean Calc_PeakListData_GetIsDeleted(Calc_PeakListData self);

/**
  Get for ccp.nmr.NmrCalc.Data.name

name identifying data
  @param  Calc_PeakListData self
  @returns   the result
**/
extern ApiString Calc_PeakListData_GetName(Calc_PeakListData self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Calc_PeakListData self
  @returns   the result
**/
extern ApiString Calc_PeakListData_GetPackageName(Calc_PeakListData self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Calc_PeakListData self
  @returns   the result
**/
extern ApiString Calc_PeakListData_GetPackageShortName(Calc_PeakListData self);

/**
  Get for ccp.nmr.NmrCalc.Data.parent

link to parent object - synonym for 
run
  @param  Calc_PeakListData self
  @returns   the result
**/
extern Calc_Run Calc_PeakListData_GetParent(Calc_PeakListData self);

/**
  getter for derived link peakList
  @param  Calc_PeakListData self
  @returns   the result
**/
extern Nmr_PeakList Calc_PeakListData_GetPeakList(Calc_PeakListData self);

/**
  Get for ccp.nmr.NmrCalc.PeakListData.peakListSerial

serial for 
Nmr.PeakList (if any)  - used to derive actual object.
  @param  Calc_PeakListData self
  @returns   the result
**/
extern ApiInteger Calc_PeakListData_GetPeakListSerial(Calc_PeakListData self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Calc_PeakListData self
  @returns   the result
**/
extern ApiString Calc_PeakListData_GetQualifiedName(Calc_PeakListData self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Calc_PeakListData self
  @returns   the result
**/
extern Impl_MemopsRoot Calc_PeakListData_GetRoot(Calc_PeakListData self);

/**
  Get for ccp.nmr.NmrCalc.Data.run

parent link
  @param  Calc_PeakListData self
  @returns   the result
**/
extern Calc_Run Calc_PeakListData_GetRun(Calc_PeakListData self);

/**
  Get for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_PeakListData self
  @returns   the result
**/
extern ApiSet Calc_PeakListData_GetRunParameters(Calc_PeakListData self);

/**
  Get for ccp.nmr.NmrCalc.Data.serial

Serial number of object. Serves as 
object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Calc_PeakListData self
  @returns   the result
**/
extern ApiInteger Calc_PeakListData_GetSerial(Calc_PeakListData self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Calc_PeakListData self
  @returns   the result
**/
extern Impl_TopObject Calc_PeakListData_GetTopObject(Calc_PeakListData self);

/**
  Get for ccp.nmr.NmrCalc.Data.weight

Weight given to data
  @param  Calc_PeakListData self
  @returns   the result
**/
extern ApiFloat Calc_PeakListData_GetWeight(Calc_PeakListData self);

/**
  Constructor for ccp.nmr.NmrCalc.PeakListData
  @param  Calc_Run parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Calc_PeakListData Calc_PeakListData_Init(Calc_Run parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.NmrCalc.PeakListData
  @param  Calc_Run parent
  @returns  the new object
**/
extern Calc_PeakListData Calc_PeakListData_Init_reqd(Calc_Run parent);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_PeakListData self
  @param  Impl_ApplicationData value
**/
extern void *Calc_PeakListData_RemoveApplicationData(Calc_PeakListData self, Impl_ApplicationData value);

/**
  Remove for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_PeakListData self
  @param  Calc_RunParameter value
**/
extern void *Calc_PeakListData_RemoveRunParameter(Calc_PeakListData self, Calc_RunParameter value);

/**
  SetAttr for ccp.nmr.NmrCalc.PeakListData
  @param  Calc_PeakListData self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Calc_PeakListData_Set(Calc_PeakListData self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Calc_PeakListData self
  @param  Acco_AccessObject value
**/
extern void *Calc_PeakListData_SetAccess(Calc_PeakListData self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_PeakListData self
  @param  ApiList values
**/
extern void *Calc_PeakListData_SetApplicationData(Calc_PeakListData self, ApiList values);

/**
  Set for ccp.nmr.NmrCalc.PeakListData.dataSourceSerial

serial for 
Nmr.DataSource holding data - used to derive actual object.
  @param  Calc_PeakListData self
  @param  ApiInteger value
**/
extern void *Calc_PeakListData_SetDataSourceSerial(Calc_PeakListData self, ApiInteger value);

/**
  Set for ccp.nmr.NmrCalc.Data.details

Free text, for notes, explanatory 
comments, etc.
  @param  Calc_PeakListData self
  @param  ApiString value
**/
extern void *Calc_PeakListData_SetDetails(Calc_PeakListData self, ApiString value);

/**
  Set for ccp.nmr.NmrCalc.PeakListData.experimentSerial

serial for 
Nmr.Experiment holding data - used to derive actual object.
  @param  Calc_PeakListData self
  @param  ApiInteger value
**/
extern void *Calc_PeakListData_SetExperimentSerial(Calc_PeakListData self, ApiInteger value);

/**
  Set for ccp.nmr.NmrCalc.Data.ioRole

Role of data in calculation (input 
/ output).
  @param  Calc_PeakListData self
  @param  ApiString value
**/
extern void *Calc_PeakListData_SetIoRole(Calc_PeakListData self, ApiString value);

/**
  Set for ccp.nmr.NmrCalc.Data.name

name identifying data
  @param  Calc_PeakListData self
  @param  ApiString value
**/
extern void *Calc_PeakListData_SetName(Calc_PeakListData self, ApiString value);

/**
  getter for derived link peakList
  @param  Calc_PeakListData self
  @param  Nmr_PeakList value
**/
extern void *Calc_PeakListData_SetPeakList(Calc_PeakListData self, Nmr_PeakList value);

/**
  Set for ccp.nmr.NmrCalc.PeakListData.peakListSerial

serial for 
Nmr.PeakList (if any)  - used to derive actual object.
  @param  Calc_PeakListData self
  @param  ApiInteger value
**/
extern void *Calc_PeakListData_SetPeakListSerial(Calc_PeakListData self, ApiInteger value);

/**
  Set for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_PeakListData self
  @param  ApiSet values
**/
extern void *Calc_PeakListData_SetRunParameters(Calc_PeakListData self, ApiSet values);

/**
  Set for ccp.nmr.NmrCalc.Data.serial

Serial number of object. Serves as 
object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Calc_PeakListData self
  @param  ApiInteger value
**/
extern void *Calc_PeakListData_SetSerial(Calc_PeakListData self, ApiInteger value);

/**
  Set for ccp.nmr.NmrCalc.Data.weight

Weight given to data
  @param  Calc_PeakListData self
  @param  ApiFloat value
**/
extern void *Calc_PeakListData_SetWeight(Calc_PeakListData self, ApiFloat value);

/**
  Sorted for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_PeakListData self
  @returns   the result
**/
extern ApiList Calc_PeakListData_SortedRunParameters(Calc_PeakListData self);

#endif /* __incl__ccp_api_nmr_NmrCalc_PeakListData_h__ */
