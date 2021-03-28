#include "memops/universal/Util.h"

#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

static void concat(int maxlen, char *dst, char *src, va_list va)
{
   dst[maxlen-1] = 0;

   while (src)
   {
      strncat(dst, src, maxlen-strlen(dst)-1);
      src = va_arg(va, char *);
   }
}

void stringCompose(int maxlen, char *dst, char *src, ...)
{
  va_list va;

  *dst = 0;

  va_start(va, src);

  concat(maxlen, dst, src, va);

  va_end(va);
}

void stringCompose1(int maxlen, char *dst, char *src)
{
  stringCompose(maxlen, dst, src, NULL);
}

void stringCompose2(int maxlen, char *dst, char *src1, char *src2)
{
  stringCompose(maxlen, dst, src1, src2, NULL);
}

void stringCompose3(int maxlen, char *dst, char *src1, char *src2, char *src3)
{
  stringCompose(maxlen, dst, src1, src2, src3, NULL);
}

void stringCompose4(int maxlen, char *dst, char *src1, char *src2, char *src3, char *src4)
{
  stringCompose(maxlen, dst, src1, src2, src3, src4, NULL);
}

void stringCompose5(int maxlen, char *dst, char *src1, char *src2, char *src3, char *src4, char *src5)
{
  stringCompose(maxlen, dst, src1, src2, src3, src4, src5, NULL);
}

void stringConcat(int maxlen, char *dst, char *src, ...)
{
  va_list va;

  va_start(va, src);

  concat(maxlen, dst, src, va);

  va_end(va);
}

void stringConcat1(int maxlen, char *dst, char *src)
{
  stringConcat(maxlen, dst, src, NULL);
}

void stringConcat2(int maxlen, char *dst, char *src1, char *src2)
{
  stringConcat(maxlen, dst, src1, src2, NULL);
}

void stringConcat3(int maxlen, char *dst, char *src1, char *src2, char *src3)
{
  stringConcat(maxlen, dst, src1, src2, src3, NULL);
}

void stringConcat4(int maxlen, char *dst, char *src1, char *src2, char *src3, char *src4)
{
  stringConcat(maxlen, dst, src1, src2, src3, src4, NULL);
}

void stringConcat5(int maxlen, char *dst, char *src1, char *src2, char *src3, char *src4, char *src5)
{
  stringConcat(maxlen, dst, src1, src2, src3, src4, src5, NULL);
}
