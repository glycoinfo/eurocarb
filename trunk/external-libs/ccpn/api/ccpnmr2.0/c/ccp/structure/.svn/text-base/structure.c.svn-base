
/*
======================COPYRIGHT/LICENSE START==========================

structure.c: Part of the CcpNmr Analysis program

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
#include "structure.h"

#include "geometry.h"
#include "sorts.h"

#define  ALLOC_INCR  500

Structure new_structure()
{
    Structure structure;

    MALLOC_NEW(structure, struct Structure, 1);

    MALLOC_NEW(structure->atoms, Atom, ALLOC_INCR);
    MALLOC_NEW(structure->bonds, Bond, ALLOC_INCR);

    structure->natoms = 0;
    structure->natoms_alloc = ALLOC_INCR;
    structure->nbonds = 0;
    structure->nbonds_alloc = ALLOC_INCR;

    return structure;
}
 
void delete_structure(Structure structure)
{
/*
    printf("delete_structure\n");
*/

    if (structure)
    {
        FREE(structure->atoms, Atom);
        FREE(structure->bonds, Bond);
        FREE(structure, struct Structure);
    }
}

CcpnStatus add_atom_structure(Structure structure, Atom atom)
{
    int nalloc = structure->natoms_alloc, n = structure->natoms;

    if (n == nalloc)
    {
        nalloc += ALLOC_INCR;
        REALLOC(structure->atoms, Atom, nalloc);
        structure->natoms_alloc = nalloc;
    }

    structure->atoms[n] = atom;
    structure->natoms++;

    return CCPN_OK;
}

CcpnStatus remove_atom_structure(Structure structure, Atom atom)
{
    int i, n = structure->natoms - 1;

    /* guess that later atoms most likely to be ones removed */
    /* so work from back to front */
    for (i = n; i >= 0; i--)
    {
        if (structure->atoms[i] == atom)
            break;
    }

    if (i < 0)
        return CCPN_ERROR;

    /* just put last atom in this slot since order does not matter */
    structure->atoms[i] = structure->atoms[n];
    structure->natoms--;
    
    return CCPN_OK;
}

static int compare_z(Generic_ptr data1, Generic_ptr data2)
{
    Atom atom1 = (Generic_ptr) data1;
    Atom atom2 = (Generic_ptr) data2;
    float d = atom1->x[2] - atom2->x[2];
    if (d < 0)
        return -1;
    else if (d > 0)
        return 1;
    else
        return 0;
}

Atom nearest_atom_structure(Structure structure, float x, float y, float tol)
{
    int i, n = structure->natoms;
    Atom atom;
    Atom closest;
    float minDist = -1.0, dx, dy, dist;
    
    /* heap_sort((Generic_ptr *) structure->atoms, n, CCPN_FALSE, compare_z);*/

    for (i = 0; i < n; i++)
    {
        atom = structure->atoms[i];
	if (within_xy_tol_atom(atom, x, y, tol)) {  
          dx = atom->x[0] - x;
          dy = atom->x[1] - y;
          dist = (dx*dx)+(dy*dy);

          if ((minDist < 0) || (dist < minDist)) {
            minDist = dist;
            closest = atom;
          }
        }
                      
    }

    if (minDist >= 0)
      return closest;
    else
      return NULL;

}

CcpnStatus add_bond_structure(Structure structure, Bond bond)
{
    int nalloc = structure->nbonds_alloc, n = structure->nbonds;

    if (n == nalloc)
    {
        nalloc += ALLOC_INCR;
        REALLOC(structure->bonds, Bond, nalloc);
        structure->nbonds_alloc = nalloc;
    }

    structure->bonds[n] = bond;
    structure->nbonds++;

    if ((add_bond_atom(bond->atom1, bond) == CCPN_ERROR) ||
        (add_bond_atom(bond->atom2, bond) == CCPN_ERROR))
       return CCPN_ERROR;

    return CCPN_OK;
}

CcpnStatus remove_bond_structure(Structure structure, Bond bond)
{
    int i, n = structure->nbonds - 1;

    /* guess that later bonds most likely to be ones removed */
    /* so work from back to front */
    for (i = n; i >= 0; i--)
    {
        if (structure->bonds[i] == bond)
            break;
    }

    if (i < 0)
        return CCPN_ERROR;

    /* just put last bond in this slot since order does not matter */
    structure->bonds[i] = structure->bonds[n];
    structure->nbonds--;
    
    if ((remove_bond_atom(bond->atom1, bond) == CCPN_ERROR) ||
        (remove_bond_atom(bond->atom2, bond) == CCPN_ERROR))
       return CCPN_ERROR;

    return CCPN_OK;
}

