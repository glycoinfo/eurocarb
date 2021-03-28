#include "memops/universal/Io.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "memops/universal/Constants.h"

static char topDirectory[CCP_PATH_MAX] = "";

static char dirSepChar = '/';
static char dirSep[] = "/";

char *getTopDirectory()
{
  char *top = getenv("CCPNMR_TOP_DIR");

  if (!top)
    printf("Warning: need to set CCPNMR_TOP_DIR (to /whatever_dir_it_is/ccpnmr/ccpnmrX.Y, if using the standard release of version X.Y)\n");

  stringCompose1(CCP_PATH_MAX, topDirectory, top);
  
  return topDirectory;
}

static void join(int maxlen, char *dst, char *path, va_list va)
{
  int n;

  if (dst != path)
    *dst = 0;

  for (n = 0; path; n++)
  {
    if (n > 0)
      stringConcat1(maxlen, dst, dirSep);

    if (dst != path)
      stringConcat1(maxlen, dst, path);

    path = va_arg(va, char *);
  }
}

char *joinPathAlloc(char *path, ...)
{
  int n, maxlen;
  va_list va;
  char *dst = NULL, *p = path;

  va_start(va, path);

  for (maxlen = n = 0; p; n++)
  {
    if (n > 0)
      maxlen += strlen(dirSep);

    maxlen += strlen(p);

    p = va_arg(va, char *);
  }

  va_end(va);

  maxlen++; /* zero termination */
  dst = (char *) malloc(maxlen);

  if (dst)
  {
    va_start(va, path);

    join(maxlen, dst, path, va);

    va_end(va);
  }

  return dst;
}

char *joinPathAlloc2(char *path1, char *path2)
{
  return joinPathAlloc(path1, path2, NULL);
}

char *joinPathAlloc3(char *path1, char *path2, char *path3)
{
  return joinPathAlloc(path1, path2, path3, NULL);
}

char *joinPathAlloc4(char *path1, char *path2, char *path3, char *path4)
{
  return joinPathAlloc(path1, path2, path3, path4, NULL);
}

void joinPath(int maxlen, char *dst, char *path, ...)
{
  int n;
  va_list va;

  va_start(va, path);

  join(maxlen, dst, path, va);

  va_end(va);
}

void joinPath2(int maxlen, char *dst, char *path1, char *path2)
{
  joinPath(maxlen, dst, path1, path2, NULL);
}

void joinPath3(int maxlen, char *dst, char *path1, char *path2, char *path3)
{
  joinPath(maxlen, dst, path1, path2, path3, NULL);
}

void joinPath4(int maxlen, char *dst, char *path1, char *path2, char *path3, char *path4)
{
  joinPath(maxlen, dst, path1, path2, path3, path4, NULL);
}

void dirname(char *dst, char *path)
{
  char *ptr;

  strcpy(dst, path);
  ptr = strrchr(dst, dirSepChar);
  if (ptr)
    *ptr = 0;
}

void basename(char *dst, char *path)
{
  int i, n;
  char *ptr;

  ptr = strrchr(path, dirSepChar);
  if (ptr)
    n = 1 + (int) (ptr - path);
  else
    n = 0;

  ptr = dst;
  for (i = n; i < strlen(path); i++)
    *ptr++ = path[i];

  *ptr = 0;
}
