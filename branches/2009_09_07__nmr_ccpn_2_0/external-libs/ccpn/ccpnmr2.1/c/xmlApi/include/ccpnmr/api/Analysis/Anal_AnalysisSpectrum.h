
#ifndef __incl__ccpnmr_api_Analysis_AnalysisSpectrum_h__
#define __incl__ccpnmr_api_Analysis_AnalysisSpectrum_h__

#include "ccp.h"

/*
  Analysis information for Spectra/DataSources
*/

/* package ccpnmr.api.Analysis */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisSpectrum self
  @param  Impl_ApplicationData value
**/
extern void *Anal_AnalysisSpectrum_AddApplicationData(Anal_AnalysisSpectrum self, Impl_ApplicationData value);

/**
  Add for ccpnmr.Analysis.AnalysisSpectrum.negColors

Colors for negative 
contours - in order
  @param  Anal_AnalysisSpectrum self
  @param  ApiString value
**/
extern void *Anal_AnalysisSpectrum_AddNegColor(Anal_AnalysisSpectrum self, ApiString value);

/**
  Add for ccpnmr.Analysis.AnalysisSpectrum.negLevels

Negative contour 
levels
  @param  Anal_AnalysisSpectrum self
  @param  ApiFloat value
**/
extern void *Anal_AnalysisSpectrum_AddNegLevel(Anal_AnalysisSpectrum self, ApiFloat value);

/**
  Add for ccpnmr.Analysis.AnalysisSpectrum.posColors

Colors for positive 
contours - in order
  @param  Anal_AnalysisSpectrum self
  @param  ApiString value
**/
extern void *Anal_AnalysisSpectrum_AddPosColor(Anal_AnalysisSpectrum self, ApiString value);

/**
  Add for ccpnmr.Analysis.AnalysisSpectrum.posLevels

Positive contour 
levels
  @param  Anal_AnalysisSpectrum self
  @param  ApiFloat value
**/
extern void *Anal_AnalysisSpectrum_AddPosLevel(Anal_AnalysisSpectrum self, ApiFloat value);

/**
  CheckAllValid for ccpnmr.Analysis.AnalysisSpectrum
  @param  Anal_AnalysisSpectrum self
  @param  ApiBoolean complete
**/
extern void *Anal_AnalysisSpectrum_CheckAllValid(Anal_AnalysisSpectrum self, ApiBoolean complete);

/**
  CheckValid for ccpnmr.Analysis.AnalysisSpectrum
  @param  Anal_AnalysisSpectrum self
  @param  ApiBoolean complete
**/
extern void *Anal_AnalysisSpectrum_CheckValid(Anal_AnalysisSpectrum self, ApiBoolean complete);

