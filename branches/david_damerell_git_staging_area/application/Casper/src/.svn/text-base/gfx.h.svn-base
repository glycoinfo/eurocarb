/* fn:s for display of structures */

#ifndef _GFX_H
#define _GFX_H

#include "build.h"

#define GFX_NB_FAIL	(-1)
#define GFX_NB_FIRST	(-1)
/* finds bonds */

int GFX_CntSubst(struct BU_Unit *unit);
int GFX_CntUnits(struct BU_Struct *structure);
struct BU_Unit *GFX_FindReducing(struct BU_Struct *structure);
int GFX_IsBackbone(struct BU_Unit *unit);
int GFX_RankUnits(struct BU_Unit *l_unit, struct BU_Unit *r_unit);
struct BU_Unit *GFX_FindBackbone(struct BU_Struct *structure);
int GFX_NextBond(struct BU_Unit *unit,int pos);
int GFX_BranchLen(struct BU_Unit *unit);
struct BU_Unit *GFX_FindLongTerm(struct BU_Unit *unit);
void GFX_DoAUnit(struct BU_Unit *unit, char *str, int noSidechain, int reducing);
void GFX_DoBackUnit(struct BU_Unit *unit, char *str, int noSidechain);
void GFX_StructGfx(struct BU_Struct *structure, char *str, int noSidechain);
void GFX_RenameAUnit(struct BU_Unit *unit, int reducing);
void GFX_RenameBackUnit(struct BU_Unit *unit);
void GFX_RenameUnits(struct BU_Struct *structure);
void GFX_RenumberAUnit(struct BU_Unit *unit, char *string);
int GFX_Renumber(/*structure*/);
int GFX_PrintUnit(struct BU_Unit *unit, char *str, int last, int inShiftList);

#endif
