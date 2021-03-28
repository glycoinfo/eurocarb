
#ifndef __incl__ccp_api_nmr_Nmr_ExpTransfer_h__
#define __incl__ccp_api_nmr_Nmr_ExpTransfer_h__

#include "ccp.h"

/*
  Describes transfer of magnetisation between two ExpDimRef belonging to different ExpDim of the same Experiment.
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpTransfer self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_ExpTransfer_AddApplicationData(Nmr_ExpTransfer self, Impl_ApplicationData value);

/**
  CheckAllValid for ccp.nmr.Nmr.ExpTransfer
  @param  Nmr_ExpTransfer self
  @param  ApiBoolean complete
**/
extern void *Nmr_ExpTransfer_CheckAllValid(Nmr_ExpTransfer self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.Nmr.ExpTransfer
  @param  Nmr_ExpTransfer self
  @param  ApiBoolean complete
**/
extern void *Nmr_ExpTransfer_CheckValid(Nmr_ExpTransfer self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpTransfer self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_ExpTransfer_FindAllApplicationData(Nmr_ExpTransfer self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpTransfer self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_ExpTransfer_FindAllApplicationData_keyval0(Nmr_ExpTransfer self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpTransfer self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_ExpTransfer_FindAllApplicationData_keyval1(Nmr_ExpTransfer self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpTransfer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_ExpTransfer_FindAllApplicationData_keyval2(Nmr_ExpTransfer self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpTransfer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_ExpTransfer_FindAllApplicationData_keyval3(Nmr_ExpTransfer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpTransfer self
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
extern ApiList Nmr_ExpTransfer_FindAllApplicationData_keyval4(Nmr_ExpTransfer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.ExpTransfer.expDimRefs

ExpDimRefs betwen which 
magentisation is transferred
  @param  Nmr_ExpTransfer self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ExpTransfer_FindAllExpDimRefs(Nmr_ExpTransfer self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.ExpTransfer.expDimRefs

ExpDimRefs betwen which 
magentisation is transferred
  @param  Nmr_ExpTransfer self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ExpTransfer_FindAllExpDimRefs_keyval0(Nmr_ExpTransfer self);

/**
  FindAll for ccp.nmr.Nmr.ExpTransfer.expDimRefs

ExpDimRefs betwen which 
magentisation is transferred
  @param  Nmr_ExpTransfer self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ExpTransfer_FindAllExpDimRefs_keyval1(Nmr_ExpTransfer self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.ExpTransfer.expDimRefs

ExpDimRefs betwen which 
magentisation is transferred
  @param  Nmr_ExpTransfer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ExpTransfer_FindAllExpDimRefs_keyval2(Nmr_ExpTransfer self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.ExpTransfer.expDimRefs

ExpDimRefs betwen which 
magentisation is transferred
  @param  Nmr_ExpTransfer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ExpTransfer_FindAllExpDimRefs_keyval3(Nmr_ExpTransfer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.ExpTransfer.expDimRefs

ExpDimRefs betwen which 
magentisation is transferred
  @param  Nmr_ExpTransfer self
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
extern ApiSet Nmr_ExpTransfer_FindAllExpDimRefs_keyval4(Nmr_ExpTransfer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpTransfer self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_ExpTransfer_FindFirstApplicationData(Nmr_ExpTransfer self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpTransfer self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_ExpTransfer_FindFirstApplicationData_keyval0(Nmr_ExpTransfer self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpTransfer self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_ExpTransfer_FindFirstApplicationData_keyval1(Nmr_ExpTransfer self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpTransfer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_ExpTransfer_FindFirstApplicationData_keyval2(Nmr_ExpTransfer self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpTransfer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_ExpTransfer_FindFirstApplicationData_keyval3(Nmr_ExpTransfer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpTransfer self
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
extern Impl_ApplicationData Nmr_ExpTransfer_FindFirstApplicationData_keyval4(Nmr_ExpTransfer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.ExpTransfer.expDimRefs

ExpDimRefs betwen 
which magentisation is transferred
  @param  Nmr_ExpTransfer self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ExpDimRef Nmr_ExpTransfer_FindFirstExpDimRef(Nmr_ExpTransfer self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.ExpTransfer.expDimRefs

ExpDimRefs betwen 
which magentisation is transferred
  @param  Nmr_ExpTransfer self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ExpDimRef Nmr_ExpTransfer_FindFirstExpDimRef_keyval0(Nmr_ExpTransfer self);

/**
  FindFirst for ccp.nmr.Nmr.ExpTransfer.expDimRefs

ExpDimRefs betwen 
which magentisation is transferred
  @param  Nmr_ExpTransfer self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ExpDimRef Nmr_ExpTransfer_FindFirstExpDimRef_keyval1(Nmr_ExpTransfer self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.ExpTransfer.expDimRefs

ExpDimRefs betwen 
which magentisation is transferred
  @param  Nmr_ExpTransfer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ExpDimRef Nmr_ExpTransfer_FindFirstExpDimRef_keyval2(Nmr_ExpTransfer self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.ExpTransfer.expDimRefs

ExpDimRefs betwen 
which magentisation is transferred
  @param  Nmr_ExpTransfer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ExpDimRef Nmr_ExpTransfer_FindFirstExpDimRef_keyval3(Nmr_ExpTransfer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.ExpTransfer.expDimRefs

ExpDimRefs betwen 
which magentisation is transferred
  @param  Nmr_ExpTransfer self
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
extern Nmr_ExpDimRef Nmr_ExpTransfer_FindFirstExpDimRef_keyval4(Nmr_ExpTransfer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.Nmr.ExpTransfer
  @param  Nmr_ExpTransfer self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Nmr_ExpTransfer_Get(Nmr_ExpTransfer self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_ExpTransfer self
  @returns   the result
**/
extern Acco_AccessObject Nmr_ExpTransfer_GetAccess(Nmr_ExpTransfer self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Nmr_ExpTransfer self
  @returns   the result
**/
extern Acco_AccessObject Nmr_ExpTransfer_GetActiveAccess(Nmr_ExpTransfer self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpTransfer self
  @returns   the result
**/
extern ApiList Nmr_ExpTransfer_GetApplicationData(Nmr_ExpTransfer self);

/**
  GetByKey for ccp.nmr.Nmr.ExpTransfer
  @param  Nmr_ExpTransfer self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Nmr_ExpTransfer Nmr_ExpTransfer_GetByKey(Nmr_ExpTransfer self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Nmr_ExpTransfer self
  @returns   the result
**/
extern ApiString Nmr_ExpTransfer_GetClassName(Nmr_ExpTransfer self);

/**
  Get for ccp.nmr.Nmr.ExpTransfer.expDimRefs

ExpDimRefs betwen which 
magentisation is transferred
  @param  Nmr_ExpTransfer self
  @returns   the result
**/
extern ApiSet Nmr_ExpTransfer_GetExpDimRefs(Nmr_ExpTransfer self);

/**
  Get for ccp.nmr.Nmr.ExpTransfer.experiment

parent link
  @param  Nmr_ExpTransfer self
  @returns   the result
**/
extern Nmr_Experiment Nmr_ExpTransfer_GetExperiment(Nmr_ExpTransfer self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Nmr_ExpTransfer self
  @returns   the result
**/
extern ApiList Nmr_ExpTransfer_GetFieldNames(Nmr_ExpTransfer self);

/**
  GetFullKey for ccp.nmr.Nmr.ExpTransfer
  @param  Nmr_ExpTransfer self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Nmr_ExpTransfer_GetFullKey(Nmr_ExpTransfer self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Nmr_ExpTransfer self
  @returns   the result
**/
extern ApiBoolean Nmr_ExpTransfer_GetInConstructor(Nmr_ExpTransfer self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Nmr_ExpTransfer self
  @returns   the result
**/
extern ApiBoolean Nmr_ExpTransfer_GetIsDeleted(Nmr_ExpTransfer self);

/**
  GetLocalKey for ccp.nmr.Nmr.ExpTransfer
  @param  Nmr_ExpTransfer self
  @returns  Local object key
**/
extern ApiObject Nmr_ExpTransfer_GetLocalKey(Nmr_ExpTransfer self);

/**
  Get for ccp.nmr.Nmr.ExpTransfer.mixingTime

mixing time for transfer 
step, in seconds
  @param  Nmr_ExpTransfer self
  @returns   the result
**/
extern ApiFloat Nmr_ExpTransfer_GetMixingTime(Nmr_ExpTransfer self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Nmr_ExpTransfer self
  @returns   the result
**/
extern ApiString Nmr_ExpTransfer_GetPackageName(Nmr_ExpTransfer self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Nmr_ExpTransfer self
  @returns   the result
**/
extern ApiString Nmr_ExpTransfer_GetPackageShortName(Nmr_ExpTransfer self);

/**
  Get for ccp.nmr.Nmr.ExpTransfer.parent

link to parent object - synonym 
for experiment
  @param  Nmr_ExpTransfer self
  @returns   the result
**/
extern Nmr_Experiment Nmr_ExpTransfer_GetParent(Nmr_ExpTransfer self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Nmr_ExpTransfer self
  @returns   the result
**/
extern ApiString Nmr_ExpTransfer_GetQualifiedName(Nmr_ExpTransfer self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Nmr_ExpTransfer self
  @returns   the result
**/
extern Impl_MemopsRoot Nmr_ExpTransfer_GetRoot(Nmr_ExpTransfer self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Nmr_ExpTransfer self
  @returns   the result
**/
extern Impl_TopObject Nmr_ExpTransfer_GetTopObject(Nmr_ExpTransfer self);

/**
  Get for ccp.nmr.Nmr.ExpTransfer.transferSubType

Subtype of transfer. 
Intended to distinguish between transfer variants that connect AtomSites 
in the same way  but are different in other ways (e.g. NOESY/ROESY, 
HSQC/HMQC). See data type for allowed values.
  @param  Nmr_ExpTransfer self
  @returns   the result
**/
extern ApiString Nmr_ExpTransfer_GetTransferSubType(Nmr_ExpTransfer self);

/**
  Get for ccp.nmr.Nmr.ExpTransfer.transferType

Type of magnetisation 
transfer. Enumeration. See data type for allowed values.
  @param  Nmr_ExpTransfer self
  @returns   the result
**/
extern ApiString Nmr_ExpTransfer_GetTransferType(Nmr_ExpTransfer self);

/**
  Constructor for ccp.nmr.Nmr.ExpTransfer
  @param  Nmr_Experiment parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmr_ExpTransfer Nmr_ExpTransfer_Init(Nmr_Experiment parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.Nmr.ExpTransfer
  @param  Nmr_Experiment parent
  @param  ApiSet expDimRefs
  @returns  the new object
**/
extern Nmr_ExpTransfer Nmr_ExpTransfer_Init_reqd(Nmr_Experiment parent, ApiSet expDimRefs);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpTransfer self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_ExpTransfer_RemoveApplicationData(Nmr_ExpTransfer self, Impl_ApplicationData value);

/**
  SetAttr for ccp.nmr.Nmr.ExpTransfer
  @param  Nmr_ExpTransfer self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Nmr_ExpTransfer_Set(Nmr_ExpTransfer self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_ExpTransfer self
  @param  Acco_AccessObject value
**/
extern void *Nmr_ExpTransfer_SetAccess(Nmr_ExpTransfer self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpTransfer self
  @param  ApiList values
**/
extern void *Nmr_ExpTransfer_SetApplicationData(Nmr_ExpTransfer self, ApiList values);

/**
  Set for ccp.nmr.Nmr.ExpTransfer.expDimRefs

ExpDimRefs betwen which 
magentisation is transferred
  @param  Nmr_ExpTransfer self
  @param  ApiSet values
**/
extern void *Nmr_ExpTransfer_SetExpDimRefs(Nmr_ExpTransfer self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.ExpTransfer.mixingTime

mixing time for transfer 
step, in seconds
  @param  Nmr_ExpTransfer self
  @param  ApiFloat value
**/
extern void *Nmr_ExpTransfer_SetMixingTime(Nmr_ExpTransfer self, ApiFloat value);

/**
  Set for ccp.nmr.Nmr.ExpTransfer.transferSubType

Subtype of transfer. 
Intended to distinguish between transfer variants that connect AtomSites 
in the same way  but are different in other ways (e.g. NOESY/ROESY, 
HSQC/HMQC). See data type for allowed values.
  @param  Nmr_ExpTransfer self
  @param  ApiString value
**/
extern void *Nmr_ExpTransfer_SetTransferSubType(Nmr_ExpTransfer self, ApiString value);

/**
  Set for ccp.nmr.Nmr.ExpTransfer.transferType

Type of magnetisation 
transfer. Enumeration. See data type for allowed values.
  @param  Nmr_ExpTransfer self
  @param  ApiString value
**/
extern void *Nmr_ExpTransfer_SetTransferType(Nmr_ExpTransfer self, ApiString value);

/**
  Sorted for ccp.nmr.Nmr.ExpTransfer.expDimRefs

ExpDimRefs betwen which 
magentisation is transferred
  @param  Nmr_ExpTransfer self
  @returns   the result
**/
extern ApiList Nmr_ExpTransfer_SortedExpDimRefs(Nmr_ExpTransfer self);

#endif /* __incl__ccp_api_nmr_Nmr_ExpTransfer_h__ */
