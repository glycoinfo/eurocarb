
"""
======================COPYRIGHT/LICENSE START==========================

ExternalParams.py

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

import re, os

from memops.universal.Io import normalisePath
from memops.universal.Util import isBigEndian

from memops.general.Implementation import ApiError

from ccp.general.Io import getDataStoringFromFilepath

from memops.api import Implementation

isotope_re = re.compile('\d+(\D+)')

class ExternalParams:

  format = ''  # should be overridden in subclasses

  freqDimType = 'frequency'
  fidDimType = 'fid'
  sampledDimType = 'sampled'
  
  # how many directories to keep in file path for default DatUrl split
  keepDirectories = 1

  def __init__(self, externalParams = None):

    if externalParams:
      self.cloneParams(externalParams)
    else:
      self.makeNewParams()

  def __eq__(self, other):

    if not isinstance(other, ExternalParams):
      return False

    # do not want below because using this for Pipe header comparisons
    #if self.dataFile != other.dataFile:
    #  return False

    if self.ndim != other.ndim:
      return False

    if self.head != other.head:
      return False

    if self.blockHead != other.blockHead:
      return False

    if self.swap != other.swap:
      return False

    if self.integer != other.integer:
      return False

    if self.big_endian != other.big_endian:
      return False

    if self.npts != other.npts:
      return False

    if self.block != other.block:
      return False

    if self.sw != other.sw:
      return False

    if self.sf != other.sf:
      return False

    if self.refpt != other.refpt:
      return False

    if self.refppm != other.refppm:
      return False

    if self.nuc != other.nuc:
      return False

    return True

  def cloneParams(self, externalParams):

    for param in ('ndim', 'head', 'blockHead', 'dataFile', 'integer', 'big_endian'):
      setattr(self, param, getattr(externalParams, param))
    self.topParams = externalParams.topParams.copy()
    
    
    for param in ('block', 'npts', 'sw', 'sf', 'refppm', 'refpt', 'nuc', 'dimType', 'pointValues'):
      setattr(self, param, getattr(externalParams, param)[:])
    self.dimParams = [x.copy() for x in externalParams.dimParams]
    
    
  def makeNewParams(self):

    try:
      self.init()
      self.parseFile()
      self.checkValid()
    except ApiError, e:
      raise ApiError('%s: make sure you selected correct file for %s format' % (e.error_msg, self.format))
    """
    except Exception, e:
      raise ApiError('%s: make sure you selected correct file for %s format' % (e, self.format))
    """

  def __ne__(self, other):

    return not self.__eq__(other)

  def init(self):

    for attr in ('ndim', 'head', 'blockHead'):
      if (not hasattr(self, attr)):
        setattr(self, attr, 0)
    for attr in ('integer', 'swap'):
      if (not hasattr(self, attr)):
        setattr(self, attr, False)
    if (not hasattr(self, 'dataFile')):
      self.dataFile = ''
    if (not hasattr(self, 'big_endian')):
      self.big_endian = None
    
    # introduced for easy addition of extra parameters
    self.topParams = {}

  def initDims(self):
    
    ndim = self.ndim
    
    # dictionary of tags and default values
    parValues = {
     'npts':None,
     'block':None,
     'sw':1000.0,
     'sf':1000.0,
     'refppm':0.0,
     'refpt':1.0,
     'nuc':'1H',
     # below introduced to allow sampled data dims
     'dimType':self.freqDimType,
     'pointValues':None,
    }
    
    # initialise parameters
    for tag, value in parValues.items():
      setattr(self, tag, ndim*[value])
    
    # special case = dictionaries must be set one by one
    # introduced for easy addition of extra parameters
    self.dimParams = [{} for x in range(ndim)]

  # useful code for setting attributes after generic format parsing
  def setAttrs(self, aPars):

    self.ndim = aPars['ndim']
    self.initDims()

    # TBD: aPars code should do file --> dataFile
    self.dataFile = aPars.get('file', '')
    for key in ('head', 'blockHead', 'integer', 'swap', 'big_endian', 'little_endian', 'npts', 'block',
                'sw', 'sf', 'refpt', 'refppm', 'nuc', 'dimType', 'pointValues'):
      if aPars.has_key(key):
        setattr(self, key, aPars[key])

  # introduced for NmrPipe data, where pseudo data seems to be indicated
  # by nuc type ID, which gets changed to None
  def pseudoDataDim(self):

    dims = []
    for dim in range(self.ndim):
      
      if self.dimType[dim] != self.freqDimType or self.nuc[dim] is None:
        dims.append(dim)
    
    if len(dims) == 1:
      return dims[0]
    else:
      return None

  # introduced for NmrPipe data, where sampled data is determined quasi-manually
  def setSampledDim(self, dim, values):

    if dim < 0 or dim >= self.ndim:
      raise ApiError('dim = %d, must be between 0 and %d' % (dim, self.ndim-1))

    if len(values) != self.npts[dim]:
      raise ApiError('number of values = %d, must be %d' % (len(values), self.npts[dim]))

    self.dimType[dim] = self.sampledDimType
    self.pointValues[dim] = values
    self.nuc[dim] = None

  # introduced for NmrView data, where extraneous dimensions might be allowed
  # where npts = 1
  def removeTrivialDims(self):

    ndim = self.ndim
    for i in range(ndim-1, -1, -1):
      if self.npts[i] <= 1:
        del self.npts[i]
        del self.block[i]
        del self.refppm[i]
        del self.refpt[i]
        del self.sw[i]
        del self.sf[i]
        del self.nuc[i]
        del self.dimType[i]
        del self.pointValues[i]
        self.ndim = self.ndim - 1

  # introduced for NmrPipe data, where extraneous dimensions might be allowed
  # (although alternatively these are pseudoND experiments)
  def removeNullDims(self):

    ndim = self.ndim
    for i in range(ndim-1, -1, -1):
      if self.nuc[i] is None:
        del self.npts[i]
        del self.block[i]
        del self.refppm[i]
        del self.refpt[i]
        del self.sw[i]
        del self.sf[i]
        del self.nuc[i]
        del self.dimType[i]
        del self.pointValues[i]
        self.ndim = self.ndim - 1

  # introduced as less drastic alternative to removeNullDims
  # only remove dimensions where null nucleus and npts <= 1
  # otherwise set nucleus to standard one
  def fixNullDims(self):

    ndim = self.ndim
    for i in range(ndim-1, -1, -1):
      if self.nuc[i] is None:
        if self.npts[i] <= 1:
          del self.npts[i]
          del self.block[i]
          del self.refppm[i]
          del self.refpt[i]
          del self.sw[i]
          del self.sf[i]
          del self.nuc[i]
          del self.dimType[i]
          del self.pointValues[i]
          self.ndim = self.ndim - 1
        else:
          self.nuc[i] = self.standardNucleusName()
          self.dimType[i] = self.freqDimType

  def parseFile(self):

    raise ApiError('must implement parseFile in subclass of ExternalParams')

  def checkValid(self):

    # TBD
    pass

  def standardNucleusName(self, name = ''):

    name = name.upper()
    if (not name):
      name = '1H'
    elif ((name[0] == 'H') or (name == '1H')):
      name = '1H'
    elif ((name[0] == 'C') or (name == '13C')):
      name = '13C'
    elif ((name[0] == 'N') or (name == '15N')):
      name = '15N'
    elif ((name[0] == 'O') or (name == '17O')):
      name = '17O'
    elif ((name[0] == 'F') or (name == '19F')):
      name = '19F'
    elif ((name[0] == 'P') or (name == '31P')):
      name = '31P'
    else:
      name = '1H'

    return name

  def createDataSource(self, experiment, name, dataUrl=None):
                          
    # check that information compatible with experiment
    if experiment.numDim != self.ndim:
      raise ApiError('for now experiment numDim (%d) and dataSource numDim (%d) need to be the same' % (experiment.numDim, self.ndim))

    for n in range(self.ndim):
      # TBD: is this correct? (e.g. do fidDimType have nuc?)
      if self.dimType[n] != self.freqDimType:
        self.nuc[n] = None

    expDims = experiment.sortedExpDims()
    useExpDimRefs = [None] * self.ndim
    for n in range(self.ndim):
      expDim = expDims[n]

      if self.dimType[n] == self.freqDimType:
        if expDim.expDimRefs:
          if len(expDim.expDimRefs) == 1:
            #raise ApiError('for now can only have one experiment dim ref')
            expDimRef = expDim.findFirstExpDimRef()
            useExpDimRefs[n] = expDimRef
            if (self.nuc[n]):
              if expDimRef.isotopeCodes != (self.nuc[n],):
                print 'Warning: in dim %d experiment has isotopeCodes %s, spectrum has %s, must be the same' % (n+1, expDimRef.isotopeCodes, (self.nuc[n],))
              if (abs(expDimRef.sf-self.sf[n]) > 1.0e-2):
                print 'Warning: inconsistent sf in dim %d: %3.2f vs %3.2f' % (n+1, expDimRef.sf, self.sf[n])
            elif expDimRef.isotopeCodes:
              print 'Warning: in dim %d experiment has isotopeCodes %s, spectrum has no nuc set' % (n+1, expDimRef.isotopeCodes)
          else:
            # NBNB TBD new code - may not work for all cases
            if (self.nuc[n]):
              expDimRef = None
              expDimRefs = expDim.findAllExpDimRefs(isotopeCodes=(self.nuc[n],))
              for xdr in expDimRefs:
                if abs(xdr.sf-self.sf[n]) <= 1.0e-2:
                  expDimRef = xdr
                  break
                elif not xdr.sf:
                  expDimRef = xdr
                  
              if expDimRef is None:
                expDimRef = expDim.findFirstExpDimRef()
                print (
                 'Warning: in dim %d no ExpDimRef fits nucleus %s' % (n+1, self.nuc[n])
                 , expDimRef.sf, self.sf[n]
                )
            else:
              expDimRef = expDim.findFirstExpDimRef()
              print (
               'Warning: in dim %d spectrum has no nuc set' % (n+1)
              )
      
      else: # non-freq dim
        if expDim.expDimRefs:
          raise ApiError('non-freq dim has experiment dim ref')

    if self.dataFile:
      
      memopsRoot = experiment.root
    
      # create DataStore
      if dataUrl:
        preferDataUrls = [dataUrl]
      else:
        oldDataStores = (x.dataStore for x in experiment.dataSources)
        preferDataUrls = set(x.dataUrl for x in oldDataStores if x)
      
      newDataUrl, filePath = getDataStoringFromFilepath(memopsRoot, 
                            self.dataFile, preferDataUrls=preferDataUrls,
                            keepDirectories=self.keepDirectories)
      
      if dataUrl is not None and newDataUrl is not dataUrl:
        raise ApiError("DataUrl with path %s not valid for file %s" 
                       % (dataUrl.url.path, self.dataFile) )

      dataLocationStore = newDataUrl.dataLocationStore
    
      if self.big_endian is not None:
        bigEndian = self.big_endian
      elif self.swap:
        bigEndian = not isBigEndian()
      else:
        bigEndian = isBigEndian()

      if self.integer:
        numberType = 'int'
      else:
        numberType = 'float'
      
      isComplex = [self.dimParams[ii].get('isComplex') 
                   for ii in range(self.ndim)]
      if None in isComplex:
        isComplex = self.ndim * [False]
    
      params = {
       'dataUrl':newDataUrl, 'path':filePath, 'numPoints':self.npts,
       'isBigEndian':bigEndian, 'numberType':numberType, 'isComplex':isComplex,
       'headerSize': self.head
      }
 
      dataStoreType = self.topParams.get('dataStoreType')
      if dataStoreType == 'factorised':
        dataStore = dataLocationStore.newShapeMatrix(
                        numRecords=self.topParams['numRecords'], **params)
        
        # NBNB TBD assumes there are no 2D shapes. To be changed!
        for dim in range(len(self.dimParams)):
          dataStore.newComponentShape(dims = (dim,))
        
      else:
        dataStore = dataLocationStore.newBlockedBinaryMatrix(
                        blockSizes=self.block, **params)

        # TBD: TEMP: use appData until blockHeaderSize is in data model
        if self.blockHead and hasattr(dataStore.root, 'application'):
          dataStore.root.application.setValue(dataStore, 'blockHeaderSize', self.blockHead)

    else:
      dataStore = None

    for n in range(self.ndim):
      expDim = expDims[n]
      if not expDim.expDimRefs and self.dimType[n] == self.freqDimType:
        if self.nuc[n]:
          expDim.newExpDimRef(sf=self.sf[n], unit='ppm', isotopeCodes=[self.nuc[n]])
        else:
          expDim.newExpDimRef(sf=self.sf[n], unit='None')
    
    dataSource = experiment.newDataSource(name=name, numDim=self.ndim,
                                          dataStore=dataStore, 
                                          dataType='processed')

    for n in range(self.ndim):
      sw = self.sw[n]
      npts = self.npts[n]
      expDim = expDims[n]
      if self.dimType[n] == self.freqDimType:
        freqDataDim = dataSource.newFreqDataDim(dim=n+1, numPoints=npts, isComplex=False, 
                              numPointsOrig=npts, valuePerPoint=sw/float(npts), expDim=expDim)
        freqDataDim.newDataDimRef(refPoint=self.refpt[n],
                              refValue=self.refppm[n],
                              expDimRef=expDim.findFirstExpDimRef())
      elif self.dimType[n] == self.fidDimType:
        raise ApiError('fidDimType not supported yet')
      elif self.dimType[n] == self.sampledDimType:
        # TBD: set conditionVaried somehow
        dataSource.newSampledDataDim(dim=n+1, numPoints=npts, isComplex=False, 
                              pointValues=self.pointValues[n], expDim=expDim)
      else:
        raise ApiError('%s dimType not supported yet' % self.dimType[n])

    return dataSource

