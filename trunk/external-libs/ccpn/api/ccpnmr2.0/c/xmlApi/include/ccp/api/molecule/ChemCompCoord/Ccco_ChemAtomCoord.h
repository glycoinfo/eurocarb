
#ifndef __incl__ccp_api_molecule_ChemCompCoord_ChemAtomCoord_h__
#define __incl__ccp_api_molecule_ChemCompCoord_ChemAtomCoord_h__

#include "ccp.h"

/*
  Default coordinates for ChemAtom in ChemCompVar
*/

/* package ccp.api.molecule.ChemCompCoord */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccco_ChemAtomCoord self
  @param  Impl_ApplicationData value
**/
extern void *Ccco_ChemAtomCoord_AddApplicationData(Ccco_ChemAtomCoord self, Impl_ApplicationData value);

/**
  Add for 
ccp.molecule.ChemCompCoord.ChemAtomCoord.chemCompVarCoords

ChemCompVarCoords 
where ChemAtomCoord is involved.  NBNB TBD - cardinality should be 1..*. 
Current value is temporary, pending a rewrite of the ChemCompCoords.
  @param  Ccco_ChemAtomCoord self
  @param  Ccco_ChemCompVarCoord value
**/
extern void *Ccco_ChemAtomCoord_AddChemCompVarCoord(Ccco_ChemAtomCoord self, Ccco_ChemCompVarCoord value);

/**
  CheckAllValid for ccp.molecule.ChemCompCoord.ChemAtomCoord
  @param  Ccco_ChemAtomCoord self
  @param  ApiBoolean complete
**/
extern void *Ccco_ChemAtomCoord_CheckAllValid(Ccco_ChemAtomCoord self, ApiBoolean complete);

