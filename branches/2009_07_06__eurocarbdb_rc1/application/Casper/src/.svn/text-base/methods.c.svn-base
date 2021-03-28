/* Filename = methods.c */
/* Prefix = ME */
/* Actions on lists using the method-structure */

#include "node.h"
#include "methods.h"
#include <stdio.h>

void ME_ClearNode(struct ME_Method *method, struct Node *node)
{
  if (method->Clear!=NULL)
    method->Clear(node);
}

void ME_RemoveNode(struct ME_Method *method, struct Node *node)
{
  if(node!=NULL)
    {
      if (method->Remove!=NULL)
	method->Remove(node);
      else
	FreeNode(node);
    }
}

void ME_EmptyList(struct ME_Method *method, struct List *list)
{
  while( list->Head.Succ->Succ!=NULL )
    ME_RemoveNode(method,list->Head.Succ);
}

void ME_PrintNode(struct ME_Method *method, struct Node *node)
{
  if (method->Print!=NULL) method->Print(node);
}

void ME_PrintList(struct ME_Method *method, struct List *list)
{
  struct Node *node;
  if (method->List!=NULL)
    for (node=list->Head.Succ; node->Succ!=NULL; node=node->Succ)
      method->List(node);
  else
    for (node=list->Head.Succ; node->Succ!=NULL; node=node->Succ)
      printf("%s\n",node->Name);
}

void *ME_CreateNode(struct ME_Method *method, struct List *list, char *name)
{
  struct Node *node;
  if (method->Create==NULL) return(NULL);
  if (name!=NULL)		/* Search only if not null-name */
    {
      node=FindNode((struct Node *)list,name);
      if (node!=NULL) return(node);		/* Does exist */
    };
  node=method->Create(name);
  if (node==NULL) return(NULL);
  ME_ClearNode(method,node);
  AddNode( list->Tail.Pred,node );
  return(node);
}

void ME_SaveNode(struct ME_Method *method, struct Node *node)
{
  if (method->Save!=NULL) method->Save(node);
}

void ME_SaveList(struct ME_Method *method, struct List *list)
{
  struct Node *node;
  if (method->Save!=NULL)
    for (node=list->Head.Succ; node->Succ!=NULL; node=node->Succ)
      method->Save(node);
}
