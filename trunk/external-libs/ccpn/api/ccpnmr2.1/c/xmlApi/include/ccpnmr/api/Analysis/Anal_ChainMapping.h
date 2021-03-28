
#ifndef __incl__ccpnmr_api_Analysis_ChainMapping_h__
#define __incl__ccpnmr_api_Analysis_ChainMapping_h__

#include "ccp.h"

/*
  ChainMaping - serves to organise AtomSetMappings
*/

/* package ccpnmr.api.Analysis */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_ChainMapping self
  @param  Impl_ApplicationData value
**/
extern void *Anal_ChainMapping_AddApplicationData(Anal_ChainMapping self, Impl_ApplicationData value);

/**
  CheckAllValid for ccpnmr.Analysis.ChainMapping
  @param  Anal_ChainMapping self
  @param  ApiBoolean complete
**/
extern void *Anal_ChainMapping_CheckAllValid(Anal_ChainMapping self, ApiBoolean complete);

/**
  CheckValid for ccpnmr.Analysis.ChainMapping
  @param  Anal_ChainMapping self
  @param  ApiBoolean complete
**/
extern void *Anal_ChainMapping_CheckValid(Anal_ChainMapping self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_ChainMapping self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_ChainMapping_FindAllApplicationData(Anal_ChainMapping self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_ChainMapping self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_ChainMapping_FindAllApplicationData_keyval0(Anal_ChainMapping self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_ChainMapping self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_ChainMapping_FindAllApplicationData_keyval1(Anal_ChainMapping self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_ChainMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_ChainMapping_FindAllApplicationData_keyval2(Anal_ChainMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_ChainMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_ChainMapping_FindAllApplicationData_keyval3(Anal_ChainMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_ChainMapping self
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
extern ApiList Anal_ChainMapping_FindAllApplicationData_keyval4(Anal_ChainMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccpnmr.Analysis.ChainMapping.residueMappings

child link to 
class ResidueMapping
  @param  Anal_ChainMapping self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_ChainMapping_FindAllResidueMappings(Anal_ChainMapping self, ApiMap conditions);

/**
  FindAll for ccpnmr.Analysis.ChainMapping.residueMappings

child link to 
class ResidueMapping
  @param  Anal_ChainMapping self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_ChainMapping_FindAllResidueMappings_keyval0(Anal_ChainMapping self);

/**
  FindAll for ccpnmr.Analysis.ChainMapping.residueMappings

child link to 
class ResidueMapping
  @param  Anal_ChainMapping self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_ChainMapping_FindAllResidueMappings_keyval1(Anal_ChainMapping self, char * key, ApiObject value);

/**
  FindAll for ccpnmr.Analysis.ChainMapping.residueMappings

child link to 
class ResidueMapping
  @param  Anal_ChainMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_ChainMapping_FindAllResidueMappings_keyval2(Anal_ChainMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccpnmr.Analysis.ChainMapping.residueMappings

child link to 
class ResidueMapping
  @param  Anal_ChainMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_ChainMapping_FindAllResidueMappings_keyval3(Anal_ChainMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccpnmr.Analysis.ChainMapping.residueMappings

child link to 
class ResidueMapping
  @param  Anal_ChainMapping self
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
extern ApiSet Anal_ChainMapping_FindAllResidueMappings_keyval4(Anal_ChainMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_ChainMapping self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_ChainMapping_FindFirstApplicationData(Anal_ChainMapping self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_ChainMapping self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_ChainMapping_FindFirstApplicationData_keyval0(Anal_ChainMapping self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_ChainMapping self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_ChainMapping_FindFirstApplicationData_keyval1(Anal_ChainMapping self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_ChainMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_ChainMapping_FindFirstApplicationData_keyval2(Anal_ChainMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_ChainMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_ChainMapping_FindFirstApplicationData_keyval3(Anal_ChainMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_ChainMapping self
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
extern Impl_ApplicationData Anal_ChainMapping_FindFirstApplicationData_keyval4(Anal_ChainMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccpnmr.Analysis.ChainMapping.residueMappings

child link 
to class ResidueMapping
  @param  Anal_ChainMapping self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Anal_ResidueMapping Anal_ChainMapping_FindFirstResidueMapping(Anal_ChainMapping self, ApiMap conditions);

/**
  FindFirst for ccpnmr.Analysis.ChainMapping.residueMappings

child link 
to class ResidueMapping
  @param  Anal_ChainMapping self
  @returns  the first value that satisfies the conditions 
**/
extern Anal_ResidueMapping Anal_ChainMapping_FindFirstResidueMapping_keyval0(Anal_ChainMapping self);

/**
  FindFirst for ccpnmr.Analysis.ChainMapping.residueMappings

child link 
to class ResidueMapping
  @param  Anal_ChainMapping self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Anal_ResidueMapping Anal_ChainMapping_FindFirstResidueMapping_keyval1(Anal_ChainMapping self, char * key, ApiObject value);

/**
  FindFirst for ccpnmr.Analysis.ChainMapping.residueMappings

child link 
to class ResidueMapping
  @param  Anal_ChainMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Anal_ResidueMapping Anal_ChainMapping_FindFirstResidueMapping_keyval2(Anal_ChainMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccpnmr.Analysis.ChainMapping.residueMappings

child link 
to class ResidueMapping
  @param  Anal_ChainMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Anal_ResidueMapping Anal_ChainMapping_FindFirstResidueMapping_keyval3(Anal_ChainMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccpnmr.Analysis.ChainMapping.residueMappings

child link 
to class ResidueMapping
  @param  Anal_ChainMapping self
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
extern Anal_ResidueMapping Anal_ChainMapping_FindFirstResidueMapping_keyval4(Anal_ChainMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccpnmr.Analysis.ChainMapping
  @param  Anal_ChainMapping self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Anal_ChainMapping_Get(Anal_ChainMapping self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_ChainMapping self
  @returns   the result
**/
extern Acco_AccessObject Anal_ChainMapping_GetAccess(Anal_ChainMapping self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Anal_ChainMapping self
  @returns   the result
**/
extern Acco_AccessObject Anal_ChainMapping_GetActiveAccess(Anal_ChainMapping self);

/**
  Get for ccpnmr.Analysis.ChainMapping.analysisProject

parent link
  @param  Anal_ChainMapping self
  @returns   the result
**/
extern Anal_AnalysisProject Anal_ChainMapping_GetAnalysisProject(Anal_ChainMapping self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_ChainMapping self
  @returns   the result
**/
extern ApiList Anal_ChainMapping_GetApplicationData(Anal_ChainMapping self);

/**
  GetByKey for ccpnmr.Analysis.ChainMapping
  @param  Anal_ChainMapping self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Anal_ChainMapping Anal_ChainMapping_GetByKey(Anal_ChainMapping self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  getter for derived link chain
  @param  Anal_ChainMapping self
  @returns   the result
**/
extern Mols_Chain Anal_ChainMapping_GetChain(Anal_ChainMapping self);

/**
  Get for ccpnmr.Analysis.ChainMapping.chainCode

key for the chain, used 
to derive chain link
  @param  Anal_ChainMapping self
  @returns   the result
**/
extern ApiString Anal_ChainMapping_GetChainCode(Anal_ChainMapping self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Anal_ChainMapping self
  @returns   the result
**/
extern ApiString Anal_ChainMapping_GetClassName(Anal_ChainMapping self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Anal_ChainMapping self
  @returns   the result
**/
extern ApiList Anal_ChainMapping_GetFieldNames(Anal_ChainMapping self);

/**
  GetFullKey for ccpnmr.Analysis.ChainMapping
  @param  Anal_ChainMapping self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Anal_ChainMapping_GetFullKey(Anal_ChainMapping self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Anal_ChainMapping self
  @returns   the result
**/
extern ApiBoolean Anal_ChainMapping_GetInConstructor(Anal_ChainMapping self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Anal_ChainMapping self
  @returns   the result
**/
extern ApiBoolean Anal_ChainMapping_GetIsDeleted(Anal_ChainMapping self);

/**
  GetLocalKey for ccpnmr.Analysis.ChainMapping
  @param  Anal_ChainMapping self
  @returns  Local object key
**/
extern ApiObject Anal_ChainMapping_GetLocalKey(Anal_ChainMapping self);

/**
  Get for ccpnmr.Analysis.ChainMapping.molSystemCode

key for the 
molSystem, used to derive molSystem link
  @param  Anal_ChainMapping self
  @returns   the result
**/
extern ApiString Anal_ChainMapping_GetMolSystemCode(Anal_ChainMapping self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Anal_ChainMapping self
  @returns   the result
**/
extern ApiString Anal_ChainMapping_GetPackageName(Anal_ChainMapping self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Anal_ChainMapping self
  @returns   the result
**/
extern ApiString Anal_ChainMapping_GetPackageShortName(Anal_ChainMapping self);

/**
  Get for ccpnmr.Analysis.ChainMapping.parent

link to parent object - 
synonym for analysisProject
  @param  Anal_ChainMapping self
  @returns   the result
**/
extern Anal_AnalysisProject Anal_ChainMapping_GetParent(Anal_ChainMapping self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Anal_ChainMapping self
  @returns   the result
**/
extern ApiString Anal_ChainMapping_GetQualifiedName(Anal_ChainMapping self);

/**
  Get for ccpnmr.Analysis.ChainMapping.residueMappings

child link to 
class ResidueMapping
  @param  Anal_ChainMapping self
  @returns   the result
**/
extern ApiSet Anal_ChainMapping_GetResidueMappings(Anal_ChainMapping self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Anal_ChainMapping self
  @returns   the result
**/
extern Impl_MemopsRoot Anal_ChainMapping_GetRoot(Anal_ChainMapping self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Anal_ChainMapping self
  @returns   the result
**/
extern Impl_TopObject Anal_ChainMapping_GetTopObject(Anal_ChainMapping self);

/**
  Constructor for ccpnmr.Analysis.ChainMapping
  @param  Anal_AnalysisProject parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Anal_ChainMapping Anal_ChainMapping_Init(Anal_AnalysisProject parent, ApiMap attrlinks);

/**
  Constructor for ccpnmr.Analysis.ChainMapping
  @param  Anal_AnalysisProject parent
  @param  char * chainCode
  @param  char * molSystemCode
  @returns  the new object
**/
extern Anal_ChainMapping Anal_ChainMapping_Init_reqd(Anal_AnalysisProject parent, char * chainCode, char * molSystemCode);

/**
  Factory function to create ccpnmr.Analysis.ResidueMapping
  @param  Anal_ChainMapping self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Anal_ResidueMapping Anal_ChainMapping_NewResidueMapping(Anal_ChainMapping self, ApiMap attrlinks);

/**
  Factory function to create ccpnmr.Analysis.ResidueMapping
  @param  Anal_ChainMapping self
  @param  ApiInteger seqId
  @returns  the new object
**/
extern Anal_ResidueMapping Anal_ChainMapping_NewResidueMapping_reqd(Anal_ChainMapping self, ApiInteger seqId);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_ChainMapping self
  @param  Impl_ApplicationData value
**/
extern void *Anal_ChainMapping_RemoveApplicationData(Anal_ChainMapping self, Impl_ApplicationData value);

/**
  SetAttr for ccpnmr.Analysis.ChainMapping
  @param  Anal_ChainMapping self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Anal_ChainMapping_Set(Anal_ChainMapping self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_ChainMapping self
  @param  Acco_AccessObject value
**/
extern void *Anal_ChainMapping_SetAccess(Anal_ChainMapping self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_ChainMapping self
  @param  ApiList values
**/
extern void *Anal_ChainMapping_SetApplicationData(Anal_ChainMapping self, ApiList values);

/**
  Set for ccpnmr.Analysis.ChainMapping.chainCode

key for the chain, used 
to derive chain link
  @param  Anal_ChainMapping self
  @param  ApiString value
**/
extern void *Anal_ChainMapping_SetChainCode(Anal_ChainMapping self, ApiString value);

/**
  Set for ccpnmr.Analysis.ChainMapping.molSystemCode

key for the 
molSystem, used to derive molSystem link
  @param  Anal_ChainMapping self
  @param  ApiString value
**/
extern void *Anal_ChainMapping_SetMolSystemCode(Anal_ChainMapping self, ApiString value);

/**
  Sorted for ccpnmr.Analysis.ChainMapping.residueMappings

child link to 
class ResidueMapping
  @param  Anal_ChainMapping self
  @returns   the result
**/
extern ApiList Anal_ChainMapping_SortedResidueMappings(Anal_ChainMapping self);

#endif /* __incl__ccpnmr_api_Analysis_ChainMapping_h__ */
