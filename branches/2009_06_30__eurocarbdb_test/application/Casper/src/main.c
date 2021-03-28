#include <stdlib.h>
#include "parser.h"
#include "commands.h"
#include "methods.h"
#include "residue.h"
#include "variables.h"
#include "type.h"
#include "rule.h"
#include "ccpn.h"
#include "memops/general/Util.h"

#include "ccp.h"


#define STARTUP	"load 'casper.rc'"

/* Not nice to have these global, but it makes them a lot more manageable */
Impl_MemopsRoot Global_CcpnProject;
Nmr_NmrProject Global_NmrProject;
int projectValid=1;

int main(int argc, char *argv[])
{
  int status;
  char *cmd_str=STARTUP;

  Global_NmrProject=0;
  Global_CcpnProject=0;

  if (argc == 2)
    {
      if(!CC_LoadProject(&Global_CcpnProject, argv[1]))
	{
	  printf("Could not open CCPN project file!\n");
	  return(EXIT_FAILURE);
	}
    }
  status=PA_Parse((FILE *)cmd_str, stdout, NULL, /*Global*/MainCmds);

  ME_EmptyList(&ResidueMethod, &ResidueList);
  /*  ME_EmptyList(&VariableMethod, &VariableList);*/
  ME_EmptyList(&TypeMethod, &TypeList);
  ME_EmptyList(&RU_RuleMethod, &RuleList);

  if(Global_NmrProject)
    {
      ApiObject_Free(Global_NmrProject);
    }
  if(Global_CcpnProject)
    {
      ApiObject_Free(Global_CcpnProject);
    }

  if (status==PA_SUCCESS)
    {
      return(EXIT_SUCCESS);
    }
  return(EXIT_FAILURE);
}
