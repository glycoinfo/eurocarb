
#ifndef __incl__molsim_api_NmrSim_EnergyTermParameter_h__
#define __incl__molsim_api_NmrSim_EnergyTermParameter_h__

#include "ccp.h"

/*
  Parameter to further characterise energy term. E.g. correlation time for a restraint derived from relaxation measurements.
*/

/* package molsim.api.NmrSim */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_EnergyTermParameter self
  @param  Impl_ApplicationData value
**/
extern void *Nsim_EnergyTermParameter_AddApplicationData(Nsim_EnergyTermParameter self, Impl_ApplicationData value);

/**
  CheckAllValid for molsim.NmrSim.EnergyTermParameter
  @param  Nsim_EnergyTermParameter self
  @param  ApiBoolean complete
**/
extern void *Nsim_EnergyTermParameter_CheckAllValid(Nsim_EnergyTermParameter self, ApiBoolean complete);

/**
  CheckValid for molsim.NmrSim.EnergyTermParameter
  @param  Nsim_EnergyTermParameter self
  @param  ApiBoolean complete
**/
extern void *Nsim_EnergyTermParameter_CheckValid(Nsim_EnergyTermParameter self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_EnergyTermParameter self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nsim_EnergyTermParameter_FindAllApplicationData(Nsim_EnergyTermParameter self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_EnergyTermParameter self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nsim_EnergyTermParameter_FindAllApplicationData_keyval0(Nsim_EnergyTermParameter self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_EnergyTermParameter self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nsim_EnergyTermParameter_FindAllApplicationData_keyval1(Nsim_EnergyTermParameter self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_EnergyTermParameter self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nsim_EnergyTermParameter_FindAllApplicationData_keyval2(Nsim_EnergyTermParameter self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_EnergyTermParameter self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nsim_EnergyTermParameter_FindAllApplicationData_keyval3(Nsim_EnergyTermParameter self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_EnergyTermParameter self
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
extern ApiList Nsim_EnergyTermParameter_FindAllApplicationData_keyval4(Nsim_EnergyTermParameter self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_EnergyTermParameter self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nsim_EnergyTermParameter_FindFirstApplicationData(Nsim_EnergyTermParameter self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_EnergyTermParameter self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nsim_EnergyTermParameter_FindFirstApplicationData_keyval0(Nsim_EnergyTermParameter self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_EnergyTermParameter self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nsim_EnergyTermParameter_FindFirstApplicationData_keyval1(Nsim_EnergyTermParameter self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_EnergyTermParameter self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nsim_EnergyTermParameter_FindFirstApplicationData_keyval2(Nsim_EnergyTermParameter self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_EnergyTermParameter self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nsim_EnergyTermParameter_FindFirstApplicationData_keyval3(Nsim_EnergyTermParameter self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_EnergyTermParameter self
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
extern Impl_ApplicationData Nsim_EnergyTermParameter_FindFirstApplicationData_keyval4(Nsim_EnergyTermParameter self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for molsim.NmrSim.EnergyTermParameter
  @param  Nsim_EnergyTermParameter self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Nsim_EnergyTermParameter_Get(Nsim_EnergyTermParameter self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nsim_EnergyTermParameter self
  @returns   the result
**/
extern Acco_AccessObject Nsim_EnergyTermParameter_GetAccess(Nsim_EnergyTermParameter self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Nsim_EnergyTermParameter self
  @returns   the result
**/
extern Acco_AccessObject Nsim_EnergyTermParameter_GetActiveAccess(Nsim_EnergyTermParameter self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_EnergyTermParameter self
  @returns   the result
**/
extern ApiList Nsim_EnergyTermParameter_GetApplicationData(Nsim_EnergyTermParameter self);

/**
  GetByKey for molsim.NmrSim.EnergyTermParameter
  @param  Nsim_EnergyTermParameter self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Nsim_EnergyTermParameter Nsim_EnergyTermParameter_GetByKey(Nsim_EnergyTermParameter self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Nsim_EnergyTermParameter self
  @returns   the result
**/
extern ApiString Nsim_EnergyTermParameter_GetClassName(Nsim_EnergyTermParameter self);

/**
  Get for molsim.NmrSim.EnergyTermParameter.code

Code for energy term 
parameter, as used in its definition.
  @param  Nsim_EnergyTermParameter self
  @returns   the result
**/
extern ApiString Nsim_EnergyTermParameter_GetCode(Nsim_EnergyTermParameter self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Nsim_EnergyTermParameter self
  @returns   the result
**/
extern ApiList Nsim_EnergyTermParameter_GetFieldNames(Nsim_EnergyTermParameter self);

/**
  GetFullKey for molsim.NmrSim.EnergyTermParameter
  @param  Nsim_EnergyTermParameter self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Nsim_EnergyTermParameter_GetFullKey(Nsim_EnergyTermParameter self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Nsim_EnergyTermParameter self
  @returns   the result
**/
extern ApiBoolean Nsim_EnergyTermParameter_GetInConstructor(Nsim_EnergyTermParameter self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Nsim_EnergyTermParameter self
  @returns   the result
**/
extern ApiBoolean Nsim_EnergyTermParameter_GetIsDeleted(Nsim_EnergyTermParameter self);

/**
  GetLocalKey for molsim.NmrSim.EnergyTermParameter
  @param  Nsim_EnergyTermParameter self
  @returns  Local object key
**/
extern ApiObject Nsim_EnergyTermParameter_GetLocalKey(Nsim_EnergyTermParameter self);

/**
  Get for molsim.NmrSim.EnergyTermParameter.nmrSimEnergyTerm

parent link
  @param  Nsim_EnergyTermParameter self
  @returns   the result
**/
extern Nsim_NmrSimEnergyTerm Nsim_EnergyTermParameter_GetNmrSimEnergyTerm(Nsim_EnergyTermParameter self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Nsim_EnergyTermParameter self
  @returns   the result
**/
extern ApiString Nsim_EnergyTermParameter_GetPackageName(Nsim_EnergyTermParameter self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Nsim_EnergyTermParameter self
  @returns   the result
**/
extern ApiString Nsim_EnergyTermParameter_GetPackageShortName(Nsim_EnergyTermParameter self);

/**
  Get for molsim.NmrSim.EnergyTermParameter.parent

link to parent object 
- synonym for nmrSimEnergyTerm
  @param  Nsim_EnergyTermParameter self
  @returns   the result
**/
extern Nsim_NmrSimEnergyTerm Nsim_EnergyTermParameter_GetParent(Nsim_EnergyTermParameter self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Nsim_EnergyTermParameter self
  @returns   the result
**/
extern ApiString Nsim_EnergyTermParameter_GetQualifiedName(Nsim_EnergyTermParameter self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Nsim_EnergyTermParameter self
  @returns   the result
**/
extern Impl_MemopsRoot Nsim_EnergyTermParameter_GetRoot(Nsim_EnergyTermParameter self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Nsim_EnergyTermParameter self
  @returns   the result
**/
extern Impl_TopObject Nsim_EnergyTermParameter_GetTopObject(Nsim_EnergyTermParameter self);

/**
  Get for molsim.NmrSim.EnergyTermParameter.value

Value of energy term 
parameter
  @param  Nsim_EnergyTermParameter self
  @returns   the result
**/
extern ApiFloat Nsim_EnergyTermParameter_GetValue(Nsim_EnergyTermParameter self);

/**
  Constructor for molsim.NmrSim.EnergyTermParameter
  @param  Nsim_NmrSimEnergyTerm parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nsim_EnergyTermParameter Nsim_EnergyTermParameter_Init(Nsim_NmrSimEnergyTerm parent, ApiMap attrlinks);

/**
  Constructor for molsim.NmrSim.EnergyTermParameter
  @param  Nsim_NmrSimEnergyTerm parent
  @param  char * code
  @param  float value
  @returns  the new object
**/
extern Nsim_EnergyTermParameter Nsim_EnergyTermParameter_Init_reqd(Nsim_NmrSimEnergyTerm parent, char * code, float value);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_EnergyTermParameter self
  @param  Impl_ApplicationData value
**/
extern void *Nsim_EnergyTermParameter_RemoveApplicationData(Nsim_EnergyTermParameter self, Impl_ApplicationData value);

/**
  SetAttr for molsim.NmrSim.EnergyTermParameter
  @param  Nsim_EnergyTermParameter self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Nsim_EnergyTermParameter_Set(Nsim_EnergyTermParameter self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nsim_EnergyTermParameter self
  @param  Acco_AccessObject value
**/
extern void *Nsim_EnergyTermParameter_SetAccess(Nsim_EnergyTermParameter self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_EnergyTermParameter self
  @param  ApiList values
**/
extern void *Nsim_EnergyTermParameter_SetApplicationData(Nsim_EnergyTermParameter self, ApiList values);

/**
  Set for molsim.NmrSim.EnergyTermParameter.code

Code for energy term 
parameter, as used in its definition.
  @param  Nsim_EnergyTermParameter self
  @param  ApiString value
**/
extern void *Nsim_EnergyTermParameter_SetCode(Nsim_EnergyTermParameter self, ApiString value);

/**
  Set for molsim.NmrSim.EnergyTermParameter.value

Value of energy term 
parameter
  @param  Nsim_EnergyTermParameter self
  @param  ApiFloat value
**/
extern void *Nsim_EnergyTermParameter_SetValue(Nsim_EnergyTermParameter self, ApiFloat value);

#endif /* __incl__molsim_api_NmrSim_EnergyTermParameter_h__ */
