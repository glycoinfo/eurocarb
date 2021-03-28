
#ifndef __incl__ccpnmr_api_AnalysisProfile_RefExpProfile_h__
#define __incl__ccpnmr_api_AnalysisProfile_RefExpProfile_h__

#include "ccp.h"

/*
  Default profile for ref experiment types.
*/

/* package ccpnmr.api.AnalysisProfile */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_RefExpProfile self
  @param  Impl_ApplicationData value
**/
extern void *Anap_RefExpProfile_AddApplicationData(Anap_RefExpProfile self, Impl_ApplicationData value);

/**
  Add for ccpnmr.AnalysisProfile.RefExpProfile.negColorSchemes

Color 
schemes for negative contours - used as a cycle, the first one for the 
first experiment that fits, the second for the second, etc.
  @param  Anap_RefExpProfile self
  @param  Anap_ColorScheme value
**/
extern void *Anap_RefExpProfile_AddNegColorScheme(Anap_RefExpProfile self, Anap_ColorScheme value);

/**
  Add for ccpnmr.AnalysisProfile.RefExpProfile.peakSymbolColors

Colors 
for PeakSymbol (used as a cycle)
  @param  Anap_RefExpProfile self
  @param  ApiString value
**/
extern void *Anap_RefExpProfile_AddPeakSymbolColor(Anap_RefExpProfile self, ApiString value);

/**
  Add for ccpnmr.AnalysisProfile.RefExpProfile.peakTextColors

Colors for 
peak annotation text - used as a cycle
  @param  Anap_RefExpProfile self
  @param  ApiString value
**/
extern void *Anap_RefExpProfile_AddPeakTextColor(Anap_RefExpProfile self, ApiString value);

/**
  Add for ccpnmr.AnalysisProfile.RefExpProfile.posColorSchemes

Color 
schemes for postive contours - used as a cycle, the first one for the 
first experiment that fits, the second for the second, etc.
  @param  Anap_RefExpProfile self
  @param  Anap_ColorScheme value
**/
extern void *Anap_RefExpProfile_AddPosColorScheme(Anap_RefExpProfile self, Anap_ColorScheme value);

/**
  Add for ccpnmr.AnalysisProfile.RefExpProfile.refExpNames

Names of 
RefExperiments that RefExpProfile applies to.
  @param  Anap_RefExpProfile self
  @param  ApiString value
**/
extern void *Anap_RefExpProfile_AddRefExpName(Anap_RefExpProfile self, ApiString value);

/**
  CheckAllValid for ccpnmr.AnalysisProfile.RefExpProfile
  @param  Anap_RefExpProfile self
  @param  ApiBoolean complete
**/
extern void *Anap_RefExpProfile_CheckAllValid(Anap_RefExpProfile self, ApiBoolean complete);

