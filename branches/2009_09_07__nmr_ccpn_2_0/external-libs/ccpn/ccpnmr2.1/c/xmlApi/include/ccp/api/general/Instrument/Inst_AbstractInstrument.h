
#ifndef __incl__ccp_api_general_Instrument_AbstractInstrument_h__
#define __incl__ccp_api_general_Instrument_AbstractInstrument_h__

#include "ccp.h"

/*
  The details about the instrument system used to collect data for this experiment.
*/

/* package ccp.api.general.Instrument */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_AbstractInstrument self
  @param  Impl_ApplicationData value
**/
extern void *Inst_AbstractInstrument_AddApplicationData(Inst_AbstractInstrument self, Impl_ApplicationData value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_AbstractInstrument self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Inst_AbstractInstrument_FindAllApplicationData(Inst_AbstractInstrument self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_AbstractInstrument self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Inst_AbstractInstrument_FindAllApplicationData_keyval0(Inst_AbstractInstrument self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_AbstractInstrument self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Inst_AbstractInstrument_FindAllApplicationData_keyval1(Inst_AbstractInstrument self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_AbstractInstrument self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Inst_AbstractInstrument_FindAllApplicationData_keyval2(Inst_AbstractInstrument self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_AbstractInstrument self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Inst_AbstractInstrument_FindAllApplicationData_keyval3(Inst_AbstractInstrument self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_AbstractInstrument self
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
extern ApiList Inst_AbstractInstrument_FindAllApplicationData_keyval4(Inst_AbstractInstrument self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_AbstractInstrument self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Inst_AbstractInstrument_FindFirstApplicationData(Inst_AbstractInstrument self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_AbstractInstrument self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Inst_AbstractInstrument_FindFirstApplicationData_keyval0(Inst_AbstractInstrument self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_AbstractInstrument self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Inst_AbstractInstrument_FindFirstApplicationData_keyval1(Inst_AbstractInstrument self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_AbstractInstrument self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Inst_AbstractInstrument_FindFirstApplicationData_keyval2(Inst_AbstractInstrument self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_AbstractInstrument self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Inst_AbstractInstrument_FindFirstApplicationData_keyval3(Inst_AbstractInstrument self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_AbstractInstrument self
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
extern Impl_ApplicationData Inst_AbstractInstrument_FindFirstApplicationData_keyval4(Inst_AbstractInstrument self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Inst_AbstractInstrument self
  @returns   the result
**/
extern Acco_AccessObject Inst_AbstractInstrument_GetAccess(Inst_AbstractInstrument self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Inst_AbstractInstrument self
  @returns   the result
**/
extern Acco_AccessObject Inst_AbstractInstrument_GetActiveAccess(Inst_AbstractInstrument self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_AbstractInstrument self
  @returns   the result
**/
extern ApiList Inst_AbstractInstrument_GetApplicationData(Inst_AbstractInstrument self);

/**
  GetByKey for ccp.general.Instrument.AbstractInstrument
  @param  Inst_AbstractInstrument self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Inst_AbstractInstrument Inst_AbstractInstrument_GetByKey(Inst_AbstractInstrument self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Inst_AbstractInstrument self
  @returns   the result
**/
extern ApiString Inst_AbstractInstrument_GetClassName(Inst_AbstractInstrument self);

/**
  Get for ccp.general.Instrument.AbstractInstrument.contactPerson

This is 
the contact person in the company.
  @param  Inst_AbstractInstrument self
  @returns   the result
**/
extern Affi_Person Inst_AbstractInstrument_GetContactPerson(Inst_AbstractInstrument self);

/**
  Get for ccp.general.Instrument.AbstractInstrument.details

Free text, 
for notes, explanatory comments, etc.
  @param  Inst_AbstractInstrument self
  @returns   the result
**/
extern ApiString Inst_AbstractInstrument_GetDetails(Inst_AbstractInstrument self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Inst_AbstractInstrument self
  @returns   the result
**/
extern ApiList Inst_AbstractInstrument_GetFieldNames(Inst_AbstractInstrument self);

/**
  GetFullKey for ccp.general.Instrument.AbstractInstrument
  @param  Inst_AbstractInstrument self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Inst_AbstractInstrument_GetFullKey(Inst_AbstractInstrument self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Inst_AbstractInstrument self
  @returns   the result
**/
extern ApiBoolean Inst_AbstractInstrument_GetInConstructor(Inst_AbstractInstrument self);

/**
  Get for 
ccp.general.Instrument.AbstractInstrument.instrumentStore

parent link
  @param  Inst_AbstractInstrument self
  @returns   the result
**/
extern Inst_InstrumentStore Inst_AbstractInstrument_GetInstrumentStore(Inst_AbstractInstrument self);

/**
  Get for ccp.general.Instrument.AbstractInstrument.instrumentType

The 
type of the instrument. Should be an open enumeration.
  @param  Inst_AbstractInstrument self
  @returns   the result
**/
extern ApiString Inst_AbstractInstrument_GetInstrumentType(Inst_AbstractInstrument self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Inst_AbstractInstrument self
  @returns   the result
**/
extern ApiBoolean Inst_AbstractInstrument_GetIsDeleted(Inst_AbstractInstrument self);

/**
  GetLocalKey for ccp.general.Instrument.AbstractInstrument
  @param  Inst_AbstractInstrument self
  @returns  Local object key
**/
extern ApiObject Inst_AbstractInstrument_GetLocalKey(Inst_AbstractInstrument self);

/**
  Get for ccp.general.Instrument.AbstractInstrument.manufacturer

The name 
of the manufacturer of the instrument.
  @param  Inst_AbstractInstrument self
  @returns   the result
**/
extern Affi_Organisation Inst_AbstractInstrument_GetManufacturer(Inst_AbstractInstrument self);

/**
  Get for ccp.general.Instrument.AbstractInstrument.model

The model of 
the instrument.
  @param  Inst_AbstractInstrument self
  @returns   the result
**/
extern ApiString Inst_AbstractInstrument_GetModel(Inst_AbstractInstrument self);

/**
  Get for ccp.general.Instrument.AbstractInstrument.name

The name of the 
instrument.
  @param  Inst_AbstractInstrument self
  @returns   the result
**/
extern ApiString Inst_AbstractInstrument_GetName(Inst_AbstractInstrument self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Inst_AbstractInstrument self
  @returns   the result
**/
extern ApiString Inst_AbstractInstrument_GetPackageName(Inst_AbstractInstrument self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Inst_AbstractInstrument self
  @returns   the result
**/
extern ApiString Inst_AbstractInstrument_GetPackageShortName(Inst_AbstractInstrument self);

/**
  Get for ccp.general.Instrument.AbstractInstrument.parent

link to parent 
object - synonym for instrumentStore
  @param  Inst_AbstractInstrument self
  @returns   the result
**/
extern Inst_InstrumentStore Inst_AbstractInstrument_GetParent(Inst_AbstractInstrument self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Inst_AbstractInstrument self
  @returns   the result
**/
extern ApiString Inst_AbstractInstrument_GetQualifiedName(Inst_AbstractInstrument self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Inst_AbstractInstrument self
  @returns   the result
**/
extern Impl_MemopsRoot Inst_AbstractInstrument_GetRoot(Inst_AbstractInstrument self);

/**
  Get for ccp.general.Instrument.AbstractInstrument.serial

Serial number 
of object. Serves as object main key. Serial numbers of deleted objects 
are not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Inst_AbstractInstrument self
  @returns   the result
**/
extern ApiInteger Inst_AbstractInstrument_GetSerial(Inst_AbstractInstrument self);

/**
  Get for 
ccp.general.Instrument.AbstractInstrument.serialNumber

Instrument 
'serial number'. A string that uniquely identifies a given instrument.
  @param  Inst_AbstractInstrument self
  @returns   the result
**/
extern ApiString Inst_AbstractInstrument_GetSerialNumber(Inst_AbstractInstrument self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Inst_AbstractInstrument self
  @returns   the result
**/
extern Impl_TopObject Inst_AbstractInstrument_GetTopObject(Inst_AbstractInstrument self);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_AbstractInstrument self
  @param  Impl_ApplicationData value
**/
extern void *Inst_AbstractInstrument_RemoveApplicationData(Inst_AbstractInstrument self, Impl_ApplicationData value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Inst_AbstractInstrument self
  @param  Acco_AccessObject value
**/
extern void *Inst_AbstractInstrument_SetAccess(Inst_AbstractInstrument self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_AbstractInstrument self
  @param  ApiList values
**/
extern void *Inst_AbstractInstrument_SetApplicationData(Inst_AbstractInstrument self, ApiList values);

/**
  Set for ccp.general.Instrument.AbstractInstrument.contactPerson

This is 
the contact person in the company.
  @param  Inst_AbstractInstrument self
  @param  Affi_Person value
**/
extern void *Inst_AbstractInstrument_SetContactPerson(Inst_AbstractInstrument self, Affi_Person value);

/**
  Set for ccp.general.Instrument.AbstractInstrument.details

Free text, 
for notes, explanatory comments, etc.
  @param  Inst_AbstractInstrument self
  @param  ApiString value
**/
extern void *Inst_AbstractInstrument_SetDetails(Inst_AbstractInstrument self, ApiString value);

/**
  Set for ccp.general.Instrument.AbstractInstrument.instrumentType

The 
type of the instrument. Should be an open enumeration.
  @param  Inst_AbstractInstrument self
  @param  ApiString value
**/
extern void *Inst_AbstractInstrument_SetInstrumentType(Inst_AbstractInstrument self, ApiString value);

/**
  Set for ccp.general.Instrument.AbstractInstrument.manufacturer

The name 
of the manufacturer of the instrument.
  @param  Inst_AbstractInstrument self
  @param  Affi_Organisation value
**/
extern void *Inst_AbstractInstrument_SetManufacturer(Inst_AbstractInstrument self, Affi_Organisation value);

/**
  Set for ccp.general.Instrument.AbstractInstrument.model

The model of 
the instrument.
  @param  Inst_AbstractInstrument self
  @param  ApiString value
**/
extern void *Inst_AbstractInstrument_SetModel(Inst_AbstractInstrument self, ApiString value);

/**
  Set for ccp.general.Instrument.AbstractInstrument.name

The name of the 
instrument.
  @param  Inst_AbstractInstrument self
  @param  ApiString value
**/
extern void *Inst_AbstractInstrument_SetName(Inst_AbstractInstrument self, ApiString value);

/**
  Set for ccp.general.Instrument.AbstractInstrument.serial

Serial number 
of object. Serves as object main key. Serial numbers of deleted objects 
are not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Inst_AbstractInstrument self
  @param  ApiInteger value
**/
extern void *Inst_AbstractInstrument_SetSerial(Inst_AbstractInstrument self, ApiInteger value);

/**
  Set for 
ccp.general.Instrument.AbstractInstrument.serialNumber

Instrument 
'serial number'. A string that uniquely identifies a given instrument.
  @param  Inst_AbstractInstrument self
  @param  ApiString value
**/
extern void *Inst_AbstractInstrument_SetSerialNumber(Inst_AbstractInstrument self, ApiString value);

#endif /* __incl__ccp_api_general_Instrument_AbstractInstrument_h__ */
