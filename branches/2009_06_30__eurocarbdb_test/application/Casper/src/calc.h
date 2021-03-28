/* Filename = calc.h */
/* Prefix = CA */

#include "build.h"

/* CA_Mode - defines level of accuracy in calculations: */
#ifndef _CALC_H
#define _CALC_H

#define	CA_DISACCH	0x00	/* No branchpoint corrections */
#define CA_TRISACCH	0x01	/* Branchpoint corections */
#define CA_DEFAULT	0x02	/* Defaults enabled */
#define CA_DOUBLE	0x04	/* 'Double'-defaulting enabled */
#define CA_VERBOSE	0x10	/* Print all bonds and delta-sets */

int CA_SimBranch(struct BU_Unit *lo, int cent_lo, struct BU_Unit *hi,
		 int cent_hi, struct BU_Unit *cent);
extern unsigned char CA_Mode;
int CA_SimDisacch(struct BU_Unit *unit1, char pos1,
			 char pos2, struct BU_Unit *unit2);

short CA_CalcAllGlycosylations(struct BU_Struct *str);

#endif
