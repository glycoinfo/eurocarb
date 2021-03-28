
#ifndef __incl__ccp_api_nmr_Nmr_ExpChainState_h__
#define __incl__ccp_api_nmr_Nmr_ExpChainState_h__

#include "ccp.h"

/*
  ChainStates describing the state of a molecule under the conditions of Experiment. If there is only one ChainState for each ChainStateSet this means that that was the state of the molecule (e.g. 'folded, 'loop 1 in conformation A'). If there is more than one ChainState for a given ChainStateSet, this means that the molecule was in fast exchange betnween those states, with relative probabilities given by the relative weights of the ExpChainStates.
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpChainState self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_ExpChainState_AddApplicationData(Nmr_ExpChainState self, Impl_ApplicationData value);

/**
  CheckAllValid for ccp.nmr.Nmr.ExpChainState
  @param  Nmr_ExpChainState self
  @param  ApiBoolean complete
**/
extern void *Nmr_ExpChainState_CheckAllValid(Nmr_ExpChainState self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.Nmr.ExpChainState
  @param  Nmr_ExpChainState self
  @param  ApiBoolean complete
**/
extern void *Nmr_ExpChainState_CheckValid(Nmr_ExpChainState self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpChainState self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_ExpChainState_FindAllApplicationData(Nmr_ExpChainState self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpChainState self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_ExpChainState_FindAllApplicationData_keyval0(Nmr_ExpChainState self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpChainState self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_ExpChainState_FindAllApplicationData_keyval1(Nmr_ExpChainState self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpChainState self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_ExpChainState_FindAllApplicationData_keyval2(Nmr_ExpChainState self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpChainState self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_ExpChainState_FindAllApplicationData_keyval3(Nmr_ExpChainState self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpChainState self
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
extern ApiList Nmr_ExpChainState_FindAllApplicationData_keyval4(Nmr_ExpChainState self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpChainState self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_ExpChainState_FindFirstApplicationData(Nmr_ExpChainState self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpChainState self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_ExpChainState_FindFirstApplicationData_keyval0(Nmr_ExpChainState self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpChainState self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_ExpChainState_FindFirstApplicationData_keyval1(Nmr_ExpChainState self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpChainState self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_ExpChainState_FindFirstApplicationData_keyval2(Nmr_ExpChainState self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpChainState self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_ExpChainState_FindFirstApplicationData_keyval3(Nmr_ExpChainState self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpChainState self
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
extern Impl_ApplicationData Nmr_ExpChainState_FindFirstApplicationData_keyval4(Nmr_ExpChainState self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.Nmr.ExpChainState
  @param  Nmr_ExpChainState self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Nmr_ExpChainState_Get(Nmr_ExpChainState self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_ExpChainState self
  @returns   the result
**/
extern Acco_AccessObject Nmr_ExpChainState_GetAccess(Nmr_ExpChainState self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpChainState self
  @returns   the result
**/
extern ApiList Nmr_ExpChainState_GetApplicationData(Nmr_ExpChainState self);

/**
  GetByKey for ccp.nmr.Nmr.ExpChainState
  @param  Nmr_ExpChainState self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Nmr_ExpChainState Nmr_ExpChainState_GetByKey(Nmr_ExpChainState self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for ccp.nmr.Nmr.ExpChainState.chainState

The ChainState pointed to 
by the ExpChainState.
  @param  Nmr_ExpChainState self
  @returns   the result
**/
extern Nmr_ChainState Nmr_ExpChainState_GetChainState(Nmr_ExpChainState self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Nmr_ExpChainState self
  @returns   the result
**/
extern ApiString Nmr_ExpChainState_GetClassName(Nmr_ExpChainState self);

/**
  Get for ccp.nmr.Nmr.ExpChainState.experiment

parent link
  @param  Nmr_ExpChainState self
  @returns   the result
**/
extern Nmr_Experiment Nmr_ExpChainState_GetExperiment(Nmr_ExpChainState self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Nmr_ExpChainState self
  @returns   the result
**/
extern ApiList Nmr_ExpChainState_GetFieldNames(Nmr_ExpChainState self);

/**
  GetFullKey for ccp.nmr.Nmr.ExpChainState
  @param  Nmr_ExpChainState self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Nmr_ExpChainState_GetFullKey(Nmr_ExpChainState self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Nmr_ExpChainState self
  @returns   the result
**/
extern ApiBoolean Nmr_ExpChainState_GetInConstructor(Nmr_ExpChainState self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Nmr_ExpChainState self
  @returns   the result
**/
extern ApiBoolean Nmr_ExpChainState_GetIsDeleted(Nmr_ExpChainState self);

/**
  GetLocalKey for ccp.nmr.Nmr.ExpChainState
  @param  Nmr_ExpChainState self
  @returns  Local object key
**/
extern ApiObject Nmr_ExpChainState_GetLocalKey(Nmr_ExpChainState self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Nmr_ExpChainState self
  @returns   the result
**/
extern ApiString Nmr_ExpChainState_GetPackageName(Nmr_ExpChainState self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Nmr_ExpChainState self
  @returns   the result
**/
extern ApiString Nmr_ExpChainState_GetPackageShortName(Nmr_ExpChainState self);

/**
  Get for ccp.nmr.Nmr.ExpChainState.parent

link to parent object - 
synonym for experiment
  @param  Nmr_ExpChainState self
  @returns   the result
**/
extern Nmr_Experiment Nmr_ExpChainState_GetParent(Nmr_ExpChainState self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Nmr_ExpChainState self
  @returns   the result
**/
extern ApiString Nmr_ExpChainState_GetQualifiedName(Nmr_ExpChainState self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Nmr_ExpChainState self
  @returns   the result
**/
extern Impl_MemopsRoot Nmr_ExpChainState_GetRoot(Nmr_ExpChainState self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Nmr_ExpChainState self
  @returns   the result
**/
extern Impl_TopObject Nmr_ExpChainState_GetTopObject(Nmr_ExpChainState self);

/**
  Get for ccp.nmr.Nmr.ExpChainState.weight

Relative weight of a 
ChainState relative to others of the same ChainStateSet. Describes 
molecules in fast exchange in a given Expermient.
  @param  Nmr_ExpChainState self
  @returns   the result
**/
extern ApiFloat Nmr_ExpChainState_GetWeight(Nmr_ExpChainState self);

/**
  Constructor for ccp.nmr.Nmr.ExpChainState
  @param  Nmr_Experiment parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmr_ExpChainState Nmr_ExpChainState_Init(Nmr_Experiment parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.Nmr.ExpChainState
  @param  Nmr_Experiment parent
  @param  Nmr_ChainState chainState
  @returns  the new object
**/
extern Nmr_ExpChainState Nmr_ExpChainState_Init_reqd(Nmr_Experiment parent, Nmr_ChainState chainState);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpChainState self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_ExpChainState_RemoveApplicationData(Nmr_ExpChainState self, Impl_ApplicationData value);

/**
  SetAttr for ccp.nmr.Nmr.ExpChainState
  @param  Nmr_ExpChainState self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Nmr_ExpChainState_Set(Nmr_ExpChainState self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_ExpChainState self
  @param  Acco_AccessObject value
**/
extern void *Nmr_ExpChainState_SetAccess(Nmr_ExpChainState self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpChainState self
  @param  ApiList values
**/
extern void *Nmr_ExpChainState_SetApplicationData(Nmr_ExpChainState self, ApiList values);

/**
  Set for ccp.nmr.Nmr.ExpChainState.chainState

The ChainState pointed to 
by the ExpChainState.
  @param  Nmr_ExpChainState self
  @param  Nmr_ChainState value
**/
extern void *Nmr_ExpChainState_SetChainState(Nmr_ExpChainState self, Nmr_ChainState value);

/**
  Set for ccp.nmr.Nmr.ExpChainState.weight

Relative weight of a 
ChainState relative to others of the same ChainStateSet. Describes 
molecules in fast exchange in a given Expermient.
  @param  Nmr_ExpChainState self
  @param  ApiFloat value
**/
extern void *Nmr_ExpChainState_SetWeight(Nmr_ExpChainState self, ApiFloat value);

#endif /* __incl__ccp_api_nmr_Nmr_ExpChainState_h__ */
