/*
======================COPYRIGHT/LICENSE START==========================

nonlinear_model.c: Part of the CcpNmr Analysis program

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
#include "nonlinear_model.h"

#include "gauss_jordan.h"

/* Idea for code comes from Numerical Recipes, pp 521 - 528. */

/* nonlinear_model uses Levenberg-Marquardt method to try and fit */
/* a nonlinear model (coefficients, a) for a set of data points (x, y). */

/* x[n], y[n] are the data points to be fitted. */
/* w[n] is the weight for the contribution to chisq of the particular point. */
/* a[m] are the coefficients of the nonlinear model. */
/* After the FINAL_STAGE, covar[m][m] is the covariance matrix, */
/* 	and alpha[m][m] is the curvature matrix. */
/* lambda is a step size and chisq the chi-squared. */
/* func is the function to determine y and dy_da from x and a. */
/* beta[m], da[m], ap[m], dy_da[m] (all floats) are storage. */
/* piv[m], row[m], col[m] (all ints) are also storage. */

static void find_linearised(float *x, float *y, float *w, int n,
		float *a, float *dy_da, float **alpha, float *beta, int m,
				float *chisq, Nonlinear_model_func func)
{
    int i, j, k;
    float c, dy, y_fit, wgt;

/*
    printf("a:");
    for (i = 0; i < m; i++)
	printf("\t%4.3f", a[i]);
    printf("\n");
*/

    for (i = 0; i < m; i++)
	for (j = 0; j <= i; j++)
	    alpha[i][j] = 0;

    ZERO_VECTOR(beta, m);

    c = 0;

    for (i = 0; i < n; i++)
    {
	(*func)(x[i], a, &y_fit, dy_da);

	dy = y[i] - y_fit;

	for (j = 0; j < m; j++)
	{
	    wgt = w[i] * dy_da[j];

	    for (k = 0; k <= j; k++)
		alpha[j][k] += wgt * dy_da[k];

	    beta[j] += wgt * dy;
	}

	c += w[i] * dy * dy;

/*
	printf("i = %d, y = %4.3f, y_fit = %4.3f, dy = %4.3f, c = %4.3f\n",
						i, y[i], y_fit, dy, c);
*/
    }

    *chisq = c;

    for (i = 0; i < m-1; i++)
	for (j = i+1; j < m; j++)
	    alpha[i][j] = alpha[j][i];
}

void nonlinear_model(float *x, float *y, float *w, int n,
			float *a, float **covar, float **alpha,
			float *beta, float *da, float *ap, float *dy_da,
			int *piv, int *row, int *col, int m,
			float *chisq, float *lambda,
			Nonlinear_model_func func, int stage, Bool *singular)
{
    int i;
    float csq, lam;

    if (stage == INITIAL_STAGE)
    {
	lam = 0.001;
	find_linearised(x, y, w, n, a, dy_da, alpha, beta, m, chisq, func);
    }
    else
    {
	lam = *lambda;
    }

    csq = *chisq;

    for (i = 0; i < m; i++)
    {
	COPY_VECTOR(covar[i], alpha[i], m);
	covar[i][i] *= 1 + lam;
    }

/*
    gauss_jordan_vector(covar, beta, m, piv, row, col, singular);
*/
    COPY_VECTOR(da, beta, m);
    gauss_jordan_vector(covar, da, m, piv, row, col, singular);

    if (*singular)
	return;

    if (stage == FINAL_STAGE)
	return;

/*
    ADD_VECTORS(ap, a, beta, m);
*/
    ADD_VECTORS(ap, a, da, m);
    find_linearised(x, y, w, n, ap, dy_da, covar, da, m, chisq, func);

/*
    printf("csq = %4.3f, chisq = %4.3f, ", csq, *chisq);
*/

    if (*chisq < csq)
    {
	*lambda = 0.1 * lam;

	for (i = 0; i < m; i++)
	    COPY_VECTOR(alpha[i], covar[i], m);

	COPY_VECTOR(beta, da, m);
	COPY_VECTOR(a, ap, m);
    }
    else
    {
	*lambda = 10.0 * lam;
	*chisq = csq;
    }

/*
    printf("lam = %4.3f, lambda = %4.3f\n", lam, *lambda);
*/

    *singular = CCPN_FALSE;
}
