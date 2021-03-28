
#ifndef __incl__ccp_api_general_DataLocation_NumericMatrix_h__
#define __incl__ccp_api_general_DataLocation_NumericMatrix_h__

#include "ccp.h"

/*
  DataSource containing one or more N-dimensional numerical matrix records, which may be real or (hyper)complex
*/

/* package ccp.api.general.DataLocation */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_NumericMatrix self
  @param  Impl_ApplicationData value
**/
extern void *Dloc_NumericMatrix_AddApplicationData(Dloc_NumericMatrix self, Impl_ApplicationData value);

/**
  Add for 
ccp.general.DataLocation.AbstractDataStore.externalDatas

NmrCalc.ExternalData 
objects that point to this file.
  @param  Dloc_NumericMatrix self
  @param  Calc_ExternalData value
**/
extern void *Dloc_NumericMatrix_AddExternalData(Dloc_NumericMatrix self, Calc_ExternalData value);

/**
  Add for ccp.general.DataLocation.NumericMatrix.isComplex

Are numbers 
complex (if True) or real/integer (if False).
  @param  Dloc_NumericMatrix self
  @param  ApiBoolean value
**/
extern void *Dloc_NumericMatrix_AddIsComplex(Dloc_NumericMatrix self, ApiBoolean value);

/**
  Add for 
ccp.general.DataLocation.NumericMatrix.nmrDataSources

ccp.nmr.Nmr.DataSources 
stored in the DataStore
  @param  Dloc_NumericMatrix self
  @param  Nmr_DataSource value
**/
extern void *Dloc_NumericMatrix_AddNmrDataSource(Dloc_NumericMatrix self, Nmr_DataSource value);

