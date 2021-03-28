
#ifndef __incl__memops_api_Implementation_MemopsDataTypeObject_h__
#define __incl__memops_api_Implementation_MemopsDataTypeObject_h__

#include "ccp.h"

/*
  Superclass for DataObjTypes
*/

/* package memops.api.Implementation */

/**
  removes DataObj from override status
  @param  Impl_MemopsDataTypeObject self
**/
extern void *Impl_MemopsDataTypeObject_EndOverride(Impl_MemopsDataTypeObject self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Impl_MemopsDataTypeObject self
  @returns   the result
**/
extern ApiString Impl_MemopsDataTypeObject_GetClassName(Impl_MemopsDataTypeObject self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Impl_MemopsDataTypeObject self
  @returns   the result
**/
extern ApiList Impl_MemopsDataTypeObject_GetFieldNames(Impl_MemopsDataTypeObject self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Impl_MemopsDataTypeObject self
  @returns   the result
**/
extern ApiBoolean Impl_MemopsDataTypeObject_GetInConstructor(Impl_MemopsDataTypeObject self);

/**
  Get for memops.Implementation.MemopsDataTypeObject.override

Overrride 
switch for DataObjType. Works like MemopsRoot.override, but only for the 
object itself. If set to True on creation must be reset to False 
explicitly later. Once set to False can only be reset to True by 
bypassing the API.
  @param  Impl_MemopsDataTypeObject self
  @returns   the result
**/
extern ApiBoolean Impl_MemopsDataTypeObject_GetOverride(Impl_MemopsDataTypeObject self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Impl_MemopsDataTypeObject self
  @returns   the result
**/
extern ApiString Impl_MemopsDataTypeObject_GetPackageName(Impl_MemopsDataTypeObject self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Impl_MemopsDataTypeObject self
  @returns   the result
**/
extern ApiString Impl_MemopsDataTypeObject_GetPackageShortName(Impl_MemopsDataTypeObject self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Impl_MemopsDataTypeObject self
  @returns   the result
**/
extern ApiString Impl_MemopsDataTypeObject_GetQualifiedName(Impl_MemopsDataTypeObject self);

/**
  Gives a string representation of object
  @param  Impl_MemopsDataTypeObject self
  @returns  
**/
extern ApiString Impl_MemopsDataTypeObject_ToString(Impl_MemopsDataTypeObject self);

#endif /* __incl__memops_api_Implementation_MemopsDataTypeObject_h__ */
