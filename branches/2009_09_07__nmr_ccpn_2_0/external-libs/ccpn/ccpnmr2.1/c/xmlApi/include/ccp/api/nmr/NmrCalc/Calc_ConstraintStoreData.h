
#ifndef __incl__ccp_api_nmr_NmrCalc_ConstraintStoreData_h__
#define __incl__ccp_api_nmr_NmrCalc_ConstraintStoreData_h__

#include "ccp.h"

/*
  
*/

/* package ccp.api.nmr.NmrCalc */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_ConstraintStoreData self
  @param  Impl_ApplicationData value
**/
extern void *Calc_ConstraintStoreData_AddApplicationData(Calc_ConstraintStoreData self, Impl_ApplicationData value);

/**
  Add for 
ccp.nmr.NmrCalc.ConstraintStoreData.constraintLists

NmrConstraint.ConstraintLists 
containing data
  @param  Calc_ConstraintStoreData self
  @param  Nmrc_AbstractConstraintList value
**/
extern void *Calc_ConstraintStoreData_AddConstraintList(Calc_ConstraintStoreData self, Nmrc_AbstractConstraintList value);

/**
  Add for 
ccp.nmr.NmrCalc.ConstraintStoreData.constraintListSerials

serials for 
ConstraintLists containing data - if empty use all available 
ConstraintLists
  @param  Calc_ConstraintStoreData self
  @param  ApiInteger value
**/
extern void *Calc_ConstraintStoreData_AddConstraintListSerial(Calc_ConstraintStoreData self, ApiInteger value);

/**
  Add for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_ConstraintStoreData self
  @param  Calc_RunParameter value
**/
extern void *Calc_ConstraintStoreData_AddRunParameter(Calc_ConstraintStoreData self, Calc_RunParameter value);

