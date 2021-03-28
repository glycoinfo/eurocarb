#ifndef __incl__memops_universal_Io_h__
#define __incl__memops_universal_Io_h__

/* returned value not owned by caller, so should not be freed */
extern char *getTopDirectory();

/* input: NULL-terminated list of paths */
/* output: allocated joined path (caller responsible for memory) */
extern char *joinPathAlloc(char *path, ...);

/* variants with fixed number of arguments */
extern char *joinPathAlloc2(char *path1, char *path2);
extern char *joinPathAlloc3(char *path1, char *path2, char *path3);
extern char *joinPathAlloc4(char *path1, char *path2, char *path3, char *path4);

/* input: maxlen of dst, dst (must be allocated) and NULL-terminated list of paths */
/* output: dst is filled in with joined path (caller responsible for memory) */
extern void joinPath(int maxlen, char *dst, char *path, ...);

/* variants with fixed number of arguments */
extern void joinPath2(int maxlen, char *dst, char *path1, char *path2);
extern void joinPath3(int maxlen, char *dst, char *path1, char *path2, char *path3);
extern void joinPath4(int maxlen, char *dst, char *path1, char *path2, char *path3, char *path4);

/* determine dirname of path (similar to Python function) */
/* dst must be allocated by caller */
extern void dirname(char *dst, char *path);

/* determine basename of path (similar to Python function) */
/* dst must be allocated by caller */
extern void basename(char *dst, char *path);

#endif /* __incl__memops_universal_Io_h__ */
