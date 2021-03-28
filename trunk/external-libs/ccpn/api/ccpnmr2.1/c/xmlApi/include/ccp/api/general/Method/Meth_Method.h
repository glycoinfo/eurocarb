
#ifndef __incl__ccp_api_general_Method_Method_h__
#define __incl__ccp_api_general_Method_Method_h__

#include "ccp.h"

/*
  Description of method or procedure, be it computational (calculation or processing) or real-world (e.g. purification).
*/

/* package ccp.api.general.Method */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Meth_Method self
  @param  Impl_ApplicationData value
**/
extern void *Meth_Method_AddApplicationData(Meth_Method self, Impl_ApplicationData value);

/**
  Add for ccp.general.Method.Method.columns

Columns that use this loading 
method.
  @param  Meth_Method self
  @param  Inst_Column value
**/
extern void *Meth_Method_AddColumn(Meth_Method self, Inst_Column value);

/**
  Add for ccp.general.Method.Method.derivedNmrExperiments

Nmr.Experiments 
derived using Method
  @param  Meth_Method self
  @param  Nmr_Experiment value
**/
extern void *Meth_Method_AddDerivedNmrExperiment(Meth_Method self, Nmr_Experiment value);

/**
  Add for ccp.general.Method.Method.experiments

Experiment associated to 
a certain Method.
  @param  Meth_Method self
  @param  Expe_Experiment value
**/
extern void *Meth_Method_AddExperiment(Meth_Method self, Expe_Experiment value);

/**
  Add for ccp.general.Method.Method.fitPeakLists

Nmr Peak Lists using 
Method as default fitting method.
  @param  Meth_Method self
  @param  Nmr_PeakList value
**/
extern void *Meth_Method_AddFitPeakList(Meth_Method self, Nmr_PeakList value);

/**
  Add for ccp.general.Method.Method.intensPeakLists

PeakLists using 
Method as 'Preferred' peak intensity deternmination method.
  @param  Meth_Method self
  @param  Nmr_PeakList value
**/
extern void *Meth_Method_AddIntensPeakList(Meth_Method self, Nmr_PeakList value);

/**
  Add for ccp.general.Method.Method.peaks

Peaks fitted using Method
  @param  Meth_Method self
  @param  Nmr_Peak value
**/
extern void *Meth_Method_AddPeak(Meth_Method self, Nmr_Peak value);

/**
  Add for ccp.general.Method.Method.snDataSources

DataSources that use 
this method for S/N ratio determination
  @param  Meth_Method self
  @param  Nmr_DataSource value
**/
extern void *Meth_Method_AddSnDataSource(Meth_Method self, Nmr_DataSource value);

/**
  Add for ccp.general.Method.Method.structureAnalyses

StructureAnalyses 
carried out using method
  @param  Meth_Method self
  @param  Nmr_StructureAnalysis value
**/
extern void *Meth_Method_AddStructureAnalysis(Meth_Method self, Nmr_StructureAnalysis value);

/**
  Add for 
ccp.general.Method.Method.structureGenerations

StructureGenerations 
carried out using method
  @param  Meth_Method self
  @param  Nmr_StructureGeneration value
**/
extern void *Meth_Method_AddStructureGeneration(Meth_Method self, Nmr_StructureGeneration value);

/**
  CheckAllValid for ccp.general.Method.Method
  @param  Meth_Method self
  @param  ApiBoolean complete
**/
extern void *Meth_Method_CheckAllValid(Meth_Method self, ApiBoolean complete);

