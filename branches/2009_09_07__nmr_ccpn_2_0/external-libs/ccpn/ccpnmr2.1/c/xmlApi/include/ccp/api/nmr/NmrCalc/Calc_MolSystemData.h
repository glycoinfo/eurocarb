
#ifndef __incl__ccp_api_nmr_NmrCalc_MolSystemData_h__
#define __incl__ccp_api_nmr_NmrCalc_MolSystemData_h__

#include "ccp.h"

/*
  Molsystem and Chain data for calculations
*/

/* package ccp.api.nmr.NmrCalc */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_MolSystemData self
  @param  Impl_ApplicationData value
**/
extern void *Calc_MolSystemData_AddApplicationData(Calc_MolSystemData self, Impl_ApplicationData value);

/**
  Add for ccp.nmr.NmrCalc.MolSystemData.chains

MolSystem.Chains used as 
data
  @param  Calc_MolSystemData self
  @param  Mols_Chain value
**/
extern void *Calc_MolSystemData_AddChain(Calc_MolSystemData self, Mols_Chain value);

/**
  Add for ccp.nmr.NmrCalc.MolSystemData.chainCodes

Chain Codes - if empty 
all chails in MolSystem are used. Used for deriving link
  @param  Calc_MolSystemData self
  @param  ApiString value
**/
extern void *Calc_MolSystemData_AddChainCode(Calc_MolSystemData self, ApiString value);

/**
  Add for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_MolSystemData self
  @param  Calc_RunParameter value
**/
extern void *Calc_MolSystemData_AddRunParameter(Calc_MolSystemData self, Calc_RunParameter value);

