#ifndef __incl__memops_general_Util_h__
#define __incl__memops_general_Util_h__

#include "ccp_types.h"

extern Impl_MemopsRoot newCcpnProject(char *projectName);

extern int getGlobalObjectCount();

// returns the number of items garbage collected
extern int garbageCollect();

// call Python module.function with specified args
// moduleName must be on PYTHONPATH
// args must be NULL-terminated
extern ApiObject callModuleFunction(char *moduleName, char *functionName, ApiObject args[]);

// call Python module.function with specified args and key/value pairs
// moduleName must be on PYTHONPATH
// args, keywords and values must be NULL-terminated
// keywords must be of same length as values
extern ApiObject callModuleFunctionWithKeywords(char *moduleName, char *functionName,
			ApiObject args[], char *keywords[], ApiObject values[]);

extern ApiMap getObjectDict(ApiObject object);

#endif /* __incl__memops_general_Util_h__ */
