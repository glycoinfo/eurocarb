
#ifndef __incl__ccpnmr_api_Analysis_AxisMapping_h__
#define __incl__ccpnmr_api_Analysis_AxisMapping_h__

#include "ccp.h"

/*
  Mapping of AxisLabel to AnalysisDataDim
*/

/* package ccpnmr.api.Analysis */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisMapping self
  @param  Impl_ApplicationData value
**/
extern void *Anal_AxisMapping_AddApplicationData(Anal_AxisMapping self, Impl_ApplicationData value);

/**
  CheckAllValid for ccpnmr.Analysis.AxisMapping
  @param  Anal_AxisMapping self
  @param  ApiBoolean complete
**/
extern void *Anal_AxisMapping_CheckAllValid(Anal_AxisMapping self, ApiBoolean complete);

/**
  CheckValid for ccpnmr.Analysis.AxisMapping
  @param  Anal_AxisMapping self
  @param  ApiBoolean complete
**/
extern void *Anal_AxisMapping_CheckValid(Anal_AxisMapping self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisMapping self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_AxisMapping_FindAllApplicationData(Anal_AxisMapping self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisMapping self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_AxisMapping_FindAllApplicationData_keyval0(Anal_AxisMapping self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisMapping self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_AxisMapping_FindAllApplicationData_keyval1(Anal_AxisMapping self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_AxisMapping_FindAllApplicationData_keyval2(Anal_AxisMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_AxisMapping_FindAllApplicationData_keyval3(Anal_AxisMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisMapping self
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
extern ApiList Anal_AxisMapping_FindAllApplicationData_keyval4(Anal_AxisMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisMapping self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_AxisMapping_FindFirstApplicationData(Anal_AxisMapping self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisMapping self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_AxisMapping_FindFirstApplicationData_keyval0(Anal_AxisMapping self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisMapping self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_AxisMapping_FindFirstApplicationData_keyval1(Anal_AxisMapping self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_AxisMapping_FindFirstApplicationData_keyval2(Anal_AxisMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_AxisMapping_FindFirstApplicationData_keyval3(Anal_AxisMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisMapping self
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
extern Impl_ApplicationData Anal_AxisMapping_FindFirstApplicationData_keyval4(Anal_AxisMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccpnmr.Analysis.AxisMapping
  @param  Anal_AxisMapping self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Anal_AxisMapping_Get(Anal_AxisMapping self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_AxisMapping self
  @returns   the result
**/
extern Acco_AccessObject Anal_AxisMapping_GetAccess(Anal_AxisMapping self);

/**
  Get for ccpnmr.Analysis.AxisMapping.analysisDataDim

DataDim Currently 
on axis
  @param  Anal_AxisMapping self
  @returns   the result
**/
extern Anal_AnalysisDataDim Anal_AxisMapping_GetAnalysisDataDim(Anal_AxisMapping self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisMapping self
  @returns   the result
**/
extern ApiList Anal_AxisMapping_GetApplicationData(Anal_AxisMapping self);

/**
  GetByKey for ccpnmr.Analysis.AxisMapping
  @param  Anal_AxisMapping self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Anal_AxisMapping Anal_AxisMapping_GetByKey(Anal_AxisMapping self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Anal_AxisMapping self
  @returns   the result
**/
extern ApiString Anal_AxisMapping_GetClassName(Anal_AxisMapping self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Anal_AxisMapping self
  @returns   the result
**/
extern ApiList Anal_AxisMapping_GetFieldNames(Anal_AxisMapping self);

/**
  GetFullKey for ccpnmr.Analysis.AxisMapping
  @param  Anal_AxisMapping self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Anal_AxisMapping_GetFullKey(Anal_AxisMapping self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Anal_AxisMapping self
  @returns   the result
**/
extern ApiBoolean Anal_AxisMapping_GetInConstructor(Anal_AxisMapping self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Anal_AxisMapping self
  @returns   the result
**/
extern ApiBoolean Anal_AxisMapping_GetIsDeleted(Anal_AxisMapping self);

/**
  Get for ccpnmr.Analysis.AxisMapping.label

The axis label being mapped.
  @param  Anal_AxisMapping self
  @returns   the result
**/
extern ApiString Anal_AxisMapping_GetLabel(Anal_AxisMapping self);

/**
  GetLocalKey for ccpnmr.Analysis.AxisMapping
  @param  Anal_AxisMapping self
  @returns  Local object key
**/
extern ApiObject Anal_AxisMapping_GetLocalKey(Anal_AxisMapping self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Anal_AxisMapping self
  @returns   the result
**/
extern ApiString Anal_AxisMapping_GetPackageName(Anal_AxisMapping self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Anal_AxisMapping self
  @returns   the result
**/
extern ApiString Anal_AxisMapping_GetPackageShortName(Anal_AxisMapping self);

/**
  Get for ccpnmr.Analysis.AxisMapping.parent

link to parent object - 
synonym for spectrumWindowView
  @param  Anal_AxisMapping self
  @returns   the result
**/
extern Anal_SpectrumWindowView Anal_AxisMapping_GetParent(Anal_AxisMapping self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Anal_AxisMapping self
  @returns   the result
**/
extern ApiString Anal_AxisMapping_GetQualifiedName(Anal_AxisMapping self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Anal_AxisMapping self
  @returns   the result
**/
extern Impl_MemopsRoot Anal_AxisMapping_GetRoot(Anal_AxisMapping self);

/**
  Get for ccpnmr.Analysis.AxisMapping.spectrumWindowView

parent link
  @param  Anal_AxisMapping self
  @returns   the result
**/
extern Anal_SpectrumWindowView Anal_AxisMapping_GetSpectrumWindowView(Anal_AxisMapping self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Anal_AxisMapping self
  @returns   the result
**/
extern Impl_TopObject Anal_AxisMapping_GetTopObject(Anal_AxisMapping self);

/**
  Constructor for ccpnmr.Analysis.AxisMapping
  @param  Anal_SpectrumWindowView parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Anal_AxisMapping Anal_AxisMapping_Init(Anal_SpectrumWindowView parent, ApiMap attrlinks);

/**
  Constructor for ccpnmr.Analysis.AxisMapping
  @param  Anal_SpectrumWindowView parent
  @param  Anal_AnalysisDataDim analysisDataDim
  @param  char * label
  @returns  the new object
**/
extern Anal_AxisMapping Anal_AxisMapping_Init_reqd(Anal_SpectrumWindowView parent, Anal_AnalysisDataDim analysisDataDim, char * label);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisMapping self
  @param  Impl_ApplicationData value
**/
extern void *Anal_AxisMapping_RemoveApplicationData(Anal_AxisMapping self, Impl_ApplicationData value);

/**
  SetAttr for ccpnmr.Analysis.AxisMapping
  @param  Anal_AxisMapping self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Anal_AxisMapping_Set(Anal_AxisMapping self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_AxisMapping self
  @param  Acco_AccessObject value
**/
extern void *Anal_AxisMapping_SetAccess(Anal_AxisMapping self, Acco_AccessObject value);

/**
  Set for ccpnmr.Analysis.AxisMapping.analysisDataDim

DataDim Currently 
on axis
  @param  Anal_AxisMapping self
  @param  Anal_AnalysisDataDim value
**/
extern void *Anal_AxisMapping_SetAnalysisDataDim(Anal_AxisMapping self, Anal_AnalysisDataDim value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisMapping self
  @param  ApiList values
**/
extern void *Anal_AxisMapping_SetApplicationData(Anal_AxisMapping self, ApiList values);

/**
  Set for ccpnmr.Analysis.AxisMapping.label

The axis label being mapped.
  @param  Anal_AxisMapping self
  @param  ApiString value
**/
extern void *Anal_AxisMapping_SetLabel(Anal_AxisMapping self, ApiString value);

#endif /* __incl__ccpnmr_api_Analysis_AxisMapping_h__ */
