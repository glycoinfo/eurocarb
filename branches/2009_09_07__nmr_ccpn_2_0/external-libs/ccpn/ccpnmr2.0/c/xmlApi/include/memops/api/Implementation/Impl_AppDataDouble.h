
#ifndef __incl__memops_api_Implementation_AppDataDouble_h__
#define __incl__memops_api_Implementation_AppDataDouble_h__

#include "ccp.h"

/*
  Double type application data.
*/

/* package memops.api.Implementation */

/**
  CheckAllValid for memops.Implementation.AppDataDouble
  @param  Impl_AppDataDouble self
  @param  ApiBoolean complete
**/
extern void *Impl_AppDataDouble_CheckAllValid(Impl_AppDataDouble self, ApiBoolean complete);

/**
  CheckValid for memops.Implementation.AppDataDouble
  @param  Impl_AppDataDouble self
  @param  ApiBoolean complete
**/
extern void *Impl_AppDataDouble_CheckValid(Impl_AppDataDouble self, ApiBoolean complete);

/**
  GetAttr for memops.Implementation.AppDataDouble
  @param  Impl_AppDataDouble self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Impl_AppDataDouble_Get(Impl_AppDataDouble self, ApiString name);

/**
  Get for memops.Implementation.ApplicationData.application

Name of 
application owning the data.
  @param  Impl_AppDataDouble self
  @returns   the result
**/
extern ApiString Impl_AppDataDouble_GetApplication(Impl_AppDataDouble self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Impl_AppDataDouble self
  @returns   the result
**/
extern ApiString Impl_AppDataDouble_GetClassName(Impl_AppDataDouble self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Impl_AppDataDouble self
  @returns   the result
**/
extern ApiList Impl_AppDataDouble_GetFieldNames(Impl_AppDataDouble self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Impl_AppDataDouble self
  @returns   the result
**/
extern ApiBoolean Impl_AppDataDouble_GetInConstructor(Impl_AppDataDouble self);

/**
  Get for memops.Implementation.ApplicationData.keyword

keyword or name 
of variable
  @param  Impl_AppDataDouble self
  @returns   the result
**/
extern ApiString Impl_AppDataDouble_GetKeyword(Impl_AppDataDouble self);

/**
  Get for memops.Implementation.MemopsDataTypeObject.override

Overrride 
switch for DataObjType. Works like MemopsRoot.override, but only for the 
object itself. If set to True on creation must be reset to False 
explicitly later. Once set to False can only be reset to True by 
bypassing the API.
  @param  Impl_AppDataDouble self
  @returns   the result
**/
extern ApiBoolean Impl_AppDataDouble_GetOverride(Impl_AppDataDouble self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Impl_AppDataDouble self
  @returns   the result
**/
extern ApiString Impl_AppDataDouble_GetPackageName(Impl_AppDataDouble self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Impl_AppDataDouble self
  @returns   the result
**/
extern ApiString Impl_AppDataDouble_GetPackageShortName(Impl_AppDataDouble self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Impl_AppDataDouble self
  @returns   the result
**/
extern ApiString Impl_AppDataDouble_GetQualifiedName(Impl_AppDataDouble self);

/**
  Get for memops.Implementation.AppDataDouble.value

Data value
  @param  Impl_AppDataDouble self
  @returns   the result
**/
extern ApiDouble Impl_AppDataDouble_GetValue(Impl_AppDataDouble self);

/**
  Constructor for memops.Implementation.AppDataDouble
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Impl_AppDataDouble Impl_AppDataDouble_Init(ApiMap attrlinks);

/**
  Constructor for memops.Implementation.AppDataDouble
  @param  char * application
  @param  char * keyword
  @param  double value
  @returns  the new object
**/
extern Impl_AppDataDouble Impl_AppDataDouble_Init_reqd(char * application, char * keyword, double value);

/**
  SetAttr for memops.Implementation.AppDataDouble
  @param  Impl_AppDataDouble self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Impl_AppDataDouble_Set(Impl_AppDataDouble self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.ApplicationData.application

Name of 
application owning the data.
  @param  Impl_AppDataDouble self
  @param  ApiString value
**/
extern void *Impl_AppDataDouble_SetApplication(Impl_AppDataDouble self, ApiString value);

/**
  Set for memops.Implementation.ApplicationData.keyword

keyword or name 
of variable
  @param  Impl_AppDataDouble self
  @param  ApiString value
**/
extern void *Impl_AppDataDouble_SetKeyword(Impl_AppDataDouble self, ApiString value);

/**
  Set for memops.Implementation.AppDataDouble.value

Data value
  @param  Impl_AppDataDouble self
  @param  ApiDouble value
**/
extern void *Impl_AppDataDouble_SetValue(Impl_AppDataDouble self, ApiDouble value);

/**
  Gives a string representation of object
  @param  Impl_AppDataDouble self
  @returns  
**/
extern ApiString Impl_AppDataDouble_ToString(Impl_AppDataDouble self);

#endif /* __incl__memops_api_Implementation_AppDataDouble_h__ */
