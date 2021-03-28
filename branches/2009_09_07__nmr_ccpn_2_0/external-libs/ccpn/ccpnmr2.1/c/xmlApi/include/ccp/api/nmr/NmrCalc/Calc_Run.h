
#ifndef __incl__ccp_api_nmr_NmrCalc_Run_h__
#define __incl__ccp_api_nmr_NmrCalc_Run_h__

#include "ccp.h"

/*
  
*/

/* package ccp.api.nmr.NmrCalc */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_Run self
  @param  Impl_ApplicationData value
**/
extern void *Calc_Run_AddApplicationData(Calc_Run self, Impl_ApplicationData value);

/**
  CheckAllValid for ccp.nmr.NmrCalc.Run
  @param  Calc_Run self
  @param  ApiBoolean complete
**/
extern void *Calc_Run_CheckAllValid(Calc_Run self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.NmrCalc.Run
  @param  Calc_Run self
  @param  ApiBoolean complete
**/
extern void *Calc_Run_CheckValid(Calc_Run self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_Run self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Calc_Run_FindAllApplicationData(Calc_Run self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_Run self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Calc_Run_FindAllApplicationData_keyval0(Calc_Run self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_Run self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Calc_Run_FindAllApplicationData_keyval1(Calc_Run self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Calc_Run_FindAllApplicationData_keyval2(Calc_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Calc_Run_FindAllApplicationData_keyval3(Calc_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_Run self
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
extern ApiList Calc_Run_FindAllApplicationData_keyval4(Calc_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.NmrCalc.Run.data

child link to class Data
  @param  Calc_Run self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Calc_Run_FindAllData(Calc_Run self, ApiMap conditions);

/**
  FindAll for ccp.nmr.NmrCalc.Run.data

child link to class Data
  @param  Calc_Run self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Calc_Run_FindAllData_keyval0(Calc_Run self);

/**
  FindAll for ccp.nmr.NmrCalc.Run.data

child link to class Data
  @param  Calc_Run self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Calc_Run_FindAllData_keyval1(Calc_Run self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.NmrCalc.Run.data

child link to class Data
  @param  Calc_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Calc_Run_FindAllData_keyval2(Calc_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.NmrCalc.Run.data

child link to class Data
  @param  Calc_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Calc_Run_FindAllData_keyval3(Calc_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.NmrCalc.Run.data

child link to class Data
  @param  Calc_Run self
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
extern ApiSet Calc_Run_FindAllData_keyval4(Calc_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.NmrCalc.Run.inputs

Input data units
  @param  Calc_Run self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Calc_Run_FindAllInputs(Calc_Run self, ApiMap conditions);

/**
  FindAll for ccp.nmr.NmrCalc.Run.inputs

Input data units
  @param  Calc_Run self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Calc_Run_FindAllInputs_keyval0(Calc_Run self);

/**
  FindAll for ccp.nmr.NmrCalc.Run.inputs

Input data units
  @param  Calc_Run self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Calc_Run_FindAllInputs_keyval1(Calc_Run self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.NmrCalc.Run.inputs

Input data units
  @param  Calc_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Calc_Run_FindAllInputs_keyval2(Calc_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.NmrCalc.Run.inputs

Input data units
  @param  Calc_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Calc_Run_FindAllInputs_keyval3(Calc_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.NmrCalc.Run.inputs

Input data units
  @param  Calc_Run self
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
extern ApiSet Calc_Run_FindAllInputs_keyval4(Calc_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.NmrCalc.Run.outputs

output data units
  @param  Calc_Run self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Calc_Run_FindAllOutputs(Calc_Run self, ApiMap conditions);

/**
  FindAll for ccp.nmr.NmrCalc.Run.outputs

output data units
  @param  Calc_Run self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Calc_Run_FindAllOutputs_keyval0(Calc_Run self);

/**
  FindAll for ccp.nmr.NmrCalc.Run.outputs

output data units
  @param  Calc_Run self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Calc_Run_FindAllOutputs_keyval1(Calc_Run self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.NmrCalc.Run.outputs

output data units
  @param  Calc_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Calc_Run_FindAllOutputs_keyval2(Calc_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.NmrCalc.Run.outputs

output data units
  @param  Calc_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Calc_Run_FindAllOutputs_keyval3(Calc_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.NmrCalc.Run.outputs

output data units
  @param  Calc_Run self
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
extern ApiSet Calc_Run_FindAllOutputs_keyval4(Calc_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.NmrCalc.Run.runParameters

child link to class 
RunParameter
  @param  Calc_Run self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Calc_Run_FindAllRunParameters(Calc_Run self, ApiMap conditions);

/**
  FindAll for ccp.nmr.NmrCalc.Run.runParameters

child link to class 
RunParameter
  @param  Calc_Run self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Calc_Run_FindAllRunParameters_keyval0(Calc_Run self);

/**
  FindAll for ccp.nmr.NmrCalc.Run.runParameters

child link to class 
RunParameter
  @param  Calc_Run self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Calc_Run_FindAllRunParameters_keyval1(Calc_Run self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.NmrCalc.Run.runParameters

child link to class 
RunParameter
  @param  Calc_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Calc_Run_FindAllRunParameters_keyval2(Calc_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.NmrCalc.Run.runParameters

child link to class 
RunParameter
  @param  Calc_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Calc_Run_FindAllRunParameters_keyval3(Calc_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.NmrCalc.Run.runParameters

child link to class 
RunParameter
  @param  Calc_Run self
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
extern ApiSet Calc_Run_FindAllRunParameters_keyval4(Calc_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_Run self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Calc_Run_FindFirstApplicationData(Calc_Run self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_Run self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Calc_Run_FindFirstApplicationData_keyval0(Calc_Run self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_Run self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Calc_Run_FindFirstApplicationData_keyval1(Calc_Run self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Calc_Run_FindFirstApplicationData_keyval2(Calc_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Calc_Run_FindFirstApplicationData_keyval3(Calc_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_Run self
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
extern Impl_ApplicationData Calc_Run_FindFirstApplicationData_keyval4(Calc_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.NmrCalc.Run.data

child link to class Data
  @param  Calc_Run self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Calc_Data Calc_Run_FindFirstData(Calc_Run self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.NmrCalc.Run.data

child link to class Data
  @param  Calc_Run self
  @returns  the first value that satisfies the conditions 
**/
extern Calc_Data Calc_Run_FindFirstData_keyval0(Calc_Run self);

/**
  FindFirst for ccp.nmr.NmrCalc.Run.data

child link to class Data
  @param  Calc_Run self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Calc_Data Calc_Run_FindFirstData_keyval1(Calc_Run self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.NmrCalc.Run.data

child link to class Data
  @param  Calc_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Calc_Data Calc_Run_FindFirstData_keyval2(Calc_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.NmrCalc.Run.data

child link to class Data
  @param  Calc_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Calc_Data Calc_Run_FindFirstData_keyval3(Calc_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.NmrCalc.Run.data

child link to class Data
  @param  Calc_Run self
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
extern Calc_Data Calc_Run_FindFirstData_keyval4(Calc_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.NmrCalc.Run.inputs

Input data units
  @param  Calc_Run self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Calc_Data Calc_Run_FindFirstInput(Calc_Run self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.NmrCalc.Run.inputs

Input data units
  @param  Calc_Run self
  @returns  the first value that satisfies the conditions 
**/
extern Calc_Data Calc_Run_FindFirstInput_keyval0(Calc_Run self);

/**
  FindFirst for ccp.nmr.NmrCalc.Run.inputs

Input data units
  @param  Calc_Run self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Calc_Data Calc_Run_FindFirstInput_keyval1(Calc_Run self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.NmrCalc.Run.inputs

Input data units
  @param  Calc_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Calc_Data Calc_Run_FindFirstInput_keyval2(Calc_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.NmrCalc.Run.inputs

Input data units
  @param  Calc_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Calc_Data Calc_Run_FindFirstInput_keyval3(Calc_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.NmrCalc.Run.inputs

Input data units
  @param  Calc_Run self
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
extern Calc_Data Calc_Run_FindFirstInput_keyval4(Calc_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.NmrCalc.Run.outputs

output data units
  @param  Calc_Run self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Calc_Data Calc_Run_FindFirstOutput(Calc_Run self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.NmrCalc.Run.outputs

output data units
  @param  Calc_Run self
  @returns  the first value that satisfies the conditions 
**/
extern Calc_Data Calc_Run_FindFirstOutput_keyval0(Calc_Run self);

/**
  FindFirst for ccp.nmr.NmrCalc.Run.outputs

output data units
  @param  Calc_Run self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Calc_Data Calc_Run_FindFirstOutput_keyval1(Calc_Run self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.NmrCalc.Run.outputs

output data units
  @param  Calc_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Calc_Data Calc_Run_FindFirstOutput_keyval2(Calc_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.NmrCalc.Run.outputs

output data units
  @param  Calc_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Calc_Data Calc_Run_FindFirstOutput_keyval3(Calc_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.NmrCalc.Run.outputs

output data units
  @param  Calc_Run self
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
extern Calc_Data Calc_Run_FindFirstOutput_keyval4(Calc_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.NmrCalc.Run.runParameters

child link to class 
RunParameter
  @param  Calc_Run self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Calc_RunParameter Calc_Run_FindFirstRunParameter(Calc_Run self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.NmrCalc.Run.runParameters

child link to class 
RunParameter
  @param  Calc_Run self
  @returns  the first value that satisfies the conditions 
**/
extern Calc_RunParameter Calc_Run_FindFirstRunParameter_keyval0(Calc_Run self);

/**
  FindFirst for ccp.nmr.NmrCalc.Run.runParameters

child link to class 
RunParameter
  @param  Calc_Run self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Calc_RunParameter Calc_Run_FindFirstRunParameter_keyval1(Calc_Run self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.NmrCalc.Run.runParameters

child link to class 
RunParameter
  @param  Calc_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Calc_RunParameter Calc_Run_FindFirstRunParameter_keyval2(Calc_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.NmrCalc.Run.runParameters

child link to class 
RunParameter
  @param  Calc_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Calc_RunParameter Calc_Run_FindFirstRunParameter_keyval3(Calc_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.NmrCalc.Run.runParameters

child link to class 
RunParameter
  @param  Calc_Run self
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
extern Calc_RunParameter Calc_Run_FindFirstRunParameter_keyval4(Calc_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.NmrCalc.Run
  @param  Calc_Run self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Calc_Run_Get(Calc_Run self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Calc_Run self
  @returns   the result
**/
extern Acco_AccessObject Calc_Run_GetAccess(Calc_Run self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Calc_Run self
  @returns   the result
**/
extern Acco_AccessObject Calc_Run_GetActiveAccess(Calc_Run self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_Run self
  @returns   the result
**/
extern ApiList Calc_Run_GetApplicationData(Calc_Run self);

/**
  GetByKey for ccp.nmr.NmrCalc.Run
  @param  Calc_Run self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Calc_Run Calc_Run_GetByKey(Calc_Run self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Calc_Run self
  @returns   the result
**/
extern ApiString Calc_Run_GetClassName(Calc_Run self);

/**
  Get for ccp.nmr.NmrCalc.Run.data

child link to class Data
  @param  Calc_Run self
  @returns   the result
**/
extern ApiSet Calc_Run_GetData(Calc_Run self);

/**
  Get for ccp.nmr.NmrCalc.Run.details

Free text, for notes, explanatory 
comments, etc.
  @param  Calc_Run self
  @returns   the result
**/
extern ApiString Calc_Run_GetDetails(Calc_Run self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Calc_Run self
  @returns   the result
**/
extern ApiList Calc_Run_GetFieldNames(Calc_Run self);

/**
  GetFullKey for ccp.nmr.NmrCalc.Run
  @param  Calc_Run self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Calc_Run_GetFullKey(Calc_Run self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Calc_Run self
  @returns   the result
**/
extern ApiBoolean Calc_Run_GetInConstructor(Calc_Run self);

/**
  getter for derived link inputs
  @param  Calc_Run self
  @returns   the result
**/
extern ApiSet Calc_Run_GetInputs(Calc_Run self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Calc_Run self
  @returns   the result
**/
extern ApiBoolean Calc_Run_GetIsDeleted(Calc_Run self);

/**
  GetLocalKey for ccp.nmr.NmrCalc.Run
  @param  Calc_Run self
  @returns  Local object key
**/
extern ApiObject Calc_Run_GetLocalKey(Calc_Run self);

/**
  Get for ccp.nmr.NmrCalc.Run.nmrCalcStore

parent link
  @param  Calc_Run self
  @returns   the result
**/
extern Calc_NmrCalcStore Calc_Run_GetNmrCalcStore(Calc_Run self);

/**
  Get for ccp.nmr.NmrCalc.Run.operator

Person submitting the calculation
  @param  Calc_Run self
  @returns   the result
**/
extern Affi_Person Calc_Run_GetOperator(Calc_Run self);

/**
  getter for derived link outputs
  @param  Calc_Run self
  @returns   the result
**/
extern ApiSet Calc_Run_GetOutputs(Calc_Run self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Calc_Run self
  @returns   the result
**/
extern ApiString Calc_Run_GetPackageName(Calc_Run self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Calc_Run self
  @returns   the result
**/
extern ApiString Calc_Run_GetPackageShortName(Calc_Run self);

/**
  Get for ccp.nmr.NmrCalc.Run.parent

link to parent object - synonym for 
nmrCalcStore
  @param  Calc_Run self
  @returns   the result
**/
extern Calc_NmrCalcStore Calc_Run_GetParent(Calc_Run self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Calc_Run self
  @returns   the result
**/
extern ApiString Calc_Run_GetQualifiedName(Calc_Run self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Calc_Run self
  @returns   the result
**/
extern Impl_MemopsRoot Calc_Run_GetRoot(Calc_Run self);

/**
  Get for ccp.nmr.NmrCalc.Run.runParameters

child link to class 
RunParameter
  @param  Calc_Run self
  @returns   the result
**/
extern ApiSet Calc_Run_GetRunParameters(Calc_Run self);

/**
  Get for ccp.nmr.NmrCalc.Run.serial

Serial number of object. Serves as 
object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Calc_Run self
  @returns   the result
**/
extern ApiInteger Calc_Run_GetSerial(Calc_Run self);

/**
  Get for ccp.nmr.NmrCalc.Run.status

Calculation status
  @param  Calc_Run self
  @returns   the result
**/
extern ApiString Calc_Run_GetStatus(Calc_Run self);

/**
  Get for ccp.nmr.NmrCalc.Run.structureGeneration

NMR Structure 
generation that run contributes to
  @param  Calc_Run self
  @returns   the result
**/
extern Nmr_StructureGeneration Calc_Run_GetStructureGeneration(Calc_Run self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Calc_Run self
  @returns   the result
**/
extern Impl_TopObject Calc_Run_GetTopObject(Calc_Run self);

/**
  Constructor for ccp.nmr.NmrCalc.Run
  @param  Calc_NmrCalcStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Calc_Run Calc_Run_Init(Calc_NmrCalcStore parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.NmrCalc.Run
  @param  Calc_NmrCalcStore parent
  @returns  the new object
**/
extern Calc_Run Calc_Run_Init_reqd(Calc_NmrCalcStore parent);

/**
  Factory function to create ccp.nmr.NmrCalc.ConstraintStoreData
  @param  Calc_Run self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Calc_ConstraintStoreData Calc_Run_NewConstraintStoreData(Calc_Run self, ApiMap attrlinks);

/**
  Factory function to create ccp.nmr.NmrCalc.ConstraintStoreData
  @param  Calc_Run self
  @param  ApiInteger constraintStoreSerial
  @returns  the new object
**/
extern Calc_ConstraintStoreData Calc_Run_NewConstraintStoreData_reqd(Calc_Run self, ApiInteger constraintStoreSerial);

/**
  Factory function to create ccp.nmr.NmrCalc.DerivedListData
  @param  Calc_Run self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Calc_DerivedListData Calc_Run_NewDerivedListData(Calc_Run self, ApiMap attrlinks);

/**
  Factory function to create ccp.nmr.NmrCalc.DerivedListData
  @param  Calc_Run self
  @param  ApiInteger derivedDataListSerial
  @returns  the new object
**/
extern Calc_DerivedListData Calc_Run_NewDerivedListData_reqd(Calc_Run self, ApiInteger derivedDataListSerial);

/**
  Factory function to create ccp.nmr.NmrCalc.ExternalData
  @param  Calc_Run self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Calc_ExternalData Calc_Run_NewExternalData(Calc_Run self, ApiMap attrlinks);

/**
  Factory function to create ccp.nmr.NmrCalc.ExternalData
  @param  Calc_Run self
  @returns  the new object
**/
extern Calc_ExternalData Calc_Run_NewExternalData_reqd(Calc_Run self);

/**
  Factory function to create ccp.nmr.NmrCalc.MeasurementListData
  @param  Calc_Run self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Calc_MeasurementListData Calc_Run_NewMeasurementListData(Calc_Run self, ApiMap attrlinks);

/**
  Factory function to create ccp.nmr.NmrCalc.MeasurementListData
  @param  Calc_Run self
  @param  ApiInteger measurementListSerial
  @returns  the new object
**/
extern Calc_MeasurementListData Calc_Run_NewMeasurementListData_reqd(Calc_Run self, ApiInteger measurementListSerial);

/**
  Factory function to create ccp.nmr.NmrCalc.MolResidueData
  @param  Calc_Run self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Calc_MolResidueData Calc_Run_NewMolResidueData(Calc_Run self, ApiMap attrlinks);

/**
  Factory function to create ccp.nmr.NmrCalc.MolResidueData
  @param  Calc_Run self
  @param  char * chainCode
  @param  char * molSystemCode
  @returns  the new object
**/
extern Calc_MolResidueData Calc_Run_NewMolResidueData_reqd(Calc_Run self, char * chainCode, char * molSystemCode);

/**
  Factory function to create ccp.nmr.NmrCalc.MolSystemData
  @param  Calc_Run self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Calc_MolSystemData Calc_Run_NewMolSystemData(Calc_Run self, ApiMap attrlinks);

/**
  Factory function to create ccp.nmr.NmrCalc.MolSystemData
  @param  Calc_Run self
  @param  char * molSystemCode
  @returns  the new object
**/
extern Calc_MolSystemData Calc_Run_NewMolSystemData_reqd(Calc_Run self, char * molSystemCode);

/**
  Factory function to create ccp.nmr.NmrCalc.PeakListData
  @param  Calc_Run self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Calc_PeakListData Calc_Run_NewPeakListData(Calc_Run self, ApiMap attrlinks);

/**
  Factory function to create ccp.nmr.NmrCalc.PeakListData
  @param  Calc_Run self
  @returns  the new object
**/
extern Calc_PeakListData Calc_Run_NewPeakListData_reqd(Calc_Run self);

/**
  Factory function to create ccp.nmr.NmrCalc.RunParameter
  @param  Calc_Run self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Calc_RunParameter Calc_Run_NewRunParameter(Calc_Run self, ApiMap attrlinks);

/**
  Factory function to create ccp.nmr.NmrCalc.RunParameter
  @param  Calc_Run self
  @param  char * code
  @returns  the new object
**/
extern Calc_RunParameter Calc_Run_NewRunParameter_reqd(Calc_Run self, char * code);

/**
  Factory function to create ccp.nmr.NmrCalc.SpectrumData
  @param  Calc_Run self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Calc_SpectrumData Calc_Run_NewSpectrumData(Calc_Run self, ApiMap attrlinks);

/**
  Factory function to create ccp.nmr.NmrCalc.SpectrumData
  @param  Calc_Run self
  @returns  the new object
**/
extern Calc_SpectrumData Calc_Run_NewSpectrumData_reqd(Calc_Run self);

/**
  Factory function to create ccp.nmr.NmrCalc.SpinSystemData
  @param  Calc_Run self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Calc_SpinSystemData Calc_Run_NewSpinSystemData(Calc_Run self, ApiMap attrlinks);

/**
  Factory function to create ccp.nmr.NmrCalc.SpinSystemData
  @param  Calc_Run self
  @param  ApiInteger resonanceGroupSerial
  @returns  the new object
**/
extern Calc_SpinSystemData Calc_Run_NewSpinSystemData_reqd(Calc_Run self, ApiInteger resonanceGroupSerial);

/**
  Factory function to create ccp.nmr.NmrCalc.StructureEnsembleData
  @param  Calc_Run self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Calc_StructureEnsembleData Calc_Run_NewStructureEnsembleData(Calc_Run self, ApiMap attrlinks);

/**
  Factory function to create ccp.nmr.NmrCalc.StructureEnsembleData
  @param  Calc_Run self
  @param  ApiInteger ensembleId
  @param  char * molSystemCode
  @returns  the new object
**/
extern Calc_StructureEnsembleData Calc_Run_NewStructureEnsembleData_reqd(Calc_Run self, ApiInteger ensembleId, char * molSystemCode);

/**
  Factory function to create ccp.nmr.NmrCalc.ViolationListData
  @param  Calc_Run self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Calc_ViolationListData Calc_Run_NewViolationListData(Calc_Run self, ApiMap attrlinks);

/**
  Factory function to create ccp.nmr.NmrCalc.ViolationListData
  @param  Calc_Run self
  @param  ApiInteger constraintStoreSerial
  @param  ApiInteger violationListSerial
  @returns  the new object
**/
extern Calc_ViolationListData Calc_Run_NewViolationListData_reqd(Calc_Run self, ApiInteger constraintStoreSerial, ApiInteger violationListSerial);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_Run self
  @param  Impl_ApplicationData value
**/
extern void *Calc_Run_RemoveApplicationData(Calc_Run self, Impl_ApplicationData value);

/**
  SetAttr for ccp.nmr.NmrCalc.Run
  @param  Calc_Run self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Calc_Run_Set(Calc_Run self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Calc_Run self
  @param  Acco_AccessObject value
**/
extern void *Calc_Run_SetAccess(Calc_Run self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_Run self
  @param  ApiList values
**/
extern void *Calc_Run_SetApplicationData(Calc_Run self, ApiList values);

/**
  Set for ccp.nmr.NmrCalc.Run.details

Free text, for notes, explanatory 
comments, etc.
  @param  Calc_Run self
  @param  ApiString value
**/
extern void *Calc_Run_SetDetails(Calc_Run self, ApiString value);

/**
  Set for ccp.nmr.NmrCalc.Run.operator

Person submitting the calculation
  @param  Calc_Run self
  @param  Affi_Person value
**/
extern void *Calc_Run_SetOperator(Calc_Run self, Affi_Person value);

/**
  Set for ccp.nmr.NmrCalc.Run.serial

Serial number of object. Serves as 
object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Calc_Run self
  @param  ApiInteger value
**/
extern void *Calc_Run_SetSerial(Calc_Run self, ApiInteger value);

/**
  Set for ccp.nmr.NmrCalc.Run.status

Calculation status
  @param  Calc_Run self
  @param  ApiString value
**/
extern void *Calc_Run_SetStatus(Calc_Run self, ApiString value);

/**
  Set for ccp.nmr.NmrCalc.Run.structureGeneration

NMR Structure 
generation that run contributes to
  @param  Calc_Run self
  @param  Nmr_StructureGeneration value
**/
extern void *Calc_Run_SetStructureGeneration(Calc_Run self, Nmr_StructureGeneration value);

/**
  Sorted for ccp.nmr.NmrCalc.Run.data

child link to class Data
  @param  Calc_Run self
  @returns   the result
**/
extern ApiList Calc_Run_SortedData(Calc_Run self);

/**
  Sorted for ccp.nmr.NmrCalc.Run.inputs

Input data units
  @param  Calc_Run self
  @returns   the result
**/
extern ApiList Calc_Run_SortedInputs(Calc_Run self);

/**
  Sorted for ccp.nmr.NmrCalc.Run.outputs

output data units
  @param  Calc_Run self
  @returns   the result
**/
extern ApiList Calc_Run_SortedOutputs(Calc_Run self);

/**
  Sorted for ccp.nmr.NmrCalc.Run.runParameters

child link to class 
RunParameter
  @param  Calc_Run self
  @returns   the result
**/
extern ApiList Calc_Run_SortedRunParameters(Calc_Run self);

#endif /* __incl__ccp_api_nmr_NmrCalc_Run_h__ */
