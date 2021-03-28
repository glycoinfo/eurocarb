
#ifndef _GL_H
#define _GL_H

#include "node.h"

struct GL_Info {
  struct Node Node;
};

void GL_printstr(struct BU_Struct *structure);
int GL_build_reslist(struct BU_Struct *structure, struct List *GL_reslist, 
		     struct List *GL_linklist, char *repetition);
void GL_FindUnit(struct BU_Unit *unit, struct List *GL_reslist, 
		 struct List *GL_linklist, int *rescnt, int *linkcnt,
		 char *repetition);
void GL_UnittoList(struct BU_Unit *unit, struct List *GL_reslist,
		   struct List *GL_linklist, int *rescnt, int *linkcnt);
void GL_SubsttoList(struct BU_Unit *unit, struct List *GL_reslist,
		    struct List *GL_linklist, int *rescnt, int *linkcnt);
int GL_PrintAglycan(struct BU_Struct *structure);

int GL_GlycoInput();

extern struct ME_Method GL_ResMethod;
extern struct ME_Method GL_LinkMethod;


#endif