/**
  CheckAllValid for ccp.nmr.NmrCalc.MolSystemData
  @param  Calc_MolSystemData self
  @param  ApiBoolean complete
**/
extern void *Calc_MolSystemData_CheckAllValid(Calc_MolSystemData self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.NmrCalc.MolSystemData
  @param  Calc_MolSystemData self
  @param  ApiBoolean complete
**/
extern void *Calc_MolSystemData_CheckValid(Calc_MolSystemData self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_MolSystemData self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Calc_MolSystemData_FindAllApplicationData(Calc_MolSystemData self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_MolSystemData self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Calc_MolSystemData_FindAllApplicationData_keyval0(Calc_MolSystemData self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_MolSystemData self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Calc_MolSystemData_FindAllApplicationData_keyval1(Calc_MolSystemData self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_MolSystemData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Calc_MolSystemData_FindAllApplicationData_keyval2(Calc_MolSystemData self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_MolSystemData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Calc_MolSystemData_FindAllApplicationData_keyval3(Calc_MolSystemData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_MolSystemData self
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
extern ApiList Calc_MolSystemData_FindAllApplicationData_keyval4(Calc_MolSystemData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.NmrCalc.MolSystemData.chains

MolSystem.Chains used 
as data
  @param  Calc_MolSystemData self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Calc_MolSystemData_FindAllChains(Calc_MolSystemData self, ApiMap conditions);

/**
  FindAll for ccp.nmr.NmrCalc.MolSystemData.chains

MolSystem.Chains used 
as data
  @param  Calc_MolSystemData self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Calc_MolSystemData_FindAllChains_keyval0(Calc_MolSystemData self);

/**
  FindAll for ccp.nmr.NmrCalc.MolSystemData.chains

MolSystem.Chains used 
as data
  @param  Calc_MolSystemData self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Calc_MolSystemData_FindAllChains_keyval1(Calc_MolSystemData self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.NmrCalc.MolSystemData.chains

MolSystem.Chains used 
as data
  @param  Calc_MolSystemData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Calc_MolSystemData_FindAllChains_keyval2(Calc_MolSystemData self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.NmrCalc.MolSystemData.chains

MolSystem.Chains used 
as data
  @param  Calc_MolSystemData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Calc_MolSystemData_FindAllChains_keyval3(Calc_MolSystemData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.NmrCalc.MolSystemData.chains

MolSystem.Chains used 
as data
  @param  Calc_MolSystemData self
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
extern ApiList Calc_MolSystemData_FindAllChains_keyval4(Calc_MolSystemData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_MolSystemData self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Calc_MolSystemData_FindAllRunParameters(Calc_MolSystemData self, ApiMap conditions);

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_MolSystemData self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Calc_MolSystemData_FindAllRunParameters_keyval0(Calc_MolSystemData self);

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_MolSystemData self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Calc_MolSystemData_FindAllRunParameters_keyval1(Calc_MolSystemData self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_MolSystemData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Calc_MolSystemData_FindAllRunParameters_keyval2(Calc_MolSystemData self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_MolSystemData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Calc_MolSystemData_FindAllRunParameters_keyval3(Calc_MolSystemData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_MolSystemData self
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
extern ApiSet Calc_MolSystemData_FindAllRunParameters_keyval4(Calc_MolSystemData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_MolSystemData self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Calc_MolSystemData_FindFirstApplicationData(Calc_MolSystemData self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_MolSystemData self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Calc_MolSystemData_FindFirstApplicationData_keyval0(Calc_MolSystemData self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_MolSystemData self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Calc_MolSystemData_FindFirstApplicationData_keyval1(Calc_MolSystemData self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_MolSystemData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Calc_MolSystemData_FindFirstApplicationData_keyval2(Calc_MolSystemData self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_MolSystemData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Calc_MolSystemData_FindFirstApplicationData_keyval3(Calc_MolSystemData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_MolSystemData self
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
extern Impl_ApplicationData Calc_MolSystemData_FindFirstApplicationData_keyval4(Calc_MolSystemData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.NmrCalc.MolSystemData.chains

MolSystem.Chains 
used as data
  @param  Calc_MolSystemData self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Mols_Chain Calc_MolSystemData_FindFirstChain(Calc_MolSystemData self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.NmrCalc.MolSystemData.chains

MolSystem.Chains 
used as data
  @param  Calc_MolSystemData self
  @returns  the first value that satisfies the conditions 
**/
extern Mols_Chain Calc_MolSystemData_FindFirstChain_keyval0(Calc_MolSystemData self);

/**
  FindFirst for ccp.nmr.NmrCalc.MolSystemData.chains

MolSystem.Chains 
used as data
  @param  Calc_MolSystemData self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Mols_Chain Calc_MolSystemData_FindFirstChain_keyval1(Calc_MolSystemData self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.NmrCalc.MolSystemData.chains

MolSystem.Chains 
used as data
  @param  Calc_MolSystemData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Mols_Chain Calc_MolSystemData_FindFirstChain_keyval2(Calc_MolSystemData self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.NmrCalc.MolSystemData.chains

MolSystem.Chains 
used as data
  @param  Calc_MolSystemData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Mols_Chain Calc_MolSystemData_FindFirstChain_keyval3(Calc_MolSystemData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.NmrCalc.MolSystemData.chains

MolSystem.Chains 
used as data
  @param  Calc_MolSystemData self
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
extern Mols_Chain Calc_MolSystemData_FindFirstChain_keyval4(Calc_MolSystemData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_MolSystemData self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Calc_RunParameter Calc_MolSystemData_FindFirstRunParameter(Calc_MolSystemData self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_MolSystemData self
  @returns  the first value that satisfies the conditions 
**/
extern Calc_RunParameter Calc_MolSystemData_FindFirstRunParameter_keyval0(Calc_MolSystemData self);

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_MolSystemData self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Calc_RunParameter Calc_MolSystemData_FindFirstRunParameter_keyval1(Calc_MolSystemData self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_MolSystemData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Calc_RunParameter Calc_MolSystemData_FindFirstRunParameter_keyval2(Calc_MolSystemData self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_MolSystemData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Calc_RunParameter Calc_MolSystemData_FindFirstRunParameter_keyval3(Calc_MolSystemData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_MolSystemData self
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
extern Calc_RunParameter Calc_MolSystemData_FindFirstRunParameter_keyval4(Calc_MolSystemData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.NmrCalc.MolSystemData
  @param  Calc_MolSystemData self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Calc_MolSystemData_Get(Calc_MolSystemData self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Calc_MolSystemData self
  @returns   the result
**/
extern Acco_AccessObject Calc_MolSystemData_GetAccess(Calc_MolSystemData self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Calc_MolSystemData self
  @returns   the result
**/
extern Acco_AccessObject Calc_MolSystemData_GetActiveAccess(Calc_MolSystemData self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_MolSystemData self
  @returns   the result
**/
extern ApiList Calc_MolSystemData_GetApplicationData(Calc_MolSystemData self);

/**
  GetByKey for ccp.nmr.NmrCalc.MolSystemData
  @param  Calc_MolSystemData self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Calc_MolSystemData Calc_MolSystemData_GetByKey(Calc_MolSystemData self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for ccp.nmr.NmrCalc.MolSystemData.chainCodes

Chain Codes - if empty 
all chails in MolSystem are used. Used for deriving link
  @param  Calc_MolSystemData self
  @returns   the result
**/
extern ApiList Calc_MolSystemData_GetChainCodes(Calc_MolSystemData self);

/**
  getter for derived link chains
  @param  Calc_MolSystemData self
  @returns   the result
**/
extern ApiList Calc_MolSystemData_GetChains(Calc_MolSystemData self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Calc_MolSystemData self
  @returns   the result
**/
extern ApiString Calc_MolSystemData_GetClassName(Calc_MolSystemData self);

/**
  Get for ccp.nmr.NmrCalc.Data.details

Free text, for notes, explanatory 
comments, etc.
  @param  Calc_MolSystemData self
  @returns   the result
**/
extern ApiString Calc_MolSystemData_GetDetails(Calc_MolSystemData self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Calc_MolSystemData self
  @returns   the result
**/
extern ApiList Calc_MolSystemData_GetFieldNames(Calc_MolSystemData self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Calc_MolSystemData self
  @returns   the result
**/
extern ApiBoolean Calc_MolSystemData_GetInConstructor(Calc_MolSystemData self);

/**
  Get for ccp.nmr.NmrCalc.Data.ioRole

Role of data in calculation (input 
/ output).
  @param  Calc_MolSystemData self
  @returns   the result
**/
extern ApiString Calc_MolSystemData_GetIoRole(Calc_MolSystemData self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Calc_MolSystemData self
  @returns   the result
**/
extern ApiBoolean Calc_MolSystemData_GetIsDeleted(Calc_MolSystemData self);

/**
  getter for derived link molSystem
  @param  Calc_MolSystemData self
  @returns   the result
**/
extern Mols_MolSystem Calc_MolSystemData_GetMolSystem(Calc_MolSystemData self);

/**
  Get for ccp.nmr.NmrCalc.MolSystemData.molSystemCode

code for MolSystem 
- used for derivation of link
  @param  Calc_MolSystemData self
  @returns   the result
**/
extern ApiString Calc_MolSystemData_GetMolSystemCode(Calc_MolSystemData self);

/**
  Get for ccp.nmr.NmrCalc.Data.name

name identifying data
  @param  Calc_MolSystemData self
  @returns   the result
**/
extern ApiString Calc_MolSystemData_GetName(Calc_MolSystemData self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Calc_MolSystemData self
  @returns   the result
**/
extern ApiString Calc_MolSystemData_GetPackageName(Calc_MolSystemData self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Calc_MolSystemData self
  @returns   the result
**/
extern ApiString Calc_MolSystemData_GetPackageShortName(Calc_MolSystemData self);

/**
  Get for ccp.nmr.NmrCalc.Data.parent

link to parent object - synonym for 
run
  @param  Calc_MolSystemData self
  @returns   the result
**/
extern Calc_Run Calc_MolSystemData_GetParent(Calc_MolSystemData self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Calc_MolSystemData self
  @returns   the result
**/
extern ApiString Calc_MolSystemData_GetQualifiedName(Calc_MolSystemData self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Calc_MolSystemData self
  @returns   the result
**/
extern Impl_MemopsRoot Calc_MolSystemData_GetRoot(Calc_MolSystemData self);

/**
  Get for ccp.nmr.NmrCalc.Data.run

parent link
  @param  Calc_MolSystemData self
  @returns   the result
**/
extern Calc_Run Calc_MolSystemData_GetRun(Calc_MolSystemData self);

/**
  Get for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_MolSystemData self
  @returns   the result
**/
extern ApiSet Calc_MolSystemData_GetRunParameters(Calc_MolSystemData self);

/**
  Get for ccp.nmr.NmrCalc.Data.serial

Serial number of object. Serves as 
object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Calc_MolSystemData self
  @returns   the result
**/
extern ApiInteger Calc_MolSystemData_GetSerial(Calc_MolSystemData self);

/**
  getter for derived link symmetrySet
  @param  Calc_MolSystemData self
  @returns   the result
**/
extern Symm_MolSystemSymmetrySet Calc_MolSystemData_GetSymmetrySet(Calc_MolSystemData self);

/**
  Get for ccp.nmr.NmrCalc.MolSystemData.symmetrySetId

Key for 
molsim.Symmetry.MosSystemSymmetrySet.- used to derive the actual object
  @param  Calc_MolSystemData self
  @returns   the result
**/
extern ApiInteger Calc_MolSystemData_GetSymmetrySetId(Calc_MolSystemData self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Calc_MolSystemData self
  @returns   the result
**/
extern Impl_TopObject Calc_MolSystemData_GetTopObject(Calc_MolSystemData self);

/**
  Get for ccp.nmr.NmrCalc.Data.weight

Weight given to data
  @param  Calc_MolSystemData self
  @returns   the result
**/
extern ApiFloat Calc_MolSystemData_GetWeight(Calc_MolSystemData self);

/**
  Constructor for ccp.nmr.NmrCalc.MolSystemData
  @param  Calc_Run parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Calc_MolSystemData Calc_MolSystemData_Init(Calc_Run parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.NmrCalc.MolSystemData
  @param  Calc_Run parent
  @param  char * molSystemCode
  @returns  the new object
**/
extern Calc_MolSystemData Calc_MolSystemData_Init_reqd(Calc_Run parent, char * molSystemCode);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_MolSystemData self
  @param  Impl_ApplicationData value
**/
extern void *Calc_MolSystemData_RemoveApplicationData(Calc_MolSystemData self, Impl_ApplicationData value);

/**
  Remove for ccp.nmr.NmrCalc.MolSystemData.chains

MolSystem.Chains used 
as data
  @param  Calc_MolSystemData self
  @param  Mols_Chain value
**/
extern void *Calc_MolSystemData_RemoveChain(Calc_MolSystemData self, Mols_Chain value);

/**
  Remove for ccp.nmr.NmrCalc.MolSystemData.chainCodes

Chain Codes - if 
empty all chails in MolSystem are used. Used for deriving link
  @param  Calc_MolSystemData self
  @param  ApiString value
**/
extern void *Calc_MolSystemData_RemoveChainCode(Calc_MolSystemData self, ApiString value);

/**
  Remove for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_MolSystemData self
  @param  Calc_RunParameter value
**/
extern void *Calc_MolSystemData_RemoveRunParameter(Calc_MolSystemData self, Calc_RunParameter value);

/**
  SetAttr for ccp.nmr.NmrCalc.MolSystemData
  @param  Calc_MolSystemData self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Calc_MolSystemData_Set(Calc_MolSystemData self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Calc_MolSystemData self
  @param  Acco_AccessObject value
**/
extern void *Calc_MolSystemData_SetAccess(Calc_MolSystemData self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_MolSystemData self
  @param  ApiList values
**/
extern void *Calc_MolSystemData_SetApplicationData(Calc_MolSystemData self, ApiList values);

/**
  Set for ccp.nmr.NmrCalc.MolSystemData.chainCodes

Chain Codes - if empty 
all chails in MolSystem are used. Used for deriving link
  @param  Calc_MolSystemData self
  @param  ApiList values
**/
extern void *Calc_MolSystemData_SetChainCodes(Calc_MolSystemData self, ApiList values);

/**
  setter for derived link chains
  @param  Calc_MolSystemData self
  @param  ApiList values
**/
extern void *Calc_MolSystemData_SetChains(Calc_MolSystemData self, ApiList values);

/**
  Set for ccp.nmr.NmrCalc.Data.details

Free text, for notes, explanatory 
comments, etc.
  @param  Calc_MolSystemData self
  @param  ApiString value
**/
extern void *Calc_MolSystemData_SetDetails(Calc_MolSystemData self, ApiString value);

/**
  Set for ccp.nmr.NmrCalc.Data.ioRole

Role of data in calculation (input 
/ output).
  @param  Calc_MolSystemData self
  @param  ApiString value
**/
extern void *Calc_MolSystemData_SetIoRole(Calc_MolSystemData self, ApiString value);

/**
  setter for derived link molSystem
  @param  Calc_MolSystemData self
  @param  Mols_MolSystem value
**/
extern void *Calc_MolSystemData_SetMolSystem(Calc_MolSystemData self, Mols_MolSystem value);

/**
  Set for ccp.nmr.NmrCalc.MolSystemData.molSystemCode

code for MolSystem 
- used for derivation of link
  @param  Calc_MolSystemData self
  @param  ApiString value
**/
extern void *Calc_MolSystemData_SetMolSystemCode(Calc_MolSystemData self, ApiString value);

/**
  Set for ccp.nmr.NmrCalc.Data.name

name identifying data
  @param  Calc_MolSystemData self
  @param  ApiString value
**/
extern void *Calc_MolSystemData_SetName(Calc_MolSystemData self, ApiString value);

/**
  Set for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_MolSystemData self
  @param  ApiSet values
**/
extern void *Calc_MolSystemData_SetRunParameters(Calc_MolSystemData self, ApiSet values);

/**
  Set for ccp.nmr.NmrCalc.Data.serial

Serial number of object. Serves as 
object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Calc_MolSystemData self
  @param  ApiInteger value
**/
extern void *Calc_MolSystemData_SetSerial(Calc_MolSystemData self, ApiInteger value);

/**
  setter for derived link symmetrySet
  @param  Calc_MolSystemData self
  @param  Symm_MolSystemSymmetrySet value
**/
extern void *Calc_MolSystemData_SetSymmetrySet(Calc_MolSystemData self, Symm_MolSystemSymmetrySet value);

/**
  Set for ccp.nmr.NmrCalc.MolSystemData.symmetrySetId

Key for 
molsim.Symmetry.MosSystemSymmetrySet.- used to derive the actual object
  @param  Calc_MolSystemData self
  @param  ApiInteger value
**/
extern void *Calc_MolSystemData_SetSymmetrySetId(Calc_MolSystemData self, ApiInteger value);

/**
  Set for ccp.nmr.NmrCalc.Data.weight

Weight given to data
  @param  Calc_MolSystemData self
  @param  ApiFloat value
**/
extern void *Calc_MolSystemData_SetWeight(Calc_MolSystemData self, ApiFloat value);

/**
  Sorted for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_MolSystemData self
  @returns   the result
**/
extern ApiList Calc_MolSystemData_SortedRunParameters(Calc_MolSystemData self);

#endif /* __incl__ccp_api_nmr_NmrCalc_MolSystemData_h__ */
