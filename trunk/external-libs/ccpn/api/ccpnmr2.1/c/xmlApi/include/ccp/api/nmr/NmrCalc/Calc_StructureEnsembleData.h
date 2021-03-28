
#ifndef __incl__ccp_api_nmr_NmrCalc_StructureEnsembleData_h__
#define __incl__ccp_api_nmr_NmrCalc_StructureEnsembleData_h__

#include "ccp.h"

/*
  StructureEnsemble data for calculations
*/

/* package ccp.api.nmr.NmrCalc */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_StructureEnsembleData self
  @param  Impl_ApplicationData value
**/
extern void *Calc_StructureEnsembleData_AddApplicationData(Calc_StructureEnsembleData self, Impl_ApplicationData value);

/**
  Add for 
ccp.nmr.NmrCalc.StructureEnsembleData.models

StructureEnsemble.Models 
used as data
  @param  Calc_StructureEnsembleData self
  @param  Coor_Model value
**/
extern void *Calc_StructureEnsembleData_AddModel(Calc_StructureEnsembleData self, Coor_Model value);

/**
  Add for ccp.nmr.NmrCalc.StructureEnsembleData.modelSerials

serial of 
MolStructure.Models linked to. If empty all Models in ensemble are used.
  @param  Calc_StructureEnsembleData self
  @param  ApiInteger value
**/
extern void *Calc_StructureEnsembleData_AddModelSerial(Calc_StructureEnsembleData self, ApiInteger value);

/**
  Add for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_StructureEnsembleData self
  @param  Calc_RunParameter value
**/
extern void *Calc_StructureEnsembleData_AddRunParameter(Calc_StructureEnsembleData self, Calc_RunParameter value);

