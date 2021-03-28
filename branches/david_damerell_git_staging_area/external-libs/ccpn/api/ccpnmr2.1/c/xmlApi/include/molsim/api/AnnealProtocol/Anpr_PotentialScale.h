
#ifndef __incl__molsim_api_AnnealProtocol_PotentialScale_h__
#define __incl__molsim_api_AnnealProtocol_PotentialScale_h__

#include "ccp.h"

/*
  Restraint potential scaling
*/

/* package molsim.api.AnnealProtocol */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_PotentialScale self
  @param  Impl_ApplicationData value
**/
extern void *Anpr_PotentialScale_AddApplicationData(Anpr_PotentialScale self, Impl_ApplicationData value);

/**
  Add for molsim.AnnealProtocol.PotentialScale.functionParams

Parameters 
for the scaling function. Their number and meaning depends on the value 
of 'function'.
  @param  Anpr_PotentialScale self
  @param  ApiFloat value
**/
extern void *Anpr_PotentialScale_AddFunctionParam(Anpr_PotentialScale self, ApiFloat value);

/**
  CheckAllValid for molsim.AnnealProtocol.PotentialScale
  @param  Anpr_PotentialScale self
  @param  ApiBoolean complete
**/
extern void *Anpr_PotentialScale_CheckAllValid(Anpr_PotentialScale self, ApiBoolean complete);

