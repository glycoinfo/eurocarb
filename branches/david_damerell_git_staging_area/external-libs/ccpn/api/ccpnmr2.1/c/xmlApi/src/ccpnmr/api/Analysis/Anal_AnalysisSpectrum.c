
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
void *Anal_AnalysisSpectrum_AddApplicationData(Anal_AnalysisSpectrum self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccpnmr.Analysis.AnalysisSpectrum.negColors

Colors for negative 
contours - in order
  @param  Anal_AnalysisSpectrum self
  @param  ApiString value
**/
void *Anal_AnalysisSpectrum_AddNegColor(Anal_AnalysisSpectrum self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addNegColor");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'addNegColor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'addNegColor' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccpnmr.Analysis.AnalysisSpectrum.negLevels

Negative contour 
levels
  @param  Anal_AnalysisSpectrum self
  @param  ApiFloat value
**/
void *Anal_AnalysisSpectrum_AddNegLevel(Anal_AnalysisSpectrum self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addNegLevel");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'addNegLevel'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'addNegLevel' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccpnmr.Analysis.AnalysisSpectrum.posColors

Colors for positive 
contours - in order
  @param  Anal_AnalysisSpectrum self
  @param  ApiString value
**/
void *Anal_AnalysisSpectrum_AddPosColor(Anal_AnalysisSpectrum self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addPosColor");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'addPosColor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'addPosColor' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccpnmr.Analysis.AnalysisSpectrum.posLevels

Positive contour 
levels
  @param  Anal_AnalysisSpectrum self
  @param  ApiFloat value
**/
void *Anal_AnalysisSpectrum_AddPosLevel(Anal_AnalysisSpectrum self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addPosLevel");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'addPosLevel'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'addPosLevel' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccpnmr.Analysis.AnalysisSpectrum
  @param  Anal_AnalysisSpectrum self
  @param  ApiBoolean complete
**/
void *Anal_AnalysisSpectrum_CheckAllValid(Anal_AnalysisSpectrum self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccpnmr.Analysis.AnalysisSpectrum
  @param  Anal_AnalysisSpectrum self
  @param  ApiBoolean complete
**/
void *Anal_AnalysisSpectrum_CheckValid(Anal_AnalysisSpectrum self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'checkValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisSpectrum.analysisDataDims

child 
link to class AnalysisDataDim
  @param  Anal_AnalysisSpectrum self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisSpectrum_FindAllAnalysisDataDims(Anal_AnalysisSpectrum self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllAnalysisDataDims");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'findAllAnalysisDataDims'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'findAllAnalysisDataDims' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisSpectrum.analysisDataDims

child 
link to class AnalysisDataDim
  @param  Anal_AnalysisSpectrum self
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisSpectrum_FindAllAnalysisDataDims_keyval0(Anal_AnalysisSpectrum self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AnalysisSpectrum_FindAllAnalysisDataDims(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisSpectrum.analysisDataDims

child 
link to class AnalysisDataDim
  @param  Anal_AnalysisSpectrum self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisSpectrum_FindAllAnalysisDataDims_keyval1(Anal_AnalysisSpectrum self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AnalysisSpectrum_FindAllAnalysisDataDims(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

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
ApiSet Anal_AnalysisSpectrum_FindAllAnalysisDataDims_keyval2(Anal_AnalysisSpectrum self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AnalysisSpectrum_FindAllAnalysisDataDims(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

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
ApiSet Anal_AnalysisSpectrum_FindAllAnalysisDataDims_keyval3(Anal_AnalysisSpectrum self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AnalysisSpectrum_FindAllAnalysisDataDims(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

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
ApiSet Anal_AnalysisSpectrum_FindAllAnalysisDataDims_keyval4(Anal_AnalysisSpectrum self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AnalysisSpectrum_FindAllAnalysisDataDims(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisSpectrum.analysisPeakLists

child 
link to class AnalysisPeakList
  @param  Anal_AnalysisSpectrum self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisSpectrum_FindAllAnalysisPeakLists(Anal_AnalysisSpectrum self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllAnalysisPeakLists");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'findAllAnalysisPeakLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'findAllAnalysisPeakLists' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisSpectrum.analysisPeakLists

child 
link to class AnalysisPeakList
  @param  Anal_AnalysisSpectrum self
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisSpectrum_FindAllAnalysisPeakLists_keyval0(Anal_AnalysisSpectrum self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AnalysisSpectrum_FindAllAnalysisPeakLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisSpectrum.analysisPeakLists

child 
link to class AnalysisPeakList
  @param  Anal_AnalysisSpectrum self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisSpectrum_FindAllAnalysisPeakLists_keyval1(Anal_AnalysisSpectrum self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AnalysisSpectrum_FindAllAnalysisPeakLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

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
ApiSet Anal_AnalysisSpectrum_FindAllAnalysisPeakLists_keyval2(Anal_AnalysisSpectrum self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AnalysisSpectrum_FindAllAnalysisPeakLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

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
ApiSet Anal_AnalysisSpectrum_FindAllAnalysisPeakLists_keyval3(Anal_AnalysisSpectrum self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AnalysisSpectrum_FindAllAnalysisPeakLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

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
ApiSet Anal_AnalysisSpectrum_FindAllAnalysisPeakLists_keyval4(Anal_AnalysisSpectrum self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AnalysisSpectrum_FindAllAnalysisPeakLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisSpectrum self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_AnalysisSpectrum_FindAllApplicationData(Anal_AnalysisSpectrum self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'findAllApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisSpectrum self
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_AnalysisSpectrum_FindAllApplicationData_keyval0(Anal_AnalysisSpectrum self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AnalysisSpectrum_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

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
ApiList Anal_AnalysisSpectrum_FindAllApplicationData_keyval1(Anal_AnalysisSpectrum self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AnalysisSpectrum_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

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
ApiList Anal_AnalysisSpectrum_FindAllApplicationData_keyval2(Anal_AnalysisSpectrum self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AnalysisSpectrum_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

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
ApiList Anal_AnalysisSpectrum_FindAllApplicationData_keyval3(Anal_AnalysisSpectrum self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AnalysisSpectrum_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

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
ApiList Anal_AnalysisSpectrum_FindAllApplicationData_keyval4(Anal_AnalysisSpectrum self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AnalysisSpectrum_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccpnmr.Analysis.AnalysisSpectrum.spectrumWindowViews

SpectrumWIndowViews 
viewing this Spectrum
  @param  Anal_AnalysisSpectrum self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisSpectrum_FindAllSpectrumWindowViews(Anal_AnalysisSpectrum self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllSpectrumWindowViews");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'findAllSpectrumWindowViews'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'findAllSpectrumWindowViews' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccpnmr.Analysis.AnalysisSpectrum.spectrumWindowViews

SpectrumWIndowViews 
viewing this Spectrum
  @param  Anal_AnalysisSpectrum self
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisSpectrum_FindAllSpectrumWindowViews_keyval0(Anal_AnalysisSpectrum self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AnalysisSpectrum_FindAllSpectrumWindowViews(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

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
ApiSet Anal_AnalysisSpectrum_FindAllSpectrumWindowViews_keyval1(Anal_AnalysisSpectrum self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AnalysisSpectrum_FindAllSpectrumWindowViews(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

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
ApiSet Anal_AnalysisSpectrum_FindAllSpectrumWindowViews_keyval2(Anal_AnalysisSpectrum self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AnalysisSpectrum_FindAllSpectrumWindowViews(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

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
ApiSet Anal_AnalysisSpectrum_FindAllSpectrumWindowViews_keyval3(Anal_AnalysisSpectrum self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AnalysisSpectrum_FindAllSpectrumWindowViews(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

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
ApiSet Anal_AnalysisSpectrum_FindAllSpectrumWindowViews_keyval4(Anal_AnalysisSpectrum self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AnalysisSpectrum_FindAllSpectrumWindowViews(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisSpectrum.storedContours

child link 
to class StoredContour
  @param  Anal_AnalysisSpectrum self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisSpectrum_FindAllStoredContours(Anal_AnalysisSpectrum self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllStoredContours");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'findAllStoredContours'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'findAllStoredContours' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisSpectrum.storedContours

child link 
to class StoredContour
  @param  Anal_AnalysisSpectrum self
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisSpectrum_FindAllStoredContours_keyval0(Anal_AnalysisSpectrum self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AnalysisSpectrum_FindAllStoredContours(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisSpectrum.storedContours

child link 
to class StoredContour
  @param  Anal_AnalysisSpectrum self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisSpectrum_FindAllStoredContours_keyval1(Anal_AnalysisSpectrum self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AnalysisSpectrum_FindAllStoredContours(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

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
ApiSet Anal_AnalysisSpectrum_FindAllStoredContours_keyval2(Anal_AnalysisSpectrum self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AnalysisSpectrum_FindAllStoredContours(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

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
ApiSet Anal_AnalysisSpectrum_FindAllStoredContours_keyval3(Anal_AnalysisSpectrum self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AnalysisSpectrum_FindAllStoredContours(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

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
ApiSet Anal_AnalysisSpectrum_FindAllStoredContours_keyval4(Anal_AnalysisSpectrum self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AnalysisSpectrum_FindAllStoredContours(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisSpectrum.analysisDataDims

child 
link to class AnalysisDataDim
  @param  Anal_AnalysisSpectrum self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Anal_AnalysisDataDim Anal_AnalysisSpectrum_FindFirstAnalysisDataDim(Anal_AnalysisSpectrum self, ApiMap conditions)
{
  
  Anal_AnalysisDataDim obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstAnalysisDataDim");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'findFirstAnalysisDataDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'findFirstAnalysisDataDim' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisSpectrum.analysisDataDims

child 
link to class AnalysisDataDim
  @param  Anal_AnalysisSpectrum self
  @returns  the first value that satisfies the conditions 
**/
Anal_AnalysisDataDim Anal_AnalysisSpectrum_FindFirstAnalysisDataDim_keyval0(Anal_AnalysisSpectrum self)
{
  
  Anal_AnalysisDataDim  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AnalysisSpectrum_FindFirstAnalysisDataDim(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisSpectrum.analysisDataDims

child 
link to class AnalysisDataDim
  @param  Anal_AnalysisSpectrum self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Anal_AnalysisDataDim Anal_AnalysisSpectrum_FindFirstAnalysisDataDim_keyval1(Anal_AnalysisSpectrum self, char * key, ApiObject value)
{
  
  Anal_AnalysisDataDim  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AnalysisSpectrum_FindFirstAnalysisDataDim(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

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
Anal_AnalysisDataDim Anal_AnalysisSpectrum_FindFirstAnalysisDataDim_keyval2(Anal_AnalysisSpectrum self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Anal_AnalysisDataDim  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AnalysisSpectrum_FindFirstAnalysisDataDim(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

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
Anal_AnalysisDataDim Anal_AnalysisSpectrum_FindFirstAnalysisDataDim_keyval3(Anal_AnalysisSpectrum self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Anal_AnalysisDataDim  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AnalysisSpectrum_FindFirstAnalysisDataDim(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

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
Anal_AnalysisDataDim Anal_AnalysisSpectrum_FindFirstAnalysisDataDim_keyval4(Anal_AnalysisSpectrum self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Anal_AnalysisDataDim  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AnalysisSpectrum_FindFirstAnalysisDataDim(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisSpectrum.analysisPeakLists

child 
link to class AnalysisPeakList
  @param  Anal_AnalysisSpectrum self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Anal_AnalysisPeakList Anal_AnalysisSpectrum_FindFirstAnalysisPeakList(Anal_AnalysisSpectrum self, ApiMap conditions)
{
  
  Anal_AnalysisPeakList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstAnalysisPeakList");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'findFirstAnalysisPeakList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'findFirstAnalysisPeakList' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisSpectrum.analysisPeakLists

child 
link to class AnalysisPeakList
  @param  Anal_AnalysisSpectrum self
  @returns  the first value that satisfies the conditions 
**/
Anal_AnalysisPeakList Anal_AnalysisSpectrum_FindFirstAnalysisPeakList_keyval0(Anal_AnalysisSpectrum self)
{
  
  Anal_AnalysisPeakList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AnalysisSpectrum_FindFirstAnalysisPeakList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisSpectrum.analysisPeakLists

child 
link to class AnalysisPeakList
  @param  Anal_AnalysisSpectrum self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Anal_AnalysisPeakList Anal_AnalysisSpectrum_FindFirstAnalysisPeakList_keyval1(Anal_AnalysisSpectrum self, char * key, ApiObject value)
{
  
  Anal_AnalysisPeakList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AnalysisSpectrum_FindFirstAnalysisPeakList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

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
Anal_AnalysisPeakList Anal_AnalysisSpectrum_FindFirstAnalysisPeakList_keyval2(Anal_AnalysisSpectrum self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Anal_AnalysisPeakList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AnalysisSpectrum_FindFirstAnalysisPeakList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

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
Anal_AnalysisPeakList Anal_AnalysisSpectrum_FindFirstAnalysisPeakList_keyval3(Anal_AnalysisSpectrum self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Anal_AnalysisPeakList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AnalysisSpectrum_FindFirstAnalysisPeakList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

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
Anal_AnalysisPeakList Anal_AnalysisSpectrum_FindFirstAnalysisPeakList_keyval4(Anal_AnalysisSpectrum self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Anal_AnalysisPeakList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AnalysisSpectrum_FindFirstAnalysisPeakList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisSpectrum self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_AnalysisSpectrum_FindFirstApplicationData(Anal_AnalysisSpectrum self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'findFirstApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisSpectrum self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_AnalysisSpectrum_FindFirstApplicationData_keyval0(Anal_AnalysisSpectrum self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AnalysisSpectrum_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

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
Impl_ApplicationData Anal_AnalysisSpectrum_FindFirstApplicationData_keyval1(Anal_AnalysisSpectrum self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AnalysisSpectrum_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

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
Impl_ApplicationData Anal_AnalysisSpectrum_FindFirstApplicationData_keyval2(Anal_AnalysisSpectrum self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AnalysisSpectrum_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

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
Impl_ApplicationData Anal_AnalysisSpectrum_FindFirstApplicationData_keyval3(Anal_AnalysisSpectrum self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AnalysisSpectrum_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

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
Impl_ApplicationData Anal_AnalysisSpectrum_FindFirstApplicationData_keyval4(Anal_AnalysisSpectrum self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AnalysisSpectrum_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccpnmr.Analysis.AnalysisSpectrum.spectrumWindowViews

SpectrumWIndowViews 
viewing this Spectrum
  @param  Anal_AnalysisSpectrum self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Anal_SpectrumWindowView Anal_AnalysisSpectrum_FindFirstSpectrumWindowView(Anal_AnalysisSpectrum self, ApiMap conditions)
{
  
  Anal_SpectrumWindowView obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstSpectrumWindowView");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'findFirstSpectrumWindowView'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'findFirstSpectrumWindowView' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccpnmr.Analysis.AnalysisSpectrum.spectrumWindowViews

SpectrumWIndowViews 
viewing this Spectrum
  @param  Anal_AnalysisSpectrum self
  @returns  the first value that satisfies the conditions 
**/
Anal_SpectrumWindowView Anal_AnalysisSpectrum_FindFirstSpectrumWindowView_keyval0(Anal_AnalysisSpectrum self)
{
  
  Anal_SpectrumWindowView  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AnalysisSpectrum_FindFirstSpectrumWindowView(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

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
Anal_SpectrumWindowView Anal_AnalysisSpectrum_FindFirstSpectrumWindowView_keyval1(Anal_AnalysisSpectrum self, char * key, ApiObject value)
{
  
  Anal_SpectrumWindowView  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AnalysisSpectrum_FindFirstSpectrumWindowView(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

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
Anal_SpectrumWindowView Anal_AnalysisSpectrum_FindFirstSpectrumWindowView_keyval2(Anal_AnalysisSpectrum self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Anal_SpectrumWindowView  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AnalysisSpectrum_FindFirstSpectrumWindowView(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

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
Anal_SpectrumWindowView Anal_AnalysisSpectrum_FindFirstSpectrumWindowView_keyval3(Anal_AnalysisSpectrum self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Anal_SpectrumWindowView  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AnalysisSpectrum_FindFirstSpectrumWindowView(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

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
Anal_SpectrumWindowView Anal_AnalysisSpectrum_FindFirstSpectrumWindowView_keyval4(Anal_AnalysisSpectrum self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Anal_SpectrumWindowView  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AnalysisSpectrum_FindFirstSpectrumWindowView(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisSpectrum.storedContours

child 
link to class StoredContour
  @param  Anal_AnalysisSpectrum self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Anal_StoredContour Anal_AnalysisSpectrum_FindFirstStoredContour(Anal_AnalysisSpectrum self, ApiMap conditions)
{
  
  Anal_StoredContour obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstStoredContour");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'findFirstStoredContour'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'findFirstStoredContour' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisSpectrum.storedContours

child 
link to class StoredContour
  @param  Anal_AnalysisSpectrum self
  @returns  the first value that satisfies the conditions 
**/
Anal_StoredContour Anal_AnalysisSpectrum_FindFirstStoredContour_keyval0(Anal_AnalysisSpectrum self)
{
  
  Anal_StoredContour  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AnalysisSpectrum_FindFirstStoredContour(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisSpectrum.storedContours

child 
link to class StoredContour
  @param  Anal_AnalysisSpectrum self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Anal_StoredContour Anal_AnalysisSpectrum_FindFirstStoredContour_keyval1(Anal_AnalysisSpectrum self, char * key, ApiObject value)
{
  
  Anal_StoredContour  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AnalysisSpectrum_FindFirstStoredContour(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

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
Anal_StoredContour Anal_AnalysisSpectrum_FindFirstStoredContour_keyval2(Anal_AnalysisSpectrum self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Anal_StoredContour  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AnalysisSpectrum_FindFirstStoredContour(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

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
Anal_StoredContour Anal_AnalysisSpectrum_FindFirstStoredContour_keyval3(Anal_AnalysisSpectrum self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Anal_StoredContour  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AnalysisSpectrum_FindFirstStoredContour(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

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
Anal_StoredContour Anal_AnalysisSpectrum_FindFirstStoredContour_keyval4(Anal_AnalysisSpectrum self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Anal_StoredContour  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AnalysisSpectrum_FindFirstStoredContour(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccpnmr.Analysis.AnalysisSpectrum
  @param  Anal_AnalysisSpectrum self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Anal_AnalysisSpectrum_Get(Anal_AnalysisSpectrum self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
Acco_AccessObject Anal_AnalysisSpectrum_GetAccess(Anal_AnalysisSpectrum self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'getAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
Acco_AccessObject Anal_AnalysisSpectrum_GetActiveAccess(Anal_AnalysisSpectrum self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'getActiveAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisSpectrum.analysisDataDims

child link to 
class AnalysisDataDim
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
ApiSet Anal_AnalysisSpectrum_GetAnalysisDataDims(Anal_AnalysisSpectrum self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAnalysisDataDims");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'getAnalysisDataDims'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'getAnalysisDataDims' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisSpectrum.analysisPeakLists

child link 
to class AnalysisPeakList
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
ApiSet Anal_AnalysisSpectrum_GetAnalysisPeakLists(Anal_AnalysisSpectrum self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAnalysisPeakLists");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'getAnalysisPeakLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'getAnalysisPeakLists' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisSpectrum.analysisProject

parent link
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
Anal_AnalysisProject Anal_AnalysisSpectrum_GetAnalysisProject(Anal_AnalysisSpectrum self)
{
  
  Anal_AnalysisProject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAnalysisProject");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'getAnalysisProject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'getAnalysisProject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
ApiList Anal_AnalysisSpectrum_GetApplicationData(Anal_AnalysisSpectrum self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisSpectrum.autoBaseLevel

Base contour 
level for automatic contour level setting
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
ApiFloat Anal_AnalysisSpectrum_GetAutoBaseLevel(Anal_AnalysisSpectrum self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAutoBaseLevel");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'getAutoBaseLevel'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'getAutoBaseLevel' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisSpectrum.autoLevelChanger

Level change 
constant for automatic contour level setting
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
ApiFloat Anal_AnalysisSpectrum_GetAutoLevelChanger(Anal_AnalysisSpectrum self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAutoLevelChanger");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'getAutoLevelChanger'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'getAutoLevelChanger' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisSpectrum.autoLevelMode

Auto contour 
level setting mode
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
ApiString Anal_AnalysisSpectrum_GetAutoLevelMode(Anal_AnalysisSpectrum self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAutoLevelMode");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'getAutoLevelMode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'getAutoLevelMode' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisSpectrum.autoNumLevels

Number of 
contour levels for automatic setting.
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
ApiInteger Anal_AnalysisSpectrum_GetAutoNumLevels(Anal_AnalysisSpectrum self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAutoNumLevels");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'getAutoNumLevels'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'getAutoNumLevels' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccpnmr.Analysis.AnalysisSpectrum
  @param  Anal_AnalysisSpectrum self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Anal_AnalysisSpectrum Anal_AnalysisSpectrum_GetByKey(Anal_AnalysisSpectrum self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Anal_AnalysisSpectrum obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'getByKey' is not callable");
  
  args = PyTuple_Pack(2, startObj, fullKey);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
ApiString Anal_AnalysisSpectrum_GetClassName(Anal_AnalysisSpectrum self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisSpectrum.contourDir

Contour file 
directory
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
Impl_Url Anal_AnalysisSpectrum_GetContourDir(Anal_AnalysisSpectrum self)
{
  
  Impl_Url obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getContourDir");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'getContourDir'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'getContourDir' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisSpectrum.dataSource

DataSource that 
AnalysisSPectrum refers to - key to class
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
Nmr_DataSource Anal_AnalysisSpectrum_GetDataSource(Anal_AnalysisSpectrum self)
{
  
  Nmr_DataSource obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDataSource");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'getDataSource'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'getDataSource' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

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
ApiList Anal_AnalysisSpectrum_GetFieldNames(Anal_AnalysisSpectrum self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisSpectrum.font

font for use in spectrum 
display (and printing?).
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
ApiString Anal_AnalysisSpectrum_GetFont(Anal_AnalysisSpectrum self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFont");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'getFont'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'getFont' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccpnmr.Analysis.AnalysisSpectrum
  @param  Anal_AnalysisSpectrum self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Anal_AnalysisSpectrum_GetFullKey(Anal_AnalysisSpectrum self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'getFullKey' is not callable");
  
  args = PyTuple_Pack(1, useGuid);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
ApiBoolean Anal_AnalysisSpectrum_GetInConstructor(Anal_AnalysisSpectrum self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'getInConstructor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

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
ApiBoolean Anal_AnalysisSpectrum_GetIsDeleted(Anal_AnalysisSpectrum self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccpnmr.Analysis.AnalysisSpectrum
  @param  Anal_AnalysisSpectrum self
  @returns  Local object key
**/
ApiObject Anal_AnalysisSpectrum_GetLocalKey(Anal_AnalysisSpectrum self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisSpectrum.multipletPattern

Multiplet 
pattern of spectrum
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
ApiString Anal_AnalysisSpectrum_GetMultipletPattern(Anal_AnalysisSpectrum self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMultipletPattern");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'getMultipletPattern'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'getMultipletPattern' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisSpectrum.negColors

Colors for negative 
contours - in order
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
ApiList Anal_AnalysisSpectrum_GetNegColors(Anal_AnalysisSpectrum self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNegColors");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'getNegColors'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'getNegColors' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisSpectrum.negLevels

Negative contour 
levels
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
ApiList Anal_AnalysisSpectrum_GetNegLevels(Anal_AnalysisSpectrum self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNegLevels");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'getNegLevels'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'getNegLevels' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
ApiString Anal_AnalysisSpectrum_GetPackageName(Anal_AnalysisSpectrum self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'getPackageName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

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
ApiString Anal_AnalysisSpectrum_GetPackageShortName(Anal_AnalysisSpectrum self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisSpectrum.parent

link to parent object - 
synonym for analysisProject
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
Anal_AnalysisProject Anal_AnalysisSpectrum_GetParent(Anal_AnalysisSpectrum self)
{
  
  Anal_AnalysisProject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisSpectrum.posColors

Colors for positive 
contours - in order
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
ApiList Anal_AnalysisSpectrum_GetPosColors(Anal_AnalysisSpectrum self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPosColors");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'getPosColors'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'getPosColors' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisSpectrum.posLevels

Positive contour 
levels
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
ApiList Anal_AnalysisSpectrum_GetPosLevels(Anal_AnalysisSpectrum self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPosLevels");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'getPosLevels'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'getPosLevels' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

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
ApiString Anal_AnalysisSpectrum_GetQualifiedName(Anal_AnalysisSpectrum self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisSpectrum.rank

Priority order for 
spectra (contours) in displays
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
ApiInteger Anal_AnalysisSpectrum_GetRank(Anal_AnalysisSpectrum self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRank");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'getRank'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'getRank' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
Impl_MemopsRoot Anal_AnalysisSpectrum_GetRoot(Anal_AnalysisSpectrum self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisSpectrum.shortcut

Keyboard Shortcut
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
ApiString Anal_AnalysisSpectrum_GetShortcut(Anal_AnalysisSpectrum self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getShortcut");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'getShortcut'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'getShortcut' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisSpectrum.sliceColor

Spectrum slice 
color
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
ApiString Anal_AnalysisSpectrum_GetSliceColor(Anal_AnalysisSpectrum self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSliceColor");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'getSliceColor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'getSliceColor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccpnmr.Analysis.AnalysisSpectrum.spectrumWindowViews

SpectrumWIndowViews 
viewing this Spectrum
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
ApiSet Anal_AnalysisSpectrum_GetSpectrumWindowViews(Anal_AnalysisSpectrum self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSpectrumWindowViews");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'getSpectrumWindowViews'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'getSpectrumWindowViews' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisSpectrum.storedContours

child link to 
class StoredContour
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
ApiSet Anal_AnalysisSpectrum_GetStoredContours(Anal_AnalysisSpectrum self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getStoredContours");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'getStoredContours'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'getStoredContours' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
Impl_TopObject Anal_AnalysisSpectrum_GetTopObject(Anal_AnalysisSpectrum self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisSpectrum.useBoundingBox

Use bounding 
box in display
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
ApiBoolean Anal_AnalysisSpectrum_GetUseBoundingBox(Anal_AnalysisSpectrum self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getUseBoundingBox");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'getUseBoundingBox'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'getUseBoundingBox' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisSpectrum.usePeakArrow

Use arrows for 
peak anotations
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
ApiBoolean Anal_AnalysisSpectrum_GetUsePeakArrow(Anal_AnalysisSpectrum self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getUsePeakArrow");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'getUsePeakArrow'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'getUsePeakArrow' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisSpectrum.usePrecalculated

Use 
pre-calculated contours
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
ApiBoolean Anal_AnalysisSpectrum_GetUsePrecalculated(Anal_AnalysisSpectrum self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getUsePrecalculated");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'getUsePrecalculated'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'getUsePrecalculated' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccpnmr.Analysis.AnalysisSpectrum
  @param  Anal_AnalysisProject parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anal_AnalysisSpectrum Anal_AnalysisSpectrum_Init(Anal_AnalysisProject parent, ApiMap attrlinks)
{
  
  return Anal_AnalysisProject_NewAnalysisSpectrum(parent, attrlinks);
}

/**
  Constructor for ccpnmr.Analysis.AnalysisSpectrum
  @param  Anal_AnalysisProject parent
  @param  Nmr_DataSource dataSource
  @returns  the new object
**/
Anal_AnalysisSpectrum Anal_AnalysisSpectrum_Init_reqd(Anal_AnalysisProject parent, Nmr_DataSource dataSource)
{
  
  Anal_AnalysisSpectrum  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "dataSource", dataSource);
  
  obj = Anal_AnalysisSpectrum_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccpnmr.Analysis.AnalysisDataDim
  @param  Anal_AnalysisSpectrum self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anal_AnalysisDataDim Anal_AnalysisSpectrum_NewAnalysisDataDim(Anal_AnalysisSpectrum self, ApiMap attrlinks)
{
  
  Anal_AnalysisDataDim obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newAnalysisDataDim");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'newAnalysisDataDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'newAnalysisDataDim' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccpnmr.Analysis.AnalysisDataDim
  @param  Anal_AnalysisSpectrum self
  @param  Nmr_AbstractDataDim dataDim
  @returns  the new object
**/
Anal_AnalysisDataDim Anal_AnalysisSpectrum_NewAnalysisDataDim_reqd(Anal_AnalysisSpectrum self, Nmr_AbstractDataDim dataDim)
{
  
  Anal_AnalysisDataDim  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "dataDim", dataDim);
  
  obj = Anal_AnalysisSpectrum_NewAnalysisDataDim(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccpnmr.Analysis.AnalysisPeakList
  @param  Anal_AnalysisSpectrum self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anal_AnalysisPeakList Anal_AnalysisSpectrum_NewAnalysisPeakList(Anal_AnalysisSpectrum self, ApiMap attrlinks)
{
  
  Anal_AnalysisPeakList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newAnalysisPeakList");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'newAnalysisPeakList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'newAnalysisPeakList' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccpnmr.Analysis.AnalysisPeakList
  @param  Anal_AnalysisSpectrum self
  @param  Nmr_PeakList peakList
  @returns  the new object
**/
Anal_AnalysisPeakList Anal_AnalysisSpectrum_NewAnalysisPeakList_reqd(Anal_AnalysisSpectrum self, Nmr_PeakList peakList)
{
  
  Anal_AnalysisPeakList  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "peakList", peakList);
  
  obj = Anal_AnalysisSpectrum_NewAnalysisPeakList(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccpnmr.Analysis.StoredContour
  @param  Anal_AnalysisSpectrum self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anal_StoredContour Anal_AnalysisSpectrum_NewStoredContour(Anal_AnalysisSpectrum self, ApiMap attrlinks)
{
  
  Anal_StoredContour obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newStoredContour");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'newStoredContour'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'newStoredContour' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccpnmr.Analysis.StoredContour
  @param  Anal_AnalysisSpectrum self
  @param  ApiList dims
  @param  char * path
  @returns  the new object
**/
Anal_StoredContour Anal_AnalysisSpectrum_NewStoredContour_reqd(Anal_AnalysisSpectrum self, ApiList dims, char * path)
{
  
  Anal_StoredContour  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__path = ApiString_New(path);

  PyDict_SetItemString(attrlinks, "dims", dims);
  PyDict_SetItemString(attrlinks, "path", api__path);
  
  obj = Anal_AnalysisSpectrum_NewStoredContour(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__path);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisSpectrum self
  @param  Impl_ApplicationData value
**/
void *Anal_AnalysisSpectrum_RemoveApplicationData(Anal_AnalysisSpectrum self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccpnmr.Analysis.AnalysisSpectrum.negColors

Colors for 
negative contours - in order
  @param  Anal_AnalysisSpectrum self
  @param  ApiString value
**/
void *Anal_AnalysisSpectrum_RemoveNegColor(Anal_AnalysisSpectrum self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeNegColor");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'removeNegColor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'removeNegColor' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccpnmr.Analysis.AnalysisSpectrum.negLevels

Negative contour 
levels
  @param  Anal_AnalysisSpectrum self
  @param  ApiFloat value
**/
void *Anal_AnalysisSpectrum_RemoveNegLevel(Anal_AnalysisSpectrum self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeNegLevel");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'removeNegLevel'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'removeNegLevel' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccpnmr.Analysis.AnalysisSpectrum.posColors

Colors for 
positive contours - in order
  @param  Anal_AnalysisSpectrum self
  @param  ApiString value
**/
void *Anal_AnalysisSpectrum_RemovePosColor(Anal_AnalysisSpectrum self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removePosColor");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'removePosColor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'removePosColor' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccpnmr.Analysis.AnalysisSpectrum.posLevels

Positive contour 
levels
  @param  Anal_AnalysisSpectrum self
  @param  ApiFloat value
**/
void *Anal_AnalysisSpectrum_RemovePosLevel(Anal_AnalysisSpectrum self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removePosLevel");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'removePosLevel'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'removePosLevel' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccpnmr.Analysis.AnalysisSpectrum
  @param  Anal_AnalysisSpectrum self
  @param  ApiString name
  @param  ApiObject value
**/
void *Anal_AnalysisSpectrum_Set(Anal_AnalysisSpectrum self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_AnalysisSpectrum self
  @param  Acco_AccessObject value
**/
void *Anal_AnalysisSpectrum_SetAccess(Anal_AnalysisSpectrum self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'setAccess' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisSpectrum self
  @param  ApiList values
**/
void *Anal_AnalysisSpectrum_SetApplicationData(Anal_AnalysisSpectrum self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisSpectrum.autoBaseLevel

Base contour 
level for automatic contour level setting
  @param  Anal_AnalysisSpectrum self
  @param  ApiFloat value
**/
void *Anal_AnalysisSpectrum_SetAutoBaseLevel(Anal_AnalysisSpectrum self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAutoBaseLevel");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'setAutoBaseLevel'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'setAutoBaseLevel' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisSpectrum.autoLevelChanger

Level change 
constant for automatic contour level setting
  @param  Anal_AnalysisSpectrum self
  @param  ApiFloat value
**/
void *Anal_AnalysisSpectrum_SetAutoLevelChanger(Anal_AnalysisSpectrum self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAutoLevelChanger");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'setAutoLevelChanger'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'setAutoLevelChanger' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisSpectrum.autoLevelMode

Auto contour 
level setting mode
  @param  Anal_AnalysisSpectrum self
  @param  ApiString value
**/
void *Anal_AnalysisSpectrum_SetAutoLevelMode(Anal_AnalysisSpectrum self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAutoLevelMode");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'setAutoLevelMode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'setAutoLevelMode' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisSpectrum.autoNumLevels

Number of 
contour levels for automatic setting.
  @param  Anal_AnalysisSpectrum self
  @param  ApiInteger value
**/
void *Anal_AnalysisSpectrum_SetAutoNumLevels(Anal_AnalysisSpectrum self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAutoNumLevels");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'setAutoNumLevels'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'setAutoNumLevels' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisSpectrum.contourDir

Contour file 
directory
  @param  Anal_AnalysisSpectrum self
  @param  Impl_Url value
**/
void *Anal_AnalysisSpectrum_SetContourDir(Anal_AnalysisSpectrum self, Impl_Url value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setContourDir");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'setContourDir'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'setContourDir' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisSpectrum.dataSource

DataSource that 
AnalysisSPectrum refers to - key to class
  @param  Anal_AnalysisSpectrum self
  @param  Nmr_DataSource value
**/
void *Anal_AnalysisSpectrum_SetDataSource(Anal_AnalysisSpectrum self, Nmr_DataSource value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDataSource");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'setDataSource'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'setDataSource' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisSpectrum.font

font for use in spectrum 
display (and printing?).
  @param  Anal_AnalysisSpectrum self
  @param  ApiString value
**/
void *Anal_AnalysisSpectrum_SetFont(Anal_AnalysisSpectrum self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setFont");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'setFont'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'setFont' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisSpectrum.multipletPattern

Multiplet 
pattern of spectrum
  @param  Anal_AnalysisSpectrum self
  @param  ApiString value
**/
void *Anal_AnalysisSpectrum_SetMultipletPattern(Anal_AnalysisSpectrum self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMultipletPattern");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'setMultipletPattern'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'setMultipletPattern' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisSpectrum.negColors

Colors for negative 
contours - in order
  @param  Anal_AnalysisSpectrum self
  @param  ApiList values
**/
void *Anal_AnalysisSpectrum_SetNegColors(Anal_AnalysisSpectrum self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNegColors");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'setNegColors'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'setNegColors' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisSpectrum.negLevels

Negative contour 
levels
  @param  Anal_AnalysisSpectrum self
  @param  ApiList values
**/
void *Anal_AnalysisSpectrum_SetNegLevels(Anal_AnalysisSpectrum self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNegLevels");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'setNegLevels'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'setNegLevels' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisSpectrum.posColors

Colors for positive 
contours - in order
  @param  Anal_AnalysisSpectrum self
  @param  ApiList values
**/
void *Anal_AnalysisSpectrum_SetPosColors(Anal_AnalysisSpectrum self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPosColors");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'setPosColors'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'setPosColors' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisSpectrum.posLevels

Positive contour 
levels
  @param  Anal_AnalysisSpectrum self
  @param  ApiList values
**/
void *Anal_AnalysisSpectrum_SetPosLevels(Anal_AnalysisSpectrum self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPosLevels");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'setPosLevels'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'setPosLevels' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisSpectrum.rank

Priority order for 
spectra (contours) in displays
  @param  Anal_AnalysisSpectrum self
  @param  ApiInteger value
**/
void *Anal_AnalysisSpectrum_SetRank(Anal_AnalysisSpectrum self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRank");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'setRank'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'setRank' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisSpectrum.shortcut

Keyboard Shortcut
  @param  Anal_AnalysisSpectrum self
  @param  ApiString value
**/
void *Anal_AnalysisSpectrum_SetShortcut(Anal_AnalysisSpectrum self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setShortcut");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'setShortcut'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'setShortcut' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisSpectrum.sliceColor

Spectrum slice 
color
  @param  Anal_AnalysisSpectrum self
  @param  ApiString value
**/
void *Anal_AnalysisSpectrum_SetSliceColor(Anal_AnalysisSpectrum self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSliceColor");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'setSliceColor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'setSliceColor' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccpnmr.Analysis.AnalysisSpectrum.spectrumWindowViews

SpectrumWIndowViews 
viewing this Spectrum
  @param  Anal_AnalysisSpectrum self
  @param  ApiSet values
**/
void *Anal_AnalysisSpectrum_SetSpectrumWindowViews(Anal_AnalysisSpectrum self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSpectrumWindowViews");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'setSpectrumWindowViews'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'setSpectrumWindowViews' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisSpectrum.useBoundingBox

Use bounding 
box in display
  @param  Anal_AnalysisSpectrum self
  @param  ApiBoolean value
**/
void *Anal_AnalysisSpectrum_SetUseBoundingBox(Anal_AnalysisSpectrum self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setUseBoundingBox");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'setUseBoundingBox'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'setUseBoundingBox' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisSpectrum.usePeakArrow

Use arrows for 
peak anotations
  @param  Anal_AnalysisSpectrum self
  @param  ApiBoolean value
**/
void *Anal_AnalysisSpectrum_SetUsePeakArrow(Anal_AnalysisSpectrum self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setUsePeakArrow");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'setUsePeakArrow'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'setUsePeakArrow' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisSpectrum.usePrecalculated

Use 
pre-calculated contours
  @param  Anal_AnalysisSpectrum self
  @param  ApiBoolean value
**/
void *Anal_AnalysisSpectrum_SetUsePrecalculated(Anal_AnalysisSpectrum self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setUsePrecalculated");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'setUsePrecalculated'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'setUsePrecalculated' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccpnmr.Analysis.AnalysisSpectrum.analysisDataDims

child link 
to class AnalysisDataDim
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
ApiList Anal_AnalysisSpectrum_SortedAnalysisDataDims(Anal_AnalysisSpectrum self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedAnalysisDataDims");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'sortedAnalysisDataDims'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'sortedAnalysisDataDims' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccpnmr.Analysis.AnalysisSpectrum.analysisPeakLists

child 
link to class AnalysisPeakList
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
ApiList Anal_AnalysisSpectrum_SortedAnalysisPeakLists(Anal_AnalysisSpectrum self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedAnalysisPeakLists");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'sortedAnalysisPeakLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'sortedAnalysisPeakLists' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccpnmr.Analysis.AnalysisSpectrum.spectrumWindowViews

SpectrumWIndowViews 
viewing this Spectrum
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
ApiList Anal_AnalysisSpectrum_SortedSpectrumWindowViews(Anal_AnalysisSpectrum self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedSpectrumWindowViews");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'sortedSpectrumWindowViews'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'sortedSpectrumWindowViews' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccpnmr.Analysis.AnalysisSpectrum.storedContours

child link 
to class StoredContour
  @param  Anal_AnalysisSpectrum self
  @returns   the result
**/
ApiList Anal_AnalysisSpectrum_SortedStoredContours(Anal_AnalysisSpectrum self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedStoredContours");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: cannot find method 'sortedStoredContours'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisSpectrum: method 'sortedStoredContours' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
