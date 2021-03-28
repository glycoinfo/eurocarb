
#ifndef __incl__ccp_api_nmr_NmrCalc_SpectrumData_h__
#define __incl__ccp_api_nmr_NmrCalc_SpectrumData_h__

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
  @param  Calc_SpectrumData self
  @param  Impl_ApplicationData value
**/
extern void *Calc_SpectrumData_AddApplicationData(Calc_SpectrumData self, Impl_ApplicationData value);

/**
  Add for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_SpectrumData self
  @param  Calc_RunParameter value
**/
extern void *Calc_SpectrumData_AddRunParameter(Calc_SpectrumData self, Calc_RunParameter value);

/**
  CheckAllValid for ccp.nmr.NmrCalc.SpectrumData
  @param  Calc_SpectrumData self
  @param  ApiBoolean complete
**/
extern void *Calc_SpectrumData_CheckAllValid(Calc_SpectrumData self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.NmrCalc.SpectrumData
  @param  Calc_SpectrumData self
  @param  ApiBoolean complete
**/
extern void *Calc_SpectrumData_CheckValid(Calc_SpectrumData self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_SpectrumData self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Calc_SpectrumData_FindAllApplicationData(Calc_SpectrumData self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_SpectrumData self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Calc_SpectrumData_FindAllApplicationData_keyval0(Calc_SpectrumData self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_SpectrumData self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Calc_SpectrumData_FindAllApplicationData_keyval1(Calc_SpectrumData self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_SpectrumData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Calc_SpectrumData_FindAllApplicationData_keyval2(Calc_SpectrumData self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_SpectrumData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Calc_SpectrumData_FindAllApplicationData_keyval3(Calc_SpectrumData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_SpectrumData self
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
extern ApiList Calc_SpectrumData_FindAllApplicationData_keyval4(Calc_SpectrumData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_SpectrumData self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Calc_SpectrumData_FindAllRunParameters(Calc_SpectrumData self, ApiMap conditions);

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_SpectrumData self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Calc_SpectrumData_FindAllRunParameters_keyval0(Calc_SpectrumData self);

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_SpectrumData self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Calc_SpectrumData_FindAllRunParameters_keyval1(Calc_SpectrumData self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_SpectrumData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Calc_SpectrumData_FindAllRunParameters_keyval2(Calc_SpectrumData self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_SpectrumData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Calc_SpectrumData_FindAllRunParameters_keyval3(Calc_SpectrumData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_SpectrumData self
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
extern ApiSet Calc_SpectrumData_FindAllRunParameters_keyval4(Calc_SpectrumData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_SpectrumData self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Calc_SpectrumData_FindFirstApplicationData(Calc_SpectrumData self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_SpectrumData self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Calc_SpectrumData_FindFirstApplicationData_keyval0(Calc_SpectrumData self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_SpectrumData self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Calc_SpectrumData_FindFirstApplicationData_keyval1(Calc_SpectrumData self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_SpectrumData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Calc_SpectrumData_FindFirstApplicationData_keyval2(Calc_SpectrumData self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_SpectrumData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Calc_SpectrumData_FindFirstApplicationData_keyval3(Calc_SpectrumData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_SpectrumData self
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
extern Impl_ApplicationData Calc_SpectrumData_FindFirstApplicationData_keyval4(Calc_SpectrumData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_SpectrumData self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Calc_RunParameter Calc_SpectrumData_FindFirstRunParameter(Calc_SpectrumData self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_SpectrumData self
  @returns  the first value that satisfies the conditions 
**/
extern Calc_RunParameter Calc_SpectrumData_FindFirstRunParameter_keyval0(Calc_SpectrumData self);

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_SpectrumData self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Calc_RunParameter Calc_SpectrumData_FindFirstRunParameter_keyval1(Calc_SpectrumData self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_SpectrumData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Calc_RunParameter Calc_SpectrumData_FindFirstRunParameter_keyval2(Calc_SpectrumData self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_SpectrumData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Calc_RunParameter Calc_SpectrumData_FindFirstRunParameter_keyval3(Calc_SpectrumData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_SpectrumData self
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
extern Calc_RunParameter Calc_SpectrumData_FindFirstRunParameter_keyval4(Calc_SpectrumData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.NmrCalc.SpectrumData
  @param  Calc_SpectrumData self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Calc_SpectrumData_Get(Calc_SpectrumData self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Calc_SpectrumData self
  @returns   the result
**/
extern Acco_AccessObject Calc_SpectrumData_GetAccess(Calc_SpectrumData self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Calc_SpectrumData self
  @returns   the result
**/
extern Acco_AccessObject Calc_SpectrumData_GetActiveAccess(Calc_SpectrumData self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_SpectrumData self
  @returns   the result
**/
extern ApiList Calc_SpectrumData_GetApplicationData(Calc_SpectrumData self);

/**
  GetByKey for ccp.nmr.NmrCalc.SpectrumData
  @param  Calc_SpectrumData self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Calc_SpectrumData Calc_SpectrumData_GetByKey(Calc_SpectrumData self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Calc_SpectrumData self
  @returns   the result
**/
extern ApiString Calc_SpectrumData_GetClassName(Calc_SpectrumData self);

/**
  getter for derived link dataSource
  @param  Calc_SpectrumData self
  @returns   the result
**/
extern Nmr_DataSource Calc_SpectrumData_GetDataSource(Calc_SpectrumData self);

/**
  Get for ccp.nmr.NmrCalc.SpectrumData.dataSourceSerial

serial for 
Nmr.DataSource holding data - used to derive actual object.
  @param  Calc_SpectrumData self
  @returns   the result
**/
extern ApiInteger Calc_SpectrumData_GetDataSourceSerial(Calc_SpectrumData self);

/**
  Get for ccp.nmr.NmrCalc.Data.details

Free text, for notes, explanatory 
comments, etc.
  @param  Calc_SpectrumData self
  @returns   the result
**/
extern ApiString Calc_SpectrumData_GetDetails(Calc_SpectrumData self);

/**
  Get for ccp.nmr.NmrCalc.SpectrumData.experimentSerial

serial for 
Nmr.Experiment holding data - used to derive actual object.
  @param  Calc_SpectrumData self
  @returns   the result
**/
extern ApiInteger Calc_SpectrumData_GetExperimentSerial(Calc_SpectrumData self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Calc_SpectrumData self
  @returns   the result
**/
extern ApiList Calc_SpectrumData_GetFieldNames(Calc_SpectrumData self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Calc_SpectrumData self
  @returns   the result
**/
extern ApiBoolean Calc_SpectrumData_GetInConstructor(Calc_SpectrumData self);

/**
  Get for ccp.nmr.NmrCalc.Data.ioRole

Role of data in calculation (input 
/ output).
  @param  Calc_SpectrumData self
  @returns   the result
**/
extern ApiString Calc_SpectrumData_GetIoRole(Calc_SpectrumData self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Calc_SpectrumData self
  @returns   the result
**/
extern ApiBoolean Calc_SpectrumData_GetIsDeleted(Calc_SpectrumData self);

/**
  Get for ccp.nmr.NmrCalc.Data.name

name identifying data
  @param  Calc_SpectrumData self
  @returns   the result
**/
extern ApiString Calc_SpectrumData_GetName(Calc_SpectrumData self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Calc_SpectrumData self
  @returns   the result
**/
extern ApiString Calc_SpectrumData_GetPackageName(Calc_SpectrumData self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Calc_SpectrumData self
  @returns   the result
**/
extern ApiString Calc_SpectrumData_GetPackageShortName(Calc_SpectrumData self);

/**
  Get for ccp.nmr.NmrCalc.Data.parent

link to parent object - synonym for 
run
  @param  Calc_SpectrumData self
  @returns   the result
**/
extern Calc_Run Calc_SpectrumData_GetParent(Calc_SpectrumData self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Calc_SpectrumData self
  @returns   the result
**/
extern ApiString Calc_SpectrumData_GetQualifiedName(Calc_SpectrumData self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Calc_SpectrumData self
  @returns   the result
**/
extern Impl_MemopsRoot Calc_SpectrumData_GetRoot(Calc_SpectrumData self);

/**
  Get for ccp.nmr.NmrCalc.Data.run

parent link
  @param  Calc_SpectrumData self
  @returns   the result
**/
extern Calc_Run Calc_SpectrumData_GetRun(Calc_SpectrumData self);

/**
  Get for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_SpectrumData self
  @returns   the result
**/
extern ApiSet Calc_SpectrumData_GetRunParameters(Calc_SpectrumData self);

/**
  Get for ccp.nmr.NmrCalc.Data.serial

Serial number of object. Serves as 
object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Calc_SpectrumData self
  @returns   the result
**/
extern ApiInteger Calc_SpectrumData_GetSerial(Calc_SpectrumData self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Calc_SpectrumData self
  @returns   the result
**/
extern Impl_TopObject Calc_SpectrumData_GetTopObject(Calc_SpectrumData self);

/**
  Get for ccp.nmr.NmrCalc.Data.weight

Weight given to data
  @param  Calc_SpectrumData self
  @returns   the result
**/
extern ApiFloat Calc_SpectrumData_GetWeight(Calc_SpectrumData self);

/**
  Constructor for ccp.nmr.NmrCalc.SpectrumData
  @param  Calc_Run parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Calc_SpectrumData Calc_SpectrumData_Init(Calc_Run parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.NmrCalc.SpectrumData
  @param  Calc_Run parent
  @returns  the new object
**/
extern Calc_SpectrumData Calc_SpectrumData_Init_reqd(Calc_Run parent);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_SpectrumData self
  @param  Impl_ApplicationData value
**/
extern void *Calc_SpectrumData_RemoveApplicationData(Calc_SpectrumData self, Impl_ApplicationData value);

/**
  Remove for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_SpectrumData self
  @param  Calc_RunParameter value
**/
extern void *Calc_SpectrumData_RemoveRunParameter(Calc_SpectrumData self, Calc_RunParameter value);

/**
  SetAttr for ccp.nmr.NmrCalc.SpectrumData
  @param  Calc_SpectrumData self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Calc_SpectrumData_Set(Calc_SpectrumData self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Calc_SpectrumData self
  @param  Acco_AccessObject value
**/
extern void *Calc_SpectrumData_SetAccess(Calc_SpectrumData self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_SpectrumData self
  @param  ApiList values
**/
extern void *Calc_SpectrumData_SetApplicationData(Calc_SpectrumData self, ApiList values);

/**
  setter for derived link dataSource
  @param  Calc_SpectrumData self
  @param  Nmr_DataSource value
**/
extern void *Calc_SpectrumData_SetDataSource(Calc_SpectrumData self, Nmr_DataSource value);

/**
  Set for ccp.nmr.NmrCalc.SpectrumData.dataSourceSerial

serial for 
Nmr.DataSource holding data - used to derive actual object.
  @param  Calc_SpectrumData self
  @param  ApiInteger value
**/
extern void *Calc_SpectrumData_SetDataSourceSerial(Calc_SpectrumData self, ApiInteger value);

/**
  Set for ccp.nmr.NmrCalc.Data.details

Free text, for notes, explanatory 
comments, etc.
  @param  Calc_SpectrumData self
  @param  ApiString value
**/
extern void *Calc_SpectrumData_SetDetails(Calc_SpectrumData self, ApiString value);

/**
  Set for ccp.nmr.NmrCalc.SpectrumData.experimentSerial

serial for 
Nmr.Experiment holding data - used to derive actual object.
  @param  Calc_SpectrumData self
  @param  ApiInteger value
**/
extern void *Calc_SpectrumData_SetExperimentSerial(Calc_SpectrumData self, ApiInteger value);

/**
  Set for ccp.nmr.NmrCalc.Data.ioRole

Role of data in calculation (input 
/ output).
  @param  Calc_SpectrumData self
  @param  ApiString value
**/
extern void *Calc_SpectrumData_SetIoRole(Calc_SpectrumData self, ApiString value);

/**
  Set for ccp.nmr.NmrCalc.Data.name

name identifying data
  @param  Calc_SpectrumData self
  @param  ApiString value
**/
extern void *Calc_SpectrumData_SetName(Calc_SpectrumData self, ApiString value);

/**
  Set for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_SpectrumData self
  @param  ApiSet values
**/
extern void *Calc_SpectrumData_SetRunParameters(Calc_SpectrumData self, ApiSet values);

/**
  Set for ccp.nmr.NmrCalc.Data.serial

Serial number of object. Serves as 
object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Calc_SpectrumData self
  @param  ApiInteger value
**/
extern void *Calc_SpectrumData_SetSerial(Calc_SpectrumData self, ApiInteger value);

/**
  Set for ccp.nmr.NmrCalc.Data.weight

Weight given to data
  @param  Calc_SpectrumData self
  @param  ApiFloat value
**/
extern void *Calc_SpectrumData_SetWeight(Calc_SpectrumData self, ApiFloat value);

/**
  Sorted for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_SpectrumData self
  @returns   the result
**/
extern ApiList Calc_SpectrumData_SortedRunParameters(Calc_SpectrumData self);

#endif /* __incl__ccp_api_nmr_NmrCalc_SpectrumData_h__ */