/**
  FindAll for ccpnmr.Analysis.AnalysisSpectrum.analysisDataDims

child 
link to class AnalysisDataDim
  @param  Anal_AnalysisSpectrum self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_AnalysisSpectrum_FindAllAnalysisDataDims(Anal_AnalysisSpectrum self, ApiMap conditions);

/**
  FindAll for ccpnmr.Analysis.AnalysisSpectrum.analysisDataDims

child 
link to class AnalysisDataDim
  @param  Anal_AnalysisSpectrum self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_AnalysisSpectrum_FindAllAnalysisDataDims_keyval0(Anal_AnalysisSpectrum self);

/**
  FindAll for ccpnmr.Analysis.AnalysisSpectrum.analysisDataDims

child 
link to class AnalysisDataDim
  @param  Anal_AnalysisSpectrum self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_AnalysisSpectrum_FindAllAnalysisDataDims_keyval1(Anal_AnalysisSpectrum self, char * key, ApiObject value);

/**
  FindAll for ccpnmr.Analysis.AnalysisSpectrum.analysisDataDims

child 
link to class AnalysisDataDim
  @param  Anal_AnalysisSpectrum self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_AnalysisSpectrum_FindAllAnalysisDataDims_keyval2(Anal_AnalysisSpectrum self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccpnmr.Analysis.AnalysisSpectrum.analysisDataDims

child 
link to class AnalysisDataDim
  @param  Anal_AnalysisSpectrum self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_AnalysisSpectrum_FindAllAnalysisDataDims_keyval3(Anal_AnalysisSpectrum self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccpnmr.Analysis.AnalysisSpectrum.analysisDataDims

child 
link to class AnalysisDataDim
  @param  Anal_AnalysisSpectrum self
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
extern ApiSet Anal_AnalysisSpectrum_FindAllAnalysisDataDims_keyval4(Anal_AnalysisSpectrum self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccpnmr.Analysis.AnalysisSpectrum.analysisPeakLists

child 
link to class AnalysisPeakList
  @param  Anal_AnalysisSpectrum self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_AnalysisSpectrum_FindAllAnalysisPeakLists(Anal_AnalysisSpectrum self, ApiMap conditions);

/**
  FindAll for ccpnmr.Analysis.AnalysisSpectrum.analysisPeakLists

child 
link to class AnalysisPeakList
  @param  Anal_AnalysisSpectrum self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_AnalysisSpectrum_FindAllAnalysisPeakLists_keyval0(Anal_AnalysisSpectrum self);

/**
  FindAll for ccpnmr.Analysis.AnalysisSpectrum.analysisPeakLists

child 
link to class AnalysisPeakList
  @param  Anal_AnalysisSpectrum self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_AnalysisSpectrum_FindAllAnalysisPeakLists_keyval1(Anal_AnalysisSpectrum self, char * key, ApiObject value);

/**
  FindAll for ccpnmr.Analysis.AnalysisSpectrum.analysisPeakLists

child 
link to class AnalysisPeakList
  @param  Anal_AnalysisSpectrum self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_AnalysisSpectrum_FindAllAnalysisPeakLists_keyval2(Anal_AnalysisSpectrum self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccpnmr.Analysis.AnalysisSpectrum.analysisPeakLists

child 
link to class AnalysisPeakList
  @param  Anal_AnalysisSpectrum self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_AnalysisSpectrum_FindAllAnalysisPeakLists_keyval3(Anal_AnalysisSpectrum self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccpnmr.Analysis.AnalysisSpectrum.analysisPeakLists

child 
link to class AnalysisPeakList
  @param  Anal_AnalysisSpectrum self
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
extern ApiSet Anal_AnalysisSpectrum_FindAllAnalysisPeakLists_keyval4(Anal_AnalysisSpectrum self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisSpectrum self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_AnalysisSpectrum_FindAllApplicationData(Anal_AnalysisSpectrum self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisSpectrum self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_AnalysisSpectrum_FindAllApplicationData_keyval0(Anal_AnalysisSpectrum self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisSpectrum self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_AnalysisSpectrum_FindAllApplicationData_keyval1(Anal_AnalysisSpectrum self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisSpectrum self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_AnalysisSpectrum_FindAllApplicationData_keyval2(Anal_AnalysisSpectrum self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisSpectrum self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_AnalysisSpectrum_FindAllApplicationData_keyval3(Anal_AnalysisSpectrum self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisSpectrum self
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
extern ApiList Anal_AnalysisSpectrum_FindAllApplicationData_keyval4(Anal_AnalysisSpectrum self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccpnmr.Analysis.AnalysisSpectrum.spectrumWindowViews

SpectrumWIndowViews 
viewing this Spectrum
  @param  Anal_AnalysisSpectrum self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_AnalysisSpectrum_FindAllSpectrumWindowViews(Anal_AnalysisSpectrum self, ApiMap conditions);

/**
  FindAll for 
ccpnmr.Analysis.AnalysisSpectrum.spectrumWindowViews

SpectrumWIndowViews 
viewing this Spectrum
  @param  Anal_AnalysisSpectrum self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_AnalysisSpectrum_FindAllSpectrumWindowViews_keyval0(Anal_AnalysisSpectrum self);

/**
  FindAll for 
ccpnmr.Analysis.AnalysisSpectrum.spectrumWindowViews

SpectrumWIndowViews 
viewing this Spectrum
  @param  Anal_AnalysisSpectrum self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_AnalysisSpectrum_FindAllSpectrumWindowViews_keyval1(Anal_AnalysisSpectrum self, char * key, ApiObject value);

/**
  FindAll for 
ccpnmr.Analysis.AnalysisSpectrum.spectrumWindowViews

SpectrumWIndowViews 
viewing this Spectrum
  @param  Anal_AnalysisSpectrum self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_AnalysisSpectrum_FindAllSpectrumWindowViews_keyval2(Anal_AnalysisSpectrum self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccpnmr.Analysis.AnalysisSpectrum.spectrumWindowViews

SpectrumWIndowViews 
viewing this Spectrum
  @param  Anal_AnalysisSpectrum self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_AnalysisSpectrum_FindAllSpectrumWindowViews_keyval3(Anal_AnalysisSpectrum self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccpnmr.Analysis.AnalysisSpectrum.spectrumWindowViews

SpectrumWIndowViews 
viewing this Spectrum
  @param  Anal_AnalysisSpectrum self
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
extern ApiSet Anal_AnalysisSpectrum_FindAllSpectrumWindowViews_keyval4(Anal_AnalysisSpectrum self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccpnmr.Analysis.AnalysisSpectrum.storedContours

child link 
to class StoredContour
  @param  Anal_AnalysisSpectrum self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_AnalysisSpectrum_FindAllStoredContours(Anal_AnalysisSpectrum self, ApiMap conditions);

/**
  FindAll for ccpnmr.Analysis.AnalysisSpectrum.storedContours

child link 
to class StoredContour
  @param  Anal_AnalysisSpectrum self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_AnalysisSpectrum_FindAllStoredContours_keyval0(Anal_AnalysisSpectrum self);

/**
  FindAll for ccpnmr.Analysis.AnalysisSpectrum.storedContours

child link 
to class StoredContour
  @param  Anal_AnalysisSpectrum self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_AnalysisSpectrum_FindAllStoredContours_keyval1(Anal_AnalysisSpectrum self, char * key, ApiObject value);

/**
  FindAll for ccpnmr.Analysis.AnalysisSpectrum.storedContours

child link 
to class StoredContour
  @param  Anal_AnalysisSpectrum self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_AnalysisSpectrum_FindAllStoredContours_keyval2(Anal_AnalysisSpectrum self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccpnmr.Analysis.AnalysisSpectrum.storedContours

child link 
to class StoredContour
  @param  Anal_AnalysisSpectrum self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_AnalysisSpectrum_FindAllStoredContours_keyval3(Anal_AnalysisSpectrum self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccpnmr.Analysis.AnalysisSpectrum.storedContours

child link 
to class StoredContour
  @param  Anal_AnalysisSpectrum self
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
extern ApiSet Anal_AnalysisSpectrum_FindAllStoredContours_keyval4(Anal_AnalysisSpectrum self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccpnmr.Analysis.AnalysisSpectrum.analysisDataDims

child 
link to class AnalysisDataDim
  @param  Anal_AnalysisSpectrum self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Anal_AnalysisDataDim Anal_AnalysisSpectrum_FindFirstAnalysisDataDim(Anal_AnalysisSpectrum self, ApiMap conditions);

/**
  FindFirst for ccpnmr.Analysis.AnalysisSpectrum.analysisDataDims

child 
link to class AnalysisDataDim
  @param  Anal_AnalysisSpectrum self
  @returns  the first value that satisfies the conditions 
**/
extern Anal_AnalysisDataDim Anal_AnalysisSpectrum_FindFirstAnalysisDataDim_keyval0(Anal_AnalysisSpectrum self);

