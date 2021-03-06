/********************************************************************/
/*                         watwa.c                                  */
/*                                                                  */
/* Remove waterline from spectum, water wash or watwa               */
/* 1997, Albert van Kuik                                            */

/*
      program watwas
c
c===================================================================
c
c program : waterwash 4
c           tp      901022
c           rb & gv 900226
c           tp      9002xx
c
c    from : testio
c---------
c valid   : 1d/2d/3d
c version : 890925.0 adapted for complex files
c           881028   version adapted to new trivision standards
c purpose : testing speed of i/o routines
c           starting point for user (3d) applications.
c
c call    : testio in out
c
c refer.  : --
c
c author  : geerten vuister
c           laboratory of organic chemistry
c           padualaan 8 , 3584 ch utrecht, the netherlands
c
c description
c-----------
c files      : fortran unit ninp1 (11) for input
c              fortran unit nout1 (31) for output
c
c parameters : --
c
c algorithm  : the input file in will be completely copied by readmx
c              and writmx or readcx and writcx calls to yield an identical
c              copy out
c
c use        : the input file can be generated by i.e. testf
c
c example    : --
c
c===================================================================
c
c
*/
/********************************************************************/



#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "mathtool.h"
#include "nmrtool.h"



void wafil0(float *x, int n, int kc, float *tmp);
void wafil1(float *x, int n, int kc, float *fcv, float *tmp);
void wafil2(float *x, int n, int kc, float *fcv, 
            float *window, float *tmp);
void wafil3(float *x, int n, int kc, float *fcv, float *tmp);
void wafil4(float *x, int n, int kc, float *fcv, 
            float *window, float *tmp);
void wafil5(float *xr, float *xi, int n, int kc, float *fcv);



#define USE_EXTRAPOLATION0		0
#define USE_EXTRAPOLATION		1
#define USE_EXTRAPOLATION_WINDOW	2
#define USE_REAL_PREDICTION		3
#define USE_REAL_PREDICTION_WINDOW	4
#define USE_COMPLEX_PREDICTION		5



static void bascorrect(int size, float *x, float *window, float *table)
{
    int ierr;
    
    /*
     * shift arrays back to zero
     */
    bascrr(BASTB2, 1, size, x+1, window+1, table+1, 
           0, 0, 4.0, 3.0, 0.05, 0.125, &ierr);
}

static void watwa_select(int iopt, int cmplx, float *xr, float *xi, 
                         int isize, int kc, float *fcv, float *window)
{
    float *h2o = fvector(1,isize*2);
    
    switch (iopt) {
        case USE_EXTRAPOLATION0:
            wafil0(xr,isize,kc,h2o);
            if (cmplx)
                wafil0(xi,isize,kc,h2o);
            break;
        case USE_EXTRAPOLATION:
            wafil1(xr,isize,kc,fcv,h2o);
            if (cmplx)
                wafil1(xi,isize,kc,fcv,h2o);
            break;
        case USE_REAL_PREDICTION:
            wafil3(xr,isize,kc,fcv,h2o);
            if (cmplx)
                wafil3(xi,isize,kc,fcv,h2o);
            break;
            /*
        case USE_EXTRAPOLATION_WINDOW:
            wafil2(xr,isize,kc,fcv,window,h2o);
            if (cmplx)
                wafil2(xi,isize,kc,fcv,window,h2o);
            break;
        case USE_REAL_PREDICTION_WINDOW:
            wafil4(xr,isize,kc,fcv,window,h2o);
            if (cmplx)
                wafil4(xi,isize,kc,fcv,window,h2o);
            break;
            */
        case USE_COMPLEX_PREDICTION:
            wafil5(xr,xi,isize,kc,fcv);
            break;
    }
    free_fvector(h2o, 1);
}

#ifdef NOTNOW

/*
 *
 *......... specific action
 ***** tp 901019
 *     clean up water by convolution of low-frequency contribution
 *     marion & bax jmr 84,425 (1989)
 *
 */
