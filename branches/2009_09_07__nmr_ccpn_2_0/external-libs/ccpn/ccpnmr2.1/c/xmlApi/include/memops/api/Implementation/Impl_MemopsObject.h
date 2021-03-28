
#ifndef __incl__memops_api_Implementation_MemopsObject_h__
#define __incl__memops_api_Implementation_MemopsObject_h__

#include "ccp.h"

/*
  Base class for Memops data model classes. 
  Contains elements common to all classes, e.g. the link to ApplicationData, and the root and parent links. 
*/

/* package memops.api.Implementation */

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Impl_MemopsObject self
  @returns   the result
**/
extern ApiString Impl_MemopsObject_GetClassName(Impl_MemopsObject self);

/**
  get expanded (object-free) versio of full key, for comparing objects 
from different trees.
  @param  Impl_MemopsObject self
  @returns  
**/
extern ApiList Impl_MemopsObject_GetExpandedKey(Impl_MemopsObject self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Impl_MemopsObject self
  @returns   the result
**/
extern ApiList Impl_MemopsObject_GetFieldNames(Impl_MemopsObject self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Impl_MemopsObject self
  @returns   the result
**/
extern ApiBoolean Impl_MemopsObject_GetInConstructor(Impl_MemopsObject self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Impl_MemopsObject self
  @returns   the result
**/
extern ApiBoolean Impl_MemopsObject_GetIsDeleted(Impl_MemopsObject self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Impl_MemopsObject self
  @returns   the result
**/
extern ApiString Impl_MemopsObject_GetPackageName(Impl_MemopsObject self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Impl_MemopsObject self
  @returns   the result
**/
extern ApiString Impl_MemopsObject_GetPackageShortName(Impl_MemopsObject self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Impl_MemopsObject self
  @returns   the result
**/
extern ApiString Impl_MemopsObject_GetQualifiedName(Impl_MemopsObject self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Impl_MemopsObject self
  @returns   the result
**/
extern Impl_MemopsRoot Impl_MemopsObject_GetRoot(Impl_MemopsObject self);

/**
  Gives a string representation of object
  @param  Impl_MemopsObject self
  @returns  
**/
extern ApiString Impl_MemopsObject_ToString(Impl_MemopsObject self);

#endif /* __incl__memops_api_Implementation_MemopsObject_h__ */