/**
  FindFirst for ccpnmr.Analysis.AnalysisSpectrum.analysisDataDims

child 
link to class AnalysisDataDim
  @param  Anal_AnalysisSpectrum self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Anal_AnalysisDataDim Anal_AnalysisSpectrum_FindFirstAnalysisDataDim_keyval1(Anal_AnalysisSpectrum self, char * key, ApiObject value);

/**
  FindFirst for ccpnmr.Analysis.AnalysisSpectrum.analysisDataDims

child 
link to class AnalysisDataDim
  @param  Anal_AnalysisSpectrum self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Anal_AnalysisDataDim Anal_AnalysisSpectrum_FindFirstAnalysisDataDim_keyval2(Anal_AnalysisSpectrum self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccpnmr.Analysis.AnalysisSpectrum.analysisDataDims

child 
link to class AnalysisDataDim
  @param  Anal_AnalysisSpectrum self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Anal_AnalysisDataDim Anal_AnalysisSpectrum_FindFirstAnalysisDataDim_keyval3(Anal_AnalysisSpectrum self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccpnmr.Analysis.AnalysisSpectrum.analysisDataDims

child 
link to class AnalysisDataDim
  @param  Anal_AnalysisSpectrum self
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
extern Anal_AnalysisDataDim Anal_AnalysisSpectrum_FindFirstAnalysisDataDim_keyval4(Anal_AnalysisSpectrum self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccpnmr.Analysis.AnalysisSpectrum.analysisPeakLists

child 
link to class AnalysisPeakList
  @param  Anal_AnalysisSpectrum self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Anal_AnalysisPeakList Anal_AnalysisSpectrum_FindFirstAnalysisPeakList(Anal_AnalysisSpectrum self, ApiMap conditions);

/**
  FindFirst for ccpnmr.Analysis.AnalysisSpectrum.analysisPeakLists

child 
link to class AnalysisPeakList
  @param  Anal_AnalysisSpectrum self
  @returns  the first value that satisfies the conditions 
**/
extern Anal_AnalysisPeakList Anal_AnalysisSpectrum_FindFirstAnalysisPeakList_keyval0(Anal_AnalysisSpectrum self);

/**
  FindFirst for ccpnmr.Analysis.AnalysisSpectrum.analysisPeakLists

child 
link to class AnalysisPeakList
  @param  Anal_AnalysisSpectrum self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Anal_AnalysisPeakList Anal_AnalysisSpectrum_FindFirstAnalysisPeakList_keyval1(Anal_AnalysisSpectrum self, char * key, ApiObject value);

/**
  FindFirst for ccpnmr.Analysis.AnalysisSpectrum.analysisPeakLists

child 
link to class AnalysisPeakList
  @param  Anal_AnalysisSpectrum self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Anal_AnalysisPeakList Anal_AnalysisSpectrum_FindFirstAnalysisPeakList_keyval2(Anal_AnalysisSpectrum self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccpnmr.Analysis.AnalysisSpectrum.analysisPeakLists

child 
link to class AnalysisPeakList
  @param  Anal_AnalysisSpectrum self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Anal_AnalysisPeakList Anal_AnalysisSpectrum_FindFirstAnalysisPeakList_keyval3(Anal_AnalysisSpectrum self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccpnmr.Analysis.AnalysisSpectrum.analysisPeakLists

child 
link to class AnalysisPeakList
  @param  Anal_AnalysisSpectrum self
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
extern Anal_AnalysisPeakList Anal_AnalysisSpectrum_FindFirstAnalysisPeakList_keyval4(Anal_AnalysisSpectrum self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisSpectrum self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_AnalysisSpectrum_FindFirstApplicationData(Anal_AnalysisSpectrum self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisSpectrum self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_AnalysisSpectrum_FindFirstApplicationData_keyval0(Anal_AnalysisSpectrum self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisSpectrum self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_AnalysisSpectrum_FindFirstApplicationData_keyval1(Anal_AnalysisSpectrum self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisSpectrum self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_AnalysisSpectrum_FindFirstApplicationData_keyval2(Anal_AnalysisSpectrum self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisSpectrum self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_AnalysisSpectrum_FindFirstApplicationData_keyval3(Anal_AnalysisSpectrum self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisSpectrum self
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
extern Impl_ApplicationData Anal_AnalysisSpectrum_FindFirstApplicationData_keyval4(Anal_AnalysisSpectrum self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccpnmr.Analysis.AnalysisSpectrum.spectrumWindowViews

SpectrumWIndowViews 
viewing this Spectrum
  @param  Anal_AnalysisSpectrum self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Anal_SpectrumWindowView Anal_AnalysisSpectrum_FindFirstSpectrumWindowView(Anal_AnalysisSpectrum self, ApiMap conditions);

/**
  FindFirst for 
ccpnmr.Analysis.AnalysisSpectrum.spectrumWindowViews

SpectrumWIndowViews 
viewing this Spectrum
  @param  Anal_AnalysisSpectrum self
  @returns  the first value that satisfies the conditions 
**/
extern Anal_SpectrumWindowView Anal_AnalysisSpectrum_FindFirstSpectrumWindowView_keyval0(Anal_AnalysisSpectrum self);