/**
  CheckValid for ccp.molecule.ChemCompCoord.ChemAtomCoord
  @param  Ccco_ChemAtomCoord self
  @param  ApiBoolean complete
**/
extern void *Ccco_ChemAtomCoord_CheckValid(Ccco_ChemAtomCoord self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccco_ChemAtomCoord self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Ccco_ChemAtomCoord_FindAllApplicationData(Ccco_ChemAtomCoord self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccco_ChemAtomCoord self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Ccco_ChemAtomCoord_FindAllApplicationData_keyval0(Ccco_ChemAtomCoord self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccco_ChemAtomCoord self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Ccco_ChemAtomCoord_FindAllApplicationData_keyval1(Ccco_ChemAtomCoord self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccco_ChemAtomCoord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Ccco_ChemAtomCoord_FindAllApplicationData_keyval2(Ccco_ChemAtomCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccco_ChemAtomCoord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Ccco_ChemAtomCoord_FindAllApplicationData_keyval3(Ccco_ChemAtomCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccco_ChemAtomCoord self
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
extern ApiList Ccco_ChemAtomCoord_FindAllApplicationData_keyval4(Ccco_ChemAtomCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.molecule.ChemCompCoord.ChemAtomCoord.chemCompVarCoords

ChemCompVarCoords 
where ChemAtomCoord is involved.  NBNB TBD - cardinality should be 1..*. 
Current value is temporary, pending a rewrite of the ChemCompCoords.
  @param  Ccco_ChemAtomCoord self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Ccco_ChemAtomCoord_FindAllChemCompVarCoords(Ccco_ChemAtomCoord self, ApiMap conditions);

/**
  FindAll for 
ccp.molecule.ChemCompCoord.ChemAtomCoord.chemCompVarCoords

ChemCompVarCoords 
where ChemAtomCoord is involved.  NBNB TBD - cardinality should be 1..*. 
Current value is temporary, pending a rewrite of the ChemCompCoords.
  @param  Ccco_ChemAtomCoord self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Ccco_ChemAtomCoord_FindAllChemCompVarCoords_keyval0(Ccco_ChemAtomCoord self);

/**
  FindAll for 
ccp.molecule.ChemCompCoord.ChemAtomCoord.chemCompVarCoords

ChemCompVarCoords 
where ChemAtomCoord is involved.  NBNB TBD - cardinality should be 1..*. 
Current value is temporary, pending a rewrite of the ChemCompCoords.
  @param  Ccco_ChemAtomCoord self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Ccco_ChemAtomCoord_FindAllChemCompVarCoords_keyval1(Ccco_ChemAtomCoord self, char * key, ApiObject value);

/**
  FindAll for 
ccp.molecule.ChemCompCoord.ChemAtomCoord.chemCompVarCoords

ChemCompVarCoords 
where ChemAtomCoord is involved.  NBNB TBD - cardinality should be 1..*. 
Current value is temporary, pending a rewrite of the ChemCompCoords.
  @param  Ccco_ChemAtomCoord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Ccco_ChemAtomCoord_FindAllChemCompVarCoords_keyval2(Ccco_ChemAtomCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.molecule.ChemCompCoord.ChemAtomCoord.chemCompVarCoords

ChemCompVarCoords 
where ChemAtomCoord is involved.  NBNB TBD - cardinality should be 1..*. 
Current value is temporary, pending a rewrite of the ChemCompCoords.
  @param  Ccco_ChemAtomCoord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Ccco_ChemAtomCoord_FindAllChemCompVarCoords_keyval3(Ccco_ChemAtomCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.molecule.ChemCompCoord.ChemAtomCoord.chemCompVarCoords

ChemCompVarCoords 
where ChemAtomCoord is involved.  NBNB TBD - cardinality should be 1..*. 
Current value is temporary, pending a rewrite of the ChemCompCoords.
  @param  Ccco_ChemAtomCoord self
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
extern ApiSet Ccco_ChemAtomCoord_FindAllChemCompVarCoords_keyval4(Ccco_ChemAtomCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccco_ChemAtomCoord self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Ccco_ChemAtomCoord_FindFirstApplicationData(Ccco_ChemAtomCoord self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccco_ChemAtomCoord self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Ccco_ChemAtomCoord_FindFirstApplicationData_keyval0(Ccco_ChemAtomCoord self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccco_ChemAtomCoord self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Ccco_ChemAtomCoord_FindFirstApplicationData_keyval1(Ccco_ChemAtomCoord self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccco_ChemAtomCoord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Ccco_ChemAtomCoord_FindFirstApplicationData_keyval2(Ccco_ChemAtomCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccco_ChemAtomCoord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Ccco_ChemAtomCoord_FindFirstApplicationData_keyval3(Ccco_ChemAtomCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccco_ChemAtomCoord self
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
extern Impl_ApplicationData Ccco_ChemAtomCoord_FindFirstApplicationData_keyval4(Ccco_ChemAtomCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.molecule.ChemCompCoord.ChemAtomCoord.chemCompVarCoords

ChemCompVarCoords 
where ChemAtomCoord is involved.  NBNB TBD - cardinality should be 1..*. 
Current value is temporary, pending a rewrite of the ChemCompCoords.
  @param  Ccco_ChemAtomCoord self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Ccco_ChemCompVarCoord Ccco_ChemAtomCoord_FindFirstChemCompVarCoord(Ccco_ChemAtomCoord self, ApiMap conditions);

/**
  FindFirst for 
ccp.molecule.ChemCompCoord.ChemAtomCoord.chemCompVarCoords

ChemCompVarCoords 
where ChemAtomCoord is involved.  NBNB TBD - cardinality should be 1..*. 
Current value is temporary, pending a rewrite of the ChemCompCoords.
  @param  Ccco_ChemAtomCoord self
  @returns  the first value that satisfies the conditions 
**/
extern Ccco_ChemCompVarCoord Ccco_ChemAtomCoord_FindFirstChemCompVarCoord_keyval0(Ccco_ChemAtomCoord self);

/**
  FindFirst for 
ccp.molecule.ChemCompCoord.ChemAtomCoord.chemCompVarCoords

ChemCompVarCoords 
where ChemAtomCoord is involved.  NBNB TBD - cardinality should be 1..*. 
Current value is temporary, pending a rewrite of the ChemCompCoords.
  @param  Ccco_ChemAtomCoord self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Ccco_ChemCompVarCoord Ccco_ChemAtomCoord_FindFirstChemCompVarCoord_keyval1(Ccco_ChemAtomCoord self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.molecule.ChemCompCoord.ChemAtomCoord.chemCompVarCoords

ChemCompVarCoords 
where ChemAtomCoord is involved.  NBNB TBD - cardinality should be 1..*. 
Current value is temporary, pending a rewrite of the ChemCompCoords.
  @param  Ccco_ChemAtomCoord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Ccco_ChemCompVarCoord Ccco_ChemAtomCoord_FindFirstChemCompVarCoord_keyval2(Ccco_ChemAtomCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.molecule.ChemCompCoord.ChemAtomCoord.chemCompVarCoords

ChemCompVarCoords 
where ChemAtomCoord is involved.  NBNB TBD - cardinality should be 1..*. 
Current value is temporary, pending a rewrite of the ChemCompCoords.
  @param  Ccco_ChemAtomCoord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Ccco_ChemCompVarCoord Ccco_ChemAtomCoord_FindFirstChemCompVarCoord_keyval3(Ccco_ChemAtomCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.molecule.ChemCompCoord.ChemAtomCoord.chemCompVarCoords

ChemCompVarCoords 
where ChemAtomCoord is involved.  NBNB TBD - cardinality should be 1..*. 
Current value is temporary, pending a rewrite of the ChemCompCoords.
  @param  Ccco_ChemAtomCoord self
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
extern Ccco_ChemCompVarCoord Ccco_ChemAtomCoord_FindFirstChemCompVarCoord_keyval4(Ccco_ChemAtomCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.molecule.ChemCompCoord.ChemAtomCoord
  @param  Ccco_ChemAtomCoord self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Ccco_ChemAtomCoord_Get(Ccco_ChemAtomCoord self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Ccco_ChemAtomCoord self
  @returns   the result
**/
extern Acco_AccessObject Ccco_ChemAtomCoord_GetAccess(Ccco_ChemAtomCoord self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccco_ChemAtomCoord self
  @returns   the result
**/
extern ApiList Ccco_ChemAtomCoord_GetApplicationData(Ccco_ChemAtomCoord self);

/**
  GetByKey for ccp.molecule.ChemCompCoord.ChemAtomCoord
  @param  Ccco_ChemAtomCoord self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Ccco_ChemAtomCoord Ccco_ChemAtomCoord_GetByKey(Ccco_ChemAtomCoord self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  getter for derived link chemAtom
  @param  Ccco_ChemAtomCoord self
  @returns   the result
**/
extern Chem_AbstractChemAtom Ccco_ChemAtomCoord_GetChemAtom(Ccco_ChemAtomCoord self);

/**
  Get for ccp.molecule.ChemCompCoord.ChemAtomCoord.chemCompCoord

parent 
link
  @param  Ccco_ChemAtomCoord self
  @returns   the result
**/
extern Ccco_ChemCompCoord Ccco_ChemAtomCoord_GetChemCompCoord(Ccco_ChemAtomCoord self);

/**
  Get for 
ccp.molecule.ChemCompCoord.ChemAtomCoord.chemCompVarCoords

ChemCompVarCoords 
where ChemAtomCoord is involved.  NBNB TBD - cardinality should be 1..*. 
Current value is temporary, pending a rewrite of the ChemCompCoords.
  @param  Ccco_ChemAtomCoord self
  @returns   the result
**/
extern ApiSet Ccco_ChemAtomCoord_GetChemCompVarCoords(Ccco_ChemAtomCoord self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Ccco_ChemAtomCoord self
  @returns   the result
**/
extern ApiString Ccco_ChemAtomCoord_GetClassName(Ccco_ChemAtomCoord self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Ccco_ChemAtomCoord self
  @returns   the result
**/
extern ApiList Ccco_ChemAtomCoord_GetFieldNames(Ccco_ChemAtomCoord self);

/**
  GetFullKey for ccp.molecule.ChemCompCoord.ChemAtomCoord
  @param  Ccco_ChemAtomCoord self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Ccco_ChemAtomCoord_GetFullKey(Ccco_ChemAtomCoord self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Ccco_ChemAtomCoord self
  @returns   the result
**/
extern ApiBoolean Ccco_ChemAtomCoord_GetInConstructor(Ccco_ChemAtomCoord self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Ccco_ChemAtomCoord self
  @returns   the result
**/
extern ApiBoolean Ccco_ChemAtomCoord_GetIsDeleted(Ccco_ChemAtomCoord self);

/**
  GetLocalKey for ccp.molecule.ChemCompCoord.ChemAtomCoord
  @param  Ccco_ChemAtomCoord self
  @returns  Local object key
**/
extern ApiObject Ccco_ChemAtomCoord_GetLocalKey(Ccco_ChemAtomCoord self);

/**
  Get for ccp.molecule.ChemCompCoord.ChemAtomCoord.name

Name of ChemAtom 
to which coordinates belong
  @param  Ccco_ChemAtomCoord self
  @returns   the result
**/
extern ApiString Ccco_ChemAtomCoord_GetName(Ccco_ChemAtomCoord self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Ccco_ChemAtomCoord self
  @returns   the result
**/
extern ApiString Ccco_ChemAtomCoord_GetPackageName(Ccco_ChemAtomCoord self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Ccco_ChemAtomCoord self
  @returns   the result
**/
extern ApiString Ccco_ChemAtomCoord_GetPackageShortName(Ccco_ChemAtomCoord self);

/**
  Get for ccp.molecule.ChemCompCoord.ChemAtomCoord.parent

link to parent 
object - synonym for chemCompCoord
  @param  Ccco_ChemAtomCoord self
  @returns   the result
**/
extern Ccco_ChemCompCoord Ccco_ChemAtomCoord_GetParent(Ccco_ChemAtomCoord self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Ccco_ChemAtomCoord self
  @returns   the result
**/
extern ApiString Ccco_ChemAtomCoord_GetQualifiedName(Ccco_ChemAtomCoord self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Ccco_ChemAtomCoord self
  @returns   the result
**/
extern Impl_MemopsRoot Ccco_ChemAtomCoord_GetRoot(Ccco_ChemAtomCoord self);

/**
  Get for ccp.molecule.ChemCompCoord.ChemAtomCoord.serial

Serial number 
of object. Serves as object main key. Serial numbers of deleted objects 
are not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Ccco_ChemAtomCoord self
  @returns   the result
**/
extern ApiInteger Ccco_ChemAtomCoord_GetSerial(Ccco_ChemAtomCoord self);

/**
  Get for ccp.molecule.ChemCompCoord.ChemAtomCoord.subType

SubType of 
ChemAtom to which coordinates belong
  @param  Ccco_ChemAtomCoord self
  @returns   the result
**/
extern ApiInteger Ccco_ChemAtomCoord_GetSubType(Ccco_ChemAtomCoord self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Ccco_ChemAtomCoord self
  @returns   the result
**/
extern Impl_TopObject Ccco_ChemAtomCoord_GetTopObject(Ccco_ChemAtomCoord self);

/**
  Get for ccp.molecule.ChemCompCoord.ChemAtomCoord.x

X coordinate in 
Angstroms
  @param  Ccco_ChemAtomCoord self
  @returns   the result
**/
extern ApiFloat Ccco_ChemAtomCoord_GetX(Ccco_ChemAtomCoord self);

/**
  Get for ccp.molecule.ChemCompCoord.ChemAtomCoord.y

Y coordinate in 
Angstroms
  @param  Ccco_ChemAtomCoord self
  @returns   the result
**/
extern ApiFloat Ccco_ChemAtomCoord_GetY(Ccco_ChemAtomCoord self);

/**
  Get for ccp.molecule.ChemCompCoord.ChemAtomCoord.z

Z coordinate in 
Angstroms
  @param  Ccco_ChemAtomCoord self
  @returns   the result
**/
extern ApiFloat Ccco_ChemAtomCoord_GetZ(Ccco_ChemAtomCoord self);

/**
  Constructor for ccp.molecule.ChemCompCoord.ChemAtomCoord
  @param  Ccco_ChemCompCoord parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Ccco_ChemAtomCoord Ccco_ChemAtomCoord_Init(Ccco_ChemCompCoord parent, ApiMap attrlinks);

/**
  Constructor for ccp.molecule.ChemCompCoord.ChemAtomCoord
  @param  Ccco_ChemCompCoord parent
  @param  char * name
  @returns  the new object
**/
extern Ccco_ChemAtomCoord Ccco_ChemAtomCoord_Init_reqd(Ccco_ChemCompCoord parent, char * name);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccco_ChemAtomCoord self
  @param  Impl_ApplicationData value
**/
extern void *Ccco_ChemAtomCoord_RemoveApplicationData(Ccco_ChemAtomCoord self, Impl_ApplicationData value);

/**
  Remove for 
ccp.molecule.ChemCompCoord.ChemAtomCoord.chemCompVarCoords

ChemCompVarCoords 
where ChemAtomCoord is involved.  NBNB TBD - cardinality should be 1..*. 
Current value is temporary, pending a rewrite of the ChemCompCoords.
  @param  Ccco_ChemAtomCoord self
  @param  Ccco_ChemCompVarCoord value
**/
extern void *Ccco_ChemAtomCoord_RemoveChemCompVarCoord(Ccco_ChemAtomCoord self, Ccco_ChemCompVarCoord value);

/**
  SetAttr for ccp.molecule.ChemCompCoord.ChemAtomCoord
  @param  Ccco_ChemAtomCoord self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Ccco_ChemAtomCoord_Set(Ccco_ChemAtomCoord self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Ccco_ChemAtomCoord self
  @param  Acco_AccessObject value
**/
extern void *Ccco_ChemAtomCoord_SetAccess(Ccco_ChemAtomCoord self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccco_ChemAtomCoord self
  @param  ApiList values
**/
extern void *Ccco_ChemAtomCoord_SetApplicationData(Ccco_ChemAtomCoord self, ApiList values);

/**
  Set for 
ccp.molecule.ChemCompCoord.ChemAtomCoord.chemCompVarCoords

ChemCompVarCoords 
where ChemAtomCoord is involved.  NBNB TBD - cardinality should be 1..*. 
Current value is temporary, pending a rewrite of the ChemCompCoords.
  @param  Ccco_ChemAtomCoord self
  @param  ApiSet values
**/
extern void *Ccco_ChemAtomCoord_SetChemCompVarCoords(Ccco_ChemAtomCoord self, ApiSet values);

/**
  Set for ccp.molecule.ChemCompCoord.ChemAtomCoord.name

Name of ChemAtom 
to which coordinates belong
  @param  Ccco_ChemAtomCoord self
  @param  ApiString value
**/
extern void *Ccco_ChemAtomCoord_SetName(Ccco_ChemAtomCoord self, ApiString value);

/**
  Set for ccp.molecule.ChemCompCoord.ChemAtomCoord.serial

Serial number 
of object. Serves as object main key. Serial numbers of deleted objects 
are not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Ccco_ChemAtomCoord self
  @param  ApiInteger value
**/
extern void *Ccco_ChemAtomCoord_SetSerial(Ccco_ChemAtomCoord self, ApiInteger value);

/**
  Set for ccp.molecule.ChemCompCoord.ChemAtomCoord.subType

SubType of 
ChemAtom to which coordinates belong
  @param  Ccco_ChemAtomCoord self
  @param  ApiInteger value
**/
extern void *Ccco_ChemAtomCoord_SetSubType(Ccco_ChemAtomCoord self, ApiInteger value);

/**
  Set for ccp.molecule.ChemCompCoord.ChemAtomCoord.x

X coordinate in 
Angstroms
  @param  Ccco_ChemAtomCoord self
  @param  ApiFloat value
**/
extern void *Ccco_ChemAtomCoord_SetX(Ccco_ChemAtomCoord self, ApiFloat value);

/**
  Set for ccp.molecule.ChemCompCoord.ChemAtomCoord.y

Y coordinate in 
Angstroms
  @param  Ccco_ChemAtomCoord self
  @param  ApiFloat value
**/
extern void *Ccco_ChemAtomCoord_SetY(Ccco_ChemAtomCoord self, ApiFloat value);

/**
  Set for ccp.molecule.ChemCompCoord.ChemAtomCoord.z

Z coordinate in 
Angstroms
  @param  Ccco_ChemAtomCoord self
  @param  ApiFloat value
**/
extern void *Ccco_ChemAtomCoord_SetZ(Ccco_ChemAtomCoord self, ApiFloat value);

/**
  Sorted for 
ccp.molecule.ChemCompCoord.ChemAtomCoord.chemCompVarCoords

ChemCompVarCoords 
where ChemAtomCoord is involved.  NBNB TBD - cardinality should be 1..*. 
Current value is temporary, pending a rewrite of the ChemCompCoords.
  @param  Ccco_ChemAtomCoord self
  @returns   the result
**/
extern ApiList Ccco_ChemAtomCoord_SortedChemCompVarCoords(Ccco_ChemAtomCoord self);

#endif /* __incl__ccp_api_molecule_ChemCompCoord_ChemAtomCoord_h__ */