/**
  CheckValid for ccp.general.Method.Method
  @param  Meth_Method self
  @param  ApiBoolean complete
**/
extern void *Meth_Method_CheckValid(Meth_Method self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Meth_Method_FindAllApplicationData(Meth_Method self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Meth_Method self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Meth_Method_FindAllApplicationData_keyval0(Meth_Method self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Meth_Method_FindAllApplicationData_keyval1(Meth_Method self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Meth_Method_FindAllApplicationData_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Meth_Method_FindAllApplicationData_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Meth_Method self
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
extern ApiList Meth_Method_FindAllApplicationData_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Method.Method.citations

Citations describing 
method.
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllCitations(Meth_Method self, ApiMap conditions);

/**
  FindAll for ccp.general.Method.Method.citations

Citations describing 
method.
  @param  Meth_Method self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllCitations_keyval0(Meth_Method self);

/**
  FindAll for ccp.general.Method.Method.citations

Citations describing 
method.
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllCitations_keyval1(Meth_Method self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Method.Method.citations

Citations describing 
method.
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllCitations_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Method.Method.citations

Citations describing 
method.
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllCitations_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Method.Method.citations

Citations describing 
method.
  @param  Meth_Method self
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
extern ApiSet Meth_Method_FindAllCitations_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Method.Method.columns

Columns that use this 
loading method.
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllColumns(Meth_Method self, ApiMap conditions);

/**
  FindAll for ccp.general.Method.Method.columns

Columns that use this 
loading method.
  @param  Meth_Method self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllColumns_keyval0(Meth_Method self);

/**
  FindAll for ccp.general.Method.Method.columns

Columns that use this 
loading method.
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllColumns_keyval1(Meth_Method self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Method.Method.columns

Columns that use this 
loading method.
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllColumns_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Method.Method.columns

Columns that use this 
loading method.
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllColumns_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Method.Method.columns

Columns that use this 
loading method.
  @param  Meth_Method self
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
extern ApiSet Meth_Method_FindAllColumns_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Method.Method.compressDataSources

Nmr 
DataSources compresed with Method
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllCompressDataSources(Meth_Method self, ApiMap conditions);

/**
  FindAll for ccp.general.Method.Method.compressDataSources

Nmr 
DataSources compresed with Method
  @param  Meth_Method self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllCompressDataSources_keyval0(Meth_Method self);

/**
  FindAll for ccp.general.Method.Method.compressDataSources

Nmr 
DataSources compresed with Method
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllCompressDataSources_keyval1(Meth_Method self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Method.Method.compressDataSources

Nmr 
DataSources compresed with Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllCompressDataSources_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Method.Method.compressDataSources

Nmr 
DataSources compresed with Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllCompressDataSources_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Method.Method.compressDataSources

Nmr 
DataSources compresed with Method
  @param  Meth_Method self
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
extern ApiSet Meth_Method_FindAllCompressDataSources_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Method.Method.constraintLists

ConstraintLists 
calculated using Method
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllConstraintLists(Meth_Method self, ApiMap conditions);

/**
  FindAll for ccp.general.Method.Method.constraintLists

ConstraintLists 
calculated using Method
  @param  Meth_Method self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllConstraintLists_keyval0(Meth_Method self);

/**
  FindAll for ccp.general.Method.Method.constraintLists

ConstraintLists 
calculated using Method
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllConstraintLists_keyval1(Meth_Method self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Method.Method.constraintLists

ConstraintLists 
calculated using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllConstraintLists_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Method.Method.constraintLists

ConstraintLists 
calculated using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllConstraintLists_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Method.Method.constraintLists

ConstraintLists 
calculated using Method
  @param  Meth_Method self
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
extern ApiSet Meth_Method_FindAllConstraintLists_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Method.Method.constraints

Constraints 
calculated using Method
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllConstraints(Meth_Method self, ApiMap conditions);

/**
  FindAll for ccp.general.Method.Method.constraints

Constraints 
calculated using Method
  @param  Meth_Method self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllConstraints_keyval0(Meth_Method self);

/**
  FindAll for ccp.general.Method.Method.constraints

Constraints 
calculated using Method
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllConstraints_keyval1(Meth_Method self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Method.Method.constraints

Constraints 
calculated using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllConstraints_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Method.Method.constraints

Constraints 
calculated using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllConstraints_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Method.Method.constraints

Constraints 
calculated using Method
  @param  Meth_Method self
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
extern ApiSet Meth_Method_FindAllConstraints_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Method.Method.dataDerivations

DataDerivations 
calculated using Method
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllDataDerivations(Meth_Method self, ApiMap conditions);

/**
  FindAll for ccp.general.Method.Method.dataDerivations

DataDerivations 
calculated using Method
  @param  Meth_Method self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllDataDerivations_keyval0(Meth_Method self);

/**
  FindAll for ccp.general.Method.Method.dataDerivations

DataDerivations 
calculated using Method
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllDataDerivations_keyval1(Meth_Method self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Method.Method.dataDerivations

DataDerivations 
calculated using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllDataDerivations_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Method.Method.dataDerivations

DataDerivations 
calculated using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllDataDerivations_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Method.Method.dataDerivations

DataDerivations 
calculated using Method
  @param  Meth_Method self
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
extern ApiSet Meth_Method_FindAllDataDerivations_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Method.Method.dataDims

Nmr DataDims linear 
predicted with Method
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllDataDims(Meth_Method self, ApiMap conditions);

/**
  FindAll for ccp.general.Method.Method.dataDims

Nmr DataDims linear 
predicted with Method
  @param  Meth_Method self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllDataDims_keyval0(Meth_Method self);

/**
  FindAll for ccp.general.Method.Method.dataDims

Nmr DataDims linear 
predicted with Method
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllDataDims_keyval1(Meth_Method self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Method.Method.dataDims

Nmr DataDims linear 
predicted with Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllDataDims_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Method.Method.dataDims

Nmr DataDims linear 
predicted with Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllDataDims_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Method.Method.dataDims

Nmr DataDims linear 
predicted with Method
  @param  Meth_Method self
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
extern ApiSet Meth_Method_FindAllDataDims_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Method.Method.derivedDataLists

DerivedDataLists 
calculated using Method
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllDerivedDataLists(Meth_Method self, ApiMap conditions);

/**
  FindAll for ccp.general.Method.Method.derivedDataLists

DerivedDataLists 
calculated using Method
  @param  Meth_Method self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllDerivedDataLists_keyval0(Meth_Method self);

/**
  FindAll for ccp.general.Method.Method.derivedDataLists

DerivedDataLists 
calculated using Method
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllDerivedDataLists_keyval1(Meth_Method self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Method.Method.derivedDataLists

DerivedDataLists 
calculated using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllDerivedDataLists_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Method.Method.derivedDataLists

DerivedDataLists 
calculated using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllDerivedDataLists_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Method.Method.derivedDataLists

DerivedDataLists 
calculated using Method
  @param  Meth_Method self
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
extern ApiSet Meth_Method_FindAllDerivedDataLists_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.general.Method.Method.derivedNmrExperiments

Nmr.Experiments derived 
using Method
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllDerivedNmrExperiments(Meth_Method self, ApiMap conditions);

/**
  FindAll for 
ccp.general.Method.Method.derivedNmrExperiments

Nmr.Experiments derived 
using Method
  @param  Meth_Method self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllDerivedNmrExperiments_keyval0(Meth_Method self);

/**
  FindAll for 
ccp.general.Method.Method.derivedNmrExperiments

Nmr.Experiments derived 
using Method
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllDerivedNmrExperiments_keyval1(Meth_Method self, char * key, ApiObject value);

/**
  FindAll for 
ccp.general.Method.Method.derivedNmrExperiments

Nmr.Experiments derived 
using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllDerivedNmrExperiments_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.general.Method.Method.derivedNmrExperiments

Nmr.Experiments derived 
using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllDerivedNmrExperiments_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.general.Method.Method.derivedNmrExperiments

Nmr.Experiments derived 
using Method
  @param  Meth_Method self
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
extern ApiSet Meth_Method_FindAllDerivedNmrExperiments_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Method.Method.experiments

Experiment associated 
to a certain Method.
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllExperiments(Meth_Method self, ApiMap conditions);

/**
  FindAll for ccp.general.Method.Method.experiments

Experiment associated 
to a certain Method.
  @param  Meth_Method self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllExperiments_keyval0(Meth_Method self);

/**
  FindAll for ccp.general.Method.Method.experiments

Experiment associated 
to a certain Method.
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllExperiments_keyval1(Meth_Method self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Method.Method.experiments

Experiment associated 
to a certain Method.
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllExperiments_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Method.Method.experiments

Experiment associated 
to a certain Method.
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllExperiments_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Method.Method.experiments

Experiment associated 
to a certain Method.
  @param  Meth_Method self
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
extern ApiSet Meth_Method_FindAllExperiments_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Method.Method.fitPeakLists

Nmr Peak Lists using 
Method as default fitting method.
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllFitPeakLists(Meth_Method self, ApiMap conditions);

/**
  FindAll for ccp.general.Method.Method.fitPeakLists

Nmr Peak Lists using 
Method as default fitting method.
  @param  Meth_Method self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllFitPeakLists_keyval0(Meth_Method self);

/**
  FindAll for ccp.general.Method.Method.fitPeakLists

Nmr Peak Lists using 
Method as default fitting method.
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllFitPeakLists_keyval1(Meth_Method self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Method.Method.fitPeakLists

Nmr Peak Lists using 
Method as default fitting method.
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllFitPeakLists_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Method.Method.fitPeakLists

Nmr Peak Lists using 
Method as default fitting method.
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllFitPeakLists_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Method.Method.fitPeakLists

Nmr Peak Lists using 
Method as default fitting method.
  @param  Meth_Method self
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
extern ApiSet Meth_Method_FindAllFitPeakLists_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Method.Method.intensPeakLists

PeakLists using 
Method as 'Preferred' peak intensity deternmination method.
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllIntensPeakLists(Meth_Method self, ApiMap conditions);

/**
  FindAll for ccp.general.Method.Method.intensPeakLists

PeakLists using 
Method as 'Preferred' peak intensity deternmination method.
  @param  Meth_Method self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllIntensPeakLists_keyval0(Meth_Method self);

/**
  FindAll for ccp.general.Method.Method.intensPeakLists

PeakLists using 
Method as 'Preferred' peak intensity deternmination method.
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllIntensPeakLists_keyval1(Meth_Method self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Method.Method.intensPeakLists

PeakLists using 
Method as 'Preferred' peak intensity deternmination method.
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllIntensPeakLists_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Method.Method.intensPeakLists

PeakLists using 
Method as 'Preferred' peak intensity deternmination method.
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllIntensPeakLists_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Method.Method.intensPeakLists

PeakLists using 
Method as 'Preferred' peak intensity deternmination method.
  @param  Meth_Method self
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
extern ApiSet Meth_Method_FindAllIntensPeakLists_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Method.Method.measurementLists

Measurement 
lists calculated using Method
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllMeasurementLists(Meth_Method self, ApiMap conditions);

/**
  FindAll for ccp.general.Method.Method.measurementLists

Measurement 
lists calculated using Method
  @param  Meth_Method self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllMeasurementLists_keyval0(Meth_Method self);

/**
  FindAll for ccp.general.Method.Method.measurementLists

Measurement 
lists calculated using Method
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllMeasurementLists_keyval1(Meth_Method self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Method.Method.measurementLists

Measurement 
lists calculated using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllMeasurementLists_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Method.Method.measurementLists

Measurement 
lists calculated using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllMeasurementLists_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Method.Method.measurementLists

Measurement 
lists calculated using Method
  @param  Meth_Method self
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
extern ApiSet Meth_Method_FindAllMeasurementLists_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Method.Method.measurements

Measurements 
calculated using Method
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllMeasurements(Meth_Method self, ApiMap conditions);

/**
  FindAll for ccp.general.Method.Method.measurements

Measurements 
calculated using Method
  @param  Meth_Method self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllMeasurements_keyval0(Meth_Method self);

/**
  FindAll for ccp.general.Method.Method.measurements

Measurements 
calculated using Method
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllMeasurements_keyval1(Meth_Method self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Method.Method.measurements

Measurements 
calculated using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllMeasurements_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Method.Method.measurements

Measurements 
calculated using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllMeasurements_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Method.Method.measurements

Measurements 
calculated using Method
  @param  Meth_Method self
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
extern ApiSet Meth_Method_FindAllMeasurements_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Method.Method.parameters

child link to class 
Parameter
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllParameters(Meth_Method self, ApiMap conditions);

/**
  FindAll for ccp.general.Method.Method.parameters

child link to class 
Parameter
  @param  Meth_Method self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllParameters_keyval0(Meth_Method self);

/**
  FindAll for ccp.general.Method.Method.parameters

child link to class 
Parameter
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllParameters_keyval1(Meth_Method self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Method.Method.parameters

child link to class 
Parameter
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllParameters_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Method.Method.parameters

child link to class 
Parameter
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllParameters_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Method.Method.parameters

child link to class 
Parameter
  @param  Meth_Method self
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
extern ApiSet Meth_Method_FindAllParameters_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Method.Method.peakIntensities

Peak intensities 
determined using Method.
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllPeakIntensities(Meth_Method self, ApiMap conditions);

/**
  FindAll for ccp.general.Method.Method.peakIntensities

Peak intensities 
determined using Method.
  @param  Meth_Method self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllPeakIntensities_keyval0(Meth_Method self);

/**
  FindAll for ccp.general.Method.Method.peakIntensities

Peak intensities 
determined using Method.
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllPeakIntensities_keyval1(Meth_Method self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Method.Method.peakIntensities

Peak intensities 
determined using Method.
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllPeakIntensities_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Method.Method.peakIntensities

Peak intensities 
determined using Method.
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllPeakIntensities_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Method.Method.peakIntensities

Peak intensities 
determined using Method.
  @param  Meth_Method self
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
extern ApiSet Meth_Method_FindAllPeakIntensities_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Method.Method.peaks

Peaks fitted using Method
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllPeaks(Meth_Method self, ApiMap conditions);

/**
  FindAll for ccp.general.Method.Method.peaks

Peaks fitted using Method
  @param  Meth_Method self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllPeaks_keyval0(Meth_Method self);

/**
  FindAll for ccp.general.Method.Method.peaks

Peaks fitted using Method
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllPeaks_keyval1(Meth_Method self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Method.Method.peaks

Peaks fitted using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllPeaks_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Method.Method.peaks

Peaks fitted using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllPeaks_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Method.Method.peaks

Peaks fitted using Method
  @param  Meth_Method self
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
extern ApiSet Meth_Method_FindAllPeaks_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Method.Method.processDataSources

Nmr 
DataSources processed with Method.
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllProcessDataSources(Meth_Method self, ApiMap conditions);

/**
  FindAll for ccp.general.Method.Method.processDataSources

Nmr 
DataSources processed with Method.
  @param  Meth_Method self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllProcessDataSources_keyval0(Meth_Method self);

/**
  FindAll for ccp.general.Method.Method.processDataSources

Nmr 
DataSources processed with Method.
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllProcessDataSources_keyval1(Meth_Method self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Method.Method.processDataSources

Nmr 
DataSources processed with Method.
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllProcessDataSources_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Method.Method.processDataSources

Nmr 
DataSources processed with Method.
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllProcessDataSources_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Method.Method.processDataSources

Nmr 
DataSources processed with Method.
  @param  Meth_Method self
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
extern ApiSet Meth_Method_FindAllProcessDataSources_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Method.Method.snDataSources

DataSources that 
use this method for S/N ratio determination
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllSnDataSources(Meth_Method self, ApiMap conditions);

/**
  FindAll for ccp.general.Method.Method.snDataSources

DataSources that 
use this method for S/N ratio determination
  @param  Meth_Method self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllSnDataSources_keyval0(Meth_Method self);

/**
  FindAll for ccp.general.Method.Method.snDataSources

DataSources that 
use this method for S/N ratio determination
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllSnDataSources_keyval1(Meth_Method self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Method.Method.snDataSources

DataSources that 
use this method for S/N ratio determination
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllSnDataSources_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Method.Method.snDataSources

DataSources that 
use this method for S/N ratio determination
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllSnDataSources_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Method.Method.snDataSources

DataSources that 
use this method for S/N ratio determination
  @param  Meth_Method self
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
extern ApiSet Meth_Method_FindAllSnDataSources_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.general.Method.Method.structureAnalyses

StructureAnalyses carried 
out using method
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllStructureAnalyses(Meth_Method self, ApiMap conditions);

/**
  FindAll for 
ccp.general.Method.Method.structureAnalyses

StructureAnalyses carried 
out using method
  @param  Meth_Method self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllStructureAnalyses_keyval0(Meth_Method self);

/**
  FindAll for 
ccp.general.Method.Method.structureAnalyses

StructureAnalyses carried 
out using method
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllStructureAnalyses_keyval1(Meth_Method self, char * key, ApiObject value);

/**
  FindAll for 
ccp.general.Method.Method.structureAnalyses

StructureAnalyses carried 
out using method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllStructureAnalyses_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.general.Method.Method.structureAnalyses

StructureAnalyses carried 
out using method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllStructureAnalyses_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.general.Method.Method.structureAnalyses

StructureAnalyses carried 
out using method
  @param  Meth_Method self
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
extern ApiSet Meth_Method_FindAllStructureAnalyses_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.general.Method.Method.structureGenerations

StructureGenerations 
carried out using method
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllStructureGenerations(Meth_Method self, ApiMap conditions);

/**
  FindAll for 
ccp.general.Method.Method.structureGenerations

StructureGenerations 
carried out using method
  @param  Meth_Method self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllStructureGenerations_keyval0(Meth_Method self);

/**
  FindAll for 
ccp.general.Method.Method.structureGenerations

StructureGenerations 
carried out using method
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllStructureGenerations_keyval1(Meth_Method self, char * key, ApiObject value);

/**
  FindAll for 
ccp.general.Method.Method.structureGenerations

StructureGenerations 
carried out using method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllStructureGenerations_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.general.Method.Method.structureGenerations

StructureGenerations 
carried out using method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllStructureGenerations_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.general.Method.Method.structureGenerations

StructureGenerations 
carried out using method
  @param  Meth_Method self
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
extern ApiSet Meth_Method_FindAllStructureGenerations_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Method.Method.violations

Nmr Constraint 
violations calculated using Method
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllViolations(Meth_Method self, ApiMap conditions);

/**
  FindAll for ccp.general.Method.Method.violations

Nmr Constraint 
violations calculated using Method
  @param  Meth_Method self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllViolations_keyval0(Meth_Method self);

/**
  FindAll for ccp.general.Method.Method.violations

Nmr Constraint 
violations calculated using Method
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllViolations_keyval1(Meth_Method self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Method.Method.violations

Nmr Constraint 
violations calculated using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllViolations_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Method.Method.violations

Nmr Constraint 
violations calculated using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Method_FindAllViolations_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Method.Method.violations

Nmr Constraint 
violations calculated using Method
  @param  Meth_Method self
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
extern ApiSet Meth_Method_FindAllViolations_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Meth_Method_FindFirstApplicationData(Meth_Method self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Meth_Method self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Meth_Method_FindFirstApplicationData_keyval0(Meth_Method self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Meth_Method_FindFirstApplicationData_keyval1(Meth_Method self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Meth_Method_FindFirstApplicationData_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Meth_Method_FindFirstApplicationData_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Meth_Method self
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
extern Impl_ApplicationData Meth_Method_FindFirstApplicationData_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Method.Method.citations

Citations describing 
method.
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Cita_Citation Meth_Method_FindFirstCitation(Meth_Method self, ApiMap conditions);

/**
  FindFirst for ccp.general.Method.Method.citations

Citations describing 
method.
  @param  Meth_Method self
  @returns  the first value that satisfies the conditions 
**/
extern Cita_Citation Meth_Method_FindFirstCitation_keyval0(Meth_Method self);

/**
  FindFirst for ccp.general.Method.Method.citations

Citations describing 
method.
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Cita_Citation Meth_Method_FindFirstCitation_keyval1(Meth_Method self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Method.Method.citations

Citations describing 
method.
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Cita_Citation Meth_Method_FindFirstCitation_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Method.Method.citations

Citations describing 
method.
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Cita_Citation Meth_Method_FindFirstCitation_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Method.Method.citations

Citations describing 
method.
  @param  Meth_Method self
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
extern Cita_Citation Meth_Method_FindFirstCitation_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Method.Method.columns

Columns that use this 
loading method.
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Inst_Column Meth_Method_FindFirstColumn(Meth_Method self, ApiMap conditions);

/**
  FindFirst for ccp.general.Method.Method.columns

Columns that use this 
loading method.
  @param  Meth_Method self
  @returns  the first value that satisfies the conditions 
**/
extern Inst_Column Meth_Method_FindFirstColumn_keyval0(Meth_Method self);

/**
  FindFirst for ccp.general.Method.Method.columns

Columns that use this 
loading method.
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Inst_Column Meth_Method_FindFirstColumn_keyval1(Meth_Method self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Method.Method.columns

Columns that use this 
loading method.
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Inst_Column Meth_Method_FindFirstColumn_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Method.Method.columns

Columns that use this 
loading method.
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Inst_Column Meth_Method_FindFirstColumn_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Method.Method.columns

Columns that use this 
loading method.
  @param  Meth_Method self
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
extern Inst_Column Meth_Method_FindFirstColumn_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Method.Method.compressDataSources

Nmr 
DataSources compresed with Method
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DataSource Meth_Method_FindFirstCompressDataSource(Meth_Method self, ApiMap conditions);

/**
  FindFirst for ccp.general.Method.Method.compressDataSources

Nmr 
DataSources compresed with Method
  @param  Meth_Method self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DataSource Meth_Method_FindFirstCompressDataSource_keyval0(Meth_Method self);

/**
  FindFirst for ccp.general.Method.Method.compressDataSources

Nmr 
DataSources compresed with Method
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DataSource Meth_Method_FindFirstCompressDataSource_keyval1(Meth_Method self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Method.Method.compressDataSources

Nmr 
DataSources compresed with Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DataSource Meth_Method_FindFirstCompressDataSource_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Method.Method.compressDataSources

Nmr 
DataSources compresed with Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DataSource Meth_Method_FindFirstCompressDataSource_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Method.Method.compressDataSources

Nmr 
DataSources compresed with Method
  @param  Meth_Method self
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
extern Nmr_DataSource Meth_Method_FindFirstCompressDataSource_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Method.Method.constraints

Constraints 
calculated using Method
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_AbstractConstraint Meth_Method_FindFirstConstraint(Meth_Method self, ApiMap conditions);

/**
  FindFirst for ccp.general.Method.Method.constraintLists

ConstraintLists 
calculated using Method
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_AbstractConstraintList Meth_Method_FindFirstConstraintList(Meth_Method self, ApiMap conditions);

/**
  FindFirst for ccp.general.Method.Method.constraintLists

ConstraintLists 
calculated using Method
  @param  Meth_Method self
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_AbstractConstraintList Meth_Method_FindFirstConstraintList_keyval0(Meth_Method self);

/**
  FindFirst for ccp.general.Method.Method.constraintLists

ConstraintLists 
calculated using Method
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_AbstractConstraintList Meth_Method_FindFirstConstraintList_keyval1(Meth_Method self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Method.Method.constraintLists

ConstraintLists 
calculated using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_AbstractConstraintList Meth_Method_FindFirstConstraintList_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Method.Method.constraintLists

ConstraintLists 
calculated using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_AbstractConstraintList Meth_Method_FindFirstConstraintList_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Method.Method.constraintLists

ConstraintLists 
calculated using Method
  @param  Meth_Method self
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
extern Nmrc_AbstractConstraintList Meth_Method_FindFirstConstraintList_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Method.Method.constraints

Constraints 
calculated using Method
  @param  Meth_Method self
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_AbstractConstraint Meth_Method_FindFirstConstraint_keyval0(Meth_Method self);

/**
  FindFirst for ccp.general.Method.Method.constraints

Constraints 
calculated using Method
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_AbstractConstraint Meth_Method_FindFirstConstraint_keyval1(Meth_Method self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Method.Method.constraints

Constraints 
calculated using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_AbstractConstraint Meth_Method_FindFirstConstraint_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Method.Method.constraints

Constraints 
calculated using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_AbstractConstraint Meth_Method_FindFirstConstraint_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Method.Method.constraints

Constraints 
calculated using Method
  @param  Meth_Method self
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
extern Nmrc_AbstractConstraint Meth_Method_FindFirstConstraint_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Method.Method.dataDerivations

DataDerivations 
calculated using Method
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractDataDerivation Meth_Method_FindFirstDataDerivation(Meth_Method self, ApiMap conditions);

/**
  FindFirst for ccp.general.Method.Method.dataDerivations

DataDerivations 
calculated using Method
  @param  Meth_Method self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractDataDerivation Meth_Method_FindFirstDataDerivation_keyval0(Meth_Method self);

/**
  FindFirst for ccp.general.Method.Method.dataDerivations

DataDerivations 
calculated using Method
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractDataDerivation Meth_Method_FindFirstDataDerivation_keyval1(Meth_Method self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Method.Method.dataDerivations

DataDerivations 
calculated using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractDataDerivation Meth_Method_FindFirstDataDerivation_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Method.Method.dataDerivations

DataDerivations 
calculated using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractDataDerivation Meth_Method_FindFirstDataDerivation_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Method.Method.dataDerivations

DataDerivations 
calculated using Method
  @param  Meth_Method self
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
extern Nmr_AbstractDataDerivation Meth_Method_FindFirstDataDerivation_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Method.Method.dataDims

Nmr DataDims linear 
predicted with Method
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractDataDim Meth_Method_FindFirstDataDim(Meth_Method self, ApiMap conditions);

/**
  FindFirst for ccp.general.Method.Method.dataDims

Nmr DataDims linear 
predicted with Method
  @param  Meth_Method self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractDataDim Meth_Method_FindFirstDataDim_keyval0(Meth_Method self);

/**
  FindFirst for ccp.general.Method.Method.dataDims

Nmr DataDims linear 
predicted with Method
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractDataDim Meth_Method_FindFirstDataDim_keyval1(Meth_Method self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Method.Method.dataDims

Nmr DataDims linear 
predicted with Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractDataDim Meth_Method_FindFirstDataDim_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Method.Method.dataDims

Nmr DataDims linear 
predicted with Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractDataDim Meth_Method_FindFirstDataDim_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Method.Method.dataDims

Nmr DataDims linear 
predicted with Method
  @param  Meth_Method self
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
extern Nmr_AbstractDataDim Meth_Method_FindFirstDataDim_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.general.Method.Method.derivedDataLists

DerivedDataLists calculated 
using Method
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DerivedDataList Meth_Method_FindFirstDerivedDataList(Meth_Method self, ApiMap conditions);

/**
  FindFirst for 
ccp.general.Method.Method.derivedDataLists

DerivedDataLists calculated 
using Method
  @param  Meth_Method self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DerivedDataList Meth_Method_FindFirstDerivedDataList_keyval0(Meth_Method self);

/**
  FindFirst for 
ccp.general.Method.Method.derivedDataLists

DerivedDataLists calculated 
using Method
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DerivedDataList Meth_Method_FindFirstDerivedDataList_keyval1(Meth_Method self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.general.Method.Method.derivedDataLists

DerivedDataLists calculated 
using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DerivedDataList Meth_Method_FindFirstDerivedDataList_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.general.Method.Method.derivedDataLists

DerivedDataLists calculated 
using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DerivedDataList Meth_Method_FindFirstDerivedDataList_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.general.Method.Method.derivedDataLists

DerivedDataLists calculated 
using Method
  @param  Meth_Method self
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
extern Nmr_DerivedDataList Meth_Method_FindFirstDerivedDataList_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.general.Method.Method.derivedNmrExperiments

Nmr.Experiments derived 
using Method
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Meth_Method_FindFirstDerivedNmrExperiment(Meth_Method self, ApiMap conditions);

/**
  FindFirst for 
ccp.general.Method.Method.derivedNmrExperiments

Nmr.Experiments derived 
using Method
  @param  Meth_Method self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Meth_Method_FindFirstDerivedNmrExperiment_keyval0(Meth_Method self);

/**
  FindFirst for 
ccp.general.Method.Method.derivedNmrExperiments

Nmr.Experiments derived 
using Method
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Meth_Method_FindFirstDerivedNmrExperiment_keyval1(Meth_Method self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.general.Method.Method.derivedNmrExperiments

Nmr.Experiments derived 
using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Meth_Method_FindFirstDerivedNmrExperiment_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.general.Method.Method.derivedNmrExperiments

Nmr.Experiments derived 
using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Meth_Method_FindFirstDerivedNmrExperiment_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.general.Method.Method.derivedNmrExperiments

Nmr.Experiments derived 
using Method
  @param  Meth_Method self
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
extern Nmr_Experiment Meth_Method_FindFirstDerivedNmrExperiment_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Method.Method.experiments

Experiment 
associated to a certain Method.
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Expe_Experiment Meth_Method_FindFirstExperiment(Meth_Method self, ApiMap conditions);

/**
  FindFirst for ccp.general.Method.Method.experiments

Experiment 
associated to a certain Method.
  @param  Meth_Method self
  @returns  the first value that satisfies the conditions 
**/
extern Expe_Experiment Meth_Method_FindFirstExperiment_keyval0(Meth_Method self);

/**
  FindFirst for ccp.general.Method.Method.experiments

Experiment 
associated to a certain Method.
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Expe_Experiment Meth_Method_FindFirstExperiment_keyval1(Meth_Method self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Method.Method.experiments

Experiment 
associated to a certain Method.
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Expe_Experiment Meth_Method_FindFirstExperiment_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Method.Method.experiments

Experiment 
associated to a certain Method.
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Expe_Experiment Meth_Method_FindFirstExperiment_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Method.Method.experiments

Experiment 
associated to a certain Method.
  @param  Meth_Method self
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
extern Expe_Experiment Meth_Method_FindFirstExperiment_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Method.Method.fitPeakLists

Nmr Peak Lists 
using Method as default fitting method.
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakList Meth_Method_FindFirstFitPeakList(Meth_Method self, ApiMap conditions);

/**
  FindFirst for ccp.general.Method.Method.fitPeakLists

Nmr Peak Lists 
using Method as default fitting method.
  @param  Meth_Method self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakList Meth_Method_FindFirstFitPeakList_keyval0(Meth_Method self);

/**
  FindFirst for ccp.general.Method.Method.fitPeakLists

Nmr Peak Lists 
using Method as default fitting method.
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakList Meth_Method_FindFirstFitPeakList_keyval1(Meth_Method self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Method.Method.fitPeakLists

Nmr Peak Lists 
using Method as default fitting method.
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakList Meth_Method_FindFirstFitPeakList_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Method.Method.fitPeakLists

Nmr Peak Lists 
using Method as default fitting method.
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakList Meth_Method_FindFirstFitPeakList_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Method.Method.fitPeakLists

Nmr Peak Lists 
using Method as default fitting method.
  @param  Meth_Method self
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
extern Nmr_PeakList Meth_Method_FindFirstFitPeakList_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Method.Method.intensPeakLists

PeakLists using 
Method as 'Preferred' peak intensity deternmination method.
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakList Meth_Method_FindFirstIntensPeakList(Meth_Method self, ApiMap conditions);

/**
  FindFirst for ccp.general.Method.Method.intensPeakLists

PeakLists using 
Method as 'Preferred' peak intensity deternmination method.
  @param  Meth_Method self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakList Meth_Method_FindFirstIntensPeakList_keyval0(Meth_Method self);

/**
  FindFirst for ccp.general.Method.Method.intensPeakLists

PeakLists using 
Method as 'Preferred' peak intensity deternmination method.
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakList Meth_Method_FindFirstIntensPeakList_keyval1(Meth_Method self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Method.Method.intensPeakLists

PeakLists using 
Method as 'Preferred' peak intensity deternmination method.
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakList Meth_Method_FindFirstIntensPeakList_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Method.Method.intensPeakLists

PeakLists using 
Method as 'Preferred' peak intensity deternmination method.
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakList Meth_Method_FindFirstIntensPeakList_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Method.Method.intensPeakLists

PeakLists using 
Method as 'Preferred' peak intensity deternmination method.
  @param  Meth_Method self
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
extern Nmr_PeakList Meth_Method_FindFirstIntensPeakList_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Method.Method.measurements

Measurements 
calculated using Method
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractMeasurement Meth_Method_FindFirstMeasurement(Meth_Method self, ApiMap conditions);

/**
  FindFirst for ccp.general.Method.Method.measurementLists

Measurement 
lists calculated using Method
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractMeasurementList Meth_Method_FindFirstMeasurementList(Meth_Method self, ApiMap conditions);

/**
  FindFirst for ccp.general.Method.Method.measurementLists

Measurement 
lists calculated using Method
  @param  Meth_Method self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractMeasurementList Meth_Method_FindFirstMeasurementList_keyval0(Meth_Method self);

/**
  FindFirst for ccp.general.Method.Method.measurementLists

Measurement 
lists calculated using Method
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractMeasurementList Meth_Method_FindFirstMeasurementList_keyval1(Meth_Method self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Method.Method.measurementLists

Measurement 
lists calculated using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractMeasurementList Meth_Method_FindFirstMeasurementList_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Method.Method.measurementLists

Measurement 
lists calculated using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractMeasurementList Meth_Method_FindFirstMeasurementList_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Method.Method.measurementLists

Measurement 
lists calculated using Method
  @param  Meth_Method self
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
extern Nmr_AbstractMeasurementList Meth_Method_FindFirstMeasurementList_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Method.Method.measurements

Measurements 
calculated using Method
  @param  Meth_Method self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractMeasurement Meth_Method_FindFirstMeasurement_keyval0(Meth_Method self);

/**
  FindFirst for ccp.general.Method.Method.measurements

Measurements 
calculated using Method
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractMeasurement Meth_Method_FindFirstMeasurement_keyval1(Meth_Method self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Method.Method.measurements

Measurements 
calculated using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractMeasurement Meth_Method_FindFirstMeasurement_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Method.Method.measurements

Measurements 
calculated using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractMeasurement Meth_Method_FindFirstMeasurement_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Method.Method.measurements

Measurements 
calculated using Method
  @param  Meth_Method self
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
extern Nmr_AbstractMeasurement Meth_Method_FindFirstMeasurement_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Method.Method.parameters

child link to class 
Parameter
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Meth_Parameter Meth_Method_FindFirstParameter(Meth_Method self, ApiMap conditions);

/**
  FindFirst for ccp.general.Method.Method.parameters

child link to class 
Parameter
  @param  Meth_Method self
  @returns  the first value that satisfies the conditions 
**/
extern Meth_Parameter Meth_Method_FindFirstParameter_keyval0(Meth_Method self);

/**
  FindFirst for ccp.general.Method.Method.parameters

child link to class 
Parameter
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Meth_Parameter Meth_Method_FindFirstParameter_keyval1(Meth_Method self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Method.Method.parameters

child link to class 
Parameter
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Meth_Parameter Meth_Method_FindFirstParameter_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Method.Method.parameters

child link to class 
Parameter
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Meth_Parameter Meth_Method_FindFirstParameter_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Method.Method.parameters

child link to class 
Parameter
  @param  Meth_Method self
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
extern Meth_Parameter Meth_Method_FindFirstParameter_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Method.Method.peaks

Peaks fitted using Method
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Peak Meth_Method_FindFirstPeak(Meth_Method self, ApiMap conditions);

/**
  FindFirst for ccp.general.Method.Method.peakIntensities

Peak 
intensities determined using Method.
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakIntensity Meth_Method_FindFirstPeakIntensity(Meth_Method self, ApiMap conditions);

/**
  FindFirst for ccp.general.Method.Method.peakIntensities

Peak 
intensities determined using Method.
  @param  Meth_Method self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakIntensity Meth_Method_FindFirstPeakIntensity_keyval0(Meth_Method self);

/**
  FindFirst for ccp.general.Method.Method.peakIntensities

Peak 
intensities determined using Method.
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakIntensity Meth_Method_FindFirstPeakIntensity_keyval1(Meth_Method self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Method.Method.peakIntensities

Peak 
intensities determined using Method.
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakIntensity Meth_Method_FindFirstPeakIntensity_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Method.Method.peakIntensities

Peak 
intensities determined using Method.
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakIntensity Meth_Method_FindFirstPeakIntensity_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Method.Method.peakIntensities

Peak 
intensities determined using Method.
  @param  Meth_Method self
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
extern Nmr_PeakIntensity Meth_Method_FindFirstPeakIntensity_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Method.Method.peaks

Peaks fitted using Method
  @param  Meth_Method self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Peak Meth_Method_FindFirstPeak_keyval0(Meth_Method self);

/**
  FindFirst for ccp.general.Method.Method.peaks

Peaks fitted using Method
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Peak Meth_Method_FindFirstPeak_keyval1(Meth_Method self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Method.Method.peaks

Peaks fitted using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Peak Meth_Method_FindFirstPeak_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Method.Method.peaks

Peaks fitted using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Peak Meth_Method_FindFirstPeak_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Method.Method.peaks

Peaks fitted using Method
  @param  Meth_Method self
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
extern Nmr_Peak Meth_Method_FindFirstPeak_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Method.Method.processDataSources

Nmr 
DataSources processed with Method.
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DataSource Meth_Method_FindFirstProcessDataSource(Meth_Method self, ApiMap conditions);

/**
  FindFirst for ccp.general.Method.Method.processDataSources

Nmr 
DataSources processed with Method.
  @param  Meth_Method self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DataSource Meth_Method_FindFirstProcessDataSource_keyval0(Meth_Method self);

/**
  FindFirst for ccp.general.Method.Method.processDataSources

Nmr 
DataSources processed with Method.
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DataSource Meth_Method_FindFirstProcessDataSource_keyval1(Meth_Method self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Method.Method.processDataSources

Nmr 
DataSources processed with Method.
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DataSource Meth_Method_FindFirstProcessDataSource_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Method.Method.processDataSources

Nmr 
DataSources processed with Method.
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DataSource Meth_Method_FindFirstProcessDataSource_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Method.Method.processDataSources

Nmr 
DataSources processed with Method.
  @param  Meth_Method self
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
extern Nmr_DataSource Meth_Method_FindFirstProcessDataSource_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Method.Method.snDataSources

DataSources that 
use this method for S/N ratio determination
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DataSource Meth_Method_FindFirstSnDataSource(Meth_Method self, ApiMap conditions);

/**
  FindFirst for ccp.general.Method.Method.snDataSources

DataSources that 
use this method for S/N ratio determination
  @param  Meth_Method self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DataSource Meth_Method_FindFirstSnDataSource_keyval0(Meth_Method self);

/**
  FindFirst for ccp.general.Method.Method.snDataSources

DataSources that 
use this method for S/N ratio determination
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DataSource Meth_Method_FindFirstSnDataSource_keyval1(Meth_Method self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Method.Method.snDataSources

DataSources that 
use this method for S/N ratio determination
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DataSource Meth_Method_FindFirstSnDataSource_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Method.Method.snDataSources

DataSources that 
use this method for S/N ratio determination
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DataSource Meth_Method_FindFirstSnDataSource_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Method.Method.snDataSources

DataSources that 
use this method for S/N ratio determination
  @param  Meth_Method self
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
extern Nmr_DataSource Meth_Method_FindFirstSnDataSource_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.general.Method.Method.structureAnalyses

StructureAnalyses carried 
out using method
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_StructureAnalysis Meth_Method_FindFirstStructureAnalysis(Meth_Method self, ApiMap conditions);

/**
  FindFirst for 
ccp.general.Method.Method.structureAnalyses

StructureAnalyses carried 
out using method
  @param  Meth_Method self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_StructureAnalysis Meth_Method_FindFirstStructureAnalysis_keyval0(Meth_Method self);

/**
  FindFirst for 
ccp.general.Method.Method.structureAnalyses

StructureAnalyses carried 
out using method
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_StructureAnalysis Meth_Method_FindFirstStructureAnalysis_keyval1(Meth_Method self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.general.Method.Method.structureAnalyses

StructureAnalyses carried 
out using method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_StructureAnalysis Meth_Method_FindFirstStructureAnalysis_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.general.Method.Method.structureAnalyses

StructureAnalyses carried 
out using method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_StructureAnalysis Meth_Method_FindFirstStructureAnalysis_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.general.Method.Method.structureAnalyses

StructureAnalyses carried 
out using method
  @param  Meth_Method self
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
extern Nmr_StructureAnalysis Meth_Method_FindFirstStructureAnalysis_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.general.Method.Method.structureGenerations

StructureGenerations 
carried out using method
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_StructureGeneration Meth_Method_FindFirstStructureGeneration(Meth_Method self, ApiMap conditions);

/**
  FindFirst for 
ccp.general.Method.Method.structureGenerations

StructureGenerations 
carried out using method
  @param  Meth_Method self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_StructureGeneration Meth_Method_FindFirstStructureGeneration_keyval0(Meth_Method self);

/**
  FindFirst for 
ccp.general.Method.Method.structureGenerations

StructureGenerations 
carried out using method
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_StructureGeneration Meth_Method_FindFirstStructureGeneration_keyval1(Meth_Method self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.general.Method.Method.structureGenerations

StructureGenerations 
carried out using method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_StructureGeneration Meth_Method_FindFirstStructureGeneration_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.general.Method.Method.structureGenerations

StructureGenerations 
carried out using method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_StructureGeneration Meth_Method_FindFirstStructureGeneration_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.general.Method.Method.structureGenerations

StructureGenerations 
carried out using method
  @param  Meth_Method self
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
extern Nmr_StructureGeneration Meth_Method_FindFirstStructureGeneration_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Method.Method.violations

Nmr Constraint 
violations calculated using Method
  @param  Meth_Method self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_Violation Meth_Method_FindFirstViolation(Meth_Method self, ApiMap conditions);

/**
  FindFirst for ccp.general.Method.Method.violations

Nmr Constraint 
violations calculated using Method
  @param  Meth_Method self
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_Violation Meth_Method_FindFirstViolation_keyval0(Meth_Method self);

/**
  FindFirst for ccp.general.Method.Method.violations

Nmr Constraint 
violations calculated using Method
  @param  Meth_Method self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_Violation Meth_Method_FindFirstViolation_keyval1(Meth_Method self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Method.Method.violations

Nmr Constraint 
violations calculated using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_Violation Meth_Method_FindFirstViolation_keyval2(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Method.Method.violations

Nmr Constraint 
violations calculated using Method
  @param  Meth_Method self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_Violation Meth_Method_FindFirstViolation_keyval3(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Method.Method.violations

Nmr Constraint 
violations calculated using Method
  @param  Meth_Method self
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
extern Nmrc_Violation Meth_Method_FindFirstViolation_keyval4(Meth_Method self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.general.Method.Method
  @param  Meth_Method self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Meth_Method_Get(Meth_Method self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Meth_Method self
  @returns   the result
**/
extern Acco_AccessObject Meth_Method_GetAccess(Meth_Method self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Meth_Method self
  @returns   the result
**/
extern Acco_AccessObject Meth_Method_GetActiveAccess(Meth_Method self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Meth_Method self
  @returns   the result
**/
extern ApiList Meth_Method_GetApplicationData(Meth_Method self);

/**
  GetByKey for ccp.general.Method.Method
  @param  Meth_Method self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Meth_Method Meth_Method_GetByKey(Meth_Method self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for ccp.general.Method.Method.citations

Citations describing 
method.
  @param  Meth_Method self
  @returns   the result
**/
extern ApiSet Meth_Method_GetCitations(Meth_Method self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Meth_Method self
  @returns   the result
**/
extern ApiString Meth_Method_GetClassName(Meth_Method self);

/**
  Get for ccp.general.Method.Method.columns

Columns that use this loading 
method.
  @param  Meth_Method self
  @returns   the result
**/
extern ApiSet Meth_Method_GetColumns(Meth_Method self);

/**
  Get for ccp.general.Method.Method.compressDataSources

Nmr DataSources 
compresed with Method
  @param  Meth_Method self
  @returns   the result
**/
extern ApiSet Meth_Method_GetCompressDataSources(Meth_Method self);

/**
  Get for ccp.general.Method.Method.constraintLists

ConstraintLists 
calculated using Method
  @param  Meth_Method self
  @returns   the result
**/
extern ApiSet Meth_Method_GetConstraintLists(Meth_Method self);

/**
  Get for ccp.general.Method.Method.constraints

Constraints calculated 
using Method
  @param  Meth_Method self
  @returns   the result
**/
extern ApiSet Meth_Method_GetConstraints(Meth_Method self);

/**
  Get for ccp.general.Method.Method.dataDerivations

DataDerivations 
calculated using Method
  @param  Meth_Method self
  @returns   the result
**/
extern ApiSet Meth_Method_GetDataDerivations(Meth_Method self);

/**
  Get for ccp.general.Method.Method.dataDims

Nmr DataDims linear 
predicted with Method
  @param  Meth_Method self
  @returns   the result
**/
extern ApiSet Meth_Method_GetDataDims(Meth_Method self);

/**
  Get for ccp.general.Method.Method.derivedDataLists

DerivedDataLists 
calculated using Method
  @param  Meth_Method self
  @returns   the result
**/
extern ApiSet Meth_Method_GetDerivedDataLists(Meth_Method self);

/**
  Get for ccp.general.Method.Method.derivedNmrExperiments

Nmr.Experiments 
derived using Method
  @param  Meth_Method self
  @returns   the result
**/
extern ApiSet Meth_Method_GetDerivedNmrExperiments(Meth_Method self);

/**
  Get for ccp.general.Method.Method.details

Free text, for notes, 
explanatory comments, etc.
  @param  Meth_Method self
  @returns   the result
**/
extern ApiString Meth_Method_GetDetails(Meth_Method self);

/**
  Get for ccp.general.Method.Method.experiments

Experiment associated to 
a certain Method.
  @param  Meth_Method self
  @returns   the result
**/
extern ApiSet Meth_Method_GetExperiments(Meth_Method self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Meth_Method self
  @returns   the result
**/
extern ApiList Meth_Method_GetFieldNames(Meth_Method self);

/**
  Get for ccp.general.Method.Method.fitPeakLists

Nmr Peak Lists using 
Method as default fitting method.
  @param  Meth_Method self
  @returns   the result
**/
extern ApiSet Meth_Method_GetFitPeakLists(Meth_Method self);

/**
  GetFullKey for ccp.general.Method.Method
  @param  Meth_Method self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Meth_Method_GetFullKey(Meth_Method self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Meth_Method self
  @returns   the result
**/
extern ApiBoolean Meth_Method_GetInConstructor(Meth_Method self);

/**
  Get for ccp.general.Method.Method.instrument

Instrument associated to a 
given method.
  @param  Meth_Method self
  @returns   the result
**/
extern Inst_Instrument Meth_Method_GetInstrument(Meth_Method self);

/**
  Get for ccp.general.Method.Method.intensPeakLists

PeakLists using 
Method as 'Preferred' peak intensity deternmination method.
  @param  Meth_Method self
  @returns   the result
**/
extern ApiSet Meth_Method_GetIntensPeakLists(Meth_Method self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Meth_Method self
  @returns   the result
**/
extern ApiBoolean Meth_Method_GetIsDeleted(Meth_Method self);

/**
  GetLocalKey for ccp.general.Method.Method
  @param  Meth_Method self
  @returns  Local object key
**/
extern ApiObject Meth_Method_GetLocalKey(Meth_Method self);

/**
  Get for ccp.general.Method.Method.measurementLists

Measurement lists 
calculated using Method
  @param  Meth_Method self
  @returns   the result
**/
extern ApiSet Meth_Method_GetMeasurementLists(Meth_Method self);

/**
  Get for ccp.general.Method.Method.measurements

Measurements calculated 
using Method
  @param  Meth_Method self
  @returns   the result
**/
extern ApiSet Meth_Method_GetMeasurements(Meth_Method self);

/**
  Get for ccp.general.Method.Method.methodStore

parent link
  @param  Meth_Method self
  @returns   the result
**/
extern Meth_MethodStore Meth_Method_GetMethodStore(Meth_Method self);

/**
  Get for ccp.general.Method.Method.name

Method name
  @param  Meth_Method self
  @returns   the result
**/
extern ApiString Meth_Method_GetName(Meth_Method self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Meth_Method self
  @returns   the result
**/
extern ApiString Meth_Method_GetPackageName(Meth_Method self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Meth_Method self
  @returns   the result
**/
extern ApiString Meth_Method_GetPackageShortName(Meth_Method self);

/**
  Get for ccp.general.Method.Method.parameters

child link to class 
Parameter
  @param  Meth_Method self
  @returns   the result
**/
extern ApiSet Meth_Method_GetParameters(Meth_Method self);

/**
  Get for ccp.general.Method.Method.parent

link to parent object - 
synonym for methodStore
  @param  Meth_Method self
  @returns   the result
**/
extern Meth_MethodStore Meth_Method_GetParent(Meth_Method self);

/**
  Get for ccp.general.Method.Method.peakIntensities

Peak intensities 
determined using Method.
  @param  Meth_Method self
  @returns   the result
**/
extern ApiSet Meth_Method_GetPeakIntensities(Meth_Method self);

/**
  Get for ccp.general.Method.Method.peaks

Peaks fitted using Method
  @param  Meth_Method self
  @returns   the result
**/
extern ApiSet Meth_Method_GetPeaks(Meth_Method self);

/**
  Get for ccp.general.Method.Method.procedure

Description of the 
procedure carried out. Typically in the form of a script executable by 
the relevant Software, but could be a more general description.
  @param  Meth_Method self
  @returns   the result
**/
extern ApiString Meth_Method_GetProcedure(Meth_Method self);

/**
  Get for ccp.general.Method.Method.processDataSources

Nmr DataSources 
processed with Method.
  @param  Meth_Method self
  @returns   the result
**/
extern ApiSet Meth_Method_GetProcessDataSources(Meth_Method self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Meth_Method self
  @returns   the result
**/
extern ApiString Meth_Method_GetQualifiedName(Meth_Method self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Meth_Method self
  @returns   the result
**/
extern Impl_MemopsRoot Meth_Method_GetRoot(Meth_Method self);

/**
  Get for ccp.general.Method.Method.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Meth_Method self
  @returns   the result
**/
extern ApiInteger Meth_Method_GetSerial(Meth_Method self);

/**
  Get for ccp.general.Method.Method.snDataSources

DataSources that use 
this method for S/N ratio determination
  @param  Meth_Method self
  @returns   the result
**/
extern ApiSet Meth_Method_GetSnDataSources(Meth_Method self);

/**
  Get for ccp.general.Method.Method.software

Software used to execute 
method. Method.procedure will frequently be a script directly executable 
by the Software.
  @param  Meth_Method self
  @returns   the result
**/
extern Meth_Software Meth_Method_GetSoftware(Meth_Method self);

/**
  Get for ccp.general.Method.Method.structureAnalyses

StructureAnalyses 
carried out using method
  @param  Meth_Method self
  @returns   the result
**/
extern ApiSet Meth_Method_GetStructureAnalyses(Meth_Method self);

/**
  Get for 
ccp.general.Method.Method.structureGenerations

StructureGenerations 
carried out using method
  @param  Meth_Method self
  @returns   the result
**/
extern ApiSet Meth_Method_GetStructureGenerations(Meth_Method self);

/**
  Get for ccp.general.Method.Method.task

Operation caried out or result 
calculated e.g. 'Peak intensity', 'T1 fit', 'NMR processing', 'linear 
prediction', 'HPLC purification'.
  @param  Meth_Method self
  @returns   the result
**/
extern ApiString Meth_Method_GetTask(Meth_Method self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Meth_Method self
  @returns   the result
**/
extern Impl_TopObject Meth_Method_GetTopObject(Meth_Method self);

/**
  Get for ccp.general.Method.Method.violations

Nmr Constraint violations 
calculated using Method
  @param  Meth_Method self
  @returns   the result
**/
extern ApiSet Meth_Method_GetViolations(Meth_Method self);

/**
  Constructor for ccp.general.Method.Method
  @param  Meth_MethodStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Meth_Method Meth_Method_Init(Meth_MethodStore parent, ApiMap attrlinks);

/**
  Constructor for ccp.general.Method.Method
  @param  Meth_MethodStore parent
  @returns  the new object
**/
extern Meth_Method Meth_Method_Init_reqd(Meth_MethodStore parent);

/**
  Factory function to create ccp.general.Method.Parameter
  @param  Meth_Method self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Meth_Parameter Meth_Method_NewParameter(Meth_Method self, ApiMap attrlinks);

/**
  Factory function to create ccp.general.Method.Parameter
  @param  Meth_Method self
  @param  char * name
  @returns  the new object
**/
extern Meth_Parameter Meth_Method_NewParameter_reqd(Meth_Method self, char * name);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Meth_Method self
  @param  Impl_ApplicationData value
**/
extern void *Meth_Method_RemoveApplicationData(Meth_Method self, Impl_ApplicationData value);

/**
  Remove for ccp.general.Method.Method.columns

Columns that use this 
loading method.
  @param  Meth_Method self
  @param  Inst_Column value
**/
extern void *Meth_Method_RemoveColumn(Meth_Method self, Inst_Column value);

/**
  Remove for 
ccp.general.Method.Method.derivedNmrExperiments

Nmr.Experiments derived 
using Method
  @param  Meth_Method self
  @param  Nmr_Experiment value
**/
extern void *Meth_Method_RemoveDerivedNmrExperiment(Meth_Method self, Nmr_Experiment value);

/**
  Remove for ccp.general.Method.Method.experiments

Experiment associated 
to a certain Method.
  @param  Meth_Method self
  @param  Expe_Experiment value
**/
extern void *Meth_Method_RemoveExperiment(Meth_Method self, Expe_Experiment value);

/**
  Remove for ccp.general.Method.Method.fitPeakLists

Nmr Peak Lists using 
Method as default fitting method.
  @param  Meth_Method self
  @param  Nmr_PeakList value
**/
extern void *Meth_Method_RemoveFitPeakList(Meth_Method self, Nmr_PeakList value);

/**
  Remove for ccp.general.Method.Method.intensPeakLists

PeakLists using 
Method as 'Preferred' peak intensity deternmination method.
  @param  Meth_Method self
  @param  Nmr_PeakList value
**/
extern void *Meth_Method_RemoveIntensPeakList(Meth_Method self, Nmr_PeakList value);

/**
  Remove for ccp.general.Method.Method.peaks

Peaks fitted using Method
  @param  Meth_Method self
  @param  Nmr_Peak value
**/
extern void *Meth_Method_RemovePeak(Meth_Method self, Nmr_Peak value);

/**
  Remove for ccp.general.Method.Method.snDataSources

DataSources that use 
this method for S/N ratio determination
  @param  Meth_Method self
  @param  Nmr_DataSource value
**/
extern void *Meth_Method_RemoveSnDataSource(Meth_Method self, Nmr_DataSource value);

/**
  Remove for 
ccp.general.Method.Method.structureAnalyses

StructureAnalyses carried 
out using method
  @param  Meth_Method self
  @param  Nmr_StructureAnalysis value
**/
extern void *Meth_Method_RemoveStructureAnalysis(Meth_Method self, Nmr_StructureAnalysis value);

/**
  Remove for 
ccp.general.Method.Method.structureGenerations

StructureGenerations 
carried out using method
  @param  Meth_Method self
  @param  Nmr_StructureGeneration value
**/
extern void *Meth_Method_RemoveStructureGeneration(Meth_Method self, Nmr_StructureGeneration value);

/**
  SetAttr for ccp.general.Method.Method
  @param  Meth_Method self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Meth_Method_Set(Meth_Method self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Meth_Method self
  @param  Acco_AccessObject value
**/
extern void *Meth_Method_SetAccess(Meth_Method self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Meth_Method self
  @param  ApiList values
**/
extern void *Meth_Method_SetApplicationData(Meth_Method self, ApiList values);

/**
  Set for ccp.general.Method.Method.citations

Citations describing 
method.
  @param  Meth_Method self
  @param  ApiSet values
**/
extern void *Meth_Method_SetCitations(Meth_Method self, ApiSet values);

/**
  Set for ccp.general.Method.Method.columns

Columns that use this loading 
method.
  @param  Meth_Method self
  @param  ApiSet values
**/
extern void *Meth_Method_SetColumns(Meth_Method self, ApiSet values);

/**
  Set for ccp.general.Method.Method.compressDataSources

Nmr DataSources 
compresed with Method
  @param  Meth_Method self
  @param  ApiSet values
**/
extern void *Meth_Method_SetCompressDataSources(Meth_Method self, ApiSet values);

/**
  Set for ccp.general.Method.Method.constraintLists

ConstraintLists 
calculated using Method
  @param  Meth_Method self
  @param  ApiSet values
**/
extern void *Meth_Method_SetConstraintLists(Meth_Method self, ApiSet values);

/**
  Set for ccp.general.Method.Method.constraints

Constraints calculated 
using Method
  @param  Meth_Method self
  @param  ApiSet values
**/
extern void *Meth_Method_SetConstraints(Meth_Method self, ApiSet values);

/**
  Set for ccp.general.Method.Method.dataDerivations

DataDerivations 
calculated using Method
  @param  Meth_Method self
  @param  ApiSet values
**/
extern void *Meth_Method_SetDataDerivations(Meth_Method self, ApiSet values);

/**
  Set for ccp.general.Method.Method.dataDims

Nmr DataDims linear 
predicted with Method
  @param  Meth_Method self
  @param  ApiSet values
**/
extern void *Meth_Method_SetDataDims(Meth_Method self, ApiSet values);

/**
  Set for ccp.general.Method.Method.derivedDataLists

DerivedDataLists 
calculated using Method
  @param  Meth_Method self
  @param  ApiSet values
**/
extern void *Meth_Method_SetDerivedDataLists(Meth_Method self, ApiSet values);

/**
  Set for ccp.general.Method.Method.derivedNmrExperiments

Nmr.Experiments 
derived using Method
  @param  Meth_Method self
  @param  ApiSet values
**/
extern void *Meth_Method_SetDerivedNmrExperiments(Meth_Method self, ApiSet values);

/**
  Set for ccp.general.Method.Method.details

Free text, for notes, 
explanatory comments, etc.
  @param  Meth_Method self
  @param  ApiString value
**/
extern void *Meth_Method_SetDetails(Meth_Method self, ApiString value);

/**
  Set for ccp.general.Method.Method.experiments

Experiment associated to 
a certain Method.
  @param  Meth_Method self
  @param  ApiSet values
**/
extern void *Meth_Method_SetExperiments(Meth_Method self, ApiSet values);

/**
  Set for ccp.general.Method.Method.fitPeakLists

Nmr Peak Lists using 
Method as default fitting method.
  @param  Meth_Method self
  @param  ApiSet values
**/
extern void *Meth_Method_SetFitPeakLists(Meth_Method self, ApiSet values);

/**
  Set for ccp.general.Method.Method.instrument

Instrument associated to a 
given method.
  @param  Meth_Method self
  @param  Inst_Instrument value
**/
extern void *Meth_Method_SetInstrument(Meth_Method self, Inst_Instrument value);

/**
  Set for ccp.general.Method.Method.intensPeakLists

PeakLists using 
Method as 'Preferred' peak intensity deternmination method.
  @param  Meth_Method self
  @param  ApiSet values
**/
extern void *Meth_Method_SetIntensPeakLists(Meth_Method self, ApiSet values);

/**
  Set for ccp.general.Method.Method.measurementLists

Measurement lists 
calculated using Method
  @param  Meth_Method self
  @param  ApiSet values
**/
extern void *Meth_Method_SetMeasurementLists(Meth_Method self, ApiSet values);

/**
  Set for ccp.general.Method.Method.measurements

Measurements calculated 
using Method
  @param  Meth_Method self
  @param  ApiSet values
**/
extern void *Meth_Method_SetMeasurements(Meth_Method self, ApiSet values);

/**
  Set for ccp.general.Method.Method.name

Method name
  @param  Meth_Method self
  @param  ApiString value
**/
extern void *Meth_Method_SetName(Meth_Method self, ApiString value);

/**
  Set for ccp.general.Method.Method.peakIntensities

Peak intensities 
determined using Method.
  @param  Meth_Method self
  @param  ApiSet values
**/
extern void *Meth_Method_SetPeakIntensities(Meth_Method self, ApiSet values);

/**
  Set for ccp.general.Method.Method.peaks

Peaks fitted using Method
  @param  Meth_Method self
  @param  ApiSet values
**/
extern void *Meth_Method_SetPeaks(Meth_Method self, ApiSet values);

/**
  Set for ccp.general.Method.Method.procedure

Description of the 
procedure carried out. Typically in the form of a script executable by 
the relevant Software, but could be a more general description.
  @param  Meth_Method self
  @param  ApiString value
**/
extern void *Meth_Method_SetProcedure(Meth_Method self, ApiString value);

/**
  Set for ccp.general.Method.Method.processDataSources

Nmr DataSources 
processed with Method.
  @param  Meth_Method self
  @param  ApiSet values
**/
extern void *Meth_Method_SetProcessDataSources(Meth_Method self, ApiSet values);

/**
  Set for ccp.general.Method.Method.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Meth_Method self
  @param  ApiInteger value
**/
extern void *Meth_Method_SetSerial(Meth_Method self, ApiInteger value);

/**
  Set for ccp.general.Method.Method.snDataSources

DataSources that use 
this method for S/N ratio determination
  @param  Meth_Method self
  @param  ApiSet values
**/
extern void *Meth_Method_SetSnDataSources(Meth_Method self, ApiSet values);

/**
  Set for ccp.general.Method.Method.software

Software used to execute 
method. Method.procedure will frequently be a script directly executable 
by the Software.
  @param  Meth_Method self
  @param  Meth_Software value
**/
extern void *Meth_Method_SetSoftware(Meth_Method self, Meth_Software value);

/**
  Set for ccp.general.Method.Method.structureAnalyses

StructureAnalyses 
carried out using method
  @param  Meth_Method self
  @param  ApiSet values
**/
extern void *Meth_Method_SetStructureAnalyses(Meth_Method self, ApiSet values);

/**
  Set for 
ccp.general.Method.Method.structureGenerations

StructureGenerations 
carried out using method
  @param  Meth_Method self
  @param  ApiSet values
**/
extern void *Meth_Method_SetStructureGenerations(Meth_Method self, ApiSet values);

/**
  Set for ccp.general.Method.Method.task

Operation caried out or result 
calculated e.g. 'Peak intensity', 'T1 fit', 'NMR processing', 'linear 
prediction', 'HPLC purification'.
  @param  Meth_Method self
  @param  ApiString value
**/
extern void *Meth_Method_SetTask(Meth_Method self, ApiString value);

/**
  Set for ccp.general.Method.Method.violations

Nmr Constraint violations 
calculated using Method
  @param  Meth_Method self
  @param  ApiSet values
**/
extern void *Meth_Method_SetViolations(Meth_Method self, ApiSet values);

/**
  Sorted for ccp.general.Method.Method.citations

Citations describing 
method.
  @param  Meth_Method self
  @returns   the result
**/
extern ApiList Meth_Method_SortedCitations(Meth_Method self);

/**
  Sorted for ccp.general.Method.Method.columns

Columns that use this 
loading method.
  @param  Meth_Method self
  @returns   the result
**/
extern ApiList Meth_Method_SortedColumns(Meth_Method self);

/**
  Sorted for ccp.general.Method.Method.compressDataSources

Nmr 
DataSources compresed with Method
  @param  Meth_Method self
  @returns   the result
**/
extern ApiList Meth_Method_SortedCompressDataSources(Meth_Method self);

/**
  Sorted for ccp.general.Method.Method.constraintLists

ConstraintLists 
calculated using Method
  @param  Meth_Method self
  @returns   the result
**/
extern ApiList Meth_Method_SortedConstraintLists(Meth_Method self);

/**
  Sorted for ccp.general.Method.Method.constraints

Constraints calculated 
using Method
  @param  Meth_Method self
  @returns   the result
**/
extern ApiList Meth_Method_SortedConstraints(Meth_Method self);

/**
  Sorted for ccp.general.Method.Method.dataDerivations

DataDerivations 
calculated using Method
  @param  Meth_Method self
  @returns   the result
**/
extern ApiList Meth_Method_SortedDataDerivations(Meth_Method self);

/**
  Sorted for ccp.general.Method.Method.dataDims

Nmr DataDims linear 
predicted with Method
  @param  Meth_Method self
  @returns   the result
**/
extern ApiList Meth_Method_SortedDataDims(Meth_Method self);

/**
  Sorted for ccp.general.Method.Method.derivedDataLists

DerivedDataLists 
calculated using Method
  @param  Meth_Method self
  @returns   the result
**/
extern ApiList Meth_Method_SortedDerivedDataLists(Meth_Method self);

/**
  Sorted for 
ccp.general.Method.Method.derivedNmrExperiments

Nmr.Experiments derived 
using Method
  @param  Meth_Method self
  @returns   the result
**/
extern ApiList Meth_Method_SortedDerivedNmrExperiments(Meth_Method self);

/**
  Sorted for ccp.general.Method.Method.experiments

Experiment associated 
to a certain Method.
  @param  Meth_Method self
  @returns   the result
**/
extern ApiList Meth_Method_SortedExperiments(Meth_Method self);

/**
  Sorted for ccp.general.Method.Method.fitPeakLists

Nmr Peak Lists using 
Method as default fitting method.
  @param  Meth_Method self
  @returns   the result
**/
extern ApiList Meth_Method_SortedFitPeakLists(Meth_Method self);

/**
  Sorted for ccp.general.Method.Method.intensPeakLists

PeakLists using 
Method as 'Preferred' peak intensity deternmination method.
  @param  Meth_Method self
  @returns   the result
**/
extern ApiList Meth_Method_SortedIntensPeakLists(Meth_Method self);

/**
  Sorted for ccp.general.Method.Method.measurementLists

Measurement lists 
calculated using Method
  @param  Meth_Method self
  @returns   the result
**/
extern ApiList Meth_Method_SortedMeasurementLists(Meth_Method self);

/**
  Sorted for ccp.general.Method.Method.measurements

Measurements 
calculated using Method
  @param  Meth_Method self
  @returns   the result
**/
extern ApiList Meth_Method_SortedMeasurements(Meth_Method self);

/**
  Sorted for ccp.general.Method.Method.parameters

child link to class 
Parameter
  @param  Meth_Method self
  @returns   the result
**/
extern ApiList Meth_Method_SortedParameters(Meth_Method self);

/**
  Sorted for ccp.general.Method.Method.peakIntensities

Peak intensities 
determined using Method.
  @param  Meth_Method self
  @returns   the result
**/
extern ApiList Meth_Method_SortedPeakIntensities(Meth_Method self);

/**
  Sorted for ccp.general.Method.Method.peaks

Peaks fitted using Method
  @param  Meth_Method self
  @returns   the result
**/
extern ApiList Meth_Method_SortedPeaks(Meth_Method self);

/**
  Sorted for ccp.general.Method.Method.processDataSources

Nmr DataSources 
processed with Method.
  @param  Meth_Method self
  @returns   the result
**/
extern ApiList Meth_Method_SortedProcessDataSources(Meth_Method self);

/**
  Sorted for ccp.general.Method.Method.snDataSources

DataSources that use 
this method for S/N ratio determination
  @param  Meth_Method self
  @returns   the result
**/
extern ApiList Meth_Method_SortedSnDataSources(Meth_Method self);

/**
  Sorted for 
ccp.general.Method.Method.structureAnalyses

StructureAnalyses carried 
out using method
  @param  Meth_Method self
  @returns   the result
**/
extern ApiList Meth_Method_SortedStructureAnalyses(Meth_Method self);

/**
  Sorted for 
ccp.general.Method.Method.structureGenerations

StructureGenerations 
carried out using method
  @param  Meth_Method self
  @returns   the result
**/
extern ApiList Meth_Method_SortedStructureGenerations(Meth_Method self);

/**
  Sorted for ccp.general.Method.Method.violations

Nmr Constraint 
violations calculated using Method
  @param  Meth_Method self
  @returns   the result
**/
extern ApiList Meth_Method_SortedViolations(Meth_Method self);

#endif /* __incl__ccp_api_general_Method_Method_h__ */
