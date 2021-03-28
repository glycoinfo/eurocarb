
"""
======================COPYRIGHT/LICENSE START==========================

AzaraParams.py

Copyright (C) 2008 Wayne Boucher and Tim Stevens (University of Cambridge)

=======================================================================

This file contains reserved and/or proprietary information
belonging to the author and/or organisation holding the copyright.
It may not be used, distributed, modified, transmitted, stored,
or in any way accessed, except by members or employees of the CCPN,
and by these people only until 31 December 2008 and in accordance with
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

"""
import os

from memops.universal.Io import normalisePath, splitPath, joinPath
from memops.general.Implementation import ApiError

from ccp.format.spectra.params.ExternalParams import ExternalParams

class AzaraParams(ExternalParams):

  format = 'Azara'

  def __init__(self, parFile, externalParams = None):

    self.parFile = parFile
    self.dim = -1

    ExternalParams.__init__(self, externalParams)

  # ExternalParams requires this to be defined
  def parseFile(self):

    try:
      fp = open(self.parFile)
    except IOError, e:
      raise ApiError(str(e))

    lines = fp.readlines()

    fp.close()

    lineNo = 0
    for line in lines:

      lineNo = lineNo + 1
      n = line.find('!')
      if (n >= 0):
        line = line[:n]

      line = line.strip()

      if (line):

        fields = line.split()
        try:
          self.parseFields(fields)
        except ApiError, e:
          raise ApiError('line number %d: %s' % (lineNo, e.error_msg))
        except Exception, e:
          raise ApiError('line number %d: %s' % (lineNo, e))

  keys1 = ('ndim', 'file', 'head', 'dim', 'npts', 'block', 'sw', 'sf', 'refppm', 'refpt', 'nuc', 'params')
  keys2 = ('int', 'swap', 'big_endian', 'little_endian')
  keys3 = ()  # used to have 'params' in this

  def parseFields(self, fields):

    key = fields[0]

    if (not (key in self.keys1 or key in self.keys2 or key in self.keys3)):
      raise ApiError('unknown keyword (first few characters = "%s") in par file "%s"' % (key[:10], self.parFile))

    if (key in self.keys3):
      return

    if (key in self.keys1):
      if (key != 'params' and len(fields) != 2):
        raise ApiError('for key "%s", number of args = %d, should be 1' % (key, len(fields)-1))
    elif (key in self.keys2):
      if (len(fields) != 1):
        raise ApiError('for key "%s", number of args = %d, should be 0' % (key, len(fields)-1))

    if (key in self.keys2):
      if (key == 'int'):
        self.integer = True
      elif (key == 'little_endian'):
        self.big_endian = False
      else:
        setattr(self, key, True)
      return

    if len(fields) == 2:
      value = fields[1]
    else:
      value = fields[1:]

    if (key == 'ndim'):
      if (self.ndim != 0):
        raise ApiError('repeated "ndim"')
      try:
        self.ndim = int(value)
      except:
        raise ApiError('"ndim" value not an int')
      if (self.ndim <= 0):
        raise ApiError('ndim <= 0')
      self.initDims()
    elif (key == 'file'):
      if (self.dataFile):
        raise ApiError('repeated "file"')
      path = normalisePath(value)
      if not os.path.isabs(path):
        directory = os.path.dirname(self.parFile)
        if not directory:
          directory = os.getcwd()
        path = joinPath(directory, path)
      self.dataFile = path
    elif (key == 'head'):
      if (self.head != 0):
        raise ApiError('repeated "head"')
      try:
        self.head = 4*int(value)
      except:
        raise ApiError('"head" value not an int')
      if (self.head < 0):
        raise ApiError('head < 0')
    elif (key == 'dim'):
      if (self.ndim <= 0):
        raise ApiError('"dim" must be after "ndim"')
      dim = self.dim
      try:
        self.dim = int(value) - 1
      except:
        raise ApiError('"dim" value not an int')
      if (self.dim == dim):
        raise ApiError('repeated dim %d' % (dim+1))
      if (self.dim < 0):
        raise ApiError('dim = %d <= 0' % (self.dim+1))
      if (self.dim >= self.ndim):
        raise ApiError('dim = %d > ndim = %d' % (self.dim+1, self.ndim))
    else:
      if (self.dim < 0):
        raise ApiError('keyword "%s" must be after "dim"' % key)
      dim = self.dim
      # can no longer do below because initDims() sets up default values
      #assert getattr(self, key)[dim] is None, '%s repeated for dim %d' % (key, dim+1)
      if (key  == 'npts'):
        try:
          v = int(value)
        except:
          raise ApiError('"npts" value not an int')
        if (v <= 0):
          raise ApiError('npts <= 0 for dim %d' % (key, dim+1))
        self.npts[dim] = v
      elif (key  == 'block'):
        try:
          v = int(value)
        except:
          raise ApiError('"block" value not an int')
        if (v <= 0):
          raise ApiError('block <= 0 for dim %d' % (key, dim+1))
        self.block[dim] = v
      elif (key == 'nuc'):
        self.nuc[dim] = self.standardNucleusName(value)
      elif (key in ('sw', 'sf', 'refppm', 'refpt')):
        try:
          v = float(value)
        except:
          raise ApiError('"%s" value not a float' % key)
        if (key == 'sw'):
          self.sw[dim] = v
        elif (key == 'sf'):
          self.sf[dim] = v
        elif (key == 'refppm'):
          self.refppm[dim] = v
        elif (key == 'refpt'):
          self.refpt[dim] = v
      elif (key == 'params'):
        self.dimType[dim] = self.sampledDimType
        try:
          self.pointValues[dim] = [float(v) for v in value]
        except:
          raise ApiError('%s input %s not valid input to float' % (key, value))

  def writeParFile(self, parFile = None):

    if parFile is None:
      parFile = self.parFile

    fp = open(parFile, 'w')

    fp.write('ndim %d\n' % self.ndim)
    fp.write('file %s\n' % self.file)

    if self.integer:
      fp.write('int\n')

    if self.big_endian:
      fp.write('big_endian\n')
    else:
      fp.write('little_endian\n')

    for i in range(self.ndim):
      fp.write('\n')
      fp.write('dim %d\n' % (i+1))
      fp.write('npts %d\n' % self.npts[i])
      fp.write('block %d\n' % self.block[i])
      fp.write('sw %4.3f\n' % self.sw[i])
      fp.write('sf %4.3f\n' % self.sf[i])
      fp.write('refppm %5.4f\n' % self.refppm[i])
      fp.write('refpt %5.4f\n' % self.refpt[i])
      fp.write('nuc %s\n' % self.nuc[i])
      if self.pointValues[i]:
        fp.write('params')
        for value in self.pointValues[i]:
          fp.write(' %5.4f' % value)
        fp.write('\n')

    fp.close()

if (__name__ == '__main__'):

  import sys
  if (len(sys.argv) != 2):
    print 'Error: required argument: <parFile>'
    sys.exit(1)

  parFile = sys.argv[1]
  params = AzaraParams(parFile)

  from memops.api.Implementation import MemopsRoot, Url
  from ccp.util.Spectrum import createExperiment

  r = MemopsRoot()
  l = r.newDataLocationStore(name='testDLS')
  d = l.newDataUrl(name='testDataUrl', url=Url(path='/Users/wb104/edl387'))
  n = r.newNmrProject(name='testNmrProject')
  e = createExperiment(n, name='testExpt', numDim=params.ndim, sf=params.sf, isotopeCodes=params.nuc)
  s = params.createDataSource(e, name='testSpectrum', dataUrl=d)