/**
  CheckAllValid for ccp.nmr.NmrCalc.ConstraintStoreData
  @param  Calc_ConstraintStoreData self
  @param  ApiBoolean complete
**/
extern void *Calc_ConstraintStoreData_CheckAllValid(Calc_ConstraintStoreData self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.NmrCalc.ConstraintStoreData
  @param  Calc_ConstraintStoreData self
  @param  ApiBoolean complete
**/
extern void *Calc_ConstraintStoreData_CheckValid(Calc_ConstraintStoreData self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_ConstraintStoreData self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Calc_ConstraintStoreData_FindAllApplicationData(Calc_ConstraintStoreData self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_ConstraintStoreData self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Calc_ConstraintStoreData_FindAllApplicationData_keyval0(Calc_ConstraintStoreData self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_ConstraintStoreData self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Calc_ConstraintStoreData_FindAllApplicationData_keyval1(Calc_ConstraintStoreData self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_ConstraintStoreData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Calc_ConstraintStoreData_FindAllApplicationData_keyval2(Calc_ConstraintStoreData self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_ConstraintStoreData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Calc_ConstraintStoreData_FindAllApplicationData_keyval3(Calc_ConstraintStoreData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_ConstraintStoreData self
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
extern ApiList Calc_ConstraintStoreData_FindAllApplicationData_keyval4(Calc_ConstraintStoreData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.NmrCalc.ConstraintStoreData.constraintLists

NmrConstraint.ConstraintLists 
containing data
  @param  Calc_ConstraintStoreData self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Calc_ConstraintStoreData_FindAllConstraintLists(Calc_ConstraintStoreData self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.NmrCalc.ConstraintStoreData.constraintLists

NmrConstraint.ConstraintLists 
containing data
  @param  Calc_ConstraintStoreData self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Calc_ConstraintStoreData_FindAllConstraintLists_keyval0(Calc_ConstraintStoreData self);

/**
  FindAll for 
ccp.nmr.NmrCalc.ConstraintStoreData.constraintLists

NmrConstraint.ConstraintLists 
containing data
  @param  Calc_ConstraintStoreData self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Calc_ConstraintStoreData_FindAllConstraintLists_keyval1(Calc_ConstraintStoreData self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.NmrCalc.ConstraintStoreData.constraintLists

NmrConstraint.ConstraintLists 
containing data
  @param  Calc_ConstraintStoreData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Calc_ConstraintStoreData_FindAllConstraintLists_keyval2(Calc_ConstraintStoreData self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.NmrCalc.ConstraintStoreData.constraintLists

NmrConstraint.ConstraintLists 
containing data
  @param  Calc_ConstraintStoreData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Calc_ConstraintStoreData_FindAllConstraintLists_keyval3(Calc_ConstraintStoreData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.NmrCalc.ConstraintStoreData.constraintLists

NmrConstraint.ConstraintLists 
containing data
  @param  Calc_ConstraintStoreData self
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
extern ApiList Calc_ConstraintStoreData_FindAllConstraintLists_keyval4(Calc_ConstraintStoreData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_ConstraintStoreData self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Calc_ConstraintStoreData_FindAllRunParameters(Calc_ConstraintStoreData self, ApiMap conditions);

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_ConstraintStoreData self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Calc_ConstraintStoreData_FindAllRunParameters_keyval0(Calc_ConstraintStoreData self);

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_ConstraintStoreData self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Calc_ConstraintStoreData_FindAllRunParameters_keyval1(Calc_ConstraintStoreData self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_ConstraintStoreData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Calc_ConstraintStoreData_FindAllRunParameters_keyval2(Calc_ConstraintStoreData self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_ConstraintStoreData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Calc_ConstraintStoreData_FindAllRunParameters_keyval3(Calc_ConstraintStoreData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_ConstraintStoreData self
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
extern ApiSet Calc_ConstraintStoreData_FindAllRunParameters_keyval4(Calc_ConstraintStoreData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_ConstraintStoreData self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Calc_ConstraintStoreData_FindFirstApplicationData(Calc_ConstraintStoreData self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_ConstraintStoreData self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Calc_ConstraintStoreData_FindFirstApplicationData_keyval0(Calc_ConstraintStoreData self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_ConstraintStoreData self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Calc_ConstraintStoreData_FindFirstApplicationData_keyval1(Calc_ConstraintStoreData self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_ConstraintStoreData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Calc_ConstraintStoreData_FindFirstApplicationData_keyval2(Calc_ConstraintStoreData self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_ConstraintStoreData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Calc_ConstraintStoreData_FindFirstApplicationData_keyval3(Calc_ConstraintStoreData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_ConstraintStoreData self
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
extern Impl_ApplicationData Calc_ConstraintStoreData_FindFirstApplicationData_keyval4(Calc_ConstraintStoreData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.NmrCalc.ConstraintStoreData.constraintLists

NmrConstraint.ConstraintLists 
containing data
  @param  Calc_ConstraintStoreData self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_AbstractConstraintList Calc_ConstraintStoreData_FindFirstConstraintList(Calc_ConstraintStoreData self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrCalc.ConstraintStoreData.constraintLists

NmrConstraint.ConstraintLists 
containing data
  @param  Calc_ConstraintStoreData self
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_AbstractConstraintList Calc_ConstraintStoreData_FindFirstConstraintList_keyval0(Calc_ConstraintStoreData self);

/**
  FindFirst for 
ccp.nmr.NmrCalc.ConstraintStoreData.constraintLists

NmrConstraint.ConstraintLists 
containing data
  @param  Calc_ConstraintStoreData self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_AbstractConstraintList Calc_ConstraintStoreData_FindFirstConstraintList_keyval1(Calc_ConstraintStoreData self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.NmrCalc.ConstraintStoreData.constraintLists

NmrConstraint.ConstraintLists 
containing data
  @param  Calc_ConstraintStoreData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_AbstractConstraintList Calc_ConstraintStoreData_FindFirstConstraintList_keyval2(Calc_ConstraintStoreData self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.NmrCalc.ConstraintStoreData.constraintLists

NmrConstraint.ConstraintLists 
containing data
  @param  Calc_ConstraintStoreData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_AbstractConstraintList Calc_ConstraintStoreData_FindFirstConstraintList_keyval3(Calc_ConstraintStoreData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.NmrCalc.ConstraintStoreData.constraintLists

NmrConstraint.ConstraintLists 
containing data
  @param  Calc_ConstraintStoreData self
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
extern Nmrc_AbstractConstraintList Calc_ConstraintStoreData_FindFirstConstraintList_keyval4(Calc_ConstraintStoreData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_ConstraintStoreData self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Calc_RunParameter Calc_ConstraintStoreData_FindFirstRunParameter(Calc_ConstraintStoreData self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_ConstraintStoreData self
  @returns  the first value that satisfies the conditions 
**/
extern Calc_RunParameter Calc_ConstraintStoreData_FindFirstRunParameter_keyval0(Calc_ConstraintStoreData self);

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_ConstraintStoreData self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Calc_RunParameter Calc_ConstraintStoreData_FindFirstRunParameter_keyval1(Calc_ConstraintStoreData self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_ConstraintStoreData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Calc_RunParameter Calc_ConstraintStoreData_FindFirstRunParameter_keyval2(Calc_ConstraintStoreData self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_ConstraintStoreData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Calc_RunParameter Calc_ConstraintStoreData_FindFirstRunParameter_keyval3(Calc_ConstraintStoreData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_ConstraintStoreData self
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
extern Calc_RunParameter Calc_ConstraintStoreData_FindFirstRunParameter_keyval4(Calc_ConstraintStoreData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.NmrCalc.ConstraintStoreData
  @param  Calc_ConstraintStoreData self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Calc_ConstraintStoreData_Get(Calc_ConstraintStoreData self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Calc_ConstraintStoreData self
  @returns   the result
**/
extern Acco_AccessObject Calc_ConstraintStoreData_GetAccess(Calc_ConstraintStoreData self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Calc_ConstraintStoreData self
  @returns   the result
**/
extern Acco_AccessObject Calc_ConstraintStoreData_GetActiveAccess(Calc_ConstraintStoreData self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_ConstraintStoreData self
  @returns   the result
**/
extern ApiList Calc_ConstraintStoreData_GetApplicationData(Calc_ConstraintStoreData self);

/**
  GetByKey for ccp.nmr.NmrCalc.ConstraintStoreData
  @param  Calc_ConstraintStoreData self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Calc_ConstraintStoreData Calc_ConstraintStoreData_GetByKey(Calc_ConstraintStoreData self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Calc_ConstraintStoreData self
  @returns   the result
**/
extern ApiString Calc_ConstraintStoreData_GetClassName(Calc_ConstraintStoreData self);

/**
  Get for 
ccp.nmr.NmrCalc.ConstraintStoreData.constraintListSerials

serials for 
ConstraintLists containing data - if empty use all available 
ConstraintLists
  @param  Calc_ConstraintStoreData self
  @returns   the result
**/
extern ApiList Calc_ConstraintStoreData_GetConstraintListSerials(Calc_ConstraintStoreData self);

/**
  getter for derived link constraintLists
  @param  Calc_ConstraintStoreData self
  @returns   the result
**/
extern ApiList Calc_ConstraintStoreData_GetConstraintLists(Calc_ConstraintStoreData self);

/**
  Get for 
ccp.nmr.NmrCalc.ConstraintStoreData.constraintStoreSerial

serial of 
NmrConstraintStore containing data - used to derive actual object.
  @param  Calc_ConstraintStoreData self
  @returns   the result
**/
extern ApiInteger Calc_ConstraintStoreData_GetConstraintStoreSerial(Calc_ConstraintStoreData self);

/**
  Get for ccp.nmr.NmrCalc.Data.details

Free text, for notes, explanatory 
comments, etc.
  @param  Calc_ConstraintStoreData self
  @returns   the result
**/
extern ApiString Calc_ConstraintStoreData_GetDetails(Calc_ConstraintStoreData self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Calc_ConstraintStoreData self
  @returns   the result
**/
extern ApiList Calc_ConstraintStoreData_GetFieldNames(Calc_ConstraintStoreData self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Calc_ConstraintStoreData self
  @returns   the result
**/
extern ApiBoolean Calc_ConstraintStoreData_GetInConstructor(Calc_ConstraintStoreData self);

/**
  Get for ccp.nmr.NmrCalc.Data.ioRole

Role of data in calculation (input 
/ output).
  @param  Calc_ConstraintStoreData self
  @returns   the result
**/
extern ApiString Calc_ConstraintStoreData_GetIoRole(Calc_ConstraintStoreData self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Calc_ConstraintStoreData self
  @returns   the result
**/
extern ApiBoolean Calc_ConstraintStoreData_GetIsDeleted(Calc_ConstraintStoreData self);

/**
  Get for ccp.nmr.NmrCalc.Data.name

name identifying data
  @param  Calc_ConstraintStoreData self
  @returns   the result
**/
extern ApiString Calc_ConstraintStoreData_GetName(Calc_ConstraintStoreData self);

/**
  getter for derived link nmrConstraintStore
  @param  Calc_ConstraintStoreData self
  @returns   the result
**/
extern Nmrc_NmrConstraintStore Calc_ConstraintStoreData_GetNmrConstraintStore(Calc_ConstraintStoreData self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Calc_ConstraintStoreData self
  @returns   the result
**/
extern ApiString Calc_ConstraintStoreData_GetPackageName(Calc_ConstraintStoreData self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Calc_ConstraintStoreData self
  @returns   the result
**/
extern ApiString Calc_ConstraintStoreData_GetPackageShortName(Calc_ConstraintStoreData self);

/**
  Get for ccp.nmr.NmrCalc.Data.parent

link to parent object - synonym for 
run
  @param  Calc_ConstraintStoreData self
  @returns   the result
**/
extern Calc_Run Calc_ConstraintStoreData_GetParent(Calc_ConstraintStoreData self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Calc_ConstraintStoreData self
  @returns   the result
**/
extern ApiString Calc_ConstraintStoreData_GetQualifiedName(Calc_ConstraintStoreData self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Calc_ConstraintStoreData self
  @returns   the result
**/
extern Impl_MemopsRoot Calc_ConstraintStoreData_GetRoot(Calc_ConstraintStoreData self);

/**
  Get for ccp.nmr.NmrCalc.Data.run

parent link
  @param  Calc_ConstraintStoreData self
  @returns   the result
**/
extern Calc_Run Calc_ConstraintStoreData_GetRun(Calc_ConstraintStoreData self);

/**
  Get for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_ConstraintStoreData self
  @returns   the result
**/
extern ApiSet Calc_ConstraintStoreData_GetRunParameters(Calc_ConstraintStoreData self);

/**
  Get for ccp.nmr.NmrCalc.Data.serial

Serial number of object. Serves as 
object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Calc_ConstraintStoreData self
  @returns   the result
**/
extern ApiInteger Calc_ConstraintStoreData_GetSerial(Calc_ConstraintStoreData self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Calc_ConstraintStoreData self
  @returns   the result
**/
extern Impl_TopObject Calc_ConstraintStoreData_GetTopObject(Calc_ConstraintStoreData self);

/**
  Get for ccp.nmr.NmrCalc.Data.weight

Weight given to data
  @param  Calc_ConstraintStoreData self
  @returns   the result
**/
extern ApiFloat Calc_ConstraintStoreData_GetWeight(Calc_ConstraintStoreData self);

/**
  Constructor for ccp.nmr.NmrCalc.ConstraintStoreData
  @param  Calc_Run parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Calc_ConstraintStoreData Calc_ConstraintStoreData_Init(Calc_Run parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.NmrCalc.ConstraintStoreData
  @param  Calc_Run parent
  @param  ApiInteger constraintStoreSerial
  @returns  the new object
**/
extern Calc_ConstraintStoreData Calc_ConstraintStoreData_Init_reqd(Calc_Run parent, ApiInteger constraintStoreSerial);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_ConstraintStoreData self
  @param  Impl_ApplicationData value
**/
extern void *Calc_ConstraintStoreData_RemoveApplicationData(Calc_ConstraintStoreData self, Impl_ApplicationData value);

/**
  Remove for 
ccp.nmr.NmrCalc.ConstraintStoreData.constraintLists

NmrConstraint.ConstraintLists 
containing data
  @param  Calc_ConstraintStoreData self
  @param  Nmrc_AbstractConstraintList value
**/
extern void *Calc_ConstraintStoreData_RemoveConstraintList(Calc_ConstraintStoreData self, Nmrc_AbstractConstraintList value);

/**
  Remove for 
ccp.nmr.NmrCalc.ConstraintStoreData.constraintListSerials

serials for 
ConstraintLists containing data - if empty use all available 
ConstraintLists
  @param  Calc_ConstraintStoreData self
  @param  ApiInteger value
**/
extern void *Calc_ConstraintStoreData_RemoveConstraintListSerial(Calc_ConstraintStoreData self, ApiInteger value);

/**
  Remove for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_ConstraintStoreData self
  @param  Calc_RunParameter value
**/
extern void *Calc_ConstraintStoreData_RemoveRunParameter(Calc_ConstraintStoreData self, Calc_RunParameter value);

/**
  SetAttr for ccp.nmr.NmrCalc.ConstraintStoreData
  @param  Calc_ConstraintStoreData self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Calc_ConstraintStoreData_Set(Calc_ConstraintStoreData self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Calc_ConstraintStoreData self
  @param  Acco_AccessObject value
**/
extern void *Calc_ConstraintStoreData_SetAccess(Calc_ConstraintStoreData self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_ConstraintStoreData self
  @param  ApiList values
**/
extern void *Calc_ConstraintStoreData_SetApplicationData(Calc_ConstraintStoreData self, ApiList values);

/**
  Set for 
ccp.nmr.NmrCalc.ConstraintStoreData.constraintListSerials

serials for 
ConstraintLists containing data - if empty use all available 
ConstraintLists
  @param  Calc_ConstraintStoreData self
  @param  ApiList values
**/
extern void *Calc_ConstraintStoreData_SetConstraintListSerials(Calc_ConstraintStoreData self, ApiList values);

/**
  setter for derived link constraintLists
  @param  Calc_ConstraintStoreData self
  @param  ApiList values
**/
extern void *Calc_ConstraintStoreData_SetConstraintLists(Calc_ConstraintStoreData self, ApiList values);

/**
  Set for 
ccp.nmr.NmrCalc.ConstraintStoreData.constraintStoreSerial

serial of 
NmrConstraintStore containing data - used to derive actual object.
  @param  Calc_ConstraintStoreData self
  @param  ApiInteger value
**/
extern void *Calc_ConstraintStoreData_SetConstraintStoreSerial(Calc_ConstraintStoreData self, ApiInteger value);

/**
  Set for ccp.nmr.NmrCalc.Data.details

Free text, for notes, explanatory 
comments, etc.
  @param  Calc_ConstraintStoreData self
  @param  ApiString value
**/
extern void *Calc_ConstraintStoreData_SetDetails(Calc_ConstraintStoreData self, ApiString value);

/**
  Set for ccp.nmr.NmrCalc.Data.ioRole

Role of data in calculation (input 
/ output).
  @param  Calc_ConstraintStoreData self
  @param  ApiString value
**/
extern void *Calc_ConstraintStoreData_SetIoRole(Calc_ConstraintStoreData self, ApiString value);

/**
  Set for ccp.nmr.NmrCalc.Data.name

name identifying data
  @param  Calc_ConstraintStoreData self
  @param  ApiString value
**/
extern void *Calc_ConstraintStoreData_SetName(Calc_ConstraintStoreData self, ApiString value);

/**
  setter for derived link nmrConstraintStore. Sets constraintLists to 
'all'
  @param  Calc_ConstraintStoreData self
  @param  Nmrc_NmrConstraintStore value
**/
extern void *Calc_ConstraintStoreData_SetNmrConstraintStore(Calc_ConstraintStoreData self, Nmrc_NmrConstraintStore value);

/**
  Set for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_ConstraintStoreData self
  @param  ApiSet values
**/
extern void *Calc_ConstraintStoreData_SetRunParameters(Calc_ConstraintStoreData self, ApiSet values);

/**
  Set for ccp.nmr.NmrCalc.Data.serial

Serial number of object. Serves as 
object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Calc_ConstraintStoreData self
  @param  ApiInteger value
**/
extern void *Calc_ConstraintStoreData_SetSerial(Calc_ConstraintStoreData self, ApiInteger value);

/**
  Set for ccp.nmr.NmrCalc.Data.weight

Weight given to data
  @param  Calc_ConstraintStoreData self
  @param  ApiFloat value
**/
extern void *Calc_ConstraintStoreData_SetWeight(Calc_ConstraintStoreData self, ApiFloat value);

/**
  Sorted for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_ConstraintStoreData self
  @returns   the result
**/
extern ApiList Calc_ConstraintStoreData_SortedRunParameters(Calc_ConstraintStoreData self);

#endif /* __incl__ccp_api_nmr_NmrCalc_ConstraintStoreData_h__ */
