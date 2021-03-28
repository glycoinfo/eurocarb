
#ifndef __incl__molsim_api_AnnealProtocol_EnergyTerm_h__
#define __incl__molsim_api_AnnealProtocol_EnergyTerm_h__

#include "ccp.h"

/*
  Energy term used in a protocol,  with successive scaling factors, refPotentialTerms
*/

/* package molsim.api.AnnealProtocol */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_EnergyTerm self
  @param  Impl_ApplicationData value
**/
extern void *Anpr_EnergyTerm_AddApplicationData(Anpr_EnergyTerm self, Impl_ApplicationData value);

/**
  Add for molsim.AnnealProtocol.EnergyTerm.nmrSimEnergyTerms

Restraint 
groups that follow RestraintProtocol
  @param  Anpr_EnergyTerm self
  @param  Nsim_NmrSimEnergyTerm value
**/
extern void *Anpr_EnergyTerm_AddNmrSimEnergyTerm(Anpr_EnergyTerm self, Nsim_NmrSimEnergyTerm value);

/**
  CheckAllValid for molsim.AnnealProtocol.EnergyTerm
  @param  Anpr_EnergyTerm self
  @param  ApiBoolean complete
**/
extern void *Anpr_EnergyTerm_CheckAllValid(Anpr_EnergyTerm self, ApiBoolean complete);

