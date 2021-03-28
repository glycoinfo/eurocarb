
#ifndef __incl__memops_api_Implementation_ApplicationData_h__
#define __incl__memops_api_Implementation_ApplicationData_h__

#include "ccp.h"

/*
  Stores program-specific data. Intended for application-specific extensions to the data model. ApplicationData objects should be used only by the application that wrote them originally. 
  ApplicationData objects all have an attribute 'value' holding the data value. The data type of the value differs between the different subclasses of ApplicationData
*/

/* package memops.api.Implementation */

/**
  Get for memops.Implementation.ApplicationData.application

Name of 
application owning the data.
  @param  Impl_ApplicationData self
  @returns   the result
**/
extern ApiString Impl_ApplicationData_GetApplication(Impl_ApplicationData self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Impl_ApplicationData self
  @returns   the result
**/
extern ApiString Impl_ApplicationData_GetClassName(Impl_ApplicationData self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Impl_ApplicationData self
  @returns   the result
**/
extern ApiList Impl_ApplicationData_GetFieldNames(Impl_ApplicationData self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Impl_ApplicationData self
  @returns   the result
**/
extern ApiBoolean Impl_ApplicationData_GetInConstructor(Impl_ApplicationData self);

/**
  Get for memops.Implementation.ApplicationData.keyword

keyword or name 
of variable
  @param  Impl_ApplicationData self
  @returns   the result
**/
extern ApiString Impl_ApplicationData_GetKeyword(Impl_ApplicationData self);

/**
  Get for memops.Implementation.MemopsDataTypeObject.override

Overrride 
switch for DataObjType. Works like MemopsRoot.override, but only for the 
object itself. If set to True on creation must be reset to False 
explicitly later. Once set to False can only be reset to True by 
bypassing the API.
  @param  Impl_ApplicationData self
  @returns   the result
**/
extern ApiBoolean Impl_ApplicationData_GetOverride(Impl_ApplicationData self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Impl_ApplicationData self
  @returns   the result
**/
extern ApiString Impl_ApplicationData_GetPackageName(Impl_ApplicationData self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Impl_ApplicationData self
  @returns   the result
**/
extern ApiString Impl_ApplicationData_GetPackageShortName(Impl_ApplicationData self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Impl_ApplicationData self
  @returns   the result
**/
extern ApiString Impl_ApplicationData_GetQualifiedName(Impl_ApplicationData self);

/**
  Set for memops.Implementation.ApplicationData.application

Name of 
application owning the data.
  @param  Impl_ApplicationData self
  @param  ApiString value
**/
extern void *Impl_ApplicationData_SetApplication(Impl_ApplicationData self, ApiString value);

/**
  Set for memops.Implementation.ApplicationData.keyword

keyword or name 
of variable
  @param  Impl_ApplicationData self
  @param  ApiString value
**/
extern void *Impl_ApplicationData_SetKeyword(Impl_ApplicationData self, ApiString value);

/**
  Gives a string representation of object
  @param  Impl_ApplicationData self
  @returns  
**/
extern ApiString Impl_ApplicationData_ToString(Impl_ApplicationData self);

#endif /* __incl__memops_api_Implementation_ApplicationData_h__ */