static void waterwash(int iopt, int itype, int cmplx,
               float *xr, float *xi, int isize, int kc, float *fcv,
               float *window)
{
    int it;
    float *tmpr, *tmpi;
    
    if (cmplx) {
        watwa(iopt, xr, xi, isize, kc, fcv, window);
        return;
    }

    tmpr = fvector(1, isize);
    tmpi = fvector(1, isize);
    if (itype == 1) {
        /*
         * copy data
         */
        for (it=1;it<=isize;it++) {
            tmpr[it] = xr[it];
            tmpi[it] = 0.0;
        }
    }
    else
        /*
         * disentangle interleaved data
         */
        intrlv(xr,tmpr,tmpi,isize,-1);

    if (itype == 3) {
        /*
         * redfield : de-multiplex
         */
        negstep(tmpr,isize,2,1);
        negstep(tmpi,isize,2,1);
    }

    if (iopt <= 4)
        watwa(iopt, tmpr, tmpi, isize, kc, fcv, window);


    if (itype == 3) {
        /*
         * redfield : multiplex again
         */
        negstep(tmpr,isize,2,1);
        negstep(tmpi,isize,2,1);
    }

    if (itype == 1) {
        /*
         * copy data
         */
        for (it=1;it<=isize;it++)
            xr[it] = tmpr[it];
    }
    else
        /*
         * interleave data again
         */
        intrlv(xr,tmpr,tmpi,isize,1);
    
    free_fvector(tmpr, 1);
    free_fvector(tmpi, 1);
}

#endif

/*
 * quick en vooral dirty
 * filter out low-frequency components
 * use linear extrapolation for the ends
 */
void wafil0(float *x, int n, int kc, float *tmp)
{
    int i,m;
    float s,fm,s1,s2,b1,b2;

    /*
     * initialize
     */
    m = 2 * kc + 1;
    fm= 1.0/(float)m;
    s = 0.0;
    for (i = 1;i<=2*kc+1;i++)
        s += x[i] * fm;
    tmp[kc+1] = s;
    /*
     *  single loop
     */
    for (i = kc+2;i<=n-kc;i++) {
        s -= x[i-kc-1] * fm + x[i+kc] * fm;
        tmp[i] = s;
    }
    /*
     *   find a value for the first and last kc baseline points
     *   linear extrapolation through the last calculated point,
     *   and the average of the kc data points
     */
    m  = kc;
    fm = 1.0/(float)m;
    s1 = 0.0;
    s2 = 0.0;
    for (i = 1;i<=m;i++) {
        s1 += x[i];
        s2 += x[n-i+1];
    }
    b1 = (s1 * fm - tmp[kc+1]) * 2.0 * fm;
    b2 = (s2 * fm - tmp[n-kc]) * 2.0 * fm;
    for (i = 1;i<=kc;i++) {
        tmp[kc+1-i] = tmp[kc+1] + i * b1;
        tmp[n-kc+i] = tmp[n-kc] + i * b2;
    }
    /*
     *       correct fid
     */
    for (i = 1;i<=n;i++)
        x[i] -= tmp[i];
}


/*
 * filter out low-frequency components
 * use linear extrapolation for the ends
 */
void wafil1(float *x, int n, int kc, float *fcv, float *tmp)
{
    int i,j,m;
    float fm,s1,s2,b1,b2;

    for (i = kc+1;i<=n-kc;i++) {
        tmp[i] = 0.0;
        for (j = 1;j<=2*kc+1;j++) 
            tmp[i] += fcv[j] * x[i+j-kc-1];
    }

    /*
     *   find a value for the first and last kc baseline points
     *   linear extrapolation through the last calculated point,
     *ccc       and the average of 2*kc preceding points
     *   and the average of the kc data points
     *   m  = 2*kc
     */
    m  = kc;
    fm = 1.0/(float)m;
    s1 = 0.0;
    s2 = 0.0;
    for (i = 1;i<=m;i++) {
/*
cc          s1=s1+tmp(kc+i+1)
cc          s2=s2+tmp(n-kc-i)
*/
        s1 += x[i];
        s2 += x[n-i+1];
    }
    b1 = (s1 * fm - tmp[kc+1]) * 2.0 * fm;
    b2 = (s2 * fm - tmp[n-kc]) * 2.0 * fm;
    for (i = 1;i<=kc;i++) {
        tmp[kc+1-i] = tmp[kc+1] + i * b1;
        tmp[n-kc+i] = tmp[n-kc] + i * b2;
    }
    /*
     * correct fid
     */
    for (i=1;i<=n;i++)
        x[i] = tmp[i];
}

/*
 * filter out low-frequency components
 * use linear extrapolation for the ends
 * use an extra fit
 */