/**
  CheckValid for molsim.AnnealProtocol.PotentialScale
  @param  Anpr_PotentialScale self
  @param  ApiBoolean complete
**/
extern void *Anpr_PotentialScale_CheckValid(Anpr_PotentialScale self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_PotentialScale self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anpr_PotentialScale_FindAllApplicationData(Anpr_PotentialScale self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_PotentialScale self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anpr_PotentialScale_FindAllApplicationData_keyval0(Anpr_PotentialScale self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_PotentialScale self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anpr_PotentialScale_FindAllApplicationData_keyval1(Anpr_PotentialScale self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_PotentialScale self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anpr_PotentialScale_FindAllApplicationData_keyval2(Anpr_PotentialScale self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_PotentialScale self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anpr_PotentialScale_FindAllApplicationData_keyval3(Anpr_PotentialScale self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_PotentialScale self
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
extern ApiList Anpr_PotentialScale_FindAllApplicationData_keyval4(Anpr_PotentialScale self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_PotentialScale self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anpr_PotentialScale_FindFirstApplicationData(Anpr_PotentialScale self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_PotentialScale self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anpr_PotentialScale_FindFirstApplicationData_keyval0(Anpr_PotentialScale self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_PotentialScale self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anpr_PotentialScale_FindFirstApplicationData_keyval1(Anpr_PotentialScale self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_PotentialScale self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anpr_PotentialScale_FindFirstApplicationData_keyval2(Anpr_PotentialScale self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_PotentialScale self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anpr_PotentialScale_FindFirstApplicationData_keyval3(Anpr_PotentialScale self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_PotentialScale self
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
extern Impl_ApplicationData Anpr_PotentialScale_FindFirstApplicationData_keyval4(Anpr_PotentialScale self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for molsim.AnnealProtocol.PotentialScale
  @param  Anpr_PotentialScale self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Anpr_PotentialScale_Get(Anpr_PotentialScale self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anpr_PotentialScale self
  @returns   the result
**/
extern Acco_AccessObject Anpr_PotentialScale_GetAccess(Anpr_PotentialScale self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Anpr_PotentialScale self
  @returns   the result
**/
extern Acco_AccessObject Anpr_PotentialScale_GetActiveAccess(Anpr_PotentialScale self);

/**
  Get for molsim.AnnealProtocol.PotentialScale.annealStage

AnnealStage to 
which Potential scale refers
  @param  Anpr_PotentialScale self
  @returns   the result
**/
extern Anpr_AnnealStage Anpr_PotentialScale_GetAnnealStage(Anpr_PotentialScale self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_PotentialScale self
  @returns   the result
**/
extern ApiList Anpr_PotentialScale_GetApplicationData(Anpr_PotentialScale self);

/**
  GetByKey for molsim.AnnealProtocol.PotentialScale
  @param  Anpr_PotentialScale self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Anpr_PotentialScale Anpr_PotentialScale_GetByKey(Anpr_PotentialScale self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Anpr_PotentialScale self
  @returns   the result
**/
extern ApiString Anpr_PotentialScale_GetClassName(Anpr_PotentialScale self);

/**
  Get for molsim.AnnealProtocol.PotentialScale.code

Code identifying teh 
relevant potential scale in the context of the application using the 
protocol. INtended for potential terms that have more than one defining 
parameter being contnuopusly varied, like Haddock RDC angle projections 
restraints. For terms that have only one scaling constant (the normal 
case) this should be left to its default value 'std'.
  @param  Anpr_PotentialScale self
  @returns   the result
**/
extern ApiString Anpr_PotentialScale_GetCode(Anpr_PotentialScale self);

/**
  Get for molsim.AnnealProtocol.PotentialScale.energyTerm

parent link
  @param  Anpr_PotentialScale self
  @returns   the result
**/
extern Anpr_EnergyTerm Anpr_PotentialScale_GetEnergyTerm(Anpr_PotentialScale self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Anpr_PotentialScale self
  @returns   the result
**/
extern ApiList Anpr_PotentialScale_GetFieldNames(Anpr_PotentialScale self);

/**
  Get for molsim.AnnealProtocol.PotentialScale.finalScale

Scale at the 
end of the stage.
  @param  Anpr_PotentialScale self
  @returns   the result
**/
extern ApiFloat Anpr_PotentialScale_GetFinalScale(Anpr_PotentialScale self);

/**
  GetFullKey for molsim.AnnealProtocol.PotentialScale
  @param  Anpr_PotentialScale self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Anpr_PotentialScale_GetFullKey(Anpr_PotentialScale self, ApiBoolean useGuid);

/**
  Get for molsim.AnnealProtocol.PotentialScale.function

Function used for 
scaling. See ScaleFunction data type for details
  @param  Anpr_PotentialScale self
  @returns   the result
**/
extern ApiString Anpr_PotentialScale_GetFunction(Anpr_PotentialScale self);

/**
  Get for molsim.AnnealProtocol.PotentialScale.functionParams

Parameters 
for the scaling function. Their number and meaning depends on the value 
of 'function'.
  @param  Anpr_PotentialScale self
  @returns   the result
**/
extern ApiList Anpr_PotentialScale_GetFunctionParams(Anpr_PotentialScale self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Anpr_PotentialScale self
  @returns   the result
**/
extern ApiBoolean Anpr_PotentialScale_GetInConstructor(Anpr_PotentialScale self);

/**
  Get for molsim.AnnealProtocol.PotentialScale.initialScale

Scale at the 
start of the stage
  @param  Anpr_PotentialScale self
  @returns   the result
**/
extern ApiFloat Anpr_PotentialScale_GetInitialScale(Anpr_PotentialScale self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Anpr_PotentialScale self
  @returns   the result
**/
extern ApiBoolean Anpr_PotentialScale_GetIsDeleted(Anpr_PotentialScale self);

/**
  GetLocalKey for molsim.AnnealProtocol.PotentialScale
  @param  Anpr_PotentialScale self
  @returns  Local object key
**/
extern ApiObject Anpr_PotentialScale_GetLocalKey(Anpr_PotentialScale self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Anpr_PotentialScale self
  @returns   the result
**/
extern ApiString Anpr_PotentialScale_GetPackageName(Anpr_PotentialScale self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Anpr_PotentialScale self
  @returns   the result
**/
extern ApiString Anpr_PotentialScale_GetPackageShortName(Anpr_PotentialScale self);

/**
  Get for molsim.AnnealProtocol.PotentialScale.parent

link to parent 
object - synonym for energyTerm
  @param  Anpr_PotentialScale self
  @returns   the result
**/
extern Anpr_EnergyTerm Anpr_PotentialScale_GetParent(Anpr_PotentialScale self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Anpr_PotentialScale self
  @returns   the result
**/
extern ApiString Anpr_PotentialScale_GetQualifiedName(Anpr_PotentialScale self);

/**
  Get for molsim.AnnealProtocol.PotentialScale.refPotentialTerm

Potential 
term applied
  @param  Anpr_PotentialScale self
  @returns   the result
**/
extern Anpr_RefPotentialTerm Anpr_PotentialScale_GetRefPotentialTerm(Anpr_PotentialScale self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Anpr_PotentialScale self
  @returns   the result
**/
extern Impl_MemopsRoot Anpr_PotentialScale_GetRoot(Anpr_PotentialScale self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Anpr_PotentialScale self
  @returns   the result
**/
extern Impl_TopObject Anpr_PotentialScale_GetTopObject(Anpr_PotentialScale self);

/**
  Constructor for molsim.AnnealProtocol.PotentialScale
  @param  Anpr_EnergyTerm parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Anpr_PotentialScale Anpr_PotentialScale_Init(Anpr_EnergyTerm parent, ApiMap attrlinks);

/**
  Constructor for molsim.AnnealProtocol.PotentialScale
  @param  Anpr_EnergyTerm parent
  @param  Anpr_AnnealStage annealStage
  @param  float finalScale
  @param  float initialScale
  @param  Anpr_RefPotentialTerm refPotentialTerm
  @returns  the new object
**/
extern Anpr_PotentialScale Anpr_PotentialScale_Init_reqd(Anpr_EnergyTerm parent, Anpr_AnnealStage annealStage, float finalScale, float initialScale, Anpr_RefPotentialTerm refPotentialTerm);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_PotentialScale self
  @param  Impl_ApplicationData value
**/
extern void *Anpr_PotentialScale_RemoveApplicationData(Anpr_PotentialScale self, Impl_ApplicationData value);

/**
  Remove for 
molsim.AnnealProtocol.PotentialScale.functionParams

Parameters for the 
scaling function. Their number and meaning depends on the value of 
'function'.
  @param  Anpr_PotentialScale self
  @param  ApiFloat value
**/
extern void *Anpr_PotentialScale_RemoveFunctionParam(Anpr_PotentialScale self, ApiFloat value);

/**
  SetAttr for molsim.AnnealProtocol.PotentialScale
  @param  Anpr_PotentialScale self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Anpr_PotentialScale_Set(Anpr_PotentialScale self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anpr_PotentialScale self
  @param  Acco_AccessObject value
**/
extern void *Anpr_PotentialScale_SetAccess(Anpr_PotentialScale self, Acco_AccessObject value);

/**
  Set for molsim.AnnealProtocol.PotentialScale.annealStage

AnnealStage to 
which Potential scale refers
  @param  Anpr_PotentialScale self
  @param  Anpr_AnnealStage value
**/
extern void *Anpr_PotentialScale_SetAnnealStage(Anpr_PotentialScale self, Anpr_AnnealStage value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_PotentialScale self
  @param  ApiList values
**/
extern void *Anpr_PotentialScale_SetApplicationData(Anpr_PotentialScale self, ApiList values);

/**
  Set for molsim.AnnealProtocol.PotentialScale.code

Code identifying teh 
relevant potential scale in the context of the application using the 
protocol. INtended for potential terms that have more than one defining 
parameter being contnuopusly varied, like Haddock RDC angle projections 
restraints. For terms that have only one scaling constant (the normal 
case) this should be left to its default value 'std'.
  @param  Anpr_PotentialScale self
  @param  ApiString value
**/
extern void *Anpr_PotentialScale_SetCode(Anpr_PotentialScale self, ApiString value);

/**
  Set for molsim.AnnealProtocol.PotentialScale.finalScale

Scale at the 
end of the stage.
  @param  Anpr_PotentialScale self
  @param  ApiFloat value
**/
extern void *Anpr_PotentialScale_SetFinalScale(Anpr_PotentialScale self, ApiFloat value);

/**
  Set for molsim.AnnealProtocol.PotentialScale.function

Function used for 
scaling. See ScaleFunction data type for details
  @param  Anpr_PotentialScale self
  @param  ApiString value
**/
extern void *Anpr_PotentialScale_SetFunction(Anpr_PotentialScale self, ApiString value);

/**
  Set for molsim.AnnealProtocol.PotentialScale.functionParams

Parameters 
for the scaling function. Their number and meaning depends on the value 
of 'function'.
  @param  Anpr_PotentialScale self
  @param  ApiList values
**/
extern void *Anpr_PotentialScale_SetFunctionParams(Anpr_PotentialScale self, ApiList values);

/**
  Set for molsim.AnnealProtocol.PotentialScale.initialScale

Scale at the 
start of the stage
  @param  Anpr_PotentialScale self
  @param  ApiFloat value
**/
extern void *Anpr_PotentialScale_SetInitialScale(Anpr_PotentialScale self, ApiFloat value);

/**
  Set for molsim.AnnealProtocol.PotentialScale.refPotentialTerm

Potential 
term applied
  @param  Anpr_PotentialScale self
  @param  Anpr_RefPotentialTerm value
**/
extern void *Anpr_PotentialScale_SetRefPotentialTerm(Anpr_PotentialScale self, Anpr_RefPotentialTerm value);

#endif /* __incl__molsim_api_AnnealProtocol_PotentialScale_h__ */
