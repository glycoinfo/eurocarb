
#ifndef __incl__ccp_api_nmr_NmrCalc_ViolationListData_h__
#define __incl__ccp_api_nmr_NmrCalc_ViolationListData_h__

#include "ccp.h"

/*
  
*/

/* package ccp.api.nmr.NmrCalc */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_ViolationListData self
  @param  Impl_ApplicationData value
**/
extern void *Calc_ViolationListData_AddApplicationData(Calc_ViolationListData self, Impl_ApplicationData value);

/**
  Add for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_ViolationListData self
  @param  Calc_RunParameter value
**/
extern void *Calc_ViolationListData_AddRunParameter(Calc_ViolationListData self, Calc_RunParameter value);

/**
  CheckAllValid for ccp.nmr.NmrCalc.ViolationListData
  @param  Calc_ViolationListData self
  @param  ApiBoolean complete
**/
extern void *Calc_ViolationListData_CheckAllValid(Calc_ViolationListData self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.NmrCalc.ViolationListData
  @param  Calc_ViolationListData self
  @param  ApiBoolean complete
**/
extern void *Calc_ViolationListData_CheckValid(Calc_ViolationListData self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_ViolationListData self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Calc_ViolationListData_FindAllApplicationData(Calc_ViolationListData self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_ViolationListData self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Calc_ViolationListData_FindAllApplicationData_keyval0(Calc_ViolationListData self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_ViolationListData self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Calc_ViolationListData_FindAllApplicationData_keyval1(Calc_ViolationListData self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_ViolationListData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Calc_ViolationListData_FindAllApplicationData_keyval2(Calc_ViolationListData self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_ViolationListData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Calc_ViolationListData_FindAllApplicationData_keyval3(Calc_ViolationListData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_ViolationListData self
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
extern ApiList Calc_ViolationListData_FindAllApplicationData_keyval4(Calc_ViolationListData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_ViolationListData self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Calc_ViolationListData_FindAllRunParameters(Calc_ViolationListData self, ApiMap conditions);

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_ViolationListData self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Calc_ViolationListData_FindAllRunParameters_keyval0(Calc_ViolationListData self);

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_ViolationListData self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Calc_ViolationListData_FindAllRunParameters_keyval1(Calc_ViolationListData self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_ViolationListData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Calc_ViolationListData_FindAllRunParameters_keyval2(Calc_ViolationListData self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_ViolationListData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Calc_ViolationListData_FindAllRunParameters_keyval3(Calc_ViolationListData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_ViolationListData self
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
extern ApiSet Calc_ViolationListData_FindAllRunParameters_keyval4(Calc_ViolationListData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_ViolationListData self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Calc_ViolationListData_FindFirstApplicationData(Calc_ViolationListData self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_ViolationListData self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Calc_ViolationListData_FindFirstApplicationData_keyval0(Calc_ViolationListData self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_ViolationListData self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Calc_ViolationListData_FindFirstApplicationData_keyval1(Calc_ViolationListData self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_ViolationListData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Calc_ViolationListData_FindFirstApplicationData_keyval2(Calc_ViolationListData self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_ViolationListData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Calc_ViolationListData_FindFirstApplicationData_keyval3(Calc_ViolationListData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_ViolationListData self
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
extern Impl_ApplicationData Calc_ViolationListData_FindFirstApplicationData_keyval4(Calc_ViolationListData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_ViolationListData self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Calc_RunParameter Calc_ViolationListData_FindFirstRunParameter(Calc_ViolationListData self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_ViolationListData self
  @returns  the first value that satisfies the conditions 
**/
extern Calc_RunParameter Calc_ViolationListData_FindFirstRunParameter_keyval0(Calc_ViolationListData self);

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_ViolationListData self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Calc_RunParameter Calc_ViolationListData_FindFirstRunParameter_keyval1(Calc_ViolationListData self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_ViolationListData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Calc_RunParameter Calc_ViolationListData_FindFirstRunParameter_keyval2(Calc_ViolationListData self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_ViolationListData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Calc_RunParameter Calc_ViolationListData_FindFirstRunParameter_keyval3(Calc_ViolationListData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_ViolationListData self
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
extern Calc_RunParameter Calc_ViolationListData_FindFirstRunParameter_keyval4(Calc_ViolationListData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.NmrCalc.ViolationListData
  @param  Calc_ViolationListData self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Calc_ViolationListData_Get(Calc_ViolationListData self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Calc_ViolationListData self
  @returns   the result
**/
extern Acco_AccessObject Calc_ViolationListData_GetAccess(Calc_ViolationListData self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Calc_ViolationListData self
  @returns   the result
**/
extern Acco_AccessObject Calc_ViolationListData_GetActiveAccess(Calc_ViolationListData self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_ViolationListData self
  @returns   the result
**/
extern ApiList Calc_ViolationListData_GetApplicationData(Calc_ViolationListData self);

/**
  GetByKey for ccp.nmr.NmrCalc.ViolationListData
  @param  Calc_ViolationListData self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Calc_ViolationListData Calc_ViolationListData_GetByKey(Calc_ViolationListData self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Calc_ViolationListData self
  @returns   the result
**/
extern ApiString Calc_ViolationListData_GetClassName(Calc_ViolationListData self);

/**
  Get for 
ccp.nmr.NmrCalc.ViolationListData.constraintStoreSerial

NmrConstraintStore 
serial - used to derive actual object.
  @param  Calc_ViolationListData self
  @returns   the result
**/
extern ApiInteger Calc_ViolationListData_GetConstraintStoreSerial(Calc_ViolationListData self);

/**
  Get for ccp.nmr.NmrCalc.Data.details

Free text, for notes, explanatory 
comments, etc.
  @param  Calc_ViolationListData self
  @returns   the result
**/
extern ApiString Calc_ViolationListData_GetDetails(Calc_ViolationListData self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Calc_ViolationListData self
  @returns   the result
**/
extern ApiList Calc_ViolationListData_GetFieldNames(Calc_ViolationListData self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Calc_ViolationListData self
  @returns   the result
**/
extern ApiBoolean Calc_ViolationListData_GetInConstructor(Calc_ViolationListData self);

/**
  Get for ccp.nmr.NmrCalc.Data.ioRole

Role of data in calculation (input 
/ output).
  @param  Calc_ViolationListData self
  @returns   the result
**/
extern ApiString Calc_ViolationListData_GetIoRole(Calc_ViolationListData self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Calc_ViolationListData self
  @returns   the result
**/
extern ApiBoolean Calc_ViolationListData_GetIsDeleted(Calc_ViolationListData self);

/**
  Get for ccp.nmr.NmrCalc.Data.name

name identifying data
  @param  Calc_ViolationListData self
  @returns   the result
**/
extern ApiString Calc_ViolationListData_GetName(Calc_ViolationListData self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Calc_ViolationListData self
  @returns   the result
**/
extern ApiString Calc_ViolationListData_GetPackageName(Calc_ViolationListData self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Calc_ViolationListData self
  @returns   the result
**/
extern ApiString Calc_ViolationListData_GetPackageShortName(Calc_ViolationListData self);

/**
  Get for ccp.nmr.NmrCalc.Data.parent

link to parent object - synonym for 
run
  @param  Calc_ViolationListData self
  @returns   the result
**/
extern Calc_Run Calc_ViolationListData_GetParent(Calc_ViolationListData self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Calc_ViolationListData self
  @returns   the result
**/
extern ApiString Calc_ViolationListData_GetQualifiedName(Calc_ViolationListData self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Calc_ViolationListData self
  @returns   the result
**/
extern Impl_MemopsRoot Calc_ViolationListData_GetRoot(Calc_ViolationListData self);

/**
  Get for ccp.nmr.NmrCalc.Data.run

parent link
  @param  Calc_ViolationListData self
  @returns   the result
**/
extern Calc_Run Calc_ViolationListData_GetRun(Calc_ViolationListData self);

/**
  Get for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_ViolationListData self
  @returns   the result
**/
extern ApiSet Calc_ViolationListData_GetRunParameters(Calc_ViolationListData self);

/**
  Get for ccp.nmr.NmrCalc.Data.serial

Serial number of object. Serves as 
object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Calc_ViolationListData self
  @returns   the result
**/
extern ApiInteger Calc_ViolationListData_GetSerial(Calc_ViolationListData self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Calc_ViolationListData self
  @returns   the result
**/
extern Impl_TopObject Calc_ViolationListData_GetTopObject(Calc_ViolationListData self);

/**
  getter for derived link violationList
  @param  Calc_ViolationListData self
  @returns   the result
**/
extern Nmrc_ViolationList Calc_ViolationListData_GetViolationList(Calc_ViolationListData self);

/**
  Get for 
ccp.nmr.NmrCalc.ViolationListData.violationListSerial

NmrConstraint.ViolationList 
serial - used to derive actual object.
  @param  Calc_ViolationListData self
  @returns   the result
**/
extern ApiInteger Calc_ViolationListData_GetViolationListSerial(Calc_ViolationListData self);

/**
  Get for ccp.nmr.NmrCalc.Data.weight

Weight given to data
  @param  Calc_ViolationListData self
  @returns   the result
**/
extern ApiFloat Calc_ViolationListData_GetWeight(Calc_ViolationListData self);

/**
  Constructor for ccp.nmr.NmrCalc.ViolationListData
  @param  Calc_Run parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Calc_ViolationListData Calc_ViolationListData_Init(Calc_Run parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.NmrCalc.ViolationListData
  @param  Calc_Run parent
  @param  ApiInteger constraintStoreSerial
  @param  ApiInteger violationListSerial
  @returns  the new object
**/
extern Calc_ViolationListData Calc_ViolationListData_Init_reqd(Calc_Run parent, ApiInteger constraintStoreSerial, ApiInteger violationListSerial);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_ViolationListData self
  @param  Impl_ApplicationData value
**/
extern void *Calc_ViolationListData_RemoveApplicationData(Calc_ViolationListData self, Impl_ApplicationData value);

/**
  Remove for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_ViolationListData self
  @param  Calc_RunParameter value
**/
extern void *Calc_ViolationListData_RemoveRunParameter(Calc_ViolationListData self, Calc_RunParameter value);

/**
  SetAttr for ccp.nmr.NmrCalc.ViolationListData
  @param  Calc_ViolationListData self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Calc_ViolationListData_Set(Calc_ViolationListData self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Calc_ViolationListData self
  @param  Acco_AccessObject value
**/
extern void *Calc_ViolationListData_SetAccess(Calc_ViolationListData self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_ViolationListData self
  @param  ApiList values
**/
extern void *Calc_ViolationListData_SetApplicationData(Calc_ViolationListData self, ApiList values);

/**
  Set for 
ccp.nmr.NmrCalc.ViolationListData.constraintStoreSerial

NmrConstraintStore 
serial - used to derive actual object.
  @param  Calc_ViolationListData self
  @param  ApiInteger value
**/
extern void *Calc_ViolationListData_SetConstraintStoreSerial(Calc_ViolationListData self, ApiInteger value);

/**
  Set for ccp.nmr.NmrCalc.Data.details

Free text, for notes, explanatory 
comments, etc.
  @param  Calc_ViolationListData self
  @param  ApiString value
**/
extern void *Calc_ViolationListData_SetDetails(Calc_ViolationListData self, ApiString value);

/**
  Set for ccp.nmr.NmrCalc.Data.ioRole

Role of data in calculation (input 
/ output).
  @param  Calc_ViolationListData self
  @param  ApiString value
**/
extern void *Calc_ViolationListData_SetIoRole(Calc_ViolationListData self, ApiString value);

/**
  Set for ccp.nmr.NmrCalc.Data.name

name identifying data
  @param  Calc_ViolationListData self
  @param  ApiString value
**/
extern void *Calc_ViolationListData_SetName(Calc_ViolationListData self, ApiString value);

/**
  Set for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_ViolationListData self
  @param  ApiSet values
**/
extern void *Calc_ViolationListData_SetRunParameters(Calc_ViolationListData self, ApiSet values);

/**
  Set for ccp.nmr.NmrCalc.Data.serial

Serial number of object. Serves as 
object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Calc_ViolationListData self
  @param  ApiInteger value
**/
extern void *Calc_ViolationListData_SetSerial(Calc_ViolationListData self, ApiInteger value);

/**
  
  @param  Calc_ViolationListData self
  @param  Nmrc_ViolationList value
**/
extern void *Calc_ViolationListData_SetViolationList(Calc_ViolationListData self, Nmrc_ViolationList value);

/**
  Set for 
ccp.nmr.NmrCalc.ViolationListData.violationListSerial

NmrConstraint.ViolationList 
serial - used to derive actual object.
  @param  Calc_ViolationListData self
  @param  ApiInteger value
**/
extern void *Calc_ViolationListData_SetViolationListSerial(Calc_ViolationListData self, ApiInteger value);

/**
  Set for ccp.nmr.NmrCalc.Data.weight

Weight given to data
  @param  Calc_ViolationListData self
  @param  ApiFloat value
**/
extern void *Calc_ViolationListData_SetWeight(Calc_ViolationListData self, ApiFloat value);

/**
  Sorted for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_ViolationListData self
  @returns   the result
**/
extern ApiList Calc_ViolationListData_SortedRunParameters(Calc_ViolationListData self);

#endif /* __incl__ccp_api_nmr_NmrCalc_ViolationListData_h__ */
