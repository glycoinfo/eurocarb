
#ifndef __incl__ccp_api_nmr_Nmr_ExpDim_h__
#define __incl__ccp_api_nmr_Nmr_ExpDim_h__

#include "ccp.h"

/*
  Dimension of Experiment
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpDim self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_ExpDim_AddApplicationData(Nmr_ExpDim self, Impl_ApplicationData value);

/**
  CheckAllValid for ccp.nmr.Nmr.ExpDim
  @param  Nmr_ExpDim self
  @param  ApiBoolean complete
**/
extern void *Nmr_ExpDim_CheckAllValid(Nmr_ExpDim self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.Nmr.ExpDim
  @param  Nmr_ExpDim self
  @param  ApiBoolean complete
**/
extern void *Nmr_ExpDim_CheckValid(Nmr_ExpDim self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpDim self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_ExpDim_FindAllApplicationData(Nmr_ExpDim self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpDim self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_ExpDim_FindAllApplicationData_keyval0(Nmr_ExpDim self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpDim self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_ExpDim_FindAllApplicationData_keyval1(Nmr_ExpDim self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_ExpDim_FindAllApplicationData_keyval2(Nmr_ExpDim self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_ExpDim_FindAllApplicationData_keyval3(Nmr_ExpDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpDim self
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
extern ApiList Nmr_ExpDim_FindAllApplicationData_keyval4(Nmr_ExpDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.ExpDim.dataDims

DataDims corresponding to 
ExpDim.
  @param  Nmr_ExpDim self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ExpDim_FindAllDataDims(Nmr_ExpDim self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.ExpDim.dataDims

DataDims corresponding to 
ExpDim.
  @param  Nmr_ExpDim self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ExpDim_FindAllDataDims_keyval0(Nmr_ExpDim self);

/**
  FindAll for ccp.nmr.Nmr.ExpDim.dataDims

DataDims corresponding to 
ExpDim.
  @param  Nmr_ExpDim self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ExpDim_FindAllDataDims_keyval1(Nmr_ExpDim self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.ExpDim.dataDims

DataDims corresponding to 
ExpDim.
  @param  Nmr_ExpDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ExpDim_FindAllDataDims_keyval2(Nmr_ExpDim self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.ExpDim.dataDims

DataDims corresponding to 
ExpDim.
  @param  Nmr_ExpDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ExpDim_FindAllDataDims_keyval3(Nmr_ExpDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.ExpDim.dataDims

DataDims corresponding to 
ExpDim.
  @param  Nmr_ExpDim self
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
extern ApiSet Nmr_ExpDim_FindAllDataDims_keyval4(Nmr_ExpDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.ExpDim.expDimRefs

child link
  @param  Nmr_ExpDim self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ExpDim_FindAllExpDimRefs(Nmr_ExpDim self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.ExpDim.expDimRefs

child link
  @param  Nmr_ExpDim self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ExpDim_FindAllExpDimRefs_keyval0(Nmr_ExpDim self);

/**
  FindAll for ccp.nmr.Nmr.ExpDim.expDimRefs

child link
  @param  Nmr_ExpDim self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ExpDim_FindAllExpDimRefs_keyval1(Nmr_ExpDim self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.ExpDim.expDimRefs

child link
  @param  Nmr_ExpDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ExpDim_FindAllExpDimRefs_keyval2(Nmr_ExpDim self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.ExpDim.expDimRefs

child link
  @param  Nmr_ExpDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ExpDim_FindAllExpDimRefs_keyval3(Nmr_ExpDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.ExpDim.expDimRefs

child link
  @param  Nmr_ExpDim self
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
extern ApiSet Nmr_ExpDim_FindAllExpDimRefs_keyval4(Nmr_ExpDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpDim self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_ExpDim_FindFirstApplicationData(Nmr_ExpDim self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpDim self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_ExpDim_FindFirstApplicationData_keyval0(Nmr_ExpDim self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpDim self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_ExpDim_FindFirstApplicationData_keyval1(Nmr_ExpDim self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_ExpDim_FindFirstApplicationData_keyval2(Nmr_ExpDim self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_ExpDim_FindFirstApplicationData_keyval3(Nmr_ExpDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpDim self
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
extern Impl_ApplicationData Nmr_ExpDim_FindFirstApplicationData_keyval4(Nmr_ExpDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.ExpDim.dataDims

DataDims corresponding to 
ExpDim.
  @param  Nmr_ExpDim self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractDataDim Nmr_ExpDim_FindFirstDataDim(Nmr_ExpDim self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.ExpDim.dataDims

DataDims corresponding to 
ExpDim.
  @param  Nmr_ExpDim self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractDataDim Nmr_ExpDim_FindFirstDataDim_keyval0(Nmr_ExpDim self);

/**
  FindFirst for ccp.nmr.Nmr.ExpDim.dataDims

DataDims corresponding to 
ExpDim.
  @param  Nmr_ExpDim self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractDataDim Nmr_ExpDim_FindFirstDataDim_keyval1(Nmr_ExpDim self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.ExpDim.dataDims

DataDims corresponding to 
ExpDim.
  @param  Nmr_ExpDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractDataDim Nmr_ExpDim_FindFirstDataDim_keyval2(Nmr_ExpDim self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.ExpDim.dataDims

DataDims corresponding to 
ExpDim.
  @param  Nmr_ExpDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractDataDim Nmr_ExpDim_FindFirstDataDim_keyval3(Nmr_ExpDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.ExpDim.dataDims

DataDims corresponding to 
ExpDim.
  @param  Nmr_ExpDim self
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
extern Nmr_AbstractDataDim Nmr_ExpDim_FindFirstDataDim_keyval4(Nmr_ExpDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.ExpDim.expDimRefs

child link
  @param  Nmr_ExpDim self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ExpDimRef Nmr_ExpDim_FindFirstExpDimRef(Nmr_ExpDim self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.ExpDim.expDimRefs

child link
  @param  Nmr_ExpDim self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ExpDimRef Nmr_ExpDim_FindFirstExpDimRef_keyval0(Nmr_ExpDim self);

/**
  FindFirst for ccp.nmr.Nmr.ExpDim.expDimRefs

child link
  @param  Nmr_ExpDim self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ExpDimRef Nmr_ExpDim_FindFirstExpDimRef_keyval1(Nmr_ExpDim self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.ExpDim.expDimRefs

child link
  @param  Nmr_ExpDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ExpDimRef Nmr_ExpDim_FindFirstExpDimRef_keyval2(Nmr_ExpDim self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.ExpDim.expDimRefs

child link
  @param  Nmr_ExpDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ExpDimRef Nmr_ExpDim_FindFirstExpDimRef_keyval3(Nmr_ExpDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.ExpDim.expDimRefs

child link
  @param  Nmr_ExpDim self
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
extern Nmr_ExpDimRef Nmr_ExpDim_FindFirstExpDimRef_keyval4(Nmr_ExpDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.Nmr.ExpDim
  @param  Nmr_ExpDim self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Nmr_ExpDim_Get(Nmr_ExpDim self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_ExpDim self
  @returns   the result
**/
extern Acco_AccessObject Nmr_ExpDim_GetAccess(Nmr_ExpDim self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpDim self
  @returns   the result
**/
extern ApiList Nmr_ExpDim_GetApplicationData(Nmr_ExpDim self);

/**
  GetByKey for ccp.nmr.Nmr.ExpDim
  @param  Nmr_ExpDim self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Nmr_ExpDim Nmr_ExpDim_GetByKey(Nmr_ExpDim self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Nmr_ExpDim self
  @returns   the result
**/
extern ApiString Nmr_ExpDim_GetClassName(Nmr_ExpDim self);

/**
  Get for ccp.nmr.Nmr.ExpDim.dataDims

DataDims corresponding to ExpDim.
  @param  Nmr_ExpDim self
  @returns   the result
**/
extern ApiSet Nmr_ExpDim_GetDataDims(Nmr_ExpDim self);

/**
  Get for ccp.nmr.Nmr.ExpDim.dim

Dimension number. Dimensions go from one 
to numDim. It is recommended that dimensions are numbered in order of 
storage, so that dimension numDim has the slowest varying index, and 
that dim 1 should be the acquisition dimension, but programs should not 
rely on this.
  @param  Nmr_ExpDim self
  @returns   the result
**/
extern ApiInteger Nmr_ExpDim_GetDim(Nmr_ExpDim self);

/**
  Get for ccp.nmr.Nmr.ExpDim.expDimRefs

child link
  @param  Nmr_ExpDim self
  @returns   the result
**/
extern ApiSet Nmr_ExpDim_GetExpDimRefs(Nmr_ExpDim self);

/**
  Get for ccp.nmr.Nmr.ExpDim.experiment

parent link
  @param  Nmr_ExpDim self
  @returns   the result
**/
extern Nmr_Experiment Nmr_ExpDim_GetExperiment(Nmr_ExpDim self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Nmr_ExpDim self
  @returns   the result
**/
extern ApiList Nmr_ExpDim_GetFieldNames(Nmr_ExpDim self);

/**
  GetFullKey for ccp.nmr.Nmr.ExpDim
  @param  Nmr_ExpDim self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Nmr_ExpDim_GetFullKey(Nmr_ExpDim self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Nmr_ExpDim self
  @returns   the result
**/
extern ApiBoolean Nmr_ExpDim_GetInConstructor(Nmr_ExpDim self);

/**
  Get for ccp.nmr.Nmr.ExpDim.isAcquisition

If true the relevant dimension 
is the acquisition dimension.
  @param  Nmr_ExpDim self
  @returns   the result
**/
extern ApiBoolean Nmr_ExpDim_GetIsAcquisition(Nmr_ExpDim self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Nmr_ExpDim self
  @returns   the result
**/
extern ApiBoolean Nmr_ExpDim_GetIsDeleted(Nmr_ExpDim self);

/**
  GetLocalKey for ccp.nmr.Nmr.ExpDim
  @param  Nmr_ExpDim self
  @returns  Local object key
**/
extern ApiObject Nmr_ExpDim_GetLocalKey(Nmr_ExpDim self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Nmr_ExpDim self
  @returns   the result
**/
extern ApiString Nmr_ExpDim_GetPackageName(Nmr_ExpDim self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Nmr_ExpDim self
  @returns   the result
**/
extern ApiString Nmr_ExpDim_GetPackageShortName(Nmr_ExpDim self);

/**
  Get for ccp.nmr.Nmr.ExpDim.parent

link to parent object - synonym for 
experiment
  @param  Nmr_ExpDim self
  @returns   the result
**/
extern Nmr_Experiment Nmr_ExpDim_GetParent(Nmr_ExpDim self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Nmr_ExpDim self
  @returns   the result
**/
extern ApiString Nmr_ExpDim_GetQualifiedName(Nmr_ExpDim self);

/**
  Get for ccp.nmr.Nmr.ExpDim.refExpDim

Corresponding ExpDim in 
RefNmeExperiment
  @param  Nmr_ExpDim self
  @returns   the result
**/
extern Nmrx_RefExpDim Nmr_ExpDim_GetRefExpDim(Nmr_ExpDim self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Nmr_ExpDim self
  @returns   the result
**/
extern Impl_MemopsRoot Nmr_ExpDim_GetRoot(Nmr_ExpDim self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Nmr_ExpDim self
  @returns   the result
**/
extern Impl_TopObject Nmr_ExpDim_GetTopObject(Nmr_ExpDim self);

/**
  Constructor for ccp.nmr.Nmr.ExpDim
  @param  Nmr_Experiment parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmr_ExpDim Nmr_ExpDim_Init(Nmr_Experiment parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.Nmr.ExpDim
  @param  Nmr_Experiment parent
  @param  ApiInteger dim
  @returns  the new object
**/
extern Nmr_ExpDim Nmr_ExpDim_Init_reqd(Nmr_Experiment parent, ApiInteger dim);

/**
  Factory function to create ccp.nmr.Nmr.ExpDimRef
  @param  Nmr_ExpDim self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmr_ExpDimRef Nmr_ExpDim_NewExpDimRef(Nmr_ExpDim self, ApiMap attrlinks);

/**
  Factory function to create ccp.nmr.Nmr.ExpDimRef
  @param  Nmr_ExpDim self
  @param  float sf
  @returns  the new object
**/
extern Nmr_ExpDimRef Nmr_ExpDim_NewExpDimRef_reqd(Nmr_ExpDim self, float sf);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpDim self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_ExpDim_RemoveApplicationData(Nmr_ExpDim self, Impl_ApplicationData value);

/**
  SetAttr for ccp.nmr.Nmr.ExpDim
  @param  Nmr_ExpDim self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Nmr_ExpDim_Set(Nmr_ExpDim self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_ExpDim self
  @param  Acco_AccessObject value
**/
extern void *Nmr_ExpDim_SetAccess(Nmr_ExpDim self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpDim self
  @param  ApiList values
**/
extern void *Nmr_ExpDim_SetApplicationData(Nmr_ExpDim self, ApiList values);

/**
  Set for ccp.nmr.Nmr.ExpDim.dataDims

DataDims corresponding to ExpDim.
  @param  Nmr_ExpDim self
  @param  ApiSet values
**/
extern void *Nmr_ExpDim_SetDataDims(Nmr_ExpDim self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.ExpDim.dim

Dimension number. Dimensions go from one 
to numDim. It is recommended that dimensions are numbered in order of 
storage, so that dimension numDim has the slowest varying index, and 
that dim 1 should be the acquisition dimension, but programs should not 
rely on this.
  @param  Nmr_ExpDim self
  @param  ApiInteger value
**/
extern void *Nmr_ExpDim_SetDim(Nmr_ExpDim self, ApiInteger value);

/**
  Set for ccp.nmr.Nmr.ExpDim.isAcquisition

If true the relevant dimension 
is the acquisition dimension.
  @param  Nmr_ExpDim self
  @param  ApiBoolean value
**/
extern void *Nmr_ExpDim_SetIsAcquisition(Nmr_ExpDim self, ApiBoolean value);

/**
  Set for ccp.nmr.Nmr.ExpDim.refExpDim

Corresponding ExpDim in 
RefNmeExperiment
  @param  Nmr_ExpDim self
  @param  Nmrx_RefExpDim value
**/
extern void *Nmr_ExpDim_SetRefExpDim(Nmr_ExpDim self, Nmrx_RefExpDim value);

/**
  Sorted for ccp.nmr.Nmr.ExpDim.dataDims

DataDims corresponding to 
ExpDim.
  @param  Nmr_ExpDim self
  @returns   the result
**/
extern ApiList Nmr_ExpDim_SortedDataDims(Nmr_ExpDim self);

/**
  Sorted for ccp.nmr.Nmr.ExpDim.expDimRefs

child link
  @param  Nmr_ExpDim self
  @returns   the result
**/
extern ApiList Nmr_ExpDim_SortedExpDimRefs(Nmr_ExpDim self);

#endif /* __incl__ccp_api_nmr_Nmr_ExpDim_h__ */