/**
  FindFirst for 
ccpnmr.Analysis.AnalysisSpectrum.spectrumWindowViews

SpectrumWIndowViews 
viewing this Spectrum
  @param  Anal_AnalysisSpectrum self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Anal_SpectrumWindowView Anal_AnalysisSpectrum_FindFirstSpectrumWindowView_keyval1(Anal_AnalysisSpectrum self, char * key, ApiObject value);

/**
  FindFirst for 
ccpnmr.Analysis.AnalysisSpectrum.spectrumWindowViews

SpectrumWIndowViews 
viewing this Spectrum
  @param  Anal_AnalysisSpectrum self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Anal_SpectrumWindowView Anal_AnalysisSpectrum_FindFirstSpectrumWindowView_keyval2(Anal_AnalysisSpectrum self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccpnmr.Analysis.AnalysisSpectrum.spectrumWindowViews

SpectrumWIndowViews 
viewing this Spectrum
  @param  Anal_AnalysisSpectrum self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Anal_SpectrumWindowView Anal_AnalysisSpectrum_FindFirstSpectrumWindowView_keyval3(Anal_AnalysisSpectrum self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccpnmr.Analysis.AnalysisSpectrum.spectrumWindowViews

SpectrumWIndowViews 
viewing this Spectrum
  @param  Anal_AnalysisSpectrum self
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
extern Anal_SpectrumWindowView Anal_AnalysisSpectrum_FindFirstSpectrumWindowView_keyval4(Anal_AnalysisSpectrum self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccpnmr.Analysis.AnalysisSpectrum.storedContours

child 
link to class StoredContour
  @param  Anal_AnalysisSpectrum self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Anal_StoredContour Anal_AnalysisSpectrum_FindFirstStoredContour(Anal_AnalysisSpectrum self, ApiMap conditions);

/**
  FindFirst for ccpnmr.Analysis.AnalysisSpectrum.storedContours

child 
link to class StoredContour
  @param  Anal_AnalysisSpectrum self
  @returns  the first value that satisfies the conditions 
**/
extern Anal_StoredContour Anal_AnalysisSpectrum_FindFirstStoredContour_keyval0(Anal_AnalysisSpectrum self);

