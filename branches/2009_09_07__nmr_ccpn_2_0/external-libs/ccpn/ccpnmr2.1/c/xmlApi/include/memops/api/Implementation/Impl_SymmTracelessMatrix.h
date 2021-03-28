
#ifndef __incl__memops_api_Implementation_SymmTracelessMatrix_h__
#define __incl__memops_api_Implementation_SymmTracelessMatrix_h__

#include "ccp.h"

/*
  Symmetric traceless tenaor, used for instance for alignment tensors.
*/

/* package memops.api.Implementation */

/**
  CheckAllValid for memops.Implementation.SymmTracelessMatrix
  @param  Impl_SymmTracelessMatrix self
  @param  ApiBoolean complete
**/
extern void *Impl_SymmTracelessMatrix_CheckAllValid(Impl_SymmTracelessMatrix self, ApiBoolean complete);

/**
  CheckValid for memops.Implementation.SymmTracelessMatrix
  @param  Impl_SymmTracelessMatrix self
  @param  ApiBoolean complete
**/
extern void *Impl_SymmTracelessMatrix_CheckValid(Impl_SymmTracelessMatrix self, ApiBoolean complete);

/**
  Clone function for memops.Implementation.SymmTracelessMatrix
  @param  Impl_SymmTracelessMatrix self
  @param  ApiMap attrDict
  @returns  the new object clone
**/
extern Impl_SymmTracelessMatrix Impl_SymmTracelessMatrix_Clone(Impl_SymmTracelessMatrix self, ApiMap attrDict);

/**
  GetAttr for memops.Implementation.SymmTracelessMatrix
  @param  Impl_SymmTracelessMatrix self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Impl_SymmTracelessMatrix_Get(Impl_SymmTracelessMatrix self, ApiString name);

/**
  Get for memops.Implementation.SymmTracelessMatrix.aAxial

Axial 
component
  @param  Impl_SymmTracelessMatrix self
  @returns   the result
**/
extern ApiFloat Impl_SymmTracelessMatrix_GetAAxial(Impl_SymmTracelessMatrix self);

/**
  Get for memops.Implementation.SymmTracelessMatrix.aRhombic

rhombic 
component
  @param  Impl_SymmTracelessMatrix self
  @returns   the result
**/
extern ApiFloat Impl_SymmTracelessMatrix_GetARhombic(Impl_SymmTracelessMatrix self);

/**
  Get for memops.Implementation.SymmTracelessMatrix.alpha

Euler angle 
alpha in radians
  @param  Impl_SymmTracelessMatrix self
  @returns   the result
**/
extern ApiFloat Impl_SymmTracelessMatrix_GetAlpha(Impl_SymmTracelessMatrix self);

/**
  Get for memops.Implementation.SymmTracelessMatrix.beta

Euler angle beta 
in radians
  @param  Impl_SymmTracelessMatrix self
  @returns   the result
**/
extern ApiFloat Impl_SymmTracelessMatrix_GetBeta(Impl_SymmTracelessMatrix self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Impl_SymmTracelessMatrix self
  @returns   the result
**/
extern ApiString Impl_SymmTracelessMatrix_GetClassName(Impl_SymmTracelessMatrix self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Impl_SymmTracelessMatrix self
  @returns   the result
**/
extern ApiList Impl_SymmTracelessMatrix_GetFieldNames(Impl_SymmTracelessMatrix self);

/**
  Get for memops.Implementation.SymmTracelessMatrix.gamma

Euler angle 
gamma in radians
  @param  Impl_SymmTracelessMatrix self
  @returns   the result
**/
extern ApiFloat Impl_SymmTracelessMatrix_GetGamma(Impl_SymmTracelessMatrix self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Impl_SymmTracelessMatrix self
  @returns   the result
**/
extern ApiBoolean Impl_SymmTracelessMatrix_GetInConstructor(Impl_SymmTracelessMatrix self);

/**
  Get for memops.Implementation.MemopsDataTypeObject.override

Overrride 
switch for DataObjType. Works like MemopsRoot.override, but only for the 
object itself. If set to True on creation must be reset to False 
explicitly later. Once set to False can only be reset to True by 
bypassing the API.
  @param  Impl_SymmTracelessMatrix self
  @returns   the result
**/
extern ApiBoolean Impl_SymmTracelessMatrix_GetOverride(Impl_SymmTracelessMatrix self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Impl_SymmTracelessMatrix self
  @returns   the result
**/
extern ApiString Impl_SymmTracelessMatrix_GetPackageName(Impl_SymmTracelessMatrix self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Impl_SymmTracelessMatrix self
  @returns   the result
**/
extern ApiString Impl_SymmTracelessMatrix_GetPackageShortName(Impl_SymmTracelessMatrix self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Impl_SymmTracelessMatrix self
  @returns   the result
**/
extern ApiString Impl_SymmTracelessMatrix_GetQualifiedName(Impl_SymmTracelessMatrix self);

/**
  Constructor for memops.Implementation.SymmTracelessMatrix
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Impl_SymmTracelessMatrix Impl_SymmTracelessMatrix_Init(ApiMap attrlinks);

/**
  Constructor for memops.Implementation.SymmTracelessMatrix
  @param  float aAxial
  @param  float aRhombic
  @param  float alpha
  @param  float beta
  @param  float gamma
  @returns  the new object
**/
extern Impl_SymmTracelessMatrix Impl_SymmTracelessMatrix_Init_reqd(float aAxial, float aRhombic, float alpha, float beta, float gamma);

/**
  SetAttr for memops.Implementation.SymmTracelessMatrix
  @param  Impl_SymmTracelessMatrix self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Impl_SymmTracelessMatrix_Set(Impl_SymmTracelessMatrix self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.SymmTracelessMatrix.aAxial

Axial 
component
  @param  Impl_SymmTracelessMatrix self
  @param  ApiFloat value
**/
extern void *Impl_SymmTracelessMatrix_SetAAxial(Impl_SymmTracelessMatrix self, ApiFloat value);

/**
  Set for memops.Implementation.SymmTracelessMatrix.aRhombic

rhombic 
component
  @param  Impl_SymmTracelessMatrix self
  @param  ApiFloat value
**/
extern void *Impl_SymmTracelessMatrix_SetARhombic(Impl_SymmTracelessMatrix self, ApiFloat value);

/**
  Set for memops.Implementation.SymmTracelessMatrix.alpha

Euler angle 
alpha in radians
  @param  Impl_SymmTracelessMatrix self
  @param  ApiFloat value
**/
extern void *Impl_SymmTracelessMatrix_SetAlpha(Impl_SymmTracelessMatrix self, ApiFloat value);

/**
  Set for memops.Implementation.SymmTracelessMatrix.beta

Euler angle beta 
in radians
  @param  Impl_SymmTracelessMatrix self
  @param  ApiFloat value
**/
extern void *Impl_SymmTracelessMatrix_SetBeta(Impl_SymmTracelessMatrix self, ApiFloat value);

/**
  Set for memops.Implementation.SymmTracelessMatrix.gamma

Euler angle 
gamma in radians
  @param  Impl_SymmTracelessMatrix self
  @param  ApiFloat value
**/
extern void *Impl_SymmTracelessMatrix_SetGamma(Impl_SymmTracelessMatrix self, ApiFloat value);

/**
  Gives a string representation of object
  @param  Impl_SymmTracelessMatrix self
  @returns  
**/
extern ApiString Impl_SymmTracelessMatrix_ToString(Impl_SymmTracelessMatrix self);

#endif /* __incl__memops_api_Implementation_SymmTracelessMatrix_h__ */
