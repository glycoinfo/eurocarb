#include "ccp/general/Io.h"

#include <stdarg.h>
#include <stdio.h>

#include "ccp.h"
#include "memops/general/Io.h"
#include "memops/universal/Constants.h"
#include "memops/universal/Io.h"
#include "memops/universal/Util.h"

static char dataPath[CCP_PATH_MAX] = "";

static char *getDataPath()
{
  if (!*dataPath)
    joinPath2(CCP_PATH_MAX, dataPath, getTopDirectory(), "data");

  return dataPath;
}