/**
  FindFirst for ccpnmr.Analysis.AnalysisSpectrum.storedContours

child 
link to class StoredContour
  @param  Anal_AnalysisSpectrum self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Anal_StoredContour Anal_AnalysisSpectrum_FindFirstStoredContour_keyval1(Anal_AnalysisSpectrum self, char * key, ApiObject value);

/**
  FindFirst for ccpnmr.Analysis.AnalysisSpectrum.storedContours

child 
link to class StoredContour
  @param  Anal_AnalysisSpectrum self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Anal_StoredContour Anal_AnalysisSpectrum_FindFirstStoredContour_keyval2(Anal_AnalysisSpectrum self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccpnmr.Analysis.AnalysisSpectrum.storedContours

child 
link to class StoredContour
  @param  Anal_AnalysisSpectrum self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Anal_StoredContour Anal_AnalysisSpectrum_FindFirstStoredContour_keyval3(Anal_AnalysisSpectrum self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccpnmr.Analysis.AnalysisSpectrum.storedContours

child 
link to class StoredContour
  @param  Anal_AnalysisSpectrum self
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
extern Anal_StoredContour Anal_AnalysisSpectrum_FindFirstStoredContour_keyval4(Anal_AnalysisSpectrum self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccpnmr.Analysis.AnalysisSpectrum
  @param  Anal_AnalysisSpectrum self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Anal_AnalysisSpectrum_Get(Anal_AnalysisSpectrum self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
extern Acco_AccessObject Anal_AnalysisSpectrum_GetAccess(Anal_AnalysisSpectrum self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
extern Acco_AccessObject Anal_AnalysisSpectrum_GetActiveAccess(Anal_AnalysisSpectrum self);

/**
  Get for ccpnmr.Analysis.AnalysisSpectrum.analysisDataDims

child link to 
class AnalysisDataDim
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
extern ApiSet Anal_AnalysisSpectrum_GetAnalysisDataDims(Anal_AnalysisSpectrum self);

/**
  Get for ccpnmr.Analysis.AnalysisSpectrum.analysisPeakLists

child link 
to class AnalysisPeakList
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
extern ApiSet Anal_AnalysisSpectrum_GetAnalysisPeakLists(Anal_AnalysisSpectrum self);

/**
  Get for ccpnmr.Analysis.AnalysisSpectrum.analysisProject

parent link
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
extern Anal_AnalysisProject Anal_AnalysisSpectrum_GetAnalysisProject(Anal_AnalysisSpectrum self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
extern ApiList Anal_AnalysisSpectrum_GetApplicationData(Anal_AnalysisSpectrum self);

/**
  Get for ccpnmr.Analysis.AnalysisSpectrum.autoBaseLevel

Base contour 
level for automatic contour level setting
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
extern ApiFloat Anal_AnalysisSpectrum_GetAutoBaseLevel(Anal_AnalysisSpectrum self);

/**
  Get for ccpnmr.Analysis.AnalysisSpectrum.autoLevelChanger

Level change 
constant for automatic contour level setting
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
extern ApiFloat Anal_AnalysisSpectrum_GetAutoLevelChanger(Anal_AnalysisSpectrum self);

/**
  Get for ccpnmr.Analysis.AnalysisSpectrum.autoLevelMode

Auto contour 
level setting mode
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
extern ApiString Anal_AnalysisSpectrum_GetAutoLevelMode(Anal_AnalysisSpectrum self);

/**
  Get for ccpnmr.Analysis.AnalysisSpectrum.autoNumLevels

Number of 
contour levels for automatic setting.
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
extern ApiInteger Anal_AnalysisSpectrum_GetAutoNumLevels(Anal_AnalysisSpectrum self);

/**
  GetByKey for ccpnmr.Analysis.AnalysisSpectrum
  @param  Anal_AnalysisSpectrum self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Anal_AnalysisSpectrum Anal_AnalysisSpectrum_GetByKey(Anal_AnalysisSpectrum self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
extern ApiString Anal_AnalysisSpectrum_GetClassName(Anal_AnalysisSpectrum self);

/**
  Get for ccpnmr.Analysis.AnalysisSpectrum.contourDir

Contour file 
directory
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
extern Impl_Url Anal_AnalysisSpectrum_GetContourDir(Anal_AnalysisSpectrum self);

/**
  Get for ccpnmr.Analysis.AnalysisSpectrum.dataSource

DataSource that 
AnalysisSPectrum refers to - key to class
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
extern Nmr_DataSource Anal_AnalysisSpectrum_GetDataSource(Anal_AnalysisSpectrum self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
extern ApiList Anal_AnalysisSpectrum_GetFieldNames(Anal_AnalysisSpectrum self);

/**
  Get for ccpnmr.Analysis.AnalysisSpectrum.font

font for use in spectrum 
display (and printing?).
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
extern ApiString Anal_AnalysisSpectrum_GetFont(Anal_AnalysisSpectrum self);

/**
  GetFullKey for ccpnmr.Analysis.AnalysisSpectrum
  @param  Anal_AnalysisSpectrum self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Anal_AnalysisSpectrum_GetFullKey(Anal_AnalysisSpectrum self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
extern ApiBoolean Anal_AnalysisSpectrum_GetInConstructor(Anal_AnalysisSpectrum self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
extern ApiBoolean Anal_AnalysisSpectrum_GetIsDeleted(Anal_AnalysisSpectrum self);

/**
  GetLocalKey for ccpnmr.Analysis.AnalysisSpectrum
  @param  Anal_AnalysisSpectrum self
  @returns  Local object key
**/
extern ApiObject Anal_AnalysisSpectrum_GetLocalKey(Anal_AnalysisSpectrum self);

