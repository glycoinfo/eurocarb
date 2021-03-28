/*
======================COPYRIGHT/LICENSE START==========================

fit.h: Part of the CcpNmr Analysis program

Copyright (C) 2005 Wayne Boucher and Tim Stevens (University of Cambridge)

=======================================================================

This file contains reserved and/or proprietary information
belonging to the author and/or organisation holding the copyright.
It may not be used, distributed, modified, transmitted, stored,
or in any way accessed, except by members or employees of the CCPN,
and by these people only until 31 December 2005 and in accordance with
the guidelines of the CCPN.
 
A copy of this license can be found in ../../../license/CCPN.license.

======================COPYRIGHT/LICENSE END============================

for further information, please contact :

- CCPN website (http://www.ccpn.ac.uk/)

- email: ccpn@bioc.cam.ac.uk

- contact the authors: wb104@bioc.cam.ac.uk, tjs23@cam.ac.uk
=======================================================================

If you are using this software for academic purposes, we suggest
quoting the following references:

===========================REFERENCE START=============================
R. Fogh, J. Ionides, E. Ulrich, W. Boucher, W. Vranken, J.P. Linge, M.
Habeck, W. Rieping, T.N. Bhat, J. Westbrook, K. Henrick, G. Gilliland,
H. Berman, J. Thornton, M. Nilges, J. Markley and E. Laue (2002). The
CCPN project: An interim report on a data model for the NMR community
(Progress report). Nature Struct. Biol. 9, 416-418.

Wim F. Vranken, Wayne Boucher, Tim J. Stevens, Rasmus
H. Fogh, Anne Pajon, Miguel Llinas, Eldon L. Ulrich, John L. Markley, John
Ionides and Ernest D. Laue (2005). The CCPN Data Model for NMR Spectroscopy:
Development of a Software Pipeline. Proteins 59, 687 - 696.

===========================REFERENCE END===============================

*/
#ifndef _incl_fit
#define _incl_fit

#include "macros.h"
#include "types.h"

static CcpnString fit_methods[] =
{
#define  NO_FIT			0
	"no fit",

#define  LINEAR_FIT		1
	"Ax + B",

#define  LOG_LINEAR_FIT		2
	"log (A exp(-Bx))",

#define  NONLINEAR2_FIT		3
	"A exp(-Bx)",

#define  NONLINEAR3_FIT		4
	"A exp(-Bx) + C",

#define  SLOW_EXCHANGE_FIT	5
	"A (1-sin(Bx)/Bx) + C",

#define  LANGMUIR_FIT		6
	"Ax / (1+Ax)",

#define  KD_SHIFT_FIT		7
/* was below until 8 Aug 2007; re-instated as an alternative 2 Jun 2008
	"A ((B+x)-sqrt((B+x)^2 - 4x))",
*/
	"A ((1+B/4x)-sqrt((1+B/4x)^2 - 1) - C)",

#define  INVERSION_RECOVERY_FIT	8
	"A (1/2 - exp(-Bx))",

#define  KD_ALT_SHIFT_FIT	9
	"A ((B+x)-sqrt((B+x)^2 - 4x))",

#define  NFIT_METHODS		10
	""
};

#define  FIT_STRUCT \
    int method; \
    float noise;

typedef struct Fit_method
{
    FIT_STRUCT
}   *Fit_method;

extern Fit_method new_fit(int method, float noise);

extern void delete_fit(Fit_method fit);

extern CcpnStatus run_fit(Fit_method fit, int n, float *x, float *y, 
		float *params_fit, float *params_dev,
		float *y_fit, float *chisq, CcpnString error_msg);

extern CcpnStatus run_fit_data(Fit_method fit, int niter,
		int n, float *x, float *y, float *x_dev, float *y_dev,
		float *xw, float *yw, float *params_fit, float *params_avg,
		float *params_dev, float *y_fit, float *chisq, CcpnString error_msg);

extern CcpnStatus bootstrap_fit_data(Fit_method fit, int niter,
		int n, float *x, float *y,
		float *xw, float *yw, float *params_fit, float *params_avg,
		float *params_dev, float *y_fit, float *chisq, CcpnString error_msg);

extern int get_method_nparams(int method);

#endif /* _incl_fit */
