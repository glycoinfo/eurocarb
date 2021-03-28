/*
======================COPYRIGHT/LICENSE START==========================

atom.h: Part of the CcpNmr Analysis program

Copyright (C) 2004 Wayne Boucher and Tim Stevens (University of Cambridge)

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
Ionides and Ernest D. Laue. The CCPN Data Model for NMR Spectroscopy:
Development of a Software Pipeline. Accepted by Proteins (2004).

===========================REFERENCE END===============================
*/
#ifndef _incl_atom
#define _incl_atom

#include "macros.h"
#include "types.h"

#include "drawing_funcs.h"

#define ATOM_NDIMS  3
#define ATOM_NCOLORS  3

struct Bond;

typedef struct Atom
{
    float size;
    char *symbol;
    char *annotation;
    float x[ATOM_NDIMS];
    float color[ATOM_NCOLORS];
    int nbonds;
    int nbonds_alloc;
    struct Bond **bonds;
    Bool is_drawn;
    Bool have_annotation_color;
    float annotation_color[ATOM_NCOLORS];
}   *Atom;

extern Atom new_atom(float size, char *symbol, char *annotation,
                                        float *x, float *color);

extern void delete_atom(Atom atom);

extern void set_size_atom(Atom atom, float size);

extern CcpnStatus set_symbol_atom(Atom atom, char *symbol);

extern CcpnStatus set_annotation_atom(Atom atom, char *annotation);

extern void set_color_atom(Atom atom, float *color);

extern void turn_on_atom(Atom atom);

extern void turn_off_atom(Atom atom);

extern void set_annotation_color_atom(Atom atom, float *color);

extern CcpnStatus add_bond_atom(Atom atom, struct Bond *bond);

extern CcpnStatus remove_bond_atom(Atom atom, struct Bond *bond);

extern void draw_atom(Atom atom, float depth, Drawing_funcs *drawing_funcs,
                                                        Generic_ptr data);

extern void translate_atom(Atom atom, float *delta);

extern void rotate_atom(Atom atom, float **matrix, float *origin);

extern void zoom_atom(Atom atom, float scale);

extern void set_coords_atom(Atom atom, float *coords);

extern Bool within_xy_tol_atom(Atom atom, float x, float y, float tol);

#endif /* _incl_atom */
