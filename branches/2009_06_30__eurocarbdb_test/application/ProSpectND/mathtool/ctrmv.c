
/*  -- translated by f2c (version 19940927).
   You must link the resulting object file with the libraries:
	-lf2c -lm   (in that order)
*/



#include "complex.h"
#include "mathtool.h"



void ctrmv(char *uplo, char *trans, char *diag, int n__, 
	   fcomplex *a, int lda, fcomplex *x, int incx)
{


    /* System generated locals */
    int a_dim1, i__1, i__2, i__3, i__4, i__5;
    fcomplex q__1, q__2, q__3;


    /* Local variables */
    static int info;
    static fcomplex temp;
    static int i, j;
    static int ix, jx, kx;
    static int noconj, nounit;


/*  Purpose   
    =======   

    CTRMV  performs one of the matrix-vector operations   

       x := A*x,   or   x := A'*x,   or   x := conjg( A' )*x,   

    where x is an n element vector and  A is an n by n unit, or non-unit, 
  
    upper or lower triangular matrix.   

    Parameters   
    ==========   

    UPLO   - CHARACTER*1.   
             On entry, UPLO specifies whether the matrix is an upper or   
             lower triangular matrix as follows:   

                UPLO = 'U' or 'u'   A is an upper triangular matrix.   

                UPLO = 'L' or 'l'   A is a lower triangular matrix.   

             Unchanged on exit.   

    TRANS  - CHARACTER*1.   
             On entry, TRANS specifies the operation to be performed as   
             follows:   

                TRANS = 'N' or 'n'   x := A*x.   

                TRANS = 'T' or 't'   x := A'*x.   

                TRANS = 'C' or 'c'   x := conjg( A' )*x.   

             Unchanged on exit.   

    DIAG   - CHARACTER*1.   
             On entry, DIAG specifies whether or not A is unit   
             triangular as follows:   

                DIAG = 'U' or 'u'   A is assumed to be unit triangular.   

                DIAG = 'N' or 'n'   A is not assumed to be unit   
                                    triangular.   

             Unchanged on exit.   

    N      - INTEGER.   
             On entry, N specifies the order of the matrix A.   
             N must be at least zero.   
             Unchanged on exit.   

    A      - COMPLEX          array of DIMENSION ( LDA, n ).   
             Before entry with  UPLO = 'U' or 'u', the leading n by n   
             upper triangular part of the array A must contain the upper 
  
             triangular matrix and the strictly lower triangular part of 
  
             A is not referenced.   
             Before entry with UPLO = 'L' or 'l', the leading n by n   
             lower triangular part of the array A must contain the lower 
  
             triangular matrix and the strictly upper triangular part of 
  
             A is not referenced.   
             Note that when  DIAG = 'U' or 'u', the diagonal elements of 
  
             A are not referenced either, but are assumed to be unity.   
             Unchanged on exit.   

    LDA    - INTEGER.   
             On entry, LDA specifies the first dimension of A as declared 
  
             in the calling (sub) program. LDA must be at least   
             max( 1, n ).   
             Unchanged on exit.   

    X      - COMPLEX          array of dimension at least   
             ( 1 + ( n - 1 )*abs( INCX ) ).   
             Before entry, the incremented array X must contain the n   
             element vector x. On exit, X is overwritten with the   
             tranformed vector x.   

    INCX   - INTEGER.   
             On entry, INCX specifies the increment for the elements of   
             X. INCX must not be zero.   
             Unchanged on exit.   


    Level 2 Blas routine.   

    -- Written on 22-October-1986.   
       Jack Dongarra, Argonne National Lab.   
       Jeremy Du Croz, Nag Central Office.   
       Sven Hammarling, Nag Central Office.   
       Richard Hanson, Sandia National Labs.   



       Test the input parameters.   

    
   Parameter adjustments   
       Function Body */
#define X(I) x[(I)-1]

#define A(I,J) a[(I)-1 + ((J)-1)* ( lda)]

    info = 0;
    if (! lsame(uplo, "U") && ! lsame(uplo, "L")) {
	info = 1;
    } else if (! lsame(trans, "N") && ! lsame(trans, "T") &&
	     ! lsame(trans, "C")) {
	info = 2;
    } else if (! lsame(diag, "U") && ! lsame(diag, "N")) {
	info = 3;
    } else if (n__ < 0) {
	info = 4;
    } else if (lda < max(1,n__)) {
	info = 6;
    } else if (incx == 0) {
	info = 8;
    }
    if (info != 0) {	
	return ;
    }

/*     Quick return if possible. */

    if (n__ == 0) {
	return ;
    }

    noconj = lsame(trans, "T");
    nounit = lsame(diag, "N");

/*     Set up the start point in X if the increment is not unity. This   
       will be  ( N - 1 )*INCX  too small for descending loops. */

    if (incx <= 0) {
	kx = 1 - (n__ - 1) * incx;
    } else if (incx != 1) {
	kx = 1;
    }

/*     Start the operations. In this version the elements of A are   
       accessed sequentially with one pass through A. */

    if (lsame(trans, "N")) {

/*        Form  x := A*x. */

	if (lsame(uplo, "U")) {
	    if (incx == 1) {
		i__1 = n__;
		for (j = 1; j <= n__; ++j) {
		    i__2 = j;
		    if (X(j).r != 0.f || X(j).i != 0.f) {
			i__2 = j;
			temp.r = X(j).r, temp.i = X(j).i;
			i__2 = j - 1;
			for (i = 1; i <= j-1; ++i) {
			    i__3 = i;
			    i__4 = i;
			    i__5 = i + j * a_dim1;
			    q__2.r = temp.r * A(i,j).r - temp.i * A(i,j).i, 
				    q__2.i = temp.r * A(i,j).i + temp.i * A(i,j).r;
			    q__1.r = X(i).r + q__2.r, q__1.i = X(i).i + 
				    q__2.i;
			    X(i).r = q__1.r, X(i).i = q__1.i;
			}
			if (nounit) {
			    i__2 = j;
			    i__3 = j;
			    i__4 = j + j * a_dim1;
			    q__1.r = X(j).r * A(j,j).r - X(j).i * A(j,j).i, q__1.i = X(j).r * A(j,j).i + 
				    X(j).i * A(j,j).r;
			    X(j).r = q__1.r, X(j).i = q__1.i;
			}
		    }
		}
	    } else {
		jx = kx;
		i__1 = n__;
		for (j = 1; j <= n__; ++j) {
		    i__2 = jx;
		    if (X(jx).r != 0.f || X(jx).i != 0.f) {
			i__2 = jx;
			temp.r = X(jx).r, temp.i = X(jx).i;
			ix = kx;
			i__2 = j - 1;
			for (i = 1; i <= j-1; ++i) {
			    i__3 = ix;
			    i__4 = ix;
			    i__5 = i + j * a_dim1;
			    q__2.r = temp.r * A(i,j).r - temp.i * A(i,j).i, 
				    q__2.i = temp.r * A(i,j).i + temp.i * A(i,j).r;
			    q__1.r = X(ix).r + q__2.r, q__1.i = X(ix).i + 
				    q__2.i;
			    X(ix).r = q__1.r, X(ix).i = q__1.i;
			    ix += incx;
			}
			if (nounit) {
			    i__2 = jx;
			    i__3 = jx;
			    i__4 = j + j * a_dim1;
			    q__1.r = X(jx).r * A(j,j).r - X(jx).i * A(j,j).i, q__1.i = X(jx).r * A(j,j).i + 
				    X(jx).i * A(j,j).r;
			    X(jx).r = q__1.r, X(jx).i = q__1.i;
			}
		    }
		    jx += incx;
		}
	    }
	} else {
	    if (incx == 1) {
		for (j = n__; j >= 1; --j) {
		    i__1 = j;
		    if (X(j).r != 0.f || X(j).i != 0.f) {
			i__1 = j;
			temp.r = X(j).r, temp.i = X(j).i;
			i__1 = j + 1;
			for (i = n__; i >= j+1; --i) {
			    i__2 = i;
			    i__3 = i;
			    i__4 = i + j * a_dim1;
			    q__2.r = temp.r * A(i,j).r - temp.i * A(i,j).i, 
				    q__2.i = temp.r * A(i,j).i + temp.i * A(i,j).r;
			    q__1.r = X(i).r + q__2.r, q__1.i = X(i).i + 
				    q__2.i;
			    X(i).r = q__1.r, X(i).i = q__1.i;
			}
			if (nounit) {
			    i__1 = j;
			    i__2 = j;
			    i__3 = j + j * a_dim1;
			    q__1.r = X(j).r * A(j,j).r - X(j).i * A(j,j).i, q__1.i = X(j).r * A(j,j).i + 
				    X(j).i * A(j,j).r;
			    X(j).r = q__1.r, X(j).i = q__1.i;
			}
		    }
		}
	    } else {
		kx += (n__ - 1) * incx;
		jx = kx;
		for (j = n__; j >= 1; --j) {
		    i__1 = jx;
		    if (X(jx).r != 0.f || X(jx).i != 0.f) {
			i__1 = jx;
			temp.r = X(jx).r, temp.i = X(jx).i;
			ix = kx;
			i__1 = j + 1;
			for (i = n__; i >= j+1; --i) {
			    i__2 = ix;
			    i__3 = ix;
			    i__4 = i + j * a_dim1;
			    q__2.r = temp.r * A(i,j).r - temp.i * A(i,j).i, 
				    q__2.i = temp.r * A(i,j).i + temp.i * A(i,j).r;
			    q__1.r = X(ix).r + q__2.r, q__1.i = X(ix).i + 
				    q__2.i;
			    X(ix).r = q__1.r, X(ix).i = q__1.i;
			    ix -= incx;
			}
			if (nounit) {
			    i__1 = jx;
			    i__2 = jx;
			    i__3 = j + j * a_dim1;
			    q__1.r = X(jx).r * A(j,j).r - X(jx).i * A(j,j).i, q__1.i = X(jx).r * A(j,j).i + 
				    X(jx).i * A(j,j).r;
			    X(jx).r = q__1.r, X(jx).i = q__1.i;
			}
		    }
		    jx -= incx;
		}
	    }
	}
    } else {

/*        Form  x := A'*x  or  x := conjg( A' )*x. */

	if (lsame(uplo, "U")) {
	    if (incx == 1) {
		for (j = n__; j >= 1; --j) {
		    i__1 = j;
		    temp.r = X(j).r, temp.i = X(j).i;
		    if (noconj) {
			if (nounit) {
			    i__1 = j + j * a_dim1;
			    q__1.r = temp.r * A(j,j).r - temp.i * A(j,j).i, 
				    q__1.i = temp.r * A(j,j).i + temp.i * A(j,j).r;
			    temp.r = q__1.r, temp.i = q__1.i;
			}
			for (i = j - 1; i >= 1; --i) {
			    i__1 = i + j * a_dim1;
			    i__2 = i;
			    q__2.r = A(i,j).r * X(i).r - A(i,j).i * X(
				    i).i, q__2.i = A(i,j).r * X(i).i + 
				    A(i,j).i * X(i).r;
			    q__1.r = temp.r + q__2.r, q__1.i = temp.i + 
				    q__2.i;
			    temp.r = q__1.r, temp.i = q__1.i;
			}
		    } else {
			if (nounit) {
			    r_cnjg(&q__2, &A(j,j));
			    q__1.r = temp.r * q__2.r - temp.i * q__2.i, 
				    q__1.i = temp.r * q__2.i + temp.i * 
				    q__2.r;
			    temp.r = q__1.r, temp.i = q__1.i;
			}
			for (i = j - 1; i >= 1; --i) {
			    r_cnjg(&q__3, &A(i,j));
			    i__1 = i;
			    q__2.r = q__3.r * X(i).r - q__3.i * X(i).i, 
				    q__2.i = q__3.r * X(i).i + q__3.i * X(
				    i).r;
			    q__1.r = temp.r + q__2.r, q__1.i = temp.i + 
				    q__2.i;
			    temp.r = q__1.r, temp.i = q__1.i;
			}
		    }
		    i__1 = j;
		    X(j).r = temp.r, X(j).i = temp.i;
		}
	    } else {
		jx = kx + (n__ - 1) * incx;
		for (j = n__; j >= 1; --j) {
		    i__1 = jx;
		    temp.r = X(jx).r, temp.i = X(jx).i;
		    ix = jx;
		    if (noconj) {
			if (nounit) {
			    i__1 = j + j * a_dim1;
			    q__1.r = temp.r * A(j,j).r - temp.i * A(j,j).i, 
				    q__1.i = temp.r * A(j,j).i + temp.i * A(j,j).r;
			    temp.r = q__1.r, temp.i = q__1.i;
			}
			for (i = j - 1; i >= 1; --i) {
			    ix -= incx;
			    i__1 = i + j * a_dim1;
			    i__2 = ix;
			    q__2.r = A(i,j).r * X(ix).r - A(i,j).i * X(
				    ix).i, q__2.i = A(i,j).r * X(ix).i + 
				    A(i,j).i * X(ix).r;
			    q__1.r = temp.r + q__2.r, q__1.i = temp.i + 
				    q__2.i;
			    temp.r = q__1.r, temp.i = q__1.i;
			}
		    } else {
			if (nounit) {
			    r_cnjg(&q__2, &A(j,j));
			    q__1.r = temp.r * q__2.r - temp.i * q__2.i, 
				    q__1.i = temp.r * q__2.i + temp.i * 
				    q__2.r;
			    temp.r = q__1.r, temp.i = q__1.i;
			}
			for (i = j - 1; i >= 1; --i) {
			    ix -= incx;
			    r_cnjg(&q__3, &A(i,j));
			    i__1 = ix;
			    q__2.r = q__3.r * X(ix).r - q__3.i * X(ix).i, 
				    q__2.i = q__3.r * X(ix).i + q__3.i * X(
				    ix).r;
			    q__1.r = temp.r + q__2.r, q__1.i = temp.i + 
				    q__2.i;
			    temp.r = q__1.r, temp.i = q__1.i;
			}
		    }
		    i__1 = jx;
		    X(jx).r = temp.r, X(jx).i = temp.i;
		    jx -= incx;
		}
	    }
	} else {
	    if (incx == 1) {
		i__1 = n__;
		for (j = 1; j <= n__; ++j) {
		    i__2 = j;
		    temp.r = X(j).r, temp.i = X(j).i;
		    if (noconj) {
			if (nounit) {
			    i__2 = j + j * a_dim1;
			    q__1.r = temp.r * A(j,j).r - temp.i * A(j,j).i, 
				    q__1.i = temp.r * A(j,j).i + temp.i * A(j,j).r;
			    temp.r = q__1.r, temp.i = q__1.i;
			}
			i__2 = n__;
			for (i = j + 1; i <= n__; ++i) {
			    i__3 = i + j * a_dim1;
			    i__4 = i;
			    q__2.r = A(i,j).r * X(i).r - A(i,j).i * X(
				    i).i, q__2.i = A(i,j).r * X(i).i + 
				    A(i,j).i * X(i).r;
			    q__1.r = temp.r + q__2.r, q__1.i = temp.i + 
				    q__2.i;
			    temp.r = q__1.r, temp.i = q__1.i;
			}
		    } else {
			if (nounit) {
			    r_cnjg(&q__2, &A(j,j));
			    q__1.r = temp.r * q__2.r - temp.i * q__2.i, 
				    q__1.i = temp.r * q__2.i + temp.i * 
				    q__2.r;
			    temp.r = q__1.r, temp.i = q__1.i;
			}
			i__2 = n__;
			for (i = j + 1; i <= n__; ++i) {
			    r_cnjg(&q__3, &A(i,j));
			    i__3 = i;
			    q__2.r = q__3.r * X(i).r - q__3.i * X(i).i, 
				    q__2.i = q__3.r * X(i).i + q__3.i * X(
				    i).r;
			    q__1.r = temp.r + q__2.r, q__1.i = temp.i + 
				    q__2.i;
			    temp.r = q__1.r, temp.i = q__1.i;
			}
		    }
		    i__2 = j;
		    X(j).r = temp.r, X(j).i = temp.i;
		}
	    } else {
		jx = kx;
		i__1 = n__;
		for (j = 1; j <= n__; ++j) {
		    i__2 = jx;
		    temp.r = X(jx).r, temp.i = X(jx).i;
		    ix = jx;
		    if (noconj) {
			if (nounit) {
			    i__2 = j + j * a_dim1;
			    q__1.r = temp.r * A(j,j).r - temp.i * A(j,j).i, 
				    q__1.i = temp.r * A(j,j).i + temp.i * A(j,j).r;
			    temp.r = q__1.r, temp.i = q__1.i;
			}
			i__2 = n__;
			for (i = j + 1; i <= n__; ++i) {
			    ix += incx;
			    i__3 = i + j * a_dim1;
			    i__4 = ix;
			    q__2.r = A(i,j).r * X(ix).r - A(i,j).i * X(
				    ix).i, q__2.i = A(i,j).r * X(ix).i + 
				    A(i,j).i * X(ix).r;
			    q__1.r = temp.r + q__2.r, q__1.i = temp.i + 
				    q__2.i;
			    temp.r = q__1.r, temp.i = q__1.i;
			}
		    } else {
			if (nounit) {
			    r_cnjg(&q__2, &A(j,j));
			    q__1.r = temp.r * q__2.r - temp.i * q__2.i, 
				    q__1.i = temp.r * q__2.i + temp.i * 
				    q__2.r;
			    temp.r = q__1.r, temp.i = q__1.i;
			}
			i__2 = n__;
			for (i = j + 1; i <= n__; ++i) {
			    ix += incx;
			    r_cnjg(&q__3, &A(i,j));
			    i__3 = ix;
			    q__2.r = q__3.r * X(ix).r - q__3.i * X(ix).i, 
				    q__2.i = q__3.r * X(ix).i + q__3.i * X(
				    ix).r;
			    q__1.r = temp.r + q__2.r, q__1.i = temp.i + 
				    q__2.i;
			    temp.r = q__1.r, temp.i = q__1.i;
			}
		    }
		    i__2 = jx;
		    X(jx).r = temp.r, X(jx).i = temp.i;
		    jx += incx;
		}
	    }
	}
    }



} 

