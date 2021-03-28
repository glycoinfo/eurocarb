/* Filename = methods.h */
/* Prefix = ME */

#ifndef _METHODS_H
#define _METHODS_H

#include "node.h"

/* Defines standard actions for lists */
struct ME_Method {
		void * (*Create)( /* name */ );	
		void (*Clear)( /* node */ );
		void * (*Remove)( /*node */ );
		void (*List)( /* node */ );
		void (*Print)( /* node */ );
		void (*Save)( /* node */ );
	      };

/* May benefit from inclusion of */
/* 1) pointer to default structure - to copy when initializing */
/* 2) pointer to list (where applicable) */

void ME_ClearNode(struct ME_Method *method, struct Node *node);
void ME_RemoveNode(struct ME_Method *method, struct Node *node);
void ME_EmptyList(struct ME_Method *method, struct List *list);
void ME_PrintNode(struct ME_Method *method, struct Node *node);
void ME_PrintList(struct ME_Method *method, struct List *list);
void *ME_CreateNode(struct ME_Method *method, struct List *list, char *name);
void ME_SaveNode(struct ME_Method *method, struct Node *node);
void ME_SaveList(struct ME_Method *method, struct List *list);



#endif
