#ifndef _RULE_H
#define _RULE_H

#include "node.h"
#include "build.h"
#include "setup.h"
#include "residue.h"

extern struct ME_Method RU_RuleMethod;
extern struct ME_Method RU_PatternMethod;
extern struct ME_Method RU_ResidueMethod;

extern struct List RuleList;

struct RU_Rule {
  struct Node Node;
  struct List Patterns;
  struct List Residues;
};

struct RU_Pattern {
  struct Node Node;
  char regexp[256];
};

struct RU_Residue {
  struct Node Node;
  struct RE_Residue *Residue;
};

void *RU_CreateRule(char *name);
void RU_ClearRule(struct RU_Rule *rule);
void *RU_FreeRule(struct RU_Rule *rule);
void RU_ListRule(struct RU_Rule *rule);
void RU_PrintRule(struct RU_Rule *rule);
void RU_SaveRule(struct RU_Rule *rule);
void *RU_CreatePattern(char *name);
void RU_ClearPattern(struct RU_Pattern *pattern);
void RU_PrintPattern(struct RU_Pattern *pattern);
void *RU_CreateResidue(char *name);
void RU_ClearResidue(struct RU_Residue *res);
void RU_PrintResidue(struct RU_Residue *res);
int RU_AddRule();
int RU_AddPattern();
int RU_AddResidue();
int RU_MatchRules(struct SE_Simulation *sim, struct BU_Struct *str);
char RU_Compare(const char *pattern, const char *str);
int RU_NextResidueFromRedEnd(char *pattern, char *residue, char *linkages);

#endif
