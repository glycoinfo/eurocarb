
#ifndef __incl__memops_api_Implementation_AppDataBoolean_h__
#define __incl__memops_api_Implementation_AppDataBoolean_h__

#include "ccp.h"

/*
  Boolean type application data.
*/

/* package memops.api.Implementation */

/**
  CheckAllValid for memops.Implementation.AppDataBoolean
  @param  Impl_AppDataBoolean self
  @param  ApiBoolean complete
**/
extern void *Impl_AppDataBoolean_CheckAllValid(Impl_AppDataBoolean self, ApiBoolean complete);

/**
  CheckValid for memops.Implementation.AppDataBoolean
  @param  Impl_AppDataBoolean self
  @param  ApiBoolean complete
**/
extern void *Impl_AppDataBoolean_CheckValid(Impl_AppDataBoolean self, ApiBoolean complete);

/**
  Clone function for memops.Implementation.AppDataBoolean
  @param  Impl_AppDataBoolean self
  @param  ApiMap attrDict
  @returns  the new object clone
**/
extern Impl_AppDataBoolean Impl_AppDataBoolean_Clone(Impl_AppDataBoolean self, ApiMap attrDict);

/**
  GetAttr for memops.Implementation.AppDataBoolean
  @param  Impl_AppDataBoolean self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Impl_AppDataBoolean_Get(Impl_AppDataBoolean self, ApiString name);

/**
  Get for memops.Implementation.ApplicationData.application

Name of 
application owning the data.
  @param  Impl_AppDataBoolean self
  @returns   the result
**/
extern ApiString Impl_AppDataBoolean_GetApplication(Impl_AppDataBoolean self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Impl_AppDataBoolean self
  @returns   the result
**/
extern ApiString Impl_AppDataBoolean_GetClassName(Impl_AppDataBoolean self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Impl_AppDataBoolean self
  @returns   the result
**/
extern ApiList Impl_AppDataBoolean_GetFieldNames(Impl_AppDataBoolean self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Impl_AppDataBoolean self
  @returns   the result
**/
extern ApiBoolean Impl_AppDataBoolean_GetInConstructor(Impl_AppDataBoolean self);

/**
  Get for memops.Implementation.ApplicationData.keyword

keyword or name 
of variable
  @param  Impl_AppDataBoolean self
  @returns   the result
**/
extern ApiString Impl_AppDataBoolean_GetKeyword(Impl_AppDataBoolean self);

/**
  Get for memops.Implementation.MemopsDataTypeObject.override

Overrride 
switch for DataObjType. Works like MemopsRoot.override, but only for the 
object itself. If set to True on creation must be reset to False 
explicitly later. Once set to False can only be reset to True by 
bypassing the API.
  @param  Impl_AppDataBoolean self
  @returns   the result
**/
extern ApiBoolean Impl_AppDataBoolean_GetOverride(Impl_AppDataBoolean self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Impl_AppDataBoolean self
  @returns   the result
**/
extern ApiString Impl_AppDataBoolean_GetPackageName(Impl_AppDataBoolean self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Impl_AppDataBoolean self
  @returns   the result
**/
extern ApiString Impl_AppDataBoolean_GetPackageShortName(Impl_AppDataBoolean self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Impl_AppDataBoolean self
  @returns   the result
**/
extern ApiString Impl_AppDataBoolean_GetQualifiedName(Impl_AppDataBoolean self);

/**
  Get for memops.Implementation.AppDataBoolean.value

Data value
  @param  Impl_AppDataBoolean self
  @returns   the result
**/
extern ApiBoolean Impl_AppDataBoolean_GetValue(Impl_AppDataBoolean self);

/**
  Constructor for memops.Implementation.AppDataBoolean
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Impl_AppDataBoolean Impl_AppDataBoolean_Init(ApiMap attrlinks);

/**
  Constructor for memops.Implementation.AppDataBoolean
  @param  char * application
  @param  char * keyword
  @param  int value
  @returns  the new object
**/
extern Impl_AppDataBoolean Impl_AppDataBoolean_Init_reqd(char * application, char * keyword, int value);

/**
  SetAttr for memops.Implementation.AppDataBoolean
  @param  Impl_AppDataBoolean self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Impl_AppDataBoolean_Set(Impl_AppDataBoolean self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.ApplicationData.application

Name of 
application owning the data.
  @param  Impl_AppDataBoolean self
  @param  ApiString value
**/
extern void *Impl_AppDataBoolean_SetApplication(Impl_AppDataBoolean self, ApiString value);

/**
  Set for memops.Implementation.ApplicationData.keyword

keyword or name 
of variable
  @param  Impl_AppDataBoolean self
  @param  ApiString value
**/
extern void *Impl_AppDataBoolean_SetKeyword(Impl_AppDataBoolean self, ApiString value);

/**
  Set for memops.Implementation.AppDataBoolean.value

Data value
  @param  Impl_AppDataBoolean self
  @param  ApiBoolean value
**/
extern void *Impl_AppDataBoolean_SetValue(Impl_AppDataBoolean self, ApiBoolean value);

/**
  Gives a string representation of object
  @param  Impl_AppDataBoolean self
  @returns  
**/
extern ApiString Impl_AppDataBoolean_ToString(Impl_AppDataBoolean self);

#endif /* __incl__memops_api_Implementation_AppDataBoolean_h__ */
