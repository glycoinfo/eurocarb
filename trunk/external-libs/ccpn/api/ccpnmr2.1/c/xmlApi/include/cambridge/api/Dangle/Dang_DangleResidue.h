
#ifndef __incl__cambridge_api_Dangle_DangleResidue_h__
#define __incl__cambridge_api_Dangle_DangleResidue_h__

#include "ccp.h"

/*
  Residue that holds Dangle angle predictions
*/

/* package cambridge.api.Dangle */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dang_DangleResidue self
  @param  Impl_ApplicationData value
**/
extern void *Dang_DangleResidue_AddApplicationData(Dang_DangleResidue self, Impl_ApplicationData value);

/**
  CheckAllValid for cambridge.Dangle.DangleResidue
  @param  Dang_DangleResidue self
  @param  ApiBoolean complete
**/
extern void *Dang_DangleResidue_CheckAllValid(Dang_DangleResidue self, ApiBoolean complete);

/**
  CheckValid for cambridge.Dangle.DangleResidue
  @param  Dang_DangleResidue self
  @param  ApiBoolean complete
**/
extern void *Dang_DangleResidue_CheckValid(Dang_DangleResidue self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dang_DangleResidue self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Dang_DangleResidue_FindAllApplicationData(Dang_DangleResidue self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dang_DangleResidue self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Dang_DangleResidue_FindAllApplicationData_keyval0(Dang_DangleResidue self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dang_DangleResidue self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Dang_DangleResidue_FindAllApplicationData_keyval1(Dang_DangleResidue self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dang_DangleResidue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Dang_DangleResidue_FindAllApplicationData_keyval2(Dang_DangleResidue self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dang_DangleResidue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Dang_DangleResidue_FindAllApplicationData_keyval3(Dang_DangleResidue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dang_DangleResidue self
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
extern ApiList Dang_DangleResidue_FindAllApplicationData_keyval4(Dang_DangleResidue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dang_DangleResidue self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Dang_DangleResidue_FindFirstApplicationData(Dang_DangleResidue self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dang_DangleResidue self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Dang_DangleResidue_FindFirstApplicationData_keyval0(Dang_DangleResidue self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dang_DangleResidue self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Dang_DangleResidue_FindFirstApplicationData_keyval1(Dang_DangleResidue self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dang_DangleResidue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Dang_DangleResidue_FindFirstApplicationData_keyval2(Dang_DangleResidue self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dang_DangleResidue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Dang_DangleResidue_FindFirstApplicationData_keyval3(Dang_DangleResidue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dang_DangleResidue self
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
extern Impl_ApplicationData Dang_DangleResidue_FindFirstApplicationData_keyval4(Dang_DangleResidue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for cambridge.Dangle.DangleResidue
  @param  Dang_DangleResidue self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Dang_DangleResidue_Get(Dang_DangleResidue self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Dang_DangleResidue self
  @returns   the result
**/
extern Acco_AccessObject Dang_DangleResidue_GetAccess(Dang_DangleResidue self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Dang_DangleResidue self
  @returns   the result
**/
extern Acco_AccessObject Dang_DangleResidue_GetActiveAccess(Dang_DangleResidue self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dang_DangleResidue self
  @returns   the result
**/
extern ApiList Dang_DangleResidue_GetApplicationData(Dang_DangleResidue self);

/**
  GetByKey for cambridge.Dangle.DangleResidue
  @param  Dang_DangleResidue self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Dang_DangleResidue Dang_DangleResidue_GetByKey(Dang_DangleResidue self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Dang_DangleResidue self
  @returns   the result
**/
extern ApiString Dang_DangleResidue_GetClassName(Dang_DangleResidue self);

/**
  Get for cambridge.Dangle.DangleResidue.dangleChain

parent link
  @param  Dang_DangleResidue self
  @returns   the result
**/
extern Dang_DangleChain Dang_DangleResidue_GetDangleChain(Dang_DangleResidue self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Dang_DangleResidue self
  @returns   the result
**/
extern ApiList Dang_DangleResidue_GetFieldNames(Dang_DangleResidue self);

/**
  GetFullKey for cambridge.Dangle.DangleResidue
  @param  Dang_DangleResidue self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Dang_DangleResidue_GetFullKey(Dang_DangleResidue self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Dang_DangleResidue self
  @returns   the result
**/
extern ApiBoolean Dang_DangleResidue_GetInConstructor(Dang_DangleResidue self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Dang_DangleResidue self
  @returns   the result
**/
extern ApiBoolean Dang_DangleResidue_GetIsDeleted(Dang_DangleResidue self);

/**
  GetLocalKey for cambridge.Dangle.DangleResidue
  @param  Dang_DangleResidue self
  @returns  Local object key
**/
extern ApiObject Dang_DangleResidue_GetLocalKey(Dang_DangleResidue self);

/**
  Get for cambridge.Dangle.DangleResidue.numIslands

Number of predicted 
'islands'
  @param  Dang_DangleResidue self
  @returns   the result
**/
extern ApiInteger Dang_DangleResidue_GetNumIslands(Dang_DangleResidue self);

/**
  Get for cambridge.Dangle.DangleResidue.omegaLower

lower omega value
  @param  Dang_DangleResidue self
  @returns   the result
**/
extern ApiFloat Dang_DangleResidue_GetOmegaLower(Dang_DangleResidue self);

/**
  Get for cambridge.Dangle.DangleResidue.omegaUpper

upper Omega value
  @param  Dang_DangleResidue self
  @returns   the result
**/
extern ApiFloat Dang_DangleResidue_GetOmegaUpper(Dang_DangleResidue self);

/**
  Get for cambridge.Dangle.DangleResidue.omegaValue

predicted omega value
  @param  Dang_DangleResidue self
  @returns   the result
**/
extern ApiFloat Dang_DangleResidue_GetOmegaValue(Dang_DangleResidue self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Dang_DangleResidue self
  @returns   the result
**/
extern ApiString Dang_DangleResidue_GetPackageName(Dang_DangleResidue self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Dang_DangleResidue self
  @returns   the result
**/
extern ApiString Dang_DangleResidue_GetPackageShortName(Dang_DangleResidue self);

/**
  Get for cambridge.Dangle.DangleResidue.parent

link to parent object - 
synonym for dangleChain
  @param  Dang_DangleResidue self
  @returns   the result
**/
extern Dang_DangleChain Dang_DangleResidue_GetParent(Dang_DangleResidue self);

/**
  Get for cambridge.Dangle.DangleResidue.phiLower

lower phi value
  @param  Dang_DangleResidue self
  @returns   the result
**/
extern ApiFloat Dang_DangleResidue_GetPhiLower(Dang_DangleResidue self);

/**
  Get for cambridge.Dangle.DangleResidue.phiPsiLikelihoodMatrix

Phi/psi 
likelihood matrix. 36*36 float matrix, packed as list.
  @param  Dang_DangleResidue self
  @returns   the result
**/
extern ApiList Dang_DangleResidue_GetPhiPsiLikelihoodMatrix(Dang_DangleResidue self);

/**
  Get for cambridge.Dangle.DangleResidue.phiUpper

upper phi value
  @param  Dang_DangleResidue self
  @returns   the result
**/
extern ApiFloat Dang_DangleResidue_GetPhiUpper(Dang_DangleResidue self);

/**
  Get for cambridge.Dangle.DangleResidue.phiValue

Predicted phi value
  @param  Dang_DangleResidue self
  @returns   the result
**/
extern ApiFloat Dang_DangleResidue_GetPhiValue(Dang_DangleResidue self);

/**
  Get for cambridge.Dangle.DangleResidue.psiLower

lower psi value
  @param  Dang_DangleResidue self
  @returns   the result
**/
extern ApiFloat Dang_DangleResidue_GetPsiLower(Dang_DangleResidue self);

/**
  Get for cambridge.Dangle.DangleResidue.psiUpper

upper psi value
  @param  Dang_DangleResidue self
  @returns   the result
**/
extern ApiFloat Dang_DangleResidue_GetPsiUpper(Dang_DangleResidue self);

/**
  Get for cambridge.Dangle.DangleResidue.psiValue

predicted psi value
  @param  Dang_DangleResidue self
  @returns   the result
**/
extern ApiFloat Dang_DangleResidue_GetPsiValue(Dang_DangleResidue self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Dang_DangleResidue self
  @returns   the result
**/
extern ApiString Dang_DangleResidue_GetQualifiedName(Dang_DangleResidue self);

/**
  Get for cambridge.Dangle.DangleResidue.residue

Residue for which angles 
are predicted
  @param  Dang_DangleResidue self
  @returns   the result
**/
extern Mols_Residue Dang_DangleResidue_GetResidue(Dang_DangleResidue self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Dang_DangleResidue self
  @returns   the result
**/
extern Impl_MemopsRoot Dang_DangleResidue_GetRoot(Dang_DangleResidue self);

/**
  Get for cambridge.Dangle.DangleResidue.secStrucCode

Secondary structure 
code.
  @param  Dang_DangleResidue self
  @returns   the result
**/
extern ApiString Dang_DangleResidue_GetSecStrucCode(Dang_DangleResidue self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Dang_DangleResidue self
  @returns   the result
**/
extern Impl_TopObject Dang_DangleResidue_GetTopObject(Dang_DangleResidue self);

/**
  Constructor for cambridge.Dangle.DangleResidue
  @param  Dang_DangleChain parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Dang_DangleResidue Dang_DangleResidue_Init(Dang_DangleChain parent, ApiMap attrlinks);

/**
  Constructor for cambridge.Dangle.DangleResidue
  @param  Dang_DangleChain parent
  @param  ApiList phiPsiLikelihoodMatrix
  @param  Mols_Residue residue
  @returns  the new object
**/
extern Dang_DangleResidue Dang_DangleResidue_Init_reqd(Dang_DangleChain parent, ApiList phiPsiLikelihoodMatrix, Mols_Residue residue);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dang_DangleResidue self
  @param  Impl_ApplicationData value
**/
extern void *Dang_DangleResidue_RemoveApplicationData(Dang_DangleResidue self, Impl_ApplicationData value);

/**
  SetAttr for cambridge.Dangle.DangleResidue
  @param  Dang_DangleResidue self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Dang_DangleResidue_Set(Dang_DangleResidue self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Dang_DangleResidue self
  @param  Acco_AccessObject value
**/
extern void *Dang_DangleResidue_SetAccess(Dang_DangleResidue self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dang_DangleResidue self
  @param  ApiList values
**/
extern void *Dang_DangleResidue_SetApplicationData(Dang_DangleResidue self, ApiList values);

/**
  Set for cambridge.Dangle.DangleResidue.numIslands

Number of predicted 
'islands'
  @param  Dang_DangleResidue self
  @param  ApiInteger value
**/
extern void *Dang_DangleResidue_SetNumIslands(Dang_DangleResidue self, ApiInteger value);

/**
  Set for cambridge.Dangle.DangleResidue.omegaLower

lower omega value
  @param  Dang_DangleResidue self
  @param  ApiFloat value
**/
extern void *Dang_DangleResidue_SetOmegaLower(Dang_DangleResidue self, ApiFloat value);

/**
  Set for cambridge.Dangle.DangleResidue.omegaUpper

upper Omega value
  @param  Dang_DangleResidue self
  @param  ApiFloat value
**/
extern void *Dang_DangleResidue_SetOmegaUpper(Dang_DangleResidue self, ApiFloat value);

/**
  Set for cambridge.Dangle.DangleResidue.omegaValue

predicted omega value
  @param  Dang_DangleResidue self
  @param  ApiFloat value
**/
extern void *Dang_DangleResidue_SetOmegaValue(Dang_DangleResidue self, ApiFloat value);

/**
  Set for cambridge.Dangle.DangleResidue.phiLower

lower phi value
  @param  Dang_DangleResidue self
  @param  ApiFloat value
**/
extern void *Dang_DangleResidue_SetPhiLower(Dang_DangleResidue self, ApiFloat value);

/**
  Set for cambridge.Dangle.DangleResidue.phiPsiLikelihoodMatrix

Phi/psi 
likelihood matrix. 36*36 float matrix, packed as list.
  @param  Dang_DangleResidue self
  @param  ApiList values
**/
extern void *Dang_DangleResidue_SetPhiPsiLikelihoodMatrix(Dang_DangleResidue self, ApiList values);

/**
  Set for cambridge.Dangle.DangleResidue.phiUpper

upper phi value
  @param  Dang_DangleResidue self
  @param  ApiFloat value
**/
extern void *Dang_DangleResidue_SetPhiUpper(Dang_DangleResidue self, ApiFloat value);

/**
  Set for cambridge.Dangle.DangleResidue.phiValue

Predicted phi value
  @param  Dang_DangleResidue self
  @param  ApiFloat value
**/
extern void *Dang_DangleResidue_SetPhiValue(Dang_DangleResidue self, ApiFloat value);

/**
  Set for cambridge.Dangle.DangleResidue.psiLower

lower psi value
  @param  Dang_DangleResidue self
  @param  ApiFloat value
**/
extern void *Dang_DangleResidue_SetPsiLower(Dang_DangleResidue self, ApiFloat value);

/**
  Set for cambridge.Dangle.DangleResidue.psiUpper

upper psi value
  @param  Dang_DangleResidue self
  @param  ApiFloat value
**/
extern void *Dang_DangleResidue_SetPsiUpper(Dang_DangleResidue self, ApiFloat value);

/**
  Set for cambridge.Dangle.DangleResidue.psiValue

predicted psi value
  @param  Dang_DangleResidue self
  @param  ApiFloat value
**/
extern void *Dang_DangleResidue_SetPsiValue(Dang_DangleResidue self, ApiFloat value);

/**
  Set for cambridge.Dangle.DangleResidue.residue

Residue for which angles 
are predicted
  @param  Dang_DangleResidue self
  @param  Mols_Residue value
**/
extern void *Dang_DangleResidue_SetResidue(Dang_DangleResidue self, Mols_Residue value);

/**
  Set for cambridge.Dangle.DangleResidue.secStrucCode

Secondary structure 
code.
  @param  Dang_DangleResidue self
  @param  ApiString value
**/
extern void *Dang_DangleResidue_SetSecStrucCode(Dang_DangleResidue self, ApiString value);

#endif /* __incl__cambridge_api_Dangle_DangleResidue_h__ */
