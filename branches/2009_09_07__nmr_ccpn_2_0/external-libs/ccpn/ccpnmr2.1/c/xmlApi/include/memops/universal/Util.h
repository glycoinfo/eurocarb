#ifndef __incl__memops_universal_Util_h__
#define __incl__memops_universal_Util_h__

/* stringCompose functions compose dst string out of src strings */
/* stringConcat functions concatenate src strings onto existing dst string */
/* so real difference is that compose functions first set *dst = 0 */
/* in ... forms list of srcs must be ended with a NULL */
/* on output dst guaranteed to be 0 terminated */

extern void stringCompose(int maxlen, char *dst, char *src, ...);

extern void stringCompose1(int maxlen, char *dst, char *src);

extern void stringCompose2(int maxlen, char *dst, char *src1, char *src2);

extern void stringCompose3(int maxlen, char *dst, char *src1, char *src2, char *src3);

extern void stringCompose4(int maxlen, char *dst, char *src1, char *src2, char *src3, char *src4);

extern void stringCompose5(int maxlen, char *dst, char *src1, char *src2, char *src3, char *src4, char *src5);

extern void stringConcat(int maxlen, char *dst, char *src, ...);

extern void stringConcat1(int maxlen, char *dst, char *src);

extern void stringConcat2(int maxlen, char *dst, char *src1, char *src2);

extern void stringConcat3(int maxlen, char *dst, char *src1, char *src2, char *src3);

extern void stringConcat4(int maxlen, char *dst, char *src1, char *src2, char *src3, char *src4);

extern void stringConcat5(int maxlen, char *dst, char *src1, char *src2, char *src3, char *src4, char *src5);

#endif /* __incl__memops_universal_Util_h__ */