/**
  CheckValid for molsim.AnnealProtocol.EnergyTerm
  @param  Anpr_EnergyTerm self
  @param  ApiBoolean complete
**/
extern void *Anpr_EnergyTerm_CheckValid(Anpr_EnergyTerm self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_EnergyTerm self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anpr_EnergyTerm_FindAllApplicationData(Anpr_EnergyTerm self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_EnergyTerm self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anpr_EnergyTerm_FindAllApplicationData_keyval0(Anpr_EnergyTerm self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_EnergyTerm self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anpr_EnergyTerm_FindAllApplicationData_keyval1(Anpr_EnergyTerm self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_EnergyTerm self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anpr_EnergyTerm_FindAllApplicationData_keyval2(Anpr_EnergyTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_EnergyTerm self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anpr_EnergyTerm_FindAllApplicationData_keyval3(Anpr_EnergyTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_EnergyTerm self
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
extern ApiList Anpr_EnergyTerm_FindAllApplicationData_keyval4(Anpr_EnergyTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
molsim.AnnealProtocol.EnergyTerm.nmrSimEnergyTerms

Restraint groups 
that follow RestraintProtocol
  @param  Anpr_EnergyTerm self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anpr_EnergyTerm_FindAllNmrSimEnergyTerms(Anpr_EnergyTerm self, ApiMap conditions);

/**
  FindAll for 
molsim.AnnealProtocol.EnergyTerm.nmrSimEnergyTerms

Restraint groups 
that follow RestraintProtocol
  @param  Anpr_EnergyTerm self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anpr_EnergyTerm_FindAllNmrSimEnergyTerms_keyval0(Anpr_EnergyTerm self);

/**
  FindAll for 
molsim.AnnealProtocol.EnergyTerm.nmrSimEnergyTerms

Restraint groups 
that follow RestraintProtocol
  @param  Anpr_EnergyTerm self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anpr_EnergyTerm_FindAllNmrSimEnergyTerms_keyval1(Anpr_EnergyTerm self, char * key, ApiObject value);

/**
  FindAll for 
molsim.AnnealProtocol.EnergyTerm.nmrSimEnergyTerms

Restraint groups 
that follow RestraintProtocol
  @param  Anpr_EnergyTerm self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anpr_EnergyTerm_FindAllNmrSimEnergyTerms_keyval2(Anpr_EnergyTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
molsim.AnnealProtocol.EnergyTerm.nmrSimEnergyTerms

Restraint groups 
that follow RestraintProtocol
  @param  Anpr_EnergyTerm self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anpr_EnergyTerm_FindAllNmrSimEnergyTerms_keyval3(Anpr_EnergyTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
molsim.AnnealProtocol.EnergyTerm.nmrSimEnergyTerms

Restraint groups 
that follow RestraintProtocol
  @param  Anpr_EnergyTerm self
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
extern ApiSet Anpr_EnergyTerm_FindAllNmrSimEnergyTerms_keyval4(Anpr_EnergyTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for molsim.AnnealProtocol.EnergyTerm.potentialScales

child link 
to class PotentialScale
  @param  Anpr_EnergyTerm self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anpr_EnergyTerm_FindAllPotentialScales(Anpr_EnergyTerm self, ApiMap conditions);

/**
  FindAll for molsim.AnnealProtocol.EnergyTerm.potentialScales

child link 
to class PotentialScale
  @param  Anpr_EnergyTerm self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anpr_EnergyTerm_FindAllPotentialScales_keyval0(Anpr_EnergyTerm self);

/**
  FindAll for molsim.AnnealProtocol.EnergyTerm.potentialScales

child link 
to class PotentialScale
  @param  Anpr_EnergyTerm self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anpr_EnergyTerm_FindAllPotentialScales_keyval1(Anpr_EnergyTerm self, char * key, ApiObject value);

/**
  FindAll for molsim.AnnealProtocol.EnergyTerm.potentialScales

child link 
to class PotentialScale
  @param  Anpr_EnergyTerm self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anpr_EnergyTerm_FindAllPotentialScales_keyval2(Anpr_EnergyTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for molsim.AnnealProtocol.EnergyTerm.potentialScales

child link 
to class PotentialScale
  @param  Anpr_EnergyTerm self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anpr_EnergyTerm_FindAllPotentialScales_keyval3(Anpr_EnergyTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for molsim.AnnealProtocol.EnergyTerm.potentialScales

child link 
to class PotentialScale
  @param  Anpr_EnergyTerm self
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
extern ApiSet Anpr_EnergyTerm_FindAllPotentialScales_keyval4(Anpr_EnergyTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_EnergyTerm self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anpr_EnergyTerm_FindFirstApplicationData(Anpr_EnergyTerm self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_EnergyTerm self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anpr_EnergyTerm_FindFirstApplicationData_keyval0(Anpr_EnergyTerm self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_EnergyTerm self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anpr_EnergyTerm_FindFirstApplicationData_keyval1(Anpr_EnergyTerm self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_EnergyTerm self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anpr_EnergyTerm_FindFirstApplicationData_keyval2(Anpr_EnergyTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_EnergyTerm self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anpr_EnergyTerm_FindFirstApplicationData_keyval3(Anpr_EnergyTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_EnergyTerm self
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
extern Impl_ApplicationData Anpr_EnergyTerm_FindFirstApplicationData_keyval4(Anpr_EnergyTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
molsim.AnnealProtocol.EnergyTerm.nmrSimEnergyTerms

Restraint groups 
that follow RestraintProtocol
  @param  Anpr_EnergyTerm self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_NmrSimEnergyTerm Anpr_EnergyTerm_FindFirstNmrSimEnergyTerm(Anpr_EnergyTerm self, ApiMap conditions);

/**
  FindFirst for 
molsim.AnnealProtocol.EnergyTerm.nmrSimEnergyTerms

Restraint groups 
that follow RestraintProtocol
  @param  Anpr_EnergyTerm self
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_NmrSimEnergyTerm Anpr_EnergyTerm_FindFirstNmrSimEnergyTerm_keyval0(Anpr_EnergyTerm self);

/**
  FindFirst for 
molsim.AnnealProtocol.EnergyTerm.nmrSimEnergyTerms

Restraint groups 
that follow RestraintProtocol
  @param  Anpr_EnergyTerm self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_NmrSimEnergyTerm Anpr_EnergyTerm_FindFirstNmrSimEnergyTerm_keyval1(Anpr_EnergyTerm self, char * key, ApiObject value);

/**
  FindFirst for 
molsim.AnnealProtocol.EnergyTerm.nmrSimEnergyTerms

Restraint groups 
that follow RestraintProtocol
  @param  Anpr_EnergyTerm self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_NmrSimEnergyTerm Anpr_EnergyTerm_FindFirstNmrSimEnergyTerm_keyval2(Anpr_EnergyTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
molsim.AnnealProtocol.EnergyTerm.nmrSimEnergyTerms

Restraint groups 
that follow RestraintProtocol
  @param  Anpr_EnergyTerm self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_NmrSimEnergyTerm Anpr_EnergyTerm_FindFirstNmrSimEnergyTerm_keyval3(Anpr_EnergyTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
molsim.AnnealProtocol.EnergyTerm.nmrSimEnergyTerms

Restraint groups 
that follow RestraintProtocol
  @param  Anpr_EnergyTerm self
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
extern Nsim_NmrSimEnergyTerm Anpr_EnergyTerm_FindFirstNmrSimEnergyTerm_keyval4(Anpr_EnergyTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for molsim.AnnealProtocol.EnergyTerm.potentialScales

child 
link to class PotentialScale
  @param  Anpr_EnergyTerm self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Anpr_PotentialScale Anpr_EnergyTerm_FindFirstPotentialScale(Anpr_EnergyTerm self, ApiMap conditions);

/**
  FindFirst for molsim.AnnealProtocol.EnergyTerm.potentialScales

child 
link to class PotentialScale
  @param  Anpr_EnergyTerm self
  @returns  the first value that satisfies the conditions 
**/
extern Anpr_PotentialScale Anpr_EnergyTerm_FindFirstPotentialScale_keyval0(Anpr_EnergyTerm self);

/**
  FindFirst for molsim.AnnealProtocol.EnergyTerm.potentialScales

child 
link to class PotentialScale
  @param  Anpr_EnergyTerm self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Anpr_PotentialScale Anpr_EnergyTerm_FindFirstPotentialScale_keyval1(Anpr_EnergyTerm self, char * key, ApiObject value);

/**
  FindFirst for molsim.AnnealProtocol.EnergyTerm.potentialScales

child 
link to class PotentialScale
  @param  Anpr_EnergyTerm self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Anpr_PotentialScale Anpr_EnergyTerm_FindFirstPotentialScale_keyval2(Anpr_EnergyTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for molsim.AnnealProtocol.EnergyTerm.potentialScales

child 
link to class PotentialScale
  @param  Anpr_EnergyTerm self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Anpr_PotentialScale Anpr_EnergyTerm_FindFirstPotentialScale_keyval3(Anpr_EnergyTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for molsim.AnnealProtocol.EnergyTerm.potentialScales

child 
link to class PotentialScale
  @param  Anpr_EnergyTerm self
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
extern Anpr_PotentialScale Anpr_EnergyTerm_FindFirstPotentialScale_keyval4(Anpr_EnergyTerm self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for molsim.AnnealProtocol.EnergyTerm
  @param  Anpr_EnergyTerm self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Anpr_EnergyTerm_Get(Anpr_EnergyTerm self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anpr_EnergyTerm self
  @returns   the result
**/
extern Acco_AccessObject Anpr_EnergyTerm_GetAccess(Anpr_EnergyTerm self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Anpr_EnergyTerm self
  @returns   the result
**/
extern Acco_AccessObject Anpr_EnergyTerm_GetActiveAccess(Anpr_EnergyTerm self);

/**
  Get for molsim.AnnealProtocol.EnergyTerm.annealProtocol

parent link
  @param  Anpr_EnergyTerm self
  @returns   the result
**/
extern Anpr_AnnealProtocol Anpr_EnergyTerm_GetAnnealProtocol(Anpr_EnergyTerm self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_EnergyTerm self
  @returns   the result
**/
extern ApiList Anpr_EnergyTerm_GetApplicationData(Anpr_EnergyTerm self);

/**
  GetByKey for molsim.AnnealProtocol.EnergyTerm
  @param  Anpr_EnergyTerm self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Anpr_EnergyTerm Anpr_EnergyTerm_GetByKey(Anpr_EnergyTerm self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Anpr_EnergyTerm self
  @returns   the result
**/
extern ApiString Anpr_EnergyTerm_GetClassName(Anpr_EnergyTerm self);

/**
  Get for molsim.AnnealProtocol.EnergyTerm.code

Name identifying 
EnergyTerm in the context of the application using the protocol
  @param  Anpr_EnergyTerm self
  @returns   the result
**/
extern ApiString Anpr_EnergyTerm_GetCode(Anpr_EnergyTerm self);

/**
  Get for molsim.AnnealProtocol.EnergyTerm.details

Free text, for notes, 
explanatory comments, etc.
  @param  Anpr_EnergyTerm self
  @returns   the result
**/
extern ApiString Anpr_EnergyTerm_GetDetails(Anpr_EnergyTerm self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Anpr_EnergyTerm self
  @returns   the result
**/
extern ApiList Anpr_EnergyTerm_GetFieldNames(Anpr_EnergyTerm self);

/**
  GetFullKey for molsim.AnnealProtocol.EnergyTerm
  @param  Anpr_EnergyTerm self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Anpr_EnergyTerm_GetFullKey(Anpr_EnergyTerm self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Anpr_EnergyTerm self
  @returns   the result
**/
extern ApiBoolean Anpr_EnergyTerm_GetInConstructor(Anpr_EnergyTerm self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Anpr_EnergyTerm self
  @returns   the result
**/
extern ApiBoolean Anpr_EnergyTerm_GetIsDeleted(Anpr_EnergyTerm self);

/**
  GetLocalKey for molsim.AnnealProtocol.EnergyTerm
  @param  Anpr_EnergyTerm self
  @returns  Local object key
**/
extern ApiObject Anpr_EnergyTerm_GetLocalKey(Anpr_EnergyTerm self);

/**
  Get for molsim.AnnealProtocol.EnergyTerm.name

User-intelligible name of 
EnergyTerm
  @param  Anpr_EnergyTerm self
  @returns   the result
**/
extern ApiString Anpr_EnergyTerm_GetName(Anpr_EnergyTerm self);

/**
  Get for molsim.AnnealProtocol.EnergyTerm.nmrSimEnergyTerms

Restraint 
groups that follow RestraintProtocol
  @param  Anpr_EnergyTerm self
  @returns   the result
**/
extern ApiSet Anpr_EnergyTerm_GetNmrSimEnergyTerms(Anpr_EnergyTerm self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Anpr_EnergyTerm self
  @returns   the result
**/
extern ApiString Anpr_EnergyTerm_GetPackageName(Anpr_EnergyTerm self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Anpr_EnergyTerm self
  @returns   the result
**/
extern ApiString Anpr_EnergyTerm_GetPackageShortName(Anpr_EnergyTerm self);

/**
  Get for molsim.AnnealProtocol.EnergyTerm.parent

link to parent object - 
synonym for annealProtocol
  @param  Anpr_EnergyTerm self
  @returns   the result
**/
extern Anpr_AnnealProtocol Anpr_EnergyTerm_GetParent(Anpr_EnergyTerm self);

/**
  Get for molsim.AnnealProtocol.EnergyTerm.potentialScales

child link to 
class PotentialScale
  @param  Anpr_EnergyTerm self
  @returns   the result
**/
extern ApiSet Anpr_EnergyTerm_GetPotentialScales(Anpr_EnergyTerm self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Anpr_EnergyTerm self
  @returns   the result
**/
extern ApiString Anpr_EnergyTerm_GetQualifiedName(Anpr_EnergyTerm self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Anpr_EnergyTerm self
  @returns   the result
**/
extern Impl_MemopsRoot Anpr_EnergyTerm_GetRoot(Anpr_EnergyTerm self);

/**
  Get for molsim.AnnealProtocol.EnergyTerm.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Anpr_EnergyTerm self
  @returns   the result
**/
extern ApiInteger Anpr_EnergyTerm_GetSerial(Anpr_EnergyTerm self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Anpr_EnergyTerm self
  @returns   the result
**/
extern Impl_TopObject Anpr_EnergyTerm_GetTopObject(Anpr_EnergyTerm self);

/**
  Constructor for molsim.AnnealProtocol.EnergyTerm
  @param  Anpr_AnnealProtocol parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Anpr_EnergyTerm Anpr_EnergyTerm_Init(Anpr_AnnealProtocol parent, ApiMap attrlinks);

/**
  Constructor for molsim.AnnealProtocol.EnergyTerm
  @param  Anpr_AnnealProtocol parent
  @returns  the new object
**/
extern Anpr_EnergyTerm Anpr_EnergyTerm_Init_reqd(Anpr_AnnealProtocol parent);

/**
  Factory function to create molsim.AnnealProtocol.PotentialScale
  @param  Anpr_EnergyTerm self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Anpr_PotentialScale Anpr_EnergyTerm_NewPotentialScale(Anpr_EnergyTerm self, ApiMap attrlinks);

/**
  Factory function to create molsim.AnnealProtocol.PotentialScale
  @param  Anpr_EnergyTerm self
  @param  Anpr_AnnealStage annealStage
  @param  float finalScale
  @param  float initialScale
  @param  Anpr_RefPotentialTerm refPotentialTerm
  @returns  the new object
**/
extern Anpr_PotentialScale Anpr_EnergyTerm_NewPotentialScale_reqd(Anpr_EnergyTerm self, Anpr_AnnealStage annealStage, float finalScale, float initialScale, Anpr_RefPotentialTerm refPotentialTerm);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_EnergyTerm self
  @param  Impl_ApplicationData value
**/
extern void *Anpr_EnergyTerm_RemoveApplicationData(Anpr_EnergyTerm self, Impl_ApplicationData value);

/**
  Remove for molsim.AnnealProtocol.EnergyTerm.nmrSimEnergyTerms

Restraint 
groups that follow RestraintProtocol
  @param  Anpr_EnergyTerm self
  @param  Nsim_NmrSimEnergyTerm value
**/
extern void *Anpr_EnergyTerm_RemoveNmrSimEnergyTerm(Anpr_EnergyTerm self, Nsim_NmrSimEnergyTerm value);

/**
  SetAttr for molsim.AnnealProtocol.EnergyTerm
  @param  Anpr_EnergyTerm self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Anpr_EnergyTerm_Set(Anpr_EnergyTerm self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anpr_EnergyTerm self
  @param  Acco_AccessObject value
**/
extern void *Anpr_EnergyTerm_SetAccess(Anpr_EnergyTerm self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_EnergyTerm self
  @param  ApiList values
**/
extern void *Anpr_EnergyTerm_SetApplicationData(Anpr_EnergyTerm self, ApiList values);

/**
  Set for molsim.AnnealProtocol.EnergyTerm.code

Name identifying 
EnergyTerm in the context of the application using the protocol
  @param  Anpr_EnergyTerm self
  @param  ApiString value
**/
extern void *Anpr_EnergyTerm_SetCode(Anpr_EnergyTerm self, ApiString value);

/**
  Set for molsim.AnnealProtocol.EnergyTerm.details

Free text, for notes, 
explanatory comments, etc.
  @param  Anpr_EnergyTerm self
  @param  ApiString value
**/
extern void *Anpr_EnergyTerm_SetDetails(Anpr_EnergyTerm self, ApiString value);

/**
  Set for molsim.AnnealProtocol.EnergyTerm.name

User-intelligible name of 
EnergyTerm
  @param  Anpr_EnergyTerm self
  @param  ApiString value
**/
extern void *Anpr_EnergyTerm_SetName(Anpr_EnergyTerm self, ApiString value);

/**
  Set for molsim.AnnealProtocol.EnergyTerm.nmrSimEnergyTerms

Restraint 
groups that follow RestraintProtocol
  @param  Anpr_EnergyTerm self
  @param  ApiSet values
**/
extern void *Anpr_EnergyTerm_SetNmrSimEnergyTerms(Anpr_EnergyTerm self, ApiSet values);

/**
  Set for molsim.AnnealProtocol.EnergyTerm.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Anpr_EnergyTerm self
  @param  ApiInteger value
**/
extern void *Anpr_EnergyTerm_SetSerial(Anpr_EnergyTerm self, ApiInteger value);

/**
  Sorted for molsim.AnnealProtocol.EnergyTerm.nmrSimEnergyTerms

Restraint 
groups that follow RestraintProtocol
  @param  Anpr_EnergyTerm self
  @returns   the result
**/
extern ApiList Anpr_EnergyTerm_SortedNmrSimEnergyTerms(Anpr_EnergyTerm self);

/**
  Sorted for molsim.AnnealProtocol.EnergyTerm.potentialScales

child link 
to class PotentialScale
  @param  Anpr_EnergyTerm self
  @returns   the result
**/
extern ApiList Anpr_EnergyTerm_SortedPotentialScales(Anpr_EnergyTerm self);

#endif /* __incl__molsim_api_AnnealProtocol_EnergyTerm_h__ */
