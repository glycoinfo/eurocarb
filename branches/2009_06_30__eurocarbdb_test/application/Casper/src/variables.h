/* Filename = Variables.h */
/* Prefix = VA */

#ifndef _VARIABLES_H
#define _VARIABLES_H

#include "expr.h"
#include "methods.h"
#include "node.h"

/* Original definition */
struct VA_Variable {
		struct Node Node;	/* Link and name */
		struct Value Value;	/* Actual value */
		};

void *VA_CreateVariable(char *name);
void VA_ClearVariable(struct VA_Variable *variable);
void VA_PrintVariable(struct VA_Variable *variable);
void VA_SaveVariable(struct VA_Variable *variable);
void *VA_FreeVariable(struct VA_Variable *variable);

int VA_SetVariable();
int VA_Pop();
int VA_If();

extern struct List VariableList;
extern struct ME_Method VariableMethod;

#endif
