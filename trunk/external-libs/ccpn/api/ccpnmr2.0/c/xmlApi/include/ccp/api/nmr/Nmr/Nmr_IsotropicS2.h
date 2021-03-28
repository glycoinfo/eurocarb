
#ifndef __incl__ccp_api_nmr_Nmr_IsotropicS2_h__
#define __incl__ccp_api_nmr_Nmr_IsotropicS2_h__

#include "ccp.h"

/*
  Order parameter (S2), calculated assuming isotropic motion.
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_IsotropicS2 self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_IsotropicS2_AddApplicationData(Nmr_IsotropicS2 self, Impl_ApplicationData value);

/**
  CheckAllValid for ccp.nmr.Nmr.IsotropicS2
  @param  Nmr_IsotropicS2 self
  @param  ApiBoolean complete
**/
extern void *Nmr_IsotropicS2_CheckAllValid(Nmr_IsotropicS2 self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.Nmr.IsotropicS2
  @param  Nmr_IsotropicS2 self
  @param  ApiBoolean complete
**/
extern void *Nmr_IsotropicS2_CheckValid(Nmr_IsotropicS2 self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_IsotropicS2 self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_IsotropicS2_FindAllApplicationData(Nmr_IsotropicS2 self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_IsotropicS2 self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_IsotropicS2_FindAllApplicationData_keyval0(Nmr_IsotropicS2 self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_IsotropicS2 self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_IsotropicS2_FindAllApplicationData_keyval1(Nmr_IsotropicS2 self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_IsotropicS2 self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_IsotropicS2_FindAllApplicationData_keyval2(Nmr_IsotropicS2 self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_IsotropicS2 self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_IsotropicS2_FindAllApplicationData_keyval3(Nmr_IsotropicS2 self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_IsotropicS2 self
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
extern ApiList Nmr_IsotropicS2_FindAllApplicationData_keyval4(Nmr_IsotropicS2 self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.IsotropicS2.resonances

Resonances to which 
isotropic order parameter values belongs.
  @param  Nmr_IsotropicS2 self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_IsotropicS2_FindAllResonances(Nmr_IsotropicS2 self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.IsotropicS2.resonances

Resonances to which 
isotropic order parameter values belongs.
  @param  Nmr_IsotropicS2 self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_IsotropicS2_FindAllResonances_keyval0(Nmr_IsotropicS2 self);

/**
  FindAll for ccp.nmr.Nmr.IsotropicS2.resonances

Resonances to which 
isotropic order parameter values belongs.
  @param  Nmr_IsotropicS2 self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_IsotropicS2_FindAllResonances_keyval1(Nmr_IsotropicS2 self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.IsotropicS2.resonances

Resonances to which 
isotropic order parameter values belongs.
  @param  Nmr_IsotropicS2 self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_IsotropicS2_FindAllResonances_keyval2(Nmr_IsotropicS2 self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.IsotropicS2.resonances

Resonances to which 
isotropic order parameter values belongs.
  @param  Nmr_IsotropicS2 self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_IsotropicS2_FindAllResonances_keyval3(Nmr_IsotropicS2 self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.IsotropicS2.resonances

Resonances to which 
isotropic order parameter values belongs.
  @param  Nmr_IsotropicS2 self
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
extern ApiSet Nmr_IsotropicS2_FindAllResonances_keyval4(Nmr_IsotropicS2 self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_IsotropicS2 self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_IsotropicS2_FindFirstApplicationData(Nmr_IsotropicS2 self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_IsotropicS2 self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_IsotropicS2_FindFirstApplicationData_keyval0(Nmr_IsotropicS2 self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_IsotropicS2 self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_IsotropicS2_FindFirstApplicationData_keyval1(Nmr_IsotropicS2 self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_IsotropicS2 self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_IsotropicS2_FindFirstApplicationData_keyval2(Nmr_IsotropicS2 self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_IsotropicS2 self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_IsotropicS2_FindFirstApplicationData_keyval3(Nmr_IsotropicS2 self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_IsotropicS2 self
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
extern Impl_ApplicationData Nmr_IsotropicS2_FindFirstApplicationData_keyval4(Nmr_IsotropicS2 self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.IsotropicS2.resonances

Resonances to which 
isotropic order parameter values belongs.
  @param  Nmr_IsotropicS2 self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Resonance Nmr_IsotropicS2_FindFirstResonance(Nmr_IsotropicS2 self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.IsotropicS2.resonances

Resonances to which 
isotropic order parameter values belongs.
  @param  Nmr_IsotropicS2 self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Resonance Nmr_IsotropicS2_FindFirstResonance_keyval0(Nmr_IsotropicS2 self);

/**
  FindFirst for ccp.nmr.Nmr.IsotropicS2.resonances

Resonances to which 
isotropic order parameter values belongs.
  @param  Nmr_IsotropicS2 self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Resonance Nmr_IsotropicS2_FindFirstResonance_keyval1(Nmr_IsotropicS2 self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.IsotropicS2.resonances

Resonances to which 
isotropic order parameter values belongs.
  @param  Nmr_IsotropicS2 self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Resonance Nmr_IsotropicS2_FindFirstResonance_keyval2(Nmr_IsotropicS2 self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.IsotropicS2.resonances

Resonances to which 
isotropic order parameter values belongs.
  @param  Nmr_IsotropicS2 self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Resonance Nmr_IsotropicS2_FindFirstResonance_keyval3(Nmr_IsotropicS2 self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.IsotropicS2.resonances

Resonances to which 
isotropic order parameter values belongs.
  @param  Nmr_IsotropicS2 self
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
extern Nmr_Resonance Nmr_IsotropicS2_FindFirstResonance_keyval4(Nmr_IsotropicS2 self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.Nmr.IsotropicS2
  @param  Nmr_IsotropicS2 self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Nmr_IsotropicS2_Get(Nmr_IsotropicS2 self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_IsotropicS2 self
  @returns   the result
**/
extern Acco_AccessObject Nmr_IsotropicS2_GetAccess(Nmr_IsotropicS2 self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_IsotropicS2 self
  @returns   the result
**/
extern ApiList Nmr_IsotropicS2_GetApplicationData(Nmr_IsotropicS2 self);

/**
  GetByKey for ccp.nmr.Nmr.IsotropicS2
  @param  Nmr_IsotropicS2 self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Nmr_IsotropicS2 Nmr_IsotropicS2_GetByKey(Nmr_IsotropicS2 self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Nmr_IsotropicS2 self
  @returns   the result
**/
extern ApiString Nmr_IsotropicS2_GetClassName(Nmr_IsotropicS2 self);

/**
  Get for ccp.nmr.Nmr.IsotropicS2.derivation

parent link
  @param  Nmr_IsotropicS2 self
  @returns   the result
**/
extern Nmr_IsotropicS2Derivation Nmr_IsotropicS2_GetDerivation(Nmr_IsotropicS2 self);

/**
  Get for ccp.nmr.Nmr.DerivedData.error

Uncertainty (standard deviation) 
of value
  @param  Nmr_IsotropicS2 self
  @returns   the result
**/
extern ApiFloat Nmr_IsotropicS2_GetError(Nmr_IsotropicS2 self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Nmr_IsotropicS2 self
  @returns   the result
**/
extern ApiList Nmr_IsotropicS2_GetFieldNames(Nmr_IsotropicS2 self);

/**
  Get for ccp.nmr.Nmr.DerivedData.figOfMerit

Figure of merit, describing 
the reliability of the value. Between 0.0 (useless) and 1.0 (fully 
reliable, also the default).
  @param  Nmr_IsotropicS2 self
  @returns   the result
**/
extern ApiFloat Nmr_IsotropicS2_GetFigOfMerit(Nmr_IsotropicS2 self);

/**
  GetFullKey for ccp.nmr.Nmr.IsotropicS2
  @param  Nmr_IsotropicS2 self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Nmr_IsotropicS2_GetFullKey(Nmr_IsotropicS2 self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Nmr_IsotropicS2 self
  @returns   the result
**/
extern ApiBoolean Nmr_IsotropicS2_GetInConstructor(Nmr_IsotropicS2 self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Nmr_IsotropicS2 self
  @returns   the result
**/
extern ApiBoolean Nmr_IsotropicS2_GetIsDeleted(Nmr_IsotropicS2 self);

/**
  GetLocalKey for ccp.nmr.Nmr.IsotropicS2
  @param  Nmr_IsotropicS2 self
  @returns  Local object key
**/
extern ApiObject Nmr_IsotropicS2_GetLocalKey(Nmr_IsotropicS2 self);

/**
  Get for ccp.nmr.Nmr.IsotropicS2.modelFit

Which model used in fitting
  @param  Nmr_IsotropicS2 self
  @returns   the result
**/
extern ApiString Nmr_IsotropicS2_GetModelFit(Nmr_IsotropicS2 self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Nmr_IsotropicS2 self
  @returns   the result
**/
extern ApiString Nmr_IsotropicS2_GetPackageName(Nmr_IsotropicS2 self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Nmr_IsotropicS2 self
  @returns   the result
**/
extern ApiString Nmr_IsotropicS2_GetPackageShortName(Nmr_IsotropicS2 self);

/**
  Get for ccp.nmr.Nmr.IsotropicS2.parent

link to parent object - synonym 
for derivation
  @param  Nmr_IsotropicS2 self
  @returns   the result
**/
extern Nmr_IsotropicS2Derivation Nmr_IsotropicS2_GetParent(Nmr_IsotropicS2 self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Nmr_IsotropicS2 self
  @returns   the result
**/
extern ApiString Nmr_IsotropicS2_GetQualifiedName(Nmr_IsotropicS2 self);

/**
  Get for ccp.nmr.Nmr.IsotropicS2.resonances

Resonances to which 
isotropic order parameter values belongs.
  @param  Nmr_IsotropicS2 self
  @returns   the result
**/
extern ApiSet Nmr_IsotropicS2_GetResonances(Nmr_IsotropicS2 self);

/**
  Get for ccp.nmr.Nmr.IsotropicS2.rexError

Uncertainty (standard 
deviation) in value of Rex
  @param  Nmr_IsotropicS2 self
  @returns   the result
**/
extern ApiFloat Nmr_IsotropicS2_GetRexError(Nmr_IsotropicS2 self);

/**
  Get for ccp.nmr.Nmr.IsotropicS2.rexValue

R value for relaxation from 
other mechanisms
  @param  Nmr_IsotropicS2 self
  @returns   the result
**/
extern ApiFloat Nmr_IsotropicS2_GetRexValue(Nmr_IsotropicS2 self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Nmr_IsotropicS2 self
  @returns   the result
**/
extern Impl_MemopsRoot Nmr_IsotropicS2_GetRoot(Nmr_IsotropicS2 self);

/**
  Get for ccp.nmr.Nmr.DerivedData.serial

Serial number of object. Serves 
as object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Nmr_IsotropicS2 self
  @returns   the result
**/
extern ApiInteger Nmr_IsotropicS2_GetSerial(Nmr_IsotropicS2 self);

/**
  Get for ccp.nmr.Nmr.IsotropicS2.sumSquaredErrors

Sum-Of-Squared-Errors 
from the fitting
  @param  Nmr_IsotropicS2 self
  @returns   the result
**/
extern ApiFloat Nmr_IsotropicS2_GetSumSquaredErrors(Nmr_IsotropicS2 self);

/**
  Get for ccp.nmr.Nmr.IsotropicS2.tauEError

Uncertainty (standard 
deviation) in overall correlation time.
  @param  Nmr_IsotropicS2 self
  @returns   the result
**/
extern ApiFloat Nmr_IsotropicS2_GetTauEError(Nmr_IsotropicS2 self);

/**
  Get for ccp.nmr.Nmr.IsotropicS2.tauEValue

Overall correlation time for 
the molecule
  @param  Nmr_IsotropicS2 self
  @returns   the result
**/
extern ApiFloat Nmr_IsotropicS2_GetTauEValue(Nmr_IsotropicS2 self);

/**
  Get for ccp.nmr.Nmr.IsotropicS2.tauSError

Uncertainty (standard 
deviation) in internal correlation time.
  @param  Nmr_IsotropicS2 self
  @returns   the result
**/
extern ApiFloat Nmr_IsotropicS2_GetTauSError(Nmr_IsotropicS2 self);

/**
  Get for ccp.nmr.Nmr.IsotropicS2.tauSValue

Correlation time for internal 
motion
  @param  Nmr_IsotropicS2 self
  @returns   the result
**/
extern ApiFloat Nmr_IsotropicS2_GetTauSValue(Nmr_IsotropicS2 self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Nmr_IsotropicS2 self
  @returns   the result
**/
extern Impl_TopObject Nmr_IsotropicS2_GetTopObject(Nmr_IsotropicS2 self);

/**
  Get for ccp.nmr.Nmr.DerivedData.value

Value of derived measurement.
  @param  Nmr_IsotropicS2 self
  @returns   the result
**/
extern ApiFloat Nmr_IsotropicS2_GetValue(Nmr_IsotropicS2 self);

/**
  Constructor for ccp.nmr.Nmr.IsotropicS2
  @param  Nmr_IsotropicS2Derivation parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmr_IsotropicS2 Nmr_IsotropicS2_Init(Nmr_IsotropicS2Derivation parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.Nmr.IsotropicS2
  @param  Nmr_IsotropicS2Derivation parent
  @param  ApiSet resonances
  @returns  the new object
**/
extern Nmr_IsotropicS2 Nmr_IsotropicS2_Init_reqd(Nmr_IsotropicS2Derivation parent, ApiSet resonances);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_IsotropicS2 self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_IsotropicS2_RemoveApplicationData(Nmr_IsotropicS2 self, Impl_ApplicationData value);

/**
  SetAttr for ccp.nmr.Nmr.IsotropicS2
  @param  Nmr_IsotropicS2 self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Nmr_IsotropicS2_Set(Nmr_IsotropicS2 self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_IsotropicS2 self
  @param  Acco_AccessObject value
**/
extern void *Nmr_IsotropicS2_SetAccess(Nmr_IsotropicS2 self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_IsotropicS2 self
  @param  ApiList values
**/
extern void *Nmr_IsotropicS2_SetApplicationData(Nmr_IsotropicS2 self, ApiList values);

/**
  Set for ccp.nmr.Nmr.DerivedData.error

Uncertainty (standard deviation) 
of value
  @param  Nmr_IsotropicS2 self
  @param  ApiFloat value
**/
extern void *Nmr_IsotropicS2_SetError(Nmr_IsotropicS2 self, ApiFloat value);

/**
  Set for ccp.nmr.Nmr.DerivedData.figOfMerit

Figure of merit, describing 
the reliability of the value. Between 0.0 (useless) and 1.0 (fully 
reliable, also the default).
  @param  Nmr_IsotropicS2 self
  @param  ApiFloat value
**/
extern void *Nmr_IsotropicS2_SetFigOfMerit(Nmr_IsotropicS2 self, ApiFloat value);

/**
  Set for ccp.nmr.Nmr.IsotropicS2.modelFit

Which model used in fitting
  @param  Nmr_IsotropicS2 self
  @param  ApiString value
**/
extern void *Nmr_IsotropicS2_SetModelFit(Nmr_IsotropicS2 self, ApiString value);

/**
  Set for ccp.nmr.Nmr.IsotropicS2.resonances

Resonances to which 
isotropic order parameter values belongs.
  @param  Nmr_IsotropicS2 self
  @param  ApiSet values
**/
extern void *Nmr_IsotropicS2_SetResonances(Nmr_IsotropicS2 self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.IsotropicS2.rexError

Uncertainty (standard 
deviation) in value of Rex
  @param  Nmr_IsotropicS2 self
  @param  ApiFloat value
**/
extern void *Nmr_IsotropicS2_SetRexError(Nmr_IsotropicS2 self, ApiFloat value);

/**
  Set for ccp.nmr.Nmr.IsotropicS2.rexValue

R value for relaxation from 
other mechanisms
  @param  Nmr_IsotropicS2 self
  @param  ApiFloat value
**/
extern void *Nmr_IsotropicS2_SetRexValue(Nmr_IsotropicS2 self, ApiFloat value);

/**
  Set for ccp.nmr.Nmr.DerivedData.serial

Serial number of object. Serves 
as object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Nmr_IsotropicS2 self
  @param  ApiInteger value
**/
extern void *Nmr_IsotropicS2_SetSerial(Nmr_IsotropicS2 self, ApiInteger value);

/**
  Set for ccp.nmr.Nmr.IsotropicS2.sumSquaredErrors

Sum-Of-Squared-Errors 
from the fitting
  @param  Nmr_IsotropicS2 self
  @param  ApiFloat value
**/
extern void *Nmr_IsotropicS2_SetSumSquaredErrors(Nmr_IsotropicS2 self, ApiFloat value);

/**
  Set for ccp.nmr.Nmr.IsotropicS2.tauEError

Uncertainty (standard 
deviation) in overall correlation time.
  @param  Nmr_IsotropicS2 self
  @param  ApiFloat value
**/
extern void *Nmr_IsotropicS2_SetTauEError(Nmr_IsotropicS2 self, ApiFloat value);

/**
  Set for ccp.nmr.Nmr.IsotropicS2.tauEValue

Overall correlation time for 
the molecule
  @param  Nmr_IsotropicS2 self
  @param  ApiFloat value
**/
extern void *Nmr_IsotropicS2_SetTauEValue(Nmr_IsotropicS2 self, ApiFloat value);

/**
  Set for ccp.nmr.Nmr.IsotropicS2.tauSError

Uncertainty (standard 
deviation) in internal correlation time.
  @param  Nmr_IsotropicS2 self
  @param  ApiFloat value
**/
extern void *Nmr_IsotropicS2_SetTauSError(Nmr_IsotropicS2 self, ApiFloat value);

/**
  Set for ccp.nmr.Nmr.IsotropicS2.tauSValue

Correlation time for internal 
motion
  @param  Nmr_IsotropicS2 self
  @param  ApiFloat value
**/
extern void *Nmr_IsotropicS2_SetTauSValue(Nmr_IsotropicS2 self, ApiFloat value);

/**
  Set for ccp.nmr.Nmr.DerivedData.value

Value of derived measurement.
  @param  Nmr_IsotropicS2 self
  @param  ApiFloat value
**/
extern void *Nmr_IsotropicS2_SetValue(Nmr_IsotropicS2 self, ApiFloat value);

/**
  Sorted for ccp.nmr.Nmr.IsotropicS2.resonances

Resonances to which 
isotropic order parameter values belongs.
  @param  Nmr_IsotropicS2 self
  @returns   the result
**/
extern ApiList Nmr_IsotropicS2_SortedResonances(Nmr_IsotropicS2 self);

#endif /* __incl__ccp_api_nmr_Nmr_IsotropicS2_h__ */
