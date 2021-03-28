
#ifndef __incl__memops_api_Implementation_AppDataLong_h__
#define __incl__memops_api_Implementation_AppDataLong_h__

#include "ccp.h"

/*
  Long Int type application data.
*/

/* package memops.api.Implementation */

/**
  CheckAllValid for memops.Implementation.AppDataLong
  @param  Impl_AppDataLong self
  @param  ApiBoolean complete
**/
extern void *Impl_AppDataLong_CheckAllValid(Impl_AppDataLong self, ApiBoolean complete);

/**
  CheckValid for memops.Implementation.AppDataLong
  @param  Impl_AppDataLong self
  @param  ApiBoolean complete
**/
extern void *Impl_AppDataLong_CheckValid(Impl_AppDataLong self, ApiBoolean complete);

/**
  GetAttr for memops.Implementation.AppDataLong
  @param  Impl_AppDataLong self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Impl_AppDataLong_Get(Impl_AppDataLong self, ApiString name);

/**
  Get for memops.Implementation.ApplicationData.application

Name of 
application owning the data.
  @param  Impl_AppDataLong self
  @returns   the result
**/
extern ApiString Impl_AppDataLong_GetApplication(Impl_AppDataLong self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Impl_AppDataLong self
  @returns   the result
**/
extern ApiString Impl_AppDataLong_GetClassName(Impl_AppDataLong self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Impl_AppDataLong self
  @returns   the result
**/
extern ApiList Impl_AppDataLong_GetFieldNames(Impl_AppDataLong self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Impl_AppDataLong self
  @returns   the result
**/
extern ApiBoolean Impl_AppDataLong_GetInConstructor(Impl_AppDataLong self);

/**
  Get for memops.Implementation.ApplicationData.keyword

keyword or name 
of variable
  @param  Impl_AppDataLong self
  @returns   the result
**/
extern ApiString Impl_AppDataLong_GetKeyword(Impl_AppDataLong self);

/**
  Get for memops.Implementation.MemopsDataTypeObject.override

Overrride 
switch for DataObjType. Works like MemopsRoot.override, but only for the 
object itself. If set to True on creation must be reset to False 
explicitly later. Once set to False can only be reset to True by 
bypassing the API.
  @param  Impl_AppDataLong self
  @returns   the result
**/
extern ApiBoolean Impl_AppDataLong_GetOverride(Impl_AppDataLong self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Impl_AppDataLong self
  @returns   the result
**/
extern ApiString Impl_AppDataLong_GetPackageName(Impl_AppDataLong self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Impl_AppDataLong self
  @returns   the result
**/
extern ApiString Impl_AppDataLong_GetPackageShortName(Impl_AppDataLong self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Impl_AppDataLong self
  @returns   the result
**/
extern ApiString Impl_AppDataLong_GetQualifiedName(Impl_AppDataLong self);

/**
  Get for memops.Implementation.AppDataLong.value

Data value
  @param  Impl_AppDataLong self
  @returns   the result
**/
extern ApiLong Impl_AppDataLong_GetValue(Impl_AppDataLong self);

/**
  Constructor for memops.Implementation.AppDataLong
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Impl_AppDataLong Impl_AppDataLong_Init(ApiMap attrlinks);

/**
  Constructor for memops.Implementation.AppDataLong
  @param  char * application
  @param  char * keyword
  @param  long value
  @returns  the new object
**/
extern Impl_AppDataLong Impl_AppDataLong_Init_reqd(char * application, char * keyword, long value);

/**
  SetAttr for memops.Implementation.AppDataLong
  @param  Impl_AppDataLong self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Impl_AppDataLong_Set(Impl_AppDataLong self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.ApplicationData.application

Name of 
application owning the data.
  @param  Impl_AppDataLong self
  @param  ApiString value
**/
extern void *Impl_AppDataLong_SetApplication(Impl_AppDataLong self, ApiString value);

/**
  Set for memops.Implementation.ApplicationData.keyword

keyword or name 
of variable
  @param  Impl_AppDataLong self
  @param  ApiString value
**/
extern void *Impl_AppDataLong_SetKeyword(Impl_AppDataLong self, ApiString value);

/**
  Set for memops.Implementation.AppDataLong.value

Data value
  @param  Impl_AppDataLong self
  @param  ApiLong value
**/
extern void *Impl_AppDataLong_SetValue(Impl_AppDataLong self, ApiLong value);

/**
  Gives a string representation of object
  @param  Impl_AppDataLong self
  @returns  
**/
extern ApiString Impl_AppDataLong_ToString(Impl_AppDataLong self);

#endif /* __incl__memops_api_Implementation_AppDataLong_h__ */
