
#ifndef __incl__ccp_api_nmr_Nmr_Datum_h__
#define __incl__ccp_api_nmr_Nmr_Datum_h__

#include "ccp.h"

/*
  Measurement, possibly derived, not fitting into a predefined type
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Datum self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_Datum_AddApplicationData(Nmr_Datum self, Impl_ApplicationData value);

/**
  Add for ccp.nmr.Nmr.Datum.resonances

Resonances to which measurement 
applies
  @param  Nmr_Datum self
  @param  Nmr_Resonance value
**/
extern void *Nmr_Datum_AddResonance(Nmr_Datum self, Nmr_Resonance value);

/**
  CheckAllValid for ccp.nmr.Nmr.Datum
  @param  Nmr_Datum self
  @param  ApiBoolean complete
**/
extern void *Nmr_Datum_CheckAllValid(Nmr_Datum self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.Nmr.Datum
  @param  Nmr_Datum self
  @param  ApiBoolean complete
**/
extern void *Nmr_Datum_CheckValid(Nmr_Datum self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Datum self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_Datum_FindAllApplicationData(Nmr_Datum self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Datum self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_Datum_FindAllApplicationData_keyval0(Nmr_Datum self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Datum self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_Datum_FindAllApplicationData_keyval1(Nmr_Datum self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Datum self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_Datum_FindAllApplicationData_keyval2(Nmr_Datum self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Datum self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_Datum_FindAllApplicationData_keyval3(Nmr_Datum self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Datum self
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
extern ApiList Nmr_Datum_FindAllApplicationData_keyval4(Nmr_Datum self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.Datum.resonances

Resonances to which 
measurement applies
  @param  Nmr_Datum self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Datum_FindAllResonances(Nmr_Datum self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.Datum.resonances

Resonances to which 
measurement applies
  @param  Nmr_Datum self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Datum_FindAllResonances_keyval0(Nmr_Datum self);

/**
  FindAll for ccp.nmr.Nmr.Datum.resonances

Resonances to which 
measurement applies
  @param  Nmr_Datum self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Datum_FindAllResonances_keyval1(Nmr_Datum self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.Datum.resonances

Resonances to which 
measurement applies
  @param  Nmr_Datum self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Datum_FindAllResonances_keyval2(Nmr_Datum self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.Datum.resonances

Resonances to which 
measurement applies
  @param  Nmr_Datum self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Datum_FindAllResonances_keyval3(Nmr_Datum self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.Datum.resonances

Resonances to which 
measurement applies
  @param  Nmr_Datum self
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
extern ApiSet Nmr_Datum_FindAllResonances_keyval4(Nmr_Datum self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Datum self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_Datum_FindFirstApplicationData(Nmr_Datum self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Datum self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_Datum_FindFirstApplicationData_keyval0(Nmr_Datum self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Datum self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_Datum_FindFirstApplicationData_keyval1(Nmr_Datum self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Datum self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_Datum_FindFirstApplicationData_keyval2(Nmr_Datum self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Datum self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_Datum_FindFirstApplicationData_keyval3(Nmr_Datum self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Datum self
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
extern Impl_ApplicationData Nmr_Datum_FindFirstApplicationData_keyval4(Nmr_Datum self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.Datum.resonances

Resonances to which 
measurement applies
  @param  Nmr_Datum self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Resonance Nmr_Datum_FindFirstResonance(Nmr_Datum self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.Datum.resonances

Resonances to which 
measurement applies
  @param  Nmr_Datum self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Resonance Nmr_Datum_FindFirstResonance_keyval0(Nmr_Datum self);

/**
  FindFirst for ccp.nmr.Nmr.Datum.resonances

Resonances to which 
measurement applies
  @param  Nmr_Datum self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Resonance Nmr_Datum_FindFirstResonance_keyval1(Nmr_Datum self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.Datum.resonances

Resonances to which 
measurement applies
  @param  Nmr_Datum self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Resonance Nmr_Datum_FindFirstResonance_keyval2(Nmr_Datum self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.Datum.resonances

Resonances to which 
measurement applies
  @param  Nmr_Datum self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Resonance Nmr_Datum_FindFirstResonance_keyval3(Nmr_Datum self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.Datum.resonances

Resonances to which 
measurement applies
  @param  Nmr_Datum self
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
extern Nmr_Resonance Nmr_Datum_FindFirstResonance_keyval4(Nmr_Datum self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.Nmr.Datum
  @param  Nmr_Datum self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Nmr_Datum_Get(Nmr_Datum self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_Datum self
  @returns   the result
**/
extern Acco_AccessObject Nmr_Datum_GetAccess(Nmr_Datum self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Nmr_Datum self
  @returns   the result
**/
extern Acco_AccessObject Nmr_Datum_GetActiveAccess(Nmr_Datum self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Datum self
  @returns   the result
**/
extern ApiList Nmr_Datum_GetApplicationData(Nmr_Datum self);

/**
  GetByKey for ccp.nmr.Nmr.Datum
  @param  Nmr_Datum self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Nmr_Datum Nmr_Datum_GetByKey(Nmr_Datum self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Nmr_Datum self
  @returns   the result
**/
extern ApiString Nmr_Datum_GetClassName(Nmr_Datum self);

/**
  Get for ccp.nmr.Nmr.Datum.derivation

parent link
  @param  Nmr_Datum self
  @returns   the result
**/
extern Nmr_DataDerivation Nmr_Datum_GetDerivation(Nmr_Datum self);

/**
  Get for ccp.nmr.Nmr.DerivedData.error

Uncertainty (standard deviation) 
of value
  @param  Nmr_Datum self
  @returns   the result
**/
extern ApiFloat Nmr_Datum_GetError(Nmr_Datum self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Nmr_Datum self
  @returns   the result
**/
extern ApiList Nmr_Datum_GetFieldNames(Nmr_Datum self);

/**
  Get for ccp.nmr.Nmr.DerivedData.figOfMerit

Figure of merit, describing 
the reliability of the value. Between 0.0 (useless) and 1.0 (fully 
reliable, also the default).
  @param  Nmr_Datum self
  @returns   the result
**/
extern ApiFloat Nmr_Datum_GetFigOfMerit(Nmr_Datum self);

/**
  GetFullKey for ccp.nmr.Nmr.Datum
  @param  Nmr_Datum self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Nmr_Datum_GetFullKey(Nmr_Datum self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Nmr_Datum self
  @returns   the result
**/
extern ApiBoolean Nmr_Datum_GetInConstructor(Nmr_Datum self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Nmr_Datum self
  @returns   the result
**/
extern ApiBoolean Nmr_Datum_GetIsDeleted(Nmr_Datum self);

/**
  GetLocalKey for ccp.nmr.Nmr.Datum
  @param  Nmr_Datum self
  @returns  Local object key
**/
extern ApiObject Nmr_Datum_GetLocalKey(Nmr_Datum self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Nmr_Datum self
  @returns   the result
**/
extern ApiString Nmr_Datum_GetPackageName(Nmr_Datum self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Nmr_Datum self
  @returns   the result
**/
extern ApiString Nmr_Datum_GetPackageShortName(Nmr_Datum self);

/**
  Get for ccp.nmr.Nmr.Datum.parent

link to parent object - synonym for 
derivation
  @param  Nmr_Datum self
  @returns   the result
**/
extern Nmr_DataDerivation Nmr_Datum_GetParent(Nmr_Datum self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Nmr_Datum self
  @returns   the result
**/
extern ApiString Nmr_Datum_GetQualifiedName(Nmr_Datum self);

/**
  Get for ccp.nmr.Nmr.Datum.resonances

Resonances to which measurement 
applies
  @param  Nmr_Datum self
  @returns   the result
**/
extern ApiSet Nmr_Datum_GetResonances(Nmr_Datum self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Nmr_Datum self
  @returns   the result
**/
extern Impl_MemopsRoot Nmr_Datum_GetRoot(Nmr_Datum self);

/**
  Get for ccp.nmr.Nmr.DerivedData.serial

Serial number of object. Serves 
as object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Nmr_Datum self
  @returns   the result
**/
extern ApiInteger Nmr_Datum_GetSerial(Nmr_Datum self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Nmr_Datum self
  @returns   the result
**/
extern Impl_TopObject Nmr_Datum_GetTopObject(Nmr_Datum self);

/**
  Get for ccp.nmr.Nmr.DerivedData.value

Value of derived measurement.
  @param  Nmr_Datum self
  @returns   the result
**/
extern ApiFloat Nmr_Datum_GetValue(Nmr_Datum self);

/**
  Constructor for ccp.nmr.Nmr.Datum
  @param  Nmr_DataDerivation parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmr_Datum Nmr_Datum_Init(Nmr_DataDerivation parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.Nmr.Datum
  @param  Nmr_DataDerivation parent
  @returns  the new object
**/
extern Nmr_Datum Nmr_Datum_Init_reqd(Nmr_DataDerivation parent);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Datum self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_Datum_RemoveApplicationData(Nmr_Datum self, Impl_ApplicationData value);

/**
  Remove for ccp.nmr.Nmr.Datum.resonances

Resonances to which measurement 
applies
  @param  Nmr_Datum self
  @param  Nmr_Resonance value
**/
extern void *Nmr_Datum_RemoveResonance(Nmr_Datum self, Nmr_Resonance value);

/**
  SetAttr for ccp.nmr.Nmr.Datum
  @param  Nmr_Datum self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Nmr_Datum_Set(Nmr_Datum self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_Datum self
  @param  Acco_AccessObject value
**/
extern void *Nmr_Datum_SetAccess(Nmr_Datum self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Datum self
  @param  ApiList values
**/
extern void *Nmr_Datum_SetApplicationData(Nmr_Datum self, ApiList values);

/**
  Set for ccp.nmr.Nmr.DerivedData.error

Uncertainty (standard deviation) 
of value
  @param  Nmr_Datum self
  @param  ApiFloat value
**/
extern void *Nmr_Datum_SetError(Nmr_Datum self, ApiFloat value);

/**
  Set for ccp.nmr.Nmr.DerivedData.figOfMerit

Figure of merit, describing 
the reliability of the value. Between 0.0 (useless) and 1.0 (fully 
reliable, also the default).
  @param  Nmr_Datum self
  @param  ApiFloat value
**/
extern void *Nmr_Datum_SetFigOfMerit(Nmr_Datum self, ApiFloat value);

/**
  Set for ccp.nmr.Nmr.Datum.resonances

Resonances to which measurement 
applies
  @param  Nmr_Datum self
  @param  ApiSet values
**/
extern void *Nmr_Datum_SetResonances(Nmr_Datum self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.DerivedData.serial

Serial number of object. Serves 
as object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Nmr_Datum self
  @param  ApiInteger value
**/
extern void *Nmr_Datum_SetSerial(Nmr_Datum self, ApiInteger value);

/**
  Set for ccp.nmr.Nmr.DerivedData.value

Value of derived measurement.
  @param  Nmr_Datum self
  @param  ApiFloat value
**/
extern void *Nmr_Datum_SetValue(Nmr_Datum self, ApiFloat value);

/**
  Sorted for ccp.nmr.Nmr.Datum.resonances

Resonances to which measurement 
applies
  @param  Nmr_Datum self
  @returns   the result
**/
extern ApiList Nmr_Datum_SortedResonances(Nmr_Datum self);

#endif /* __incl__ccp_api_nmr_Nmr_Datum_h__ */
