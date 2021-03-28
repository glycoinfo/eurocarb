from ccp.general.Constants import code1LetterToCcpCodeDict

from ccp.format.bruker.generalIO import BrukerGenericFile
from ccp.format.bruker.Constants import stdExpNameDict, pulProgFile

def getStdExpNamesByLength():

  """
  This gets the information about 'standard' Bruker experiment names when part
  of the pulse program name, and orders them by length.
  """

  stdExpNames = stdExpNameDict.keys()
  
  byLen = {}
  for stdExpName in stdExpNames:
    strLen = len(stdExpName)
    if not byLen.has_key(strLen):
      byLen[strLen] = []
    byLen[strLen].append(stdExpName)
    
  strLengths = byLen.keys()
  strLengths.sort()
  strLengths.reverse()
  
  stdExpNamesByLen = []
  
  for strLen in strLengths:
    byLen[strLen].sort()
    stdExpNamesByLen.extend(byLen[strLen])
  
  return stdExpNamesByLen
    
class PulProgInfo(BrukerGenericFile):

  """
  This reads the Bruker Pulprog.info file and extracts the Bruker codes that define
  aspects of a particular experiment (from the experiment name string).
  """

  def getInfo(self):
    
    #
    # These are added as default...
    #
    
    brukerCodeDict = {'2d': '2D experiment', '3d': '3D experiment', '4d': '4D experiment'}
    
    #
    # Start reading...
    #
    
    ppin = open(self.name)
    lines = ppin.readlines()
    ppin.close()
    
    for line in lines:

      if self.patt['emptyline'].search(line) or self.patt[self.format + 'SemiColonComment'].search(line):
        continue
      
      line = line.strip()
      
      brukerCode = None
      for spacing in ("     ","    "):
        if line.count(spacing):
          (brukerCode,info) = line.split(spacing)
          break

      if brukerCode:
        brukerCodeDict[brukerCode] = info

    return brukerCodeDict

  
class ParseBrukerExpNames:

  def __init__(self):
  
    self.stdExpNameDict = stdExpNameDict
    self.stdExpNamesByLen = getStdExpNamesByLength()
    
    ppi = PulProgInfo(pulProgFile)
    self.brukerCodeDict= ppi.getInfo()
    self.brukerCodes = self.brukerCodeDict.keys()
    self.brukerCodes.sort()
    
    for brukerCode in self.brukerCodes[:]:
      if len(brukerCode) == 3:
        self.brukerCodes.pop(self.brukerCodes.index(brukerCode))
        self.brukerCodes.insert(0,brukerCode)
    

  def loopBrukerExpNames(self,fileName):
  
    fin = open(fileName)
    lines = fin.readlines()
    fin.close()
    
    for line in lines:
    
      fileName = line.strip()
      
      if fileName[-5:] == '.info':
        continue
      elif fileName in ('README',):
        continue
       
      self.disectBrukerExpName(fileName)

  def disectBrukerExpName(self,brukerExpName):
  
    getAminoAcids = False

    print "%s:" % brukerExpName
    print

    #
    # First get main components, by largest string first
    #
    
    hasMainComponent = False
    for stdExpName in self.stdExpNamesByLen:

      if stdExpName[0] == '^':
        funcName = 'startswith'
        stdExpNameSearch = stdExpName[1:]
      else:
        funcName = 'count'
        stdExpNameSearch = stdExpName

      if getattr(brukerExpName,funcName)(stdExpNameSearch):
        print "  Main component: %s (%s)" % (stdExpNameSearch,self.stdExpNameDict[stdExpName])
        brukerExpName = brukerExpName.replace(stdExpNameSearch,'*' * len(stdExpNameSearch))
        hasMainComponent = True
        
        if stdExpName in ('music',):
          getAminoAcids = True
    
    if not hasMainComponent:
      print "  MAIN COMPONENT MISSING!"
          
    #
    # Get amino acids, if necessary. Assume these are between _, first _xxx_ block is amino acid one.
    #
    
    if getAminoAcids:
      nameComps = brukerExpName.split("_")
      aaNameComp = nameComps[1].upper()

      for code3Letter in code1LetterToCcpCodeDict['protein'].values() + ['Trpe']:
        if aaNameComp.count(code3Letter.upper()):
          print "    Bruker info: targeted at %s amino acid." % code3Letter
          aaNameComp = aaNameComp.replace(code3Letter.upper(),'*' * len(code3Letter))

      for code1Letter in code1LetterToCcpCodeDict['protein'].keys():
        if aaNameComp.count(code1Letter.upper()):
          print "    Bruker info: targeted at %s amino acid." % code1LetterToCcpCodeDict['protein'][code1Letter]
          aaNameComp = aaNameComp.replace(code1Letter.upper(),'*')

      brukerExpName = brukerExpName.replace(nameComps[1],aaNameComp.lower())

    #
    # Remove _
    #
    
    while brukerExpName.count("_"):
      brukerExpName = brukerExpName.replace("_","*")

    #
    # Then get Bruker components (two to three letter code). Do this from back of string.
    #

    # TODO: READ FROM BACK, FIRST THROW AWAY NUMBERS (BUT CHECK IF NOT ONE OF THE MEANINGFUL ONES)
    # Try first by throwing numbers away, see if works, then try using numbers?
    #
    # Otherwise do some special casing here - rl1, rl2 end on ineptrl1, ineptrl2
    
    for strInd in range(len(brukerExpName) - 1,1,-1):
      if brukerExpName[strInd] != '*' and brukerExpName[strInd - 1] != '*':
        for brukerCode in self.brukerCodes:
          if brukerExpName[strInd-len(brukerCode)+1:strInd+1].count(brukerCode):
            rIndex = brukerExpName.rfind(brukerCode)
            brukerExpName = brukerExpName[:rIndex] + brukerExpName[rIndex:].replace(brukerCode,'*' * len(brukerCode))
            print "    Bruker info: %s (%s)" % (brukerCode,self.brukerCodeDict[brukerCode])
    
    #
    # Remove .1, .2 type stuff
    #
    
    for i in range(1,10):
      for prefix in ('.',''):
        endCode = '%s%d' % (prefix,i)
        if brukerExpName.endswith(endCode):
          brukerExpName = brukerExpName.replace(endCode, '*' * len(endCode))
          
    #
    # Remove numbers left in name...
    #
    
    for i in range(1,10):
      if brukerExpName.count("*%d*" % i):
        brukerExpName = brukerExpName.replace("*%d*" % i,"***")
     
    #
    # If 'i' - means intra. Check if left
    #
   
    isIntra = False 
    if brukerExpName.startswith("i*"):
      brukerExpName = brukerExpName.replace('i*','**')
      isIntra = True
    elif brukerExpName.count("*i*"):
      brukerExpName = brukerExpName.replace('*i*','***')
      isIntra = True
   
    if isIntra:
      print "    Bruker info: intra experiment."
            
    #
    # Print out name if anything not recognized...
    #
    
    if len(brukerExpName) != brukerExpName.count('*'):
      print
      print "  Remaining unparsed name: %s" % brukerExpName

    print 