Bond nearest_bond_structure(Structure structure, float x, float y, float tol)
{
    int i, imax = -1, n = structure->nbonds;
    float z, zmax = 0;
    Bond bond;

    for (i = 0; i < n; i++)
    {
        bond = structure->bonds[i];
	if (within_xy_tol_bond(bond, x, y, tol, &z))
	{
	    if ((imax == -1) || (z > zmax))
	    {
		imax = i;
		zmax = z;
	    }
	}
    }

    if (imax >= 0)
	return structure->bonds[imax];
    else
	return NULL;
}

static Bool is_clipped(Atom atom, float x0, float y0, float x1, float y1)
{
    float x = atom->x[0], y = atom->x[1], r = atom->size;

    if ((x+r) < x0)
        return CCPN_TRUE;

    if ((x-r) > x1)
        return CCPN_TRUE;

    if ((y+r) < y0)
        return CCPN_TRUE;

    if ((y-r) > y1)
        return CCPN_TRUE;

    return CCPN_FALSE;
}

void draw_structure(Structure structure, Drawing_funcs *drawing_funcs, Generic_ptr data)
{
    int i, j;
    float x0, y0, x1, y1, depth;
    Atom atom, other_atom;
    Bond bond;
    Bool clipped;

    if (!structure->natoms)
        return;

    heap_sort((Generic_ptr *) structure->atoms, structure->natoms, CCPN_TRUE, compare_z);

    (drawing_funcs->get_region)(data, &x0, &y0, &x1, &y1);

    depth = 0;
    for (i = 0; i < structure->natoms; i++)
    {
        atom = structure->atoms[i];
        depth += atom->x[2];
    }

    depth /= structure->natoms;

    for (i = 0; i < structure->natoms; i++)
    {
        if (!atom->is_drawn)
            continue;

        atom = structure->atoms[i];
        clipped = is_clipped(atom, x0, y0, x1, y1);

        (drawing_funcs->set_line_width)(data, DEFAULT_BOND_WIDTH);

        for (j = 0; j < atom->nbonds; j++)
        {
            bond = atom->bonds[j];
            other_atom = get_other_atom_bond(bond, atom);
            if (other_atom && other_atom->is_drawn
                                && compare_z(atom, other_atom) <= 0)
            {
                if (!clipped || !is_clipped(other_atom, x0, y0, x1, y1))
                    draw_bond(bond, depth, drawing_funcs, data);
            }
        }

        if (!clipped)
        {
            (drawing_funcs->set_line_width)(data, 0.0);
            draw_atom(atom, depth, drawing_funcs, data);
        }
    }
}

void translate_structure(Structure structure, float *delta)
{
    int i;

    for (i = 0; i < structure->natoms; i++)
        translate_atom(structure->atoms[i], delta);
}

void rotate_structure(Structure structure, float **matrix, float *origin)
{
    int i;

    for (i = 0; i < structure->natoms; i++)
        rotate_atom(structure->atoms[i], matrix, origin);
}

void zoom_structure(Structure structure, float scale)
{
    int i;

    for (i = 0; i < structure->natoms; i++)
        zoom_atom(structure->atoms[i], scale);
}

void move_to_center_structure(Structure structure)
{
    int i;
    float s, *x;
    float center[ATOM_NDIMS];

    ZERO_VECTOR(center, ATOM_NDIMS);
    for (i = 0; i < structure->natoms; i++)
    {
        x = structure->atoms[i]->x;
        ADD_VECTORS(center, center, x, ATOM_NDIMS);
    }

    s = -1.0 / structure->natoms;
    SCALE_VECTOR(center, center, s, ATOM_NDIMS);
    translate_structure(structure, center);
}

void focus_on_atom_structure(Structure structure, Atom atom)
{
    float *r[ATOM_NDIMS], r0[ATOM_NDIMS], r1[ATOM_NDIMS], r2[ATOM_NDIMS];
    float zaxis[] = { 0.0, 0.0, 1.0 };
    float origin[] = { 0.0, 0.0, 0.0 };

    r[0] = r0;
    r[1] = r1;
    r[2] = r2;

    rotation_matrix_vector_to_vector(r, atom->x, zaxis);
    rotate_structure(structure, r, origin);
}

