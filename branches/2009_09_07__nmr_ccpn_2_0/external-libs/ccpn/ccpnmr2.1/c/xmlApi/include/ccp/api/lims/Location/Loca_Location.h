
#ifndef __incl__ccp_api_lims_Location_Location_h__
#define __incl__ccp_api_lims_Location_Location_h__

#include "ccp.h"

/*
  The information on a laboratory location used for storage.
*/

/* package ccp.api.lims.Location */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Loca_Location self
  @param  Impl_ApplicationData value
**/
extern void *Loca_Location_AddApplicationData(Loca_Location self, Impl_ApplicationData value);

/**
  Add for ccp.lims.Location.Location.contents

List of sub location 
contained in another location. This is the contents of a Location.
  @param  Loca_Location self
  @param  Loca_Location value
**/
extern void *Loca_Location_AddContent(Loca_Location self, Loca_Location value);

/**
  CheckAllValid for ccp.lims.Location.Location
  @param  Loca_Location self
  @param  ApiBoolean complete
**/
extern void *Loca_Location_CheckAllValid(Loca_Location self, ApiBoolean complete);

/**
  CheckValid for ccp.lims.Location.Location
  @param  Loca_Location self
  @param  ApiBoolean complete
**/
extern void *Loca_Location_CheckValid(Loca_Location self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Loca_Location self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Loca_Location_FindAllApplicationData(Loca_Location self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Loca_Location self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Loca_Location_FindAllApplicationData_keyval0(Loca_Location self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Loca_Location self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Loca_Location_FindAllApplicationData_keyval1(Loca_Location self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Loca_Location self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Loca_Location_FindAllApplicationData_keyval2(Loca_Location self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Loca_Location self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Loca_Location_FindAllApplicationData_keyval3(Loca_Location self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Loca_Location self
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
extern ApiList Loca_Location_FindAllApplicationData_keyval4(Loca_Location self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.Location.Location.contents

List of sub location 
contained in another location. This is the contents of a Location.
  @param  Loca_Location self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Loca_Location_FindAllContents(Loca_Location self, ApiMap conditions);

/**
  FindAll for ccp.lims.Location.Location.contents

List of sub location 
contained in another location. This is the contents of a Location.
  @param  Loca_Location self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Loca_Location_FindAllContents_keyval0(Loca_Location self);

/**
  FindAll for ccp.lims.Location.Location.contents

List of sub location 
contained in another location. This is the contents of a Location.
  @param  Loca_Location self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Loca_Location_FindAllContents_keyval1(Loca_Location self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.Location.Location.contents

List of sub location 
contained in another location. This is the contents of a Location.
  @param  Loca_Location self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Loca_Location_FindAllContents_keyval2(Loca_Location self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.Location.Location.contents

List of sub location 
contained in another location. This is the contents of a Location.
  @param  Loca_Location self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Loca_Location_FindAllContents_keyval3(Loca_Location self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.Location.Location.contents

List of sub location 
contained in another location. This is the contents of a Location.
  @param  Loca_Location self
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
extern ApiSet Loca_Location_FindAllContents_keyval4(Loca_Location self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.Location.Location.holderLocations

List over time 
of occupancy for a given location.
  @param  Loca_Location self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Loca_Location_FindAllHolderLocations(Loca_Location self, ApiMap conditions);

/**
  FindAll for ccp.lims.Location.Location.holderLocations

List over time 
of occupancy for a given location.
  @param  Loca_Location self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Loca_Location_FindAllHolderLocations_keyval0(Loca_Location self);

/**
  FindAll for ccp.lims.Location.Location.holderLocations

List over time 
of occupancy for a given location.
  @param  Loca_Location self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Loca_Location_FindAllHolderLocations_keyval1(Loca_Location self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.Location.Location.holderLocations

List over time 
of occupancy for a given location.
  @param  Loca_Location self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Loca_Location_FindAllHolderLocations_keyval2(Loca_Location self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.Location.Location.holderLocations

List over time 
of occupancy for a given location.
  @param  Loca_Location self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Loca_Location_FindAllHolderLocations_keyval3(Loca_Location self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.Location.Location.holderLocations

List over time 
of occupancy for a given location.
  @param  Loca_Location self
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
extern ApiSet Loca_Location_FindAllHolderLocations_keyval4(Loca_Location self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Loca_Location self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Loca_Location_FindFirstApplicationData(Loca_Location self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Loca_Location self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Loca_Location_FindFirstApplicationData_keyval0(Loca_Location self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Loca_Location self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Loca_Location_FindFirstApplicationData_keyval1(Loca_Location self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Loca_Location self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Loca_Location_FindFirstApplicationData_keyval2(Loca_Location self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Loca_Location self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Loca_Location_FindFirstApplicationData_keyval3(Loca_Location self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Loca_Location self
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
extern Impl_ApplicationData Loca_Location_FindFirstApplicationData_keyval4(Loca_Location self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.lims.Location.Location.contents

List of sub location 
contained in another location. This is the contents of a Location.
  @param  Loca_Location self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Loca_Location Loca_Location_FindFirstContent(Loca_Location self, ApiMap conditions);

/**
  FindFirst for ccp.lims.Location.Location.contents

List of sub location 
contained in another location. This is the contents of a Location.
  @param  Loca_Location self
  @returns  the first value that satisfies the conditions 
**/
extern Loca_Location Loca_Location_FindFirstContent_keyval0(Loca_Location self);

/**
  FindFirst for ccp.lims.Location.Location.contents

List of sub location 
contained in another location. This is the contents of a Location.
  @param  Loca_Location self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Loca_Location Loca_Location_FindFirstContent_keyval1(Loca_Location self, char * key, ApiObject value);

/**
  FindFirst for ccp.lims.Location.Location.contents

List of sub location 
contained in another location. This is the contents of a Location.
  @param  Loca_Location self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Loca_Location Loca_Location_FindFirstContent_keyval2(Loca_Location self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.lims.Location.Location.contents

List of sub location 
contained in another location. This is the contents of a Location.
  @param  Loca_Location self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Loca_Location Loca_Location_FindFirstContent_keyval3(Loca_Location self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.lims.Location.Location.contents

List of sub location 
contained in another location. This is the contents of a Location.
  @param  Loca_Location self
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
extern Loca_Location Loca_Location_FindFirstContent_keyval4(Loca_Location self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.lims.Location.Location.holderLocations

List over time 
of occupancy for a given location.
  @param  Loca_Location self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Hold_HolderLocation Loca_Location_FindFirstHolderLocation(Loca_Location self, ApiMap conditions);

/**
  FindFirst for ccp.lims.Location.Location.holderLocations

List over time 
of occupancy for a given location.
  @param  Loca_Location self
  @returns  the first value that satisfies the conditions 
**/
extern Hold_HolderLocation Loca_Location_FindFirstHolderLocation_keyval0(Loca_Location self);

/**
  FindFirst for ccp.lims.Location.Location.holderLocations

List over time 
of occupancy for a given location.
  @param  Loca_Location self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Hold_HolderLocation Loca_Location_FindFirstHolderLocation_keyval1(Loca_Location self, char * key, ApiObject value);

/**
  FindFirst for ccp.lims.Location.Location.holderLocations

List over time 
of occupancy for a given location.
  @param  Loca_Location self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Hold_HolderLocation Loca_Location_FindFirstHolderLocation_keyval2(Loca_Location self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.lims.Location.Location.holderLocations

List over time 
of occupancy for a given location.
  @param  Loca_Location self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Hold_HolderLocation Loca_Location_FindFirstHolderLocation_keyval3(Loca_Location self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.lims.Location.Location.holderLocations

List over time 
of occupancy for a given location.
  @param  Loca_Location self
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
extern Hold_HolderLocation Loca_Location_FindFirstHolderLocation_keyval4(Loca_Location self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.lims.Location.Location
  @param  Loca_Location self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Loca_Location_Get(Loca_Location self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Loca_Location self
  @returns   the result
**/
extern Acco_AccessObject Loca_Location_GetAccess(Loca_Location self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Loca_Location self
  @returns   the result
**/
extern Acco_AccessObject Loca_Location_GetActiveAccess(Loca_Location self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Loca_Location self
  @returns   the result
**/
extern ApiList Loca_Location_GetApplicationData(Loca_Location self);

/**
  GetByKey for ccp.lims.Location.Location
  @param  Loca_Location self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Loca_Location Loca_Location_GetByKey(Loca_Location self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Loca_Location self
  @returns   the result
**/
extern ApiString Loca_Location_GetClassName(Loca_Location self);

/**
  Get for ccp.lims.Location.Location.contents

List of sub location 
contained in another location. This is the contents of a Location.
  @param  Loca_Location self
  @returns   the result
**/
extern ApiSet Loca_Location_GetContents(Loca_Location self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Loca_Location self
  @returns   the result
**/
extern ApiList Loca_Location_GetFieldNames(Loca_Location self);

/**
  GetFullKey for ccp.lims.Location.Location
  @param  Loca_Location self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Loca_Location_GetFullKey(Loca_Location self, ApiBoolean useGuid);

/**
  Get for ccp.lims.Location.Location.holderLocations

List over time of 
occupancy for a given location.
  @param  Loca_Location self
  @returns   the result
**/
extern ApiSet Loca_Location_GetHolderLocations(Loca_Location self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Loca_Location self
  @returns   the result
**/
extern ApiBoolean Loca_Location_GetInConstructor(Loca_Location self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Loca_Location self
  @returns   the result
**/
extern ApiBoolean Loca_Location_GetIsDeleted(Loca_Location self);

/**
  GetLocalKey for ccp.lims.Location.Location
  @param  Loca_Location self
  @returns  Local object key
**/
extern ApiObject Loca_Location_GetLocalKey(Loca_Location self);

/**
  Get for ccp.lims.Location.Location.location
  @param  Loca_Location self
  @returns   the result
**/
extern Loca_Location Loca_Location_GetLocation(Loca_Location self);

/**
  Get for ccp.lims.Location.Location.locationStore

parent link
  @param  Loca_Location self
  @returns   the result
**/
extern Loca_LocationStore Loca_Location_GetLocationStore(Loca_Location self);

/**
  Get for ccp.lims.Location.Location.locationType

The type of the 
location. e.g. 'Building', 'Room', 'Fridge', 'Cupboard', 'Shelves',...
  @param  Loca_Location self
  @returns   the result
**/
extern ApiString Loca_Location_GetLocationType(Loca_Location self);

/**
  Get for ccp.lims.Location.Location.name

The name of the location.
  @param  Loca_Location self
  @returns   the result
**/
extern ApiString Loca_Location_GetName(Loca_Location self);

/**
  Get for ccp.lims.Location.Location.organisation

The organisation to 
which the location belongs.
  @param  Loca_Location self
  @returns   the result
**/
extern Affi_Organisation Loca_Location_GetOrganisation(Loca_Location self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Loca_Location self
  @returns   the result
**/
extern ApiString Loca_Location_GetPackageName(Loca_Location self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Loca_Location self
  @returns   the result
**/
extern ApiString Loca_Location_GetPackageShortName(Loca_Location self);

/**
  Get for ccp.lims.Location.Location.parent

link to parent object - 
synonym for locationStore
  @param  Loca_Location self
  @returns   the result
**/
extern Loca_LocationStore Loca_Location_GetParent(Loca_Location self);

/**
  Get for ccp.lims.Location.Location.pressure

The pressure of the 
location in pascal (Pa).
  @param  Loca_Location self
  @returns   the result
**/
extern ApiFloat Loca_Location_GetPressure(Loca_Location self);

/**
  Get for ccp.lims.Location.Location.pressureDisplayUnit

This is the unit 
entered by user and used for display.
  @param  Loca_Location self
  @returns   the result
**/
extern ApiString Loca_Location_GetPressureDisplayUnit(Loca_Location self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Loca_Location self
  @returns   the result
**/
extern ApiString Loca_Location_GetQualifiedName(Loca_Location self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Loca_Location self
  @returns   the result
**/
extern Impl_MemopsRoot Loca_Location_GetRoot(Loca_Location self);

/**
  Get for ccp.lims.Location.Location.serial

Unique identifier.
  @param  Loca_Location self
  @returns   the result
**/
extern ApiInteger Loca_Location_GetSerial(Loca_Location self);

/**
  Get for ccp.lims.Location.Location.tempDisplayUnit

This is the unit 
entered by user and used for display.
  @param  Loca_Location self
  @returns   the result
**/
extern ApiString Loca_Location_GetTempDisplayUnit(Loca_Location self);

/**
  Get for ccp.lims.Location.Location.temperature

The temperature of the 
location in kelvin (K).
  @param  Loca_Location self
  @returns   the result
**/
extern ApiFloat Loca_Location_GetTemperature(Loca_Location self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Loca_Location self
  @returns   the result
**/
extern Impl_TopObject Loca_Location_GetTopObject(Loca_Location self);

/**
  Constructor for ccp.lims.Location.Location
  @param  Loca_LocationStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Loca_Location Loca_Location_Init(Loca_LocationStore parent, ApiMap attrlinks);

/**
  Constructor for ccp.lims.Location.Location
  @param  Loca_LocationStore parent
  @param  char * name
  @returns  the new object
**/
extern Loca_Location Loca_Location_Init_reqd(Loca_LocationStore parent, char * name);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Loca_Location self
  @param  Impl_ApplicationData value
**/
extern void *Loca_Location_RemoveApplicationData(Loca_Location self, Impl_ApplicationData value);

/**
  Remove for ccp.lims.Location.Location.contents

List of sub location 
contained in another location. This is the contents of a Location.
  @param  Loca_Location self
  @param  Loca_Location value
**/
extern void *Loca_Location_RemoveContent(Loca_Location self, Loca_Location value);

/**
  SetAttr for ccp.lims.Location.Location
  @param  Loca_Location self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Loca_Location_Set(Loca_Location self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Loca_Location self
  @param  Acco_AccessObject value
**/
extern void *Loca_Location_SetAccess(Loca_Location self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Loca_Location self
  @param  ApiList values
**/
extern void *Loca_Location_SetApplicationData(Loca_Location self, ApiList values);

/**
  Set for ccp.lims.Location.Location.contents

List of sub location 
contained in another location. This is the contents of a Location.
  @param  Loca_Location self
  @param  ApiSet values
**/
extern void *Loca_Location_SetContents(Loca_Location self, ApiSet values);

/**
  Set for ccp.lims.Location.Location.holderLocations

List over time of 
occupancy for a given location.
  @param  Loca_Location self
  @param  ApiSet values
**/
extern void *Loca_Location_SetHolderLocations(Loca_Location self, ApiSet values);

/**
  Set for ccp.lims.Location.Location.location
  @param  Loca_Location self
  @param  Loca_Location value
**/
extern void *Loca_Location_SetLocation(Loca_Location self, Loca_Location value);

/**
  Set for ccp.lims.Location.Location.locationType

The type of the 
location. e.g. 'Building', 'Room', 'Fridge', 'Cupboard', 'Shelves',...
  @param  Loca_Location self
  @param  ApiString value
**/
extern void *Loca_Location_SetLocationType(Loca_Location self, ApiString value);

/**
  Set for ccp.lims.Location.Location.name

The name of the location.
  @param  Loca_Location self
  @param  ApiString value
**/
extern void *Loca_Location_SetName(Loca_Location self, ApiString value);

/**
  Set for ccp.lims.Location.Location.organisation

The organisation to 
which the location belongs.
  @param  Loca_Location self
  @param  Affi_Organisation value
**/
extern void *Loca_Location_SetOrganisation(Loca_Location self, Affi_Organisation value);

/**
  Set for ccp.lims.Location.Location.pressure

The pressure of the 
location in pascal (Pa).
  @param  Loca_Location self
  @param  ApiFloat value
**/
extern void *Loca_Location_SetPressure(Loca_Location self, ApiFloat value);

/**
  Set for ccp.lims.Location.Location.pressureDisplayUnit

This is the unit 
entered by user and used for display.
  @param  Loca_Location self
  @param  ApiString value
**/
extern void *Loca_Location_SetPressureDisplayUnit(Loca_Location self, ApiString value);

/**
  Set for ccp.lims.Location.Location.serial

Unique identifier.
  @param  Loca_Location self
  @param  ApiInteger value
**/
extern void *Loca_Location_SetSerial(Loca_Location self, ApiInteger value);

/**
  Set for ccp.lims.Location.Location.tempDisplayUnit

This is the unit 
entered by user and used for display.
  @param  Loca_Location self
  @param  ApiString value
**/
extern void *Loca_Location_SetTempDisplayUnit(Loca_Location self, ApiString value);

/**
  Set for ccp.lims.Location.Location.temperature

The temperature of the 
location in kelvin (K).
  @param  Loca_Location self
  @param  ApiFloat value
**/
extern void *Loca_Location_SetTemperature(Loca_Location self, ApiFloat value);

/**
  Sorted for ccp.lims.Location.Location.contents

List of sub location 
contained in another location. This is the contents of a Location.
  @param  Loca_Location self
  @returns   the result
**/
extern ApiList Loca_Location_SortedContents(Loca_Location self);

/**
  Sorted for ccp.lims.Location.Location.holderLocations

List over time of 
occupancy for a given location.
  @param  Loca_Location self
  @returns   the result
**/
extern ApiList Loca_Location_SortedHolderLocations(Loca_Location self);

#endif /* __incl__ccp_api_lims_Location_Location_h__ */
