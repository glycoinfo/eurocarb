
#ifndef __incl__ccp_api_nmr_NmrExpPrototype_RefExpDimRef_h__
#define __incl__ccp_api_nmr_NmrExpPrototype_RefExpDimRef_h__

#include "ccp.h"

/*
  ExpDimRef for prototype experiment. Maps ExpDimRef on ExpStep, from which the information necessary for creating ExpDimRef can be found.
  
  If there is more than one ExpGraph in the NmrExpPrototype, in general each RefExpDim will have an equivalent set of RefExpDimRef for every ExpGraph. Where this is not the case it may be assumed that the 'missing' RefExpDimRefs are 1) identical in content to those present and 2) correspond to the same ExpStep as those given. This convention is used to avoid having several identical RefExpDimRefs just because there are several ExpGraphs.
  
  Note that the serial attribute is used to match Nmr.ExpDimRefs to RefExpDimRefs, so that objects with the same serial correspond to each other. 
*/

/* package ccp.api.nmr.NmrExpPrototype */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_RefExpDimRef self
  @param  Impl_ApplicationData value
**/
extern void *Nmrx_RefExpDimRef_AddApplicationData(Nmrx_RefExpDimRef self, Impl_ApplicationData value);

/**
  Add for 
ccp.nmr.NmrExpPrototype.RefExpDimRef.coupledIsotopeCodes

Isotope codes 
for isotopes, couplings to which are active in the dimension. Note that 
homonuclear couplings (e.g. proton couplings in a proton dimension) must 
be specified explicitly if they are to be treated as active. Except for 
constant-time experiments, homonuclear couplings are normally active, 
but they may be ignored if they are not resolved and not of interest.
  @param  Nmrx_RefExpDimRef self
  @param  ApiString value
**/
extern void *Nmrx_RefExpDimRef_AddCoupledIsotopeCode(Nmrx_RefExpDimRef self, ApiString value);

/**
  Add for ccp.nmr.NmrExpPrototype.RefExpDimRef.expSteps

ExpSteps that 
corresponds to RefExpDimRef. The connection to the ExpMeasurenment is 
handled via the direct link to ExpMeasurement. The expStep link serves 
to distinguish which of several ExpSteps compatible with the 
ExpMeasurement was actually to make a measurement (e.g. was the N15 
magnetisation measured before or after the CA magnetisaion in an HNCA 
experiment.
  @param  Nmrx_RefExpDimRef self
  @param  Nmrx_ExpStep value
**/
extern void *Nmrx_RefExpDimRef_AddExpStep(Nmrx_RefExpDimRef self, Nmrx_ExpStep value);

/**
  Add for ccp.nmr.NmrExpPrototype.RefExpDimRef.validScalingFactors

List 
of valid scaling factors for RefExpDimRef. If empty, many different 
factors are allowed. The position of a peak is calculated as the sum 
over ExpDimRef scaling factors times position values (e.g. position in 
ppm).
  @param  Nmrx_RefExpDimRef self
  @param  ApiFloat value
**/
extern void *Nmrx_RefExpDimRef_AddValidScalingFactor(Nmrx_RefExpDimRef self, ApiFloat value);