/**
  Get for ccpnmr.Analysis.AnalysisSpectrum.multipletPattern

Multiplet 
pattern of spectrum
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
extern ApiString Anal_AnalysisSpectrum_GetMultipletPattern(Anal_AnalysisSpectrum self);

/**
  Get for ccpnmr.Analysis.AnalysisSpectrum.negColors

Colors for negative 
contours - in order
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
extern ApiList Anal_AnalysisSpectrum_GetNegColors(Anal_AnalysisSpectrum self);

/**
  Get for ccpnmr.Analysis.AnalysisSpectrum.negLevels

Negative contour 
levels
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
extern ApiList Anal_AnalysisSpectrum_GetNegLevels(Anal_AnalysisSpectrum self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
extern ApiString Anal_AnalysisSpectrum_GetPackageName(Anal_AnalysisSpectrum self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
extern ApiString Anal_AnalysisSpectrum_GetPackageShortName(Anal_AnalysisSpectrum self);

/**
  Get for ccpnmr.Analysis.AnalysisSpectrum.parent

link to parent object - 
synonym for analysisProject
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
extern Anal_AnalysisProject Anal_AnalysisSpectrum_GetParent(Anal_AnalysisSpectrum self);

/**
  Get for ccpnmr.Analysis.AnalysisSpectrum.posColors

Colors for positive 
contours - in order
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
extern ApiList Anal_AnalysisSpectrum_GetPosColors(Anal_AnalysisSpectrum self);

/**
  Get for ccpnmr.Analysis.AnalysisSpectrum.posLevels

Positive contour 
levels
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
extern ApiList Anal_AnalysisSpectrum_GetPosLevels(Anal_AnalysisSpectrum self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
extern ApiString Anal_AnalysisSpectrum_GetQualifiedName(Anal_AnalysisSpectrum self);

/**
  Get for ccpnmr.Analysis.AnalysisSpectrum.rank

Priority order for 
spectra (contours) in displays
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
extern ApiInteger Anal_AnalysisSpectrum_GetRank(Anal_AnalysisSpectrum self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
extern Impl_MemopsRoot Anal_AnalysisSpectrum_GetRoot(Anal_AnalysisSpectrum self);

/**
  Get for ccpnmr.Analysis.AnalysisSpectrum.shortcut

Keyboard Shortcut
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
extern ApiString Anal_AnalysisSpectrum_GetShortcut(Anal_AnalysisSpectrum self);

/**
  Get for ccpnmr.Analysis.AnalysisSpectrum.sliceColor

Spectrum slice 
color
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
extern ApiString Anal_AnalysisSpectrum_GetSliceColor(Anal_AnalysisSpectrum self);

/**
  Get for 
ccpnmr.Analysis.AnalysisSpectrum.spectrumWindowViews

SpectrumWIndowViews 
viewing this Spectrum
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
extern ApiSet Anal_AnalysisSpectrum_GetSpectrumWindowViews(Anal_AnalysisSpectrum self);

/**
  Get for ccpnmr.Analysis.AnalysisSpectrum.storedContours

child link to 
class StoredContour
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
extern ApiSet Anal_AnalysisSpectrum_GetStoredContours(Anal_AnalysisSpectrum self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
extern Impl_TopObject Anal_AnalysisSpectrum_GetTopObject(Anal_AnalysisSpectrum self);

/**
  Get for ccpnmr.Analysis.AnalysisSpectrum.useBoundingBox

Use bounding 
box in display
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
extern ApiBoolean Anal_AnalysisSpectrum_GetUseBoundingBox(Anal_AnalysisSpectrum self);

/**
  Get for ccpnmr.Analysis.AnalysisSpectrum.usePeakArrow

Use arrows for 
peak anotations
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
extern ApiBoolean Anal_AnalysisSpectrum_GetUsePeakArrow(Anal_AnalysisSpectrum self);

/**
  Get for ccpnmr.Analysis.AnalysisSpectrum.usePrecalculated

Use 
pre-calculated contours
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
extern ApiBoolean Anal_AnalysisSpectrum_GetUsePrecalculated(Anal_AnalysisSpectrum self);

/**
  Constructor for ccpnmr.Analysis.AnalysisSpectrum
  @param  Anal_AnalysisProject parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Anal_AnalysisSpectrum Anal_AnalysisSpectrum_Init(Anal_AnalysisProject parent, ApiMap attrlinks);

/**
  Constructor for ccpnmr.Analysis.AnalysisSpectrum
  @param  Anal_AnalysisProject parent
  @param  Nmr_DataSource dataSource
  @returns  the new object
**/
extern Anal_AnalysisSpectrum Anal_AnalysisSpectrum_Init_reqd(Anal_AnalysisProject parent, Nmr_DataSource dataSource);

/**
  Factory function to create ccpnmr.Analysis.AnalysisDataDim
  @param  Anal_AnalysisSpectrum self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Anal_AnalysisDataDim Anal_AnalysisSpectrum_NewAnalysisDataDim(Anal_AnalysisSpectrum self, ApiMap attrlinks);

/**
  Factory function to create ccpnmr.Analysis.AnalysisDataDim
  @param  Anal_AnalysisSpectrum self
  @param  Nmr_AbstractDataDim dataDim
  @returns  the new object
**/
extern Anal_AnalysisDataDim Anal_AnalysisSpectrum_NewAnalysisDataDim_reqd(Anal_AnalysisSpectrum self, Nmr_AbstractDataDim dataDim);

/**
  Factory function to create ccpnmr.Analysis.AnalysisPeakList
  @param  Anal_AnalysisSpectrum self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Anal_AnalysisPeakList Anal_AnalysisSpectrum_NewAnalysisPeakList(Anal_AnalysisSpectrum self, ApiMap attrlinks);

/**
  Factory function to create ccpnmr.Analysis.AnalysisPeakList
  @param  Anal_AnalysisSpectrum self
  @param  Nmr_PeakList peakList
  @returns  the new object
**/
extern Anal_AnalysisPeakList Anal_AnalysisSpectrum_NewAnalysisPeakList_reqd(Anal_AnalysisSpectrum self, Nmr_PeakList peakList);