void wafil2(float *x, int n, int kc, float *fcv, 
            float *window, float *tmp)
{
    int i,j,m;
    float fm,s1,s2,b1,b2;

    for (i = kc+1;i<=n-kc;i++) {
        tmp[i] = 0.0;
        for (j = 1;j<=2*kc+1;j++) 
            tmp[i] += fcv[j] * x[i+j-kc-1];
    }

    /*
     *   find a value for the first and last kc baseline points
     *   linear extrapolation through the last calculated point,
     *ccc       and the average of 2*kc preceding points
     *   and the average of the kc data points
     *   m  = 2*kc
     */
    m  = kc;
    fm = 1.0/(float)m;
    s1 = 0.0;
    s2 = 0.0;
    for (i = 1;i<=m;i++) {
/*
cc          s1=s1+tmp(kc+i+1)
cc          s2=s2+tmp(n-kc-i)
*/
        s1 += x[i];
        s2 += x[n-i+1];
    }
    b1 = (s1 * fm - tmp[kc+1]) * 2.0 * fm;
    b2 = (s2 * fm - tmp[n-kc]) * 2.0 * fm;
    for (i = 1;i<=kc;i++) {
        tmp[kc+1-i] = tmp[kc+1] + i * b1;
        tmp[n-kc+i] = tmp[n-kc] + i * b2;
    }
    /*
     * fit reconstructed line 
     * (the only difference with wafil1)
     */
    bascorrect( n, x, window, tmp);
}


/*
 * filter out low-frequency components
 * use linear prediction for the ends
 */
void wafil3(float *x, int n, int kc, float *fcv, float *tmp)
{
    double *cof, dum;
    int i,j,nd,m,off1,off2;

    for (i = kc+1;i<=n-kc;i++) {
        tmp[i] = 0.0;
        for (j = 1;j<=2*kc+1;j++) 
            tmp[i] += fcv[j] * x[i+j-kc-1];
    }

    /*
     * find a value for the first and last kc baseline points
     * linear prediction from nd data points and m coefficients
     */
    nd = min(n-kc-kc, kc*2);
    j  = min(nd, kc);
    m  = min(MAXROOT , j);
    cof  = dvector(1,m);
    off1 = n-nd-kc;
    off2 = n-kc;

    memcof(tmp+off1,nd,m,&dum,cof);
    bacdic(tmp+off1,nd,cof,m,tmp+off2,kc);

    /*
     * idem for first kc points (backwards)
     */
    invrse(tmp+1, n);
    memcof(tmp+off1,nd,m,&dum,cof);
    bacdic(tmp+off1,nd,cof,m,tmp+off2,kc);
    invrse(tmp+1, n);
    /*
     * correct fid
     */
    for (i=1;i<=n;i++)
        x[i] -= tmp[i];
    free_dvector(cof,1);
}


/*
 * filter out low-frequency components
 * use linear prediction for the ends
 * use an extra fit
 */
void wafil4(float *x, int n, int kc, float *fcv, 
            float *window, float *tmp)
{
    double *cof, dum;
    int i,j,nd,m;

    for (i = kc+1;i<=n-kc;i++) {
        tmp[i] = 0.0;
        for (j = 1;j<=2*kc+1;j++) 
            tmp[i] += fcv[j] * x[i+j-kc-1];
    }
    /*
     * find a value for the first and last kc baseline points
     * linear prediction from nd data points and m coefficients
     */
    nd = min(n-kc-kc, kc*2);
    j  = min(nd, kc);
    m  = min(MAXROOT , j);

    cof  = dvector(1,m);
    memcof(tmp+(n-nd-kc),nd,m,&dum,cof);

    bacdic(tmp+(n-nd-kc),nd,cof,m,tmp+(n-kc+1),kc);
    /*
     * idem for first kc points (backwards)
     */
    invrse(tmp, n);
    memcof(tmp+(n-nd-kc),nd,m,&dum,cof);

    bacdic(tmp+(n-nd-kc),nd,cof,m,tmp+(n-kc+1),kc);
    invrse(tmp, n);
    /*
     * fit reconstructed line 
     * (the only difference with wafil3)
     */
    bascorrect( n, x, window, tmp);
    free_dvector(cof,1);
}



/*
 * filter out low-frequency components
 * use linear prediction for the ends
 * use an extra fit
 */