/**
  CheckAllValid for ccp.nmr.NmrExpPrototype.RefExpDimRef
  @param  Nmrx_RefExpDimRef self
  @param  ApiBoolean complete
**/
extern void *Nmrx_RefExpDimRef_CheckAllValid(Nmrx_RefExpDimRef self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.NmrExpPrototype.RefExpDimRef
  @param  Nmrx_RefExpDimRef self
  @param  ApiBoolean complete
**/
extern void *Nmrx_RefExpDimRef_CheckValid(Nmrx_RefExpDimRef self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_RefExpDimRef self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrx_RefExpDimRef_FindAllApplicationData(Nmrx_RefExpDimRef self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_RefExpDimRef self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrx_RefExpDimRef_FindAllApplicationData_keyval0(Nmrx_RefExpDimRef self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_RefExpDimRef self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrx_RefExpDimRef_FindAllApplicationData_keyval1(Nmrx_RefExpDimRef self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_RefExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrx_RefExpDimRef_FindAllApplicationData_keyval2(Nmrx_RefExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_RefExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrx_RefExpDimRef_FindAllApplicationData_keyval3(Nmrx_RefExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_RefExpDimRef self
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
extern ApiList Nmrx_RefExpDimRef_FindAllApplicationData_keyval4(Nmrx_RefExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.NmrExpPrototype.RefExpDimRef.coupledIsotopes

Isotopes couplings 
to which are active in a given dimension.
  @param  Nmrx_RefExpDimRef self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrx_RefExpDimRef_FindAllCoupledIsotopes(Nmrx_RefExpDimRef self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.NmrExpPrototype.RefExpDimRef.coupledIsotopes

Isotopes couplings 
to which are active in a given dimension.
  @param  Nmrx_RefExpDimRef self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrx_RefExpDimRef_FindAllCoupledIsotopes_keyval0(Nmrx_RefExpDimRef self);

/**
  FindAll for 
ccp.nmr.NmrExpPrototype.RefExpDimRef.coupledIsotopes

Isotopes couplings 
to which are active in a given dimension.
  @param  Nmrx_RefExpDimRef self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrx_RefExpDimRef_FindAllCoupledIsotopes_keyval1(Nmrx_RefExpDimRef self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.NmrExpPrototype.RefExpDimRef.coupledIsotopes

Isotopes couplings 
to which are active in a given dimension.
  @param  Nmrx_RefExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrx_RefExpDimRef_FindAllCoupledIsotopes_keyval2(Nmrx_RefExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.NmrExpPrototype.RefExpDimRef.coupledIsotopes

Isotopes couplings 
to which are active in a given dimension.
  @param  Nmrx_RefExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrx_RefExpDimRef_FindAllCoupledIsotopes_keyval3(Nmrx_RefExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.NmrExpPrototype.RefExpDimRef.coupledIsotopes

Isotopes couplings 
to which are active in a given dimension.
  @param  Nmrx_RefExpDimRef self
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
extern ApiSet Nmrx_RefExpDimRef_FindAllCoupledIsotopes_keyval4(Nmrx_RefExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.NmrExpPrototype.RefExpDimRef.expSteps

ExpSteps that 
corresponds to RefExpDimRef. The connection to the ExpMeasurenment is 
handled via the direct link to ExpMeasurement. The expStep link serves 
to distinguish which of several ExpSteps compatible with the 
ExpMeasurement was actually to make a measurement (e.g. was the N15 
magnetisation measured before or after the CA magnetisaion in an HNCA 
experiment.
  @param  Nmrx_RefExpDimRef self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrx_RefExpDimRef_FindAllExpSteps(Nmrx_RefExpDimRef self, ApiMap conditions);

/**
  FindAll for ccp.nmr.NmrExpPrototype.RefExpDimRef.expSteps

ExpSteps that 
corresponds to RefExpDimRef. The connection to the ExpMeasurenment is 
handled via the direct link to ExpMeasurement. The expStep link serves 
to distinguish which of several ExpSteps compatible with the 
ExpMeasurement was actually to make a measurement (e.g. was the N15 
magnetisation measured before or after the CA magnetisaion in an HNCA 
experiment.
  @param  Nmrx_RefExpDimRef self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrx_RefExpDimRef_FindAllExpSteps_keyval0(Nmrx_RefExpDimRef self);

/**
  FindAll for ccp.nmr.NmrExpPrototype.RefExpDimRef.expSteps

ExpSteps that 
corresponds to RefExpDimRef. The connection to the ExpMeasurenment is 
handled via the direct link to ExpMeasurement. The expStep link serves 
to distinguish which of several ExpSteps compatible with the 
ExpMeasurement was actually to make a measurement (e.g. was the N15 
magnetisation measured before or after the CA magnetisaion in an HNCA 
experiment.
  @param  Nmrx_RefExpDimRef self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrx_RefExpDimRef_FindAllExpSteps_keyval1(Nmrx_RefExpDimRef self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.NmrExpPrototype.RefExpDimRef.expSteps

ExpSteps that 
corresponds to RefExpDimRef. The connection to the ExpMeasurenment is 
handled via the direct link to ExpMeasurement. The expStep link serves 
to distinguish which of several ExpSteps compatible with the 
ExpMeasurement was actually to make a measurement (e.g. was the N15 
magnetisation measured before or after the CA magnetisaion in an HNCA 
experiment.
  @param  Nmrx_RefExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrx_RefExpDimRef_FindAllExpSteps_keyval2(Nmrx_RefExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.NmrExpPrototype.RefExpDimRef.expSteps

ExpSteps that 
corresponds to RefExpDimRef. The connection to the ExpMeasurenment is 
handled via the direct link to ExpMeasurement. The expStep link serves 
to distinguish which of several ExpSteps compatible with the 
ExpMeasurement was actually to make a measurement (e.g. was the N15 
magnetisation measured before or after the CA magnetisaion in an HNCA 
experiment.
  @param  Nmrx_RefExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrx_RefExpDimRef_FindAllExpSteps_keyval3(Nmrx_RefExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.NmrExpPrototype.RefExpDimRef.expSteps

ExpSteps that 
corresponds to RefExpDimRef. The connection to the ExpMeasurenment is 
handled via the direct link to ExpMeasurement. The expStep link serves 
to distinguish which of several ExpSteps compatible with the 
ExpMeasurement was actually to make a measurement (e.g. was the N15 
magnetisation measured before or after the CA magnetisaion in an HNCA 
experiment.
  @param  Nmrx_RefExpDimRef self
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
extern ApiSet Nmrx_RefExpDimRef_FindAllExpSteps_keyval4(Nmrx_RefExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_RefExpDimRef self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrx_RefExpDimRef_FindFirstApplicationData(Nmrx_RefExpDimRef self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_RefExpDimRef self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrx_RefExpDimRef_FindFirstApplicationData_keyval0(Nmrx_RefExpDimRef self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_RefExpDimRef self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrx_RefExpDimRef_FindFirstApplicationData_keyval1(Nmrx_RefExpDimRef self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_RefExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrx_RefExpDimRef_FindFirstApplicationData_keyval2(Nmrx_RefExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_RefExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrx_RefExpDimRef_FindFirstApplicationData_keyval3(Nmrx_RefExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_RefExpDimRef self
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
extern Impl_ApplicationData Nmrx_RefExpDimRef_FindFirstApplicationData_keyval4(Nmrx_RefExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.RefExpDimRef.coupledIsotopes

Isotopes couplings 
to which are active in a given dimension.
  @param  Nmrx_RefExpDimRef self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Chel_Isotope Nmrx_RefExpDimRef_FindFirstCoupledIsotope(Nmrx_RefExpDimRef self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.RefExpDimRef.coupledIsotopes

Isotopes couplings 
to which are active in a given dimension.
  @param  Nmrx_RefExpDimRef self
  @returns  the first value that satisfies the conditions 
**/
extern Chel_Isotope Nmrx_RefExpDimRef_FindFirstCoupledIsotope_keyval0(Nmrx_RefExpDimRef self);

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.RefExpDimRef.coupledIsotopes

Isotopes couplings 
to which are active in a given dimension.
  @param  Nmrx_RefExpDimRef self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Chel_Isotope Nmrx_RefExpDimRef_FindFirstCoupledIsotope_keyval1(Nmrx_RefExpDimRef self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.RefExpDimRef.coupledIsotopes

Isotopes couplings 
to which are active in a given dimension.
  @param  Nmrx_RefExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Chel_Isotope Nmrx_RefExpDimRef_FindFirstCoupledIsotope_keyval2(Nmrx_RefExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.RefExpDimRef.coupledIsotopes

Isotopes couplings 
to which are active in a given dimension.
  @param  Nmrx_RefExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Chel_Isotope Nmrx_RefExpDimRef_FindFirstCoupledIsotope_keyval3(Nmrx_RefExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.RefExpDimRef.coupledIsotopes

Isotopes couplings 
to which are active in a given dimension.
  @param  Nmrx_RefExpDimRef self
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
extern Chel_Isotope Nmrx_RefExpDimRef_FindFirstCoupledIsotope_keyval4(Nmrx_RefExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.NmrExpPrototype.RefExpDimRef.expSteps

ExpSteps 
that corresponds to RefExpDimRef. The connection to the ExpMeasurenment 
is handled via the direct link to ExpMeasurement. The expStep link 
serves to distinguish which of several ExpSteps compatible with the 
ExpMeasurement was actually to make a measurement (e.g. was the N15 
magnetisation measured before or after the CA magnetisaion in an HNCA 
experiment.
  @param  Nmrx_RefExpDimRef self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmrx_ExpStep Nmrx_RefExpDimRef_FindFirstExpStep(Nmrx_RefExpDimRef self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.NmrExpPrototype.RefExpDimRef.expSteps

ExpSteps 
that corresponds to RefExpDimRef. The connection to the ExpMeasurenment 
is handled via the direct link to ExpMeasurement. The expStep link 
serves to distinguish which of several ExpSteps compatible with the 
ExpMeasurement was actually to make a measurement (e.g. was the N15 
magnetisation measured before or after the CA magnetisaion in an HNCA 
experiment.
  @param  Nmrx_RefExpDimRef self
  @returns  the first value that satisfies the conditions 
**/
extern Nmrx_ExpStep Nmrx_RefExpDimRef_FindFirstExpStep_keyval0(Nmrx_RefExpDimRef self);

/**
  FindFirst for ccp.nmr.NmrExpPrototype.RefExpDimRef.expSteps

ExpSteps 
that corresponds to RefExpDimRef. The connection to the ExpMeasurenment 
is handled via the direct link to ExpMeasurement. The expStep link 
serves to distinguish which of several ExpSteps compatible with the 
ExpMeasurement was actually to make a measurement (e.g. was the N15 
magnetisation measured before or after the CA magnetisaion in an HNCA 
experiment.
  @param  Nmrx_RefExpDimRef self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmrx_ExpStep Nmrx_RefExpDimRef_FindFirstExpStep_keyval1(Nmrx_RefExpDimRef self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.NmrExpPrototype.RefExpDimRef.expSteps

ExpSteps 
that corresponds to RefExpDimRef. The connection to the ExpMeasurenment 
is handled via the direct link to ExpMeasurement. The expStep link 
serves to distinguish which of several ExpSteps compatible with the 
ExpMeasurement was actually to make a measurement (e.g. was the N15 
magnetisation measured before or after the CA magnetisaion in an HNCA 
experiment.
  @param  Nmrx_RefExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmrx_ExpStep Nmrx_RefExpDimRef_FindFirstExpStep_keyval2(Nmrx_RefExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.NmrExpPrototype.RefExpDimRef.expSteps

ExpSteps 
that corresponds to RefExpDimRef. The connection to the ExpMeasurenment 
is handled via the direct link to ExpMeasurement. The expStep link 
serves to distinguish which of several ExpSteps compatible with the 
ExpMeasurement was actually to make a measurement (e.g. was the N15 
magnetisation measured before or after the CA magnetisaion in an HNCA 
experiment.
  @param  Nmrx_RefExpDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmrx_ExpStep Nmrx_RefExpDimRef_FindFirstExpStep_keyval3(Nmrx_RefExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.NmrExpPrototype.RefExpDimRef.expSteps

ExpSteps 
that corresponds to RefExpDimRef. The connection to the ExpMeasurenment 
is handled via the direct link to ExpMeasurement. The expStep link 
serves to distinguish which of several ExpSteps compatible with the 
ExpMeasurement was actually to make a measurement (e.g. was the N15 
magnetisation measured before or after the CA magnetisaion in an HNCA 
experiment.
  @param  Nmrx_RefExpDimRef self
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
extern Nmrx_ExpStep Nmrx_RefExpDimRef_FindFirstExpStep_keyval4(Nmrx_RefExpDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.NmrExpPrototype.RefExpDimRef
  @param  Nmrx_RefExpDimRef self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Nmrx_RefExpDimRef_Get(Nmrx_RefExpDimRef self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrx_RefExpDimRef self
  @returns   the result
**/
extern Acco_AccessObject Nmrx_RefExpDimRef_GetAccess(Nmrx_RefExpDimRef self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Nmrx_RefExpDimRef self
  @returns   the result
**/
extern Acco_AccessObject Nmrx_RefExpDimRef_GetActiveAccess(Nmrx_RefExpDimRef self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_RefExpDimRef self
  @returns   the result
**/
extern ApiList Nmrx_RefExpDimRef_GetApplicationData(Nmrx_RefExpDimRef self);

/**
  GetByKey for ccp.nmr.NmrExpPrototype.RefExpDimRef
  @param  Nmrx_RefExpDimRef self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Nmrx_RefExpDimRef Nmrx_RefExpDimRef_GetByKey(Nmrx_RefExpDimRef self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Nmrx_RefExpDimRef self
  @returns   the result
**/
extern ApiString Nmrx_RefExpDimRef_GetClassName(Nmrx_RefExpDimRef self);

/**
  Get for ccp.nmr.NmrExpPrototype.RefExpDimRef.constantTime

Is the 
dimension constant time, variable time, or partial (harmonica type)?
  @param  Nmrx_RefExpDimRef self
  @returns   the result
**/
extern ApiString Nmrx_RefExpDimRef_GetConstantTime(Nmrx_RefExpDimRef self);

/**
  Get for 
ccp.nmr.NmrExpPrototype.RefExpDimRef.coupledIsotopeCodes

Isotope codes 
for isotopes, couplings to which are active in the dimension. Note that 
homonuclear couplings (e.g. proton couplings in a proton dimension) must 
be specified explicitly if they are to be treated as active. Except for 
constant-time experiments, homonuclear couplings are normally active, 
but they may be ignored if they are not resolved and not of interest.
  @param  Nmrx_RefExpDimRef self
  @returns   the result
**/
extern ApiList Nmrx_RefExpDimRef_GetCoupledIsotopeCodes(Nmrx_RefExpDimRef self);

/**
  getter for derived link coupledIsotopes
  @param  Nmrx_RefExpDimRef self
  @returns   the result
**/
extern ApiSet Nmrx_RefExpDimRef_GetCoupledIsotopes(Nmrx_RefExpDimRef self);

/**
  Get for 
ccp.nmr.NmrExpPrototype.RefExpDimRef.expMeasurement

ExpMeasurement to 
which the RefExpDimRef applies. The reference may be relevant for one or 
several ExpGraphs.
  @param  Nmrx_RefExpDimRef self
  @returns   the result
**/
extern Nmrx_ExpMeasurement Nmrx_RefExpDimRef_GetExpMeasurement(Nmrx_RefExpDimRef self);

/**
  Get for ccp.nmr.NmrExpPrototype.RefExpDimRef.expSteps

ExpSteps that 
corresponds to RefExpDimRef. The connection to the ExpMeasurenment is 
handled via the direct link to ExpMeasurement. The expStep link serves 
to distinguish which of several ExpSteps compatible with the 
ExpMeasurement was actually to make a measurement (e.g. was the N15 
magnetisation measured before or after the CA magnetisaion in an HNCA 
experiment.
  @param  Nmrx_RefExpDimRef self
  @returns   the result
**/
extern ApiSet Nmrx_RefExpDimRef_GetExpSteps(Nmrx_RefExpDimRef self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Nmrx_RefExpDimRef self
  @returns   the result
**/
extern ApiList Nmrx_RefExpDimRef_GetFieldNames(Nmrx_RefExpDimRef self);

/**
  GetFullKey for ccp.nmr.NmrExpPrototype.RefExpDimRef
  @param  Nmrx_RefExpDimRef self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Nmrx_RefExpDimRef_GetFullKey(Nmrx_RefExpDimRef self, ApiBoolean useGuid);

/**
  Get for ccp.nmr.NmrExpPrototype.RefExpDimRef.groupingId

groupingId 
divides RefExpDimRef from the same parent into groups - all RefExpDimRef 
with the same groupingId belong in the same group. RefExpDimRef from the 
same group can appear on the same peak - RefExpDimRef from different 
groups can not.
  @param  Nmrx_RefExpDimRef self
  @returns   the result
**/
extern ApiInteger Nmrx_RefExpDimRef_GetGroupingId(Nmrx_RefExpDimRef self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Nmrx_RefExpDimRef self
  @returns   the result
**/
extern ApiBoolean Nmrx_RefExpDimRef_GetInConstructor(Nmrx_RefExpDimRef self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Nmrx_RefExpDimRef self
  @returns   the result
**/
extern ApiBoolean Nmrx_RefExpDimRef_GetIsDeleted(Nmrx_RefExpDimRef self);

/**
  GetLocalKey for ccp.nmr.NmrExpPrototype.RefExpDimRef
  @param  Nmrx_RefExpDimRef self
  @returns  Local object key
**/
extern ApiObject Nmrx_RefExpDimRef_GetLocalKey(Nmrx_RefExpDimRef self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Nmrx_RefExpDimRef self
  @returns   the result
**/
extern ApiString Nmrx_RefExpDimRef_GetPackageName(Nmrx_RefExpDimRef self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Nmrx_RefExpDimRef self
  @returns   the result
**/
extern ApiString Nmrx_RefExpDimRef_GetPackageShortName(Nmrx_RefExpDimRef self);

/**
  Get for ccp.nmr.NmrExpPrototype.RefExpDimRef.parent

link to parent 
object - synonym for refExpDim
  @param  Nmrx_RefExpDimRef self
  @returns   the result
**/
extern Nmrx_RefExpDim Nmrx_RefExpDimRef_GetParent(Nmrx_RefExpDimRef self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Nmrx_RefExpDimRef self
  @returns   the result
**/
extern ApiString Nmrx_RefExpDimRef_GetQualifiedName(Nmrx_RefExpDimRef self);

/**
  Get for ccp.nmr.NmrExpPrototype.RefExpDimRef.refExpDim

parent link
  @param  Nmrx_RefExpDimRef self
  @returns   the result
**/
extern Nmrx_RefExpDim Nmrx_RefExpDimRef_GetRefExpDim(Nmrx_RefExpDimRef self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Nmrx_RefExpDimRef self
  @returns   the result
**/
extern Impl_MemopsRoot Nmrx_RefExpDimRef_GetRoot(Nmrx_RefExpDimRef self);

/**
  Get for ccp.nmr.NmrExpPrototype.RefExpDimRef.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmrx_RefExpDimRef self
  @returns   the result
**/
extern ApiInteger Nmrx_RefExpDimRef_GetSerial(Nmrx_RefExpDimRef self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Nmrx_RefExpDimRef self
  @returns   the result
**/
extern Impl_TopObject Nmrx_RefExpDimRef_GetTopObject(Nmrx_RefExpDimRef self);

/**
  Get for ccp.nmr.NmrExpPrototype.RefExpDimRef.validScalingFactors

List 
of valid scaling factors for RefExpDimRef. If empty, many different 
factors are allowed. The position of a peak is calculated as the sum 
over ExpDimRef scaling factors times position values (e.g. position in 
ppm).
  @param  Nmrx_RefExpDimRef self
  @returns   the result
**/
extern ApiList Nmrx_RefExpDimRef_GetValidScalingFactors(Nmrx_RefExpDimRef self);

/**
  Constructor for ccp.nmr.NmrExpPrototype.RefExpDimRef
  @param  Nmrx_RefExpDim parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmrx_RefExpDimRef Nmrx_RefExpDimRef_Init(Nmrx_RefExpDim parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.NmrExpPrototype.RefExpDimRef
  @param  Nmrx_RefExpDim parent
  @param  Nmrx_ExpMeasurement expMeasurement
  @returns  the new object
**/
extern Nmrx_RefExpDimRef Nmrx_RefExpDimRef_Init_reqd(Nmrx_RefExpDim parent, Nmrx_ExpMeasurement expMeasurement);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_RefExpDimRef self
  @param  Impl_ApplicationData value
**/
extern void *Nmrx_RefExpDimRef_RemoveApplicationData(Nmrx_RefExpDimRef self, Impl_ApplicationData value);

/**
  Remove for 
ccp.nmr.NmrExpPrototype.RefExpDimRef.coupledIsotopeCodes

Isotope codes 
for isotopes, couplings to which are active in the dimension. Note that 
homonuclear couplings (e.g. proton couplings in a proton dimension) must 
be specified explicitly if they are to be treated as active. Except for 
constant-time experiments, homonuclear couplings are normally active, 
but they may be ignored if they are not resolved and not of interest.
  @param  Nmrx_RefExpDimRef self
  @param  ApiString value
**/
extern void *Nmrx_RefExpDimRef_RemoveCoupledIsotopeCode(Nmrx_RefExpDimRef self, ApiString value);

/**
  Remove for ccp.nmr.NmrExpPrototype.RefExpDimRef.expSteps

ExpSteps that 
corresponds to RefExpDimRef. The connection to the ExpMeasurenment is 
handled via the direct link to ExpMeasurement. The expStep link serves 
to distinguish which of several ExpSteps compatible with the 
ExpMeasurement was actually to make a measurement (e.g. was the N15 
magnetisation measured before or after the CA magnetisaion in an HNCA 
experiment.
  @param  Nmrx_RefExpDimRef self
  @param  Nmrx_ExpStep value
**/
extern void *Nmrx_RefExpDimRef_RemoveExpStep(Nmrx_RefExpDimRef self, Nmrx_ExpStep value);

/**
  Remove for 
ccp.nmr.NmrExpPrototype.RefExpDimRef.validScalingFactors

List of valid 
scaling factors for RefExpDimRef. If empty, many different factors are 
allowed. The position of a peak is calculated as the sum over ExpDimRef 
scaling factors times position values (e.g. position in ppm).
  @param  Nmrx_RefExpDimRef self
  @param  ApiFloat value
**/
extern void *Nmrx_RefExpDimRef_RemoveValidScalingFactor(Nmrx_RefExpDimRef self, ApiFloat value);

/**
  SetAttr for ccp.nmr.NmrExpPrototype.RefExpDimRef
  @param  Nmrx_RefExpDimRef self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Nmrx_RefExpDimRef_Set(Nmrx_RefExpDimRef self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrx_RefExpDimRef self
  @param  Acco_AccessObject value
**/
extern void *Nmrx_RefExpDimRef_SetAccess(Nmrx_RefExpDimRef self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_RefExpDimRef self
  @param  ApiList values
**/
extern void *Nmrx_RefExpDimRef_SetApplicationData(Nmrx_RefExpDimRef self, ApiList values);

/**
  Set for ccp.nmr.NmrExpPrototype.RefExpDimRef.constantTime

Is the 
dimension constant time, variable time, or partial (harmonica type)?
  @param  Nmrx_RefExpDimRef self
  @param  ApiString value
**/
extern void *Nmrx_RefExpDimRef_SetConstantTime(Nmrx_RefExpDimRef self, ApiString value);

/**
  Set for 
ccp.nmr.NmrExpPrototype.RefExpDimRef.coupledIsotopeCodes

Isotope codes 
for isotopes, couplings to which are active in the dimension. Note that 
homonuclear couplings (e.g. proton couplings in a proton dimension) must 
be specified explicitly if they are to be treated as active. Except for 
constant-time experiments, homonuclear couplings are normally active, 
but they may be ignored if they are not resolved and not of interest.
  @param  Nmrx_RefExpDimRef self
  @param  ApiList values
**/
extern void *Nmrx_RefExpDimRef_SetCoupledIsotopeCodes(Nmrx_RefExpDimRef self, ApiList values);

/**
  Set for 
ccp.nmr.NmrExpPrototype.RefExpDimRef.expMeasurement

ExpMeasurement to 
which the RefExpDimRef applies. The reference may be relevant for one or 
several ExpGraphs.
  @param  Nmrx_RefExpDimRef self
  @param  Nmrx_ExpMeasurement value
**/
extern void *Nmrx_RefExpDimRef_SetExpMeasurement(Nmrx_RefExpDimRef self, Nmrx_ExpMeasurement value);

/**
  Set for ccp.nmr.NmrExpPrototype.RefExpDimRef.expSteps

ExpSteps that 
corresponds to RefExpDimRef. The connection to the ExpMeasurenment is 
handled via the direct link to ExpMeasurement. The expStep link serves 
to distinguish which of several ExpSteps compatible with the 
ExpMeasurement was actually to make a measurement (e.g. was the N15 
magnetisation measured before or after the CA magnetisaion in an HNCA 
experiment.
  @param  Nmrx_RefExpDimRef self
  @param  ApiSet values
**/
extern void *Nmrx_RefExpDimRef_SetExpSteps(Nmrx_RefExpDimRef self, ApiSet values);

/**
  Set for ccp.nmr.NmrExpPrototype.RefExpDimRef.groupingId

groupingId 
divides RefExpDimRef from the same parent into groups - all RefExpDimRef 
with the same groupingId belong in the same group. RefExpDimRef from the 
same group can appear on the same peak - RefExpDimRef from different 
groups can not.
  @param  Nmrx_RefExpDimRef self
  @param  ApiInteger value
**/
extern void *Nmrx_RefExpDimRef_SetGroupingId(Nmrx_RefExpDimRef self, ApiInteger value);

/**
  Set for ccp.nmr.NmrExpPrototype.RefExpDimRef.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmrx_RefExpDimRef self
  @param  ApiInteger value
**/
extern void *Nmrx_RefExpDimRef_SetSerial(Nmrx_RefExpDimRef self, ApiInteger value);

/**
  Set for ccp.nmr.NmrExpPrototype.RefExpDimRef.validScalingFactors

List 
of valid scaling factors for RefExpDimRef. If empty, many different 
factors are allowed. The position of a peak is calculated as the sum 
over ExpDimRef scaling factors times position values (e.g. position in 
ppm).
  @param  Nmrx_RefExpDimRef self
  @param  ApiList values
**/
extern void *Nmrx_RefExpDimRef_SetValidScalingFactors(Nmrx_RefExpDimRef self, ApiList values);

/**
  Sorted for 
ccp.nmr.NmrExpPrototype.RefExpDimRef.coupledIsotopes

Isotopes couplings 
to which are active in a given dimension.
  @param  Nmrx_RefExpDimRef self
  @returns   the result
**/
extern ApiList Nmrx_RefExpDimRef_SortedCoupledIsotopes(Nmrx_RefExpDimRef self);

/**
  Sorted for ccp.nmr.NmrExpPrototype.RefExpDimRef.expSteps

ExpSteps that 
corresponds to RefExpDimRef. The connection to the ExpMeasurenment is 
handled via the direct link to ExpMeasurement. The expStep link serves 
to distinguish which of several ExpSteps compatible with the 
ExpMeasurement was actually to make a measurement (e.g. was the N15 
magnetisation measured before or after the CA magnetisaion in an HNCA 
experiment.
  @param  Nmrx_RefExpDimRef self
  @returns   the result
**/
extern ApiList Nmrx_RefExpDimRef_SortedExpSteps(Nmrx_RefExpDimRef self);

#endif /* __incl__ccp_api_nmr_NmrExpPrototype_RefExpDimRef_h__ */