/**
  Factory function to create ccpnmr.Analysis.StoredContour
  @param  Anal_AnalysisSpectrum self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Anal_StoredContour Anal_AnalysisSpectrum_NewStoredContour(Anal_AnalysisSpectrum self, ApiMap attrlinks);

/**
  Factory function to create ccpnmr.Analysis.StoredContour
  @param  Anal_AnalysisSpectrum self
  @param  ApiList dims
  @param  char * path
  @returns  the new object
**/
extern Anal_StoredContour Anal_AnalysisSpectrum_NewStoredContour_reqd(Anal_AnalysisSpectrum self, ApiList dims, char * path);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisSpectrum self
  @param  Impl_ApplicationData value
**/
extern void *Anal_AnalysisSpectrum_RemoveApplicationData(Anal_AnalysisSpectrum self, Impl_ApplicationData value);

/**
  Remove for ccpnmr.Analysis.AnalysisSpectrum.negColors

Colors for 
negative contours - in order
  @param  Anal_AnalysisSpectrum self
  @param  ApiString value
**/
extern void *Anal_AnalysisSpectrum_RemoveNegColor(Anal_AnalysisSpectrum self, ApiString value);

/**
  Remove for ccpnmr.Analysis.AnalysisSpectrum.negLevels

Negative contour 
levels
  @param  Anal_AnalysisSpectrum self
  @param  ApiFloat value
**/
extern void *Anal_AnalysisSpectrum_RemoveNegLevel(Anal_AnalysisSpectrum self, ApiFloat value);

/**
  Remove for ccpnmr.Analysis.AnalysisSpectrum.posColors

Colors for 
positive contours - in order
  @param  Anal_AnalysisSpectrum self
  @param  ApiString value
**/
extern void *Anal_AnalysisSpectrum_RemovePosColor(Anal_AnalysisSpectrum self, ApiString value);

/**
  Remove for ccpnmr.Analysis.AnalysisSpectrum.posLevels

Positive contour 
levels
  @param  Anal_AnalysisSpectrum self
  @param  ApiFloat value
**/
extern void *Anal_AnalysisSpectrum_RemovePosLevel(Anal_AnalysisSpectrum self, ApiFloat value);

