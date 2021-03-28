
#ifndef __incl__memops_api_Implementation_AppDataString_h__
#define __incl__memops_api_Implementation_AppDataString_h__

#include "ccp.h"

/*
  String type application data.
*/

/* package memops.api.Implementation */

/**
  CheckAllValid for memops.Implementation.AppDataString
  @param  Impl_AppDataString self
  @param  ApiBoolean complete
**/
extern void *Impl_AppDataString_CheckAllValid(Impl_AppDataString self, ApiBoolean complete);

/**
  CheckValid for memops.Implementation.AppDataString
  @param  Impl_AppDataString self
  @param  ApiBoolean complete
**/
extern void *Impl_AppDataString_CheckValid(Impl_AppDataString self, ApiBoolean complete);

/**
  GetAttr for memops.Implementation.AppDataString
  @param  Impl_AppDataString self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Impl_AppDataString_Get(Impl_AppDataString self, ApiString name);

/**
  Get for memops.Implementation.ApplicationData.application

Name of 
application owning the data.
  @param  Impl_AppDataString self
  @returns   the result
**/
extern ApiString Impl_AppDataString_GetApplication(Impl_AppDataString self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Impl_AppDataString self
  @returns   the result
**/
extern ApiString Impl_AppDataString_GetClassName(Impl_AppDataString self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Impl_AppDataString self
  @returns   the result
**/
extern ApiList Impl_AppDataString_GetFieldNames(Impl_AppDataString self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Impl_AppDataString self
  @returns   the result
**/
extern ApiBoolean Impl_AppDataString_GetInConstructor(Impl_AppDataString self);

/**
  Get for memops.Implementation.ApplicationData.keyword

keyword or name 
of variable
  @param  Impl_AppDataString self
  @returns   the result
**/
extern ApiString Impl_AppDataString_GetKeyword(Impl_AppDataString self);

/**
  Get for memops.Implementation.MemopsDataTypeObject.override

Overrride 
switch for DataObjType. Works like MemopsRoot.override, but only for the 
object itself. If set to True on creation must be reset to False 
explicitly later. Once set to False can only be reset to True by 
bypassing the API.
  @param  Impl_AppDataString self
  @returns   the result
**/
extern ApiBoolean Impl_AppDataString_GetOverride(Impl_AppDataString self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Impl_AppDataString self
  @returns   the result
**/
extern ApiString Impl_AppDataString_GetPackageName(Impl_AppDataString self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Impl_AppDataString self
  @returns   the result
**/
extern ApiString Impl_AppDataString_GetPackageShortName(Impl_AppDataString self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Impl_AppDataString self
  @returns   the result
**/
extern ApiString Impl_AppDataString_GetQualifiedName(Impl_AppDataString self);

/**
  Get for memops.Implementation.AppDataString.value

Data value
  @param  Impl_AppDataString self
  @returns   the result
**/
extern ApiString Impl_AppDataString_GetValue(Impl_AppDataString self);

/**
  Constructor for memops.Implementation.AppDataString
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Impl_AppDataString Impl_AppDataString_Init(ApiMap attrlinks);

/**
  Constructor for memops.Implementation.AppDataString
  @param  char * application
  @param  char * keyword
  @param  char * value
  @returns  the new object
**/
extern Impl_AppDataString Impl_AppDataString_Init_reqd(char * application, char * keyword, char * value);

/**
  SetAttr for memops.Implementation.AppDataString
  @param  Impl_AppDataString self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Impl_AppDataString_Set(Impl_AppDataString self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.ApplicationData.application

Name of 
application owning the data.
  @param  Impl_AppDataString self
  @param  ApiString value
**/
extern void *Impl_AppDataString_SetApplication(Impl_AppDataString self, ApiString value);

/**
  Set for memops.Implementation.ApplicationData.keyword

keyword or name 
of variable
  @param  Impl_AppDataString self
  @param  ApiString value
**/
extern void *Impl_AppDataString_SetKeyword(Impl_AppDataString self, ApiString value);

/**
  Set for memops.Implementation.AppDataString.value

Data value
  @param  Impl_AppDataString self
  @param  ApiString value
**/
extern void *Impl_AppDataString_SetValue(Impl_AppDataString self, ApiString value);

/**
  Gives a string representation of object
  @param  Impl_AppDataString self
  @returns  
**/
extern ApiString Impl_AppDataString_ToString(Impl_AppDataString self);

#endif /* __incl__memops_api_Implementation_AppDataString_h__ */
