/* Headerfile for exrdtok.c */

#include "extypes.h"
#include <ctype.h>
#include <math.h>

#define CHAR_QUOTE		'\''
/* #define DBL_QUOTE_ESCAPE */
#define DECIMAL_SEP		'.'
#define	PA_QUOTE	'\''	/* Quote character */
#define PA_ESCAPE	'\\'	/* Escape character */
#define PA_ESC_NL	'n'	/* Esc for newline */
#define PA_ESC_TAB	't'	/* Esc for tab */

int ReadSign(char *string[]);
long int ReadInteger(char *string[], int base);
double ReadFraction(char *string[], int base);
double ReadFloat(char *string[], int base);
void ReadToken(char *string[], char buffer[]);
void ReadString(char *string[], char buffer[], char quote);
