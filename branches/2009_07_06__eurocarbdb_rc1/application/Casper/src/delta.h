/* Filename = delta.h */
/* Prefix = DE */
/* Structures related to disaccharide fragments */

#ifndef _DELTA_H
#define _DELTA_H

#include "type.h"
#include "residue.h"
#include "shifts.h"

#define	DE_INFO_SIZE	50		/* Length of info */
#define DE_REDUCING	0		/* Reducing end */
#define DE_NONRED	1		/* Non-reducing end */

struct DE_Delta {
	struct Node Node;		/* Link */
	char Info[DE_INFO_SIZE];		/* Comment */
	struct DE_Delta *Source;	/* is this copied from another */
					/* delta set ? */
	struct SH_Shifts Shifts[2];	/* chemical shifts */
	struct RE_Residue *Residue[2];	/* Residues */
	float Error;			/* Accuracy */
int Flags;	/* Various flags */
/* This is not necessary for finding a delta set but is */
/* usefull for printing and very tricky to find out by */
/* other means */
	int nrpos;			/* Position in non-reducing */
	};

/* structure that defines a unique delta set */
/* created by string->delta */
/* used by DE_FindDelta()?? */
struct DE_DimerDesc {
	struct RE_Residue *Residue[2];	/* residues */
	int Atom[2];			/* linkage positions */
	};


/* Flags */
#define DE_NONE		0x0000
#define DE_PREDICTED	0x0001
#define DE_EXTRACTED	0x0002

extern struct ME_Method DeltaMethod;
void *DE_CreateDelta(char *name);
void DE_ClearDelta(struct DE_Delta *delta);
void DE_ListDelta(struct DE_Delta *delta);
void DE_PrintDelta(struct DE_Delta *delta);
void DE_SaveDelta(struct DE_Delta *delta);
struct DE_Delta *DE_DupDelta(struct RE_Residue *nres, unsigned char npos,
			     unsigned char rpos, struct RE_Residue *rres,
			     struct DE_Delta *source);
struct DE_Delta *DE_FindDelta(struct RE_Residue *nres, unsigned char npos,
			      unsigned char rpos, struct RE_Residue *rres);
int DE_SetDelta();
int DE_Shift();
int DE_Extract();
int DE_Info();
int DE_Error();
int DE_ReadDelta(struct DE_DimerDesc *desc, char *string);
int DE_Manipulate(int action);

int DE_Add();
int DE_Sub();
int DE_Copy();
int DE_Correct();

#define DE_NOEXTRACT	0x00
#define DE_EXTRACT	0x01

#endif