/**
  SetAttr for ccpnmr.Analysis.AnalysisSpectrum
  @param  Anal_AnalysisSpectrum self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Anal_AnalysisSpectrum_Set(Anal_AnalysisSpectrum self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_AnalysisSpectrum self
  @param  Acco_AccessObject value
**/
extern void *Anal_AnalysisSpectrum_SetAccess(Anal_AnalysisSpectrum self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisSpectrum self
  @param  ApiList values
**/
extern void *Anal_AnalysisSpectrum_SetApplicationData(Anal_AnalysisSpectrum self, ApiList values);

/**
  Set for ccpnmr.Analysis.AnalysisSpectrum.autoBaseLevel

Base contour 
level for automatic contour level setting
  @param  Anal_AnalysisSpectrum self
  @param  ApiFloat value
**/
extern void *Anal_AnalysisSpectrum_SetAutoBaseLevel(Anal_AnalysisSpectrum self, ApiFloat value);

/**
  Set for ccpnmr.Analysis.AnalysisSpectrum.autoLevelChanger

Level change 
constant for automatic contour level setting
  @param  Anal_AnalysisSpectrum self
  @param  ApiFloat value
**/
extern void *Anal_AnalysisSpectrum_SetAutoLevelChanger(Anal_AnalysisSpectrum self, ApiFloat value);

/**
  Set for ccpnmr.Analysis.AnalysisSpectrum.autoLevelMode

Auto contour 
level setting mode
  @param  Anal_AnalysisSpectrum self
  @param  ApiString value
**/
extern void *Anal_AnalysisSpectrum_SetAutoLevelMode(Anal_AnalysisSpectrum self, ApiString value);

/**
  Set for ccpnmr.Analysis.AnalysisSpectrum.autoNumLevels

Number of 
contour levels for automatic setting.
  @param  Anal_AnalysisSpectrum self
  @param  ApiInteger value
**/
extern void *Anal_AnalysisSpectrum_SetAutoNumLevels(Anal_AnalysisSpectrum self, ApiInteger value);

/**
  Set for ccpnmr.Analysis.AnalysisSpectrum.contourDir

Contour file 
directory
  @param  Anal_AnalysisSpectrum self
  @param  Impl_Url value
**/
extern void *Anal_AnalysisSpectrum_SetContourDir(Anal_AnalysisSpectrum self, Impl_Url value);

/**
  Set for ccpnmr.Analysis.AnalysisSpectrum.dataSource

DataSource that 
AnalysisSPectrum refers to - key to class
  @param  Anal_AnalysisSpectrum self
  @param  Nmr_DataSource value
**/
extern void *Anal_AnalysisSpectrum_SetDataSource(Anal_AnalysisSpectrum self, Nmr_DataSource value);

/**
  Set for ccpnmr.Analysis.AnalysisSpectrum.font

font for use in spectrum 
display (and printing?).
  @param  Anal_AnalysisSpectrum self
  @param  ApiString value
**/
extern void *Anal_AnalysisSpectrum_SetFont(Anal_AnalysisSpectrum self, ApiString value);

/**
  Set for ccpnmr.Analysis.AnalysisSpectrum.multipletPattern

Multiplet 
pattern of spectrum
  @param  Anal_AnalysisSpectrum self
  @param  ApiString value
**/
extern void *Anal_AnalysisSpectrum_SetMultipletPattern(Anal_AnalysisSpectrum self, ApiString value);

/**
  Set for ccpnmr.Analysis.AnalysisSpectrum.negColors

Colors for negative 
contours - in order
  @param  Anal_AnalysisSpectrum self
  @param  ApiList values
**/
extern void *Anal_AnalysisSpectrum_SetNegColors(Anal_AnalysisSpectrum self, ApiList values);

/**
  Set for ccpnmr.Analysis.AnalysisSpectrum.negLevels

Negative contour 
levels
  @param  Anal_AnalysisSpectrum self
  @param  ApiList values
**/
extern void *Anal_AnalysisSpectrum_SetNegLevels(Anal_AnalysisSpectrum self, ApiList values);

/**
  Set for ccpnmr.Analysis.AnalysisSpectrum.posColors

Colors for positive 
contours - in order
  @param  Anal_AnalysisSpectrum self
  @param  ApiList values
**/
extern void *Anal_AnalysisSpectrum_SetPosColors(Anal_AnalysisSpectrum self, ApiList values);

/**
  Set for ccpnmr.Analysis.AnalysisSpectrum.posLevels

Positive contour 
levels
  @param  Anal_AnalysisSpectrum self
  @param  ApiList values
**/
extern void *Anal_AnalysisSpectrum_SetPosLevels(Anal_AnalysisSpectrum self, ApiList values);

/**
  Set for ccpnmr.Analysis.AnalysisSpectrum.rank

Priority order for 
spectra (contours) in displays
  @param  Anal_AnalysisSpectrum self
  @param  ApiInteger value
**/
extern void *Anal_AnalysisSpectrum_SetRank(Anal_AnalysisSpectrum self, ApiInteger value);

/**
  Set for ccpnmr.Analysis.AnalysisSpectrum.shortcut

Keyboard Shortcut
  @param  Anal_AnalysisSpectrum self
  @param  ApiString value
**/
extern void *Anal_AnalysisSpectrum_SetShortcut(Anal_AnalysisSpectrum self, ApiString value);

/**
  Set for ccpnmr.Analysis.AnalysisSpectrum.sliceColor

Spectrum slice 
color
  @param  Anal_AnalysisSpectrum self
  @param  ApiString value
**/
extern void *Anal_AnalysisSpectrum_SetSliceColor(Anal_AnalysisSpectrum self, ApiString value);

/**
  Set for 
ccpnmr.Analysis.AnalysisSpectrum.spectrumWindowViews

SpectrumWIndowViews 
viewing this Spectrum
  @param  Anal_AnalysisSpectrum self
  @param  ApiSet values
**/
extern void *Anal_AnalysisSpectrum_SetSpectrumWindowViews(Anal_AnalysisSpectrum self, ApiSet values);

/**
  Set for ccpnmr.Analysis.AnalysisSpectrum.useBoundingBox

Use bounding 
box in display
  @param  Anal_AnalysisSpectrum self
  @param  ApiBoolean value
**/
extern void *Anal_AnalysisSpectrum_SetUseBoundingBox(Anal_AnalysisSpectrum self, ApiBoolean value);

/**
  Set for ccpnmr.Analysis.AnalysisSpectrum.usePeakArrow

Use arrows for 
peak anotations
  @param  Anal_AnalysisSpectrum self
  @param  ApiBoolean value
**/
extern void *Anal_AnalysisSpectrum_SetUsePeakArrow(Anal_AnalysisSpectrum self, ApiBoolean value);

/**
  Set for ccpnmr.Analysis.AnalysisSpectrum.usePrecalculated

Use 
pre-calculated contours
  @param  Anal_AnalysisSpectrum self
  @param  ApiBoolean value
**/
extern void *Anal_AnalysisSpectrum_SetUsePrecalculated(Anal_AnalysisSpectrum self, ApiBoolean value);

/**
  Sorted for ccpnmr.Analysis.AnalysisSpectrum.analysisDataDims

child link 
to class AnalysisDataDim
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
extern ApiList Anal_AnalysisSpectrum_SortedAnalysisDataDims(Anal_AnalysisSpectrum self);

/**
  Sorted for ccpnmr.Analysis.AnalysisSpectrum.analysisPeakLists

child 
link to class AnalysisPeakList
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
extern ApiList Anal_AnalysisSpectrum_SortedAnalysisPeakLists(Anal_AnalysisSpectrum self);

/**
  Sorted for 
ccpnmr.Analysis.AnalysisSpectrum.spectrumWindowViews

SpectrumWIndowViews 
viewing this Spectrum
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
extern ApiList Anal_AnalysisSpectrum_SortedSpectrumWindowViews(Anal_AnalysisSpectrum self);

/**
  Sorted for ccpnmr.Analysis.AnalysisSpectrum.storedContours

child link 
to class StoredContour
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
extern ApiList Anal_AnalysisSpectrum_SortedStoredContours(Anal_AnalysisSpectrum self);

#endif /* __incl__ccpnmr_api_Analysis_AnalysisSpectrum_h__ */