/**
  CheckValid for ccpnmr.AnalysisProfile.RefExpProfile
  @param  Anap_RefExpProfile self
  @param  ApiBoolean complete
**/
extern void *Anap_RefExpProfile_CheckValid(Anap_RefExpProfile self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_RefExpProfile self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anap_RefExpProfile_FindAllApplicationData(Anap_RefExpProfile self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_RefExpProfile self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anap_RefExpProfile_FindAllApplicationData_keyval0(Anap_RefExpProfile self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_RefExpProfile self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anap_RefExpProfile_FindAllApplicationData_keyval1(Anap_RefExpProfile self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_RefExpProfile self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anap_RefExpProfile_FindAllApplicationData_keyval2(Anap_RefExpProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_RefExpProfile self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anap_RefExpProfile_FindAllApplicationData_keyval3(Anap_RefExpProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_RefExpProfile self
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
extern ApiList Anap_RefExpProfile_FindAllApplicationData_keyval4(Anap_RefExpProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccpnmr.AnalysisProfile.RefExpProfile.negColorSchemes

Color 
schemes for negative contours - used as a cycle, the first one for the 
first experiment that fits, the second for the second, etc.
  @param  Anap_RefExpProfile self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anap_RefExpProfile_FindAllNegColorSchemes(Anap_RefExpProfile self, ApiMap conditions);

/**
  FindAll for ccpnmr.AnalysisProfile.RefExpProfile.negColorSchemes

Color 
schemes for negative contours - used as a cycle, the first one for the 
first experiment that fits, the second for the second, etc.
  @param  Anap_RefExpProfile self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anap_RefExpProfile_FindAllNegColorSchemes_keyval0(Anap_RefExpProfile self);

/**
  FindAll for ccpnmr.AnalysisProfile.RefExpProfile.negColorSchemes

Color 
schemes for negative contours - used as a cycle, the first one for the 
first experiment that fits, the second for the second, etc.
  @param  Anap_RefExpProfile self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anap_RefExpProfile_FindAllNegColorSchemes_keyval1(Anap_RefExpProfile self, char * key, ApiObject value);

/**
  FindAll for ccpnmr.AnalysisProfile.RefExpProfile.negColorSchemes

Color 
schemes for negative contours - used as a cycle, the first one for the 
first experiment that fits, the second for the second, etc.
  @param  Anap_RefExpProfile self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anap_RefExpProfile_FindAllNegColorSchemes_keyval2(Anap_RefExpProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccpnmr.AnalysisProfile.RefExpProfile.negColorSchemes

Color 
schemes for negative contours - used as a cycle, the first one for the 
first experiment that fits, the second for the second, etc.
  @param  Anap_RefExpProfile self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anap_RefExpProfile_FindAllNegColorSchemes_keyval3(Anap_RefExpProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccpnmr.AnalysisProfile.RefExpProfile.negColorSchemes

Color 
schemes for negative contours - used as a cycle, the first one for the 
first experiment that fits, the second for the second, etc.
  @param  Anap_RefExpProfile self
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
extern ApiList Anap_RefExpProfile_FindAllNegColorSchemes_keyval4(Anap_RefExpProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccpnmr.AnalysisProfile.RefExpProfile.posColorSchemes

Color 
schemes for postive contours - used as a cycle, the first one for the 
first experiment that fits, the second for the second, etc.
  @param  Anap_RefExpProfile self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anap_RefExpProfile_FindAllPosColorSchemes(Anap_RefExpProfile self, ApiMap conditions);

/**
  FindAll for ccpnmr.AnalysisProfile.RefExpProfile.posColorSchemes

Color 
schemes for postive contours - used as a cycle, the first one for the 
first experiment that fits, the second for the second, etc.
  @param  Anap_RefExpProfile self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anap_RefExpProfile_FindAllPosColorSchemes_keyval0(Anap_RefExpProfile self);

/**
  FindAll for ccpnmr.AnalysisProfile.RefExpProfile.posColorSchemes

Color 
schemes for postive contours - used as a cycle, the first one for the 
first experiment that fits, the second for the second, etc.
  @param  Anap_RefExpProfile self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anap_RefExpProfile_FindAllPosColorSchemes_keyval1(Anap_RefExpProfile self, char * key, ApiObject value);

/**
  FindAll for ccpnmr.AnalysisProfile.RefExpProfile.posColorSchemes

Color 
schemes for postive contours - used as a cycle, the first one for the 
first experiment that fits, the second for the second, etc.
  @param  Anap_RefExpProfile self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anap_RefExpProfile_FindAllPosColorSchemes_keyval2(Anap_RefExpProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccpnmr.AnalysisProfile.RefExpProfile.posColorSchemes

Color 
schemes for postive contours - used as a cycle, the first one for the 
first experiment that fits, the second for the second, etc.
  @param  Anap_RefExpProfile self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anap_RefExpProfile_FindAllPosColorSchemes_keyval3(Anap_RefExpProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccpnmr.AnalysisProfile.RefExpProfile.posColorSchemes

Color 
schemes for postive contours - used as a cycle, the first one for the 
first experiment that fits, the second for the second, etc.
  @param  Anap_RefExpProfile self
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
extern ApiList Anap_RefExpProfile_FindAllPosColorSchemes_keyval4(Anap_RefExpProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_RefExpProfile self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anap_RefExpProfile_FindFirstApplicationData(Anap_RefExpProfile self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_RefExpProfile self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anap_RefExpProfile_FindFirstApplicationData_keyval0(Anap_RefExpProfile self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_RefExpProfile self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anap_RefExpProfile_FindFirstApplicationData_keyval1(Anap_RefExpProfile self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_RefExpProfile self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anap_RefExpProfile_FindFirstApplicationData_keyval2(Anap_RefExpProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_RefExpProfile self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anap_RefExpProfile_FindFirstApplicationData_keyval3(Anap_RefExpProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_RefExpProfile self
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
extern Impl_ApplicationData Anap_RefExpProfile_FindFirstApplicationData_keyval4(Anap_RefExpProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccpnmr.AnalysisProfile.RefExpProfile.negColorSchemes

Color schemes for 
negative contours - used as a cycle, the first one for the first 
experiment that fits, the second for the second, etc.
  @param  Anap_RefExpProfile self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Anap_ColorScheme Anap_RefExpProfile_FindFirstNegColorScheme(Anap_RefExpProfile self, ApiMap conditions);

/**
  FindFirst for 
ccpnmr.AnalysisProfile.RefExpProfile.negColorSchemes

Color schemes for 
negative contours - used as a cycle, the first one for the first 
experiment that fits, the second for the second, etc.
  @param  Anap_RefExpProfile self
  @returns  the first value that satisfies the conditions 
**/
extern Anap_ColorScheme Anap_RefExpProfile_FindFirstNegColorScheme_keyval0(Anap_RefExpProfile self);

/**
  FindFirst for 
ccpnmr.AnalysisProfile.RefExpProfile.negColorSchemes

Color schemes for 
negative contours - used as a cycle, the first one for the first 
experiment that fits, the second for the second, etc.
  @param  Anap_RefExpProfile self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Anap_ColorScheme Anap_RefExpProfile_FindFirstNegColorScheme_keyval1(Anap_RefExpProfile self, char * key, ApiObject value);

/**
  FindFirst for 
ccpnmr.AnalysisProfile.RefExpProfile.negColorSchemes

Color schemes for 
negative contours - used as a cycle, the first one for the first 
experiment that fits, the second for the second, etc.
  @param  Anap_RefExpProfile self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Anap_ColorScheme Anap_RefExpProfile_FindFirstNegColorScheme_keyval2(Anap_RefExpProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccpnmr.AnalysisProfile.RefExpProfile.negColorSchemes

Color schemes for 
negative contours - used as a cycle, the first one for the first 
experiment that fits, the second for the second, etc.
  @param  Anap_RefExpProfile self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Anap_ColorScheme Anap_RefExpProfile_FindFirstNegColorScheme_keyval3(Anap_RefExpProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccpnmr.AnalysisProfile.RefExpProfile.negColorSchemes

Color schemes for 
negative contours - used as a cycle, the first one for the first 
experiment that fits, the second for the second, etc.
  @param  Anap_RefExpProfile self
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
extern Anap_ColorScheme Anap_RefExpProfile_FindFirstNegColorScheme_keyval4(Anap_RefExpProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccpnmr.AnalysisProfile.RefExpProfile.posColorSchemes

Color schemes for 
postive contours - used as a cycle, the first one for the first 
experiment that fits, the second for the second, etc.
  @param  Anap_RefExpProfile self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Anap_ColorScheme Anap_RefExpProfile_FindFirstPosColorScheme(Anap_RefExpProfile self, ApiMap conditions);

/**
  FindFirst for 
ccpnmr.AnalysisProfile.RefExpProfile.posColorSchemes

Color schemes for 
postive contours - used as a cycle, the first one for the first 
experiment that fits, the second for the second, etc.
  @param  Anap_RefExpProfile self
  @returns  the first value that satisfies the conditions 
**/
extern Anap_ColorScheme Anap_RefExpProfile_FindFirstPosColorScheme_keyval0(Anap_RefExpProfile self);

/**
  FindFirst for 
ccpnmr.AnalysisProfile.RefExpProfile.posColorSchemes

Color schemes for 
postive contours - used as a cycle, the first one for the first 
experiment that fits, the second for the second, etc.
  @param  Anap_RefExpProfile self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Anap_ColorScheme Anap_RefExpProfile_FindFirstPosColorScheme_keyval1(Anap_RefExpProfile self, char * key, ApiObject value);

/**
  FindFirst for 
ccpnmr.AnalysisProfile.RefExpProfile.posColorSchemes

Color schemes for 
postive contours - used as a cycle, the first one for the first 
experiment that fits, the second for the second, etc.
  @param  Anap_RefExpProfile self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Anap_ColorScheme Anap_RefExpProfile_FindFirstPosColorScheme_keyval2(Anap_RefExpProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccpnmr.AnalysisProfile.RefExpProfile.posColorSchemes

Color schemes for 
postive contours - used as a cycle, the first one for the first 
experiment that fits, the second for the second, etc.
  @param  Anap_RefExpProfile self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Anap_ColorScheme Anap_RefExpProfile_FindFirstPosColorScheme_keyval3(Anap_RefExpProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccpnmr.AnalysisProfile.RefExpProfile.posColorSchemes

Color schemes for 
postive contours - used as a cycle, the first one for the first 
experiment that fits, the second for the second, etc.
  @param  Anap_RefExpProfile self
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
extern Anap_ColorScheme Anap_RefExpProfile_FindFirstPosColorScheme_keyval4(Anap_RefExpProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccpnmr.AnalysisProfile.RefExpProfile
  @param  Anap_RefExpProfile self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Anap_RefExpProfile_Get(Anap_RefExpProfile self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anap_RefExpProfile self
  @returns   the result
**/
extern Acco_AccessObject Anap_RefExpProfile_GetAccess(Anap_RefExpProfile self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Anap_RefExpProfile self
  @returns   the result
**/
extern Acco_AccessObject Anap_RefExpProfile_GetActiveAccess(Anap_RefExpProfile self);

/**
  Get for ccpnmr.AnalysisProfile.RefExpProfile.analysisProfile

parent 
link
  @param  Anap_RefExpProfile self
  @returns   the result
**/
extern Anap_AnalysisProfile Anap_RefExpProfile_GetAnalysisProfile(Anap_RefExpProfile self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_RefExpProfile self
  @returns   the result
**/
extern ApiList Anap_RefExpProfile_GetApplicationData(Anap_RefExpProfile self);

/**
  GetByKey for ccpnmr.AnalysisProfile.RefExpProfile
  @param  Anap_RefExpProfile self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Anap_RefExpProfile Anap_RefExpProfile_GetByKey(Anap_RefExpProfile self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Anap_RefExpProfile self
  @returns   the result
**/
extern ApiString Anap_RefExpProfile_GetClassName(Anap_RefExpProfile self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Anap_RefExpProfile self
  @returns   the result
**/
extern ApiList Anap_RefExpProfile_GetFieldNames(Anap_RefExpProfile self);

/**
  GetFullKey for ccpnmr.AnalysisProfile.RefExpProfile
  @param  Anap_RefExpProfile self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Anap_RefExpProfile_GetFullKey(Anap_RefExpProfile self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Anap_RefExpProfile self
  @returns   the result
**/
extern ApiBoolean Anap_RefExpProfile_GetInConstructor(Anap_RefExpProfile self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Anap_RefExpProfile self
  @returns   the result
**/
extern ApiBoolean Anap_RefExpProfile_GetIsDeleted(Anap_RefExpProfile self);

/**
  GetLocalKey for ccpnmr.AnalysisProfile.RefExpProfile
  @param  Anap_RefExpProfile self
  @returns  Local object key
**/
extern ApiObject Anap_RefExpProfile_GetLocalKey(Anap_RefExpProfile self);

/**
  Get for ccpnmr.AnalysisProfile.RefExpProfile.name

Name of RefExpProfile 
(key)
  @param  Anap_RefExpProfile self
  @returns   the result
**/
extern ApiString Anap_RefExpProfile_GetName(Anap_RefExpProfile self);

/**
  Get for ccpnmr.AnalysisProfile.RefExpProfile.negColorSchemes

Color 
schemes for negative contours - used as a cycle, the first one for the 
first experiment that fits, the second for the second, etc.
  @param  Anap_RefExpProfile self
  @returns   the result
**/
extern ApiList Anap_RefExpProfile_GetNegColorSchemes(Anap_RefExpProfile self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Anap_RefExpProfile self
  @returns   the result
**/
extern ApiString Anap_RefExpProfile_GetPackageName(Anap_RefExpProfile self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Anap_RefExpProfile self
  @returns   the result
**/
extern ApiString Anap_RefExpProfile_GetPackageShortName(Anap_RefExpProfile self);

/**
  Get for ccpnmr.AnalysisProfile.RefExpProfile.parent

link to parent 
object - synonym for analysisProfile
  @param  Anap_RefExpProfile self
  @returns   the result
**/
extern Anap_AnalysisProfile Anap_RefExpProfile_GetParent(Anap_RefExpProfile self);

/**
  Get for ccpnmr.AnalysisProfile.RefExpProfile.peakSymbolColors

Colors 
for PeakSymbol (used as a cycle)
  @param  Anap_RefExpProfile self
  @returns   the result
**/
extern ApiList Anap_RefExpProfile_GetPeakSymbolColors(Anap_RefExpProfile self);

/**
  Get for ccpnmr.AnalysisProfile.RefExpProfile.peakTextColors

Colors for 
peak annotation text - used as a cycle
  @param  Anap_RefExpProfile self
  @returns   the result
**/
extern ApiList Anap_RefExpProfile_GetPeakTextColors(Anap_RefExpProfile self);

/**
  Get for ccpnmr.AnalysisProfile.RefExpProfile.posColorSchemes

Color 
schemes for postive contours - used as a cycle, the first one for the 
first experiment that fits, the second for the second, etc.
  @param  Anap_RefExpProfile self
  @returns   the result
**/
extern ApiList Anap_RefExpProfile_GetPosColorSchemes(Anap_RefExpProfile self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Anap_RefExpProfile self
  @returns   the result
**/
extern ApiString Anap_RefExpProfile_GetQualifiedName(Anap_RefExpProfile self);

/**
  Get for ccpnmr.AnalysisProfile.RefExpProfile.refExpNames

Names of 
RefExperiments that RefExpProfile applies to.
  @param  Anap_RefExpProfile self
  @returns   the result
**/
extern ApiList Anap_RefExpProfile_GetRefExpNames(Anap_RefExpProfile self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Anap_RefExpProfile self
  @returns   the result
**/
extern Impl_MemopsRoot Anap_RefExpProfile_GetRoot(Anap_RefExpProfile self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Anap_RefExpProfile self
  @returns   the result
**/
extern Impl_TopObject Anap_RefExpProfile_GetTopObject(Anap_RefExpProfile self);

/**
  Constructor for ccpnmr.AnalysisProfile.RefExpProfile
  @param  Anap_AnalysisProfile parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Anap_RefExpProfile Anap_RefExpProfile_Init(Anap_AnalysisProfile parent, ApiMap attrlinks);

/**
  Constructor for ccpnmr.AnalysisProfile.RefExpProfile
  @param  Anap_AnalysisProfile parent
  @param  char * name
  @returns  the new object
**/
extern Anap_RefExpProfile Anap_RefExpProfile_Init_reqd(Anap_AnalysisProfile parent, char * name);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_RefExpProfile self
  @param  Impl_ApplicationData value
**/
extern void *Anap_RefExpProfile_RemoveApplicationData(Anap_RefExpProfile self, Impl_ApplicationData value);

/**
  Remove for ccpnmr.AnalysisProfile.RefExpProfile.negColorSchemes

Color 
schemes for negative contours - used as a cycle, the first one for the 
first experiment that fits, the second for the second, etc.
  @param  Anap_RefExpProfile self
  @param  Anap_ColorScheme value
**/
extern void *Anap_RefExpProfile_RemoveNegColorScheme(Anap_RefExpProfile self, Anap_ColorScheme value);

/**
  Remove for ccpnmr.AnalysisProfile.RefExpProfile.peakSymbolColors

Colors 
for PeakSymbol (used as a cycle)
  @param  Anap_RefExpProfile self
  @param  ApiString value
**/
extern void *Anap_RefExpProfile_RemovePeakSymbolColor(Anap_RefExpProfile self, ApiString value);

/**
  Remove for ccpnmr.AnalysisProfile.RefExpProfile.peakTextColors

Colors 
for peak annotation text - used as a cycle
  @param  Anap_RefExpProfile self
  @param  ApiString value
**/
extern void *Anap_RefExpProfile_RemovePeakTextColor(Anap_RefExpProfile self, ApiString value);

/**
  Remove for ccpnmr.AnalysisProfile.RefExpProfile.posColorSchemes

Color 
schemes for postive contours - used as a cycle, the first one for the 
first experiment that fits, the second for the second, etc.
  @param  Anap_RefExpProfile self
  @param  Anap_ColorScheme value
**/
extern void *Anap_RefExpProfile_RemovePosColorScheme(Anap_RefExpProfile self, Anap_ColorScheme value);

/**
  Remove for ccpnmr.AnalysisProfile.RefExpProfile.refExpNames

Names of 
RefExperiments that RefExpProfile applies to.
  @param  Anap_RefExpProfile self
  @param  ApiString value
**/
extern void *Anap_RefExpProfile_RemoveRefExpName(Anap_RefExpProfile self, ApiString value);

/**
  SetAttr for ccpnmr.AnalysisProfile.RefExpProfile
  @param  Anap_RefExpProfile self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Anap_RefExpProfile_Set(Anap_RefExpProfile self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anap_RefExpProfile self
  @param  Acco_AccessObject value
**/
extern void *Anap_RefExpProfile_SetAccess(Anap_RefExpProfile self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_RefExpProfile self
  @param  ApiList values
**/
extern void *Anap_RefExpProfile_SetApplicationData(Anap_RefExpProfile self, ApiList values);

/**
  Set for ccpnmr.AnalysisProfile.RefExpProfile.name

Name of RefExpProfile 
(key)
  @param  Anap_RefExpProfile self
  @param  ApiString value
**/
extern void *Anap_RefExpProfile_SetName(Anap_RefExpProfile self, ApiString value);

/**
  Set for ccpnmr.AnalysisProfile.RefExpProfile.negColorSchemes

Color 
schemes for negative contours - used as a cycle, the first one for the 
first experiment that fits, the second for the second, etc.
  @param  Anap_RefExpProfile self
  @param  ApiList values
**/
extern void *Anap_RefExpProfile_SetNegColorSchemes(Anap_RefExpProfile self, ApiList values);

/**
  Set for ccpnmr.AnalysisProfile.RefExpProfile.peakSymbolColors

Colors 
for PeakSymbol (used as a cycle)
  @param  Anap_RefExpProfile self
  @param  ApiList values
**/
extern void *Anap_RefExpProfile_SetPeakSymbolColors(Anap_RefExpProfile self, ApiList values);

/**
  Set for ccpnmr.AnalysisProfile.RefExpProfile.peakTextColors

Colors for 
peak annotation text - used as a cycle
  @param  Anap_RefExpProfile self
  @param  ApiList values
**/
extern void *Anap_RefExpProfile_SetPeakTextColors(Anap_RefExpProfile self, ApiList values);

/**
  Set for ccpnmr.AnalysisProfile.RefExpProfile.posColorSchemes

Color 
schemes for postive contours - used as a cycle, the first one for the 
first experiment that fits, the second for the second, etc.
  @param  Anap_RefExpProfile self
  @param  ApiList values
**/
extern void *Anap_RefExpProfile_SetPosColorSchemes(Anap_RefExpProfile self, ApiList values);

/**
  Set for ccpnmr.AnalysisProfile.RefExpProfile.refExpNames

Names of 
RefExperiments that RefExpProfile applies to.
  @param  Anap_RefExpProfile self
  @param  ApiList values
**/
extern void *Anap_RefExpProfile_SetRefExpNames(Anap_RefExpProfile self, ApiList values);

#endif /* __incl__ccpnmr_api_AnalysisProfile_RefExpProfile_h__ */