/**
  CheckAllValid for ccp.nmr.NmrCalc.StructureEnsembleData
  @param  Calc_StructureEnsembleData self
  @param  ApiBoolean complete
**/
extern void *Calc_StructureEnsembleData_CheckAllValid(Calc_StructureEnsembleData self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.NmrCalc.StructureEnsembleData
  @param  Calc_StructureEnsembleData self
  @param  ApiBoolean complete
**/
extern void *Calc_StructureEnsembleData_CheckValid(Calc_StructureEnsembleData self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_StructureEnsembleData self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Calc_StructureEnsembleData_FindAllApplicationData(Calc_StructureEnsembleData self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_StructureEnsembleData self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Calc_StructureEnsembleData_FindAllApplicationData_keyval0(Calc_StructureEnsembleData self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_StructureEnsembleData self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Calc_StructureEnsembleData_FindAllApplicationData_keyval1(Calc_StructureEnsembleData self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_StructureEnsembleData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Calc_StructureEnsembleData_FindAllApplicationData_keyval2(Calc_StructureEnsembleData self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_StructureEnsembleData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Calc_StructureEnsembleData_FindAllApplicationData_keyval3(Calc_StructureEnsembleData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_StructureEnsembleData self
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
extern ApiList Calc_StructureEnsembleData_FindAllApplicationData_keyval4(Calc_StructureEnsembleData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.NmrCalc.StructureEnsembleData.models

StructureEnsemble.Models 
used as data
  @param  Calc_StructureEnsembleData self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Calc_StructureEnsembleData_FindAllModels(Calc_StructureEnsembleData self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.NmrCalc.StructureEnsembleData.models

StructureEnsemble.Models 
used as data
  @param  Calc_StructureEnsembleData self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Calc_StructureEnsembleData_FindAllModels_keyval0(Calc_StructureEnsembleData self);

/**
  FindAll for 
ccp.nmr.NmrCalc.StructureEnsembleData.models

StructureEnsemble.Models 
used as data
  @param  Calc_StructureEnsembleData self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Calc_StructureEnsembleData_FindAllModels_keyval1(Calc_StructureEnsembleData self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.NmrCalc.StructureEnsembleData.models

StructureEnsemble.Models 
used as data
  @param  Calc_StructureEnsembleData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Calc_StructureEnsembleData_FindAllModels_keyval2(Calc_StructureEnsembleData self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.NmrCalc.StructureEnsembleData.models

StructureEnsemble.Models 
used as data
  @param  Calc_StructureEnsembleData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Calc_StructureEnsembleData_FindAllModels_keyval3(Calc_StructureEnsembleData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.NmrCalc.StructureEnsembleData.models

StructureEnsemble.Models 
used as data
  @param  Calc_StructureEnsembleData self
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
extern ApiList Calc_StructureEnsembleData_FindAllModels_keyval4(Calc_StructureEnsembleData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_StructureEnsembleData self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Calc_StructureEnsembleData_FindAllRunParameters(Calc_StructureEnsembleData self, ApiMap conditions);

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_StructureEnsembleData self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Calc_StructureEnsembleData_FindAllRunParameters_keyval0(Calc_StructureEnsembleData self);

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_StructureEnsembleData self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Calc_StructureEnsembleData_FindAllRunParameters_keyval1(Calc_StructureEnsembleData self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_StructureEnsembleData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Calc_StructureEnsembleData_FindAllRunParameters_keyval2(Calc_StructureEnsembleData self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_StructureEnsembleData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Calc_StructureEnsembleData_FindAllRunParameters_keyval3(Calc_StructureEnsembleData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_StructureEnsembleData self
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
extern ApiSet Calc_StructureEnsembleData_FindAllRunParameters_keyval4(Calc_StructureEnsembleData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_StructureEnsembleData self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Calc_StructureEnsembleData_FindFirstApplicationData(Calc_StructureEnsembleData self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_StructureEnsembleData self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Calc_StructureEnsembleData_FindFirstApplicationData_keyval0(Calc_StructureEnsembleData self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_StructureEnsembleData self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Calc_StructureEnsembleData_FindFirstApplicationData_keyval1(Calc_StructureEnsembleData self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_StructureEnsembleData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Calc_StructureEnsembleData_FindFirstApplicationData_keyval2(Calc_StructureEnsembleData self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_StructureEnsembleData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Calc_StructureEnsembleData_FindFirstApplicationData_keyval3(Calc_StructureEnsembleData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_StructureEnsembleData self
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
extern Impl_ApplicationData Calc_StructureEnsembleData_FindFirstApplicationData_keyval4(Calc_StructureEnsembleData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.NmrCalc.StructureEnsembleData.models

StructureEnsemble.Models 
used as data
  @param  Calc_StructureEnsembleData self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Coor_Model Calc_StructureEnsembleData_FindFirstModel(Calc_StructureEnsembleData self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrCalc.StructureEnsembleData.models

StructureEnsemble.Models 
used as data
  @param  Calc_StructureEnsembleData self
  @returns  the first value that satisfies the conditions 
**/
extern Coor_Model Calc_StructureEnsembleData_FindFirstModel_keyval0(Calc_StructureEnsembleData self);

/**
  FindFirst for 
ccp.nmr.NmrCalc.StructureEnsembleData.models

StructureEnsemble.Models 
used as data
  @param  Calc_StructureEnsembleData self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Coor_Model Calc_StructureEnsembleData_FindFirstModel_keyval1(Calc_StructureEnsembleData self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.NmrCalc.StructureEnsembleData.models

StructureEnsemble.Models 
used as data
  @param  Calc_StructureEnsembleData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Coor_Model Calc_StructureEnsembleData_FindFirstModel_keyval2(Calc_StructureEnsembleData self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.NmrCalc.StructureEnsembleData.models

StructureEnsemble.Models 
used as data
  @param  Calc_StructureEnsembleData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Coor_Model Calc_StructureEnsembleData_FindFirstModel_keyval3(Calc_StructureEnsembleData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.NmrCalc.StructureEnsembleData.models

StructureEnsemble.Models 
used as data
  @param  Calc_StructureEnsembleData self
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
extern Coor_Model Calc_StructureEnsembleData_FindFirstModel_keyval4(Calc_StructureEnsembleData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_StructureEnsembleData self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Calc_RunParameter Calc_StructureEnsembleData_FindFirstRunParameter(Calc_StructureEnsembleData self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_StructureEnsembleData self
  @returns  the first value that satisfies the conditions 
**/
extern Calc_RunParameter Calc_StructureEnsembleData_FindFirstRunParameter_keyval0(Calc_StructureEnsembleData self);

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_StructureEnsembleData self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Calc_RunParameter Calc_StructureEnsembleData_FindFirstRunParameter_keyval1(Calc_StructureEnsembleData self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_StructureEnsembleData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Calc_RunParameter Calc_StructureEnsembleData_FindFirstRunParameter_keyval2(Calc_StructureEnsembleData self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_StructureEnsembleData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Calc_RunParameter Calc_StructureEnsembleData_FindFirstRunParameter_keyval3(Calc_StructureEnsembleData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_StructureEnsembleData self
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
extern Calc_RunParameter Calc_StructureEnsembleData_FindFirstRunParameter_keyval4(Calc_StructureEnsembleData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.NmrCalc.StructureEnsembleData
  @param  Calc_StructureEnsembleData self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Calc_StructureEnsembleData_Get(Calc_StructureEnsembleData self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Calc_StructureEnsembleData self
  @returns   the result
**/
extern Acco_AccessObject Calc_StructureEnsembleData_GetAccess(Calc_StructureEnsembleData self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Calc_StructureEnsembleData self
  @returns   the result
**/
extern Acco_AccessObject Calc_StructureEnsembleData_GetActiveAccess(Calc_StructureEnsembleData self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_StructureEnsembleData self
  @returns   the result
**/
extern ApiList Calc_StructureEnsembleData_GetApplicationData(Calc_StructureEnsembleData self);

/**
  GetByKey for ccp.nmr.NmrCalc.StructureEnsembleData
  @param  Calc_StructureEnsembleData self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Calc_StructureEnsembleData Calc_StructureEnsembleData_GetByKey(Calc_StructureEnsembleData self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Calc_StructureEnsembleData self
  @returns   the result
**/
extern ApiString Calc_StructureEnsembleData_GetClassName(Calc_StructureEnsembleData self);

/**
  Get for ccp.nmr.NmrCalc.Data.details

Free text, for notes, explanatory 
comments, etc.
  @param  Calc_StructureEnsembleData self
  @returns   the result
**/
extern ApiString Calc_StructureEnsembleData_GetDetails(Calc_StructureEnsembleData self);

/**
  Get for ccp.nmr.NmrCalc.StructureEnsembleData.ensembleId

ensembleId of 
relevant StructureEnsemble - used in deriving link to Structures
  @param  Calc_StructureEnsembleData self
  @returns   the result
**/
extern ApiInteger Calc_StructureEnsembleData_GetEnsembleId(Calc_StructureEnsembleData self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Calc_StructureEnsembleData self
  @returns   the result
**/
extern ApiList Calc_StructureEnsembleData_GetFieldNames(Calc_StructureEnsembleData self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Calc_StructureEnsembleData self
  @returns   the result
**/
extern ApiBoolean Calc_StructureEnsembleData_GetInConstructor(Calc_StructureEnsembleData self);

/**
  Get for ccp.nmr.NmrCalc.Data.ioRole

Role of data in calculation (input 
/ output).
  @param  Calc_StructureEnsembleData self
  @returns   the result
**/
extern ApiString Calc_StructureEnsembleData_GetIoRole(Calc_StructureEnsembleData self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Calc_StructureEnsembleData self
  @returns   the result
**/
extern ApiBoolean Calc_StructureEnsembleData_GetIsDeleted(Calc_StructureEnsembleData self);

/**
  Get for ccp.nmr.NmrCalc.StructureEnsembleData.modelSerials

serial of 
MolStructure.Models linked to. If empty all Models in ensemble are used.
  @param  Calc_StructureEnsembleData self
  @returns   the result
**/
extern ApiList Calc_StructureEnsembleData_GetModelSerials(Calc_StructureEnsembleData self);

/**
  getter for derived link models
  @param  Calc_StructureEnsembleData self
  @returns   the result
**/
extern ApiList Calc_StructureEnsembleData_GetModels(Calc_StructureEnsembleData self);

/**
  Get for ccp.nmr.NmrCalc.StructureEnsembleData.molSystemCode

MolSystem 
code of relevant MolSystem - used in deriving link to Structures
  @param  Calc_StructureEnsembleData self
  @returns   the result
**/
extern ApiString Calc_StructureEnsembleData_GetMolSystemCode(Calc_StructureEnsembleData self);

/**
  Get for ccp.nmr.NmrCalc.Data.name

name identifying data
  @param  Calc_StructureEnsembleData self
  @returns   the result
**/
extern ApiString Calc_StructureEnsembleData_GetName(Calc_StructureEnsembleData self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Calc_StructureEnsembleData self
  @returns   the result
**/
extern ApiString Calc_StructureEnsembleData_GetPackageName(Calc_StructureEnsembleData self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Calc_StructureEnsembleData self
  @returns   the result
**/
extern ApiString Calc_StructureEnsembleData_GetPackageShortName(Calc_StructureEnsembleData self);

/**
  Get for ccp.nmr.NmrCalc.Data.parent

link to parent object - synonym for 
run
  @param  Calc_StructureEnsembleData self
  @returns   the result
**/
extern Calc_Run Calc_StructureEnsembleData_GetParent(Calc_StructureEnsembleData self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Calc_StructureEnsembleData self
  @returns   the result
**/
extern ApiString Calc_StructureEnsembleData_GetQualifiedName(Calc_StructureEnsembleData self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Calc_StructureEnsembleData self
  @returns   the result
**/
extern Impl_MemopsRoot Calc_StructureEnsembleData_GetRoot(Calc_StructureEnsembleData self);

/**
  Get for ccp.nmr.NmrCalc.Data.run

parent link
  @param  Calc_StructureEnsembleData self
  @returns   the result
**/
extern Calc_Run Calc_StructureEnsembleData_GetRun(Calc_StructureEnsembleData self);

/**
  Get for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_StructureEnsembleData self
  @returns   the result
**/
extern ApiSet Calc_StructureEnsembleData_GetRunParameters(Calc_StructureEnsembleData self);

/**
  Get for ccp.nmr.NmrCalc.Data.serial

Serial number of object. Serves as 
object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Calc_StructureEnsembleData self
  @returns   the result
**/
extern ApiInteger Calc_StructureEnsembleData_GetSerial(Calc_StructureEnsembleData self);

/**
  getter for derived link structureEnsemble
  @param  Calc_StructureEnsembleData self
  @returns   the result
**/
extern Coor_StructureEnsemble Calc_StructureEnsembleData_GetStructureEnsemble(Calc_StructureEnsembleData self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Calc_StructureEnsembleData self
  @returns   the result
**/
extern Impl_TopObject Calc_StructureEnsembleData_GetTopObject(Calc_StructureEnsembleData self);

/**
  Get for ccp.nmr.NmrCalc.Data.weight

Weight given to data
  @param  Calc_StructureEnsembleData self
  @returns   the result
**/
extern ApiFloat Calc_StructureEnsembleData_GetWeight(Calc_StructureEnsembleData self);

/**
  Constructor for ccp.nmr.NmrCalc.StructureEnsembleData
  @param  Calc_Run parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Calc_StructureEnsembleData Calc_StructureEnsembleData_Init(Calc_Run parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.NmrCalc.StructureEnsembleData
  @param  Calc_Run parent
  @param  ApiInteger ensembleId
  @param  char * molSystemCode
  @returns  the new object
**/
extern Calc_StructureEnsembleData Calc_StructureEnsembleData_Init_reqd(Calc_Run parent, ApiInteger ensembleId, char * molSystemCode);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_StructureEnsembleData self
  @param  Impl_ApplicationData value
**/
extern void *Calc_StructureEnsembleData_RemoveApplicationData(Calc_StructureEnsembleData self, Impl_ApplicationData value);

/**
  Remove for 
ccp.nmr.NmrCalc.StructureEnsembleData.models

StructureEnsemble.Models 
used as data
  @param  Calc_StructureEnsembleData self
  @param  Coor_Model value
**/
extern void *Calc_StructureEnsembleData_RemoveModel(Calc_StructureEnsembleData self, Coor_Model value);

/**
  Remove for ccp.nmr.NmrCalc.StructureEnsembleData.modelSerials

serial of 
MolStructure.Models linked to. If empty all Models in ensemble are used.
  @param  Calc_StructureEnsembleData self
  @param  ApiInteger value
**/
extern void *Calc_StructureEnsembleData_RemoveModelSerial(Calc_StructureEnsembleData self, ApiInteger value);

/**
  Remove for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_StructureEnsembleData self
  @param  Calc_RunParameter value
**/
extern void *Calc_StructureEnsembleData_RemoveRunParameter(Calc_StructureEnsembleData self, Calc_RunParameter value);

/**
  SetAttr for ccp.nmr.NmrCalc.StructureEnsembleData
  @param  Calc_StructureEnsembleData self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Calc_StructureEnsembleData_Set(Calc_StructureEnsembleData self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Calc_StructureEnsembleData self
  @param  Acco_AccessObject value
**/
extern void *Calc_StructureEnsembleData_SetAccess(Calc_StructureEnsembleData self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_StructureEnsembleData self
  @param  ApiList values
**/
extern void *Calc_StructureEnsembleData_SetApplicationData(Calc_StructureEnsembleData self, ApiList values);

/**
  Set for ccp.nmr.NmrCalc.Data.details

Free text, for notes, explanatory 
comments, etc.
  @param  Calc_StructureEnsembleData self
  @param  ApiString value
**/
extern void *Calc_StructureEnsembleData_SetDetails(Calc_StructureEnsembleData self, ApiString value);

/**
  Set for ccp.nmr.NmrCalc.StructureEnsembleData.ensembleId

ensembleId of 
relevant StructureEnsemble - used in deriving link to Structures
  @param  Calc_StructureEnsembleData self
  @param  ApiInteger value
**/
extern void *Calc_StructureEnsembleData_SetEnsembleId(Calc_StructureEnsembleData self, ApiInteger value);

/**
  Set for ccp.nmr.NmrCalc.Data.ioRole

Role of data in calculation (input 
/ output).
  @param  Calc_StructureEnsembleData self
  @param  ApiString value
**/
extern void *Calc_StructureEnsembleData_SetIoRole(Calc_StructureEnsembleData self, ApiString value);

/**
  Set for ccp.nmr.NmrCalc.StructureEnsembleData.modelSerials

serial of 
MolStructure.Models linked to. If empty all Models in ensemble are used.
  @param  Calc_StructureEnsembleData self
  @param  ApiList values
**/
extern void *Calc_StructureEnsembleData_SetModelSerials(Calc_StructureEnsembleData self, ApiList values);

/**
  getter for derived link models
  @param  Calc_StructureEnsembleData self
  @param  ApiList values
**/
extern void *Calc_StructureEnsembleData_SetModels(Calc_StructureEnsembleData self, ApiList values);

/**
  Set for ccp.nmr.NmrCalc.StructureEnsembleData.molSystemCode

MolSystem 
code of relevant MolSystem - used in deriving link to Structures
  @param  Calc_StructureEnsembleData self
  @param  ApiString value
**/
extern void *Calc_StructureEnsembleData_SetMolSystemCode(Calc_StructureEnsembleData self, ApiString value);

/**
  Set for ccp.nmr.NmrCalc.Data.name

name identifying data
  @param  Calc_StructureEnsembleData self
  @param  ApiString value
**/
extern void *Calc_StructureEnsembleData_SetName(Calc_StructureEnsembleData self, ApiString value);

/**
  Set for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_StructureEnsembleData self
  @param  ApiSet values
**/
extern void *Calc_StructureEnsembleData_SetRunParameters(Calc_StructureEnsembleData self, ApiSet values);

/**
  Set for ccp.nmr.NmrCalc.Data.serial

Serial number of object. Serves as 
object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Calc_StructureEnsembleData self
  @param  ApiInteger value
**/
extern void *Calc_StructureEnsembleData_SetSerial(Calc_StructureEnsembleData self, ApiInteger value);

/**
  setter for derived link structureEnsemble
  @param  Calc_StructureEnsembleData self
  @param  Coor_StructureEnsemble value
**/
extern void *Calc_StructureEnsembleData_SetStructureEnsemble(Calc_StructureEnsembleData self, Coor_StructureEnsemble value);

/**
  Set for ccp.nmr.NmrCalc.Data.weight

Weight given to data
  @param  Calc_StructureEnsembleData self
  @param  ApiFloat value
**/
extern void *Calc_StructureEnsembleData_SetWeight(Calc_StructureEnsembleData self, ApiFloat value);

/**
  Sorted for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_StructureEnsembleData self
  @returns   the result
**/
extern ApiList Calc_StructureEnsembleData_SortedRunParameters(Calc_StructureEnsembleData self);

#endif /* __incl__ccp_api_nmr_NmrCalc_StructureEnsembleData_h__ */
