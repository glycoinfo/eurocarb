
#include "complex.h"
#include "mathtool.h"


void cunm2r(char *side, char *trans, int m__, int n__, 
	    int k__, fcomplex *a, int lda, fcomplex *tau, fcomplex *c, 
	    int ldc, fcomplex *work, int *info)
{
/*  -- LAPACK routine (version 2.0) --   
       Univ. of Tennessee, Univ. of California Berkeley, NAG Ltd.,   
       Courant Institute, Argonne National Lab, and Rice University   
       September 30, 1994   


    Purpose   
    =======   

    CUNM2R overwrites the general complex m-by-n matrix C with   

          Q * C  if SIDE = 'L' and TRANS = 'N', or   

          Q'* C  if SIDE = 'L' and TRANS = 'C', or   

          C * Q  if SIDE = 'R' and TRANS = 'N', or   

          C * Q' if SIDE = 'R' and TRANS = 'C',   

    where Q is a complex unitary matrix defined as the product of k   
    elementary reflectors   

          Q = H(1) H(2) . . . H(k)   

    as returned by CGEQRF. Q is of order m if SIDE = 'L' and of order n   
    if SIDE = 'R'.   

    Arguments   
    =========   

    SIDE    (input) CHARACTER*1   
            = 'L': apply Q or Q' from the Left   
            = 'R': apply Q or Q' from the Right   

    TRANS   (input) CHARACTER*1   
            = 'N': apply Q  (No transpose)   
            = 'C': apply Q' (Conjugate transpose)   

    M       (input) INTEGER   
            The number of rows of the matrix C. M >= 0.   

    N       (input) INTEGER   
            The number of columns of the matrix C. N >= 0.   

    K       (input) INTEGER   
            The number of elementary reflectors whose product defines   
            the matrix Q.   
            If SIDE = 'L', M >= K >= 0;   
            if SIDE = 'R', N >= K >= 0.   

    A       (input) COMPLEX array, dimension (LDA,K)   
            The i-th column must contain the vector which defines the   
            elementary reflector H(i), for i = 1,2,...,k, as returned by 
  
            CGEQRF in the first k columns of its array argument A.   
            A is modified by the routine but restored on exit.   

    LDA     (input) INTEGER   
            The leading dimension of the array A.   
            If SIDE = 'L', LDA >= max(1,M);   
            if SIDE = 'R', LDA >= max(1,N).   

    TAU     (input) COMPLEX array, dimension (K)   
            TAU(i) must contain the scalar factor of the elementary   
            reflector H(i), as returned by CGEQRF.   

    C       (input/output) COMPLEX array, dimension (LDC,N)   
            On entry, the m-by-n matrix C.   
            On exit, C is overwritten by Q*C or Q'*C or C*Q' or C*Q.   

    LDC     (input) INTEGER   
            The leading dimension of the array C. LDC >= max(1,M).   

    WORK    (workspace) COMPLEX array, dimension   
                                     (N) if SIDE = 'L',   
                                     (M) if SIDE = 'R'   

    INFO    (output) INTEGER   
            = 0: successful exit   
            < 0: if INFO = -i, the i-th argument had an illegal value   

    ===================================================================== 
  


       Test the input arguments   

    
   Parameter adjustments   
       Function Body */
    /* Table of constant values */
    static int c__1 = 1;
    
    /* System generated locals */
    int a_dim1, i__1, i__2, i__3;
    fcomplex q__1;
    /* Local variables */
    static int left;
    static fcomplex taui;
    static int i;
    static int i1, i2, i3, ic, jc, mi, ni, nq;
    static int notran;
    static fcomplex aii;



#define TAU(I) tau[(I)-1]
#define WORK(I) work[(I)-1]

#define A(I,J) a[(I)-1 + ((J)-1)* ( lda)]
#define C(I,J) c[(I)-1 + ((J)-1)* ( ldc)]

    *info = 0;
    left = lsame(side, "L");
    notran = lsame(trans, "N");

/*     NQ is the order of Q */

    if (left) {
	nq = m__;
    } else {
	nq = n__;
    }
    if (! left && ! lsame(side, "R")) {
	*info = -1;
    } else if (! notran && ! lsame(trans, "C")) {
	*info = -2;
    } else if (m__ < 0) {
	*info = -3;
    } else if (n__ < 0) {
	*info = -4;
    } else if (k__ < 0 || k__ > nq) {
	*info = -5;
    } else if (lda < max(1,nq)) {
	*info = -7;
    } else if (ldc < max(1,m__)) {
	*info = -10;
    }
    if (*info != 0) {
	i__1 = -(*info);
	return ;
    }

    /*
     *     Quick return if possible 
     */

    if (m__ == 0 || n__ == 0 || k__ == 0) {
	return ;
    }

    if ((left && ! notran) || (! left && notran)) {
	i1 = 1;
	i2 = k__;
	i3 = 1;
    } else {
	i1 = k__;
	i2 = 1;
	i3 = -1;
    }

    if (left) {
	ni = n__;
	jc = 1;
    } else {
	mi = m__;
	ic = 1;
    }

    i__1 = i2;
    i__2 = i3;
    for (i = i1; i3 < 0 ? i >= i2 : i <= i2; i += i3) {
	if (left) {

            /* 
             *          H(i) or H(i)' is applied to C(i:m,1:n) 
             */

	    mi = m__ - i + 1;
	    ic = i;
	} else {

            /* 
             *          H(i) or H(i)' is applied to C(1:m,i:n) 
             */

	    ni = n__ - i + 1;
	    jc = i;
	}

        /*
         *        Apply H(i) or H(i)' 
         */

	if (notran) {
	    i__3 = i;
	    taui.r = TAU(i).r, taui.i = TAU(i).i;
	} else {
	    r_cnjg(&q__1, &TAU(i));
	    taui.r = q__1.r, taui.i = q__1.i;
	}
	i__3 = i + i * a_dim1;
	aii.r = A(i,i).r, aii.i = A(i,i).i;
	i__3 = i + i * a_dim1;
	A(i,i).r = 1.f, A(i,i).i = 0.f;
	clarf(side, mi, ni, &A(i,i), c__1, taui, &C(ic,jc), ldc, &WORK(1));
	i__3 = i + i * a_dim1;
	A(i,i).r = aii.r, A(i,i).i = aii.i;
    }

}

