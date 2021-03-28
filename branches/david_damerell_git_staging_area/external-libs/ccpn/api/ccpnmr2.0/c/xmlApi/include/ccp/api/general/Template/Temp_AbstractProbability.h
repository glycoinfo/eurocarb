
#ifndef __incl__ccp_api_general_Template_AbstractProbability_h__
#define __incl__ccp_api_general_Template_AbstractProbability_h__

#include "ccp.h"

/*
  Abstract class defining classes used for probability lists. AbstractProbability objects have a parent that is the object that has the probability (e.g. a ResonanceGroup), a link 'possibility' to various possibilities (e.g. a ChemComp), and a weight to determine their relative probability. Probabilities are calculated by taking the weight of each AbstractProbability object and dividing by the sum of the weights in the (appropriate subset of) AbstractProbability objects linked to a given parent. 
  
  Implementation note: The presence of the 'possibility' link must be enforced by the data modeller, as it is not checked by the software. 
*/

/* package ccp.api.general.Template */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Temp_AbstractProbability self
  @param  Impl_ApplicationData value
**/
extern void *Temp_AbstractProbability_AddApplicationData(Temp_AbstractProbability self, Impl_ApplicationData value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Temp_AbstractProbability self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Temp_AbstractProbability_FindAllApplicationData(Temp_AbstractProbability self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Temp_AbstractProbability self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Temp_AbstractProbability_FindAllApplicationData_keyval0(Temp_AbstractProbability self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Temp_AbstractProbability self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Temp_AbstractProbability_FindAllApplicationData_keyval1(Temp_AbstractProbability self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Temp_AbstractProbability self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Temp_AbstractProbability_FindAllApplicationData_keyval2(Temp_AbstractProbability self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Temp_AbstractProbability self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Temp_AbstractProbability_FindAllApplicationData_keyval3(Temp_AbstractProbability self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Temp_AbstractProbability self
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
extern ApiList Temp_AbstractProbability_FindAllApplicationData_keyval4(Temp_AbstractProbability self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Temp_AbstractProbability self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Temp_AbstractProbability_FindFirstApplicationData(Temp_AbstractProbability self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Temp_AbstractProbability self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Temp_AbstractProbability_FindFirstApplicationData_keyval0(Temp_AbstractProbability self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Temp_AbstractProbability self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Temp_AbstractProbability_FindFirstApplicationData_keyval1(Temp_AbstractProbability self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Temp_AbstractProbability self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Temp_AbstractProbability_FindFirstApplicationData_keyval2(Temp_AbstractProbability self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Temp_AbstractProbability self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Temp_AbstractProbability_FindFirstApplicationData_keyval3(Temp_AbstractProbability self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Temp_AbstractProbability self
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
extern Impl_ApplicationData Temp_AbstractProbability_FindFirstApplicationData_keyval4(Temp_AbstractProbability self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Temp_AbstractProbability self
  @returns   the result
**/
extern Acco_AccessObject Temp_AbstractProbability_GetAccess(Temp_AbstractProbability self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Temp_AbstractProbability self
  @returns   the result
**/
extern ApiList Temp_AbstractProbability_GetApplicationData(Temp_AbstractProbability self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Temp_AbstractProbability self
  @returns   the result
**/
extern ApiString Temp_AbstractProbability_GetClassName(Temp_AbstractProbability self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Temp_AbstractProbability self
  @returns   the result
**/
extern ApiList Temp_AbstractProbability_GetFieldNames(Temp_AbstractProbability self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Temp_AbstractProbability self
  @returns   the result
**/
extern ApiBoolean Temp_AbstractProbability_GetInConstructor(Temp_AbstractProbability self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Temp_AbstractProbability self
  @returns   the result
**/
extern ApiBoolean Temp_AbstractProbability_GetIsDeleted(Temp_AbstractProbability self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Temp_AbstractProbability self
  @returns   the result
**/
extern ApiString Temp_AbstractProbability_GetPackageName(Temp_AbstractProbability self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Temp_AbstractProbability self
  @returns   the result
**/
extern ApiString Temp_AbstractProbability_GetPackageShortName(Temp_AbstractProbability self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Temp_AbstractProbability self
  @returns   the result
**/
extern ApiString Temp_AbstractProbability_GetQualifiedName(Temp_AbstractProbability self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Temp_AbstractProbability self
  @returns   the result
**/
extern Impl_MemopsRoot Temp_AbstractProbability_GetRoot(Temp_AbstractProbability self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Temp_AbstractProbability self
  @returns   the result
**/
extern Impl_TopObject Temp_AbstractProbability_GetTopObject(Temp_AbstractProbability self);

/**
  Get for ccp.general.Template.AbstractProbability.weight

weight (= 
non-normalised probability) that the parent is associated with this 
particular possibility.
  @param  Temp_AbstractProbability self
  @returns   the result
**/
extern ApiFloat Temp_AbstractProbability_GetWeight(Temp_AbstractProbability self);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Temp_AbstractProbability self
  @param  Impl_ApplicationData value
**/
extern void *Temp_AbstractProbability_RemoveApplicationData(Temp_AbstractProbability self, Impl_ApplicationData value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Temp_AbstractProbability self
  @param  Acco_AccessObject value
**/
extern void *Temp_AbstractProbability_SetAccess(Temp_AbstractProbability self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Temp_AbstractProbability self
  @param  ApiList values
**/
extern void *Temp_AbstractProbability_SetApplicationData(Temp_AbstractProbability self, ApiList values);

/**
  Set for ccp.general.Template.AbstractProbability.weight

weight (= 
non-normalised probability) that the parent is associated with this 
particular possibility.
  @param  Temp_AbstractProbability self
  @param  ApiFloat value
**/
extern void *Temp_AbstractProbability_SetWeight(Temp_AbstractProbability self, ApiFloat value);

#endif /* __incl__ccp_api_general_Template_AbstractProbability_h__ */
