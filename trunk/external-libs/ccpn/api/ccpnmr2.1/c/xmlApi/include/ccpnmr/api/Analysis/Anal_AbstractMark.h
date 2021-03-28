
#ifndef __incl__ccpnmr_api_Analysis_AbstractMark_h__
#define __incl__ccpnmr_api_Analysis_AbstractMark_h__

#include "ccp.h"

/*
  Graphical mark comprised of lines, either Ruler or Mark
*/

/* package ccpnmr.api.Analysis */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AbstractMark self
  @param  Impl_ApplicationData value
**/
extern void *Anal_AbstractMark_AddApplicationData(Anal_AbstractMark self, Impl_ApplicationData value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AbstractMark self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_AbstractMark_FindAllApplicationData(Anal_AbstractMark self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AbstractMark self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_AbstractMark_FindAllApplicationData_keyval0(Anal_AbstractMark self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AbstractMark self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_AbstractMark_FindAllApplicationData_keyval1(Anal_AbstractMark self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AbstractMark self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_AbstractMark_FindAllApplicationData_keyval2(Anal_AbstractMark self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AbstractMark self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_AbstractMark_FindAllApplicationData_keyval3(Anal_AbstractMark self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AbstractMark self
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
extern ApiList Anal_AbstractMark_FindAllApplicationData_keyval4(Anal_AbstractMark self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AbstractMark self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_AbstractMark_FindFirstApplicationData(Anal_AbstractMark self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AbstractMark self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_AbstractMark_FindFirstApplicationData_keyval0(Anal_AbstractMark self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AbstractMark self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_AbstractMark_FindFirstApplicationData_keyval1(Anal_AbstractMark self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AbstractMark self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_AbstractMark_FindFirstApplicationData_keyval2(Anal_AbstractMark self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AbstractMark self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_AbstractMark_FindFirstApplicationData_keyval3(Anal_AbstractMark self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AbstractMark self
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
extern Impl_ApplicationData Anal_AbstractMark_FindFirstApplicationData_keyval4(Anal_AbstractMark self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_AbstractMark self
  @returns   the result
**/
extern Acco_AccessObject Anal_AbstractMark_GetAccess(Anal_AbstractMark self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Anal_AbstractMark self
  @returns   the result
**/
extern Acco_AccessObject Anal_AbstractMark_GetActiveAccess(Anal_AbstractMark self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AbstractMark self
  @returns   the result
**/
extern ApiList Anal_AbstractMark_GetApplicationData(Anal_AbstractMark self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Anal_AbstractMark self
  @returns   the result
**/
extern ApiString Anal_AbstractMark_GetClassName(Anal_AbstractMark self);

/**
  Get for ccpnmr.Analysis.AbstractMark.dashLength

For dashed line - 
length of dash part in arbitrary units (scale handled by program).
  @param  Anal_AbstractMark self
  @returns   the result
**/
extern ApiInteger Anal_AbstractMark_GetDashLength(Anal_AbstractMark self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Anal_AbstractMark self
  @returns   the result
**/
extern ApiList Anal_AbstractMark_GetFieldNames(Anal_AbstractMark self);

/**
  Get for ccpnmr.Analysis.AbstractMark.gapLength

Length of gap in dashed 
line - handled as for dashLength
  @param  Anal_AbstractMark self
  @returns   the result
**/
extern ApiInteger Anal_AbstractMark_GetGapLength(Anal_AbstractMark self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Anal_AbstractMark self
  @returns   the result
**/
extern ApiBoolean Anal_AbstractMark_GetInConstructor(Anal_AbstractMark self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Anal_AbstractMark self
  @returns   the result
**/
extern ApiBoolean Anal_AbstractMark_GetIsDeleted(Anal_AbstractMark self);

/**
  Get for ccpnmr.Analysis.AbstractMark.lineWidth

Width of line in 
arbitrary units, handled as for dashLength.
  @param  Anal_AbstractMark self
  @returns   the result
**/
extern ApiFloat Anal_AbstractMark_GetLineWidth(Anal_AbstractMark self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Anal_AbstractMark self
  @returns   the result
**/
extern ApiString Anal_AbstractMark_GetPackageName(Anal_AbstractMark self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Anal_AbstractMark self
  @returns   the result
**/
extern ApiString Anal_AbstractMark_GetPackageShortName(Anal_AbstractMark self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Anal_AbstractMark self
  @returns   the result
**/
extern ApiString Anal_AbstractMark_GetQualifiedName(Anal_AbstractMark self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Anal_AbstractMark self
  @returns   the result
**/
extern Impl_MemopsRoot Anal_AbstractMark_GetRoot(Anal_AbstractMark self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Anal_AbstractMark self
  @returns   the result
**/
extern Impl_TopObject Anal_AbstractMark_GetTopObject(Anal_AbstractMark self);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AbstractMark self
  @param  Impl_ApplicationData value
**/
extern void *Anal_AbstractMark_RemoveApplicationData(Anal_AbstractMark self, Impl_ApplicationData value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_AbstractMark self
  @param  Acco_AccessObject value
**/
extern void *Anal_AbstractMark_SetAccess(Anal_AbstractMark self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AbstractMark self
  @param  ApiList values
**/
extern void *Anal_AbstractMark_SetApplicationData(Anal_AbstractMark self, ApiList values);

/**
  Set for ccpnmr.Analysis.AbstractMark.dashLength

For dashed line - 
length of dash part in arbitrary units (scale handled by program).
  @param  Anal_AbstractMark self
  @param  ApiInteger value
**/
extern void *Anal_AbstractMark_SetDashLength(Anal_AbstractMark self, ApiInteger value);

/**
  Set for ccpnmr.Analysis.AbstractMark.gapLength

Length of gap in dashed 
line - handled as for dashLength
  @param  Anal_AbstractMark self
  @param  ApiInteger value
**/
extern void *Anal_AbstractMark_SetGapLength(Anal_AbstractMark self, ApiInteger value);

/**
  Set for ccpnmr.Analysis.AbstractMark.lineWidth

Width of line in 
arbitrary units, handled as for dashLength.
  @param  Anal_AbstractMark self
  @param  ApiFloat value
**/
extern void *Anal_AbstractMark_SetLineWidth(Anal_AbstractMark self, ApiFloat value);

#endif /* __incl__ccpnmr_api_Analysis_AbstractMark_h__ */