/**
  Add for ccp.general.DataLocation.NumericMatrix.numPoints

number of 
points for each matrix dimension - also defines dimensionality of 
matrix. The number of points is the same for real or complex data, in 
the sense that n complex points require 2n real numbers for storage. 
Dimensions are in storage order, fastest varying first.
  @param  Dloc_NumericMatrix self
  @param  ApiInteger value
**/
extern void *Dloc_NumericMatrix_AddNumPoints(Dloc_NumericMatrix self, ApiInteger value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_NumericMatrix self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Dloc_NumericMatrix_FindAllApplicationData(Dloc_NumericMatrix self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_NumericMatrix self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Dloc_NumericMatrix_FindAllApplicationData_keyval0(Dloc_NumericMatrix self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_NumericMatrix self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Dloc_NumericMatrix_FindAllApplicationData_keyval1(Dloc_NumericMatrix self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_NumericMatrix self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Dloc_NumericMatrix_FindAllApplicationData_keyval2(Dloc_NumericMatrix self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_NumericMatrix self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Dloc_NumericMatrix_FindAllApplicationData_keyval3(Dloc_NumericMatrix self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_NumericMatrix self
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
extern ApiList Dloc_NumericMatrix_FindAllApplicationData_keyval4(Dloc_NumericMatrix self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.general.DataLocation.AbstractDataStore.externalDatas

NmrCalc.ExternalData 
objects that point to this file.
  @param  Dloc_NumericMatrix self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Dloc_NumericMatrix_FindAllExternalDatas(Dloc_NumericMatrix self, ApiMap conditions);

/**
  FindAll for 
ccp.general.DataLocation.AbstractDataStore.externalDatas

NmrCalc.ExternalData 
objects that point to this file.
  @param  Dloc_NumericMatrix self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Dloc_NumericMatrix_FindAllExternalDatas_keyval0(Dloc_NumericMatrix self);

/**
  FindAll for 
ccp.general.DataLocation.AbstractDataStore.externalDatas

NmrCalc.ExternalData 
objects that point to this file.
  @param  Dloc_NumericMatrix self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Dloc_NumericMatrix_FindAllExternalDatas_keyval1(Dloc_NumericMatrix self, char * key, ApiObject value);

/**
  FindAll for 
ccp.general.DataLocation.AbstractDataStore.externalDatas

NmrCalc.ExternalData 
objects that point to this file.
  @param  Dloc_NumericMatrix self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Dloc_NumericMatrix_FindAllExternalDatas_keyval2(Dloc_NumericMatrix self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.general.DataLocation.AbstractDataStore.externalDatas

NmrCalc.ExternalData 
objects that point to this file.
  @param  Dloc_NumericMatrix self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Dloc_NumericMatrix_FindAllExternalDatas_keyval3(Dloc_NumericMatrix self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.general.DataLocation.AbstractDataStore.externalDatas

NmrCalc.ExternalData 
objects that point to this file.
  @param  Dloc_NumericMatrix self
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
extern ApiSet Dloc_NumericMatrix_FindAllExternalDatas_keyval4(Dloc_NumericMatrix self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.general.DataLocation.NumericMatrix.nmrDataSources

ccp.nmr.Nmr.DataSources 
stored in the DataStore
  @param  Dloc_NumericMatrix self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Dloc_NumericMatrix_FindAllNmrDataSources(Dloc_NumericMatrix self, ApiMap conditions);

/**
  FindAll for 
ccp.general.DataLocation.NumericMatrix.nmrDataSources

ccp.nmr.Nmr.DataSources 
stored in the DataStore
  @param  Dloc_NumericMatrix self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Dloc_NumericMatrix_FindAllNmrDataSources_keyval0(Dloc_NumericMatrix self);

/**
  FindAll for 
ccp.general.DataLocation.NumericMatrix.nmrDataSources

ccp.nmr.Nmr.DataSources 
stored in the DataStore
  @param  Dloc_NumericMatrix self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Dloc_NumericMatrix_FindAllNmrDataSources_keyval1(Dloc_NumericMatrix self, char * key, ApiObject value);

/**
  FindAll for 
ccp.general.DataLocation.NumericMatrix.nmrDataSources

ccp.nmr.Nmr.DataSources 
stored in the DataStore
  @param  Dloc_NumericMatrix self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Dloc_NumericMatrix_FindAllNmrDataSources_keyval2(Dloc_NumericMatrix self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.general.DataLocation.NumericMatrix.nmrDataSources

ccp.nmr.Nmr.DataSources 
stored in the DataStore
  @param  Dloc_NumericMatrix self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Dloc_NumericMatrix_FindAllNmrDataSources_keyval3(Dloc_NumericMatrix self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.general.DataLocation.NumericMatrix.nmrDataSources

ccp.nmr.Nmr.DataSources 
stored in the DataStore
  @param  Dloc_NumericMatrix self
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
extern ApiSet Dloc_NumericMatrix_FindAllNmrDataSources_keyval4(Dloc_NumericMatrix self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_NumericMatrix self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Dloc_NumericMatrix_FindFirstApplicationData(Dloc_NumericMatrix self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_NumericMatrix self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Dloc_NumericMatrix_FindFirstApplicationData_keyval0(Dloc_NumericMatrix self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_NumericMatrix self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Dloc_NumericMatrix_FindFirstApplicationData_keyval1(Dloc_NumericMatrix self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_NumericMatrix self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Dloc_NumericMatrix_FindFirstApplicationData_keyval2(Dloc_NumericMatrix self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_NumericMatrix self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Dloc_NumericMatrix_FindFirstApplicationData_keyval3(Dloc_NumericMatrix self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_NumericMatrix self
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
extern Impl_ApplicationData Dloc_NumericMatrix_FindFirstApplicationData_keyval4(Dloc_NumericMatrix self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.general.DataLocation.AbstractDataStore.externalDatas

NmrCalc.ExternalData 
objects that point to this file.
  @param  Dloc_NumericMatrix self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Calc_ExternalData Dloc_NumericMatrix_FindFirstExternalData(Dloc_NumericMatrix self, ApiMap conditions);

/**
  FindFirst for 
ccp.general.DataLocation.AbstractDataStore.externalDatas

NmrCalc.ExternalData 
objects that point to this file.
  @param  Dloc_NumericMatrix self
  @returns  the first value that satisfies the conditions 
**/
extern Calc_ExternalData Dloc_NumericMatrix_FindFirstExternalData_keyval0(Dloc_NumericMatrix self);

/**
  FindFirst for 
ccp.general.DataLocation.AbstractDataStore.externalDatas

NmrCalc.ExternalData 
objects that point to this file.
  @param  Dloc_NumericMatrix self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Calc_ExternalData Dloc_NumericMatrix_FindFirstExternalData_keyval1(Dloc_NumericMatrix self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.general.DataLocation.AbstractDataStore.externalDatas

NmrCalc.ExternalData 
objects that point to this file.
  @param  Dloc_NumericMatrix self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Calc_ExternalData Dloc_NumericMatrix_FindFirstExternalData_keyval2(Dloc_NumericMatrix self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.general.DataLocation.AbstractDataStore.externalDatas

NmrCalc.ExternalData 
objects that point to this file.
  @param  Dloc_NumericMatrix self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Calc_ExternalData Dloc_NumericMatrix_FindFirstExternalData_keyval3(Dloc_NumericMatrix self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.general.DataLocation.AbstractDataStore.externalDatas

NmrCalc.ExternalData 
objects that point to this file.
  @param  Dloc_NumericMatrix self
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
extern Calc_ExternalData Dloc_NumericMatrix_FindFirstExternalData_keyval4(Dloc_NumericMatrix self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.general.DataLocation.NumericMatrix.nmrDataSources

ccp.nmr.Nmr.DataSources 
stored in the DataStore
  @param  Dloc_NumericMatrix self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DataSource Dloc_NumericMatrix_FindFirstNmrDataSource(Dloc_NumericMatrix self, ApiMap conditions);

/**
  FindFirst for 
ccp.general.DataLocation.NumericMatrix.nmrDataSources

ccp.nmr.Nmr.DataSources 
stored in the DataStore
  @param  Dloc_NumericMatrix self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DataSource Dloc_NumericMatrix_FindFirstNmrDataSource_keyval0(Dloc_NumericMatrix self);

/**
  FindFirst for 
ccp.general.DataLocation.NumericMatrix.nmrDataSources

ccp.nmr.Nmr.DataSources 
stored in the DataStore
  @param  Dloc_NumericMatrix self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DataSource Dloc_NumericMatrix_FindFirstNmrDataSource_keyval1(Dloc_NumericMatrix self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.general.DataLocation.NumericMatrix.nmrDataSources

ccp.nmr.Nmr.DataSources 
stored in the DataStore
  @param  Dloc_NumericMatrix self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DataSource Dloc_NumericMatrix_FindFirstNmrDataSource_keyval2(Dloc_NumericMatrix self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.general.DataLocation.NumericMatrix.nmrDataSources

ccp.nmr.Nmr.DataSources 
stored in the DataStore
  @param  Dloc_NumericMatrix self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DataSource Dloc_NumericMatrix_FindFirstNmrDataSource_keyval3(Dloc_NumericMatrix self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.general.DataLocation.NumericMatrix.nmrDataSources

ccp.nmr.Nmr.DataSources 
stored in the DataStore
  @param  Dloc_NumericMatrix self
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
extern Nmr_DataSource Dloc_NumericMatrix_FindFirstNmrDataSource_keyval4(Dloc_NumericMatrix self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Dloc_NumericMatrix self
  @returns   the result
**/
extern Acco_AccessObject Dloc_NumericMatrix_GetAccess(Dloc_NumericMatrix self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Dloc_NumericMatrix self
  @returns   the result
**/
extern Acco_AccessObject Dloc_NumericMatrix_GetActiveAccess(Dloc_NumericMatrix self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_NumericMatrix self
  @returns   the result
**/
extern ApiList Dloc_NumericMatrix_GetApplicationData(Dloc_NumericMatrix self);

/**
  GetByKey for ccp.general.DataLocation.NumericMatrix
  @param  Dloc_NumericMatrix self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Dloc_NumericMatrix Dloc_NumericMatrix_GetByKey(Dloc_NumericMatrix self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Dloc_NumericMatrix self
  @returns   the result
**/
extern ApiString Dloc_NumericMatrix_GetClassName(Dloc_NumericMatrix self);

/**
  Get for ccp.general.DataLocation.NumericMatrix.complexStoredBy

The 
ordering of real and imaginary parts of hypercomplex numbers in the data 
matrix. See ComplexStorage type for details
  @param  Dloc_NumericMatrix self
  @returns   the result
**/
extern ApiString Dloc_NumericMatrix_GetComplexStoredBy(Dloc_NumericMatrix self);

/**
  Get for 
ccp.general.DataLocation.AbstractDataStore.dataLocationStore

parent 
link
  @param  Dloc_NumericMatrix self
  @returns   the result
**/
extern Dloc_DataLocationStore Dloc_NumericMatrix_GetDataLocationStore(Dloc_NumericMatrix self);

/**
  Get for ccp.general.DataLocation.AbstractDataStore.dataUrl

DataUrl 
under which AbstractDataStore is stored
  @param  Dloc_NumericMatrix self
  @returns   the result
**/
extern Dloc_DataUrl Dloc_NumericMatrix_GetDataUrl(Dloc_NumericMatrix self);

/**
  Get for ccp.general.DataLocation.AbstractDataStore.details

Free text, 
for notes, explanatory comments, etc.
  @param  Dloc_NumericMatrix self
  @returns   the result
**/
extern ApiString Dloc_NumericMatrix_GetDetails(Dloc_NumericMatrix self);

/**
  Get for 
ccp.general.DataLocation.AbstractDataStore.externalDatas

NmrCalc.ExternalData 
objects that point to this file.
  @param  Dloc_NumericMatrix self
  @returns   the result
**/
extern ApiSet Dloc_NumericMatrix_GetExternalDatas(Dloc_NumericMatrix self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Dloc_NumericMatrix self
  @returns   the result
**/
extern ApiList Dloc_NumericMatrix_GetFieldNames(Dloc_NumericMatrix self);

/**
  Get for ccp.general.DataLocation.NumericMatrix.fileType

Data file type.
  @param  Dloc_NumericMatrix self
  @returns   the result
**/
extern ApiString Dloc_NumericMatrix_GetFileType(Dloc_NumericMatrix self);

/**
  Get for ccp.general.DataLocation.AbstractDataStore.fullPath

Full path 
to data
  @param  Dloc_NumericMatrix self
  @returns   the result
**/
extern ApiString Dloc_NumericMatrix_GetFullPath(Dloc_NumericMatrix self);

/**
  Get for ccp.general.DataLocation.NumericMatrix.headerSize

Size of 
record header. The unit is different for different subtypes
  @param  Dloc_NumericMatrix self
  @returns   the result
**/
extern ApiInteger Dloc_NumericMatrix_GetHeaderSize(Dloc_NumericMatrix self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Dloc_NumericMatrix self
  @returns   the result
**/
extern ApiBoolean Dloc_NumericMatrix_GetInConstructor(Dloc_NumericMatrix self);

/**
  Get for ccp.general.DataLocation.NumericMatrix.isBigEndian

Are data 
big-endian (alternative little-endian)? Irrelevant for ascii data.
  @param  Dloc_NumericMatrix self
  @returns   the result
**/
extern ApiBoolean Dloc_NumericMatrix_GetIsBigEndian(Dloc_NumericMatrix self);

/**
  Get for ccp.general.DataLocation.NumericMatrix.isComplex

Are numbers 
complex (if True) or real/integer (if False).
  @param  Dloc_NumericMatrix self
  @returns   the result
**/
extern ApiList Dloc_NumericMatrix_GetIsComplex(Dloc_NumericMatrix self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Dloc_NumericMatrix self
  @returns   the result
**/
extern ApiBoolean Dloc_NumericMatrix_GetIsDeleted(Dloc_NumericMatrix self);

/**
  Get for 
ccp.general.DataLocation.NumericMatrix.nmrDataSources

ccp.nmr.Nmr.DataSources 
stored in the DataStore
  @param  Dloc_NumericMatrix self
  @returns   the result
**/
extern ApiSet Dloc_NumericMatrix_GetNmrDataSources(Dloc_NumericMatrix self);

/**
  getter for derived attribute numDims
  @param  Dloc_NumericMatrix self
  @returns   the result
**/
extern ApiInteger Dloc_NumericMatrix_GetNumDims(Dloc_NumericMatrix self);

/**
  Get for ccp.general.DataLocation.NumericMatrix.numPoints

number of 
points for each matrix dimension - also defines dimensionality of 
matrix. The number of points is the same for real or complex data, in 
the sense that n complex points require 2n real numbers for storage. 
Dimensions are in storage order, fastest varying first.
  @param  Dloc_NumericMatrix self
  @returns   the result
**/
extern ApiList Dloc_NumericMatrix_GetNumPoints(Dloc_NumericMatrix self);

/**
  Get for ccp.general.DataLocation.NumericMatrix.numRecords

Number of 
matrix records in file. All other information in the object describes a 
single record.
  @param  Dloc_NumericMatrix self
  @returns   the result
**/
extern ApiInteger Dloc_NumericMatrix_GetNumRecords(Dloc_NumericMatrix self);

/**
  Get for ccp.general.DataLocation.NumericMatrix.numberType

Type of 
numbers held in matrix
  @param  Dloc_NumericMatrix self
  @returns   the result
**/
extern ApiString Dloc_NumericMatrix_GetNumberType(Dloc_NumericMatrix self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Dloc_NumericMatrix self
  @returns   the result
**/
extern ApiString Dloc_NumericMatrix_GetPackageName(Dloc_NumericMatrix self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Dloc_NumericMatrix self
  @returns   the result
**/
extern ApiString Dloc_NumericMatrix_GetPackageShortName(Dloc_NumericMatrix self);

/**
  Get for ccp.general.DataLocation.AbstractDataStore.parent

link to 
parent object - synonym for dataLocationStore
  @param  Dloc_NumericMatrix self
  @returns   the result
**/
extern Dloc_DataLocationStore Dloc_NumericMatrix_GetParent(Dloc_NumericMatrix self);

/**
  Get for ccp.general.DataLocation.AbstractDataStore.path

Path relative 
to dataUrl.url.
  @param  Dloc_NumericMatrix self
  @returns   the result
**/
extern ApiString Dloc_NumericMatrix_GetPath(Dloc_NumericMatrix self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Dloc_NumericMatrix self
  @returns   the result
**/
extern ApiString Dloc_NumericMatrix_GetQualifiedName(Dloc_NumericMatrix self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Dloc_NumericMatrix self
  @returns   the result
**/
extern Impl_MemopsRoot Dloc_NumericMatrix_GetRoot(Dloc_NumericMatrix self);

/**
  Get for ccp.general.DataLocation.NumericMatrix.scaleFactor

Scale factor 
for data stored in matrix. The numbers as stored must be multiplied by 
the scaleFactor before being used. E.g. a stored value of 2 (int) with a 
scaling factor of 1.6 means the number to use in calculations would be 
3.2.
  @param  Dloc_NumericMatrix self
  @returns   the result
**/
extern ApiFloat Dloc_NumericMatrix_GetScaleFactor(Dloc_NumericMatrix self);

/**
  Get for ccp.general.DataLocation.AbstractDataStore.serial

Serial number 
of object. Serves as object main key. Serial numbers of deleted objects 
are not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Dloc_NumericMatrix self
  @returns   the result
**/
extern ApiInteger Dloc_NumericMatrix_GetSerial(Dloc_NumericMatrix self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Dloc_NumericMatrix self
  @returns   the result
**/
extern Impl_TopObject Dloc_NumericMatrix_GetTopObject(Dloc_NumericMatrix self);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_NumericMatrix self
  @param  Impl_ApplicationData value
**/
extern void *Dloc_NumericMatrix_RemoveApplicationData(Dloc_NumericMatrix self, Impl_ApplicationData value);

/**
  Remove for 
ccp.general.DataLocation.AbstractDataStore.externalDatas

NmrCalc.ExternalData 
objects that point to this file.
  @param  Dloc_NumericMatrix self
  @param  Calc_ExternalData value
**/
extern void *Dloc_NumericMatrix_RemoveExternalData(Dloc_NumericMatrix self, Calc_ExternalData value);

/**
  Remove for ccp.general.DataLocation.NumericMatrix.isComplex

Are numbers 
complex (if True) or real/integer (if False).
  @param  Dloc_NumericMatrix self
  @param  ApiBoolean value
**/
extern void *Dloc_NumericMatrix_RemoveIsComplex(Dloc_NumericMatrix self, ApiBoolean value);

/**
  Remove for 
ccp.general.DataLocation.NumericMatrix.nmrDataSources

ccp.nmr.Nmr.DataSources 
stored in the DataStore
  @param  Dloc_NumericMatrix self
  @param  Nmr_DataSource value
**/
extern void *Dloc_NumericMatrix_RemoveNmrDataSource(Dloc_NumericMatrix self, Nmr_DataSource value);

/**
  Remove for ccp.general.DataLocation.NumericMatrix.numPoints

number of 
points for each matrix dimension - also defines dimensionality of 
matrix. The number of points is the same for real or complex data, in 
the sense that n complex points require 2n real numbers for storage. 
Dimensions are in storage order, fastest varying first.
  @param  Dloc_NumericMatrix self
  @param  ApiInteger value
**/
extern void *Dloc_NumericMatrix_RemoveNumPoints(Dloc_NumericMatrix self, ApiInteger value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Dloc_NumericMatrix self
  @param  Acco_AccessObject value
**/
extern void *Dloc_NumericMatrix_SetAccess(Dloc_NumericMatrix self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_NumericMatrix self
  @param  ApiList values
**/
extern void *Dloc_NumericMatrix_SetApplicationData(Dloc_NumericMatrix self, ApiList values);

/**
  Set for ccp.general.DataLocation.NumericMatrix.complexStoredBy

The 
ordering of real and imaginary parts of hypercomplex numbers in the data 
matrix. See ComplexStorage type for details
  @param  Dloc_NumericMatrix self
  @param  ApiString value
**/
extern void *Dloc_NumericMatrix_SetComplexStoredBy(Dloc_NumericMatrix self, ApiString value);

/**
  Set for ccp.general.DataLocation.AbstractDataStore.dataUrl

DataUrl 
under which AbstractDataStore is stored
  @param  Dloc_NumericMatrix self
  @param  Dloc_DataUrl value
**/
extern void *Dloc_NumericMatrix_SetDataUrl(Dloc_NumericMatrix self, Dloc_DataUrl value);

/**
  Set for ccp.general.DataLocation.AbstractDataStore.details

Free text, 
for notes, explanatory comments, etc.
  @param  Dloc_NumericMatrix self
  @param  ApiString value
**/
extern void *Dloc_NumericMatrix_SetDetails(Dloc_NumericMatrix self, ApiString value);

/**
  Set for 
ccp.general.DataLocation.AbstractDataStore.externalDatas

NmrCalc.ExternalData 
objects that point to this file.
  @param  Dloc_NumericMatrix self
  @param  ApiSet values
**/
extern void *Dloc_NumericMatrix_SetExternalDatas(Dloc_NumericMatrix self, ApiSet values);

/**
  Set for ccp.general.DataLocation.NumericMatrix.fileType

Data file type.
  @param  Dloc_NumericMatrix self
  @param  ApiString value
**/
extern void *Dloc_NumericMatrix_SetFileType(Dloc_NumericMatrix self, ApiString value);

/**
  Set for ccp.general.DataLocation.NumericMatrix.headerSize

Size of 
record header. The unit is different for different subtypes
  @param  Dloc_NumericMatrix self
  @param  ApiInteger value
**/
extern void *Dloc_NumericMatrix_SetHeaderSize(Dloc_NumericMatrix self, ApiInteger value);

/**
  Set for ccp.general.DataLocation.NumericMatrix.isBigEndian

Are data 
big-endian (alternative little-endian)? Irrelevant for ascii data.
  @param  Dloc_NumericMatrix self
  @param  ApiBoolean value
**/
extern void *Dloc_NumericMatrix_SetIsBigEndian(Dloc_NumericMatrix self, ApiBoolean value);

/**
  Set for ccp.general.DataLocation.NumericMatrix.isComplex

Are numbers 
complex (if True) or real/integer (if False).
  @param  Dloc_NumericMatrix self
  @param  ApiList values
**/
extern void *Dloc_NumericMatrix_SetIsComplex(Dloc_NumericMatrix self, ApiList values);

/**
  Set for 
ccp.general.DataLocation.NumericMatrix.nmrDataSources

ccp.nmr.Nmr.DataSources 
stored in the DataStore
  @param  Dloc_NumericMatrix self
  @param  ApiSet values
**/
extern void *Dloc_NumericMatrix_SetNmrDataSources(Dloc_NumericMatrix self, ApiSet values);

/**
  Set for ccp.general.DataLocation.NumericMatrix.numPoints

number of 
points for each matrix dimension - also defines dimensionality of 
matrix. The number of points is the same for real or complex data, in 
the sense that n complex points require 2n real numbers for storage. 
Dimensions are in storage order, fastest varying first.
  @param  Dloc_NumericMatrix self
  @param  ApiList values
**/
extern void *Dloc_NumericMatrix_SetNumPoints(Dloc_NumericMatrix self, ApiList values);

/**
  Set for ccp.general.DataLocation.NumericMatrix.numRecords

Number of 
matrix records in file. All other information in the object describes a 
single record.
  @param  Dloc_NumericMatrix self
  @param  ApiInteger value
**/
extern void *Dloc_NumericMatrix_SetNumRecords(Dloc_NumericMatrix self, ApiInteger value);

/**
  Set for ccp.general.DataLocation.NumericMatrix.numberType

Type of 
numbers held in matrix
  @param  Dloc_NumericMatrix self
  @param  ApiString value
**/
extern void *Dloc_NumericMatrix_SetNumberType(Dloc_NumericMatrix self, ApiString value);

/**
  Set for ccp.general.DataLocation.AbstractDataStore.path

Path relative 
to dataUrl.url.
  @param  Dloc_NumericMatrix self
  @param  ApiString value
**/
extern void *Dloc_NumericMatrix_SetPath(Dloc_NumericMatrix self, ApiString value);

/**
  Set for ccp.general.DataLocation.NumericMatrix.scaleFactor

Scale factor 
for data stored in matrix. The numbers as stored must be multiplied by 
the scaleFactor before being used. E.g. a stored value of 2 (int) with a 
scaling factor of 1.6 means the number to use in calculations would be 
3.2.
  @param  Dloc_NumericMatrix self
  @param  ApiFloat value
**/
extern void *Dloc_NumericMatrix_SetScaleFactor(Dloc_NumericMatrix self, ApiFloat value);

/**
  Set for ccp.general.DataLocation.AbstractDataStore.serial

Serial number 
of object. Serves as object main key. Serial numbers of deleted objects 
are not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Dloc_NumericMatrix self
  @param  ApiInteger value
**/
extern void *Dloc_NumericMatrix_SetSerial(Dloc_NumericMatrix self, ApiInteger value);

/**
  Sorted for 
ccp.general.DataLocation.AbstractDataStore.externalDatas

NmrCalc.ExternalData 
objects that point to this file.
  @param  Dloc_NumericMatrix self
  @returns   the result
**/
extern ApiList Dloc_NumericMatrix_SortedExternalDatas(Dloc_NumericMatrix self);

/**
  Sorted for 
ccp.general.DataLocation.NumericMatrix.nmrDataSources

ccp.nmr.Nmr.DataSources 
stored in the DataStore
  @param  Dloc_NumericMatrix self
  @returns   the result
**/
extern ApiList Dloc_NumericMatrix_SortedNmrDataSources(Dloc_NumericMatrix self);

#endif /* __incl__ccp_api_general_DataLocation_NumericMatrix_h__ */
