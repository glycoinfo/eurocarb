
"""
======================COPYRIGHT/LICENSE START==========================

BlockData.py: Utility code for CCPN code generation framework

Copyright (C) 2005  (CCPN Project)

=======================================================================

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License, or (at your option) any later version.
 
A copy of this license can be found in ../../../license/LGPL.license
 
This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
Lesser General Public License for more details.
 
You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA


======================COPYRIGHT/LICENSE END============================

for further information, please contact :

- CCPN website (http://www.ccpn.ac.uk/)

- email: ccpn@bioc.cam.ac.uk

=======================================================================

If you are using this software for academic purposes, we suggest
quoting the following references:

===========================REFERENCE START=============================
R. Fogh, J. Ionides, E. Ulrich, W. Boucher, W. Vranken, J.P. Linge, M.
Habeck, W. Rieping, T.N. Bhat, J. Westbrook, K. Henrick, G. Gilliland,
H. Berman, J. Thornton, M. Nilges, J. Markley and E. Laue (2002). The
CCPN project: An interim report on a data model for the NMR community
(Progress report). Nature Struct. Biol. 9, 416-418.

Rasmus H. Fogh, Wayne Boucher, Wim F. Vranken, Anne
Pajon, Tim J. Stevens, T.N. Bhat, John Westbrook, John M.C. Ionides and
Ernest D. Laue (2005). A framework for scientific data modeling and automated
software development. Bioinformatics 21, 1678-1684.

===========================REFERENCE END===============================

"""
import array

def cumulativeArray(array):

  ndim = len(array)
  cumul = ndim * [0]
  n = 1
  for i in range(len(array)):
    cumul[i] = n
    n = n * array[i]

  return (n, cumul)

def arrayOfIndex(index, cumul):

  ndim = len(cumul)
  array = ndim * [0]
  for i in range(ndim-1, -1, -1):
    c = cumul[i]
    array[i], index = divmod(index, c)
    # futureproofed ('/' behaviour to chagne
    #array[i] = index / c
    #index = index % c

  return tuple(array)

def indexOfArray(array, cumul):

  index = 0
  for i in range(len(array)):
    index += array[i] * cumul[i]

  return index

def determineBlockSizes(npoints, totalBlockSize = 4096):

  ndim = len(npoints)

  if (ndim < 1):
    return []
  elif (ndim == 1):
    return [ totalBlockSize ]

  n = 1 << ndim;

  if (totalBlockSize < n): # unlikely
    blockSizes = ndim * [1]
    n = 1
  else:
    blockSizes = ndim * [2]
 
  while (n < totalBlockSize):
    i_max = r_max = 0
    for i in range(ndim):
      r = float(npoints[i]) / blockSizes[i]
      if (r > r_max):
        i_max = i
        r_max = r
    blockSizes[i_max] *= 2
    n *= 2

  return blockSizes

def writeBlockData(file, data, npoints, blockSizes = None):

  ndim = len(npoints)

  (npts, cumulPoints) = cumulativeArray(npoints)

  if (npts != len(data)):
    raise Exception('npoints = %s so should have len(data) = %d but it is %d' \
                    % (npoints, npts, len(data)))

  if (not blockSizes):
    blockSizes = determineBlockSizes(npoints)

  if (len(blockSizes) != ndim):
    raise Exception('len(npoints) = %s but len(blockSizes) = %d' \
                    % (ndim, len(blockSizes)))

  (blkSize, cumulBlockSize) = cumulativeArray(blockSizes)

  nblocks = [ 1 + (npoints[i] - 1)/blockSizes[i] for i in range(ndim) ]
  (nblks, cumulBlocks) = cumulativeArray(nblocks)

  fp = open(file, 'wb')

  x = array.array('f')
  npts = nblks * blkSize
  for n in range(npts):
    blk = n / blkSize
    pnt = n % blkSize
    y = arrayOfIndex(blk, cumulBlocks)
    z = arrayOfIndex(pnt, cumulBlockSize)
    point = [ blockSizes[i]*y[i] + z[i] for i in range(ndim) ]
    for i in range(ndim):
      if (point[i] >= npoints[i]):
        d = 0
        break
    else:
      ind = indexOfArray(point, cumulPoints)
      d = data[ind]
    x.append(d)

  fp.write(x.tostring())
  fp.close()

if (__name__ == '__main__'):

  file = 'test.bin'
  npoints = [ 64, 32 ]
  n = npoints[0] * npoints[1]
  data = range(n)
  writeBlockData(file, data, npoints)
