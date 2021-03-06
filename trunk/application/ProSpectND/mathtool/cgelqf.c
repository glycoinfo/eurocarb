

#include "complex.h"
#include "mathtool.h"

void cgelqf(int m__, int n__, fcomplex *a, int lda,
	    fcomplex *tau, fcomplex *work, int lwork, int *info)
{
/*  -- LAPACK routine (version 2.0) --   
       Univ. of Tennessee, Univ. of California Berkeley, NAG Ltd.,   
       Courant Institute, Argonne National Lab, and Rice University   
       September 30, 1994   


    Purpose   
    =======   

    CGELQF computes an LQ factorization of a complex M-by-N matrix A:   
    A = L * Q.   

    Arguments   
    =========   

    M       (input) INTEGER   
            The number of rows of the matrix A.  M >= 0.   

    N       (input) INTEGER   
            The number of columns of the matrix A.  N >= 0.   

    A       (input/output) COMPLEX array, dimension (LDA,N)   
            On entry, the M-by-N matrix A.   
            On exit, the elements on and below the diagonal of the array 
  
            contain the m-by-min(m,n) lower trapezoidal matrix L (L is   
            lower triangular if m <= n); the elements above the diagonal, 
  
            with the array TAU, represent the unitary matrix Q as a   
            product of elementary reflectors (see Further Details).   

    LDA     (input) INTEGER   
            The leading dimension of the array A.  LDA >= max(1,M).   

    TAU     (output) COMPLEX array, dimension (min(M,N))   
            The scalar factors of the elementary reflectors (see Further 
  
            Details).   

    WORK    (workspace/output) COMPLEX array, dimension (LWORK)   
            On exit, if INFO = 0, WORK(1) returns the optimal LWORK.   

    LWORK   (input) INTEGER   
            The dimension of the array WORK.  LWORK >= max(1,M).   
            For optimum performance LWORK >= M*NB, where NB is the   
            optimal blocksize.   

    INFO    (output) INTEGER   
            = 0:  successful exit   
            < 0:  if INFO = -i, the i-th argument had an illegal value   

    Further Details   
    ===============   

    The matrix Q is represented as a product of elementary reflectors   

       Q = H(k)' . . . H(2)' H(1)', where k = min(m,n).   

    Each H(i) has the form   

       H(i) = I - tau * v * v'   

    where tau is a complex scalar, and v is a complex vector with   
    v(1:i-1) = 0 and v(i) = 1; conjg(v(i+1:n)) is stored on exit in   
    A(i,i+1:n), and tau in TAU(i).   

    ===================================================================== 
  


       Test the input arguments   

    
   Parameter adjustments   
       Function Body */
    /* Table of constant values */
    static int c__1 = 1;
    static int c_n1 = -1;
    static int c__3 = 3;
    static int c__2 = 2;
    
    /* System generated locals */
    int i__1, i__2, i__3, i__4;
    /* Local variables */
    static int i, k, nbmin, iinfo;
    static int ib, nb;
    static int nx;
    static int ldwork, iws;



#define TAU(I) tau[(I)-1]
#define WORK(I) work[(I)-1]

#define A(I,J) a[(I)-1 + ((J)-1)* ( lda)]

    *info = 0;
    if (m__ < 0) {
	*info = -1;
    } else if (n__ < 0) {
	*info = -2;
    } else if (lda < max(1,m__)) {
	*info = -4;
    } else if (lwork < max(1,m__)) {
	*info = -7;
    }
    if (*info != 0) {
	i__1 = -(*info);
	return ;
    }

    /*
     *     Quick return if possible 
     */

    k = min(m__,n__);
    if (k == 0) {
	WORK(1).r = 1.f, WORK(1).i = 0.f;
	return ;
    }

    /*
     *     Determine the block size. 
     */

    nb = ilaenv(c__1, "CGELQF", " ", m__, n__, c_n1, c_n1, 6L, 1L);
    nbmin = 2;
    nx = 0;
    iws = m__;
    if (nb > 1 && nb < k) {

    /*
     *        Determine when to cross over from blocked to unblocked code.
     */

     /*
      * Computing MAX 
      */
	i__1 = 0, i__2 = ilaenv(c__3, "CGELQF", " ", m__, n__, c_n1, c_n1, 6L,
		 1L);
	nx = max(i__1,i__2);
	if (nx < k) {

            /*
             *   Determine if workspace is large enough for blocked code. 
             */

	    ldwork = m__;
	    iws = ldwork * nb;
	    if (lwork < iws) {

                /* 
                 * Not enough workspace to use optimal NB:  reduce NB and   
                 * determine the minimum value of NB. 
                 */

		nb = lwork / ldwork;
                /* 
                 * Computing MAX 
                 */
		i__1 = 2, i__2 = ilaenv(c__2, "CGELQF", " ", m__, n__, c_n1,
			c_n1, 6L, 1L);
		nbmin = max(i__1,i__2);
	    }
	}
    }

    if (nb >= nbmin && nb < k && nx < k) {

        /* 
         *       Use blocked code initially 
         */

	i__1 = k - nx;
	i__2 = nb;
	for (i = 1; nb < 0 ? i >= k-nx : i <= k-nx; i += nb) {
            /* 
             * Computing MIN 
             */
	    i__3 = k - i + 1;
	    ib = min(i__3,nb);

            /* 
             * Compute the LQ factorization of the current block   
             * A(i:i+ib-1,i:n) 
             */

	    i__3 = n__ - i + 1;
	    cgelq2(ib, i__3, &A(i,i), lda, &TAU(i), &WORK(1), &
		    iinfo);
	    if (i + ib <= m__) {

                /*  
                 * Form the triangular factor of the block reflector   
                 * H = H(i) H(i+1) . . . H(i+ib-1) 
                 */

		i__3 = n__ - i + 1;
		clarft("Forward", "Rowwise", i__3, ib, &A(i,i), 
			lda, &TAU(i), &WORK(1), ldwork);

                /*
                 *     Apply H to A(i+ib:m,i:n) from the right 
                 */

		i__3 = m__ - i - ib + 1;
		i__4 = n__ - i + 1;
		clarfb("Right", "No transpose", "Forward", "Rowwise", i__3, 
			i__4, ib, &A(i,i), lda, &WORK(1), 
			ldwork, &A(i+ib,i), lda, &WORK(ib + 1), 
			ldwork);
	    }
	}
    } else {
	i = 1;
    }

    /*
     *     Use unblocked code to factor the last or only block. 
     */

    if (i <= k) {
	i__2 = m__ - i + 1;
	i__1 = n__ - i + 1;
	cgelq2(i__2, i__1, &A(i,i), lda, &TAU(i), &WORK(1), &
		iinfo);
    }

    WORK(1).r = (float) iws, WORK(1).i = 0.f;
    return ;

} 

