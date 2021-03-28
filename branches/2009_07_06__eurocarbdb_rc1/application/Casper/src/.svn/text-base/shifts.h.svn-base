/* Filename = shifts.h */
/* Prefix = SH */
/* chemical shift manipulation */

#ifndef _SHIFTS_H
#define _SHIFTS_H

#include "type.h"

/* this structure contains shift data for mono- */
/* di- and tri-mers */

struct SH_Shifts {
	struct TY_Type *Type;		/* Type of residue */
	float C[TY_MAX_CARBON];		/* 13C base shifts */
	float H[TY_MAX_CARBON][2];	/* 1H base shifts */
};

struct BU_Unit;

void SH_PrintShifts(struct SH_Shifts *shifts, short printneg);
void SH_PrintShiftsWithSubstituents(struct BU_Unit *unit);
void SH_SaveShifts(struct SH_Shifts *shifts);
int SH_Adjust(struct SH_Shifts *dest, float c_off, float h_off);
int SH_RawManipulate(int action, struct SH_Shifts *source, struct SH_Shifts *dest);
int SH_Manipulate(int action, struct SH_Shifts *source, struct SH_Shifts *dest);

#define SH_SHIFT_COPY	'c'
#define SH_SHIFT_ADD	'a'
#define SH_SHIFT_SUB	's'

#define SH_COPY(src, dest)	( SH_Manipulate(SH_SHIFT_COPY,src,dest) )
#define SH_ADD(src, dest)	( SH_Manipulate(SH_SHIFT_ADD,src,dest) )
#define SH_SUB(src, dest)	( SH_Manipulate(SH_SHIFT_SUB,src,dest) )

#define SH_RAW_COPY(src, dest)	( SH_RawManipulate(SH_SHIFT_COPY,src,dest) )
#define SH_RAW_ADD(src, dest)	( SH_RawManipulate(SH_SHIFT_ADD,src,dest) )
#define SH_RAW_SUB(src, dest)	( SH_RawManipulate(SH_SHIFT_SUB,src,dest) )
#endif