void wafil5(float *xr, float *xi, int n, int kc, float *fcv)
{
    float *tmpr, *tmpi, toler= 10e-5;
    int i,j,nd,m;

    tmpr = fvector(1,n);
    tmpi = fvector(1,n);
    for (i = kc+1;i<=n-kc;i++) {
        tmpr[i] = 0.0;
        tmpi[i] = 0.0;
        for (j = 1;j<=2*kc+1;j++) {
            tmpr[i] += fcv[j] * xr[i+j-kc-1];
            tmpi[i] += fcv[j] * xi[i+j-kc-1];
        }
    }
    /*
     * find a value for the first and last kc baseline points
     * linear prediction from nd data points and m coefficients
     */
    nd = min(n-kc-kc, kc*2);
    j  = min(nd, kc);
    m  = min(MAXROOT , j);

 m=min(m,24); 

    ftlipc(PREDICT_FORWARD, 0, tmpr+1+(n-nd-kc), tmpi+1+(n-nd-kc), TRUE, nd
          , tmpr+1+(n-kc), tmpi+1+(n-kc)
          , kc, m, toler);
    ftlipc(PREDICT_BACKWARD, 0, tmpr+1+(n-nd-kc), tmpi+1+(n-nd-kc), TRUE, nd
          , tmpr+1, tmpi+1
          , kc, m, toler);

    for (i=1;i<=n;i++)
        xr[i] -= tmpr[i];
    for (i=1;i<=n;i++)
        xi[i] -= tmpi[i];
    free_fvector(tmpr,1);
    free_fvector(tmpi,1);
}


/*
    cospow      = use window of cos raised to the power of 'cospow'
    iscmplx     = complex flag
    xreal       = real data array
    ximag       = imaginary data array
    isize       = size of data array  
    kc          = convolution width
    wshift      = shift spectrum this many points
*/

int watwa(int cospow, int iscmplx, float *xreal, float *ximag, int isize,
          float kc, float wshift, int dspshift)
{

    int    k,i,kcmax = KCMAX,is_real2complex=FALSE;
    float  pi,fk,fks, *fcv, tmp;
    int iopt = USE_REAL_PREDICTION;

    cospow = max(1, cospow);
    /*
     * kc must be >=1 and must fit within data points nmax
     * kc = max( 1 , min( kcmax , min(kc,nmax/2-1) ) )
     *     scaling factor :
     */
    kc = max(1,kc);
    kc = min(kc, isize/2 -1);
    kc = min(kc,kcmax);
        
        

    pi  = acos(-1.);
    k   = 2 * kc + 1;
    fk  = (float) k;
    fks = 0.0;
    fcv = fvector(1,k);
    
    /*
     * calculate the convolution window
     */
    for (i=1;i<=k;i++) {
        fcv[i]  = cos( (i - kc - 1) * pi / fk );
        fcv[i]  = pow(fcv[i], (float)cospow);
        fks    += fcv[i];
    }
    /*
     * normalize the convolution window
     */
    for (i=1;i<=k;i++)
        fcv[i] /= fks;

    tmp = wshift * 360;


    /*
     * window NOT USED
     */
     /*
    if (par->iopt == 2) {
        for (i=0;i<dat->isize;i++)
            dat->window[i] = 0.0;
        for (i=par->kc;i<dat->isize - par->kc;i++)
            dat->window[i] = 1.0;
    }
    else if (par->iopt == 4) {
        for (i=0;i<dat->isize;i++)
            dat->window[i] = 1.0;
    }
   */

    if (!iscmplx) {
        /*
         * Convert a real into a complex FID
         */
        fftrxf(xreal,
               ximag,
               isize,
               2*isize,
               dspshift);

        xxrotate(xreal, 1, isize, (int)wshift);
        xxrotate(ximag, 1, isize, (int)wshift);

        fftcxb(xreal,
               ximag,
               isize,
               isize);
        is_real2complex = TRUE;
        iscmplx=1;

    }
    else {
        /*
         * shift the spectrum, so that the peak is at its middle
         */
        if (dspshift) {
            xxrotate(xreal, 1, isize, dspshift);
            xxrotate(ximag, 1, isize, dspshift);
        }
        phase(xreal, ximag, isize, 0, tmp, 1);
    }
    watwa_select(iopt, iscmplx, xreal-1, ximag-1, isize, kc,
              fcv, NULL);
    free_fvector(fcv, 1);

    if (is_real2complex) {

        /*
         * Convert a complex into a real FID
         */
        fftcxf(xreal,
               ximag,
               isize,
               isize,
               FALSE);
        xxrotate(xreal, 1, isize, (int)-wshift);
        xxrotate(ximag, 1, isize, (int)-wshift);
        fftrxb(xreal,
               ximag,
               isize,
               isize);

    }
    else {
        /*
         * shift the spectrum back
         */
        phase(xreal, ximag, isize, 0, -tmp, 1);
    }
    if (dspshift) {
        xxrotate(xreal, 1, isize, -dspshift);
        xxrotate(ximag, 1, isize, -dspshift);
    }
    return TRUE;
}


